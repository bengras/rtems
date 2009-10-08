/**
 * @file
 *
 * @ingroup rtems_ramdisk
 *
 * RAM disk block device.
 */

/*
 * Copyright (C) 2001 OKTET Ltd., St.-Petersburg, Russia
 * Author: Victor V. Vengerov <vvv@oktet.ru>
 *
 * @(#) $Id$
 */

#if HAVE_CONFIG_H
#include "config.h"
#endif

#include <rtems.h>
#include <rtems/libio.h>
#include <errno.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <inttypes.h>

#include <rtems/blkdev.h>
#include <rtems/diskdevs.h>
#include <rtems/ramdisk.h>

/**
 * Control tracing. It can be compiled out of the code for small
 * footprint targets. Leave in by default.
 */
#if !defined (RTEMS_RAMDISK_TRACE)
#define RTEMS_RAMDISK_TRACE 0
#endif

#define RAMDISK_DEVICE_BASE_NAME "/dev/rd"

/* Internal RAM disk descriptor */
struct ramdisk {
  uint32_t block_size; /* RAM disk block size, the media size */
  rtems_blkdev_bnum block_num; /* Number of blocks on this RAM disk */
  void *area; /* RAM disk memory area */
  bool initialized; /* RAM disk is initialized */
  bool malloced; /* != 0, if memory allocated by malloc for this RAM disk */
#if RTEMS_RAMDISK_TRACE
  int info_level; /* Trace level */
#endif
};

static struct ramdisk *ramdisk;
static uint32_t nramdisks;

#if RTEMS_RAMDISK_TRACE
/**
 * Print a message to the ramdisk output and flush it.
 *
 * @param rd The ramdisk control structure.
 * @param format The format string. See printf for details.
 * @param ... The arguments for the format text.
 * @return int The number of bytes written to the output.
 */
static int
rtems_ramdisk_printf (struct ramdisk *rd, const char *format, ...)
{
  int ret = 0;
  if (rd->info_level >= 1)
  {
    va_list args;
    va_start (args, format);
    fprintf (stdout, "ramdisk:");
    ret =  vfprintf (stdout, format, args);
    fprintf (stdout, "\n");
    fflush (stdout);
  }
  return ret;
}
#endif

/* ramdisk_read --
 *     RAM disk READ request handler. This primitive copies data from RAM
 *     disk to supplied buffer and invoke the callout function to inform
 *     upper layer that reading is completed.
 *
 * PARAMETERS:
 *     req - pointer to the READ block device request info
 *
 * RETURNS:
 *     ioctl return value
 */
static int
ramdisk_read(struct ramdisk *rd, rtems_blkdev_request *req)
{
    uint8_t *from = rd->area;
    uint32_t   i;
    rtems_blkdev_sg_buffer *sg;

#if RTEMS_RAMDISK_TRACE
    rtems_ramdisk_printf (rd, "ramdisk read: start=%d, blocks=%d",
                          req->bufs[0].block, req->bufnum);
#endif

    for (i = 0, sg = req->bufs; i < req->bufnum; i++, sg++)
    {
#if RTEMS_RAMDISK_TRACE
        rtems_ramdisk_printf (rd, "ramdisk read: buf=%d block=%d length=%d off=%d addr=%p",
                              i, sg->block, sg->length, sg->block * rd->block_size,
                              from + (sg->block * rd->block_size));
#endif
        memcpy(sg->buffer, from + (sg->block * rd->block_size), sg->length);
    }
    req->req_done(req->done_arg, RTEMS_SUCCESSFUL, 0);
    return 0;
}

/* ramdisk_write --
 *     RAM disk WRITE request handler. This primitive copies data from
 *     supplied buffer to RAM disk and invoke the callout function to inform
 *     upper layer that writing is completed.
 *
 * PARAMETERS:
 *     req - pointer to the WRITE block device request info
 *
 * RETURNS:
 *     ioctl return value
 */
static int
ramdisk_write(struct ramdisk *rd, rtems_blkdev_request *req)
{
    uint8_t *to = rd->area;
    uint32_t   i;
    rtems_blkdev_sg_buffer *sg;

#if RTEMS_RAMDISK_TRACE
    rtems_ramdisk_printf (rd, "ramdisk write: start=%d, blocks=%d",
                          req->bufs[0].block, req->bufnum);
#endif
    for (i = 0, sg = req->bufs; i < req->bufnum; i++, sg++)
    {
#if RTEMS_RAMDISK_TRACE
        rtems_ramdisk_printf (rd, "ramdisk write: buf=%d block=%d length=%d off=%d addr=%p",
                              i, sg->block, sg->length, sg->block * rd->block_size,
                              to + (sg->block * rd->block_size));
#endif
        memcpy(to + (sg->block * rd->block_size), sg->buffer, sg->length);
    }
    req->req_done(req->done_arg, RTEMS_SUCCESSFUL, 0);
    return 0;
}

/* ramdisk_ioctl --
 *     IOCTL handler for RAM disk device.
 *
 * PARAMETERS:
 *      dev  - device number (major, minor number)
 *      req  - IOCTL request code
 *      argp - IOCTL argument
 *
 * RETURNS:
 *     IOCTL return value
 */
static int
ramdisk_ioctl(dev_t dev, uint32_t req, void *argp)
{
    switch (req)
    {
        case RTEMS_BLKIO_REQUEST:
        {
            rtems_device_minor_number minor;
            rtems_blkdev_request *r = argp;
            struct ramdisk *rd;

            minor = rtems_filesystem_dev_minor_t(dev);
            if ((minor >= nramdisks) || !ramdisk[minor].initialized)
            {
                errno = ENODEV;
                return -1;
            }

            rd = ramdisk + minor;

            switch (r->req)
            {
                case RTEMS_BLKDEV_REQ_READ:
                    return ramdisk_read(rd, r);

                case RTEMS_BLKDEV_REQ_WRITE:
                    return ramdisk_write(rd, r);

                default:
                    errno = EINVAL;
                    return -1;
            }
            break;
        }
  
        default:
            return rtems_blkdev_ioctl (dev, req, argp);
            break;
    }

    errno = EINVAL;
    return -1;
}

/* ramdisk_initialize --
 *     RAM disk device driver initialization. Run through RAM disk
 *     configuration information and configure appropriate RAM disks.
 *
 * PARAMETERS:
 *     major - RAM disk major device number
 *     minor - minor device number, not applicable
 *     arg   - initialization argument, not applicable
 *
 * RETURNS:
 *     none
 */
rtems_device_driver
ramdisk_initialize(
    rtems_device_major_number major,
    rtems_device_minor_number minor __attribute__((unused)),
    void *arg __attribute__((unused)))
{
    rtems_device_minor_number i;
    rtems_ramdisk_config *c = rtems_ramdisk_configuration;
    struct ramdisk *r;
    rtems_status_code rc;

    rc = rtems_disk_io_initialize();
    if (rc != RTEMS_SUCCESSFUL)
        return rc;

    r = ramdisk = calloc(rtems_ramdisk_configuration_size,
                         sizeof(struct ramdisk));
#if RTEMS_RAMDISK_TRACE
    r->info_level = 1;
#endif   
    for (i = 0; i < rtems_ramdisk_configuration_size; i++, c++, r++)
    {
        dev_t dev = rtems_filesystem_make_dev_t(major, i);
        char name [] = RAMDISK_DEVICE_BASE_NAME "a";
        name [sizeof(RAMDISK_DEVICE_BASE_NAME)] += i;
        r->block_size = c->block_size;
        r->block_num = c->block_num;
        if (c->location == NULL)
        {
            r->malloced = true;
            r->area = malloc(r->block_size * r->block_num);
            if (r->area == NULL) /* No enough memory for this disk */
            {
                r->initialized = false;
                continue;
            }
            else
            {
                r->initialized = true;
            }
        }
        else
        {
            r->malloced = false;
            r->initialized = true;
            r->area = c->location;
        }
        rc = rtems_disk_create_phys(dev, c->block_size, c->block_num,
                                    ramdisk_ioctl, name);
        if (rc != RTEMS_SUCCESSFUL)
        {
            if (r->malloced)
            {
                free(r->area);
            }
            r->initialized = false;
        }
    }
    nramdisks = rtems_ramdisk_configuration_size;
    return RTEMS_SUCCESSFUL;
}

/*
 *  COPYRIGHT (c) 1989-2012.
 *  On-Line Applications Research Corporation (OAR).
 *
 *  The license and distribution terms for this file may be
 *  found in the file LICENSE in this distribution or at
 *  http://www.rtems.org/license/LICENSE.
 */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include <rtems/test.h>
#include <bsp/gpio.h> /* Calls the BSP gpio library */
#include <rtems/status-checks.h>
#include <stdio.h>
#include <stdlib.h>

/* forward declarations to avoid warnings */
rtems_task Init(rtems_task_argument argument);

const char rtems_test_name[] = "Gpio Test";

rtems_task Init(
  rtems_task_argument ignored
)
{
  rtems_test_begin();
  printf("Starting Gpio Testing\n");
    /* Initializes the GPIO API */
  gpio_initialize();

  gpio_select_pin(USR0, DIGITAL_OUTPUT);
  gpio_select_pin(USR1, DIGITAL_OUTPUT);
  gpio_select_pin(USR2, DIGITAL_OUTPUT);
  gpio_select_pin(USR3, DIGITAL_OUTPUT);
  printf("Clearing all USR LEDs \n");
  gpio_clear(USR0);
  gpio_clear(USR1);
  gpio_clear(USR2);
  gpio_clear(USR3); 

  /*Generation of USR LED pattern*/
  gpio_set(USR0);
  arm_delay(0.5);
  gpio_set(USR1);
  arm_delay(0.5);
  gpio_set(USR2);
  arm_delay(0.5);
  gpio_set(USR3);
  arm_delay(0.5);
  gpio_clear(USR3);
  arm_delay(1);
  gpio_clear(USR2);
  arm_delay(1);
  gpio_clear(USR1);
  arm_delay(1);
  gpio_clear(USR0);
  arm_delay(1);

  printf("Gpio Test Completed\n");
  rtems_test_end();
  exit( 0 );
}

/* NOTICE: the clock driver is enabled */
#define CONFIGURE_APPLICATION_NEEDS_CLOCK_DRIVER
 
#define CONFIGURE_APPLICATION_NEEDS_CONSOLE_DRIVER
 
#define CONFIGURE_MAXIMUM_TASKS            1
#define CONFIGURE_USE_DEVFS_AS_BASE_FILESYSTEM
 
#define CONFIGURE_RTEMS_INIT_TASKS_TABLE
 
#define CONFIGURE_INITIAL_EXTENSIONS RTEMS_TEST_INITIAL_EXTENSION
 
#define CONFIGURE_INIT
#include <rtems/confdefs.h>
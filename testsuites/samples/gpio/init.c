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

#define Gpio_clear(arg) { printf("%s off\n", #arg); gpio_clear(arg); }
#define Gpio_set(arg) { printf("%s on\n", #arg); gpio_set(arg); }
#define Gpio_select_pin(pin, how) { printf("configure %s to %s\n", #pin, #how); gpio_select_pin(pin, how); }

#include <rtems/test.h>
#include <bsp/gpio.h> /* Calls the BSP gpio library */
#include <rtems/status-checks.h>
#include <stdio.h>
#include <stdlib.h>

static void delay_sec(int sec)
{
 rtems_task_wake_after(sec*rtems_clock_get_ticks_per_second());
}
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

  Gpio_select_pin(USR0, DIGITAL_OUTPUT);
  Gpio_select_pin(USR1, DIGITAL_OUTPUT);
  Gpio_select_pin(USR2, DIGITAL_OUTPUT);
  Gpio_select_pin(USR3, DIGITAL_OUTPUT);

  printf("Clearing all USR LEDs \n");
  Gpio_clear(USR0);
  Gpio_clear(USR1);
  Gpio_clear(USR2);
  Gpio_clear(USR3); 

  /*Generation of USR LED pattern*/
  Gpio_set(USR0);
  delay_sec(1);
  Gpio_set(USR1);
  delay_sec(1);
  Gpio_set(USR2);
  delay_sec(1);
  Gpio_set(USR3);
  delay_sec(1);
  Gpio_clear(USR3);
  delay_sec(1);
  Gpio_clear(USR2);
  delay_sec(1);
  Gpio_clear(USR1);
  delay_sec(1);
  Gpio_clear(USR0);
  delay_sec(1);

  Gpio_select_pin(P8_13,DIGITAL_OUTPUT);
  Gpio_select_pin(P8_09,DIGITAL_OUTPUT);
  Gpio_select_pin(P9_30,DIGITAL_OUTPUT);

  Gpio_set(P8_13);
  delay_sec(1);
  Gpio_set(P8_09);
  delay_sec(1);
  Gpio_set(P9_30);
  delay_sec(1);
  Gpio_clear(P8_13);
  delay_sec(1);
  Gpio_clear(P8_09);
  delay_sec(2);
  Gpio_clear(P9_30);
  delay_sec(1); 
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

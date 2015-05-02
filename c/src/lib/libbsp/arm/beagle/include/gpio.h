/**
 * @file
 *
 * @ingroup arm_beagle
 *
 * @brief Global BSP definitions.
 */

/*
 * Copyright (c) 2015 Ketul Shah <ketulshah1993 at gmail.com>

 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution or at
 * http://www.rtems.org/license/LICENSE.
 */

#ifndef LIBBSP_ARM_BEAGLE_GPIO_H
#define LIBBSP_ARM_BEAGLE_GPIO_H
 
#include <rtems.h>
#include <assert.h>
#include <libcpu/am335x.h>
 
#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */
 
/**
 * @brief The set of possible functions a pin can have.
 *
 * Enumerated type to define a pin function.
 */
typedef enum
{
 DIGITAL_OUTPUT,
 NOT_USED
} bbb_pin;

typedef enum
{
 PULL_UP,
 PULL_DOWN,
 NO_PULL_RESISTOR
} bbb_gpio_input_mode;

typedef struct
{ 
  /* The pin type */
 bbb_pin pin_type;

  /* GPIO input pin mode. */
 bbb_gpio_input_mode input_mode;

} bbb_gpio_pin;

typedef struct {
 char *gpio_name;	/* Readable GPIO pin name */
 unsigned int gpio_bank_pin;  /* GPIO bank pin number as per Manual of AM335X */
 unsigned int gpio_bank; /* GPIO bank determines register */
 unsigned int gpio_id;  /* unique pin number for every gpio*/	
 } GPIO_PIN;


#define USR0  	((GPIO_PIN){  "GPIO1_21", 21, AM335X_GPIO1, 1 })
#define USR1  	((GPIO_PIN){  "GPIO1_22", 22, AM335X_GPIO1, 2 })
#define USR2  	((GPIO_PIN){  "GPIO1_23", 23, AM335X_GPIO1, 3 })
#define USR3  	((GPIO_PIN){  "GPIO1_24", 24, AM335X_GPIO1, 4 })
#define P8_13   ((GPIO_PIN){  "GPIO0_23", 23, AM335X_GPIO0, 5 })
#define P8_09   ((GPIO_PIN){  "GPIO2_05", 5 , AM335X_GPIO2, 6 })
#define P9_30   ((GPIO_PIN){  "GPIO3_16", 16, AM335X_GPIO3, 7 })

/**
 * @brief Initializes the GPIO API.
 */
extern void gpio_initialize(void);
/**
 * @brief Selects a GPIO pin for a specific function.
 */
extern int gpio_select_pin(GPIO_PIN pin, bbb_pin type);
/**
 * @brief Turns on the given pin.
 */
extern int gpio_set(GPIO_PIN pin);
/**
 * @brief Turns off the given pin.
 */
extern int gpio_clear(GPIO_PIN pin);

#endif /* LIBBSP_ARM_BEAGLE_GPIO_H */

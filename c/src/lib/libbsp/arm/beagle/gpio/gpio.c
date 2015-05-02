/**
 * @file
 *
 * @ingroup arm_beagle
 *
 * @brief Global BSP definitions.
 */
 
/**
 * Copyright (c) 2015 Ketul Shah <ketulshah1993 at gmail.com>

 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution or at
 * http://www.rtems.org/license/LICENSE.
 */
 
#include <libcpu/am335x.h>
#include <rtems.h>
#include <bsp/irq.h>
#include <bsp/gpio.h>
#include <bsp.h>
#include <stdlib.h>
#include <stdint.h>
#define GPIO_PIN_COUNT 95

static bool is_initialized = false;

static bbb_gpio_pin gpio_pin[GPIO_PIN_COUNT];

static uint32_t inline get_pin_mask(GPIO_PIN pin)
{
  return (1UL << pin.gpio_bank_pin);
}

static void inline reg_update_set(GPIO_PIN pin,uint32_t reg)
{
 uint32_t gpioreg=pin.gpio_bank+reg;
 uint32_t gpioreg_val=mmio_read(gpioreg);
 gpioreg_val |= get_pin_mask(pin);
 mmio_write(gpioreg, gpioreg_val);
}

static void inline reg_update_unset(GPIO_PIN pin,uint32_t reg)
{
 uint32_t gpioreg=pin.gpio_bank+reg;
 uint32_t gpioreg_val=mmio_read(gpioreg);
 gpioreg_val &= ~get_pin_mask(pin);
 mmio_write(gpioreg, gpioreg_val);
}

/**
 * @brief Initializes the GPIO API. 
 *        Allocates space to the gpio_pin array and sets every pin as NOT_USED.
 *        If the API has already been initialized silently exits.
 */
void gpio_initialize(void)
{ 
 int i;
 if ( is_initialized )
   return;
 
 is_initialized = true;
 for ( i = 0; i < GPIO_PIN_COUNT; i++ ) {
   gpio_pin[i].pin_type = NOT_USED;
 }
}

/**
 * @brief Configures a GPIO pin to perform a certain function.
 *
 * @retval 0 Pin was configured successfully.
 * @retval -1 The received pin is already being used, or unknown function.
 */
 int gpio_select_pin(GPIO_PIN pin, bbb_pin type)
{
 assert(pin.gpio_id >= 0 && pin.gpio_id < GPIO_PIN_COUNT);
 if (gpio_pin[pin.gpio_id].pin_type != NOT_USED)
   return -1;

 switch(type) {
   case DIGITAL_OUTPUT:
     reg_update_unset(pin,AM335X_GPIO_OE);
     break;

   default:
     return -1;
  }

 gpio_pin[pin.gpio_id].pin_type = type;

 return 0;
}

/**
 * @brief Gives an output GPIO pin the logical value of 1.
 * @retval 0 Pin was set successfully.
 * @retval -1 The received pin is not configured as an digital output.
 */
int gpio_set(GPIO_PIN pin)
{
 assert(pin.gpio_id >= 0 && pin.gpio_id < GPIO_PIN_COUNT);
 if (gpio_pin[pin.gpio_id].pin_type != DIGITAL_OUTPUT)
   return -1;
 
 reg_update_set(pin,AM335X_GPIO_DATAOUT);
  
 return 0;
}

/**
 * @brief Gives an output GPIO pin the logical value of 0.
 * @retval 0 Pin was cleared successfully.
 * @retval -1 The received pin is not configured as an digital output.
 */
int gpio_clear(GPIO_PIN pin)
{
 assert(pin.gpio_id >= 0 && pin.gpio_id < GPIO_PIN_COUNT);
 if (gpio_pin[pin.gpio_id].pin_type != DIGITAL_OUTPUT)
   return -1;
 
 reg_update_unset(pin,AM335X_GPIO_DATAOUT);
  
 return 0;
}

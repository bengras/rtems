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
 
static uintptr_t inline get_pin_addr(GPIO_PIN pin)
{
 return (pin.gpio_bank + pin.gpio_bank_pin/8);
}

static char inline get_pin_mask(GPIO_PIN pin, bool value)
{
 if(value) 
  return (1 << pin.gpio_bank_pin%8);
 else
  return (0 << pin.gpio_bank_pin%8);
}

static void inline reg_update_or(GPIO_PIN pin,uint32_t address,bool type)
{
 uint8_t gpiobyte=readb(get_pin_addr(pin)+address);
 gpiobyte |= get_pin_mask(pin,type);
 writeb(gpiobyte,get_pin_addr(pin)+address);
}

static void inline reg_update_and(GPIO_PIN pin,uint32_t address,bool type)
{
 uint8_t gpiobyte=readb(get_pin_addr(pin)+address);
 gpiobyte &= get_pin_mask(pin,type);
 writeb(gpiobyte,get_pin_addr(pin)+address);
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
 
 if (gpio_pin[pin.gpio_id].pin_type != NOT_USED)
   return -1;
 gpio_pin[pin.gpio_id].pin_type = type;

 switch(type){
    
   case DIGITAL_OUTPUT:

     reg_update_or(pin,AM335X_GPIO_OE,false);

     break;

   default:

     return -1;
  }
 return 0;
}

/**
 * @brief Gives an output GPIO pin the logical value of 1.
 * @retval 0 Pin was set successfully.
 * @retval -1 The received pin is not configured as an digital output.
 */
int gpio_set(GPIO_PIN pin)
{
 if (gpio_pin[pin.gpio_id-1].pin_type != DIGITAL_OUTPUT)
   return -1;
 
 reg_update_or(pin,AM335X_GPIO_SETDATAOUT,true);
  
 return 0;
}

/**
 * @brief Gives an output GPIO pin the logical value of 0.
 * @retval 0 Pin was cleared successfully.
 * @retval -1 The received pin is not configured as an digital output.
 */
int gpio_clear(GPIO_PIN pin)
{
 if (gpio_pin[pin.gpio_id-1].pin_type != DIGITAL_OUTPUT)
   return -1;
 
 reg_update_and(pin,AM335X_GPIO_CLEARDATAOUT,true);
  
 return 0;
}
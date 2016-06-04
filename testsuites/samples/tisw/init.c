/* failed Testcase according to TI SW code */

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include<rtems/test.h>
#include<bsp.h>
#include<bsp/gpio.h>
#include<stdio.h>
#include<stdlib.h>
#include<libcpu/am335x.h>

#define CLOCK_DIV_VAL                 (10)
#define SOC_EHRPWM_2_MODULE_FREQ      (100000000)  /* SYSCLKOUT = (100Mhz) TBCLK = 10^-9*/

const char rtems_test_name[] = "Punit PWM test GSOC 2016";

static void configure(void);
rtems_task Init(rtems_task_argument argument);

rtems_printer rtems_test_printer;


rtems_task Init(
	rtems_task_argument ignored
)
{
        rtems_print_printer_printf(&rtems_test_printer);

	rtems_test_begin();
	printf("Starting PWM Testing");

	/* Initialization PWM API*/
	rtems_gpio_initialize();
	PWMSSModuleClkConfig(2);
	EPWMPinMuxSetup();
	EHRPWMClockEnable(SOC_PWMSS2_REGS);

	PWMSSTBClkEnable(2);
	printf(" \n Hello checking started \n");
	configure();
	while(1);
	}	

void configure(void) {
	EHRPWMTimebaseClkConfig(SOC_EPWM_2_REGS,SOC_EHRPWM_2_MODULE_FREQ/CLOCK_DIV_VAL,SOC_EHRPWM_2_MODULE_FREQ);

	EHRPWMPWMOpFreqSet(SOC_EPWM_2_REGS,
                       SOC_EHRPWM_2_MODULE_FREQ/CLOCK_DIV_VAL,
                       (unsigned int)(2000), // 1 Hz -> this value specifies frequency 
                       (unsigned int)EHRPWM_COUNT_UP,
                       (bool)EHRPWM_SHADOW_WRITE_DISABLE);
		/* Disable synchronization*/
    	EHRPWMTimebaseSyncDisable(SOC_EPWM_2_REGS);

    		/* Disable syncout*/
    	EHRPWMSyncOutModeSet(SOC_EPWM_2_REGS, EHRPWM_SYNCOUT_DISABLE);

    		/* Configure the emulation behaviour*/
    	EHRPWMTBEmulationModeSet(SOC_EPWM_2_REGS, EHRPWM_STOP_AFTER_NEXT_TB_INCREMENT);
		/* Configure Counter compare sub-module */
    		/* Load Compare A value */
    	EHRPWMLoadCMPA(SOC_EPWM_2_REGS,
                   	0x20,
                   	(bool)EHRPWM_SHADOW_WRITE_DISABLE,
                   	(unsigned int)EHRPWM_COMPA_NO_LOAD,
                   	(bool)EHRPWM_CMPCTL_OVERWR_SH_FL);

    	/* Load Compare B value */
    	EHRPWMLoadCMPB(SOC_EPWM_2_REGS,
                   	0x25,
                   	(bool)EHRPWM_SHADOW_WRITE_DISABLE,
                   	(unsigned int) EHRPWM_COMPB_NO_LOAD,
                   	(bool)EHRPWM_CMPCTL_OVERWR_SH_FL); 
			/* Configure Action qualifier */
    			/* Toggle when CTR = CMPA */
    	EHRPWMConfigureAQActionOnB(SOC_EPWM_2_REGS,
                                EHRPWM_AQCTLB_ZRO_EPWMXBHIGH,
                                EHRPWM_AQCTLB_PRD_DONOTHING,
                                EHRPWM_AQCTLB_CAU_EPWMXBLOW,
                                EHRPWM_AQCTLB_CAD_DONOTHING,
                                EHRPWM_AQCTLB_CBU_DONOTHING,
                                EHRPWM_AQCTLB_CBD_DONOTHING,
                                EHRPWM_AQSFRC_ACTSFB_DONOTHING);
    	EHRPWMConfigureAQActionOnA(SOC_EPWM_2_REGS,
				EHRPWM_AQCTLA_ZRO_DONOTHING,
				EHRPWM_AQCTLA_PRD_DONOTHING,
				EHRPWM_AQCTLA_CAU_EPWMXATOGGLE,
				EHRPWM_AQCTLA_CAD_DONOTHING,
				EHRPWM_AQCTLA_CBU_DONOTHING,
				EHRPWM_AQCTLA_CBD_DONOTHING,
				EHRPWM_AQSFRC_ACTSFA_DONOTHING); 

    /* Bypass dead band sub-module */
     EHRPWMDBOutput(SOC_EPWM_2_REGS, EHRPWM_DBCTL_OUT_MODE_BYPASS); 

    /* Disable Chopper sub-module */
    EHRPWMChopperDisable(SOC_EPWM_2_REGS); 
    /* Disable trip events */
    EHRPWMTZTripEventDisable(SOC_EPWM_2_REGS,(bool)EHRPWM_TZ_ONESHOT);
    EHRPWMTZTripEventDisable(SOC_EPWM_2_REGS,(bool)EHRPWM_TZ_CYCLEBYCYCLE);
    EHRPWMHRDisable(SOC_EPWM_2_REGS);
	printf("COnfiguration finished \n");
}


/* NOTICE: the clock driver is enabled */
#define CONFIGURE_APPLICATION_NEEDS_CLOCK_DRIVER
#define CONFIGURE_APPLICATION_NEEDS_CONSOLE_DRIVER

#define CONFIGURE_MAXIMUM_TASKS            1
#define CONFIGURE_USE_DEVFS_AS_BASE_FILESYSTEM

#define CONFIGURE_MAXIMUM_SEMAPHORES    1

#define CONFIGURE_RTEMS_INIT_TASKS_TABLE 

#define CONFIGURE_EXTRA_TASK_STACKS         (2 * RTEMS_MINIMUM_STACK_SIZE)

#define CONFIGURE_INITIAL_EXTENSIONS RTEMS_TEST_INITIAL_EXTENSION

#define CONFIGURE_INIT
#include <rtems/confdefs.h>

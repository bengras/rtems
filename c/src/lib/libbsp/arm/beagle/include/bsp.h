/**
 * @file
 *
 * @ingroup arm_beagle
 *
 * @brief Global BSP definitions.
 */

/*
 * Copyright (c) 2012 Claas Ziemke. All rights reserved.
 *
 *  Claas Ziemke
 *  Kernerstrasse 11
 *  70182 Stuttgart
 *  Germany
 *  <claas.ziemke@gmx.net>
 *
 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution or at
 * http://www.rtems.com/license/LICENSE.
 *
 * Modified by Ben Gras <beng@shrike-systems.com> to add lots
 * of beagleboard/beaglebone definitions, delete lpc32xx specific
 * ones, and merge with some other header files.
 */

#ifndef LIBBSP_ARM_BEAGLE_BSP_H
#define LIBBSP_ARM_BEAGLE_BSP_H

#include <bspopts.h>
#include <stdint.h>
#include <bsp/start.h>
#include <bsp/default-initial-extension.h>

#include <rtems.h>
#include <rtems/irq-extension.h>

#define BSP_FEATURE_IRQ_EXTENSION

/* UART base clock frequency */
#define UART_CLOCK     48000000

/* Access memory-mapped I/O devices */
#define mmio_read(a)    (*(volatile uint32_t *)(a))
#define mmio_write(a,v) (*(volatile uint32_t *)(a) = (v))
#define mmio_set(a,v)   mmio_write((a), mmio_read((a)) | (v))
#define mmio_clear(a,v) mmio_write((a), mmio_read((a)) & ~(v))

#define REG16(x)(*((volatile uint16_t *)(x)))
#define REG(x)(*((volatile uint32_t *)(x)))
#define BIT(x)(0x1 << x)

#define udelay(u) rtems_task_wake_after(1 + ((u)/rtems_configuration_get_microseconds_per_tick()))

/* Write a uint32_t value to a memory address. */
static inline void
write32(uint32_t address, uint32_t value)
{
  REG(address) = value;
}

/* Read an uint32_t from a memory address */
static inline uint32_t
read32(uint32_t address)
{
  return REG(address);
}

/* Set a 32 bits value depending on a mask */
static inline void
set32(uint32_t address, uint32_t mask, uint32_t value)
{
  uint32_t val;
  val = read32(address);
  /* clear the bits */
  val &= ~(mask);
  /* apply the value using the mask */
  val |= (value & mask);
  write32(address, val);
}

/* Write a uint16_t value to a memory address. */
static inline void
write16(uint32_t address, uint16_t value)
{
  REG16(address) = value;
}

/* Read an uint16_t from a memory address */
static inline uint16_t
read16(uint32_t address)
{
  return REG16(address);
}

/* Data synchronization barrier */
static inline void dsb(void)
{
        asm volatile("dsb" : : : "memory");
}

/* Instruction synchronization barrier */
static inline void isb(void)
{
        asm volatile("isb" : : : "memory");
}

/* flush data cache */
static inline void flush_data_cache(void)
{
        asm volatile("mov r0, #0; mcr p15, #0, r0, c7, c10, #4" : : : "memory");
}

/* Interrupt controller memory map */
#define OMAP3_DM37XX_INTR_BASE 0x48200000 /* INTCPS physical address */


/* Interrupt controller memory map */
#define OMAP3_AM335X_INTR_BASE 0x48200000 /* INTCPS physical address */

/* Interrupt controller registers */
#define OMAP3_INTCPS_REVISION     0x000 /* IP revision code */
#define OMAP3_INTCPS_SYSCONFIG    0x010 /* Controls params */
#define OMAP3_INTCPS_SYSSTATUS    0x014 /* Status */
#define OMAP3_INTCPS_SIR_IRQ      0x040 /* Active IRQ number */
#define OMAP3_INTCPS_SIR_FIQ      0x044 /* Active FIQ number */
#define OMAP3_INTCPS_CONTROL      0x048 /* New int agreement bits */
#define OMAP3_INTCPS_PROTECTION   0x04C /* Protection for other regs */
#define OMAP3_INTCPS_IDLE         0x050 /* Clock auto-idle/gating */
#define OMAP3_INTCPS_IRQ_PRIORITY 0x060 /* Active IRQ priority level */
#define OMAP3_INTCPS_FIQ_PRIORITY 0x064 /* Active FIQ priority level */
#define OMAP3_INTCPS_THRESHOLD    0x068 /* Priority threshold */
#define OMAP3_INTCPS_ITR0         0x080 /* Raw pre-masking interrupt status */
#define OMAP3_INTCPS_MIR0         0x084 /* Interrupt mask */
#define OMAP3_INTCPS_MIR1         0x0A4 /* Interrupt mask */
#define OMAP3_INTCPS_MIR2         0x0C4 /* Interrupt mask */
#define OMAP3_INTCPS_MIR3         0x0E4 /* Interrupt mask */
#define OMAP3_INTCPS_MIR_CLEAR0   0x088 /* Clear interrupt mask bits */
#define OMAP3_INTCPS_MIR_SET0     0x08C /* Set interrupt mask bits */
#define OMAP3_INTCPS_ISR_SET0     0x090 /* Set software int bits */
#define OMAP3_INTCPS_ISR_CLEAR0   0x094 /* Clear software int bits */
#define OMAP3_INTCPS_PENDING_IRQ0 0x098 /* IRQ status post-masking */
#define OMAP3_INTCPS_PENDING_IRQ1 0x0b8 /* IRQ status post-masking */
#define OMAP3_INTCPS_PENDING_IRQ2 0x0d8 /* IRQ status post-masking */
#define OMAP3_INTCPS_PENDING_IRQ3 0x0f8 /* IRQ status post-masking */
#define OMAP3_INTCPS_PENDING_FIQ0 0x09C /* FIQ status post-masking */
#define OMAP3_INTCPS_ILR0         0x100 /* Priority for interrupts */

/* SYSCONFIG */
#define OMAP3_SYSCONFIG_AUTOIDLE	0x01	/* SYSCONFIG.AUTOIDLE bit */

#define OMAP3_INTR_ITR(base,n) \
    (base + OMAP3_INTCPS_ITR0 + 0x20 * (n))
#define OMAP3_INTR_MIR(base,n) \
    (base + OMAP3_INTCPS_MIR0 + 0x20 * (n))
#define OMAP3_INTR_MIR_CLEAR(base,n)	\
    (base + OMAP3_INTCPS_MIR_CLEAR0 + 0x20 * (n))
#define OMAP3_INTR_MIR_SET(base,n) \
    (base + OMAP3_INTCPS_MIR_SET0 + 0x20 * (n))
#define OMAP3_INTR_ISR_SET(base,n) \
    (base + OMAP3_INTCPS_ISR_SET0 + 0x20 * (n))
#define OMAP3_INTR_ISR_CLEAR(base,n) \
    (base + OMAP3_INTCPS_ISR_CLEAR0 + 0x20 * (n))
#define OMAP3_INTR_PENDING_IRQ(base,n) \
    (base + OMAP3_INTCPS_PENDING_IRQ0 + 0x20 * (n))
#define OMAP3_INTR_PENDING_FIQ(base,n) \
    (base + OMAP3_INTCPS_PENDING_FIQ0 + 0x20 * (n))
#define OMAP3_INTR_ILR(base,m) \
    (base + OMAP3_INTCPS_ILR0 + 0x4 * (m))

#define OMAP3_INTR_ACTIVEIRQ_MASK 0x7f /* Active IRQ mask for SIR_IRQ */
#define OMAP3_INTR_NEWIRQAGR      0x1  /* New IRQ Generation */




#define OMAP3_DM337X_NR_IRQ_VECTORS    96

/* Interrupt mappings */
#define OMAP3_MCBSP2_ST_IRQ  4  /* Sidestone McBSP2 overflow */
#define OMAP3_MCBSP3_ST_IRQ  5  /* Sidestone McBSP3 overflow */
#define OMAP3_SYS_NIRQ       7  /* External source (active low) */
#define OMAP3_SMX_DBG_IRQ    9  /* L3 interconnect error for debug */
#define OMAP3_SMX_APP_IRQ   10  /* L3 interconnect error for application */
#define OMAP3_PRCM_IRQ      11  /* PRCM module */
#define OMAP3_SDMA0_IRQ     12  /* System DMA request 0 */
#define OMAP3_SDMA1_IRQ     13  /* System DMA request 1 */
#define OMAP3_SDMA2_IRQ     14  /* System DMA request 2 */
#define OMAP3_SDMA3_IRQ     15  /* System DMA request 3 */
#define OMAP3_MCBSP1_IRQ    16  /* McBSP module 1 */
#define OMAP3_MCBSP2_IRQ    17  /* McBSP module 2 */
#define OMAP3_GPMC_IRQ      20  /* General-purpose memory controller */
#define OMAP3_SGX_IRQ       21  /* 2D/3D graphics module */
#define OMAP3_MCBSP3_IRQ    22  /* McBSP module 3 */
#define OMAP3_MCBSP4_IRQ    23  /* McBSP module 4 */
#define OMAP3_CAM0_IRQ      24  /* Camera interface request 0 */
#define OMAP3_DSS_IRQ       25  /* Display subsystem module */
#define OMAP3_MAIL_U0_IRQ   26  /* Mailbox user 0 request */
#define OMAP3_MCBSP5_IRQ    27  /* McBSP module 5 */
#define OMAP3_IVA2_MMU_IRQ  28  /* IVA2 MMU */
#define OMAP3_GPIO1_IRQ     29  /* GPIO module 1 */
#define OMAP3_GPIO2_IRQ     30  /* GPIO module 2 */
#define OMAP3_GPIO3_IRQ     31  /* GPIO module 3 */
#define OMAP3_GPIO4_IRQ     32  /* GPIO module 4 */
#define OMAP3_GPIO5_IRQ     33  /* GPIO module 5 */
#define OMAP3_GPIO6_IRQ     34  /* GPIO module 6 */
#define OMAP3_WDT3_IRQ      36  /* Watchdog timer module 3 overflow */
#define OMAP3_GPT1_IRQ      37  /* General-purpose timer module 1 */
#define OMAP3_GPT2_IRQ      38  /* General-purpose timer module 2 */
#define OMAP3_GPT3_IRQ      39  /* General-purpose timer module 3 */
#define OMAP3_GPT4_IRQ      40  /* General-purpose timer module 4 */
#define OMAP3_GPT5_IRQ      41  /* General-purpose timer module 5 */
#define OMAP3_GPT6_IRQ      42  /* General-purpose timer module 6 */
#define OMAP3_GPT7_IRQ      43  /* General-purpose timer module 7 */
#define OMAP3_GPT8_IRQ      44  /* General-purpose timer module 8 */
#define OMAP3_GPT9_IRQ      45  /* General-purpose timer module 9 */
#define OMAP3_GPT10_IRQ     46  /* General-purpose timer module 10 */
#define OMAP3_GPT11_IRQ     47  /* General-purpose timer module 11 */
#define OMAP3_SPI4_IRQ      48  /* McSPI module 4 */
#define OMAP3_MCBSP4_TX_IRQ 54  /* McBSP module 4 transmit */
#define OMAP3_MCBSP4_RX_IRQ 55  /* McBSP module 4 receive */
#define OMAP3_I2C1_IRQ      56  /* I2C module 1 */
#define OMAP3_I2C2_IRQ      57  /* I2C module 2 */
#define OMAP3_HDQ_IRQ       58  /* HDQ/1-Wire */
#define OMAP3_MCBSP1_TX_IRQ 59  /* McBSP module 1 transmit */
#define OMAP3_MCBSP1_RX_IRQ 60  /* McBSP module 1 receive */
#define OMAP3_I2C3_IRQ      61  /* I2C module 3 */
#define OMAP3_MCBSP2_TX_IRQ 62  /* McBSP module 2 transmit */
#define OMAP3_MCBSP2_RX_IRQ 63  /* McBSP module 2 receive */
#define OMAP3_SPI1_IRQ      65  /* McSPI module 1 */
#define OMAP3_SPI2_IRQ      66  /* McSPI module 2 */
#define OMAP3_UART1_IRQ     72  /* UART module 1 */
#define OMAP3_UART2_IRQ     73  /* UART module 2 */
#define OMAP3_UART3_IRQ     74  /* UART module 3 */
#define OMAP3_PBIAS_IRQ     75  /* Merged interrupt for PBIASlite 1/2 */
#define OMAP3_OHCI_IRQ      76  /* OHCI HSUSB MP Host Interrupt */
#define OMAP3_EHCI_IRQ      77  /* EHCI HSUSB MP Host Interrupt */
#define OMAP3_TLL_IRQ       78  /* HSUSB MP TLL Interrupt */
#define OMAP3_MCBSP5_TX_IRQ 81  /* McBSP module 5 transmit */
#define OMAP3_MCBSP5_RX_IRQ 82  /* McBSP module 5 receive */
#define OMAP3_MMC1_IRQ      83  /* MMC/SD module 1 */
#define OMAP3_MMC2_IRQ      86  /* MMC/SD module 2 */
#define OMAP3_ICR_IRQ       87  /* MPU ICR */
#define OMAP3_D2DFRINT_IRQ  88  /* 3G coproc (in stacked modem config) */
#define OMAP3_MCBSP3_TX_IRQ 89  /* McBSP module 3 transmit */
#define OMAP3_MCBSP3_RX_IRQ 90  /* McBSP module 3 receive */
#define OMAP3_SPI3_IRQ      91  /* McSPI module 3 */
#define OMAP3_HSUSB_MC_IRQ  92  /* High-speed USB OTG */
#define OMAP3_HSUSB_DMA_IRQ 93  /* High-speed USB OTG DMA */
#define OMAP3_MMC3_IRQ      94  /* MMC/SD module 3 */


#define AM335X_INT_EMUINT                         0	/* Emulation interrupt (EMUICINTR) */
#define AM335X_INT_COMMTX                         1	/* CortexA8 COMMTX */
#define AM335X_INT_COMMRX                         2	/* CortexA8 COMMRX */
#define AM335X_INT_BENCH                          3	/* CortexA8 NPMUIRQ */
#define AM335X_INT_ELM_IRQ                        4	/* Sinterrupt (Error location process completion) */
#define AM335X_INT_NMI                            7	/* nmi_int */
#define AM335X_INT_L3DEBUG                        9	/* l3_FlagMux_top_FlagOut1 */
#define AM335X_INT_L3APPINT                       10	/* l3_FlagMux_top_FlagOut0  */
#define AM335X_INT_PRCMINT                        11	/* irq_mpu */
#define AM335X_INT_EDMACOMPINT                    12	/* tpcc_int_pend_po0 */
#define AM335X_INT_EDMAMPERR                      13	/* tpcc_mpint_pend_po */
#define AM335X_INT_EDMAERRINT                     14	/* tpcc_errint_pend_po */
#define AM335X_INT_ADC_TSC_GENINT                 16	/* gen_intr_pend */
#define AM335X_INT_USBSSINT                       17	/* usbss_intr_pend */
#define AM335X_INT_USB0                           18	/* usb0_intr_pend */
#define AM335X_INT_USB1                           19	/* usb1_intr_pend */
#define AM335X_INT_PRUSS1_EVTOUT0                 20	/* pr1_host_intr0_intr_pend */
#define AM335X_INT_PRUSS1_EVTOUT1                 21	/* pr1_host_intr1_intr_pend */
#define AM335X_INT_PRUSS1_EVTOUT2                 22	/* pr1_host_intr2_intr_pend */
#define AM335X_INT_PRUSS1_EVTOUT3                 23	/* pr1_host_intr3_intr_pend */
#define AM335X_INT_PRUSS1_EVTOUT4                 24	/* pr1_host_intr4_intr_pend */
#define AM335X_INT_PRUSS1_EVTOUT5                 25	/* pr1_host_intr5_intr_pend */
#define AM335X_INT_PRUSS1_EVTOUT6                 26	/* pr1_host_intr6_intr_pend */
#define AM335X_INT_PRUSS1_EVTOUT7                 27	/* pr1_host_intr7_intr_pend */
#define AM335X_INT_MMCSD1INT                      28	/* MMCSD1  SINTERRUPTN */
#define AM335X_INT_MMCSD2INT                      29	/* MMCSD2  SINTERRUPT */
#define AM335X_INT_I2C2INT                        30	/* I2C2  POINTRPEND */
#define AM335X_INT_eCAP0INT                       31	/* ecap_intr_intr_pend */
#define AM335X_INT_GPIOINT2A                      32	/* GPIO 2  POINTRPEND1 */
#define AM335X_INT_GPIOINT2B                      33	/* GPIO 2  POINTRPEND2 */
#define AM335X_INT_USBWAKEUP                      34	/* USBSS  slv0p_Swakeup */
#define AM335X_INT_LCDCINT                        36	/* LCDC  lcd_irq */
#define AM335X_INT_GFXINT                         37	/* SGX530  THALIAIRQ */
#define AM335X_INT_ePWM2INT                       39	/* (PWM Subsystem)  epwm_intr_intr_pend */
#define AM335X_INT_3PGSWRXTHR0                    40	/* (Ethernet)  c0_rx_thresh_pend (RX_THRESH_PULSE) */
#define AM335X_INT_3PGSWRXINT0                    41	/* CPSW (Ethernet)  c0_rx_pend */
#define AM335X_INT_3PGSWTXINT0                    42	/* CPSW (Ethernet)  c0_tx_pend */
#define AM335X_INT_3PGSWMISC0                     43	/* CPSW (Ethernet)  c0_misc_pend */
#define AM335X_INT_UART3INT                       44	/* UART3  niq */
#define AM335X_INT_UART4INT                       45	/* UART4  niq */
#define AM335X_INT_UART5INT                       46	/* UART5  niq */
#define AM335X_INT_eCAP1INT                       47	/* (PWM Subsystem)  ecap_intr_intr_pend */
#define AM335X_INT_DCAN0_INT0                     52	/* DCAN0  dcan_intr0_intr_pend */
#define AM335X_INT_DCAN0_INT1                     53	/* DCAN0  dcan_intr1_intr_pend */
#define AM335X_INT_DCAN0_PARITY                   54	/* DCAN0  dcan_uerr_intr_pend */
#define AM335X_INT_DCAN1_INT0                     55	/* DCAN1  dcan_intr0_intr_pend */
#define AM335X_INT_DCAN1_INT1                     56	/* DCAN1  dcan_intr1_intr_pend */
#define AM335X_INT_DCAN1_PARITY                   57	/* DCAN1  dcan_uerr_intr_pend */
#define AM335X_INT_ePWM0_TZINT                    58	/* eHRPWM0 TZ interrupt (PWM  epwm_tz_intr_pend Subsystem) */
#define AM335X_INT_ePWM1_TZINT                    59	/* eHRPWM1 TZ interrupt (PWM  epwm_tz_intr_pend Subsystem) */
#define AM335X_INT_ePWM2_TZINT                    60	/* eHRPWM2 TZ interrupt (PWM  epwm_tz_intr_pend Subsystem) */
#define AM335X_INT_eCAP2INT                       61	/* eCAP2 (PWM Subsystem)  ecap_intr_intr_pend */
#define AM335X_INT_GPIOINT3A                      62	/* GPIO 3  POINTRPEND1 */
#define AM335X_INT_GPIOINT3B                      63	/* GPIO 3  POINTRPEND2 */
#define AM335X_INT_MMCSD0INT                      64	/* MMCSD0  SINTERRUPTN */
#define AM335X_INT_SPI0INT                        65	/* McSPI0  SINTERRUPTN */
#define AM335X_INT_TINT0                          66	/* Timer0  POINTR_PEND */
#define AM335X_INT_TINT1_1MS                      67	/* DMTIMER_1ms  POINTR_PEND */
#define AM335X_INT_TINT2                          68	/* DMTIMER2  POINTR_PEND */
#define AM335X_INT_TINT3                          69	/* DMTIMER3  POINTR_PEND */
#define AM335X_INT_I2C0INT                        70	/* I2C0  POINTRPEND */
#define AM335X_INT_I2C1INT                        71	/* I2C1  POINTRPEND */
#define AM335X_INT_UART0INT                       72	/* UART0  niq */
#define AM335X_INT_UART1INT                       73	/* UART1  niq */
#define AM335X_INT_UART2INT                       74	/* UART2  niq */
#define AM335X_INT_RTCINT                         75	/* RTC  timer_intr_pend */
#define AM335X_INT_RTCALARMINT                    76	/* RTC  alarm_intr_pend */
#define AM335X_INT_MBINT0                         77	/* Mailbox0 (mail_u0_irq)  initiator_sinterrupt_q_n */
#define AM335X_INT_M3_TXEV                        78	/* Wake M3 Subsystem  TXEV */
#define AM335X_INT_eQEP0INT                       79	/* eQEP0 (PWM Subsystem)  eqep_intr_intr_pend */
#define AM335X_INT_MCATXINT0                      80	/* McASP0  mcasp_x_intr_pend */
#define AM335X_INT_MCARXINT0                      81	/* McASP0  mcasp_r_intr_pend */
#define AM335X_INT_MCATXINT1                      82	/* McASP1  mcasp_x_intr_pend */
#define AM335X_INT_MCARXINT1                      83	/* McASP1  mcasp_r_intr_pend */
#define AM335X_INT_ePWM0INT                       86	/* (PWM Subsystem)  epwm_intr_intr_pend */
#define AM335X_INT_ePWM1INT                       87	/* (PWM Subsystem)  epwm_intr_intr_pend */
#define AM335X_INT_eQEP1INT                       88	/* (PWM Subsystem)  eqep_intr_intr_pend */
#define AM335X_INT_eQEP2INT                       89	/* (PWM Subsystem)  eqep_intr_intr_pend */
#define AM335X_INT_DMA_INTR_PIN2                  90	/* External DMA/Interrupt Pin2  pi_x_dma_event_intr2 (xdma_event_intr2) */
#define AM335X_INT_WDT1INT                        91	/* (Public Watchdog)  WDTIMER1  PO_INT_PEND */
#define AM335X_INT_TINT4                          92	/* DMTIMER4  POINTR_PEN */
#define AM335X_INT_TINT5                          93	/* DMTIMER5  POINTR_PEN */
#define AM335X_INT_TINT6                          94	/* DMTIMER6  POINTR_PEND */
#define AM335X_INT_TINT7                          95	/* DMTIMER7  POINTR_PEND */
#define AM335X_INT_GPIOINT0A                      96	/* GPIO 0  POINTRPEND1 */
#define AM335X_INT_GPIOINT0B                      97	/* GPIO 0  POINTRPEND2 */
#define AM335X_INT_GPIOINT1A                      98	/* GPIO 1  POINTRPEND1 */
#define AM335X_INT_GPIOINT1B                      99	/* GPIO 1  POINTRPEND2 */
#define AM335X_INT_GPMCINT                        100	/* GPMC  gpmc_sinterrupt */
#define AM335X_INT_DDRERR0                        101	/* EMIF  sys_err_intr_pend */
#define AM335X_INT_TCERRINT0                      112	/* TPTC0  tptc_erint_pend_po */
#define AM335X_INT_TCERRINT1                      113	/* TPTC1  tptc_erint_pend_po */
#define AM335X_INT_TCERRINT2                      114	/* TPTC2  tptc_erint_pend_po */
#define AM335X_INT_ADC_TSC_PENINT                 115	/* ADC_TSC  pen_intr_pend */
#define AM335X_INT_SMRFLX_Sabertooth              120	/* Smart Reflex 0  intrpen */
#define AM335X_INT_SMRFLX_Core                    121	/* Smart Reflex 1  intrpend */
#define AM335X_INT_DMA_INTR_PIN0                  123	/* pi_x_dma_event_intr0 (xdma_event_intr0) */
#define AM335X_INT_DMA_INTR_PIN1                  124	/* pi_x_dma_event_intr1 (xdma_event_intr1) */
#define AM335X_INT_SPI1INT                        125	/* McSPI1  SINTERRUPTN */

#define OMAP3_AM335X_NR_IRQ_VECTORS    125

/* General-purpose timer register map */
#define OMAP3_GPTIMER1_BASE  0x48318000 /* GPTIMER1 physical address */
#define OMAP3_GPTIMER2_BASE  0x49032000 /* GPTIMER2 physical address */
#define OMAP3_GPTIMER3_BASE  0x49034000 /* GPTIMER3 physical address */
#define OMAP3_GPTIMER4_BASE  0x49036000 /* GPTIMER4 physical address */
#define OMAP3_GPTIMER5_BASE  0x49038000 /* GPTIMER5 physical address */
#define OMAP3_GPTIMER6_BASE  0x4903A000 /* GPTIMER6 physical address */
#define OMAP3_GPTIMER7_BASE  0x4903C000 /* GPTIMER7 physical address */
#define OMAP3_GPTIMER8_BASE  0x4903E000 /* GPTIMER8 physical address */
#define OMAP3_GPTIMER9_BASE  0x49040000 /* GPTIMER9 physical address */
#define OMAP3_GPTIMER10_BASE 0x48086000 /* GPTIMER10 physical address */
#define OMAP3_GPTIMER11_BASE 0x48088000 /* GPTIMER11 physical address */


/* General-purpose timer registers */
#define OMAP3_TIMER_TIDR      0x000 /* IP revision code */
#define OMAP3_TIMER_TIOCP_CFG 0x010 /* Controls params for GP timer L4 interface */
#define OMAP3_TIMER_TISTAT    0x014 /* Status (excl. interrupt status) */
#define OMAP3_TIMER_TISR      0x018 /* Pending interrupt status */
#define OMAP3_TIMER_TIER      0x01C /* Interrupt enable */
#define OMAP3_TIMER_TWER      0x020 /* Wakeup enable */
#define OMAP3_TIMER_TCLR      0x024 /* Controls optional features */
#define OMAP3_TIMER_TCRR      0x028 /* Internal counter value */
#define OMAP3_TIMER_TLDR      0x02C /* Timer load value */
#define OMAP3_TIMER_TTGR      0x030 /* Triggers counter reload */
#define OMAP3_TIMER_TWPS      0x034 /* Indicates if Write-Posted pending */
#define OMAP3_TIMER_TMAR      0x038 /* Value to be compared with counter */
#define OMAP3_TIMER_TCAR1     0x03C /* First captured value of counter register */
#define OMAP3_TIMER_TSICR     0x040 /* Control posted mode and functional SW reset */
#define OMAP3_TIMER_TCAR2     0x044 /* Second captured value of counter register */
#define OMAP3_TIMER_TPIR      0x048 /* Positive increment (1 ms tick) */
#define OMAP3_TIMER_TNIR      0x04C /* Negative increment (1 ms tick) */
#define OMAP3_TIMER_TCVR      0x050 /* Defines TCRR is sub/over-period (1 ms tick) */
#define OMAP3_TIMER_TOCR      0x054 /* Masks tick interrupt */
#define OMAP3_TIMER_TOWR      0x058 /* Number of masked overflow interrupts */

#define AM335X_DMTIMER0_BASE      0x44E05000  /* DMTimer0 Registers */
#define AM335X_DMTIMER1_1MS_BASE  0x44E31000 /* DMTimer1 1ms Registers (Accurate 1ms timer) */
#define AM335X_DMTIMER2_BASE      0x48040000 /*  DMTimer2 Registers */
#define AM335X_DMTIMER3_BASE      0x48042000 /*  DMTimer3 Registers */
#define AM335X_DMTIMER4_BASE      0x48044000 /* DMTimer4 Registers  */
#define AM335X_DMTIMER5_BASE      0x48046000 /* DMTimer5 Registers  */
#define AM335X_DMTIMER6_BASE      0x48048000 /*  DMTimer6 Registers */
#define AM335X_DMTIMER7_BASE      0x4804A000 /*  DMTimer7 Registers */

/* General-purpose timer registers  AM335x non 1MS timers have different offsets */
#define AM335X_TIMER_TIDR             0x000 /* IP revision code */
#define AM335X_TIMER_TIOCP_CFG        0x010 /* Controls params for GP timer L4 interface */
#define AM335X_TIMER_IRQSTATUS_RAW    0x024 /* Timer IRQSTATUS Raw Register */
#define AM335X_TIMER_IRQSTATUS        0x028 /* Timer IRQSTATUS Register */
#define AM335X_TIMER_IRQENABLE_SET    0x02C /* Timer IRQENABLE Set Register */
#define AM335X_TIMER_IRQENABLE_CLR    0x030 /* Timer IRQENABLE Clear Register */
#define AM335X_TIMER_IRQWAKEEN        0x034 /* Timer IRQ Wakeup Enable Register */
#define AM335X_TIMER_TCLR      0x038 /* Controls optional features */
#define AM335X_TIMER_TCRR      0x03C /* Internal counter value */
#define AM335X_TIMER_TLDR      0x040 /* Timer load value */
#define AM335X_TIMER_TTGR      0x044 /* Triggers counter reload */
#define AM335X_TIMER_TWPS      0x048 /* Indicates if Write-Posted pending */
#define AM335X_TIMER_TMAR      0x04C /* Value to be compared with counter */
#define AM335X_TIMER_TCAR1     0x050 /* First captured value of counter register */
#define AM335X_TIMER_TSICR     0x054 /* Control posted mode and functional SW reset */
#define AM335X_TIMER_TCAR2     0x058 /* Second captured value of counter register */



/* Interrupt status register fields */
#define OMAP3_TISR_MAT_IT_FLAG  (1 << 0) /* Pending match interrupt status */
#define OMAP3_TISR_OVF_IT_FLAG  (1 << 1) /* Pending overflow interrupt status */
#define OMAP3_TISR_TCAR_IT_FLAG (1 << 2) /* Pending capture interrupt status */

/* Interrupt enable register fields */
#define OMAP3_TIER_MAT_IT_ENA  (1 << 0) /* Enable match interrupt */
#define OMAP3_TIER_OVF_IT_ENA  (1 << 1) /* Enable overflow interrupt */
#define OMAP3_TIER_TCAR_IT_ENA (1 << 2) /* Enable capture interrupt */

/* Timer control fields */
#define OMAP3_TCLR_ST       (1 << 0)  /* Start/stop timer */
#define OMAP3_TCLR_AR       (1 << 1)  /* Autoreload or one-shot mode */
#define OMAP3_TCLR_PRE      (1 << 5)  /* Prescaler on */
#define OMAP3_TCLR_PTV      2
#define OMAP3_TCLR_OVF_TRG  (1 << 10) /* Overflow trigger */


#define OMAP3_CM_CLKSEL_GFX		0x48004b40
#define OMAP3_CM_CLKEN_PLL		0x48004d00
#define OMAP3_CM_FCLKEN1_CORE	0x48004A00
#define OMAP3_CM_CLKSEL_CORE	0x48004A40 /* GPT10 src clock sel. */
#define OMAP3_CM_FCLKEN_PER		0x48005000
#define OMAP3_CM_CLKSEL_PER		0x48005040
#define OMAP3_CM_CLKSEL_WKUP    0x48004c40 /* GPT1 source clock selection */


#define CM_MODULEMODE_MASK (0x3 << 0)
#define CM_MODULEMODE_ENABLE      (0x2 << 0)
#define CM_MODULEMODE_DISABLED     (0x0 << 0)

#define CM_CLKCTRL_IDLEST         (0x3 << 16)
#define CM_CLKCTRL_IDLEST_FUNC    (0x0 << 16)
#define CM_CLKCTRL_IDLEST_TRANS   (0x1 << 16)
#define CM_CLKCTRL_IDLEST_IDLE    (0x2 << 16)
#define CM_CLKCTRL_IDLEST_DISABLE (0x3 << 16)

#define CM_WKUP_BASE 0x44E00400 /* Clock Module Wakeup Registers */

#define CM_WKUP_TIMER1_CLKCTRL	(CM_WKUP_BASE + 0xC4) /* This register manages the TIMER1 clocks. [Memory Mapped] */


#define CM_PER_BASE 0x44E00000 /* Clock Module Peripheral Registers */
#define CM_PER_TIMER7_CLKCTRL	(CM_PER_BASE + 0x7C) /* This register manages the TIMER7 clocks. [Memory Mapped] */



/* CM_DPLL registers */


#define CM_DPLL_BASE 	0x44E00500 /* Clock Module PLL Registers */

#define CLKSEL_TIMER1MS_CLK (CM_DPLL_BASE + 0x28)


#define CLKSEL_TIMER1MS_CLK_SEL_MASK (0x7 << 0)
#define CLKSEL_TIMER1MS_CLK_SEL_SEL1 (0x0 << 0) /* Select CLK_M_OSC clock */
#define CLKSEL_TIMER1MS_CLK_SEL_SEL2 (0x1 << 0) /* Select CLK_32KHZ clock */
#define CLKSEL_TIMER1MS_CLK_SEL_SEL3 (0x2 << 0) /* Select TCLKIN clock */
#define CLKSEL_TIMER1MS_CLK_SEL_SEL4 (0x3 << 0) /* Select CLK_RC32K clock */
#define CLKSEL_TIMER1MS_CLK_SEL_SEL5 (0x4 << 0) /* Selects the CLK_32768 from 32KHz Crystal Osc */

#define CLKSEL_TIMER7_CLK   (CM_DPLL_BASE + 0x04)
#define CLKSEL_TIMER7_CLK_SEL_MASK (0x3 << 0)
#define CLKSEL_TIMER7_CLK_SEL_SEL1 (0x0 << 0) /* Select TCLKIN clock */
#define CLKSEL_TIMER7_CLK_SEL_SEL2 (0x1 << 0) /* Select CLK_M_OSC clock */
#define CLKSEL_TIMER7_CLK_SEL_SEL3 (0x2 << 0) /* Select CLK_32KHZ clock */
#define CLKSEL_TIMER7_CLK_SEL_SEL4 (0x3 << 0) /* Reserved */




#define OMAP3_CLKSEL_GPT1    (1 << 0)
#define OMAP3_CLKSEL_GPT10    (1 << 6)
#define OMAP3_CLKSEL_GPT11    (1 << 7)


#define TIMER_FREQ  1000    /* clock frequency for OMAP timer (1ms) */
#define TIMER_COUNT(freq) (TIMER_FREQ/(freq)) /* initial value for counter*/

#define __arch_getb(a)      (*(volatile unsigned char *)(a))
#define __arch_getw(a)      (*(volatile unsigned short *)(a))
#define __arch_getl(a)      (*(volatile unsigned int *)(a))

#define __arch_putb(v,a)    (*(volatile unsigned char *)(a) = (v))
#define __arch_putw(v,a)    (*(volatile unsigned short *)(a) = (v))
#define __arch_putl(v,a)    (*(volatile unsigned int *)(a) = (v))

#define writeb(v,c) ({ unsigned char  __v = v; __arch_putb(__v,c); __v; })
#define writew(v,c) ({ unsigned short __v = v; __arch_putw(__v,c); __v; })
#define writel(v,c) ({ unsigned int __v = v; __arch_putl(__v,c); __v; })

#define readb(c)  ({ unsigned char  __v = __arch_getb(c); __v; })
#define readw(c)  ({ unsigned short __v = __arch_getw(c); __v; })
#define readl(c)  ({ unsigned int __v = __arch_getl(c); __v; })

#define SYSTEM_CLOCK_12       12000000
#define SYSTEM_CLOCK_13       13000000
#define SYSTEM_CLOCK_192      19200000
#define SYSTEM_CLOCK_96       96000000

#define OMAP34XX_CORE_L4_IO_BASE  0x48000000

#if !defined(IS_DM3730) && !defined(IS_AM335X)
#error Unrecognized BSP configured.
#endif

#if IS_DM3730
#define BSP_DEVICEMEM_START	0x48000000
#define BSP_DEVICEMEM_END	0x5F000000
#endif

#if IS_AM335X
#define BSP_DEVICEMEM_START	0x44000000
#define BSP_DEVICEMEM_END	0x57000000
#endif

/* per-target uart config */
#if IS_AM335X
#define BSP_CONSOLE_UART	1
#define BSP_CONSOLE_UART_BASE	BEAGLE_BASE_UART_1
#define BSP_CONSOLE_UART_IRQ	OMAP3_UART1_IRQ
#define BEAGLE_BASE_UART_1	0x44E09000
#define BEAGLE_BASE_UART_2	0x48022000
#define BEAGLE_BASE_UART_3	0x48024000
#endif

/* per-target uart config */
#if IS_DM3730
#define BSP_CONSOLE_UART	3
#define BSP_CONSOLE_UART_BASE	BEAGLE_BASE_UART_3
#define BSP_CONSOLE_UART_IRQ	OMAP3_UART3_IRQ
#define BEAGLE_BASE_UART_1	0x4806A000
#define BEAGLE_BASE_UART_2	0x4806C000
#define BEAGLE_BASE_UART_3	0x49020000
#endif

/* i2c stuff */
typedef struct {
  uint32_t rx_or_tx;
  uint32_t stat;
  uint32_t ctrl;
  uint32_t clk_hi;
  uint32_t clk_lo;
  uint32_t adr;
  uint32_t rxfl;
  uint32_t txfl;
  uint32_t rxb;
  uint32_t txb;
  uint32_t s_tx;
  uint32_t s_txfl;
} beagle_i2c;

/* sctlr */
/* Read System Control Register */
static inline uint32_t read_sctlr()
{
  uint32_t ctl;

  asm volatile("mrc p15, 0, %[ctl], c1, c0, 0 @ Read SCTLR\n\t"
    : [ctl] "=r" (ctl));

  return ctl;
}

/* Write System Control Register */
static inline void write_sctlr(uint32_t ctl)
{
  asm volatile("mcr p15, 0, %[ctl], c1, c0, 0 @ Write SCTLR\n\t"
    : : [ctl] "r" (ctl));
  isb();
}

/* Read Auxiliary Control Register */
static inline uint32_t read_actlr()
{
  uint32_t ctl;

       	asm volatile("mrc p15, 0, %[ctl], c1, c0, 1 @ Read ACTLR\n\t"
       		: [ctl] "=r" (ctl));

       	return ctl;
}

/* Write Auxiliary Control Register */
static inline void write_actlr(uint32_t ctl)
{
  asm volatile("mcr p15, 0, %[ctl], c1, c0, 1 @ Write ACTLR\n\t"
    : : [ctl] "r" (ctl));

       	isb();
}

/* Write Translation Table Base Control Register */
static inline void write_ttbcr(uint32_t bcr)
{
        asm volatile("mcr p15, 0, %[bcr], c2, c0, 2 @ Write TTBCR\n\t"
                        : : [bcr] "r" (bcr));

        isb();
}

/* Read Domain Access Control Register */
static inline uint32_t read_dacr()
{
        uint32_t dacr;

        asm volatile("mrc p15, 0, %[dacr], c3, c0, 0 @ Read DACR\n\t"
                        : [dacr] "=r" (dacr));

        return dacr;
}


/* Write Domain Access Control Register */
static inline void write_dacr(uint32_t dacr)
{
        asm volatile("mcr p15, 0, %[dacr], c3, c0, 0 @ Write DACR\n\t"
                        : : [dacr] "r" (dacr));

        isb();
}

#define ARM_TTBR_ADDR_MASK (0xffffc000)
#define ARM_TTBR_OUTER_NC    (0x0 << 3) /* Non-cacheable*/
#define ARM_TTBR_OUTER_WBWA  (0x1 << 3) /* Outer Write-Back */
#define ARM_TTBR_OUTER_WT    (0x2 << 3) /* Outer Write-Through */
#define ARM_TTBR_OUTER_WBNWA (0x3 << 3) /* Outer Write-Back */
#define ARM_TTBR_FLAGS_CACHED ARM_TTBR_OUTER_WBWA

static inline void refresh_tlb(void)
{
        dsb();

        /* Invalidate entire unified TLB */
        asm volatile("mcr p15, 0, %[zero], c8, c7, 0 @ TLBIALL\n\t" : : [zero] "r" (0));

#if 0
        /* Invalidate entire data TLB */
        asm volatile("mcr p15, 0, %[zero], c8, c6, 0" : : [zero] "r" (0));

        /* Invalidate entire instruction TLB */
        asm volatile("mcr p15, 0, %[zero], c8, c5, 0" : : [zero] "r" (0));
#endif

        /*
         * Invalidate all instruction caches to PoU.
         * Also flushes branch target cache.
         */
        asm volatile("mcr p15, 0, %[zero], c7, c5, 0" : : [zero] "r" (0));

        /* Invalidate entire branch predictor array */
        asm volatile("mcr p15, 0, %[zero], c7, c5, 6" : : [zero] "r" (0)); /* flush BTB */

        dsb();
        isb();
}

/* Read Translation Table Base Register 0 */
static inline uint32_t read_ttbr0()
{
        uint32_t bar;

        asm volatile("mrc p15, 0, %[bar], c2, c0, 0 @ Read TTBR0\n\t"
                        : [bar] "=r" (bar));

        return bar & ARM_TTBR_ADDR_MASK;
}


/* Read Translation Table Base Register 0 */
static inline uint32_t read_ttbr0_unmasked()
{
        uint32_t bar;

        asm volatile("mrc p15, 0, %[bar], c2, c0, 0 @ Read TTBR0\n\t"
                        : [bar] "=r" (bar));

        return bar;
}

/* Write Translation Table Base Register 0 */
static inline void write_ttbr0(uint32_t bar)
{
        dsb();
        isb();
        /* In our setup TTBR contains the base address *and* the flags
           but other pieces of the kernel code expect ttbr to be the
           base address of the l1 page table. We therefore add the
           flags here and remove them in the read_ttbr0 */
        uint32_t v  =  (bar  & ARM_TTBR_ADDR_MASK ) | ARM_TTBR_FLAGS_CACHED;
        asm volatile("mcr p15, 0, %[bar], c2, c0, 0 @ Write TTBR0\n\t"
                        : : [bar] "r" (v));

        refresh_tlb();
}

/* cpu control flags */
/* CPU control register (CP15 register 1) */
#define CPU_CONTROL_MMU_ENABLE  0x00000001 /* M: MMU/Protection unit enable */
#define CPU_CONTROL_AFLT_ENABLE 0x00000002 /* A: Alignment fault enable */
#define CPU_CONTROL_DC_ENABLE   0x00000004 /* C: IDC/DC enable */
#define CPU_CONTROL_WBUF_ENABLE 0x00000008 /* W: Write buffer enable */
#define CPU_CONTROL_32BP_ENABLE 0x00000010 /* P: 32-bit exception handlers */
#define CPU_CONTROL_32BD_ENABLE 0x00000020 /* D: 32-bit addressing */
#define CPU_CONTROL_LABT_ENABLE 0x00000040 /* L: Late abort enable */
#define CPU_CONTROL_BEND_ENABLE 0x00000080 /* B: Big-endian mode */
#define CPU_CONTROL_SYST_ENABLE 0x00000100 /* S: System protection bit */
#define CPU_CONTROL_ROM_ENABLE  0x00000200 /* R: ROM protection bit */
#define CPU_CONTROL_CPCLK       0x00000400 /* F: Implementation defined */
#define CPU_CONTROL_SWP_ENABLE  0x00000400 /* SW: SWP{B} perform normally. */
#define CPU_CONTROL_BPRD_ENABLE 0x00000800 /* Z: Branch prediction enable */
#define CPU_CONTROL_IC_ENABLE   0x00001000 /* I: IC enable */
#define CPU_CONTROL_VECRELOC    0x00002000 /* V: Vector relocation */
#define CPU_CONTROL_ROUNDROBIN  0x00004000 /* RR: Predictable replacement */
#define CPU_CONTROL_V4COMPAT    0x00008000 /* L4: ARMv4 compat LDR R15 etc */
#define CPU_CONTROL_FI_ENABLE   0x00200000 /* FI: Low interrupt latency */
#define CPU_CONTROL_UNAL_ENABLE 0x00400000 /* U: unaligned data access */
#define CPU_CONTROL_XP_ENABLE   0x00800000 /* XP: extended page table */
#define CPU_CONTROL_V_ENABLE    0x01000000 /* VE: Interrupt vectors enable */
#define CPU_CONTROL_EX_BEND     0x02000000 /* EE: exception endianness */
#define CPU_CONTROL_NMFI        0x08000000 /* NMFI: Non maskable FIQ */
#define CPU_CONTROL_TR_ENABLE   0x10000000 /* TRE: */
#define CPU_CONTROL_AF_ENABLE   0x20000000 /* AFE: Access flag enable */
#define CPU_CONTROL_TE_ENABLE   0x40000000 /* TE: Thumb Exception enable */

#define CPU_CONTROL_IDC_ENABLE  CPU_CONTROL_DC_ENABLE

/* VM bits */
/* Big page (1MB section) specific flags. */
#define ARM_VM_SECTION                  (1 << 1)  /* 1MB section */
#define ARM_VM_SECTION_PRESENT          (1 << 1)  /* Section is present */
#define ARM_VM_SECTION_B                (1 << 2)  /* B Bit */
#define ARM_VM_SECTION_C                (1 << 3)  /* C Bit */
#define ARM_VM_SECTION_DOMAIN           (0xF << 5) /* Domain Number */
#define ARM_VM_SECTION_SUPER            (0x1 << 10) /* Super access only AP[1:0] */
#define ARM_VM_SECTION_USER             (0x3 << 10) /* Super/User access AP[1:0] */
#define ARM_VM_SECTION_TEX0             (1 << 12) /* TEX[0] */
#define ARM_VM_SECTION_TEX1             (1 << 13) /* TEX[1] */
#define ARM_VM_SECTION_TEX2             (1 << 14) /* TEX[2] */
#define ARM_VM_SECTION_RO               (1 << 15)   /* Read only access AP[2] */
#define ARM_VM_SECTION_SHAREABLE        (1 << 16)  /* Shareable */
#define ARM_VM_SECTION_NOTGLOBAL        (1 << 17)  /* Not Global */

/* inner and outer write-back, write-allocate */
#define ARM_VM_SECTION_WB       (ARM_VM_SECTION_TEX2 | ARM_VM_SECTION_TEX0 | ARM_VM_SECTION_B )
/* inner and outer write-through, no write-allocate */
#define ARM_VM_SECTION_WT       (ARM_VM_SECTION_TEX2 | ARM_VM_SECTION_TEX1 | ARM_VM_SECTION_C )
/* Inner , Write through, No Write Allocate Outer - Write Back, Write Allocate */
#define ARM_VM_SECTION_WTWB     (ARM_VM_SECTION_TEX2 | ARM_VM_SECTION_TEX0 | ARM_VM_SECTION_C )
/* shareable device */

#define ARM_VM_SECTION_CACHED ARM_VM_SECTION_WTWB

#define ARM_VM_SECTION_DEVICE   (ARM_VM_SECTION_B)

/* Behaviour on fatal error; default: test-friendly.
 * set breakpoint to bsp_fatal_extension.
 */
/* don't do this to allow tests to fail noninteractively */
/* #define BSP_PRESS_KEY_FOR_RESET	1 */ 
#define BSP_PRINT_EXCEPTION_CONTEXT 1	/* human-readable exception info */
#define BSP_RESET_BOARD_AT_EXIT 1	/* causes qemu to exit, signaling end of test */


/**
 * @defgroup arm_beagle Beaglebone, Beagleboard Support
 *
 * @ingroup bsp_arm
 *
 * @brief Beaglebones and beagleboards support package
 *
 */

/**
 * @brief Beagleboard specific set up of the MMU.
 *
 * Provide in the application to override.
 */
BSP_START_TEXT_SECTION void beagle_setup_mmu_and_cache(void);

#endif /* LIBBSP_ARM_BEAGLE_BSP_H */

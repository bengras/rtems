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
 * http://www.rtems.org/license/LICENSE.
 *
 * Modified by Ben Gras <beng@shrike-systems.com> to add lots
 * of beagleboard/beaglebone definitions, delete lpc32xx specific
 * ones, and merge with some other header files.
 */

/* Interrupt controller memory map */
#define OMAP3_DM37XX_INTR_BASE 0x48200000 /* INTCPS physical address */

/* Interrupt controller memory map */
#define OMAP3_AM335X_INTR_BASE 0x48200000 /* INTCPS physical address */

#define AM335X_INT_EMUINT             0
    /* Emulation interrupt (EMUICINTR) */
#define AM335X_INT_COMMTX             1
    /* CortexA8 COMMTX */
#define AM335X_INT_COMMRX             2
    /* CortexA8 COMMRX */
#define AM335X_INT_BENCH              3
    /* CortexA8 NPMUIRQ */
#define AM335X_INT_ELM_IRQ            4
    /* Sinterrupt (Error location process completion) */
#define AM335X_INT_NMI                7
    /* nmi_int */
#define AM335X_INT_L3DEBUG            9
    /* l3_FlagMux_top_FlagOut1 */
#define AM335X_INT_L3APPINT           10
    /* l3_FlagMux_top_FlagOut0  */
#define AM335X_INT_PRCMINT            11
    /* irq_mpu */
#define AM335X_INT_EDMACOMPINT        12
    /* tpcc_int_pend_po0 */
#define AM335X_INT_EDMAMPERR          13
    /* tpcc_mpint_pend_po */
#define AM335X_INT_EDMAERRINT         14
    /* tpcc_errint_pend_po */
#define AM335X_INT_ADC_TSC_GENINT     16
    /* gen_intr_pend */
#define AM335X_INT_USBSSINT           17
    /* usbss_intr_pend */
#define AM335X_INT_USB0               18
    /* usb0_intr_pend */
#define AM335X_INT_USB1               19
    /* usb1_intr_pend */
#define AM335X_INT_PRUSS1_EVTOUT0     20
    /* pr1_host_intr0_intr_pend */
#define AM335X_INT_PRUSS1_EVTOUT1     21
    /* pr1_host_intr1_intr_pend */
#define AM335X_INT_PRUSS1_EVTOUT2     22
    /* pr1_host_intr2_intr_pend */
#define AM335X_INT_PRUSS1_EVTOUT3     23
    /* pr1_host_intr3_intr_pend */
#define AM335X_INT_PRUSS1_EVTOUT4     24
    /* pr1_host_intr4_intr_pend */
#define AM335X_INT_PRUSS1_EVTOUT5     25
    /* pr1_host_intr5_intr_pend */
#define AM335X_INT_PRUSS1_EVTOUT6     26
    /* pr1_host_intr6_intr_pend */
#define AM335X_INT_PRUSS1_EVTOUT7     27
    /* pr1_host_intr7_intr_pend */
#define AM335X_INT_MMCSD1INT          28
    /* MMCSD1  SINTERRUPTN */
#define AM335X_INT_MMCSD2INT          29
    /* MMCSD2  SINTERRUPT */
#define AM335X_INT_I2C2INT            30
    /* I2C2  POINTRPEND */
#define AM335X_INT_eCAP0INT           31
    /* ecap_intr_intr_pend */
#define AM335X_INT_GPIOINT2A          32
    /* GPIO 2  POINTRPEND1 */
#define AM335X_INT_GPIOINT2B          33
    /* GPIO 2  POINTRPEND2 */
#define AM335X_INT_USBWAKEUP          34
    /* USBSS  slv0p_Swakeup */
#define AM335X_INT_LCDCINT            36
    /* LCDC  lcd_irq */
#define AM335X_INT_GFXINT             37
    /* SGX530  THALIAIRQ */
#define AM335X_INT_ePWM2INT           39
    /* (PWM Subsystem)  epwm_intr_intr_pend */
#define AM335X_INT_3PGSWRXTHR0        40
    /* (Ethernet)  c0_rx_thresh_pend (RX_THRESH_PULSE) */
#define AM335X_INT_3PGSWRXINT0        41
    /* CPSW (Ethernet)  c0_rx_pend */
#define AM335X_INT_3PGSWTXINT0        42
    /* CPSW (Ethernet)  c0_tx_pend */
#define AM335X_INT_3PGSWMISC0         43
    /* CPSW (Ethernet)  c0_misc_pend */
#define AM335X_INT_UART3INT           44
    /* UART3  niq */
#define AM335X_INT_UART4INT           45
    /* UART4  niq */
#define AM335X_INT_UART5INT           46
    /* UART5  niq */
#define AM335X_INT_eCAP1INT           47
    /* (PWM Subsystem)  ecap_intr_intr_pend */
#define AM335X_INT_DCAN0_INT0         52
    /* DCAN0  dcan_intr0_intr_pend */
#define AM335X_INT_DCAN0_INT1         53
    /* DCAN0  dcan_intr1_intr_pend */
#define AM335X_INT_DCAN0_PARITY       54
    /* DCAN0  dcan_uerr_intr_pend */
#define AM335X_INT_DCAN1_INT0         55
    /* DCAN1  dcan_intr0_intr_pend */
#define AM335X_INT_DCAN1_INT1         56
    /* DCAN1  dcan_intr1_intr_pend */
#define AM335X_INT_DCAN1_PARITY       57
    /* DCAN1  dcan_uerr_intr_pend */
#define AM335X_INT_ePWM0_TZINT        58
    /* eHRPWM0 TZ interrupt (PWM  epwm_tz_intr_pend Subsystem) */
#define AM335X_INT_ePWM1_TZINT        59
    /* eHRPWM1 TZ interrupt (PWM  epwm_tz_intr_pend Subsystem) */
#define AM335X_INT_ePWM2_TZINT        60
    /* eHRPWM2 TZ interrupt (PWM  epwm_tz_intr_pend Subsystem) */
#define AM335X_INT_eCAP2INT           61
    /* eCAP2 (PWM Subsystem)  ecap_intr_intr_pend */
#define AM335X_INT_GPIOINT3A          62
    /* GPIO 3  POINTRPEND1 */
#define AM335X_INT_GPIOINT3B          63
    /* GPIO 3  POINTRPEND2 */
#define AM335X_INT_MMCSD0INT          64
    /* MMCSD0  SINTERRUPTN */
#define AM335X_INT_SPI0INT            65
    /* McSPI0  SINTERRUPTN */
#define AM335X_INT_TINT0              66
    /* Timer0  POINTR_PEND */
#define AM335X_INT_TINT1_1MS          67
    /* DMTIMER_1ms  POINTR_PEND */
#define AM335X_INT_TINT2              68
    /* DMTIMER2  POINTR_PEND */
#define AM335X_INT_TINT3              69
    /* DMTIMER3  POINTR_PEND */
#define AM335X_INT_I2C0INT            70
    /* I2C0  POINTRPEND */
#define AM335X_INT_I2C1INT            71
    /* I2C1  POINTRPEND */
#define AM335X_INT_UART0INT           72
    /* UART0  niq */
#define AM335X_INT_UART1INT           73
    /* UART1  niq */
#define AM335X_INT_UART2INT           74
    /* UART2  niq */
#define AM335X_INT_RTCINT             75
    /* RTC  timer_intr_pend */
#define AM335X_INT_RTCALARMINT        76
    /* RTC  alarm_intr_pend */
#define AM335X_INT_MBINT0             77
    /* Mailbox0 (mail_u0_irq)  initiator_sinterrupt_q_n */
#define AM335X_INT_M3_TXEV            78
    /* Wake M3 Subsystem  TXEV */
#define AM335X_INT_eQEP0INT           79
    /* eQEP0 (PWM Subsystem)  eqep_intr_intr_pend */
#define AM335X_INT_MCATXINT0          80
    /* McASP0  mcasp_x_intr_pend */
#define AM335X_INT_MCARXINT0          81
    /* McASP0  mcasp_r_intr_pend */
#define AM335X_INT_MCATXINT1          82
    /* McASP1  mcasp_x_intr_pend */
#define AM335X_INT_MCARXINT1          83
    /* McASP1  mcasp_r_intr_pend */
#define AM335X_INT_ePWM0INT           86
    /* (PWM Subsystem)  epwm_intr_intr_pend */
#define AM335X_INT_ePWM1INT           87
    /* (PWM Subsystem)  epwm_intr_intr_pend */
#define AM335X_INT_eQEP1INT           88
    /* (PWM Subsystem)  eqep_intr_intr_pend */
#define AM335X_INT_eQEP2INT           89
    /* (PWM Subsystem)  eqep_intr_intr_pend */
#define AM335X_INT_DMA_INTR_PIN2      90
    /* External DMA/Interrupt Pin2  */
#define AM335X_INT_WDT1INT            91
    /* (Public Watchdog) WDTIMER1 PO_INT_PEND */
#define AM335X_INT_TINT4              92
    /* DMTIMER4  POINTR_PEN */
#define AM335X_INT_TINT5              93
    /* DMTIMER5  POINTR_PEN */
#define AM335X_INT_TINT6              94
    /* DMTIMER6  POINTR_PEND */
#define AM335X_INT_TINT7              95
    /* DMTIMER7  POINTR_PEND */
#define AM335X_INT_GPIOINT0A          96
    /* GPIO 0  POINTRPEND1 */
#define AM335X_INT_GPIOINT0B          97
    /* GPIO 0  POINTRPEND2 */
#define AM335X_INT_GPIOINT1A          98
    /* GPIO 1  POINTRPEND1 */
#define AM335X_INT_GPIOINT1B          99
    /* GPIO 1  POINTRPEND2 */
#define AM335X_INT_GPMCINT            100
    /* GPMC  gpmc_sinterrupt */
#define AM335X_INT_DDRERR0            101
    /* EMIF  sys_err_intr_pend */
#define AM335X_INT_TCERRINT0          112
    /* TPTC0  tptc_erint_pend_po */
#define AM335X_INT_TCERRINT1          113
    /* TPTC1  tptc_erint_pend_po */
#define AM335X_INT_TCERRINT2          114
    /* TPTC2  tptc_erint_pend_po */
#define AM335X_INT_ADC_TSC_PENINT     115
    /* ADC_TSC  pen_intr_pend */
#define AM335X_INT_SMRFLX_Sabertooth  120
    /* Smart Reflex 0  intrpen */
#define AM335X_INT_SMRFLX_Core        121
    /* Smart Reflex 1  intrpend */
#define AM335X_INT_DMA_INTR_PIN0      123
    /* pi_x_dma_event_intr0 (xdma_event_intr0) */
#define AM335X_INT_DMA_INTR_PIN1      124
    /* pi_x_dma_event_intr1 (xdma_event_intr1) */
#define AM335X_INT_SPI1INT            125
    /* McSPI1  SINTERRUPTN */

#define OMAP3_AM335X_NR_IRQ_VECTORS    125

#define AM335X_DMTIMER0_BASE      0x44E05000
    /* DMTimer0 Registers */
#define AM335X_DMTIMER1_1MS_BASE  0x44E31000
    /* DMTimer1 1ms Registers (Accurate 1ms timer) */
#define AM335X_DMTIMER2_BASE      0x48040000
    /*  DMTimer2 Registers */
#define AM335X_DMTIMER3_BASE      0x48042000
    /*  DMTimer3 Registers */
#define AM335X_DMTIMER4_BASE      0x48044000
    /* DMTimer4 Registers  */
#define AM335X_DMTIMER5_BASE      0x48046000
    /* DMTimer5 Registers  */
#define AM335X_DMTIMER6_BASE      0x48048000
    /*  DMTimer6 Registers */
#define AM335X_DMTIMER7_BASE      0x4804A000
    /*  DMTimer7 Registers */

/* General-purpose timer registers
   AM335x non 1MS timers have different offsets */
#define AM335X_TIMER_TIDR             0x000
    /* IP revision code */
#define AM335X_TIMER_TIOCP_CFG        0x010
    /* Controls params for GP timer L4 interface */
#define AM335X_TIMER_IRQSTATUS_RAW    0x024
    /* Timer IRQSTATUS Raw Register */
#define AM335X_TIMER_IRQSTATUS        0x028
    /* Timer IRQSTATUS Register */
#define AM335X_TIMER_IRQENABLE_SET    0x02C
    /* Timer IRQENABLE Set Register */
#define AM335X_TIMER_IRQENABLE_CLR    0x030
    /* Timer IRQENABLE Clear Register */
#define AM335X_TIMER_IRQWAKEEN        0x034
    /* Timer IRQ Wakeup Enable Register */
#define AM335X_TIMER_TCLR             0x038
    /* Controls optional features */
#define AM335X_TIMER_TCRR             0x03C
    /* Internal counter value */
#define AM335X_TIMER_TLDR             0x040
    /* Timer load value */
#define AM335X_TIMER_TTGR             0x044
    /* Triggers counter reload */
#define AM335X_TIMER_TWPS             0x048
    /* Indicates if Write-Posted pending */
#define AM335X_TIMER_TMAR             0x04C
    /* Value to be compared with counter */
#define AM335X_TIMER_TCAR1            0x050
    /* First captured value of counter register */
#define AM335X_TIMER_TSICR            0x054
    /* Control posted mode and functional SW reset */
#define AM335X_TIMER_TCAR2            0x058
    /* Second captured value of counter register */
#define AM335X_WDT_BASE                0x44E35000
    /* Watchdog timer */
#define AM335X_WDT_WWPS                0x34
    /* Command posted status */
#define AM335X_WDT_WSPR                0x48
    /* Activate/deactivate sequence */

/* RTC registers */
#define AM335X_RTC_BASE         0x44E3E000
#define AM335X_RTC_SECS         0x0
#define AM335X_RTC_MINS         0x4
#define AM335X_RTC_HOURS        0x8
#define AM335X_RTC_DAYS         0xc
#define AM335X_RTC_MONTHS       0x10
#define AM335X_RTC_YEARS        0x14
#define AM335X_RTC_WEEKS        0x18
#define AM335X_RTC_CTRL_REG     0x40
#define AM335X_RTC_STATUS_REG   0x44
#define AM335X_RTC_REV_REG      0x74
#define AM335X_RTC_SYSCONFIG    0x78
#define AM335X_RTC_KICK0        0x6c
#define AM335X_RTC_KICK1        0x70
#define AM335X_RTC_OSC_CLOCK    0x54

#define AM335X_RTC_KICK0_KEY    0x83E70B13
#define AM335X_RTC_KICK1_KEY    0x95A4F1E0

/* GPIO memory-mapped registers */

#define AM335X_GPIO0_BASE           0x44E07000
    /* GPIO Bank 0 base Register */
#define AM335X_GPIO1_BASE           0x4804C000
    /* GPIO Bank 1 base Register */
#define AM335X_GPIO2_BASE           0x481AC000
    /* GPIO Bank 2 base Register */
#define AM335X_GPIO3_BASE           0x481AE000
    /* GPIO Bank 3 base Register */

#define AM335X_GPIO_REVISION        0x00
#define AM335X_GPIO_SYSCONFIG       0x10
#define AM335X_GPIO_EOI             0x20
#define AM335X_GPIO_IRQSTATUS_RAW_0 0x24
#define AM335X_GPIO_IRQSTATUS_RAW_1 0x28
#define AM335X_GPIO_IRQSTATUS_0     0x2C
#define AM335X_GPIO_IRQSTATUS_1     0x30
#define AM335X_GPIO_IRQSTATUS_SET_0 0x34
#define AM335X_GPIO_IRQSTATUS_SET_1 0x38
#define AM335X_GPIO_IRQSTATUS_CLR_0 0x3C
#define AM335X_GPIO_IRQSTATUS_CLR_1 0x40
#define AM335X_GPIO_IRQWAKEN_0      0x44
#define AM335X_GPIO_IRQWAKEN_1      0x48
#define AM335X_GPIO_SYSSTATUS       0x114
#define AM335X_GPIO_CTRL            0x130
#define AM335X_GPIO_OE              0x134
#define AM335X_GPIO_DATAIN          0x138
#define AM335X_GPIO_DATAOUT         0x13C
#define AM335X_GPIO_LEVELDETECT0    0x140
#define AM335X_GPIO_LEVELDETECT1    0x144
#define AM335X_GPIO_RISINGDETECT    0x148
#define AM335X_GPIO_FALLINGDETECT   0x14C
#define AM335X_GPIO_DEBOUNCENABLE   0x150
#define AM335X_GPIO_DEBOUNCINGTIME  0x154
#define AM335X_GPIO_CLEARDATAOUT    0x190
#define AM335X_GPIO_SETDATAOUT      0x194

/* AM335X Pad Configuration Register Base */
#define AM335X_PADCONF_BASE 0x44E10000

/* Memory mapped register offset for Control Module */
#define AM335X_CONF_GPMC_AD0 0x800
#define AM335X_CONF_GPMC_AD1 0x804
#define AM335X_CONF_GPMC_AD2 0x808
#define AM335X_CONF_GPMC_AD3 0x80C
#define AM335X_CONF_GPMC_AD4 0x810
#define AM335X_CONF_GPMC_AD5 0x814
#define AM335X_CONF_GPMC_AD6 0x818
#define AM335X_CONF_GPMC_AD7 0x81C
#define AM335X_CONF_GPMC_AD8 0x820
#define AM335X_CONF_GPMC_AD9 0x824
#define AM335X_CONF_GPMC_AD10 0x828
#define AM335X_CONF_GPMC_AD11 0x82C
#define AM335X_CONF_GPMC_AD12 0x830
#define AM335X_CONF_GPMC_AD13 0x834
#define AM335X_CONF_GPMC_AD14 0x838
#define AM335X_CONF_GPMC_AD15 0x83C
#define AM335X_CONF_GPMC_A0 0x840
#define AM335X_CONF_GPMC_A1 0x844
#define AM335X_CONF_GPMC_A2 0x848
#define AM335X_CONF_GPMC_A3 0x84C
#define AM335X_CONF_GPMC_A4 0x850
#define AM335X_CONF_GPMC_A5 0x854
#define AM335X_CONF_GPMC_A6 0x858
#define AM335X_CONF_GPMC_A7 0x85C
#define AM335X_CONF_GPMC_A8 0x860
#define AM335X_CONF_GPMC_A9 0x864
#define AM335X_CONF_GPMC_A10 0x868
#define AM335X_CONF_GPMC_A11 0x86C
#define AM335X_CONF_GPMC_WAIT0 0x870
#define AM335X_CONF_GPMC_WPN 0x874
#define AM335X_CONF_GPMC_BEN1 0x878
#define AM335X_CONF_GPMC_CSN0 0x87C
#define AM335X_CONF_GPMC_CSN1 0x880
#define AM335X_CONF_GPMC_CSN2 0x884
#define AM335X_CONF_GPMC_CSN3 0x888
#define AM335X_CONF_GPMC_CLK 0x88C
#define AM335X_CONF_GPMC_ADVN_ALE 0x890
#define AM335X_CONF_GPMC_OEN_REN 0x894
#define AM335X_CONF_GPMC_WEN 0x898
#define AM335X_CONF_GPMC_BEN0_CLE 0x89C
#define AM335X_CONF_LCD_DATA0 0x8A0
#define AM335X_CONF_LCD_DATA1 0x8A4
#define AM335X_CONF_LCD_DATA2 0x8A8
#define AM335X_CONF_LCD_DATA3 0x8AC
#define AM335X_CONF_LCD_DATA4 0x8B0
#define AM335X_CONF_LCD_DATA5 0x8B4
#define AM335X_CONF_LCD_DATA6 0x8B8
#define AM335X_CONF_LCD_DATA7 0x8BC
#define AM335X_CONF_LCD_DATA8 0x8C0
#define AM335X_CONF_LCD_DATA9 0x8C4
#define AM335X_CONF_LCD_DATA10 0x8C8
#define AM335X_CONF_LCD_DATA11 0x8CC
#define AM335X_CONF_LCD_DATA12 0x8D0
#define AM335X_CONF_LCD_DATA13 0x8D4
#define AM335X_CONF_LCD_DATA14 0x8D8
#define AM335X_CONF_LCD_DATA15 0x8DC
#define AM335X_CONF_LCD_VSYNC 0x8E0
#define AM335X_CONF_LCD_HSYNC 0x8E4
#define AM335X_CONF_LCD_PCLK 0x8E8
#define AM335X_CONF_LCD_AC_BIAS_EN 0x8EC
#define AM335X_CONF_MMC0_DAT3 0x8F0
#define AM335X_CONF_MMC0_DAT2 0x8F4
#define AM335X_CONF_MMC0_DAT1 0x8F8
#define AM335X_CONF_MMC0_DAT0 0x8FC
#define AM335X_CONF_MMC0_CLK 0x900
#define AM335X_CONF_MMC0_CMD 0x904
#define AM335X_CONF_MII1_COL 0x908
#define AM335X_CONF_MII1_CRS 0x90C
#define AM335X_CONF_MII1_RX_ER 0x910
#define AM335X_CONF_MII1_TX_EN 0x914
#define AM335X_CONF_MII1_RX_DV 0x918
#define AM335X_CONF_MII1_TXD3 0x91C
#define AM335X_CONF_MII1_TXD2 0x920
#define AM335X_CONF_MII1_TXD1 0x924
#define AM335X_CONF_MII1_TXD0 0x928
#define AM335X_CONF_MII1_TX_CLK 0x92C
#define AM335X_CONF_MII1_RX_CLK 0x930
#define AM335X_CONF_MII1_RXD3 0x934
#define AM335X_CONF_MII1_RXD2 0x938
#define AM335X_CONF_MII1_RXD1 0x93C
#define AM335X_CONF_MII1_RXD0 0x940
#define AM335X_CONF_RMII1_REF_CLK 0x944
#define AM335X_CONF_MDIO 0x948
#define AM335X_CONF_MDC 0x94C
#define AM335X_CONF_SPI0_SCLK 0x950
#define AM335X_CONF_SPI0_D0 0x954
#define AM335X_CONF_SPI0_D1 0x958
#define AM335X_CONF_SPI0_CS0 0x95C
#define AM335X_CONF_SPI0_CS1 0x960
#define AM335X_CONF_ECAP0_IN_PWM0_OUT 0x964
#define AM335X_CONF_UART0_CTSN 0x968
#define AM335X_CONF_UART0_RTSN 0x96C
#define AM335X_CONF_UART0_RXD 0x970
#define AM335X_CONF_UART0_TXD 0x974
#define AM335X_CONF_UART1_CTSN 0x978
#define AM335X_CONF_UART1_RTSN 0x97C
#define AM335X_CONF_UART1_RXD 0x980
#define AM335X_CONF_UART1_TXD 0x984
#define AM335X_CONF_I2C0_SDA 0x988
#define AM335X_CONF_I2C0_SCL 0x98C
#define AM335X_CONF_MCASP0_ACLKX 0x990
#define AM335X_CONF_MCASP0_FSX 0x994
#define AM335X_CONF_MCASP0_AXR0 0x998
#define AM335X_CONF_MCASP0_AHCLKR 0x99C
#define AM335X_CONF_MCASP0_ACLKR 0x9A0
#define AM335X_CONF_MCASP0_FSR 0x9A4
#define AM335X_CONF_MCASP0_AXR1 0x9A8
#define AM335X_CONF_MCASP0_AHCLKX 0x9AC
#define AM335X_CONF_XDMA_EVENT_INTR0 0x9B0
#define AM335X_CONF_XDMA_EVENT_INTR1 0x9B4
#define AM335X_CONF_WARMRSTN 0x9B8
#define AM335X_CONF_NNMI 0x9C0
#define AM335X_CONF_TMS 0x9D0
#define AM335X_CONF_TDI 0x9D4
#define AM335X_CONF_TDO 0x9D8
#define AM335X_CONF_TCK 0x9DC
#define AM335X_CONF_TRSTN 0x9E0
#define AM335X_CONF_EMU0 0x9E4
#define AM335X_CONF_EMU1 0x9E8
#define AM335X_CONF_RTC_PWRONRSTN 0x9F8
#define AM335X_CONF_PMIC_POWER_EN 0x9FC
#define AM335X_CONF_EXT_WAKEUP 0xA00
#define AM335X_CONF_RTC_KALDO_ENN 0xA04
#define AM335X_CONF_USB0_DRVVBUS 0xA1C
#define AM335X_CONF_USB1_DRVVBUS 0xA34

/* Added from include/hw/hw_pwmss.h TI StarterWare*/
#define PWMSS_CLOCK_CONFIG               0x08

#define PWMSS_CLOCK_STATUS               0x0C

#define PWMSS_ECAP_CLK_EN_ACK_SHIFT      0x00

#define PWMSS_ECAP_CLK_STOP_ACK_SHIFT    0x01

#define PWMSS_EHRPWM_CLK_EN_ACK_SHIFT    0x08

#define PWMSS_EHRPWM_CLK_STOP_ACK_SHIFT  0x09  

#define PWMSS_ECAP_CLK_EN_ACK            0x01

#define PWMSS_ECAP_CLK_STOP_ACK          0x02

#define PWMSS_EHRPWM_CLK_EN_ACK          0x100

#define PWMSS_EHRPWM_CLK_STOP_ACK        0x200

/*Added from include/ehrpwm.h TI Starterware*/
/* TB Period load */
#define EHRPWM_PRD_LOAD_SHADOW_MASK		EHRPWM_TBCTL_PRDLD

/* Counter mode */
#define EHRPWM_COUNTER_MODE_MASK		EHRPWM_TBCTL_CTRMODE 
#define EHRPWM_COUNT_UP				(EHRPWM_TBCTL_CTRMODE_UP << \
	       						EHRPWM_TBCTL_CTRMODE_SHIFT)
#define EHRPWM_COUNT_DOWN			(EHRPWM_TBCTL_CTRMODE_DOWN << \
							EHRPWM_TBCTL_CTRMODE_SHIFT)
#define EHRPWM_COUNT_UP_DOWN			(EHRPWM_TBCTL_CTRMODE_UPDOWN << \
							EHRPWM_TBCTL_CTRMODE_SHIFT)
#define EHRPWM_COUNT_STOP			(EHRPWM_TBCTL_CTRMODE_STOPFREEZE << \
							EHRPWM_TBCTL_CTRMODE_SHIFT)
/* Synchronization */
#define EHRPWM_SYNC_ENABLE			EHRPWM_TBCTL_PHSEN
//#define EHRPWM_SW_FORCED_SYNC			0x1

#define EHRPWM_SYNCOUT_MASK			EHRPWM_TBCTL_SYNCOSEL   
#define EHRPWM_SYNCOUT_SYNCIN			(EHRPWM_TBCTL_SYNCOSEL_EPWMXSYNCI << \
							EHRPWM_TBCTL_SYNCOSEL_SHIFT)
#define EHRPWM_SYNCOUT_COUNTER_EQUAL_ZERO	(EHRPWM_TBCTL_SYNCOSEL_TBCTRZERO << \
							EHRPWM_TBCTL_SYNCOSEL_SHIFT)
#define EHRPWM_SYNCOUT_COUNTER_EQUAL_COMPAREB	(EHRPWM_TBCTL_SYNCOSEL_TBCTRCMPB << \
							EHRPWM_TBCTL_SYNCOSEL_SHIFT)
#define EHRPWM_SYNCOUT_DISABLE			(EHRPWM_TBCTL_SYNCOSEL_DISABLE << \
							EHRPWM_TBCTL_SYNCOSEL_SHIFT)

/* Shadow */
#define EHRPWM_SHADOW_WRITE_ENABLE		0x0
#define EHRPWM_SHADOW_WRITE_DISABLE		0x1

/* Emulation mode */
#define EHRPWM_STOP_AFTER_NEXT_TB_INCREMENT	(0x0 << EHRPWM_TBCTL_FREE_SOFT_SHIFT)
#define EHRPWM_STOP_AFTER_A_COMPLETE_CYCLE	(0x1 << EHRPWM_TBCTL_FREE_SOFT_SHIFT)
#define	EHRPWM_FREE_RUN				(0x2 << EHRPWM_TBCTL_FREE_SOFT_SHIFT)

/* Time base clock */
#define EHRPWM_TBCTL_CLKDIV_1   		(0x0001u)
#define EHRPWM_TBCTL_CLKDIV_2   		(0x0002u)
#define EHRPWM_TBCTL_CLKDIV_4   		(0x0004u)
#define EHRPWM_TBCTL_CLKDIV_8   		(0x0008u)
#define EHRPWM_TBCTL_CLKDIV_16  		(0x0010u)
#define EHRPWM_TBCTL_CLKDIV_32  		(0x0020u)
#define EHRPWM_TBCTL_CLKDIV_64  		(0x0040u)
#define EHRPWM_TBCTL_CLKDIV_128 		(0x0080u)

#define EHRPWM_TBCTL_HSPCLKDIV_1 		(0x0001u)
#define EHRPWM_TBCTL_HSPCLKDIV_2 		(0x0002u)
#define EHRPWM_TBCTL_HSPCLKDIV_4		(0x0004u)
#define EHRPWM_TBCTL_HSPCLKDIV_6 		(0x0006u)
#define EHRPWM_TBCTL_HSPCLKDIV_8 		(0x0008u)
#define EHRPWM_TBCTL_HSPCLKDIV_10 		(0x000Au)
#define EHRPWM_TBCTL_HSPCLKDIV_12 		(0x000Cu)
#define EHRPWM_TBCTL_HSPCLKDIV_14 		(0x000Eu)

/* Count direction after sync */
#define EHRPWM_COUNT_DOWN_AFTER_SYNC		0x0
#define EHRPWM_COUNT_UP_AFTER_SYNC		0x1


/* Counter Compare */
#define EHRPWM_SHADOW_A_EMPTY			(0x0 << EHRPWM_CMPCTL_SHDWAFULL_SHIFT)
#define EHRPWM_SHADOW_A_FULL			(EHRPWM_CMPCTL_SHDWAFULL)
#define EHRPWM_SHADOW_B_EMPTY			(0x0 << EHRPWM_CMPCTL_SHDWBFULL_SHIFT)
#define EHRPWM_SHADOW_B_FULL			(EHRPWM_CMPCTL_SHDWBFULL)

#define EHRPWM_CMPCTL_NOT_OVERWR_SH_FL		0x0
#define EHRPWM_CMPCTL_OVERWR_SH_FL		0x1

/* Compare register load */
#define EHRPWM_COMPB_LOAD_MASK			EHRPWM_CMPCTL_LOADBMODE
#define EHRPWM_COMPB_LOAD_COUNT_EQUAL_ZERO	(EHRPWM_CMPCTL_LOADBMODE_TBCTRZERO << \
							EHRPWM_CMPCTL_LOADBMODE_SHIFT)
#define EHRPWM_COMPB_LOAD_COUNT_EQUAL_PERIOD	(EHRPWM_CMPCTL_LOADBMODE_TBCTRPRD << \
							EHRPWM_CMPCTL_LOADBMODE_SHIFT)
#define EHRPWM_COMPB_LOAD_COUNT_EQUAL_ZERO_OR_PERIOD \
						(EHRPWM_CMPCTL_LOADBMODE_ZEROORPRD << \
						 	EHRPWM_CMPCTL_LOADBMODE_SHIFT)
#define EHRPWM_COMPB_NO_LOAD			(EHRPWM_CMPCTL_LOADBMODE_FREEZE << \
							EHRPWM_CMPCTL_LOADBMODE_SHIFT)


#define EHRPWM_COMPA_LOAD_MASK			EHRPWM_CMPCTL_LOADAMODE
#define EHRPWM_COMPA_LOAD_COUNT_EQUAL_ZERO	(EHRPWM_CMPCTL_LOADAMODE_TBCTRZERO << \
							EHRPWM_CMPCTL_LOADAMODE_SHIFT)
#define EHRPWM_COMPA_LOAD_COUNT_EQUAL_PERIOD	(EHRPWM_CMPCTL_LOADAMODE_TBCTRPRD << \
							EHRPWM_CMPCTL_LOADAMODE_SHIFT)
#define EHRPWM_COMPA_LOAD_COUNT_EQUAL_ZERO_OR_PERIOD \
						(EHRPWM_CMPCTL_LOADAMODE_ZEROORPRD << \
							EHRPWM_CMPCTL_LOADAMODE_SHIFT)						 
#define EHRPWM_COMPA_NO_LOAD			(EHRPWM_CMPCTL_LOADAMODE_FREEZE << \
							EHRPWM_CMPCTL_LOADAMODE_SHIFT)


/* Chopper */
#define EHRPWM_CHP_DUTY_12_5_PER		EHRPWM_PCCTL_CHPDUTY_1DIV8
#define EHRPWM_CHP_DUTY_25_PER			EHRPWM_PCCTL_CHPDUTY_2DIV8
#define EHRPWM_CHP_DUTY_37_5_PER		EHRPWM_PCCTL_CHPDUTY_3DIV8
#define EHRPWM_CHP_DUTY_50_PER			EHRPWM_PCCTL_CHPDUTY_4DIV8
#define EHRPWM_CHP_DUTY_62_5_PER		EHRPWM_PCCTL_CHPDUTY_5DIV8
#define EHRPWM_CHP_DUTY_75_PER			EHRPWM_PCCTL_CHPDUTY_6DIV8
#define EHRPWM_CHP_DUTY_87_5_PER		EHRPWM_PCCTL_CHPDUTY_7DIV8

/* TZ */
#define EHRPWM_TZ_ONESHOT			0x0
#define EHRPWM_TZ_CYCLEBYCYCLE			0x1
#define EHRPWM_TZ_ONESHOT_CLEAR			(EHRPWM_TZCLR_OST | EHRPWM_TZCLR_INT)
#define EHRPWM_TZ_CYCLEBYCYCLE_CLEAR		(EHRPWM_TZCLR_CBC | EHRPWM_TZCLR_INT)

#define  ECAP   0x01
#define  EPWM   0x02
#define  EQEP   0x03

/* Added from include/hw/hw_ehrpwm Ti StarterWare */
#define EHRPWM_TBCTL		(0x0)
#define EHRPWM_TBSTS		(0x2)
#define EHRPWM_TBPHSHR		(0x4)
#define EHRPWM_TBPHS		(0x6)
#define EHRPWM_TBCTR		(0x8)
#define EHRPWM_TBPRD		(0xA)
#define EHRPWM_CMPCTL		(0xE)
#define EHRPWM_CMPAHR		(0x10)
#define EHRPWM_CMPA		(0x12)
#define EHRPWM_CMPB		(0x14)
#define EHRPWM_AQCTLA		(0x16)
#define EHRPWM_AQCTLB		(0x18)
#define EHRPWM_AQSFRC		(0x1A)
#define EHRPWM_AQCSFRC		(0x1C)
#define EHRPWM_DBCTL		(0x1E)
#define EHRPWM_DBRED		(0x20)
#define EHRPWM_DBFED		(0x22)
#define EHRPWM_TZSEL		(0x24)
#define EHRPWM_TZCTL		(0x28)
#define EHRPWM_TZEINT		(0x2A)
#define EHRPWM_TZFLG		(0x2C)
#define EHRPWM_TZCLR		(0x2E)
#define EHRPWM_TZFRC		(0x30)
#define EHRPWM_ETSEL		(0x32)
#define EHRPWM_ETPS		(0x34)
#define EHRPWM_ETFLG		(0x36)
#define EHRPWM_ETCLR		(0x38)
#define EHRPWM_ETFRC		(0x3A)
#define EHRPWM_PCCTL		(0x3C)


/*
** The macro defined below corresponds to HRCTL register of EHRPWM module.
** This definition is used to keep compatibility with the driver(EHRPWM DAL). 
*/
#define EHRPWM_HRCNFG           (0xC0)


/**************************************************************************\
* Field Definition Macros
\**************************************************************************/

/* TBCTL */

#define EHRPWM_TBCTL_FREE_SOFT  (0xC000u)
#define EHRPWM_TBCTL_FREE_SOFT_SHIFT (0x000Eu)

#define EHRPWM_TBCTL_PHSDIR     (0x2000u)
#define EHRPWM_TBCTL_PHSDIR_SHIFT    (0x000Du)
#define EHRPWM_TBCTL_CLKDIV     (0x1C00u)
#define EHRPWM_TBCTL_CLKDIV_SHIFT    (0x000Au)
#define EHRPWM_TBCTL_CLKDIV_DIVBY1   (0x0000u)
#define EHRPWM_TBCTL_CLKDIV_DIVBY2   (0x0001u)
#define EHRPWM_TBCTL_CLKDIV_DIVBY4   (0x0002u)
#define EHRPWM_TBCTL_CLKDIV_DIVBY8   (0x0003u)
#define EHRPWM_TBCTL_CLKDIV_DIVBY16  (0x0004u)
#define EHRPWM_TBCTL_CLKDIV_DIVBY32  (0x0005u)
#define EHRPWM_TBCTL_CLKDIV_DIVBY64  (0x0006u)
#define EHRPWM_TBCTL_CLKDIV_DIVBY128 (0x0007u)
#define EHRPWM_TBCTL_HSPCLKDIV  (0x0380u)
#define EHRPWM_TBCTL_HSPCLKDIV_SHIFT (0x0007u)
#define EHRPWM_TBCTL_HSPCLKDIV_DIVBY1 (0x0000u)
#define EHRPWM_TBCTL_HSPCLKDIV_DIVBY2 (0x0001u)
#define EHRPWM_TBCTL_HSPCLKDIV_DIVBY4 (0x0002u)
#define EHRPWM_TBCTL_HSPCLKDIV_DIVBY6 (0x0003u)
#define EHRPWM_TBCTL_HSPCLKDIV_DIVBY8 (0x0004u)
#define EHRPWM_TBCTL_HSPCLKDIV_DIVBY10 (0x0005u)
#define EHRPWM_TBCTL_HSPCLKDIV_DIVBY12 (0x0006u)
#define EHRPWM_TBCTL_HSPCLKDIV_DIVBY14 (0x0007u)
#define EHRPWM_TBCTL_SWFSYNC    (0x0040u)
#define EHRPWM_TBCTL_SWFSYNC_SHIFT   (0x0006u)
#define EHRPWM_TBCTL_SYNCOSEL   (0x0030u)
#define EHRPWM_TBCTL_SYNCOSEL_SHIFT  (0x0004u)
#define EHRPWM_TBCTL_SYNCOSEL_EPWMXSYNCI (0x0000u)
#define EHRPWM_TBCTL_SYNCOSEL_TBCTRZERO (0x0001u)
#define EHRPWM_TBCTL_SYNCOSEL_TBCTRCMPB (0x0002u)
#define EHRPWM_TBCTL_SYNCOSEL_DISABLE 	(0x0003u)
#define EHRPWM_TBCTL_PRDLD      (0x0008u)
#define EHRPWM_TBCTL_PRDLD_SHIFT     (0x0003u)
#define EHRPWM_TBCTL_PHSEN      (0x0004u)
#define EHRPWM_TBCTL_PHSEN_SHIFT     (0x0002u)
#define EHRPWM_TBCTL_CTRMODE    (0x0003u)
#define EHRPWM_TBCTL_CTRMODE_SHIFT   (0x0000u)
#define EHRPWM_TBCTL_CTRMODE_UP      (0x0000u)
#define EHRPWM_TBCTL_CTRMODE_DOWN    (0x0001u)
#define EHRPWM_TBCTL_CTRMODE_UPDOWN  (0x0002u)
#define EHRPWM_TBCTL_CTRMODE_STOPFREEZE (0x0003u)


/* TBSTS */

#define EHRPWM_TBSTS_CTRMAX     (0x0004u)
#define EHRPWM_TBSTS_CTRMAX_SHIFT    (0x0002u)
#define EHRPWM_TBSTS_SYNCI      (0x0002u)
#define EHRPWM_TBSTS_SYNCI_SHIFT     (0x0001u)
#define EHRPWM_TBSTS_CTRDIR     (0x0001u)
#define EHRPWM_TBSTS_CTRDIR_SHIFT    (0x0000u)

/* TBPHSHR */

#define EHRPWM_TBPHSHR_TBPHSHR  (0xFF00u)
#define EHRPWM_TBPHSHR_TBPHSHR_SHIFT (0x0008u)

/* TBPHS */

#define EHRPWM_TBPHS_TBPHS      (0xFFFFu)
#define EHRPWM_TBPHS_TBPHS_SHIFT     (0x0000u)


/* TBCTR */

#define EHRPWM_TBCTR_TBCTR      (0xFFFFu)
#define EHRPWM_TBCTR_TBCTR_SHIFT     (0x0000u)


/* TBPRD */

#define EHRPWM_TBPRD_TBPRD      (0xFFFFu)
#define EHRPWM_TBPRD_TBPRD_SHIFT     (0x0000u)


/* CMPCTL */

#define EHRPWM_CMPCTL_SHDWBFULL (0x0200u)
#define EHRPWM_CMPCTL_SHDWBFULL_SHIFT (0x0009u)
#define EHRPWM_CMPCTL_SHDWAFULL (0x0100u)
#define EHRPWM_CMPCTL_SHDWAFULL_SHIFT (0x0008u)
#define EHRPWM_CMPCTL_SHDWBMODE (0x0040u)
#define EHRPWM_CMPCTL_SHDWBMODE_SHIFT (0x0006u)
#define EHRPWM_CMPCTL_SHDWAMODE (0x0010u)
#define EHRPWM_CMPCTL_SHDWAMODE_SHIFT (0x0004u)
#define EHRPWM_CMPCTL_LOADBMODE (0x000Cu)
#define EHRPWM_CMPCTL_LOADBMODE_SHIFT (0x0002u)
#define EHRPWM_CMPCTL_LOADBMODE_TBCTRZERO (0x0000u)
#define EHRPWM_CMPCTL_LOADBMODE_TBCTRPRD (0x0001u)
#define EHRPWM_CMPCTL_LOADBMODE_ZEROORPRD (0x0002u)
#define EHRPWM_CMPCTL_LOADBMODE_FREEZE (0x0003u)
#define EHRPWM_CMPCTL_LOADAMODE (0x0003u)
#define EHRPWM_CMPCTL_LOADAMODE_SHIFT (0x0000u)
#define EHRPWM_CMPCTL_LOADAMODE_TBCTRZERO (0x0000u)
#define EHRPWM_CMPCTL_LOADAMODE_TBCTRPRD (0x0001u)
#define EHRPWM_CMPCTL_LOADAMODE_ZEROORPRD (0x0002u)
#define EHRPWM_CMPCTL_LOADAMODE_FREEZE (0x0003u)


/* CMPAHR */

#define EHRPWM_CMPAHR_CMPAHR    (0xFF00u)
#define EHRPWM_CMPAHR_CMPAHR_SHIFT   (0x0008u)


/* CMPA */

#define EHRPWM_CMPA_CMPA        (0xFFFFu)
#define EHRPWM_CMPA_CMPA_SHIFT       (0x0000u)


/* CMPB */

#define EHRPWM_CMPB_CMPB        (0xFFFFu)
#define EHRPWM_CMPB_CMPB_SHIFT       (0x0000u)


/* AQCTLA */

#define EHRPWM_AQCTLA_CBD       (0x0C00u)
#define EHRPWM_AQCTLA_CBD_SHIFT      (0x000Au)
#define EHRPWM_AQCTLA_CBD_DONOTHING  (0x0000u)
#define EHRPWM_AQCTLA_CBD_EPWMXALOW  (0x0001u)
#define EHRPWM_AQCTLA_CBD_EPWMXAHIGH (0x0002u)
#define EHRPWM_AQCTLA_CBD_EPWMXATOGGLE (0x0003u)

#define EHRPWM_AQCTLA_CBU       (0x0300u)
#define EHRPWM_AQCTLA_CBU_SHIFT      (0x0008u)
#define EHRPWM_AQCTLA_CBU_DONOTHING  (0x0000u)
#define EHRPWM_AQCTLA_CBU_EPWMXALOW  (0x0001u)
#define EHRPWM_AQCTLA_CBU_EPWMXAHIGH (0x0002u)
#define EHRPWM_AQCTLA_CBU_EPWMXATOGGLE (0x0003u)

#define EHRPWM_AQCTLA_CAD       (0x00C0u)
#define EHRPWM_AQCTLA_CAD_SHIFT      (0x0006u)
#define EHRPWM_AQCTLA_CAD_DONOTHING  (0x0000u)
#define EHRPWM_AQCTLA_CAD_EPWMXALOW  (0x0001u)
#define EHRPWM_AQCTLA_CAD_EPWMXAHIGH (0x0002u)
#define EHRPWM_AQCTLA_CAD_EPWMXATOGGLE (0x0003u)

#define EHRPWM_AQCTLA_CAU       (0x0030u)
#define EHRPWM_AQCTLA_CAU_SHIFT      (0x0004u)
#define EHRPWM_AQCTLA_CAU_DONOTHING  (0x0000u)
#define EHRPWM_AQCTLA_CAU_EPWMXALOW  (0x0001u)
#define EHRPWM_AQCTLA_CAU_EPWMXAHIGH (0x0002u)
#define EHRPWM_AQCTLA_CAU_EPWMXATOGGLE (0x0003u)

#define EHRPWM_AQCTLA_PRD       (0x000Cu)
#define EHRPWM_AQCTLA_PRD_SHIFT      (0x0002u)
#define EHRPWM_AQCTLA_PRD_DONOTHING  (0x0000u)
#define EHRPWM_AQCTLA_PRD_EPWMXALOW  (0x0001u)
#define EHRPWM_AQCTLA_PRD_EPWMXAHIGH (0x0002u)
#define EHRPWM_AQCTLA_PRD_EPWMXATOGGLE (0x0003u)

#define EHRPWM_AQCTLA_ZRO       (0x0003u)
#define EHRPWM_AQCTLA_ZRO_SHIFT      (0x0000u)
#define EHRPWM_AQCTLA_ZRO_DONOTHING  (0x0000u)
#define EHRPWM_AQCTLA_ZRO_EPWMXALOW  (0x0001u)
#define EHRPWM_AQCTLA_ZRO_EPWMXAHIGH (0x0002u)
#define EHRPWM_AQCTLA_ZRO_EPWMXATOGGLE (0x0003u)


/* AQCTLB */

#define EHRPWM_AQCTLB_CBD       (0x0C00u)
#define EHRPWM_AQCTLB_CBD_SHIFT      (0x000Au)
#define EHRPWM_AQCTLB_CBD_DONOTHING  (0x0000u)
#define EHRPWM_AQCTLB_CBD_EPWMXBLOW  (0x0001u)
#define EHRPWM_AQCTLB_CBD_EPWMXBHIGH (0x0002u)
#define EHRPWM_AQCTLB_CBD_EPWMXBTOGGLE (0x0003u)

#define EHRPWM_AQCTLB_CBU       (0x0300u)
#define EHRPWM_AQCTLB_CBU_SHIFT      (0x0008u)
#define EHRPWM_AQCTLB_CBU_DONOTHING  (0x0000u)
#define EHRPWM_AQCTLB_CBU_EPWMXBLOW  (0x0001u)
#define EHRPWM_AQCTLB_CBU_EPWMXBHIGH (0x0002u)
#define EHRPWM_AQCTLB_CBU_EPWMXBTOGGLE (0x0003u)

#define EHRPWM_AQCTLB_CAD       (0x00C0u)
#define EHRPWM_AQCTLB_CAD_SHIFT      (0x0006u)
#define EHRPWM_AQCTLB_CAD_DONOTHING  (0x0000u)
#define EHRPWM_AQCTLB_CAD_EPWMXBLOW  (0x0001u)
#define EHRPWM_AQCTLB_CAD_EPWMXBHIGH (0x0002u)
#define EHRPWM_AQCTLB_CAD_EPWMXBTOGGLE (0x0003u)

#define EHRPWM_AQCTLB_CAU       (0x0030u)
#define EHRPWM_AQCTLB_CAU_SHIFT      (0x0004u)
#define EHRPWM_AQCTLB_CAU_DONOTHING  (0x0000u)
#define EHRPWM_AQCTLB_CAU_EPWMXBLOW  (0x0001u)
#define EHRPWM_AQCTLB_CAU_EPWMXBHIGH (0x0002u)
#define EHRPWM_AQCTLB_CAU_EPWMXBTOGGLE (0x0003u)

#define EHRPWM_AQCTLB_PRD       (0x000Cu)
#define EHRPWM_AQCTLB_PRD_SHIFT      (0x0002u)
#define EHRPWM_AQCTLB_PRD_DONOTHING  (0x0000u)
#define EHRPWM_AQCTLB_PRD_EPWMXBLOW  (0x0001u)
#define EHRPWM_AQCTLB_PRD_EPWMXBHIGH (0x0002u)
#define EHRPWM_AQCTLB_PRD_EPWMXBTOGGLE (0x0003u)

#define EHRPWM_AQCTLB_ZRO       (0x0003u)
#define EHRPWM_AQCTLB_ZRO_SHIFT      (0x0000u)
#define EHRPWM_AQCTLB_ZRO_DONOTHING  (0x0000u)
#define EHRPWM_AQCTLB_ZRO_EPWMXBLOW  (0x0001u)
#define EHRPWM_AQCTLB_ZRO_EPWMXBHIGH (0x0002u)
#define EHRPWM_AQCTLB_ZRO_EPWMXBTOGGLE (0x0003u)


/* AQSFRC */

#define EHRPWM_AQSFRC_RLDCSF    (0x00C0u)
#define EHRPWM_AQSFRC_RLDCSF_SHIFT   (0x0006u)
#define EHRPWM_AQSFRC_RLDCSF_EVTCTRZERO (0x0000u)
#define EHRPWM_AQSFRC_RLDCSF_EVTCTRPRD (0x0001u)
#define EHRPWM_AQSFRC_RLDCSF_ZEROORPRD (0x0002u)
#define EHRPWM_AQSFRC_RLDCSF_IMMEDIATE (0x0003u)

#define EHRPWM_AQSFRC_OTSFB     (0x0020u)
#define EHRPWM_AQSFRC_OTSFB_SHIFT    (0x0005u)
#define EHRPWM_AQSFRC_OTSFB_NOEFFECT (0x0000u)
#define EHRPWM_AQSFRC_OTSFB_EVENT    (0x0001u)

#define EHRPWM_AQSFRC_ACTSFB    (0x0018u)
#define EHRPWM_AQSFRC_ACTSFB_SHIFT   (0x0003u)
#define EHRPWM_AQSFRC_ACTSFB_DONOTHING (0x0000u)
#define EHRPWM_AQSFRC_ACTSFB_CLEAR   (0x0001u)
#define EHRPWM_AQSFRC_ACTSFB_SET     (0x0002u)
#define EHRPWM_AQSFRC_ACTSFB_TOGGLE  (0x0003u)

#define EHRPWM_AQSFRC_OTSFA     (0x0004u)
#define EHRPWM_AQSFRC_OTSFA_SHIFT    (0x0002u)
#define EHRPWM_AQSFRC_OTSFA_NOEFFECT (0x0000u)
#define EHRPWM_AQSFRC_OTSFA_EVENT    (0x0001u)

#define EHRPWM_AQSFRC_ACTSFA    (0x0003u)
#define EHRPWM_AQSFRC_ACTSFA_SHIFT   (0x0000u)
#define EHRPWM_AQSFRC_ACTSFA_DONOTHING (0x0000u)
#define EHRPWM_AQSFRC_ACTSFA_CLEAR   (0x0001u)
#define EHRPWM_AQSFRC_ACTSFA_SET     (0x0002u)
#define EHRPWM_AQSFRC_ACTSFA_TOGGLE  (0x0003u)


/* AQCSFRC */

#define EHRPWM_AQCSFRC_CSFB     (0x000Cu)
#define EHRPWM_AQCSFRC_CSFB_SHIFT    (0x0002u)
#define EHRPWM_AQCSFRC_CSFB_LOW      (0x0001u)
#define EHRPWM_AQCSFRC_CSFB_HIGH     (0x0002u)

#define EHRPWM_AQCSFRC_CSFA     (0x0003u)
#define EHRPWM_AQCSFRC_CSFA_SHIFT    (0x0000u)
#define EHRPWM_AQCSFRC_CSFA_LOW      (0x0001u)
#define EHRPWM_AQCSFRC_CSFA_HIGH     (0x0002u)


/* DBCTL */

#define EHRPWM_DBCTL_IN_MODE    (0x0030u)
#define EHRPWM_DBCTL_IN_MODE_SHIFT   (0x0004u)
#define EHRPWM_DBCTL_IN_MODE_AREDAFED (0x0000u)
#define EHRPWM_DBCTL_IN_MODE_BREDAFED (0x0001u)
#define EHRPWM_DBCTL_IN_MODE_AREDBFED (0x0002u)
#define EHRPWM_DBCTL_IN_MODE_BREDBFED (0x0003u)

#define EHRPWM_DBCTL_POLSEL     (0x000Cu)
#define EHRPWM_DBCTL_POLSEL_SHIFT    (0x0002u)
#define EHRPWM_DBCTL_POLSEL_ACTIVEHIGH (0x0000u)
#define EHRPWM_DBCTL_POLSEL_ALC      (0x0001u)
#define EHRPWM_DBCTL_POLSEL_AHC      (0x0002u)
#define EHRPWM_DBCTL_POLSEL_ACTIVELOW (0x0003u)

#define EHRPWM_DBCTL_OUT_MODE   (0x0003u)
#define EHRPWM_DBCTL_OUT_MODE_SHIFT  (0x0000u)
#define EHRPWM_DBCTL_OUT_MODE_BYPASS (0x0000u)
#define EHRPWM_DBCTL_OUT_MODE_NOREDBFED (0x0001u)
#define EHRPWM_DBCTL_OUT_MODE_AREDNOFED (0x0002u)
#define EHRPWM_DBCTL_OUT_MODE_AREDBFED (0x0003u)


/* DBRED */

#define EHRPWM_DBRED_DEL        (0x03FFu)
#define EHRPWM_DBRED_DEL_SHIFT       (0x0000u)


/* DBFED */

#define EHRPWM_DBFED_DEL        (0x03FFu)
#define EHRPWM_DBFED_DEL_SHIFT       (0x0000u)


/* TZSEL */

#define EHRPWM_TZSEL_OSHT1      (0x0100u)
#define EHRPWM_TZSEL_OSHT1_SHIFT     (0x0008u)


#define EHRPWM_TZSEL_CBC1       (0x0001u)
#define EHRPWM_TZSEL_CBC1_SHIFT      (0x0000u)


/* TZCTL */

#define EHRPWM_TZCTL_TZB        (0x000Cu)
#define EHRPWM_TZCTL_TZB_SHIFT       (0x0002u)
#define EHRPWM_TZCTL_TZB_TRISTATE    (0x0000u)
#define EHRPWM_TZCTL_TZB_FORCEHIGH   (0x0001u)
#define EHRPWM_TZCTL_TZB_FORCELOW    (0x0002u)
#define EHRPWM_TZCTL_TZB_DONOTHING   (0x0003u)

#define EHRPWM_TZCTL_TZA        (0x0003u)
#define EHRPWM_TZCTL_TZA_SHIFT       (0x0000u)
#define EHRPWM_TZCTL_TZA_TRISTATE    (0x0000u)
#define EHRPWM_TZCTL_TZA_FORCEHIGH   (0x0001u)
#define EHRPWM_TZCTL_TZA_FORCELOW    (0x0002u)
#define EHRPWM_TZCTL_TZA_DONOTHING   (0x0003u)


/* TZEINT */

#define EHRPWM_TZEINT_OST       (0x0004u)
#define EHRPWM_TZEINT_OST_SHIFT      (0x0002u)

#define EHRPWM_TZEINT_CBC       (0x0002u)
#define EHRPWM_TZEINT_CBC_SHIFT      (0x0001u)



/* TZFLG */

#define EHRPWM_TZFLG_OST        (0x0004u)
#define EHRPWM_TZFLG_OST_SHIFT       (0x0002u)
#define EHRPWM_TZFLG_CBC        (0x0002u)
#define EHRPWM_TZFLG_CBC_SHIFT       (0x0001u)
#define EHRPWM_TZFLG_INT        (0x0001u)
#define EHRPWM_TZFLG_INT_SHIFT       (0x0000u)


/* TZCLR */

#define EHRPWM_TZCLR_OST        (0x0004u)
#define EHRPWM_TZCLR_OST_SHIFT       (0x0002u)
#define EHRPWM_TZCLR_CBC        (0x0002u)
#define EHRPWM_TZCLR_CBC_SHIFT       (0x0001u)
#define EHRPWM_TZCLR_INT        (0x0001u)
#define EHRPWM_TZCLR_INT_SHIFT       (0x0000u)

/* TZFRC */

#define EHRPWM_TZFRC_OST        (0x0004u)
#define EHRPWM_TZFRC_OST_SHIFT       (0x0002u)
#define EHRPWM_TZFRC_CBC        (0x0002u)
#define EHRPWM_TZFRC_CBC_SHIFT       (0x0001u)


/* ETSEL */

#define EHRPWM_ETSEL_INTEN      (0x0008u)
#define EHRPWM_ETSEL_INTEN_SHIFT     (0x0003u)

#define EHRPWM_ETSEL_INTSEL     (0x0007u)
#define EHRPWM_ETSEL_INTSEL_SHIFT    (0x0000u)
#define EHRPWM_ETSEL_INTSEL_TBCTREQUZERO (0x0001u)
#define EHRPWM_ETSEL_INTSEL_TBCTREQUPRD (0x0002u)
#define EHRPWM_ETSEL_INTSEL_TBCTREQUCMPAINC (0x0004u)
#define EHRPWM_ETSEL_INTSEL_TBCTREQUCMPADEC (0x0005u)
#define EHRPWM_ETSEL_INTSEL_TBCTREQUCMPBINC (0x0006u)
#define EHRPWM_ETSEL_INTSEL_TBCTREQUCMPBDEC (0x0007u)


/* ETPS */

#define EHRPWM_ETPS_INTCNT      (0x000Cu)
#define EHRPWM_ETPS_INTCNT_SHIFT     (0x0002u)
#define EHRPWM_ETPS_INTCNT_NOEVENTS  (0x0000u)
#define EHRPWM_ETPS_INTCNT_ONEEVENT  (0x0001u)
#define EHRPWM_ETPS_INTCNT_TWOEVENTS (0x0002u)
#define EHRPWM_ETPS_INTCNT_THREEEVENTS (0x0003u)

#define EHRPWM_ETPS_INTPRD      (0x0003u)
#define EHRPWM_ETPS_INTPRD_SHIFT     (0x0000u)
#define EHRPWM_ETPS_INTPRD_FIRSTEVENT (0x0001u)
#define EHRPWM_ETPS_INTPRD_SECONDEVENT (0x0002u)
#define EHRPWM_ETPS_INTPRD_THIRDEVENT (0x0003u)


/* ETFLG */

#define EHRPWM_ETFLG_INT        (0x0001u)
#define EHRPWM_ETFLG_INT_SHIFT       (0x0000u)

/* ETCLR */

#define EHRPWM_ETCLR_INT        (0x0001u)
#define EHRPWM_ETCLR_INT_SHIFT       (0x0000u)
#define EHRPWM_ETCLR_INT_NOEFFECT    (0x0000u)
#define EHRPWM_ETCLR_INT_CLEAR       (0x0001u)


/* ETFRC */

#define EHRPWM_ETFRC_INT        (0x0001u)
#define EHRPWM_ETFRC_INT_SHIFT       (0x0000u)

/* PCCTL */

#define EHRPWM_PCCTL_CHPDUTY    (0x0700u)
#define EHRPWM_PCCTL_CHPDUTY_SHIFT   (0x0008u)
#define EHRPWM_PCCTL_CHPDUTY_1DIV8   (0x0000u)
#define EHRPWM_PCCTL_CHPDUTY_2DIV8   (0x0001u)
#define EHRPWM_PCCTL_CHPDUTY_3DIV8   (0x0002u)
#define EHRPWM_PCCTL_CHPDUTY_4DIV8   (0x0003u)
#define EHRPWM_PCCTL_CHPDUTY_5DIV8   (0x0004u)
#define EHRPWM_PCCTL_CHPDUTY_6DIV8   (0x0005u)
#define EHRPWM_PCCTL_CHPDUTY_7DIV8   (0x0006u)
#define EHRPWM_PCCTL_CHPDUTY_RESERVED (0x0007u)

#define EHRPWM_PCCTL_CHPFREQ    (0x00E0u)
#define EHRPWM_PCCTL_CHPFREQ_SHIFT   (0x0005u)
#define EHRPWM_PCCTL_CHPFREQ_DIVBY1  (0x0000u)
#define EHRPWM_PCCTL_CHPFREQ_DIVBY2  (0x0001u)
#define EHRPWM_PCCTL_CHPFREQ_DIVBY3  (0x0002u)
#define EHRPWM_PCCTL_CHPFREQ_DIVBY4  (0x0003u)
#define EHRPWM_PCCTL_CHPFREQ_DIVBY5  (0x0004u)
#define EHRPWM_PCCTL_CHPFREQ_DIVBY6  (0x0005u)
#define EHRPWM_PCCTL_CHPFREQ_DIVBY7  (0x0006u)
#define EHRPWM_PCCTL_CHPFREQ_DIVBY8  (0x0007u)

#define EHRPWM_PCCTL_OSHTWTH    (0x001Eu)
#define EHRPWM_PCCTL_OSHTWTH_SHIFT   (0x0001u)

#define EHRPWM_PCCTL_CHPEN      (0x0001u)
#define EHRPWM_PCCTL_CHPEN_SHIFT     (0x0000u)

/* HR */

#define EHRPWM_HR_HRLOAD		(0x0008u)
#define EHRPWM_HR_HRLOAD_SHIFT		(0x0003u)
#define EHRPWM_HR_HRLOAD_CTR_ZERO	(0x0000u)
#define EHRPWM_HR_HRLOAD_CTR_PRD	(0x0008u)

#define EHRPWM_HR_CTLMODE		(0x0004u)
#define EHRPWM_HR_CTLMODE_SHIFT		(0x0002u)
#define EHRPWM_HR_CTLMODE_CMPAHR	(0x0000u)
#define EHRPWM_HR_CTLMODE_TBPHSHR	(0x0004u)

#define EHRPWM_HR_EDGEMODE		(0x0003u)
#define EHRPWM_HR_EDGEMODE_SHIFT	(0x0000u)
#define EHRPWM_HR_EDGEMODE_DISABLE	(0x0000u)
#define EHRPWM_HR_EDGEMODE_RAISING	(0x0001u)
#define EHRPWM_HR_EDGEMODE_FALLING	(0x0002u)
#define EHRPWM_HR_EDGEMODE_BOTH		(0x0003u)


/* REVID */

#define EHRPWM_REVID_REV        (0xFFFFFFFFu)
#define EHRPWM_REVID_REV_SHIFT       (0x00000000u)

/* added from include/hw/hw_control_AM335x.h Ti StarterWare */
/***********************************************************************\
 * Register arrays Definition
\***********************************************************************/


/***********************************************************************\
 * Bundle arrays Definition
\***********************************************************************/


/***********************************************************************\
 * Bundles Definition
\***********************************************************************/



/*************************************************************************\
 * Registers Definition
\*************************************************************************/

#define CONTROL_REVISION   (0x0)
#define CONTROL_HWINFO   (0x4)
#define CONTROL_SYSCONFIG   (0x10)
#define CONTROL_STATUS   (0x40)
#define CONTROL_BOOTSTAT   (0x44)
#define CONTROL_SEC_CTRL   (0x100)
#define CONTROL_SEC_SW   (0x104)
#define CONTROL_SEC_EMU   (0x108)
#define CONTROL_SECURE_EMIF_SDRAM_CONFIG   (0x110)
#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_2   (0x114)
#define CONTROL_SW_CFG   (0x118)
#define CONTROL_SW_CCFG   (0x11c)
#define CONTROL_MPK(n)   (0x120 + (n * 4))
#define CONTROL_SWRV(n)   (0x140 + (n * 4))
#define CONTROL_SEC_TAP   (0x180)
#define CONTROL_SEC_TAP_CMDIN   (0x184)
#define CONTROL_SEC_TAP_CMDOUT   (0x188)
#define CONTROL_SEC_TAP_DATIN   (0x18c)
#define CONTROL_SEC_TAP_DATOUT   (0x190)
#define CONTROL_MREQDOMAIN_EXP1   (0x198)
#define CONTROL_MREQDOMAIN_EXP2   (0x19c)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF0   (0x1a0)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF1   (0x1a4)
#define CONTROL_L4_HW_FW_EXP_VAL_CONF   (0x1a8)
#define CONTROL_SEC_LOAD_FW_EXP_VAL   (0x1ac)
#define CONTROL_SEC_CTRL_RO   (0x1b4)
#define CONTROL_EMIF_OBFUSCATION_KEY   (0x1b8)
#define CONTROL_SEC_CLK_CTRL   (0x1bc)
#define CONTROL_MREQDOMAIN_EXP3   (0x1d4)
#define CONTROL_CEK(n)   (0x200 + (n * 4))
#define CONTROL_CEK_BCH(n)   (0x210 + (n * 4))
#define CONTROL_MSV_0   (0x224)
#define CONTROL_MSV_BCH(n)   (0x228 + (n * 4))
#define CONTROL_SEC_STATUS   (0x240)
#define CONTROL_SECMEM_STATUS   (0x244)
#define CONTROL_SEC_ERR_STAT_FUNC(n)   (0x248 + (n * 4))
#define CONTROL_SEC_ERR_STAT_DBUG(n)   (0x250 + (n * 4))
#define CONTROL_KEK_SW(n)   (0x260 + (n * 4))
#define CONTROL_CMPK_BCH(n)   (0x280 + (n * 4))
#define CONTROL_CMPK(n)   (0x2b0 + (n * 4))
#define CONTROL_SSM_END_FAST_SECRAM   (0x300)
#define CONTROL_SSM_FIREWALL_CONTROLLER   (0x304)
#define CONTROL_SSM_START_SECURE_STACKED_RAM   (0x308)
#define CONTROL_SSM_END_SECURE_STACKED_RAM   (0x30c)
#define CONTROL_SSM_START_SPM_STACK   (0x310)
#define CONTROL_SSM_END_SPM_STACK   (0x314)
#define CONTROL_SSM_START_MONITOR_RAMCODE   (0x318)
#define CONTROL_SSM_END_MONITOR_RAMCODE   (0x31c)
#define CONTROL_SSM_END_MONITOR_RAMDATA   (0x320)
#define CONTROL_SSM_START_MONITOR_CODE   (0x324)
#define CONTROL_SSM_END_MONITOR_CODE   (0x328)
#define CONTROL_SSM_START_MONITOR_PERIPH   (0x32c)
#define CONTROL_SSM_END_MONITOR_PERIPH   (0x330)
#define CONTROL_SSM_START_MONITOR_STACK   (0x334)
#define CONTROL_SSM_END_MONITOR_STACK   (0x338)
#define CONTROL_SSM_START_MONITOR_RAMCODE_ETM   (0x33c)
#define CONTROL_SSM_END_MONITOR_RAMCODE_ETM   (0x340)
#define CONTROL_SSM_END_MONITOR_RAMDATA_ETM   (0x344)
#define CONTROL_SSM_START_MONITOR_CODE_ETM   (0x348)
#define CONTROL_SSM_END_MONITOR_CODE_ETM   (0x34c)
#define CONTROL_SSM_START_MONITOR_STACK_ETM   (0x350)
#define CONTROL_SSM_END_MONITOR_STACK_ETM   (0x354)
#define CONTROL_SSM_START_MONITOR_SHARED_ETM   (0x358)
#define CONTROL_SSM_END_MONITOR_SHARED_ETM   (0x35c)
#define CONTROL_SSM_START_MONITOR_PERIPH_ETM   (0x360)
#define CONTROL_SSM_END_MONITOR_PERIPH_ETM   (0x364)
#define CONTROL_SSM_CPSR_MODE_ENFC   (0x368)
#define CONTROL_SSM_END_L3_SECRAM   (0x36c)
#define CONTROL_CORTEX_VBBLDO_CTRL   (0x41c)
#define CONTROL_CORE_SLDO_CTRL   (0x428)
#define CONTROL_MPU_SLDO_CTRL   (0x42c)
#define CONTROL_REFCLK_LJCBLDO_CTRL   (0x440)
#define CONTROL_CLK32KDIVRATIO_CTRL   (0x444)
#define CONTROL_BANDGAP_CTRL   (0x448)
#define CONTROL_BANDGAP_TRIM   (0x44c)
#define CONTROL_PLL_CLKINPULOW_CTRL   (0x458)
#define CONTROL_MOSC_CTRL   (0x468)
#define CONTROL_RCOSC_CTRL   (0x46c)
#define CONTROL_DEEPSLEEP_CTRL   (0x470)
#define CONTROL_PE_SCRATCHPAD(n)   (0x500 + (n * 4))
#define CONTROL_DEVICE_ID   (0x600)
#define CONTROL_DEV_FEATURE   (0x604)
#define CONTROL_INIT_PRIORITY(n)   (0x608 + (n * 4))
#define CONTROL_MMU_CFG   (0x610)
#define CONTROL_TPTC_CFG   (0x614)
#define CONTROL_OCMC_CFG   (0x618)
#define CONTROL_USB_CTRL(n)   (0x620 + (n * 8))
#define CONTROL_USB_STS(n)   (0x624 + (n * 8))
#define CONTROL_MAC_ID_LO(n)   (0x630 + (n * 8))
#define CONTROL_MAC_ID_HI(n)   (0x634 + (n * 8))
#define CONTROL_DCAN_RAMINIT   (0x644)
#define CONTROL_USB_WKUP_CTRL   (0x648)
#define CONTROL_GMII_SEL   (0x650)
#define CONTROL_PWMSS_CTRL   (0x664)
#define CONTROL_MREQPRIO(n)   (0x670 + (n * 4))
#define CONTROL_HW_EVENT_SEL_GRP(n)   (0x690 + (n * 4))
#define CONTROL_SMRT_CTRL   (0x6a0)
#define CONTROL_SABTOOTH_HW_DEBUG_SEL   (0x6a4)
#define CONTROL_SABTOOTH_HW_DBG_INFO   (0x6a8)
#define CONTROL_MRGN_MODE(n)   (0x6c0 + (n * 4))
#define CONTROL_VDD_MPU_OPP(n)   (0x770 + (n * 4))
#define CONTROL_VDD_MPU_OPP_TURBO   (0x77c)
#define CONTROL_VDD_CORE_OPP(n)   (0x7b8 + (n * 4))
#define CONTROL_BB_SCALE   (0x7d0)
#define CONTROL_USB_VID_PID   (0x7f4)
#define CONTROL_EFUSE_SMA   (0x7fc)
#define CONTROL_CONF_GPMC_AD(n)   (0x800 + (n * 4))
#define CONTROL_CONF_GPMC_A(n)   (0x840 + (n * 4))
#define CONTROL_CONF_GPMC_WAIT0   (0x870)
#define CONTROL_CONF_GPMC_WPN   (0x874)
#define CONTROL_CONF_GPMC_BE1N   (0x878)
#define CONTROL_CONF_GPMC_CSN(n)   (0x87c + (n * 4))
#define CONTROL_CONF_GPMC_CLK   (0x88c)
#define CONTROL_CONF_GPMC_ADVN_ALE   (0x890)
#define CONTROL_CONF_GPMC_OEN_REN   (0x894)
#define CONTROL_CONF_GPMC_WEN   (0x898)
#define CONTROL_CONF_GPMC_BE0N_CLE   (0x89c)
#define CONTROL_CONF_LCD_DATA(n)   (0x8a0 + (n * 4))
#define CONTROL_CONF_LCD_VSYNC   (0x8e0)
#define CONTROL_CONF_LCD_HSYNC   (0x8e4)
#define CONTROL_CONF_LCD_PCLK   (0x8e8)
#define CONTROL_CONF_LCD_AC_BIAS_EN   (0x8ec)
#define CONTROL_CONF_MMC0_DAT3   (0x8f0)
#define CONTROL_CONF_MMC0_DAT2   (0x8f4)
#define CONTROL_CONF_MMC0_DAT1   (0x8f8)
#define CONTROL_CONF_MMC0_DAT0   (0x8fc)
#define CONTROL_CONF_MMC0_CLK   (0x900)
#define CONTROL_CONF_MMC0_CMD   (0x904)
#define CONTROL_CONF_MII1_COL   (0x908)
#define CONTROL_CONF_MII1_CRS   (0x90c)
#define CONTROL_CONF_MII1_RXERR   (0x910)
#define CONTROL_CONF_MII1_TXEN   (0x914)
#define CONTROL_CONF_MII1_RXDV   (0x918)
#define CONTROL_CONF_MII1_TXD3   (0x91c)
#define CONTROL_CONF_MII1_TXD2   (0x920)
#define CONTROL_CONF_MII1_TXD1   (0x924)
#define CONTROL_CONF_MII1_TXD0   (0x928)
#define CONTROL_CONF_MII1_TXCLK   (0x92c)
#define CONTROL_CONF_MII1_RXCLK   (0x930)
#define CONTROL_CONF_MII1_RXD3   (0x934)
#define CONTROL_CONF_MII1_RXD2   (0x938)
#define CONTROL_CONF_MII1_RXD1   (0x93c)
#define CONTROL_CONF_MII1_RXD0   (0x940)
#define CONTROL_CONF_RMII1_REFCLK   (0x944)
#define CONTROL_CONF_MDIO_DATA   (0x948)
#define CONTROL_CONF_MDIO_CLK   (0x94c)
#define CONTROL_CONF_SPI0_SCLK   (0x950)
#define CONTROL_CONF_SPI0_D0   (0x954)
#define CONTROL_CONF_SPI0_D1   (0x958)
#define CONTROL_CONF_SPI0_CS0   (0x95c)
#define CONTROL_CONF_SPI0_CS1   (0x960)
#define CONTROL_CONF_ECAP0_IN_PWM0_OUT   (0x964)
#define CONTROL_CONF_UART_CTSN(n)   (0x968 + ((n) * 0x10))
#define CONTROL_CONF_UART_RTSN(n)   (0x96c + ((n) * 0x10))
#define CONTROL_CONF_UART_RXD(n)   (0x970 + ((n) * 0x10))
#define CONTROL_CONF_UART_TXD(n)   (0x974 + ((n) * 0x10))
#define CONTROL_CONF_I2C0_SDA   (0x988)
#define CONTROL_CONF_I2C0_SCL   (0x98c)
#define CONTROL_CONF_MCASP0_ACLKX   (0x990)
#define CONTROL_CONF_MCASP0_FSX   (0x994)
#define CONTROL_CONF_MCASP0_AXR0   (0x998)
#define CONTROL_CONF_MCASP0_AHCLKR   (0x99c)
#define CONTROL_CONF_MCASP0_ACLKR   (0x9a0)
#define CONTROL_CONF_MCASP0_FSR   (0x9a4)
#define CONTROL_CONF_MCASP0_AXR1   (0x9a8)
#define CONTROL_CONF_MCASP0_AHCLKX   (0x9ac)
#define CONTROL_CONF_XDMA_EVENT_INTR(n)   (0x9b0 + (n * 4))
#define CONTROL_CONF_NRESETIN_OUT   (0x9b8)
#define CONTROL_CONF_PORZ   (0x9bc)
#define CONTROL_CONF_NNMI   (0x9c0)
#define CONTROL_CONF_OSC_IN(n)   (0x9c4 + (n * 0x24))
#define CONTROL_CONF_OSC_OUT(n)   (0x9c8 + (n * 0x24))
#define CONTROL_CONF_OSC_VSS(n)   (0x9cc + (n * 0x24))
#define CONTROL_CONF_TMS   (0x9d0)
#define CONTROL_CONF_TDI   (0x9d4)
#define CONTROL_CONF_TDO   (0x9d8)
#define CONTROL_CONF_TCK   (0x9dc)
#define CONTROL_CONF_NTRST   (0x9e0)
#define CONTROL_CONF_EMU(n)   (0x9e4 + (n * 4))
#define CONTROL_CONF_RTC_PORZ   (0x9f8)
#define CONTROL_CONF_PMIC_POWER_EN   (0x9fc)
#define CONTROL_CONF_EXT_WAKEUP   (0xa00)
#define CONTROL_CONF_ENZ_KALDO_1P8V   (0xa04)
#define CONTROL_CONF_USB_DM(n)   (0xa08 + ((n) * 0x18))
#define CONTROL_CONF_USB_DP(n)   (0xa0c + ((n) * 0x18))
#define CONTROL_CONF_USB_CE(n)   (0xa10 + ((n) * 0x18))
#define CONTROL_CONF_USB_ID(n)   (0xa14 + ((n) * 0x18))
#define CONTROL_CONF_USB_VBUS(n)   (0xa18 + ((n) * 0x18))
#define CONTROL_CONF_USB_DRVVBUS(n)   (0xa1c + ((n) * 0x18))
#define CONTROL_CONF_DDR_RESETN   (0xa38)
#define CONTROL_CONF_DDR_CSN0   (0xa3c)
#define CONTROL_CONF_DDR_CKE   (0xa40)
#define CONTROL_CONF_DDR_CK    (0xa44)
#define CONTROL_CONF_DDR_NCK   (0xa48)
#define CONTROL_CONF_DDR_CASN   (0xa4c)
#define CONTROL_CONF_DDR_RASN   (0xa50)
#define CONTROL_CONF_DDR_WEN   (0xa54)
#define CONTROL_CONF_DDR_BA(n)   (0xa58 + (n * 4))
#define CONTROL_CONF_DDR_A(n)   (0xa64 + (n * 4))
#define CONTROL_CONF_DDR_ODT   (0xaa4)
#define CONTROL_CONF_DDR_D(n)   (0xaa8 + (n * 4))
#define CONTROL_CONF_DDR_DQM(n)   (0xae8 + (n * 4))
#define CONTROL_CONF_DDR_DQS(n)   (0xaf0 + (n * 8))
#define CONTROL_CONF_DDR_DQSN(n)   (0xaf4 + (n * 8))
#define CONTROL_CONF_DDR_VREF   (0xb00)
#define CONTROL_CONF_DDR_VTP   (0xb04)
#define CONTROL_CONF_DDR_STRBEN(n)   (0xb08 + (n * 4))
#define CONTROL_CONF_AIN0    (0xb2c)
#define CONTROL_CONF_AIN1    (0xb28)
#define CONTROL_CONF_AIN2    (0xb24)
#define CONTROL_CONF_AIN3    (0xb20)
#define CONTROL_CONF_AIN4    (0xb1c)
#define CONTROL_CONF_AIN5    (0xb18)
#define CONTROL_CONF_AIN6    (0xb14)
#define CONTROL_CONF_AIN7    (0xb10)
#define CONTROL_CONF_VREFP   (0xb30)
#define CONTROL_CONF_VREFN   (0xb34)
#define CONTROL_CONF_AVDD   (0xb38)
#define CONTROL_CONF_AVSS   (0xb3c)
#define CONTROL_CONF_IFORCE   (0xb40)
#define CONTROL_CONF_VSENSE   (0xb44)
#define CONTROL_CONF_TESTOUT   (0xb48)
#define CONTROL_CQDETECT_STATUS   (0xe00)
#define CONTROL_DDR_IO_CTRL   (0xe04)
#define CONTROL_VTP_CTRL   (0xe0c)
#define CONTROL_VREF_CTRL   (0xe14)
#define CONTROL_SERDES_REFCLK_CTL   (0xe24)
#define CONTROL_TPCC_EVT_MUX_0_3   (0xf90)
#define CONTROL_TPCC_EVT_MUX_4_7   (0xf94)
#define CONTROL_TPCC_EVT_MUX_8_11   (0xf98)
#define CONTROL_TPCC_EVT_MUX_12_15   (0xf9c)
#define CONTROL_TPCC_EVT_MUX_16_19   (0xfa0)
#define CONTROL_TPCC_EVT_MUX_20_23   (0xfa4)
#define CONTROL_TPCC_EVT_MUX_24_27   (0xfa8)
#define CONTROL_TPCC_EVT_MUX_28_31   (0xfac)
#define CONTROL_TPCC_EVT_MUX_32_35   (0xfb0)
#define CONTROL_TPCC_EVT_MUX_36_39   (0xfb4)
#define CONTROL_TPCC_EVT_MUX_40_43   (0xfb8)
#define CONTROL_TPCC_EVT_MUX_44_47   (0xfbc)
#define CONTROL_TPCC_EVT_MUX_48_51   (0xfc0)
#define CONTROL_TPCC_EVT_MUX_52_55   (0xfc4)
#define CONTROL_TPCC_EVT_MUX_56_59   (0xfc8)
#define CONTROL_TPCC_EVT_MUX_60_63   (0xfcc)
#define CONTROL_TIMER_EVT_CAPT   (0xfd0)
#define CONTROL_ECAP_EVT_CAPT   (0xfd4)
#define CONTROL_ADC_EVT_CAPT   (0xfd8)
#define CONTROL_RESET_ISO   (0x1000)
#define CONTROL_SMA(n)   (0x1318 + (n * 8))
#define CONTROL_DDR_CKE_CTRL   (0x131c)
#define CONTROL_M3_TXEV_EOI   (0x1324)
#define CONTROL_IPC_MSG_REG(n)   (0x1328 + (n * 4))
#define CONTROL_DDR_CMD_IOCTRL(n)   (0x1404 + (n * 4))
#define CONTROL_DDR_DATA_IOCTRL(n)   (0x1440 + (n * 4))


#define CONTROL_CONF_PULLUDDISABLE     0x00000008 
#define CONTROL_CONF_PULLUPSEL         0x00000010
#define CONTROL_CONF_RXACTIVE          0x00000020 
#define CONTROL_CONF_SLOWSLEW          0x00000040
#define CONTROL_CONF_MUXMODE(n)        (n)


/**************************************************************************\ 
 * Field Definition Macros
\**************************************************************************/

/* CONTROL_REVISION */
#define CONTROL_REVISION_IP_REV_CUSTOM   (0x000000C0u)
#define CONTROL_REVISION_IP_REV_CUSTOM_SHIFT   (0x00000006u)

#define CONTROL_REVISION_IP_REV_FUNC   (0x0FFF0000u)
#define CONTROL_REVISION_IP_REV_FUNC_SHIFT   (0x00000010u)

#define CONTROL_REVISION_IP_REV_MAJOR   (0x00000700u)
#define CONTROL_REVISION_IP_REV_MAJOR_SHIFT   (0x00000008u)

#define CONTROL_REVISION_IP_REV_MINOR   (0x0000003Fu)
#define CONTROL_REVISION_IP_REV_MINOR_SHIFT   (0x00000000u)

#define CONTROL_REVISION_IP_REV_RTL   (0x0000F800u)
#define CONTROL_REVISION_IP_REV_RTL_SHIFT   (0x0000000Bu)

#define CONTROL_REVISION_IP_REV_SCHEME   (0xC0000000u)
#define CONTROL_REVISION_IP_REV_SCHEME_SHIFT   (0x0000001Eu)


/* CONTROL_HWINFO */
#define CONTROL_HWINFO_IP_HWINFO   (0xFFFFFFFFu)
#define CONTROL_HWINFO_IP_HWINFO_SHIFT   (0x00000000u)


/* CONTROL_SYSCONFIG */
#define CONTROL_SYSCONFIG_FREEEMU   (0x00000002u)
#define CONTROL_SYSCONFIG_FREEEMU_SHIFT   (0x00000001u)

#define CONTROL_SYSCONFIG_IDLEMODE   (0x0000000Cu)
#define CONTROL_SYSCONFIG_IDLEMODE_SHIFT   (0x00000002u)

#define CONTROL_SYSCONFIG_RSVD2   (0xFFFFFFC0u)
#define CONTROL_SYSCONFIG_RSVD2_SHIFT   (0x00000006u)

#define CONTROL_SYSCONFIG_STANDBY   (0x00000030u)
#define CONTROL_SYSCONFIG_STANDBY_SHIFT   (0x00000004u)


/* CONTROL_STATUS */
#define CONTROL_STATUS_ADMUX   (0x000C0000u)
#define CONTROL_STATUS_ADMUX_SHIFT   (0x00000012u)

#define CONTROL_STATUS_BW   (0x00010000u)
#define CONTROL_STATUS_BW_SHIFT   (0x00000010u)

#define CONTROL_STATUS_DEVTYPE   (0x00000700u)
#define CONTROL_STATUS_DEVTYPE_SHIFT   (0x00000008u)

#define CONTROL_STATUS_RSVD2   (0xFF000000u)
#define CONTROL_STATUS_RSVD2_SHIFT   (0x00000018u)

#define CONTROL_STATUS_SYSBOOT0   (0x000000FFu)
#define CONTROL_STATUS_SYSBOOT0_SHIFT   (0x00000000u)

#define CONTROL_STATUS_SYSBOOT1   (0x00C00000u)
#define CONTROL_STATUS_SYSBOOT1_SHIFT   (0x00000016u)

#define CONTROL_STATUS_TESTMD   (0x00300000u)
#define CONTROL_STATUS_TESTMD_SHIFT   (0x00000014u)

#define CONTROL_STATUS_WAITEN   (0x00020000u)
#define CONTROL_STATUS_WAITEN_SHIFT   (0x00000011u)


/* BOOTSTAT */
#define CONTROL_BOOTSTAT_BC   (0x00000001u)
#define CONTROL_BOOTSTAT_BC_SHIFT   (0x00000000u)

#define CONTROL_BOOTSTAT_BOOTERR   (0x000F0000u)
#define CONTROL_BOOTSTAT_BOOTERR_SHIFT   (0x00000010u)

#define CONTROL_BOOTSTAT_RSVD2   (0xFFF00000u)
#define CONTROL_BOOTSTAT_RSVD2_SHIFT   (0x00000014u)


/* CONTROL_SEC_CTRL */
#define CONTROL_SEC_CTRL_BSCENABLE   (0x00000200u)
#define CONTROL_SEC_CTRL_BSCENABLE_SHIFT   (0x00000009u)

#define CONTROL_SEC_CTRL_CATSCANEN   (0x00000100u)
#define CONTROL_SEC_CTRL_CATSCANEN_SHIFT   (0x00000008u)

#define CONTROL_SEC_CTRL_CMPKEFUSENOTDEC   (0x00002000u)
#define CONTROL_SEC_CTRL_CMPKEFUSENOTDEC_SHIFT   (0x0000000Du)

#define CONTROL_SEC_CTRL_CPEFUSELDDONE   (0x00000400u)
#define CONTROL_SEC_CTRL_CPEFUSELDDONE_SHIFT   (0x0000000Au)

#define CONTROL_SEC_CTRL_CPEFUSENOTDEC   (0x00001000u)
#define CONTROL_SEC_CTRL_CPEFUSENOTDEC_SHIFT   (0x0000000Cu)

#define CONTROL_SEC_CTRL_CPEFUSEWRDIS   (0x00000800u)
#define CONTROL_SEC_CTRL_CPEFUSEWRDIS_SHIFT   (0x0000000Bu)

#define CONTROL_SEC_CTRL_DMLEDCOREEN   (0x00000080u)
#define CONTROL_SEC_CTRL_DMLEDCOREEN_SHIFT   (0x00000007u)

#define CONTROL_SEC_CTRL_FASTOCMSECSAVE   (0x30000000u)
#define CONTROL_SEC_CTRL_FASTOCMSECSAVE_SHIFT   (0x0000001Cu)

#define CONTROL_SEC_CTRL_KEKSWENABLE0   (0x00000004u)
#define CONTROL_SEC_CTRL_KEKSWENABLE0_SHIFT   (0x00000002u)

#define CONTROL_SEC_CTRL_KEKSWENABLE1   (0x00000010u)
#define CONTROL_SEC_CTRL_KEKSWENABLE1_SHIFT   (0x00000004u)

#define CONTROL_SEC_CTRL_L3OCMSECSAVE   (0x0C000000u)
#define CONTROL_SEC_CTRL_L3OCMSECSAVE_SHIFT   (0x0000001Au)

#define CONTROL_SEC_CTRL_RSVD2   (0x00000060u)
#define CONTROL_SEC_CTRL_RSVD2_SHIFT   (0x00000005u)

#define CONTROL_SEC_CTRL_SECCTRLWRDISABLE   (0x80000000u)
#define CONTROL_SEC_CTRL_SECCTRLWRDISABLE_SHIFT   (0x0000001Fu)

#define CONTROL_SEC_CTRL_SECUREMODEINITDONE   (0x40000000u)
#define CONTROL_SEC_CTRL_SECUREMODEINITDONE_SHIFT   (0x0000001Eu)

#define CONTROL_SEC_CTRL_WDOPDISABLE   (0x00000001u)
#define CONTROL_SEC_CTRL_WDOPDISABLE_SHIFT   (0x00000000u)

#define CONTROL_SEC_CTRL_WDREGENABLE   (0x00000002u)
#define CONTROL_SEC_CTRL_WDREGENABLE_SHIFT   (0x00000001u)


/* CONTROL_SEC_SW */
#define CONTROL_SEC_SW_SW_HW_PARAMETERS   (0xFFFFFFFFu)
#define CONTROL_SEC_SW_SW_HW_PARAMETERS_SHIFT   (0x00000000u)


/* CONTROL_SEC_EMU */
#define CONTROL_SEC_EMU_ETMSECPRIVDBGEN   (0x00001000u)
#define CONTROL_SEC_EMU_ETMSECPRIVDBGEN_SHIFT   (0x0000000Cu)

#define CONTROL_SEC_EMU_GENDBGEN   (0x00000FFFu)
#define CONTROL_SEC_EMU_GENDBGEN_SHIFT   (0x00000000u)

#define CONTROL_SEC_EMU_GENDBGEN_M3   (0x0000C000u)
#define CONTROL_SEC_EMU_GENDBGEN_M3_SHIFT   (0x0000000Eu)

#define CONTROL_SEC_EMU_ICESECPRIVDBGEN   (0x00002000u)
#define CONTROL_SEC_EMU_ICESECPRIVDBGEN_SHIFT   (0x0000000Du)

#define CONTROL_SEC_EMU_SECEMUWRDIS   (0x80000000u)
#define CONTROL_SEC_EMU_SECEMUWRDIS_SHIFT   (0x0000001Fu)


/* SECURE_EMIF_SDRAM_CONFIG */
#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_CL   (0x00003C00u)
#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_CL_SHIFT   (0x0000000Au)

#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_CWL   (0x00030000u)
#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_CWL_SHIFT   (0x00000010u)

#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_DDR_TERM   (0x07000000u)
#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_DDR_TERM_SHIFT   (0x00000018u)

#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_DYN_ODT   (0x00600000u)
#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_DYN_ODT_SHIFT   (0x00000015u)

#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_EBANK   (0x00000008u)
#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_EBANK_SHIFT   (0x00000003u)

#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_IBANK   (0x00000070u)
#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_IBANK_SHIFT   (0x00000004u)

#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_IBANK_POS   (0x18000000u)
#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_IBANK_POS_SHIFT   (0x0000001Bu)

#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_NARROW_MODE   (0x0000C000u)
#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_NARROW_MODE_SHIFT   (0x0000000Eu)

#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_PAGESIZE   (0x00000007u)
#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_PAGESIZE_SHIFT   (0x00000000u)

#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_ROWSIZE   (0x00000380u)
#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_ROWSIZE_SHIFT   (0x00000007u)

#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_RSVD2   (0x00800000u)
#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_RSVD2_SHIFT   (0x00000017u)

#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_SDRAM_DRIVE   (0x000C0000u)
#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_SDRAM_DRIVE_SHIFT   (0x00000012u)

#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_SDRAM_TYPE   (0xE0000000u)
#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_SDRAM_TYPE_SHIFT   (0x0000001Du)


/* SECURE_EMIF_SDRAM_CONFIG_2 */
#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_2_CS1_NVMEN   (0x40000000u)
#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_2_CS1_NVMEN_SHIFT   (0x0000001Eu)

#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_2_EBANK_POS   (0x08000000u)
#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_2_EBANK_POS_SHIFT   (0x0000001Bu)

#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_2_RDBNUM   (0x00000030u)
#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_2_RDBNUM_SHIFT   (0x00000004u)

#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_2_RDBSIZE   (0x00000007u)
#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_2_RDBSIZE_SHIFT   (0x00000000u)

#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_2_RSVD2   (0x07FFFFC0u)
#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_2_RSVD2_SHIFT   (0x00000006u)

#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_2_RSVD3   (0x30000000u)
#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_2_RSVD3_SHIFT   (0x0000001Cu)

#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_2_RSVD4   (0x80000000u)
#define CONTROL_SECURE_EMIF_SDRAM_CONFIG_2_RSVD4_SHIFT   (0x0000001Fu)


/* CONTROL_SW_CFG */
#define CONTROL_SW_CFG_SW_CFG   (0xFFFFFFFFu)
#define CONTROL_SW_CFG_SW_CFG_SHIFT   (0x00000000u)


/* CONTROL_SW_CCFG */
#define CONTROL_SW_CCFG_SW_CCFG   (0x0000FFFFu)
#define CONTROL_SW_CCFG_SW_CCFG_SHIFT   (0x00000000u)

#define CONTROL_SW_CCFG_SW_CCFG_RED   (0xFFFF0000u)
#define CONTROL_SW_CCFG_SW_CCFG_RED_SHIFT   (0x00000010u)


/* CONTROL_MPK_0 */
#define CONTROL_MPK_0_MPK   (0xFFFFFFFFu)
#define CONTROL_MPK_0_MPK_SHIFT   (0x00000000u)


/* CONTROL_MPK_1 */
#define CONTROL_MPK_1_MPK   (0xFFFFFFFFu)
#define CONTROL_MPK_1_MPK_SHIFT   (0x00000000u)


/* CONTROL_MPK_2 */
#define CONTROL_MPK_2_MPK   (0xFFFFFFFFu)
#define CONTROL_MPK_2_MPK_SHIFT   (0x00000000u)


/* CONTROL_MPK_3 */
#define CONTROL_MPK_3_MPK   (0xFFFFFFFFu)
#define CONTROL_MPK_3_MPK_SHIFT   (0x00000000u)


/* CONTROL_MPK_4 */
#define CONTROL_MPK_4_MPK   (0xFFFFFFFFu)
#define CONTROL_MPK_4_MPK_SHIFT   (0x00000000u)


/* CONTROL_MPK_5 */
#define CONTROL_MPK_5_MPK   (0xFFFFFFFFu)
#define CONTROL_MPK_5_MPK_SHIFT   (0x00000000u)


/* CONTROL_MPK_6 */
#define CONTROL_MPK_6_MPK   (0xFFFFFFFFu)
#define CONTROL_MPK_6_MPK_SHIFT   (0x00000000u)


/* CONTROL_MPK_7 */
#define CONTROL_MPK_7_MPK   (0xFFFFFFFFu)
#define CONTROL_MPK_7_MPK_SHIFT   (0x00000000u)


/* CONTROL_SWRV_0 */
#define CONTROL_SWRV_0_SWRV   (0x0000FFFFu)
#define CONTROL_SWRV_0_SWRV_SHIFT   (0x00000000u)

#define CONTROL_SWRV_0_SWRV_RED   (0xFFFF0000u)
#define CONTROL_SWRV_0_SWRV_RED_SHIFT   (0x00000010u)


/* CONTROL_SWRV_1 */
#define CONTROL_SWRV_1_SWRV   (0x0000FFFFu)
#define CONTROL_SWRV_1_SWRV_SHIFT   (0x00000000u)

#define CONTROL_SWRV_1_SWRV_RED   (0xFFFF0000u)
#define CONTROL_SWRV_1_SWRV_RED_SHIFT   (0x00000010u)


/* CONTROL_SWRV_2 */
#define CONTROL_SWRV_2_SWRV   (0x0000FFFFu)
#define CONTROL_SWRV_2_SWRV_SHIFT   (0x00000000u)

#define CONTROL_SWRV_2_SWRV_RED   (0xFFFF0000u)
#define CONTROL_SWRV_2_SWRV_RED_SHIFT   (0x00000010u)


/* CONTROL_SWRV_3 */
#define CONTROL_SWRV_3_SWRV   (0x0000FFFFu)
#define CONTROL_SWRV_3_SWRV_SHIFT   (0x00000000u)

#define CONTROL_SWRV_3_SWRV_RED   (0xFFFF0000u)
#define CONTROL_SWRV_3_SWRV_RED_SHIFT   (0x00000010u)


/* CONTROL_SWRV_4 */
#define CONTROL_SWRV_4_SWRV   (0x0000FFFFu)
#define CONTROL_SWRV_4_SWRV_SHIFT   (0x00000000u)

#define CONTROL_SWRV_4_SWRV_RED   (0xFFFF0000u)
#define CONTROL_SWRV_4_SWRV_RED_SHIFT   (0x00000010u)


/* CONTROL_SWRV_5 */
#define CONTROL_SWRV_5_SWRV   (0x0000FFFFu)
#define CONTROL_SWRV_5_SWRV_SHIFT   (0x00000000u)

#define CONTROL_SWRV_5_SWRV_RED   (0xFFFF0000u)
#define CONTROL_SWRV_5_SWRV_RED_SHIFT   (0x00000010u)


/* CONTROL_SWRV_6 */
#define CONTROL_SWRV_6_SWRV   (0x0000FFFFu)
#define CONTROL_SWRV_6_SWRV_SHIFT   (0x00000000u)

#define CONTROL_SWRV_6_SWRV_RED   (0xFFFF0000u)
#define CONTROL_SWRV_6_SWRV_RED_SHIFT   (0x00000010u)


/* CONTROL_SEC_TAP */
#define CONTROL_SEC_TAP_1500EN   (0x00000008u)
#define CONTROL_SEC_TAP_1500EN_SHIFT   (0x00000003u)

#define CONTROL_SEC_TAP_DAPTAPEN   (0x00000001u)
#define CONTROL_SEC_TAP_DAPTAPEN_SHIFT   (0x00000000u)

#define CONTROL_SEC_TAP_PART1500DIS   (0x00000010u)
#define CONTROL_SEC_TAP_PART1500DIS_SHIFT   (0x00000004u)

#define CONTROL_SEC_TAP_RSVD2   (0x000001E0u)
#define CONTROL_SEC_TAP_RSVD2_SHIFT   (0x00000005u)

#define CONTROL_SEC_TAP_RSVD3   (0x7FFFFC00u)
#define CONTROL_SEC_TAP_RSVD3_SHIFT   (0x0000000Au)

#define CONTROL_SEC_TAP_SABERMPUTAPEN   (0x00000200u)
#define CONTROL_SEC_TAP_SABERMPUTAPEN_SHIFT   (0x00000009u)

#define CONTROL_SEC_TAP_SECTAPWRDISABLE   (0x80000000u)
#define CONTROL_SEC_TAP_SECTAPWRDISABLE_SHIFT   (0x0000001Fu)

#define CONTROL_SEC_TAP_WAKEUPTAPEN   (0x00000004u)
#define CONTROL_SEC_TAP_WAKEUPTAPEN_SHIFT   (0x00000002u)


/* CONTROL_SEC_TAP_CMDIN */
#define CONTROL_SEC_TAP_CMDIN_CMDIN   (0x000000FFu)
#define CONTROL_SEC_TAP_CMDIN_CMDIN_SHIFT   (0x00000000u)


/* CONTROL_SEC_TAP_CMDOUT */
#define CONTROL_SEC_TAP_CMDOUT_CMDOUT   (0x000000FFu)
#define CONTROL_SEC_TAP_CMDOUT_CMDOUT_SHIFT   (0x00000000u)


/* CONTROL_SEC_TAP_DATIN */
#define CONTROL_SEC_TAP_DATIN_DATAIN   (0x000000FFu)
#define CONTROL_SEC_TAP_DATIN_DATAIN_SHIFT   (0x00000000u)


/* CONTROL_SEC_TAP_DATOUT */
#define CONTROL_SEC_TAP_DATOUT_DATAOUT   (0x000000FFu)
#define CONTROL_SEC_TAP_DATOUT_DATAOUT_SHIFT   (0x00000000u)


/* CONTROL_MREQDOMAIN_EXP1 */
#define CONTROL_MREQDOMAIN_EXP1_2DBITBLT_DOM   (0x001C0000u)
#define CONTROL_MREQDOMAIN_EXP1_2DBITBLT_DOM_SHIFT   (0x00000012u)

#define CONTROL_MREQDOMAIN_EXP1_L3_EXP_DOM   (0x00000007u)
#define CONTROL_MREQDOMAIN_EXP1_L3_EXP_DOM_SHIFT   (0x00000000u)

#define CONTROL_MREQDOMAIN_EXP1_LCD_CTRL_DOM   (0x00038000u)
#define CONTROL_MREQDOMAIN_EXP1_LCD_CTRL_DOM_SHIFT   (0x0000000Fu)

#define CONTROL_MREQDOMAIN_EXP1_LCK   (0x80000000u)
#define CONTROL_MREQDOMAIN_EXP1_LCK_SHIFT   (0x0000001Fu)

#define CONTROL_MREQDOMAIN_EXP1_MLB_DOM   (0x00007000u)
#define CONTROL_MREQDOMAIN_EXP1_MLB_DOM_SHIFT   (0x0000000Cu)

#define CONTROL_MREQDOMAIN_EXP1_RSVD2   (0x78000000u)
#define CONTROL_MREQDOMAIN_EXP1_RSVD2_SHIFT   (0x0000001Bu)

#define CONTROL_MREQDOMAIN_EXP1_SGX_DOM   (0x07000000u)
#define CONTROL_MREQDOMAIN_EXP1_SGX_DOM_SHIFT   (0x00000018u)

#define CONTROL_MREQDOMAIN_EXP1_WAKE_DOM   (0x00E00000u)
#define CONTROL_MREQDOMAIN_EXP1_WAKE_DOM_SHIFT   (0x00000015u)


/* CONTROL_MREQDOMAIN_EXP2 */
#define CONTROL_MREQDOMAIN_EXP2_GEMAC_DOM   (0x001C0000u)
#define CONTROL_MREQDOMAIN_EXP2_GEMAC_DOM_SHIFT   (0x00000012u)

#define CONTROL_MREQDOMAIN_EXP2_LCK   (0x80000000u)
#define CONTROL_MREQDOMAIN_EXP2_LCK_SHIFT   (0x0000001Fu)

#define CONTROL_MREQDOMAIN_EXP2_P1500_DOM   (0x00038000u)
#define CONTROL_MREQDOMAIN_EXP2_P1500_DOM_SHIFT   (0x0000000Fu)

#define CONTROL_MREQDOMAIN_EXP2_RSVD2   (0x7FE00000u)
#define CONTROL_MREQDOMAIN_EXP2_RSVD2_SHIFT   (0x00000015u)

#define CONTROL_MREQDOMAIN_EXP2_USB0_DOM   (0x00000E00u)
#define CONTROL_MREQDOMAIN_EXP2_USB0_DOM_SHIFT   (0x00000009u)

#define CONTROL_MREQDOMAIN_EXP2_USB1_DOM   (0x00007000u)
#define CONTROL_MREQDOMAIN_EXP2_USB1_DOM_SHIFT   (0x0000000Cu)


/* L3_HW_FW_EXP_VAL_CONF0 */
#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_L3EXP_SECDBG_EN   (0x00040000u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_L3EXP_SECDBG_EN_SHIFT   (0x00000012u)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_L3EXP_SECLOCK_EN   (0x00000004u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_L3EXP_SECLOCK_EN_SHIFT   (0x00000002u)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_L3RAM_SECDBG_EN   (0x01000000u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_L3RAM_SECDBG_EN_SHIFT   (0x00000018u)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_L3RAM_SECLOCK_EN   (0x00000100u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_L3RAM_SECLOCK_EN_SHIFT   (0x00000008u)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_RSVD2   (0x00000020u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_RSVD2_SHIFT   (0x00000005u)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_RSVD3   (0x00000200u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_RSVD3_SHIFT   (0x00000009u)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_RSVD4   (0x0003F800u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_RSVD4_SHIFT   (0x0000000Bu)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_RSVD5   (0x00200000u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_RSVD5_SHIFT   (0x00000015u)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_RSVD6   (0x02000000u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_RSVD6_SHIFT   (0x00000019u)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_RSVD7   (0xF8000000u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_RSVD7_SHIFT   (0x0000001Bu)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_SGX_SECDBG_EN   (0x00800000u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_SGX_SECDBG_EN_SHIFT   (0x00000017u)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_SGX_SECLOCK_EN   (0x00000080u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_SGX_SECLOCK_EN_SHIFT   (0x00000007u)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_TPCC_SECDBG_EN   (0x00100000u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_TPCC_SECDBG_EN_SHIFT   (0x00000014u)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_TPCC_SECLOCK_EN   (0x00000010u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_TPCC_SECLOCK_EN_SHIFT   (0x00000004u)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_TPTC_SECDBG_EN   (0x00080000u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_TPTC_SECDBG_EN_SHIFT   (0x00000013u)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_TPTC_SECLOCK_EN   (0x00000008u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_TPTC_SECLOCK_EN_SHIFT   (0x00000003u)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_USB_SECDBG_EN   (0x04000000u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_USB_SECDBG_EN_SHIFT   (0x0000001Au)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_USB_SECLOCK_EN   (0x00000400u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF0_USB_SECLOCK_EN_SHIFT   (0x0000000Au)


/* L3_HW_FW_EXP_VAL_CONF1 */
#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_ADCTSC_SECDBG_EN   (0x08000000u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_ADCTSC_SECDBG_EN_SHIFT   (0x0000001Bu)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_ADCTSC_SECLOCK_EN   (0x00000800u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_ADCTSC_SECLOCK_EN_SHIFT   (0x0000000Bu)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_AES0_SECDBG_EN   (0x10000000u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_AES0_SECDBG_EN_SHIFT   (0x0000001Cu)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_AES0_SECLOCK_EN   (0x00001000u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_AES0_SECLOCK_EN_SHIFT   (0x0000000Cu)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_DEBUG_SECDBG_EN   (0x02000000u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_DEBUG_SECDBG_EN_SHIFT   (0x00000019u)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_DEBUG_SECLOCK_EN   (0x00000200u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_DEBUG_SECLOCK_EN_SHIFT   (0x00000009u)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_EMIF_SECDBG_EN   (0x01000000u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_EMIF_SECDBG_EN_SHIFT   (0x00000018u)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_EMIF_SECLOCK_EN   (0x00000100u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_EMIF_SECLOCK_EN_SHIFT   (0x00000008u)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_GPMC_SECDBG_EN   (0x00080000u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_GPMC_SECDBG_EN_SHIFT   (0x00000013u)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_GPMC_SECLOCK_EN   (0x00000008u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_GPMC_SECLOCK_EN_SHIFT   (0x00000003u)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_MCASP0_SECDBG_EN   (0x00100000u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_MCASP0_SECDBG_EN_SHIFT   (0x00000014u)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_MCASP0_SECLOCK_EN   (0x00000010u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_MCASP0_SECLOCK_EN_SHIFT   (0x00000004u)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_MCASP1_SECDBG_EN   (0x00200000u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_MCASP1_SECDBG_EN_SHIFT   (0x00000015u)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_MCASP1_SECLOCK_EN   (0x00000020u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_MCASP1_SECLOCK_EN_SHIFT   (0x00000005u)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_MMCHS2_SECDBG_EN   (0x04000000u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_MMCHS2_SECDBG_EN_SHIFT   (0x0000001Au)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_MMCHS2_SECLOCK_EN   (0x00000400u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_MMCHS2_SECLOCK_EN_SHIFT   (0x0000000Au)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_RSVD2   (0x00000080u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_RSVD2_SHIFT   (0x00000007u)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_RSVD3   (0x00078000u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_RSVD3_SHIFT   (0x0000000Fu)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_RSVD4   (0x00800000u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_RSVD4_SHIFT   (0x00000017u)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_RSVD5   (0x80000000u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_RSVD5_SHIFT   (0x0000001Fu)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_SHA_SECDBG_EN   (0x40000000u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_SHA_SECDBG_EN_SHIFT   (0x0000001Eu)

#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_SHA_SECLOCK_EN   (0x00004000u)
#define CONTROL_L3_HW_FW_EXP_VAL_CONF1_SHA_SECLOCK_EN_SHIFT   (0x0000000Eu)


/* L4_HW_FW_EXP_VAL_CONF */
#define CONTROL_L4_HW_FW_EXP_VAL_CONF_L4FAST_AP_SECDBG_EN   (0x01000000u)
#define CONTROL_L4_HW_FW_EXP_VAL_CONF_L4FAST_AP_SECDBG_EN_SHIFT   (0x00000018u)

#define CONTROL_L4_HW_FW_EXP_VAL_CONF_L4FAST_AP_SECLOCK_EN   (0x00000100u)
#define CONTROL_L4_HW_FW_EXP_VAL_CONF_L4FAST_AP_SECLOCK_EN_SHIFT   (0x00000008u)

#define CONTROL_L4_HW_FW_EXP_VAL_CONF_L4FW_AP_SECDBG_EN   (0x00100000u)
#define CONTROL_L4_HW_FW_EXP_VAL_CONF_L4FW_AP_SECDBG_EN_SHIFT   (0x00000014u)

#define CONTROL_L4_HW_FW_EXP_VAL_CONF_L4FW_AP_SECLOCK_EN   (0x00000010u)
#define CONTROL_L4_HW_FW_EXP_VAL_CONF_L4FW_AP_SECLOCK_EN_SHIFT   (0x00000004u)

#define CONTROL_L4_HW_FW_EXP_VAL_CONF_L4FW_SEC_SECDBG_EN   (0x00200000u)
#define CONTROL_L4_HW_FW_EXP_VAL_CONF_L4FW_SEC_SECDBG_EN_SHIFT   (0x00000015u)

#define CONTROL_L4_HW_FW_EXP_VAL_CONF_L4FW_SEC_SECLOCK_EN   (0x00000020u)
#define CONTROL_L4_HW_FW_EXP_VAL_CONF_L4FW_SEC_SECLOCK_EN_SHIFT   (0x00000005u)

#define CONTROL_L4_HW_FW_EXP_VAL_CONF_L4PER_AP_SECDBG_EN   (0x00010000u)
#define CONTROL_L4_HW_FW_EXP_VAL_CONF_L4PER_AP_SECDBG_EN_SHIFT   (0x00000010u)

#define CONTROL_L4_HW_FW_EXP_VAL_CONF_L4PER_AP_SECLOCK_EN   (0x00000001u)
#define CONTROL_L4_HW_FW_EXP_VAL_CONF_L4PER_AP_SECLOCK_EN_SHIFT   (0x00000000u)

#define CONTROL_L4_HW_FW_EXP_VAL_CONF_L4PER_CRYPTO_SECDBG_EN   (0x00020000u)
#define CONTROL_L4_HW_FW_EXP_VAL_CONF_L4PER_CRYPTO_SECDBG_EN_SHIFT   (0x00000011u)

#define CONTROL_L4_HW_FW_EXP_VAL_CONF_L4PER_CRYPTO_SECLOCK_EN   (0x00000002u)
#define CONTROL_L4_HW_FW_EXP_VAL_CONF_L4PER_CRYPTO_SECLOCK_EN_SHIFT   (0x00000001u)

#define CONTROL_L4_HW_FW_EXP_VAL_CONF_L4WKUP_AP_SECDBG_EN   (0x10000000u)
#define CONTROL_L4_HW_FW_EXP_VAL_CONF_L4WKUP_AP_SECDBG_EN_SHIFT   (0x0000001Cu)

#define CONTROL_L4_HW_FW_EXP_VAL_CONF_L4WKUP_AP_SECLOCK_EN   (0x00001000u)
#define CONTROL_L4_HW_FW_EXP_VAL_CONF_L4WKUP_AP_SECLOCK_EN_SHIFT   (0x0000000Cu)

#define CONTROL_L4_HW_FW_EXP_VAL_CONF_L4WKUP_SEC_SECDBG_EN   (0x20000000u)
#define CONTROL_L4_HW_FW_EXP_VAL_CONF_L4WKUP_SEC_SECDBG_EN_SHIFT   (0x0000001Du)

#define CONTROL_L4_HW_FW_EXP_VAL_CONF_L4WKUP_SEC_SECLOCK_EN   (0x00002000u)
#define CONTROL_L4_HW_FW_EXP_VAL_CONF_L4WKUP_SEC_SECLOCK_EN_SHIFT   (0x0000000Du)

#define CONTROL_L4_HW_FW_EXP_VAL_CONF_RSVD2   (0x000000C0u)
#define CONTROL_L4_HW_FW_EXP_VAL_CONF_RSVD2_SHIFT   (0x00000006u)

#define CONTROL_L4_HW_FW_EXP_VAL_CONF_RSVD3   (0x00000E00u)
#define CONTROL_L4_HW_FW_EXP_VAL_CONF_RSVD3_SHIFT   (0x00000009u)

#define CONTROL_L4_HW_FW_EXP_VAL_CONF_RSVD4   (0x0000C000u)
#define CONTROL_L4_HW_FW_EXP_VAL_CONF_RSVD4_SHIFT   (0x0000000Eu)

#define CONTROL_L4_HW_FW_EXP_VAL_CONF_RSVD5   (0x000C0000u)
#define CONTROL_L4_HW_FW_EXP_VAL_CONF_RSVD5_SHIFT   (0x00000012u)

#define CONTROL_L4_HW_FW_EXP_VAL_CONF_RSVD6   (0x00C00000u)
#define CONTROL_L4_HW_FW_EXP_VAL_CONF_RSVD6_SHIFT   (0x00000016u)

#define CONTROL_L4_HW_FW_EXP_VAL_CONF_RSVD7   (0x0E000000u)
#define CONTROL_L4_HW_FW_EXP_VAL_CONF_RSVD7_SHIFT   (0x00000019u)


/* CONTROL_SEC_LOAD_FW_EXP_VAL */
#define CONTROL_SEC_LOAD_FW_EXP_VAL_L4FAST_LD_EXPVAL_REQN   (0x00000010u)
#define CONTROL_SEC_LOAD_FW_EXP_VAL_L4FAST_LD_EXPVAL_REQN_SHIFT   (0x00000004u)

#define CONTROL_SEC_LOAD_FW_EXP_VAL_L4FW_LD_EXPVAL_REQN   (0x00000004u)
#define CONTROL_SEC_LOAD_FW_EXP_VAL_L4FW_LD_EXPVAL_REQN_SHIFT   (0x00000002u)

#define CONTROL_SEC_LOAD_FW_EXP_VAL_L4PER_LD_EXPVAL_REQN   (0x00000008u)
#define CONTROL_SEC_LOAD_FW_EXP_VAL_L4PER_LD_EXPVAL_REQN_SHIFT   (0x00000003u)

#define CONTROL_SEC_LOAD_FW_EXP_VAL_L4WKUP_LD_EXPVAL_REQN   (0x00000020u)
#define CONTROL_SEC_LOAD_FW_EXP_VAL_L4WKUP_LD_EXPVAL_REQN_SHIFT   (0x00000005u)

#define CONTROL_SEC_LOAD_FW_EXP_VAL_RSVD2   (0xFFFFFFC0u)
#define CONTROL_SEC_LOAD_FW_EXP_VAL_RSVD2_SHIFT   (0x00000006u)


/* CONTROL_SEC_CTRL_RO */
#define CONTROL_SEC_CTRL_RO_CUSTMPK   (0x00000010u)
#define CONTROL_SEC_CTRL_RO_CUSTMPK_SHIFT   (0x00000004u)

#define CONTROL_SEC_CTRL_RO_EMIF_CFG_RO_EN   (0x00000002u)
#define CONTROL_SEC_CTRL_RO_EMIF_CFG_RO_EN_SHIFT   (0x00000001u)

#define CONTROL_SEC_CTRL_RO_EMIF_OBFS_EN   (0x00000004u)
#define CONTROL_SEC_CTRL_RO_EMIF_OBFS_EN_SHIFT   (0x00000002u)

#define CONTROL_SEC_CTRL_RO_RSVD2   (0xFFFFFFE0u)
#define CONTROL_SEC_CTRL_RO_RSVD2_SHIFT   (0x00000005u)

#define CONTROL_SEC_CTRL_RO_SECKEYACCEN   (0x00000008u)
#define CONTROL_SEC_CTRL_RO_SECKEYACCEN_SHIFT   (0x00000003u)


/* EMIF_OBFUSCATION_KEY */
#define CONTROL_EMIF_OBFUSCATION_KEY_OBFUSCATIONKEY   (0x0000FFFFu)
#define CONTROL_EMIF_OBFUSCATION_KEY_OBFUSCATIONKEY_SHIFT   (0x00000000u)


/* SEC_CLK_CTRL */
#define CONTROL_SEC_CLK_CTRL_RSVD2   (0x7FFFFFC0u)
#define CONTROL_SEC_CLK_CTRL_RSVD2_SHIFT   (0x00000006u)

#define CONTROL_SEC_CLK_CTRL_SECCLKLCK   (0x80000000u)
#define CONTROL_SEC_CLK_CTRL_SECCLKLCK_SHIFT   (0x0000001Fu)

#define CONTROL_SEC_CLK_CTRL_SECTIMERCLKSEL   (0x00000030u)
#define CONTROL_SEC_CLK_CTRL_SECTIMERCLKSEL_SHIFT   (0x00000004u)

#define CONTROL_SEC_CLK_CTRL_SECWDCLKSEL   (0x00000001u)
#define CONTROL_SEC_CLK_CTRL_SECWDCLKSEL_SHIFT   (0x00000000u)


/* CONTROL_MREQDOMAIN_EXP3 */
#define CONTROL_MREQDOMAIN_EXP3_LCK   (0x80000000u)
#define CONTROL_MREQDOMAIN_EXP3_LCK_SHIFT   (0x0000001Fu)

#define CONTROL_MREQDOMAIN_EXP3_PRU0_DOM   (0x00000007u)
#define CONTROL_MREQDOMAIN_EXP3_PRU0_DOM_SHIFT   (0x00000000u)

#define CONTROL_MREQDOMAIN_EXP3_PRU1_DOM   (0x00000038u)
#define CONTROL_MREQDOMAIN_EXP3_PRU1_DOM_SHIFT   (0x00000003u)

#define CONTROL_MREQDOMAIN_EXP3_PRU2_DOM   (0x000001C0u)
#define CONTROL_MREQDOMAIN_EXP3_PRU2_DOM_SHIFT   (0x00000006u)

#define CONTROL_MREQDOMAIN_EXP3_PRU3_DOM   (0x00000E00u)
#define CONTROL_MREQDOMAIN_EXP3_PRU3_DOM_SHIFT   (0x00000009u)


/* CONTROL_CEK_0 */
#define CONTROL_CEK_0_CEK   (0xFFFFFFFFu)
#define CONTROL_CEK_0_CEK_SHIFT   (0x00000000u)


/* CONTROL_CEK_1 */
#define CONTROL_CEK_1_CEK   (0xFFFFFFFFu)
#define CONTROL_CEK_1_CEK_SHIFT   (0x00000000u)


/* CONTROL_CEK_2 */
#define CONTROL_CEK_2_CEK   (0xFFFFFFFFu)
#define CONTROL_CEK_2_CEK_SHIFT   (0x00000000u)


/* CONTROL_CEK_3 */
#define CONTROL_CEK_3_CEK   (0xFFFFFFFFu)
#define CONTROL_CEK_3_CEK_SHIFT   (0x00000000u)


/* CONTROL_CEK_BCH_0 */
#define CONTROL_CEK_BCH_0_CEK_BCH   (0xFFFFFFFFu)
#define CONTROL_CEK_BCH_0_CEK_BCH_SHIFT   (0x00000000u)


/* CONTROL_CEK_BCH_1 */
#define CONTROL_CEK_BCH_1_CEK_BCH   (0xFFFFFFFFu)
#define CONTROL_CEK_BCH_1_CEK_BCH_SHIFT   (0x00000000u)


/* CONTROL_CEK_BCH_2 */
#define CONTROL_CEK_BCH_2_CEK_BCH   (0xFFFFFFFFu)
#define CONTROL_CEK_BCH_2_CEK_BCH_SHIFT   (0x00000000u)


/* CONTROL_CEK_BCH_3 */
#define CONTROL_CEK_BCH_3_CEK_BCH   (0xFFFFFFFFu)
#define CONTROL_CEK_BCH_3_CEK_BCH_SHIFT   (0x00000000u)


/* CONTROL_CEK_BCH_4 */
#define CONTROL_CEK_BCH_4_CEK_BCH   (0x0000FFFFu)
#define CONTROL_CEK_BCH_4_CEK_BCH_SHIFT   (0x00000000u)


/* CONTROL_MSV_0 */
#define CONTROL_MSV_0_MSV   (0xFFFFFFFFu)
#define CONTROL_MSV_0_MSV_SHIFT   (0x00000000u)


/* CONTROL_MSV_BCH_0 */
#define CONTROL_MSV_BCH_0_MSV_BCH   (0xFFFFFFFFu)
#define CONTROL_MSV_BCH_0_MSV_BCH_SHIFT   (0x00000000u)


/* CONTROL_MSV_BCH_1 */
#define CONTROL_MSV_BCH_1_MSV_BCH   (0xFFFFFFFFu)
#define CONTROL_MSV_BCH_1_MSV_BCH_SHIFT   (0x00000000u)


/* CONTROL_SEC_STATUS */
#define CONTROL_SEC_STATUS_EMURST   (0x00000020u)
#define CONTROL_SEC_STATUS_EMURST_SHIFT   (0x00000005u)

#define CONTROL_SEC_STATUS_GFXDOMAINRST   (0x00000200u)
#define CONTROL_SEC_STATUS_GFXDOMAINRST_SHIFT   (0x00000009u)

#define CONTROL_SEC_STATUS_GLOBALCOLDRST   (0x00000001u)
#define CONTROL_SEC_STATUS_GLOBALCOLDRST_SHIFT   (0x00000000u)

#define CONTROL_SEC_STATUS_GLOBALWARMRST   (0x00000002u)
#define CONTROL_SEC_STATUS_GLOBALWARMRST_SHIFT   (0x00000001u)

#define CONTROL_SEC_STATUS_ICSS0RST   (0x00040000u)
#define CONTROL_SEC_STATUS_ICSS0RST_SHIFT   (0x00000012u)

#define CONTROL_SEC_STATUS_ICSS1RST   (0x00080000u)
#define CONTROL_SEC_STATUS_ICSS1RST_SHIFT   (0x00000013u)

#define CONTROL_SEC_STATUS_MPUDOMAINRST   (0x00000040u)
#define CONTROL_SEC_STATUS_MPUDOMAINRST_SHIFT   (0x00000006u)

#define CONTROL_SEC_STATUS_MPURST   (0x00020000u)
#define CONTROL_SEC_STATUS_MPURST_SHIFT   (0x00000011u)

#define CONTROL_SEC_STATUS_PERDOMAINRST   (0x00000080u)
#define CONTROL_SEC_STATUS_PERDOMAINRST_SHIFT   (0x00000007u)

#define CONTROL_SEC_STATUS_PUBWDRST   (0x00000004u)
#define CONTROL_SEC_STATUS_PUBWDRST_SHIFT   (0x00000002u)

#define CONTROL_SEC_STATUS_RSVD2   (0xFFF00000u)
#define CONTROL_SEC_STATUS_RSVD2_SHIFT   (0x00000014u)

#define CONTROL_SEC_STATUS_SECWDRST   (0x00000008u)
#define CONTROL_SEC_STATUS_SECWDRST_SHIFT   (0x00000003u)

#define CONTROL_SEC_STATUS_SSMVIOLATIONRST   (0x00000010u)
#define CONTROL_SEC_STATUS_SSMVIOLATIONRST_SHIFT   (0x00000004u)

#define CONTROL_SEC_STATUS_WKUPDOMAINRST   (0x00000100u)
#define CONTROL_SEC_STATUS_WKUPDOMAINRST_SHIFT   (0x00000008u)


/* CONTROL_SECMEM_STATUS */
#define CONTROL_SECMEM_STATUS_A8L1DEST   (0x00000001u)
#define CONTROL_SECMEM_STATUS_A8L1DEST_SHIFT   (0x00000000u)

#define CONTROL_SECMEM_STATUS_A8L1NOTACC   (0x00010000u)
#define CONTROL_SECMEM_STATUS_A8L1NOTACC_SHIFT   (0x00000010u)

#define CONTROL_SECMEM_STATUS_A8L2DEST   (0x00000002u)
#define CONTROL_SECMEM_STATUS_A8L2DEST_SHIFT   (0x00000001u)

#define CONTROL_SECMEM_STATUS_A8L2NOTACC   (0x00020000u)
#define CONTROL_SECMEM_STATUS_A8L2NOTACC_SHIFT   (0x00000011u)

#define CONTROL_SECMEM_STATUS_FASTSECRAMDEST   (0x00000004u)
#define CONTROL_SECMEM_STATUS_FASTSECRAMDEST_SHIFT   (0x00000002u)

#define CONTROL_SECMEM_STATUS_FASTSECRAMNOTACC   (0x00040000u)
#define CONTROL_SECMEM_STATUS_FASTSECRAMNOTACC_SHIFT   (0x00000012u)

#define CONTROL_SECMEM_STATUS_L3SECRAMDEST   (0x00000008u)
#define CONTROL_SECMEM_STATUS_L3SECRAMDEST_SHIFT   (0x00000003u)

#define CONTROL_SECMEM_STATUS_L3SECRAMNOTACC   (0x00080000u)
#define CONTROL_SECMEM_STATUS_L3SECRAMNOTACC_SHIFT   (0x00000013u)

#define CONTROL_SECMEM_STATUS_RSVD2   (0xFFF00000u)
#define CONTROL_SECMEM_STATUS_RSVD2_SHIFT   (0x00000014u)


/* CONTROL_SEC_ERR_STAT_FUNC0 */
#define CONTROL_SEC_ERR_STAT_FUNC0_EMIFFWERR   (0x00000010u)
#define CONTROL_SEC_ERR_STAT_FUNC0_EMIFFWERR_SHIFT   (0x00000004u)

#define CONTROL_SEC_ERR_STAT_FUNC0_GPMCFWERR   (0x00000004u)
#define CONTROL_SEC_ERR_STAT_FUNC0_GPMCFWERR_SHIFT   (0x00000002u)

#define CONTROL_SEC_ERR_STAT_FUNC0_L3RAMFWERR   (0x00000001u)
#define CONTROL_SEC_ERR_STAT_FUNC0_L3RAMFWERR_SHIFT   (0x00000000u)

#define CONTROL_SEC_ERR_STAT_FUNC0_RSVD2   (0x00000008u)
#define CONTROL_SEC_ERR_STAT_FUNC0_RSVD2_SHIFT   (0x00000003u)

#define CONTROL_SEC_ERR_STAT_FUNC0_RSVD3   (0x0001FFE0u)
#define CONTROL_SEC_ERR_STAT_FUNC0_RSVD3_SHIFT   (0x00000005u)

#define CONTROL_SEC_ERR_STAT_FUNC0_RSVD4   (0x007C0000u)
#define CONTROL_SEC_ERR_STAT_FUNC0_RSVD4_SHIFT   (0x00000012u)

#define CONTROL_SEC_ERR_STAT_FUNC0_RSVD5   (0xF8000000u)
#define CONTROL_SEC_ERR_STAT_FUNC0_RSVD5_SHIFT   (0x0000001Bu)

#define CONTROL_SEC_ERR_STAT_FUNC0_SGXFWERR   (0x00020000u)
#define CONTROL_SEC_ERR_STAT_FUNC0_SGXFWERR_SHIFT   (0x00000011u)

#define CONTROL_SEC_ERR_STAT_FUNC0_TPTC0FWERR   (0x01000000u)
#define CONTROL_SEC_ERR_STAT_FUNC0_TPTC0FWERR_SHIFT   (0x00000018u)

#define CONTROL_SEC_ERR_STAT_FUNC0_TPTC1FWERR   (0x02000000u)
#define CONTROL_SEC_ERR_STAT_FUNC0_TPTC1FWERR_SHIFT   (0x00000019u)

#define CONTROL_SEC_ERR_STAT_FUNC0_TPTC2FWERR   (0x04000000u)
#define CONTROL_SEC_ERR_STAT_FUNC0_TPTC2FWERR_SHIFT   (0x0000001Au)

#define CONTROL_SEC_ERR_STAT_FUNC0_TPTCCFWERR   (0x00800000u)
#define CONTROL_SEC_ERR_STAT_FUNC0_TPTCCFWERR_SHIFT   (0x00000017u)


/* CONTROL_SEC_ERR_STAT_FUNC1 */
#define CONTROL_SEC_ERR_STAT_FUNC1_ADCFWERR   (0x00000200u)
#define CONTROL_SEC_ERR_STAT_FUNC1_ADCFWERR_SHIFT   (0x00000009u)

#define CONTROL_SEC_ERR_STAT_FUNC1_AES0FWERR   (0x00100000u)
#define CONTROL_SEC_ERR_STAT_FUNC1_AES0FWERR_SHIFT   (0x00000014u)

#define CONTROL_SEC_ERR_STAT_FUNC1_CRYPTODMAFWERR   (0x00080000u)
#define CONTROL_SEC_ERR_STAT_FUNC1_CRYPTODMAFWERR_SHIFT   (0x00000013u)

#define CONTROL_SEC_ERR_STAT_FUNC1_DBGPORTFWERR   (0x00020000u)
#define CONTROL_SEC_ERR_STAT_FUNC1_DBGPORTFWERR_SHIFT   (0x00000011u)

#define CONTROL_SEC_ERR_STAT_FUNC1_L3EXPFWERR   (0x00010000u)
#define CONTROL_SEC_ERR_STAT_FUNC1_L3EXPFWERR_SHIFT   (0x00000010u)

#define CONTROL_SEC_ERR_STAT_FUNC1_L4FASTFWERR   (0x02000000u)
#define CONTROL_SEC_ERR_STAT_FUNC1_L4FASTFWERR_SHIFT   (0x00000019u)

#define CONTROL_SEC_ERR_STAT_FUNC1_L4FWFWERR   (0x08000000u)
#define CONTROL_SEC_ERR_STAT_FUNC1_L4FWFWERR_SHIFT   (0x0000001Bu)

#define CONTROL_SEC_ERR_STAT_FUNC1_L4PERFWERR   (0x01000000u)
#define CONTROL_SEC_ERR_STAT_FUNC1_L4PERFWERR_SHIFT   (0x00000018u)

#define CONTROL_SEC_ERR_STAT_FUNC1_L4WKUPFWERR   (0x04000000u)
#define CONTROL_SEC_ERR_STAT_FUNC1_L4WKUPFWERR_SHIFT   (0x0000001Au)

#define CONTROL_SEC_ERR_STAT_FUNC1_MCASP0FWERR   (0x00000001u)
#define CONTROL_SEC_ERR_STAT_FUNC1_MCASP0FWERR_SHIFT   (0x00000000u)

#define CONTROL_SEC_ERR_STAT_FUNC1_MCASP1FWERR   (0x00000002u)
#define CONTROL_SEC_ERR_STAT_FUNC1_MCASP1FWERR_SHIFT   (0x00000001u)

#define CONTROL_SEC_ERR_STAT_FUNC1_MMCHS2FWERR   (0x00008000u)
#define CONTROL_SEC_ERR_STAT_FUNC1_MMCHS2FWERR_SHIFT   (0x0000000Fu)

#define CONTROL_SEC_ERR_STAT_FUNC1_RSVD2   (0x00000400u)
#define CONTROL_SEC_ERR_STAT_FUNC1_RSVD2_SHIFT   (0x0000000Au)

#define CONTROL_SEC_ERR_STAT_FUNC1_RSVD3   (0x00006000u)
#define CONTROL_SEC_ERR_STAT_FUNC1_RSVD3_SHIFT   (0x0000000Du)

#define CONTROL_SEC_ERR_STAT_FUNC1_RSVD4   (0x00800000u)
#define CONTROL_SEC_ERR_STAT_FUNC1_RSVD4_SHIFT   (0x00000017u)

#define CONTROL_SEC_ERR_STAT_FUNC1_RSVD5   (0xF0000000u)
#define CONTROL_SEC_ERR_STAT_FUNC1_RSVD5_SHIFT   (0x0000001Cu)

#define CONTROL_SEC_ERR_STAT_FUNC1_SECMODFWERR   (0x00040000u)
#define CONTROL_SEC_ERR_STAT_FUNC1_SECMODFWERR_SHIFT   (0x00000012u)

#define CONTROL_SEC_ERR_STAT_FUNC1_SHAFWERR   (0x00400000u)
#define CONTROL_SEC_ERR_STAT_FUNC1_SHAFWERR_SHIFT   (0x00000016u)

#define CONTROL_SEC_ERR_STAT_FUNC1_USBFWERR   (0x00000800u)
#define CONTROL_SEC_ERR_STAT_FUNC1_USBFWERR_SHIFT   (0x0000000Bu)


/* CONTROL_SEC_ERR_STAT_DBUG0 */
#define CONTROL_SEC_ERR_STAT_DBUG0_EMIFDBGFWERR   (0x00000010u)
#define CONTROL_SEC_ERR_STAT_DBUG0_EMIFDBGFWERR_SHIFT   (0x00000004u)

#define CONTROL_SEC_ERR_STAT_DBUG0_GPMCDBGFWERR   (0x00000004u)
#define CONTROL_SEC_ERR_STAT_DBUG0_GPMCDBGFWERR_SHIFT   (0x00000002u)

#define CONTROL_SEC_ERR_STAT_DBUG0_L3RAMDBGFWERR   (0x00000001u)
#define CONTROL_SEC_ERR_STAT_DBUG0_L3RAMDBGFWERR_SHIFT   (0x00000000u)

#define CONTROL_SEC_ERR_STAT_DBUG0_RSVD2   (0x00000008u)
#define CONTROL_SEC_ERR_STAT_DBUG0_RSVD2_SHIFT   (0x00000003u)

#define CONTROL_SEC_ERR_STAT_DBUG0_RSVD3   (0x0001FFE0u)
#define CONTROL_SEC_ERR_STAT_DBUG0_RSVD3_SHIFT   (0x00000005u)

#define CONTROL_SEC_ERR_STAT_DBUG0_RSVD4   (0x007C0000u)
#define CONTROL_SEC_ERR_STAT_DBUG0_RSVD4_SHIFT   (0x00000012u)

#define CONTROL_SEC_ERR_STAT_DBUG0_RSVD5   (0xF8000000u)
#define CONTROL_SEC_ERR_STAT_DBUG0_RSVD5_SHIFT   (0x0000001Bu)

#define CONTROL_SEC_ERR_STAT_DBUG0_SGXDBGFWERR   (0x00020000u)
#define CONTROL_SEC_ERR_STAT_DBUG0_SGXDBGFWERR_SHIFT   (0x00000011u)

#define CONTROL_SEC_ERR_STAT_DBUG0_TPTC0DBGFWERR   (0x01000000u)
#define CONTROL_SEC_ERR_STAT_DBUG0_TPTC0DBGFWERR_SHIFT   (0x00000018u)

#define CONTROL_SEC_ERR_STAT_DBUG0_TPTC1DBGFWERR   (0x02000000u)
#define CONTROL_SEC_ERR_STAT_DBUG0_TPTC1DBGFWERR_SHIFT   (0x00000019u)

#define CONTROL_SEC_ERR_STAT_DBUG0_TPTC2DBGFWERR   (0x04000000u)
#define CONTROL_SEC_ERR_STAT_DBUG0_TPTC2DBGFWERR_SHIFT   (0x0000001Au)

#define CONTROL_SEC_ERR_STAT_DBUG0_TPTCCDBGFWERR   (0x00800000u)
#define CONTROL_SEC_ERR_STAT_DBUG0_TPTCCDBGFWERR_SHIFT   (0x00000017u)


/* CONTROL_SEC_ERR_STAT_DBUG1 */
#define CONTROL_SEC_ERR_STAT_DBUG1_ADCDBGFWERR   (0x00000200u)
#define CONTROL_SEC_ERR_STAT_DBUG1_ADCDBGFWERR_SHIFT   (0x00000009u)

#define CONTROL_SEC_ERR_STAT_DBUG1_AES0DBGFWERR   (0x00100000u)
#define CONTROL_SEC_ERR_STAT_DBUG1_AES0DBGFWERR_SHIFT   (0x00000014u)

#define CONTROL_SEC_ERR_STAT_DBUG1_CRYPTODMADBGFWERR   (0x00080000u)
#define CONTROL_SEC_ERR_STAT_DBUG1_CRYPTODMADBGFWERR_SHIFT   (0x00000013u)

#define CONTROL_SEC_ERR_STAT_DBUG1_DBGPORTDBGFWERR   (0x00020000u)
#define CONTROL_SEC_ERR_STAT_DBUG1_DBGPORTDBGFWERR_SHIFT   (0x00000011u)

#define CONTROL_SEC_ERR_STAT_DBUG1_L3EXPDBGFWERR   (0x00010000u)
#define CONTROL_SEC_ERR_STAT_DBUG1_L3EXPDBGFWERR_SHIFT   (0x00000010u)

#define CONTROL_SEC_ERR_STAT_DBUG1_L4FASTDBGFWERR   (0x02000000u)
#define CONTROL_SEC_ERR_STAT_DBUG1_L4FASTDBGFWERR_SHIFT   (0x00000019u)

#define CONTROL_SEC_ERR_STAT_DBUG1_L4FWDBGFWERR   (0x08000000u)
#define CONTROL_SEC_ERR_STAT_DBUG1_L4FWDBGFWERR_SHIFT   (0x0000001Bu)

#define CONTROL_SEC_ERR_STAT_DBUG1_L4PERDBGFWERR   (0x01000000u)
#define CONTROL_SEC_ERR_STAT_DBUG1_L4PERDBGFWERR_SHIFT   (0x00000018u)

#define CONTROL_SEC_ERR_STAT_DBUG1_L4WKUPDBGFWERR   (0x04000000u)
#define CONTROL_SEC_ERR_STAT_DBUG1_L4WKUPDBGFWERR_SHIFT   (0x0000001Au)

#define CONTROL_SEC_ERR_STAT_DBUG1_MCASP0DBGFWERR   (0x00000001u)
#define CONTROL_SEC_ERR_STAT_DBUG1_MCASP0DBGFWERR_SHIFT   (0x00000000u)

#define CONTROL_SEC_ERR_STAT_DBUG1_MCASP1DBGFWERR   (0x00000002u)
#define CONTROL_SEC_ERR_STAT_DBUG1_MCASP1DBGFWERR_SHIFT   (0x00000001u)

#define CONTROL_SEC_ERR_STAT_DBUG1_MMCHS2DBGFWERR   (0x00008000u)
#define CONTROL_SEC_ERR_STAT_DBUG1_MMCHS2DBGFWERR_SHIFT   (0x0000000Fu)

#define CONTROL_SEC_ERR_STAT_DBUG1_RSVD2   (0x00000400u)
#define CONTROL_SEC_ERR_STAT_DBUG1_RSVD2_SHIFT   (0x0000000Au)

#define CONTROL_SEC_ERR_STAT_DBUG1_RSVD3   (0x00006000u)
#define CONTROL_SEC_ERR_STAT_DBUG1_RSVD3_SHIFT   (0x0000000Du)

#define CONTROL_SEC_ERR_STAT_DBUG1_RSVD4   (0x00040000u)
#define CONTROL_SEC_ERR_STAT_DBUG1_RSVD4_SHIFT   (0x00000012u)

#define CONTROL_SEC_ERR_STAT_DBUG1_RSVD5   (0x00800000u)
#define CONTROL_SEC_ERR_STAT_DBUG1_RSVD5_SHIFT   (0x00000017u)

#define CONTROL_SEC_ERR_STAT_DBUG1_RSVD6   (0xF0000000u)
#define CONTROL_SEC_ERR_STAT_DBUG1_RSVD6_SHIFT   (0x0000001Cu)

#define CONTROL_SEC_ERR_STAT_DBUG1_SHADBGFWERR   (0x00400000u)
#define CONTROL_SEC_ERR_STAT_DBUG1_SHADBGFWERR_SHIFT   (0x00000016u)

#define CONTROL_SEC_ERR_STAT_DBUG1_USBDBGFWERR   (0x00000800u)
#define CONTROL_SEC_ERR_STAT_DBUG1_USBDBGFWERR_SHIFT   (0x0000000Bu)


/* CONTROL_KEK_SW_0 */
#define CONTROL_KEK_SW_0_KEK_SW   (0xFFFFFFFFu)
#define CONTROL_KEK_SW_0_KEK_SW_SHIFT   (0x00000000u)


/* CONTROL_KEK_SW_1 */
#define CONTROL_KEK_SW_1_KEK_SW   (0xFFFFFFFFu)
#define CONTROL_KEK_SW_1_KEK_SW_SHIFT   (0x00000000u)


/* CONTROL_KEK_SW_2 */
#define CONTROL_KEK_SW_2_KEK_SW   (0xFFFFFFFFu)
#define CONTROL_KEK_SW_2_KEK_SW_SHIFT   (0x00000000u)


/* CONTROL_KEK_SW_3 */
#define CONTROL_KEK_SW_3_KEK_SW   (0xFFFFFFFFu)
#define CONTROL_KEK_SW_3_KEK_SW_SHIFT   (0x00000000u)


/* CONTROL_CMPK_BCH_0 */
#define CONTROL_CMPK_BCH_0_CMPK_BCH   (0xFFFFFFFFu)
#define CONTROL_CMPK_BCH_0_CMPK_BCH_SHIFT   (0x00000000u)


/* CONTROL_CMPK_BCH_1 */
#define CONTROL_CMPK_BCH_1_CMPK_BCH   (0xFFFFFFFFu)
#define CONTROL_CMPK_BCH_1_CMPK_BCH_SHIFT   (0x00000000u)


/* CONTROL_CMPK_BCH_2 */
#define CONTROL_CMPK_BCH_2_CMPK_BCH   (0xFFFFFFFFu)
#define CONTROL_CMPK_BCH_2_CMPK_BCH_SHIFT   (0x00000000u)


/* CONTROL_CMPK_BCH_3 */
#define CONTROL_CMPK_BCH_3_CMPK_BCH   (0xFFFFFFFFu)
#define CONTROL_CMPK_BCH_3_CMPK_BCH_SHIFT   (0x00000000u)


/* CONTROL_CMPK_BCH_4 */
#define CONTROL_CMPK_BCH_4_CMPK_BCH   (0xFFFFFFFFu)
#define CONTROL_CMPK_BCH_4_CMPK_BCH_SHIFT   (0x00000000u)


/* CONTROL_CMPK_BCH_5 */
#define CONTROL_CMPK_BCH_5_CMPK_BCH   (0xFFFFFFFFu)
#define CONTROL_CMPK_BCH_5_CMPK_BCH_SHIFT   (0x00000000u)


/* CONTROL_CMPK_BCH_6 */
#define CONTROL_CMPK_BCH_6_CMPK_BCH   (0xFFFFFFFFu)
#define CONTROL_CMPK_BCH_6_CMPK_BCH_SHIFT   (0x00000000u)


/* CONTROL_CMPK_BCH_7 */
#define CONTROL_CMPK_BCH_7_CMPK_BCH   (0xFFFFFFFFu)
#define CONTROL_CMPK_BCH_7_CMPK_BCH_SHIFT   (0x00000000u)


/* CONTROL_CMPK_BCH_8 */
#define CONTROL_CMPK_BCH_8_CMPK_BCH   (0xFFFFFFFFu)
#define CONTROL_CMPK_BCH_8_CMPK_BCH_SHIFT   (0x00000000u)


/* CONTROL_CMPK_0 */
#define CONTROL_CMPK_0_CMPK   (0xFFFFFFFFu)
#define CONTROL_CMPK_0_CMPK_SHIFT   (0x00000000u)


/* CONTROL_CMPK_1 */
#define CONTROL_CMPK_1_CMPK   (0xFFFFFFFFu)
#define CONTROL_CMPK_1_CMPK_SHIFT   (0x00000000u)


/* CONTROL_CMPK_2 */
#define CONTROL_CMPK_2_CMPK   (0xFFFFFFFFu)
#define CONTROL_CMPK_2_CMPK_SHIFT   (0x00000000u)


/* CONTROL_CMPK_3 */
#define CONTROL_CMPK_3_CMPK   (0xFFFFFFFFu)
#define CONTROL_CMPK_3_CMPK_SHIFT   (0x00000000u)


/* CONTROL_CMPK_4 */
#define CONTROL_CMPK_4_CMPK   (0xFFFFFFFFu)
#define CONTROL_CMPK_4_CMPK_SHIFT   (0x00000000u)


/* CONTROL_CMPK_5 */
#define CONTROL_CMPK_5_CMPK   (0xFFFFFFFFu)
#define CONTROL_CMPK_5_CMPK_SHIFT   (0x00000000u)


/* CONTROL_CMPK_6 */
#define CONTROL_CMPK_6_CMPK   (0xFFFFFFFFu)
#define CONTROL_CMPK_6_CMPK_SHIFT   (0x00000000u)


/* CONTROL_CMPK_7 */
#define CONTROL_CMPK_7_CMPK   (0xFFFFFFFFu)
#define CONTROL_CMPK_7_CMPK_SHIFT   (0x00000000u)


/* SSM_END_FAST_SECRAM */
#define CONTROL_SSM_END_FAST_SECRAM_END_FAST_SECRAM   (0x0000FC00u)
#define CONTROL_SSM_END_FAST_SECRAM_END_FAST_SECRAM_SHIFT   (0x0000000Au)

#define CONTROL_SSM_END_FAST_SECRAM_RSVD2   (0xFFFF0000u)
#define CONTROL_SSM_END_FAST_SECRAM_RSVD2_SHIFT   (0x00000010u)


/* SSM_FIREWALL_CONTROLLER */
#define CONTROL_SSM_FIREWALL_CONTROLLER_CPSR_ENFC_EN   (0x00001000u)
#define CONTROL_SSM_FIREWALL_CONTROLLER_CPSR_ENFC_EN_SHIFT   (0x0000000Cu)

#define CONTROL_SSM_FIREWALL_CONTROLLER_DC_ENFC_EN   (0x00000800u)
#define CONTROL_SSM_FIREWALL_CONTROLLER_DC_ENFC_EN_SHIFT   (0x0000000Bu)

#define CONTROL_SSM_FIREWALL_CONTROLLER_IC_ENFC_EN   (0x00000400u)
#define CONTROL_SSM_FIREWALL_CONTROLLER_IC_ENFC_EN_SHIFT   (0x0000000Au)

#define CONTROL_SSM_FIREWALL_CONTROLLER_MMU_ENFC_EN   (0x00000200u)
#define CONTROL_SSM_FIREWALL_CONTROLLER_MMU_ENFC_EN_SHIFT   (0x00000009u)

#define CONTROL_SSM_FIREWALL_CONTROLLER_MONITOR_EN   (0x00000001u)
#define CONTROL_SSM_FIREWALL_CONTROLLER_MONITOR_EN_SHIFT   (0x00000000u)

#define CONTROL_SSM_FIREWALL_CONTROLLER_MON_DATA_TRASH_EN   (0x00000080u)
#define CONTROL_SSM_FIREWALL_CONTROLLER_MON_DATA_TRASH_EN_SHIFT   (0x00000007u)

#define CONTROL_SSM_FIREWALL_CONTROLLER_MON_DETM_EN   (0x00000020u)
#define CONTROL_SSM_FIREWALL_CONTROLLER_MON_DETM_EN_SHIFT   (0x00000005u)

#define CONTROL_SSM_FIREWALL_CONTROLLER_MON_IETM_EN   (0x00000010u)
#define CONTROL_SSM_FIREWALL_CONTROLLER_MON_IETM_EN_SHIFT   (0x00000004u)

#define CONTROL_SSM_FIREWALL_CONTROLLER_MON_RAMCODE_EN   (0x00000100u)
#define CONTROL_SSM_FIREWALL_CONTROLLER_MON_RAMCODE_EN_SHIFT   (0x00000008u)

#define CONTROL_SSM_FIREWALL_CONTROLLER_MON_STACK_EN   (0x00000040u)
#define CONTROL_SSM_FIREWALL_CONTROLLER_MON_STACK_EN_SHIFT   (0x00000006u)

#define CONTROL_SSM_FIREWALL_CONTROLLER_SECRAM_EN   (0x00000002u)
#define CONTROL_SSM_FIREWALL_CONTROLLER_SECRAM_EN_SHIFT   (0x00000001u)

#define CONTROL_SSM_FIREWALL_CONTROLLER_SPM_STACK_EN   (0x00000008u)
#define CONTROL_SSM_FIREWALL_CONTROLLER_SPM_STACK_EN_SHIFT   (0x00000003u)

#define CONTROL_SSM_FIREWALL_CONTROLLER_SSM_FC_REG_LOCK   (0x00002000u)
#define CONTROL_SSM_FIREWALL_CONTROLLER_SSM_FC_REG_LOCK_SHIFT   (0x0000000Du)

#define CONTROL_SSM_FIREWALL_CONTROLLER_STACKEDRAM_EN   (0x00000004u)
#define CONTROL_SSM_FIREWALL_CONTROLLER_STACKEDRAM_EN_SHIFT   (0x00000002u)


/* SSM_START_SECURE_STACKED_RAM */
#define CONTROL_SSM_START_SECURE_STACKED_RAM_START_STACKEDRAM   (0xFFFF0000u)
#define CONTROL_SSM_START_SECURE_STACKED_RAM_START_STACKEDRAM_SHIFT   (0x00000010u)


/* SSM_END_SECURE_STACKED_RAM */
#define CONTROL_SSM_END_SECURE_STACKED_RAM_END_STACKEDRAM   (0xFFFF0000u)
#define CONTROL_SSM_END_SECURE_STACKED_RAM_END_STACKEDRAM_SHIFT   (0x00000010u)


/* SSM_START_SPM_STACK */
#define CONTROL_SSM_START_SPM_STACK_START_SPM_STACK   (0xFFFFFC00u)
#define CONTROL_SSM_START_SPM_STACK_START_SPM_STACK_SHIFT   (0x0000000Au)


/* SSM_END_SPM_STACK */
#define CONTROL_SSM_END_SPM_STACK_END_SPM_STACK   (0x0000FC00u)
#define CONTROL_SSM_END_SPM_STACK_END_SPM_STACK_SHIFT   (0x0000000Au)

#define CONTROL_SSM_END_SPM_STACK_START_SPM_STACK   (0xFFFF0000u)
#define CONTROL_SSM_END_SPM_STACK_START_SPM_STACK_SHIFT   (0x00000010u)


/* SSM_START_MONITOR_RAMCODE */
#define CONTROL_SSM_START_MONITOR_RAMCODE_START_MON_RAMCODE   (0xFFFFFC00u)
#define CONTROL_SSM_START_MONITOR_RAMCODE_START_MON_RAMCODE_SHIFT   (0x0000000Au)


/* SSM_END_MONITOR_RAMCODE */
#define CONTROL_SSM_END_MONITOR_RAMCODE_END_MON_RAMCODE   (0x0000FC00u)
#define CONTROL_SSM_END_MONITOR_RAMCODE_END_MON_RAMCODE_SHIFT   (0x0000000Au)

#define CONTROL_SSM_END_MONITOR_RAMCODE_START_MON_RAMCODE   (0xFFFF0000u)
#define CONTROL_SSM_END_MONITOR_RAMCODE_START_MON_RAMCODE_SHIFT   (0x00000010u)


/* SSM_END_MONITOR_RAMDATA */
#define CONTROL_SSM_END_MONITOR_RAMDATA_END_MON_RAMDATA   (0x0000FC00u)
#define CONTROL_SSM_END_MONITOR_RAMDATA_END_MON_RAMDATA_SHIFT   (0x0000000Au)

#define CONTROL_SSM_END_MONITOR_RAMDATA_START_MON_RAMCODE   (0xFFFF0000u)
#define CONTROL_SSM_END_MONITOR_RAMDATA_START_MON_RAMCODE_SHIFT   (0x00000010u)


/* SSM_START_MONITOR_CODE */
#define CONTROL_SSM_START_MONITOR_CODE_START_MON_CODE   (0xFFFFFC00u)
#define CONTROL_SSM_START_MONITOR_CODE_START_MON_CODE_SHIFT   (0x0000000Au)


/* SSM_END_MONITOR_CODE */
#define CONTROL_SSM_END_MONITOR_CODE_END_MON_CODE   (0x0001FC00u)
#define CONTROL_SSM_END_MONITOR_CODE_END_MON_CODE_SHIFT   (0x0000000Au)

#define CONTROL_SSM_END_MONITOR_CODE_START_MON_CODE   (0xFFFE0000u)
#define CONTROL_SSM_END_MONITOR_CODE_START_MON_CODE_SHIFT   (0x00000011u)


/* SSM_START_MONITOR_PERIPH */
#define CONTROL_SSM_START_MONITOR_PERIPH_START_MON_PERIPH   (0xFFFFF000u)
#define CONTROL_SSM_START_MONITOR_PERIPH_START_MON_PERIPH_SHIFT   (0x0000000Cu)


/* SSM_END_MONITOR_PERIPH */
#define CONTROL_SSM_END_MONITOR_PERIPH_END_MON_PERIPH   (0x0FFFF000u)
#define CONTROL_SSM_END_MONITOR_PERIPH_END_MON_PERIPH_SHIFT   (0x0000000Cu)

#define CONTROL_SSM_END_MONITOR_PERIPH_START_MON_PERIPH   (0xF0000000u)
#define CONTROL_SSM_END_MONITOR_PERIPH_START_MON_PERIPH_SHIFT   (0x0000001Cu)


/* SSM_START_MONITOR_STACK */
#define CONTROL_SSM_START_MONITOR_STACK_START_MON_STACK   (0xFFFFFC00u)
#define CONTROL_SSM_START_MONITOR_STACK_START_MON_STACK_SHIFT   (0x0000000Au)


/* SSM_END_MONITOR_STACK */
#define CONTROL_SSM_END_MONITOR_STACK_END_MON_STACK   (0x00007C00u)
#define CONTROL_SSM_END_MONITOR_STACK_END_MON_STACK_SHIFT   (0x0000000Au)

#define CONTROL_SSM_END_MONITOR_STACK_START_MON_STACK   (0xFFFF8000u)
#define CONTROL_SSM_END_MONITOR_STACK_START_MON_STACK_SHIFT   (0x0000000Fu)


/* SSM_START_MONITOR_RAMCODE_ETM */
#define CONTROL_SSM_START_MONITOR_RAMCODE_ETM_START_MON_RAMCODE_ETM   (0xFFFFF000u)
#define CONTROL_SSM_START_MONITOR_RAMCODE_ETM_START_MON_RAMCODE_ETM_SHIFT   (0x0000000Cu)


/* SSM_END_MONITOR_RAMCODE_ETM */
#define CONTROL_SSM_END_MONITOR_RAMCODE_ETM_END_MON_RAMCODE_ETM   (0x0000F000u)
#define CONTROL_SSM_END_MONITOR_RAMCODE_ETM_END_MON_RAMCODE_ETM_SHIFT   (0x0000000Cu)

#define CONTROL_SSM_END_MONITOR_RAMCODE_ETM_START_MON_RAMCODE_ETM   (0xFFFF0000u)
#define CONTROL_SSM_END_MONITOR_RAMCODE_ETM_START_MON_RAMCODE_ETM_SHIFT   (0x00000010u)


/* SSM_END_MONITOR_RAMDATA_ETM */
#define CONTROL_SSM_END_MONITOR_RAMDATA_ETM_END_MON_RAMDATA_ETM   (0x0000F000u)
#define CONTROL_SSM_END_MONITOR_RAMDATA_ETM_END_MON_RAMDATA_ETM_SHIFT   (0x0000000Cu)

#define CONTROL_SSM_END_MONITOR_RAMDATA_ETM_START_MON_RAMCODE_ETM   (0xFFFF0000u)
#define CONTROL_SSM_END_MONITOR_RAMDATA_ETM_START_MON_RAMCODE_ETM_SHIFT   (0x00000010u)


/* SSM_START_MONITOR_CODE_ETM */
#define CONTROL_SSM_START_MONITOR_CODE_ETM_START_MON_CODE_ETM   (0xFFFFF000u)
#define CONTROL_SSM_START_MONITOR_CODE_ETM_START_MON_CODE_ETM_SHIFT   (0x0000000Cu)


/* SSM_END_MONITOR_CODE_ETM */
#define CONTROL_SSM_END_MONITOR_CODE_ETM_END_MON_CODE_ETM   (0x0001F000u)
#define CONTROL_SSM_END_MONITOR_CODE_ETM_END_MON_CODE_ETM_SHIFT   (0x0000000Cu)

#define CONTROL_SSM_END_MONITOR_CODE_ETM_START_MON_CODE_ETM   (0xFFFE0000u)
#define CONTROL_SSM_END_MONITOR_CODE_ETM_START_MON_CODE_ETM_SHIFT   (0x00000011u)


/* SSM_START_MONITOR_STACK_ETM */
#define CONTROL_SSM_START_MONITOR_STACK_ETM_START_MON_STACK_ETM   (0xFFFFF000u)
#define CONTROL_SSM_START_MONITOR_STACK_ETM_START_MON_STACK_ETM_SHIFT   (0x0000000Cu)


/* SSM_END_MONITOR_STACK_ETM */
#define CONTROL_SSM_END_MONITOR_STACK_ETM_END_MON_STACK_ETM   (0x0000F000u)
#define CONTROL_SSM_END_MONITOR_STACK_ETM_END_MON_STACK_ETM_SHIFT   (0x0000000Cu)

#define CONTROL_SSM_END_MONITOR_STACK_ETM_START_MON_STACK_ETM   (0xFFFF0000u)
#define CONTROL_SSM_END_MONITOR_STACK_ETM_START_MON_STACK_ETM_SHIFT   (0x00000010u)


/* SSM_START_MONITOR_SHARED_ETM */
#define CONTROL_SSM_START_MONITOR_SHARED_ETM_START_MON_SHARED_ETM   (0xFFFFF000u)
#define CONTROL_SSM_START_MONITOR_SHARED_ETM_START_MON_SHARED_ETM_SHIFT   (0x0000000Cu)


/* SSM_END_MONITOR_SHARED_ETM */
#define CONTROL_SSM_END_MONITOR_SHARED_ETM_END_MON_SHARED_ETM   (0x0000F000u)
#define CONTROL_SSM_END_MONITOR_SHARED_ETM_END_MON_SHARED_ETM_SHIFT   (0x0000000Cu)

#define CONTROL_SSM_END_MONITOR_SHARED_ETM_START_MON_SHARED_ETM   (0xFFFF0000u)
#define CONTROL_SSM_END_MONITOR_SHARED_ETM_START_MON_SHARED_ETM_SHIFT   (0x00000010u)


/* SSM_START_MONITOR_PERIPH_ETM */
#define CONTROL_SSM_START_MONITOR_PERIPH_ETM_START_MON_PERIPH_ETM   (0xFFFFF000u)
#define CONTROL_SSM_START_MONITOR_PERIPH_ETM_START_MON_PERIPH_ETM_SHIFT   (0x0000000Cu)


/* SSM_END_MONITOR_PERIPH_ETM */
#define CONTROL_SSM_END_MONITOR_PERIPH_ETM_END_MON_PERIPH_ETM   (0xFFFFF000u)
#define CONTROL_SSM_END_MONITOR_PERIPH_ETM_END_MON_PERIPH_ETM_SHIFT   (0x0000000Cu)


/* SSM_CPSR_MODE_ENFC */
#define CONTROL_SSM_CPSR_MODE_ENFC_EA_TRAPPED_IN_MON   (0x00000100u)
#define CONTROL_SSM_CPSR_MODE_ENFC_EA_TRAPPED_IN_MON_SHIFT   (0x00000008u)

#define CONTROL_SSM_CPSR_MODE_ENFC_FIQ_TRAPPED_IN_MON   (0x00000080u)
#define CONTROL_SSM_CPSR_MODE_ENFC_FIQ_TRAPPED_IN_MON_SHIFT   (0x00000007u)

#define CONTROL_SSM_CPSR_MODE_ENFC_IRQ_TRAPPED_IN_MON   (0x00000040u)
#define CONTROL_SSM_CPSR_MODE_ENFC_IRQ_TRAPPED_IN_MON_SHIFT   (0x00000006u)

#define CONTROL_SSM_CPSR_MODE_ENFC_MON_VS_ABORT_ENFC   (0x00000004u)
#define CONTROL_SSM_CPSR_MODE_ENFC_MON_VS_ABORT_ENFC_SHIFT   (0x00000002u)

#define CONTROL_SSM_CPSR_MODE_ENFC_MON_VS_SYS_ENFC   (0x00000010u)
#define CONTROL_SSM_CPSR_MODE_ENFC_MON_VS_SYS_ENFC_SHIFT   (0x00000004u)

#define CONTROL_SSM_CPSR_MODE_ENFC_MON_VS_UNDEF_ENFC   (0x00000008u)
#define CONTROL_SSM_CPSR_MODE_ENFC_MON_VS_UNDEF_ENFC_SHIFT   (0x00000003u)

#define CONTROL_SSM_CPSR_MODE_ENFC_MON_VS_USER_ENFC   (0x00000002u)
#define CONTROL_SSM_CPSR_MODE_ENFC_MON_VS_USER_ENFC_SHIFT   (0x00000001u)

#define CONTROL_SSM_CPSR_MODE_ENFC_SYS_VS_USER_ENFC   (0x00000020u)
#define CONTROL_SSM_CPSR_MODE_ENFC_SYS_VS_USER_ENFC_SHIFT   (0x00000005u)

#define CONTROL_SSM_CPSR_MODE_ENFC_TZ_NS_BIT_ENFC   (0x00000001u)
#define CONTROL_SSM_CPSR_MODE_ENFC_TZ_NS_BIT_ENFC_SHIFT   (0x00000000u)


/* SSM_END_L3_SECRAM */
#define CONTROL_SSM_END_L3_SECRAM_END_L3_SECRAM   (0x0000FC00u)
#define CONTROL_SSM_END_L3_SECRAM_END_L3_SECRAM_SHIFT   (0x0000000Au)

#define CONTROL_SSM_END_L3_SECRAM_RSVD2   (0xFFFF0000u)
#define CONTROL_SSM_END_L3_SECRAM_RSVD2_SHIFT   (0x00000010u)


/* CORTEX_VBBLDO_CTRL */
#define CONTROL_CORTEX_VBBLDO_CTRL_BBSEL   (0x00000004u)
#define CONTROL_CORTEX_VBBLDO_CTRL_BBSEL_SHIFT   (0x00000002u)

#define CONTROL_CORTEX_VBBLDO_CTRL_HZ   (0x00000008u)
#define CONTROL_CORTEX_VBBLDO_CTRL_HZ_SHIFT   (0x00000003u)

#define CONTROL_CORTEX_VBBLDO_CTRL_LDOBYPASSZ   (0x00000020u)
#define CONTROL_CORTEX_VBBLDO_CTRL_LDOBYPASSZ_SHIFT   (0x00000005u)

#define CONTROL_CORTEX_VBBLDO_CTRL_LOWPWR   (0x00000010u)
#define CONTROL_CORTEX_VBBLDO_CTRL_LOWPWR_SHIFT   (0x00000004u)

#define CONTROL_CORTEX_VBBLDO_CTRL_NOCAP   (0x00000002u)
#define CONTROL_CORTEX_VBBLDO_CTRL_NOCAP_SHIFT   (0x00000001u)

#define CONTROL_CORTEX_VBBLDO_CTRL_NOVBGBYR   (0x00000001u)
#define CONTROL_CORTEX_VBBLDO_CTRL_NOVBGBYR_SHIFT   (0x00000000u)

#define CONTROL_CORTEX_VBBLDO_CTRL_RSVD2   (0xFC000000u)
#define CONTROL_CORTEX_VBBLDO_CTRL_RSVD2_SHIFT   (0x0000001Au)

#define CONTROL_CORTEX_VBBLDO_CTRL_VSETFBB   (0x03E00000u)
#define CONTROL_CORTEX_VBBLDO_CTRL_VSETFBB_SHIFT   (0x00000015u)

#define CONTROL_CORTEX_VBBLDO_CTRL_VSETRBB   (0x001F0000u)
#define CONTROL_CORTEX_VBBLDO_CTRL_VSETRBB_SHIFT   (0x00000010u)


/* CORE_SLDO_CTRL */
#define CONTROL_CORE_SLDO_CTRL_RSVD2   (0xFC000000u)
#define CONTROL_CORE_SLDO_CTRL_RSVD2_SHIFT   (0x0000001Au)

#define CONTROL_CORE_SLDO_CTRL_VSET   (0x03FF0000u)
#define CONTROL_CORE_SLDO_CTRL_VSET_SHIFT   (0x00000010u)


/* MPU_SLDO_CTRL */
#define CONTROL_MPU_SLDO_CTRL_RSVD2   (0xFC000000u)
#define CONTROL_MPU_SLDO_CTRL_RSVD2_SHIFT   (0x0000001Au)

#define CONTROL_MPU_SLDO_CTRL_VSET   (0x03FF0000u)
#define CONTROL_MPU_SLDO_CTRL_VSET_SHIFT   (0x00000010u)


/* REFCLK_LJCBLDO_CTRL */
#define CONTROL_REFCLK_LJCBLDO_CTRL_ABBOFF   (0x00000040u)
#define CONTROL_REFCLK_LJCBLDO_CTRL_ABBOFF_SHIFT   (0x00000006u)

#define CONTROL_REFCLK_LJCBLDO_CTRL_AIPOFF   (0x00000080u)
#define CONTROL_REFCLK_LJCBLDO_CTRL_AIPOFF_SHIFT   (0x00000007u)

#define CONTROL_REFCLK_LJCBLDO_CTRL_ENFUNC1   (0x00000001u)
#define CONTROL_REFCLK_LJCBLDO_CTRL_ENFUNC1_SHIFT   (0x00000000u)

#define CONTROL_REFCLK_LJCBLDO_CTRL_ENFUNC2   (0x00000002u)
#define CONTROL_REFCLK_LJCBLDO_CTRL_ENFUNC2_SHIFT   (0x00000001u)

#define CONTROL_REFCLK_LJCBLDO_CTRL_ENFUNC3   (0x00000004u)
#define CONTROL_REFCLK_LJCBLDO_CTRL_ENFUNC3_SHIFT   (0x00000002u)

#define CONTROL_REFCLK_LJCBLDO_CTRL_ENFUNC4   (0x00000008u)
#define CONTROL_REFCLK_LJCBLDO_CTRL_ENFUNC4_SHIFT   (0x00000003u)

#define CONTROL_REFCLK_LJCBLDO_CTRL_ENFUNC5   (0x00000010u)
#define CONTROL_REFCLK_LJCBLDO_CTRL_ENFUNC5_SHIFT   (0x00000004u)

#define CONTROL_REFCLK_LJCBLDO_CTRL_RSVD2   (0xFC000000u)
#define CONTROL_REFCLK_LJCBLDO_CTRL_RSVD2_SHIFT   (0x0000001Au)

#define CONTROL_REFCLK_LJCBLDO_CTRL_VSET   (0x03FF0000u)
#define CONTROL_REFCLK_LJCBLDO_CTRL_VSET_SHIFT   (0x00000010u)


/* CLK32KDIVRATIO_CTRL */
#define CONTROL_CLK32KDIVRATIO_CTRL_CLKDIVOPP50_EN   (0x00000001u)
#define CONTROL_CLK32KDIVRATIO_CTRL_CLKDIVOPP50_EN_SHIFT   (0x00000000u)


/* BANDGAP_CTRL */
#define CONTROL_BANDGAP_CTRL_BGROFF   (0x00000040u)
#define CONTROL_BANDGAP_CTRL_BGROFF_SHIFT   (0x00000006u)

#define CONTROL_BANDGAP_CTRL_CBIASSEL   (0x00000080u)
#define CONTROL_BANDGAP_CTRL_CBIASSEL_SHIFT   (0x00000007u)

#define CONTROL_BANDGAP_CTRL_CLRZ   (0x00000008u)
#define CONTROL_BANDGAP_CTRL_CLRZ_SHIFT   (0x00000003u)

#define CONTROL_BANDGAP_CTRL_CONTCONV   (0x00000004u)
#define CONTROL_BANDGAP_CTRL_CONTCONV_SHIFT   (0x00000002u)

#define CONTROL_BANDGAP_CTRL_DTEMP   (0x0000FF00u)
#define CONTROL_BANDGAP_CTRL_DTEMP_SHIFT   (0x00000008u)

#define CONTROL_BANDGAP_CTRL_ECOZ   (0x00000002u)
#define CONTROL_BANDGAP_CTRL_ECOZ_SHIFT   (0x00000001u)

#define CONTROL_BANDGAP_CTRL_SOC   (0x00000010u)
#define CONTROL_BANDGAP_CTRL_SOC_SHIFT   (0x00000004u)

#define CONTROL_BANDGAP_CTRL_TMPSOFF   (0x00000020u)
#define CONTROL_BANDGAP_CTRL_TMPSOFF_SHIFT   (0x00000005u)

#define CONTROL_BANDGAP_CTRL_TSHUT   (0x00000001u)
#define CONTROL_BANDGAP_CTRL_TSHUT_SHIFT   (0x00000000u)


/* BANDGAP_TRIM */
#define CONTROL_BANDGAP_TRIM_DTRBGAPC   (0xFF000000u)
#define CONTROL_BANDGAP_TRIM_DTRBGAPC_SHIFT   (0x00000018u)

#define CONTROL_BANDGAP_TRIM_DTRBGAPV   (0x00FF0000u)
#define CONTROL_BANDGAP_TRIM_DTRBGAPV_SHIFT   (0x00000010u)

#define CONTROL_BANDGAP_TRIM_DTRTEMPS   (0x0000FF00u)
#define CONTROL_BANDGAP_TRIM_DTRTEMPS_SHIFT   (0x00000008u)

#define CONTROL_BANDGAP_TRIM_DTRTEMPSC   (0x000000FFu)
#define CONTROL_BANDGAP_TRIM_DTRTEMPSC_SHIFT   (0x00000000u)


/* PLL_CLKINPULOW_CTRL */
#define CONTROL_PLL_CLKINPULOW_CTRL_DDR_PLL_CLKINPULOW_SEL   (0x00000004u)
#define CONTROL_PLL_CLKINPULOW_CTRL_DDR_PLL_CLKINPULOW_SEL_SHIFT   (0x00000002u)

#define CONTROL_PLL_CLKINPULOW_CTRL_DISP_PLL_CLKINPULOW_SEL   (0x00000002u)
#define CONTROL_PLL_CLKINPULOW_CTRL_DISP_PLL_CLKINPULOW_SEL_SHIFT   (0x00000001u)

#define CONTROL_PLL_CLKINPULOW_CTRL_MPU_DPLL_CLKINPULOW_SEL   (0x00000001u)
#define CONTROL_PLL_CLKINPULOW_CTRL_MPU_DPLL_CLKINPULOW_SEL_SHIFT   (0x00000000u)


/* MOSC_CTRL */
#define CONTROL_MOSC_CTRL_RESSELECT   (0x00000001u)
#define CONTROL_MOSC_CTRL_RESSELECT_SHIFT   (0x00000000u)


/* RCOSC_CTRL */
#define CONTROL_RCOSC_CTRL_STOPOSC   (0x00000001u)
#define CONTROL_RCOSC_CTRL_STOPOSC_SHIFT   (0x00000000u)


/* DEEPSLEEP_CTRL */
#define CONTROL_DEEPSLEEP_CTRL_DSCOUNT   (0x0000FFFFu)
#define CONTROL_DEEPSLEEP_CTRL_DSCOUNT_SHIFT   (0x00000000u)

#define CONTROL_DEEPSLEEP_CTRL_DSENABLE   (0x00020000u)
#define CONTROL_DEEPSLEEP_CTRL_DSENABLE_SHIFT   (0x00000011u)

#define CONTROL_DEEPSLEEP_CTRL_RSVD2   (0xFFFC0000u)
#define CONTROL_DEEPSLEEP_CTRL_RSVD2_SHIFT   (0x00000012u)


/* PE_SCRATCHPAD_0 */
#define CONTROL_PE_SCRATCHPAD_0_PE_SCRATCHPAD_0   (0xFFFFFFFFu)
#define CONTROL_PE_SCRATCHPAD_0_PE_SCRATCHPAD_0_SHIFT   (0x00000000u)


/* PE_SCRATCHPAD_1 */
#define CONTROL_PE_SCRATCHPAD_1_PE_SCRATCHPAD_1   (0xFFFFFFFFu)
#define CONTROL_PE_SCRATCHPAD_1_PE_SCRATCHPAD_1_SHIFT   (0x00000000u)


/* PE_SCRATCHPAD_2 */
#define CONTROL_PE_SCRATCHPAD_2_PE_SCRATCHPAD_2   (0xFFFFFFFFu)
#define CONTROL_PE_SCRATCHPAD_2_PE_SCRATCHPAD_2_SHIFT   (0x00000000u)


/* PE_SCRATCHPAD_3 */
#define CONTROL_PE_SCRATCHPAD_3_PE_SCRATCHPAD_3   (0xFFFFFFFFu)
#define CONTROL_PE_SCRATCHPAD_3_PE_SCRATCHPAD_3_SHIFT   (0x00000000u)


/* DEVICE_ID */
#define CONTROL_DEVICE_ID_DEVREV   (0xF0000000u)
#define CONTROL_DEVICE_ID_DEVREV_SHIFT   (0x0000001Cu)

#define CONTROL_DEVICE_ID_MFGR   (0x00000FFEu)
#define CONTROL_DEVICE_ID_MFGR_SHIFT   (0x00000001u)

#define CONTROL_DEVICE_ID_PARTNUM   (0x0FFFF000u)
#define CONTROL_DEVICE_ID_PARTNUM_SHIFT   (0x0000000Cu)


/* DEV_FEATURE */
#define CONTROL_DEV_FEATURE_CPSW   (0x00000002u)
#define CONTROL_DEV_FEATURE_CPSW_SHIFT   (0x00000001u)

#define CONTROL_DEV_FEATURE_DCAN   (0x00000080u)
#define CONTROL_DEV_FEATURE_DCAN_SHIFT   (0x00000007u)

#define CONTROL_DEV_FEATURE_ICSS   (0x00000001u)
#define CONTROL_DEV_FEATURE_ICSS_SHIFT   (0x00000000u)

#define CONTROL_DEV_FEATURE_ICSS_FEA   (0x00FF0000u)
#define CONTROL_DEV_FEATURE_ICSS_FEA_SHIFT   (0x00000010u)

#define CONTROL_DEV_FEATURE_RSVD2   (0x0000FC00u)
#define CONTROL_DEV_FEATURE_RSVD2_SHIFT   (0x0000000Au)

#define CONTROL_DEV_FEATURE_RSVD3   (0x1F000000u)
#define CONTROL_DEV_FEATURE_RSVD3_SHIFT   (0x00000018u)

#define CONTROL_DEV_FEATURE_RSVD4   (0xC0000000u)
#define CONTROL_DEV_FEATURE_RSVD4_SHIFT   (0x0000001Eu)

#define CONTROL_DEV_FEATURE_SEC_PKA_RNG_SHA   (0x00000200u)
#define CONTROL_DEV_FEATURE_SEC_PKA_RNG_SHA_SHIFT   (0x00000009u)

#define CONTROL_DEV_FEATURE_SGX   (0x20000000u)
#define CONTROL_DEV_FEATURE_SGX_SHIFT   (0x0000001Du)


/* INIT_PRIORITY_0 */
#define CONTROL_INIT_PRIORITY_0_HOST_ARM   (0x00000003u)
#define CONTROL_INIT_PRIORITY_0_HOST_ARM_SHIFT   (0x00000000u)

#define CONTROL_INIT_PRIORITY_0_MMU   (0x000000C0u)
#define CONTROL_INIT_PRIORITY_0_MMU_SHIFT   (0x00000006u)

#define CONTROL_INIT_PRIORITY_0_P1500   (0x0000C000u)
#define CONTROL_INIT_PRIORITY_0_P1500_SHIFT   (0x0000000Eu)

#define CONTROL_INIT_PRIORITY_0_PRUSS0   (0x0000000Cu)
#define CONTROL_INIT_PRIORITY_0_PRUSS0_SHIFT   (0x00000002u)

#define CONTROL_INIT_PRIORITY_0_PRUSS1   (0x00000030u)
#define CONTROL_INIT_PRIORITY_0_PRUSS1_SHIFT   (0x00000004u)

#define CONTROL_INIT_PRIORITY_0_RSVD2   (0xF0000000u)
#define CONTROL_INIT_PRIORITY_0_RSVD2_SHIFT   (0x0000001Cu)

#define CONTROL_INIT_PRIORITY_0_TCRD0   (0x00030000u)
#define CONTROL_INIT_PRIORITY_0_TCRD0_SHIFT   (0x00000010u)

#define CONTROL_INIT_PRIORITY_0_TCRD1   (0x00300000u)
#define CONTROL_INIT_PRIORITY_0_TCRD1_SHIFT   (0x00000014u)

#define CONTROL_INIT_PRIORITY_0_TCRD2   (0x03000000u)
#define CONTROL_INIT_PRIORITY_0_TCRD2_SHIFT   (0x00000018u)

#define CONTROL_INIT_PRIORITY_0_TCWR0   (0x000C0000u)
#define CONTROL_INIT_PRIORITY_0_TCWR0_SHIFT   (0x00000012u)

#define CONTROL_INIT_PRIORITY_0_TCWR1   (0x00C00000u)
#define CONTROL_INIT_PRIORITY_0_TCWR1_SHIFT   (0x00000016u)

#define CONTROL_INIT_PRIORITY_0_TCWR2   (0x0C000000u)
#define CONTROL_INIT_PRIORITY_0_TCWR2_SHIFT   (0x0000001Au)


/* INIT_PRIORITY_1 */
#define CONTROL_INIT_PRIORITY_1_CPSW   (0x00000003u)
#define CONTROL_INIT_PRIORITY_1_CPSW_SHIFT   (0x00000000u)

#define CONTROL_INIT_PRIORITY_1_DEBUG   (0x03000000u)
#define CONTROL_INIT_PRIORITY_1_DEBUG_SHIFT   (0x00000018u)

#define CONTROL_INIT_PRIORITY_1_LCD   (0x00C00000u)
#define CONTROL_INIT_PRIORITY_1_LCD_SHIFT   (0x00000016u)

#define CONTROL_INIT_PRIORITY_1_RSVD2   (0x0000FF00u)
#define CONTROL_INIT_PRIORITY_1_RSVD2_SHIFT   (0x00000008u)

#define CONTROL_INIT_PRIORITY_1_RSVD3   (0x000C0000u)
#define CONTROL_INIT_PRIORITY_1_RSVD3_SHIFT   (0x00000012u)

#define CONTROL_INIT_PRIORITY_1_RSVD4   (0xFC000000u)
#define CONTROL_INIT_PRIORITY_1_RSVD4_SHIFT   (0x0000001Au)

#define CONTROL_INIT_PRIORITY_1_SGX   (0x00300000u)
#define CONTROL_INIT_PRIORITY_1_SGX_SHIFT   (0x00000014u)

#define CONTROL_INIT_PRIORITY_1_USB_DMA   (0x00000030u)
#define CONTROL_INIT_PRIORITY_1_USB_DMA_SHIFT   (0x00000004u)

#define CONTROL_INIT_PRIORITY_1_USB_QMGR   (0x000000C0u)
#define CONTROL_INIT_PRIORITY_1_USB_QMGR_SHIFT   (0x00000006u)


/* MMU_CFG */
#define CONTROL_MMU_CFG_MMU_ABORT   (0x00008000u)
#define CONTROL_MMU_CFG_MMU_ABORT_SHIFT   (0x0000000Fu)

#define CONTROL_MMU_CFG_MMU_DISABLE   (0x00000080u)
#define CONTROL_MMU_CFG_MMU_DISABLE_SHIFT   (0x00000007u)

#define CONTROL_MMU_CFG_RSVD2   (0x00007F00u)
#define CONTROL_MMU_CFG_RSVD2_SHIFT   (0x00000008u)

#define CONTROL_MMU_CFG_RSVD3   (0xFFFF0000u)
#define CONTROL_MMU_CFG_RSVD3_SHIFT   (0x00000010u)


/* TPTC_CFG */
#define CONTROL_TPTC_CFG_TC0DBS   (0x00000003u)
#define CONTROL_TPTC_CFG_TC0DBS_SHIFT   (0x00000000u)

#define CONTROL_TPTC_CFG_TC1DBS   (0x0000000Cu)
#define CONTROL_TPTC_CFG_TC1DBS_SHIFT   (0x00000002u)

#define CONTROL_TPTC_CFG_TC2DBS   (0x00000030u)
#define CONTROL_TPTC_CFG_TC2DBS_SHIFT   (0x00000004u)


/* OCMC_CFG */
#define CONTROL_OCMC_CFG_PAR_EN   (0x00000001u)
#define CONTROL_OCMC_CFG_PAR_EN_SHIFT   (0x00000000u)

#define CONTROL_OCMC_CFG_PAR_INT_CLR   (0x00000010u)
#define CONTROL_OCMC_CFG_PAR_INT_CLR_SHIFT   (0x00000004u)

#define CONTROL_OCMC_CFG_PAR_RESP_EN   (0x00000002u)
#define CONTROL_OCMC_CFG_PAR_RESP_EN_SHIFT   (0x00000001u)

#define CONTROL_OCMC_CFG_RSVD2   (0xFFFFFFE0u)
#define CONTROL_OCMC_CFG_RSVD2_SHIFT   (0x00000005u)


/* USB_CTRL0 */
#define CONTROL_USB_CTRL0_CDET_EXTCTL   (0x00000400u)
#define CONTROL_USB_CTRL0_CDET_EXTCTL_SHIFT   (0x0000000Au)

#define CONTROL_USB_CTRL0_CHGDET_DIS   (0x00000004u)
#define CONTROL_USB_CTRL0_CHGDET_DIS_SHIFT   (0x00000002u)

#define CONTROL_USB_CTRL0_CHGDET_RSTRT   (0x00000008u)
#define CONTROL_USB_CTRL0_CHGDET_RSTRT_SHIFT   (0x00000003u)

#define CONTROL_USB_CTRL0_CHGISINK_EN   (0x00000040u)
#define CONTROL_USB_CTRL0_CHGISINK_EN_SHIFT   (0x00000006u)

#define CONTROL_USB_CTRL0_CHGVSRC_EN   (0x00000080u)
#define CONTROL_USB_CTRL0_CHGVSRC_EN_SHIFT   (0x00000007u)

#define CONTROL_USB_CTRL0_CM_PWRDN   (0x00000001u)
#define CONTROL_USB_CTRL0_CM_PWRDN_SHIFT   (0x00000000u)

#define CONTROL_USB_CTRL0_DATAPOLARITY_INV   (0x00800000u)
#define CONTROL_USB_CTRL0_DATAPOLARITY_INV_SHIFT   (0x00000017u)

#define CONTROL_USB_CTRL0_DMGPIO_PD   (0x00040000u)
#define CONTROL_USB_CTRL0_DMGPIO_PD_SHIFT   (0x00000012u)

#define CONTROL_USB_CTRL0_DMPULLUP   (0x00000100u)
#define CONTROL_USB_CTRL0_DMPULLUP_SHIFT   (0x00000008u)

#define CONTROL_USB_CTRL0_DPGPIO_PD   (0x00020000u)
#define CONTROL_USB_CTRL0_DPGPIO_PD_SHIFT   (0x00000011u)

#define CONTROL_USB_CTRL0_DPPULLUP   (0x00000200u)
#define CONTROL_USB_CTRL0_DPPULLUP_SHIFT   (0x00000009u)

#define CONTROL_USB_CTRL0_GPIOMODE   (0x00001000u)
#define CONTROL_USB_CTRL0_GPIOMODE_SHIFT   (0x0000000Cu)

#define CONTROL_USB_CTRL0_GPIO_SIG_CROSS   (0x00004000u)
#define CONTROL_USB_CTRL0_GPIO_SIG_CROSS_SHIFT   (0x0000000Eu)

#define CONTROL_USB_CTRL0_GPIO_SIG_INV   (0x00002000u)
#define CONTROL_USB_CTRL0_GPIO_SIG_INV_SHIFT   (0x0000000Du)

#define CONTROL_USB_CTRL0_OTGSESSENDEN   (0x00100000u)
#define CONTROL_USB_CTRL0_OTGSESSENDEN_SHIFT   (0x00000014u)

#define CONTROL_USB_CTRL0_OTGVDET_EN   (0x00080000u)
#define CONTROL_USB_CTRL0_OTGVDET_EN_SHIFT   (0x00000013u)

#define CONTROL_USB_CTRL0_OTG_PWRDN   (0x00000002u)
#define CONTROL_USB_CTRL0_OTG_PWRDN_SHIFT   (0x00000001u)

#define CONTROL_USB_CTRL0_RSVD2   (0x00008000u)
#define CONTROL_USB_CTRL0_RSVD2_SHIFT   (0x0000000Fu)

#define CONTROL_USB_CTRL0_RSVD3   (0x00010000u)
#define CONTROL_USB_CTRL0_RSVD3_SHIFT   (0x00000010u)

#define CONTROL_USB_CTRL0_SINKONDP   (0x00000020u)
#define CONTROL_USB_CTRL0_SINKONDP_SHIFT   (0x00000005u)

#define CONTROL_USB_CTRL0_SPAREIN   (0xFF000000u)
#define CONTROL_USB_CTRL0_SPAREIN_SHIFT   (0x00000018u)

#define CONTROL_USB_CTRL0_SRCONDM   (0x00000010u)
#define CONTROL_USB_CTRL0_SRCONDM_SHIFT   (0x00000004u)

#define CONTROL_USB_CTRL0_USB_PHY_SMA1   (0x00200000u)
#define CONTROL_USB_CTRL0_USB_PHY_SMA1_SHIFT   (0x00000015u)

#define CONTROL_USB_CTRL0_USB_PHY_SMA2   (0x00400000u)
#define CONTROL_USB_CTRL0_USB_PHY_SMA2_SHIFT   (0x00000016u)


/* USB_STS0 */
#define CONTROL_USB_STS0_CDET_DATADET   (0x00000004u)
#define CONTROL_USB_STS0_CDET_DATADET_SHIFT   (0x00000002u)

#define CONTROL_USB_STS0_CDET_DMDET   (0x00000010u)
#define CONTROL_USB_STS0_CDET_DMDET_SHIFT   (0x00000004u)

#define CONTROL_USB_STS0_CDET_DPDET   (0x00000008u)
#define CONTROL_USB_STS0_CDET_DPDET_SHIFT   (0x00000003u)

#define CONTROL_USB_STS0_CHGDETDONE   (0x00000001u)
#define CONTROL_USB_STS0_CHGDETDONE_SHIFT   (0x00000000u)

#define CONTROL_USB_STS0_CHGDETECT   (0x00000002u)
#define CONTROL_USB_STS0_CHGDETECT_SHIFT   (0x00000001u)

#define CONTROL_USB_STS0_CHGDETSTS   (0x000000E0u)
#define CONTROL_USB_STS0_CHGDETSTS_SHIFT   (0x00000005u)


/* USB_CTRL1 */
#define CONTROL_USB_CTRL1_CDET_EXTCTL   (0x00000400u)
#define CONTROL_USB_CTRL1_CDET_EXTCTL_SHIFT   (0x0000000Au)

#define CONTROL_USB_CTRL1_CHGDET_DIS   (0x00000004u)
#define CONTROL_USB_CTRL1_CHGDET_DIS_SHIFT   (0x00000002u)

#define CONTROL_USB_CTRL1_CHGDET_RSTRT   (0x00000008u)
#define CONTROL_USB_CTRL1_CHGDET_RSTRT_SHIFT   (0x00000003u)

#define CONTROL_USB_CTRL1_CHGISINK_EN   (0x00000040u)
#define CONTROL_USB_CTRL1_CHGISINK_EN_SHIFT   (0x00000006u)

#define CONTROL_USB_CTRL1_CHGVSRC_EN   (0x00000080u)
#define CONTROL_USB_CTRL1_CHGVSRC_EN_SHIFT   (0x00000007u)

#define CONTROL_USB_CTRL1_CM_PWRDN   (0x00000001u)
#define CONTROL_USB_CTRL1_CM_PWRDN_SHIFT   (0x00000000u)

#define CONTROL_USB_CTRL1_DATAPOLARITY_INV   (0x00800000u)
#define CONTROL_USB_CTRL1_DATAPOLARITY_INV_SHIFT   (0x00000017u)

#define CONTROL_USB_CTRL1_DMGPIO_PD   (0x00040000u)
#define CONTROL_USB_CTRL1_DMGPIO_PD_SHIFT   (0x00000012u)

#define CONTROL_USB_CTRL1_DMPULLUP   (0x00000100u)
#define CONTROL_USB_CTRL1_DMPULLUP_SHIFT   (0x00000008u)

#define CONTROL_USB_CTRL1_DPGPIO_PD   (0x00020000u)
#define CONTROL_USB_CTRL1_DPGPIO_PD_SHIFT   (0x00000011u)

#define CONTROL_USB_CTRL1_DPPULLUP   (0x00000200u)
#define CONTROL_USB_CTRL1_DPPULLUP_SHIFT   (0x00000009u)

#define CONTROL_USB_CTRL1_GPIOMODE   (0x00001000u)
#define CONTROL_USB_CTRL1_GPIOMODE_SHIFT   (0x0000000Cu)

#define CONTROL_USB_CTRL1_GPIO_SIG_CROSS   (0x00004000u)
#define CONTROL_USB_CTRL1_GPIO_SIG_CROSS_SHIFT   (0x0000000Eu)

#define CONTROL_USB_CTRL1_GPIO_SIG_INV   (0x00002000u)
#define CONTROL_USB_CTRL1_GPIO_SIG_INV_SHIFT   (0x0000000Du)

#define CONTROL_USB_CTRL1_OTGSESSENDEN   (0x00100000u)
#define CONTROL_USB_CTRL1_OTGSESSENDEN_SHIFT   (0x00000014u)

#define CONTROL_USB_CTRL1_OTGVDET_EN   (0x00080000u)
#define CONTROL_USB_CTRL1_OTGVDET_EN_SHIFT   (0x00000013u)

#define CONTROL_USB_CTRL1_OTG_PWRDN   (0x00000002u)
#define CONTROL_USB_CTRL1_OTG_PWRDN_SHIFT   (0x00000001u)

#define CONTROL_USB_CTRL1_RSVD2   (0x00008000u)
#define CONTROL_USB_CTRL1_RSVD2_SHIFT   (0x0000000Fu)

#define CONTROL_USB_CTRL1_RSVD3   (0x00010000u)
#define CONTROL_USB_CTRL1_RSVD3_SHIFT   (0x00000010u)

#define CONTROL_USB_CTRL1_SINKONDP   (0x00000020u)
#define CONTROL_USB_CTRL1_SINKONDP_SHIFT   (0x00000005u)

#define CONTROL_USB_CTRL1_SPAREIN   (0xFF000000u)
#define CONTROL_USB_CTRL1_SPAREIN_SHIFT   (0x00000018u)

#define CONTROL_USB_CTRL1_SRCONDM   (0x00000010u)
#define CONTROL_USB_CTRL1_SRCONDM_SHIFT   (0x00000004u)

#define CONTROL_USB_CTRL1_USB_PHY_SMA1   (0x00200000u)
#define CONTROL_USB_CTRL1_USB_PHY_SMA1_SHIFT   (0x00000015u)

#define CONTROL_USB_CTRL1_USB_PHY_SMA2   (0x00400000u)
#define CONTROL_USB_CTRL1_USB_PHY_SMA2_SHIFT   (0x00000016u)


/* USB_STS1 */
#define CONTROL_USB_STS1_CDET_DATADET   (0x00000004u)
#define CONTROL_USB_STS1_CDET_DATADET_SHIFT   (0x00000002u)

#define CONTROL_USB_STS1_CDET_DMDET   (0x00000010u)
#define CONTROL_USB_STS1_CDET_DMDET_SHIFT   (0x00000004u)

#define CONTROL_USB_STS1_CDET_DPDET   (0x00000008u)
#define CONTROL_USB_STS1_CDET_DPDET_SHIFT   (0x00000003u)

#define CONTROL_USB_STS1_CHGDETDONE   (0x00000001u)
#define CONTROL_USB_STS1_CHGDETDONE_SHIFT   (0x00000000u)

#define CONTROL_USB_STS1_CHGDETECT   (0x00000002u)
#define CONTROL_USB_STS1_CHGDETECT_SHIFT   (0x00000001u)

#define CONTROL_USB_STS1_CHGDETSTS   (0x000000E0u)
#define CONTROL_USB_STS1_CHGDETSTS_SHIFT   (0x00000005u)


/* MAC_ID0_LO */
#define CONTROL_MAC_ID0_LO_MACADDR_15_8   (0x000000FFu)
#define CONTROL_MAC_ID0_LO_MACADDR_15_8_SHIFT   (0x00000000u)

#define CONTROL_MAC_ID0_LO_MACADDR_7_0   (0x0000FF00u)
#define CONTROL_MAC_ID0_LO_MACADDR_7_0_SHIFT   (0x00000008u)


/* MAC_ID0_HI */
#define CONTROL_MAC_ID0_HI_MACADDR_23_16   (0xFF000000u)
#define CONTROL_MAC_ID0_HI_MACADDR_23_16_SHIFT   (0x00000018u)

#define CONTROL_MAC_ID0_HI_MACADDR_31_24   (0x00FF0000u)
#define CONTROL_MAC_ID0_HI_MACADDR_31_24_SHIFT   (0x00000010u)

#define CONTROL_MAC_ID0_HI_MACADDR_39_32   (0x0000FF00u)
#define CONTROL_MAC_ID0_HI_MACADDR_39_32_SHIFT   (0x00000008u)

#define CONTROL_MAC_ID0_HI_MACADDR_47_40   (0x000000FFu)
#define CONTROL_MAC_ID0_HI_MACADDR_47_40_SHIFT   (0x00000000u)


/* MAC_ID1_LO */
#define CONTROL_MAC_ID1_LO_MACADDR_15_8   (0x000000FFu)
#define CONTROL_MAC_ID1_LO_MACADDR_15_8_SHIFT   (0x00000000u)

#define CONTROL_MAC_ID1_LO_MACADDR_7_0   (0x0000FF00u)
#define CONTROL_MAC_ID1_LO_MACADDR_7_0_SHIFT   (0x00000008u)


/* MAC_ID1_HI */
#define CONTROL_MAC_ID1_HI_MACADDR_23_16   (0xFF000000u)
#define CONTROL_MAC_ID1_HI_MACADDR_23_16_SHIFT   (0x00000018u)

#define CONTROL_MAC_ID1_HI_MACADDR_31_24   (0x00FF0000u)
#define CONTROL_MAC_ID1_HI_MACADDR_31_24_SHIFT   (0x00000010u)

#define CONTROL_MAC_ID1_HI_MACADDR_39_32   (0x0000FF00u)
#define CONTROL_MAC_ID1_HI_MACADDR_39_32_SHIFT   (0x00000008u)

#define CONTROL_MAC_ID1_HI_MACADDR_47_40   (0x000000FFu)
#define CONTROL_MAC_ID1_HI_MACADDR_47_40_SHIFT   (0x00000000u)


/* DCAN_RAMINIT */
#define CONTROL_DCAN_RAMINIT_DCAN0_RAMINIT_DONE   (0x00000100u)
#define CONTROL_DCAN_RAMINIT_DCAN0_RAMINIT_DONE_SHIFT   (0x00000008u)

#define CONTROL_DCAN_RAMINIT_DCAN0_RAMINIT_START   (0x00000001u)
#define CONTROL_DCAN_RAMINIT_DCAN0_RAMINIT_START_SHIFT   (0x00000000u)

#define CONTROL_DCAN_RAMINIT_DCAN1_RAMINIT_DONE   (0x00000200u)
#define CONTROL_DCAN_RAMINIT_DCAN1_RAMINIT_DONE_SHIFT   (0x00000009u)

#define CONTROL_DCAN_RAMINIT_DCAN1_RAMINIT_START   (0x00000002u)
#define CONTROL_DCAN_RAMINIT_DCAN1_RAMINIT_START_SHIFT   (0x00000001u)

#define CONTROL_DCAN_RAMINIT_RSVD2   (0xFFFFFC00u)
#define CONTROL_DCAN_RAMINIT_RSVD2_SHIFT   (0x0000000Au)


/* USB_WKUP_CTRL */
#define CONTROL_USB_WKUP_CTRL_PHY0_WUEN   (0x00000001u)
#define CONTROL_USB_WKUP_CTRL_PHY0_WUEN_SHIFT   (0x00000000u)

#define CONTROL_USB_WKUP_CTRL_PHY1_WUEN   (0x00000100u)
#define CONTROL_USB_WKUP_CTRL_PHY1_WUEN_SHIFT   (0x00000008u)

#define CONTROL_USB_WKUP_CTRL_RSVD2   (0xFFFFFE00u)
#define CONTROL_USB_WKUP_CTRL_RSVD2_SHIFT   (0x00000009u)


/* GMII_SEL */
#define CONTROL_GMII_SEL_GMII1_SEL   (0x00000003u)
#define CONTROL_GMII_SEL_GMII1_SEL_SHIFT   (0x00000000u)

#define CONTROL_GMII_SEL_GMII2_SEL   (0x0000000Cu)
#define CONTROL_GMII_SEL_GMII2_SEL_SHIFT   (0x00000002u)

#define CONTROL_GMII_SEL_RGMII1_IDMODE   (0x00000010u)
#define CONTROL_GMII_SEL_RGMII1_IDMODE_SHIFT   (0x00000004u)

#define CONTROL_GMII_SEL_RGMII2_IDMOE   (0x00000020u)
#define CONTROL_GMII_SEL_RGMII2_IDMOE_SHIFT   (0x00000005u)

#define CONTROL_GMII_SEL_RMII1_IO_CLK_EN   (0x00000040u)
#define CONTROL_GMII_SEL_RMII1_IO_CLK_EN_SHIFT   (0x00000006u)

#define CONTROL_GMII_SEL_RMII2_IO_CLK_EN   (0x00000080u)
#define CONTROL_GMII_SEL_RMII2_IO_CLK_EN_SHIFT   (0x00000007u)


/* PWMSS_CTRL */
#define CONTROL_PWMSS_CTRL_PWMMS1_TBCLKEN   (0x00000002u)
#define CONTROL_PWMSS_CTRL_PWMMS1_TBCLKEN_SHIFT   (0x00000001u)

#define CONTROL_PWMSS_CTRL_PWMSS0_TBCLKEN   (0x00000001u)
#define CONTROL_PWMSS_CTRL_PWMSS0_TBCLKEN_SHIFT   (0x00000000u)

#define CONTROL_PWMSS_CTRL_PWMSS2_TBCLKEN   (0x00000004u)
#define CONTROL_PWMSS_CTRL_PWMSS2_TBCLKEN_SHIFT   (0x00000002u)


/* MREQPRIO_0 */
#define CONTROL_MREQPRIO_0_CPSW   (0x00070000u)
#define CONTROL_MREQPRIO_0_CPSW_SHIFT   (0x00000010u)

#define CONTROL_MREQPRIO_0_PRUSS1_PRU0   (0x00000700u)
#define CONTROL_MREQPRIO_0_PRUSS1_PRU0_SHIFT   (0x00000008u)

#define CONTROL_MREQPRIO_0_PRUSS1_PRU1   (0x00007000u)
#define CONTROL_MREQPRIO_0_PRUSS1_PRU1_SHIFT   (0x0000000Cu)

#define CONTROL_MREQPRIO_0_RSVD2   (0x00000080u)
#define CONTROL_MREQPRIO_0_RSVD2_SHIFT   (0x00000007u)

#define CONTROL_MREQPRIO_0_RSVD3   (0x00000800u)
#define CONTROL_MREQPRIO_0_RSVD3_SHIFT   (0x0000000Bu)

#define CONTROL_MREQPRIO_0_RSVD4   (0x00008000u)
#define CONTROL_MREQPRIO_0_RSVD4_SHIFT   (0x0000000Fu)

#define CONTROL_MREQPRIO_0_RSVD5   (0x00080000u)
#define CONTROL_MREQPRIO_0_RSVD5_SHIFT   (0x00000013u)

#define CONTROL_MREQPRIO_0_RSVD6   (0x00800000u)
#define CONTROL_MREQPRIO_0_RSVD6_SHIFT   (0x00000017u)

#define CONTROL_MREQPRIO_0_RSVD7   (0x08000000u)
#define CONTROL_MREQPRIO_0_RSVD7_SHIFT   (0x0000001Bu)

#define CONTROL_MREQPRIO_0_RSVD8   (0x80000000u)
#define CONTROL_MREQPRIO_0_RSVD8_SHIFT   (0x0000001Fu)

#define CONTROL_MREQPRIO_0_SAB_INIT0   (0x00000007u)
#define CONTROL_MREQPRIO_0_SAB_INIT0_SHIFT   (0x00000000u)

#define CONTROL_MREQPRIO_0_SAB_INIT1   (0x00000070u)
#define CONTROL_MREQPRIO_0_SAB_INIT1_SHIFT   (0x00000004u)

#define CONTROL_MREQPRIO_0_SGX   (0x70000000u)
#define CONTROL_MREQPRIO_0_SGX_SHIFT   (0x0000001Cu)

#define CONTROL_MREQPRIO_0_USB0   (0x00700000u)
#define CONTROL_MREQPRIO_0_USB0_SHIFT   (0x00000014u)

#define CONTROL_MREQPRIO_0_USB1   (0x07000000u)
#define CONTROL_MREQPRIO_0_USB1_SHIFT   (0x00000018u)


/* MREQPRIO_1 */
#define CONTROL_MREQPRIO_1_EXP   (0x00000007u)
#define CONTROL_MREQPRIO_1_EXP_SHIFT   (0x00000000u)


/* HW_EVENT_SEL_GRP1 */
#define CONTROL_HW_EVENT_SEL_GRP1_EVENT1   (0x000000FFu)
#define CONTROL_HW_EVENT_SEL_GRP1_EVENT1_SHIFT   (0x00000000u)

#define CONTROL_HW_EVENT_SEL_GRP1_EVENT2   (0x0000FF00u)
#define CONTROL_HW_EVENT_SEL_GRP1_EVENT2_SHIFT   (0x00000008u)

#define CONTROL_HW_EVENT_SEL_GRP1_EVENT3   (0x00FF0000u)
#define CONTROL_HW_EVENT_SEL_GRP1_EVENT3_SHIFT   (0x00000010u)

#define CONTROL_HW_EVENT_SEL_GRP1_EVENT4   (0xFF000000u)
#define CONTROL_HW_EVENT_SEL_GRP1_EVENT4_SHIFT   (0x00000018u)


/* HW_EVENT_SEL_GRP2 */
#define CONTROL_HW_EVENT_SEL_GRP2_EVENT5   (0x000000FFu)
#define CONTROL_HW_EVENT_SEL_GRP2_EVENT5_SHIFT   (0x00000000u)

#define CONTROL_HW_EVENT_SEL_GRP2_EVENT6   (0x0000FF00u)
#define CONTROL_HW_EVENT_SEL_GRP2_EVENT6_SHIFT   (0x00000008u)

#define CONTROL_HW_EVENT_SEL_GRP2_EVENT7   (0x00FF0000u)
#define CONTROL_HW_EVENT_SEL_GRP2_EVENT7_SHIFT   (0x00000010u)

#define CONTROL_HW_EVENT_SEL_GRP2_EVENT8   (0xFF000000u)
#define CONTROL_HW_EVENT_SEL_GRP2_EVENT8_SHIFT   (0x00000018u)


/* HW_EVENT_SEL_GRP3 */
#define CONTROL_HW_EVENT_SEL_GRP3_EVENT10   (0x0000FF00u)
#define CONTROL_HW_EVENT_SEL_GRP3_EVENT10_SHIFT   (0x00000008u)

#define CONTROL_HW_EVENT_SEL_GRP3_EVENT11   (0x00FF0000u)
#define CONTROL_HW_EVENT_SEL_GRP3_EVENT11_SHIFT   (0x00000010u)

#define CONTROL_HW_EVENT_SEL_GRP3_EVENT12   (0xFF000000u)
#define CONTROL_HW_EVENT_SEL_GRP3_EVENT12_SHIFT   (0x00000018u)

#define CONTROL_HW_EVENT_SEL_GRP3_EVENT9   (0x000000FFu)
#define CONTROL_HW_EVENT_SEL_GRP3_EVENT9_SHIFT   (0x00000000u)


/* HW_EVENT_SEL_GRP4 */
#define CONTROL_HW_EVENT_SEL_GRP4_EVENT13   (0x000000FFu)
#define CONTROL_HW_EVENT_SEL_GRP4_EVENT13_SHIFT   (0x00000000u)

#define CONTROL_HW_EVENT_SEL_GRP4_EVENT14   (0x0000FF00u)
#define CONTROL_HW_EVENT_SEL_GRP4_EVENT14_SHIFT   (0x00000008u)

#define CONTROL_HW_EVENT_SEL_GRP4_EVENT15   (0x00FF0000u)
#define CONTROL_HW_EVENT_SEL_GRP4_EVENT15_SHIFT   (0x00000010u)

#define CONTROL_HW_EVENT_SEL_GRP4_EVENT16   (0xFF000000u)
#define CONTROL_HW_EVENT_SEL_GRP4_EVENT16_SHIFT   (0x00000018u)


/* SMRT_CTRL */
#define CONTROL_SMRT_CTRL_SR0_SLEEP   (0x00000001u)
#define CONTROL_SMRT_CTRL_SR0_SLEEP_SHIFT   (0x00000000u)

#define CONTROL_SMRT_CTRL_SR1_SLEEP   (0x00000002u)
#define CONTROL_SMRT_CTRL_SR1_SLEEP_SHIFT   (0x00000001u)


/* SABTOOTH_HW_DEBUG_SEL */
#define CONTROL_SABTOOTH_HW_DEBUG_SEL_HW_DBG_GATE_EN   (0x00000200u)
#define CONTROL_SABTOOTH_HW_DEBUG_SEL_HW_DBG_GATE_EN_SHIFT   (0x00000009u)

#define CONTROL_SABTOOTH_HW_DEBUG_SEL_HW_DBG_SEL   (0x0000000Fu)
#define CONTROL_SABTOOTH_HW_DEBUG_SEL_HW_DBG_SEL_SHIFT   (0x00000000u)

#define CONTROL_SABTOOTH_HW_DEBUG_SEL_RSVD3   (0xFFFFFC00u)
#define CONTROL_SABTOOTH_HW_DEBUG_SEL_RSVD3_SHIFT   (0x0000000Au)


/* SABTOOTH_HW_DBG_INFO */
#define CONTROL_SABTOOTH_HW_DBG_INFO_HW_DBG_INFO   (0xFFFFFFFFu)
#define CONTROL_SABTOOTH_HW_DBG_INFO_HW_DBG_INFO_SHIFT   (0x00000000u)


/* MRGN_MODE0 */
#define CONTROL_MRGN_MODE0_MMODE0   (0x00000003u)
#define CONTROL_MRGN_MODE0_MMODE0_SHIFT   (0x00000000u)

#define CONTROL_MRGN_MODE0_MMODE1   (0x0000000Cu)
#define CONTROL_MRGN_MODE0_MMODE1_SHIFT   (0x00000002u)

#define CONTROL_MRGN_MODE0_MMODE10   (0x00300000u)
#define CONTROL_MRGN_MODE0_MMODE10_SHIFT   (0x00000014u)

#define CONTROL_MRGN_MODE0_MMODE11   (0x00C00000u)
#define CONTROL_MRGN_MODE0_MMODE11_SHIFT   (0x00000016u)

#define CONTROL_MRGN_MODE0_MMODE12   (0x03000000u)
#define CONTROL_MRGN_MODE0_MMODE12_SHIFT   (0x00000018u)

#define CONTROL_MRGN_MODE0_MMODE13   (0x0C000000u)
#define CONTROL_MRGN_MODE0_MMODE13_SHIFT   (0x0000001Au)

#define CONTROL_MRGN_MODE0_MMODE14   (0x30000000u)
#define CONTROL_MRGN_MODE0_MMODE14_SHIFT   (0x0000001Cu)

#define CONTROL_MRGN_MODE0_MMODE15   (0xC0000000u)
#define CONTROL_MRGN_MODE0_MMODE15_SHIFT   (0x0000001Eu)

#define CONTROL_MRGN_MODE0_MMODE2   (0x00000030u)
#define CONTROL_MRGN_MODE0_MMODE2_SHIFT   (0x00000004u)

#define CONTROL_MRGN_MODE0_MMODE3   (0x000000C0u)
#define CONTROL_MRGN_MODE0_MMODE3_SHIFT   (0x00000006u)

#define CONTROL_MRGN_MODE0_MMODE4   (0x00000300u)
#define CONTROL_MRGN_MODE0_MMODE4_SHIFT   (0x00000008u)

#define CONTROL_MRGN_MODE0_MMODE5   (0x00000C00u)
#define CONTROL_MRGN_MODE0_MMODE5_SHIFT   (0x0000000Au)

#define CONTROL_MRGN_MODE0_MMODE6   (0x00003000u)
#define CONTROL_MRGN_MODE0_MMODE6_SHIFT   (0x0000000Cu)

#define CONTROL_MRGN_MODE0_MMODE7   (0x0000C000u)
#define CONTROL_MRGN_MODE0_MMODE7_SHIFT   (0x0000000Eu)

#define CONTROL_MRGN_MODE0_MMODE8   (0x00030000u)
#define CONTROL_MRGN_MODE0_MMODE8_SHIFT   (0x00000010u)

#define CONTROL_MRGN_MODE0_MMODE9   (0x000C0000u)
#define CONTROL_MRGN_MODE0_MMODE9_SHIFT   (0x00000012u)


/* MRGN_MODE1 */
#define CONTROL_MRGN_MODE1_MMODE16   (0x00000003u)
#define CONTROL_MRGN_MODE1_MMODE16_SHIFT   (0x00000000u)

#define CONTROL_MRGN_MODE1_MMODE17   (0x0000000Cu)
#define CONTROL_MRGN_MODE1_MMODE17_SHIFT   (0x00000002u)

#define CONTROL_MRGN_MODE1_MMODE18   (0x00000030u)
#define CONTROL_MRGN_MODE1_MMODE18_SHIFT   (0x00000004u)

#define CONTROL_MRGN_MODE1_MMODE19   (0x000000C0u)
#define CONTROL_MRGN_MODE1_MMODE19_SHIFT   (0x00000006u)


/* VDD_MPU_OPP_050 */
#define CONTROL_VDD_MPU_OPP_050_NTARGET   (0x00FFFFFFu)
#define CONTROL_VDD_MPU_OPP_050_NTARGET_SHIFT   (0x00000000u)


/* VDD_MPU_OPP_100 */
#define CONTROL_VDD_MPU_OPP_100_NTARGET   (0x00FFFFFFu)
#define CONTROL_VDD_MPU_OPP_100_NTARGET_SHIFT   (0x00000000u)


/* VDD_MPU_OPP_119 */
#define CONTROL_VDD_MPU_OPP_119_NTARGET   (0x00FFFFFFu)
#define CONTROL_VDD_MPU_OPP_119_NTARGET_SHIFT   (0x00000000u)


/* VDD_MPU_OPP_TURBO */
#define CONTROL_VDD_MPU_OPP_TURBO_NTARGET   (0x00FFFFFFu)
#define CONTROL_VDD_MPU_OPP_TURBO_NTARGET_SHIFT   (0x00000000u)


/* VDD_CORE_OPP_050 */
#define CONTROL_VDD_CORE_OPP_050_NTARGET   (0x00FFFFFFu)
#define CONTROL_VDD_CORE_OPP_050_NTARGET_SHIFT   (0x00000000u)


/* VDD_CORE_OPP_100 */
#define CONTROL_VDD_CORE_OPP_100_NTARGET   (0x00FFFFFFu)
#define CONTROL_VDD_CORE_OPP_100_NTARGET_SHIFT   (0x00000000u)


/* BB_SCALE */
#define CONTROL_BB_SCALE_BBIAS   (0x00000003u)
#define CONTROL_BB_SCALE_BBIAS_SHIFT   (0x00000000u)

#define CONTROL_BB_SCALE_RSVD2   (0xFFFFF000u)
#define CONTROL_BB_SCALE_RSVD2_SHIFT   (0x0000000Cu)

#define CONTROL_BB_SCALE_SCALE   (0x00000F00u)
#define CONTROL_BB_SCALE_SCALE_SHIFT   (0x00000008u)


/* USB_VID_PID */
#define CONTROL_USB_VID_PID_USB_PID   (0x0000FFFFu)
#define CONTROL_USB_VID_PID_USB_PID_SHIFT   (0x00000000u)

#define CONTROL_USB_VID_PID_USB_VID   (0xFFFF0000u)
#define CONTROL_USB_VID_PID_USB_VID_SHIFT   (0x00000010u)


/* EFUSE_SMA */
#define CONTROL_EFUSE_SMA_EFUSE_SMA   (0xFFFFFFFFu)
#define CONTROL_EFUSE_SMA_EFUSE_SMA_SHIFT   (0x00000000u)


/* CONF_GPMC_ADx */
#define CONTROL_CONF_GPMC_AD_CONF_GPMC_AD_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_AD_CONF_GPMC_AD_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_AD_CONF_GPMC_AD_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_AD_CONF_GPMC_AD_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_AD_CONF_GPMC_AD_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_AD_CONF_GPMC_AD_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_AD_CONF_GPMC_AD_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_AD_CONF_GPMC_AD_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_AD_CONF_GPMC_AD_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_AD_CONF_GPMC_AD_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_AD_CONF_GPMC_AD_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_AD_CONF_GPMC_AD_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_AD0 */
#define CONTROL_CONF_GPMC_AD0_CONF_GPMC_AD0_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_AD0_CONF_GPMC_AD0_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_AD0_CONF_GPMC_AD0_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_AD0_CONF_GPMC_AD0_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_AD0_CONF_GPMC_AD0_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_AD0_CONF_GPMC_AD0_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_AD0_CONF_GPMC_AD0_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_AD0_CONF_GPMC_AD0_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_AD0_CONF_GPMC_AD0_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_AD0_CONF_GPMC_AD0_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_AD0_CONF_GPMC_AD0_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_AD0_CONF_GPMC_AD0_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_AD1 */
#define CONTROL_CONF_GPMC_AD1_CONF_GPMC_AD1_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_AD1_CONF_GPMC_AD1_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_AD1_CONF_GPMC_AD1_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_AD1_CONF_GPMC_AD1_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_AD1_CONF_GPMC_AD1_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_AD1_CONF_GPMC_AD1_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_AD1_CONF_GPMC_AD1_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_AD1_CONF_GPMC_AD1_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_AD1_CONF_GPMC_AD1_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_AD1_CONF_GPMC_AD1_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_AD1_CONF_GPMC_AD1_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_AD1_CONF_GPMC_AD1_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_AD2 */
#define CONTROL_CONF_GPMC_AD2_CONF_GPMC_AD2_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_AD2_CONF_GPMC_AD2_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_AD2_CONF_GPMC_AD2_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_AD2_CONF_GPMC_AD2_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_AD2_CONF_GPMC_AD2_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_AD2_CONF_GPMC_AD2_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_AD2_CONF_GPMC_AD2_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_AD2_CONF_GPMC_AD2_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_AD2_CONF_GPMC_AD2_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_AD2_CONF_GPMC_AD2_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_AD2_CONF_GPMC_AD2_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_AD2_CONF_GPMC_AD2_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_AD3 */
#define CONTROL_CONF_GPMC_AD3_CONF_GPMC_AD3_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_AD3_CONF_GPMC_AD3_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_AD3_CONF_GPMC_AD3_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_AD3_CONF_GPMC_AD3_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_AD3_CONF_GPMC_AD3_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_AD3_CONF_GPMC_AD3_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_AD3_CONF_GPMC_AD3_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_AD3_CONF_GPMC_AD3_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_AD3_CONF_GPMC_AD3_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_AD3_CONF_GPMC_AD3_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_AD3_CONF_GPMC_AD3_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_AD3_CONF_GPMC_AD3_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_AD4 */
#define CONTROL_CONF_GPMC_AD4_CONF_GPMC_AD4_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_AD4_CONF_GPMC_AD4_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_AD4_CONF_GPMC_AD4_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_AD4_CONF_GPMC_AD4_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_AD4_CONF_GPMC_AD4_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_AD4_CONF_GPMC_AD4_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_AD4_CONF_GPMC_AD4_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_AD4_CONF_GPMC_AD4_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_AD4_CONF_GPMC_AD4_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_AD4_CONF_GPMC_AD4_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_AD4_CONF_GPMC_AD4_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_AD4_CONF_GPMC_AD4_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_AD5 */
#define CONTROL_CONF_GPMC_AD5_CONF_GPMC_AD5_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_AD5_CONF_GPMC_AD5_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_AD5_CONF_GPMC_AD5_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_AD5_CONF_GPMC_AD5_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_AD5_CONF_GPMC_AD5_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_AD5_CONF_GPMC_AD5_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_AD5_CONF_GPMC_AD5_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_AD5_CONF_GPMC_AD5_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_AD5_CONF_GPMC_AD5_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_AD5_CONF_GPMC_AD5_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_AD5_CONF_GPMC_AD5_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_AD5_CONF_GPMC_AD5_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_AD6 */
#define CONTROL_CONF_GPMC_AD6_CONF_GPMC_AD6_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_AD6_CONF_GPMC_AD6_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_AD6_CONF_GPMC_AD6_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_AD6_CONF_GPMC_AD6_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_AD6_CONF_GPMC_AD6_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_AD6_CONF_GPMC_AD6_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_AD6_CONF_GPMC_AD6_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_AD6_CONF_GPMC_AD6_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_AD6_CONF_GPMC_AD6_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_AD6_CONF_GPMC_AD6_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_AD6_CONF_GPMC_AD6_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_AD6_CONF_GPMC_AD6_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_AD7 */
#define CONTROL_CONF_GPMC_AD7_CONF_GPMC_AD7_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_AD7_CONF_GPMC_AD7_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_AD7_CONF_GPMC_AD7_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_AD7_CONF_GPMC_AD7_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_AD7_CONF_GPMC_AD7_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_AD7_CONF_GPMC_AD7_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_AD7_CONF_GPMC_AD7_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_AD7_CONF_GPMC_AD7_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_AD7_CONF_GPMC_AD7_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_AD7_CONF_GPMC_AD7_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_AD7_CONF_GPMC_AD7_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_AD7_CONF_GPMC_AD7_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_AD8 */
#define CONTROL_CONF_GPMC_AD8_CONF_GPMC_AD8_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_AD8_CONF_GPMC_AD8_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_AD8_CONF_GPMC_AD8_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_AD8_CONF_GPMC_AD8_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_AD8_CONF_GPMC_AD8_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_AD8_CONF_GPMC_AD8_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_AD8_CONF_GPMC_AD8_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_AD8_CONF_GPMC_AD8_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_AD8_CONF_GPMC_AD8_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_AD8_CONF_GPMC_AD8_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_AD8_CONF_GPMC_AD8_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_AD8_CONF_GPMC_AD8_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_AD9 */
#define CONTROL_CONF_GPMC_AD9_CONF_GPMC_AD9_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_AD9_CONF_GPMC_AD9_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_AD9_CONF_GPMC_AD9_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_AD9_CONF_GPMC_AD9_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_AD9_CONF_GPMC_AD9_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_AD9_CONF_GPMC_AD9_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_AD9_CONF_GPMC_AD9_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_AD9_CONF_GPMC_AD9_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_AD9_CONF_GPMC_AD9_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_AD9_CONF_GPMC_AD9_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_AD9_CONF_GPMC_AD9_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_AD9_CONF_GPMC_AD9_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_AD10 */
#define CONTROL_CONF_GPMC_AD10_CONF_GPMC_AD10_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_AD10_CONF_GPMC_AD10_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_AD10_CONF_GPMC_AD10_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_AD10_CONF_GPMC_AD10_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_AD10_CONF_GPMC_AD10_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_AD10_CONF_GPMC_AD10_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_AD10_CONF_GPMC_AD10_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_AD10_CONF_GPMC_AD10_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_AD10_CONF_GPMC_AD10_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_AD10_CONF_GPMC_AD10_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_AD10_CONF_GPMC_AD10_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_AD10_CONF_GPMC_AD10_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_AD11 */
#define CONTROL_CONF_GPMC_AD11_CONF_GPMC_AD11_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_AD11_CONF_GPMC_AD11_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_AD11_CONF_GPMC_AD11_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_AD11_CONF_GPMC_AD11_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_AD11_CONF_GPMC_AD11_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_AD11_CONF_GPMC_AD11_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_AD11_CONF_GPMC_AD11_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_AD11_CONF_GPMC_AD11_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_AD11_CONF_GPMC_AD11_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_AD11_CONF_GPMC_AD11_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_AD11_CONF_GPMC_AD11_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_AD11_CONF_GPMC_AD11_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_AD12 */
#define CONTROL_CONF_GPMC_AD12_CONF_GPMC_AD12_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_AD12_CONF_GPMC_AD12_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_AD12_CONF_GPMC_AD12_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_AD12_CONF_GPMC_AD12_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_AD12_CONF_GPMC_AD12_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_AD12_CONF_GPMC_AD12_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_AD12_CONF_GPMC_AD12_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_AD12_CONF_GPMC_AD12_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_AD12_CONF_GPMC_AD12_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_AD12_CONF_GPMC_AD12_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_AD12_CONF_GPMC_AD12_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_AD12_CONF_GPMC_AD12_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_AD13 */
#define CONTROL_CONF_GPMC_AD13_CONF_GPMC_AD13_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_AD13_CONF_GPMC_AD13_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_AD13_CONF_GPMC_AD13_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_AD13_CONF_GPMC_AD13_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_AD13_CONF_GPMC_AD13_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_AD13_CONF_GPMC_AD13_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_AD13_CONF_GPMC_AD13_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_AD13_CONF_GPMC_AD13_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_AD13_CONF_GPMC_AD13_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_AD13_CONF_GPMC_AD13_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_AD13_CONF_GPMC_AD13_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_AD13_CONF_GPMC_AD13_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_AD14 */
#define CONTROL_CONF_GPMC_AD14_CONF_GPMC_AD14_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_AD14_CONF_GPMC_AD14_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_AD14_CONF_GPMC_AD14_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_AD14_CONF_GPMC_AD14_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_AD14_CONF_GPMC_AD14_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_AD14_CONF_GPMC_AD14_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_AD14_CONF_GPMC_AD14_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_AD14_CONF_GPMC_AD14_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_AD14_CONF_GPMC_AD14_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_AD14_CONF_GPMC_AD14_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_AD14_CONF_GPMC_AD14_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_AD14_CONF_GPMC_AD14_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_AD15 */
#define CONTROL_CONF_GPMC_AD15_CONF_GPMC_AD15_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_AD15_CONF_GPMC_AD15_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_AD15_CONF_GPMC_AD15_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_AD15_CONF_GPMC_AD15_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_AD15_CONF_GPMC_AD15_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_AD15_CONF_GPMC_AD15_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_AD15_CONF_GPMC_AD15_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_AD15_CONF_GPMC_AD15_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_AD15_CONF_GPMC_AD15_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_AD15_CONF_GPMC_AD15_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_AD15_CONF_GPMC_AD15_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_AD15_CONF_GPMC_AD15_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_A0 */
#define CONTROL_CONF_GPMC_A0_CONF_GPMC_A0_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_A0_CONF_GPMC_A0_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_A0_CONF_GPMC_A0_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_A0_CONF_GPMC_A0_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_A0_CONF_GPMC_A0_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_A0_CONF_GPMC_A0_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_A0_CONF_GPMC_A0_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_A0_CONF_GPMC_A0_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_A0_CONF_GPMC_A0_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_A0_CONF_GPMC_A0_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_A0_CONF_GPMC_A0_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_A0_CONF_GPMC_A0_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_A1 */
#define CONTROL_CONF_GPMC_A1_CONF_GPMC_A1_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_A1_CONF_GPMC_A1_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_A1_CONF_GPMC_A1_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_A1_CONF_GPMC_A1_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_A1_CONF_GPMC_A1_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_A1_CONF_GPMC_A1_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_A1_CONF_GPMC_A1_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_A1_CONF_GPMC_A1_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_A1_CONF_GPMC_A1_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_A1_CONF_GPMC_A1_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_A1_CONF_GPMC_A1_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_A1_CONF_GPMC_A1_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_A2 */
#define CONTROL_CONF_GPMC_A2_CONF_GPMC_A2_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_A2_CONF_GPMC_A2_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_A2_CONF_GPMC_A2_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_A2_CONF_GPMC_A2_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_A2_CONF_GPMC_A2_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_A2_CONF_GPMC_A2_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_A2_CONF_GPMC_A2_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_A2_CONF_GPMC_A2_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_A2_CONF_GPMC_A2_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_A2_CONF_GPMC_A2_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_A2_CONF_GPMC_A2_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_A2_CONF_GPMC_A2_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_A3 */
#define CONTROL_CONF_GPMC_A3_CONF_GPMC_A3_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_A3_CONF_GPMC_A3_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_A3_CONF_GPMC_A3_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_A3_CONF_GPMC_A3_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_A3_CONF_GPMC_A3_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_A3_CONF_GPMC_A3_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_A3_CONF_GPMC_A3_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_A3_CONF_GPMC_A3_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_A3_CONF_GPMC_A3_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_A3_CONF_GPMC_A3_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_A3_CONF_GPMC_A3_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_A3_CONF_GPMC_A3_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_A4 */
#define CONTROL_CONF_GPMC_A4_CONF_GPMC_A4_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_A4_CONF_GPMC_A4_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_A4_CONF_GPMC_A4_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_A4_CONF_GPMC_A4_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_A4_CONF_GPMC_A4_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_A4_CONF_GPMC_A4_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_A4_CONF_GPMC_A4_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_A4_CONF_GPMC_A4_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_A4_CONF_GPMC_A4_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_A4_CONF_GPMC_A4_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_A4_CONF_GPMC_A4_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_A4_CONF_GPMC_A4_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_A5 */
#define CONTROL_CONF_GPMC_A5_CONF_GPMC_A5_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_A5_CONF_GPMC_A5_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_A5_CONF_GPMC_A5_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_A5_CONF_GPMC_A5_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_A5_CONF_GPMC_A5_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_A5_CONF_GPMC_A5_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_A5_CONF_GPMC_A5_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_A5_CONF_GPMC_A5_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_A5_CONF_GPMC_A5_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_A5_CONF_GPMC_A5_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_A5_CONF_GPMC_A5_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_A5_CONF_GPMC_A5_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_A6 */
#define CONTROL_CONF_GPMC_A6_CONF_GPMC_A6_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_A6_CONF_GPMC_A6_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_A6_CONF_GPMC_A6_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_A6_CONF_GPMC_A6_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_A6_CONF_GPMC_A6_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_A6_CONF_GPMC_A6_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_A6_CONF_GPMC_A6_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_A6_CONF_GPMC_A6_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_A6_CONF_GPMC_A6_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_A6_CONF_GPMC_A6_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_A6_CONF_GPMC_A6_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_A6_CONF_GPMC_A6_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_A7 */
#define CONTROL_CONF_GPMC_A7_CONF_GPMC_A7_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_A7_CONF_GPMC_A7_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_A7_CONF_GPMC_A7_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_A7_CONF_GPMC_A7_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_A7_CONF_GPMC_A7_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_A7_CONF_GPMC_A7_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_A7_CONF_GPMC_A7_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_A7_CONF_GPMC_A7_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_A7_CONF_GPMC_A7_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_A7_CONF_GPMC_A7_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_A7_CONF_GPMC_A7_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_A7_CONF_GPMC_A7_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_A8 */
#define CONTROL_CONF_GPMC_A8_CONF_GPMC_A8_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_A8_CONF_GPMC_A8_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_A8_CONF_GPMC_A8_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_A8_CONF_GPMC_A8_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_A8_CONF_GPMC_A8_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_A8_CONF_GPMC_A8_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_A8_CONF_GPMC_A8_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_A8_CONF_GPMC_A8_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_A8_CONF_GPMC_A8_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_A8_CONF_GPMC_A8_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_A8_CONF_GPMC_A8_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_A8_CONF_GPMC_A8_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_A9 */
#define CONTROL_CONF_GPMC_A9_CONF_GPMC_A9_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_A9_CONF_GPMC_A9_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_A9_CONF_GPMC_A9_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_A9_CONF_GPMC_A9_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_A9_CONF_GPMC_A9_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_A9_CONF_GPMC_A9_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_A9_CONF_GPMC_A9_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_A9_CONF_GPMC_A9_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_A9_CONF_GPMC_A9_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_A9_CONF_GPMC_A9_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_A9_CONF_GPMC_A9_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_A9_CONF_GPMC_A9_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_A10 */
#define CONTROL_CONF_GPMC_A10_CONF_GPMC_A10_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_A10_CONF_GPMC_A10_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_A10_CONF_GPMC_A10_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_A10_CONF_GPMC_A10_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_A10_CONF_GPMC_A10_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_A10_CONF_GPMC_A10_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_A10_CONF_GPMC_A10_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_A10_CONF_GPMC_A10_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_A10_CONF_GPMC_A10_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_A10_CONF_GPMC_A10_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_A10_CONF_GPMC_A10_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_A10_CONF_GPMC_A10_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_A11 */
#define CONTROL_CONF_GPMC_A11_CONF_GPMC_A11_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_A11_CONF_GPMC_A11_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_A11_CONF_GPMC_A11_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_A11_CONF_GPMC_A11_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_A11_CONF_GPMC_A11_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_A11_CONF_GPMC_A11_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_A11_CONF_GPMC_A11_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_A11_CONF_GPMC_A11_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_A11_CONF_GPMC_A11_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_A11_CONF_GPMC_A11_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_A11_CONF_GPMC_A11_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_A11_CONF_GPMC_A11_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_WAIT0 */
#define CONTROL_CONF_GPMC_WAIT0_CONF_GPMC_WAIT0_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_WAIT0_CONF_GPMC_WAIT0_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_WAIT0_CONF_GPMC_WAIT0_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_WAIT0_CONF_GPMC_WAIT0_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_WAIT0_CONF_GPMC_WAIT0_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_WAIT0_CONF_GPMC_WAIT0_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_WAIT0_CONF_GPMC_WAIT0_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_WAIT0_CONF_GPMC_WAIT0_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_WAIT0_CONF_GPMC_WAIT0_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_WAIT0_CONF_GPMC_WAIT0_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_WAIT0_CONF_GPMC_WAIT0_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_WAIT0_CONF_GPMC_WAIT0_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_WPN */
#define CONTROL_CONF_GPMC_WPN_CONF_GPMC_WPN_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_WPN_CONF_GPMC_WPN_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_WPN_CONF_GPMC_WPN_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_WPN_CONF_GPMC_WPN_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_WPN_CONF_GPMC_WPN_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_WPN_CONF_GPMC_WPN_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_WPN_CONF_GPMC_WPN_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_WPN_CONF_GPMC_WPN_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_WPN_CONF_GPMC_WPN_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_WPN_CONF_GPMC_WPN_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_WPN_CONF_GPMC_WPN_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_WPN_CONF_GPMC_WPN_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_BE1N */
#define CONTROL_CONF_GPMC_BE1N_CONF_GPMC_BE1N_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_BE1N_CONF_GPMC_BE1N_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_BE1N_CONF_GPMC_BE1N_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_BE1N_CONF_GPMC_BE1N_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_BE1N_CONF_GPMC_BE1N_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_BE1N_CONF_GPMC_BE1N_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_BE1N_CONF_GPMC_BE1N_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_BE1N_CONF_GPMC_BE1N_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_BE1N_CONF_GPMC_BE1N_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_BE1N_CONF_GPMC_BE1N_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_BE1N_CONF_GPMC_BE1N_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_BE1N_CONF_GPMC_BE1N_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_CSN0 */
#define CONTROL_CONF_GPMC_CSN0_CONF_GPMC_CSN0_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_CSN0_CONF_GPMC_CSN0_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_CSN0_CONF_GPMC_CSN0_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_CSN0_CONF_GPMC_CSN0_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_CSN0_CONF_GPMC_CSN0_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_CSN0_CONF_GPMC_CSN0_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_CSN0_CONF_GPMC_CSN0_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_CSN0_CONF_GPMC_CSN0_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_CSN0_CONF_GPMC_CSN0_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_CSN0_CONF_GPMC_CSN0_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_CSN0_CONF_GPMC_CSN0_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_CSN0_CONF_GPMC_CSN0_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_CSN1 */
#define CONTROL_CONF_GPMC_CSN1_CONF_GPMC_CSN1_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_CSN1_CONF_GPMC_CSN1_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_CSN1_CONF_GPMC_CSN1_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_CSN1_CONF_GPMC_CSN1_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_CSN1_CONF_GPMC_CSN1_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_CSN1_CONF_GPMC_CSN1_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_CSN1_CONF_GPMC_CSN1_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_CSN1_CONF_GPMC_CSN1_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_CSN1_CONF_GPMC_CSN1_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_CSN1_CONF_GPMC_CSN1_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_CSN1_CONF_GPMC_CSN1_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_CSN1_CONF_GPMC_CSN1_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_CSN2 */
#define CONTROL_CONF_GPMC_CSN2_CONF_GPMC_CSN2_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_CSN2_CONF_GPMC_CSN2_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_CSN2_CONF_GPMC_CSN2_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_CSN2_CONF_GPMC_CSN2_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_CSN2_CONF_GPMC_CSN2_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_CSN2_CONF_GPMC_CSN2_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_CSN2_CONF_GPMC_CSN2_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_CSN2_CONF_GPMC_CSN2_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_CSN2_CONF_GPMC_CSN2_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_CSN2_CONF_GPMC_CSN2_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_CSN2_CONF_GPMC_CSN2_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_CSN2_CONF_GPMC_CSN2_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_CSN3 */
#define CONTROL_CONF_GPMC_CSN3_CONF_GPMC_CSN3_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_CSN3_CONF_GPMC_CSN3_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_CSN3_CONF_GPMC_CSN3_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_CSN3_CONF_GPMC_CSN3_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_CSN3_CONF_GPMC_CSN3_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_CSN3_CONF_GPMC_CSN3_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_CSN3_CONF_GPMC_CSN3_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_CSN3_CONF_GPMC_CSN3_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_CSN3_CONF_GPMC_CSN3_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_CSN3_CONF_GPMC_CSN3_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_CSN3_CONF_GPMC_CSN3_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_CSN3_CONF_GPMC_CSN3_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_CLK */
#define CONTROL_CONF_GPMC_CLK_CONF_GPMC_CLK_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_CLK_CONF_GPMC_CLK_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_CLK_CONF_GPMC_CLK_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_CLK_CONF_GPMC_CLK_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_CLK_CONF_GPMC_CLK_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_CLK_CONF_GPMC_CLK_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_CLK_CONF_GPMC_CLK_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_CLK_CONF_GPMC_CLK_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_CLK_CONF_GPMC_CLK_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_CLK_CONF_GPMC_CLK_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_CLK_CONF_GPMC_CLK_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_CLK_CONF_GPMC_CLK_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_ADVN_ALE */
#define CONTROL_CONF_GPMC_ADVN_ALE_CONF_GPMC_ADVN_ALE_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_ADVN_ALE_CONF_GPMC_ADVN_ALE_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_ADVN_ALE_CONF_GPMC_ADVN_ALE_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_ADVN_ALE_CONF_GPMC_ADVN_ALE_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_ADVN_ALE_CONF_GPMC_ADVN_ALE_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_ADVN_ALE_CONF_GPMC_ADVN_ALE_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_ADVN_ALE_CONF_GPMC_ADVN_ALE_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_ADVN_ALE_CONF_GPMC_ADVN_ALE_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_ADVN_ALE_CONF_GPMC_ADVN_ALE_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_ADVN_ALE_CONF_GPMC_ADVN_ALE_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_ADVN_ALE_CONF_GPMC_ADVN_ALE_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_ADVN_ALE_CONF_GPMC_ADVN_ALE_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_OEN_REN */
#define CONTROL_CONF_GPMC_OEN_REN_CONF_GPMC_OEN_REN_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_OEN_REN_CONF_GPMC_OEN_REN_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_OEN_REN_CONF_GPMC_OEN_REN_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_OEN_REN_CONF_GPMC_OEN_REN_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_OEN_REN_CONF_GPMC_OEN_REN_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_OEN_REN_CONF_GPMC_OEN_REN_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_OEN_REN_CONF_GPMC_OEN_REN_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_OEN_REN_CONF_GPMC_OEN_REN_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_OEN_REN_CONF_GPMC_OEN_REN_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_OEN_REN_CONF_GPMC_OEN_REN_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_OEN_REN_CONF_GPMC_OEN_REN_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_OEN_REN_CONF_GPMC_OEN_REN_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_WEN */
#define CONTROL_CONF_GPMC_WEN_CONF_GPMC_WEN_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_WEN_CONF_GPMC_WEN_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_WEN_CONF_GPMC_WEN_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_WEN_CONF_GPMC_WEN_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_WEN_CONF_GPMC_WEN_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_WEN_CONF_GPMC_WEN_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_WEN_CONF_GPMC_WEN_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_WEN_CONF_GPMC_WEN_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_WEN_CONF_GPMC_WEN_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_WEN_CONF_GPMC_WEN_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_WEN_CONF_GPMC_WEN_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_WEN_CONF_GPMC_WEN_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_GPMC_BE0N_CLE */
#define CONTROL_CONF_GPMC_BE0N_CLE_CONF_GPMC_BE0N_CLE_MMODE   (0x00000007u)
#define CONTROL_CONF_GPMC_BE0N_CLE_CONF_GPMC_BE0N_CLE_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_GPMC_BE0N_CLE_CONF_GPMC_BE0N_CLE_PUDEN   (0x00000008u)
#define CONTROL_CONF_GPMC_BE0N_CLE_CONF_GPMC_BE0N_CLE_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_GPMC_BE0N_CLE_CONF_GPMC_BE0N_CLE_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_GPMC_BE0N_CLE_CONF_GPMC_BE0N_CLE_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_GPMC_BE0N_CLE_CONF_GPMC_BE0N_CLE_RSVD   (0x000FFF80u)
#define CONTROL_CONF_GPMC_BE0N_CLE_CONF_GPMC_BE0N_CLE_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_GPMC_BE0N_CLE_CONF_GPMC_BE0N_CLE_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_GPMC_BE0N_CLE_CONF_GPMC_BE0N_CLE_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_GPMC_BE0N_CLE_CONF_GPMC_BE0N_CLE_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_GPMC_BE0N_CLE_CONF_GPMC_BE0N_CLE_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_LCD_DATA0 */
#define CONTROL_CONF_LCD_DATA0_CONF_LCD_DATA0_MMODE   (0x00000007u)
#define CONTROL_CONF_LCD_DATA0_CONF_LCD_DATA0_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_LCD_DATA0_CONF_LCD_DATA0_PUDEN   (0x00000008u)
#define CONTROL_CONF_LCD_DATA0_CONF_LCD_DATA0_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_LCD_DATA0_CONF_LCD_DATA0_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_LCD_DATA0_CONF_LCD_DATA0_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_LCD_DATA0_CONF_LCD_DATA0_RSVD   (0x000FFF80u)
#define CONTROL_CONF_LCD_DATA0_CONF_LCD_DATA0_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_LCD_DATA0_CONF_LCD_DATA0_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_LCD_DATA0_CONF_LCD_DATA0_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_LCD_DATA0_CONF_LCD_DATA0_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_LCD_DATA0_CONF_LCD_DATA0_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_LCD_DATA1 */
#define CONTROL_CONF_LCD_DATA1_CONF_LCD_DATA1_MMODE   (0x00000007u)
#define CONTROL_CONF_LCD_DATA1_CONF_LCD_DATA1_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_LCD_DATA1_CONF_LCD_DATA1_PUDEN   (0x00000008u)
#define CONTROL_CONF_LCD_DATA1_CONF_LCD_DATA1_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_LCD_DATA1_CONF_LCD_DATA1_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_LCD_DATA1_CONF_LCD_DATA1_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_LCD_DATA1_CONF_LCD_DATA1_RSVD   (0x000FFF80u)
#define CONTROL_CONF_LCD_DATA1_CONF_LCD_DATA1_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_LCD_DATA1_CONF_LCD_DATA1_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_LCD_DATA1_CONF_LCD_DATA1_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_LCD_DATA1_CONF_LCD_DATA1_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_LCD_DATA1_CONF_LCD_DATA1_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_LCD_DATA2 */
#define CONTROL_CONF_LCD_DATA2_CONF_LCD_DATA2_MMODE   (0x00000007u)
#define CONTROL_CONF_LCD_DATA2_CONF_LCD_DATA2_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_LCD_DATA2_CONF_LCD_DATA2_PUDEN   (0x00000008u)
#define CONTROL_CONF_LCD_DATA2_CONF_LCD_DATA2_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_LCD_DATA2_CONF_LCD_DATA2_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_LCD_DATA2_CONF_LCD_DATA2_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_LCD_DATA2_CONF_LCD_DATA2_RSVD   (0x000FFF80u)
#define CONTROL_CONF_LCD_DATA2_CONF_LCD_DATA2_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_LCD_DATA2_CONF_LCD_DATA2_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_LCD_DATA2_CONF_LCD_DATA2_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_LCD_DATA2_CONF_LCD_DATA2_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_LCD_DATA2_CONF_LCD_DATA2_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_LCD_DATA3 */
#define CONTROL_CONF_LCD_DATA3_CONF_LCD_DATA3_MMODE   (0x00000007u)
#define CONTROL_CONF_LCD_DATA3_CONF_LCD_DATA3_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_LCD_DATA3_CONF_LCD_DATA3_PUDEN   (0x00000008u)
#define CONTROL_CONF_LCD_DATA3_CONF_LCD_DATA3_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_LCD_DATA3_CONF_LCD_DATA3_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_LCD_DATA3_CONF_LCD_DATA3_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_LCD_DATA3_CONF_LCD_DATA3_RSVD   (0x000FFF80u)
#define CONTROL_CONF_LCD_DATA3_CONF_LCD_DATA3_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_LCD_DATA3_CONF_LCD_DATA3_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_LCD_DATA3_CONF_LCD_DATA3_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_LCD_DATA3_CONF_LCD_DATA3_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_LCD_DATA3_CONF_LCD_DATA3_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_LCD_DATA4 */
#define CONTROL_CONF_LCD_DATA4_CONF_LCD_DATA4_MMODE   (0x00000007u)
#define CONTROL_CONF_LCD_DATA4_CONF_LCD_DATA4_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_LCD_DATA4_CONF_LCD_DATA4_PUDEN   (0x00000008u)
#define CONTROL_CONF_LCD_DATA4_CONF_LCD_DATA4_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_LCD_DATA4_CONF_LCD_DATA4_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_LCD_DATA4_CONF_LCD_DATA4_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_LCD_DATA4_CONF_LCD_DATA4_RSVD   (0x000FFF80u)
#define CONTROL_CONF_LCD_DATA4_CONF_LCD_DATA4_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_LCD_DATA4_CONF_LCD_DATA4_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_LCD_DATA4_CONF_LCD_DATA4_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_LCD_DATA4_CONF_LCD_DATA4_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_LCD_DATA4_CONF_LCD_DATA4_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_LCD_DATA5 */
#define CONTROL_CONF_LCD_DATA5_CONF_LCD_DATA5_MMODE   (0x00000007u)
#define CONTROL_CONF_LCD_DATA5_CONF_LCD_DATA5_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_LCD_DATA5_CONF_LCD_DATA5_PUDEN   (0x00000008u)
#define CONTROL_CONF_LCD_DATA5_CONF_LCD_DATA5_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_LCD_DATA5_CONF_LCD_DATA5_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_LCD_DATA5_CONF_LCD_DATA5_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_LCD_DATA5_CONF_LCD_DATA5_RSVD   (0x000FFF80u)
#define CONTROL_CONF_LCD_DATA5_CONF_LCD_DATA5_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_LCD_DATA5_CONF_LCD_DATA5_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_LCD_DATA5_CONF_LCD_DATA5_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_LCD_DATA5_CONF_LCD_DATA5_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_LCD_DATA5_CONF_LCD_DATA5_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_LCD_DATA6 */
#define CONTROL_CONF_LCD_DATA6_CONF_LCD_DATA6_MMODE   (0x00000007u)
#define CONTROL_CONF_LCD_DATA6_CONF_LCD_DATA6_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_LCD_DATA6_CONF_LCD_DATA6_PUDEN   (0x00000008u)
#define CONTROL_CONF_LCD_DATA6_CONF_LCD_DATA6_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_LCD_DATA6_CONF_LCD_DATA6_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_LCD_DATA6_CONF_LCD_DATA6_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_LCD_DATA6_CONF_LCD_DATA6_RSVD   (0x000FFF80u)
#define CONTROL_CONF_LCD_DATA6_CONF_LCD_DATA6_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_LCD_DATA6_CONF_LCD_DATA6_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_LCD_DATA6_CONF_LCD_DATA6_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_LCD_DATA6_CONF_LCD_DATA6_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_LCD_DATA6_CONF_LCD_DATA6_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_LCD_DATA7 */
#define CONTROL_CONF_LCD_DATA7_CONF_LCD_DATA7_MMODE   (0x00000007u)
#define CONTROL_CONF_LCD_DATA7_CONF_LCD_DATA7_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_LCD_DATA7_CONF_LCD_DATA7_PUDEN   (0x00000008u)
#define CONTROL_CONF_LCD_DATA7_CONF_LCD_DATA7_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_LCD_DATA7_CONF_LCD_DATA7_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_LCD_DATA7_CONF_LCD_DATA7_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_LCD_DATA7_CONF_LCD_DATA7_RSVD   (0x000FFF80u)
#define CONTROL_CONF_LCD_DATA7_CONF_LCD_DATA7_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_LCD_DATA7_CONF_LCD_DATA7_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_LCD_DATA7_CONF_LCD_DATA7_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_LCD_DATA7_CONF_LCD_DATA7_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_LCD_DATA7_CONF_LCD_DATA7_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_LCD_DATA8 */
#define CONTROL_CONF_LCD_DATA8_CONF_LCD_DATA8_MMODE   (0x00000007u)
#define CONTROL_CONF_LCD_DATA8_CONF_LCD_DATA8_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_LCD_DATA8_CONF_LCD_DATA8_PUDEN   (0x00000008u)
#define CONTROL_CONF_LCD_DATA8_CONF_LCD_DATA8_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_LCD_DATA8_CONF_LCD_DATA8_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_LCD_DATA8_CONF_LCD_DATA8_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_LCD_DATA8_CONF_LCD_DATA8_RSVD   (0x000FFF80u)
#define CONTROL_CONF_LCD_DATA8_CONF_LCD_DATA8_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_LCD_DATA8_CONF_LCD_DATA8_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_LCD_DATA8_CONF_LCD_DATA8_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_LCD_DATA8_CONF_LCD_DATA8_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_LCD_DATA8_CONF_LCD_DATA8_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_LCD_DATA9 */
#define CONTROL_CONF_LCD_DATA9_CONF_LCD_DATA9_MMODE   (0x00000007u)
#define CONTROL_CONF_LCD_DATA9_CONF_LCD_DATA9_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_LCD_DATA9_CONF_LCD_DATA9_PUDEN   (0x00000008u)
#define CONTROL_CONF_LCD_DATA9_CONF_LCD_DATA9_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_LCD_DATA9_CONF_LCD_DATA9_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_LCD_DATA9_CONF_LCD_DATA9_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_LCD_DATA9_CONF_LCD_DATA9_RSVD   (0x000FFF80u)
#define CONTROL_CONF_LCD_DATA9_CONF_LCD_DATA9_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_LCD_DATA9_CONF_LCD_DATA9_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_LCD_DATA9_CONF_LCD_DATA9_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_LCD_DATA9_CONF_LCD_DATA9_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_LCD_DATA9_CONF_LCD_DATA9_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_LCD_DATA10 */
#define CONTROL_CONF_LCD_DATA10_CONF_LCD_DATA10_MMODE   (0x00000007u)
#define CONTROL_CONF_LCD_DATA10_CONF_LCD_DATA10_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_LCD_DATA10_CONF_LCD_DATA10_PUDEN   (0x00000008u)
#define CONTROL_CONF_LCD_DATA10_CONF_LCD_DATA10_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_LCD_DATA10_CONF_LCD_DATA10_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_LCD_DATA10_CONF_LCD_DATA10_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_LCD_DATA10_CONF_LCD_DATA10_RSVD   (0x000FFF80u)
#define CONTROL_CONF_LCD_DATA10_CONF_LCD_DATA10_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_LCD_DATA10_CONF_LCD_DATA10_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_LCD_DATA10_CONF_LCD_DATA10_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_LCD_DATA10_CONF_LCD_DATA10_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_LCD_DATA10_CONF_LCD_DATA10_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_LCD_DATA11 */
#define CONTROL_CONF_LCD_DATA11_CONF_LCD_DATA11_MMODE   (0x00000007u)
#define CONTROL_CONF_LCD_DATA11_CONF_LCD_DATA11_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_LCD_DATA11_CONF_LCD_DATA11_PUDEN   (0x00000008u)
#define CONTROL_CONF_LCD_DATA11_CONF_LCD_DATA11_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_LCD_DATA11_CONF_LCD_DATA11_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_LCD_DATA11_CONF_LCD_DATA11_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_LCD_DATA11_CONF_LCD_DATA11_RSVD   (0x000FFF80u)
#define CONTROL_CONF_LCD_DATA11_CONF_LCD_DATA11_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_LCD_DATA11_CONF_LCD_DATA11_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_LCD_DATA11_CONF_LCD_DATA11_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_LCD_DATA11_CONF_LCD_DATA11_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_LCD_DATA11_CONF_LCD_DATA11_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_LCD_DATA12 */
#define CONTROL_CONF_LCD_DATA12_CONF_LCD_DATA12_MMODE   (0x00000007u)
#define CONTROL_CONF_LCD_DATA12_CONF_LCD_DATA12_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_LCD_DATA12_CONF_LCD_DATA12_PUDEN   (0x00000008u)
#define CONTROL_CONF_LCD_DATA12_CONF_LCD_DATA12_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_LCD_DATA12_CONF_LCD_DATA12_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_LCD_DATA12_CONF_LCD_DATA12_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_LCD_DATA12_CONF_LCD_DATA12_RSVD   (0x000FFF80u)
#define CONTROL_CONF_LCD_DATA12_CONF_LCD_DATA12_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_LCD_DATA12_CONF_LCD_DATA12_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_LCD_DATA12_CONF_LCD_DATA12_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_LCD_DATA12_CONF_LCD_DATA12_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_LCD_DATA12_CONF_LCD_DATA12_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_LCD_DATA13 */
#define CONTROL_CONF_LCD_DATA13_CONF_LCD_DATA13_MMODE   (0x00000007u)
#define CONTROL_CONF_LCD_DATA13_CONF_LCD_DATA13_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_LCD_DATA13_CONF_LCD_DATA13_PUDEN   (0x00000008u)
#define CONTROL_CONF_LCD_DATA13_CONF_LCD_DATA13_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_LCD_DATA13_CONF_LCD_DATA13_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_LCD_DATA13_CONF_LCD_DATA13_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_LCD_DATA13_CONF_LCD_DATA13_RSVD   (0x000FFF80u)
#define CONTROL_CONF_LCD_DATA13_CONF_LCD_DATA13_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_LCD_DATA13_CONF_LCD_DATA13_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_LCD_DATA13_CONF_LCD_DATA13_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_LCD_DATA13_CONF_LCD_DATA13_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_LCD_DATA13_CONF_LCD_DATA13_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_LCD_DATA14 */
#define CONTROL_CONF_LCD_DATA14_CONF_LCD_DATA14_MMODE   (0x00000007u)
#define CONTROL_CONF_LCD_DATA14_CONF_LCD_DATA14_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_LCD_DATA14_CONF_LCD_DATA14_PUDEN   (0x00000008u)
#define CONTROL_CONF_LCD_DATA14_CONF_LCD_DATA14_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_LCD_DATA14_CONF_LCD_DATA14_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_LCD_DATA14_CONF_LCD_DATA14_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_LCD_DATA14_CONF_LCD_DATA14_RSVD   (0x000FFF80u)
#define CONTROL_CONF_LCD_DATA14_CONF_LCD_DATA14_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_LCD_DATA14_CONF_LCD_DATA14_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_LCD_DATA14_CONF_LCD_DATA14_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_LCD_DATA14_CONF_LCD_DATA14_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_LCD_DATA14_CONF_LCD_DATA14_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_LCD_DATA15 */
#define CONTROL_CONF_LCD_DATA15_CONF_LCD_DATA15_MMODE   (0x00000007u)
#define CONTROL_CONF_LCD_DATA15_CONF_LCD_DATA15_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_LCD_DATA15_CONF_LCD_DATA15_PUDEN   (0x00000008u)
#define CONTROL_CONF_LCD_DATA15_CONF_LCD_DATA15_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_LCD_DATA15_CONF_LCD_DATA15_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_LCD_DATA15_CONF_LCD_DATA15_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_LCD_DATA15_CONF_LCD_DATA15_RSVD   (0x000FFF80u)
#define CONTROL_CONF_LCD_DATA15_CONF_LCD_DATA15_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_LCD_DATA15_CONF_LCD_DATA15_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_LCD_DATA15_CONF_LCD_DATA15_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_LCD_DATA15_CONF_LCD_DATA15_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_LCD_DATA15_CONF_LCD_DATA15_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_LCD_DATA16 */
#define CONTROL_CONF_LCD_DATA16_CONF_LCD_DATA16_MMODE   (0x00000007u)
#define CONTROL_CONF_LCD_DATA16_CONF_LCD_DATA16_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_LCD_DATA16_CONF_LCD_DATA16_PUDEN   (0x00000008u)
#define CONTROL_CONF_LCD_DATA16_CONF_LCD_DATA16_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_LCD_DATA16_CONF_LCD_DATA16_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_LCD_DATA16_CONF_LCD_DATA16_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_LCD_DATA16_CONF_LCD_DATA16_RSVD   (0x000FFF80u)
#define CONTROL_CONF_LCD_DATA16_CONF_LCD_DATA16_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_LCD_DATA16_CONF_LCD_DATA16_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_LCD_DATA16_CONF_LCD_DATA16_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_LCD_DATA16_CONF_LCD_DATA16_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_LCD_DATA16_CONF_LCD_DATA16_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_LCD_DATA17 */
#define CONTROL_CONF_LCD_DATA17_CONF_LCD_DATA17_MMODE   (0x00000007u)
#define CONTROL_CONF_LCD_DATA17_CONF_LCD_DATA17_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_LCD_DATA17_CONF_LCD_DATA17_PUDEN   (0x00000008u)
#define CONTROL_CONF_LCD_DATA17_CONF_LCD_DATA17_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_LCD_DATA17_CONF_LCD_DATA17_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_LCD_DATA17_CONF_LCD_DATA17_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_LCD_DATA17_CONF_LCD_DATA17_RSVD   (0x000FFF80u)
#define CONTROL_CONF_LCD_DATA17_CONF_LCD_DATA17_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_LCD_DATA17_CONF_LCD_DATA17_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_LCD_DATA17_CONF_LCD_DATA17_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_LCD_DATA17_CONF_LCD_DATA17_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_LCD_DATA17_CONF_LCD_DATA17_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_LCD_DATA18 */
#define CONTROL_CONF_LCD_DATA18_CONF_LCD_DATA18_MMODE   (0x00000007u)
#define CONTROL_CONF_LCD_DATA18_CONF_LCD_DATA18_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_LCD_DATA18_CONF_LCD_DATA18_PUDEN   (0x00000008u)
#define CONTROL_CONF_LCD_DATA18_CONF_LCD_DATA18_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_LCD_DATA18_CONF_LCD_DATA18_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_LCD_DATA18_CONF_LCD_DATA18_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_LCD_DATA18_CONF_LCD_DATA18_RSVD   (0x000FFF80u)
#define CONTROL_CONF_LCD_DATA18_CONF_LCD_DATA18_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_LCD_DATA18_CONF_LCD_DATA18_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_LCD_DATA18_CONF_LCD_DATA18_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_LCD_DATA18_CONF_LCD_DATA18_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_LCD_DATA18_CONF_LCD_DATA18_SLEWCTRL_SHIFT   (0x00000006u)

/* CONF_LCD_DATA19 */
#define CONTROL_CONF_LCD_DATA19_CONF_LCD_DATA19_MMODE   (0x00000007u)
#define CONTROL_CONF_LCD_DATA19_CONF_LCD_DATA19_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_LCD_DATA19_CONF_LCD_DATA19_PUDEN   (0x00000008u)
#define CONTROL_CONF_LCD_DATA19_CONF_LCD_DATA19_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_LCD_DATA19_CONF_LCD_DATA19_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_LCD_DATA19_CONF_LCD_DATA19_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_LCD_DATA19_CONF_LCD_DATA19_RSVD   (0x000FFF80u)
#define CONTROL_CONF_LCD_DATA19_CONF_LCD_DATA19_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_LCD_DATA19_CONF_LCD_DATA19_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_LCD_DATA19_CONF_LCD_DATA19_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_LCD_DATA19_CONF_LCD_DATA19_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_LCD_DATA19_CONF_LCD_DATA19_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_LCD_DATA20 */
#define CONTROL_CONF_LCD_DATA20_CONF_LCD_DATA20_MMODE   (0x00000007u)
#define CONTROL_CONF_LCD_DATA20_CONF_LCD_DATA20_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_LCD_DATA20_CONF_LCD_DATA20_PUDEN   (0x00000008u)
#define CONTROL_CONF_LCD_DATA20_CONF_LCD_DATA20_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_LCD_DATA20_CONF_LCD_DATA20_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_LCD_DATA20_CONF_LCD_DATA20_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_LCD_DATA20_CONF_LCD_DATA20_RSVD   (0x000FFF80u)
#define CONTROL_CONF_LCD_DATA20_CONF_LCD_DATA20_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_LCD_DATA20_CONF_LCD_DATA20_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_LCD_DATA20_CONF_LCD_DATA20_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_LCD_DATA20_CONF_LCD_DATA20_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_LCD_DATA20_CONF_LCD_DATA20_SLEWCTRL_SHIFT   (0x00000006u)

/* CONF_LCD_DATA21 */
#define CONTROL_CONF_LCD_DATA21_CONF_LCD_DATA21_MMODE   (0x00000007u)
#define CONTROL_CONF_LCD_DATA21_CONF_LCD_DATA21_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_LCD_DATA21_CONF_LCD_DATA21_PUDEN   (0x00000008u)
#define CONTROL_CONF_LCD_DATA21_CONF_LCD_DATA21_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_LCD_DATA21_CONF_LCD_DATA21_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_LCD_DATA21_CONF_LCD_DATA21_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_LCD_DATA21_CONF_LCD_DATA21_RSVD   (0x000FFF80u)
#define CONTROL_CONF_LCD_DATA21_CONF_LCD_DATA21_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_LCD_DATA21_CONF_LCD_DATA21_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_LCD_DATA21_CONF_LCD_DATA21_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_LCD_DATA21_CONF_LCD_DATA21_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_LCD_DATA21_CONF_LCD_DATA21_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_LCD_DATA22 */
#define CONTROL_CONF_LCD_DATA22_CONF_LCD_DATA22_MMODE   (0x00000007u)
#define CONTROL_CONF_LCD_DATA22_CONF_LCD_DATA22_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_LCD_DATA22_CONF_LCD_DATA22_PUDEN   (0x00000008u)
#define CONTROL_CONF_LCD_DATA22_CONF_LCD_DATA22_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_LCD_DATA22_CONF_LCD_DATA22_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_LCD_DATA22_CONF_LCD_DATA22_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_LCD_DATA22_CONF_LCD_DATA22_RSVD   (0x000FFF80u)
#define CONTROL_CONF_LCD_DATA22_CONF_LCD_DATA22_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_LCD_DATA22_CONF_LCD_DATA22_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_LCD_DATA22_CONF_LCD_DATA22_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_LCD_DATA22_CONF_LCD_DATA22_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_LCD_DATA22_CONF_LCD_DATA22_SLEWCTRL_SHIFT   (0x00000006u)

/* CONF_LCD_DATA20 */
#define CONTROL_CONF_LCD_DATA23_CONF_LCD_DATA23_MMODE   (0x00000007u)
#define CONTROL_CONF_LCD_DATA23_CONF_LCD_DATA23_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_LCD_DATA23_CONF_LCD_DATA23_PUDEN   (0x00000008u)
#define CONTROL_CONF_LCD_DATA23_CONF_LCD_DATA23_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_LCD_DATA23_CONF_LCD_DATA23_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_LCD_DATA23_CONF_LCD_DATA23_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_LCD_DATA23_CONF_LCD_DATA23_RSVD   (0x000FFF80u)
#define CONTROL_CONF_LCD_DATA23_CONF_LCD_DATA23_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_LCD_DATA23_CONF_LCD_DATA23_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_LCD_DATA23_CONF_LCD_DATA23_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_LCD_DATA23_CONF_LCD_DATA23_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_LCD_DATA23_CONF_LCD_DATA23_SLEWCTRL_SHIFT   (0x00000006u)









/* CONF_LCD_VSYNC */
#define CONTROL_CONF_LCD_VSYNC_CONF_LCD_VSYNC_MMODE   (0x00000007u)
#define CONTROL_CONF_LCD_VSYNC_CONF_LCD_VSYNC_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_LCD_VSYNC_CONF_LCD_VSYNC_PUDEN   (0x00000008u)
#define CONTROL_CONF_LCD_VSYNC_CONF_LCD_VSYNC_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_LCD_VSYNC_CONF_LCD_VSYNC_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_LCD_VSYNC_CONF_LCD_VSYNC_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_LCD_VSYNC_CONF_LCD_VSYNC_RSVD   (0x000FFF80u)
#define CONTROL_CONF_LCD_VSYNC_CONF_LCD_VSYNC_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_LCD_VSYNC_CONF_LCD_VSYNC_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_LCD_VSYNC_CONF_LCD_VSYNC_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_LCD_VSYNC_CONF_LCD_VSYNC_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_LCD_VSYNC_CONF_LCD_VSYNC_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_LCD_HSYNC */
#define CONTROL_CONF_LCD_HSYNC_CONF_LCD_HSYNC_MMODE   (0x00000007u)
#define CONTROL_CONF_LCD_HSYNC_CONF_LCD_HSYNC_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_LCD_HSYNC_CONF_LCD_HSYNC_PUDEN   (0x00000008u)
#define CONTROL_CONF_LCD_HSYNC_CONF_LCD_HSYNC_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_LCD_HSYNC_CONF_LCD_HSYNC_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_LCD_HSYNC_CONF_LCD_HSYNC_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_LCD_HSYNC_CONF_LCD_HSYNC_RSVD   (0x000FFF80u)
#define CONTROL_CONF_LCD_HSYNC_CONF_LCD_HSYNC_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_LCD_HSYNC_CONF_LCD_HSYNC_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_LCD_HSYNC_CONF_LCD_HSYNC_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_LCD_HSYNC_CONF_LCD_HSYNC_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_LCD_HSYNC_CONF_LCD_HSYNC_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_LCD_PCLK */
#define CONTROL_CONF_LCD_PCLK_CONF_LCD_PCLK_MMODE   (0x00000007u)
#define CONTROL_CONF_LCD_PCLK_CONF_LCD_PCLK_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_LCD_PCLK_CONF_LCD_PCLK_PUDEN   (0x00000008u)
#define CONTROL_CONF_LCD_PCLK_CONF_LCD_PCLK_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_LCD_PCLK_CONF_LCD_PCLK_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_LCD_PCLK_CONF_LCD_PCLK_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_LCD_PCLK_CONF_LCD_PCLK_RSVD   (0x000FFF80u)
#define CONTROL_CONF_LCD_PCLK_CONF_LCD_PCLK_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_LCD_PCLK_CONF_LCD_PCLK_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_LCD_PCLK_CONF_LCD_PCLK_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_LCD_PCLK_CONF_LCD_PCLK_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_LCD_PCLK_CONF_LCD_PCLK_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_LCD_AC_BIAS_EN */
#define CONTROL_CONF_LCD_AC_BIAS_EN_CONF_LCD_AC_BIAS_EN_MMODE   (0x00000007u)
#define CONTROL_CONF_LCD_AC_BIAS_EN_CONF_LCD_AC_BIAS_EN_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_LCD_AC_BIAS_EN_CONF_LCD_AC_BIAS_EN_PUDEN   (0x00000008u)
#define CONTROL_CONF_LCD_AC_BIAS_EN_CONF_LCD_AC_BIAS_EN_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_LCD_AC_BIAS_EN_CONF_LCD_AC_BIAS_EN_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_LCD_AC_BIAS_EN_CONF_LCD_AC_BIAS_EN_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_LCD_AC_BIAS_EN_CONF_LCD_AC_BIAS_EN_RSVD   (0x000FFF80u)
#define CONTROL_CONF_LCD_AC_BIAS_EN_CONF_LCD_AC_BIAS_EN_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_LCD_AC_BIAS_EN_CONF_LCD_AC_BIAS_EN_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_LCD_AC_BIAS_EN_CONF_LCD_AC_BIAS_EN_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_LCD_AC_BIAS_EN_CONF_LCD_AC_BIAS_EN_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_LCD_AC_BIAS_EN_CONF_LCD_AC_BIAS_EN_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_MMC0_DAT3 */
#define CONTROL_CONF_MMC0_DAT3_CONF_MMC0_DAT3_MMODE   (0x00000007u)
#define CONTROL_CONF_MMC0_DAT3_CONF_MMC0_DAT3_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MMC0_DAT3_CONF_MMC0_DAT3_PUDEN   (0x00000008u)
#define CONTROL_CONF_MMC0_DAT3_CONF_MMC0_DAT3_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MMC0_DAT3_CONF_MMC0_DAT3_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MMC0_DAT3_CONF_MMC0_DAT3_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MMC0_DAT3_CONF_MMC0_DAT3_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MMC0_DAT3_CONF_MMC0_DAT3_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MMC0_DAT3_CONF_MMC0_DAT3_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MMC0_DAT3_CONF_MMC0_DAT3_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MMC0_DAT3_CONF_MMC0_DAT3_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MMC0_DAT3_CONF_MMC0_DAT3_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_MMC0_DAT2 */
#define CONTROL_CONF_MMC0_DAT2_CONF_MMC0_DAT2_MMODE   (0x00000007u)
#define CONTROL_CONF_MMC0_DAT2_CONF_MMC0_DAT2_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MMC0_DAT2_CONF_MMC0_DAT2_PUDEN   (0x00000008u)
#define CONTROL_CONF_MMC0_DAT2_CONF_MMC0_DAT2_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MMC0_DAT2_CONF_MMC0_DAT2_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MMC0_DAT2_CONF_MMC0_DAT2_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MMC0_DAT2_CONF_MMC0_DAT2_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MMC0_DAT2_CONF_MMC0_DAT2_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MMC0_DAT2_CONF_MMC0_DAT2_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MMC0_DAT2_CONF_MMC0_DAT2_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MMC0_DAT2_CONF_MMC0_DAT2_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MMC0_DAT2_CONF_MMC0_DAT2_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_MMC0_DAT1 */
#define CONTROL_CONF_MMC0_DAT1_CONF_MMC0_DAT1_MMODE   (0x00000007u)
#define CONTROL_CONF_MMC0_DAT1_CONF_MMC0_DAT1_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MMC0_DAT1_CONF_MMC0_DAT1_PUDEN   (0x00000008u)
#define CONTROL_CONF_MMC0_DAT1_CONF_MMC0_DAT1_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MMC0_DAT1_CONF_MMC0_DAT1_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MMC0_DAT1_CONF_MMC0_DAT1_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MMC0_DAT1_CONF_MMC0_DAT1_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MMC0_DAT1_CONF_MMC0_DAT1_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MMC0_DAT1_CONF_MMC0_DAT1_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MMC0_DAT1_CONF_MMC0_DAT1_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MMC0_DAT1_CONF_MMC0_DAT1_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MMC0_DAT1_CONF_MMC0_DAT1_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_MMC0_DAT0 */
#define CONTROL_CONF_MMC0_DAT0_CONF_MMC0_DAT0_MMODE   (0x00000007u)
#define CONTROL_CONF_MMC0_DAT0_CONF_MMC0_DAT0_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MMC0_DAT0_CONF_MMC0_DAT0_PUDEN   (0x00000008u)
#define CONTROL_CONF_MMC0_DAT0_CONF_MMC0_DAT0_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MMC0_DAT0_CONF_MMC0_DAT0_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MMC0_DAT0_CONF_MMC0_DAT0_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MMC0_DAT0_CONF_MMC0_DAT0_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MMC0_DAT0_CONF_MMC0_DAT0_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MMC0_DAT0_CONF_MMC0_DAT0_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MMC0_DAT0_CONF_MMC0_DAT0_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MMC0_DAT0_CONF_MMC0_DAT0_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MMC0_DAT0_CONF_MMC0_DAT0_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_MMC0_CLK */
#define CONTROL_CONF_MMC0_CLK_CONF_MMC0_CLK_MMODE   (0x00000007u)
#define CONTROL_CONF_MMC0_CLK_CONF_MMC0_CLK_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MMC0_CLK_CONF_MMC0_CLK_PUDEN   (0x00000008u)
#define CONTROL_CONF_MMC0_CLK_CONF_MMC0_CLK_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MMC0_CLK_CONF_MMC0_CLK_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MMC0_CLK_CONF_MMC0_CLK_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MMC0_CLK_CONF_MMC0_CLK_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MMC0_CLK_CONF_MMC0_CLK_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MMC0_CLK_CONF_MMC0_CLK_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MMC0_CLK_CONF_MMC0_CLK_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MMC0_CLK_CONF_MMC0_CLK_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MMC0_CLK_CONF_MMC0_CLK_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_MMC0_CMD */
#define CONTROL_CONF_MMC0_CMD_CONF_MMC0_CMD_MMODE   (0x00000007u)
#define CONTROL_CONF_MMC0_CMD_CONF_MMC0_CMD_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MMC0_CMD_CONF_MMC0_CMD_PUDEN   (0x00000008u)
#define CONTROL_CONF_MMC0_CMD_CONF_MMC0_CMD_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MMC0_CMD_CONF_MMC0_CMD_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MMC0_CMD_CONF_MMC0_CMD_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MMC0_CMD_CONF_MMC0_CMD_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MMC0_CMD_CONF_MMC0_CMD_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MMC0_CMD_CONF_MMC0_CMD_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MMC0_CMD_CONF_MMC0_CMD_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MMC0_CMD_CONF_MMC0_CMD_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MMC0_CMD_CONF_MMC0_CMD_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_MII1_COL */
#define CONTROL_CONF_MII1_COL_CONF_MII1_COL_MMODE   (0x00000007u)
#define CONTROL_CONF_MII1_COL_CONF_MII1_COL_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MII1_COL_CONF_MII1_COL_PUDEN   (0x00000008u)
#define CONTROL_CONF_MII1_COL_CONF_MII1_COL_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MII1_COL_CONF_MII1_COL_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MII1_COL_CONF_MII1_COL_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MII1_COL_CONF_MII1_COL_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MII1_COL_CONF_MII1_COL_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MII1_COL_CONF_MII1_COL_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MII1_COL_CONF_MII1_COL_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MII1_COL_CONF_MII1_COL_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MII1_COL_CONF_MII1_COL_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_MII1_CRS */
#define CONTROL_CONF_MII1_CRS_CONF_MII1_CRS_MMODE   (0x00000007u)
#define CONTROL_CONF_MII1_CRS_CONF_MII1_CRS_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MII1_CRS_CONF_MII1_CRS_PUDEN   (0x00000008u)
#define CONTROL_CONF_MII1_CRS_CONF_MII1_CRS_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MII1_CRS_CONF_MII1_CRS_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MII1_CRS_CONF_MII1_CRS_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MII1_CRS_CONF_MII1_CRS_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MII1_CRS_CONF_MII1_CRS_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MII1_CRS_CONF_MII1_CRS_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MII1_CRS_CONF_MII1_CRS_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MII1_CRS_CONF_MII1_CRS_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MII1_CRS_CONF_MII1_CRS_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_MII1_RXERR */
#define CONTROL_CONF_MII1_RXERR_CONF_MII1_RXERR_MMODE   (0x00000007u)
#define CONTROL_CONF_MII1_RXERR_CONF_MII1_RXERR_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MII1_RXERR_CONF_MII1_RXERR_PUDEN   (0x00000008u)
#define CONTROL_CONF_MII1_RXERR_CONF_MII1_RXERR_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MII1_RXERR_CONF_MII1_RXERR_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MII1_RXERR_CONF_MII1_RXERR_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MII1_RXERR_CONF_MII1_RXERR_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MII1_RXERR_CONF_MII1_RXERR_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MII1_RXERR_CONF_MII1_RXERR_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MII1_RXERR_CONF_MII1_RXERR_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MII1_RXERR_CONF_MII1_RXERR_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MII1_RXERR_CONF_MII1_RXERR_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_MII1_TXEN */
#define CONTROL_CONF_MII1_TXEN_CONF_MII1_TXEN_MMODE   (0x00000007u)
#define CONTROL_CONF_MII1_TXEN_CONF_MII1_TXEN_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MII1_TXEN_CONF_MII1_TXEN_PUDEN   (0x00000008u)
#define CONTROL_CONF_MII1_TXEN_CONF_MII1_TXEN_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MII1_TXEN_CONF_MII1_TXEN_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MII1_TXEN_CONF_MII1_TXEN_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MII1_TXEN_CONF_MII1_TXEN_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MII1_TXEN_CONF_MII1_TXEN_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MII1_TXEN_CONF_MII1_TXEN_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MII1_TXEN_CONF_MII1_TXEN_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MII1_TXEN_CONF_MII1_TXEN_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MII1_TXEN_CONF_MII1_TXEN_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_MII1_RXDV */
#define CONTROL_CONF_MII1_RXDV_CONF_MII1_RXDV_MMODE   (0x00000007u)
#define CONTROL_CONF_MII1_RXDV_CONF_MII1_RXDV_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MII1_RXDV_CONF_MII1_RXDV_PUDEN   (0x00000008u)
#define CONTROL_CONF_MII1_RXDV_CONF_MII1_RXDV_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MII1_RXDV_CONF_MII1_RXDV_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MII1_RXDV_CONF_MII1_RXDV_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MII1_RXDV_CONF_MII1_RXDV_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MII1_RXDV_CONF_MII1_RXDV_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MII1_RXDV_CONF_MII1_RXDV_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MII1_RXDV_CONF_MII1_RXDV_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MII1_RXDV_CONF_MII1_RXDV_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MII1_RXDV_CONF_MII1_RXDV_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_MII1_TXD3 */
#define CONTROL_CONF_MII1_TXD3_CONF_MII1_TXD3_MMODE   (0x00000007u)
#define CONTROL_CONF_MII1_TXD3_CONF_MII1_TXD3_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MII1_TXD3_CONF_MII1_TXD3_PUDEN   (0x00000008u)
#define CONTROL_CONF_MII1_TXD3_CONF_MII1_TXD3_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MII1_TXD3_CONF_MII1_TXD3_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MII1_TXD3_CONF_MII1_TXD3_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MII1_TXD3_CONF_MII1_TXD3_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MII1_TXD3_CONF_MII1_TXD3_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MII1_TXD3_CONF_MII1_TXD3_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MII1_TXD3_CONF_MII1_TXD3_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MII1_TXD3_CONF_MII1_TXD3_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MII1_TXD3_CONF_MII1_TXD3_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_MII1_TXD2 */
#define CONTROL_CONF_MII1_TXD2_CONF_MII1_TXD2_MMODE   (0x00000007u)
#define CONTROL_CONF_MII1_TXD2_CONF_MII1_TXD2_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MII1_TXD2_CONF_MII1_TXD2_PUDEN   (0x00000008u)
#define CONTROL_CONF_MII1_TXD2_CONF_MII1_TXD2_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MII1_TXD2_CONF_MII1_TXD2_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MII1_TXD2_CONF_MII1_TXD2_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MII1_TXD2_CONF_MII1_TXD2_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MII1_TXD2_CONF_MII1_TXD2_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MII1_TXD2_CONF_MII1_TXD2_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MII1_TXD2_CONF_MII1_TXD2_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MII1_TXD2_CONF_MII1_TXD2_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MII1_TXD2_CONF_MII1_TXD2_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_MII1_TXD1 */
#define CONTROL_CONF_MII1_TXD1_CONF_MII1_TXD1_MMODE   (0x00000007u)
#define CONTROL_CONF_MII1_TXD1_CONF_MII1_TXD1_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MII1_TXD1_CONF_MII1_TXD1_PUDEN   (0x00000008u)
#define CONTROL_CONF_MII1_TXD1_CONF_MII1_TXD1_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MII1_TXD1_CONF_MII1_TXD1_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MII1_TXD1_CONF_MII1_TXD1_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MII1_TXD1_CONF_MII1_TXD1_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MII1_TXD1_CONF_MII1_TXD1_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MII1_TXD1_CONF_MII1_TXD1_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MII1_TXD1_CONF_MII1_TXD1_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MII1_TXD1_CONF_MII1_TXD1_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MII1_TXD1_CONF_MII1_TXD1_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_MII1_TXD0 */
#define CONTROL_CONF_MII1_TXD0_CONF_MII1_TXD0_MMODE   (0x00000007u)
#define CONTROL_CONF_MII1_TXD0_CONF_MII1_TXD0_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MII1_TXD0_CONF_MII1_TXD0_PUDEN   (0x00000008u)
#define CONTROL_CONF_MII1_TXD0_CONF_MII1_TXD0_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MII1_TXD0_CONF_MII1_TXD0_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MII1_TXD0_CONF_MII1_TXD0_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MII1_TXD0_CONF_MII1_TXD0_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MII1_TXD0_CONF_MII1_TXD0_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MII1_TXD0_CONF_MII1_TXD0_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MII1_TXD0_CONF_MII1_TXD0_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MII1_TXD0_CONF_MII1_TXD0_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MII1_TXD0_CONF_MII1_TXD0_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_MII1_TXCLK */
#define CONTROL_CONF_MII1_TXCLK_CONF_MII1_TXCLK_MMODE   (0x00000007u)
#define CONTROL_CONF_MII1_TXCLK_CONF_MII1_TXCLK_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MII1_TXCLK_CONF_MII1_TXCLK_PUDEN   (0x00000008u)
#define CONTROL_CONF_MII1_TXCLK_CONF_MII1_TXCLK_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MII1_TXCLK_CONF_MII1_TXCLK_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MII1_TXCLK_CONF_MII1_TXCLK_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MII1_TXCLK_CONF_MII1_TXCLK_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MII1_TXCLK_CONF_MII1_TXCLK_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MII1_TXCLK_CONF_MII1_TXCLK_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MII1_TXCLK_CONF_MII1_TXCLK_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MII1_TXCLK_CONF_MII1_TXCLK_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MII1_TXCLK_CONF_MII1_TXCLK_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_MII1_RXCLK */
#define CONTROL_CONF_MII1_RXCLK_CONF_MII1_RXCLK_MMODE   (0x00000007u)
#define CONTROL_CONF_MII1_RXCLK_CONF_MII1_RXCLK_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MII1_RXCLK_CONF_MII1_RXCLK_PUDEN   (0x00000008u)
#define CONTROL_CONF_MII1_RXCLK_CONF_MII1_RXCLK_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MII1_RXCLK_CONF_MII1_RXCLK_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MII1_RXCLK_CONF_MII1_RXCLK_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MII1_RXCLK_CONF_MII1_RXCLK_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MII1_RXCLK_CONF_MII1_RXCLK_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MII1_RXCLK_CONF_MII1_RXCLK_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MII1_RXCLK_CONF_MII1_RXCLK_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MII1_RXCLK_CONF_MII1_RXCLK_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MII1_RXCLK_CONF_MII1_RXCLK_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_MII1_RXD3 */
#define CONTROL_CONF_MII1_RXD3_CONF_MII1_RXD3_MMODE   (0x00000007u)
#define CONTROL_CONF_MII1_RXD3_CONF_MII1_RXD3_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MII1_RXD3_CONF_MII1_RXD3_PUDEN   (0x00000008u)
#define CONTROL_CONF_MII1_RXD3_CONF_MII1_RXD3_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MII1_RXD3_CONF_MII1_RXD3_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MII1_RXD3_CONF_MII1_RXD3_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MII1_RXD3_CONF_MII1_RXD3_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MII1_RXD3_CONF_MII1_RXD3_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MII1_RXD3_CONF_MII1_RXD3_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MII1_RXD3_CONF_MII1_RXD3_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MII1_RXD3_CONF_MII1_RXD3_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MII1_RXD3_CONF_MII1_RXD3_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_MII1_RXD2 */
#define CONTROL_CONF_MII1_RXD2_CONF_MII1_RXD2_MMODE   (0x00000007u)
#define CONTROL_CONF_MII1_RXD2_CONF_MII1_RXD2_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MII1_RXD2_CONF_MII1_RXD2_PUDEN   (0x00000008u)
#define CONTROL_CONF_MII1_RXD2_CONF_MII1_RXD2_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MII1_RXD2_CONF_MII1_RXD2_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MII1_RXD2_CONF_MII1_RXD2_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MII1_RXD2_CONF_MII1_RXD2_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MII1_RXD2_CONF_MII1_RXD2_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MII1_RXD2_CONF_MII1_RXD2_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MII1_RXD2_CONF_MII1_RXD2_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MII1_RXD2_CONF_MII1_RXD2_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MII1_RXD2_CONF_MII1_RXD2_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_MII1_RXD1 */
#define CONTROL_CONF_MII1_RXD1_CONF_MII1_RXD1_MMODE   (0x00000007u)
#define CONTROL_CONF_MII1_RXD1_CONF_MII1_RXD1_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MII1_RXD1_CONF_MII1_RXD1_PUDEN   (0x00000008u)
#define CONTROL_CONF_MII1_RXD1_CONF_MII1_RXD1_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MII1_RXD1_CONF_MII1_RXD1_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MII1_RXD1_CONF_MII1_RXD1_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MII1_RXD1_CONF_MII1_RXD1_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MII1_RXD1_CONF_MII1_RXD1_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MII1_RXD1_CONF_MII1_RXD1_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MII1_RXD1_CONF_MII1_RXD1_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MII1_RXD1_CONF_MII1_RXD1_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MII1_RXD1_CONF_MII1_RXD1_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_MII1_RXD0 */
#define CONTROL_CONF_MII1_RXD0_CONF_MII1_RXD0_MMODE   (0x00000007u)
#define CONTROL_CONF_MII1_RXD0_CONF_MII1_RXD0_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MII1_RXD0_CONF_MII1_RXD0_PUDEN   (0x00000008u)
#define CONTROL_CONF_MII1_RXD0_CONF_MII1_RXD0_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MII1_RXD0_CONF_MII1_RXD0_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MII1_RXD0_CONF_MII1_RXD0_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MII1_RXD0_CONF_MII1_RXD0_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MII1_RXD0_CONF_MII1_RXD0_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MII1_RXD0_CONF_MII1_RXD0_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MII1_RXD0_CONF_MII1_RXD0_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MII1_RXD0_CONF_MII1_RXD0_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MII1_RXD0_CONF_MII1_RXD0_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_RMII1_REFCLK */
#define CONTROL_CONF_RMII1_REFCLK_CONF_RMII1_REFCLK_MMODE   (0x00000007u)
#define CONTROL_CONF_RMII1_REFCLK_CONF_RMII1_REFCLK_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_RMII1_REFCLK_CONF_RMII1_REFCLK_PUDEN   (0x00000008u)
#define CONTROL_CONF_RMII1_REFCLK_CONF_RMII1_REFCLK_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_RMII1_REFCLK_CONF_RMII1_REFCLK_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_RMII1_REFCLK_CONF_RMII1_REFCLK_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_RMII1_REFCLK_CONF_RMII1_REFCLK_RSVD   (0x000FFF80u)
#define CONTROL_CONF_RMII1_REFCLK_CONF_RMII1_REFCLK_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_RMII1_REFCLK_CONF_RMII1_REFCLK_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_RMII1_REFCLK_CONF_RMII1_REFCLK_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_RMII1_REFCLK_CONF_RMII1_REFCLK_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_RMII1_REFCLK_CONF_RMII1_REFCLK_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_MDIO_DATA */
#define CONTROL_CONF_MDIO_DATA_CONF_MDIO_DATA_MMODE   (0x00000007u)
#define CONTROL_CONF_MDIO_DATA_CONF_MDIO_DATA_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MDIO_DATA_CONF_MDIO_DATA_PUDEN   (0x00000008u)
#define CONTROL_CONF_MDIO_DATA_CONF_MDIO_DATA_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MDIO_DATA_CONF_MDIO_DATA_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MDIO_DATA_CONF_MDIO_DATA_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MDIO_DATA_CONF_MDIO_DATA_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MDIO_DATA_CONF_MDIO_DATA_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MDIO_DATA_CONF_MDIO_DATA_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MDIO_DATA_CONF_MDIO_DATA_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MDIO_DATA_CONF_MDIO_DATA_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MDIO_DATA_CONF_MDIO_DATA_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_MDIO_CLK */
#define CONTROL_CONF_MDIO_CLK_CONF_MDIO_CLK_MMODE   (0x00000007u)
#define CONTROL_CONF_MDIO_CLK_CONF_MDIO_CLK_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MDIO_CLK_CONF_MDIO_CLK_PUDEN   (0x00000008u)
#define CONTROL_CONF_MDIO_CLK_CONF_MDIO_CLK_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MDIO_CLK_CONF_MDIO_CLK_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MDIO_CLK_CONF_MDIO_CLK_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MDIO_CLK_CONF_MDIO_CLK_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MDIO_CLK_CONF_MDIO_CLK_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MDIO_CLK_CONF_MDIO_CLK_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MDIO_CLK_CONF_MDIO_CLK_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MDIO_CLK_CONF_MDIO_CLK_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MDIO_CLK_CONF_MDIO_CLK_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_SPI0_SCLK */
#define CONTROL_CONF_SPI0_SCLK_CONF_SPI0_SCLK_MMODE   (0x00000007u)
#define CONTROL_CONF_SPI0_SCLK_CONF_SPI0_SCLK_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_SPI0_SCLK_CONF_SPI0_SCLK_PUDEN   (0x00000008u)
#define CONTROL_CONF_SPI0_SCLK_CONF_SPI0_SCLK_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_SPI0_SCLK_CONF_SPI0_SCLK_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_SPI0_SCLK_CONF_SPI0_SCLK_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_SPI0_SCLK_CONF_SPI0_SCLK_RSVD   (0x000FFF80u)
#define CONTROL_CONF_SPI0_SCLK_CONF_SPI0_SCLK_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_SPI0_SCLK_CONF_SPI0_SCLK_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_SPI0_SCLK_CONF_SPI0_SCLK_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_SPI0_SCLK_CONF_SPI0_SCLK_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_SPI0_SCLK_CONF_SPI0_SCLK_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_SPI0_D0 */
#define CONTROL_CONF_SPI0_D0_CONF_SPI0_D0_MMODE   (0x00000007u)
#define CONTROL_CONF_SPI0_D0_CONF_SPI0_D0_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_SPI0_D0_CONF_SPI0_D0_PUDEN   (0x00000008u)
#define CONTROL_CONF_SPI0_D0_CONF_SPI0_D0_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_SPI0_D0_CONF_SPI0_D0_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_SPI0_D0_CONF_SPI0_D0_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_SPI0_D0_CONF_SPI0_D0_RSVD   (0x000FFF80u)
#define CONTROL_CONF_SPI0_D0_CONF_SPI0_D0_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_SPI0_D0_CONF_SPI0_D0_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_SPI0_D0_CONF_SPI0_D0_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_SPI0_D0_CONF_SPI0_D0_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_SPI0_D0_CONF_SPI0_D0_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_SPI0_D1 */
#define CONTROL_CONF_SPI0_D1_CONF_SPI0_D1_MMODE   (0x00000007u)
#define CONTROL_CONF_SPI0_D1_CONF_SPI0_D1_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_SPI0_D1_CONF_SPI0_D1_PUDEN   (0x00000008u)
#define CONTROL_CONF_SPI0_D1_CONF_SPI0_D1_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_SPI0_D1_CONF_SPI0_D1_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_SPI0_D1_CONF_SPI0_D1_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_SPI0_D1_CONF_SPI0_D1_RSVD   (0x000FFF80u)
#define CONTROL_CONF_SPI0_D1_CONF_SPI0_D1_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_SPI0_D1_CONF_SPI0_D1_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_SPI0_D1_CONF_SPI0_D1_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_SPI0_D1_CONF_SPI0_D1_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_SPI0_D1_CONF_SPI0_D1_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_SPI0_CS0 */
#define CONTROL_CONF_SPI0_CS0_CONF_SPI0_CS0_MMODE   (0x00000007u)
#define CONTROL_CONF_SPI0_CS0_CONF_SPI0_CS0_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_SPI0_CS0_CONF_SPI0_CS0_PUDEN   (0x00000008u)
#define CONTROL_CONF_SPI0_CS0_CONF_SPI0_CS0_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_SPI0_CS0_CONF_SPI0_CS0_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_SPI0_CS0_CONF_SPI0_CS0_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_SPI0_CS0_CONF_SPI0_CS0_RSVD   (0x000FFF80u)
#define CONTROL_CONF_SPI0_CS0_CONF_SPI0_CS0_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_SPI0_CS0_CONF_SPI0_CS0_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_SPI0_CS0_CONF_SPI0_CS0_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_SPI0_CS0_CONF_SPI0_CS0_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_SPI0_CS0_CONF_SPI0_CS0_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_SPI0_CS1 */
#define CONTROL_CONF_SPI0_CS1_CONF_SPI0_CS1_MMODE   (0x00000007u)
#define CONTROL_CONF_SPI0_CS1_CONF_SPI0_CS1_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_SPI0_CS1_CONF_SPI0_CS1_PUDEN   (0x00000008u)
#define CONTROL_CONF_SPI0_CS1_CONF_SPI0_CS1_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_SPI0_CS1_CONF_SPI0_CS1_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_SPI0_CS1_CONF_SPI0_CS1_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_SPI0_CS1_CONF_SPI0_CS1_RSVD   (0x000FFF80u)
#define CONTROL_CONF_SPI0_CS1_CONF_SPI0_CS1_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_SPI0_CS1_CONF_SPI0_CS1_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_SPI0_CS1_CONF_SPI0_CS1_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_SPI0_CS1_CONF_SPI0_CS1_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_SPI0_CS1_CONF_SPI0_CS1_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_ECAP0_IN_PWM0_OUT */
#define CONTROL_CONF_ECAP0_IN_PWM0_OUT_CONF_ECAP0_IN_PWM0_OUT_MMODE   (0x00000007u)
#define CONTROL_CONF_ECAP0_IN_PWM0_OUT_CONF_ECAP0_IN_PWM0_OUT_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_ECAP0_IN_PWM0_OUT_CONF_ECAP0_IN_PWM0_OUT_PUDEN   (0x00000008u)
#define CONTROL_CONF_ECAP0_IN_PWM0_OUT_CONF_ECAP0_IN_PWM0_OUT_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_ECAP0_IN_PWM0_OUT_CONF_ECAP0_IN_PWM0_OUT_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_ECAP0_IN_PWM0_OUT_CONF_ECAP0_IN_PWM0_OUT_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_ECAP0_IN_PWM0_OUT_CONF_ECAP0_IN_PWM0_OUT_RSVD   (0x000FFF80u)
#define CONTROL_CONF_ECAP0_IN_PWM0_OUT_CONF_ECAP0_IN_PWM0_OUT_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_ECAP0_IN_PWM0_OUT_CONF_ECAP0_IN_PWM0_OUT_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_ECAP0_IN_PWM0_OUT_CONF_ECAP0_IN_PWM0_OUT_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_ECAP0_IN_PWM0_OUT_CONF_ECAP0_IN_PWM0_OUT_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_ECAP0_IN_PWM0_OUT_CONF_ECAP0_IN_PWM0_OUT_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_UART0_CTSN */
#define CONTROL_CONF_UART0_CTSN_CONF_UART0_CTSN_MMODE   (0x00000007u)
#define CONTROL_CONF_UART0_CTSN_CONF_UART0_CTSN_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_UART0_CTSN_CONF_UART0_CTSN_PUDEN   (0x00000008u)
#define CONTROL_CONF_UART0_CTSN_CONF_UART0_CTSN_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_UART0_CTSN_CONF_UART0_CTSN_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_UART0_CTSN_CONF_UART0_CTSN_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_UART0_CTSN_CONF_UART0_CTSN_RSVD   (0x000FFF80u)
#define CONTROL_CONF_UART0_CTSN_CONF_UART0_CTSN_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_UART0_CTSN_CONF_UART0_CTSN_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_UART0_CTSN_CONF_UART0_CTSN_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_UART0_CTSN_CONF_UART0_CTSN_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_UART0_CTSN_CONF_UART0_CTSN_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_UART0_RTSN */
#define CONTROL_CONF_UART0_RTSN_CONF_UART0_RTSN_MMODE   (0x00000007u)
#define CONTROL_CONF_UART0_RTSN_CONF_UART0_RTSN_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_UART0_RTSN_CONF_UART0_RTSN_PUDEN   (0x00000008u)
#define CONTROL_CONF_UART0_RTSN_CONF_UART0_RTSN_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_UART0_RTSN_CONF_UART0_RTSN_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_UART0_RTSN_CONF_UART0_RTSN_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_UART0_RTSN_CONF_UART0_RTSN_RSVD   (0x000FFF80u)
#define CONTROL_CONF_UART0_RTSN_CONF_UART0_RTSN_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_UART0_RTSN_CONF_UART0_RTSN_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_UART0_RTSN_CONF_UART0_RTSN_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_UART0_RTSN_CONF_UART0_RTSN_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_UART0_RTSN_CONF_UART0_RTSN_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_UART0_RXD */
#define CONTROL_CONF_UART0_RXD_CONF_UART0_RXD_MMODE   (0x00000007u)
#define CONTROL_CONF_UART0_RXD_CONF_UART0_RXD_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_UART0_RXD_CONF_UART0_RXD_PUDEN   (0x00000008u)
#define CONTROL_CONF_UART0_RXD_CONF_UART0_RXD_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_UART0_RXD_CONF_UART0_RXD_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_UART0_RXD_CONF_UART0_RXD_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_UART0_RXD_CONF_UART0_RXD_RSVD   (0x000FFF80u)
#define CONTROL_CONF_UART0_RXD_CONF_UART0_RXD_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_UART0_RXD_CONF_UART0_RXD_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_UART0_RXD_CONF_UART0_RXD_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_UART0_RXD_CONF_UART0_RXD_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_UART0_RXD_CONF_UART0_RXD_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_UART0_TXD */
#define CONTROL_CONF_UART0_TXD_CONF_UART0_TXD_MMODE   (0x00000007u)
#define CONTROL_CONF_UART0_TXD_CONF_UART0_TXD_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_UART0_TXD_CONF_UART0_TXD_PUDEN   (0x00000008u)
#define CONTROL_CONF_UART0_TXD_CONF_UART0_TXD_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_UART0_TXD_CONF_UART0_TXD_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_UART0_TXD_CONF_UART0_TXD_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_UART0_TXD_CONF_UART0_TXD_RSVD   (0x000FFF80u)
#define CONTROL_CONF_UART0_TXD_CONF_UART0_TXD_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_UART0_TXD_CONF_UART0_TXD_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_UART0_TXD_CONF_UART0_TXD_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_UART0_TXD_CONF_UART0_TXD_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_UART0_TXD_CONF_UART0_TXD_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_UART1_CTSN */
#define CONTROL_CONF_UART1_CTSN_CONF_UART1_CTSN_MMODE   (0x00000007u)
#define CONTROL_CONF_UART1_CTSN_CONF_UART1_CTSN_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_UART1_CTSN_CONF_UART1_CTSN_PUDEN   (0x00000008u)
#define CONTROL_CONF_UART1_CTSN_CONF_UART1_CTSN_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_UART1_CTSN_CONF_UART1_CTSN_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_UART1_CTSN_CONF_UART1_CTSN_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_UART1_CTSN_CONF_UART1_CTSN_RSVD   (0x000FFF80u)
#define CONTROL_CONF_UART1_CTSN_CONF_UART1_CTSN_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_UART1_CTSN_CONF_UART1_CTSN_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_UART1_CTSN_CONF_UART1_CTSN_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_UART1_CTSN_CONF_UART1_CTSN_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_UART1_CTSN_CONF_UART1_CTSN_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_UART1_RTSN */
#define CONTROL_CONF_UART1_RTSN_CONF_UART1_RTSN_MMODE   (0x00000007u)
#define CONTROL_CONF_UART1_RTSN_CONF_UART1_RTSN_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_UART1_RTSN_CONF_UART1_RTSN_PUDEN   (0x00000008u)
#define CONTROL_CONF_UART1_RTSN_CONF_UART1_RTSN_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_UART1_RTSN_CONF_UART1_RTSN_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_UART1_RTSN_CONF_UART1_RTSN_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_UART1_RTSN_CONF_UART1_RTSN_RSVD   (0x000FFF80u)
#define CONTROL_CONF_UART1_RTSN_CONF_UART1_RTSN_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_UART1_RTSN_CONF_UART1_RTSN_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_UART1_RTSN_CONF_UART1_RTSN_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_UART1_RTSN_CONF_UART1_RTSN_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_UART1_RTSN_CONF_UART1_RTSN_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_UART1_RXD */
#define CONTROL_CONF_UART1_RXD_CONF_UART1_RXD_MMODE   (0x00000007u)
#define CONTROL_CONF_UART1_RXD_CONF_UART1_RXD_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_UART1_RXD_CONF_UART1_RXD_PUDEN   (0x00000008u)
#define CONTROL_CONF_UART1_RXD_CONF_UART1_RXD_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_UART1_RXD_CONF_UART1_RXD_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_UART1_RXD_CONF_UART1_RXD_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_UART1_RXD_CONF_UART1_RXD_RSVD   (0x000FFF80u)
#define CONTROL_CONF_UART1_RXD_CONF_UART1_RXD_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_UART1_RXD_CONF_UART1_RXD_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_UART1_RXD_CONF_UART1_RXD_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_UART1_RXD_CONF_UART1_RXD_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_UART1_RXD_CONF_UART1_RXD_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_UART1_TXD */
#define CONTROL_CONF_UART1_TXD_CONF_UART1_TXD_MMODE   (0x00000007u)
#define CONTROL_CONF_UART1_TXD_CONF_UART1_TXD_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_UART1_TXD_CONF_UART1_TXD_PUDEN   (0x00000008u)
#define CONTROL_CONF_UART1_TXD_CONF_UART1_TXD_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_UART1_TXD_CONF_UART1_TXD_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_UART1_TXD_CONF_UART1_TXD_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_UART1_TXD_CONF_UART1_TXD_RSVD   (0x000FFF80u)
#define CONTROL_CONF_UART1_TXD_CONF_UART1_TXD_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_UART1_TXD_CONF_UART1_TXD_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_UART1_TXD_CONF_UART1_TXD_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_UART1_TXD_CONF_UART1_TXD_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_UART1_TXD_CONF_UART1_TXD_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_I2C0_SDA */
#define CONTROL_CONF_I2C0_SDA_CONF_I2C0_SDA_MMODE   (0x00000007u)
#define CONTROL_CONF_I2C0_SDA_CONF_I2C0_SDA_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_I2C0_SDA_CONF_I2C0_SDA_PUDEN   (0x00000008u)
#define CONTROL_CONF_I2C0_SDA_CONF_I2C0_SDA_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_I2C0_SDA_CONF_I2C0_SDA_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_I2C0_SDA_CONF_I2C0_SDA_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_I2C0_SDA_CONF_I2C0_SDA_RSVD   (0x000FFF80u)
#define CONTROL_CONF_I2C0_SDA_CONF_I2C0_SDA_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_I2C0_SDA_CONF_I2C0_SDA_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_I2C0_SDA_CONF_I2C0_SDA_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_I2C0_SDA_CONF_I2C0_SDA_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_I2C0_SDA_CONF_I2C0_SDA_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_I2C0_SCL */
#define CONTROL_CONF_I2C0_SCL_CONF_I2C0_SCL_MMODE   (0x00000007u)
#define CONTROL_CONF_I2C0_SCL_CONF_I2C0_SCL_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_I2C0_SCL_CONF_I2C0_SCL_PUDEN   (0x00000008u)
#define CONTROL_CONF_I2C0_SCL_CONF_I2C0_SCL_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_I2C0_SCL_CONF_I2C0_SCL_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_I2C0_SCL_CONF_I2C0_SCL_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_I2C0_SCL_CONF_I2C0_SCL_RSVD   (0x000FFF80u)
#define CONTROL_CONF_I2C0_SCL_CONF_I2C0_SCL_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_I2C0_SCL_CONF_I2C0_SCL_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_I2C0_SCL_CONF_I2C0_SCL_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_I2C0_SCL_CONF_I2C0_SCL_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_I2C0_SCL_CONF_I2C0_SCL_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_I2C0_SDA */
#define CONTROL_CONF_I2C1_SDA_CONF_I2C1_SDA_MMODE   (0x00000007u)
#define CONTROL_CONF_I2C1_SDA_CONF_I2C1_SDA_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_I2C1_SDA_CONF_I2C1_SDA_PUDEN   (0x00000008u)
#define CONTROL_CONF_I2C1_SDA_CONF_I2C1_SDA_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_I2C1_SDA_CONF_I2C1_SDA_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_I2C1_SDA_CONF_I2C1_SDA_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_I2C1_SDA_CONF_I2C1_SDA_RSVD   (0x000FFF80u)
#define CONTROL_CONF_I2C1_SDA_CONF_I2C1_SDA_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_I2C1_SDA_CONF_I2C1_SDA_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_I2C1_SDA_CONF_I2C1_SDA_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_I2C1_SDA_CONF_I2C1_SDA_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_I2C1_SDA_CONF_I2C1_SDA_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_I2C0_SCL */
#define CONTROL_CONF_I2C1_SCL_CONF_I2C1_SCL_MMODE   (0x00000007u)
#define CONTROL_CONF_I2C1_SCL_CONF_I2C1_SCL_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_I2C1_SCL_CONF_I2C1_SCL_PUDEN   (0x00000008u)
#define CONTROL_CONF_I2C1_SCL_CONF_I2C1_SCL_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_I2C1_SCL_CONF_I2C1_SCL_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_I2C1_SCL_CONF_I2C1_SCL_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_I2C1_SCL_CONF_I2C1_SCL_RSVD   (0x000FFF80u)
#define CONTROL_CONF_I2C1_SCL_CONF_I2C1_SCL_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_I2C1_SCL_CONF_I2C1_SCL_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_I2C1_SCL_CONF_I2C1_SCL_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_I2C1_SCL_CONF_I2C1_SCL_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_I2C1_SCL_CONF_I2C1_SCL_SLEWCTRL_SHIFT   (0x00000006u)



/* CONF_MCASP0_ACLKX */
#define CONTROL_CONF_MCASP0_ACLKX_CONF_MCASP0_ACLKX_MMODE   (0x00000007u)
#define CONTROL_CONF_MCASP0_ACLKX_CONF_MCASP0_ACLKX_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MCASP0_ACLKX_CONF_MCASP0_ACLKX_PUDEN   (0x00000008u)
#define CONTROL_CONF_MCASP0_ACLKX_CONF_MCASP0_ACLKX_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MCASP0_ACLKX_CONF_MCASP0_ACLKX_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MCASP0_ACLKX_CONF_MCASP0_ACLKX_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MCASP0_ACLKX_CONF_MCASP0_ACLKX_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MCASP0_ACLKX_CONF_MCASP0_ACLKX_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MCASP0_ACLKX_CONF_MCASP0_ACLKX_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MCASP0_ACLKX_CONF_MCASP0_ACLKX_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MCASP0_ACLKX_CONF_MCASP0_ACLKX_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MCASP0_ACLKX_CONF_MCASP0_ACLKX_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_MCASP0_FSX */
#define CONTROL_CONF_MCASP0_FSX_CONF_MCASP0_FSX_MMODE   (0x00000007u)
#define CONTROL_CONF_MCASP0_FSX_CONF_MCASP0_FSX_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MCASP0_FSX_CONF_MCASP0_FSX_PUDEN   (0x00000008u)
#define CONTROL_CONF_MCASP0_FSX_CONF_MCASP0_FSX_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MCASP0_FSX_CONF_MCASP0_FSX_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MCASP0_FSX_CONF_MCASP0_FSX_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MCASP0_FSX_CONF_MCASP0_FSX_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MCASP0_FSX_CONF_MCASP0_FSX_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MCASP0_FSX_CONF_MCASP0_FSX_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MCASP0_FSX_CONF_MCASP0_FSX_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MCASP0_FSX_CONF_MCASP0_FSX_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MCASP0_FSX_CONF_MCASP0_FSX_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_MCASP0_AXR0 */
#define CONTROL_CONF_MCASP0_AXR0_CONF_MCASP0_AXR0_MMODE   (0x00000007u)
#define CONTROL_CONF_MCASP0_AXR0_CONF_MCASP0_AXR0_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MCASP0_AXR0_CONF_MCASP0_AXR0_PUDEN   (0x00000008u)
#define CONTROL_CONF_MCASP0_AXR0_CONF_MCASP0_AXR0_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MCASP0_AXR0_CONF_MCASP0_AXR0_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MCASP0_AXR0_CONF_MCASP0_AXR0_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MCASP0_AXR0_CONF_MCASP0_AXR0_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MCASP0_AXR0_CONF_MCASP0_AXR0_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MCASP0_AXR0_CONF_MCASP0_AXR0_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MCASP0_AXR0_CONF_MCASP0_AXR0_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MCASP0_AXR0_CONF_MCASP0_AXR0_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MCASP0_AXR0_CONF_MCASP0_AXR0_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_MCASP0_AHCLKR */
#define CONTROL_CONF_MCASP0_AHCLKR_CONF_MCASP0_AHCLKR_MMODE   (0x00000007u)
#define CONTROL_CONF_MCASP0_AHCLKR_CONF_MCASP0_AHCLKR_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MCASP0_AHCLKR_CONF_MCASP0_AHCLKR_PUDEN   (0x00000008u)
#define CONTROL_CONF_MCASP0_AHCLKR_CONF_MCASP0_AHCLKR_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MCASP0_AHCLKR_CONF_MCASP0_AHCLKR_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MCASP0_AHCLKR_CONF_MCASP0_AHCLKR_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MCASP0_AHCLKR_CONF_MCASP0_AHCLKR_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MCASP0_AHCLKR_CONF_MCASP0_AHCLKR_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MCASP0_AHCLKR_CONF_MCASP0_AHCLKR_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MCASP0_AHCLKR_CONF_MCASP0_AHCLKR_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MCASP0_AHCLKR_CONF_MCASP0_AHCLKR_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MCASP0_AHCLKR_CONF_MCASP0_AHCLKR_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_MCASP0_ACLKR */
#define CONTROL_CONF_MCASP0_ACLKR_CONF_MCASP0_ACLKR_MMODE   (0x00000007u)
#define CONTROL_CONF_MCASP0_ACLKR_CONF_MCASP0_ACLKR_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MCASP0_ACLKR_CONF_MCASP0_ACLKR_PUDEN   (0x00000008u)
#define CONTROL_CONF_MCASP0_ACLKR_CONF_MCASP0_ACLKR_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MCASP0_ACLKR_CONF_MCASP0_ACLKR_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MCASP0_ACLKR_CONF_MCASP0_ACLKR_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MCASP0_ACLKR_CONF_MCASP0_ACLKR_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MCASP0_ACLKR_CONF_MCASP0_ACLKR_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MCASP0_ACLKR_CONF_MCASP0_ACLKR_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MCASP0_ACLKR_CONF_MCASP0_ACLKR_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MCASP0_ACLKR_CONF_MCASP0_ACLKR_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MCASP0_ACLKR_CONF_MCASP0_ACLKR_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_MCASP0_FSR */
#define CONTROL_CONF_MCASP0_FSR_CONF_MCASP0_FSR_MMODE   (0x00000007u)
#define CONTROL_CONF_MCASP0_FSR_CONF_MCASP0_FSR_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MCASP0_FSR_CONF_MCASP0_FSR_PUDEN   (0x00000008u)
#define CONTROL_CONF_MCASP0_FSR_CONF_MCASP0_FSR_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MCASP0_FSR_CONF_MCASP0_FSR_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MCASP0_FSR_CONF_MCASP0_FSR_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MCASP0_FSR_CONF_MCASP0_FSR_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MCASP0_FSR_CONF_MCASP0_FSR_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MCASP0_FSR_CONF_MCASP0_FSR_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MCASP0_FSR_CONF_MCASP0_FSR_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MCASP0_FSR_CONF_MCASP0_FSR_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MCASP0_FSR_CONF_MCASP0_FSR_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_MCASP0_AXR1 */
#define CONTROL_CONF_MCASP0_AXR1_CONF_MCASP0_AXR1_MMODE   (0x00000007u)
#define CONTROL_CONF_MCASP0_AXR1_CONF_MCASP0_AXR1_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MCASP0_AXR1_CONF_MCASP0_AXR1_PUDEN   (0x00000008u)
#define CONTROL_CONF_MCASP0_AXR1_CONF_MCASP0_AXR1_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MCASP0_AXR1_CONF_MCASP0_AXR1_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MCASP0_AXR1_CONF_MCASP0_AXR1_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MCASP0_AXR1_CONF_MCASP0_AXR1_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MCASP0_AXR1_CONF_MCASP0_AXR1_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MCASP0_AXR1_CONF_MCASP0_AXR1_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MCASP0_AXR1_CONF_MCASP0_AXR1_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MCASP0_AXR1_CONF_MCASP0_AXR1_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MCASP0_AXR1_CONF_MCASP0_AXR1_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_MCASP0_AHCLKX */
#define CONTROL_CONF_MCASP0_AHCLKX_CONF_MCASP0_AHCLKX_MMODE   (0x00000007u)
#define CONTROL_CONF_MCASP0_AHCLKX_CONF_MCASP0_AHCLKX_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_MCASP0_AHCLKX_CONF_MCASP0_AHCLKX_PUDEN   (0x00000008u)
#define CONTROL_CONF_MCASP0_AHCLKX_CONF_MCASP0_AHCLKX_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_MCASP0_AHCLKX_CONF_MCASP0_AHCLKX_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_MCASP0_AHCLKX_CONF_MCASP0_AHCLKX_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_MCASP0_AHCLKX_CONF_MCASP0_AHCLKX_RSVD   (0x000FFF80u)
#define CONTROL_CONF_MCASP0_AHCLKX_CONF_MCASP0_AHCLKX_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_MCASP0_AHCLKX_CONF_MCASP0_AHCLKX_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_MCASP0_AHCLKX_CONF_MCASP0_AHCLKX_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_MCASP0_AHCLKX_CONF_MCASP0_AHCLKX_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_MCASP0_AHCLKX_CONF_MCASP0_AHCLKX_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_XDMA_EVENT_INTR0 */
#define CONTROL_CONF_XDMA_EVENT_INTR0_CONF_XDMA_EVENT_INTR0_MMODE   (0x00000007u)
#define CONTROL_CONF_XDMA_EVENT_INTR0_CONF_XDMA_EVENT_INTR0_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_XDMA_EVENT_INTR0_CONF_XDMA_EVENT_INTR0_PUDEN   (0x00000008u)
#define CONTROL_CONF_XDMA_EVENT_INTR0_CONF_XDMA_EVENT_INTR0_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_XDMA_EVENT_INTR0_CONF_XDMA_EVENT_INTR0_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_XDMA_EVENT_INTR0_CONF_XDMA_EVENT_INTR0_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_XDMA_EVENT_INTR0_CONF_XDMA_EVENT_INTR0_RSVD   (0x000FFF80u)
#define CONTROL_CONF_XDMA_EVENT_INTR0_CONF_XDMA_EVENT_INTR0_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_XDMA_EVENT_INTR0_CONF_XDMA_EVENT_INTR0_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_XDMA_EVENT_INTR0_CONF_XDMA_EVENT_INTR0_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_XDMA_EVENT_INTR0_CONF_XDMA_EVENT_INTR0_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_XDMA_EVENT_INTR0_CONF_XDMA_EVENT_INTR0_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_XDMA_EVENT_INTR1 */
#define CONTROL_CONF_XDMA_EVENT_INTR1_CONF_XDMA_EVENT_INTR1_MMODE   (0x00000007u)
#define CONTROL_CONF_XDMA_EVENT_INTR1_CONF_XDMA_EVENT_INTR1_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_XDMA_EVENT_INTR1_CONF_XDMA_EVENT_INTR1_PUDEN   (0x00000008u)
#define CONTROL_CONF_XDMA_EVENT_INTR1_CONF_XDMA_EVENT_INTR1_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_XDMA_EVENT_INTR1_CONF_XDMA_EVENT_INTR1_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_XDMA_EVENT_INTR1_CONF_XDMA_EVENT_INTR1_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_XDMA_EVENT_INTR1_CONF_XDMA_EVENT_INTR1_RSVD   (0x000FFF80u)
#define CONTROL_CONF_XDMA_EVENT_INTR1_CONF_XDMA_EVENT_INTR1_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_XDMA_EVENT_INTR1_CONF_XDMA_EVENT_INTR1_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_XDMA_EVENT_INTR1_CONF_XDMA_EVENT_INTR1_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_XDMA_EVENT_INTR1_CONF_XDMA_EVENT_INTR1_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_XDMA_EVENT_INTR1_CONF_XDMA_EVENT_INTR1_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_NRESETIN_OUT */
#define CONTROL_CONF_NRESETIN_OUT_CONF_NRESETIN_OUT_MMODE   (0x00000007u)
#define CONTROL_CONF_NRESETIN_OUT_CONF_NRESETIN_OUT_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_NRESETIN_OUT_CONF_NRESETIN_OUT_PUDEN   (0x00000008u)
#define CONTROL_CONF_NRESETIN_OUT_CONF_NRESETIN_OUT_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_NRESETIN_OUT_CONF_NRESETIN_OUT_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_NRESETIN_OUT_CONF_NRESETIN_OUT_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_NRESETIN_OUT_CONF_NRESETIN_OUT_RSVD   (0x000FFF80u)
#define CONTROL_CONF_NRESETIN_OUT_CONF_NRESETIN_OUT_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_NRESETIN_OUT_CONF_NRESETIN_OUT_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_NRESETIN_OUT_CONF_NRESETIN_OUT_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_NRESETIN_OUT_CONF_NRESETIN_OUT_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_NRESETIN_OUT_CONF_NRESETIN_OUT_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_PORZ */
#define CONTROL_CONF_PORZ_CONF_PORZ_MMODE   (0x00000007u)
#define CONTROL_CONF_PORZ_CONF_PORZ_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_PORZ_CONF_PORZ_PUDEN   (0x00000008u)
#define CONTROL_CONF_PORZ_CONF_PORZ_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_PORZ_CONF_PORZ_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_PORZ_CONF_PORZ_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_PORZ_CONF_PORZ_RSVD   (0x000FFF80u)
#define CONTROL_CONF_PORZ_CONF_PORZ_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_PORZ_CONF_PORZ_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_PORZ_CONF_PORZ_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_PORZ_CONF_PORZ_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_PORZ_CONF_PORZ_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_NNMI */
#define CONTROL_CONF_NNMI_CONF_NNMI_MMODE   (0x00000007u)
#define CONTROL_CONF_NNMI_CONF_NNMI_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_NNMI_CONF_NNMI_PUDEN   (0x00000008u)
#define CONTROL_CONF_NNMI_CONF_NNMI_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_NNMI_CONF_NNMI_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_NNMI_CONF_NNMI_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_NNMI_CONF_NNMI_RSVD   (0x000FFF80u)
#define CONTROL_CONF_NNMI_CONF_NNMI_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_NNMI_CONF_NNMI_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_NNMI_CONF_NNMI_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_NNMI_CONF_NNMI_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_NNMI_CONF_NNMI_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_OSC0_IN */
#define CONTROL_CONF_OSC0_IN_CONF_OSC0_IN_MMODE   (0x00000007u)
#define CONTROL_CONF_OSC0_IN_CONF_OSC0_IN_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_OSC0_IN_CONF_OSC0_IN_PUDEN   (0x00000008u)
#define CONTROL_CONF_OSC0_IN_CONF_OSC0_IN_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_OSC0_IN_CONF_OSC0_IN_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_OSC0_IN_CONF_OSC0_IN_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_OSC0_IN_CONF_OSC0_IN_RSVD   (0x000FFF80u)
#define CONTROL_CONF_OSC0_IN_CONF_OSC0_IN_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_OSC0_IN_CONF_OSC0_IN_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_OSC0_IN_CONF_OSC0_IN_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_OSC0_IN_CONF_OSC0_IN_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_OSC0_IN_CONF_OSC0_IN_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_OSC0_OUT */
#define CONTROL_CONF_OSC0_OUT_CONF_OSC0_OUT_MMODE   (0x00000007u)
#define CONTROL_CONF_OSC0_OUT_CONF_OSC0_OUT_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_OSC0_OUT_CONF_OSC0_OUT_PUDEN   (0x00000008u)
#define CONTROL_CONF_OSC0_OUT_CONF_OSC0_OUT_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_OSC0_OUT_CONF_OSC0_OUT_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_OSC0_OUT_CONF_OSC0_OUT_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_OSC0_OUT_CONF_OSC0_OUT_RSVD   (0x000FFF80u)
#define CONTROL_CONF_OSC0_OUT_CONF_OSC0_OUT_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_OSC0_OUT_CONF_OSC0_OUT_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_OSC0_OUT_CONF_OSC0_OUT_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_OSC0_OUT_CONF_OSC0_OUT_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_OSC0_OUT_CONF_OSC0_OUT_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_OSC0_VSS */
#define CONTROL_CONF_OSC0_VSS_CONF_OSC0_VSS_MMODE   (0x00000007u)
#define CONTROL_CONF_OSC0_VSS_CONF_OSC0_VSS_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_OSC0_VSS_CONF_OSC0_VSS_PUDEN   (0x00000008u)
#define CONTROL_CONF_OSC0_VSS_CONF_OSC0_VSS_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_OSC0_VSS_CONF_OSC0_VSS_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_OSC0_VSS_CONF_OSC0_VSS_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_OSC0_VSS_CONF_OSC0_VSS_RSVD   (0x000FFF80u)
#define CONTROL_CONF_OSC0_VSS_CONF_OSC0_VSS_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_OSC0_VSS_CONF_OSC0_VSS_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_OSC0_VSS_CONF_OSC0_VSS_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_OSC0_VSS_CONF_OSC0_VSS_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_OSC0_VSS_CONF_OSC0_VSS_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_TMS */
#define CONTROL_CONF_TMS_CONF_TMS_MMODE   (0x00000007u)
#define CONTROL_CONF_TMS_CONF_TMS_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_TMS_CONF_TMS_PUDEN   (0x00000008u)
#define CONTROL_CONF_TMS_CONF_TMS_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_TMS_CONF_TMS_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_TMS_CONF_TMS_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_TMS_CONF_TMS_RSVD   (0x000FFF80u)
#define CONTROL_CONF_TMS_CONF_TMS_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_TMS_CONF_TMS_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_TMS_CONF_TMS_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_TMS_CONF_TMS_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_TMS_CONF_TMS_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_TDI */
#define CONTROL_CONF_TDI_CONF_TDI_MMODE   (0x00000007u)
#define CONTROL_CONF_TDI_CONF_TDI_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_TDI_CONF_TDI_PUDEN   (0x00000008u)
#define CONTROL_CONF_TDI_CONF_TDI_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_TDI_CONF_TDI_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_TDI_CONF_TDI_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_TDI_CONF_TDI_RSVD   (0x000FFF80u)
#define CONTROL_CONF_TDI_CONF_TDI_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_TDI_CONF_TDI_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_TDI_CONF_TDI_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_TDI_CONF_TDI_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_TDI_CONF_TDI_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_TDO */
#define CONTROL_CONF_TDO_CONF_TDO_MMODE   (0x00000007u)
#define CONTROL_CONF_TDO_CONF_TDO_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_TDO_CONF_TDO_PUDEN   (0x00000008u)
#define CONTROL_CONF_TDO_CONF_TDO_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_TDO_CONF_TDO_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_TDO_CONF_TDO_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_TDO_CONF_TDO_RSVD   (0x000FFF80u)
#define CONTROL_CONF_TDO_CONF_TDO_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_TDO_CONF_TDO_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_TDO_CONF_TDO_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_TDO_CONF_TDO_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_TDO_CONF_TDO_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_TCK */
#define CONTROL_CONF_TCK_CONF_TCK_MMODE   (0x00000007u)
#define CONTROL_CONF_TCK_CONF_TCK_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_TCK_CONF_TCK_PUDEN   (0x00000008u)
#define CONTROL_CONF_TCK_CONF_TCK_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_TCK_CONF_TCK_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_TCK_CONF_TCK_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_TCK_CONF_TCK_RSVD   (0x000FFF80u)
#define CONTROL_CONF_TCK_CONF_TCK_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_TCK_CONF_TCK_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_TCK_CONF_TCK_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_TCK_CONF_TCK_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_TCK_CONF_TCK_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_NTRST */
#define CONTROL_CONF_NTRST_CONF_NTRST_MMODE   (0x00000007u)
#define CONTROL_CONF_NTRST_CONF_NTRST_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_NTRST_CONF_NTRST_PUDEN   (0x00000008u)
#define CONTROL_CONF_NTRST_CONF_NTRST_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_NTRST_CONF_NTRST_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_NTRST_CONF_NTRST_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_NTRST_CONF_NTRST_RSVD   (0x000FFF80u)
#define CONTROL_CONF_NTRST_CONF_NTRST_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_NTRST_CONF_NTRST_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_NTRST_CONF_NTRST_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_NTRST_CONF_NTRST_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_NTRST_CONF_NTRST_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_EMU0 */
#define CONTROL_CONF_EMU0_CONF_EMU0_MMODE   (0x00000007u)
#define CONTROL_CONF_EMU0_CONF_EMU0_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_EMU0_CONF_EMU0_PUDEN   (0x00000008u)
#define CONTROL_CONF_EMU0_CONF_EMU0_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_EMU0_CONF_EMU0_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_EMU0_CONF_EMU0_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_EMU0_CONF_EMU0_RSVD   (0x000FFF80u)
#define CONTROL_CONF_EMU0_CONF_EMU0_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_EMU0_CONF_EMU0_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_EMU0_CONF_EMU0_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_EMU0_CONF_EMU0_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_EMU0_CONF_EMU0_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_EMU1 */
#define CONTROL_CONF_EMU1_CONF_EMU1_MMODE   (0x00000007u)
#define CONTROL_CONF_EMU1_CONF_EMU1_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_EMU1_CONF_EMU1_PUDEN   (0x00000008u)
#define CONTROL_CONF_EMU1_CONF_EMU1_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_EMU1_CONF_EMU1_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_EMU1_CONF_EMU1_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_EMU1_CONF_EMU1_RSVD   (0x000FFF80u)
#define CONTROL_CONF_EMU1_CONF_EMU1_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_EMU1_CONF_EMU1_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_EMU1_CONF_EMU1_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_EMU1_CONF_EMU1_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_EMU1_CONF_EMU1_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_OSC1_IN */
#define CONTROL_CONF_OSC1_IN_CONF_OSC1_IN_MMODE   (0x00000007u)
#define CONTROL_CONF_OSC1_IN_CONF_OSC1_IN_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_OSC1_IN_CONF_OSC1_IN_PUDEN   (0x00000008u)
#define CONTROL_CONF_OSC1_IN_CONF_OSC1_IN_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_OSC1_IN_CONF_OSC1_IN_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_OSC1_IN_CONF_OSC1_IN_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_OSC1_IN_CONF_OSC1_IN_RSVD   (0x000FFF80u)
#define CONTROL_CONF_OSC1_IN_CONF_OSC1_IN_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_OSC1_IN_CONF_OSC1_IN_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_OSC1_IN_CONF_OSC1_IN_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_OSC1_IN_CONF_OSC1_IN_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_OSC1_IN_CONF_OSC1_IN_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_OSC1_OUT */
#define CONTROL_CONF_OSC1_OUT_CONF_OSC1_OUT_MMODE   (0x00000007u)
#define CONTROL_CONF_OSC1_OUT_CONF_OSC1_OUT_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_OSC1_OUT_CONF_OSC1_OUT_PUDEN   (0x00000008u)
#define CONTROL_CONF_OSC1_OUT_CONF_OSC1_OUT_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_OSC1_OUT_CONF_OSC1_OUT_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_OSC1_OUT_CONF_OSC1_OUT_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_OSC1_OUT_CONF_OSC1_OUT_RSVD   (0x000FFF80u)
#define CONTROL_CONF_OSC1_OUT_CONF_OSC1_OUT_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_OSC1_OUT_CONF_OSC1_OUT_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_OSC1_OUT_CONF_OSC1_OUT_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_OSC1_OUT_CONF_OSC1_OUT_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_OSC1_OUT_CONF_OSC1_OUT_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_OSC1_VSS */
#define CONTROL_CONF_OSC1_VSS_CONF_OSC1_VSS_MMODE   (0x00000007u)
#define CONTROL_CONF_OSC1_VSS_CONF_OSC1_VSS_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_OSC1_VSS_CONF_OSC1_VSS_PUDEN   (0x00000008u)
#define CONTROL_CONF_OSC1_VSS_CONF_OSC1_VSS_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_OSC1_VSS_CONF_OSC1_VSS_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_OSC1_VSS_CONF_OSC1_VSS_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_OSC1_VSS_CONF_OSC1_VSS_RSVD   (0x000FFF80u)
#define CONTROL_CONF_OSC1_VSS_CONF_OSC1_VSS_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_OSC1_VSS_CONF_OSC1_VSS_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_OSC1_VSS_CONF_OSC1_VSS_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_OSC1_VSS_CONF_OSC1_VSS_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_OSC1_VSS_CONF_OSC1_VSS_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_RTC_PORZ */
#define CONTROL_CONF_RTC_PORZ_CONF_RTC_PORZ_MMODE   (0x00000007u)
#define CONTROL_CONF_RTC_PORZ_CONF_RTC_PORZ_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_RTC_PORZ_CONF_RTC_PORZ_PUDEN   (0x00000008u)
#define CONTROL_CONF_RTC_PORZ_CONF_RTC_PORZ_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_RTC_PORZ_CONF_RTC_PORZ_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_RTC_PORZ_CONF_RTC_PORZ_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_RTC_PORZ_CONF_RTC_PORZ_RSVD   (0x000FFF80u)
#define CONTROL_CONF_RTC_PORZ_CONF_RTC_PORZ_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_RTC_PORZ_CONF_RTC_PORZ_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_RTC_PORZ_CONF_RTC_PORZ_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_RTC_PORZ_CONF_RTC_PORZ_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_RTC_PORZ_CONF_RTC_PORZ_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_PMIC_POWER_EN */
#define CONTROL_CONF_PMIC_POWER_EN_CONF_PMIC_POWER_EN_MMODE   (0x00000007u)
#define CONTROL_CONF_PMIC_POWER_EN_CONF_PMIC_POWER_EN_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_PMIC_POWER_EN_CONF_PMIC_POWER_EN_PUDEN   (0x00000008u)
#define CONTROL_CONF_PMIC_POWER_EN_CONF_PMIC_POWER_EN_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_PMIC_POWER_EN_CONF_PMIC_POWER_EN_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_PMIC_POWER_EN_CONF_PMIC_POWER_EN_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_PMIC_POWER_EN_CONF_PMIC_POWER_EN_RSVD   (0x000FFF80u)
#define CONTROL_CONF_PMIC_POWER_EN_CONF_PMIC_POWER_EN_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_PMIC_POWER_EN_CONF_PMIC_POWER_EN_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_PMIC_POWER_EN_CONF_PMIC_POWER_EN_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_PMIC_POWER_EN_CONF_PMIC_POWER_EN_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_PMIC_POWER_EN_CONF_PMIC_POWER_EN_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_EXT_WAKEUP */
#define CONTROL_CONF_EXT_WAKEUP_CONF_EXT_WAKEUP_MMODE   (0x00000007u)
#define CONTROL_CONF_EXT_WAKEUP_CONF_EXT_WAKEUP_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_EXT_WAKEUP_CONF_EXT_WAKEUP_PUDEN   (0x00000008u)
#define CONTROL_CONF_EXT_WAKEUP_CONF_EXT_WAKEUP_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_EXT_WAKEUP_CONF_EXT_WAKEUP_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_EXT_WAKEUP_CONF_EXT_WAKEUP_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_EXT_WAKEUP_CONF_EXT_WAKEUP_RSVD   (0x000FFF80u)
#define CONTROL_CONF_EXT_WAKEUP_CONF_EXT_WAKEUP_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_EXT_WAKEUP_CONF_EXT_WAKEUP_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_EXT_WAKEUP_CONF_EXT_WAKEUP_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_EXT_WAKEUP_CONF_EXT_WAKEUP_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_EXT_WAKEUP_CONF_EXT_WAKEUP_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_ENZ_KALDO_1P8V */
#define CONTROL_CONF_ENZ_KALDO_1P8V_CONF_ENZ_KALDO_1P8V_MMODE   (0x00000007u)
#define CONTROL_CONF_ENZ_KALDO_1P8V_CONF_ENZ_KALDO_1P8V_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_ENZ_KALDO_1P8V_CONF_ENZ_KALDO_1P8V_PUDEN   (0x00000008u)
#define CONTROL_CONF_ENZ_KALDO_1P8V_CONF_ENZ_KALDO_1P8V_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_ENZ_KALDO_1P8V_CONF_ENZ_KALDO_1P8V_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_ENZ_KALDO_1P8V_CONF_ENZ_KALDO_1P8V_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_ENZ_KALDO_1P8V_CONF_ENZ_KALDO_1P8V_RSVD   (0x000FFF80u)
#define CONTROL_CONF_ENZ_KALDO_1P8V_CONF_ENZ_KALDO_1P8V_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_ENZ_KALDO_1P8V_CONF_ENZ_KALDO_1P8V_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_ENZ_KALDO_1P8V_CONF_ENZ_KALDO_1P8V_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_ENZ_KALDO_1P8V_CONF_ENZ_KALDO_1P8V_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_ENZ_KALDO_1P8V_CONF_ENZ_KALDO_1P8V_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_USB0_DM */
#define CONTROL_CONF_USB0_DM_CONF_USB0_DM_MMODE   (0x00000007u)
#define CONTROL_CONF_USB0_DM_CONF_USB0_DM_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_USB0_DM_CONF_USB0_DM_PUDEN   (0x00000008u)
#define CONTROL_CONF_USB0_DM_CONF_USB0_DM_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_USB0_DM_CONF_USB0_DM_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_USB0_DM_CONF_USB0_DM_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_USB0_DM_CONF_USB0_DM_RSVD   (0x000FFF80u)
#define CONTROL_CONF_USB0_DM_CONF_USB0_DM_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_USB0_DM_CONF_USB0_DM_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_USB0_DM_CONF_USB0_DM_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_USB0_DM_CONF_USB0_DM_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_USB0_DM_CONF_USB0_DM_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_USB0_DP */
#define CONTROL_CONF_USB0_DP_CONF_USB0_DP_MMODE   (0x00000007u)
#define CONTROL_CONF_USB0_DP_CONF_USB0_DP_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_USB0_DP_CONF_USB0_DP_PUDEN   (0x00000008u)
#define CONTROL_CONF_USB0_DP_CONF_USB0_DP_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_USB0_DP_CONF_USB0_DP_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_USB0_DP_CONF_USB0_DP_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_USB0_DP_CONF_USB0_DP_RSVD   (0x000FFF80u)
#define CONTROL_CONF_USB0_DP_CONF_USB0_DP_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_USB0_DP_CONF_USB0_DP_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_USB0_DP_CONF_USB0_DP_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_USB0_DP_CONF_USB0_DP_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_USB0_DP_CONF_USB0_DP_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_USB0_CE */
#define CONTROL_CONF_USB0_CE_CONF_USB0_CE_MMODE   (0x00000007u)
#define CONTROL_CONF_USB0_CE_CONF_USB0_CE_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_USB0_CE_CONF_USB0_CE_PUDEN   (0x00000008u)
#define CONTROL_CONF_USB0_CE_CONF_USB0_CE_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_USB0_CE_CONF_USB0_CE_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_USB0_CE_CONF_USB0_CE_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_USB0_CE_CONF_USB0_CE_RSVD   (0x000FFF80u)
#define CONTROL_CONF_USB0_CE_CONF_USB0_CE_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_USB0_CE_CONF_USB0_CE_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_USB0_CE_CONF_USB0_CE_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_USB0_CE_CONF_USB0_CE_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_USB0_CE_CONF_USB0_CE_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_USB0_ID */
#define CONTROL_CONF_USB0_ID_CONF_USB0_ID_MMODE   (0x00000007u)
#define CONTROL_CONF_USB0_ID_CONF_USB0_ID_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_USB0_ID_CONF_USB0_ID_PUDEN   (0x00000008u)
#define CONTROL_CONF_USB0_ID_CONF_USB0_ID_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_USB0_ID_CONF_USB0_ID_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_USB0_ID_CONF_USB0_ID_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_USB0_ID_CONF_USB0_ID_RSVD   (0x000FFF80u)
#define CONTROL_CONF_USB0_ID_CONF_USB0_ID_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_USB0_ID_CONF_USB0_ID_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_USB0_ID_CONF_USB0_ID_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_USB0_ID_CONF_USB0_ID_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_USB0_ID_CONF_USB0_ID_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_USB0_VBUS */
#define CONTROL_CONF_USB0_VBUS_CONF_USB0_VBUS_MMODE   (0x00000007u)
#define CONTROL_CONF_USB0_VBUS_CONF_USB0_VBUS_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_USB0_VBUS_CONF_USB0_VBUS_PUDEN   (0x00000008u)
#define CONTROL_CONF_USB0_VBUS_CONF_USB0_VBUS_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_USB0_VBUS_CONF_USB0_VBUS_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_USB0_VBUS_CONF_USB0_VBUS_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_USB0_VBUS_CONF_USB0_VBUS_RSVD   (0x000FFF80u)
#define CONTROL_CONF_USB0_VBUS_CONF_USB0_VBUS_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_USB0_VBUS_CONF_USB0_VBUS_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_USB0_VBUS_CONF_USB0_VBUS_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_USB0_VBUS_CONF_USB0_VBUS_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_USB0_VBUS_CONF_USB0_VBUS_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_USB0_DRVVBUS */
#define CONTROL_CONF_USB0_DRVVBUS_CONF_USB0_DRVVBUS_MMODE   (0x00000007u)
#define CONTROL_CONF_USB0_DRVVBUS_CONF_USB0_DRVVBUS_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_USB0_DRVVBUS_CONF_USB0_DRVVBUS_PUDEN   (0x00000008u)
#define CONTROL_CONF_USB0_DRVVBUS_CONF_USB0_DRVVBUS_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_USB0_DRVVBUS_CONF_USB0_DRVVBUS_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_USB0_DRVVBUS_CONF_USB0_DRVVBUS_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_USB0_DRVVBUS_CONF_USB0_DRVVBUS_RSVD   (0x000FFF80u)
#define CONTROL_CONF_USB0_DRVVBUS_CONF_USB0_DRVVBUS_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_USB0_DRVVBUS_CONF_USB0_DRVVBUS_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_USB0_DRVVBUS_CONF_USB0_DRVVBUS_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_USB0_DRVVBUS_CONF_USB0_DRVVBUS_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_USB0_DRVVBUS_CONF_USB0_DRVVBUS_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_USB1_DM */
#define CONTROL_CONF_USB1_DM_CONF_USB1_DM_MMODE   (0x00000007u)
#define CONTROL_CONF_USB1_DM_CONF_USB1_DM_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_USB1_DM_CONF_USB1_DM_PUDEN   (0x00000008u)
#define CONTROL_CONF_USB1_DM_CONF_USB1_DM_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_USB1_DM_CONF_USB1_DM_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_USB1_DM_CONF_USB1_DM_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_USB1_DM_CONF_USB1_DM_RSVD   (0x000FFF80u)
#define CONTROL_CONF_USB1_DM_CONF_USB1_DM_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_USB1_DM_CONF_USB1_DM_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_USB1_DM_CONF_USB1_DM_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_USB1_DM_CONF_USB1_DM_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_USB1_DM_CONF_USB1_DM_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_USB1_DP */
#define CONTROL_CONF_USB1_DP_CONF_USB1_DP_MMODE   (0x00000007u)
#define CONTROL_CONF_USB1_DP_CONF_USB1_DP_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_USB1_DP_CONF_USB1_DP_PUDEN   (0x00000008u)
#define CONTROL_CONF_USB1_DP_CONF_USB1_DP_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_USB1_DP_CONF_USB1_DP_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_USB1_DP_CONF_USB1_DP_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_USB1_DP_CONF_USB1_DP_RSVD   (0x000FFF80u)
#define CONTROL_CONF_USB1_DP_CONF_USB1_DP_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_USB1_DP_CONF_USB1_DP_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_USB1_DP_CONF_USB1_DP_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_USB1_DP_CONF_USB1_DP_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_USB1_DP_CONF_USB1_DP_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_USB1_CE */
#define CONTROL_CONF_USB1_CE_CONF_USB1_CE_MMODE   (0x00000007u)
#define CONTROL_CONF_USB1_CE_CONF_USB1_CE_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_USB1_CE_CONF_USB1_CE_PUDEN   (0x00000008u)
#define CONTROL_CONF_USB1_CE_CONF_USB1_CE_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_USB1_CE_CONF_USB1_CE_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_USB1_CE_CONF_USB1_CE_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_USB1_CE_CONF_USB1_CE_RSVD   (0x000FFF80u)
#define CONTROL_CONF_USB1_CE_CONF_USB1_CE_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_USB1_CE_CONF_USB1_CE_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_USB1_CE_CONF_USB1_CE_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_USB1_CE_CONF_USB1_CE_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_USB1_CE_CONF_USB1_CE_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_USB1_ID */
#define CONTROL_CONF_USB1_ID_CONF_USB1_ID_MMODE   (0x00000007u)
#define CONTROL_CONF_USB1_ID_CONF_USB1_ID_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_USB1_ID_CONF_USB1_ID_PUDEN   (0x00000008u)
#define CONTROL_CONF_USB1_ID_CONF_USB1_ID_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_USB1_ID_CONF_USB1_ID_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_USB1_ID_CONF_USB1_ID_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_USB1_ID_CONF_USB1_ID_RSVD   (0x000FFF80u)
#define CONTROL_CONF_USB1_ID_CONF_USB1_ID_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_USB1_ID_CONF_USB1_ID_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_USB1_ID_CONF_USB1_ID_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_USB1_ID_CONF_USB1_ID_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_USB1_ID_CONF_USB1_ID_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_USB1_VBUS */
#define CONTROL_CONF_USB1_VBUS_CONF_USB1_VBUS_MMODE   (0x00000007u)
#define CONTROL_CONF_USB1_VBUS_CONF_USB1_VBUS_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_USB1_VBUS_CONF_USB1_VBUS_PUDEN   (0x00000008u)
#define CONTROL_CONF_USB1_VBUS_CONF_USB1_VBUS_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_USB1_VBUS_CONF_USB1_VBUS_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_USB1_VBUS_CONF_USB1_VBUS_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_USB1_VBUS_CONF_USB1_VBUS_RSVD   (0x000FFF80u)
#define CONTROL_CONF_USB1_VBUS_CONF_USB1_VBUS_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_USB1_VBUS_CONF_USB1_VBUS_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_USB1_VBUS_CONF_USB1_VBUS_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_USB1_VBUS_CONF_USB1_VBUS_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_USB1_VBUS_CONF_USB1_VBUS_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_USB1_DRVVBUS */
#define CONTROL_CONF_USB1_DRVVBUS_CONF_USB1_DRVVBUS_MMODE   (0x00000007u)
#define CONTROL_CONF_USB1_DRVVBUS_CONF_USB1_DRVVBUS_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_USB1_DRVVBUS_CONF_USB1_DRVVBUS_PUDEN   (0x00000008u)
#define CONTROL_CONF_USB1_DRVVBUS_CONF_USB1_DRVVBUS_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_USB1_DRVVBUS_CONF_USB1_DRVVBUS_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_USB1_DRVVBUS_CONF_USB1_DRVVBUS_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_USB1_DRVVBUS_CONF_USB1_DRVVBUS_RSVD   (0x000FFF80u)
#define CONTROL_CONF_USB1_DRVVBUS_CONF_USB1_DRVVBUS_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_USB1_DRVVBUS_CONF_USB1_DRVVBUS_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_USB1_DRVVBUS_CONF_USB1_DRVVBUS_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_USB1_DRVVBUS_CONF_USB1_DRVVBUS_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_USB1_DRVVBUS_CONF_USB1_DRVVBUS_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_RESETN */
#define CONTROL_CONF_DDR_RESETN_CONF_DDR_RESETN_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_RESETN_CONF_DDR_RESETN_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_RESETN_CONF_DDR_RESETN_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_RESETN_CONF_DDR_RESETN_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_RESETN_CONF_DDR_RESETN_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_RESETN_CONF_DDR_RESETN_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_RESETN_CONF_DDR_RESETN_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_RESETN_CONF_DDR_RESETN_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_RESETN_CONF_DDR_RESETN_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_RESETN_CONF_DDR_RESETN_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_RESETN_CONF_DDR_RESETN_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_RESETN_CONF_DDR_RESETN_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_CSN0 */
#define CONTROL_CONF_DDR_CSN0_CONF_DDR_CSN0_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_CSN0_CONF_DDR_CSN0_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_CSN0_CONF_DDR_CSN0_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_CSN0_CONF_DDR_CSN0_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_CSN0_CONF_DDR_CSN0_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_CSN0_CONF_DDR_CSN0_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_CSN0_CONF_DDR_CSN0_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_CSN0_CONF_DDR_CSN0_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_CSN0_CONF_DDR_CSN0_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_CSN0_CONF_DDR_CSN0_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_CSN0_CONF_DDR_CSN0_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_CSN0_CONF_DDR_CSN0_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_CKE */
#define CONTROL_CONF_DDR_CKE_CONF_DDR_CK_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_CKE_CONF_DDR_CK_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_CKE_CONF_DDR_CK_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_CKE_CONF_DDR_CK_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_CKE_CONF_DDR_CK_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_CKE_CONF_DDR_CK_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_CKE_CONF_DDR_CK_RSVD2   (0x000FFF80u)
#define CONTROL_CONF_DDR_CKE_CONF_DDR_CK_RSVD2_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_CKE_CONF_DDR_CK_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_CKE_CONF_DDR_CK_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_CKE_CONF_DDR_CK_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_CKE_CONF_DDR_CK_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_NCK */
#define CONTROL_CONF_DDR_NCK_CONF_DDR_NCK_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_NCK_CONF_DDR_NCK_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_NCK_CONF_DDR_NCK_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_NCK_CONF_DDR_NCK_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_NCK_CONF_DDR_NCK_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_NCK_CONF_DDR_NCK_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_NCK_CONF_DDR_NCK_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_NCK_CONF_DDR_NCK_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_NCK_CONF_DDR_NCK_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_NCK_CONF_DDR_NCK_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_NCK_CONF_DDR_NCK_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_NCK_CONF_DDR_NCK_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_CASN */
#define CONTROL_CONF_DDR_CASN_CONF_DDR_CASN_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_CASN_CONF_DDR_CASN_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_CASN_CONF_DDR_CASN_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_CASN_CONF_DDR_CASN_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_CASN_CONF_DDR_CASN_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_CASN_CONF_DDR_CASN_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_CASN_CONF_DDR_CASN_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_CASN_CONF_DDR_CASN_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_CASN_CONF_DDR_CASN_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_CASN_CONF_DDR_CASN_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_CASN_CONF_DDR_CASN_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_CASN_CONF_DDR_CASN_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_RASN */
#define CONTROL_CONF_DDR_RASN_CONF_DDR_RASN_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_RASN_CONF_DDR_RASN_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_RASN_CONF_DDR_RASN_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_RASN_CONF_DDR_RASN_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_RASN_CONF_DDR_RASN_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_RASN_CONF_DDR_RASN_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_RASN_CONF_DDR_RASN_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_RASN_CONF_DDR_RASN_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_RASN_CONF_DDR_RASN_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_RASN_CONF_DDR_RASN_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_RASN_CONF_DDR_RASN_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_RASN_CONF_DDR_RASN_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_WEN */
#define CONTROL_CONF_DDR_WEN_CONF_DDR_WEN_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_WEN_CONF_DDR_WEN_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_WEN_CONF_DDR_WEN_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_WEN_CONF_DDR_WEN_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_WEN_CONF_DDR_WEN_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_WEN_CONF_DDR_WEN_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_WEN_CONF_DDR_WEN_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_WEN_CONF_DDR_WEN_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_WEN_CONF_DDR_WEN_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_WEN_CONF_DDR_WEN_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_WEN_CONF_DDR_WEN_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_WEN_CONF_DDR_WEN_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_BA0 */
#define CONTROL_CONF_DDR_BA0_CONF_DDR_BA0_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_BA0_CONF_DDR_BA0_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_BA0_CONF_DDR_BA0_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_BA0_CONF_DDR_BA0_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_BA0_CONF_DDR_BA0_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_BA0_CONF_DDR_BA0_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_BA0_CONF_DDR_BA0_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_BA0_CONF_DDR_BA0_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_BA0_CONF_DDR_BA0_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_BA0_CONF_DDR_BA0_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_BA0_CONF_DDR_BA0_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_BA0_CONF_DDR_BA0_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_BA1 */
#define CONTROL_CONF_DDR_BA1_CONF_DDR_BA1_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_BA1_CONF_DDR_BA1_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_BA1_CONF_DDR_BA1_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_BA1_CONF_DDR_BA1_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_BA1_CONF_DDR_BA1_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_BA1_CONF_DDR_BA1_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_BA1_CONF_DDR_BA1_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_BA1_CONF_DDR_BA1_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_BA1_CONF_DDR_BA1_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_BA1_CONF_DDR_BA1_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_BA1_CONF_DDR_BA1_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_BA1_CONF_DDR_BA1_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_BA2 */
#define CONTROL_CONF_DDR_BA2_CONF_DDR_BA2_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_BA2_CONF_DDR_BA2_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_BA2_CONF_DDR_BA2_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_BA2_CONF_DDR_BA2_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_BA2_CONF_DDR_BA2_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_BA2_CONF_DDR_BA2_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_BA2_CONF_DDR_BA2_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_BA2_CONF_DDR_BA2_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_BA2_CONF_DDR_BA2_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_BA2_CONF_DDR_BA2_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_BA2_CONF_DDR_BA2_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_BA2_CONF_DDR_BA2_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_A0 */
#define CONTROL_CONF_DDR_A0_CONF_DDR_A0_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_A0_CONF_DDR_A0_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_A0_CONF_DDR_A0_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_A0_CONF_DDR_A0_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_A0_CONF_DDR_A0_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_A0_CONF_DDR_A0_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_A0_CONF_DDR_A0_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_A0_CONF_DDR_A0_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_A0_CONF_DDR_A0_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_A0_CONF_DDR_A0_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_A0_CONF_DDR_A0_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_A0_CONF_DDR_A0_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_A1 */
#define CONTROL_CONF_DDR_A1_CONF_DDR_A1_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_A1_CONF_DDR_A1_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_A1_CONF_DDR_A1_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_A1_CONF_DDR_A1_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_A1_CONF_DDR_A1_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_A1_CONF_DDR_A1_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_A1_CONF_DDR_A1_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_A1_CONF_DDR_A1_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_A1_CONF_DDR_A1_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_A1_CONF_DDR_A1_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_A1_CONF_DDR_A1_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_A1_CONF_DDR_A1_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_A2 */
#define CONTROL_CONF_DDR_A2_CONF_DDR_A2_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_A2_CONF_DDR_A2_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_A2_CONF_DDR_A2_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_A2_CONF_DDR_A2_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_A2_CONF_DDR_A2_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_A2_CONF_DDR_A2_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_A2_CONF_DDR_A2_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_A2_CONF_DDR_A2_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_A2_CONF_DDR_A2_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_A2_CONF_DDR_A2_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_A2_CONF_DDR_A2_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_A2_CONF_DDR_A2_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_A3 */
#define CONTROL_CONF_DDR_A3_CONF_DDR_A3_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_A3_CONF_DDR_A3_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_A3_CONF_DDR_A3_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_A3_CONF_DDR_A3_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_A3_CONF_DDR_A3_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_A3_CONF_DDR_A3_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_A3_CONF_DDR_A3_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_A3_CONF_DDR_A3_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_A3_CONF_DDR_A3_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_A3_CONF_DDR_A3_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_A3_CONF_DDR_A3_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_A3_CONF_DDR_A3_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_A4 */
#define CONTROL_CONF_DDR_A4_CONF_DDR_A4_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_A4_CONF_DDR_A4_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_A4_CONF_DDR_A4_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_A4_CONF_DDR_A4_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_A4_CONF_DDR_A4_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_A4_CONF_DDR_A4_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_A4_CONF_DDR_A4_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_A4_CONF_DDR_A4_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_A4_CONF_DDR_A4_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_A4_CONF_DDR_A4_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_A4_CONF_DDR_A4_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_A4_CONF_DDR_A4_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_A5 */
#define CONTROL_CONF_DDR_A5_CONF_DDR_A5_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_A5_CONF_DDR_A5_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_A5_CONF_DDR_A5_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_A5_CONF_DDR_A5_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_A5_CONF_DDR_A5_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_A5_CONF_DDR_A5_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_A5_CONF_DDR_A5_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_A5_CONF_DDR_A5_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_A5_CONF_DDR_A5_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_A5_CONF_DDR_A5_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_A5_CONF_DDR_A5_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_A5_CONF_DDR_A5_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_A6 */
#define CONTROL_CONF_DDR_A6_CONF_DDR_A6_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_A6_CONF_DDR_A6_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_A6_CONF_DDR_A6_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_A6_CONF_DDR_A6_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_A6_CONF_DDR_A6_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_A6_CONF_DDR_A6_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_A6_CONF_DDR_A6_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_A6_CONF_DDR_A6_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_A6_CONF_DDR_A6_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_A6_CONF_DDR_A6_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_A6_CONF_DDR_A6_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_A6_CONF_DDR_A6_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_A7 */
#define CONTROL_CONF_DDR_A7_CONF_DDR_A7_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_A7_CONF_DDR_A7_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_A7_CONF_DDR_A7_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_A7_CONF_DDR_A7_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_A7_CONF_DDR_A7_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_A7_CONF_DDR_A7_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_A7_CONF_DDR_A7_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_A7_CONF_DDR_A7_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_A7_CONF_DDR_A7_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_A7_CONF_DDR_A7_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_A7_CONF_DDR_A7_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_A7_CONF_DDR_A7_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_A8 */
#define CONTROL_CONF_DDR_A8_CONF_DDR_A8_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_A8_CONF_DDR_A8_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_A8_CONF_DDR_A8_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_A8_CONF_DDR_A8_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_A8_CONF_DDR_A8_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_A8_CONF_DDR_A8_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_A8_CONF_DDR_A8_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_A8_CONF_DDR_A8_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_A8_CONF_DDR_A8_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_A8_CONF_DDR_A8_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_A8_CONF_DDR_A8_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_A8_CONF_DDR_A8_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_A9 */
#define CONTROL_CONF_DDR_A9_CONF_DDR_A9_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_A9_CONF_DDR_A9_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_A9_CONF_DDR_A9_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_A9_CONF_DDR_A9_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_A9_CONF_DDR_A9_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_A9_CONF_DDR_A9_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_A9_CONF_DDR_A9_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_A9_CONF_DDR_A9_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_A9_CONF_DDR_A9_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_A9_CONF_DDR_A9_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_A9_CONF_DDR_A9_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_A9_CONF_DDR_A9_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_A10 */
#define CONTROL_CONF_DDR_A10_CONF_DDR_A10_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_A10_CONF_DDR_A10_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_A10_CONF_DDR_A10_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_A10_CONF_DDR_A10_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_A10_CONF_DDR_A10_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_A10_CONF_DDR_A10_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_A10_CONF_DDR_A10_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_A10_CONF_DDR_A10_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_A10_CONF_DDR_A10_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_A10_CONF_DDR_A10_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_A10_CONF_DDR_A10_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_A10_CONF_DDR_A10_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_A11 */
#define CONTROL_CONF_DDR_A11_CONF_DDR_A11_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_A11_CONF_DDR_A11_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_A11_CONF_DDR_A11_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_A11_CONF_DDR_A11_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_A11_CONF_DDR_A11_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_A11_CONF_DDR_A11_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_A11_CONF_DDR_A11_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_A11_CONF_DDR_A11_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_A11_CONF_DDR_A11_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_A11_CONF_DDR_A11_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_A11_CONF_DDR_A11_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_A11_CONF_DDR_A11_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_A12 */
#define CONTROL_CONF_DDR_A12_CONF_DDR_A12_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_A12_CONF_DDR_A12_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_A12_CONF_DDR_A12_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_A12_CONF_DDR_A12_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_A12_CONF_DDR_A12_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_A12_CONF_DDR_A12_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_A12_CONF_DDR_A12_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_A12_CONF_DDR_A12_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_A12_CONF_DDR_A12_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_A12_CONF_DDR_A12_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_A12_CONF_DDR_A12_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_A12_CONF_DDR_A12_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_A13 */
#define CONTROL_CONF_DDR_A13_CONF_DDR_A13_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_A13_CONF_DDR_A13_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_A13_CONF_DDR_A13_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_A13_CONF_DDR_A13_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_A13_CONF_DDR_A13_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_A13_CONF_DDR_A13_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_A13_CONF_DDR_A13_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_A13_CONF_DDR_A13_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_A13_CONF_DDR_A13_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_A13_CONF_DDR_A13_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_A13_CONF_DDR_A13_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_A13_CONF_DDR_A13_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_A14 */
#define CONTROL_CONF_DDR_A14_CONF_DDR_A14_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_A14_CONF_DDR_A14_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_A14_CONF_DDR_A14_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_A14_CONF_DDR_A14_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_A14_CONF_DDR_A14_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_A14_CONF_DDR_A14_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_A14_CONF_DDR_A14_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_A14_CONF_DDR_A14_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_A14_CONF_DDR_A14_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_A14_CONF_DDR_A14_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_A14_CONF_DDR_A14_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_A14_CONF_DDR_A14_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_A15 */
#define CONTROL_CONF_DDR_A15_CONF_DDR_A15_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_A15_CONF_DDR_A15_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_A15_CONF_DDR_A15_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_A15_CONF_DDR_A15_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_A15_CONF_DDR_A15_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_A15_CONF_DDR_A15_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_A15_CONF_DDR_A15_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_A15_CONF_DDR_A15_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_A15_CONF_DDR_A15_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_A15_CONF_DDR_A15_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_A15_CONF_DDR_A15_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_A15_CONF_DDR_A15_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_ODT */
#define CONTROL_CONF_DDR_ODT_CONF_DDR_ODT_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_ODT_CONF_DDR_ODT_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_ODT_CONF_DDR_ODT_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_ODT_CONF_DDR_ODT_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_ODT_CONF_DDR_ODT_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_ODT_CONF_DDR_ODT_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_ODT_CONF_DDR_ODT_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_ODT_CONF_DDR_ODT_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_ODT_CONF_DDR_ODT_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_ODT_CONF_DDR_ODT_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_ODT_CONF_DDR_ODT_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_ODT_CONF_DDR_ODT_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_D0 */
#define CONTROL_CONF_DDR_D0_CONF_DDR_D0_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_D0_CONF_DDR_D0_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_D0_CONF_DDR_D0_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_D0_CONF_DDR_D0_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_D0_CONF_DDR_D0_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_D0_CONF_DDR_D0_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_D0_CONF_DDR_D0_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_D0_CONF_DDR_D0_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_D0_CONF_DDR_D0_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_D0_CONF_DDR_D0_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_D0_CONF_DDR_D0_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_D0_CONF_DDR_D0_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_D1 */
#define CONTROL_CONF_DDR_D1_CONF_DDR_D1_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_D1_CONF_DDR_D1_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_D1_CONF_DDR_D1_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_D1_CONF_DDR_D1_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_D1_CONF_DDR_D1_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_D1_CONF_DDR_D1_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_D1_CONF_DDR_D1_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_D1_CONF_DDR_D1_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_D1_CONF_DDR_D1_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_D1_CONF_DDR_D1_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_D1_CONF_DDR_D1_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_D1_CONF_DDR_D1_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_D2 */
#define CONTROL_CONF_DDR_D2_CONF_DDR_D2_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_D2_CONF_DDR_D2_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_D2_CONF_DDR_D2_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_D2_CONF_DDR_D2_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_D2_CONF_DDR_D2_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_D2_CONF_DDR_D2_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_D2_CONF_DDR_D2_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_D2_CONF_DDR_D2_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_D2_CONF_DDR_D2_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_D2_CONF_DDR_D2_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_D2_CONF_DDR_D2_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_D2_CONF_DDR_D2_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_D3 */
#define CONTROL_CONF_DDR_D3_CONF_DDR_D3_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_D3_CONF_DDR_D3_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_D3_CONF_DDR_D3_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_D3_CONF_DDR_D3_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_D3_CONF_DDR_D3_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_D3_CONF_DDR_D3_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_D3_CONF_DDR_D3_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_D3_CONF_DDR_D3_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_D3_CONF_DDR_D3_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_D3_CONF_DDR_D3_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_D3_CONF_DDR_D3_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_D3_CONF_DDR_D3_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_D4 */
#define CONTROL_CONF_DDR_D4_CONF_DDR_D4_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_D4_CONF_DDR_D4_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_D4_CONF_DDR_D4_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_D4_CONF_DDR_D4_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_D4_CONF_DDR_D4_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_D4_CONF_DDR_D4_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_D4_CONF_DDR_D4_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_D4_CONF_DDR_D4_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_D4_CONF_DDR_D4_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_D4_CONF_DDR_D4_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_D4_CONF_DDR_D4_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_D4_CONF_DDR_D4_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_D5 */
#define CONTROL_CONF_DDR_D5_CONF_DDR_D5_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_D5_CONF_DDR_D5_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_D5_CONF_DDR_D5_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_D5_CONF_DDR_D5_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_D5_CONF_DDR_D5_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_D5_CONF_DDR_D5_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_D5_CONF_DDR_D5_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_D5_CONF_DDR_D5_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_D5_CONF_DDR_D5_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_D5_CONF_DDR_D5_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_D5_CONF_DDR_D5_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_D5_CONF_DDR_D5_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_D6 */
#define CONTROL_CONF_DDR_D6_CONF_DDR_D6_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_D6_CONF_DDR_D6_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_D6_CONF_DDR_D6_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_D6_CONF_DDR_D6_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_D6_CONF_DDR_D6_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_D6_CONF_DDR_D6_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_D6_CONF_DDR_D6_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_D6_CONF_DDR_D6_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_D6_CONF_DDR_D6_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_D6_CONF_DDR_D6_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_D6_CONF_DDR_D6_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_D6_CONF_DDR_D6_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_D7 */
#define CONTROL_CONF_DDR_D7_CONF_DDR_D7_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_D7_CONF_DDR_D7_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_D7_CONF_DDR_D7_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_D7_CONF_DDR_D7_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_D7_CONF_DDR_D7_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_D7_CONF_DDR_D7_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_D7_CONF_DDR_D7_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_D7_CONF_DDR_D7_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_D7_CONF_DDR_D7_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_D7_CONF_DDR_D7_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_D7_CONF_DDR_D7_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_D7_CONF_DDR_D7_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_D8 */
#define CONTROL_CONF_DDR_D8_CONF_DDR_D8_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_D8_CONF_DDR_D8_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_D8_CONF_DDR_D8_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_D8_CONF_DDR_D8_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_D8_CONF_DDR_D8_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_D8_CONF_DDR_D8_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_D8_CONF_DDR_D8_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_D8_CONF_DDR_D8_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_D8_CONF_DDR_D8_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_D8_CONF_DDR_D8_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_D8_CONF_DDR_D8_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_D8_CONF_DDR_D8_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_D9 */
#define CONTROL_CONF_DDR_D9_CONF_DDR_D9_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_D9_CONF_DDR_D9_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_D9_CONF_DDR_D9_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_D9_CONF_DDR_D9_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_D9_CONF_DDR_D9_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_D9_CONF_DDR_D9_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_D9_CONF_DDR_D9_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_D9_CONF_DDR_D9_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_D9_CONF_DDR_D9_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_D9_CONF_DDR_D9_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_D9_CONF_DDR_D9_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_D9_CONF_DDR_D9_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_D10 */
#define CONTROL_CONF_DDR_D10_CONF_DDR_D10_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_D10_CONF_DDR_D10_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_D10_CONF_DDR_D10_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_D10_CONF_DDR_D10_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_D10_CONF_DDR_D10_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_D10_CONF_DDR_D10_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_D10_CONF_DDR_D10_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_D10_CONF_DDR_D10_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_D10_CONF_DDR_D10_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_D10_CONF_DDR_D10_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_D10_CONF_DDR_D10_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_D10_CONF_DDR_D10_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_D11 */
#define CONTROL_CONF_DDR_D11_CONF_DDR_D11_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_D11_CONF_DDR_D11_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_D11_CONF_DDR_D11_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_D11_CONF_DDR_D11_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_D11_CONF_DDR_D11_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_D11_CONF_DDR_D11_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_D11_CONF_DDR_D11_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_D11_CONF_DDR_D11_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_D11_CONF_DDR_D11_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_D11_CONF_DDR_D11_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_D11_CONF_DDR_D11_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_D11_CONF_DDR_D11_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_D12 */
#define CONTROL_CONF_DDR_D12_CONF_DDR_D12_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_D12_CONF_DDR_D12_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_D12_CONF_DDR_D12_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_D12_CONF_DDR_D12_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_D12_CONF_DDR_D12_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_D12_CONF_DDR_D12_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_D12_CONF_DDR_D12_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_D12_CONF_DDR_D12_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_D12_CONF_DDR_D12_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_D12_CONF_DDR_D12_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_D12_CONF_DDR_D12_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_D12_CONF_DDR_D12_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_D13 */
#define CONTROL_CONF_DDR_D13_CONF_DDR_D13_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_D13_CONF_DDR_D13_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_D13_CONF_DDR_D13_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_D13_CONF_DDR_D13_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_D13_CONF_DDR_D13_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_D13_CONF_DDR_D13_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_D13_CONF_DDR_D13_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_D13_CONF_DDR_D13_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_D13_CONF_DDR_D13_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_D13_CONF_DDR_D13_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_D13_CONF_DDR_D13_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_D13_CONF_DDR_D13_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_D14 */
#define CONTROL_CONF_DDR_D14_CONF_DDR_D14_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_D14_CONF_DDR_D14_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_D14_CONF_DDR_D14_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_D14_CONF_DDR_D14_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_D14_CONF_DDR_D14_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_D14_CONF_DDR_D14_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_D14_CONF_DDR_D14_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_D14_CONF_DDR_D14_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_D14_CONF_DDR_D14_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_D14_CONF_DDR_D14_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_D14_CONF_DDR_D14_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_D14_CONF_DDR_D14_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_D15 */
#define CONTROL_CONF_DDR_D15_CONF_DDR_D15_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_D15_CONF_DDR_D15_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_D15_CONF_DDR_D15_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_D15_CONF_DDR_D15_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_D15_CONF_DDR_D15_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_D15_CONF_DDR_D15_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_D15_CONF_DDR_D15_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_D15_CONF_DDR_D15_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_D15_CONF_DDR_D15_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_D15_CONF_DDR_D15_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_D15_CONF_DDR_D15_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_D15_CONF_DDR_D15_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_DQM0 */
#define CONTROL_CONF_DDR_DQM0_CONF_DDR_DQM0_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_DQM0_CONF_DDR_DQM0_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_DQM0_CONF_DDR_DQM0_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_DQM0_CONF_DDR_DQM0_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_DQM0_CONF_DDR_DQM0_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_DQM0_CONF_DDR_DQM0_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_DQM0_CONF_DDR_DQM0_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_DQM0_CONF_DDR_DQM0_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_DQM0_CONF_DDR_DQM0_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_DQM0_CONF_DDR_DQM0_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_DQM0_CONF_DDR_DQM0_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_DQM0_CONF_DDR_DQM0_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_DQM1 */
#define CONTROL_CONF_DDR_DQM1_CONF_DDR_DQM1_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_DQM1_CONF_DDR_DQM1_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_DQM1_CONF_DDR_DQM1_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_DQM1_CONF_DDR_DQM1_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_DQM1_CONF_DDR_DQM1_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_DQM1_CONF_DDR_DQM1_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_DQM1_CONF_DDR_DQM1_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_DQM1_CONF_DDR_DQM1_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_DQM1_CONF_DDR_DQM1_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_DQM1_CONF_DDR_DQM1_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_DQM1_CONF_DDR_DQM1_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_DQM1_CONF_DDR_DQM1_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_DQS0 */
#define CONTROL_CONF_DDR_DQS0_CONF_DDR_DQS0_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_DQS0_CONF_DDR_DQS0_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_DQS0_CONF_DDR_DQS0_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_DQS0_CONF_DDR_DQS0_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_DQS0_CONF_DDR_DQS0_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_DQS0_CONF_DDR_DQS0_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_DQS0_CONF_DDR_DQS0_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_DQS0_CONF_DDR_DQS0_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_DQS0_CONF_DDR_DQS0_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_DQS0_CONF_DDR_DQS0_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_DQS0_CONF_DDR_DQS0_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_DQS0_CONF_DDR_DQS0_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_DQSN0 */
#define CONTROL_CONF_DDR_DQSN0_CONF_DDR_DQSN0_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_DQSN0_CONF_DDR_DQSN0_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_DQSN0_CONF_DDR_DQSN0_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_DQSN0_CONF_DDR_DQSN0_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_DQSN0_CONF_DDR_DQSN0_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_DQSN0_CONF_DDR_DQSN0_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_DQSN0_CONF_DDR_DQSN0_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_DQSN0_CONF_DDR_DQSN0_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_DQSN0_CONF_DDR_DQSN0_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_DQSN0_CONF_DDR_DQSN0_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_DQSN0_CONF_DDR_DQSN0_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_DQSN0_CONF_DDR_DQSN0_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_DQS1 */
#define CONTROL_CONF_DDR_DQS1_CONF_DDR_DQS1_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_DQS1_CONF_DDR_DQS1_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_DQS1_CONF_DDR_DQS1_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_DQS1_CONF_DDR_DQS1_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_DQS1_CONF_DDR_DQS1_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_DQS1_CONF_DDR_DQS1_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_DQS1_CONF_DDR_DQS1_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_DQS1_CONF_DDR_DQS1_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_DQS1_CONF_DDR_DQS1_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_DQS1_CONF_DDR_DQS1_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_DQS1_CONF_DDR_DQS1_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_DQS1_CONF_DDR_DQS1_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_DQSN1 */
#define CONTROL_CONF_DDR_DQSN1_CONF_DDR_DQSN1_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_DQSN1_CONF_DDR_DQSN1_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_DQSN1_CONF_DDR_DQSN1_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_DQSN1_CONF_DDR_DQSN1_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_DQSN1_CONF_DDR_DQSN1_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_DQSN1_CONF_DDR_DQSN1_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_DQSN1_CONF_DDR_DQSN1_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_DQSN1_CONF_DDR_DQSN1_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_DQSN1_CONF_DDR_DQSN1_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_DQSN1_CONF_DDR_DQSN1_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_DQSN1_CONF_DDR_DQSN1_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_DQSN1_CONF_DDR_DQSN1_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_VREF */
#define CONTROL_CONF_DDR_VREF_CONF_DDR_VREF_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_VREF_CONF_DDR_VREF_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_VREF_CONF_DDR_VREF_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_VREF_CONF_DDR_VREF_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_VREF_CONF_DDR_VREF_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_VREF_CONF_DDR_VREF_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_VREF_CONF_DDR_VREF_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_VREF_CONF_DDR_VREF_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_VREF_CONF_DDR_VREF_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_VREF_CONF_DDR_VREF_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_VREF_CONF_DDR_VREF_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_VREF_CONF_DDR_VREF_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_VTP */
#define CONTROL_CONF_DDR_VTP_CONF_DDR_VTP_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_VTP_CONF_DDR_VTP_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_VTP_CONF_DDR_VTP_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_VTP_CONF_DDR_VTP_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_VTP_CONF_DDR_VTP_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_VTP_CONF_DDR_VTP_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_VTP_CONF_DDR_VTP_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_VTP_CONF_DDR_VTP_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_VTP_CONF_DDR_VTP_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_VTP_CONF_DDR_VTP_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_VTP_CONF_DDR_VTP_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_VTP_CONF_DDR_VTP_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_STRBEN0 */
#define CONTROL_CONF_DDR_STRBEN0_CONF_DDR_STRBEN0_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_STRBEN0_CONF_DDR_STRBEN0_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_STRBEN0_CONF_DDR_STRBEN0_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_STRBEN0_CONF_DDR_STRBEN0_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_STRBEN0_CONF_DDR_STRBEN0_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_STRBEN0_CONF_DDR_STRBEN0_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_STRBEN0_CONF_DDR_STRBEN0_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_STRBEN0_CONF_DDR_STRBEN0_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_STRBEN0_CONF_DDR_STRBEN0_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_STRBEN0_CONF_DDR_STRBEN0_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_STRBEN0_CONF_DDR_STRBEN0_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_STRBEN0_CONF_DDR_STRBEN0_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_DDR_STRBEN1 */
#define CONTROL_CONF_DDR_STRBEN1_CONF_DDR_STRBEN1_MMODE   (0x00000007u)
#define CONTROL_CONF_DDR_STRBEN1_CONF_DDR_STRBEN1_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_DDR_STRBEN1_CONF_DDR_STRBEN1_PUDEN   (0x00000008u)
#define CONTROL_CONF_DDR_STRBEN1_CONF_DDR_STRBEN1_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_DDR_STRBEN1_CONF_DDR_STRBEN1_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_DDR_STRBEN1_CONF_DDR_STRBEN1_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_DDR_STRBEN1_CONF_DDR_STRBEN1_RSVD   (0x000FFF80u)
#define CONTROL_CONF_DDR_STRBEN1_CONF_DDR_STRBEN1_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_DDR_STRBEN1_CONF_DDR_STRBEN1_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_DDR_STRBEN1_CONF_DDR_STRBEN1_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_DDR_STRBEN1_CONF_DDR_STRBEN1_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_DDR_STRBEN1_CONF_DDR_STRBEN1_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_AIN7 */
#define CONTROL_CONF_AIN7_CONF_AIN7_MMODE   (0x00000007u)
#define CONTROL_CONF_AIN7_CONF_AIN7_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_AIN7_CONF_AIN7_PUDEN   (0x00000008u)
#define CONTROL_CONF_AIN7_CONF_AIN7_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_AIN7_CONF_AIN7_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_AIN7_CONF_AIN7_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_AIN7_CONF_AIN7_RSVD   (0x000FFF80u)
#define CONTROL_CONF_AIN7_CONF_AIN7_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_AIN7_CONF_AIN7_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_AIN7_CONF_AIN7_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_AIN7_CONF_AIN7_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_AIN7_CONF_AIN7_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_AIN6 */
#define CONTROL_CONF_AIN6_CONF_AIN6_MMODE   (0x00000007u)
#define CONTROL_CONF_AIN6_CONF_AIN6_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_AIN6_CONF_AIN6_PUDEN   (0x00000008u)
#define CONTROL_CONF_AIN6_CONF_AIN6_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_AIN6_CONF_AIN6_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_AIN6_CONF_AIN6_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_AIN6_CONF_AIN6_RSVD   (0x000FFF80u)
#define CONTROL_CONF_AIN6_CONF_AIN6_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_AIN6_CONF_AIN6_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_AIN6_CONF_AIN6_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_AIN6_CONF_AIN6_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_AIN6_CONF_AIN6_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_AIN5 */
#define CONTROL_CONF_AIN5_CONF_AIN5_MMODE   (0x00000007u)
#define CONTROL_CONF_AIN5_CONF_AIN5_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_AIN5_CONF_AIN5_PUDEN   (0x00000008u)
#define CONTROL_CONF_AIN5_CONF_AIN5_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_AIN5_CONF_AIN5_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_AIN5_CONF_AIN5_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_AIN5_CONF_AIN5_RSVD   (0x000FFF80u)
#define CONTROL_CONF_AIN5_CONF_AIN5_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_AIN5_CONF_AIN5_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_AIN5_CONF_AIN5_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_AIN5_CONF_AIN5_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_AIN5_CONF_AIN5_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_AIN4 */
#define CONTROL_CONF_AIN4_CONF_AIN4_MMODE   (0x00000007u)
#define CONTROL_CONF_AIN4_CONF_AIN4_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_AIN4_CONF_AIN4_PUDEN   (0x00000008u)
#define CONTROL_CONF_AIN4_CONF_AIN4_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_AIN4_CONF_AIN4_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_AIN4_CONF_AIN4_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_AIN4_CONF_AIN4_RSVD   (0x000FFF80u)
#define CONTROL_CONF_AIN4_CONF_AIN4_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_AIN4_CONF_AIN4_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_AIN4_CONF_AIN4_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_AIN4_CONF_AIN4_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_AIN4_CONF_AIN4_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_AIN3 */
#define CONTROL_CONF_AIN3_CONF_AIN3_MMODE   (0x00000007u)
#define CONTROL_CONF_AIN3_CONF_AIN3_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_AIN3_CONF_AIN3_PUDEN   (0x00000008u)
#define CONTROL_CONF_AIN3_CONF_AIN3_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_AIN3_CONF_AIN3_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_AIN3_CONF_AIN3_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_AIN3_CONF_AIN3_RSVD   (0x000FFF80u)
#define CONTROL_CONF_AIN3_CONF_AIN3_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_AIN3_CONF_AIN3_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_AIN3_CONF_AIN3_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_AIN3_CONF_AIN3_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_AIN3_CONF_AIN3_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_AIN2 */
#define CONTROL_CONF_AIN2_CONF_AIN2_MMODE   (0x00000007u)
#define CONTROL_CONF_AIN2_CONF_AIN2_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_AIN2_CONF_AIN2_PUDEN   (0x00000008u)
#define CONTROL_CONF_AIN2_CONF_AIN2_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_AIN2_CONF_AIN2_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_AIN2_CONF_AIN2_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_AIN2_CONF_AIN2_RSVD   (0x000FFF80u)
#define CONTROL_CONF_AIN2_CONF_AIN2_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_AIN2_CONF_AIN2_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_AIN2_CONF_AIN2_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_AIN2_CONF_AIN2_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_AIN2_CONF_AIN2_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_AIN1 */
#define CONTROL_CONF_AIN1_CONF_AIN1_MMODE   (0x00000007u)
#define CONTROL_CONF_AIN1_CONF_AIN1_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_AIN1_CONF_AIN1_PUDEN   (0x00000008u)
#define CONTROL_CONF_AIN1_CONF_AIN1_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_AIN1_CONF_AIN1_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_AIN1_CONF_AIN1_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_AIN1_CONF_AIN1_RSVD   (0x000FFF80u)
#define CONTROL_CONF_AIN1_CONF_AIN1_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_AIN1_CONF_AIN1_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_AIN1_CONF_AIN1_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_AIN1_CONF_AIN1_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_AIN1_CONF_AIN1_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_AIN0 */
#define CONTROL_CONF_AIN0_CONF_AIN0_MMODE   (0x00000007u)
#define CONTROL_CONF_AIN0_CONF_AIN0_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_AIN0_CONF_AIN0_PUDEN   (0x00000008u)
#define CONTROL_CONF_AIN0_CONF_AIN0_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_AIN0_CONF_AIN0_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_AIN0_CONF_AIN0_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_AIN0_CONF_AIN0_RSVD   (0x000FFF80u)
#define CONTROL_CONF_AIN0_CONF_AIN0_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_AIN0_CONF_AIN0_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_AIN0_CONF_AIN0_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_AIN0_CONF_AIN0_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_AIN0_CONF_AIN0_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_VREFP */
#define CONTROL_CONF_VREFP_CONF_VREFP_MMODE   (0x00000007u)
#define CONTROL_CONF_VREFP_CONF_VREFP_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_VREFP_CONF_VREFP_PUDEN   (0x00000008u)
#define CONTROL_CONF_VREFP_CONF_VREFP_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_VREFP_CONF_VREFP_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_VREFP_CONF_VREFP_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_VREFP_CONF_VREFP_RSVD   (0x000FFF80u)
#define CONTROL_CONF_VREFP_CONF_VREFP_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_VREFP_CONF_VREFP_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_VREFP_CONF_VREFP_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_VREFP_CONF_VREFP_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_VREFP_CONF_VREFP_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_VREFN */
#define CONTROL_CONF_VREFN_CONF_VREFN_MMODE   (0x00000007u)
#define CONTROL_CONF_VREFN_CONF_VREFN_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_VREFN_CONF_VREFN_PUDEN   (0x00000008u)
#define CONTROL_CONF_VREFN_CONF_VREFN_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_VREFN_CONF_VREFN_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_VREFN_CONF_VREFN_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_VREFN_CONF_VREFN_RSVD   (0x000FFF80u)
#define CONTROL_CONF_VREFN_CONF_VREFN_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_VREFN_CONF_VREFN_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_VREFN_CONF_VREFN_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_VREFN_CONF_VREFN_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_VREFN_CONF_VREFN_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_AVDD */
#define CONTROL_CONF_AVDD_CONF_AVDD_MMODE   (0x00000007u)
#define CONTROL_CONF_AVDD_CONF_AVDD_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_AVDD_CONF_AVDD_PUDEN   (0x00000008u)
#define CONTROL_CONF_AVDD_CONF_AVDD_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_AVDD_CONF_AVDD_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_AVDD_CONF_AVDD_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_AVDD_CONF_AVDD_RSVD   (0x000FFF80u)
#define CONTROL_CONF_AVDD_CONF_AVDD_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_AVDD_CONF_AVDD_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_AVDD_CONF_AVDD_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_AVDD_CONF_AVDD_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_AVDD_CONF_AVDD_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_AVSS */
#define CONTROL_CONF_AVSS_CONF_AVSS_MMODE   (0x00000007u)
#define CONTROL_CONF_AVSS_CONF_AVSS_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_AVSS_CONF_AVSS_PUDEN   (0x00000008u)
#define CONTROL_CONF_AVSS_CONF_AVSS_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_AVSS_CONF_AVSS_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_AVSS_CONF_AVSS_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_AVSS_CONF_AVSS_RSVD   (0x000FFF80u)
#define CONTROL_CONF_AVSS_CONF_AVSS_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_AVSS_CONF_AVSS_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_AVSS_CONF_AVSS_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_AVSS_CONF_AVSS_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_AVSS_CONF_AVSS_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_IFORCE */
#define CONTROL_CONF_IFORCE_CONF_IFORCE_MMODE   (0x00000007u)
#define CONTROL_CONF_IFORCE_CONF_IFORCE_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_IFORCE_CONF_IFORCE_PUDEN   (0x00000008u)
#define CONTROL_CONF_IFORCE_CONF_IFORCE_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_IFORCE_CONF_IFORCE_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_IFORCE_CONF_IFORCE_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_IFORCE_CONF_IFORCE_RSVD   (0x000FFF80u)
#define CONTROL_CONF_IFORCE_CONF_IFORCE_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_IFORCE_CONF_IFORCE_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_IFORCE_CONF_IFORCE_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_IFORCE_CONF_IFORCE_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_IFORCE_CONF_IFORCE_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_VSENSE */
#define CONTROL_CONF_VSENSE_CONF_VSENSE_MMODE   (0x00000007u)
#define CONTROL_CONF_VSENSE_CONF_VSENSE_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_VSENSE_CONF_VSENSE_PUDEN   (0x00000008u)
#define CONTROL_CONF_VSENSE_CONF_VSENSE_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_VSENSE_CONF_VSENSE_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_VSENSE_CONF_VSENSE_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_VSENSE_CONF_VSENSE_RSVD   (0x000FFF80u)
#define CONTROL_CONF_VSENSE_CONF_VSENSE_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_VSENSE_CONF_VSENSE_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_VSENSE_CONF_VSENSE_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_VSENSE_CONF_VSENSE_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_VSENSE_CONF_VSENSE_SLEWCTRL_SHIFT   (0x00000006u)


/* CONF_TESTOUT */
#define CONTROL_CONF_TESTOUT_CONF_TESTOUT_MMODE   (0x00000007u)
#define CONTROL_CONF_TESTOUT_CONF_TESTOUT_MMODE_SHIFT   (0x00000000u)

#define CONTROL_CONF_TESTOUT_CONF_TESTOUT_PUDEN   (0x00000008u)
#define CONTROL_CONF_TESTOUT_CONF_TESTOUT_PUDEN_SHIFT   (0x00000003u)

#define CONTROL_CONF_TESTOUT_CONF_TESTOUT_PUTYPESEL   (0x00000010u)
#define CONTROL_CONF_TESTOUT_CONF_TESTOUT_PUTYPESEL_SHIFT   (0x00000004u)

#define CONTROL_CONF_TESTOUT_CONF_TESTOUT_RSVD   (0x000FFF80u)
#define CONTROL_CONF_TESTOUT_CONF_TESTOUT_RSVD_SHIFT   (0x00000007u)

#define CONTROL_CONF_TESTOUT_CONF_TESTOUT_RXACTIVE   (0x00000020u)
#define CONTROL_CONF_TESTOUT_CONF_TESTOUT_RXACTIVE_SHIFT   (0x00000005u)

#define CONTROL_CONF_TESTOUT_CONF_TESTOUT_SLEWCTRL   (0x00000040u)
#define CONTROL_CONF_TESTOUT_CONF_TESTOUT_SLEWCTRL_SHIFT   (0x00000006u)


/* CQDETECT_STATUS */
#define CONTROL_CQDETECT_STATUS_CQERR_GEMAC_A   (0x00000800u)
#define CONTROL_CQDETECT_STATUS_CQERR_GEMAC_A_SHIFT   (0x0000000Bu)

#define CONTROL_CQDETECT_STATUS_CQERR_GEMAC_B   (0x00001000u)
#define CONTROL_CQDETECT_STATUS_CQERR_GEMAC_B_SHIFT   (0x0000000Cu)

#define CONTROL_CQDETECT_STATUS_CQERR_GENERAL   (0x00002000u)
#define CONTROL_CQDETECT_STATUS_CQERR_GENERAL_SHIFT   (0x0000000Du)

#define CONTROL_CQDETECT_STATUS_CQERR_GPMC   (0x00000100u)
#define CONTROL_CQDETECT_STATUS_CQERR_GPMC_SHIFT   (0x00000008u)

#define CONTROL_CQDETECT_STATUS_CQERR_MMCSD_A   (0x00000200u)
#define CONTROL_CQDETECT_STATUS_CQERR_MMCSD_A_SHIFT   (0x00000009u)

#define CONTROL_CQDETECT_STATUS_CQERR_MMCSD_B   (0x00000400u)
#define CONTROL_CQDETECT_STATUS_CQERR_MMCSD_B_SHIFT   (0x0000000Au)

#define CONTROL_CQDETECT_STATUS_CQMODE_GEMAC_A   (0x00080000u)
#define CONTROL_CQDETECT_STATUS_CQMODE_GEMAC_A_SHIFT   (0x00000013u)

#define CONTROL_CQDETECT_STATUS_CQMODE_GEMAC_B   (0x00100000u)
#define CONTROL_CQDETECT_STATUS_CQMODE_GEMAC_B_SHIFT   (0x00000014u)

#define CONTROL_CQDETECT_STATUS_CQMODE_GENERAL   (0x00200000u)
#define CONTROL_CQDETECT_STATUS_CQMODE_GENERAL_SHIFT   (0x00000015u)

#define CONTROL_CQDETECT_STATUS_CQMODE_GPMC   (0x00010000u)
#define CONTROL_CQDETECT_STATUS_CQMODE_GPMC_SHIFT   (0x00000010u)

#define CONTROL_CQDETECT_STATUS_CQMODE_MMCSD_A   (0x00020000u)
#define CONTROL_CQDETECT_STATUS_CQMODE_MMCSD_A_SHIFT   (0x00000011u)

#define CONTROL_CQDETECT_STATUS_CQMODE_MMCSD_B   (0x00040000u)
#define CONTROL_CQDETECT_STATUS_CQMODE_MMCSD_B_SHIFT   (0x00000012u)

#define CONTROL_CQDETECT_STATUS_CQSTAT_GEMAC_A   (0x00000008u)
#define CONTROL_CQDETECT_STATUS_CQSTAT_GEMAC_A_SHIFT   (0x00000003u)

#define CONTROL_CQDETECT_STATUS_CQSTAT_GEMAC_B   (0x00000010u)
#define CONTROL_CQDETECT_STATUS_CQSTAT_GEMAC_B_SHIFT   (0x00000004u)

#define CONTROL_CQDETECT_STATUS_CQSTAT_GENERAL   (0x00000020u)
#define CONTROL_CQDETECT_STATUS_CQSTAT_GENERAL_SHIFT   (0x00000005u)

#define CONTROL_CQDETECT_STATUS_CQSTAT_GPMC   (0x00000001u)
#define CONTROL_CQDETECT_STATUS_CQSTAT_GPMC_SHIFT   (0x00000000u)

#define CONTROL_CQDETECT_STATUS_CQSTAT_MMCSD_A   (0x00000002u)
#define CONTROL_CQDETECT_STATUS_CQSTAT_MMCSD_A_SHIFT   (0x00000001u)

#define CONTROL_CQDETECT_STATUS_CQSTAT_MMCSD_B   (0x00000004u)
#define CONTROL_CQDETECT_STATUS_CQSTAT_MMCSD_B_SHIFT   (0x00000002u)

#define CONTROL_CQDETECT_STATUS_RSVD2   (0x0000C000u)
#define CONTROL_CQDETECT_STATUS_RSVD2_SHIFT   (0x0000000Eu)

#define CONTROL_CQDETECT_STATUS_RSVD3   (0xFFC00000u)
#define CONTROL_CQDETECT_STATUS_RSVD3_SHIFT   (0x00000016u)


/* DDR_IO_CTRL */
#define CONTROL_DDR_IO_CTRL_DDR3_RST_DEF_VAL   (0x80000000u)
#define CONTROL_DDR_IO_CTRL_DDR3_RST_DEF_VAL_SHIFT   (0x0000001Fu)

#define CONTROL_DDR_IO_CTRL_DDR_WUCLK_DISABLE   (0x40000000u)
#define CONTROL_DDR_IO_CTRL_DDR_WUCLK_DISABLE_SHIFT   (0x0000001Eu)

#define CONTROL_DDR_IO_CTRL_MDDR_SEL   (0x10000000u)
#define CONTROL_DDR_IO_CTRL_MDDR_SEL_SHIFT   (0x0000001Cu)

#define CONTROL_DDR_IO_CTRL_RSVD2   (0x20000000u)
#define CONTROL_DDR_IO_CTRL_RSVD2_SHIFT   (0x0000001Du)


/* VTP_CTRL */
#define CONTROL_VTP_CTRL_CLRZ   (0x00000001u)
#define CONTROL_VTP_CTRL_CLRZ_SHIFT   (0x00000000u)

#define CONTROL_VTP_CTRL_ENABLE   (0x00000040u)
#define CONTROL_VTP_CTRL_ENABLE_SHIFT   (0x00000006u)

#define CONTROL_VTP_CTRL_FILTER   (0x0000000Eu)
#define CONTROL_VTP_CTRL_FILTER_SHIFT   (0x00000001u)

#define CONTROL_VTP_CTRL_LOCK   (0x00000010u)
#define CONTROL_VTP_CTRL_LOCK_SHIFT   (0x00000004u)

#define CONTROL_VTP_CTRL_NCIN   (0x00007F00u)
#define CONTROL_VTP_CTRL_NCIN_SHIFT   (0x00000008u)

#define CONTROL_VTP_CTRL_PCIN   (0x007F0000u)
#define CONTROL_VTP_CTRL_PCIN_SHIFT   (0x00000010u)

#define CONTROL_VTP_CTRL_READY   (0x00000020u)
#define CONTROL_VTP_CTRL_READY_SHIFT   (0x00000005u)

#define CONTROL_VTP_CTRL_RSVD2   (0x00008000u)
#define CONTROL_VTP_CTRL_RSVD2_SHIFT   (0x0000000Fu)

#define CONTROL_VTP_CTRL_RSVD3   (0xFF800000u)
#define CONTROL_VTP_CTRL_RSVD3_SHIFT   (0x00000017u)


/* VREF_CTRL */
#define CONTROL_VREF_CTRL_DDR_VREF_CCAP   (0x00000018u)
#define CONTROL_VREF_CTRL_DDR_VREF_CCAP_SHIFT   (0x00000003u)

#define CONTROL_VREF_CTRL_DDR_VREF_EN   (0x00000001u)
#define CONTROL_VREF_CTRL_DDR_VREF_EN_SHIFT   (0x00000000u)

#define CONTROL_VREF_CTRL_DDR_VREF_TAP   (0x00000006u)
#define CONTROL_VREF_CTRL_DDR_VREF_TAP_SHIFT   (0x00000001u)


/* SERDES_REFCLK_CTL */
#define CONTROL_SERDES_REFCLK_CTL_PWRDN   (0x00000001u)
#define CONTROL_SERDES_REFCLK_CTL_PWRDN_SHIFT   (0x00000000u)

#define CONTROL_SERDES_REFCLK_CTL_PWRDN_SE   (0x00000002u)
#define CONTROL_SERDES_REFCLK_CTL_PWRDN_SE_SHIFT   (0x00000001u)


/* TPCC_EVT_MUX_0_3 */
#define CONTROL_TPCC_EVT_MUX_0_3_EVT_MUX_0   (0x0000003Fu)
#define CONTROL_TPCC_EVT_MUX_0_3_EVT_MUX_0_SHIFT   (0x00000000u)

#define CONTROL_TPCC_EVT_MUX_0_3_EVT_MUX_1   (0x00003F00u)
#define CONTROL_TPCC_EVT_MUX_0_3_EVT_MUX_1_SHIFT   (0x00000008u)

#define CONTROL_TPCC_EVT_MUX_0_3_EVT_MUX_2   (0x003F0000u)
#define CONTROL_TPCC_EVT_MUX_0_3_EVT_MUX_2_SHIFT   (0x00000010u)

#define CONTROL_TPCC_EVT_MUX_0_3_EVT_MUX_3   (0x3F000000u)
#define CONTROL_TPCC_EVT_MUX_0_3_EVT_MUX_3_SHIFT   (0x00000018u)

#define CONTROL_TPCC_EVT_MUX_0_3_RSVD2   (0x0000C000u)
#define CONTROL_TPCC_EVT_MUX_0_3_RSVD2_SHIFT   (0x0000000Eu)

#define CONTROL_TPCC_EVT_MUX_0_3_RSVD3   (0x00C00000u)
#define CONTROL_TPCC_EVT_MUX_0_3_RSVD3_SHIFT   (0x00000016u)

#define CONTROL_TPCC_EVT_MUX_0_3_RSVD4   (0xC0000000u)
#define CONTROL_TPCC_EVT_MUX_0_3_RSVD4_SHIFT   (0x0000001Eu)


/* TPCC_EVT_MUX_4_7 */
#define CONTROL_TPCC_EVT_MUX_4_7_EVT_MUX_4   (0x0000003Fu)
#define CONTROL_TPCC_EVT_MUX_4_7_EVT_MUX_4_SHIFT   (0x00000000u)

#define CONTROL_TPCC_EVT_MUX_4_7_EVT_MUX_5   (0x00003F00u)
#define CONTROL_TPCC_EVT_MUX_4_7_EVT_MUX_5_SHIFT   (0x00000008u)

#define CONTROL_TPCC_EVT_MUX_4_7_EVT_MUX_6   (0x003F0000u)
#define CONTROL_TPCC_EVT_MUX_4_7_EVT_MUX_6_SHIFT   (0x00000010u)

#define CONTROL_TPCC_EVT_MUX_4_7_EVT_MUX_7   (0x3F000000u)
#define CONTROL_TPCC_EVT_MUX_4_7_EVT_MUX_7_SHIFT   (0x00000018u)

#define CONTROL_TPCC_EVT_MUX_4_7_RSVD2   (0x0000C000u)
#define CONTROL_TPCC_EVT_MUX_4_7_RSVD2_SHIFT   (0x0000000Eu)

#define CONTROL_TPCC_EVT_MUX_4_7_RSVD3   (0x00C00000u)
#define CONTROL_TPCC_EVT_MUX_4_7_RSVD3_SHIFT   (0x00000016u)

#define CONTROL_TPCC_EVT_MUX_4_7_RSVD4   (0xC0000000u)
#define CONTROL_TPCC_EVT_MUX_4_7_RSVD4_SHIFT   (0x0000001Eu)


/* TPCC_EVT_MUX_8_11 */
#define CONTROL_TPCC_EVT_MUX_8_11_EVT_MUX_10   (0x003F0000u)
#define CONTROL_TPCC_EVT_MUX_8_11_EVT_MUX_10_SHIFT   (0x00000010u)

#define CONTROL_TPCC_EVT_MUX_8_11_EVT_MUX_11   (0x3F000000u)
#define CONTROL_TPCC_EVT_MUX_8_11_EVT_MUX_11_SHIFT   (0x00000018u)

#define CONTROL_TPCC_EVT_MUX_8_11_EVT_MUX_8   (0x0000003Fu)
#define CONTROL_TPCC_EVT_MUX_8_11_EVT_MUX_8_SHIFT   (0x00000000u)

#define CONTROL_TPCC_EVT_MUX_8_11_EVT_MUX_9   (0x00003F00u)
#define CONTROL_TPCC_EVT_MUX_8_11_EVT_MUX_9_SHIFT   (0x00000008u)

#define CONTROL_TPCC_EVT_MUX_8_11_RSVD2   (0x0000C000u)
#define CONTROL_TPCC_EVT_MUX_8_11_RSVD2_SHIFT   (0x0000000Eu)

#define CONTROL_TPCC_EVT_MUX_8_11_RSVD3   (0x00C00000u)
#define CONTROL_TPCC_EVT_MUX_8_11_RSVD3_SHIFT   (0x00000016u)

#define CONTROL_TPCC_EVT_MUX_8_11_RSVD4   (0xC0000000u)
#define CONTROL_TPCC_EVT_MUX_8_11_RSVD4_SHIFT   (0x0000001Eu)


/* TPCC_EVT_MUX_12_15 */
#define CONTROL_TPCC_EVT_MUX_12_15_EVT_MUX_12   (0x0000003Fu)
#define CONTROL_TPCC_EVT_MUX_12_15_EVT_MUX_12_SHIFT   (0x00000000u)

#define CONTROL_TPCC_EVT_MUX_12_15_EVT_MUX_13   (0x00003F00u)
#define CONTROL_TPCC_EVT_MUX_12_15_EVT_MUX_13_SHIFT   (0x00000008u)

#define CONTROL_TPCC_EVT_MUX_12_15_EVT_MUX_14   (0x003F0000u)
#define CONTROL_TPCC_EVT_MUX_12_15_EVT_MUX_14_SHIFT   (0x00000010u)

#define CONTROL_TPCC_EVT_MUX_12_15_EVT_MUX_15   (0x3F000000u)
#define CONTROL_TPCC_EVT_MUX_12_15_EVT_MUX_15_SHIFT   (0x00000018u)

#define CONTROL_TPCC_EVT_MUX_12_15_RSVD2   (0x0000C000u)
#define CONTROL_TPCC_EVT_MUX_12_15_RSVD2_SHIFT   (0x0000000Eu)

#define CONTROL_TPCC_EVT_MUX_12_15_RSVD3   (0x00C00000u)
#define CONTROL_TPCC_EVT_MUX_12_15_RSVD3_SHIFT   (0x00000016u)

#define CONTROL_TPCC_EVT_MUX_12_15_RSVD4   (0xC0000000u)
#define CONTROL_TPCC_EVT_MUX_12_15_RSVD4_SHIFT   (0x0000001Eu)


/* TPCC_EVT_MUX_16_19 */
#define CONTROL_TPCC_EVT_MUX_16_19_EVT_MUX_16   (0x0000003Fu)
#define CONTROL_TPCC_EVT_MUX_16_19_EVT_MUX_16_SHIFT   (0x00000000u)

#define CONTROL_TPCC_EVT_MUX_16_19_EVT_MUX_17   (0x00003F00u)
#define CONTROL_TPCC_EVT_MUX_16_19_EVT_MUX_17_SHIFT   (0x00000008u)

#define CONTROL_TPCC_EVT_MUX_16_19_EVT_MUX_18   (0x003F0000u)
#define CONTROL_TPCC_EVT_MUX_16_19_EVT_MUX_18_SHIFT   (0x00000010u)

#define CONTROL_TPCC_EVT_MUX_16_19_EVT_MUX_19   (0x3F000000u)
#define CONTROL_TPCC_EVT_MUX_16_19_EVT_MUX_19_SHIFT   (0x00000018u)

#define CONTROL_TPCC_EVT_MUX_16_19_RSVD2   (0x0000C000u)
#define CONTROL_TPCC_EVT_MUX_16_19_RSVD2_SHIFT   (0x0000000Eu)

#define CONTROL_TPCC_EVT_MUX_16_19_RSVD3   (0x00C00000u)
#define CONTROL_TPCC_EVT_MUX_16_19_RSVD3_SHIFT   (0x00000016u)

#define CONTROL_TPCC_EVT_MUX_16_19_RSVD4   (0xC0000000u)
#define CONTROL_TPCC_EVT_MUX_16_19_RSVD4_SHIFT   (0x0000001Eu)


/* TPCC_EVT_MUX_20_23 */
#define CONTROL_TPCC_EVT_MUX_20_23_EVT_MUX_20   (0x0000003Fu)
#define CONTROL_TPCC_EVT_MUX_20_23_EVT_MUX_20_SHIFT   (0x00000000u)

#define CONTROL_TPCC_EVT_MUX_20_23_EVT_MUX_21   (0x00003F00u)
#define CONTROL_TPCC_EVT_MUX_20_23_EVT_MUX_21_SHIFT   (0x00000008u)

#define CONTROL_TPCC_EVT_MUX_20_23_EVT_MUX_22   (0x003F0000u)
#define CONTROL_TPCC_EVT_MUX_20_23_EVT_MUX_22_SHIFT   (0x00000010u)

#define CONTROL_TPCC_EVT_MUX_20_23_EVT_MUX_23   (0x3F000000u)
#define CONTROL_TPCC_EVT_MUX_20_23_EVT_MUX_23_SHIFT   (0x00000018u)

#define CONTROL_TPCC_EVT_MUX_20_23_RSVD2   (0x0000C000u)
#define CONTROL_TPCC_EVT_MUX_20_23_RSVD2_SHIFT   (0x0000000Eu)

#define CONTROL_TPCC_EVT_MUX_20_23_RSVD3   (0x00C00000u)
#define CONTROL_TPCC_EVT_MUX_20_23_RSVD3_SHIFT   (0x00000016u)

#define CONTROL_TPCC_EVT_MUX_20_23_RSVD4   (0xC0000000u)
#define CONTROL_TPCC_EVT_MUX_20_23_RSVD4_SHIFT   (0x0000001Eu)


/* TPCC_EVT_MUX_24_27 */
#define CONTROL_TPCC_EVT_MUX_24_27_EVT_MUX_24   (0x0000003Fu)
#define CONTROL_TPCC_EVT_MUX_24_27_EVT_MUX_24_SHIFT   (0x00000000u)

#define CONTROL_TPCC_EVT_MUX_24_27_EVT_MUX_25   (0x00003F00u)
#define CONTROL_TPCC_EVT_MUX_24_27_EVT_MUX_25_SHIFT   (0x00000008u)

#define CONTROL_TPCC_EVT_MUX_24_27_EVT_MUX_26   (0x003F0000u)
#define CONTROL_TPCC_EVT_MUX_24_27_EVT_MUX_26_SHIFT   (0x00000010u)

#define CONTROL_TPCC_EVT_MUX_24_27_EVT_MUX_27   (0x3F000000u)
#define CONTROL_TPCC_EVT_MUX_24_27_EVT_MUX_27_SHIFT   (0x00000018u)

#define CONTROL_TPCC_EVT_MUX_24_27_RSVD2   (0x0000C000u)
#define CONTROL_TPCC_EVT_MUX_24_27_RSVD2_SHIFT   (0x0000000Eu)

#define CONTROL_TPCC_EVT_MUX_24_27_RSVD3   (0x00C00000u)
#define CONTROL_TPCC_EVT_MUX_24_27_RSVD3_SHIFT   (0x00000016u)

#define CONTROL_TPCC_EVT_MUX_24_27_RSVD4   (0xC0000000u)
#define CONTROL_TPCC_EVT_MUX_24_27_RSVD4_SHIFT   (0x0000001Eu)


/* TPCC_EVT_MUX_28_31 */
#define CONTROL_TPCC_EVT_MUX_28_31_EVT_MUX_28   (0x0000003Fu)
#define CONTROL_TPCC_EVT_MUX_28_31_EVT_MUX_28_SHIFT   (0x00000000u)

#define CONTROL_TPCC_EVT_MUX_28_31_EVT_MUX_29   (0x00003F00u)
#define CONTROL_TPCC_EVT_MUX_28_31_EVT_MUX_29_SHIFT   (0x00000008u)

#define CONTROL_TPCC_EVT_MUX_28_31_EVT_MUX_30   (0x003F0000u)
#define CONTROL_TPCC_EVT_MUX_28_31_EVT_MUX_30_SHIFT   (0x00000010u)

#define CONTROL_TPCC_EVT_MUX_28_31_EVT_MUX_31   (0x3F000000u)
#define CONTROL_TPCC_EVT_MUX_28_31_EVT_MUX_31_SHIFT   (0x00000018u)

#define CONTROL_TPCC_EVT_MUX_28_31_RSVD2   (0x0000C000u)
#define CONTROL_TPCC_EVT_MUX_28_31_RSVD2_SHIFT   (0x0000000Eu)

#define CONTROL_TPCC_EVT_MUX_28_31_RSVD3   (0x00C00000u)
#define CONTROL_TPCC_EVT_MUX_28_31_RSVD3_SHIFT   (0x00000016u)

#define CONTROL_TPCC_EVT_MUX_28_31_RSVD4   (0xC0000000u)
#define CONTROL_TPCC_EVT_MUX_28_31_RSVD4_SHIFT   (0x0000001Eu)


/* TPCC_EVT_MUX_32_35 */
#define CONTROL_TPCC_EVT_MUX_32_35_EVT_MUX_32   (0x0000003Fu)
#define CONTROL_TPCC_EVT_MUX_32_35_EVT_MUX_32_SHIFT   (0x00000000u)

#define CONTROL_TPCC_EVT_MUX_32_35_EVT_MUX_33   (0x00003F00u)
#define CONTROL_TPCC_EVT_MUX_32_35_EVT_MUX_33_SHIFT   (0x00000008u)

#define CONTROL_TPCC_EVT_MUX_32_35_EVT_MUX_34   (0x003F0000u)
#define CONTROL_TPCC_EVT_MUX_32_35_EVT_MUX_34_SHIFT   (0x00000010u)

#define CONTROL_TPCC_EVT_MUX_32_35_EVT_MUX_35   (0x3F000000u)
#define CONTROL_TPCC_EVT_MUX_32_35_EVT_MUX_35_SHIFT   (0x00000018u)

#define CONTROL_TPCC_EVT_MUX_32_35_RSVD2   (0x0000C000u)
#define CONTROL_TPCC_EVT_MUX_32_35_RSVD2_SHIFT   (0x0000000Eu)

#define CONTROL_TPCC_EVT_MUX_32_35_RSVD3   (0x00C00000u)
#define CONTROL_TPCC_EVT_MUX_32_35_RSVD3_SHIFT   (0x00000016u)

#define CONTROL_TPCC_EVT_MUX_32_35_RSVD4   (0xC0000000u)
#define CONTROL_TPCC_EVT_MUX_32_35_RSVD4_SHIFT   (0x0000001Eu)


/* TPCC_EVT_MUX_36_39 */
#define CONTROL_TPCC_EVT_MUX_36_39_EVT_MUX_36   (0x0000003Fu)
#define CONTROL_TPCC_EVT_MUX_36_39_EVT_MUX_36_SHIFT   (0x00000000u)

#define CONTROL_TPCC_EVT_MUX_36_39_EVT_MUX_37   (0x00003F00u)
#define CONTROL_TPCC_EVT_MUX_36_39_EVT_MUX_37_SHIFT   (0x00000008u)

#define CONTROL_TPCC_EVT_MUX_36_39_EVT_MUX_38   (0x003F0000u)
#define CONTROL_TPCC_EVT_MUX_36_39_EVT_MUX_38_SHIFT   (0x00000010u)

#define CONTROL_TPCC_EVT_MUX_36_39_EVT_MUX_39   (0x3F000000u)
#define CONTROL_TPCC_EVT_MUX_36_39_EVT_MUX_39_SHIFT   (0x00000018u)

#define CONTROL_TPCC_EVT_MUX_36_39_RSVD2   (0x0000C000u)
#define CONTROL_TPCC_EVT_MUX_36_39_RSVD2_SHIFT   (0x0000000Eu)

#define CONTROL_TPCC_EVT_MUX_36_39_RSVD3   (0x00C00000u)
#define CONTROL_TPCC_EVT_MUX_36_39_RSVD3_SHIFT   (0x00000016u)

#define CONTROL_TPCC_EVT_MUX_36_39_RSVD4   (0xC0000000u)
#define CONTROL_TPCC_EVT_MUX_36_39_RSVD4_SHIFT   (0x0000001Eu)


/* TPCC_EVT_MUX_40_43 */
#define CONTROL_TPCC_EVT_MUX_40_43_EVT_MUX_40   (0x0000003Fu)
#define CONTROL_TPCC_EVT_MUX_40_43_EVT_MUX_40_SHIFT   (0x00000000u)

#define CONTROL_TPCC_EVT_MUX_40_43_EVT_MUX_41   (0x00003F00u)
#define CONTROL_TPCC_EVT_MUX_40_43_EVT_MUX_41_SHIFT   (0x00000008u)

#define CONTROL_TPCC_EVT_MUX_40_43_EVT_MUX_42   (0x003F0000u)
#define CONTROL_TPCC_EVT_MUX_40_43_EVT_MUX_42_SHIFT   (0x00000010u)

#define CONTROL_TPCC_EVT_MUX_40_43_EVT_MUX_43   (0x3F000000u)
#define CONTROL_TPCC_EVT_MUX_40_43_EVT_MUX_43_SHIFT   (0x00000018u)

#define CONTROL_TPCC_EVT_MUX_40_43_RSVD2   (0x0000C000u)
#define CONTROL_TPCC_EVT_MUX_40_43_RSVD2_SHIFT   (0x0000000Eu)

#define CONTROL_TPCC_EVT_MUX_40_43_RSVD3   (0x00C00000u)
#define CONTROL_TPCC_EVT_MUX_40_43_RSVD3_SHIFT   (0x00000016u)

#define CONTROL_TPCC_EVT_MUX_40_43_RSVD4   (0xC0000000u)
#define CONTROL_TPCC_EVT_MUX_40_43_RSVD4_SHIFT   (0x0000001Eu)


/* TPCC_EVT_MUX_44_47 */
#define CONTROL_TPCC_EVT_MUX_44_47_EVT_MUX_44   (0x0000003Fu)
#define CONTROL_TPCC_EVT_MUX_44_47_EVT_MUX_44_SHIFT   (0x00000000u)

#define CONTROL_TPCC_EVT_MUX_44_47_EVT_MUX_45   (0x00003F00u)
#define CONTROL_TPCC_EVT_MUX_44_47_EVT_MUX_45_SHIFT   (0x00000008u)

#define CONTROL_TPCC_EVT_MUX_44_47_EVT_MUX_46   (0x003F0000u)
#define CONTROL_TPCC_EVT_MUX_44_47_EVT_MUX_46_SHIFT   (0x00000010u)

#define CONTROL_TPCC_EVT_MUX_44_47_EVT_MUX_47   (0x3F000000u)
#define CONTROL_TPCC_EVT_MUX_44_47_EVT_MUX_47_SHIFT   (0x00000018u)

#define CONTROL_TPCC_EVT_MUX_44_47_RSVD2   (0x0000C000u)
#define CONTROL_TPCC_EVT_MUX_44_47_RSVD2_SHIFT   (0x0000000Eu)

#define CONTROL_TPCC_EVT_MUX_44_47_RSVD3   (0x00C00000u)
#define CONTROL_TPCC_EVT_MUX_44_47_RSVD3_SHIFT   (0x00000016u)

#define CONTROL_TPCC_EVT_MUX_44_47_RSVD4   (0xC0000000u)
#define CONTROL_TPCC_EVT_MUX_44_47_RSVD4_SHIFT   (0x0000001Eu)


/* TPCC_EVT_MUX_48_51 */
#define CONTROL_TPCC_EVT_MUX_48_51_EVT_MUX_48   (0x0000003Fu)
#define CONTROL_TPCC_EVT_MUX_48_51_EVT_MUX_48_SHIFT   (0x00000000u)

#define CONTROL_TPCC_EVT_MUX_48_51_EVT_MUX_49   (0x00003F00u)
#define CONTROL_TPCC_EVT_MUX_48_51_EVT_MUX_49_SHIFT   (0x00000008u)

#define CONTROL_TPCC_EVT_MUX_48_51_EVT_MUX_50   (0x003F0000u)
#define CONTROL_TPCC_EVT_MUX_48_51_EVT_MUX_50_SHIFT   (0x00000010u)

#define CONTROL_TPCC_EVT_MUX_48_51_EVT_MUX_51   (0x3F000000u)
#define CONTROL_TPCC_EVT_MUX_48_51_EVT_MUX_51_SHIFT   (0x00000018u)

#define CONTROL_TPCC_EVT_MUX_48_51_RSVD2   (0x0000C000u)
#define CONTROL_TPCC_EVT_MUX_48_51_RSVD2_SHIFT   (0x0000000Eu)

#define CONTROL_TPCC_EVT_MUX_48_51_RSVD3   (0x00C00000u)
#define CONTROL_TPCC_EVT_MUX_48_51_RSVD3_SHIFT   (0x00000016u)

#define CONTROL_TPCC_EVT_MUX_48_51_RSVD4   (0xC0000000u)
#define CONTROL_TPCC_EVT_MUX_48_51_RSVD4_SHIFT   (0x0000001Eu)


/* TPCC_EVT_MUX_52_55 */
#define CONTROL_TPCC_EVT_MUX_52_55_EVT_MUX_52   (0x0000003Fu)
#define CONTROL_TPCC_EVT_MUX_52_55_EVT_MUX_52_SHIFT   (0x00000000u)

#define CONTROL_TPCC_EVT_MUX_52_55_EVT_MUX_53   (0x00003F00u)
#define CONTROL_TPCC_EVT_MUX_52_55_EVT_MUX_53_SHIFT   (0x00000008u)

#define CONTROL_TPCC_EVT_MUX_52_55_EVT_MUX_54   (0x003F0000u)
#define CONTROL_TPCC_EVT_MUX_52_55_EVT_MUX_54_SHIFT   (0x00000010u)

#define CONTROL_TPCC_EVT_MUX_52_55_EVT_MUX_55   (0x3F000000u)
#define CONTROL_TPCC_EVT_MUX_52_55_EVT_MUX_55_SHIFT   (0x00000018u)

#define CONTROL_TPCC_EVT_MUX_52_55_RSVD2   (0x0000C000u)
#define CONTROL_TPCC_EVT_MUX_52_55_RSVD2_SHIFT   (0x0000000Eu)

#define CONTROL_TPCC_EVT_MUX_52_55_RSVD3   (0x00C00000u)
#define CONTROL_TPCC_EVT_MUX_52_55_RSVD3_SHIFT   (0x00000016u)

#define CONTROL_TPCC_EVT_MUX_52_55_RSVD4   (0xC0000000u)
#define CONTROL_TPCC_EVT_MUX_52_55_RSVD4_SHIFT   (0x0000001Eu)


/* TPCC_EVT_MUX_56_59 */
#define CONTROL_TPCC_EVT_MUX_56_59_EVT_MUX_56   (0x0000003Fu)
#define CONTROL_TPCC_EVT_MUX_56_59_EVT_MUX_56_SHIFT   (0x00000000u)

#define CONTROL_TPCC_EVT_MUX_56_59_EVT_MUX_57   (0x00003F00u)
#define CONTROL_TPCC_EVT_MUX_56_59_EVT_MUX_57_SHIFT   (0x00000008u)

#define CONTROL_TPCC_EVT_MUX_56_59_EVT_MUX_58   (0x003F0000u)
#define CONTROL_TPCC_EVT_MUX_56_59_EVT_MUX_58_SHIFT   (0x00000010u)

#define CONTROL_TPCC_EVT_MUX_56_59_EVT_MUX_59   (0x3F000000u)
#define CONTROL_TPCC_EVT_MUX_56_59_EVT_MUX_59_SHIFT   (0x00000018u)

#define CONTROL_TPCC_EVT_MUX_56_59_RSVD2   (0x0000C000u)
#define CONTROL_TPCC_EVT_MUX_56_59_RSVD2_SHIFT   (0x0000000Eu)

#define CONTROL_TPCC_EVT_MUX_56_59_RSVD3   (0x00C00000u)
#define CONTROL_TPCC_EVT_MUX_56_59_RSVD3_SHIFT   (0x00000016u)

#define CONTROL_TPCC_EVT_MUX_56_59_RSVD4   (0xC0000000u)
#define CONTROL_TPCC_EVT_MUX_56_59_RSVD4_SHIFT   (0x0000001Eu)


/* TPCC_EVT_MUX_60_63 */
#define CONTROL_TPCC_EVT_MUX_60_63_EVT_MUX_60   (0x3F000000u)
#define CONTROL_TPCC_EVT_MUX_60_63_EVT_MUX_60_SHIFT   (0x00000018u)

#define CONTROL_TPCC_EVT_MUX_60_63_EVT_MUX_61   (0x003F0000u)
#define CONTROL_TPCC_EVT_MUX_60_63_EVT_MUX_61_SHIFT   (0x00000010u)

#define CONTROL_TPCC_EVT_MUX_60_63_EVT_MUX_62   (0x00003F00u)
#define CONTROL_TPCC_EVT_MUX_60_63_EVT_MUX_62_SHIFT   (0x00000008u)

#define CONTROL_TPCC_EVT_MUX_60_63_EVT_MUX_63   (0x0000003Fu)
#define CONTROL_TPCC_EVT_MUX_60_63_EVT_MUX_63_SHIFT   (0x00000000u)

#define CONTROL_TPCC_EVT_MUX_60_63_RSVD2   (0x0000C000u)
#define CONTROL_TPCC_EVT_MUX_60_63_RSVD2_SHIFT   (0x0000000Eu)

#define CONTROL_TPCC_EVT_MUX_60_63_RSVD3   (0x00C00000u)
#define CONTROL_TPCC_EVT_MUX_60_63_RSVD3_SHIFT   (0x00000016u)

#define CONTROL_TPCC_EVT_MUX_60_63_RSVD4   (0xC0000000u)
#define CONTROL_TPCC_EVT_MUX_60_63_RSVD4_SHIFT   (0x0000001Eu)


/* TIMER_EVT_CAPT */
#define CONTROL_TIMER_EVT_CAPT_RSVD2   (0x0000E000u)
#define CONTROL_TIMER_EVT_CAPT_RSVD2_SHIFT   (0x0000000Du)

#define CONTROL_TIMER_EVT_CAPT_RSVD3   (0xFFE00000u)
#define CONTROL_TIMER_EVT_CAPT_RSVD3_SHIFT   (0x00000015u)

#define CONTROL_TIMER_EVT_CAPT_TIMER5_EVTCAPT   (0x0000001Fu)
#define CONTROL_TIMER_EVT_CAPT_TIMER5_EVTCAPT_SHIFT   (0x00000000u)

#define CONTROL_TIMER_EVT_CAPT_TIMER6_EVTCAPT   (0x00001F00u)
#define CONTROL_TIMER_EVT_CAPT_TIMER6_EVTCAPT_SHIFT   (0x00000008u)

#define CONTROL_TIMER_EVT_CAPT_TIMER7_EVTCAPT   (0x001F0000u)
#define CONTROL_TIMER_EVT_CAPT_TIMER7_EVTCAPT_SHIFT   (0x00000010u)


/* ECAP_EVT_CAPT */
#define CONTROL_ECAP_EVT_CAPT_ECAP0_EVTCAPT   (0x0000001Fu)
#define CONTROL_ECAP_EVT_CAPT_ECAP0_EVTCAPT_SHIFT   (0x00000000u)

#define CONTROL_ECAP_EVT_CAPT_ECAP1_EVTCAPT   (0x00001F00u)
#define CONTROL_ECAP_EVT_CAPT_ECAP1_EVTCAPT_SHIFT   (0x00000008u)

#define CONTROL_ECAP_EVT_CAPT_ECAP2_EVTCAPT   (0x001F0000u)
#define CONTROL_ECAP_EVT_CAPT_ECAP2_EVTCAPT_SHIFT   (0x00000010u)

#define CONTROL_ECAP_EVT_CAPT_RSVD2   (0x0000E000u)
#define CONTROL_ECAP_EVT_CAPT_RSVD2_SHIFT   (0x0000000Du)

#define CONTROL_ECAP_EVT_CAPT_RSVD3   (0xFFE00000u)
#define CONTROL_ECAP_EVT_CAPT_RSVD3_SHIFT   (0x00000015u)


/* ADC_EVT_CAPT */
#define CONTROL_ADC_EVT_CAPT_ADC_EVTCAPT   (0x0000000Fu)
#define CONTROL_ADC_EVT_CAPT_ADC_EVTCAPT_SHIFT   (0x00000000u)


/* RESET_ISO */
#define CONTROL_RESET_ISO_ISO_CONTROL   (0x00000001u)
#define CONTROL_RESET_ISO_ISO_CONTROL_SHIFT   (0x00000000u)


/* SMA0 */
#define CONTROL_SMA0_SMA0   (0xFFFFFFFFu)
#define CONTROL_SMA0_SMA0_SHIFT   (0x00000000u)


/* DDR_CKE_CTRL */
#define CONTROL_DDR_CKE_CTRL_DDR_CKE_CTRL   (0x00000001u)
#define CONTROL_DDR_CKE_CTRL_DDR_CKE_CTRL_SHIFT   (0x00000000u)

#define CONTROL_DDR_CKE_CTRL_SMA1   (0xFFFFFFFEu)
#define CONTROL_DDR_CKE_CTRL_SMA1_SHIFT   (0x00000001u)


/* SMA2 */
#define CONTROL_SMA2_SMA2   (0xFFFFFFFFu)
#define CONTROL_SMA2_SMA2_SHIFT   (0x00000000u)


/* M3_TXEV_EOI */
#define CONTROL_M3_TXEV_EOI_M3_TXEV_EOI   (0x00000001u)
#define CONTROL_M3_TXEV_EOI_M3_TXEV_EOI_SHIFT   (0x00000000u)

#define CONTROL_M3_TXEV_EOI_SMA3   (0xFFFFFFFEu)
#define CONTROL_M3_TXEV_EOI_SMA3_SHIFT   (0x00000001u)


/* IPC_MSG_REG0 */
#define CONTROL_IPC_MSG_REG0_IPC_MSG_REG0   (0xFFFFFFFFu)
#define CONTROL_IPC_MSG_REG0_IPC_MSG_REG0_SHIFT   (0x00000000u)


/* IPC_MSG_REG1 */
#define CONTROL_IPC_MSG_REG1_IPC_MSG_REG1   (0xFFFFFFFFu)
#define CONTROL_IPC_MSG_REG1_IPC_MSG_REG1_SHIFT   (0x00000000u)


/* IPC_MSG_REG2 */
#define CONTROL_IPC_MSG_REG2_IPC_MSG_REG2   (0xFFFFFFFFu)
#define CONTROL_IPC_MSG_REG2_IPC_MSG_REG2_SHIFT   (0x00000000u)


/* IPC_MSG_REG3 */
#define CONTROL_IPC_MSG_REG3_IPC_MSG_REG3   (0xFFFFFFFFu)
#define CONTROL_IPC_MSG_REG3_IPC_MSG_REG3_SHIFT   (0x00000000u)


/* IPC_MSG_REG4 */
#define CONTROL_IPC_MSG_REG4_IPC_MSG_REG4   (0xFFFFFFFFu)
#define CONTROL_IPC_MSG_REG4_IPC_MSG_REG4_SHIFT   (0x00000000u)


/* IPC_MSG_REG5 */
#define CONTROL_IPC_MSG_REG5_IPC_MSG_REG5   (0xFFFFFFFFu)
#define CONTROL_IPC_MSG_REG5_IPC_MSG_REG5_SHIFT   (0x00000000u)


/* IPC_MSG_REG6 */
#define CONTROL_IPC_MSG_REG6_IPC_MSG_REG6   (0xFFFFFFFFu)
#define CONTROL_IPC_MSG_REG6_IPC_MSG_REG6_SHIFT   (0x00000000u)


/* IPC_MSG_REG7 */
#define CONTROL_IPC_MSG_REG7_IPC_MSG_REG7   (0xFFFFFFFFu)
#define CONTROL_IPC_MSG_REG7_IPC_MSG_REG7_SHIFT   (0x00000000u)


/* DDR_CMD0_IOCTRL */
#define CONTROL_DDR_CMD0_IOCTRL_IO_CONFIG_GP_WD0   (0x001FFC00u)
#define CONTROL_DDR_CMD0_IOCTRL_IO_CONFIG_GP_WD0_SHIFT   (0x0000000Au)

#define CONTROL_DDR_CMD0_IOCTRL_IO_CONFIG_GP_WD1   (0xFFE00000u)
#define CONTROL_DDR_CMD0_IOCTRL_IO_CONFIG_GP_WD1_SHIFT   (0x00000015u)

#define CONTROL_DDR_CMD0_IOCTRL_IO_CONFIG_I   (0x00000007u)
#define CONTROL_DDR_CMD0_IOCTRL_IO_CONFIG_I_SHIFT   (0x00000000u)

#define CONTROL_DDR_CMD0_IOCTRL_IO_CONFIG_I_CLK   (0x000000E0u)
#define CONTROL_DDR_CMD0_IOCTRL_IO_CONFIG_I_CLK_SHIFT   (0x00000005u)

#define CONTROL_DDR_CMD0_IOCTRL_IO_CONFIG_SR   (0x00000018u)
#define CONTROL_DDR_CMD0_IOCTRL_IO_CONFIG_SR_SHIFT   (0x00000003u)

#define CONTROL_DDR_CMD0_IOCTRL_IO_CONFIG_SR_CLK   (0x00000300u)
#define CONTROL_DDR_CMD0_IOCTRL_IO_CONFIG_SR_CLK_SHIFT   (0x00000008u)


/* DDR_CMD1_IOCTRL */
#define CONTROL_DDR_CMD1_IOCTRL_IO_CONFIG_GP_WD0   (0x001FFC00u)
#define CONTROL_DDR_CMD1_IOCTRL_IO_CONFIG_GP_WD0_SHIFT   (0x0000000Au)

#define CONTROL_DDR_CMD1_IOCTRL_IO_CONFIG_GP_WD1   (0xFFE00000u)
#define CONTROL_DDR_CMD1_IOCTRL_IO_CONFIG_GP_WD1_SHIFT   (0x00000015u)

#define CONTROL_DDR_CMD1_IOCTRL_IO_CONFIG_I   (0x00000007u)
#define CONTROL_DDR_CMD1_IOCTRL_IO_CONFIG_I_SHIFT   (0x00000000u)

#define CONTROL_DDR_CMD1_IOCTRL_IO_CONFIG_I_CLK   (0x000000E0u)
#define CONTROL_DDR_CMD1_IOCTRL_IO_CONFIG_I_CLK_SHIFT   (0x00000005u)

#define CONTROL_DDR_CMD1_IOCTRL_IO_CONFIG_SR   (0x00000018u)
#define CONTROL_DDR_CMD1_IOCTRL_IO_CONFIG_SR_SHIFT   (0x00000003u)

#define CONTROL_DDR_CMD1_IOCTRL_IO_CONFIG_SR_CLK   (0x00000300u)
#define CONTROL_DDR_CMD1_IOCTRL_IO_CONFIG_SR_CLK_SHIFT   (0x00000008u)


/* DDR_CMD2_IOCTRL */
#define CONTROL_DDR_CMD2_IOCTRL_IO_CONFIG_GP_WD0   (0x001FFC00u)
#define CONTROL_DDR_CMD2_IOCTRL_IO_CONFIG_GP_WD0_SHIFT   (0x0000000Au)

#define CONTROL_DDR_CMD2_IOCTRL_IO_CONFIG_GP_WD1   (0xFFE00000u)
#define CONTROL_DDR_CMD2_IOCTRL_IO_CONFIG_GP_WD1_SHIFT   (0x00000015u)

#define CONTROL_DDR_CMD2_IOCTRL_IO_CONFIG_I   (0x00000007u)
#define CONTROL_DDR_CMD2_IOCTRL_IO_CONFIG_I_SHIFT   (0x00000000u)

#define CONTROL_DDR_CMD2_IOCTRL_IO_CONFIG_I_CLK   (0x000000E0u)
#define CONTROL_DDR_CMD2_IOCTRL_IO_CONFIG_I_CLK_SHIFT   (0x00000005u)

#define CONTROL_DDR_CMD2_IOCTRL_IO_CONFIG_SR   (0x00000018u)
#define CONTROL_DDR_CMD2_IOCTRL_IO_CONFIG_SR_SHIFT   (0x00000003u)

#define CONTROL_DDR_CMD2_IOCTRL_IO_CONFIG_SR_CLK   (0x00000300u)
#define CONTROL_DDR_CMD2_IOCTRL_IO_CONFIG_SR_CLK_SHIFT   (0x00000008u)


/* DDR_DATA0_IOCTRL */
#define CONTROL_DDR_DATA0_IOCTRL_IO_CONFIG_I   (0x00000007u)
#define CONTROL_DDR_DATA0_IOCTRL_IO_CONFIG_I_SHIFT   (0x00000000u)

#define CONTROL_DDR_DATA0_IOCTRL_IO_CONFIG_I_CLK   (0x000000E0u)
#define CONTROL_DDR_DATA0_IOCTRL_IO_CONFIG_I_CLK_SHIFT   (0x00000005u)

#define CONTROL_DDR_DATA0_IOCTRL_IO_CONFIG_SR   (0x00000018u)
#define CONTROL_DDR_DATA0_IOCTRL_IO_CONFIG_SR_SHIFT   (0x00000003u)

#define CONTROL_DDR_DATA0_IOCTRL_IO_CONFIG_SR_CLK   (0x00000300u)
#define CONTROL_DDR_DATA0_IOCTRL_IO_CONFIG_SR_CLK_SHIFT   (0x00000008u)

#define CONTROL_DDR_DATA0_IOCTRL_IO_CONFIG_WD0_DM   (0x00040000u)
#define CONTROL_DDR_DATA0_IOCTRL_IO_CONFIG_WD0_DM_SHIFT   (0x00000012u)

#define CONTROL_DDR_DATA0_IOCTRL_IO_CONFIG_WD0_DQ   (0x0003FC00u)
#define CONTROL_DDR_DATA0_IOCTRL_IO_CONFIG_WD0_DQ_SHIFT   (0x0000000Au)

#define CONTROL_DDR_DATA0_IOCTRL_IO_CONFIG_WD0_DQS   (0x00080000u)
#define CONTROL_DDR_DATA0_IOCTRL_IO_CONFIG_WD0_DQS_SHIFT   (0x00000013u)

#define CONTROL_DDR_DATA0_IOCTRL_IO_CONFIG_WD1_DM   (0x10000000u)
#define CONTROL_DDR_DATA0_IOCTRL_IO_CONFIG_WD1_DM_SHIFT   (0x0000001Cu)

#define CONTROL_DDR_DATA0_IOCTRL_IO_CONFIG_WD1_DQ   (0x0FF00000u)
#define CONTROL_DDR_DATA0_IOCTRL_IO_CONFIG_WD1_DQ_SHIFT   (0x00000014u)

#define CONTROL_DDR_DATA0_IOCTRL_IO_CONFIG_WD1_DQS   (0x20000000u)
#define CONTROL_DDR_DATA0_IOCTRL_IO_CONFIG_WD1_DQS_SHIFT   (0x0000001Du)


/* DDR_DATA1_IOCTRL */
#define CONTROL_DDR_DATA1_IOCTRL_IO_CONFIG_I   (0x00000007u)
#define CONTROL_DDR_DATA1_IOCTRL_IO_CONFIG_I_SHIFT   (0x00000000u)

#define CONTROL_DDR_DATA1_IOCTRL_IO_CONFIG_I_CLK   (0x000000E0u)
#define CONTROL_DDR_DATA1_IOCTRL_IO_CONFIG_I_CLK_SHIFT   (0x00000005u)

#define CONTROL_DDR_DATA1_IOCTRL_IO_CONFIG_SR   (0x00000018u)
#define CONTROL_DDR_DATA1_IOCTRL_IO_CONFIG_SR_SHIFT   (0x00000003u)

#define CONTROL_DDR_DATA1_IOCTRL_IO_CONFIG_SR_CLK   (0x00000300u)
#define CONTROL_DDR_DATA1_IOCTRL_IO_CONFIG_SR_CLK_SHIFT   (0x00000008u)

#define CONTROL_DDR_DATA1_IOCTRL_IO_CONFIG_WD0_DM   (0x00040000u)
#define CONTROL_DDR_DATA1_IOCTRL_IO_CONFIG_WD0_DM_SHIFT   (0x00000012u)

#define CONTROL_DDR_DATA1_IOCTRL_IO_CONFIG_WD0_DQ   (0x0003FC00u)
#define CONTROL_DDR_DATA1_IOCTRL_IO_CONFIG_WD0_DQ_SHIFT   (0x0000000Au)

#define CONTROL_DDR_DATA1_IOCTRL_IO_CONFIG_WD0_DQS   (0x00080000u)
#define CONTROL_DDR_DATA1_IOCTRL_IO_CONFIG_WD0_DQS_SHIFT   (0x00000013u)

#define CONTROL_DDR_DATA1_IOCTRL_IO_CONFIG_WD1_DM   (0x10000000u)
#define CONTROL_DDR_DATA1_IOCTRL_IO_CONFIG_WD1_DM_SHIFT   (0x0000001Cu)

#define CONTROL_DDR_DATA1_IOCTRL_IO_CONFIG_WD1_DQ   (0x0FF00000u)
#define CONTROL_DDR_DATA1_IOCTRL_IO_CONFIG_WD1_DQ_SHIFT   (0x00000014u)

#define CONTROL_DDR_DATA1_IOCTRL_IO_CONFIG_WD1_DQS   (0x20000000u)
#define CONTROL_DDR_DATA1_IOCTRL_IO_CONFIG_WD1_DQS_SHIFT   (0x0000001Du)


/* DDR_DATA2_IOCTRL */
#define CONTROL_DDR_DATA2_IOCTRL_IO_CONFIG_I   (0x00000007u)
#define CONTROL_DDR_DATA2_IOCTRL_IO_CONFIG_I_SHIFT   (0x00000000u)

#define CONTROL_DDR_DATA2_IOCTRL_IO_CONFIG_I_CLK   (0x000000E0u)
#define CONTROL_DDR_DATA2_IOCTRL_IO_CONFIG_I_CLK_SHIFT   (0x00000005u)

#define CONTROL_DDR_DATA2_IOCTRL_IO_CONFIG_SR   (0x00000018u)
#define CONTROL_DDR_DATA2_IOCTRL_IO_CONFIG_SR_SHIFT   (0x00000003u)

#define CONTROL_DDR_DATA2_IOCTRL_IO_CONFIG_SR_CLK   (0x00000300u)
#define CONTROL_DDR_DATA2_IOCTRL_IO_CONFIG_SR_CLK_SHIFT   (0x00000008u)

#define CONTROL_DDR_DATA2_IOCTRL_IO_CONFIG_WD0_DM   (0x00040000u)
#define CONTROL_DDR_DATA2_IOCTRL_IO_CONFIG_WD0_DM_SHIFT   (0x00000012u)

#define CONTROL_DDR_DATA2_IOCTRL_IO_CONFIG_WD0_DQ   (0x0003FC00u)
#define CONTROL_DDR_DATA2_IOCTRL_IO_CONFIG_WD0_DQ_SHIFT   (0x0000000Au)

#define CONTROL_DDR_DATA2_IOCTRL_IO_CONFIG_WD0_DQS   (0x00080000u)
#define CONTROL_DDR_DATA2_IOCTRL_IO_CONFIG_WD0_DQS_SHIFT   (0x00000013u)

#define CONTROL_DDR_DATA2_IOCTRL_IO_CONFIG_WD1_DM   (0x10000000u)
#define CONTROL_DDR_DATA2_IOCTRL_IO_CONFIG_WD1_DM_SHIFT   (0x0000001Cu)

#define CONTROL_DDR_DATA2_IOCTRL_IO_CONFIG_WD1_DQ   (0x0FF00000u)
#define CONTROL_DDR_DATA2_IOCTRL_IO_CONFIG_WD1_DQ_SHIFT   (0x00000014u)

#define CONTROL_DDR_DATA2_IOCTRL_IO_CONFIG_WD1_DQS   (0x20000000u)
#define CONTROL_DDR_DATA2_IOCTRL_IO_CONFIG_WD1_DQS_SHIFT   (0x0000001Du)


/* DDR_DATA3_IOCTRL */
#define CONTROL_DDR_DATA3_IOCTRL_IO_CONFIG_I   (0x00000007u)
#define CONTROL_DDR_DATA3_IOCTRL_IO_CONFIG_I_SHIFT   (0x00000000u)

#define CONTROL_DDR_DATA3_IOCTRL_IO_CONFIG_I_CLK   (0x000000E0u)
#define CONTROL_DDR_DATA3_IOCTRL_IO_CONFIG_I_CLK_SHIFT   (0x00000005u)

#define CONTROL_DDR_DATA3_IOCTRL_IO_CONFIG_SR   (0x00000018u)
#define CONTROL_DDR_DATA3_IOCTRL_IO_CONFIG_SR_SHIFT   (0x00000003u)

#define CONTROL_DDR_DATA3_IOCTRL_IO_CONFIG_SR_CLK   (0x00000300u)
#define CONTROL_DDR_DATA3_IOCTRL_IO_CONFIG_SR_CLK_SHIFT   (0x00000008u)

#define CONTROL_DDR_DATA3_IOCTRL_IO_CONFIG_WD0_DM   (0x00040000u)
#define CONTROL_DDR_DATA3_IOCTRL_IO_CONFIG_WD0_DM_SHIFT   (0x00000012u)

#define CONTROL_DDR_DATA3_IOCTRL_IO_CONFIG_WD0_DQ   (0x0003FC00u)
#define CONTROL_DDR_DATA3_IOCTRL_IO_CONFIG_WD0_DQ_SHIFT   (0x0000000Au)

#define CONTROL_DDR_DATA3_IOCTRL_IO_CONFIG_WD0_DQS   (0x00080000u)
#define CONTROL_DDR_DATA3_IOCTRL_IO_CONFIG_WD0_DQS_SHIFT   (0x00000013u)

#define CONTROL_DDR_DATA3_IOCTRL_IO_CONFIG_WD1_DM   (0x10000000u)
#define CONTROL_DDR_DATA3_IOCTRL_IO_CONFIG_WD1_DM_SHIFT   (0x0000001Cu)

#define CONTROL_DDR_DATA3_IOCTRL_IO_CONFIG_WD1_DQ   (0x0FF00000u)
#define CONTROL_DDR_DATA3_IOCTRL_IO_CONFIG_WD1_DQ_SHIFT   (0x00000014u)

#define CONTROL_DDR_DATA3_IOCTRL_IO_CONFIG_WD1_DQS   (0x20000000u)
#define CONTROL_DDR_DATA3_IOCTRL_IO_CONFIG_WD1_DQS_SHIFT   (0x0000001Du)


/* DDR_DATA4_IOCTRL */
#define CONTROL_DDR_DATA4_IOCTRL_IO_CONFIG_I   (0x00000007u)
#define CONTROL_DDR_DATA4_IOCTRL_IO_CONFIG_I_SHIFT   (0x00000000u)

#define CONTROL_DDR_DATA4_IOCTRL_IO_CONFIG_I_CLK   (0x000000E0u)
#define CONTROL_DDR_DATA4_IOCTRL_IO_CONFIG_I_CLK_SHIFT   (0x00000005u)

#define CONTROL_DDR_DATA4_IOCTRL_IO_CONFIG_SR   (0x00000018u)
#define CONTROL_DDR_DATA4_IOCTRL_IO_CONFIG_SR_SHIFT   (0x00000003u)

#define CONTROL_DDR_DATA4_IOCTRL_IO_CONFIG_SR_CLK   (0x00000300u)
#define CONTROL_DDR_DATA4_IOCTRL_IO_CONFIG_SR_CLK_SHIFT   (0x00000008u)

#define CONTROL_DDR_DATA4_IOCTRL_IO_CONFIG_WD0_DM   (0x00040000u)
#define CONTROL_DDR_DATA4_IOCTRL_IO_CONFIG_WD0_DM_SHIFT   (0x00000012u)

#define CONTROL_DDR_DATA4_IOCTRL_IO_CONFIG_WD0_DQ   (0x0003FC00u)
#define CONTROL_DDR_DATA4_IOCTRL_IO_CONFIG_WD0_DQ_SHIFT   (0x0000000Au)

#define CONTROL_DDR_DATA4_IOCTRL_IO_CONFIG_WD0_DQS   (0x00080000u)
#define CONTROL_DDR_DATA4_IOCTRL_IO_CONFIG_WD0_DQS_SHIFT   (0x00000013u)

#define CONTROL_DDR_DATA4_IOCTRL_IO_CONFIG_WD1_DM   (0x10000000u)
#define CONTROL_DDR_DATA4_IOCTRL_IO_CONFIG_WD1_DM_SHIFT   (0x0000001Cu)

#define CONTROL_DDR_DATA4_IOCTRL_IO_CONFIG_WD1_DQ   (0x0FF00000u)
#define CONTROL_DDR_DATA4_IOCTRL_IO_CONFIG_WD1_DQ_SHIFT   (0x00000014u)

#define CONTROL_DDR_DATA4_IOCTRL_IO_CONFIG_WD1_DQS   (0x20000000u)
#define CONTROL_DDR_DATA4_IOCTRL_IO_CONFIG_WD1_DQS_SHIFT   (0x0000001Du)

/* added from include/soc_AM335x*/
/** @brief Base address of control module memory mapped registers             */
#define SOC_CONTROL_REGS                     (0x44E10000)
#define SOC_PRCM_REGS                        (0x44E00000)

/*Added from include/hw/hw_cm_per.h Ti SW*/

/***********************************************************************\
 * Register arrays Definition
\***********************************************************************/


/***********************************************************************\
 * Bundle arrays Definition
\***********************************************************************/


/***********************************************************************\
 * Bundles Definition
\***********************************************************************/



/*************************************************************************\
 * Registers Definition
\*************************************************************************/

#define CM_PER_L4LS_CLKSTCTRL   (0x0)
#define CM_PER_L3S_CLKSTCTRL   (0x4)
#define CM_PER_L4FW_CLKSTCTRL   (0x8)
#define CM_PER_L3_CLKSTCTRL   (0xc)
#define CM_PER_CPGMAC0_CLKCTRL   (0x14)
#define CM_PER_LCDC_CLKCTRL   (0x18)
#define CM_PER_USB0_CLKCTRL   (0x1c)
#define CM_PER_MLB_CLKCTRL   (0x20)
#define CM_PER_TPTC0_CLKCTRL   (0x24)
#define CM_PER_EMIF_CLKCTRL   (0x28)
#define CM_PER_OCMCRAM_CLKCTRL   (0x2c)
#define CM_PER_GPMC_CLKCTRL   (0x30)
#define CM_PER_MCASP0_CLKCTRL   (0x34)
#define CM_PER_UART5_CLKCTRL   (0x38)
#define CM_PER_MMC0_CLKCTRL   (0x3c)
#define CM_PER_ELM_CLKCTRL   (0x40)
#define CM_PER_I2C2_CLKCTRL   (0x44)
#define CM_PER_I2C1_CLKCTRL   (0x48)
#define CM_PER_SPI0_CLKCTRL   (0x4c)
#define CM_PER_SPI1_CLKCTRL   (0x50)
#define CM_PER_L4LS_CLKCTRL   (0x60)
#define CM_PER_L4FW_CLKCTRL   (0x64)
#define CM_PER_MCASP1_CLKCTRL   (0x68)
#define CM_PER_UART1_CLKCTRL   (0x6c)
#define CM_PER_UART2_CLKCTRL   (0x70)
#define CM_PER_UART3_CLKCTRL   (0x74)
#define CM_PER_UART4_CLKCTRL   (0x78)
#define CM_PER_TIMER7_CLKCTRL   (0x7c)
#define CM_PER_TIMER2_CLKCTRL   (0x80)
#define CM_PER_TIMER3_CLKCTRL   (0x84)
#define CM_PER_TIMER4_CLKCTRL   (0x88)
#define CM_PER_RNG_CLKCTRL   (0x90)
#define CM_PER_AES0_CLKCTRL   (0x94)
#define CM_PER_SHA0_CLKCTRL   (0xa0)
#define CM_PER_PKA_CLKCTRL   (0xa4)
#define CM_PER_GPIO6_CLKCTRL   (0xa8)
#define CM_PER_GPIO1_CLKCTRL   (0xac)
#define CM_PER_GPIO2_CLKCTRL   (0xb0)
#define CM_PER_GPIO3_CLKCTRL   (0xb4)
#define CM_PER_TPCC_CLKCTRL   (0xbc)
#define CM_PER_DCAN0_CLKCTRL   (0xc0)
#define CM_PER_DCAN1_CLKCTRL   (0xc4)
#define CM_PER_EPWMSS1_CLKCTRL   (0xcc)
#define CM_PER_EMIF_FW_CLKCTRL   (0xd0)
#define CM_PER_EPWMSS0_CLKCTRL   (0xd4)
#define CM_PER_EPWMSS2_CLKCTRL   (0xd8)
#define CM_PER_L3_INSTR_CLKCTRL   (0xdc)
#define CM_PER_L3_CLKCTRL   (0xe0)
#define CM_PER_IEEE5000_CLKCTRL   (0xe4)
#define CM_PER_ICSS_CLKCTRL   (0xe8)
#define CM_PER_TIMER5_CLKCTRL   (0xec)
#define CM_PER_TIMER6_CLKCTRL   (0xf0)
#define CM_PER_MMC1_CLKCTRL   (0xf4)
#define CM_PER_MMC2_CLKCTRL   (0xf8)
#define CM_PER_TPTC1_CLKCTRL   (0xfc)
#define CM_PER_TPTC2_CLKCTRL   (0x100)
#define CM_PER_SPINLOCK_CLKCTRL   (0x10c)
#define CM_PER_MAILBOX0_CLKCTRL   (0x110)
#define CM_PER_L4HS_CLKSTCTRL   (0x11c)
#define CM_PER_L4HS_CLKCTRL   (0x120)
#define CM_PER_MSTR_EXPS_CLKCTRL   (0x124)
#define CM_PER_SLV_EXPS_CLKCTRL   (0x128)
#define CM_PER_OCPWP_L3_CLKSTCTRL   (0x12c)
#define CM_PER_OCPWP_CLKCTRL   (0x130)
#define CM_PER_ICSS_CLKSTCTRL   (0x140)
#define CM_PER_CPSW_CLKSTCTRL   (0x144)
#define CM_PER_LCDC_CLKSTCTRL   (0x148)
#define CM_PER_CLKDIV32K_CLKCTRL   (0x14c)
#define CM_PER_CLK_24MHZ_CLKSTCTRL   (0x150)

/**************************************************************************\ 
 * Field Definition Macros
\**************************************************************************/

/* L4LS_CLKSTCTRL */
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_CAN_CLK   (0x00000800u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_CAN_CLK_SHIFT   (0x0000000Bu)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_CAN_CLK_ACT   (0x1u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_CAN_CLK_INACT   (0x0u)

#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_GPIO_1_GDBCLK   (0x00080000u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_GPIO_1_GDBCLK_SHIFT   (0x00000013u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_GPIO_1_GDBCLK_ACT   (0x1u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_GPIO_1_GDBCLK_INACT   (0x0u)

#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_GPIO_2_GDBCLK   (0x00100000u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_GPIO_2_GDBCLK_SHIFT   (0x00000014u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_GPIO_2_GDBCLK_ACT   (0x1u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_GPIO_2_GDBCLK_INACT   (0x0u)

#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_GPIO_3_GDBCLK   (0x00200000u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_GPIO_3_GDBCLK_SHIFT   (0x00000015u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_GPIO_3_GDBCLK_ACT   (0x1u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_GPIO_3_GDBCLK_INACT   (0x0u)

#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_I2C_FCLK   (0x01000000u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_I2C_FCLK_SHIFT   (0x00000018u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_I2C_FCLK_ACT   (0x1u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_I2C_FCLK_INACT   (0x0u)

#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_L4LS_GCLK   (0x00000100u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_L4LS_GCLK_SHIFT   (0x00000008u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_L4LS_GCLK_ACT   (0x1u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_L4LS_GCLK_INACT   (0x0u)

#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_LCDC_GCLK   (0x00020000u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_LCDC_GCLK_SHIFT   (0x00000011u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_LCDC_GCLK_ACT   (0x1u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_LCDC_GCLK_INACT   (0x0u)

#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_SPI_GCLK   (0x02000000u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_SPI_GCLK_SHIFT   (0x00000019u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_SPI_GCLK_ACT   (0x1u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_SPI_GCLK_INACT   (0x0u)

#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_TIMER2_GCLK   (0x00004000u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_TIMER2_GCLK_SHIFT   (0x0000000Eu)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_TIMER2_GCLK_ACT   (0x1u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_TIMER2_GCLK_INACT   (0x0u)

#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_TIMER3_GCLK   (0x00008000u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_TIMER3_GCLK_SHIFT   (0x0000000Fu)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_TIMER3_GCLK_ACT   (0x1u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_TIMER3_GCLK_INACT   (0x0u)

#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_TIMER4_GCLK   (0x00010000u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_TIMER4_GCLK_SHIFT   (0x00000010u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_TIMER4_GCLK_ACT   (0x1u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_TIMER4_GCLK_INACT   (0x0u)

#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_TIMER5_GCLK   (0x08000000u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_TIMER5_GCLK_SHIFT   (0x0000001Bu)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_TIMER5_GCLK_ACT   (0x1u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_TIMER5_GCLK_INACT   (0x0u)

#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_TIMER6_GCLK   (0x10000000u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_TIMER6_GCLK_SHIFT   (0x0000001Cu)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_TIMER6_GCLK_ACT   (0x1u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_TIMER6_GCLK_INACT   (0x0u)

#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_TIMER7_GCLK   (0x00002000u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_TIMER7_GCLK_SHIFT   (0x0000000Du)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_TIMER7_GCLK_ACT   (0x1u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_TIMER7_GCLK_INACT   (0x0u)

#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_UART_GFCLK   (0x00000400u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_UART_GFCLK_SHIFT   (0x0000000Au)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_UART_GFCLK_ACT   (0x1u)
#define CM_PER_L4LS_CLKSTCTRL_CLKACTIVITY_UART_GFCLK_INACT   (0x0u)

#define CM_PER_L4LS_CLKSTCTRL_CLKTRCTRL   (0x00000003u)
#define CM_PER_L4LS_CLKSTCTRL_CLKTRCTRL_SHIFT   (0x00000000u)
#define CM_PER_L4LS_CLKSTCTRL_CLKTRCTRL_HW_AUTO   (0x3u)
#define CM_PER_L4LS_CLKSTCTRL_CLKTRCTRL_NO_SLEEP   (0x0u)
#define CM_PER_L4LS_CLKSTCTRL_CLKTRCTRL_SW_SLEEP   (0x1u)
#define CM_PER_L4LS_CLKSTCTRL_CLKTRCTRL_SW_WKUP   (0x2u)


/* L3S_CLKSTCTRL */
#define CM_PER_L3S_CLKSTCTRL_CLKACTIVITY_L3S_GCLK   (0x00000008u)
#define CM_PER_L3S_CLKSTCTRL_CLKACTIVITY_L3S_GCLK_SHIFT   (0x00000003u)
#define CM_PER_L3S_CLKSTCTRL_CLKACTIVITY_L3S_GCLK_ACT   (0x1u)
#define CM_PER_L3S_CLKSTCTRL_CLKACTIVITY_L3S_GCLK_INACT   (0x0u)

#define CM_PER_L3S_CLKSTCTRL_CLKTRCTRL   (0x00000003u)
#define CM_PER_L3S_CLKSTCTRL_CLKTRCTRL_SHIFT   (0x00000000u)
#define CM_PER_L3S_CLKSTCTRL_CLKTRCTRL_HW_AUTO   (0x3u)
#define CM_PER_L3S_CLKSTCTRL_CLKTRCTRL_NO_SLEEP   (0x0u)
#define CM_PER_L3S_CLKSTCTRL_CLKTRCTRL_SW_SLEEP   (0x1u)
#define CM_PER_L3S_CLKSTCTRL_CLKTRCTRL_SW_WKUP   (0x2u)


/* L4FW_CLKSTCTRL */
#define CM_PER_L4FW_CLKSTCTRL_CLKACTIVITY_L4FW_GCLK   (0x00000100u)
#define CM_PER_L4FW_CLKSTCTRL_CLKACTIVITY_L4FW_GCLK_SHIFT   (0x00000008u)
#define CM_PER_L4FW_CLKSTCTRL_CLKACTIVITY_L4FW_GCLK_ACT   (0x1u)
#define CM_PER_L4FW_CLKSTCTRL_CLKACTIVITY_L4FW_GCLK_INACT   (0x0u)

#define CM_PER_L4FW_CLKSTCTRL_CLKTRCTRL   (0x00000003u)
#define CM_PER_L4FW_CLKSTCTRL_CLKTRCTRL_SHIFT   (0x00000000u)
#define CM_PER_L4FW_CLKSTCTRL_CLKTRCTRL_HW_AUTO   (0x3u)
#define CM_PER_L4FW_CLKSTCTRL_CLKTRCTRL_NO_SLEEP   (0x0u)
#define CM_PER_L4FW_CLKSTCTRL_CLKTRCTRL_SW_SLEEP   (0x1u)
#define CM_PER_L4FW_CLKSTCTRL_CLKTRCTRL_SW_WKUP   (0x2u)


/* L3_CLKSTCTRL */
#define CM_PER_L3_CLKSTCTRL_CLKACTIVITY_CPTS_RFT_GCLK   (0x00000040u)
#define CM_PER_L3_CLKSTCTRL_CLKACTIVITY_CPTS_RFT_GCLK_SHIFT   (0x00000006u)
#define CM_PER_L3_CLKSTCTRL_CLKACTIVITY_CPTS_RFT_GCLK_ACT   (0x1u)
#define CM_PER_L3_CLKSTCTRL_CLKACTIVITY_CPTS_RFT_GCLK_INACT   (0x0u)

#define CM_PER_L3_CLKSTCTRL_CLKACTIVITY_EMIF_GCLK   (0x00000004u)
#define CM_PER_L3_CLKSTCTRL_CLKACTIVITY_EMIF_GCLK_SHIFT   (0x00000002u)
#define CM_PER_L3_CLKSTCTRL_CLKACTIVITY_EMIF_GCLK_ACT   (0x1u)
#define CM_PER_L3_CLKSTCTRL_CLKACTIVITY_EMIF_GCLK_INACT   (0x0u)

#define CM_PER_L3_CLKSTCTRL_CLKACTIVITY_L3_GCLK   (0x00000010u)
#define CM_PER_L3_CLKSTCTRL_CLKACTIVITY_L3_GCLK_SHIFT   (0x00000004u)
#define CM_PER_L3_CLKSTCTRL_CLKACTIVITY_L3_GCLK_ACT   (0x1u)
#define CM_PER_L3_CLKSTCTRL_CLKACTIVITY_L3_GCLK_INACT   (0x0u)

#define CM_PER_L3_CLKSTCTRL_CLKACTIVITY_MCASP_GCLK   (0x00000080u)
#define CM_PER_L3_CLKSTCTRL_CLKACTIVITY_MCASP_GCLK_SHIFT   (0x00000007u)
#define CM_PER_L3_CLKSTCTRL_CLKACTIVITY_MCASP_GCLK_ACT   (0x1u)
#define CM_PER_L3_CLKSTCTRL_CLKACTIVITY_MCASP_GCLK_INACT   (0x0u)

#define CM_PER_L3_CLKSTCTRL_CLKACTIVITY_MMC_FCLK   (0x00000008u)
#define CM_PER_L3_CLKSTCTRL_CLKACTIVITY_MMC_FCLK_SHIFT   (0x00000003u)
#define CM_PER_L3_CLKSTCTRL_CLKACTIVITY_MMC_FCLK_ACT   (0x1u)
#define CM_PER_L3_CLKSTCTRL_CLKACTIVITY_MMC_FCLK_INACT   (0x0u)

#define CM_PER_L3_CLKSTCTRL_CLKTRCTRL   (0x00000003u)
#define CM_PER_L3_CLKSTCTRL_CLKTRCTRL_SHIFT   (0x00000000u)
#define CM_PER_L3_CLKSTCTRL_CLKTRCTRL_HW_AUTO   (0x3u)
#define CM_PER_L3_CLKSTCTRL_CLKTRCTRL_NO_SLEEP   (0x0u)
#define CM_PER_L3_CLKSTCTRL_CLKTRCTRL_SW_SLEEP   (0x1u)
#define CM_PER_L3_CLKSTCTRL_CLKTRCTRL_SW_WKUP   (0x2u)


/* CPGMAC0_CLKCTRL */
#define CM_PER_CPGMAC0_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_CPGMAC0_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_CPGMAC0_CLKCTRL_IDLEST_DISABLED   (0x3u)
#define CM_PER_CPGMAC0_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_CPGMAC0_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_CPGMAC0_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_CPGMAC0_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_CPGMAC0_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_CPGMAC0_CLKCTRL_MODULEMODE_DISABLE   (0x0u)
#define CM_PER_CPGMAC0_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_CPGMAC0_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_CPGMAC0_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)

#define CM_PER_CPGMAC0_CLKCTRL_STBYST   (0x00040000u)
#define CM_PER_CPGMAC0_CLKCTRL_STBYST_SHIFT   (0x00000012u)
#define CM_PER_CPGMAC0_CLKCTRL_STBYST_FUNC   (0x0u)
#define CM_PER_CPGMAC0_CLKCTRL_STBYST_STANDBY   (0x1u)


/* LCDC_CLKCTRL */
#define CM_PER_LCDC_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_LCDC_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_LCDC_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_LCDC_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_LCDC_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_LCDC_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_LCDC_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_LCDC_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_LCDC_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_LCDC_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_LCDC_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_LCDC_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)

#define CM_PER_LCDC_CLKCTRL_STBYST   (0x00040000u)
#define CM_PER_LCDC_CLKCTRL_STBYST_SHIFT   (0x00000012u)
#define CM_PER_LCDC_CLKCTRL_STBYST_FUNC   (0x0u)
#define CM_PER_LCDC_CLKCTRL_STBYST_STANDBY   (0x1u)


/* USB0_CLKCTRL */
#define CM_PER_USB0_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_USB0_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_USB0_CLKCTRL_IDLEST_DISABLED   (0x3u)
#define CM_PER_USB0_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_USB0_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_USB0_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_USB0_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_USB0_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_USB0_CLKCTRL_MODULEMODE_DISABLE   (0x0u)
#define CM_PER_USB0_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_USB0_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_USB0_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)

#define CM_PER_USB0_CLKCTRL_STBYST   (0x00040000u)
#define CM_PER_USB0_CLKCTRL_STBYST_SHIFT   (0x00000012u)
#define CM_PER_USB0_CLKCTRL_STBYST_FUNC   (0x0u)
#define CM_PER_USB0_CLKCTRL_STBYST_STANDBY   (0x1u)


/* MLB_CLKCTRL */
#define CM_PER_MLB_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_MLB_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_MLB_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_MLB_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_MLB_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_MLB_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_MLB_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_MLB_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_MLB_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_MLB_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_MLB_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_MLB_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)

#define CM_PER_MLB_CLKCTRL_STBYST   (0x00040000u)
#define CM_PER_MLB_CLKCTRL_STBYST_SHIFT   (0x00000012u)
#define CM_PER_MLB_CLKCTRL_STBYST_FUNC   (0x0u)
#define CM_PER_MLB_CLKCTRL_STBYST_STANDBY   (0x1u)


/* TPTC0_CLKCTRL */
#define CM_PER_TPTC0_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_TPTC0_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_TPTC0_CLKCTRL_IDLEST_DISABLED   (0x3u)
#define CM_PER_TPTC0_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_TPTC0_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_TPTC0_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_TPTC0_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_TPTC0_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_TPTC0_CLKCTRL_MODULEMODE_DISABLE   (0x0u)
#define CM_PER_TPTC0_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_TPTC0_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_TPTC0_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)

#define CM_PER_TPTC0_CLKCTRL_STBYST   (0x00040000u)
#define CM_PER_TPTC0_CLKCTRL_STBYST_SHIFT   (0x00000012u)
#define CM_PER_TPTC0_CLKCTRL_STBYST_FUNC   (0x0u)
#define CM_PER_TPTC0_CLKCTRL_STBYST_STANDBY   (0x1u)


/* EMIF_CLKCTRL */
#define CM_PER_EMIF_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_EMIF_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_EMIF_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_EMIF_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_EMIF_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_EMIF_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_EMIF_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_EMIF_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_EMIF_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_EMIF_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_EMIF_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_EMIF_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* OCMCRAM_CLKCTRL */
#define CM_PER_OCMCRAM_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_OCMCRAM_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_OCMCRAM_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_OCMCRAM_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_OCMCRAM_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_OCMCRAM_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_OCMCRAM_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_OCMCRAM_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_OCMCRAM_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_OCMCRAM_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_OCMCRAM_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_OCMCRAM_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* GPMC_CLKCTRL */
#define CM_PER_GPMC_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_GPMC_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_GPMC_CLKCTRL_IDLEST_DISABLED   (0x3u)
#define CM_PER_GPMC_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_GPMC_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_GPMC_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_GPMC_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_GPMC_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_GPMC_CLKCTRL_MODULEMODE_DISABLE   (0x0u)
#define CM_PER_GPMC_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_GPMC_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_GPMC_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* MCASP0_CLKCTRL */
#define CM_PER_MCASP0_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_MCASP0_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_MCASP0_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_MCASP0_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_MCASP0_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_MCASP0_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_MCASP0_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_MCASP0_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_MCASP0_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_MCASP0_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_MCASP0_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_MCASP0_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* UART5_CLKCTRL */
#define CM_PER_UART5_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_UART5_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_UART5_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_UART5_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_UART5_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_UART5_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_UART5_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_UART5_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_UART5_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_UART5_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_UART5_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_UART5_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* MMC0_CLKCTRL */
#define CM_PER_MMC0_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_MMC0_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_MMC0_CLKCTRL_IDLEST_DISABLED   (0x3u)
#define CM_PER_MMC0_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_MMC0_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_MMC0_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_MMC0_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_MMC0_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_MMC0_CLKCTRL_MODULEMODE_DISABLE   (0x0u)
#define CM_PER_MMC0_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_MMC0_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_MMC0_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* ELM_CLKCTRL */
#define CM_PER_ELM_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_ELM_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_ELM_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_ELM_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_ELM_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_ELM_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_ELM_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_ELM_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_ELM_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_ELM_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_ELM_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_ELM_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* I2C2_CLKCTRL */
#define CM_PER_I2C2_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_I2C2_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_I2C2_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_I2C2_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_I2C2_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_I2C2_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_I2C2_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_I2C2_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_I2C2_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_I2C2_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_I2C2_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_I2C2_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* I2C1_CLKCTRL */
#define CM_PER_I2C1_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_I2C1_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_I2C1_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_I2C1_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_I2C1_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_I2C1_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_I2C1_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_I2C1_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_I2C1_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_I2C1_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_I2C1_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_I2C1_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* SPI0_CLKCTRL */
#define CM_PER_SPI0_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_SPI0_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_SPI0_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_SPI0_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_SPI0_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_SPI0_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_SPI0_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_SPI0_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_SPI0_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_SPI0_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_SPI0_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_SPI0_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* SPI1_CLKCTRL */
#define CM_PER_SPI1_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_SPI1_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_SPI1_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_SPI1_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_SPI1_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_SPI1_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_SPI1_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_SPI1_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_SPI1_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_SPI1_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_SPI1_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_SPI1_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* L4LS_CLKCTRL */
#define CM_PER_L4LS_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_L4LS_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_L4LS_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_L4LS_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_L4LS_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_L4LS_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_L4LS_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_L4LS_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_L4LS_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_L4LS_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_L4LS_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_L4LS_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* L4FW_CLKCTRL */
#define CM_PER_L4FW_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_L4FW_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_L4FW_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_L4FW_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_L4FW_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_L4FW_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_L4FW_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_L4FW_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_L4FW_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_L4FW_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_L4FW_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_L4FW_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* MCASP1_CLKCTRL */
#define CM_PER_MCASP1_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_MCASP1_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_MCASP1_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_MCASP1_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_MCASP1_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_MCASP1_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_MCASP1_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_MCASP1_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_MCASP1_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_MCASP1_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_MCASP1_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_MCASP1_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* UART1_CLKCTRL */
#define CM_PER_UART1_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_UART1_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_UART1_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_UART1_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_UART1_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_UART1_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_UART1_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_UART1_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_UART1_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_UART1_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_UART1_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_UART1_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* UART2_CLKCTRL */
#define CM_PER_UART2_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_UART2_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_UART2_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_UART2_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_UART2_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_UART2_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_UART2_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_UART2_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_UART2_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_UART2_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_UART2_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_UART2_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* UART3_CLKCTRL */
#define CM_PER_UART3_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_UART3_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_UART3_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_UART3_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_UART3_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_UART3_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_UART3_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_UART3_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_UART3_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_UART3_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_UART3_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_UART3_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* UART4_CLKCTRL */
#define CM_PER_UART4_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_UART4_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_UART4_CLKCTRL_IDLEST_DISABLED   (0x3u)
#define CM_PER_UART4_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_UART4_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_UART4_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_UART4_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_UART4_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_UART4_CLKCTRL_MODULEMODE_DISABLE   (0x0u)
#define CM_PER_UART4_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_UART4_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_UART4_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* TIMER7_CLKCTRL */
#define CM_PER_TIMER7_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_TIMER7_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_TIMER7_CLKCTRL_IDLEST_DISABLED   (0x3u)
#define CM_PER_TIMER7_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_TIMER7_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_TIMER7_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_TIMER7_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_TIMER7_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_TIMER7_CLKCTRL_MODULEMODE_DISABLE   (0x0u)
#define CM_PER_TIMER7_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_TIMER7_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_TIMER7_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* TIMER2_CLKCTRL */
#define CM_PER_TIMER2_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_TIMER2_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_TIMER2_CLKCTRL_IDLEST_DISABLDED   (0x3u)
#define CM_PER_TIMER2_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_TIMER2_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_TIMER2_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_TIMER2_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_TIMER2_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_TIMER2_CLKCTRL_MODULEMODE_DISABLE   (0x0u)
#define CM_PER_TIMER2_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_TIMER2_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_TIMER2_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* TIMER3_CLKCTRL */
#define CM_PER_TIMER3_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_TIMER3_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_TIMER3_CLKCTRL_IDLEST_DISABLED   (0x3u)
#define CM_PER_TIMER3_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_TIMER3_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_TIMER3_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_TIMER3_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_TIMER3_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_TIMER3_CLKCTRL_MODULEMODE_DISABLE   (0x0u)
#define CM_PER_TIMER3_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_TIMER3_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_TIMER3_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* TIMER4_CLKCTRL */
#define CM_PER_TIMER4_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_TIMER4_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_TIMER4_CLKCTRL_IDLEST_DISABLED   (0x3u)
#define CM_PER_TIMER4_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_TIMER4_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_TIMER4_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_TIMER4_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_TIMER4_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_TIMER4_CLKCTRL_MODULEMODE_DISABLE   (0x0u)
#define CM_PER_TIMER4_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_TIMER4_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_TIMER4_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* RNG_CLKCTRL */
#define CM_PER_RNG_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_RNG_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_RNG_CLKCTRL_IDLEST_DISABLED   (0x3u)
#define CM_PER_RNG_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_RNG_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_RNG_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_RNG_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_RNG_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_RNG_CLKCTRL_MODULEMODE_DISABLE   (0x0u)
#define CM_PER_RNG_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_RNG_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_RNG_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* AES0_CLKCTRL */
#define CM_PER_AES0_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_AES0_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_AES0_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_AES0_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_AES0_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_AES0_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_AES0_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_AES0_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_AES0_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_AES0_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_AES0_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_AES0_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* SHA0_CLKCTRL */
#define CM_PER_SHA0_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_SHA0_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_SHA0_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_SHA0_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_SHA0_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_SHA0_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_SHA0_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_SHA0_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_SHA0_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_SHA0_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_SHA0_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_SHA0_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* PKA_CLKCTRL */
#define CM_PER_PKA_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_PKA_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_PKA_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_PKA_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_PKA_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_PKA_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_PKA_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_PKA_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_PKA_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_PKA_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_PKA_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_PKA_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* GPIO1_CLKCTRL */
#define CM_PER_GPIO1_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_GPIO1_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_GPIO1_CLKCTRL_IDLEST_DISABLED   (0x3u)
#define CM_PER_GPIO1_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_GPIO1_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_GPIO1_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_GPIO1_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_GPIO1_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_GPIO1_CLKCTRL_MODULEMODE_DISABLE   (0x0u)
#define CM_PER_GPIO1_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_GPIO1_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_GPIO1_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)

#define CM_PER_GPIO1_CLKCTRL_OPTFCLKEN_GPIO_1_GDBCLK   (0x00040000u)
#define CM_PER_GPIO1_CLKCTRL_OPTFCLKEN_GPIO_1_GDBCLK_SHIFT   (0x00000012u)
#define CM_PER_GPIO1_CLKCTRL_OPTFCLKEN_GPIO_1_GDBCLK_FCLK_DIS   (0x0u)
#define CM_PER_GPIO1_CLKCTRL_OPTFCLKEN_GPIO_1_GDBCLK_FCLK_EN   (0x1u)


/* GPIO2_CLKCTRL */
#define CM_PER_GPIO2_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_GPIO2_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_GPIO2_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_GPIO2_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_GPIO2_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_GPIO2_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_GPIO2_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_GPIO2_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_GPIO2_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_GPIO2_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_GPIO2_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_GPIO2_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)

#define CM_PER_GPIO2_CLKCTRL_OPTFCLKEN_GPIO_2_GDBCLK   (0x00040000u)
#define CM_PER_GPIO2_CLKCTRL_OPTFCLKEN_GPIO_2_GDBCLK_SHIFT   (0x00000012u)
#define CM_PER_GPIO2_CLKCTRL_OPTFCLKEN_GPIO_2_GDBCLK_FCLK_DIS   (0x0u)
#define CM_PER_GPIO2_CLKCTRL_OPTFCLKEN_GPIO_2_GDBCLK_FCLK_EN   (0x1u)


/* GPIO3_CLKCTRL */
#define CM_PER_GPIO3_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_GPIO3_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_GPIO3_CLKCTRL_IDLEST_DISABLED   (0x3u)
#define CM_PER_GPIO3_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_GPIO3_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_GPIO3_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_GPIO3_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_GPIO3_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_GPIO3_CLKCTRL_MODULEMODE_DISABLE   (0x0u)
#define CM_PER_GPIO3_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_GPIO3_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_GPIO3_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)

#define CM_PER_GPIO3_CLKCTRL_OPTFCLKEN_GPIO_3_GDBCLK   (0x00040000u)
#define CM_PER_GPIO3_CLKCTRL_OPTFCLKEN_GPIO_3_GDBCLK_SHIFT   (0x00000012u)
#define CM_PER_GPIO3_CLKCTRL_OPTFCLKEN_GPIO_3_GDBCLK_FCLK_DIS   (0x0u)
#define CM_PER_GPIO3_CLKCTRL_OPTFCLKEN_GPIO_3_GDBCLK_FCLK_EN   (0x1u)


/* TPCC_CLKCTRL */
#define CM_PER_TPCC_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_TPCC_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_TPCC_CLKCTRL_IDLEST_DISABLED   (0x3u)
#define CM_PER_TPCC_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_TPCC_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_TPCC_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_TPCC_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_TPCC_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_TPCC_CLKCTRL_MODULEMODE_DISABLE   (0x0u)
#define CM_PER_TPCC_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_TPCC_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_TPCC_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* DCAN0_CLKCTRL */
#define CM_PER_DCAN0_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_DCAN0_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_DCAN0_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_DCAN0_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_DCAN0_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_DCAN0_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_DCAN0_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_DCAN0_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_DCAN0_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_DCAN0_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_DCAN0_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_DCAN0_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* DCAN1_CLKCTRL */
#define CM_PER_DCAN1_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_DCAN1_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_DCAN1_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_DCAN1_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_DCAN1_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_DCAN1_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_DCAN1_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_DCAN1_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_DCAN1_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_DCAN1_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_DCAN1_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_DCAN1_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* EPWMSS1_CLKCTRL */
#define CM_PER_EPWMSS1_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_EPWMSS1_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_EPWMSS1_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_EPWMSS1_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_EPWMSS1_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_EPWMSS1_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_EPWMSS1_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_EPWMSS1_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_EPWMSS1_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_EPWMSS1_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_EPWMSS1_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_EPWMSS1_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* EMIF_FW_CLKCTRL */
#define CM_PER_EMIF_FW_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_EMIF_FW_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_EMIF_FW_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_EMIF_FW_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_EMIF_FW_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_EMIF_FW_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_EMIF_FW_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_EMIF_FW_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_EMIF_FW_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_EMIF_FW_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_EMIF_FW_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_EMIF_FW_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* EPWMSS0_CLKCTRL */
#define CM_PER_EPWMSS0_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_EPWMSS0_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_EPWMSS0_CLKCTRL_IDLEST_DISABLED   (0x3u)
#define CM_PER_EPWMSS0_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_EPWMSS0_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_EPWMSS0_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_EPWMSS0_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_EPWMSS0_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_EPWMSS0_CLKCTRL_MODULEMODE_DISABLE   (0x0u)
#define CM_PER_EPWMSS0_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_EPWMSS0_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_EPWMSS0_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* EPWMSS2_CLKCTRL */
#define CM_PER_EPWMSS2_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_EPWMSS2_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_EPWMSS2_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_EPWMSS2_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_EPWMSS2_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_EPWMSS2_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_EPWMSS2_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_EPWMSS2_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_EPWMSS2_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_EPWMSS2_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_EPWMSS2_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_EPWMSS2_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* L3_INSTR_CLKCTRL */
#define CM_PER_L3_INSTR_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_L3_INSTR_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_L3_INSTR_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_L3_INSTR_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_L3_INSTR_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_L3_INSTR_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_L3_INSTR_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_L3_INSTR_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_L3_INSTR_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_L3_INSTR_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_L3_INSTR_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_L3_INSTR_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* L3_CLKCTRL */
#define CM_PER_L3_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_L3_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_L3_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_L3_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_L3_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_L3_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_L3_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_L3_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_L3_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_L3_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_L3_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_L3_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* IEEE5000_CLKCTRL */
#define CM_PER_IEEE5000_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_IEEE5000_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_IEEE5000_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_IEEE5000_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_IEEE5000_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_IEEE5000_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_IEEE5000_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_IEEE5000_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_IEEE5000_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_IEEE5000_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_IEEE5000_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_IEEE5000_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)

#define CM_PER_IEEE5000_CLKCTRL_STBYST   (0x00040000u)
#define CM_PER_IEEE5000_CLKCTRL_STBYST_SHIFT   (0x00000012u)
#define CM_PER_IEEE5000_CLKCTRL_STBYST_FUNC   (0x0u)
#define CM_PER_IEEE5000_CLKCTRL_STBYST_STANDBY   (0x1u)


/* ICSS_CLKCTRL */
#define CM_PER_ICSS_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_ICSS_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_ICSS_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_ICSS_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_ICSS_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_ICSS_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_ICSS_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_ICSS_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_ICSS_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_ICSS_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_ICSS_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_ICSS_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)

#define CM_PER_ICSS_CLKCTRL_STBYST   (0x00040000u)
#define CM_PER_ICSS_CLKCTRL_STBYST_SHIFT   (0x00000012u)
#define CM_PER_ICSS_CLKCTRL_STBYST_FUNC   (0x0u)
#define CM_PER_ICSS_CLKCTRL_STBYST_STANDBY   (0x1u)


/* TIMER5_CLKCTRL */
#define CM_PER_TIMER5_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_TIMER5_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_TIMER5_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_TIMER5_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_TIMER5_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_TIMER5_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_TIMER5_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_TIMER5_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_TIMER5_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_TIMER5_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_TIMER5_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_TIMER5_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* TIMER6_CLKCTRL */
#define CM_PER_TIMER6_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_TIMER6_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_TIMER6_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_TIMER6_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_TIMER6_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_TIMER6_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_TIMER6_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_TIMER6_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_TIMER6_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_TIMER6_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_TIMER6_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_TIMER6_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* MMC1_CLKCTRL */
#define CM_PER_MMC1_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_MMC1_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_MMC1_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_MMC1_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_MMC1_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_MMC1_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_MMC1_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_MMC1_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_MMC1_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_MMC1_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_MMC1_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_MMC1_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* MMC2_CLKCTRL */
#define CM_PER_MMC2_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_MMC2_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_MMC2_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_MMC2_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_MMC2_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_MMC2_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_MMC2_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_MMC2_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_MMC2_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_MMC2_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_MMC2_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_MMC2_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* TPTC1_CLKCTRL */
#define CM_PER_TPTC1_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_TPTC1_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_TPTC1_CLKCTRL_IDLEST_DISABLED   (0x3u)
#define CM_PER_TPTC1_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_TPTC1_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_TPTC1_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_TPTC1_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_TPTC1_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_TPTC1_CLKCTRL_MODULEMODE_DISABLE   (0x0u)
#define CM_PER_TPTC1_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_TPTC1_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_TPTC1_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)

#define CM_PER_TPTC1_CLKCTRL_STBYST   (0x00040000u)
#define CM_PER_TPTC1_CLKCTRL_STBYST_SHIFT   (0x00000012u)
#define CM_PER_TPTC1_CLKCTRL_STBYST_FUNC   (0x0u)
#define CM_PER_TPTC1_CLKCTRL_STBYST_STANDBY   (0x1u)


/* TPTC2_CLKCTRL */
#define CM_PER_TPTC2_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_TPTC2_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_TPTC2_CLKCTRL_IDLEST_DISABLED   (0x3u)
#define CM_PER_TPTC2_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_TPTC2_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_TPTC2_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_TPTC2_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_TPTC2_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_TPTC2_CLKCTRL_MODULEMODE_DISABLE   (0x0u)
#define CM_PER_TPTC2_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_TPTC2_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_TPTC2_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)

#define CM_PER_TPTC2_CLKCTRL_STBYST   (0x00040000u)
#define CM_PER_TPTC2_CLKCTRL_STBYST_SHIFT   (0x00000012u)
#define CM_PER_TPTC2_CLKCTRL_STBYST_FUNC   (0x0u)
#define CM_PER_TPTC2_CLKCTRL_STBYST_STANDBY   (0x1u)


/* SPINLOCK_CLKCTRL */
#define CM_PER_SPINLOCK_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_SPINLOCK_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_SPINLOCK_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_SPINLOCK_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_SPINLOCK_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_SPINLOCK_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_SPINLOCK_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_SPINLOCK_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_SPINLOCK_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_SPINLOCK_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_SPINLOCK_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_SPINLOCK_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* MAILBOX0_CLKCTRL */
#define CM_PER_MAILBOX0_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_MAILBOX0_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_MAILBOX0_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_MAILBOX0_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_MAILBOX0_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_MAILBOX0_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_MAILBOX0_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_MAILBOX0_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_MAILBOX0_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_MAILBOX0_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_MAILBOX0_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_MAILBOX0_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* L4HS_CLKSTCTRL */
#define CM_PER_L4HS_CLKSTCTRL_CLKACTIVITY_CPSW_250MHZ_GCLK   (0x00000010u)
#define CM_PER_L4HS_CLKSTCTRL_CLKACTIVITY_CPSW_250MHZ_GCLK_SHIFT   (0x00000004u)
#define CM_PER_L4HS_CLKSTCTRL_CLKACTIVITY_CPSW_250MHZ_GCLK_ACT   (0x1u)
#define CM_PER_L4HS_CLKSTCTRL_CLKACTIVITY_CPSW_250MHZ_GCLK_INACT   (0x0u)

#define CM_PER_L4HS_CLKSTCTRL_CLKACTIVITY_CPSW_50MHZ_GCLK   (0x00000020u)
#define CM_PER_L4HS_CLKSTCTRL_CLKACTIVITY_CPSW_50MHZ_GCLK_SHIFT   (0x00000005u)
#define CM_PER_L4HS_CLKSTCTRL_CLKACTIVITY_CPSW_50MHZ_GCLK_ACT   (0x1u)
#define CM_PER_L4HS_CLKSTCTRL_CLKACTIVITY_CPSW_50MHZ_GCLK_INACT   (0x0u)

#define CM_PER_L4HS_CLKSTCTRL_CLKACTIVITY_CPSW_5MHZ_GCLK   (0x00000040u)
#define CM_PER_L4HS_CLKSTCTRL_CLKACTIVITY_CPSW_5MHZ_GCLK_SHIFT   (0x00000006u)
#define CM_PER_L4HS_CLKSTCTRL_CLKACTIVITY_CPSW_5MHZ_GCLK_ACT   (0x1u)
#define CM_PER_L4HS_CLKSTCTRL_CLKACTIVITY_CPSW_5MHZ_GCLK_INACT   (0x0u)

#define CM_PER_L4HS_CLKSTCTRL_CLKACTIVITY_L4HS_GCLK   (0x00000008u)
#define CM_PER_L4HS_CLKSTCTRL_CLKACTIVITY_L4HS_GCLK_SHIFT   (0x00000003u)
#define CM_PER_L4HS_CLKSTCTRL_CLKACTIVITY_L4HS_GCLK_ACT   (0x1u)
#define CM_PER_L4HS_CLKSTCTRL_CLKACTIVITY_L4HS_GCLK_INACT   (0x0u)

#define CM_PER_L4HS_CLKSTCTRL_CLKTRCTRL   (0x00000003u)
#define CM_PER_L4HS_CLKSTCTRL_CLKTRCTRL_SHIFT   (0x00000000u)
#define CM_PER_L4HS_CLKSTCTRL_CLKTRCTRL_HW_AUTO   (0x3u)
#define CM_PER_L4HS_CLKSTCTRL_CLKTRCTRL_NO_SLEEP   (0x0u)
#define CM_PER_L4HS_CLKSTCTRL_CLKTRCTRL_SW_SLEEP   (0x1u)
#define CM_PER_L4HS_CLKSTCTRL_CLKTRCTRL_SW_WKUP   (0x2u)


/* L4HS_CLKCTRL */
#define CM_PER_L4HS_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_L4HS_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_L4HS_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_L4HS_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_L4HS_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_L4HS_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_L4HS_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_L4HS_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_L4HS_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_L4HS_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_L4HS_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_L4HS_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* MSTR_EXPS_CLKCTRL */
#define CM_PER_MSTR_EXPS_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_MSTR_EXPS_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_MSTR_EXPS_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_MSTR_EXPS_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_MSTR_EXPS_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_MSTR_EXPS_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_MSTR_EXPS_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_MSTR_EXPS_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_MSTR_EXPS_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_MSTR_EXPS_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_MSTR_EXPS_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_MSTR_EXPS_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)

#define CM_PER_MSTR_EXPS_CLKCTRL_STBYST   (0x00040000u)
#define CM_PER_MSTR_EXPS_CLKCTRL_STBYST_SHIFT   (0x00000012u)
#define CM_PER_MSTR_EXPS_CLKCTRL_STBYST_FUNC   (0x0u)
#define CM_PER_MSTR_EXPS_CLKCTRL_STBYST_STANDBY   (0x1u)


/* SLV_EXPS_CLKCTRL */
#define CM_PER_SLV_EXPS_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_SLV_EXPS_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_SLV_EXPS_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_SLV_EXPS_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_SLV_EXPS_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_SLV_EXPS_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_SLV_EXPS_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_SLV_EXPS_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_SLV_EXPS_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_SLV_EXPS_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_SLV_EXPS_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_SLV_EXPS_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* OCPWP_L3_CLKSTCTRL */
#define CM_PER_OCPWP_L3_CLKSTCTRL_CLKACTIVITY_OCPWP_L3_GCLK   (0x00000010u)
#define CM_PER_OCPWP_L3_CLKSTCTRL_CLKACTIVITY_OCPWP_L3_GCLK_SHIFT   (0x00000004u)
#define CM_PER_OCPWP_L3_CLKSTCTRL_CLKACTIVITY_OCPWP_L3_GCLK_ACT   (0x1u)
#define CM_PER_OCPWP_L3_CLKSTCTRL_CLKACTIVITY_OCPWP_L3_GCLK_INACT   (0x0u)

#define CM_PER_OCPWP_L3_CLKSTCTRL_CLKACTIVITY_OCPWP_L4_GCLK   (0x00000020u)
#define CM_PER_OCPWP_L3_CLKSTCTRL_CLKACTIVITY_OCPWP_L4_GCLK_SHIFT   (0x00000005u)
#define CM_PER_OCPWP_L3_CLKSTCTRL_CLKACTIVITY_OCPWP_L4_GCLK_ACT   (0x1u)
#define CM_PER_OCPWP_L3_CLKSTCTRL_CLKACTIVITY_OCPWP_L4_GCLK_INACT   (0x0u)

#define CM_PER_OCPWP_L3_CLKSTCTRL_CLKTRCTRL   (0x00000003u)
#define CM_PER_OCPWP_L3_CLKSTCTRL_CLKTRCTRL_SHIFT   (0x00000000u)
#define CM_PER_OCPWP_L3_CLKSTCTRL_CLKTRCTRL_HW_AUTO   (0x3u)
#define CM_PER_OCPWP_L3_CLKSTCTRL_CLKTRCTRL_NO_SLEEP   (0x0u)
#define CM_PER_OCPWP_L3_CLKSTCTRL_CLKTRCTRL_SW_SLEEP   (0x1u)
#define CM_PER_OCPWP_L3_CLKSTCTRL_CLKTRCTRL_SW_WKUP   (0x2u)


/* OCPWP_CLKCTRL */
#define CM_PER_OCPWP_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_OCPWP_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_OCPWP_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_OCPWP_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_OCPWP_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_OCPWP_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_OCPWP_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_OCPWP_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_OCPWP_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_OCPWP_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_OCPWP_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_OCPWP_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)

#define CM_PER_OCPWP_CLKCTRL_STBYST   (0x00040000u)
#define CM_PER_OCPWP_CLKCTRL_STBYST_SHIFT   (0x00000012u)
#define CM_PER_OCPWP_CLKCTRL_STBYST_FUNC   (0x0u)
#define CM_PER_OCPWP_CLKCTRL_STBYST_STANDBY   (0x1u)


/* ICSS_CLKSTCTRL */
#define CM_PER_ICSS_CLKSTCTRL_CLKACTIVITY_ICSS_IEP_GCLK   (0x00000020u)
#define CM_PER_ICSS_CLKSTCTRL_CLKACTIVITY_ICSS_IEP_GCLK_SHIFT   (0x00000005u)
#define CM_PER_ICSS_CLKSTCTRL_CLKACTIVITY_ICSS_IEP_GCLK_ACT   (0x1u)
#define CM_PER_ICSS_CLKSTCTRL_CLKACTIVITY_ICSS_IEP_GCLK_INACT   (0x0u)

#define CM_PER_ICSS_CLKSTCTRL_CLKACTIVITY_ICSS_OCP_GCLK   (0x00000010u)
#define CM_PER_ICSS_CLKSTCTRL_CLKACTIVITY_ICSS_OCP_GCLK_SHIFT   (0x00000004u)
#define CM_PER_ICSS_CLKSTCTRL_CLKACTIVITY_ICSS_OCP_GCLK_ACT   (0x1u)
#define CM_PER_ICSS_CLKSTCTRL_CLKACTIVITY_ICSS_OCP_GCLK_INACT   (0x0u)

#define CM_PER_ICSS_CLKSTCTRL_CLKACTIVITY_ICSS_UART_GCLK   (0x00000040u)
#define CM_PER_ICSS_CLKSTCTRL_CLKACTIVITY_ICSS_UART_GCLK_SHIFT   (0x00000006u)
#define CM_PER_ICSS_CLKSTCTRL_CLKACTIVITY_ICSS_UART_GCLK_ACT   (0x1u)
#define CM_PER_ICSS_CLKSTCTRL_CLKACTIVITY_ICSS_UART_GCLK_INACT   (0x0u)

#define CM_PER_ICSS_CLKSTCTRL_CLKTRCTRL   (0x00000003u)
#define CM_PER_ICSS_CLKSTCTRL_CLKTRCTRL_SHIFT   (0x00000000u)
#define CM_PER_ICSS_CLKSTCTRL_CLKTRCTRL_HW_AUTO   (0x3u)
#define CM_PER_ICSS_CLKSTCTRL_CLKTRCTRL_NO_SLEEP   (0x0u)
#define CM_PER_ICSS_CLKSTCTRL_CLKTRCTRL_SW_SLEEP   (0x1u)
#define CM_PER_ICSS_CLKSTCTRL_CLKTRCTRL_SW_WKUP   (0x2u)


/* CPSW_CLKSTCTRL */
#define CM_PER_CPSW_CLKSTCTRL_CLKACTIVITY_CPSW_125MHZ_GCLK   (0x00000010u)
#define CM_PER_CPSW_CLKSTCTRL_CLKACTIVITY_CPSW_125MHZ_GCLK_SHIFT   (0x00000004u)
#define CM_PER_CPSW_CLKSTCTRL_CLKACTIVITY_CPSW_125MHZ_GCLK_ACT   (0x1u)
#define CM_PER_CPSW_CLKSTCTRL_CLKACTIVITY_CPSW_125MHZ_GCLK_INACT   (0x0u)

#define CM_PER_CPSW_CLKSTCTRL_CLKTRCTRL   (0x00000003u)
#define CM_PER_CPSW_CLKSTCTRL_CLKTRCTRL_SHIFT   (0x00000000u)
#define CM_PER_CPSW_CLKSTCTRL_CLKTRCTRL_HW_AUTO   (0x3u)
#define CM_PER_CPSW_CLKSTCTRL_CLKTRCTRL_NO_SLEEP   (0x0u)
#define CM_PER_CPSW_CLKSTCTRL_CLKTRCTRL_SW_SLEEP   (0x1u)
#define CM_PER_CPSW_CLKSTCTRL_CLKTRCTRL_SW_WKUP   (0x2u)


/* LCDC_CLKSTCTRL */
#define CM_PER_LCDC_CLKSTCTRL_CLKACTIVITY_LCDC_L3_OCP_GCLK   (0x00000010u)
#define CM_PER_LCDC_CLKSTCTRL_CLKACTIVITY_LCDC_L3_OCP_GCLK_SHIFT   (0x00000004u)
#define CM_PER_LCDC_CLKSTCTRL_CLKACTIVITY_LCDC_L3_OCP_GCLK_ACT   (0x1u)
#define CM_PER_LCDC_CLKSTCTRL_CLKACTIVITY_LCDC_L3_OCP_GCLK_INACT   (0x0u)

#define CM_PER_LCDC_CLKSTCTRL_CLKACTIVITY_LCDC_L4_OCP_GCLK   (0x00000020u)
#define CM_PER_LCDC_CLKSTCTRL_CLKACTIVITY_LCDC_L4_OCP_GCLK_SHIFT   (0x00000005u)
#define CM_PER_LCDC_CLKSTCTRL_CLKACTIVITY_LCDC_L4_OCP_GCLK_ACT   (0x1u)
#define CM_PER_LCDC_CLKSTCTRL_CLKACTIVITY_LCDC_L4_OCP_GCLK_INACT   (0x0u)

#define CM_PER_LCDC_CLKSTCTRL_CLKTRCTRL   (0x00000003u)
#define CM_PER_LCDC_CLKSTCTRL_CLKTRCTRL_SHIFT   (0x00000000u)
#define CM_PER_LCDC_CLKSTCTRL_CLKTRCTRL_HW_AUTO   (0x3u)
#define CM_PER_LCDC_CLKSTCTRL_CLKTRCTRL_NO_SLEEP   (0x0u)
#define CM_PER_LCDC_CLKSTCTRL_CLKTRCTRL_SW_SLEEP   (0x1u)
#define CM_PER_LCDC_CLKSTCTRL_CLKTRCTRL_SW_WKUP   (0x2u)


/* CLKDIV32K_CLKCTRL */
#define CM_PER_CLKDIV32K_CLKCTRL_IDLEST   (0x00030000u)
#define CM_PER_CLKDIV32K_CLKCTRL_IDLEST_SHIFT   (0x00000010u)
#define CM_PER_CLKDIV32K_CLKCTRL_IDLEST_DISABLE   (0x3u)
#define CM_PER_CLKDIV32K_CLKCTRL_IDLEST_FUNC   (0x0u)
#define CM_PER_CLKDIV32K_CLKCTRL_IDLEST_IDLE   (0x2u)
#define CM_PER_CLKDIV32K_CLKCTRL_IDLEST_TRANS   (0x1u)

#define CM_PER_CLKDIV32K_CLKCTRL_MODULEMODE   (0x00000003u)
#define CM_PER_CLKDIV32K_CLKCTRL_MODULEMODE_SHIFT   (0x00000000u)
#define CM_PER_CLKDIV32K_CLKCTRL_MODULEMODE_DISABLED   (0x0u)
#define CM_PER_CLKDIV32K_CLKCTRL_MODULEMODE_ENABLE   (0x2u)
#define CM_PER_CLKDIV32K_CLKCTRL_MODULEMODE_RESERVED   (0x3u)
#define CM_PER_CLKDIV32K_CLKCTRL_MODULEMODE_RESERVED_1   (0x1u)


/* CLK_24MHZ_CLKSTCTRL */
#define CM_PER_CLK_24MHZ_CLKSTCTRL_CLKACTIVITY_CLK_24MHZ_GCLK   (0x00000010u)
#define CM_PER_CLK_24MHZ_CLKSTCTRL_CLKACTIVITY_CLK_24MHZ_GCLK_SHIFT   (0x00000004u)
#define CM_PER_CLK_24MHZ_CLKSTCTRL_CLKACTIVITY_CLK_24MHZ_GCLK_ACT   (0x1u)
#define CM_PER_CLK_24MHZ_CLKSTCTRL_CLKACTIVITY_CLK_24MHZ_GCLK_INACT   (0x0u)

#define CM_PER_CLK_24MHZ_CLKSTCTRL_CLKTRCTRL   (0x00000003u)
#define CM_PER_CLK_24MHZ_CLKSTCTRL_CLKTRCTRL_SHIFT   (0x00000000u)
#define CM_PER_CLK_24MHZ_CLKSTCTRL_CLKTRCTRL_HW_AUTO   (0x3u)
#define CM_PER_CLK_24MHZ_CLKSTCTRL_CLKTRCTRL_NO_SLEEP   (0x0u)
#define CM_PER_CLK_24MHZ_CLKSTCTRL_CLKTRCTRL_SW_SLEEP   (0x1u)
#define CM_PER_CLK_24MHZ_CLKSTCTRL_CLKTRCTRL_SW_WKUP   (0x2u)

/** @brief Base addresses of PWMSS memory mapped registers.                   */

#define SOC_PWMSS0_REGS                     (0x48300000)
#define SOC_PWMSS1_REGS                     (0x48302000)
#define SOC_PWMSS2_REGS                     (0x48304000)
#define SOC_ECAP_REGS                       (0x00000100)
#define SOC_EQEP_REGS                       (0x00000180)
#define SOC_EPWM_REGS                       (0x00000200)
#define SOC_ECAP_0_REGS                     (SOC_PWMSS0_REGS + SOC_ECAP_REGS)
#define SOC_ECAP_1_REGS                     (SOC_PWMSS1_REGS + SOC_ECAP_REGS)
#define SOC_ECAP_2_REGS                     (SOC_PWMSS2_REGS + SOC_ECAP_REGS)

#define SOC_EQEP_0_REGS                     (SOC_PWMSS0_REGS + SOC_EQEP_REGS)
#define SOC_EQEP_1_REGS                     (SOC_PWMSS1_REGS + SOC_EQEP_REGS)
#define SOC_EQEP_2_REGS                     (SOC_PWMSS2_REGS + SOC_EQEP_REGS) 

#define SOC_EPWM_0_REGS                     (SOC_PWMSS0_REGS + SOC_EPWM_REGS)
#define SOC_EPWM_1_REGS                     (SOC_PWMSS1_REGS + SOC_EPWM_REGS)
#define SOC_EPWM_2_REGS                     (SOC_PWMSS2_REGS + SOC_EPWM_REGS)

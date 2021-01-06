/*============================================================================*/
/* Project      = R-CarGen3 AUTOSAR MCAL Development Project                  */
/* Module       = RCar_M3N_Translation.h                                       */
/* Version      = V1.0.0                                                      */
/* Date         = 16-Oct-2015                                                 */
/*============================================================================*/
/*                                  COPYRIGHT                                 */
/*============================================================================*/
/* Copyright(c) 2015-2016 Renesas Electronics Corporation                     */
/*============================================================================*/
/* Purpose:                                                                   */
/* This translation file maps device file macros with user defined            */
/* (RENESAS_SCIT) macros.  Generator uses this translation file inorder to    */
/* avoid hardcoding of base addressess or the usage of device header file     */
/* macros directly.                                                           */
/*============================================================================*/
/*                                                                            */
/* Unless otherwise agreed upon in writing between your company and           */
/* Renesas Electronics Corporation the following shall apply!                 */
/*                                                                            */
/* Warranty Disclaimer                                                        */
/*                                                                            */
/* There is no warranty of any kind whatsoever granted by Renesas. Any        */
/* warranty is expressly disclaimed and excluded by Renesas, either expressed */
/* or implied, including but not limited to those for non-infringement of     */
/* intellectual property, merchantability and/or fitness for the particular   */
/* purpose.                                                                   */
/*                                                                            */
/* Renesas shall not have any obligation to maintain, service or provide bug  */
/* fixes for the supplied Product(s) and/or the Application.                  */
/*                                                                            */
/* Each User is solely responsible for determining the appropriateness of     */
/* using the Product(s) and assumes all risks associated with its exercise    */
/* of rights under this Agreement, including, but not limited to the risks    */
/* and costs of program errors, compliance with applicable laws, damage to    */
/* or loss of data, programs or equipment, and unavailability or              */
/* interruption of operations.                                                */
/*                                                                            */
/* Limitation of Liability                                                    */
/*                                                                            */
/* In no event shall Renesas be liable to the User for any incidental,        */
/* consequential, indirect, or punitive damage (including but not limited     */
/* to lost profits) regardless of whether such liability is based on breach   */
/* of contract, tort, strict liability, breach of warranties, failure of      */
/* essential purpose or otherwise and even if advised of the possibility of   */
/* such damages. Renesas shall not be liable for any services or products     */
/* provided by third party vendors, developers or consultants identified or   */
/* referred to the User by Renesas in connection with the Product(s) and/or   */
/* the Application.                                                           */
/*                                                                            */
/*============================================================================*/
/* Environment:                                                               */
/*              Devices:        M3N                                            */
/*============================================================================*/

/*******************************************************************************
**                      Revision Control History                              **
*******************************************************************************/
/*
 * V1.0.0:   16-Oct-2015  : Initial version
 */
/******************************************************************************/
/*******************************************************************************
**                      Include Section                                       **
*******************************************************************************/

/*******************************************************************************
**                      Version Information                                   **
*******************************************************************************/

/*******************************************************************************
**                      Global Symbols                                        **
*******************************************************************************/

/*******************************************************************************
**                      Global Data Types                                     **
*******************************************************************************/


/*******************************************************************************
**                 Macros for Watchdog Driver                                 **
*******************************************************************************/


/*******************************************************************************
**                 Macros for DMA Driver                                      **
*******************************************************************************/


/*******************************************************************************
**                 Macros for GIC400                                          **
*******************************************************************************/
#define RENESAS_GICD_BASE_ADDR                GICD_BASE_ADDR


/*******************************************************************************
**                 Macros for ADC Driver                                      **
*******************************************************************************/


/*******************************************************************************
**                 Macros for MCU Driver                                      **
*******************************************************************************/
#define RENESAS_WBCTLR                        WBCTLR
#define RENESAS_WBIMSKR                       WBIMSKR
#define RENESAS_WBIMSKSTSR                    WBIMSKSTSR
#define RENESAS_WBIRAWSTSR                    WBIRAWSTSR
#define RENESAS_WBICLRR                       WBICLRR
#define RENESAS_WBSERRADDR                    WBSERRADDR
#define RENESAS_WBDERRADDR                    WBDERRADDR
#define RENESAS_WBSYNCR                       WBSYNCR
#define RENESAS_WBPWRCTLR                     WBPWRCTLR
#define RENESAS_CPGWPCR                       CPGWPCR
#define RENESAS_CPGWPR                        CPGWPR
#define RENESAS_FRQCRB                        FRQCRB
#define RENESAS_FRQCRC                        FRQCRC
#define RENESAS_PLLECR                        PLLECR
#define RENESAS_CANFDCKCR                     CANFDCKCR
#define RENESAS_MSOCKCR                       MSOCKCR
#define RENESAS_RCKCR                         RCKCR
#define RENESAS_DVFSCR0                       DVFSCR0
#define RENESAS_DVFSCR1                       DVFSCR1
#define RENESAS_FSAPBR_CPG                    FSAPBR_CPG
#define RENESAS_FSAPBR_RST                    FSAPBR_RST
#define RENESAS_FSCLKCSR                      FSCLKCSR
#define RENESAS_FSCNTCHKH1                    FSCNTCHKH1
#define RENESAS_FSCNTCHKH5                    FSCNTCHKH5
#define RENESAS_FSCNTCHKH6                    FSCNTCHKH6
#define RENESAS_FSCNTCHKL1                    FSCNTCHKL1
#define RENESAS_FSCNTCHKL5                    FSCNTCHKL5
#define RENESAS_FSCNTCHKL6                    FSCNTCHKL6
#define RENESAS_FSCNTMON1                     FSCNTMON1
#define RENESAS_FSCNTMON5                     FSCNTMON5
#define RENESAS_FSCNTMON6                     FSCNTMON6
#define RENESAS_MSTPSR1                       MSTPSR1
#define RENESAS_MSTPSR2                       MSTPSR2
#define RENESAS_MSTPSR4                       MSTPSR4
#define RENESAS_MSTPSR9                       MSTPSR9
#define RENESAS_RMSTPCR1                      RMSTPCR1
#define RENESAS_RMSTPCR2                      RMSTPCR2
#define RENESAS_RMSTPCR4                      RMSTPCR4
#define RENESAS_RMSTPCR8                      RMSTPCR8
#define RENESAS_RMSTPCR9                      RMSTPCR9
#define RENESAS_SMSTPCR1                      SMSTPCR1
#define RENESAS_SMSTPCR2                      SMSTPCR2
#define RENESAS_SMSTPCR4                      SMSTPCR4
#define RENESAS_SMSTPCR9                      SMSTPCR9
#define RENESAS_SCMSTPCR1                     SCMSTPCR1
#define RENESAS_SCMSTPCR2                     SCMSTPCR2
#define RENESAS_SCMSTPCR4                     SCMSTPCR4
#define RENESAS_SCMSTPCR8                     SCMSTPCR8
#define RENESAS_SCMSTPCR9                     SCMSTPCR9
#define RENESAS_SAMSTPCR1                     SAMSTPCR1
#define RENESAS_SAMSTPCR2                     SAMSTPCR2
#define RENESAS_SAMSTPCR4                     SAMSTPCR4
#define RENESAS_SAMSTPCR8                     SAMSTPCR8
#define RENESAS_SAMSTPCR9                     SAMSTPCR9
#define RENESAS_SCPTCSR_MSTPRST               SCPTCSR_MSTPRST
#define RENESAS_SCERMIDR_MSTPRST              SCERMIDR_MSTPRST
#define RENESAS_SCERADR_MSTPRST               SCERADR_MSTPRST
#define RENESAS_SAPTCSR_MSTPRST               SAPTCSR_MSTPRST
#define RENESAS_SAERMIDR_MSTPRST              SAERMIDR_MSTPRST
#define RENESAS_SAERADR_MSTPRST               SAERADR_MSTPRST
#define RENESAS_SYSCSR                        SYSCSR
#define RENESAS_SYSCISR                       SYSCISR
#define RENESAS_SYSCISCR                      SYSCISCR
#define RENESAS_SYSCIER                       SYSCIER
#define RENESAS_SYSCIMR                       SYSCIMR
#define RENESAS_WUPMSKCR7                     WUPMSKCR7
#define RENESAS_SYSCEERSR3                    SYSCEERSR3
#define RENESAS_SYSCEERSCR3                   SYSCEERSCR3
#define RENESAS_SYSCEERSER3                   SYSCEERSER3
#define RENESAS_PWRSR7                        PWRSR7
#define RENESAS_PWROFFCR7                     PWROFFCR7
#define RENESAS_PWROFFSR7                     PWROFFSR7
#define RENESAS_PWRONCR7                      PWRONCR7
#define RENESAS_PWRONSR7                      PWRONSR7
#define RENESAS_PWRER7                        PWRER7
#define RENESAS_PWRPSEU7                      PWRPSEU7
#define RENESAS_PWRISOER7                     PWRISOER7
#define RENESAS_APBSFTYCHKR                   APBSFTYCHKR
#define RENESAS_SRESCR                        SRESCR
#define RENESAS_RRSTFR                        RRSTFR
#define RENESAS_SCPTCSR_RST                   SCPTCSR_RST
#define RENESAS_SCERMIDR_RST                  SCERMIDR_RST
#define RENESAS_SCERADR_RST                   SCERADR_RST
#define RENESAS_SAPTCSR_RST                   SAPTCSR_RST
#define RENESAS_SAERMIDR_RST                  SAERMIDR_RST
#define RENESAS_SAERADR_RST                   SAERADR_RST
#define RENESAS_SCU_ACCESS_CTRL               SCU_ACCESS_CTRL
#define RENESAS_SCU_CPU_POWER_STATUS          SCU_CPU_POWER_STATUS
#define RENESAS_RMSTPCR8_BASE                 RMSTPCR8_BASE
#define RENESAS_RMSTPCR_BASE                  RMSTPCR_BASE
#define RENESAS_MSTPSR_BASE                   MSTPSR_BASE
#define RENESAS_SMSTPCR_BASE                  SMSTPCR_BASE
#define RENESAS_SCMSTPCR_BASE                 SCMSTPCR_BASE
#define RENESAS_SAMSTPCR_BASE                 SAMSTPCR_BASE
#define RENESAS_SAGRP0CR2                     SAGRP0CR2
#define RENESAS_SAGRP1CR2                     SAGRP1CR2
#define RENESAS_SAFGPRR                       SAFGPRR
#define RENESAS_MFIERRCTLR0                   MFIERRCTLR0
#define RENESAS_MFIERRCTLR3                   MFIERRCTLR3
#define RENESAS_MFIERRCTLR5                   MFIERRCTLR5
#define RENESAS_MFIERRSTSR0                   MFIERRSTSR0
#define RENESAS_MFIERRSTSR3                   MFIERRSTSR3
#define RENESAS_MFIERRSTSR5                   MFIERRSTSR5
#define RENESAS_MFIERRTGTR0                   MFIERRTGTR0
#define RENESAS_MFIERRTGTR3                   MFIERRTGTR3
#define RENESAS_MFIERRTGTR5                   MFIERRTGTR5
#define RENESAS_MFISLCKR0                     MFISLCKR0
#define RENESAS_MFISLCKR1                     MFISLCKR1
#define RENESAS_MFISLCKR2                     MFISLCKR2
#define RENESAS_MFISLCKR3                     MFISLCKR3
#define RENESAS_MFISLCKR4                     MFISLCKR4
#define RENESAS_MFISLCKR5                     MFISLCKR5
#define RENESAS_MFISLCKR6                     MFISLCKR6
#define RENESAS_MFISLCKR7                     MFISLCKR7
#define RENESAS_RFSO0_BASE_ADDR               RFSO0_BASE_ADDR
#define RENESAS_RFSO1_BASE_ADDR               RFSO1_BASE_ADDR
#define RENESAS_RFSO2_BASE_ADDR               RFSO2_BASE_ADDR
#define RENESAS_RFSO3_BASE_ADDR               RFSO3_BASE_ADDR
#define RENESAS_RFSO4_BASE_ADDR               RFSO4_BASE_ADDR
#define RENESAS_RFSO5_BASE_ADDR               RFSO5_BASE_ADDR
#define RENESAS_RFSO6_BASE_ADDR               RFSO6_BASE_ADDR
#define RENESAS_RFSO7_BASE_ADDR               RFSO7_BASE_ADDR
#define RENESAS_RFSO8_BASE_ADDR               RFSO8_BASE_ADDR
#define RENESAS_RFSO9_BASE_ADDR               RFSO9_BASE_ADDR
#define RENESAS_RFSO10_BASE_ADDR              RFSO10_BASE_ADDR

/*******************************************************************************
**              Common Macros for ICU, GPT and PWM Drivers                    **
*******************************************************************************/

/*******************************************************************************
**              Common Macros for WDG Drivers                                 **
*******************************************************************************/
#define RENESAS_RWTCNT                        RWTCNT
#define RENESAS_RWTCSRA                       RWTCSRA
#define RENESAS_RWTCSRB                       RWTCSRB
#define RENESAS_WDTRSTCR                      WDTRSTCR

/*******************************************************************************
**                     Macros for GPT Drivers                                 **
*******************************************************************************/
#define RENESAS_TMU_TSTR0                     TMU_TSTR0
#define RENESAS_TMU_TCOR0                     TMU_TCOR0
#define RENESAS_TMU_TCNT0                     TMU_TCNT0
#define RENESAS_TMU_TCR0                      TMU_TCR0
#define RENESAS_TMU_TCOR1                     TMU_TCOR1
#define RENESAS_TMU_TCNT1                     TMU_TCNT1
#define RENESAS_TMU_TCR1                      TMU_TCR1
#define RENESAS_TMU_TCOR2                     TMU_TCOR2
#define RENESAS_TMU_TCNT2                     TMU_TCNT2
#define RENESAS_TMU_TCR2                      TMU_TCR2

#define RENESAS_TMU_TSTR1                     TMU_TSTR1
#define RENESAS_TMU_TCOR3                     TMU_TCOR3
#define RENESAS_TMU_TCNT3                     TMU_TCNT3
#define RENESAS_TMU_TCR3                      TMU_TCR3
#define RENESAS_TMU_TCOR4                     TMU_TCOR4
#define RENESAS_TMU_TCNT4                     TMU_TCNT4
#define RENESAS_TMU_TCR4                      TMU_TCR4
#define RENESAS_TMU_TCOR5                     TMU_TCOR5
#define RENESAS_TMU_TCNT5                     TMU_TCNT2
#define RENESAS_TMU_TCR5                      TMU_TCR5
#define RENESAS_TMU_TCPR5                     TMU_TCPR5

#define RENESAS_TMU_TSTR2                     TMU_TSTR2
#define RENESAS_TMU_TCOR6                     TMU_TCOR6
#define RENESAS_TMU_TCNT6                     TMU_TCNT6
#define RENESAS_TMU_TCR6                      TMU_TCR6
#define RENESAS_TMU_TCOR7                     TMU_TCOR7
#define RENESAS_TMU_TCNT7                     TMU_TCNT7
#define RENESAS_TMU_TCR7                      TMU_TCR7
#define RENESAS_TMU_TCOR8                     TMU_TCOR8
#define RENESAS_TMU_TCNT8                     TMU_TCNT8
#define RENESAS_TMU_TCR8                      TMU_TCR8
#define RENESAS_TMU_TCPR8                     TMU_TCPR8

#define RENESAS_TMU_TSTR3                     TMU_TSTR3
#define RENESAS_TMU_TCOR9                     TMU_TCOR9
#define RENESAS_TMU_TCNT9                     TMU_TCNT9
#define RENESAS_TMU_TCR9                      TMU_TCR9
#define RENESAS_TMU_TCOR10                    TMU_TCOR10
#define RENESAS_TMU_TCNT10                    TMU_TCNT10
#define RENESAS_TMU_TCR10                     TMU_TCR10
#define RENESAS_TMU_TCOR11                    TMU_TCOR11
#define RENESAS_TMU_TCNT11                    TMU_TCNT11
#define RENESAS_TMU_TCR11                     TMU_TCR11
#define RENESAS_TMU_TCPR11                    TMU_TCPR11

#define RENESAS_TMU_TSTR4                     TMU_TSTR4
#define RENESAS_TMU_TCOR12                    TMU_TCOR12
#define RENESAS_TMU_TCNT12                    TMU_TCNT12
#define RENESAS_TMU_TCR12                     TMU_TCR12
#define RENESAS_TMU_TCOR13                    TMU_TCOR13
#define RENESAS_TMU_TCNT13                    TMU_TCNT13
#define RENESAS_TMU_TCR13                     TMU_TCR13
#define RENESAS_TMU_TCOR14                    TMU_TCOR14
#define RENESAS_TMU_TCNT14                    TMU_TCNT14
#define RENESAS_TMU_TCR14                     TMU_TCR14

/*******************************************************************************
 **                 Macros for Global Timer                                    **
 *******************************************************************************/
#define RENESAS_PERIPH_BASE_ADDR			  PERIPH_BASE_ADDR

/*******************************************************************************
**                 Macros for ICU Driver                                      **
*******************************************************************************/


/*******************************************************************************
**                 Macros for PWM Driver                                      **
*******************************************************************************/


/*******************************************************************************
**                 Macros for VOWE0IMR Register                               **
*******************************************************************************/


/*******************************************************************************
**                 Macros for SPI Driver                                     **
*******************************************************************************/

#define RENESAS_MSIOF0_BASE                   MSIOF0_BASE_ADDR
#define RENESAS_MSIOF1_BASE                   MSIOF1_BASE_ADDR
#define RENESAS_MSIOF2_BASE                   MSIOF2_BASE_ADDR
#define RENESAS_MSIOF3_BASE                   MSIOF3_BASE_ADDR
#define RENESAS_MSIOF0_SIRFDR                 MSIOF0_SIRFDR
#define RENESAS_MSIOF1_SIRFDR                 MSIOF1_SIRFDR
#define RENESAS_MSIOF2_SIRFDR                 MSIOF2_SIRFDR
#define RENESAS_MSIOF3_SIRFDR                 MSIOF3_SIRFDR
#define RENESAS_MSIOF0_SITFDR                 MSIOF0_SITFDR
#define RENESAS_MSIOF1_SITFDR                 MSIOF1_SITFDR
#define RENESAS_MSIOF2_SITFDR                 MSIOF2_SITFDR
#define RENESAS_MSIOF3_SITFDR                 MSIOF3_SITFDR
#define RENESAS_DMA0_BASE                     DMA0_BASE_ADDR
#define RENESAS_DMA1_BASE                     DMA1_BASE_ADDR
#define RENESAS_DMA2_BASE                     DMA2_BASE_ADDR
#define RENESAS_DMA3_BASE                     DMA3_BASE_ADDR
#define RENESAS_DMA4_BASE                     DMA4_BASE_ADDR
#define RENESAS_DMA5_BASE                     DMA5_BASE_ADDR
#define RENESAS_DMA6_BASE                     DMA6_BASE_ADDR
#define RENESAS_DMA7_BASE                     DMA7_BASE_ADDR
#define RENESAS_DMA8_BASE                     DMA8_BASE_ADDR
#define RENESAS_DMA9_BASE                     DMA9_BASE_ADDR
#define RENESAS_DMA10_BASE                    DMA10_BASE_ADDR
#define RENESAS_DMA11_BASE                    DMA11_BASE_ADDR
#define RENESAS_DMA12_BASE                    DMA12_BASE_ADDR
#define RENESAS_DMA13_BASE                    DMA13_BASE_ADDR
#define RENESAS_DMA14_BASE                    DMA14_BASE_ADDR
#define RENESAS_DMA15_BASE                    DMA15_BASE_ADDR
#define RENESAS_DMA16_BASE                    DMA16_BASE_ADDR
#define RENESAS_DMA17_BASE                    DMA17_BASE_ADDR
#define RENESAS_DMA18_BASE                    DMA18_BASE_ADDR
#define RENESAS_DMA19_BASE                    DMA19_BASE_ADDR
#define RENESAS_DMA20_BASE                    DMA20_BASE_ADDR
#define RENESAS_DMA21_BASE                    DMA21_BASE_ADDR
#define RENESAS_DMA22_BASE                    DMA22_BASE_ADDR
#define RENESAS_DMA23_BASE                    DMA23_BASE_ADDR
#define RENESAS_DMA24_BASE                    DMA24_BASE_ADDR
#define RENESAS_DMA25_BASE                    DMA25_BASE_ADDR
#define RENESAS_DMA26_BASE                    DMA26_BASE_ADDR
#define RENESAS_DMA27_BASE                    DMA27_BASE_ADDR
#define RENESAS_DMA28_BASE                    DMA28_BASE_ADDR
#define RENESAS_DMA29_BASE                    DMA29_BASE_ADDR
#define RENESAS_DMA30_BASE                    DMA30_BASE_ADDR
#define RENESAS_DMA31_BASE                    DMA31_BASE_ADDR
#define RENESAS_DMA32_BASE                    DMA32_BASE_ADDR
#define RENESAS_DMA33_BASE                    DMA33_BASE_ADDR
#define RENESAS_DMA34_BASE                    DMA34_BASE_ADDR
#define RENESAS_DMA35_BASE                    DMA35_BASE_ADDR
#define RENESAS_DMA36_BASE                    DMA36_BASE_ADDR
#define RENESAS_DMA37_BASE                    DMA37_BASE_ADDR
#define RENESAS_DMA38_BASE                    DMA38_BASE_ADDR
#define RENESAS_DMA39_BASE                    DMA39_BASE_ADDR
#define RENESAS_DMA40_BASE                    DMA40_BASE_ADDR
#define RENESAS_DMA41_BASE                    DMA41_BASE_ADDR
#define RENESAS_DMA42_BASE                    DMA42_BASE_ADDR
#define RENESAS_DMA43_BASE                    DMA43_BASE_ADDR
#define RENESAS_DMA44_BASE                    DMA44_BASE_ADDR
#define RENESAS_DMA45_BASE                    DMA45_BASE_ADDR
#define RENESAS_DMA46_BASE                    DMA46_BASE_ADDR
#define RENESAS_DMA47_BASE                    DMA47_BASE_ADDR
#define RENESAS_DMAOR0_ADDR                   DMAOR0_ADDR
#define RENESAS_DMAOR1_ADDR                   DMAOR1_ADDR
#define RENESAS_DMAOR2_ADDR                   DMAOR2_ADDR
#define RENESAS_DMARS0_ADDR                   DMARS0_ADDR
#define RENESAS_DMARS1_ADDR                   DMARS1_ADDR
#define RENESAS_DMARS2_ADDR                   DMARS2_ADDR
#define RENESAS_DMARS3_ADDR                   DMARS3_ADDR
#define RENESAS_DMARS4_ADDR                   DMARS4_ADDR
#define RENESAS_DMARS5_ADDR                   DMARS5_ADDR
#define RENESAS_DMARS6_ADDR                   DMARS6_ADDR
#define RENESAS_DMARS7_ADDR                   DMARS7_ADDR
#define RENESAS_DMARS8_ADDR                   DMARS8_ADDR
#define RENESAS_DMARS9_ADDR                   DMARS9_ADDR
#define RENESAS_DMARS10_ADDR                  DMARS10_ADDR
#define RENESAS_DMARS11_ADDR                  DMARS11_ADDR
#define RENESAS_DMARS12_ADDR                  DMARS12_ADDR
#define RENESAS_DMARS13_ADDR                  DMARS13_ADDR
#define RENESAS_DMARS14_ADDR                  DMARS14_ADDR
#define RENESAS_DMARS15_ADDR                  DMARS15_ADDR
#define RENESAS_DMARS16_ADDR                  DMARS16_ADDR
#define RENESAS_DMARS17_ADDR                  DMARS17_ADDR
#define RENESAS_DMARS18_ADDR                  DMARS18_ADDR
#define RENESAS_DMARS19_ADDR                  DMARS19_ADDR
#define RENESAS_DMARS20_ADDR                  DMARS20_ADDR
#define RENESAS_DMARS21_ADDR                  DMARS21_ADDR
#define RENESAS_DMARS22_ADDR                  DMARS22_ADDR
#define RENESAS_DMARS23_ADDR                  DMARS23_ADDR
#define RENESAS_DMARS24_ADDR                  DMARS24_ADDR
#define RENESAS_DMARS25_ADDR                  DMARS25_ADDR
#define RENESAS_DMARS26_ADDR                  DMARS26_ADDR
#define RENESAS_DMARS27_ADDR                  DMARS27_ADDR
#define RENESAS_DMARS28_ADDR                  DMARS28_ADDR
#define RENESAS_DMARS29_ADDR                  DMARS29_ADDR
#define RENESAS_DMARS30_ADDR                  DMARS30_ADDR
#define RENESAS_DMARS31_ADDR                  DMARS31_ADDR
#define RENESAS_DMARS32_ADDR                  DMARS32_ADDR
#define RENESAS_DMARS33_ADDR                  DMARS33_ADDR
#define RENESAS_DMARS34_ADDR                  DMARS34_ADDR
#define RENESAS_DMARS35_ADDR                  DMARS35_ADDR
#define RENESAS_DMARS36_ADDR                  DMARS36_ADDR
#define RENESAS_DMARS37_ADDR                  DMARS37_ADDR
#define RENESAS_DMARS38_ADDR                  DMARS38_ADDR
#define RENESAS_DMARS39_ADDR                  DMARS39_ADDR
#define RENESAS_DMARS40_ADDR                  DMARS40_ADDR
#define RENESAS_DMARS41_ADDR                  DMARS41_ADDR
#define RENESAS_DMARS42_ADDR                  DMARS42_ADDR
#define RENESAS_DMARS43_ADDR                  DMARS43_ADDR
#define RENESAS_DMARS44_ADDR                  DMARS44_ADDR
#define RENESAS_DMARS45_ADDR                  DMARS45_ADDR
#define RENESAS_DMARS46_ADDR                  DMARS46_ADDR
#define RENESAS_DMARS47_ADDR                  DMARS47_ADDR
#define RENESAS_OUTDT0_ADDR                   OUTDT0_ADDR
#define RENESAS_OUTDT1_ADDR                   OUTDT1_ADDR
#define RENESAS_OUTDT2_ADDR                   OUTDT2_ADDR
#define RENESAS_OUTDT3_ADDR                   OUTDT3_ADDR
#define RENESAS_OUTDT4_ADDR                   OUTDT4_ADDR
#define RENESAS_OUTDT5_ADDR                   OUTDT5_ADDR
#define RENESAS_OUTDT6_ADDR                   OUTDT6_ADDR
#define RENESAS_OUTDT7_ADDR                   OUTDT7_ADDR
#define RENESAS_OUTDTH0_ADDR                  OUTDTH0_ADDR
#define RENESAS_OUTDTL0_ADDR                  OUTDTL0_ADDR


/*****************************************************************************
**                         Macros for CAN Driver                            **
******************************************************************************/
/*GLOBAL REGISTER MACROS*/
#define RENESAS_RSCFD0CFDGRMCFG   RSCFD0CFDGRMCFG
#define RENESAS_RSCFD0GCFG        RSCFD0GCFG
#define RENESAS_RSCFD0GCTR        RSCFD0GCTR
#define RENESAS_RSCFD0GSTS        RSCFD0GSTS
#define RENESAS_RSCFD0RMNB        RSCFD0RMNB
#define RENESAS_RSCFD0GAFLECTR    RSCFD0GAFLECTR
#define RENESAS_RSCFD0GAFLCFG0    RSCFD0GAFLCFG0
#define RENESAS_RSCFD0GAFLCFG1    RSCFD0GAFLCFG1
#define RENESAS_RSCFD0TMIEC0      RSCFD0TMIEC0
#define RENESAS_RSCFD0RMND0       RSCFD0RMND0
#define RENESAS_RSCFD0GTINTSTS0   RSCFD0GTINTSTS0

/* Macros for CAN MCUCLOCK Software Implementation */
#define RCAR_PREMIUM_DEVICE        1
#define RENESAS_CANMCUPPLCLOCK    McuPeripheralClock
#define RENESAS_CANMCUPCLKCLOCK   McuPeripheralClock
#define RENESAS_CANMCUMAINCLOCK   McuPeripheralClock

/*CHANNEL CONFIGURATION REGISTER MACROS*/
#define RENESAS_RSCFD0C0CFG       RSCFD0C0CFG
#define RENESAS_RSCFD0C1CFG       RSCFD0C1CFG

/*CHANNEL CONTROL REGISTER MACROS*/
#define RENESAS_RSCFD0C0CTR       RSCFD0C0CTR
#define RENESAS_RSCFD0C1CTR       RSCFD0C1CTR

/*CHANNEL STATUS REGISTER MACROS*/
#define RENESAS_RSCFD0C0STS       RSCFD0C0STS
#define RENESAS_RSCFD0C1STS       RSCFD0C1STS

/*THL REGISTER MACROS*/
#define RENESAS_RSCFD0THLCC0      RSCFD0THLCC0
#define RENESAS_RSCFD0THLCC1      RSCFD0THLCC1
#define RENESAS_RSCFD0THLACC0     RSCFD0THLACC0
#define RENESAS_RSCFD0THLACC1     RSCFD0THLACC1
#define RENESAS_RSCFD0THLSTS0     RSCFD0THLSTS0
#define RENESAS_RSCFD0THLSTS1     RSCFD0THLSTS1
#define RENESAS_RSCFD0THLPCTR0    RSCFD0THLPCTR0
#define RENESAS_RSCFD0THLPCTR1    RSCFD0THLPCTR1

/*RX BUFFERS MACROS*/
#define RENESAS_RSCFD0RMID0       RSCFD0RMID0
#define RENESAS_RSCFD0RMID1       RSCFD0RMID1
#define RENESAS_RSCFD0RMID2       RSCFD0RMID2
#define RENESAS_RSCFD0RMID3       RSCFD0RMID3
#define RENESAS_RSCFD0RMID4       RSCFD0RMID4
#define RENESAS_RSCFD0RMID5       RSCFD0RMID5
#define RENESAS_RSCFD0RMID6       RSCFD0RMID6
#define RENESAS_RSCFD0RMID7       RSCFD0RMID7
#define RENESAS_RSCFD0RMID8       RSCFD0RMID8
#define RENESAS_RSCFD0RMID9       RSCFD0RMID9
#define RENESAS_RSCFD0RMID10      RSCFD0RMID10
#define RENESAS_RSCFD0RMID11      RSCFD0RMID11
#define RENESAS_RSCFD0RMID12      RSCFD0RMID12
#define RENESAS_RSCFD0RMID13      RSCFD0RMID13
#define RENESAS_RSCFD0RMID14      RSCFD0RMID14
#define RENESAS_RSCFD0RMID15      RSCFD0RMID15
#define RENESAS_RSCFD0RMID16      RSCFD0RMID16
#define RENESAS_RSCFD0RMID17      RSCFD0RMID17
#define RENESAS_RSCFD0RMID18      RSCFD0RMID18
#define RENESAS_RSCFD0RMID19      RSCFD0RMID19
#define RENESAS_RSCFD0RMID20      RSCFD0RMID20
#define RENESAS_RSCFD0RMID21      RSCFD0RMID21
#define RENESAS_RSCFD0RMID22      RSCFD0RMID22
#define RENESAS_RSCFD0RMID23      RSCFD0RMID23
#define RENESAS_RSCFD0RMID24      RSCFD0RMID24
#define RENESAS_RSCFD0RMID25      RSCFD0RMID25
#define RENESAS_RSCFD0RMID26      RSCFD0RMID26
#define RENESAS_RSCFD0RMID27      RSCFD0RMID27
#define RENESAS_RSCFD0RMID28      RSCFD0RMID28
#define RENESAS_RSCFD0RMID29      RSCFD0RMID29
#define RENESAS_RSCFD0RMID30      RSCFD0RMID30
#define RENESAS_RSCFD0RMID31      RSCFD0RMID31

#define RENESAS_RSCFD0RMPTR0      RSCFD0RMPTR0
#define RENESAS_RSCFD0RMPTR1      RSCFD0RMPTR1
#define RENESAS_RSCFD0RMPTR2      RSCFD0RMPTR2
#define RENESAS_RSCFD0RMPTR3      RSCFD0RMPTR3
#define RENESAS_RSCFD0RMPTR4      RSCFD0RMPTR4
#define RENESAS_RSCFD0RMPTR5      RSCFD0RMPTR5
#define RENESAS_RSCFD0RMPTR6      RSCFD0RMPTR6
#define RENESAS_RSCFD0RMPTR7      RSCFD0RMPTR7
#define RENESAS_RSCFD0RMPTR8      RSCFD0RMPTR8
#define RENESAS_RSCFD0RMPTR9      RSCFD0RMPTR9
#define RENESAS_RSCFD0RMPTR10     RSCFD0RMPTR10
#define RENESAS_RSCFD0RMPTR11     RSCFD0RMPTR11
#define RENESAS_RSCFD0RMPTR12     RSCFD0RMPTR12
#define RENESAS_RSCFD0RMPTR13     RSCFD0RMPTR13
#define RENESAS_RSCFD0RMPTR14     RSCFD0RMPTR14
#define RENESAS_RSCFD0RMPTR15     RSCFD0RMPTR15
#define RENESAS_RSCFD0RMPTR16     RSCFD0RMPTR16
#define RENESAS_RSCFD0RMPTR17     RSCFD0RMPTR17
#define RENESAS_RSCFD0RMPTR18     RSCFD0RMPTR18
#define RENESAS_RSCFD0RMPTR19     RSCFD0RMPTR19
#define RENESAS_RSCFD0RMPTR20     RSCFD0RMPTR20
#define RENESAS_RSCFD0RMPTR21     RSCFD0RMPTR21
#define RENESAS_RSCFD0RMPTR22     RSCFD0RMPTR22
#define RENESAS_RSCFD0RMPTR23     RSCFD0RMPTR23
#define RENESAS_RSCFD0RMPTR24     RSCFD0RMPTR24
#define RENESAS_RSCFD0RMPTR25     RSCFD0RMPTR25
#define RENESAS_RSCFD0RMPTR26     RSCFD0RMPTR26
#define RENESAS_RSCFD0RMPTR27     RSCFD0RMPTR27
#define RENESAS_RSCFD0RMPTR28     RSCFD0RMPTR28
#define RENESAS_RSCFD0RMPTR29     RSCFD0RMPTR29
#define RENESAS_RSCFD0RMPTR30     RSCFD0RMPTR30
#define RENESAS_RSCFD0RMPTR31     RSCFD0RMPTR31

#define RENESAS_RSCFD0RMDF00      RSCFD0RMDF00
#define RENESAS_RSCFD0RMDF01      RSCFD0RMDF01
#define RENESAS_RSCFD0RMDF02      RSCFD0RMDF02
#define RENESAS_RSCFD0RMDF03      RSCFD0RMDF03
#define RENESAS_RSCFD0RMDF04      RSCFD0RMDF04
#define RENESAS_RSCFD0RMDF05      RSCFD0RMDF05
#define RENESAS_RSCFD0RMDF06      RSCFD0RMDF06
#define RENESAS_RSCFD0RMDF07      RSCFD0RMDF07
#define RENESAS_RSCFD0RMDF08      RSCFD0RMDF08
#define RENESAS_RSCFD0RMDF09      RSCFD0RMDF09
#define RENESAS_RSCFD0RMDF010     RSCFD0RMDF010
#define RENESAS_RSCFD0RMDF011     RSCFD0RMDF011
#define RENESAS_RSCFD0RMDF012     RSCFD0RMDF012
#define RENESAS_RSCFD0RMDF013     RSCFD0RMDF013
#define RENESAS_RSCFD0RMDF014     RSCFD0RMDF014
#define RENESAS_RSCFD0RMDF015     RSCFD0RMDF015
#define RENESAS_RSCFD0RMDF016     RSCFD0RMDF016
#define RENESAS_RSCFD0RMDF017     RSCFD0RMDF017
#define RENESAS_RSCFD0RMDF018     RSCFD0RMDF018
#define RENESAS_RSCFD0RMDF019     RSCFD0RMDF019
#define RENESAS_RSCFD0RMDF020     RSCFD0RMDF020
#define RENESAS_RSCFD0RMDF021     RSCFD0RMDF021
#define RENESAS_RSCFD0RMDF022     RSCFD0RMDF022
#define RENESAS_RSCFD0RMDF023     RSCFD0RMDF023
#define RENESAS_RSCFD0RMDF024     RSCFD0RMDF024
#define RENESAS_RSCFD0RMDF025     RSCFD0RMDF025
#define RENESAS_RSCFD0RMDF026     RSCFD0RMDF026
#define RENESAS_RSCFD0RMDF027     RSCFD0RMDF027
#define RENESAS_RSCFD0RMDF028     RSCFD0RMDF028
#define RENESAS_RSCFD0RMDF029     RSCFD0RMDF029
#define RENESAS_RSCFD0RMDF030     RSCFD0RMDF030
#define RENESAS_RSCFD0RMDF031     RSCFD0RMDF031

/*RX FIFO MACROS*/
#define RENESAS_RSCFD0RFCC0       RSCFD0RFCC0
#define RENESAS_RSCFD0RFCC1       RSCFD0RFCC1
#define RENESAS_RSCFD0RFCC2       RSCFD0RFCC2
#define RENESAS_RSCFD0RFCC3       RSCFD0RFCC3
#define RENESAS_RSCFD0RFCC4       RSCFD0RFCC4
#define RENESAS_RSCFD0RFCC5       RSCFD0RFCC5
#define RENESAS_RSCFD0RFCC6       RSCFD0RFCC6
#define RENESAS_RSCFD0RFCC7       RSCFD0RFCC7

#define RENESAS_RSCFD0RFSTS0      RSCFD0RFSTS0
#define RENESAS_RSCFD0RFSTS1      RSCFD0RFSTS1
#define RENESAS_RSCFD0RFSTS2      RSCFD0RFSTS2
#define RENESAS_RSCFD0RFSTS3      RSCFD0RFSTS3
#define RENESAS_RSCFD0RFSTS4      RSCFD0RFSTS4
#define RENESAS_RSCFD0RFSTS5      RSCFD0RFSTS5
#define RENESAS_RSCFD0RFSTS6      RSCFD0RFSTS6
#define RENESAS_RSCFD0RFSTS7      RSCFD0RFSTS7

#define RENESAS_RSCFD0RFPCTR0     RSCFD0RFPCTR0
#define RENESAS_RSCFD0RFPCTR1     RSCFD0RFPCTR1
#define RENESAS_RSCFD0RFPCTR2     RSCFD0RFPCTR2
#define RENESAS_RSCFD0RFPCTR3     RSCFD0RFPCTR3
#define RENESAS_RSCFD0RFPCTR4     RSCFD0RFPCTR4
#define RENESAS_RSCFD0RFPCTR5     RSCFD0RFPCTR5
#define RENESAS_RSCFD0RFPCTR6     RSCFD0RFPCTR6
#define RENESAS_RSCFD0RFPCTR7     RSCFD0RFPCTR7

#define RENESAS_RSCFD0RFID0       RSCFD0RFID0
#define RENESAS_RSCFD0RFID1       RSCFD0RFID1
#define RENESAS_RSCFD0RFID2       RSCFD0RFID2
#define RENESAS_RSCFD0RFID3       RSCFD0RFID3
#define RENESAS_RSCFD0RFID4       RSCFD0RFID4
#define RENESAS_RSCFD0RFID5       RSCFD0RFID5
#define RENESAS_RSCFD0RFID6       RSCFD0RFID6
#define RENESAS_RSCFD0RFID7       RSCFD0RFID7

#define RENESAS_RSCFD0RFPTR0      RSCFD0RFPTR0
#define RENESAS_RSCFD0RFPTR1      RSCFD0RFPTR1
#define RENESAS_RSCFD0RFPTR2      RSCFD0RFPTR2
#define RENESAS_RSCFD0RFPTR3      RSCFD0RFPTR3
#define RENESAS_RSCFD0RFPTR4      RSCFD0RFPTR4
#define RENESAS_RSCFD0RFPTR5      RSCFD0RFPTR5
#define RENESAS_RSCFD0RFPTR6      RSCFD0RFPTR6
#define RENESAS_RSCFD0RFPTR7      RSCFD0RFPTR7

#define RENESAS_RSCFD0RFDF00      RSCFD0RFDF00
#define RENESAS_RSCFD0RFDF01      RSCFD0RFDF01
#define RENESAS_RSCFD0RFDF02      RSCFD0RFDF02
#define RENESAS_RSCFD0RFDF03      RSCFD0RFDF03
#define RENESAS_RSCFD0RFDF04      RSCFD0RFDF04
#define RENESAS_RSCFD0RFDF05      RSCFD0RFDF05
#define RENESAS_RSCFD0RFDF06      RSCFD0RFDF06
#define RENESAS_RSCFD0RFDF07      RSCFD0RFDF07

#define RENESAS_RSCFD0RFDF10      RSCFD0RFDF10
#define RENESAS_RSCFD0RFDF11      RSCFD0RFDF11
#define RENESAS_RSCFD0RFDF12      RSCFD0RFDF12
#define RENESAS_RSCFD0RFDF13      RSCFD0RFDF13
#define RENESAS_RSCFD0RFDF14      RSCFD0RFDF14
#define RENESAS_RSCFD0RFDF15      RSCFD0RFDF15
#define RENESAS_RSCFD0RFDF16      RSCFD0RFDF16
#define RENESAS_RSCFD0RFDF17      RSCFD0RFDF17

/*COM FIFO MACROS*/
#define RENESAS_RSCFD0CFCC0       RSCFD0CFCC0
#define RENESAS_RSCFD0CFCC1       RSCFD0CFCC1
#define RENESAS_RSCFD0CFCC2       RSCFD0CFCC2
#define RENESAS_RSCFD0CFCC3       RSCFD0CFCC3
#define RENESAS_RSCFD0CFCC4       RSCFD0CFCC4
#define RENESAS_RSCFD0CFCC5       RSCFD0CFCC5

#define RENESAS_RSCFD0CFID0       RSCFD0CFID0
#define RENESAS_RSCFD0CFID1       RSCFD0CFID1
#define RENESAS_RSCFD0CFID2       RSCFD0CFID2
#define RENESAS_RSCFD0CFID3       RSCFD0CFID3
#define RENESAS_RSCFD0CFID4       RSCFD0CFID4
#define RENESAS_RSCFD0CFID5       RSCFD0CFID5

#define RENESAS_RSCFD0CFPTR0      RSCFD0CFPTR0
#define RENESAS_RSCFD0CFPTR1      RSCFD0CFPTR1
#define RENESAS_RSCFD0CFPTR2      RSCFD0CFPTR2
#define RENESAS_RSCFD0CFPTR3      RSCFD0CFPTR3
#define RENESAS_RSCFD0CFPTR4      RSCFD0CFPTR4
#define RENESAS_RSCFD0CFPTR5      RSCFD0CFPTR5

#define RENESAS_RSCFD0CFSTS0      RSCFD0CFSTS0
#define RENESAS_RSCFD0CFSTS1      RSCFD0CFSTS1
#define RENESAS_RSCFD0CFSTS2      RSCFD0CFSTS2
#define RENESAS_RSCFD0CFSTS3      RSCFD0CFSTS3
#define RENESAS_RSCFD0CFSTS4      RSCFD0CFSTS4
#define RENESAS_RSCFD0CFSTS5      RSCFD0CFSTS5

#define RENESAS_RSCFD0CFDF00      RSCFD0CFDF00
#define RENESAS_RSCFD0CFDF01      RSCFD0CFDF01
#define RENESAS_RSCFD0CFDF02      RSCFD0CFDF02
#define RENESAS_RSCFD0CFDF03      RSCFD0CFDF03
#define RENESAS_RSCFD0CFDF04      RSCFD0CFDF04
#define RENESAS_RSCFD0CFDF05      RSCFD0CFDF05

#define RENESAS_RSCFD0CFDF10      RSCFD0CFDF10
#define RENESAS_RSCFD0CFDF11      RSCFD0CFDF11
#define RENESAS_RSCFD0CFDF12      RSCFD0CFDF12
#define RENESAS_RSCFD0CFDF13      RSCFD0CFDF13
#define RENESAS_RSCFD0CFDF14      RSCFD0CFDF14
#define RENESAS_RSCFD0CFDF15      RSCFD0CFDF15

#define RENESAS_RSCFD0CFPCTR0     RSCFD0CFPCTR0
#define RENESAS_RSCFD0CFPCTR1     RSCFD0CFPCTR1
#define RENESAS_RSCFD0CFPCTR2     RSCFD0CFPCTR2
#define RENESAS_RSCFD0CFPCTR3     RSCFD0CFPCTR3
#define RENESAS_RSCFD0CFPCTR4     RSCFD0CFPCTR4
#define RENESAS_RSCFD0CFPCTR5     RSCFD0CFPCTR5

/*TX BUFFERS MACROS*/
#define RENESAS_RSCFD0TMID0       RSCFD0TMID0
#define RENESAS_RSCFD0TMID1       RSCFD0TMID1
#define RENESAS_RSCFD0TMID2       RSCFD0TMID2
#define RENESAS_RSCFD0TMID3       RSCFD0TMID3
#define RENESAS_RSCFD0TMID4       RSCFD0TMID4
#define RENESAS_RSCFD0TMID5       RSCFD0TMID5
#define RENESAS_RSCFD0TMID6       RSCFD0TMID6
#define RENESAS_RSCFD0TMID7       RSCFD0TMID7
#define RENESAS_RSCFD0TMID8       RSCFD0TMID8
#define RENESAS_RSCFD0TMID9       RSCFD0TMID9
#define RENESAS_RSCFD0TMID10      RSCFD0TMID10
#define RENESAS_RSCFD0TMID11      RSCFD0TMID11
#define RENESAS_RSCFD0TMID12      RSCFD0TMID12
#define RENESAS_RSCFD0TMID13      RSCFD0TMID13
#define RENESAS_RSCFD0TMID14      RSCFD0TMID14
#define RENESAS_RSCFD0TMID15      RSCFD0TMID15
#define RENESAS_RSCFD0TMID16      RSCFD0TMID16
#define RENESAS_RSCFD0TMID17      RSCFD0TMID17
#define RENESAS_RSCFD0TMID18      RSCFD0TMID18
#define RENESAS_RSCFD0TMID19      RSCFD0TMID19
#define RENESAS_RSCFD0TMID20      RSCFD0TMID20
#define RENESAS_RSCFD0TMID21      RSCFD0TMID21
#define RENESAS_RSCFD0TMID22      RSCFD0TMID22
#define RENESAS_RSCFD0TMID23      RSCFD0TMID23
#define RENESAS_RSCFD0TMID24      RSCFD0TMID24
#define RENESAS_RSCFD0TMID25      RSCFD0TMID25
#define RENESAS_RSCFD0TMID26      RSCFD0TMID26
#define RENESAS_RSCFD0TMID27      RSCFD0TMID27
#define RENESAS_RSCFD0TMID28      RSCFD0TMID28
#define RENESAS_RSCFD0TMID29      RSCFD0TMID29
#define RENESAS_RSCFD0TMID30      RSCFD0TMID30
#define RENESAS_RSCFD0TMID31      RSCFD0TMID31

#define RENESAS_RSCFD0TMPTR0      RSCFD0TMPTR0
#define RENESAS_RSCFD0TMPTR1      RSCFD0TMPTR1
#define RENESAS_RSCFD0TMPTR2      RSCFD0TMPTR2
#define RENESAS_RSCFD0TMPTR3      RSCFD0TMPTR3
#define RENESAS_RSCFD0TMPTR4      RSCFD0TMPTR4
#define RENESAS_RSCFD0TMPTR5      RSCFD0TMPTR5
#define RENESAS_RSCFD0TMPTR6      RSCFD0TMPTR6
#define RENESAS_RSCFD0TMPTR7      RSCFD0TMPTR7
#define RENESAS_RSCFD0TMPTR8      RSCFD0TMPTR8
#define RENESAS_RSCFD0TMPTR9      RSCFD0TMPTR9
#define RENESAS_RSCFD0TMPTR10     RSCFD0TMPTR10
#define RENESAS_RSCFD0TMPTR11     RSCFD0TMPTR11
#define RENESAS_RSCFD0TMPTR12     RSCFD0TMPTR12
#define RENESAS_RSCFD0TMPTR13     RSCFD0TMPTR13
#define RENESAS_RSCFD0TMPTR14     RSCFD0TMPTR14
#define RENESAS_RSCFD0TMPTR15     RSCFD0TMPTR15
#define RENESAS_RSCFD0TMPTR16     RSCFD0TMPTR16
#define RENESAS_RSCFD0TMPTR17     RSCFD0TMPTR17
#define RENESAS_RSCFD0TMPTR18     RSCFD0TMPTR18
#define RENESAS_RSCFD0TMPTR19     RSCFD0TMPTR19
#define RENESAS_RSCFD0TMPTR20     RSCFD0TMPTR20
#define RENESAS_RSCFD0TMPTR21     RSCFD0TMPTR21
#define RENESAS_RSCFD0TMPTR22     RSCFD0TMPTR22
#define RENESAS_RSCFD0TMPTR23     RSCFD0TMPTR23
#define RENESAS_RSCFD0TMPTR24     RSCFD0TMPTR24
#define RENESAS_RSCFD0TMPTR25     RSCFD0TMPTR25
#define RENESAS_RSCFD0TMPTR26     RSCFD0TMPTR26
#define RENESAS_RSCFD0TMPTR27     RSCFD0TMPTR27
#define RENESAS_RSCFD0TMPTR28     RSCFD0TMPTR28
#define RENESAS_RSCFD0TMPTR29     RSCFD0TMPTR29
#define RENESAS_RSCFD0TMPTR30     RSCFD0TMPTR30
#define RENESAS_RSCFD0TMPTR31     RSCFD0TMPTR31

#define RENESAS_RSCFD0TMDF00      RSCFD0TMDF00
#define RENESAS_RSCFD0TMDF01      RSCFD0TMDF01
#define RENESAS_RSCFD0TMDF02      RSCFD0TMDF02
#define RENESAS_RSCFD0TMDF03      RSCFD0TMDF03
#define RENESAS_RSCFD0TMDF04      RSCFD0TMDF04
#define RENESAS_RSCFD0TMDF05      RSCFD0TMDF05
#define RENESAS_RSCFD0TMDF06      RSCFD0TMDF06
#define RENESAS_RSCFD0TMDF07      RSCFD0TMDF07
#define RENESAS_RSCFD0TMDF08      RSCFD0TMDF08
#define RENESAS_RSCFD0TMDF09      RSCFD0TMDF09
#define RENESAS_RSCFD0TMDF010     RSCFD0TMDF010
#define RENESAS_RSCFD0TMDF011     RSCFD0TMDF011
#define RENESAS_RSCFD0TMDF012     RSCFD0TMDF012
#define RENESAS_RSCFD0TMDF013     RSCFD0TMDF013
#define RENESAS_RSCFD0TMDF014     RSCFD0TMDF014
#define RENESAS_RSCFD0TMDF015     RSCFD0TMDF015
#define RENESAS_RSCFD0TMDF016     RSCFD0TMDF016
#define RENESAS_RSCFD0TMDF017     RSCFD0TMDF017
#define RENESAS_RSCFD0TMDF018     RSCFD0TMDF018
#define RENESAS_RSCFD0TMDF019     RSCFD0TMDF019
#define RENESAS_RSCFD0TMDF020     RSCFD0TMDF020
#define RENESAS_RSCFD0TMDF021     RSCFD0TMDF021
#define RENESAS_RSCFD0TMDF022     RSCFD0TMDF022
#define RENESAS_RSCFD0TMDF023     RSCFD0TMDF023
#define RENESAS_RSCFD0TMDF024     RSCFD0TMDF024
#define RENESAS_RSCFD0TMDF025     RSCFD0TMDF025
#define RENESAS_RSCFD0TMDF026     RSCFD0TMDF026
#define RENESAS_RSCFD0TMDF027     RSCFD0TMDF027
#define RENESAS_RSCFD0TMDF028     RSCFD0TMDF028
#define RENESAS_RSCFD0TMDF029     RSCFD0TMDF029
#define RENESAS_RSCFD0TMDF030     RSCFD0TMDF030
#define RENESAS_RSCFD0TMDF031     RSCFD0TMDF031

#define RENESAS_RSCFD0TMC0        RSCFD0TMC0
#define RENESAS_RSCFD0TMC1        RSCFD0TMC1
#define RENESAS_RSCFD0TMC2        RSCFD0TMC2
#define RENESAS_RSCFD0TMC3        RSCFD0TMC3
#define RENESAS_RSCFD0TMC4        RSCFD0TMC4
#define RENESAS_RSCFD0TMC5        RSCFD0TMC5
#define RENESAS_RSCFD0TMC6        RSCFD0TMC6
#define RENESAS_RSCFD0TMC7        RSCFD0TMC7
#define RENESAS_RSCFD0TMC8        RSCFD0TMC8
#define RENESAS_RSCFD0TMC9        RSCFD0TMC9
#define RENESAS_RSCFD0TMC10       RSCFD0TMC10
#define RENESAS_RSCFD0TMC11       RSCFD0TMC11
#define RENESAS_RSCFD0TMC12       RSCFD0TMC12
#define RENESAS_RSCFD0TMC13       RSCFD0TMC13
#define RENESAS_RSCFD0TMC14       RSCFD0TMC14
#define RENESAS_RSCFD0TMC15       RSCFD0TMC15
#define RENESAS_RSCFD0TMC16       RSCFD0TMC16
#define RENESAS_RSCFD0TMC17       RSCFD0TMC17
#define RENESAS_RSCFD0TMC18       RSCFD0TMC18
#define RENESAS_RSCFD0TMC19       RSCFD0TMC19
#define RENESAS_RSCFD0TMC20       RSCFD0TMC20
#define RENESAS_RSCFD0TMC21       RSCFD0TMC21
#define RENESAS_RSCFD0TMC22       RSCFD0TMC22
#define RENESAS_RSCFD0TMC23       RSCFD0TMC23
#define RENESAS_RSCFD0TMC24       RSCFD0TMC24
#define RENESAS_RSCFD0TMC25       RSCFD0TMC25
#define RENESAS_RSCFD0TMC26       RSCFD0TMC26
#define RENESAS_RSCFD0TMC27       RSCFD0TMC27
#define RENESAS_RSCFD0TMC28       RSCFD0TMC28
#define RENESAS_RSCFD0TMC29       RSCFD0TMC29
#define RENESAS_RSCFD0TMC30       RSCFD0TMC30
#define RENESAS_RSCFD0TMC31       RSCFD0TMC31

#define RENESAS_RSCFD0TMSTS0      RSCFD0TMSTS0
#define RENESAS_RSCFD0TMSTS1      RSCFD0TMSTS1
#define RENESAS_RSCFD0TMSTS2      RSCFD0TMSTS2
#define RENESAS_RSCFD0TMSTS3      RSCFD0TMSTS3
#define RENESAS_RSCFD0TMSTS4      RSCFD0TMSTS4
#define RENESAS_RSCFD0TMSTS5      RSCFD0TMSTS5
#define RENESAS_RSCFD0TMSTS6      RSCFD0TMSTS6
#define RENESAS_RSCFD0TMSTS7      RSCFD0TMSTS7
#define RENESAS_RSCFD0TMSTS8      RSCFD0TMSTS8
#define RENESAS_RSCFD0TMSTS9      RSCFD0TMSTS9
#define RENESAS_RSCFD0TMSTS10     RSCFD0TMSTS10
#define RENESAS_RSCFD0TMSTS11     RSCFD0TMSTS11
#define RENESAS_RSCFD0TMSTS12     RSCFD0TMSTS12
#define RENESAS_RSCFD0TMSTS13     RSCFD0TMSTS13
#define RENESAS_RSCFD0TMSTS14     RSCFD0TMSTS14
#define RENESAS_RSCFD0TMSTS15     RSCFD0TMSTS15
#define RENESAS_RSCFD0TMSTS16     RSCFD0TMSTS16
#define RENESAS_RSCFD0TMSTS17     RSCFD0TMSTS17
#define RENESAS_RSCFD0TMSTS18     RSCFD0TMSTS18
#define RENESAS_RSCFD0TMSTS19     RSCFD0TMSTS19
#define RENESAS_RSCFD0TMSTS20     RSCFD0TMSTS20
#define RENESAS_RSCFD0TMSTS21     RSCFD0TMSTS21
#define RENESAS_RSCFD0TMSTS22     RSCFD0TMSTS22
#define RENESAS_RSCFD0TMSTS23     RSCFD0TMSTS23
#define RENESAS_RSCFD0TMSTS24     RSCFD0TMSTS24
#define RENESAS_RSCFD0TMSTS25     RSCFD0TMSTS25
#define RENESAS_RSCFD0TMSTS26     RSCFD0TMSTS26
#define RENESAS_RSCFD0TMSTS27     RSCFD0TMSTS27
#define RENESAS_RSCFD0TMSTS28     RSCFD0TMSTS28
#define RENESAS_RSCFD0TMSTS29     RSCFD0TMSTS29
#define RENESAS_RSCFD0TMSTS30     RSCFD0TMSTS30
#define RENESAS_RSCFD0TMSTS31     RSCFD0TMSTS31

/*ACCEPTANCE FILTER LIST MACROS*/
#define RENESAS_RSCFD0GAFLID0     RSCFD0GAFLID0
#define RENESAS_RSCFD0GAFLID1     RSCFD0GAFLID1
#define RENESAS_RSCFD0GAFLID2     RSCFD0GAFLID2
#define RENESAS_RSCFD0GAFLID3     RSCFD0GAFLID3
#define RENESAS_RSCFD0GAFLID4     RSCFD0GAFLID4
#define RENESAS_RSCFD0GAFLID5     RSCFD0GAFLID5
#define RENESAS_RSCFD0GAFLID6     RSCFD0GAFLID6
#define RENESAS_RSCFD0GAFLID7     RSCFD0GAFLID7
#define RENESAS_RSCFD0GAFLID8     RSCFD0GAFLID8
#define RENESAS_RSCFD0GAFLID9     RSCFD0GAFLID9
#define RENESAS_RSCFD0GAFLID10    RSCFD0GAFLID10
#define RENESAS_RSCFD0GAFLID11    RSCFD0GAFLID11
#define RENESAS_RSCFD0GAFLID12    RSCFD0GAFLID12
#define RENESAS_RSCFD0GAFLID13    RSCFD0GAFLID13
#define RENESAS_RSCFD0GAFLID14    RSCFD0GAFLID14
#define RENESAS_RSCFD0GAFLID15    RSCFD0GAFLID15

#define RENESAS_RSCFD0GAFLM0      RSCFD0GAFLM0
#define RENESAS_RSCFD0GAFLM1      RSCFD0GAFLM1
#define RENESAS_RSCFD0GAFLM2      RSCFD0GAFLM2
#define RENESAS_RSCFD0GAFLM3      RSCFD0GAFLM3
#define RENESAS_RSCFD0GAFLM4      RSCFD0GAFLM4
#define RENESAS_RSCFD0GAFLM5      RSCFD0GAFLM5
#define RENESAS_RSCFD0GAFLM6      RSCFD0GAFLM6
#define RENESAS_RSCFD0GAFLM7      RSCFD0GAFLM7
#define RENESAS_RSCFD0GAFLM8      RSCFD0GAFLM8
#define RENESAS_RSCFD0GAFLM9      RSCFD0GAFLM9
#define RENESAS_RSCFD0GAFLM10     RSCFD0GAFLM10
#define RENESAS_RSCFD0GAFLM11     RSCFD0GAFLM11
#define RENESAS_RSCFD0GAFLM12     RSCFD0GAFLM12
#define RENESAS_RSCFD0GAFLM13     RSCFD0GAFLM13
#define RENESAS_RSCFD0GAFLM14     RSCFD0GAFLM14
#define RENESAS_RSCFD0GAFLM15     RSCFD0GAFLM15

#define RENESAS_RSCFD0GAFLP00     RSCFD0GAFLP00
#define RENESAS_RSCFD0GAFLP01     RSCFD0GAFLP01
#define RENESAS_RSCFD0GAFLP02     RSCFD0GAFLP02
#define RENESAS_RSCFD0GAFLP03     RSCFD0GAFLP03
#define RENESAS_RSCFD0GAFLP04     RSCFD0GAFLP04
#define RENESAS_RSCFD0GAFLP05     RSCFD0GAFLP05
#define RENESAS_RSCFD0GAFLP06     RSCFD0GAFLP06
#define RENESAS_RSCFD0GAFLP07     RSCFD0GAFLP07
#define RENESAS_RSCFD0GAFLP08     RSCFD0GAFLP08
#define RENESAS_RSCFD0GAFLP09     RSCFD0GAFLP09
#define RENESAS_RSCFD0GAFLP010    RSCFD0GAFLP010
#define RENESAS_RSCFD0GAFLP011    RSCFD0GAFLP011
#define RENESAS_RSCFD0GAFLP012    RSCFD0GAFLP012
#define RENESAS_RSCFD0GAFLP013    RSCFD0GAFLP013
#define RENESAS_RSCFD0GAFLP014    RSCFD0GAFLP014
#define RENESAS_RSCFD0GAFLP015    RSCFD0GAFLP015

#define RENESAS_RSCFD0GAFLP10     RSCFD0GAFLP10
#define RENESAS_RSCFD0GAFLP11     RSCFD0GAFLP11
#define RENESAS_RSCFD0GAFLP12     RSCFD0GAFLP12
#define RENESAS_RSCFD0GAFLP13     RSCFD0GAFLP13
#define RENESAS_RSCFD0GAFLP14     RSCFD0GAFLP14
#define RENESAS_RSCFD0GAFLP15     RSCFD0GAFLP15
#define RENESAS_RSCFD0GAFLP16     RSCFD0GAFLP16
#define RENESAS_RSCFD0GAFLP17     RSCFD0GAFLP17
#define RENESAS_RSCFD0GAFLP18     RSCFD0GAFLP18
#define RENESAS_RSCFD0GAFLP19     RSCFD0GAFLP19
#define RENESAS_RSCFD0GAFLP110    RSCFD0GAFLP110
#define RENESAS_RSCFD0GAFLP111    RSCFD0GAFLP111
#define RENESAS_RSCFD0GAFLP112    RSCFD0GAFLP112
#define RENESAS_RSCFD0GAFLP113    RSCFD0GAFLP113
#define RENESAS_RSCFD0GAFLP114    RSCFD0GAFLP114
#define RENESAS_RSCFD0GAFLP115    RSCFD0GAFLP115

/* CAN QUEUE MACROS*/
#define RENESAS_RSCFD0TXQCC0      RSCFD0TXQCC0
#define RENESAS_RSCFD0TXQCC1      RSCFD0TXQCC1
#define RENESAS_RSCFD0TXQCC2      RSCFD0TXQCC2
#define RENESAS_RSCFD0TXQCC3      RSCFD0TXQCC3
#define RENESAS_RSCFD0TXQCC4      RSCFD0TXQCC4
#define RENESAS_RSCFD0TXQCC5      RSCFD0TXQCC5
  
#define RENESAS_RSCFD0TXQSTS0     RSCFD0TXQSTS0
#define RENESAS_RSCFD0TXQSTS1     RSCFD0TXQSTS1
#define RENESAS_RSCFD0TXQSTS2     RSCFD0TXQSTS2
#define RENESAS_RSCFD0TXQSTS3     RSCFD0TXQSTS3
#define RENESAS_RSCFD0TXQSTS4     RSCFD0TXQSTS4
#define RENESAS_RSCFD0TXQSTS5     RSCFD0TXQSTS5
  
#define RENESAS_RSCFD0TXQPCTR0    RSCFD0TXQPCTR0
#define RENESAS_RSCFD0TXQPCTR1    RSCFD0TXQPCTR1
#define RENESAS_RSCFD0TXQPCTR2    RSCFD0TXQPCTR2
#define RENESAS_RSCFD0TXQPCTR3    RSCFD0TXQPCTR3
#define RENESAS_RSCFD0TXQPCTR4    RSCFD0TXQPCTR4
#define RENESAS_RSCFD0TXQPCTR5    RSCFD0TXQPCTR5

/* CAN Shared Peripheral Interrupt (SPI) Number */
#define RENESAS_RSCFD0GISPI       30
#define RENESAS_RSCFD0CISPI       29
#define RENESAS_RSCFD0C0WUPSPI    1
#define RENESAS_RSCFD0C1WUPSPI    2
/* Maximum no:of RAM pages in the device */
#define RENESAS_CANFD_MAX_RAMPAGES_RCar_M3N   56

/* Interrupt Distributor definitions */
#define RENESAS_INTC_RT_ISENABLER INTC_RT_ISENABLER
#define RENESAS_INTC_RT_ICENABLER INTC_RT_ICENABLER
#define RENESAS_INTC_RT_ISPENDR   INTC_RT_ISPENDR
#define RENESAS_INTC_RT_ICPENDR   INTC_RT_ICPENDR
#define RENESAS_INTC_RT_ICFGR     INTC_RT_ICFGR
#define RENESAS_INTC_RT_ITARGETSR INTC_RT_ITARGETSR

/* CAN Error flag register */
#define RENESAS_RSCFD0C0ERFL     RSCFD0C0ERFL
#define RENESAS_RSCFD0C1ERFL     RSCFD0C1ERFL
#define RENESAS_RSCFD0C2ERFL     RSCFD0C2ERFL

#define RENESAS_RSCFD0GTSTCFG     RSCFD0GTSTCFG
#define RENESAS_RSCFD0GLOCKK      RSCFD0GLOCKK
#define RENESAS_RSCFD0GTSTCTR     RSCFD0GTSTCTR
#define RENESAS_RSCFD0RPGACC0     RSCFD0RPGACC0

/*******************************************************************************
**                        Macros for CAN QUEUE Implementation                 **
*******************************************************************************/
#define RENESAS_RCAN0TXQCC0     RSCAN0TXQCC0
#define RENESAS_RCAN0TXQCC1     RSCAN0TXQCC1
#define RENESAS_RCAN0TXQCC2     RSCAN0TXQCC2
#define RENESAS_RCAN0TXQCC3     RSCAN0TXQCC3
#define RENESAS_RCAN0TXQCC4     RSCAN0TXQCC4
#define RENESAS_RCAN0TXQCC5     RSCAN0TXQCC5

#define RENESAS_RCAN0TXQSTS0    RSCAN0TXQSTS0
#define RENESAS_RCAN0TXQSTS1    RSCAN0TXQSTS1
#define RENESAS_RCAN0TXQSTS2    RSCAN0TXQSTS2
#define RENESAS_RCAN0TXQSTS3    RSCAN0TXQSTS3
#define RENESAS_RCAN0TXQSTS4    RSCAN0TXQSTS4
#define RENESAS_RCAN0TXQSTS5    RSCAN0TXQSTS5

#define RENESAS_RCAN0TXQPCTR0   RSCAN0TXQPCTR0
#define RENESAS_RCAN0TXQPCTR1   RSCAN0TXQPCTR1
#define RENESAS_RCAN0TXQPCTR2   RSCAN0TXQPCTR2
#define RENESAS_RCAN0TXQPCTR3   RSCAN0TXQPCTR3
#define RENESAS_RCAN0TXQPCTR4   RSCAN0TXQPCTR4
#define RENESAS_RCAN0TXQPCTR5   RSCAN0TXQPCTR5

/* EXTERNAL INTERRUPT EDGE DETECTION REGISTERS */
#define RENESAS_FCLA0CTL0_NMI       FCLA0CTL0
#define RENESAS_FCLA0CTL0_INTPL     FCLA0CTL1
#define RENESAS_FCLA0CTL1_INTPL     FCLA0CTL2
#define RENESAS_FCLA0CTL2_INTPL     FCLA0CTL3
#define RENESAS_FCLA0CTL3_INTPL     FCLA0CTL4
#define RENESAS_FCLA0CTL4_INTPL     FCLA0CTL5
#define RENESAS_FCLA0CTL5_INTPL     FCLA0CTL6
#define RENESAS_FCLA0CTL6_INTPL     FCLA0CTL7
#define RENESAS_FCLA0CTL7_INTPL     FCLA1CTL0
#define RENESAS_FCLA0CTL0_INTPH     FCLA1CTL1
#define RENESAS_FCLA0CTL1_INTPH     FCLA1CTL2
#define RENESAS_FCLA0CTL2_INTPH     FCLA1CTL3

#define RENESAS_DNFAADCTL0CTL       DNFA7CTL
#define RENESAS_DNFAADCTL0EN        DNFA7EN
#define RENESAS_DNFAADCTL1CTL       DNFA0CTL
#define RENESAS_DNFAADCTL1EN        DNFA0EN
#define RENESAS_DNFATAUD0ICTL       DNFA0CTL
#define RENESAS_DNFATAUD0IEN        DNFA0EN
#define RENESAS_DNFATAUB0ICTL       DNFA0CTL
#define RENESAS_DNFATAUB0IEN        DNFA0EN
#define RENESAS_DNFATAUB1ICTL       DNFA1CTL
#define RENESAS_DNFATAUB1IEN        DNFA1EN
#define RENESAS_DNFATAUB2ICTL       DNFA2CTL
#define RENESAS_DNFATAUB2IEN        DNFA2EN
#define RENESAS_DNFAENCA0ICTL       DNFA0CTL
#define RENESAS_DNFAENCA0IEN        DNFA0EN
/*******************************************************************************
**                        Macros for DIO Driver                               **
*******************************************************************************/
#define RENESAS_INDT0              INDT0

#define RENESAS_INDT1              INDT1

#define RENESAS_INDT2              INDT2

#define RENESAS_INDT3              INDT3

#define RENESAS_INDT4              INDT4

#define RENESAS_INDT5              INDT5

#define RENESAS_INDT6              INDT6

#define RENESAS_INDT7              INDT7

#define RENESAS_OUTDT0              OUTDT0

#define RENESAS_OUTDT1              OUTDT1

#define RENESAS_OUTDT2              OUTDT2

#define RENESAS_OUTDT3              OUTDT3

#define RENESAS_OUTDT4              OUTDT4

#define RENESAS_OUTDT5              OUTDT5

#define RENESAS_OUTDT6              OUTDT6

#define RENESAS_OUTDT7              OUTDT7

#define RENESAS_POSNEG0             POSNEG0

#define RENESAS_POSNEG1             POSNEG1

#define RENESAS_POSNEG2             POSNEG2

#define RENESAS_POSNEG3             POSNEG3

#define RENESAS_POSNEG4             POSNEG4

#define RENESAS_POSNEG5             POSNEG5

#define RENESAS_POSNEG6             POSNEG6

#define RENESAS_POSNEG7             POSNEG7

#define RENESAS_INOUTSEL0             INOUTSEL0

#define RENESAS_INOUTSEL1             INOUTSEL1

#define RENESAS_INOUTSEL2             INOUTSEL2

#define RENESAS_INOUTSEL3             INOUTSEL3

#define RENESAS_INOUTSEL4             INOUTSEL4

#define RENESAS_INOUTSEL5             INOUTSEL5

#define RENESAS_INOUTSEL6             INOUTSEL6

#define RENESAS_INOUTSEL7             INOUTSEL7

/*******************************************************************************
**                 Macros for ICCOM Driver                                    **
*******************************************************************************/
#define RENESAS_MFISARIICR0         MFISARIICR0
#define RENESAS_MFISAREICR0         MFISAREICR0
#define RENESAS_MFISARIICR1         MFISARIICR1
#define RENESAS_MFISAREICR1         MFISAREICR1
#define RENESAS_MFISARIICR2         MFISARIICR2
#define RENESAS_MFISAREICR2         MFISAREICR2
#define RENESAS_MFISARIICR3         MFISARIICR3
#define RENESAS_MFISAREICR3         MFISAREICR3
#define RENESAS_MFISARIICR4         MFISARIICR4
#define RENESAS_MFISAREICR4         MFISAREICR4
#define RENESAS_MFISARIICR5         MFISARIICR5
#define RENESAS_MFISAREICR5         MFISAREICR5
#define RENESAS_MFISARIICR6         MFISARIICR6
#define RENESAS_MFISAREICR6         MFISAREICR6
#define RENESAS_MFISARIICR7         MFISARIICR7
#define RENESAS_MFISAREICR7         MFISAREICR7
#define RENESAS_MFISARIMBR0         MFISARIMBR0
#define RENESAS_MFISARIMBR1         MFISARIMBR1
#define RENESAS_MFISARIMBR2         MFISARIMBR2
#define RENESAS_MFISARIMBR3         MFISARIMBR3
#define RENESAS_MFISARIMBR4         MFISARIMBR4
#define RENESAS_MFISARIMBR5         MFISARIMBR5
#define RENESAS_MFISARIMBR6         MFISARIMBR6
#define RENESAS_MFISARIMBR7         MFISARIMBR7
#define RENESAS_MFISAREMBR0         MFISAREMBR0
#define RENESAS_MFISAREMBR1         MFISAREMBR1
#define RENESAS_MFISAREMBR2         MFISAREMBR2
#define RENESAS_MFISAREMBR3         MFISAREMBR3
#define RENESAS_MFISAREMBR4         MFISAREMBR4
#define RENESAS_MFISAREMBR5         MFISAREMBR5
#define RENESAS_MFISAREMBR6         MFISAREMBR6
#define RENESAS_MFISAREMBR7         MFISAREMBR7

/*******************************************************************************
**                        Macros for GPT Driver                               **
*******************************************************************************/


/*******************************************************************************
**                 Macros for LIN Driver                                      **
*******************************************************************************/


/*******************************************************************************
**                 Macros for FLS Software Component                          **
*******************************************************************************/


/*******************************************************************************
**                 Macros for PORT Driver                                     **
*******************************************************************************/
#define RENESAS_IOINTSEL0        IOINTSEL0
#define RENESAS_INTDT0           INTDT0
#define RENESAS_INTCLR0          INTCLR0
#define RENESAS_INTMSK0          INTMSK0
#define RENESAS_MSKCLR0          MSKCLR0
#define RENESAS_EDGLEVEL0       EDGLEVEL0
#define RENESAS_FILONOFF0        FILONOFF0
#define RENESAS_INTMSKS0         INTMSKS0
#define RENESAS_MSKCLRS0         MSKCLRS0
#define RENESAS_OUTDTSEL0        OUTDTSEL0
#define RENESAS_OUTDTH0          OUTDTH0
#define RENESAS_OUTDTL0          OUTDTL0
#define RENESAS_BOTHEDGE0        BOTHEDGE0
#define RENESAS_IOINTSEL1        IOINTSEL1
#define RENESAS_INTDT1           INTDT1
#define RENESAS_INTCLR1          INTCLR1
#define RENESAS_INTMSK1          INTMSK1
#define RENESAS_MSKCLR1          MSKCLR1
#define RENESAS_EDGLEVEL1       EDGLEVEL1
#define RENESAS_FILONOFF1        FILONOFF1
#define RENESAS_INTMSKS1         INTMSKS1
#define RENESAS_MSKCLRS1         MSKCLRS1
#define RENESAS_OUTDTSEL1        OUTDTSEL1
#define RENESAS_OUTDTH1          OUTDTH1
#define RENESAS_OUTDTL1          OUTDTL1
#define RENESAS_BOTHEDGE1        BOTHEDGE1
#define RENESAS_IOINTSEL2        IOINTSEL2
#define RENESAS_INTDT2           INTDT2
#define RENESAS_INTCLR2          INTCLR2
#define RENESAS_INTMSK2          INTMSK2
#define RENESAS_MSKCLR2          MSKCLR2
#define RENESAS_EDGLEVEL2       EDGLEVEL2
#define RENESAS_FILONOFF2        FILONOFF2
#define RENESAS_INTMSKS2         INTMSKS2
#define RENESAS_MSKCLRS2         MSKCLRS2
#define RENESAS_OUTDTSEL2        OUTDTSEL2
#define RENESAS_OUTDTH2          OUTDTH2
#define RENESAS_OUTDTL2          OUTDTL2
#define RENESAS_BOTHEDGE2        BOTHEDGE2
#define RENESAS_IOINTSEL3        IOINTSEL3
#define RENESAS_INTDT3           INTDT3
#define RENESAS_INTCLR3          INTCLR3
#define RENESAS_INTMSK3          INTMSK3
#define RENESAS_MSKCLR3          MSKCLR3
#define RENESAS_EDGLEVEL3       EDGLEVEL3
#define RENESAS_FILONOFF3        FILONOFF3
#define RENESAS_INTMSKS3         INTMSKS3
#define RENESAS_MSKCLRS3         MSKCLRS3
#define RENESAS_OUTDTSEL3        OUTDTSEL3
#define RENESAS_OUTDTH3          OUTDTH3
#define RENESAS_OUTDTL3          OUTDTL3
#define RENESAS_BOTHEDGE3        BOTHEDGE3
#define RENESAS_IOINTSEL4        IOINTSEL4
#define RENESAS_INTDT4           INTDT4
#define RENESAS_INTCLR4          INTCLR4
#define RENESAS_INTMSK4          INTMSK4
#define RENESAS_MSKCLR4          MSKCLR4
#define RENESAS_EDGLEVEL4       EDGLEVEL4
#define RENESAS_FILONOFF4        FILONOFF4
#define RENESAS_INTMSKS4         INTMSKS4
#define RENESAS_MSKCLRS4         MSKCLRS4
#define RENESAS_OUTDTSEL4        OUTDTSEL4
#define RENESAS_OUTDTH4          OUTDTH4
#define RENESAS_OUTDTL4          OUTDTL4
#define RENESAS_BOTHEDGE4        BOTHEDGE4
#define RENESAS_IOINTSEL5        IOINTSEL5
#define RENESAS_INTDT5           INTDT5
#define RENESAS_INTCLR5          INTCLR5
#define RENESAS_INTMSK5          INTMSK5
#define RENESAS_MSKCLR5          MSKCLR5
#define RENESAS_EDGLEVEL5       EDGLEVEL5
#define RENESAS_FILONOFF5        FILONOFF5
#define RENESAS_INTMSKS5         INTMSKS5
#define RENESAS_MSKCLRS5         MSKCLRS5
#define RENESAS_OUTDTSEL5        OUTDTSEL5
#define RENESAS_OUTDTH5          OUTDTH5
#define RENESAS_OUTDTL5          OUTDTL5
#define RENESAS_BOTHEDGE5        BOTHEDGE5
#define RENESAS_IOINTSEL6        IOINTSEL6
#define RENESAS_INTDT6           INTDT6
#define RENESAS_INTCLR6          INTCLR6
#define RENESAS_INTMSK6          INTMSK6
#define RENESAS_MSKCLR6          MSKCLR6
#define RENESAS_EDGLEVEL6       EDGLEVEL6
#define RENESAS_FILONOFF6        FILONOFF6
#define RENESAS_INTMSKS6         INTMSKS6
#define RENESAS_MSKCLRS6         MSKCLRS6
#define RENESAS_OUTDTSEL6        OUTDTSEL6
#define RENESAS_OUTDTH6          OUTDTH6
#define RENESAS_OUTDTL6          OUTDTL6
#define RENESAS_BOTHEDGE6        BOTHEDGE6
#define RENESAS_IOINTSEL7        IOINTSEL7
#define RENESAS_INTDT7           INTDT7
#define RENESAS_INTCLR7          INTCLR7
#define RENESAS_INTMSK7          INTMSK7
#define RENESAS_MSKCLR7          MSKCLR7
#define RENESAS_EDGLEVEL7       EDGLEVEL7
#define RENESAS_FILONOFF7        FILONOFF7
#define RENESAS_INTMSKS7         INTMSKS7
#define RENESAS_MSKCLRS7         MSKCLRS7
#define RENESAS_OUTDTSEL7        OUTDTSEL7
#define RENESAS_OUTDTH7          OUTDTH7
#define RENESAS_OUTDTL7          OUTDTL7
#define RENESAS_BOTHEDGE7        BOTHEDGE7

/* PFC.h */
#define RENESAS_PMMR             PMMR
#define RENESAS_GPSR0            GPSR0
#define RENESAS_GPSR1            GPSR1
#define RENESAS_GPSR2            GPSR2
#define RENESAS_GPSR3            GPSR3
#define RENESAS_GPSR4            GPSR4
#define RENESAS_GPSR5            GPSR5
#define RENESAS_GPSR6            GPSR6
#define RENESAS_GPSR7            GPSR7
#define RENESAS_IPSR0            IPSR0
#define RENESAS_IPSR1            IPSR1
#define RENESAS_IPSR2            IPSR2
#define RENESAS_IPSR3            IPSR3
#define RENESAS_IPSR4            IPSR4
#define RENESAS_IPSR5            IPSR5
#define RENESAS_IPSR6            IPSR6
#define RENESAS_IPSR7            IPSR7
#define RENESAS_IPSR8            IPSR8
#define RENESAS_IPSR9            IPSR9
#define RENESAS_IPSR10           IPSR10
#define RENESAS_IPSR11           IPSR11
#define RENESAS_IPSR12           IPSR12
#define RENESAS_IPSR13           IPSR13
#define RENESAS_IPSR14           IPSR14
#define RENESAS_IPSR15           IPSR15
#define RENESAS_IPSR16           IPSR16
#define RENESAS_IPSR17           IPSR17
#define RENESAS_DRVCTRL0         DRVCTRL0
#define RENESAS_DRVCTRL1         DRVCTRL1
#define RENESAS_DRVCTRL2         DRVCTRL2
#define RENESAS_DRVCTRL3         DRVCTRL3
#define RENESAS_DRVCTRL4         DRVCTRL4
#define RENESAS_DRVCTRL5         DRVCTRL5
#define RENESAS_DRVCTRL6         DRVCTRL6
#define RENESAS_DRVCTRL7         DRVCTRL7
#define RENESAS_DRVCTRL8         DRVCTRL8
#define RENESAS_DRVCTRL9         DRVCTRL9
#define RENESAS_DRVCTRL10        DRVCTRL10
#define RENESAS_DRVCTRL11        DRVCTRL11
#define RENESAS_DRVCTRL12        DRVCTRL12
#define RENESAS_DRVCTRL13        DRVCTRL13
#define RENESAS_DRVCTRL14        DRVCTRL14
#define RENESAS_DRVCTRL15        DRVCTRL15
#define RENESAS_DRVCTRL16        DRVCTRL16
#define RENESAS_DRVCTRL17        DRVCTRL17
#define RENESAS_DRVCTRL18        DRVCTRL18
#define RENESAS_DRVCTRL19        DRVCTRL19
#define RENESAS_DRVCTRL20        DRVCTRL20
#define RENESAS_DRVCTRL21        DRVCTRL21
#define RENESAS_DRVCTRL22        DRVCTRL22
#define RENESAS_DRVCTRL23        DRVCTRL23
#define RENESAS_DRVCTRL24        DRVCTRL24
#define RENESAS_POCCTRL0         POCCTRL0
#define RENESAS_TDSELCTRL0       TDSELCTRL0
#define RENESAS_IOCTRL           IIOCTRL
#define RENESAS_TSREG            TSREG
#define RENESAS_PUEN0            PUEN0
#define RENESAS_PUEN1            PUEN1
#define RENESAS_PUEN2            PUEN2
#define RENESAS_PUEN3            PUEN3
#define RENESAS_PUEN4            PUEN4
#define RENESAS_PUEN5            PUEN5
#define RENESAS_PUEN6            PUEN6
#define RENESAS_PUD0             PUD0
#define RENESAS_PUD1             PUD1
#define RENESAS_PUD2             PUD2
#define RENESAS_PUD3             PUD3
#define RENESAS_PUD4             PUD4
#define RENESAS_PUD5             PUD5
#define RENESAS_PUD6             PUD6
#define RENESAS_MOD_SEL0         MOD_SEL0
#define RENESAS_MOD_SEL1         MOD_SEL1
#define RENESAS_MOD_SEL2         MOD_SEL2

/*******************************************************************************
**                      Function Prototypes                                   **
*******************************************************************************/

/*******************************************************************************
**                          End Of File                                       **
*******************************************************************************/

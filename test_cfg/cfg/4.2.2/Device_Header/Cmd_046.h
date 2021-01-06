/*===========================================================================*/
/* Module      = Cmd_046.h                                                   */
/* Version     = 1.00                                                        */
/*===========================================================================*/
/*                                  COPYRIGHT                                */
/*===========================================================================*/
/* Copyright (c) 2015 by Renesas Electronics Europe GmbH,                    */
/*               a company of the Renesas Electronics Corporation            */
/*===========================================================================*/
/* Purpose:      Declarations of I/O Registers                               */
/*                                                                           */
/*===========================================================================*/
/*                                                                           */
/* Warranty Disclaimer                                                       */
/*                                                                           */
/* Because the Product(s) is licensed free of charge, there is no warranty   */
/* of any kind whatsoever and expressly disclaimed and excluded by Renesas,  */
/* either expressed or implied, including but not limited to those for       */
/* non-infringement of intellectual property, merchantability and/or         */
/* fitness for the particular purpose.                                       */
/* Renesas shall not have any obligation to maintain, service or provide bug */
/* fixes for the supplied Product(s) and/or the Application.                 */
/*                                                                           */
/* Each User is solely responsible for determining the appropriateness of    */
/* using the Product(s) and assumes all risks associated with its exercise   */
/* of rights under this Agreement, including, but not limited to the risks   */
/* and costs of program errors, compliance with applicable laws, damage to   */
/* or loss of data, programs or equipment, and unavailability or             */
/* interruption of operations.                                               */
/*                                                                           */
/* Limitation of Liability                                                   */
/*                                                                           */
/* In no event shall Renesas be liable to the User for any incidental,       */
/* consequential, indirect, or punitive damage (including but not limited    */
/* to lost profits) regardless of whether such liability is based on breach  */
/* of contract, tort, strict liability, breach of warranties, failure of     */
/* essential purpose or otherwise and even if advised of the possibility of  */
/* such damages. Renesas shall not be liable for any services or products    */
/* provided by third party vendors, developers or consultants identified or  */
/* referred to the User by Renesas in connection with the Product(s) and/or  */
/* the Application.                                                          */
/*                                                                           */
/*===========================================================================*/
/* Environment:                                                              */
/*              Device:         R-Car M3N                                     */
/*              IDE:            GHS Multi for ARM  V6.xx or later            */
/*===========================================================================*/

#ifndef __M3N_H
#define __M3N_H

#include <io_macros_v2.h>



/* GIC400 Distributor Base address*/
__IOREG( GICD_BASE_ADDR                    , 0xF1110000ul, __READ_WRITE, u32_T);

/* I/O register */
__IOREG( WBCTLR                            , 0xF0100000ul, __READ_WRITE, u32_T);
__IOREG( WBIMSKR                           , 0xF0100200ul, __READ_WRITE, u32_T);
__IOREG( WBIMSKSTSR                        , 0xF0100204ul, __READ_WRITE, u32_T);
__IOREG( WBIRAWSTSR                        , 0xF0100208ul, __READ_WRITE, u32_T);
__IOREG( WBICLRR                           , 0xF010020Cul, __READ_WRITE, u32_T);
__IOREG( WBSERRADDR                        , 0xF0100210ul, __READ_WRITE, u32_T);
__IOREG( WBDERRADDR                        , 0xF0100214ul, __READ_WRITE, u32_T);
__IOREG( WBSYNCR                           , 0xF0100730ul, __READ_WRITE, u32_T);
__IOREG( WBPWRCTLR                         , 0xF0100F80ul, __READ_WRITE, u32_T);
__IOREG( CPGWPCR                           , 0xE6150904ul, __READ_WRITE, u32_T);
__IOREG( CPGWPR                            , 0xE6150900ul, __READ_WRITE, u32_T);
__IOREG( FRQCRB                            , 0xE6150004ul, __READ_WRITE, u32_T);
__IOREG( FRQCRC                            , 0xE61500E0ul, __READ_WRITE, u32_T);
__IOREG( PLLECR                            , 0xE61500D0ul, __READ_WRITE, u32_T);
__IOREG( CANFDCKCR                         , 0xE6150244ul, __READ_WRITE, u32_T);
__IOREG( MSOCKCR                           , 0xE6150014ul, __READ_WRITE, u32_T);
__IOREG( RCKCR                             , 0xE6150240ul, __READ_WRITE, u32_T);
__IOREG( DVFSCR0                           , 0xE6150058ul, __READ_WRITE, u32_T);
__IOREG( DVFSCR1                           , 0xE615005Cul, __READ_WRITE, u32_T);
__IOREG( FSAPBR_CPG                        , 0xE6150700ul, __READ_WRITE, u32_T);
__IOREG( FSAPBR_RST                        , 0xE6150700ul, __READ_WRITE, u32_T);
__IOREG( FSCLKCSR                          , 0xE6150704ul, __READ_WRITE, u32_T);
__IOREG( FSCNTCHKH1                        , 0xE6150714ul, __READ_WRITE, u32_T);
__IOREG( FSCNTCHKH5                        , 0xE6150724ul, __READ_WRITE, u32_T);
__IOREG( FSCNTCHKH6                        , 0xE6150728ul, __READ_WRITE, u32_T);
__IOREG( FSCNTCHKL1                        , 0xE6150734ul, __READ_WRITE, u32_T);
__IOREG( FSCNTCHKL5                        , 0xE6150744ul, __READ_WRITE, u32_T);
__IOREG( FSCNTCHKL6                        , 0xE6150748ul, __READ_WRITE, u32_T);
__IOREG( FSCNTMON1                         , 0xE6150754ul, __READ_WRITE, u32_T);
__IOREG( FSCNTMON5                         , 0xE6150764ul, __READ_WRITE, u32_T);
__IOREG( FSCNTMON6                         , 0xE6150768ul, __READ_WRITE, u32_T);
__IOREG( MSTPSR1                           , 0xE6150038ul, __READ_WRITE, u32_T);
__IOREG( MSTPSR2                           , 0xE6150040ul, __READ_WRITE, u32_T);
__IOREG( MSTPSR4                           , 0xE615004Cul, __READ_WRITE, u32_T);
__IOREG( MSTPSR9                           , 0xE61509A4ul, __READ_WRITE, u32_T);
__IOREG( RMSTPCR1                          , 0xE6150114ul, __READ_WRITE, u32_T);
__IOREG( RMSTPCR2                          , 0xE6150118ul, __READ_WRITE, u32_T);
__IOREG( RMSTPCR4                          , 0xE6150120ul, __READ_WRITE, u32_T);
__IOREG( RMSTPCR8                          , 0xE6150980ul, __READ_WRITE, u32_T);
__IOREG( RMSTPCR9                          , 0xE6150984ul, __READ_WRITE, u32_T);
__IOREG( SMSTPCR1                          , 0xE6150134ul, __READ_WRITE, u32_T);
__IOREG( SMSTPCR2                          , 0xE6150138ul, __READ_WRITE, u32_T);
__IOREG( SMSTPCR4                          , 0xE6150140ul, __READ_WRITE, u32_T);
__IOREG( SMSTPCR9                          , 0xE6150994ul, __READ_WRITE, u32_T);
__IOREG( SCMSTPCR1                         , 0xE6150B24ul, __READ_WRITE, u32_T);
__IOREG( SCMSTPCR2                         , 0xE6150B28ul, __READ_WRITE, u32_T);
__IOREG( SCMSTPCR4                         , 0xE6150B30ul, __READ_WRITE, u32_T);
__IOREG( SCMSTPCR8                         , 0xE6150B40ul, __READ_WRITE, u32_T);
__IOREG( SCMSTPCR9                         , 0xE6150B44ul, __READ_WRITE, u32_T);
__IOREG( SAMSTPCR1                         , 0xE6150C24ul, __READ_WRITE, u32_T);
__IOREG( SAMSTPCR2                         , 0xE6150C28ul, __READ_WRITE, u32_T);
__IOREG( SAMSTPCR4                         , 0xE6150C30ul, __READ_WRITE, u32_T);
__IOREG( SAMSTPCR8                         , 0xE6150C40ul, __READ_WRITE, u32_T);
__IOREG( SAMSTPCR9                         , 0xE6150C44ul, __READ_WRITE, u32_T);
__IOREG( SCPTCSR_MSTPRST                   , 0xE6150B00ul, __READ_WRITE, u32_T);
__IOREG( SCERMIDR_MSTPRST                  , 0xE6150B04ul, __READ_WRITE, u32_T);
__IOREG( SCERADR_MSTPRST                   , 0xE6150B08ul, __READ_WRITE, u32_T);
__IOREG( SAPTCSR_MSTPRST                   , 0xE6150C00ul, __READ_WRITE, u32_T);
__IOREG( SAERMIDR_MSTPRST                  , 0xE6150C04ul, __READ_WRITE, u32_T);
__IOREG( SAERADR_MSTPRST                   , 0xE6150C08ul, __READ_WRITE, u32_T);
__IOREG( SYSCSR                            , 0xE6180000ul, __READ_WRITE, u32_T);
__IOREG( SYSCISR                           , 0xE6180004ul, __READ_WRITE, u32_T);
__IOREG( SYSCISCR                          , 0xE6180008ul, __READ_WRITE, u32_T);
__IOREG( SYSCIER                           , 0xE618000Cul, __READ_WRITE, u32_T);
__IOREG( SYSCIMR                           , 0xE6180010ul, __READ_WRITE, u32_T);
__IOREG( WUPMSKCR7                         , 0xE618001Cul, __READ_WRITE, u32_T);
__IOREG( SYSCEERSR3                        , 0xE6180040ul, __READ_WRITE, u32_T);
__IOREG( SYSCEERSCR3                       , 0xE6180044ul, __READ_WRITE, u32_T);
__IOREG( SYSCEERSER3                       , 0xE6180048ul, __READ_WRITE, u32_T);
__IOREG( PWRSR7                            , 0xE6180240ul, __READ_WRITE, u32_T);
__IOREG( PWROFFCR7                         , 0xE6180244ul, __READ_WRITE, u32_T);
__IOREG( PWROFFSR7                         , 0xE6180248ul, __READ_WRITE, u32_T);
__IOREG( PWRONCR7                          , 0xE618024Cul, __READ_WRITE, u32_T);
__IOREG( PWRONSR7                          , 0xE6180250ul, __READ_WRITE, u32_T);
__IOREG( PWRER7                            , 0xE6180254ul, __READ_WRITE, u32_T);
__IOREG( PWRPSEU7                          , 0xE6180278ul, __READ_WRITE, u32_T);
__IOREG( PWRISOER7                         , 0xE618027Cul, __READ_WRITE, u32_T);
__IOREG( APBSFTYCHKR                       , 0xE616005Cul, __READ_WRITE, u32_T);
__IOREG( SRESCR                            , 0xE6160110ul, __READ_WRITE, u32_T);
__IOREG( RRSTFR                            , 0xE6160114ul, __READ_WRITE, u32_T);
__IOREG( SCPTCSR_RST                       , 0xE6160180ul, __READ_WRITE, u32_T);
__IOREG( SCERMIDR_RST                      , 0xE6160184ul, __READ_WRITE, u32_T);
__IOREG( SCERADR_RST                       , 0xE6160188ul, __READ_WRITE, u32_T);
__IOREG( SAPTCSR_RST                       , 0xE6160190ul, __READ_WRITE, u32_T);
__IOREG( SAERMIDR_RST                      , 0xE6160194ul, __READ_WRITE, u32_T);
__IOREG( SAERADR_RST                       , 0xE6160198ul, __READ_WRITE, u32_T);
__IOREG( SCU_ACCESS_CTRL                   , 0xF0000050ul, __READ_WRITE, u32_T);
__IOREG( SCU_CPU_POWER_STATUS              , 0xF0000008ul, __READ_WRITE, u32_T);
__IOREG( RMSTPCR_BASE                      , 0xE6150110ul, __READ_WRITE, u32_T);
__IOREG( MSTPSR_BASE                       , 0xE6150030ul, __READ_WRITE, u32_T);
__IOREG( SMSTPCR_BASE                      , 0xE6150130ul, __READ_WRITE, u32_T);
__IOREG( SCMSTPCR_BASE                     , 0xE6150B20ul, __READ_WRITE, u32_T);
__IOREG( SAMSTPCR_BASE                     , 0xE6150C20ul, __READ_WRITE, u32_T);

/* TMU registers */
//TMU0
__IOREG( TMU_TSTR0                         , 0xE61E0004uc, __READ_WRITE, u8_T);
__IOREG( TMU_TCOR0                         , 0xE61E0008ul, __READ_WRITE, u32_T);
__IOREG( TMU_TCNT0                         , 0xE61E000Cul, __READ_WRITE, u32_T);
__IOREG( TMU_TCR0                          , 0xE61E0010us, __READ_WRITE, u16_T);
__IOREG( TMU_TCOR1                         , 0xE61E0014ul, __READ_WRITE, u32_T);
__IOREG( TMU_TCNT1                         , 0xE61E0018ul, __READ_WRITE, u32_T);
__IOREG( TMU_TCR1                          , 0xE61E001Cus, __READ_WRITE, u16_T);
__IOREG( TMU_TCOR2                         , 0xE61E0020ul, __READ_WRITE, u32_T);
__IOREG( TMU_TCNT2                         , 0xE61E0024ul, __READ_WRITE, u32_T);
__IOREG( TMU_TCR2                          , 0xE61E0028us, __READ_WRITE, u16_T);
//TMU1
__IOREG( TMU_TSTR1                         , 0xE6FC0004uc, __READ_WRITE, u8_T);
__IOREG( TMU_TCOR3                         , 0xE6FC0008ul, __READ_WRITE, u32_T);
__IOREG( TMU_TCNT3                         , 0xE6FC000Cul, __READ_WRITE, u32_T);
__IOREG( TMU_TCR3                          , 0xE6FC0010us, __READ_WRITE, u16_T);
__IOREG( TMU_TCOR4                         , 0xE6FC0014ul, __READ_WRITE, u32_T);
__IOREG( TMU_TCNT4                         , 0xE6FC0018ul, __READ_WRITE, u32_T);
__IOREG( TMU_TCR4                          , 0xE6FC001Cus, __READ_WRITE, u16_T);
__IOREG( TMU_TCOR5                         , 0xE6FC0020ul, __READ_WRITE, u32_T);
__IOREG( TMU_TCNT5                         , 0xE6FC0024ul, __READ_WRITE, u32_T);
__IOREG( TMU_TCR5                          , 0xE6FC0028us, __READ_WRITE, u16_T);
__IOREG( TMU_TCPR5                         , 0xE6FC002Cul, __READ, u32_T);
//TMU2
__IOREG( TMU_TSTR2                         , 0xE6FD0004uc, __READ_WRITE, u8_T);
__IOREG( TMU_TCOR6                         , 0xE6FD0008ul, __READ_WRITE, u32_T);
__IOREG( TMU_TCNT6                         , 0xE6FD000Cul, __READ_WRITE, u32_T);
__IOREG( TMU_TCR6                          , 0xE6FD0010us, __READ_WRITE, u16_T);
__IOREG( TMU_TCOR7                         , 0xE6FD0014ul, __READ_WRITE, u32_T);
__IOREG( TMU_TCNT7                         , 0xE6FD0018ul, __READ_WRITE, u32_T);
__IOREG( TMU_TCR7                          , 0xE6FD001Cus, __READ_WRITE, u16_T);
__IOREG( TMU_TCOR8                         , 0xE6FD0020ul, __READ_WRITE, u32_T);
__IOREG( TMU_TCNT8                         , 0xE6FD0024ul, __READ_WRITE, u32_T);
__IOREG( TMU_TCR8                          , 0xE6FD0028us, __READ_WRITE, u16_T);
__IOREG( TMU_TCPR8                         , 0xE6FD002Cul, __READ, u32_T);
//TMU3
__IOREG( TMU_TSTR3                         , 0xE6FE0004uc, __READ_WRITE, u8_T);
__IOREG( TMU_TCOR9                         , 0xE6FE0008ul, __READ_WRITE, u32_T);
__IOREG( TMU_TCNT9                         , 0xE6FE000Cul, __READ_WRITE, u32_T);
__IOREG( TMU_TCR9                          , 0xE6FE0010us, __READ_WRITE, u16_T);
__IOREG( TMU_TCOR10                        , 0xE6FE0014ul, __READ_WRITE, u32_T);
__IOREG( TMU_TCNT10                        , 0xE6FE0018ul, __READ_WRITE, u32_T);
__IOREG( TMU_TCR10                         , 0xE6FE001Cus, __READ_WRITE, u16_T);
__IOREG( TMU_TCOR11                        , 0xE6FE0020ul, __READ_WRITE, u32_T);
__IOREG( TMU_TCNT11                        , 0xE6FE0024ul, __READ_WRITE, u32_T);
__IOREG( TMU_TCR11                         , 0xE6FE0028us, __READ_WRITE, u16_T);
__IOREG( TMU_TCPR11                        , 0xE6FE002Cul, __READ, u32_T);
//TMU4
__IOREG( TMU_TSTR4                         , 0xFFC00004uc, __READ_WRITE, u8_T);
__IOREG( TMU_TCOR12                        , 0xFFC00008ul, __READ_WRITE, u32_T);
__IOREG( TMU_TCNT12                        , 0xFFC0000Cul, __READ_WRITE, u32_T);
__IOREG( TMU_TCR12                         , 0xFFC00010us, __READ_WRITE, u16_T);
__IOREG( TMU_TCOR13                        , 0xFFC00014ul, __READ_WRITE, u32_T);
__IOREG( TMU_TCNT13                        , 0xFFC00018ul, __READ_WRITE, u32_T);
__IOREG( TMU_TCR13                         , 0xFFC0001Cus, __READ_WRITE, u16_T);
__IOREG( TMU_TCOR14                        , 0xFFC00020ul, __READ_WRITE, u32_T);
__IOREG( TMU_TCNT14                        , 0xFFC00024ul, __READ_WRITE, u32_T);
__IOREG( TMU_TCR14                         , 0xFFC00028us, __READ_WRITE, u16_T);

/*******************************************************************************
 **************************************PORT*************************************
 *******************************************************************************
 */
__IOREG( DNFATAUD0IEN                      , 0xffc30004UL, __READ_WRITE, u16_T);
/* GPIO.h */
__IOREG( IOINTSEL0        );  
__IOREG( INOUTSEL0        , 0xE6050004UL, __READ_WRITE, u32_T); 
__IOREG( OUTDT0           , 0xE6050008UL, __READ_WRITE, u32_T); 
__IOREG( INDT0            , 0xE605000CUL, __READ, u32_T);        
__IOREG( INTDT0           , 0xE6050010UL, __READ, u32_T);        
__IOREG( INTCLR0          , 0xE6050014UL, __READ_WRITE, u32_T);  
__IOREG( INTMSK0          , 0xE6050018UL, __READ_WRITE, u32_T);  
__IOREG( MSKCLR0          , 0xE605001CUL, __READ_WRITE, u32_T);  
__IOREG( POSNEG0          , 0xE6050020UL, __READ_WRITE, u32_T);  
__IOREG( EDGELEVEL0       , 0xE6050024UL, __READ_WRITE, u32_T);  
__IOREG( FILONOFF0        , 0xE6050028UL, __READ_WRITE, u32_T);  
__IOREG( INTMSKS0         , 0xE6050038UL, __READ_WRITE, u32_T);  
__IOREG( MSKCLRS0         , 0xE605003CUL, __READ_WRITE, u32_T);
__IOREG( OUTDTSEL0        , 0xE6050040UL, __READ_WRITE, u32_T); 
__IOREG( OUTDTH0          , 0xE6050044UL, __READ_WRITE, u32_T);  
__IOREG( OUTDTL0          , 0xE6050048UL, __READ_WRITE, u32_T);  
__IOREG( BOTHEDGE0        , 0xE605004CUL, __READ_WRITE, u32_T);  
__IOREG( IOINTSEL1        , 0xE6051000UL, __READ_WRITE, u32_T); 
__IOREG( INOUTSEL1        , 0xE6051004UL, __READ_WRITE, u32_T); 
__IOREG( OUTDT1           , 0xE6051008UL, __READ_WRITE, u32_T); 
__IOREG( INDT1            , 0xE605100CUL, __READ, u32_T);  
__IOREG( INTDT1           , 0xE6051010UL, __READ, u32_T);  
__IOREG( INTCLR1          , 0xE6051014UL, __READ_WRITE, u32_T);  
__IOREG( INTMSK1          , 0xE6051018UL, __READ_WRITE, u32_T);  
__IOREG( MSKCLR1          , 0xE605101CUL, __READ_WRITE, u32_T);  
__IOREG( POSNEG1          , 0xE6051020UL, __READ_WRITE, u32_T);  
__IOREG( EDGELEVEL1       , 0xE6051024UL, __READ_WRITE, u32_T);  
__IOREG( FILONOFF1        , 0xE6051028UL, __READ_WRITE, u32_T); 
__IOREG( INTMSKS1         , 0xE6051038UL, __READ_WRITE, u32_T); 
__IOREG( MSKCLRS1         , 0xE605103CUL, __READ_WRITE, u32_T);  
__IOREG( OUTDTSEL1        , 0xE6051040UL, __READ_WRITE, u32_T); 
__IOREG( OUTDTH1          , 0xE6051044UL, __READ_WRITE, u32_T);  
__IOREG( OUTDTL1          , 0xE6051048UL, __READ_WRITE, u32_T);  
__IOREG( BOTHEDGE1        , 0xE605104CUL, __READ_WRITE, u32_T);  
__IOREG( IOINTSEL2        , 0xE6052000UL, __READ_WRITE, u32_T);  
__IOREG( INOUTSEL2        , 0xE6052004UL, __READ_WRITE, u32_T);  
__IOREG( OUTDT2           , 0xE6052008UL, __READ_WRITE, u32_T);  
__IOREG( INDT2            , 0xE605200CUL, __READ, u32_T);        
__IOREG( INTDT2           , 0xE6052010UL, __READ, u32_T);        
__IOREG( INTCLR2          , 0xE6052014UL, __READ_WRITE, u32_T);  
__IOREG( INTMSK2          , 0xE6052018UL, __READ_WRITE, u32_T);  
__IOREG( MSKCLR2          , 0xE605201CUL, __READ_WRITE, u32_T);  
__IOREG( POSNEG2          , 0xE6052020UL, __READ_WRITE, u32_T);  
__IOREG( EDGELEVEL2       , 0xE6052024UL, __READ_WRITE, u32_T);  
__IOREG( FILONOFF2        , 0xE6052028UL, __READ_WRITE, u32_T);  
__IOREG( INTMSKS2         , 0xE6052038UL, __READ_WRITE, u32_T);  
__IOREG( MSKCLRS2         , 0xE605203CUL, __READ_WRITE, u32_T);  
__IOREG( OUTDTSEL2        , 0xE6052040UL, __READ_WRITE, u32_T);  
__IOREG( OUTDTH2          , 0xE6052044UL, __READ_WRITE, u32_T);  
__IOREG( OUTDTL2          , 0xE6052048UL, __READ_WRITE, u32_T);  
__IOREG( BOTHEDGE2        , 0xE605204CUL, __READ_WRITE, u32_T);  
__IOREG( IOINTSEL3        , 0xE6053000UL, __READ_WRITE, u32_T);  
__IOREG( INOUTSEL3        , 0xE6053004UL, __READ_WRITE, u32_T);  
__IOREG( OUTDT3           , 0xE6053008UL, __READ_WRITE, u32_T);  
__IOREG( INDT3            , 0xE605300CUL, __READ, u32_T);        
__IOREG( INTDT3           , 0xE6053010UL, __READ, u32_T);        
__IOREG( INTCLR3          , 0xE6053014UL, __READ_WRITE, u32_T);  
__IOREG( INTMSK3          , 0xE6053018UL, __READ_WRITE, u32_T);  
__IOREG( MSKCLR3          , 0xE605301CUL, __READ_WRITE, u32_T);  
__IOREG( POSNEG3          , 0xE6053020UL, __READ_WRITE, u32_T);  
__IOREG( EDGELEVEL3       , 0xE6053024UL, __READ_WRITE, u32_T);  
__IOREG( FILONOFF3        , 0xE6053028UL, __READ_WRITE, u32_T);  
__IOREG( INTMSKS3         , 0xE6053038UL, __READ_WRITE, u32_T);  
__IOREG( MSKCLRS3         , 0xE605303CUL, __READ_WRITE, u32_T);  
__IOREG( OUTDTSEL3        , 0xE6053040UL, __READ_WRITE, u32_T);  
__IOREG( OUTDTH3          , 0xE6053044UL, __READ_WRITE, u32_T);  
__IOREG( OUTDTL3          , 0xE6053048UL, __READ_WRITE, u32_T);  
__IOREG( BOTHEDGE3        , 0xE605304CUL, __READ_WRITE, u32_T);  
__IOREG( IOINTSEL4        , 0xE6054000UL, __READ_WRITE, u32_T);  
__IOREG( INOUTSEL4        , 0xE6054004UL, __READ_WRITE, u32_T);  
__IOREG( OUTDT4           , 0xE6054008UL, __READ_WRITE, u32_T);  
__IOREG( INDT4            , 0xE605400CUL, __READ, u32_T);        
__IOREG( INTDT4           , 0xE6054010UL, __READ, u32_T);        
__IOREG( INTCLR4          , 0xE6054014UL, __READ_WRITE, u32_T);  
__IOREG( INTMSK4          , 0xE6054018UL, __READ_WRITE, u32_T);  
__IOREG( MSKCLR4          , 0xE605401CUL, __READ_WRITE, u32_T);  
__IOREG( POSNEG4          , 0xE6054020UL, __READ_WRITE, u32_T);  
__IOREG( EDGELEVEL4       , 0xE6054024UL, __READ_WRITE, u32_T);  
__IOREG( FILONOFF4        , 0xE6054028UL, __READ_WRITE, u32_T);  
__IOREG( INTMSKS4         , 0xE6054038UL, __READ_WRITE, u32_T);  
__IOREG( MSKCLRS4         , 0xE605403CUL, __READ_WRITE, u32_T);  
__IOREG( OUTDTSEL4        , 0xE6054040UL, __READ_WRITE, u32_T);  
__IOREG( OUTDTH4          , 0xE6054044UL, __READ_WRITE, u32_T);  
__IOREG( OUTDTL4          , 0xE6054048UL, __READ_WRITE, u32_T);  
__IOREG( BOTHEDGE4        , 0xE605404CUL, __READ_WRITE, u32_T);  
__IOREG( IOINTSEL5        , 0xE6055000UL, __READ_WRITE, u32_T);  
__IOREG( INOUTSEL5        , 0xE6055004UL, __READ_WRITE, u32_T);  
__IOREG( OUTDT5           , 0xE6055008UL, __READ_WRITE, u32_T);  
__IOREG( INDT5            , 0xE605500CUL, __READ, u32_T);        
__IOREG( INTDT5           , 0xE6055010UL, __READ, u32_T);        
__IOREG( INTCLR5          , 0xE6055014UL, __READ_WRITE, u32_T);  
__IOREG( INTMSK5          , 0xE6055018UL, __READ_WRITE, u32_T);  
__IOREG( MSKCLR5          , 0xE605501CUL, __READ_WRITE, u32_T);  
__IOREG( POSNEG5          , 0xE6055020UL, __READ_WRITE, u32_T);  
__IOREG( EDGELEVEL5       , 0xE6055024UL, __READ_WRITE, u32_T);  
__IOREG( FILONOFF5        , 0xE6055028UL, __READ_WRITE, u32_T);  
__IOREG( INTMSKS5         , 0xE6055038UL, __READ_WRITE, u32_T);  
__IOREG( MSKCLRS5         , 0xE605503CUL, __READ_WRITE, u32_T);  
__IOREG( OUTDTSEL5        , 0xE6055040UL, __READ_WRITE, u32_T);  
__IOREG( OUTDTH5          , 0xE6055044UL, __READ_WRITE, u32_T);  
__IOREG( OUTDTL5          , 0xE6055048UL, __READ_WRITE, u32_T);  
__IOREG( BOTHEDGE5        , 0xE605504CUL, __READ_WRITE, u32_T);  
__IOREG( IOINTSEL6        , 0xE6055400UL, __READ_WRITE, u32_T);  
__IOREG( INOUTSEL6        , 0xE6055404UL, __READ_WRITE, u32_T);  
__IOREG( OUTDT6           , 0xE6055408UL, __READ_WRITE, u32_T);  
__IOREG( INDT6            , 0xE605540CUL, __READ, u32_T);        
__IOREG( INTDT6           , 0xE6055410UL, __READ, u32_T);        
__IOREG( INTCLR6          , 0xE6055414UL, __READ_WRITE, u32_T);  
__IOREG( INTMSK6          , 0xE6055418UL, __READ_WRITE, u32_T);  
__IOREG( MSKCLR6          , 0xE605541CUL, __READ_WRITE, u32_T);  
__IOREG( POSNEG6          , 0xE6055420UL, __READ_WRITE, u32_T);  
__IOREG( EDGELEVEL6       , 0xE6055424UL, __READ_WRITE, u32_T);  
__IOREG( FILONOFF6        , 0xE6055428UL, __READ_WRITE, u32_T);  
__IOREG( INTMSKS6         , 0xE6055438UL, __READ_WRITE, u32_T);  
__IOREG( MSKCLRS6         , 0xE605543CUL, __READ_WRITE, u32_T);  
__IOREG( OUTDTSEL6        , 0xE6055440UL, __READ_WRITE, u32_T);  
__IOREG( OUTDTH6          , 0xE6055444UL, __READ_WRITE, u32_T);  
__IOREG( OUTDTL6          , 0xE6055448UL, __READ_WRITE, u32_T);  
__IOREG( BOTHEDGE6        , 0xE605544CUL, __READ_WRITE, u32_T);  
__IOREG( IOINTSEL7        , 0xE6055800UL, __READ_WRITE, u32_T);  
__IOREG( INOUTSEL7        , 0xE6055804UL, __READ_WRITE, u32_T);  
__IOREG( OUTDT7           , 0xE6055808UL, __READ_WRITE, u32_T);  
__IOREG( INDT7            , 0xE605580CUL, __READ, u32_T);        
__IOREG( INTDT7           , 0xE6055810UL, __READ, u32_T);        
__IOREG( INTCLR7          , 0xE6055814UL, __READ_WRITE, u32_T);  
__IOREG( INTMSK7          , 0xE6055818UL, __READ_WRITE, u32_T);  
__IOREG( MSKCLR7          , 0xE605581CUL, __READ_WRITE, u32_T);  
__IOREG( POSNEG7          , 0xE6055820UL, __READ_WRITE, u32_T);  
__IOREG( EDGELEVEL7       , 0xE6055824UL, __READ_WRITE, u32_T);  
__IOREG( FILONOFF7        , 0xE6055828UL, __READ_WRITE, u32_T);  
__IOREG( INTMSKS7         , 0xE6055838UL, __READ_WRITE, u32_T);  
__IOREG( MSKCLRS7         , 0xE605583CUL, __READ_WRITE, u32_T);  
__IOREG( OUTDTSEL7        , 0xE6055840UL, __READ_WRITE, u32_T);  
__IOREG( OUTDTH7          , 0xE6055844UL, __READ_WRITE, u32_T);  
__IOREG( OUTDTL7          , 0xE6055848UL, __READ_WRITE, u32_T);  
__IOREG( BOTHEDGE7        , 0xE605584CUL, __READ_WRITE, u32_T);  

 */
/* PFC.h */
__IOREG( PMMR             , 0xE6060000UL, __READ_WRITE, u32_T);  
__IOREG( GPSR0            , 0xE6060100UL, __READ_WRITE, u32_T);  
__IOREG( GPSR1            , 0xE6060104UL, __READ_WRITE, u32_T);  
__IOREG( GPSR2            , 0xE6060108UL, __READ_WRITE, u32_T);  
__IOREG( GPSR3            , 0xE606010CUL, __READ_WRITE, u32_T);  
__IOREG( GPSR4            , 0xE6060110UL, __READ_WRITE, u32_T);  
__IOREG( GPSR5            , 0xE6060114UL, __READ_WRITE, u32_T);  
__IOREG( GPSR6            , 0xE6060118UL, __READ_WRITE, u32_T);  
__IOREG( GPSR7            , 0xE606011CUL, __READ_WRITE, u32_T);  
__IOREG( IPSR0            , 0xE6060200UL, __READ_WRITE, u32_T);  
__IOREG( IPSR1            , 0xE6060204UL, __READ_WRITE, u32_T);  
__IOREG( IPSR2            , 0xE6060208UL, __READ_WRITE, u32_T);  
__IOREG( IPSR3            , 0xE606020CUL, __READ_WRITE, u32_T);  
__IOREG( IPSR4            , 0xE6060210UL, __READ_WRITE, u32_T);  
__IOREG( IPSR5            , 0xE6060214UL, __READ_WRITE, u32_T);  
__IOREG( IPSR6            , 0xE6060218UL, __READ_WRITE, u32_T);  
__IOREG( IPSR7            , 0xE606021CUL, __READ_WRITE, u32_T);  
__IOREG( IPSR8            , 0xE6060220UL, __READ_WRITE, u32_T);  
__IOREG( IPSR9            , 0xE6060224UL, __READ_WRITE, u32_T);  
__IOREG( IPSR10           , 0xE6060228UL, __READ_WRITE, u32_T);  
__IOREG( IPSR11           , 0xE606022CUL, __READ_WRITE, u32_T);  
__IOREG( IPSR12           , 0xE6060230UL, __READ_WRITE, u32_T);  
__IOREG( IPSR13           , 0xE6060234UL, __READ_WRITE, u32_T);  
__IOREG( IPSR14           , 0xE6060238UL, __READ_WRITE, u32_T);  
__IOREG( IPSR15           , 0xE606023CUL, __READ_WRITE, u32_T);  
__IOREG( IPSR16           , 0xE6060240UL, __READ_WRITE, u32_T);  
__IOREG( IPSR17           , 0xE6060244UL, __READ_WRITE, u32_T);  
__IOREG( DRVCTRL0         , 0xE6060300UL, __READ_WRITE, u32_T);  
__IOREG( DRVCTRL1         , 0xE6060304UL, __READ_WRITE, u32_T);  
__IOREG( DRVCTRL2         , 0xE6060308UL, __READ_WRITE, u32_T);  
__IOREG( DRVCTRL3         , 0xE606030CUL, __READ_WRITE, u32_T);  
__IOREG( DRVCTRL4         , 0xE6060310UL, __READ_WRITE, u32_T);  
__IOREG( DRVCTRL5         , 0xE6060314UL, __READ_WRITE, u32_T);  
__IOREG( DRVCTRL6         , 0xE6060318UL, __READ_WRITE, u32_T);  
__IOREG( DRVCTRL7         , 0xE606031CUL, __READ_WRITE, u32_T);  
__IOREG( DRVCTRL8         , 0xE6060320UL, __READ_WRITE, u32_T);  
__IOREG( DRVCTRL9         , 0xE6060324UL, __READ_WRITE, u32_T);  
__IOREG( DRVCTRL10        , 0xE6060328UL, __READ_WRITE, u32_T);  
__IOREG( DRVCTRL11        , 0xE606032CUL, __READ_WRITE, u32_T);  
__IOREG( DRVCTRL12        , 0xE6060330UL, __READ_WRITE, u32_T);  
__IOREG( DRVCTRL13        , 0xE6060334UL, __READ_WRITE, u32_T);  
__IOREG( DRVCTRL14        , 0xE6060338UL, __READ_WRITE, u32_T);  
__IOREG( DRVCTRL15        , 0xE606033CUL, __READ_WRITE, u32_T);  
__IOREG( DRVCTRL16        , 0xE6060340UL, __READ_WRITE, u32_T);  
__IOREG( DRVCTRL17        , 0xE6060344UL, __READ_WRITE, u32_T);  
__IOREG( DRVCTRL18        , 0xE6060348UL, __READ_WRITE, u32_T);  
__IOREG( DRVCTRL19        , 0xE606034CUL, __READ_WRITE, u32_T);  
__IOREG( DRVCTRL20        , 0xE6060350UL, __READ_WRITE, u32_T);  
__IOREG( DRVCTRL21        , 0xE6060354UL, __READ_WRITE, u32_T);  
__IOREG( DRVCTRL22        , 0xE6060358UL, __READ_WRITE, u32_T);  
__IOREG( DRVCTRL23        , 0xE606035CUL, __READ_WRITE, u32_T);  
__IOREG( DRVCTRL24        , 0xE6060360UL, __READ_WRITE, u32_T);  
__IOREG( POCCTRL0         , 0xE6060380UL, __READ_WRITE, u32_T);  
__IOREG( TDSELCTRL0       , 0xE60603C0UL, __READ_WRITE, u32_T);  
__IOREG( IOCTRL           , 0xE60603E0UL, __READ_WRITE, u32_T);  
__IOREG( TSREG            , 0xE60603E4UL, __READ, u32_T);        
__IOREG( PUEN0            , 0xE6060400UL, __READ_WRITE, u32_T); 
__IOREG( PUEN1            , 0xE6060404UL, __READ_WRITE, u32_T); 
__IOREG( PUEN2            , 0xE6060408UL, __READ_WRITE, u32_T);  
__IOREG( PUEN3            , 0xE606040CUL, __READ_WRITE, u32_T);  
__IOREG( PUEN4            , 0xE6060410UL, __READ_WRITE, u32_T);  
__IOREG( PUEN5            , 0xE6060414UL, __READ_WRITE, u32_T);  
__IOREG( PUEN6            , 0xE6060418UL, __READ_WRITE, u32_T); 
__IOREG( PUD0             , 0xE6060440UL, __READ_WRITE, u32_T); 
__IOREG( PUD1             , 0xE6060444UL, __READ_WRITE, u32_T); 
__IOREG( PUD2             , 0xE6060448UL, __READ_WRITE, u32_T); 
__IOREG( PUD3             , 0xE606044CUL, __READ_WRITE, u32_T);  
__IOREG( PUD4             , 0xE6060450UL, __READ_WRITE, u32_T);  
__IOREG( PUD5             , 0xE6060454UL, __READ_WRITE, u32_T);  
__IOREG( PUD6             , 0xE6060458UL, __READ_WRITE, u32_T);  
__IOREG( MOD_SEL0         , 0xE6060500UL, __READ_WRITE, u32_T);  
__IOREG( MOD_SEL1         , 0xE6060504UL, __READ_WRITE, u32_T);  
__IOREG( MOD_SEL2         , 0xE6060508UL, __READ_WRITE, u32_T);  


#endif /* __M3N_H */

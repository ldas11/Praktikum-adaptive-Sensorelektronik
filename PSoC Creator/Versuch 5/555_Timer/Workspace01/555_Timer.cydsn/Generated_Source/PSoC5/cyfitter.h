/*******************************************************************************
* File Name: cyfitter.h
* 
* PSoC Creator  4.2
*
* Description:
* 
* This file is automatically generated by PSoC Creator.
*
********************************************************************************
* Copyright (c) 2007-2018 Cypress Semiconductor.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
********************************************************************************/

#ifndef INCLUDED_CYFITTER_H
#define INCLUDED_CYFITTER_H
#include "cydevice.h"
#include "cydevice_trm.h"

/* Osci */
#define Osci__0__INTTYPE CYREG_PICU0_INTTYPE1
#define Osci__0__MASK 0x02u
#define Osci__0__PC CYREG_PRT0_PC1
#define Osci__0__PORT 0u
#define Osci__0__SHIFT 1u
#define Osci__AG CYREG_PRT0_AG
#define Osci__AMUX CYREG_PRT0_AMUX
#define Osci__BIE CYREG_PRT0_BIE
#define Osci__BIT_MASK CYREG_PRT0_BIT_MASK
#define Osci__BYP CYREG_PRT0_BYP
#define Osci__CTL CYREG_PRT0_CTL
#define Osci__DM0 CYREG_PRT0_DM0
#define Osci__DM1 CYREG_PRT0_DM1
#define Osci__DM2 CYREG_PRT0_DM2
#define Osci__DR CYREG_PRT0_DR
#define Osci__INP_DIS CYREG_PRT0_INP_DIS
#define Osci__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU0_BASE
#define Osci__LCD_COM_SEG CYREG_PRT0_LCD_COM_SEG
#define Osci__LCD_EN CYREG_PRT0_LCD_EN
#define Osci__MASK 0x02u
#define Osci__PORT 0u
#define Osci__PRT CYREG_PRT0_PRT
#define Osci__PRTDSI__CAPS_SEL CYREG_PRT0_CAPS_SEL
#define Osci__PRTDSI__DBL_SYNC_IN CYREG_PRT0_DBL_SYNC_IN
#define Osci__PRTDSI__OE_SEL0 CYREG_PRT0_OE_SEL0
#define Osci__PRTDSI__OE_SEL1 CYREG_PRT0_OE_SEL1
#define Osci__PRTDSI__OUT_SEL0 CYREG_PRT0_OUT_SEL0
#define Osci__PRTDSI__OUT_SEL1 CYREG_PRT0_OUT_SEL1
#define Osci__PRTDSI__SYNC_OUT CYREG_PRT0_SYNC_OUT
#define Osci__PS CYREG_PRT0_PS
#define Osci__SHIFT 1u
#define Osci__SLW CYREG_PRT0_SLW

/* Comp_1 */
#define Comp_1_ctComp__CLK CYREG_CMP0_CLK
#define Comp_1_ctComp__CMP_MASK 0x01u
#define Comp_1_ctComp__CMP_NUMBER 0u
#define Comp_1_ctComp__CR CYREG_CMP0_CR
#define Comp_1_ctComp__LUT__CR CYREG_LUT0_CR
#define Comp_1_ctComp__LUT__MSK CYREG_LUT_MSK
#define Comp_1_ctComp__LUT__MSK_MASK 0x01u
#define Comp_1_ctComp__LUT__MSK_SHIFT 0u
#define Comp_1_ctComp__LUT__MX CYREG_LUT0_MX
#define Comp_1_ctComp__LUT__SR CYREG_LUT_SR
#define Comp_1_ctComp__LUT__SR_MASK 0x01u
#define Comp_1_ctComp__LUT__SR_SHIFT 0u
#define Comp_1_ctComp__PM_ACT_CFG CYREG_PM_ACT_CFG7
#define Comp_1_ctComp__PM_ACT_MSK 0x01u
#define Comp_1_ctComp__PM_STBY_CFG CYREG_PM_STBY_CFG7
#define Comp_1_ctComp__PM_STBY_MSK 0x01u
#define Comp_1_ctComp__SW0 CYREG_CMP0_SW0
#define Comp_1_ctComp__SW2 CYREG_CMP0_SW2
#define Comp_1_ctComp__SW3 CYREG_CMP0_SW3
#define Comp_1_ctComp__SW4 CYREG_CMP0_SW4
#define Comp_1_ctComp__SW6 CYREG_CMP0_SW6
#define Comp_1_ctComp__TR0 CYREG_CMP0_TR0
#define Comp_1_ctComp__TR1 CYREG_CMP0_TR1
#define Comp_1_ctComp__TRIM__TR0 CYREG_FLSHID_MFG_CFG_CMP0_TR0
#define Comp_1_ctComp__TRIM__TR0_HS CYREG_FLSHID_CUST_TABLES_CMP0_TR0_HS
#define Comp_1_ctComp__TRIM__TR1 CYREG_FLSHID_MFG_CFG_CMP0_TR1
#define Comp_1_ctComp__TRIM__TR1_HS CYREG_FLSHID_CUST_TABLES_CMP0_TR1_HS
#define Comp_1_ctComp__WRK CYREG_CMP_WRK
#define Comp_1_ctComp__WRK_MASK 0x01u
#define Comp_1_ctComp__WRK_SHIFT 0u

/* Comp_2 */
#define Comp_2_ctComp__CLK CYREG_CMP2_CLK
#define Comp_2_ctComp__CMP_MASK 0x04u
#define Comp_2_ctComp__CMP_NUMBER 2u
#define Comp_2_ctComp__CR CYREG_CMP2_CR
#define Comp_2_ctComp__LUT__CR CYREG_LUT2_CR
#define Comp_2_ctComp__LUT__MSK CYREG_LUT_MSK
#define Comp_2_ctComp__LUT__MSK_MASK 0x04u
#define Comp_2_ctComp__LUT__MSK_SHIFT 2u
#define Comp_2_ctComp__LUT__MX CYREG_LUT2_MX
#define Comp_2_ctComp__LUT__SR CYREG_LUT_SR
#define Comp_2_ctComp__LUT__SR_MASK 0x04u
#define Comp_2_ctComp__LUT__SR_SHIFT 2u
#define Comp_2_ctComp__PM_ACT_CFG CYREG_PM_ACT_CFG7
#define Comp_2_ctComp__PM_ACT_MSK 0x04u
#define Comp_2_ctComp__PM_STBY_CFG CYREG_PM_STBY_CFG7
#define Comp_2_ctComp__PM_STBY_MSK 0x04u
#define Comp_2_ctComp__SW0 CYREG_CMP2_SW0
#define Comp_2_ctComp__SW2 CYREG_CMP2_SW2
#define Comp_2_ctComp__SW3 CYREG_CMP2_SW3
#define Comp_2_ctComp__SW4 CYREG_CMP2_SW4
#define Comp_2_ctComp__SW6 CYREG_CMP2_SW6
#define Comp_2_ctComp__TR0 CYREG_CMP2_TR0
#define Comp_2_ctComp__TR1 CYREG_CMP2_TR1
#define Comp_2_ctComp__TRIM__TR0 CYREG_FLSHID_MFG_CFG_CMP2_TR0
#define Comp_2_ctComp__TRIM__TR0_HS CYREG_FLSHID_CUST_TABLES_CMP2_TR0_HS
#define Comp_2_ctComp__TRIM__TR1 CYREG_FLSHID_MFG_CFG_CMP2_TR1
#define Comp_2_ctComp__TRIM__TR1_HS CYREG_FLSHID_CUST_TABLES_CMP2_TR1_HS
#define Comp_2_ctComp__WRK CYREG_CMP_WRK
#define Comp_2_ctComp__WRK_MASK 0x04u
#define Comp_2_ctComp__WRK_SHIFT 2u

/* Clock_1 */
#define Clock_1__CFG0 CYREG_CLKDIST_DCFG0_CFG0
#define Clock_1__CFG1 CYREG_CLKDIST_DCFG0_CFG1
#define Clock_1__CFG2 CYREG_CLKDIST_DCFG0_CFG2
#define Clock_1__CFG2_SRC_SEL_MASK 0x07u
#define Clock_1__INDEX 0x00u
#define Clock_1__PM_ACT_CFG CYREG_PM_ACT_CFG2
#define Clock_1__PM_ACT_MSK 0x01u
#define Clock_1__PM_STBY_CFG CYREG_PM_STBY_CFG2
#define Clock_1__PM_STBY_MSK 0x01u

/* VDAC8_1 */
#define VDAC8_1_viDAC8__CR0 CYREG_DAC2_CR0
#define VDAC8_1_viDAC8__CR1 CYREG_DAC2_CR1
#define VDAC8_1_viDAC8__D CYREG_DAC2_D
#define VDAC8_1_viDAC8__PM_ACT_CFG CYREG_PM_ACT_CFG8
#define VDAC8_1_viDAC8__PM_ACT_MSK 0x04u
#define VDAC8_1_viDAC8__PM_STBY_CFG CYREG_PM_STBY_CFG8
#define VDAC8_1_viDAC8__PM_STBY_MSK 0x04u
#define VDAC8_1_viDAC8__STROBE CYREG_DAC2_STROBE
#define VDAC8_1_viDAC8__SW0 CYREG_DAC2_SW0
#define VDAC8_1_viDAC8__SW2 CYREG_DAC2_SW2
#define VDAC8_1_viDAC8__SW3 CYREG_DAC2_SW3
#define VDAC8_1_viDAC8__SW4 CYREG_DAC2_SW4
#define VDAC8_1_viDAC8__TR CYREG_DAC2_TR
#define VDAC8_1_viDAC8__TRIM__M1 CYREG_FLSHID_CUST_TABLES_DAC2_M1
#define VDAC8_1_viDAC8__TRIM__M2 CYREG_FLSHID_CUST_TABLES_DAC2_M2
#define VDAC8_1_viDAC8__TRIM__M3 CYREG_FLSHID_CUST_TABLES_DAC2_M3
#define VDAC8_1_viDAC8__TRIM__M4 CYREG_FLSHID_CUST_TABLES_DAC2_M4
#define VDAC8_1_viDAC8__TRIM__M5 CYREG_FLSHID_CUST_TABLES_DAC2_M5
#define VDAC8_1_viDAC8__TRIM__M6 CYREG_FLSHID_CUST_TABLES_DAC2_M6
#define VDAC8_1_viDAC8__TRIM__M7 CYREG_FLSHID_CUST_TABLES_DAC2_M7
#define VDAC8_1_viDAC8__TRIM__M8 CYREG_FLSHID_CUST_TABLES_DAC2_M8
#define VDAC8_1_viDAC8__TST CYREG_DAC2_TST

/* VDAC8_2 */
#define VDAC8_2_viDAC8__CR0 CYREG_DAC0_CR0
#define VDAC8_2_viDAC8__CR1 CYREG_DAC0_CR1
#define VDAC8_2_viDAC8__D CYREG_DAC0_D
#define VDAC8_2_viDAC8__PM_ACT_CFG CYREG_PM_ACT_CFG8
#define VDAC8_2_viDAC8__PM_ACT_MSK 0x01u
#define VDAC8_2_viDAC8__PM_STBY_CFG CYREG_PM_STBY_CFG8
#define VDAC8_2_viDAC8__PM_STBY_MSK 0x01u
#define VDAC8_2_viDAC8__STROBE CYREG_DAC0_STROBE
#define VDAC8_2_viDAC8__SW0 CYREG_DAC0_SW0
#define VDAC8_2_viDAC8__SW2 CYREG_DAC0_SW2
#define VDAC8_2_viDAC8__SW3 CYREG_DAC0_SW3
#define VDAC8_2_viDAC8__SW4 CYREG_DAC0_SW4
#define VDAC8_2_viDAC8__TR CYREG_DAC0_TR
#define VDAC8_2_viDAC8__TRIM__M1 CYREG_FLSHID_CUST_TABLES_DAC0_M1
#define VDAC8_2_viDAC8__TRIM__M2 CYREG_FLSHID_CUST_TABLES_DAC0_M2
#define VDAC8_2_viDAC8__TRIM__M3 CYREG_FLSHID_CUST_TABLES_DAC0_M3
#define VDAC8_2_viDAC8__TRIM__M4 CYREG_FLSHID_CUST_TABLES_DAC0_M4
#define VDAC8_2_viDAC8__TRIM__M5 CYREG_FLSHID_CUST_TABLES_DAC0_M5
#define VDAC8_2_viDAC8__TRIM__M6 CYREG_FLSHID_CUST_TABLES_DAC0_M6
#define VDAC8_2_viDAC8__TRIM__M7 CYREG_FLSHID_CUST_TABLES_DAC0_M7
#define VDAC8_2_viDAC8__TRIM__M8 CYREG_FLSHID_CUST_TABLES_DAC0_M8
#define VDAC8_2_viDAC8__TST CYREG_DAC0_TST

/* Compare_Pin */
#define Compare_Pin__0__INTTYPE CYREG_PICU3_INTTYPE5
#define Compare_Pin__0__MASK 0x20u
#define Compare_Pin__0__PC CYREG_PRT3_PC5
#define Compare_Pin__0__PORT 3u
#define Compare_Pin__0__SHIFT 5u
#define Compare_Pin__AG CYREG_PRT3_AG
#define Compare_Pin__AMUX CYREG_PRT3_AMUX
#define Compare_Pin__BIE CYREG_PRT3_BIE
#define Compare_Pin__BIT_MASK CYREG_PRT3_BIT_MASK
#define Compare_Pin__BYP CYREG_PRT3_BYP
#define Compare_Pin__CTL CYREG_PRT3_CTL
#define Compare_Pin__DM0 CYREG_PRT3_DM0
#define Compare_Pin__DM1 CYREG_PRT3_DM1
#define Compare_Pin__DM2 CYREG_PRT3_DM2
#define Compare_Pin__DR CYREG_PRT3_DR
#define Compare_Pin__INP_DIS CYREG_PRT3_INP_DIS
#define Compare_Pin__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define Compare_Pin__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define Compare_Pin__LCD_EN CYREG_PRT3_LCD_EN
#define Compare_Pin__MASK 0x20u
#define Compare_Pin__PORT 3u
#define Compare_Pin__PRT CYREG_PRT3_PRT
#define Compare_Pin__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define Compare_Pin__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define Compare_Pin__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define Compare_Pin__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define Compare_Pin__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define Compare_Pin__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define Compare_Pin__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define Compare_Pin__PS CYREG_PRT3_PS
#define Compare_Pin__SHIFT 5u
#define Compare_Pin__SLW CYREG_PRT3_SLW

/* OutputDischarge_Pin */
#define OutputDischarge_Pin__0__INTTYPE CYREG_PICU3_INTTYPE4
#define OutputDischarge_Pin__0__MASK 0x10u
#define OutputDischarge_Pin__0__PC CYREG_PRT3_PC4
#define OutputDischarge_Pin__0__PORT 3u
#define OutputDischarge_Pin__0__SHIFT 4u
#define OutputDischarge_Pin__AG CYREG_PRT3_AG
#define OutputDischarge_Pin__AMUX CYREG_PRT3_AMUX
#define OutputDischarge_Pin__BIE CYREG_PRT3_BIE
#define OutputDischarge_Pin__BIT_MASK CYREG_PRT3_BIT_MASK
#define OutputDischarge_Pin__BYP CYREG_PRT3_BYP
#define OutputDischarge_Pin__CTL CYREG_PRT3_CTL
#define OutputDischarge_Pin__DM0 CYREG_PRT3_DM0
#define OutputDischarge_Pin__DM1 CYREG_PRT3_DM1
#define OutputDischarge_Pin__DM2 CYREG_PRT3_DM2
#define OutputDischarge_Pin__DR CYREG_PRT3_DR
#define OutputDischarge_Pin__INP_DIS CYREG_PRT3_INP_DIS
#define OutputDischarge_Pin__INTTYPE_BASE CYDEV_PICU_INTTYPE_PICU3_BASE
#define OutputDischarge_Pin__LCD_COM_SEG CYREG_PRT3_LCD_COM_SEG
#define OutputDischarge_Pin__LCD_EN CYREG_PRT3_LCD_EN
#define OutputDischarge_Pin__MASK 0x10u
#define OutputDischarge_Pin__PORT 3u
#define OutputDischarge_Pin__PRT CYREG_PRT3_PRT
#define OutputDischarge_Pin__PRTDSI__CAPS_SEL CYREG_PRT3_CAPS_SEL
#define OutputDischarge_Pin__PRTDSI__DBL_SYNC_IN CYREG_PRT3_DBL_SYNC_IN
#define OutputDischarge_Pin__PRTDSI__OE_SEL0 CYREG_PRT3_OE_SEL0
#define OutputDischarge_Pin__PRTDSI__OE_SEL1 CYREG_PRT3_OE_SEL1
#define OutputDischarge_Pin__PRTDSI__OUT_SEL0 CYREG_PRT3_OUT_SEL0
#define OutputDischarge_Pin__PRTDSI__OUT_SEL1 CYREG_PRT3_OUT_SEL1
#define OutputDischarge_Pin__PRTDSI__SYNC_OUT CYREG_PRT3_SYNC_OUT
#define OutputDischarge_Pin__PS CYREG_PRT3_PS
#define OutputDischarge_Pin__SHIFT 4u
#define OutputDischarge_Pin__SLW CYREG_PRT3_SLW

/* Miscellaneous */
#define BCLK__BUS_CLK__HZ 24000000U
#define BCLK__BUS_CLK__KHZ 24000U
#define BCLK__BUS_CLK__MHZ 24U
#define CY_PROJECT_NAME "555_Timer"
#define CY_VERSION "PSoC Creator  4.2"
#define CYDEV_CHIP_DIE_LEOPARD 1u
#define CYDEV_CHIP_DIE_PSOC4A 18u
#define CYDEV_CHIP_DIE_PSOC5LP 2u
#define CYDEV_CHIP_DIE_PSOC5TM 3u
#define CYDEV_CHIP_DIE_TMA4 4u
#define CYDEV_CHIP_DIE_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_FM0P 5u
#define CYDEV_CHIP_FAMILY_FM3 6u
#define CYDEV_CHIP_FAMILY_FM4 7u
#define CYDEV_CHIP_FAMILY_PSOC3 1u
#define CYDEV_CHIP_FAMILY_PSOC4 2u
#define CYDEV_CHIP_FAMILY_PSOC5 3u
#define CYDEV_CHIP_FAMILY_PSOC6 4u
#define CYDEV_CHIP_FAMILY_UNKNOWN 0u
#define CYDEV_CHIP_FAMILY_USED CYDEV_CHIP_FAMILY_PSOC5
#define CYDEV_CHIP_JTAG_ID 0x2E123069u
#define CYDEV_CHIP_MEMBER_3A 1u
#define CYDEV_CHIP_MEMBER_4A 18u
#define CYDEV_CHIP_MEMBER_4D 13u
#define CYDEV_CHIP_MEMBER_4E 6u
#define CYDEV_CHIP_MEMBER_4F 19u
#define CYDEV_CHIP_MEMBER_4G 4u
#define CYDEV_CHIP_MEMBER_4H 17u
#define CYDEV_CHIP_MEMBER_4I 23u
#define CYDEV_CHIP_MEMBER_4J 14u
#define CYDEV_CHIP_MEMBER_4K 15u
#define CYDEV_CHIP_MEMBER_4L 22u
#define CYDEV_CHIP_MEMBER_4M 21u
#define CYDEV_CHIP_MEMBER_4N 10u
#define CYDEV_CHIP_MEMBER_4O 7u
#define CYDEV_CHIP_MEMBER_4P 20u
#define CYDEV_CHIP_MEMBER_4Q 12u
#define CYDEV_CHIP_MEMBER_4R 8u
#define CYDEV_CHIP_MEMBER_4S 11u
#define CYDEV_CHIP_MEMBER_4T 9u
#define CYDEV_CHIP_MEMBER_4U 5u
#define CYDEV_CHIP_MEMBER_4V 16u
#define CYDEV_CHIP_MEMBER_5A 3u
#define CYDEV_CHIP_MEMBER_5B 2u
#define CYDEV_CHIP_MEMBER_6A 24u
#define CYDEV_CHIP_MEMBER_FM3 28u
#define CYDEV_CHIP_MEMBER_FM4 29u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE1 25u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE2 26u
#define CYDEV_CHIP_MEMBER_PDL_FM0P_TYPE3 27u
#define CYDEV_CHIP_MEMBER_UNKNOWN 0u
#define CYDEV_CHIP_MEMBER_USED CYDEV_CHIP_MEMBER_5B
#define CYDEV_CHIP_DIE_EXPECT CYDEV_CHIP_MEMBER_USED
#define CYDEV_CHIP_DIE_ACTUAL CYDEV_CHIP_DIE_EXPECT
#define CYDEV_CHIP_REV_LEOPARD_ES1 0u
#define CYDEV_CHIP_REV_LEOPARD_ES2 1u
#define CYDEV_CHIP_REV_LEOPARD_ES3 3u
#define CYDEV_CHIP_REV_LEOPARD_PRODUCTION 3u
#define CYDEV_CHIP_REV_PSOC4A_ES0 17u
#define CYDEV_CHIP_REV_PSOC4A_PRODUCTION 17u
#define CYDEV_CHIP_REV_PSOC5LP_ES0 0u
#define CYDEV_CHIP_REV_PSOC5LP_PRODUCTION 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES0 0u
#define CYDEV_CHIP_REV_PSOC5TM_ES1 1u
#define CYDEV_CHIP_REV_PSOC5TM_PRODUCTION 1u
#define CYDEV_CHIP_REV_TMA4_ES 17u
#define CYDEV_CHIP_REV_TMA4_ES2 33u
#define CYDEV_CHIP_REV_TMA4_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_3A_ES1 0u
#define CYDEV_CHIP_REVISION_3A_ES2 1u
#define CYDEV_CHIP_REVISION_3A_ES3 3u
#define CYDEV_CHIP_REVISION_3A_PRODUCTION 3u
#define CYDEV_CHIP_REVISION_4A_ES0 17u
#define CYDEV_CHIP_REVISION_4A_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4D_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4E_CCG2_NO_USBPD 0u
#define CYDEV_CHIP_REVISION_4E_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256DMA 0u
#define CYDEV_CHIP_REVISION_4F_PRODUCTION_256K 0u
#define CYDEV_CHIP_REVISION_4G_ES 17u
#define CYDEV_CHIP_REVISION_4G_ES2 33u
#define CYDEV_CHIP_REVISION_4G_PRODUCTION 17u
#define CYDEV_CHIP_REVISION_4H_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4I_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4J_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4K_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4L_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4M_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4N_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4O_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4P_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4Q_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4R_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4S_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4T_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4U_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_4V_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_5A_ES0 0u
#define CYDEV_CHIP_REVISION_5A_ES1 1u
#define CYDEV_CHIP_REVISION_5A_PRODUCTION 1u
#define CYDEV_CHIP_REVISION_5B_ES0 0u
#define CYDEV_CHIP_REVISION_5B_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_6A_ES 17u
#define CYDEV_CHIP_REVISION_6A_NO_UDB 33u
#define CYDEV_CHIP_REVISION_6A_PRODUCTION 33u
#define CYDEV_CHIP_REVISION_FM3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_FM4_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE1_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE2_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_PDL_FM0P_TYPE3_PRODUCTION 0u
#define CYDEV_CHIP_REVISION_USED CYDEV_CHIP_REVISION_5B_PRODUCTION
#define CYDEV_CHIP_REV_EXPECT CYDEV_CHIP_REVISION_USED
#define CYDEV_CONFIG_FASTBOOT_ENABLED 1
#define CYDEV_CONFIG_UNUSED_IO_AllowButWarn 0
#define CYDEV_CONFIG_UNUSED_IO CYDEV_CONFIG_UNUSED_IO_AllowButWarn
#define CYDEV_CONFIG_UNUSED_IO_AllowWithInfo 1
#define CYDEV_CONFIG_UNUSED_IO_Disallowed 2
#define CYDEV_CONFIGURATION_COMPRESSED 1
#define CYDEV_CONFIGURATION_DMA 0
#define CYDEV_CONFIGURATION_ECC 1
#define CYDEV_CONFIGURATION_IMOENABLED CYDEV_CONFIG_FASTBOOT_ENABLED
#define CYDEV_CONFIGURATION_MODE_COMPRESSED 0
#define CYDEV_CONFIGURATION_MODE CYDEV_CONFIGURATION_MODE_COMPRESSED
#define CYDEV_CONFIGURATION_MODE_DMA 2
#define CYDEV_CONFIGURATION_MODE_UNCOMPRESSED 1
#define CYDEV_DEBUG_ENABLE_MASK 0x20u
#define CYDEV_DEBUG_ENABLE_REGISTER CYREG_MLOGIC_DEBUG
#define CYDEV_DEBUGGING_DPS_Disable 3
#define CYDEV_DEBUGGING_DPS_JTAG_4 1
#define CYDEV_DEBUGGING_DPS_JTAG_5 0
#define CYDEV_DEBUGGING_DPS_SWD 2
#define CYDEV_DEBUGGING_DPS_SWD_SWV 6
#define CYDEV_DEBUGGING_DPS CYDEV_DEBUGGING_DPS_SWD_SWV
#define CYDEV_DEBUGGING_ENABLE 1
#define CYDEV_DEBUGGING_XRES 0
#define CYDEV_DMA_CHANNELS_AVAILABLE 24u
#define CYDEV_ECC_ENABLE 0
#define CYDEV_HEAP_SIZE 0x80
#define CYDEV_INSTRUCT_CACHE_ENABLED 1
#define CYDEV_INTR_RISING 0x00000000u
#define CYDEV_IS_EXPORTING_CODE 0
#define CYDEV_IS_IMPORTING_CODE 0
#define CYDEV_PROJ_TYPE 0
#define CYDEV_PROJ_TYPE_BOOTLOADER 1
#define CYDEV_PROJ_TYPE_LAUNCHER 5
#define CYDEV_PROJ_TYPE_LOADABLE 2
#define CYDEV_PROJ_TYPE_LOADABLEANDBOOTLOADER 4
#define CYDEV_PROJ_TYPE_MULTIAPPBOOTLOADER 3
#define CYDEV_PROJ_TYPE_STANDARD 0
#define CYDEV_PROTECTION_ENABLE 0
#define CYDEV_STACK_SIZE 0x0800
#define CYDEV_USE_BUNDLED_CMSIS 1
#define CYDEV_VARIABLE_VDDA 0
#define CYDEV_VDDA 5.0
#define CYDEV_VDDA_MV 5000
#define CYDEV_VDDD 5.0
#define CYDEV_VDDD_MV 5000
#define CYDEV_VDDIO0 5.0
#define CYDEV_VDDIO0_MV 5000
#define CYDEV_VDDIO1 5.0
#define CYDEV_VDDIO1_MV 5000
#define CYDEV_VDDIO2 5.0
#define CYDEV_VDDIO2_MV 5000
#define CYDEV_VDDIO3 5.0
#define CYDEV_VDDIO3_MV 5000
#define CYDEV_VIO0 5.0
#define CYDEV_VIO0_MV 5000
#define CYDEV_VIO1 5.0
#define CYDEV_VIO1_MV 5000
#define CYDEV_VIO2 5.0
#define CYDEV_VIO2_MV 5000
#define CYDEV_VIO3 5.0
#define CYDEV_VIO3_MV 5000
#define CYIPBLOCK_ARM_CM3_VERSION 0
#define CYIPBLOCK_P3_ANAIF_VERSION 0
#define CYIPBLOCK_P3_CAN_VERSION 0
#define CYIPBLOCK_P3_CAPSENSE_VERSION 0
#define CYIPBLOCK_P3_COMP_VERSION 0
#define CYIPBLOCK_P3_DECIMATOR_VERSION 0
#define CYIPBLOCK_P3_DFB_VERSION 0
#define CYIPBLOCK_P3_DMA_VERSION 0
#define CYIPBLOCK_P3_DRQ_VERSION 0
#define CYIPBLOCK_P3_DSM_VERSION 0
#define CYIPBLOCK_P3_EMIF_VERSION 0
#define CYIPBLOCK_P3_I2C_VERSION 0
#define CYIPBLOCK_P3_LCD_VERSION 0
#define CYIPBLOCK_P3_LPF_VERSION 0
#define CYIPBLOCK_P3_OPAMP_VERSION 0
#define CYIPBLOCK_P3_PM_VERSION 0
#define CYIPBLOCK_P3_SCCT_VERSION 0
#define CYIPBLOCK_P3_TIMER_VERSION 0
#define CYIPBLOCK_P3_USB_VERSION 0
#define CYIPBLOCK_P3_VIDAC_VERSION 0
#define CYIPBLOCK_P3_VREF_VERSION 0
#define CYIPBLOCK_S8_GPIO_VERSION 0
#define CYIPBLOCK_S8_IRQ_VERSION 0
#define CYIPBLOCK_S8_SAR_VERSION 0
#define CYIPBLOCK_S8_SIO_VERSION 0
#define CYIPBLOCK_S8_UDB_VERSION 0
#define DMA_CHANNELS_USED__MASK0 0x00000000u
#define CYDEV_BOOTLOADER_ENABLE 0

#endif /* INCLUDED_CYFITTER_H */
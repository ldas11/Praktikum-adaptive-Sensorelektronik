/*******************************************************************************
* File Name: Osci.h  
* Version 2.20
*
* Description:
*  This file contains Pin function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Osci_H) /* Pins Osci_H */
#define CY_PINS_Osci_H

#include "cytypes.h"
#include "cyfitter.h"
#include "cypins.h"
#include "Osci_aliases.h"

/* APIs are not generated for P15[7:6] */
#if !(CY_PSOC5A &&\
	 Osci__PORT == 15 && ((Osci__MASK & 0xC0) != 0))


/***************************************
*        Function Prototypes             
***************************************/    

/**
* \addtogroup group_general
* @{
*/
void    Osci_Write(uint8 value);
void    Osci_SetDriveMode(uint8 mode);
uint8   Osci_ReadDataReg(void);
uint8   Osci_Read(void);
void    Osci_SetInterruptMode(uint16 position, uint16 mode);
uint8   Osci_ClearInterrupt(void);
/** @} general */

/***************************************
*           API Constants        
***************************************/
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup driveMode Drive mode constants
     * \brief Constants to be passed as "mode" parameter in the Osci_SetDriveMode() function.
     *  @{
     */
        #define Osci_DM_ALG_HIZ         PIN_DM_ALG_HIZ
        #define Osci_DM_DIG_HIZ         PIN_DM_DIG_HIZ
        #define Osci_DM_RES_UP          PIN_DM_RES_UP
        #define Osci_DM_RES_DWN         PIN_DM_RES_DWN
        #define Osci_DM_OD_LO           PIN_DM_OD_LO
        #define Osci_DM_OD_HI           PIN_DM_OD_HI
        #define Osci_DM_STRONG          PIN_DM_STRONG
        #define Osci_DM_RES_UPDWN       PIN_DM_RES_UPDWN
    /** @} driveMode */
/** @} group_constants */
    
/* Digital Port Constants */
#define Osci_MASK               Osci__MASK
#define Osci_SHIFT              Osci__SHIFT
#define Osci_WIDTH              1u

/* Interrupt constants */
#if defined(Osci__INTSTAT)
/**
* \addtogroup group_constants
* @{
*/
    /** \addtogroup intrMode Interrupt constants
     * \brief Constants to be passed as "mode" parameter in Osci_SetInterruptMode() function.
     *  @{
     */
        #define Osci_INTR_NONE      (uint16)(0x0000u)
        #define Osci_INTR_RISING    (uint16)(0x0001u)
        #define Osci_INTR_FALLING   (uint16)(0x0002u)
        #define Osci_INTR_BOTH      (uint16)(0x0003u) 
    /** @} intrMode */
/** @} group_constants */

    #define Osci_INTR_MASK      (0x01u) 
#endif /* (Osci__INTSTAT) */


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Osci_PS                     (* (reg8 *) Osci__PS)
/* Data Register */
#define Osci_DR                     (* (reg8 *) Osci__DR)
/* Port Number */
#define Osci_PRT_NUM                (* (reg8 *) Osci__PRT) 
/* Connect to Analog Globals */                                                  
#define Osci_AG                     (* (reg8 *) Osci__AG)                       
/* Analog MUX bux enable */
#define Osci_AMUX                   (* (reg8 *) Osci__AMUX) 
/* Bidirectional Enable */                                                        
#define Osci_BIE                    (* (reg8 *) Osci__BIE)
/* Bit-mask for Aliased Register Access */
#define Osci_BIT_MASK               (* (reg8 *) Osci__BIT_MASK)
/* Bypass Enable */
#define Osci_BYP                    (* (reg8 *) Osci__BYP)
/* Port wide control signals */                                                   
#define Osci_CTL                    (* (reg8 *) Osci__CTL)
/* Drive Modes */
#define Osci_DM0                    (* (reg8 *) Osci__DM0) 
#define Osci_DM1                    (* (reg8 *) Osci__DM1)
#define Osci_DM2                    (* (reg8 *) Osci__DM2) 
/* Input Buffer Disable Override */
#define Osci_INP_DIS                (* (reg8 *) Osci__INP_DIS)
/* LCD Common or Segment Drive */
#define Osci_LCD_COM_SEG            (* (reg8 *) Osci__LCD_COM_SEG)
/* Enable Segment LCD */
#define Osci_LCD_EN                 (* (reg8 *) Osci__LCD_EN)
/* Slew Rate Control */
#define Osci_SLW                    (* (reg8 *) Osci__SLW)

/* DSI Port Registers */
/* Global DSI Select Register */
#define Osci_PRTDSI__CAPS_SEL       (* (reg8 *) Osci__PRTDSI__CAPS_SEL) 
/* Double Sync Enable */
#define Osci_PRTDSI__DBL_SYNC_IN    (* (reg8 *) Osci__PRTDSI__DBL_SYNC_IN) 
/* Output Enable Select Drive Strength */
#define Osci_PRTDSI__OE_SEL0        (* (reg8 *) Osci__PRTDSI__OE_SEL0) 
#define Osci_PRTDSI__OE_SEL1        (* (reg8 *) Osci__PRTDSI__OE_SEL1) 
/* Port Pin Output Select Registers */
#define Osci_PRTDSI__OUT_SEL0       (* (reg8 *) Osci__PRTDSI__OUT_SEL0) 
#define Osci_PRTDSI__OUT_SEL1       (* (reg8 *) Osci__PRTDSI__OUT_SEL1) 
/* Sync Output Enable Registers */
#define Osci_PRTDSI__SYNC_OUT       (* (reg8 *) Osci__PRTDSI__SYNC_OUT) 

/* SIO registers */
#if defined(Osci__SIO_CFG)
    #define Osci_SIO_HYST_EN        (* (reg8 *) Osci__SIO_HYST_EN)
    #define Osci_SIO_REG_HIFREQ     (* (reg8 *) Osci__SIO_REG_HIFREQ)
    #define Osci_SIO_CFG            (* (reg8 *) Osci__SIO_CFG)
    #define Osci_SIO_DIFF           (* (reg8 *) Osci__SIO_DIFF)
#endif /* (Osci__SIO_CFG) */

/* Interrupt Registers */
#if defined(Osci__INTSTAT)
    #define Osci_INTSTAT            (* (reg8 *) Osci__INTSTAT)
    #define Osci_SNAP               (* (reg8 *) Osci__SNAP)
    
	#define Osci_0_INTTYPE_REG 		(* (reg8 *) Osci__0__INTTYPE)
#endif /* (Osci__INTSTAT) */

#endif /* CY_PSOC5A... */

#endif /*  CY_PINS_Osci_H */


/* [] END OF FILE */

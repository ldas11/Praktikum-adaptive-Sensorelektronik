/*******************************************************************************
* File Name: LCD_2_PM.c
* Version 2.20
*
* Description:
*  This file provides the API source code for the Static Segment LCD component.
*
* Note:
*
********************************************************************************
* Copyright 2008-2014, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "LCD_2.h"


static LCD_2_BACKUP_STRUCT LCD_2_backup;


/*******************************************************************************
* Function Name: LCD_2_SaveConfig
********************************************************************************
*
* Summary:
*  Does nothing, provided for consistency.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void LCD_2_SaveConfig(void) 
{
}


/*******************************************************************************
* Function Name: LCD_2_RestoreConfig
********************************************************************************
*
* Summary:
*  Does nothing, provided for consistency.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void LCD_2_RestoreConfig(void) 
{
}


/*******************************************************************************
* Function Name: LCD_2_Sleep
********************************************************************************
*
* Summary:
*  Prepares the component for entering the sleep mode.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Reentrant:
*  No.
*
*******************************************************************************/
void LCD_2_Sleep(void) 
{
    LCD_2_backup.enableState = LCD_2_enableState;
    LCD_2_SaveConfig();
    LCD_2_Stop();
}


/*******************************************************************************
* Function Name: LCD_2_Wakeup
********************************************************************************
*
* Summary:
*  Wakes the component from sleep mode. Configures DMA and enables the component
*  for normal operation.
*
* Parameters:
*  LCD_2_enableState - Global variable.
*
* Return:
*  Status one of standard status for PSoC3 Component
*       CYRET_SUCCESS - Function completed successfully.
*       CYRET_LOCKED - The object was locked, already in use. Some of TDs or
*                      a channel already in use.
*
* Reentrant:
*  No.
*
*******************************************************************************/
void LCD_2_Wakeup(void) 
{
    LCD_2_RestoreConfig();

    if(LCD_2_backup.enableState == 1u)
    {
        LCD_2_Enable();
    }
}


/* [] END OF FILE */

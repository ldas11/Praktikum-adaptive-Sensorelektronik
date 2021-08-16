/*******************************************************************************
* File Name: ADC_Druck_PM.c
* Version 3.10
*
* Description:
*  This file provides Sleep/WakeUp APIs functionality.
*
* Note:
*
********************************************************************************
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "ADC_Druck.h"


/***************************************
* Local data allocation
***************************************/

static ADC_Druck_BACKUP_STRUCT  ADC_Druck_backup =
{
    ADC_Druck_DISABLED
};


/*******************************************************************************
* Function Name: ADC_Druck_SaveConfig
********************************************************************************
*
* Summary:
*  Saves the current user configuration.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void ADC_Druck_SaveConfig(void)
{
    /* All configuration registers are marked as [reset_all_retention] */
}


/*******************************************************************************
* Function Name: ADC_Druck_RestoreConfig
********************************************************************************
*
* Summary:
*  Restores the current user configuration.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
*******************************************************************************/
void ADC_Druck_RestoreConfig(void)
{
    /* All congiguration registers are marked as [reset_all_retention] */
}


/*******************************************************************************
* Function Name: ADC_Druck_Sleep
********************************************************************************
*
* Summary:
*  This is the preferred routine to prepare the component for sleep.
*  The ADC_Druck_Sleep() routine saves the current component state,
*  then it calls the ADC_Stop() function.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Global Variables:
*  ADC_Druck_backup - The structure field 'enableState' is modified
*  depending on the enable state of the block before entering to sleep mode.
*
*******************************************************************************/
void ADC_Druck_Sleep(void)
{
    if((ADC_Druck_PWRMGR_SAR_REG  & ADC_Druck_ACT_PWR_SAR_EN) != 0u)
    {
        if((ADC_Druck_SAR_CSR0_REG & ADC_Druck_SAR_SOF_START_CONV) != 0u)
        {
            ADC_Druck_backup.enableState = ADC_Druck_ENABLED | ADC_Druck_STARTED;
        }
        else
        {
            ADC_Druck_backup.enableState = ADC_Druck_ENABLED;
        }
        ADC_Druck_Stop();
    }
    else
    {
        ADC_Druck_backup.enableState = ADC_Druck_DISABLED;
    }
}


/*******************************************************************************
* Function Name: ADC_Druck_Wakeup
********************************************************************************
*
* Summary:
*  This is the preferred routine to restore the component to the state when
*  ADC_Druck_Sleep() was called. If the component was enabled before the
*  ADC_Druck_Sleep() function was called, the
*  ADC_Druck_Wakeup() function also re-enables the component.
*
* Parameters:
*  None.
*
* Return:
*  None.
*
* Global Variables:
*  ADC_Druck_backup - The structure field 'enableState' is used to
*  restore the enable state of block after wakeup from sleep mode.
*
*******************************************************************************/
void ADC_Druck_Wakeup(void)
{
    if(ADC_Druck_backup.enableState != ADC_Druck_DISABLED)
    {
        ADC_Druck_Enable();
        #if(ADC_Druck_DEFAULT_CONV_MODE != ADC_Druck__HARDWARE_TRIGGER)
            if((ADC_Druck_backup.enableState & ADC_Druck_STARTED) != 0u)
            {
                ADC_Druck_StartConvert();
            }
        #endif /* End ADC_Druck_DEFAULT_CONV_MODE != ADC_Druck__HARDWARE_TRIGGER */
    }
}


/* [] END OF FILE */

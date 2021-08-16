/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#include "stdio.h"

int adcResult = 0;
char toSend[30];

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    VDAC8_1_Start();
    PGA_1_Start();
    ADC_SAR_1_Start();
    ADC_SAR_1_StartConvert();
    UART_1_Start();
    while(1)
    {
        /*
          ADW Wert wird nach einer Umwandlung gespeichert
          und den Steuercode wird hinzugefügt.
          Danach werden die Daten in einem String umgewandelt
          und gesendet.
        */
        if (ADC_SAR_1_IsEndConversion(ADC_SAR_1_WAIT_FOR_RESULT))
        {
            adcResult = ADC_SAR_1_GetResult16();
            adcResult &= ~(0xF000);
            adcResult |= 0x3000;
            sprintf(toSend, "%x", adcResult);
            UART_1_PutString(toSend);
            CyDelay(500);
        }
                    
    }
}

/* [] END OF FILE */

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
#define LED_ON 1u
#define LED_OFF 0u

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    
    int count = 0;
    
    while(1)
    {
        for(count; count<10; count++)
        {
           LED_1_Write(LED_ON);
           CyDelay(205);
           LED_1_Write(LED_OFF);
           CyDelay(250);
        }
        count = 0;
        for(count; count<10; count++)
        {
            LED_2_Write(LED_ON);
            CyDelay(250);
            LED_2_Write(LED_OFF);
            CyDelay(250);
        }
        count = 0;
    }
}

/* [] END OF FILE */

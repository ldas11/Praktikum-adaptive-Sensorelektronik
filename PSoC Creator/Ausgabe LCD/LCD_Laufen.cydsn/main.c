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

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    LCD_1_Start();
  
    int i=0, whiteSpace = 0;
    while(1)
    {
        for(i; i<17 ; i++)
        {
            for(whiteSpace; whiteSpace < i; whiteSpace++)
            {
                LCD_1_Position(0,whiteSpace);
                LCD_1_PutChar(' ');
            }
            LCD_1_Position(0,i);
            LCD_1_PrintString("Hello World!");
            
            CyDelay(250);
        }
        for(whiteSpace; whiteSpace < 17 ; whiteSpace++)
        {
            LCD_1_Position(0,whiteSpace);
            LCD_1_PutChar(' ');
        }
        i = 0;
        whiteSpace = 0;
    }
}

/* [] END OF FILE */

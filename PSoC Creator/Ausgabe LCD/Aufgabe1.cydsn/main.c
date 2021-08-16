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
    
    LCD_1_Position(0,0); //Cursor auf 0,0 setzen
    LCD_1_PrintString("Welcome");
    
    for(;;)
    {
        /* Place your application code here. */
    }
}

/* [] END OF FILE */

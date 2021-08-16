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

char buffer[16];
char buffer2[16];
int result;
int toCompare;
unsigned int signBit;
unsigned int toPrint;

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    Clock_1_Start();
    PWM_1_Start();
    UART_1_Start();
    Tx_1_SetDriveMode(Tx_1_DM_STRONG);
    PGA_1_Start();
    ADC_SAR_1_Start();
    ADC_SAR_1_StartConvert();
    LCD_1_Start();
    
    //int result;
    //char send[16];
    while(1)
    {
        for(int whiteSpace = 0; whiteSpace < 17 ; whiteSpace++)
        {
            LCD_1_Position(0,whiteSpace);
            LCD_1_PutChar(' ');
        }
        for(int whiteSpace = 0; whiteSpace < 17 ; whiteSpace++)
        {
            LCD_1_Position(1,whiteSpace);
            LCD_1_PutChar(' ');
        }

        if (ADC_SAR_1_IsEndConversion(ADC_SAR_1_WAIT_FOR_RESULT))
        {
            result = ADC_SAR_1_GetResult16();
        }
        
        
        //result &= ~0xF00; // clears the top 4 bits
        result |= 0x1000;
        signBit = (result >> 11) & 1;
        
        toPrint = (result & 0x7FF); 
        toCompare = (result & 0xFFF);

        if (signBit != 0)
        {
            toPrint = (~toPrint) + 1;
            sprintf(buffer2, "-%d", toPrint);
        } else 
        {
            sprintf(buffer2, "+%d", toPrint);
        }
        
        sprintf(buffer, "%x", result);
        UART_1_PutString(buffer);
        
        /*
        LCD_1_Position(0,0);
        LCD_1_PrintString(buffer);
        
        LCD_1_Position(1,0);
        LCD_1_PrintString(buffer2);
        */
        
        if(321 < toCompare && toCompare < 465)
        {
            LCD_1_Position(0,0);
            LCD_1_PrintString("20 < T.Mess < 25");
            PWM_1_WritePeriod(250);
            PWM_1_WriteCompare(125);
        }
        else if(465 < toCompare && toCompare < 628)
        {
            LCD_1_Position(0,0);
            LCD_1_PrintString("25 < T.Mess < 30");
            PWM_1_WritePeriod(175);
            PWM_1_WriteCompare(86);
        }
        else if(628 < toCompare && toCompare < 768)
        {
            LCD_1_Position(0,0);
            LCD_1_PrintString("30 < T.Mess < 35");
            PWM_1_WritePeriod(100);
            PWM_1_WriteCompare(50);
        }
        else if(768 < toCompare && toCompare < 923)
        {
            LCD_1_Position(0,0);
            LCD_1_PrintString("35 < T.Mess < 40");
            PWM_1_WritePeriod(50);
            PWM_1_WriteCompare(25);
        }
        else
        {
            LCD_1_Position(0,0);
            LCD_1_PrintString("T.Mess out of bounds");
        }
        
        //PWM_1_WritePeriod(50);
        //PWM_1_WriteCompare(25);
        
        CyDelay(1000);
        
    }
}

/* [] END OF FILE */

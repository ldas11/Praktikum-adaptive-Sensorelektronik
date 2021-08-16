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
#include<stdio.h>

int global = 0;
uint16 isrCounter = 0; //Zaehlt Anzahl von Interrupts
int16 freqCounter = 0; //Zaehlt steigenden Flanken aus dem 555-Timer
int16 prevFreqCount = 0;
char toPrint[4];
char toTransmit[16];
uint16 counterDifference = 0u;
int16 temp;

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    Clock_1_Start();//Clocks Starten
    Clock_2_Start();
    
    VDAC8_1_Start();//ADCs fuer die Trigger und threshold spannungen
    VDAC8_2_Start();
    
    Comp_1_Start(); //Komparatoren Starten
    Comp_2_Start();
    
    PWM_1_Start(); //PWM und interrupt 
    isr_1_Start();
    
    Counter_1_Start();// Counter
    
    UART_1_Start();
    LCD_1_Start();  //LCD
    
    
    while(1)
    {
        if (global == 1)    // wird ein Interrupt aufgeloest, dann wird der Flag reseted, ein Counter incrementiert
                               //und den Status Register gelesen, um den Interrupt Ausgang zurueck zu setzen
        {
            global = 0;
            isrCounter++;
            PWM_1_ReadStatusRegister();
            prevFreqCount = freqCounter; //Vorherigen Wert wird gespeichert
            freqCounter = Counter_1_ReadCounter(); //Den Wert wird ausgelesen (Capture --> reload Counter)
            
            //Falsche Werte nicht benutzen
            if(freqCounter > 4095)
            {
                freqCounter = prevFreqCount;
            }
            Counter_1_WriteCounter(0);
            
            //Berechnung des Betrags der Differenz
            if (freqCounter >= prevFreqCount)
            {
                counterDifference = freqCounter - prevFreqCount;
                sprintf(toPrint, "+%u", counterDifference);
           
            } else
            {
                counterDifference = prevFreqCount - freqCounter;
                sprintf(toPrint, "-%u", counterDifference);
            }
            
            //Steuercode einfuegen und Daten senden
            temp = freqCounter;   
            temp &= ~0xF000;
            temp |= 0x2000;
            sprintf(toTransmit, "%x\r\n" ,temp);
            UART_1_PutString(toTransmit);
            
            //Auf dem LCD werden die Anzahl von augeloesten Interrupts angezeigt
            LCD_1_Position(0,0);    
            LCD_1_PrintNumber(isrCounter);
            
            //Auf dem LCD wird die Anzahl von steigenden Flanken vor ein Interrupt angezeigt
            LCD_1_Position(1,0);    
            LCD_1_PrintNumber(freqCounter);
            
            //Auf dem LCD wird die letzte Anzahl von steigenden Flanken vor ein Interrupt angezeigt
            LCD_1_Position(1,7);
            LCD_1_PrintNumber(prevFreqCount);
            
            //Differenz auf dem LCD anzeigen
            LCD_1_Position(0, 7);
            LCD_1_PrintString(toPrint);
        }  
        
        
        

       
        
        
        if(isrCounter == 30000) //Der Interrupt Counter wird eventuell reseted
        {
            isrCounter = 0;
        }
    }
}

/* [] END OF FILE */

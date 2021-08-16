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

//Druck
int16 adcResultDruck = 0;
char toSendDruck[16];
//Feuchte
int global = 0;
int16 freqCounter = 0; //Zaehlt steigenden Flanken aus dem 555-Timer
int16 prevFreqCount = 0;
char toTransmit[16];
int16 temp;
int wait = 1;
//Temperatur
char buffer[16];
int16 result;


int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    //Druck
    VDAC8_Druck_Start();
    PGA_Druck_Start();
    ADC_Druck_Start();
    ADC_Druck_StartConvert();
    //Feuchte
    Clock_1_Start();//Clocks Starten
    Clock_2_Start();
    VDAC8_1_Start();//ADCs fuer die Trigger und threshold spannungen
    VDAC8_2_Start();
    Comp_1_Start(); //Komparatoren Starten
    Comp_2_Start();
    //Temperatur
    PGA_1_Start();
    ADC_SAR_1_Start();
    ADC_SAR_1_StartConvert();
    
    UART_1_Start();
    LCD_1_Start();
    LCD_1_ClearDisplay();
    
    
    
    while(1)
    {
        for(int i = 1; i<4; i++)
        {
            if(i == 1)
            {
                /*
                  ADW Wert wird nach einer Umwandlung gespeichert
                  und den Steuercode wird hinzugefügt.
                  Danach werden die Daten in einem String umgewandelt
                  und gesendet.
                */
                if (ADC_Druck_IsEndConversion(ADC_Druck_WAIT_FOR_RESULT))
                {
                    adcResultDruck = ADC_Druck_GetResult16();
                    adcResultDruck &= ~(0xF000);
                    adcResultDruck |= 0x3000;
                    
                    sprintf(toSendDruck, "%x", adcResultDruck);
                    UART_1_PutString(toSendDruck);
                    
                }
                CyDelay(500);
            }
            else if (i == 2)
            {
                
                PWM_1_Start(); //PWM und interrupt 
                isr_1_Start();    
                Counter_1_Start();// Counter
                
                while (wait == 1)
                {
                    if (global == 1)
                    {
                        global = 0;
                        PWM_1_ReadStatusRegister();
                        wait = 0;
                        Counter_1_WriteCounter(0);
                    }
                }
                while(wait == 0)
                {
                    if (global == 1)    // wird ein Interrupt aufgeloest, dann wird der Flag reseted, ein Counter incrementiert
                                           //und den Status Register gelesen, um den Interrupt Ausgang zurueck zu setzen
                    {
                        global = 0;
                        PWM_1_ReadStatusRegister();
                        prevFreqCount = freqCounter; //Vorherigen Wert wird gespeichert
                        freqCounter = Counter_1_ReadCounter(); //Den Wert wird ausgelesen (Capture --> reload Counter)            
                        //Falsche Werte nicht benutzen
                        if(freqCounter > 4095)
                        {
                            freqCounter = prevFreqCount;
                        }
                        Counter_1_WriteCounter(0);
                        //Steuercode einfuegen und Daten senden
                        temp = freqCounter;   
                        temp &= ~0xF000;
                        temp |= 0x2000;
                        sprintf(toTransmit, "%x" ,temp);
                        UART_1_PutString(toTransmit);
                        wait = 1;
                    } 
                }
                CyDelay(500);
            }
            else if (i == 3)
            {
                if (ADC_SAR_1_IsEndConversion(ADC_SAR_1_WAIT_FOR_RESULT))
                {
                    result = ADC_SAR_1_GetResult16();
                }
                
                
                result &= ~0xF000; // clears the top 4 bits
                result |= 0x1000;
                sprintf(buffer, "%x", result);
                UART_1_PutString(buffer);
                CyDelay(500);
            }
        }
   }
}

/* [] END OF FILE */

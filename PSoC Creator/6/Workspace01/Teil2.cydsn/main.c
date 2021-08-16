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

int16 adcResult = 0;
int16 adcResultAlarm = 0;
unsigned long int counterResult = 0u;
char toSend[16];
char displayTime[30];
char displayAlarmNumber[30];
unsigned int alarmEin = 0u;
unsigned int numberOfAlarms = 0u;
unsigned int alarmDurationTimes [100];
unsigned int time = 0;

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */
    VDAC8_1_Start();
    PGA_1_Start();
    ADC_SAR_1_Start();
    ADC_SAR_1_StartConvert();
    UART_1_Start();
    LCD_1_Start();
    //Clock_1_Start();
    LCD_1_ClearDisplay();
    
    int i;
    for(i = 0; i < 100; i++)
    {
        alarmDurationTimes[i] = 0; //Alle Elemente des Arrays werden mit dem Wert 0 initializiert
    }
    
    sprintf(displayAlarmNumber, "Total alarms: %u", numberOfAlarms); //Anzahl von Druckabfällen wird angezeigt
    LCD_1_Position(0,0);
    LCD_1_PrintString(displayAlarmNumber);
        
    sprintf(displayTime, "last alarm: %u s", alarmDurationTimes[numberOfAlarms]); //Dauer der letzten Druckabfalls wird angezeigt
    LCD_1_Position(1,0);
    LCD_1_PrintString(displayTime);
    
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
            adcResultAlarm = adcResult;
            adcResult &= ~(0xF000);
            adcResult |= 0x3000;
            
            sprintf(toSend, "%x\r\n", adcResult);
            UART_1_PutString(toSend);
            CyDelay(300);
        }
        /*
          Fuer Luftdruckwerte unterhalb 900hPa bzw
          wird ein Alarm aktiviert
        */
        if (adcResultAlarm < 2596 && alarmEin == 0)        //wenn vorher kein Alarmprotokolla aktiv war und der Druck untehalb der Schwelle faellt
        {
            alarmEin = 1;                           //Clocks und Counter starten. LED blinkt.
                       
            //Clock_1_Start();
            Clock_2_Start();
            PWM_1_Start();
            Counter_1_WriteCounter(0);
            Counter_1_Start();
            //Counter_1_WriteCounter(0);
            
            LCD_1_ClearDisplay();                    //Der Display zeigt eine Warnung
            LCD_1_Position(0,0);
            LCD_1_PrintString("Emergency!");
            
            numberOfAlarms++;                       //Der Anzahl von Druckabfaellen wird inkrementiert
        } else if (alarmEin == 1 && adcResultAlarm >= 2596)  //wenn die Alarm aktiv war und der Druck sich wieder normalisiert
        {
            counterResult = Counter_1_ReadCounter();//Anzahl der Flanken wird ausgelesen.
            alarmEin = 0;
            
            PWM_1_Stop();
            CyDelay(10);
            Counter_1_Stop(); 
            Clock_2_Stop();                         //Der Counter und der 2. Clock werden getoppt                                

            time = counterResult * 0.2;             //Signal hat eine Frequenz von 5Hz --> eine Flanke jede 0.2s
            alarmDurationTimes [numberOfAlarms] = time;//Dauer wird in dem zugehoerigen Position im Array gespeichert.
            
            LED_1_Write(0u);
            LCD_1_ClearDisplay();                    //Warnung wird geloescht
            LCD_1_Position(0,0);
            LCD_1_PrintString("Risk Fixed");        //Neue Melgung wenn Gefahr behoben wurde
            CyDelay(2000);                          //Meldung wird nur fuer 2 Sekunden angezeigt
            LCD_1_ClearDisplay();
            
            sprintf(displayAlarmNumber, "Total alarms: %u", numberOfAlarms); //Anzahl von Druckabfällen wird angezeigt
            LCD_1_Position(0,0);
            LCD_1_PrintString(displayAlarmNumber);
        
            sprintf(displayTime, "last alarm: %u s", alarmDurationTimes[numberOfAlarms]); //Dauer der letzten Druckabfalls wird angezeigt
            LCD_1_Position(1,0);
            LCD_1_PrintString(displayTime);
        }        
    }
}

/* [] END OF FILE */

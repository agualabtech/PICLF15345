/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC16LF15345
        Driver Version    :  2.00
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries.
   
    Subject to your compliance with these terms, you may use Microchip software and any
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party
    license terms applicable to your use of third party software (including open source software) that
    may accompany Microchip software.
   
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS
    FOR A PARTICULAR PURPOSE.
   
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE,
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS
    SOFTWARE.
*/

#include "mcc_generated_files/mcc.h"
#include "string.h"
#include "stdio.h"
#include "math.h"
#include "stdlib.h"

/*
                         Main application
 */

//#define AVFS 1
#define MoistureSensor 1

int levelraw = 0,time_out2 = 0,avgflag=0,avgvalue=0;
char printdata[10],readbuffer[100],framechar='a';
unsigned long pulsecount=0;
unsigned int buffer;
int flowsilence=0;
int updatememoryflag=0;

#define zero 0
uint16_t rd_d=0,rd_b2=0,rd_a=0,rd_c=0,rd_b=0;

//typedef struct DATA_Buffer
//{
//  char familyid[8];
//  char deviceid[8];
//  char cmd;
//  char subcmd;
//  int inuse;
//  int source;
//  char frameid;
//  char data[150];
//}data_buffer[2];
//
void UART1_Write(uint8_t *s)
{
    while(*s !=0)
    {
        EUSART1_Write(*s);
        s++;
    }
}
//
//void read_data()
//{
//   if (eusart1RxCount>0)
//   {
//      rd_a = '\0';
//      rd_b = 0;
//       while(eusart1RxCount>0)
//      {
//         // time_out2 = 200;
//         rd_a = EUSART1_Read();
//         rd_b = zero;
//         if (rd_a == '*')
//         {
//             __delay_ms(100);
//             time_out2=30;
//            rd_a = EUSART1_Read();
//            while ((rd_a != ',') && time_out2)
//            {
//               data_buffer[zero].familyid[rd_b] = rd_a;
//               rd_b++;
//               rd_a = EUSART1_Read();
//            }
//            data_buffer[zero].familyid[rd_b] = zero;
//            rd_a = EUSART1_Read();
//            rd_b = zero;
//            while (rd_a != ',' && time_out2)
//            {
//               // time_out2--;
//               data_buffer[zero].deviceid[rd_b] = rd_a;
//               rd_b++;
//               rd_a = EUSART1_Read();
//            }
//            data_buffer[zero].deviceid[rd_b] = zero;
//            rd_a = EUSART1_Read();
//            rd_b = zero;
//            while ((rd_a != ',') && time_out2)
//            {
//               // time_out2--;
//               data_buffer[zero].frameid = rd_a;
//               rd_a = EUSART1_Read();
//            }
//            rd_a = EUSART1_Read();
//            while ((rd_a != ',') && time_out2)
//            {
//               // time_out2--;
//               data_buffer[zero].cmd = rd_a;
//               rd_a = EUSART1_Read();
//            }
//            rd_a = EUSART1_Read();
//            while ((rd_a != ',') && time_out2)
//            {
//               // time_out2--;
//               data_buffer[zero].subcmd = rd_a;
//               rd_a = EUSART1_Read();
//            }
//            rd_a = EUSART1_Read();
//            rd_b = zero;
//            while (rd_a != '$' && time_out2)
//            {
//               // time_out2--;
//               data_buffer[zero].data[rd_b] = rd_a;
//               rd_b++;
//               rd_a = EUSART1_Read();
//            }
//            data_buffer[zero].data[rd_b] = zero;
//            rd_b = zero;
//            data_buffer[zero].inuse=1;
//            // Serial.print(data_buffer[zero].deviceid);
//            // Serial.print(",");
//            // Serial.print(data_buffer[zero].cmd);
//            // Serial.print(",");
//            // Serial.print(data_buffer[zero].subcmd);
//            // Serial.print(",");
//            // Serial.println(data_buffer[zero].data);
//            // if (time_out2 > 0 && data_buffer[zero].source != 0)
//         }
//      }
//   }
//}
//
//
//void process_cmd_D(int d)
//{
//    switch (data_buffer[d].subcmd)
//    {
//    //  23: D,q:    Distance from Liq by M
//    case 'q':{
//        UART1_Write("*00000000,00000000,");
//        EUSART1_Write(framechar);
//        UART1_Write(",D,r,");
//        levelraw=ADC_GetConversion(Level);
//                    if(levelraw>999)
//                    EUSART1_Write((48+(levelraw/ 1000 % 10)));
//                    if(levelraw>99)
//                    EUSART1_Write((48+(levelraw/ 100 % 10)));
//                    if(levelraw>9)
//                    EUSART1_Write((48+(levelraw/ 10 % 10)));
//                    EUSART1_Write((48+(levelraw % 10)));
//                    UART1_Write("$slave");
//    }break;
//    }
//}
//void process_cmd_R(int d)
//{
//    switch (data_buffer[d].subcmd)
//    {
//    //  23: D,q:    Distance from Liq by M
//    case '0':{
//        UART1_Write("*00000000,00000000,");
//        EUSART1_Write(framechar);
//        UART1_Write(",R,0,0$slave");
//    }break;
//    }
//}
//void prccmd(int a)
//{
//    switch (data_buffer[a].cmd)
//    {
//    case 'D':
//        process_cmd_D(a);
//        break;
//    case 'R':
//        process_cmd_R(a);
//        break;
//    }
//}
//void data_buffer_processing()
//{
//
//         if (data_buffer[zero].inuse == 1)
//         {
//             framechar++;
//             if(framechar>'z')
//                 framechar='a';
//            prccmd(zero);
//         }
//}
//
//union pulses
//{
//    unsigned long pls;
//    unsigned int pls1;
//    unsigned int pls2;
//}pulse;
//
//void flowsilencecheck()
//{
//    flowsilence++;
//}
//
//
//
//void readpulses()
//{
//    pulse.pls1=FLASH_ReadWord(0x1F87);
//    pulse.pls2=FLASH_ReadWord(0x1F88);
//    pulsecount=pulse.pls;
//}
//
//void writepulses()
//{
//    BlueLED_SetHigh();
//            __delay_ms(1000);
//    pulse.pls=pulsecount;
//    FLASH_WriteWord(0x1F87,buffer,pulse.pls1);
//    __delay_ms(1);
//    FLASH_WriteWord(0x1F88,buffer,pulse.pls2);
//    __delay_ms(1);
//    BlueLED_SetLow();
//}
//
void SecondTimer()
{
    if(time_out2>0)
        time_out2--;
}

void main(void)
{
    // initialize the device
    SYSTEM_Initialize();
   
//    TMR2_SetInterruptHandler(flowsilencecheck);
    TMR1_SetInterruptHandler(SecondTimer);
   
    // When using interrupts, you need to set the Global and Peripheral Interrupt Enable bits
    // Use the following macros to:
   
    // Enable the Global Interrupts
    INTERRUPT_GlobalInterruptEnable();

    // Enable the Peripheral Interrupts
    INTERRUPT_PeripheralInterruptEnable();

    // Disable the Global Interrupts
    //INTERRUPT_GlobalInterruptDisable();

    // Disable the Peripheral Interrupts
    //INTERRUPT_PeripheralInterruptDisable();
   
//    readpulses();

    while (1)
    {
        // Add your application code
//        levelraw = ADC_GetConversion(Level);
//        sprintf(printdata,"%d",levelraw);
//        UART1_Write(printdata);
//        UART1_Write("\n");
//        __delay_ms(2000);
#ifdef AVFS
        if(PulsePin_GetValue()<1)
        {
            BlueLED_SetHigh();
            __delay_ms(1);
            pulsecount++;
            flowsilence=0;
            updatememoryflag=1;
            BlueLED_SetLow();
        }
        if(updatememoryflag&&(flowsilence>1))
        {
            writepulses();
            updatememoryflag=0;
        sprintf(printdata,"%u",pulsecount);
        UART1_Write(printdata);
        UART1_Write("\n");
        }
        ValvePwrEN_SetHigh();
        ValveOperation_Toggle();
        __delay_ms(1000);
#endif
#ifdef MoistureSensor
//        read_data();
//        data_buffer_processing();
        if(avgflag)
        {
            levelraw=ADC_GetConversion(Level);
            avgvalue+=levelraw;
            levelraw=(0.5*avgvalue);
            avgvalue=levelraw;
        }
        else
        {
            levelraw=ADC_GetConversion(Level);
            avgvalue=levelraw;
            avgflag=1;
        }
        if(time_out2<1)
        {
            time_out2=2;
        framechar++;
             if(framechar>'z')
                 framechar='a';
        UART1_Write("*00000000,00000000,");
        EUSART1_Write(framechar);
        UART1_Write(",D,r,");
                    if(levelraw>999)
                    EUSART1_Write((48+(levelraw/ 1000 % 10)));
                    if(levelraw>99)
                    EUSART1_Write((48+(levelraw/ 100 % 10)));
                    if(levelraw>9)
                    EUSART1_Write((48+(levelraw/ 10 % 10)));
                    EUSART1_Write((48+(levelraw % 10)));
                    UART1_Write("$slave\n");
        }
#endif
    }
}


/**
 End of File
*/

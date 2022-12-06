/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.8
        Device            :  PIC16LF15345
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.36 and above
        MPLAB 	          :  MPLAB X 6.00	
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

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set channel_ANA0 aliases
#define channel_ANA0_TRIS                 TRISAbits.TRISA0
#define channel_ANA0_LAT                  LATAbits.LATA0
#define channel_ANA0_PORT                 PORTAbits.RA0
#define channel_ANA0_WPU                  WPUAbits.WPUA0
#define channel_ANA0_OD                   ODCONAbits.ODCA0
#define channel_ANA0_ANS                  ANSELAbits.ANSA0
#define channel_ANA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define channel_ANA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define channel_ANA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define channel_ANA0_GetValue()           PORTAbits.RA0
#define channel_ANA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define channel_ANA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define channel_ANA0_SetPullup()          do { WPUAbits.WPUA0 = 1; } while(0)
#define channel_ANA0_ResetPullup()        do { WPUAbits.WPUA0 = 0; } while(0)
#define channel_ANA0_SetPushPull()        do { ODCONAbits.ODCA0 = 0; } while(0)
#define channel_ANA0_SetOpenDrain()       do { ODCONAbits.ODCA0 = 1; } while(0)
#define channel_ANA0_SetAnalogMode()      do { ANSELAbits.ANSA0 = 1; } while(0)
#define channel_ANA0_SetDigitalMode()     do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set RA1 procedures
#define RA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define RA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define RA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define RA1_GetValue()              PORTAbits.RA1
#define RA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define RA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define RA1_SetPullup()             do { WPUAbits.WPUA1 = 1; } while(0)
#define RA1_ResetPullup()           do { WPUAbits.WPUA1 = 0; } while(0)
#define RA1_SetAnalogMode()         do { ANSELAbits.ANSA1 = 1; } while(0)
#define RA1_SetDigitalMode()        do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set RA2 procedures
#define RA2_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define RA2_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define RA2_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define RA2_GetValue()              PORTAbits.RA2
#define RA2_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define RA2_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define RA2_SetPullup()             do { WPUAbits.WPUA2 = 1; } while(0)
#define RA2_ResetPullup()           do { WPUAbits.WPUA2 = 0; } while(0)
#define RA2_SetAnalogMode()         do { ANSELAbits.ANSA2 = 1; } while(0)
#define RA2_SetDigitalMode()        do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set RA4 procedures
#define RA4_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define RA4_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define RA4_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define RA4_GetValue()              PORTAbits.RA4
#define RA4_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define RA4_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define RA4_SetPullup()             do { WPUAbits.WPUA4 = 1; } while(0)
#define RA4_ResetPullup()           do { WPUAbits.WPUA4 = 0; } while(0)
#define RA4_SetAnalogMode()         do { ANSELAbits.ANSA4 = 1; } while(0)
#define RA4_SetDigitalMode()        do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set RA5 procedures
#define RA5_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define RA5_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define RA5_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define RA5_GetValue()              PORTAbits.RA5
#define RA5_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define RA5_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define RA5_SetPullup()             do { WPUAbits.WPUA5 = 1; } while(0)
#define RA5_ResetPullup()           do { WPUAbits.WPUA5 = 0; } while(0)
#define RA5_SetAnalogMode()         do { ANSELAbits.ANSA5 = 1; } while(0)
#define RA5_SetDigitalMode()        do { ANSELAbits.ANSA5 = 0; } while(0)

// get/set ValvePwrEN aliases
#define ValvePwrEN_TRIS                 TRISBbits.TRISB5
#define ValvePwrEN_LAT                  LATBbits.LATB5
#define ValvePwrEN_PORT                 PORTBbits.RB5
#define ValvePwrEN_WPU                  WPUBbits.WPUB5
#define ValvePwrEN_OD                   ODCONBbits.ODCB5
#define ValvePwrEN_ANS                  ANSELBbits.ANSB5
#define ValvePwrEN_SetHigh()            do { LATBbits.LATB5 = 1; } while(0)
#define ValvePwrEN_SetLow()             do { LATBbits.LATB5 = 0; } while(0)
#define ValvePwrEN_Toggle()             do { LATBbits.LATB5 = ~LATBbits.LATB5; } while(0)
#define ValvePwrEN_GetValue()           PORTBbits.RB5
#define ValvePwrEN_SetDigitalInput()    do { TRISBbits.TRISB5 = 1; } while(0)
#define ValvePwrEN_SetDigitalOutput()   do { TRISBbits.TRISB5 = 0; } while(0)
#define ValvePwrEN_SetPullup()          do { WPUBbits.WPUB5 = 1; } while(0)
#define ValvePwrEN_ResetPullup()        do { WPUBbits.WPUB5 = 0; } while(0)
#define ValvePwrEN_SetPushPull()        do { ODCONBbits.ODCB5 = 0; } while(0)
#define ValvePwrEN_SetOpenDrain()       do { ODCONBbits.ODCB5 = 1; } while(0)
#define ValvePwrEN_SetAnalogMode()      do { ANSELBbits.ANSB5 = 1; } while(0)
#define ValvePwrEN_SetDigitalMode()     do { ANSELBbits.ANSB5 = 0; } while(0)

// get/set ValveOperation aliases
#define ValveOperation_TRIS                 TRISBbits.TRISB7
#define ValveOperation_LAT                  LATBbits.LATB7
#define ValveOperation_PORT                 PORTBbits.RB7
#define ValveOperation_WPU                  WPUBbits.WPUB7
#define ValveOperation_OD                   ODCONBbits.ODCB7
#define ValveOperation_ANS                  ANSELBbits.ANSB7
#define ValveOperation_SetHigh()            do { LATBbits.LATB7 = 1; } while(0)
#define ValveOperation_SetLow()             do { LATBbits.LATB7 = 0; } while(0)
#define ValveOperation_Toggle()             do { LATBbits.LATB7 = ~LATBbits.LATB7; } while(0)
#define ValveOperation_GetValue()           PORTBbits.RB7
#define ValveOperation_SetDigitalInput()    do { TRISBbits.TRISB7 = 1; } while(0)
#define ValveOperation_SetDigitalOutput()   do { TRISBbits.TRISB7 = 0; } while(0)
#define ValveOperation_SetPullup()          do { WPUBbits.WPUB7 = 1; } while(0)
#define ValveOperation_ResetPullup()        do { WPUBbits.WPUB7 = 0; } while(0)
#define ValveOperation_SetPushPull()        do { ODCONBbits.ODCB7 = 0; } while(0)
#define ValveOperation_SetOpenDrain()       do { ODCONBbits.ODCB7 = 1; } while(0)
#define ValveOperation_SetAnalogMode()      do { ANSELBbits.ANSB7 = 1; } while(0)
#define ValveOperation_SetDigitalMode()     do { ANSELBbits.ANSB7 = 0; } while(0)

// get/set RC0 procedures
#define RC0_SetHigh()            do { LATCbits.LATC0 = 1; } while(0)
#define RC0_SetLow()             do { LATCbits.LATC0 = 0; } while(0)
#define RC0_Toggle()             do { LATCbits.LATC0 = ~LATCbits.LATC0; } while(0)
#define RC0_GetValue()              PORTCbits.RC0
#define RC0_SetDigitalInput()    do { TRISCbits.TRISC0 = 1; } while(0)
#define RC0_SetDigitalOutput()   do { TRISCbits.TRISC0 = 0; } while(0)
#define RC0_SetPullup()             do { WPUCbits.WPUC0 = 1; } while(0)
#define RC0_ResetPullup()           do { WPUCbits.WPUC0 = 0; } while(0)
#define RC0_SetAnalogMode()         do { ANSELCbits.ANSC0 = 1; } while(0)
#define RC0_SetDigitalMode()        do { ANSELCbits.ANSC0 = 0; } while(0)

// get/set IO_RC1 aliases
#define IO_RC1_TRIS                 TRISCbits.TRISC1
#define IO_RC1_LAT                  LATCbits.LATC1
#define IO_RC1_PORT                 PORTCbits.RC1
#define IO_RC1_WPU                  WPUCbits.WPUC1
#define IO_RC1_OD                   ODCONCbits.ODCC1
#define IO_RC1_ANS                  ANSELCbits.ANSC1
#define IO_RC1_SetHigh()            do { LATCbits.LATC1 = 1; } while(0)
#define IO_RC1_SetLow()             do { LATCbits.LATC1 = 0; } while(0)
#define IO_RC1_Toggle()             do { LATCbits.LATC1 = ~LATCbits.LATC1; } while(0)
#define IO_RC1_GetValue()           PORTCbits.RC1
#define IO_RC1_SetDigitalInput()    do { TRISCbits.TRISC1 = 1; } while(0)
#define IO_RC1_SetDigitalOutput()   do { TRISCbits.TRISC1 = 0; } while(0)
#define IO_RC1_SetPullup()          do { WPUCbits.WPUC1 = 1; } while(0)
#define IO_RC1_ResetPullup()        do { WPUCbits.WPUC1 = 0; } while(0)
#define IO_RC1_SetPushPull()        do { ODCONCbits.ODCC1 = 0; } while(0)
#define IO_RC1_SetOpenDrain()       do { ODCONCbits.ODCC1 = 1; } while(0)
#define IO_RC1_SetAnalogMode()      do { ANSELCbits.ANSC1 = 1; } while(0)
#define IO_RC1_SetDigitalMode()     do { ANSELCbits.ANSC1 = 0; } while(0)

// get/set RC2 procedures
#define RC2_SetHigh()            do { LATCbits.LATC2 = 1; } while(0)
#define RC2_SetLow()             do { LATCbits.LATC2 = 0; } while(0)
#define RC2_Toggle()             do { LATCbits.LATC2 = ~LATCbits.LATC2; } while(0)
#define RC2_GetValue()              PORTCbits.RC2
#define RC2_SetDigitalInput()    do { TRISCbits.TRISC2 = 1; } while(0)
#define RC2_SetDigitalOutput()   do { TRISCbits.TRISC2 = 0; } while(0)
#define RC2_SetPullup()             do { WPUCbits.WPUC2 = 1; } while(0)
#define RC2_ResetPullup()           do { WPUCbits.WPUC2 = 0; } while(0)
#define RC2_SetAnalogMode()         do { ANSELCbits.ANSC2 = 1; } while(0)
#define RC2_SetDigitalMode()        do { ANSELCbits.ANSC2 = 0; } while(0)

// get/set Level aliases
#define Level_TRIS                 TRISCbits.TRISC4
#define Level_LAT                  LATCbits.LATC4
#define Level_PORT                 PORTCbits.RC4
#define Level_WPU                  WPUCbits.WPUC4
#define Level_OD                   ODCONCbits.ODCC4
#define Level_ANS                  ANSELCbits.ANSC4
#define Level_SetHigh()            do { LATCbits.LATC4 = 1; } while(0)
#define Level_SetLow()             do { LATCbits.LATC4 = 0; } while(0)
#define Level_Toggle()             do { LATCbits.LATC4 = ~LATCbits.LATC4; } while(0)
#define Level_GetValue()           PORTCbits.RC4
#define Level_SetDigitalInput()    do { TRISCbits.TRISC4 = 1; } while(0)
#define Level_SetDigitalOutput()   do { TRISCbits.TRISC4 = 0; } while(0)
#define Level_SetPullup()          do { WPUCbits.WPUC4 = 1; } while(0)
#define Level_ResetPullup()        do { WPUCbits.WPUC4 = 0; } while(0)
#define Level_SetPushPull()        do { ODCONCbits.ODCC4 = 0; } while(0)
#define Level_SetOpenDrain()       do { ODCONCbits.ODCC4 = 1; } while(0)
#define Level_SetAnalogMode()      do { ANSELCbits.ANSC4 = 1; } while(0)
#define Level_SetDigitalMode()     do { ANSELCbits.ANSC4 = 0; } while(0)

// get/set BlueLED aliases
#define BlueLED_TRIS                 TRISCbits.TRISC5
#define BlueLED_LAT                  LATCbits.LATC5
#define BlueLED_PORT                 PORTCbits.RC5
#define BlueLED_WPU                  WPUCbits.WPUC5
#define BlueLED_OD                   ODCONCbits.ODCC5
#define BlueLED_ANS                  ANSELCbits.ANSC5
#define BlueLED_SetHigh()            do { LATCbits.LATC5 = 1; } while(0)
#define BlueLED_SetLow()             do { LATCbits.LATC5 = 0; } while(0)
#define BlueLED_Toggle()             do { LATCbits.LATC5 = ~LATCbits.LATC5; } while(0)
#define BlueLED_GetValue()           PORTCbits.RC5
#define BlueLED_SetDigitalInput()    do { TRISCbits.TRISC5 = 1; } while(0)
#define BlueLED_SetDigitalOutput()   do { TRISCbits.TRISC5 = 0; } while(0)
#define BlueLED_SetPullup()          do { WPUCbits.WPUC5 = 1; } while(0)
#define BlueLED_ResetPullup()        do { WPUCbits.WPUC5 = 0; } while(0)
#define BlueLED_SetPushPull()        do { ODCONCbits.ODCC5 = 0; } while(0)
#define BlueLED_SetOpenDrain()       do { ODCONCbits.ODCC5 = 1; } while(0)
#define BlueLED_SetAnalogMode()      do { ANSELCbits.ANSC5 = 1; } while(0)
#define BlueLED_SetDigitalMode()     do { ANSELCbits.ANSC5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);


/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handler for the IOCCF1 pin functionality
 * @Example
    IOCCF1_ISR();
 */
void IOCCF1_ISR(void);

/**
  @Summary
    Interrupt Handler Setter for IOCCF1 pin interrupt-on-change functionality

  @Description
    Allows selecting an interrupt handler for IOCCF1 at application runtime
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    InterruptHandler function pointer.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF1_SetInterruptHandler(MyInterruptHandler);

*/
void IOCCF1_SetInterruptHandler(void (* InterruptHandler)(void));

/**
  @Summary
    Dynamic Interrupt Handler for IOCCF1 pin

  @Description
    This is a dynamic interrupt handler to be used together with the IOCCF1_SetInterruptHandler() method.
    This handler is called every time the IOCCF1 ISR is executed and allows any function to be registered at runtime.
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF1_SetInterruptHandler(IOCCF1_InterruptHandler);

*/
extern void (*IOCCF1_InterruptHandler)(void);

/**
  @Summary
    Default Interrupt Handler for IOCCF1 pin

  @Description
    This is a predefined interrupt handler to be used together with the IOCCF1_SetInterruptHandler() method.
    This handler is called every time the IOCCF1 ISR is executed. 
    
  @Preconditions
    Pin Manager intializer called

  @Returns
    None.

  @Param
    None.

  @Example
    PIN_MANAGER_Initialize();
    IOCCF1_SetInterruptHandler(IOCCF1_DefaultInterruptHandler);

*/
void IOCCF1_DefaultInterruptHandler(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/
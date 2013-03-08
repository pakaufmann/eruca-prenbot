/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : US_Rechts_HeckListener.h
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Component   : ExtInt
**     Version     : Component 02.104, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2013-02-13, 17:17, # CodeGen: 43
**     Abstract    :
**         This component "ExtInt" implements an external 
**         interrupt, its control methods and interrupt/event 
**         handling procedure.
**         The component uses one pin which generates interrupt on 
**         selected edge.
**     Settings    :
**         Interrupt name              : INT_PORTD
**         User handling procedure     : US_Rechts_HeckListener_OnInterrupt
**
**         Used pin                    :
**             ----------------------------------------------------
**                Number (on package)  |    Name
**             ----------------------------------------------------
**                       80            |  PTD7/SPI1_MISO/UART0_TX/SPI1_MOSI
**             ----------------------------------------------------
**
**         Port name                   : PTD
**
**         Bit number (in port)        : 7
**         Bit mask of the port        : 0x0080
**
**         Signal edge/level           : falling
**         Priority                    : 2
**         Pull option                 : off
**         Initial state               : Disabled
**
**
**         Port data register          : GPIOD_PDOR [0x400FF0C0]
**         Port control register       : GPIOD_PDDR [0x400FF0D4]
**     Contents    :
**         Enable  - void US_Rechts_HeckListener_Enable(void);
**         Disable - void US_Rechts_HeckListener_Disable(void);
**         GetVal  - bool US_Rechts_HeckListener_GetVal(void);
**
**     Copyright : 1997 - 2012 Freescale, Inc. All Rights Reserved.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/

#ifndef __US_Rechts_HeckListener_H
#define __US_Rechts_HeckListener_H

/* MODULE US_Rechts_HeckListener. */

/* Include shared modules, which are used for whole project */
#include "PE_Types.h"
#include "PE_Error.h"
#include "PE_Const.h"
#include "IO_Map.h"
/* Include inherited beans */
#include "ExtIntLdd7.h"

#include "Cpu.h"




/*
** ===================================================================
**     Method      :  US_Rechts_HeckListener_Enable (component ExtInt)
**
**     Description :
**         Enable the component - the external events are accepted.
**         This method is available only if HW module allows
**         enable/disable of the interrupt.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#define US_Rechts_HeckListener_Enable() (ExtIntLdd7_Enable(ExtIntLdd7_DeviceData))

/*
** ===================================================================
**     Method      :  US_Rechts_HeckListener_Disable (component ExtInt)
**
**     Description :
**         Disable the component - the external events are not accepted.
**         This method is available only if HW module allows
**         enable/disable of the interrupt.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
#define US_Rechts_HeckListener_Disable() (ExtIntLdd7_Disable(ExtIntLdd7_DeviceData))

/*
** ===================================================================
**     Method      :  US_Rechts_HeckListener_GetVal (component ExtInt)
**
**     Description :
**         Returns the actual value of the input pin of the component.
**     Parameters  : None
**     Returns     :
**         ---             - Returned input value. Possible values:
**                           <false> - logical "0" (Low level) <true> -
**                           logical "1" (High level)
** ===================================================================
*/
#define US_Rechts_HeckListener_GetVal() (ExtIntLdd7_GetVal(ExtIntLdd7_DeviceData))

void ExtIntLdd7_OnInterrupt(LDD_TUserData *UserDataPtr);

/* END US_Rechts_HeckListener. */

#endif 
/* ifndef __US_Rechts_HeckListener_H */
/*
** ###################################################################
**
**     This file was created by Processor Expert 10.0 [05.03]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/

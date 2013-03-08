/** ###################################################################
**     THIS COMPONENT MODULE IS GENERATED BY THE TOOL. DO NOT MODIFY IT.
**     Filename    : US_FrontListener.c
**     Project     : ProcessorExpert
**     Processor   : MKL25Z128VLK4
**     Component   : ExtInt
**     Version     : Component 02.104, Driver 01.00, CPU db: 3.00.000
**     Compiler    : GNU C Compiler
**     Date/Time   : 2013-02-05, 10:23, # CodeGen: 36
**     Abstract    :
**         This component "ExtInt" implements an external 
**         interrupt, its control methods and interrupt/event 
**         handling procedure.
**         The component uses one pin which generates interrupt on 
**         selected edge.
**     Settings    :
**         Interrupt name              : INT_PORTA
**         User handling procedure     : US_FrontListener_OnInterrupt
**
**         Used pin                    :
**             ----------------------------------------------------
**                Number (on package)  |    Name
**             ----------------------------------------------------
**                       37            |  PTA17/SPI0_MISO/SPI0_MOSI
**             ----------------------------------------------------
**
**         Port name                   : PTA
**
**         Bit number (in port)        : 17
**         Bit mask of the port        : 0x00020000
**
**         Signal edge/level           : falling
**         Priority                    : 2
**         Pull option                 : off
**         Initial state               : Disabled
**
**
**         Port data register          : GPIOA_PDOR [0x400FF000]
**         Port control register       : GPIOA_PDDR [0x400FF014]
**     Contents    :
**         Enable  - void US_FrontListener_Enable(void);
**         Disable - void US_FrontListener_Disable(void);
**         GetVal  - bool US_FrontListener_GetVal(void);
**
**     Copyright : 1997 - 2012 Freescale, Inc. All Rights Reserved.
**     
**     http      : www.freescale.com
**     mail      : support@freescale.com
** ###################################################################*/

/* MODULE US_FrontListener. */

#include "Events.h"
#include "US_FrontListener.h"

/*
** ===================================================================
**     Method      :  US_FrontListener_Enable (component ExtInt)
**
**     Description :
**         Enable the component - the external events are accepted.
**         This method is available only if HW module allows
**         enable/disable of the interrupt.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
void US_FrontListener_Enable(void)

**  This method is implemented as a macro. See US_FrontListener.h file.  **
*/

/*
** ===================================================================
**     Method      :  US_FrontListener_Disable (component ExtInt)
**
**     Description :
**         Disable the component - the external events are not accepted.
**         This method is available only if HW module allows
**         enable/disable of the interrupt.
**     Parameters  : None
**     Returns     : Nothing
** ===================================================================
*/
/*
void US_FrontListener_Disable(void)

**  This method is implemented as a macro. See US_FrontListener.h file.  **
*/

/*
** ===================================================================
**     Method      :  US_FrontListener_GetVal (component ExtInt)
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
/*
bool US_FrontListener_GetVal(void)

**  This method is implemented as a macro. See US_FrontListener.h file.  **
*/

/*
** ===================================================================
**     Method      :  US_FrontListener_OnInterrupt (component ExtInt)
**
**     Description :
**         This method is internal. It is used by Processor Expert only.
** ===================================================================
*/
void ExtIntLdd4_OnInterrupt(LDD_TUserData *UserDataPtr)
{
  (void)UserDataPtr;                   /* Parameter is not used, suppress unused argument warning */
  US_FrontListener_OnInterrupt();      /* Invoke OnInterrupt event */
}

/* END US_FrontListener. */

/*
** ###################################################################
**
**     This file was created by Processor Expert 10.0 [05.03]
**     for the Freescale Kinetis series of microcontrollers.
**
** ###################################################################
*/

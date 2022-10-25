/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *         File:  Systick.h
 *       Module:  Systick
 *
 *  Description:  <Write File DESCRIPTION here>     
 *  
 *********************************************************************************************************************/
#ifndef SYSTIC_H
#define SYSTIC_H

/**********************************************************************************************************************
 * INCLUDES
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "Systick_Cfg.h"

/**********************************************************************************************************************
 *  GLOBAL CONSTANT MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL FUNCTION MACROS
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *  GLOBAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/
#define MOSCDIS             0
#define OSCSRC              4
#define XTAL                6
#define BYPASS              11
#define PWRDN               13
#define PWMDIV              17
#define USEPWMDIV           20
#define USESYSDIV           22
#define SYSDIV              23
#define ACG                 27

/**********************************************************************************************************************
 *  GLOBAL DATA PROTOTYPES
 *********************************************************************************************************************/

 
/**********************************************************************************************************************
 *  GLOBAL FUNCTION PROTOTYPES
 *********************************************************************************************************************/
void Systick_Init(void);
 
#endif  /* SYSTIC_H */

/**********************************************************************************************************************
 *  END OF FILE: Systick.h
 *********************************************************************************************************************/
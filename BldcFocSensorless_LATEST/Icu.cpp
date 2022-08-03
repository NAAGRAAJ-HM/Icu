/******************************************************************************/
/* File   : Icu.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "Icu.hpp"
#include "infIcu_Imp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ICU_AR_RELEASE_VERSION_MAJOR                                           4
#define ICU_AR_RELEASE_VERSION_MINOR                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(ICU_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible ICU_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(ICU_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible ICU_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Icu, ICU_VAR) Icu;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, ICU_CODE) module_Icu::InitFunction(
      CONSTP2CONST(ConstModule_TypeAbstract, ICU_CONST,       ICU_APPL_CONST) lptrConstModule
   ,  CONSTP2CONST(CfgModule_TypeAbstract,   ICU_CONFIG_DATA, ICU_APPL_CONST) lptrCfgModule
){
#if(STD_ON == Icu_InitCheck)
   if(
         E_OK
      != IsInitDone
   ){
#endif
      if(
            (NULL_PTR != lptrConstModule)
         && (NULL_PTR != lptrCfgModule)
      ){
         lptrConst = (const ConstIcu_Type*)lptrConstModule;
         lptrCfg   = lptrCfgModule;
      }
      else{
#if(STD_ON == Icu_DevErrorDetect)
         Det_ReportError(
               0 //TBD: IdModule
            ,  0 //TBD: IdInstance
            ,  0 //TBD: IdApi
            ,  0 //TBD: IdError
         );
#endif
      }
#if(STD_ON == Icu_InitCheck)
      IsInitDone = E_OK;
   }
   else{
#if(STD_ON == Icu_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ICU_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ICU_CODE) module_Icu::DeInitFunction(
   void
){
#if(STD_ON == Icu_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Icu_InitCheck)
      IsInitDone = E_NOT_OK;
   }
   else{
#if(STD_ON == Icu_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ICU_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ICU_CODE) module_Icu::MainFunction(
   void
){
#if(STD_ON == Icu_InitCheck)
   if(
         E_OK
      == IsInitDone
   ){
#endif
#if(STD_ON == Icu_InitCheck)
   }
   else{
#if(STD_ON == Icu_DevErrorDetect)
      Det_ReportError(
            0 //TBD: IdModule
         ,  0 //TBD: IdInstance
         ,  0 //TBD: IdApi
         ,  ICU_E_UNINIT
      );
#endif
   }
#endif
}

FUNC(void, ICU_CODE) module_Icu::SetMode(
   void
){
}

FUNC(void, ICU_CODE) module_Icu::DisableWakeup(
   void
){
}

FUNC(void, ICU_CODE) module_Icu::SetActivationCondition(
   void
){
}

FUNC(void, ICU_CODE) module_Icu::DisableNotification(
   void
){
}

FUNC(void, ICU_CODE) module_Icu::EnableNotification(
   void
){
}

FUNC(void, ICU_CODE) module_Icu::GetInputState(
   void
){
}

FUNC(void, ICU_CODE) module_Icu::StartTimeStamp(
   void
){
}

FUNC(void, ICU_CODE) module_Icu::StopTimeStamp(
   void
){
}

FUNC(void, ICU_CODE) module_Icu::GetTimeStampIndex(
   void
){
}

FUNC(void, ICU_CODE) module_Icu::ResetEdgeCount(
   void
){
}

FUNC(void, ICU_CODE) module_Icu::DisableEdgeCount(
   void
){
}

FUNC(void, ICU_CODE) module_Icu::EnableEdgeCount(
   void
){
}

FUNC(void, ICU_CODE) module_Icu::GetEdgeNumbers(
   void
){
}

FUNC(void, ICU_CODE) module_Icu::StartSignalMeasurement(
   void
){
}

FUNC(void, ICU_CODE) module_Icu::StopSignalMeasurement(
   void
){
}

FUNC(void, ICU_CODE) module_Icu::GetTimeElapsed(
   void
){
}

FUNC(void, ICU_CODE) module_Icu::GetDutyCycleValues(
   void
){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/


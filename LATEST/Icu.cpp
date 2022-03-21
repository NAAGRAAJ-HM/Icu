/******************************************************************************/
/* File   : Icu.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.h"
#include "infIcu_Version.h"
#include "infIcu_EcuM.h"
#include "infIcu_Dcm.h"
#include "infIcu_SchM.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Icu:
      public abstract_module
{
   public:
      FUNC(void, ICU_CODE) InitFunction   (void);
      FUNC(void, ICU_CODE) DeInitFunction (void);
      FUNC(void, ICU_CODE) GetVersionInfo (void);
      FUNC(void, ICU_CODE) MainFunction   (void);
};

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
CONSTP2VAR(infEcuMClient, ICU_VAR, ICU_CONST) gptrinfEcuMClient_Icu = &Icu;
CONSTP2VAR(infDcmClient,  ICU_VAR, ICU_CONST) gptrinfDcmClient_Icu  = &Icu;
CONSTP2VAR(infSchMClient, ICU_VAR, ICU_CONST) gptrinfSchMClient_Icu = &Icu;

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, ICU_CODE) module_Icu::InitFunction(void){
   Icu.IsInitDone = E_OK;
}

FUNC(void, ICU_CODE) module_Icu::DeInitFunction(void){
   Icu.IsInitDone = E_NOT_OK;
}

FUNC(void, ICU_CODE) module_Icu::GetVersionInfo(void){
}

FUNC(void, ICU_CODE) module_Icu::MainFunction(void){
}

#include "Icu_Unused.h"

FUNC(void, ICU_CODE) class_Icu_Unused::SetMode(void){
}

FUNC(void, ICU_CODE) class_Icu_Unused::DisableWakeup(void){
}

FUNC(void, ICU_CODE) class_Icu_Unused::SetActivationCondition(void){
}

FUNC(void, ICU_CODE) class_Icu_Unused::DisableNotification(void){
}

FUNC(void, ICU_CODE) class_Icu_Unused::EnableNotification(void){
}

FUNC(void, ICU_CODE) class_Icu_Unused::GetInputState(void){
}

FUNC(void, ICU_CODE) class_Icu_Unused::StartTimeStamp(void){
}

FUNC(void, ICU_CODE) class_Icu_Unused::StopTimeStamp(void){
}

FUNC(void, ICU_CODE) class_Icu_Unused::GetTimeStampIndex(void){
}

FUNC(void, ICU_CODE) class_Icu_Unused::ResetEdgeCount(void){
}

FUNC(void, ICU_CODE) class_Icu_Unused::DisableEdgeCount(void){
}

FUNC(void, ICU_CODE) class_Icu_Unused::EnableEdgeCount(void){
}

FUNC(void, ICU_CODE) class_Icu_Unused::GetEdgeNumbers(void){
}

FUNC(void, ICU_CODE) class_Icu_Unused::StartSignalMeasurement(void){
}

FUNC(void, ICU_CODE) class_Icu_Unused::StopSignalMeasurement(void){
}

FUNC(void, ICU_CODE) class_Icu_Unused::GetTimeElapsed(void){
}

FUNC(void, ICU_CODE) class_Icu_Unused::GetDutyCycleValues(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/


/******************************************************************************/
/* File   : Icu.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "module.h"
#include "CfgIcu.h"
#include "infIcu_EcuM.h"
#include "infIcu_Dcm.h"
#include "infIcu_SchM.h"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ICU_AR_RELEASE_MAJOR_VERSION                                           4
#define ICU_AR_RELEASE_MINOR_VERSION                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(ICU_AR_RELEASE_MAJOR_VERSION != STD_AR_RELEASE_MAJOR_VERSION)
   #error "Incompatible ICU_AR_RELEASE_MAJOR_VERSION!"
#endif

#if(ICU_AR_RELEASE_MINOR_VERSION != STD_AR_RELEASE_MINOR_VERSION)
   #error "Incompatible ICU_AR_RELEASE_MINOR_VERSION!"
#endif

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

   private:
      CONST(Std_TypeVersionInfo, ICU_CONST) VersionInfo = {
            0x0000
         ,  0xFFFF
         ,  0x01
         ,  '0'
         ,  '1'
         ,  '0'
      };
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
#if(STD_ON == Icu_DevErrorDetect)
//TBD: API parameter check
   Det_ReportError(
   );
#endif
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


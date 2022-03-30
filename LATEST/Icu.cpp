/******************************************************************************/
/* File   : Icu.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "infIcu_EcuM.hpp"
#include "infIcu_Dcm.hpp"
#include "infIcu_SchM.hpp"

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
      module_Icu(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, _CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, _CONFIG_DATA, _APPL_CONST) lptrCfgModule
      );
      FUNC(void, ICU_CODE) InitFunction   (void);
      FUNC(void, ICU_CODE) DeInitFunction (void);
      FUNC(void, ICU_CODE) MainFunction   (void);
};

extern VAR(module_Icu, ICU_VAR) Icu;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, ICU_VAR, ICU_CONST) gptrinfEcuMClient_Icu = &Icu;
CONSTP2VAR(infDcmClient,  ICU_VAR, ICU_CONST) gptrinfDcmClient_Icu  = &Icu;
CONSTP2VAR(infSchMClient, ICU_VAR, ICU_CONST) gptrinfSchMClient_Icu = &Icu;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
#include "CfgIcu.hpp"

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Icu, ICU_VAR) Icu(
   {
         0x0000
      ,  0xFFFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, ICU_CODE) module_Icu::InitFunction(
   CONSTP2CONST(CfgIcu_Type, CFGICU_CONFIG_DATA, CFGICU_APPL_CONST) lptrCfgIcu
){
   if(NULL_PTR == lptrCfgIcu){
#if(STD_ON == Icu_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
// check lptrCfgIcu for memory faults
// use PBcfg_Icu as back-up configuration
   }
   Icu.IsInitDone = E_OK;
}

FUNC(void, ICU_CODE) module_Icu::DeInitFunction(void){
   Icu.IsInitDone = E_NOT_OK;
}

FUNC(void, ICU_CODE) module_Icu::MainFunction(void){
}

class class_Icu_Unused{
   public:
      FUNC(void, ICU_CODE) SetMode                (void);
      FUNC(void, ICU_CODE) DisableWakeup          (void);
      FUNC(void, ICU_CODE) SetActivationCondition (void);
      FUNC(void, ICU_CODE) DisableNotification    (void);
      FUNC(void, ICU_CODE) EnableNotification     (void);
      FUNC(void, ICU_CODE) GetInputState          (void);
      FUNC(void, ICU_CODE) StartTimeStamp         (void);
      FUNC(void, ICU_CODE) StopTimeStamp          (void);
      FUNC(void, ICU_CODE) GetTimeStampIndex      (void);
      FUNC(void, ICU_CODE) ResetEdgeCount         (void);
      FUNC(void, ICU_CODE) DisableEdgeCount       (void);
      FUNC(void, ICU_CODE) EnableEdgeCount        (void);
      FUNC(void, ICU_CODE) GetEdgeNumbers         (void);
      FUNC(void, ICU_CODE) StartSignalMeasurement (void);
      FUNC(void, ICU_CODE) StopSignalMeasurement  (void);
      FUNC(void, ICU_CODE) GetTimeElapsed         (void);
      FUNC(void, ICU_CODE) GetDutyCycleValues     (void);
};

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


#pragma once
/*****************************************************/
/* File   : Icu_Unused.h                             */
/* Author : Naagraaj HM                              */
/*****************************************************/

/*****************************************************/
/* #INCLUDES                                         */
/*****************************************************/
#include "Std_Types.h"
#include "Compiler_Cfg_Icu.h"

/*****************************************************/
/* #DEFINES                                          */
/*****************************************************/

/*****************************************************/
/* MACROS                                            */
/*****************************************************/

/*****************************************************/
/* TYPEDEFS                                          */
/*****************************************************/
class class_Icu_Unused{
   public:
/*****************************************************/
/* FUNCTIONS                                         */
/*****************************************************/
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
      FUNC(void, ICU_CODE) GetVersionInfo         (void);
};

/*****************************************************/
/* CONSTS                                            */
/*****************************************************/

/*****************************************************/
/* PARAMS                                            */
/*****************************************************/

/*****************************************************/
/* OBJECTS                                           */
/*****************************************************/
//extern class_Icu Icu;

/*****************************************************/
/* EOF                                               */
/*****************************************************/


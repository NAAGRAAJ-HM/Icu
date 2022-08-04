#pragma once
/******************************************************************************/
/* File   : McalIcu_core.hpp                                                      */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "CompilerCfg_McalIcu.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ICU_CORE_FUNCTIONALITIES                                               \
              FUNC(void, ICU_CODE) SetMode                (void);              \
              FUNC(void, ICU_CODE) DisableWakeup          (void);              \
              FUNC(void, ICU_CODE) SetActivationCondition (void);              \
              FUNC(void, ICU_CODE) DisableNotification    (void);              \
              FUNC(void, ICU_CODE) EnableNotification     (void);              \
              FUNC(void, ICU_CODE) GetInputState          (void);              \
              FUNC(void, ICU_CODE) StartTimeStamp         (void);              \
              FUNC(void, ICU_CODE) StopTimeStamp          (void);              \
              FUNC(void, ICU_CODE) GetTimeStampIndex      (void);              \
              FUNC(void, ICU_CODE) ResetEdgeCount         (void);              \
              FUNC(void, ICU_CODE) DisableEdgeCount       (void);              \
              FUNC(void, ICU_CODE) EnableEdgeCount        (void);              \
              FUNC(void, ICU_CODE) GetEdgeNumbers         (void);              \
              FUNC(void, ICU_CODE) StartSignalMeasurement (void);              \
              FUNC(void, ICU_CODE) StopSignalMeasurement  (void);              \
              FUNC(void, ICU_CODE) GetTimeElapsed         (void);              \
              FUNC(void, ICU_CODE) GetDutyCycleValues     (void);              \

#define ICU_CORE_FUNCTIONALITIES_VIRTUAL                                       \
      virtual FUNC(void, ICU_CODE) SetMode                (void) = 0;          \
      virtual FUNC(void, ICU_CODE) DisableWakeup          (void) = 0;          \
      virtual FUNC(void, ICU_CODE) SetActivationCondition (void) = 0;          \
      virtual FUNC(void, ICU_CODE) DisableNotification    (void) = 0;          \
      virtual FUNC(void, ICU_CODE) EnableNotification     (void) = 0;          \
      virtual FUNC(void, ICU_CODE) GetInputState          (void) = 0;          \
      virtual FUNC(void, ICU_CODE) StartTimeStamp         (void) = 0;          \
      virtual FUNC(void, ICU_CODE) StopTimeStamp          (void) = 0;          \
      virtual FUNC(void, ICU_CODE) GetTimeStampIndex      (void) = 0;          \
      virtual FUNC(void, ICU_CODE) ResetEdgeCount         (void) = 0;          \
      virtual FUNC(void, ICU_CODE) DisableEdgeCount       (void) = 0;          \
      virtual FUNC(void, ICU_CODE) EnableEdgeCount        (void) = 0;          \
      virtual FUNC(void, ICU_CODE) GetEdgeNumbers         (void) = 0;          \
      virtual FUNC(void, ICU_CODE) StartSignalMeasurement (void) = 0;          \
      virtual FUNC(void, ICU_CODE) StopSignalMeasurement  (void) = 0;          \
      virtual FUNC(void, ICU_CODE) GetTimeElapsed         (void) = 0;          \
      virtual FUNC(void, ICU_CODE) GetDutyCycleValues     (void) = 0;          \

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class class_McalIcu_Functionality{
   public:
      ICU_CORE_FUNCTIONALITIES_VIRTUAL
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

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/


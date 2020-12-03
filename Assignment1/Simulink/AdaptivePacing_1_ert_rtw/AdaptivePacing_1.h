/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: AdaptivePacing_1.h
 *
 * Code generated for Simulink model 'AdaptivePacing_1'.
 *
 * Model version                  : 1.14
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Thu Dec  3 10:53:37 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_AdaptivePacing_1_h_
#define RTW_HEADER_AdaptivePacing_1_h_
#include <math.h>
#include <string.h>
#include <float.h>
#include <stddef.h>
#ifndef AdaptivePacing_1_COMMON_INCLUDES_
# define AdaptivePacing_1_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "dt_info.h"
#include "ext_work.h"
#include "MW_I2C.h"
#endif                                 /* AdaptivePacing_1_COMMON_INCLUDES_ */

#include "AdaptivePacing_1_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
# define rtmGetFinalTime(rtm)          ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
# define rtmGetRTWExtModeInfo(rtm)     ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
# define rtmGetStopRequested(rtm)      ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
# define rtmSetStopRequested(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
# define rtmGetStopRequestedPtr(rtm)   (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
# define rtmGetT(rtm)                  ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
# define rtmGetTFinal(rtm)             ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
# define rtmGetTPtr(rtm)               (&(rtm)->Timing.taskTime0)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T DataTypeConversion5;          /* '<Root>/Data Type Conversion5' */
  real_T Divide1;                      /* '<S1>/Divide1' */
  real_T DataTypeConversion4;          /* '<Root>/Data Type Conversion4' */
  real_T DataTypeConversion3;          /* '<Root>/Data Type Conversion3' */
  real_T DataTypeConversion2;          /* '<Root>/Data Type Conversion2' */
  real_T DataTypeConversion1;          /* '<Root>/Data Type Conversion1' */
  real_T Divide;                       /* '<S1>/Divide' */
  real_T avg;                          /* '<S1>/movingAverageFilter' */
  real_T LRL;                          /* '<S1>/Chart' */
  uint16_T DataTypeConversion6;        /* '<Root>/Data Type Conversion6' */
} B_AdaptivePacing_1_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  freedomk64f_fxos8700_Adaptive_T obj; /* '<S1>/FXOS8700 6-Axes Sensor' */
  real_T average;                      /* '<S1>/Data Store Memory' */
  real_T RateChange;                   /* '<S1>/Chart' */
  uint32_T is_c3_AdaptivePacing_1;     /* '<S1>/Chart' */
  uint32_T temporalCounter_i1;         /* '<S1>/Chart' */
  uint8_T is_active_c3_AdaptivePacing_1;/* '<S1>/Chart' */
} DW_AdaptivePacing_1_T;

/* Parameters (default storage) */
struct P_AdaptivePacing_1_T_ {
  real_T FXOS87006AxesSensor_SampleTime;/* Expression: -1
                                         * Referenced by: '<S1>/FXOS8700 6-Axes Sensor'
                                         */
  real_T msecminute_Value;             /* Expression: 60/1000
                                        * Referenced by: '<S1>/msec//minute'
                                        */
  real_T Switch_Threshold;             /* Expression: 1
                                        * Referenced by: '<S1>/Switch'
                                        */
  real_T Constant_Value;               /* Expression: 1000/60
                                        * Referenced by: '<S1>/Constant'
                                        */
  real_T DataStoreMemory_InitialValue; /* Expression: 0
                                        * Referenced by: '<S1>/Data Store Memory'
                                        */
  uint16_T originalLRL1_Value;         /* Computed Parameter: originalLRL1_Value
                                        * Referenced by: '<Root>/original LRL1'
                                        */
  uint8_T MSR1_Value;                  /* Computed Parameter: MSR1_Value
                                        * Referenced by: '<Root>/MSR1'
                                        */
  uint8_T responsefactor1161_Value;
                                 /* Computed Parameter: responsefactor1161_Value
                                  * Referenced by: '<Root>/response factor (1-16)1'
                                  */
  uint8_T ReactionTimeins1_Value;  /* Computed Parameter: ReactionTimeins1_Value
                                    * Referenced by: '<Root>/Reaction Time (in s)1'
                                    */
  uint8_T RecoveryTimeins1_Value;  /* Computed Parameter: RecoveryTimeins1_Value
                                    * Referenced by: '<Root>/Recovery Time (in s)1'
                                    */
  uint8_T mode_adaptivity_Value;    /* Computed Parameter: mode_adaptivity_Value
                                     * Referenced by: '<Root>/mode_adaptivity '
                                     */
};

/* Real-time Model Data Structure */
struct tag_RTM_AdaptivePacing_1_T {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block parameters (default storage) */
extern P_AdaptivePacing_1_T AdaptivePacing_1_P;

/* Block signals (default storage) */
extern B_AdaptivePacing_1_T AdaptivePacing_1_B;

/* Block states (default storage) */
extern DW_AdaptivePacing_1_T AdaptivePacing_1_DW;

/* Model entry point functions */
extern void AdaptivePacing_1_initialize(void);
extern void AdaptivePacing_1_step(void);
extern void AdaptivePacing_1_terminate(void);

/* Real-time Model object */
extern RT_MODEL_AdaptivePacing_1_T *const AdaptivePacing_1_M;

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'AdaptivePacing_1'
 * '<S1>'   : 'AdaptivePacing_1/Adaptive Pacing'
 * '<S2>'   : 'AdaptivePacing_1/Adaptive Pacing/Chart'
 * '<S3>'   : 'AdaptivePacing_1/Adaptive Pacing/movingAverageFilter'
 */
#endif                                 /* RTW_HEADER_AdaptivePacing_1_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

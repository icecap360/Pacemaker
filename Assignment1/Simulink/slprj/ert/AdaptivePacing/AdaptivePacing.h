/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: AdaptivePacing.h
 *
 * Code generated for Simulink model 'AdaptivePacing'.
 *
 * Model version                  : 1.30
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Thu Dec  3 18:22:55 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_AdaptivePacing_h_
#define RTW_HEADER_AdaptivePacing_h_
#include <math.h>
#include <string.h>
#ifndef AdaptivePacing_COMMON_INCLUDES_
# define AdaptivePacing_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "MW_digitalIO.h"
#include "MW_I2C.h"
#endif                                 /* AdaptivePacing_COMMON_INCLUDES_ */

#include "AdaptivePacing_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Block signals for model 'AdaptivePacing' */
typedef struct {
  real_T LRL;                          /* '<Root>/Chart' */
  boolean_T LED_RED;                   /* '<Root>/Chart' */
  boolean_T LED_BLUE;                  /* '<Root>/Chart' */
} B_AdaptivePacing_c_T;

/* Block states (default storage) for model 'AdaptivePacing' */
typedef struct {
  freedomk64f_fxos8700_Adaptive_T obj; /* '<Root>/FXOS8700 6-Axes Sensor' */
  freedomk64f_DigitalWrite_Adap_T obj_d;/* '<Root>/Digital Write' */
  freedomk64f_DigitalWrite_Adap_T obj_c;/* '<Root>/Digital Write1' */
  real_T RateChange;                   /* '<Root>/Chart' */
  real_T Avg;                          /* '<Root>/Chart' */
  uint32_T temporalCounter_i1;         /* '<Root>/Chart' */
  uint8_T is_active_c1_AdaptivePacing; /* '<Root>/Chart' */
  uint8_T is_c1_AdaptivePacing;        /* '<Root>/Chart' */
  boolean_T objisempty;                /* '<Root>/FXOS8700 6-Axes Sensor' */
  boolean_T objisempty_e;              /* '<Root>/Digital Write' */
  boolean_T objisempty_b;              /* '<Root>/Digital Write1' */
} DW_AdaptivePacing_f_T;

/* Parameters (default storage) */
struct P_AdaptivePacing_T_ {
  real_T FXOS87006AxesSensor_SampleTime;/* Expression: -1
                                         * Referenced by: '<Root>/FXOS8700 6-Axes Sensor'
                                         */
  real_T Constant1_Value;              /* Expression: 60000
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: 60000
                                        * Referenced by: '<Root>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_AdaptivePacing_T {
  const char_T **errorStatus;
};

typedef struct {
  B_AdaptivePacing_c_T rtb;
  DW_AdaptivePacing_f_T rtdw;
  RT_MODEL_AdaptivePacing_T rtm;
} MdlrefDW_AdaptivePacing_T;

/* Model reference registration function */
extern void AdaptivePacing_initialize(const char_T **rt_errorStatus,
  RT_MODEL_AdaptivePacing_T *const AdaptivePacing_M);
extern void AdaptivePacing_Init(DW_AdaptivePacing_f_T *localDW);
extern void AdaptivePacing(const uint16_T *rtu_OLRL, const uint8_T
  *rtu_Maximum_Sensor_Rate, const uint8_T *rtu_Mode_Adaptivity, const uint8_T
  *rtu_Reaction_Time, const uint8_T *rtu_Recovery_Time, uint16_T
  *rty_Updated_Lower_Rate_Limit, B_AdaptivePacing_c_T *localB,
  DW_AdaptivePacing_f_T *localDW);
extern void AdaptivePacing_Term(DW_AdaptivePacing_f_T *localDW);

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
 * '<Root>' : 'AdaptivePacing'
 * '<S1>'   : 'AdaptivePacing/Chart'
 */
#endif                                 /* RTW_HEADER_AdaptivePacing_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

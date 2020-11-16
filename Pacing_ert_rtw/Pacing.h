/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Pacing.h
 *
 * Code generated for Simulink model 'Pacing'.
 *
 * Model version                  : 1.72
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Sun Oct 25 01:14:25 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Pacing_h_
#define RTW_HEADER_Pacing_h_
#include <math.h>
#include <stddef.h>
#ifndef Pacing_COMMON_INCLUDES_
# define Pacing_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "MW_PWM.h"
#include "MW_digitalIO.h"
#endif                                 /* Pacing_COMMON_INCLUDES_ */

#include "Pacing_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T PACING_REF_PWM_D5;            /* '<Root>/Chart' */
  boolean_T PACE_CHARGE_CTRL_D2;       /* '<Root>/Chart' */
  boolean_T PACE_GND_CTRL_D10;         /* '<Root>/Chart' */
  boolean_T ATR_PACE_CTRL_D8;          /* '<Root>/Chart' */
  boolean_T ATR_GND_CTRL_D11;          /* '<Root>/Chart' */
  boolean_T Z_ATR_CTRL_D4;             /* '<Root>/Chart' */
  boolean_T Z_VENT_CTRL_D7;            /* '<Root>/Chart' */
  boolean_T VENT_GND_CTRL_D12;         /* '<Root>/Chart' */
  boolean_T VENT_PACE_CTRL_D9;         /* '<Root>/Chart' */
  boolean_T LED_RED;                   /* '<Root>/Chart' */
} B_Pacing_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  freedomk64f_DigitalWrite_Paci_T obj; /* '<Root>/Digital Write24' */
  freedomk64f_DigitalWrite_Paci_T obj_l;/* '<Root>/Digital Write25' */
  freedomk64f_DigitalWrite_Paci_T obj_n;/* '<Root>/Digital Write26' */
  freedomk64f_DigitalWrite_Paci_T obj_f;/* '<Root>/Digital Write27' */
  freedomk64f_DigitalWrite_Paci_T obj_e;/* '<Root>/Digital Write28' */
  freedomk64f_DigitalWrite_Paci_T obj_ny;/* '<Root>/Digital Write29' */
  freedomk64f_DigitalWrite_Paci_T obj_g;/* '<Root>/Digital Write30' */
  freedomk64f_DigitalWrite_Paci_T obj_nh;/* '<Root>/Digital Write31' */
  freedomk64f_DigitalWrite_Paci_T obj_o;/* '<Root>/Digital Write32' */
  freedomk64f_PWMOutput_Pacing_T obj_d;/* '<Root>/PWM Output' */
  real_T Rate;                         /* '<Root>/Chart' */
  uint32_T temporalCounter_i1;         /* '<Root>/Chart' */
  uint8_T is_active_c3_Pacing;         /* '<Root>/Chart' */
  uint8_T is_c3_Pacing;                /* '<Root>/Chart' */
  boolean_T HIGH;                      /* '<Root>/Chart' */
  boolean_T LOW;                       /* '<Root>/Chart' */
} DW_Pacing_T;

/* Parameters (default storage) */
struct P_Pacing_T_ {
  real_T Constant28_Value;             /* Expression: 1
                                        * Referenced by: '<Root>/Constant28'
                                        */
  real_T Constant27_Value;             /* Expression: 10
                                        * Referenced by: '<Root>/Constant27'
                                        */
  real_T Constant24_Value;             /* Expression: 60
                                        * Referenced by: '<Root>/Constant24'
                                        */
  real_T Constant26_Value;             /* Expression: 120
                                        * Referenced by: '<Root>/Constant26'
                                        */
  real_T Constant25_Value;             /* Expression: 3.7
                                        * Referenced by: '<Root>/Constant25'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Pacing_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_Pacing_T Pacing_P;

/* Block signals (default storage) */
extern B_Pacing_T Pacing_B;

/* Block states (default storage) */
extern DW_Pacing_T Pacing_DW;

/* Model entry point functions */
extern void Pacing_initialize(void);
extern void Pacing_step(void);
extern void Pacing_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Pacing_T *const Pacing_M;

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
 * '<Root>' : 'Pacing'
 * '<S1>'   : 'Pacing/Chart'
 */
#endif                                 /* RTW_HEADER_Pacing_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PTHS.h
 *
 * Code generated for Simulink model 'PTHS'.
 *
 * Model version                  : 1.34
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Fri Dec  4 11:23:33 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PTHS_h_
#define RTW_HEADER_PTHS_h_
#include <math.h>
#ifndef PTHS_COMMON_INCLUDES_
# define PTHS_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "MW_PWM.h"
#include "MW_digitalIO.h"
#endif                                 /* PTHS_COMMON_INCLUDES_ */

#include "PTHS_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Block signals for model 'PTHS' */
typedef struct {
  real_T LRL;                          /* '<Root>/Chart' */
  uint8_T PACING_REF_PWM;              /* '<Root>/Chart1' */
  uint8_T ATR_CMP_REF_PWM;             /* '<Root>/Chart1' */
  uint8_T VENT_CMP_REF_PWM;            /* '<Root>/Chart1' */
  boolean_T PACE_CHARGE_CTRL;          /* '<Root>/Chart1' */
  boolean_T PACE_GND_CTRL;             /* '<Root>/Chart1' */
  boolean_T VENT_PACE_CTRL;            /* '<Root>/Chart1' */
  boolean_T ATR_PACE_CTRL;             /* '<Root>/Chart1' */
  boolean_T ATR_GND_CTRL;              /* '<Root>/Chart1' */
  boolean_T Z_ATR_CTRL;                /* '<Root>/Chart1' */
  boolean_T Z_VENT_CTRL;               /* '<Root>/Chart1' */
  boolean_T VENT_GND_CTRL;             /* '<Root>/Chart1' */
  boolean_T FRONT_END_CTRL;            /* '<Root>/Chart1' */
} B_PTHS_c_T;

/* Block states (default storage) for model 'PTHS' */
typedef struct {
  freedomk64f_DigitalRead_PTHS_T obj;  /* '<S3>/Digital Read' */
  freedomk64f_DigitalRead_PTHS_T obj_k;/* '<S3>/Digital Read1' */
  freedomk64f_DigitalWrite_PTHS_T obj_h;/* '<S3>/Digital Write2' */
  freedomk64f_DigitalWrite_PTHS_T obj_b;/* '<S3>/Digital Write3' */
  freedomk64f_DigitalWrite_PTHS_T obj_a;/* '<S3>/Digital Write8' */
  freedomk64f_DigitalWrite_PTHS_T obj_m;/* '<S3>/Digital Write4' */
  freedomk64f_DigitalWrite_PTHS_T obj_e;/* '<S3>/Digital Write5' */
  freedomk64f_DigitalWrite_PTHS_T obj_d;/* '<S3>/Digital Write6' */
  freedomk64f_DigitalWrite_PTHS_T obj_bs;/* '<S3>/Digital Write7' */
  freedomk64f_DigitalWrite_PTHS_T obj_aq;/* '<S3>/Digital Write9' */
  freedomk64f_DigitalWrite_PTHS_T obj_p;/* '<S3>/Digital Write1' */
  freedomk64f_PWMOutput_PTHS_T obj_j;  /* '<S3>/PWM Output1' */
  freedomk64f_PWMOutput_PTHS_T obj_bg; /* '<S3>/PWM Output2' */
  freedomk64f_PWMOutput_PTHS_T obj_ds; /* '<S3>/PWM Output3' */
  real_T RateChange;                   /* '<Root>/Chart' */
  uint32_T temporalCounter_i1;         /* '<Root>/Chart1' */
  uint32_T temporalCounter_i1_i;       /* '<Root>/Chart' */
  uint16_T Pace_Interval;              /* '<Root>/Chart1' */
  uint16_T Atrial_Escape_Interval;     /* '<Root>/Chart1' */
  uint8_T is_active_c2_PTHS;           /* '<Root>/Chart1' */
  uint8_T is_c2_PTHS;                  /* '<Root>/Chart1' */
  uint8_T is_DUAL_MODES;               /* '<Root>/Chart1' */
  uint8_T is_NON_DUAL_MODES;           /* '<Root>/Chart1' */
  uint8_T is_active_c1_PTHS;           /* '<Root>/Chart' */
  uint8_T is_c1_PTHS;                  /* '<Root>/Chart' */
  boolean_T objisempty;                /* '<S3>/Digital Read' */
  boolean_T objisempty_d;              /* '<S3>/Digital Read1' */
  boolean_T objisempty_i;              /* '<S3>/Digital Write2' */
  boolean_T objisempty_o;              /* '<S3>/Digital Write3' */
  boolean_T objisempty_j;              /* '<S3>/PWM Output1' */
  boolean_T objisempty_n;              /* '<S3>/Digital Write8' */
  boolean_T objisempty_b;              /* '<S3>/Digital Write4' */
  boolean_T objisempty_g;              /* '<S3>/Digital Write5' */
  boolean_T objisempty_a;              /* '<S3>/Digital Write6' */
  boolean_T objisempty_l;              /* '<S3>/Digital Write7' */
  boolean_T objisempty_dn;             /* '<S3>/Digital Write9' */
  boolean_T objisempty_be;             /* '<S3>/Digital Write1' */
  boolean_T objisempty_e;              /* '<S3>/PWM Output2' */
  boolean_T objisempty_f;              /* '<S3>/PWM Output3' */
  boolean_T HIGH;                      /* '<Root>/Chart1' */
  boolean_T LOW;                       /* '<Root>/Chart1' */
} DW_PTHS_f_T;

/* Parameters (default storage) */
struct P_PTHS_T_ {
  real_T DigitalRead1_SampleTime;      /* Expression: SampleTime
                                        * Referenced by: '<S3>/Digital Read1'
                                        */
  real_T DigitalRead_SampleTime;       /* Expression: SampleTime
                                        * Referenced by: '<S3>/Digital Read'
                                        */
  real_T Constant1_Value;              /* Expression: 60000
                                        * Referenced by: '<Root>/Constant1'
                                        */
  real_T Constant_Value;               /* Expression: 60000
                                        * Referenced by: '<Root>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_PTHS_T {
  const char_T **errorStatus;
};

typedef struct {
  B_PTHS_c_T rtb;
  DW_PTHS_f_T rtdw;
  RT_MODEL_PTHS_T rtm;
} MdlrefDW_PTHS_T;

/* Model reference registration function */
extern void PTHS_initialize(const char_T **rt_errorStatus, RT_MODEL_PTHS_T *
  const PTHS_M);
extern void PTHS_Init(DW_PTHS_f_T *localDW);
extern void PTHS(const uint8_T *rtu_Mode_Chamber_Paced, const uint8_T
                 *rtu_Mode_Chamber_Sensed, const uint8_T *rtu_Mode_Response,
                 const uint8_T *rtu_VentricularAmplitude, const uint16_T
                 *rtu_Ventricular_Pulse_Width, const uint8_T
                 *rtu_Ventricular_Sensiitivity, const uint8_T
                 *rtu_Atrial_Amplitude, const uint16_T *rtu_Atrial_Pulse_Width,
                 const uint8_T *rtu_Atrial_Sensitivity, const uint8_T
                 *rtu_Hysterisis, const uint16_T *rtu_Lower_Rate_Limit, const
                 uint16_T *rtu_AV_Delay, const uint16_T *rtu_VRP, const uint16_T
                 *rtu_ARP, const uint16_T *rtu_Hysterisis_Escape_Interval, const
                 uint8_T *rtu_Maximum_Sensor_Rate, const uint8_T
                 *rtu_Mode_Adaptivity, const uint8_T *rtu_Reaction_Time, const
                 uint8_T *rtu_Response_Factor, const uint8_T *rtu_Recovery_Time,
                 const real_T *rtu_Smoother_Acceleration, boolean_T *rty_Trigger,
                 B_PTHS_c_T *localB, DW_PTHS_f_T *localDW);
extern void PTHS_Term(DW_PTHS_f_T *localDW);

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
 * '<Root>' : 'PTHS'
 * '<S1>'   : 'PTHS/Chart'
 * '<S2>'   : 'PTHS/Chart1'
 * '<S3>'   : 'PTHS/Subsystem'
 */
#endif                                 /* RTW_HEADER_PTHS_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

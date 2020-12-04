/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PTHS.h
 *
 * Code generated for Simulink model 'PTHS'.
 *
 * Model version                  : 1.12
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Thu Dec  3 22:58:35 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_PTHS_h_
#define RTW_HEADER_PTHS_h_
#include <math.h>
#include <stddef.h>
#ifndef PTHS_COMMON_INCLUDES_
# define PTHS_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "MW_digitalIO.h"
#include "MW_PWM.h"
#endif                                 /* PTHS_COMMON_INCLUDES_ */

#include "PTHS_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
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
  boolean_T LED_RED;                   /* '<Root>/Chart' */
} B_PTHS_T;

/* Block states (default storage) for system '<Root>' */
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
  freedomk64f_DigitalWrite_PTHS_T obj_i;/* '<Root>/Digital Write' */
  freedomk64f_DigitalWrite_PTHS_T obj_ez;/* '<Root>/Digital Write1' */
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
  boolean_T HIGH;                      /* '<Root>/Chart1' */
  boolean_T LOW;                       /* '<Root>/Chart1' */
} DW_PTHS_T;

/* External inputs (root inport signals with default storage) */
typedef struct {
  uint8_T Mode_Chamber_Paced;          /* '<Root>/Mode_Chamber_Paced' */
  uint8_T Mode_Chamber_Sensed;         /* '<Root>/Mode_Chamber_Sensed' */
  uint8_T Mode_Response;               /* '<Root>/Mode_Response' */
  uint8_T VentricularAmplitude;        /* '<Root>/Ventricular Amplitude' */
  uint16_T Ventricular_Pulse_Width;    /* '<Root>/Ventricular_Pulse_Width' */
  uint8_T Ventricular_Sensiitivity;    /* '<Root>/Ventricular_Sensiitivity' */
  uint8_T Atrial_Amplitude;            /* '<Root>/Atrial_Amplitude' */
  uint16_T Atrial_Pulse_Width;         /* '<Root>/Atrial_Pulse_Width' */
  uint8_T Atrial_Sensitivity;          /* '<Root>/Atrial_Sensitivity' */
  uint8_T Hysterisis;                  /* '<Root>/Hysterisis' */
  uint16_T Lower_Rate_Limit;           /* '<Root>/Lower_Rate_Limit' */
  uint16_T AV_Delay;                   /* '<Root>/AV_Delay' */
  uint16_T VRP;                        /* '<Root>/VRP' */
  uint16_T ARP;                        /* '<Root>/ARP' */
  uint16_T Hysterisis_Escape_Interval; /* '<Root>/Hysterisis_Escape_Interval' */
  uint8_T Maximum_Sensor_Rate;         /* '<Root>/Maximum_Sensor_Rate' */
  uint8_T Mode_Adaptivity;             /* '<Root>/Mode_Adaptivity' */
  uint8_T Reaction_Time;               /* '<Root>/Reaction_Time' */
  uint8_T Response_Factor;             /* '<Root>/Response_Factor' */
  uint8_T Recovery_Time;               /* '<Root>/Recovery_Time' */
  real_T Smoother_Acceleration;        /* '<Root>/Smoother_Acceleration' */
} ExtU_PTHS_T;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  boolean_T Trigger;                   /* '<Root>/Trigger' */
} ExtY_PTHS_T;

/* Parameters (default storage) */
struct P_PTHS_T_ {
  real_T DigitalRead1_SampleTime;      /* Expression: SampleTime
                                        * Referenced by: '<S3>/Digital Read1'
                                        */
  real_T DigitalRead_SampleTime;       /* Expression: SampleTime
                                        * Referenced by: '<S3>/Digital Read'
                                        */
  real_T Constant_Value;               /* Expression: 60000
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Constant1_Value;              /* Expression: 60000
                                        * Referenced by: '<Root>/Constant1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_PTHS_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_PTHS_T PTHS_P;

/* Block signals (default storage) */
extern B_PTHS_T PTHS_B;

/* Block states (default storage) */
extern DW_PTHS_T PTHS_DW;

/* External inputs (root inport signals with default storage) */
extern ExtU_PTHS_T PTHS_U;

/* External outputs (root outports fed by signals with default storage) */
extern ExtY_PTHS_T PTHS_Y;

/* Model entry point functions */
extern void PTHS_initialize(void);
extern void PTHS_step(void);
extern void PTHS_terminate(void);

/* Real-time Model object */
extern RT_MODEL_PTHS_T *const PTHS_M;

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

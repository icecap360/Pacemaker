/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: VOO.h
 *
 * Code generated for Simulink model 'VOO'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Sat Oct 24 21:53:11 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_VOO_h_
#define RTW_HEADER_VOO_h_
#include <math.h>
#include <stddef.h>
#ifndef VOO_COMMON_INCLUDES_
# define VOO_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "MW_digitalIO.h"
#endif                                 /* VOO_COMMON_INCLUDES_ */

#include "VOO_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block signals (default storage) */
typedef struct {
  real_T PACING_REF_PWM_D5;            /* '<Root>/VOO' */
} B_VOO_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  freedomk64f_DigitalWrite_VOO_T obj;  /* '<Root>/Digital Write' */
  freedomk64f_DigitalWrite_VOO_T obj_j;/* '<Root>/Digital Write1' */
  freedomk64f_DigitalWrite_VOO_T obj_b;/* '<Root>/Digital Write2' */
  freedomk64f_DigitalWrite_VOO_T obj_l;/* '<Root>/Digital Write3' */
  freedomk64f_DigitalWrite_VOO_T obj_i;/* '<Root>/Digital Write4' */
  freedomk64f_DigitalWrite_VOO_T obj_ix;/* '<Root>/Digital Write5' */
  freedomk64f_DigitalWrite_VOO_T obj_n;/* '<Root>/Digital Write6' */
  freedomk64f_DigitalWrite_VOO_T obj_jb;/* '<Root>/Digital Write7' */
  uint32_T temporalCounter_i1;         /* '<Root>/VOO' */
  uint8_T is_active_c1_VOO;            /* '<Root>/VOO' */
  uint8_T is_c1_VOO;                   /* '<Root>/VOO' */
} DW_VOO_T;

/* Parameters (default storage) */
struct P_VOO_T_ {
  real_T PWM_Value;                    /* Expression: 1
                                        * Referenced by: '<Root>/PWM'
                                        */
  real_T msecs_Value;                  /* Expression: 60000
                                        * Referenced by: '<Root>/msecs'
                                        */
  real_T BPM_Value;                    /* Expression: 60
                                        * Referenced by: '<Root>/BPM'
                                        */
  real_T Pulse_Width_Value;            /* Expression: 20
                                        * Referenced by: '<Root>/Pulse_Width'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_VOO_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_VOO_T VOO_P;

/* Block signals (default storage) */
extern B_VOO_T VOO_B;

/* Block states (default storage) */
extern DW_VOO_T VOO_DW;

/* Model entry point functions */
extern void VOO_initialize(void);
extern void VOO_step(void);
extern void VOO_terminate(void);

/* Real-time Model object */
extern RT_MODEL_VOO_T *const VOO_M;

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
 * '<Root>' : 'VOO'
 * '<S1>'   : 'VOO/VOO'
 */
#endif                                 /* RTW_HEADER_VOO_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Mode_Adaptivity.h
 *
 * Code generated for Simulink model 'Mode_Adaptivity'.
 *
 * Model version                  : 1.7
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Thu Dec  3 19:30:57 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Mode_Adaptivity_h_
#define RTW_HEADER_Mode_Adaptivity_h_
#include <string.h>
#ifndef Mode_Adaptivity_COMMON_INCLUDES_
# define Mode_Adaptivity_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "MW_I2C.h"
#endif                                 /* Mode_Adaptivity_COMMON_INCLUDES_ */

#include "Mode_Adaptivity_types.h"

/* Block states (default storage) for model 'Mode_Adaptivity' */
typedef struct {
  freedomk64f_fxos8700_Mode_Ada_T obj; /* '<Root>/FXOS8700 6-Axes Sensor' */
  real_T Smoothed_Average;             /* '<Root>/Data Store Memory' */
  boolean_T objisempty;                /* '<Root>/FXOS8700 6-Axes Sensor' */
} DW_Mode_Adaptivity_f_T;

/* Parameters (default storage) */
struct P_Mode_Adaptivity_T_ {
  real_T FXOS87006AxesSensor_SampleTime;/* Expression: -1
                                         * Referenced by: '<Root>/FXOS8700 6-Axes Sensor'
                                         */
  real_T DataStoreMemory_InitialValue; /* Expression: 0
                                        * Referenced by: '<Root>/Data Store Memory'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Mode_Adaptivity_T {
  const char_T **errorStatus;
};

typedef struct {
  DW_Mode_Adaptivity_f_T rtdw;
  RT_MODEL_Mode_Adaptivity_T rtm;
} MdlrefDW_Mode_Adaptivity_T;

/* Model reference registration function */
extern void Mode_Adaptivity_initialize(const char_T **rt_errorStatus,
  RT_MODEL_Mode_Adaptivity_T *const Mode_Adaptivity_M);
extern void Mode_Adaptivity_Init(DW_Mode_Adaptivity_f_T *localDW);
extern void Mode_Adaptivity(const uint16_T *rtu_Initial_LRL, uint16_T
  *rty_Updated_LRL, DW_Mode_Adaptivity_f_T *localDW);
extern void Mode_Adaptivity_Term(DW_Mode_Adaptivity_f_T *localDW);

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
 * '<Root>' : 'Mode_Adaptivity'
 */
#endif                                 /* RTW_HEADER_Mode_Adaptivity_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

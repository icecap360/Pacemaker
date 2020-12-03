/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: AdaptivePacing_3_data.c
 *
 * Code generated for Simulink model 'AdaptivePacing_3'.
 *
 * Model version                  : 1.20
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Thu Dec  3 14:14:09 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "AdaptivePacing_3.h"
#include "AdaptivePacing_3_private.h"

/* Block parameters (default storage) */
P_AdaptivePacing_3_T AdaptivePacing_3_P = {
  /* Expression: -1
   * Referenced by: '<S1>/FXOS8700 6-Axes Sensor'
   */
  -1.0,

  /* Expression: 60000
   * Referenced by: '<S1>/Constant1'
   */
  60000.0,

  /* Expression: 60000
   * Referenced by: '<S1>/Constant'
   */
  60000.0,

  /* Computed Parameter: originalLRL1_Value
   * Referenced by: '<Root>/original LRL1'
   */
  1000U,

  /* Computed Parameter: MSR1_Value
   * Referenced by: '<Root>/MSR1'
   */
  120U,

  /* Computed Parameter: responsefactor1161_Value
   * Referenced by: '<Root>/response factor (1-16)1'
   */
  8U,

  /* Computed Parameter: ReactionTimeins1_Value
   * Referenced by: '<Root>/Reaction Time (in s)1'
   */
  10U,

  /* Computed Parameter: RecoveryTimeins1_Value
   * Referenced by: '<Root>/Recovery Time (in s)1'
   */
  30U,

  /* Computed Parameter: mode_adaptivity_Value
   * Referenced by: '<Root>/mode_adaptivity '
   */
  1U
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: AdaptivePacing_2_data.c
 *
 * Code generated for Simulink model 'AdaptivePacing_2'.
 *
 * Model version                  : 1.13
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Thu Dec  3 10:56:55 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "AdaptivePacing_2.h"
#include "AdaptivePacing_2_private.h"

/* Block parameters (default storage) */
P_AdaptivePacing_2_T AdaptivePacing_2_P = {
  /* Expression: -1
   * Referenced by: '<S1>/FXOS8700 6-Axes Sensor'
   */
  -1.0,

  /* Expression: 1.05
   * Referenced by: '<S1>/activity threshold (~1.05)'
   */
  1.05,

  /* Expression: 60/1000
   * Referenced by: '<S1>/msec//minute'
   */
  0.06,

  /* Expression: 1
   * Referenced by: '<S1>/Switch'
   */
  1.0,

  /* Expression: 1000/60
   * Referenced by: '<S1>/Constant'
   */
  16.666666666666668,

  /* Expression: 0
   * Referenced by: '<S1>/Data Store Memory'
   */
  0.0,

  /* Computed Parameter: originalLRL1_Value
   * Referenced by: '<Root>/original LRL1'
   */
  1000U,

  /* Computed Parameter: Constant1_Value
   * Referenced by: '<S1>/Constant1'
   */
  0U,

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
  0U
};

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

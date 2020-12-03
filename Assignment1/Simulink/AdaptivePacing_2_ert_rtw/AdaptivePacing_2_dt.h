/*
 * AdaptivePacing_2_dt.h
 *
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Code generation for model "AdaptivePacing_2".
 *
 * Model version              : 1.13
 * Simulink Coder version : 9.3 (R2020a) 18-Nov-2019
 * C source code generated on : Thu Dec  3 10:56:55 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "ext_types.h"

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(freedomk64f_fxos8700_Adaptive_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "freedomk64f_fxos8700_Adaptive_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&AdaptivePacing_2_B.activitythreshold105), 0, 0, 10 },

  { (char_T *)(&AdaptivePacing_2_B.DataTypeConversion6), 5, 0, 1 }
  ,

  { (char_T *)(&AdaptivePacing_2_DW.obj), 14, 0, 1 },

  { (char_T *)(&AdaptivePacing_2_DW.average), 0, 0, 2 },

  { (char_T *)(&AdaptivePacing_2_DW.is_c3_AdaptivePacing_2), 7, 0, 2 },

  { (char_T *)(&AdaptivePacing_2_DW.is_active_c3_AdaptivePacing_2), 3, 0, 1 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  6U,
  rtBTransitions
};

/* data type transitions for Parameters structure */
static DataTypeTransition rtPTransitions[] = {
  { (char_T *)(&AdaptivePacing_2_P.FXOS87006AxesSensor_SampleTime), 0, 0, 6 },

  { (char_T *)(&AdaptivePacing_2_P.originalLRL1_Value), 5, 0, 1 },

  { (char_T *)(&AdaptivePacing_2_P.Constant1_Value), 3, 0, 6 }
};

/* data type transition table for Parameters structure */
static DataTypeTransitionTable rtPTransTable = {
  3U,
  rtPTransitions
};

/* [EOF] AdaptivePacing_2_dt.h */

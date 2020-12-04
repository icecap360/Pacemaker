/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Serial_Read_types.h
 *
 * Code generated for Simulink model 'Serial_Read'.
 *
 * Model version                  : 1.2
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Thu Dec  3 18:11:16 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Serial_Read_types_h_
#define RTW_HEADER_Serial_Read_types_h_
#include "rtwtypes.h"

/* Model Code Variants */

/* Custom Type definition for MATLABSystem: '<Root>/ATR_SIGNAL' */
#include "MW_SVD.h"
#ifndef struct_tag_bvK2L41g8z1P0jzpdjsJhE
#define struct_tag_bvK2L41g8z1P0jzpdjsJhE

struct tag_bvK2L41g8z1P0jzpdjsJhE
{
  int32_T __dummy;
};

#endif                                 /*struct_tag_bvK2L41g8z1P0jzpdjsJhE*/

#ifndef typedef_b_freedomk64f_Hardware_Serial_T
#define typedef_b_freedomk64f_Hardware_Serial_T

typedef struct tag_bvK2L41g8z1P0jzpdjsJhE b_freedomk64f_Hardware_Serial_T;

#endif                               /*typedef_b_freedomk64f_Hardware_Serial_T*/

#ifndef struct_tag_WltE1qT51p3S2KRQQd2Zd
#define struct_tag_WltE1qT51p3S2KRQQd2Zd

struct tag_WltE1qT51p3S2KRQQd2Zd
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  b_freedomk64f_Hardware_Serial_T Hw;
  MW_Handle_Type MW_SCIHANDLE;
};

#endif                                 /*struct_tag_WltE1qT51p3S2KRQQd2Zd*/

#ifndef typedef_freedomk64f_SCIWrite_Serial_R_T
#define typedef_freedomk64f_SCIWrite_Serial_R_T

typedef struct tag_WltE1qT51p3S2KRQQd2Zd freedomk64f_SCIWrite_Serial_R_T;

#endif                               /*typedef_freedomk64f_SCIWrite_Serial_R_T*/

#ifndef struct_tag_Wwo3lHKnvPcvz2YX38S3zB
#define struct_tag_Wwo3lHKnvPcvz2YX38S3zB

struct tag_Wwo3lHKnvPcvz2YX38S3zB
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  b_freedomk64f_Hardware_Serial_T Hw;
  MW_Handle_Type MW_ANALOGIN_HANDLE;
  real_T SampleTime;
};

#endif                                 /*struct_tag_Wwo3lHKnvPcvz2YX38S3zB*/

#ifndef typedef_freedomk64f_AnalogInput_Seria_T
#define typedef_freedomk64f_AnalogInput_Seria_T

typedef struct tag_Wwo3lHKnvPcvz2YX38S3zB freedomk64f_AnalogInput_Seria_T;

#endif                               /*typedef_freedomk64f_AnalogInput_Seria_T*/

/* Parameters (default storage) */
typedef struct P_Serial_Read_T_ P_Serial_Read_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_Serial_Read_T RT_MODEL_Serial_Read_T;

#endif                                 /* RTW_HEADER_Serial_Read_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

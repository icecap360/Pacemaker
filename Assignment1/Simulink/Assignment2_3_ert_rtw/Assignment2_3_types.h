/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Assignment2_3_types.h
 *
 * Code generated for Simulink model 'Assignment2_3'.
 *
 * Model version                  : 1.498
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Thu Dec  3 18:12:06 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Assignment2_3_types_h_
#define RTW_HEADER_Assignment2_3_types_h_
#include "rtwtypes.h"
#include "zero_crossing_types.h"

/* Model Code Variants */

/* Custom Type definition for MATLABSystem: '<Root>/Serial Receive' */
#include "MW_SVD.h"
#ifndef struct_tag_bvK2L41g8z1P0jzpdjsJhE
#define struct_tag_bvK2L41g8z1P0jzpdjsJhE

struct tag_bvK2L41g8z1P0jzpdjsJhE
{
  int32_T __dummy;
};

#endif                                 /*struct_tag_bvK2L41g8z1P0jzpdjsJhE*/

#ifndef typedef_b_freedomk64f_Hardware_Assign_T
#define typedef_b_freedomk64f_Hardware_Assign_T

typedef struct tag_bvK2L41g8z1P0jzpdjsJhE b_freedomk64f_Hardware_Assign_T;

#endif                               /*typedef_b_freedomk64f_Hardware_Assign_T*/

#ifndef struct_tag_62aCTDKRGQaAsT8vVipI2D
#define struct_tag_62aCTDKRGQaAsT8vVipI2D

struct tag_62aCTDKRGQaAsT8vVipI2D
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  b_freedomk64f_Hardware_Assign_T Hw;
  MW_Handle_Type MW_DIGITALIO_HANDLE;
};

#endif                                 /*struct_tag_62aCTDKRGQaAsT8vVipI2D*/

#ifndef typedef_freedomk64f_DigitalWrite_Assi_T
#define typedef_freedomk64f_DigitalWrite_Assi_T

typedef struct tag_62aCTDKRGQaAsT8vVipI2D freedomk64f_DigitalWrite_Assi_T;

#endif                               /*typedef_freedomk64f_DigitalWrite_Assi_T*/

#ifndef struct_tag_79weVYaslRFZRGk3pNTXC
#define struct_tag_79weVYaslRFZRGk3pNTXC

struct tag_79weVYaslRFZRGk3pNTXC
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  b_freedomk64f_Hardware_Assign_T Hw;
  MW_Handle_Type MW_SCIHANDLE;
  real_T SampleTime;
};

#endif                                 /*struct_tag_79weVYaslRFZRGk3pNTXC*/

#ifndef typedef_freedomk64f_SCIRead_Assignmen_T
#define typedef_freedomk64f_SCIRead_Assignmen_T

typedef struct tag_79weVYaslRFZRGk3pNTXC freedomk64f_SCIRead_Assignmen_T;

#endif                               /*typedef_freedomk64f_SCIRead_Assignmen_T*/

/* Parameters (default storage) */
typedef struct P_Assignment2_3_T_ P_Assignment2_3_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_Assignment2_3_T RT_MODEL_Assignment2_3_T;

#endif                                 /* RTW_HEADER_Assignment2_3_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

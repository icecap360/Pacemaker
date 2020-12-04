/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Mode_Adaptivity_types.h
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

#ifndef RTW_HEADER_Mode_Adaptivity_types_h_
#define RTW_HEADER_Mode_Adaptivity_types_h_
#include "rtwtypes.h"

/* Model Code Variants */

/* Custom Type definition for MATLABSystem: '<Root>/FXOS8700 6-Axes Sensor' */
#include "MW_SVD.h"
#include "MW_I2C.h"
#ifndef struct_tag_bvK2L41g8z1P0jzpdjsJhE
#define struct_tag_bvK2L41g8z1P0jzpdjsJhE

struct tag_bvK2L41g8z1P0jzpdjsJhE
{
  int32_T __dummy;
};

#endif                                 /*struct_tag_bvK2L41g8z1P0jzpdjsJhE*/

#ifndef typedef_b_freedomk64f_Hardware_Mode_A_T
#define typedef_b_freedomk64f_Hardware_Mode_A_T

typedef struct tag_bvK2L41g8z1P0jzpdjsJhE b_freedomk64f_Hardware_Mode_A_T;

#endif                               /*typedef_b_freedomk64f_Hardware_Mode_A_T*/

#ifndef struct_tag_dJFZzmsGU3XebjMxPxDlh
#define struct_tag_dJFZzmsGU3XebjMxPxDlh

struct tag_dJFZzmsGU3XebjMxPxDlh
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  b_freedomk64f_Hardware_Mode_A_T Hw;
  uint32_T BusSpeed;
  MW_Handle_Type MW_I2C_HANDLE;
};

#endif                                 /*struct_tag_dJFZzmsGU3XebjMxPxDlh*/

#ifndef typedef_b_freedomk64f_I2CMasterWrite__T
#define typedef_b_freedomk64f_I2CMasterWrite__T

typedef struct tag_dJFZzmsGU3XebjMxPxDlh b_freedomk64f_I2CMasterWrite__T;

#endif                               /*typedef_b_freedomk64f_I2CMasterWrite__T*/

#ifndef struct_tag_IfyqWdTTOITb2iei5A9qmC
#define struct_tag_IfyqWdTTOITb2iei5A9qmC

struct tag_IfyqWdTTOITb2iei5A9qmC
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T SampleTime;
  b_freedomk64f_I2CMasterWrite__T i2cobj;
};

#endif                                 /*struct_tag_IfyqWdTTOITb2iei5A9qmC*/

#ifndef typedef_freedomk64f_fxos8700_Mode_Ada_T
#define typedef_freedomk64f_fxos8700_Mode_Ada_T

typedef struct tag_IfyqWdTTOITb2iei5A9qmC freedomk64f_fxos8700_Mode_Ada_T;

#endif                               /*typedef_freedomk64f_fxos8700_Mode_Ada_T*/

/* Parameters (default storage) */
typedef struct P_Mode_Adaptivity_T_ P_Mode_Adaptivity_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_Mode_Adaptivity_T RT_MODEL_Mode_Adaptivity_T;

#endif                                 /* RTW_HEADER_Mode_Adaptivity_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

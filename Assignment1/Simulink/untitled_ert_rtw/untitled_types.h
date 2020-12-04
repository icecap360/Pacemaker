/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: untitled_types.h
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Thu Dec  3 23:33:16 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_untitled_types_h_
#define RTW_HEADER_untitled_types_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Model Code Variants */
#ifndef struct_tag_Y40BP8BIXnZieg7euAkxQE
#define struct_tag_Y40BP8BIXnZieg7euAkxQE

struct tag_Y40BP8BIXnZieg7euAkxQE
{
  int32_T isInitialized;
  boolean_T isSetupComplete;
  real_T pReverseSamples[5];
  real_T pReverseT[5];
  real_T pReverseS[5];
  real_T pT;
  real_T pS;
  real_T pM;
  real_T pCounter;
};

#endif                                 /*struct_tag_Y40BP8BIXnZieg7euAkxQE*/

#ifndef typedef_g_dsp_private_SlidingWindowVa_T
#define typedef_g_dsp_private_SlidingWindowVa_T

typedef struct tag_Y40BP8BIXnZieg7euAkxQE g_dsp_private_SlidingWindowVa_T;

#endif                               /*typedef_g_dsp_private_SlidingWindowVa_T*/

/* Custom Type definition for MATLABSystem: '<Root>/FXOS8700 6-Axes Sensor1' */
#include "MW_SVD.h"
#include "MW_I2C.h"
#ifndef struct_tag_bvK2L41g8z1P0jzpdjsJhE
#define struct_tag_bvK2L41g8z1P0jzpdjsJhE

struct tag_bvK2L41g8z1P0jzpdjsJhE
{
  int32_T __dummy;
};

#endif                                 /*struct_tag_bvK2L41g8z1P0jzpdjsJhE*/

#ifndef typedef_b_freedomk64f_Hardware_untitl_T
#define typedef_b_freedomk64f_Hardware_untitl_T

typedef struct tag_bvK2L41g8z1P0jzpdjsJhE b_freedomk64f_Hardware_untitl_T;

#endif                               /*typedef_b_freedomk64f_Hardware_untitl_T*/

#ifndef struct_tag_dJFZzmsGU3XebjMxPxDlh
#define struct_tag_dJFZzmsGU3XebjMxPxDlh

struct tag_dJFZzmsGU3XebjMxPxDlh
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  b_freedomk64f_Hardware_untitl_T Hw;
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

#ifndef typedef_freedomk64f_fxos8700_untitled_T
#define typedef_freedomk64f_fxos8700_untitled_T

typedef struct tag_IfyqWdTTOITb2iei5A9qmC freedomk64f_fxos8700_untitled_T;

#endif                               /*typedef_freedomk64f_fxos8700_untitled_T*/

#ifndef struct_tag_PMfBDzoakfdM9QAdfx2o6D
#define struct_tag_PMfBDzoakfdM9QAdfx2o6D

struct tag_PMfBDzoakfdM9QAdfx2o6D
{
  uint32_T f1[8];
};

#endif                                 /*struct_tag_PMfBDzoakfdM9QAdfx2o6D*/

#ifndef typedef_cell_wrap_untitled_T
#define typedef_cell_wrap_untitled_T

typedef struct tag_PMfBDzoakfdM9QAdfx2o6D cell_wrap_untitled_T;

#endif                                 /*typedef_cell_wrap_untitled_T*/

#ifndef struct_tag_PDYVwBPgJRPLL1l56suwoH
#define struct_tag_PDYVwBPgJRPLL1l56suwoH

struct tag_PDYVwBPgJRPLL1l56suwoH
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  boolean_T TunablePropsChanged;
  cell_wrap_untitled_T inputVarSize;
  g_dsp_private_SlidingWindowVa_T *pStatistic;
  int32_T NumChannels;
};

#endif                                 /*struct_tag_PDYVwBPgJRPLL1l56suwoH*/

#ifndef typedef_dsp_simulink_MovingStandardDe_T
#define typedef_dsp_simulink_MovingStandardDe_T

typedef struct tag_PDYVwBPgJRPLL1l56suwoH dsp_simulink_MovingStandardDe_T;

#endif                               /*typedef_dsp_simulink_MovingStandardDe_T*/

/* Parameters (default storage) */
typedef struct P_untitled_T_ P_untitled_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_untitled_T RT_MODEL_untitled_T;

#endif                                 /* RTW_HEADER_untitled_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

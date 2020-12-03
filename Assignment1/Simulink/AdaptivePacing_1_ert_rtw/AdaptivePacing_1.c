/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: AdaptivePacing_1.c
 *
 * Code generated for Simulink model 'AdaptivePacing_1'.
 *
 * Model version                  : 1.14
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Thu Dec  3 10:53:37 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "AdaptivePacing_1.h"
#include "AdaptivePacing_1_private.h"
#include "AdaptivePacing_1_dt.h"

/* Named constants for Chart: '<S1>/Chart' */
#define AdaptivePacing_1_IN_Decreasing (1U)
#define AdaptivePacing_1_IN_Increasing (2U)
#define AdaptivePacing_1_IN_main       (3U)
#define AdaptivePacing_1_IN_start      (4U)

/* Block signals (default storage) */
B_AdaptivePacing_1_T AdaptivePacing_1_B;

/* Block states (default storage) */
DW_AdaptivePacing_1_T AdaptivePacing_1_DW;

/* Real-time model */
RT_MODEL_AdaptivePacing_1_T AdaptivePacing_1_M_;
RT_MODEL_AdaptivePacing_1_T *const AdaptivePacing_1_M = &AdaptivePacing_1_M_;

/* Forward declaration for local functions */
static void AdaptivePaci_SystemCore_release(const
  freedomk64f_fxos8700_Adaptive_T *obj);
static void AdaptivePacin_SystemCore_delete(const
  freedomk64f_fxos8700_Adaptive_T *obj);
static void matlabCodegenHandle_matlabCodeg(freedomk64f_fxos8700_Adaptive_T *obj);
static void AdaptivePa_SystemCore_release_a(b_freedomk64f_I2CMasterWrite__T *obj);
static void AdaptivePac_SystemCore_delete_a(b_freedomk64f_I2CMasterWrite__T *obj);
static void matlabCodegenHandle_matlabCod_a(b_freedomk64f_I2CMasterWrite__T *obj);
static void AdaptivePacing_SystemCore_setup(freedomk64f_fxos8700_Adaptive_T *obj);
static void AdaptivePaci_SystemCore_release(const
  freedomk64f_fxos8700_Adaptive_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_I2C_Close(obj->i2cobj.MW_I2C_HANDLE);
  }
}

static void AdaptivePacin_SystemCore_delete(const
  freedomk64f_fxos8700_Adaptive_T *obj)
{
  AdaptivePaci_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(freedomk64f_fxos8700_Adaptive_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    AdaptivePacin_SystemCore_delete(obj);
  }
}

static void AdaptivePa_SystemCore_release_a(b_freedomk64f_I2CMasterWrite__T *obj)
{
  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;
  }
}

static void AdaptivePac_SystemCore_delete_a(b_freedomk64f_I2CMasterWrite__T *obj)
{
  AdaptivePa_SystemCore_release_a(obj);
}

static void matlabCodegenHandle_matlabCod_a(b_freedomk64f_I2CMasterWrite__T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    AdaptivePac_SystemCore_delete_a(obj);
  }
}

static void AdaptivePacing_SystemCore_setup(freedomk64f_fxos8700_Adaptive_T *obj)
{
  MW_I2C_Mode_Type ModeType;
  uint32_T i2cname;
  uint8_T b_RegisterValue;
  uint8_T b_SwappedDataBytes[2];
  uint8_T status;
  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  ModeType = MW_I2C_MASTER;
  i2cname = 0;
  obj->i2cobj.MW_I2C_HANDLE = MW_I2C_Open(i2cname, ModeType);
  obj->i2cobj.BusSpeed = 100000U;
  MW_I2C_SetBusSpeed(obj->i2cobj.MW_I2C_HANDLE, obj->i2cobj.BusSpeed);
  b_SwappedDataBytes[0] = 43U;
  b_SwappedDataBytes[1] = 64U;
  MW_I2C_MasterWrite(obj->i2cobj.MW_I2C_HANDLE, 29U, b_SwappedDataBytes, 2U,
                     false, false);
  OSA_TimeDelay(500U);
  status = 42U;
  status = MW_I2C_MasterWrite(obj->i2cobj.MW_I2C_HANDLE, 29U, &status, 1U, true,
    false);
  if (0 == status) {
    MW_I2C_MasterRead(obj->i2cobj.MW_I2C_HANDLE, 29U, &status, 1U, false, true);
    memcpy((void *)&b_RegisterValue, (void *)&status, (uint32_T)((size_t)1 *
            sizeof(uint8_T)));
  } else {
    b_RegisterValue = 0U;
  }

  b_SwappedDataBytes[0] = 42U;
  b_SwappedDataBytes[1] = (uint8_T)(b_RegisterValue & 254);
  MW_I2C_MasterWrite(obj->i2cobj.MW_I2C_HANDLE, 29U, b_SwappedDataBytes, 2U,
                     false, false);
  b_SwappedDataBytes[0] = 14U;
  b_SwappedDataBytes[1] = 0U;
  MW_I2C_MasterWrite(obj->i2cobj.MW_I2C_HANDLE, 29U, b_SwappedDataBytes, 2U,
                     false, false);
  b_SwappedDataBytes[0] = 91U;
  b_SwappedDataBytes[1] = 0U;
  MW_I2C_MasterWrite(obj->i2cobj.MW_I2C_HANDLE, 29U, b_SwappedDataBytes, 2U,
                     false, false);
  b_SwappedDataBytes[0] = 42U;
  b_SwappedDataBytes[1] = 1U;
  MW_I2C_MasterWrite(obj->i2cobj.MW_I2C_HANDLE, 29U, b_SwappedDataBytes, 2U,
                     false, false);
  obj->isSetupComplete = true;
}

/* Model step function */
void AdaptivePacing_1_step(void)
{
  int16_T b_output[3];
  uint8_T status;
  uint8_T output_raw[6];
  uint8_T y[2];
  uint8_T b_x[2];
  real_T tmp;

  /* MATLABSystem: '<S1>/FXOS8700 6-Axes Sensor' */
  if (AdaptivePacing_1_DW.obj.SampleTime !=
      AdaptivePacing_1_P.FXOS87006AxesSensor_SampleTime) {
    AdaptivePacing_1_DW.obj.SampleTime =
      AdaptivePacing_1_P.FXOS87006AxesSensor_SampleTime;
  }

  status = 1U;
  status = MW_I2C_MasterWrite(AdaptivePacing_1_DW.obj.i2cobj.MW_I2C_HANDLE, 29U,
    &status, 1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(AdaptivePacing_1_DW.obj.i2cobj.MW_I2C_HANDLE, 29U,
                      output_raw, 6U, false, true);
    memcpy((void *)&b_output[0], (void *)&output_raw[0], (uint32_T)((size_t)3 *
            sizeof(int16_T)));
    memcpy((void *)&y[0], (void *)&b_output[0], (uint32_T)((size_t)2 * sizeof
            (uint8_T)));
    b_x[0] = y[1];
    b_x[1] = y[0];
    memcpy((void *)&b_output[0], (void *)&b_x[0], (uint32_T)((size_t)1 * sizeof
            (int16_T)));
    memcpy((void *)&y[0], (void *)&b_output[1], (uint32_T)((size_t)2 * sizeof
            (uint8_T)));
    b_x[0] = y[1];
    b_x[1] = y[0];
    memcpy((void *)&b_output[1], (void *)&b_x[0], (uint32_T)((size_t)1 * sizeof
            (int16_T)));
    memcpy((void *)&y[0], (void *)&b_output[2], (uint32_T)((size_t)2 * sizeof
            (uint8_T)));
    b_x[0] = y[1];
    b_x[1] = y[0];
    memcpy((void *)&b_output[2], (void *)&b_x[0], (uint32_T)((size_t)1 * sizeof
            (int16_T)));
  } else {
    b_output[0] = 0;
    b_output[1] = 0;
    b_output[2] = 0;
  }

  /* MATLAB Function: '<S1>/movingAverageFilter' incorporates:
   *  DataStoreRead: '<S1>/Data Store Read'
   *  MATLABSystem: '<S1>/FXOS8700 6-Axes Sensor'
   *  Sum: '<S1>/Sum of Elements'
   */
  AdaptivePacing_1_B.avg = (((real_T)(int16_T)(b_output[0] >> 2) * 0.244 /
    1000.0 + (real_T)(int16_T)(b_output[1] >> 2) * 0.244 / 1000.0) + (real_T)
    (int16_T)(b_output[2] >> 2) * 0.244 / 1000.0) * 0.3 + 0.7 *
    AdaptivePacing_1_DW.average;

  /* DataStoreWrite: '<S1>/Data Store Write' */
  AdaptivePacing_1_DW.average = AdaptivePacing_1_B.avg;

  /* DataTypeConversion: '<Root>/Data Type Conversion5' incorporates:
   *  Constant: '<Root>/original LRL1'
   */
  AdaptivePacing_1_B.DataTypeConversion5 = AdaptivePacing_1_P.originalLRL1_Value;

  /* Product: '<S1>/Divide1' incorporates:
   *  Constant: '<S1>/msec//minute'
   */
  AdaptivePacing_1_B.Divide1 = AdaptivePacing_1_B.DataTypeConversion5 *
    AdaptivePacing_1_P.msecminute_Value;

  /* DataTypeConversion: '<Root>/Data Type Conversion4' incorporates:
   *  Constant: '<Root>/MSR1'
   */
  AdaptivePacing_1_B.DataTypeConversion4 = AdaptivePacing_1_P.MSR1_Value;

  /* DataTypeConversion: '<Root>/Data Type Conversion3' incorporates:
   *  Constant: '<Root>/response factor (1-16)1'
   */
  AdaptivePacing_1_B.DataTypeConversion3 =
    AdaptivePacing_1_P.responsefactor1161_Value;

  /* DataTypeConversion: '<Root>/Data Type Conversion2' incorporates:
   *  Constant: '<Root>/Reaction Time (in s)1'
   */
  AdaptivePacing_1_B.DataTypeConversion2 =
    AdaptivePacing_1_P.ReactionTimeins1_Value;

  /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
   *  Constant: '<Root>/Recovery Time (in s)1'
   */
  AdaptivePacing_1_B.DataTypeConversion1 =
    AdaptivePacing_1_P.RecoveryTimeins1_Value;

  /* Chart: '<S1>/Chart' */
  if (AdaptivePacing_1_DW.temporalCounter_i1 < MAX_uint32_T) {
    AdaptivePacing_1_DW.temporalCounter_i1++;
  }

  if (AdaptivePacing_1_DW.is_active_c3_AdaptivePacing_1 == 0U) {
    AdaptivePacing_1_DW.is_active_c3_AdaptivePacing_1 = 1U;
    AdaptivePacing_1_DW.is_c3_AdaptivePacing_1 = AdaptivePacing_1_IN_start;
    AdaptivePacing_1_B.LRL = AdaptivePacing_1_B.Divide1;
    AdaptivePacing_1_DW.RateChange = AdaptivePacing_1_B.DataTypeConversion3 /
      16.0;
  } else {
    switch (AdaptivePacing_1_DW.is_c3_AdaptivePacing_1) {
     case AdaptivePacing_1_IN_Decreasing:
      if (AdaptivePacing_1_DW.temporalCounter_i1 >= (uint32_T)ceil
          (AdaptivePacing_1_B.DataTypeConversion1)) {
        AdaptivePacing_1_DW.is_c3_AdaptivePacing_1 = AdaptivePacing_1_IN_start;
        AdaptivePacing_1_B.LRL = AdaptivePacing_1_B.Divide1;
        AdaptivePacing_1_DW.RateChange = AdaptivePacing_1_B.DataTypeConversion3 /
          16.0;
      }
      break;

     case AdaptivePacing_1_IN_Increasing:
      if (AdaptivePacing_1_DW.temporalCounter_i1 >= (uint32_T)ceil
          (AdaptivePacing_1_B.DataTypeConversion2)) {
        AdaptivePacing_1_DW.is_c3_AdaptivePacing_1 = AdaptivePacing_1_IN_start;
        AdaptivePacing_1_B.LRL = AdaptivePacing_1_B.Divide1;
        AdaptivePacing_1_DW.RateChange = AdaptivePacing_1_B.DataTypeConversion3 /
          16.0;
      }
      break;

     case AdaptivePacing_1_IN_main:
      if ((AdaptivePacing_1_B.avg < 1.05) && (AdaptivePacing_1_B.LRL >
           AdaptivePacing_1_B.Divide1)) {
        AdaptivePacing_1_DW.is_c3_AdaptivePacing_1 =
          AdaptivePacing_1_IN_Decreasing;
        AdaptivePacing_1_DW.temporalCounter_i1 = 0U;
        AdaptivePacing_1_B.LRL -= AdaptivePacing_1_DW.RateChange;
      } else {
        if ((AdaptivePacing_1_B.avg > 1.05) && (AdaptivePacing_1_B.LRL <
             AdaptivePacing_1_B.DataTypeConversion4)) {
          AdaptivePacing_1_DW.is_c3_AdaptivePacing_1 =
            AdaptivePacing_1_IN_Increasing;
          AdaptivePacing_1_DW.temporalCounter_i1 = 0U;
          AdaptivePacing_1_B.LRL += AdaptivePacing_1_DW.RateChange;
        }
      }
      break;

     default:
      /* case IN_start: */
      AdaptivePacing_1_DW.is_c3_AdaptivePacing_1 = AdaptivePacing_1_IN_main;
      break;
    }
  }

  /* End of Chart: '<S1>/Chart' */

  /* Switch: '<S1>/Switch' incorporates:
   *  Constant: '<Root>/mode_adaptivity '
   *  DataTypeConversion: '<Root>/Data Type Conversion7'
   */
  if (AdaptivePacing_1_P.mode_adaptivity_Value >=
      AdaptivePacing_1_P.Switch_Threshold) {
    tmp = AdaptivePacing_1_B.LRL;
  } else {
    tmp = AdaptivePacing_1_B.Divide1;
  }

  /* End of Switch: '<S1>/Switch' */

  /* Product: '<S1>/Divide' incorporates:
   *  Constant: '<S1>/Constant'
   */
  AdaptivePacing_1_B.Divide = AdaptivePacing_1_P.Constant_Value * tmp;

  /* DataTypeConversion: '<Root>/Data Type Conversion6' */
  tmp = floor(AdaptivePacing_1_B.Divide);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  AdaptivePacing_1_B.DataTypeConversion6 = (uint16_T)(tmp < 0.0 ? (int32_T)
    (uint16_T)-(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion6' */

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.001s, 0.0s] */
    rtExtModeUpload(0, (real_T)AdaptivePacing_1_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.001s, 0.0s] */
    if ((rtmGetTFinal(AdaptivePacing_1_M)!=-1) &&
        !((rtmGetTFinal(AdaptivePacing_1_M)-AdaptivePacing_1_M->Timing.taskTime0)
          > AdaptivePacing_1_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(AdaptivePacing_1_M, "Simulation finished");
    }

    if (rtmGetStopRequested(AdaptivePacing_1_M)) {
      rtmSetErrorStatus(AdaptivePacing_1_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  AdaptivePacing_1_M->Timing.taskTime0 =
    ((time_T)(++AdaptivePacing_1_M->Timing.clockTick0)) *
    AdaptivePacing_1_M->Timing.stepSize0;
}

/* Model initialize function */
void AdaptivePacing_1_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  rtmSetTFinal(AdaptivePacing_1_M, -1);
  AdaptivePacing_1_M->Timing.stepSize0 = 0.001;

  /* External mode info */
  AdaptivePacing_1_M->Sizes.checksums[0] = (3485579750U);
  AdaptivePacing_1_M->Sizes.checksums[1] = (4183126384U);
  AdaptivePacing_1_M->Sizes.checksums[2] = (2754450306U);
  AdaptivePacing_1_M->Sizes.checksums[3] = (2815613919U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[4];
    AdaptivePacing_1_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(AdaptivePacing_1_M->extModeInfo,
      &AdaptivePacing_1_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(AdaptivePacing_1_M->extModeInfo,
                        AdaptivePacing_1_M->Sizes.checksums);
    rteiSetTPtr(AdaptivePacing_1_M->extModeInfo, rtmGetTPtr(AdaptivePacing_1_M));
  }

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    AdaptivePacing_1_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 15;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  {
    freedomk64f_fxos8700_Adaptive_T *obj;

    /* Start for DataStoreMemory: '<S1>/Data Store Memory' */
    AdaptivePacing_1_DW.average =
      AdaptivePacing_1_P.DataStoreMemory_InitialValue;

    /* Start for MATLABSystem: '<S1>/FXOS8700 6-Axes Sensor' */
    AdaptivePacing_1_DW.obj.i2cobj.matlabCodegenIsDeleted = true;
    AdaptivePacing_1_DW.obj.matlabCodegenIsDeleted = true;
    obj = &AdaptivePacing_1_DW.obj;
    AdaptivePacing_1_DW.obj.isInitialized = 0;
    AdaptivePacing_1_DW.obj.SampleTime = -1.0;
    obj->i2cobj.isInitialized = 0;
    obj->i2cobj.matlabCodegenIsDeleted = false;
    AdaptivePacing_1_DW.obj.matlabCodegenIsDeleted = false;
    AdaptivePacing_1_DW.obj.SampleTime =
      AdaptivePacing_1_P.FXOS87006AxesSensor_SampleTime;
    AdaptivePacing_SystemCore_setup(&AdaptivePacing_1_DW.obj);
  }
}

/* Model terminate function */
void AdaptivePacing_1_terminate(void)
{
  /* Terminate for MATLABSystem: '<S1>/FXOS8700 6-Axes Sensor' */
  matlabCodegenHandle_matlabCodeg(&AdaptivePacing_1_DW.obj);
  matlabCodegenHandle_matlabCod_a(&AdaptivePacing_1_DW.obj.i2cobj);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

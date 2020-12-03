/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Thu Dec  3 10:30:33 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "untitled_private.h"
#include "untitled_dt.h"

/* Named constants for Chart: '<S1>/Chart' */
#define untitled_IN_Decreasing         (1U)
#define untitled_IN_Increasing         (2U)
#define untitled_IN_main               (3U)
#define untitled_IN_start              (4U)

/* Block signals (default storage) */
B_untitled_T untitled_B;

/* Block states (default storage) */
DW_untitled_T untitled_DW;

/* External outputs (root outports fed by signals with default storage) */
ExtY_untitled_T untitled_Y;

/* Real-time model */
RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;

/* Forward declaration for local functions */
static void untitled_SystemCore_release_b(const freedomk64f_fxos8700_untitled_T *
  obj);
static void untitled_SystemCore_delete_b(const freedomk64f_fxos8700_untitled_T
  *obj);
static void matlabCodegenHandle_matlabCod_b(freedomk64f_fxos8700_untitled_T *obj);
static void untitled_SystemCore_release_b5(b_freedomk64f_I2CMasterWrite__T *obj);
static void untitled_SystemCore_delete_b5(b_freedomk64f_I2CMasterWrite__T *obj);
static void matlabCodegenHandle_matlabCo_b5(b_freedomk64f_I2CMasterWrite__T *obj);
static void untitled_SystemCore_release(const freedomk64f_DigitalWrite_unti_T
  *obj);
static void untitled_SystemCore_delete(const freedomk64f_DigitalWrite_unti_T
  *obj);
static void matlabCodegenHandle_matlabCodeg(freedomk64f_DigitalWrite_unti_T *obj);
static void untitled_SystemCore_setup(freedomk64f_fxos8700_untitled_T *obj);
static void untitled_SystemCore_release_b(const freedomk64f_fxos8700_untitled_T *
  obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_I2C_Close(obj->i2cobj.MW_I2C_HANDLE);
  }
}

static void untitled_SystemCore_delete_b(const freedomk64f_fxos8700_untitled_T
  *obj)
{
  untitled_SystemCore_release_b(obj);
}

static void matlabCodegenHandle_matlabCod_b(freedomk64f_fxos8700_untitled_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    untitled_SystemCore_delete_b(obj);
  }
}

static void untitled_SystemCore_release_b5(b_freedomk64f_I2CMasterWrite__T *obj)
{
  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;
  }
}

static void untitled_SystemCore_delete_b5(b_freedomk64f_I2CMasterWrite__T *obj)
{
  untitled_SystemCore_release_b5(obj);
}

static void matlabCodegenHandle_matlabCo_b5(b_freedomk64f_I2CMasterWrite__T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    untitled_SystemCore_delete_b5(obj);
  }
}

static void untitled_SystemCore_release(const freedomk64f_DigitalWrite_unti_T
  *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_digitalIO_close(obj->MW_DIGITALIO_HANDLE);
  }
}

static void untitled_SystemCore_delete(const freedomk64f_DigitalWrite_unti_T
  *obj)
{
  untitled_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(freedomk64f_DigitalWrite_unti_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    untitled_SystemCore_delete(obj);
  }
}

static void untitled_SystemCore_setup(freedomk64f_fxos8700_untitled_T *obj)
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
void untitled_step(void)
{
  int16_T b_output[3];
  uint8_T status;
  uint8_T output_raw[6];
  uint8_T y[2];
  uint8_T b_x[2];
  real_T tmp;

  /* MATLABSystem: '<S1>/FXOS8700 6-Axes Sensor' */
  if (untitled_DW.obj.SampleTime != untitled_P.FXOS87006AxesSensor_SampleTime) {
    untitled_DW.obj.SampleTime = untitled_P.FXOS87006AxesSensor_SampleTime;
  }

  status = 1U;
  status = MW_I2C_MasterWrite(untitled_DW.obj.i2cobj.MW_I2C_HANDLE, 29U, &status,
    1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(untitled_DW.obj.i2cobj.MW_I2C_HANDLE, 29U, output_raw, 6U,
                      false, true);
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

  /* Sum: '<S1>/Sum of Elements' incorporates:
   *  MATLABSystem: '<S1>/FXOS8700 6-Axes Sensor'
   */
  untitled_B.SumofElements = ((real_T)(int16_T)(b_output[0] >> 2) * 0.244 /
    1000.0 + (real_T)(int16_T)(b_output[1] >> 2) * 0.244 / 1000.0) + (real_T)
    (int16_T)(b_output[2] >> 2) * 0.244 / 1000.0;

  /* Product: '<S1>/Divide1' incorporates:
   *  Constant: '<Root>/Constant'
   *  Constant: '<S1>/msec//minute'
   *  DataTypeConversion: '<Root>/Data Type Conversion5'
   */
  untitled_B.Divide1 = (real_T)untitled_P.Constant_Value_j *
    untitled_P.msecminute_Value;

  /* DataTypeConversion: '<Root>/Data Type Conversion4' incorporates:
   *  Constant: '<Root>/Constant1'
   */
  untitled_B.DataTypeConversion4 = untitled_P.Constant1_Value;

  /* DataTypeConversion: '<Root>/Data Type Conversion3' incorporates:
   *  Constant: '<Root>/Constant4'
   */
  untitled_B.DataTypeConversion3 = untitled_P.Constant4_Value;

  /* DataTypeConversion: '<Root>/Data Type Conversion2' incorporates:
   *  Constant: '<Root>/Constant3'
   */
  untitled_B.DataTypeConversion2 = untitled_P.Constant3_Value;

  /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
   *  Constant: '<Root>/Constant5'
   */
  untitled_B.DataTypeConversion1 = untitled_P.Constant5_Value;

  /* DataTypeConversion: '<Root>/Data Type Conversion7' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  untitled_B.DataTypeConversion7 = untitled_P.Constant2_Value;

  /* Chart: '<S1>/Chart' */
  if (untitled_DW.temporalCounter_i1 < MAX_uint32_T) {
    untitled_DW.temporalCounter_i1++;
  }

  if (untitled_DW.is_active_c1_untitled == 0U) {
    untitled_DW.is_active_c1_untitled = 1U;
    untitled_DW.is_c1_untitled = untitled_IN_start;
    untitled_B.LRL = untitled_B.Divide1;
    untitled_DW.RateChange = untitled_B.DataTypeConversion3 / 16.0;
    untitled_DW.Threshold = 1.05;
    untitled_B.Avg = 0.0;
  } else {
    switch (untitled_DW.is_c1_untitled) {
     case untitled_IN_Decreasing:
      untitled_B.red_led = true;
      if (untitled_DW.temporalCounter_i1 >= (uint32_T)ceil
          (untitled_B.DataTypeConversion1)) {
        untitled_DW.is_c1_untitled = untitled_IN_main;
        untitled_B.Avg = 0.7 * untitled_B.Avg + 0.3 * untitled_B.SumofElements;
        untitled_B.red_led = false;
      }
      break;

     case untitled_IN_Increasing:
      untitled_B.red_led = true;
      if (untitled_DW.temporalCounter_i1 >= (uint32_T)ceil
          (untitled_B.DataTypeConversion2)) {
        untitled_DW.is_c1_untitled = untitled_IN_main;
        untitled_B.Avg = 0.7 * untitled_B.Avg + 0.3 * untitled_B.SumofElements;
        untitled_B.red_led = false;
      }
      break;

     case untitled_IN_main:
      untitled_B.red_led = false;
      if (untitled_B.DataTypeConversion7 == 0.0) {
        untitled_DW.is_c1_untitled = untitled_IN_main;
        untitled_B.Avg = 0.7 * untitled_B.Avg + 0.3 * untitled_B.SumofElements;
        untitled_B.red_led = false;
      } else if ((untitled_B.Avg < untitled_DW.Threshold) && (untitled_B.LRL >
                  untitled_B.Divide1)) {
        untitled_DW.is_c1_untitled = untitled_IN_Decreasing;
        untitled_DW.temporalCounter_i1 = 0U;
        untitled_B.LRL -= untitled_DW.RateChange;
        untitled_B.red_led = true;
      } else {
        if ((untitled_B.Avg > untitled_DW.Threshold) && (untitled_B.LRL <
             untitled_B.DataTypeConversion4)) {
          untitled_DW.is_c1_untitled = untitled_IN_Increasing;
          untitled_DW.temporalCounter_i1 = 0U;
          untitled_B.LRL += untitled_DW.RateChange;
          untitled_B.red_led = true;
        }
      }
      break;

     default:
      /* case IN_start: */
      untitled_DW.is_c1_untitled = untitled_IN_main;
      untitled_B.Avg = 0.7 * untitled_B.Avg + 0.3 * untitled_B.SumofElements;
      untitled_B.red_led = false;
      break;
    }
  }

  /* End of Chart: '<S1>/Chart' */

  /* DataTypeConversion: '<Root>/Data Type Conversion6' incorporates:
   *  Constant: '<S1>/Constant'
   *  Product: '<S1>/Divide'
   */
  tmp = floor(untitled_P.Constant_Value * untitled_B.LRL);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  untitled_B.DataTypeConversion6 = (uint16_T)(tmp < 0.0 ? (int32_T)(uint16_T)
    -(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion6' */

  /* Outport: '<Root>/Updated_Lower_Rate_Limit' */
  untitled_Y.Updated_Lower_Rate_Limit = untitled_B.DataTypeConversion6;

  /* MATLABSystem: '<S1>/Digital Write' */
  MW_digitalIO_write(untitled_DW.obj_b.MW_DIGITALIO_HANDLE, untitled_B.red_led);

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.001s, 0.0s] */
    rtExtModeUpload(0, (real_T)untitled_M->Timing.taskTime0);
  }

  /* signal main to stop simulation */
  {                                    /* Sample time: [0.001s, 0.0s] */
    if ((rtmGetTFinal(untitled_M)!=-1) &&
        !((rtmGetTFinal(untitled_M)-untitled_M->Timing.taskTime0) >
          untitled_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(untitled_M, "Simulation finished");
    }

    if (rtmGetStopRequested(untitled_M)) {
      rtmSetErrorStatus(untitled_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  untitled_M->Timing.taskTime0 =
    ((time_T)(++untitled_M->Timing.clockTick0)) * untitled_M->Timing.stepSize0;
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  rtmSetTFinal(untitled_M, -1);
  untitled_M->Timing.stepSize0 = 0.001;

  /* External mode info */
  untitled_M->Sizes.checksums[0] = (1938051424U);
  untitled_M->Sizes.checksums[1] = (1648107530U);
  untitled_M->Sizes.checksums[2] = (1711736115U);
  untitled_M->Sizes.checksums[3] = (4256314359U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[4];
    untitled_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(untitled_M->extModeInfo,
      &untitled_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(untitled_M->extModeInfo, untitled_M->Sizes.checksums);
    rteiSetTPtr(untitled_M->extModeInfo, rtmGetTPtr(untitled_M));
  }

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    untitled_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 16;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  {
    freedomk64f_fxos8700_untitled_T *obj;
    freedomk64f_DigitalWrite_unti_T *obj_0;

    /* Start for MATLABSystem: '<S1>/FXOS8700 6-Axes Sensor' */
    untitled_DW.obj.i2cobj.matlabCodegenIsDeleted = true;
    untitled_DW.obj.matlabCodegenIsDeleted = true;
    obj = &untitled_DW.obj;
    untitled_DW.obj.isInitialized = 0;
    untitled_DW.obj.SampleTime = -1.0;
    obj->i2cobj.isInitialized = 0;
    obj->i2cobj.matlabCodegenIsDeleted = false;
    untitled_DW.obj.matlabCodegenIsDeleted = false;
    untitled_DW.obj.SampleTime = untitled_P.FXOS87006AxesSensor_SampleTime;
    untitled_SystemCore_setup(&untitled_DW.obj);

    /* Start for MATLABSystem: '<S1>/Digital Write' */
    untitled_DW.obj_b.matlabCodegenIsDeleted = true;
    untitled_DW.obj_b.isInitialized = 0;
    untitled_DW.obj_b.matlabCodegenIsDeleted = false;
    obj_0 = &untitled_DW.obj_b;
    untitled_DW.obj_b.isSetupComplete = false;
    untitled_DW.obj_b.isInitialized = 1;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(42U, 1);
    untitled_DW.obj_b.isSetupComplete = true;
  }
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* Terminate for MATLABSystem: '<S1>/FXOS8700 6-Axes Sensor' */
  matlabCodegenHandle_matlabCod_b(&untitled_DW.obj);
  matlabCodegenHandle_matlabCo_b5(&untitled_DW.obj.i2cobj);

  /* Terminate for MATLABSystem: '<S1>/Digital Write' */
  matlabCodegenHandle_matlabCodeg(&untitled_DW.obj_b);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

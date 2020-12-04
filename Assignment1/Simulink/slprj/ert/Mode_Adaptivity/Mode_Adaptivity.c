/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Mode_Adaptivity.c
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

#include "Mode_Adaptivity.h"
#include "Mode_Adaptivity_private.h"

P_Mode_Adaptivity_T Mode_Adaptivity_P = {
  /* Expression: -1
   * Referenced by: '<Root>/FXOS8700 6-Axes Sensor'
   */
  -1.0,

  /* Expression: 0
   * Referenced by: '<Root>/Data Store Memory'
   */
  0.0
};

/* Forward declaration for local functions */
static void Mode_Adaptivit_SystemCore_setup(freedomk64f_fxos8700_Mode_Ada_T *obj);
static void Mode_Adaptiv_SystemCore_release(const
  freedomk64f_fxos8700_Mode_Ada_T *obj);
static void Mode_Adaptivi_SystemCore_delete(const
  freedomk64f_fxos8700_Mode_Ada_T *obj);
static void matlabCodegenHandle_matlabCodeg(freedomk64f_fxos8700_Mode_Ada_T *obj);
static void Mode_Adapt_SystemCore_release_m(b_freedomk64f_I2CMasterWrite__T *obj);
static void Mode_Adapti_SystemCore_delete_a(b_freedomk64f_I2CMasterWrite__T *obj);
static void matlabCodegenHandle_matlabCod_g(b_freedomk64f_I2CMasterWrite__T *obj);
static void Mode_Adaptivit_SystemCore_setup(freedomk64f_fxos8700_Mode_Ada_T *obj)
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

static void Mode_Adaptiv_SystemCore_release(const
  freedomk64f_fxos8700_Mode_Ada_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_I2C_Close(obj->i2cobj.MW_I2C_HANDLE);
  }
}

static void Mode_Adaptivi_SystemCore_delete(const
  freedomk64f_fxos8700_Mode_Ada_T *obj)
{
  Mode_Adaptiv_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(freedomk64f_fxos8700_Mode_Ada_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    Mode_Adaptivi_SystemCore_delete(obj);
  }
}

static void Mode_Adapt_SystemCore_release_m(b_freedomk64f_I2CMasterWrite__T *obj)
{
  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;
  }
}

static void Mode_Adapti_SystemCore_delete_a(b_freedomk64f_I2CMasterWrite__T *obj)
{
  Mode_Adapt_SystemCore_release_m(obj);
}

static void matlabCodegenHandle_matlabCod_g(b_freedomk64f_I2CMasterWrite__T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    Mode_Adapti_SystemCore_delete_a(obj);
  }
}

/* System initialize for referenced model: 'Mode_Adaptivity' */
void Mode_Adaptivity_Init(DW_Mode_Adaptivity_f_T *localDW)
{
  freedomk64f_fxos8700_Mode_Ada_T *obj;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory' */
  localDW->Smoothed_Average = Mode_Adaptivity_P.DataStoreMemory_InitialValue;

  /* Start for MATLABSystem: '<Root>/FXOS8700 6-Axes Sensor' */
  localDW->obj.i2cobj.matlabCodegenIsDeleted = true;
  localDW->obj.matlabCodegenIsDeleted = true;
  obj = &localDW->obj;
  localDW->obj.isInitialized = 0;
  localDW->obj.SampleTime = -1.0;
  obj->i2cobj.isInitialized = 0;
  obj->i2cobj.matlabCodegenIsDeleted = false;
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  localDW->obj.SampleTime = Mode_Adaptivity_P.FXOS87006AxesSensor_SampleTime;
  Mode_Adaptivit_SystemCore_setup(&localDW->obj);
}

/* Output and update for referenced model: 'Mode_Adaptivity' */
void Mode_Adaptivity(const uint16_T *rtu_Initial_LRL, uint16_T *rty_Updated_LRL,
                     DW_Mode_Adaptivity_f_T *localDW)
{
  int16_T b_output[3];
  uint8_T status;
  uint8_T output_raw[6];
  uint8_T y[2];
  uint8_T b_x[2];

  /* MATLABSystem: '<Root>/FXOS8700 6-Axes Sensor' */
  if (localDW->obj.SampleTime !=
      Mode_Adaptivity_P.FXOS87006AxesSensor_SampleTime) {
    localDW->obj.SampleTime = Mode_Adaptivity_P.FXOS87006AxesSensor_SampleTime;
  }

  status = 1U;
  status = MW_I2C_MasterWrite(localDW->obj.i2cobj.MW_I2C_HANDLE, 29U, &status,
    1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(localDW->obj.i2cobj.MW_I2C_HANDLE, 29U, output_raw, 6U,
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

  /* Sum: '<Root>/Sum of Elements' incorporates:
   *  DataStoreWrite: '<Root>/Data Store Write1'
   *  MATLABSystem: '<Root>/FXOS8700 6-Axes Sensor'
   */
  localDW->Smoothed_Average = ((real_T)(int16_T)(b_output[0] >> 2) * 0.244 /
    1000.0 + (real_T)(int16_T)(b_output[1] >> 2) * 0.244 / 1000.0) + (real_T)
    (int16_T)(b_output[2] >> 2) * 0.244 / 1000.0;

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  *rty_Updated_LRL = *rtu_Initial_LRL;
}

/* Termination for referenced model: 'Mode_Adaptivity' */
void Mode_Adaptivity_Term(DW_Mode_Adaptivity_f_T *localDW)
{
  /* Terminate for MATLABSystem: '<Root>/FXOS8700 6-Axes Sensor' */
  matlabCodegenHandle_matlabCodeg(&localDW->obj);
  matlabCodegenHandle_matlabCod_g(&localDW->obj.i2cobj);
}

/* Model initialize function */
void Mode_Adaptivity_initialize(const char_T **rt_errorStatus,
  RT_MODEL_Mode_Adaptivity_T *const Mode_Adaptivity_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(Mode_Adaptivity_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

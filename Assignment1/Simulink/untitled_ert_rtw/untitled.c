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
 * C/C++ source code generated on : Thu Dec  3 23:33:16 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "untitled_private.h"
#include "untitled_dt.h"

/* Block signals (default storage) */
B_untitled_T untitled_B;

/* Block states (default storage) */
DW_untitled_T untitled_DW;

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
static void untitled_SystemCore_release(dsp_simulink_MovingStandardDe_T *obj);
static void untitled_SystemCore_delete(dsp_simulink_MovingStandardDe_T *obj);
static void matlabCodegenHandle_matlabCodeg(dsp_simulink_MovingStandardDe_T *obj);
static void untitled_SystemCore_setup_b(freedomk64f_fxos8700_untitled_T *obj);
static void untitled_SystemCore_setup(dsp_simulink_MovingStandardDe_T *obj,
  g_dsp_private_SlidingWindowVa_T *iobj_0);
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

static void untitled_SystemCore_release(dsp_simulink_MovingStandardDe_T *obj)
{
  g_dsp_private_SlidingWindowVa_T *obj_0;
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    obj_0 = obj->pStatistic;
    if (obj_0->isInitialized == 1) {
      obj_0->isInitialized = 2;
    }

    obj->NumChannels = -1;
  }
}

static void untitled_SystemCore_delete(dsp_simulink_MovingStandardDe_T *obj)
{
  untitled_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(dsp_simulink_MovingStandardDe_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    untitled_SystemCore_delete(obj);
  }
}

static void untitled_SystemCore_setup_b(freedomk64f_fxos8700_untitled_T *obj)
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

static void untitled_SystemCore_setup(dsp_simulink_MovingStandardDe_T *obj,
  g_dsp_private_SlidingWindowVa_T *iobj_0)
{
  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  obj->NumChannels = 1;
  iobj_0->isInitialized = 0;
  obj->pStatistic = iobj_0;
  obj->isSetupComplete = true;
  obj->TunablePropsChanged = false;
}

/* Model step function */
void untitled_step(void)
{
  int16_T b_output[3];
  uint8_T status;
  uint8_T output_raw[6];
  uint8_T y[2];
  uint8_T b_x[2];
  g_dsp_private_SlidingWindowVa_T *obj;
  real_T M;
  real_T counter;
  real_T Mprev;
  real_T rtb_SquareRoot1;
  int32_T i;

  /* MATLABSystem: '<Root>/FXOS8700 6-Axes Sensor1' */
  if (untitled_DW.obj_g.SampleTime != untitled_P.FXOS87006AxesSensor1_SampleTime)
  {
    untitled_DW.obj_g.SampleTime = untitled_P.FXOS87006AxesSensor1_SampleTime;
  }

  status = 1U;
  status = MW_I2C_MasterWrite(untitled_DW.obj_g.i2cobj.MW_I2C_HANDLE, 29U,
    &status, 1U, true, false);
  if (0 == status) {
    MW_I2C_MasterRead(untitled_DW.obj_g.i2cobj.MW_I2C_HANDLE, 29U, output_raw,
                      6U, false, true);
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

  counter = (real_T)(int16_T)(b_output[0] >> 2) * 0.244 / 1000.0;
  Mprev = (real_T)(int16_T)(b_output[1] >> 2) * 0.244 / 1000.0;
  rtb_SquareRoot1 = (real_T)(int16_T)(b_output[2] >> 2) * 0.244 / 1000.0;

  /* End of MATLABSystem: '<Root>/FXOS8700 6-Axes Sensor1' */

  /* Sqrt: '<Root>/Square Root1' incorporates:
   *  Math: '<Root>/Magnitude Square5'
   *  Sum: '<Root>/Sum of Elements'
   *
   * About '<Root>/Magnitude Square5':
   *  Operator: magnitude^2
   */
  rtb_SquareRoot1 = sqrt((counter * counter + Mprev * Mprev) + rtb_SquareRoot1 *
    rtb_SquareRoot1);

  /* MATLABSystem: '<Root>/Moving Standard Deviation1' */
  if (untitled_DW.obj.TunablePropsChanged) {
    untitled_DW.obj.TunablePropsChanged = false;
  }

  obj = untitled_DW.obj.pStatistic;
  if (obj->isInitialized != 1) {
    obj->isSetupComplete = false;
    obj->isInitialized = 1;
    for (i = 0; i < 5; i++) {
      obj->pReverseSamples[i] = 0.0;
    }

    for (i = 0; i < 5; i++) {
      obj->pReverseT[i] = 0.0;
    }

    for (i = 0; i < 5; i++) {
      obj->pReverseS[i] = 0.0;
    }

    obj->pT = 0.0;
    obj->pS = 0.0;
    obj->pM = 0.0;
    obj->pCounter = 0.0;
    obj->isSetupComplete = true;
    for (i = 0; i < 5; i++) {
      obj->pReverseSamples[i] = 0.0;
    }

    for (i = 0; i < 5; i++) {
      obj->pReverseT[i] = 0.0;
    }

    for (i = 0; i < 5; i++) {
      obj->pReverseS[i] = 0.0;
    }

    obj->pT = 0.0;
    obj->pS = 0.0;
    obj->pM = 0.0;
    obj->pCounter = 1.0;
  }

  for (i = 0; i < 5; i++) {
    untitled_B.reverseSamples[i] = obj->pReverseSamples[i];
  }

  for (i = 0; i < 5; i++) {
    untitled_B.reverseT[i] = obj->pReverseT[i];
  }

  for (i = 0; i < 5; i++) {
    untitled_B.reverseS[i] = obj->pReverseS[i];
  }

  untitled_B.T = obj->pT;
  untitled_B.S = obj->pS;
  M = obj->pM;
  counter = obj->pCounter;
  untitled_B.T += rtb_SquareRoot1;
  Mprev = M;
  M += 1.0 / counter * (rtb_SquareRoot1 - M);
  Mprev = rtb_SquareRoot1 - Mprev;
  untitled_B.S += (counter - 1.0) * Mprev * Mprev / counter;
  i = (int32_T)(5.0 - counter) - 1;
  Mprev = (5.0 - counter) / counter * untitled_B.T - untitled_B.reverseT[i];
  Mprev = (counter / (((5.0 - counter) + counter) * (5.0 - counter)) * (Mprev *
            Mprev) + (untitled_B.reverseS[i] + untitled_B.S)) / 4.0;
  untitled_B.reverseSamples[i] = rtb_SquareRoot1;
  if (counter < 4.0) {
    counter++;
  } else {
    counter = 1.0;
    for (i = 0; i < 5; i++) {
      untitled_B.reverseT[i] = untitled_B.reverseSamples[i];
    }

    untitled_B.reverseT[1] += untitled_B.reverseT[0];
    rtb_SquareRoot1 = 0.0 * untitled_B.reverseSamples[0] *
      untitled_B.reverseSamples[0];
    untitled_B.reverseS[0] = rtb_SquareRoot1;
    untitled_B.reverseT[2] += untitled_B.reverseT[1];
    untitled_B.S = untitled_B.reverseSamples[1] - untitled_B.reverseSamples[0];
    untitled_B.T = untitled_B.S * 0.5 + untitled_B.reverseSamples[0];
    rtb_SquareRoot1 += untitled_B.S * untitled_B.S / 2.0;
    untitled_B.reverseS[1] = rtb_SquareRoot1;
    untitled_B.reverseT[3] += untitled_B.reverseT[2];
    untitled_B.S = untitled_B.T;
    untitled_B.T += (untitled_B.reverseSamples[2] - untitled_B.T) *
      0.33333333333333331;
    untitled_B.S = untitled_B.reverseSamples[2] - untitled_B.S;
    rtb_SquareRoot1 += untitled_B.S * 2.0 * untitled_B.S / 3.0;
    untitled_B.reverseS[2] = rtb_SquareRoot1;
    untitled_B.reverseT[4] += untitled_B.reverseT[3];
    untitled_B.S = untitled_B.reverseSamples[3] - untitled_B.T;
    untitled_B.reverseS[3] = untitled_B.S * 3.0 * untitled_B.S / 4.0 +
      rtb_SquareRoot1;
    untitled_B.T = 0.0;
    untitled_B.S = 0.0;
    M = 0.0;
  }

  for (i = 0; i < 5; i++) {
    obj->pReverseSamples[i] = untitled_B.reverseSamples[i];
  }

  for (i = 0; i < 5; i++) {
    obj->pReverseT[i] = untitled_B.reverseT[i];
  }

  for (i = 0; i < 5; i++) {
    obj->pReverseS[i] = untitled_B.reverseS[i];
  }

  obj->pT = untitled_B.T;
  obj->pS = untitled_B.S;
  obj->pM = M;
  obj->pCounter = counter;

  /* Gain: '<Root>/Gain' incorporates:
   *  MATLABSystem: '<Root>/Moving Standard Deviation1'
   */
  untitled_B.Gain = untitled_P.Gain_Gain * sqrt(Mprev);

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
  rtmSetTFinal(untitled_M, -1);
  untitled_M->Timing.stepSize0 = 0.001;

  /* External mode info */
  untitled_M->Sizes.checksums[0] = (3432966678U);
  untitled_M->Sizes.checksums[1] = (4199491318U);
  untitled_M->Sizes.checksums[2] = (3635918037U);
  untitled_M->Sizes.checksums[3] = (775925379U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[3];
    untitled_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
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
    dtInfo.numDataTypes = 17;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }

  {
    freedomk64f_fxos8700_untitled_T *obj;
    g_dsp_private_SlidingWindowVa_T *obj_0;
    int32_T i;

    /* Start for MATLABSystem: '<Root>/FXOS8700 6-Axes Sensor1' */
    untitled_DW.obj_g.i2cobj.matlabCodegenIsDeleted = true;
    untitled_DW.obj_g.matlabCodegenIsDeleted = true;
    obj = &untitled_DW.obj_g;
    untitled_DW.obj_g.isInitialized = 0;
    untitled_DW.obj_g.SampleTime = -1.0;
    obj->i2cobj.isInitialized = 0;
    obj->i2cobj.matlabCodegenIsDeleted = false;
    untitled_DW.obj_g.matlabCodegenIsDeleted = false;
    untitled_DW.objisempty = true;
    untitled_DW.obj_g.SampleTime = untitled_P.FXOS87006AxesSensor1_SampleTime;
    untitled_SystemCore_setup_b(&untitled_DW.obj_g);

    /* Start for MATLABSystem: '<Root>/Moving Standard Deviation1' */
    untitled_DW.obj.matlabCodegenIsDeleted = true;
    untitled_DW.obj.isInitialized = 0;
    untitled_DW.obj.NumChannels = -1;
    untitled_DW.obj.matlabCodegenIsDeleted = false;
    untitled_DW.objisempty_g = true;
    untitled_SystemCore_setup(&untitled_DW.obj, &untitled_DW.gobj_2);

    /* InitializeConditions for MATLABSystem: '<Root>/Moving Standard Deviation1' */
    obj_0 = untitled_DW.obj.pStatistic;
    if (obj_0->isInitialized == 1) {
      for (i = 0; i < 5; i++) {
        obj_0->pReverseSamples[i] = 0.0;
      }

      for (i = 0; i < 5; i++) {
        obj_0->pReverseT[i] = 0.0;
      }

      for (i = 0; i < 5; i++) {
        obj_0->pReverseS[i] = 0.0;
      }

      obj_0->pT = 0.0;
      obj_0->pS = 0.0;
      obj_0->pM = 0.0;
      obj_0->pCounter = 1.0;
    }

    /* End of InitializeConditions for MATLABSystem: '<Root>/Moving Standard Deviation1' */
  }
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/FXOS8700 6-Axes Sensor1' */
  matlabCodegenHandle_matlabCod_b(&untitled_DW.obj_g);
  matlabCodegenHandle_matlabCo_b5(&untitled_DW.obj_g.i2cobj);

  /* Terminate for MATLABSystem: '<Root>/Moving Standard Deviation1' */
  matlabCodegenHandle_matlabCodeg(&untitled_DW.obj);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

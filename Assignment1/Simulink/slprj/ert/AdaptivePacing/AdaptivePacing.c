/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: AdaptivePacing.c
 *
 * Code generated for Simulink model 'AdaptivePacing'.
 *
 * Model version                  : 1.30
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Thu Dec  3 18:22:55 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "AdaptivePacing.h"
#include "AdaptivePacing_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define AdaptivePacing_IN_Constant     ((uint8_T)1U)
#define AdaptivePacing_IN_Decreasing   ((uint8_T)2U)
#define AdaptivePacing_IN_Increasing   ((uint8_T)3U)
#define AdaptivePacing_IN_TESTING      ((uint8_T)4U)
#define AdaptivePacing_IN_main         ((uint8_T)5U)

P_AdaptivePacing_T AdaptivePacing_P = {
  /* Expression: -1
   * Referenced by: '<Root>/FXOS8700 6-Axes Sensor'
   */
  -1.0,

  /* Expression: 60000
   * Referenced by: '<Root>/Constant1'
   */
  60000.0,

  /* Expression: 60000
   * Referenced by: '<Root>/Constant'
   */
  60000.0
};

/* Forward declaration for local functions */
static void AdaptivePacing_SystemCore_setup(freedomk64f_fxos8700_Adaptive_T *obj);
static void AdaptiveP_SystemCore_release_mt(const
  freedomk64f_fxos8700_Adaptive_T *obj);
static void AdaptivePa_SystemCore_delete_as(const
  freedomk64f_fxos8700_Adaptive_T *obj);
static void matlabCodegenHandle_matlabCo_go(freedomk64f_fxos8700_Adaptive_T *obj);
static void Adaptive_SystemCore_release_mt2(b_freedomk64f_I2CMasterWrite__T *obj);
static void AdaptiveP_SystemCore_delete_asm(b_freedomk64f_I2CMasterWrite__T *obj);
static void matlabCodegenHandle_matlabC_goq(b_freedomk64f_I2CMasterWrite__T *obj);
static void AdaptivePaci_SystemCore_release(const
  freedomk64f_DigitalWrite_Adap_T *obj);
static void AdaptivePacin_SystemCore_delete(const
  freedomk64f_DigitalWrite_Adap_T *obj);
static void matlabCodegenHandle_matlabCodeg(freedomk64f_DigitalWrite_Adap_T *obj);
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

static void AdaptiveP_SystemCore_release_mt(const
  freedomk64f_fxos8700_Adaptive_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_I2C_Close(obj->i2cobj.MW_I2C_HANDLE);
  }
}

static void AdaptivePa_SystemCore_delete_as(const
  freedomk64f_fxos8700_Adaptive_T *obj)
{
  AdaptiveP_SystemCore_release_mt(obj);
}

static void matlabCodegenHandle_matlabCo_go(freedomk64f_fxos8700_Adaptive_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    AdaptivePa_SystemCore_delete_as(obj);
  }
}

static void Adaptive_SystemCore_release_mt2(b_freedomk64f_I2CMasterWrite__T *obj)
{
  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;
  }
}

static void AdaptiveP_SystemCore_delete_asm(b_freedomk64f_I2CMasterWrite__T *obj)
{
  Adaptive_SystemCore_release_mt2(obj);
}

static void matlabCodegenHandle_matlabC_goq(b_freedomk64f_I2CMasterWrite__T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    AdaptiveP_SystemCore_delete_asm(obj);
  }
}

static void AdaptivePaci_SystemCore_release(const
  freedomk64f_DigitalWrite_Adap_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_digitalIO_close(obj->MW_DIGITALIO_HANDLE);
  }
}

static void AdaptivePacin_SystemCore_delete(const
  freedomk64f_DigitalWrite_Adap_T *obj)
{
  AdaptivePaci_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(freedomk64f_DigitalWrite_Adap_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    AdaptivePacin_SystemCore_delete(obj);
  }
}

/* System initialize for referenced model: 'AdaptivePacing' */
void AdaptivePacing_Init(DW_AdaptivePacing_f_T *localDW)
{
  freedomk64f_fxos8700_Adaptive_T *obj;
  freedomk64f_DigitalWrite_Adap_T *obj_0;

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
  localDW->obj.SampleTime = AdaptivePacing_P.FXOS87006AxesSensor_SampleTime;
  AdaptivePacing_SystemCore_setup(&localDW->obj);

  /* Start for MATLABSystem: '<Root>/Digital Write' */
  localDW->obj_d.matlabCodegenIsDeleted = true;
  localDW->obj_d.isInitialized = 0;
  localDW->obj_d.matlabCodegenIsDeleted = false;
  localDW->objisempty_e = true;
  obj_0 = &localDW->obj_d;
  localDW->obj_d.isSetupComplete = false;
  localDW->obj_d.isInitialized = 1;
  obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(42U, 1);
  localDW->obj_d.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Write1' */
  localDW->obj_c.matlabCodegenIsDeleted = true;
  localDW->obj_c.isInitialized = 0;
  localDW->obj_c.matlabCodegenIsDeleted = false;
  localDW->objisempty_b = true;
  obj_0 = &localDW->obj_c;
  localDW->obj_c.isSetupComplete = false;
  localDW->obj_c.isInitialized = 1;
  obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(44U, 1);
  localDW->obj_c.isSetupComplete = true;
}

/* Output and update for referenced model: 'AdaptivePacing' */
void AdaptivePacing(const uint16_T *rtu_OLRL, const uint8_T
                    *rtu_Maximum_Sensor_Rate, const uint8_T *rtu_Mode_Adaptivity,
                    const uint8_T *rtu_Reaction_Time, const uint8_T
                    *rtu_Recovery_Time, uint16_T *rty_Updated_Lower_Rate_Limit,
                    B_AdaptivePacing_c_T *localB, DW_AdaptivePacing_f_T *localDW)
{
  int16_T b_output[3];
  uint8_T status;
  uint8_T output_raw[6];
  uint8_T y[2];
  uint8_T b_x[2];
  real_T rtb_Divide1;
  real_T tmp;

  /* MATLABSystem: '<Root>/FXOS8700 6-Axes Sensor' */
  if (localDW->obj.SampleTime != AdaptivePacing_P.FXOS87006AxesSensor_SampleTime)
  {
    localDW->obj.SampleTime = AdaptivePacing_P.FXOS87006AxesSensor_SampleTime;
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
   *  MATLABSystem: '<Root>/FXOS8700 6-Axes Sensor'
   */
  tmp = ((real_T)(int16_T)(b_output[0] >> 2) * 0.244 / 1000.0 + (real_T)(int16_T)
         (b_output[1] >> 2) * 0.244 / 1000.0) + (real_T)(int16_T)(b_output[2] >>
    2) * 0.244 / 1000.0;

  /* Product: '<Root>/Divide1' incorporates:
   *  Constant: '<Root>/Constant1'
   *  DataTypeConversion: '<Root>/Data Type Conversion5'
   */
  rtb_Divide1 = AdaptivePacing_P.Constant1_Value / (real_T)*rtu_OLRL;

  /* Chart: '<Root>/Chart' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion4'
   *  Sum: '<Root>/Sum of Elements'
   */
  if (localDW->temporalCounter_i1 < MAX_uint32_T) {
    localDW->temporalCounter_i1++;
  }

  if (localDW->is_active_c1_AdaptivePacing == 0U) {
    localDW->is_active_c1_AdaptivePacing = 1U;
    localDW->is_c1_AdaptivePacing = AdaptivePacing_IN_TESTING;
    localB->LRL = rtb_Divide1;
  } else {
    switch (localDW->is_c1_AdaptivePacing) {
     case AdaptivePacing_IN_Constant:
      localDW->is_c1_AdaptivePacing = AdaptivePacing_IN_main;
      localB->LED_BLUE = false;
      localB->LED_RED = false;
      if ((rtb_Divide1 > localB->LRL) || rtIsNaN(localB->LRL)) {
        localB->LRL = rtb_Divide1;
      }

      if (!(localB->LRL < *rtu_Maximum_Sensor_Rate)) {
        localB->LRL = *rtu_Maximum_Sensor_Rate;
      }
      break;

     case AdaptivePacing_IN_Decreasing:
      if (localDW->temporalCounter_i1 >= *rtu_Recovery_Time) {
        localDW->is_c1_AdaptivePacing = AdaptivePacing_IN_main;
        localB->LED_BLUE = false;
        localB->LED_RED = false;
        if ((rtb_Divide1 > localB->LRL) || rtIsNaN(localB->LRL)) {
          localB->LRL = rtb_Divide1;
        }

        if (!(localB->LRL < *rtu_Maximum_Sensor_Rate)) {
          localB->LRL = *rtu_Maximum_Sensor_Rate;
        }
      }
      break;

     case AdaptivePacing_IN_Increasing:
      if (localDW->temporalCounter_i1 >= *rtu_Reaction_Time) {
        localDW->is_c1_AdaptivePacing = AdaptivePacing_IN_main;
        localB->LED_BLUE = false;
        localB->LED_RED = false;
        if ((rtb_Divide1 > localB->LRL) || rtIsNaN(localB->LRL)) {
          localB->LRL = rtb_Divide1;
        }

        if (!(localB->LRL < *rtu_Maximum_Sensor_Rate)) {
          localB->LRL = *rtu_Maximum_Sensor_Rate;
        }
      }
      break;

     case AdaptivePacing_IN_TESTING:
      localB->LRL = rtb_Divide1;
      localB->LED_BLUE = false;
      localB->LED_RED = false;
      break;

     case AdaptivePacing_IN_main:
      if ((*rtu_Mode_Adaptivity == 1) && (tmp < 1.05) && (localB->LRL >
           rtb_Divide1)) {
        localDW->is_c1_AdaptivePacing = AdaptivePacing_IN_Decreasing;
        localDW->temporalCounter_i1 = 0U;
        localB->LED_BLUE = true;
        localB->LED_RED = true;
        localB->LRL -= localDW->RateChange;
      } else if ((*rtu_Mode_Adaptivity == 1) && (tmp > 1.05) && (localB->LRL <
                  *rtu_Maximum_Sensor_Rate)) {
        localDW->is_c1_AdaptivePacing = AdaptivePacing_IN_Increasing;
        localDW->temporalCounter_i1 = 0U;
        localB->LED_BLUE = true;
        localB->LED_RED = true;
        localB->LRL += localDW->RateChange;
      } else if (*rtu_Mode_Adaptivity == 0) {
        localDW->is_c1_AdaptivePacing = AdaptivePacing_IN_Constant;
        localB->LRL = rtb_Divide1;
        localB->LED_BLUE = ((localB->LRL == 400.0) || localB->LED_BLUE);
        localB->LED_RED = true;
      } else {
        localDW->Avg = localDW->Avg * 0.7 + tmp * 0.3;
      }
      break;

     default:
      /* case IN_start: */
      if ((rtb_Divide1 > 0.0) && (rtb_Divide1 <= 2000.0)) {
        localB->LRL = rtb_Divide1;
        localDW->is_c1_AdaptivePacing = AdaptivePacing_IN_main;
        localB->LED_BLUE = false;
        localB->LED_RED = false;
        if (!(localB->LRL < *rtu_Maximum_Sensor_Rate)) {
          localB->LRL = *rtu_Maximum_Sensor_Rate;
        }
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* MATLABSystem: '<Root>/Digital Write' */
  MW_digitalIO_write(localDW->obj_d.MW_DIGITALIO_HANDLE, localB->LED_RED);

  /* MATLABSystem: '<Root>/Digital Write1' */
  MW_digitalIO_write(localDW->obj_c.MW_DIGITALIO_HANDLE, localB->LED_BLUE);

  /* DataTypeConversion: '<Root>/Data Type Conversion8' incorporates:
   *  Constant: '<Root>/Constant'
   *  Product: '<Root>/Divide'
   */
  tmp = floor(AdaptivePacing_P.Constant_Value / localB->LRL);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = fmod(tmp, 65536.0);
  }

  *rty_Updated_Lower_Rate_Limit = (uint16_T)(tmp < 0.0 ? (int32_T)(uint16_T)
    -(int16_T)(uint16_T)-tmp : (int32_T)(uint16_T)tmp);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion8' */
}

/* Termination for referenced model: 'AdaptivePacing' */
void AdaptivePacing_Term(DW_AdaptivePacing_f_T *localDW)
{
  /* Terminate for MATLABSystem: '<Root>/FXOS8700 6-Axes Sensor' */
  matlabCodegenHandle_matlabCo_go(&localDW->obj);
  matlabCodegenHandle_matlabC_goq(&localDW->obj.i2cobj);

  /* Terminate for MATLABSystem: '<Root>/Digital Write' */
  matlabCodegenHandle_matlabCodeg(&localDW->obj_d);

  /* Terminate for MATLABSystem: '<Root>/Digital Write1' */
  matlabCodegenHandle_matlabCodeg(&localDW->obj_c);
}

/* Model initialize function */
void AdaptivePacing_initialize(const char_T **rt_errorStatus,
  RT_MODEL_AdaptivePacing_T *const AdaptivePacing_M)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatusPointer(AdaptivePacing_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

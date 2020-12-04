/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Assignment2_4.c
 *
 * Code generated for Simulink model 'Assignment2_4'.
 *
 * Model version                  : 1.519
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Thu Dec  3 23:38:23 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Assignment2_4.h"
#include "Assignment2_4_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define Assignment2_4_IN_READ_PARAMS   ((uint8_T)1U)
#define Assignment2_4_IN_START_STATE   ((uint8_T)2U)
#define Assignment2_4_IN_WAIT_STATE    ((uint8_T)3U)
#define Assignment2_4_IN_WRITE_PARAMS  ((uint8_T)4U)

/* Block signals (default storage) */
B_Assignment2_4_T Assignment2_4_B;

/* Block states (default storage) */
DW_Assignment2_4_T Assignment2_4_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_Assignment2_4_T Assignment2_4_PrevZCX;

/* Real-time model */
RT_MODEL_Assignment2_4_T Assignment2_4_M_;
RT_MODEL_Assignment2_4_T *const Assignment2_4_M = &Assignment2_4_M_;

/* Forward declaration for local functions */
static void Assignment2__SystemCore_release(const
  freedomk64f_SCIRead_Assignmen_T *obj);
static void Assignment2_4_SystemCore_delete(const
  freedomk64f_SCIRead_Assignmen_T *obj);
static void matlabCodegenHandle_matlabCodeg(freedomk64f_SCIRead_Assignmen_T *obj);
static void Assignmen_SystemCore_release_dl(const
  freedomk64f_AnalogInput_Assig_T *obj);
static void Assignment_SystemCore_delete_dl(const
  freedomk64f_AnalogInput_Assig_T *obj);
static void matlabCodegenHandle_matlabCo_dl(freedomk64f_AnalogInput_Assig_T *obj);
static void Assignment_SystemCore_release_d(const
  freedomk64f_SCIWrite_Assignme_T *obj);
static void Assignment2_SystemCore_delete_d(const
  freedomk64f_SCIWrite_Assignme_T *obj);
static void matlabCodegenHandle_matlabCod_d(freedomk64f_SCIWrite_Assignme_T *obj);
static void Assign_SystemCore_release_dlbal(const
  freedomk64f_fxos8700_Assignme_T *obj);
static void Assignm_SystemCore_delete_dlbal(const
  freedomk64f_fxos8700_Assignme_T *obj);
static void matlabCodegenHandle_matla_dlbal(freedomk64f_fxos8700_Assignme_T *obj);
static void Assig_SystemCore_release_dlbala(b_freedomk64f_I2CMasterWrite__T *obj);
static void Assign_SystemCore_delete_dlbala(b_freedomk64f_I2CMasterWrite__T *obj);
static void matlabCodegenHandle_matl_dlbala(b_freedomk64f_I2CMasterWrite__T *obj);
static void Assignm_SystemCore_release_dlba(dsp_simulink_MovingStandardDe_T *obj);
static void Assignme_SystemCore_delete_dlba(dsp_simulink_MovingStandardDe_T *obj);
static void matlabCodegenHandle_matlab_dlba(dsp_simulink_MovingStandardDe_T *obj);
static void Assignment_SystemCore_setup_dlb(freedomk64f_fxos8700_Assignme_T *obj);
static void Assignment2_SystemCore_setup_dl(dsp_simulink_MovingStandardDe_T *obj,
  g_dsp_private_SlidingWindowVa_T *iobj_0);
static void Assignment2_4_SystemCore_setup(freedomk64f_SCIRead_Assignmen_T *obj);
static void Assignment2__SystemCore_setup_d(freedomk64f_SCIWrite_Assignme_T *obj);
static void Assignment2__SystemCore_release(const
  freedomk64f_SCIRead_Assignmen_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_SCI_Close(obj->MW_SCIHANDLE);
  }
}

static void Assignment2_4_SystemCore_delete(const
  freedomk64f_SCIRead_Assignmen_T *obj)
{
  Assignment2__SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(freedomk64f_SCIRead_Assignmen_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    Assignment2_4_SystemCore_delete(obj);
  }
}

static void Assignmen_SystemCore_release_dl(const
  freedomk64f_AnalogInput_Assig_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_AnalogIn_Stop(obj->MW_ANALOGIN_HANDLE);
    MW_AnalogIn_Close(obj->MW_ANALOGIN_HANDLE);
  }
}

static void Assignment_SystemCore_delete_dl(const
  freedomk64f_AnalogInput_Assig_T *obj)
{
  Assignmen_SystemCore_release_dl(obj);
}

static void matlabCodegenHandle_matlabCo_dl(freedomk64f_AnalogInput_Assig_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    Assignment_SystemCore_delete_dl(obj);
  }
}

static void Assignment_SystemCore_release_d(const
  freedomk64f_SCIWrite_Assignme_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_SCI_Close(obj->MW_SCIHANDLE);
  }
}

static void Assignment2_SystemCore_delete_d(const
  freedomk64f_SCIWrite_Assignme_T *obj)
{
  Assignment_SystemCore_release_d(obj);
}

static void matlabCodegenHandle_matlabCod_d(freedomk64f_SCIWrite_Assignme_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    Assignment2_SystemCore_delete_d(obj);
  }
}

static void Assign_SystemCore_release_dlbal(const
  freedomk64f_fxos8700_Assignme_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_I2C_Close(obj->i2cobj.MW_I2C_HANDLE);
  }
}

static void Assignm_SystemCore_delete_dlbal(const
  freedomk64f_fxos8700_Assignme_T *obj)
{
  Assign_SystemCore_release_dlbal(obj);
}

static void matlabCodegenHandle_matla_dlbal(freedomk64f_fxos8700_Assignme_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    Assignm_SystemCore_delete_dlbal(obj);
  }
}

static void Assig_SystemCore_release_dlbala(b_freedomk64f_I2CMasterWrite__T *obj)
{
  if (obj->isInitialized == 1) {
    obj->isInitialized = 2;
  }
}

static void Assign_SystemCore_delete_dlbala(b_freedomk64f_I2CMasterWrite__T *obj)
{
  Assig_SystemCore_release_dlbala(obj);
}

static void matlabCodegenHandle_matl_dlbala(b_freedomk64f_I2CMasterWrite__T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    Assign_SystemCore_delete_dlbala(obj);
  }
}

static void Assignm_SystemCore_release_dlba(dsp_simulink_MovingStandardDe_T *obj)
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

static void Assignme_SystemCore_delete_dlba(dsp_simulink_MovingStandardDe_T *obj)
{
  Assignm_SystemCore_release_dlba(obj);
}

static void matlabCodegenHandle_matlab_dlba(dsp_simulink_MovingStandardDe_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    Assignme_SystemCore_delete_dlba(obj);
  }
}

static void Assignment_SystemCore_setup_dlb(freedomk64f_fxos8700_Assignme_T *obj)
{
  uint32_T i2cname;
  uint8_T b_RegisterValue;
  uint8_T b_SwappedDataBytes[2];
  uint8_T status;
  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  Assignment2_4_B.ModeType = MW_I2C_MASTER;
  i2cname = 0;
  obj->i2cobj.MW_I2C_HANDLE = MW_I2C_Open(i2cname, Assignment2_4_B.ModeType);
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

static void Assignment2_SystemCore_setup_dl(dsp_simulink_MovingStandardDe_T *obj,
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

static void Assignment2_4_SystemCore_setup(freedomk64f_SCIRead_Assignmen_T *obj)
{
  MW_SCI_StopBits_Type StopBitsValue;
  MW_SCI_Parity_Type ParityValue;
  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  Assignment2_4_B.TxPinLoc = MW_UNDEFINED_VALUE;
  Assignment2_4_B.SCIModuleLoc_m = 0;
  obj->MW_SCIHANDLE = MW_SCI_Open(&Assignment2_4_B.SCIModuleLoc_m, false, 10U,
    Assignment2_4_B.TxPinLoc);
  MW_SCI_SetBaudrate(obj->MW_SCIHANDLE, 115200U);
  StopBitsValue = MW_SCI_STOPBITS_1;
  ParityValue = MW_SCI_PARITY_NONE;
  MW_SCI_SetFrameFormat(obj->MW_SCIHANDLE, 8, ParityValue, StopBitsValue);
  obj->isSetupComplete = true;
}

static void Assignment2__SystemCore_setup_d(freedomk64f_SCIWrite_Assignme_T *obj)
{
  MW_SCI_StopBits_Type StopBitsValue;
  MW_SCI_Parity_Type ParityValue;
  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  Assignment2_4_B.RxPinLoc = MW_UNDEFINED_VALUE;
  Assignment2_4_B.SCIModuleLoc = 0;
  obj->MW_SCIHANDLE = MW_SCI_Open(&Assignment2_4_B.SCIModuleLoc, false,
    Assignment2_4_B.RxPinLoc, 10U);
  MW_SCI_SetBaudrate(obj->MW_SCIHANDLE, 115200U);
  StopBitsValue = MW_SCI_STOPBITS_1;
  ParityValue = MW_SCI_PARITY_NONE;
  MW_SCI_SetFrameFormat(obj->MW_SCIHANDLE, 8, ParityValue, StopBitsValue);
  obj->isSetupComplete = true;
}

/* Model step function */
void Assignment2_4_step(void)
{
  uint8_T status;
  uint8_T TxDataLocChar[3];
  int16_T b_output[3];
  uint8_T output_raw[6];
  uint8_T b_x[2];
  g_dsp_private_SlidingWindowVa_T *obj;
  uint8_T rtb_TmpSignalConversionAtSerial[3];
  uint8_T rtb_MultiportSwitch1[2];
  int32_T a_tmp;

  /* MATLABSystem: '<Root>/Serial Receive' */
  if (Assignment2_4_DW.obj_c.SampleTime !=
      Assignment2_4_P.SerialReceive_SampleTime) {
    Assignment2_4_DW.obj_c.SampleTime = Assignment2_4_P.SerialReceive_SampleTime;
  }

  status = MW_SCI_Receive(Assignment2_4_DW.obj_c.MW_SCIHANDLE,
    Assignment2_4_B.RxDataLocChar, 27U);
  memcpy((void *)&Assignment2_4_B.RxData[0], (void *)
         &Assignment2_4_B.RxDataLocChar[0], (uint32_T)((size_t)27 * sizeof
          (uint8_T)));

  /* Chart: '<Root>/Chart' incorporates:
   *  MATLABSystem: '<Root>/Serial Receive'
   */
  if (Assignment2_4_DW.is_active_c8_Assignment2_4 == 0U) {
    Assignment2_4_DW.is_active_c8_Assignment2_4 = 1U;
    Assignment2_4_DW.is_c8_Assignment2_4 = Assignment2_4_IN_START_STATE;
    Assignment2_4_DW.uint16_bytes = 2.0;
    Assignment2_4_DW.uint8_bytes = 1.0;
  } else {
    switch (Assignment2_4_DW.is_c8_Assignment2_4) {
     case Assignment2_4_IN_READ_PARAMS:
      Assignment2_4_DW.is_c8_Assignment2_4 = Assignment2_4_IN_WAIT_STATE;
      break;

     case Assignment2_4_IN_START_STATE:
      Assignment2_4_DW.is_c8_Assignment2_4 = Assignment2_4_IN_WAIT_STATE;
      break;

     case Assignment2_4_IN_WAIT_STATE:
      if (status == 0) {
        if (Assignment2_4_B.RxData[0] == 10) {
          switch (Assignment2_4_B.RxData[1]) {
           case 20:
            Assignment2_4_DW.is_c8_Assignment2_4 = Assignment2_4_IN_WRITE_PARAMS;
            Assignment2_4_B.Mode_Chamber_Paced = Assignment2_4_B.RxData[2];
            Assignment2_4_B.Mode_Chamber_Sensed = Assignment2_4_B.RxData
              [(int32_T)(Assignment2_4_DW.uint8_bytes + 3.0) - 1];
            Assignment2_4_B.offset = (Assignment2_4_DW.uint8_bytes + 3.0) +
              Assignment2_4_DW.uint8_bytes;
            Assignment2_4_B.Mode_Response = Assignment2_4_B.RxData[(int32_T)
              Assignment2_4_B.offset - 1];
            Assignment2_4_B.offset += Assignment2_4_DW.uint8_bytes;
            Assignment2_4_B.Ventricular_Amplitude = Assignment2_4_B.RxData
              [(int32_T)Assignment2_4_B.offset - 1];
            Assignment2_4_B.offset += Assignment2_4_DW.uint8_bytes;
            Assignment2_4_B.Ventricular_Pulse_Width = Assignment2_4_B.RxData
              [(int32_T)Assignment2_4_B.offset - 1];
            Assignment2_4_B.offset += Assignment2_4_DW.uint8_bytes;
            Assignment2_4_B.Ventricular_Sensitivity = Assignment2_4_B.RxData
              [(int32_T)Assignment2_4_B.offset - 1];
            Assignment2_4_B.offset += Assignment2_4_DW.uint8_bytes;
            Assignment2_4_B.Atrial_Amplitude = Assignment2_4_B.RxData[(int32_T)
              Assignment2_4_B.offset - 1];
            Assignment2_4_B.offset += Assignment2_4_DW.uint8_bytes;
            Assignment2_4_B.Atrial_Pulse_Width = Assignment2_4_B.RxData[(int32_T)
              Assignment2_4_B.offset - 1];
            Assignment2_4_B.offset += Assignment2_4_DW.uint8_bytes;
            Assignment2_4_B.Atrial_Sensitivity = Assignment2_4_B.RxData[(int32_T)
              Assignment2_4_B.offset - 1];
            Assignment2_4_B.offset += Assignment2_4_DW.uint8_bytes;
            Assignment2_4_B.Hysterisis = Assignment2_4_B.RxData[(int32_T)
              Assignment2_4_B.offset - 1];
            Assignment2_4_B.offset += Assignment2_4_DW.uint8_bytes;
            memcpy((void *)&Assignment2_4_B.Lower_Rate_Limit, (void *)
                   &Assignment2_4_B.RxData[(int32_T)Assignment2_4_B.offset - 1],
                   (uint32_T)((size_t)1 * sizeof(uint16_T)));
            Assignment2_4_B.offset += Assignment2_4_DW.uint16_bytes;
            memcpy((void *)&Assignment2_4_B.AV_Delay, (void *)
                   &Assignment2_4_B.RxData[(int32_T)Assignment2_4_B.offset - 1],
                   (uint32_T)((size_t)1 * sizeof(uint16_T)));
            Assignment2_4_B.offset += Assignment2_4_DW.uint16_bytes;
            memcpy((void *)&Assignment2_4_B.VRP, (void *)
                   &Assignment2_4_B.RxData[(int32_T)Assignment2_4_B.offset - 1],
                   (uint32_T)((size_t)1 * sizeof(uint16_T)));
            Assignment2_4_B.offset += Assignment2_4_DW.uint16_bytes;
            memcpy((void *)&Assignment2_4_B.ARP, (void *)
                   &Assignment2_4_B.RxData[(int32_T)Assignment2_4_B.offset - 1],
                   (uint32_T)((size_t)1 * sizeof(uint16_T)));
            Assignment2_4_B.offset += Assignment2_4_DW.uint16_bytes;
            memcpy((void *)&Assignment2_4_B.Hysterisis_Escape_Interval, (void *)
                   &Assignment2_4_B.RxData[(int32_T)Assignment2_4_B.offset - 1],
                   (uint32_T)((size_t)1 * sizeof(uint16_T)));
            Assignment2_4_B.offset += Assignment2_4_DW.uint16_bytes;
            Assignment2_4_B.Max_Sensor_Rate = Assignment2_4_B.RxData[(int32_T)
              Assignment2_4_B.offset - 1];
            Assignment2_4_B.offset += Assignment2_4_DW.uint8_bytes;
            Assignment2_4_B.Mode_Adaptivity = Assignment2_4_B.RxData[(int32_T)
              Assignment2_4_B.offset - 1];
            Assignment2_4_B.offset += Assignment2_4_DW.uint8_bytes;
            Assignment2_4_B.Reaction_Time = Assignment2_4_B.RxData[(int32_T)
              Assignment2_4_B.offset - 1];
            Assignment2_4_B.offset += Assignment2_4_DW.uint8_bytes;
            Assignment2_4_B.Response_Factor = Assignment2_4_B.RxData[(int32_T)
              Assignment2_4_B.offset - 1];
            Assignment2_4_B.offset += Assignment2_4_DW.uint8_bytes;
            Assignment2_4_B.Recovery_Time = Assignment2_4_B.RxData[(int32_T)
              Assignment2_4_B.offset - 1];
            break;

           case 30:
            Assignment2_4_DW.is_c8_Assignment2_4 = Assignment2_4_IN_READ_PARAMS;
            Assignment2_4_B.Param_Number = Assignment2_4_B.RxData[2];
            break;

           default:
            Assignment2_4_DW.is_c8_Assignment2_4 = Assignment2_4_IN_WAIT_STATE;
            break;
          }
        } else {
          Assignment2_4_DW.is_c8_Assignment2_4 = Assignment2_4_IN_WAIT_STATE;
        }
      }
      break;

     default:
      /* case IN_WRITE_PARAMS: */
      Assignment2_4_DW.is_c8_Assignment2_4 = Assignment2_4_IN_WAIT_STATE;
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* S-Function (any2byte): '<S2>/Byte Pack5' */

  /* Pack: <S2>/Byte Pack5 */
  (void) memcpy(&Assignment2_4_B.BytePack5[0], &Assignment2_4_B.Lower_Rate_Limit,
                2);

  /* S-Function (any2byte): '<S2>/Byte Pack6' */

  /* Pack: <S2>/Byte Pack6 */
  (void) memcpy(&Assignment2_4_B.BytePack6[0], &Assignment2_4_B.AV_Delay,
                2);

  /* S-Function (any2byte): '<S2>/Byte Pack1' */

  /* Pack: <S2>/Byte Pack1 */
  (void) memcpy(&Assignment2_4_B.BytePack1[0], &Assignment2_4_B.VRP,
                2);

  /* S-Function (any2byte): '<S2>/Byte Pack7' */

  /* Pack: <S2>/Byte Pack7 */
  (void) memcpy(&Assignment2_4_B.BytePack7[0], &Assignment2_4_B.ARP,
                2);

  /* S-Function (any2byte): '<S2>/Byte Pack4' */

  /* Pack: <S2>/Byte Pack4 */
  (void) memcpy(&Assignment2_4_B.BytePack4[0],
                &Assignment2_4_B.Hysterisis_Escape_Interval,
                2);

  /* MATLABSystem: '<S2>/ATR_SIGNAL' */
  if (Assignment2_4_DW.obj_i.SampleTime != Assignment2_4_P.ATR_SIGNAL_SampleTime)
  {
    Assignment2_4_DW.obj_i.SampleTime = Assignment2_4_P.ATR_SIGNAL_SampleTime;
  }

  MW_AnalogIn_Start(Assignment2_4_DW.obj_i.MW_ANALOGIN_HANDLE);
  MW_AnalogInSingle_ReadResult(Assignment2_4_DW.obj_i.MW_ANALOGIN_HANDLE,
    &Assignment2_4_B.offset, 7);

  /* DataTypeConversion: '<S2>/Data Type Conversion2' incorporates:
   *  Gain: '<S2>/Gain'
   *  MATLABSystem: '<S2>/ATR_SIGNAL'
   */
  Assignment2_4_B.offset = floor(Assignment2_4_P.Gain_Gain_i *
    Assignment2_4_B.offset);
  if (rtIsNaN(Assignment2_4_B.offset) || rtIsInf(Assignment2_4_B.offset)) {
    Assignment2_4_B.offset = 0.0;
  } else {
    Assignment2_4_B.offset = fmod(Assignment2_4_B.offset, 65536.0);
  }

  Assignment2_4_B.DataTypeConversion2 = (uint16_T)(Assignment2_4_B.offset < 0.0 ?
    (int32_T)(uint16_T)-(int16_T)(uint16_T)-Assignment2_4_B.offset : (int32_T)
    (uint16_T)Assignment2_4_B.offset);

  /* End of DataTypeConversion: '<S2>/Data Type Conversion2' */

  /* S-Function (any2byte): '<S2>/Byte Pack30' */

  /* Pack: <S2>/Byte Pack30 */
  (void) memcpy(&Assignment2_4_B.BytePack30[0],
                &Assignment2_4_B.DataTypeConversion2,
                2);

  /* MATLABSystem: '<S2>/VENT_SIGNAL' */
  if (Assignment2_4_DW.obj_b.SampleTime !=
      Assignment2_4_P.VENT_SIGNAL_SampleTime) {
    Assignment2_4_DW.obj_b.SampleTime = Assignment2_4_P.VENT_SIGNAL_SampleTime;
  }

  MW_AnalogIn_Start(Assignment2_4_DW.obj_b.MW_ANALOGIN_HANDLE);
  MW_AnalogInSingle_ReadResult(Assignment2_4_DW.obj_b.MW_ANALOGIN_HANDLE,
    &Assignment2_4_B.offset, 7);

  /* DataTypeConversion: '<S2>/Data Type Conversion3' incorporates:
   *  Gain: '<S2>/Gain1'
   *  MATLABSystem: '<S2>/VENT_SIGNAL'
   */
  Assignment2_4_B.offset = floor(Assignment2_4_P.Gain1_Gain *
    Assignment2_4_B.offset);
  if (rtIsNaN(Assignment2_4_B.offset) || rtIsInf(Assignment2_4_B.offset)) {
    Assignment2_4_B.offset = 0.0;
  } else {
    Assignment2_4_B.offset = fmod(Assignment2_4_B.offset, 65536.0);
  }

  Assignment2_4_B.DataTypeConversion3 = (uint16_T)(Assignment2_4_B.offset < 0.0 ?
    (int32_T)(uint16_T)-(int16_T)(uint16_T)-Assignment2_4_B.offset : (int32_T)
    (uint16_T)Assignment2_4_B.offset);

  /* End of DataTypeConversion: '<S2>/Data Type Conversion3' */

  /* S-Function (any2byte): '<S2>/Byte Pack31' */

  /* Pack: <S2>/Byte Pack31 */
  (void) memcpy(&Assignment2_4_B.BytePack31[0],
                &Assignment2_4_B.DataTypeConversion3,
                2);

  /* MultiPortSwitch: '<S2>/Multiport Switch1' */
  switch (Assignment2_4_B.Param_Number) {
   case 1:
    rtb_MultiportSwitch1[0] = Assignment2_4_B.Mode_Chamber_Paced;
    rtb_MultiportSwitch1[1] = Assignment2_4_B.Mode_Chamber_Paced;
    break;

   case 2:
    rtb_MultiportSwitch1[0] = Assignment2_4_B.Mode_Chamber_Sensed;
    rtb_MultiportSwitch1[1] = Assignment2_4_B.Mode_Chamber_Sensed;
    break;

   case 3:
    rtb_MultiportSwitch1[0] = Assignment2_4_B.Mode_Response;
    rtb_MultiportSwitch1[1] = Assignment2_4_B.Mode_Response;
    break;

   case 4:
    rtb_MultiportSwitch1[0] = Assignment2_4_B.Ventricular_Amplitude;
    rtb_MultiportSwitch1[1] = Assignment2_4_B.Ventricular_Amplitude;
    break;

   case 5:
    rtb_MultiportSwitch1[0] = Assignment2_4_B.Ventricular_Pulse_Width;
    rtb_MultiportSwitch1[1] = Assignment2_4_B.Ventricular_Pulse_Width;
    break;

   case 6:
    rtb_MultiportSwitch1[0] = Assignment2_4_B.Ventricular_Sensitivity;
    rtb_MultiportSwitch1[1] = Assignment2_4_B.Ventricular_Sensitivity;
    break;

   case 7:
    rtb_MultiportSwitch1[0] = Assignment2_4_B.Atrial_Amplitude;
    rtb_MultiportSwitch1[1] = Assignment2_4_B.Atrial_Amplitude;
    break;

   case 8:
    rtb_MultiportSwitch1[0] = Assignment2_4_B.Atrial_Pulse_Width;
    rtb_MultiportSwitch1[1] = Assignment2_4_B.Atrial_Pulse_Width;
    break;

   case 9:
    rtb_MultiportSwitch1[0] = Assignment2_4_B.Atrial_Sensitivity;
    rtb_MultiportSwitch1[1] = Assignment2_4_B.Atrial_Sensitivity;
    break;

   case 10:
    rtb_MultiportSwitch1[0] = Assignment2_4_B.Hysterisis;
    rtb_MultiportSwitch1[1] = Assignment2_4_B.Hysterisis;
    break;

   case 11:
    rtb_MultiportSwitch1[0] = Assignment2_4_B.BytePack5[0];
    rtb_MultiportSwitch1[1] = Assignment2_4_B.BytePack5[1];
    break;

   case 12:
    rtb_MultiportSwitch1[0] = Assignment2_4_B.BytePack6[0];
    rtb_MultiportSwitch1[1] = Assignment2_4_B.BytePack6[1];
    break;

   case 13:
    rtb_MultiportSwitch1[0] = Assignment2_4_B.BytePack1[0];
    rtb_MultiportSwitch1[1] = Assignment2_4_B.BytePack1[1];
    break;

   case 14:
    rtb_MultiportSwitch1[0] = Assignment2_4_B.BytePack7[0];
    rtb_MultiportSwitch1[1] = Assignment2_4_B.BytePack7[1];
    break;

   case 15:
    rtb_MultiportSwitch1[0] = Assignment2_4_B.BytePack4[0];
    rtb_MultiportSwitch1[1] = Assignment2_4_B.BytePack4[1];
    break;

   case 16:
    rtb_MultiportSwitch1[0] = Assignment2_4_B.Max_Sensor_Rate;
    rtb_MultiportSwitch1[1] = Assignment2_4_B.Max_Sensor_Rate;
    break;

   case 17:
    rtb_MultiportSwitch1[0] = Assignment2_4_B.Mode_Adaptivity;
    rtb_MultiportSwitch1[1] = Assignment2_4_B.Mode_Adaptivity;
    break;

   case 18:
    rtb_MultiportSwitch1[0] = Assignment2_4_B.Reaction_Time;
    rtb_MultiportSwitch1[1] = Assignment2_4_B.Reaction_Time;
    break;

   case 19:
    rtb_MultiportSwitch1[0] = Assignment2_4_B.Response_Factor;
    rtb_MultiportSwitch1[1] = Assignment2_4_B.Response_Factor;
    break;

   case 20:
    rtb_MultiportSwitch1[0] = Assignment2_4_B.Recovery_Time;
    rtb_MultiportSwitch1[1] = Assignment2_4_B.Recovery_Time;
    break;

   case 21:
    rtb_MultiportSwitch1[0] = Assignment2_4_B.BytePack30[0];
    rtb_MultiportSwitch1[1] = Assignment2_4_B.BytePack30[1];
    break;

   default:
    rtb_MultiportSwitch1[0] = Assignment2_4_B.BytePack31[0];
    rtb_MultiportSwitch1[1] = Assignment2_4_B.BytePack31[1];
    break;
  }

  /* End of MultiPortSwitch: '<S2>/Multiport Switch1' */

  /* SignalConversion generated from: '<S2>/Serial Transmit1' */
  rtb_TmpSignalConversionAtSerial[0] = Assignment2_4_B.Param_Number;
  rtb_TmpSignalConversionAtSerial[1] = rtb_MultiportSwitch1[0];
  rtb_TmpSignalConversionAtSerial[2] = rtb_MultiportSwitch1[1];

  /* MATLABSystem: '<S2>/Serial Transmit1' */
  status = 1U;
  while (status != 0) {
    memcpy((void *)&TxDataLocChar[0], (void *)&rtb_TmpSignalConversionAtSerial[0],
           (uint32_T)((size_t)3 * sizeof(uint8_T)));
    status = MW_SCI_Transmit(Assignment2_4_DW.obj_m.MW_SCIHANDLE, TxDataLocChar,
      3U);
  }

  /* End of MATLABSystem: '<S2>/Serial Transmit1' */

  /* ModelReference: '<Root>/Model1' incorporates:
   *  DataStoreRead: '<Root>/Data Store Read'
   *  DataStoreRead: '<Root>/Data Store Read1'
   *  DataStoreRead: '<Root>/Data Store Read10'
   *  DataStoreRead: '<Root>/Data Store Read11'
   *  DataStoreRead: '<Root>/Data Store Read12'
   *  DataStoreRead: '<Root>/Data Store Read13'
   *  DataStoreRead: '<Root>/Data Store Read14'
   *  DataStoreRead: '<Root>/Data Store Read15'
   *  DataStoreRead: '<Root>/Data Store Read16'
   *  DataStoreRead: '<Root>/Data Store Read17'
   *  DataStoreRead: '<Root>/Data Store Read18'
   *  DataStoreRead: '<Root>/Data Store Read19'
   *  DataStoreRead: '<Root>/Data Store Read2'
   *  DataStoreRead: '<Root>/Data Store Read20'
   *  DataStoreRead: '<Root>/Data Store Read3'
   *  DataStoreRead: '<Root>/Data Store Read4'
   *  DataStoreRead: '<Root>/Data Store Read5'
   *  DataStoreRead: '<Root>/Data Store Read6'
   *  DataStoreRead: '<Root>/Data Store Read7'
   *  DataStoreRead: '<Root>/Data Store Read8'
   *  DataStoreRead: '<Root>/Data Store Read9'
   */
  PTHS(&Assignment2_4_DW.Mode_Chamber_Paced,
       &Assignment2_4_DW.Mode_Chamber_Sensed, &Assignment2_4_DW.Mode_Response,
       &Assignment2_4_DW.Ventricular_Amplitude,
       &Assignment2_4_DW.Ventricular_Pulse_Width,
       &Assignment2_4_DW.Ventricular_Sensitivity,
       &Assignment2_4_DW.Atrial_Amplitude, &Assignment2_4_DW.Atrial_Pulse_Width,
       &Assignment2_4_DW.Atrial_Sensitivity, &Assignment2_4_DW.Hysterisis,
       &Assignment2_4_DW.Lower_Rate_Limit, &Assignment2_4_DW.AV_Delay,
       &Assignment2_4_DW.VRP, &Assignment2_4_DW.ARP,
       &Assignment2_4_DW.Hysterisis_Escape_Interval,
       &Assignment2_4_DW.Max_Sensor_Rate, &Assignment2_4_DW.Mode_Adaptivity,
       &Assignment2_4_DW.Reaction_Time, &Assignment2_4_DW.Response_Factor,
       &Assignment2_4_DW.Recovery_Time, &Assignment2_4_DW.Smoothed_Acceleration,
       &Assignment2_4_B.Trigger, &(Assignment2_4_DW.Model1_InstanceData.rtb),
       &(Assignment2_4_DW.Model1_InstanceData.rtdw));

  /* DataTypeConversion: '<Root>/Data Type Conversion' incorporates:
   *  DataStoreWrite: '<S3>/Data Store Write4'
   */
  Assignment2_4_DW.Ventricular_Pulse_Width =
    Assignment2_4_B.Ventricular_Pulse_Width;

  /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
   *  DataStoreWrite: '<S3>/Data Store Write7'
   */
  Assignment2_4_DW.Atrial_Pulse_Width = Assignment2_4_B.Atrial_Pulse_Width;

  /* Outputs for Triggered SubSystem: '<Root>/Triggered Subsystem' incorporates:
   *  TriggerPort: '<S3>/Trigger'
   */
  if ((!Assignment2_4_B.Trigger) &&
      (Assignment2_4_PrevZCX.TriggeredSubsystem_Trig_ZCE != ZERO_ZCSIG)) {
    /* MATLABSystem: '<S3>/FXOS8700 6-Axes Sensor1' */
    if (Assignment2_4_DW.obj_o.SampleTime !=
        Assignment2_4_P.FXOS87006AxesSensor1_SampleTime) {
      Assignment2_4_DW.obj_o.SampleTime =
        Assignment2_4_P.FXOS87006AxesSensor1_SampleTime;
    }

    status = 1U;
    status = MW_I2C_MasterWrite(Assignment2_4_DW.obj_o.i2cobj.MW_I2C_HANDLE, 29U,
      &status, 1U, true, false);
    if (0 == status) {
      MW_I2C_MasterRead(Assignment2_4_DW.obj_o.i2cobj.MW_I2C_HANDLE, 29U,
                        output_raw, 6U, false, true);
      memcpy((void *)&b_output[0], (void *)&output_raw[0], (uint32_T)((size_t)3 *
              sizeof(int16_T)));
      memcpy((void *)&rtb_MultiportSwitch1[0], (void *)&b_output[0], (uint32_T)
             ((size_t)2 * sizeof(uint8_T)));
      b_x[0] = rtb_MultiportSwitch1[1];
      b_x[1] = rtb_MultiportSwitch1[0];
      memcpy((void *)&b_output[0], (void *)&b_x[0], (uint32_T)((size_t)1 *
              sizeof(int16_T)));
      memcpy((void *)&rtb_MultiportSwitch1[0], (void *)&b_output[1], (uint32_T)
             ((size_t)2 * sizeof(uint8_T)));
      b_x[0] = rtb_MultiportSwitch1[1];
      b_x[1] = rtb_MultiportSwitch1[0];
      memcpy((void *)&b_output[1], (void *)&b_x[0], (uint32_T)((size_t)1 *
              sizeof(int16_T)));
      memcpy((void *)&rtb_MultiportSwitch1[0], (void *)&b_output[2], (uint32_T)
             ((size_t)2 * sizeof(uint8_T)));
      b_x[0] = rtb_MultiportSwitch1[1];
      b_x[1] = rtb_MultiportSwitch1[0];
      memcpy((void *)&b_output[2], (void *)&b_x[0], (uint32_T)((size_t)1 *
              sizeof(int16_T)));
    } else {
      b_output[0] = 0;
      b_output[1] = 0;
      b_output[2] = 0;
    }

    Assignment2_4_B.offset = (real_T)(int16_T)(b_output[0] >> 2) * 0.244 /
      1000.0;
    Assignment2_4_B.SquareRoot1 = (real_T)(int16_T)(b_output[1] >> 2) * 0.244 /
      1000.0;
    Assignment2_4_B.T = (real_T)(int16_T)(b_output[2] >> 2) * 0.244 / 1000.0;

    /* End of MATLABSystem: '<S3>/FXOS8700 6-Axes Sensor1' */

    /* Sqrt: '<S3>/Square Root1' incorporates:
     *  Math: '<S3>/Magnitude Square5'
     *  Sum: '<S3>/Sum of Elements'
     *
     * About '<S3>/Magnitude Square5':
     *  Operator: magnitude^2
     */
    Assignment2_4_B.SquareRoot1 = sqrt((Assignment2_4_B.offset *
      Assignment2_4_B.offset + Assignment2_4_B.SquareRoot1 *
      Assignment2_4_B.SquareRoot1) + Assignment2_4_B.T * Assignment2_4_B.T);

    /* MATLABSystem: '<S3>/Moving Standard Deviation1' */
    if (Assignment2_4_DW.obj.TunablePropsChanged) {
      Assignment2_4_DW.obj.TunablePropsChanged = false;
    }

    obj = Assignment2_4_DW.obj.pStatistic;
    if (obj->isInitialized != 1) {
      obj->isSetupComplete = false;
      obj->isInitialized = 1;
      obj->pReverseSamples[0] = 0.0;
      obj->pReverseSamples[1] = 0.0;
      obj->pReverseSamples[2] = 0.0;
      obj->pReverseT[0] = 0.0;
      obj->pReverseT[1] = 0.0;
      obj->pReverseT[2] = 0.0;
      obj->pReverseS[0] = 0.0;
      obj->pReverseS[1] = 0.0;
      obj->pReverseS[2] = 0.0;
      obj->pT = 0.0;
      obj->pS = 0.0;
      obj->pM = 0.0;
      obj->pCounter = 0.0;
      obj->isSetupComplete = true;
      obj->pReverseSamples[0] = 0.0;
      obj->pReverseSamples[1] = 0.0;
      obj->pReverseSamples[2] = 0.0;
      obj->pReverseT[0] = 0.0;
      obj->pReverseT[1] = 0.0;
      obj->pReverseT[2] = 0.0;
      obj->pReverseS[0] = 0.0;
      obj->pReverseS[1] = 0.0;
      obj->pReverseS[2] = 0.0;
      obj->pT = 0.0;
      obj->pS = 0.0;
      obj->pM = 0.0;
      obj->pCounter = 1.0;
    }

    Assignment2_4_B.MagnitudeSquare5[0] = obj->pReverseSamples[0];
    Assignment2_4_B.MagnitudeSquare5[1] = obj->pReverseSamples[1];
    Assignment2_4_B.MagnitudeSquare5[2] = obj->pReverseSamples[2];
    Assignment2_4_B.reverseT[0] = obj->pReverseT[0];
    Assignment2_4_B.reverseT[1] = obj->pReverseT[1];
    Assignment2_4_B.reverseT[2] = obj->pReverseT[2];
    Assignment2_4_B.reverseS[0] = obj->pReverseS[0];
    Assignment2_4_B.reverseS[1] = obj->pReverseS[1];
    Assignment2_4_B.reverseS[2] = obj->pReverseS[2];
    Assignment2_4_B.T = obj->pT;
    Assignment2_4_B.S = obj->pS;
    Assignment2_4_B.M = obj->pM;
    Assignment2_4_B.offset = obj->pCounter;
    Assignment2_4_B.T += Assignment2_4_B.SquareRoot1;
    Assignment2_4_B.Mprev = Assignment2_4_B.M;
    Assignment2_4_B.M += 1.0 / Assignment2_4_B.offset *
      (Assignment2_4_B.SquareRoot1 - Assignment2_4_B.M);
    Assignment2_4_B.Mprev = Assignment2_4_B.SquareRoot1 - Assignment2_4_B.Mprev;
    Assignment2_4_B.S += (Assignment2_4_B.offset - 1.0) * Assignment2_4_B.Mprev *
      Assignment2_4_B.Mprev / Assignment2_4_B.offset;
    a_tmp = (int32_T)(3.0 - Assignment2_4_B.offset) - 1;
    Assignment2_4_B.Mprev = (3.0 - Assignment2_4_B.offset) /
      Assignment2_4_B.offset * Assignment2_4_B.T -
      Assignment2_4_B.reverseT[a_tmp];
    Assignment2_4_B.Mprev = (Assignment2_4_B.offset / (((3.0 -
      Assignment2_4_B.offset) + Assignment2_4_B.offset) * (3.0 -
      Assignment2_4_B.offset)) * (Assignment2_4_B.Mprev * Assignment2_4_B.Mprev)
      + (Assignment2_4_B.reverseS[a_tmp] + Assignment2_4_B.S)) / 2.0;
    Assignment2_4_B.MagnitudeSquare5[a_tmp] = Assignment2_4_B.SquareRoot1;
    if (Assignment2_4_B.offset < 2.0) {
      Assignment2_4_B.offset++;
    } else {
      Assignment2_4_B.offset = 1.0;
      Assignment2_4_B.reverseT[0] = Assignment2_4_B.MagnitudeSquare5[0];
      Assignment2_4_B.reverseT[1] = Assignment2_4_B.MagnitudeSquare5[0] +
        Assignment2_4_B.MagnitudeSquare5[1];
      Assignment2_4_B.SquareRoot1 = 0.0 * Assignment2_4_B.MagnitudeSquare5[0] *
        Assignment2_4_B.MagnitudeSquare5[0];
      Assignment2_4_B.reverseS[0] = Assignment2_4_B.SquareRoot1;
      Assignment2_4_B.reverseT[2] = Assignment2_4_B.reverseT[1] +
        Assignment2_4_B.MagnitudeSquare5[2];
      Assignment2_4_B.T = Assignment2_4_B.MagnitudeSquare5[1] -
        Assignment2_4_B.MagnitudeSquare5[0];
      Assignment2_4_B.reverseS[1] = Assignment2_4_B.T * Assignment2_4_B.T / 2.0
        + Assignment2_4_B.SquareRoot1;
      Assignment2_4_B.T = 0.0;
      Assignment2_4_B.S = 0.0;
      Assignment2_4_B.M = 0.0;
    }

    obj->pReverseSamples[0] = Assignment2_4_B.MagnitudeSquare5[0];
    obj->pReverseSamples[1] = Assignment2_4_B.MagnitudeSquare5[1];
    obj->pReverseSamples[2] = Assignment2_4_B.MagnitudeSquare5[2];
    obj->pReverseT[0] = Assignment2_4_B.reverseT[0];
    obj->pReverseT[1] = Assignment2_4_B.reverseT[1];
    obj->pReverseT[2] = Assignment2_4_B.reverseT[2];
    obj->pReverseS[0] = Assignment2_4_B.reverseS[0];
    obj->pReverseS[1] = Assignment2_4_B.reverseS[1];
    obj->pReverseS[2] = Assignment2_4_B.reverseS[2];
    obj->pT = Assignment2_4_B.T;
    obj->pS = Assignment2_4_B.S;
    obj->pM = Assignment2_4_B.M;
    obj->pCounter = Assignment2_4_B.offset;

    /* Gain: '<S3>/Gain' incorporates:
     *  DataStoreWrite: '<S3>/Data Store Write21'
     *  MATLABSystem: '<S3>/Moving Standard Deviation1'
     */
    Assignment2_4_DW.Smoothed_Acceleration = Assignment2_4_P.Gain_Gain * sqrt
      (Assignment2_4_B.Mprev);

    /* DataTypeConversion: '<S3>/Data Type Conversion1' incorporates:
     *  DataStoreWrite: '<S3>/Data Store Write10'
     *  DataTypeConversion: '<S3>/Data Type Conversion'
     */
    Assignment2_4_DW.Lower_Rate_Limit = Assignment2_4_B.Lower_Rate_Limit;

    /* DataStoreWrite: '<S3>/Data Store Write' */
    Assignment2_4_DW.Mode_Chamber_Paced = Assignment2_4_B.Mode_Chamber_Paced;

    /* DataStoreWrite: '<S3>/Data Store Write1' */
    Assignment2_4_DW.Mode_Chamber_Sensed = Assignment2_4_B.Mode_Chamber_Sensed;

    /* DataStoreWrite: '<S3>/Data Store Write2' */
    Assignment2_4_DW.Mode_Response = Assignment2_4_B.Mode_Response;

    /* DataStoreWrite: '<S3>/Data Store Write3' */
    Assignment2_4_DW.Ventricular_Amplitude =
      Assignment2_4_B.Ventricular_Amplitude;

    /* DataStoreWrite: '<S3>/Data Store Write5' */
    Assignment2_4_DW.Ventricular_Sensitivity =
      Assignment2_4_B.Ventricular_Sensitivity;

    /* DataStoreWrite: '<S3>/Data Store Write6' */
    Assignment2_4_DW.Atrial_Amplitude = Assignment2_4_B.Atrial_Amplitude;

    /* DataStoreWrite: '<S3>/Data Store Write8' */
    Assignment2_4_DW.Atrial_Sensitivity = Assignment2_4_B.Atrial_Sensitivity;

    /* DataStoreWrite: '<S3>/Data Store Write9' */
    Assignment2_4_DW.Hysterisis = Assignment2_4_B.Hysterisis;

    /* DataStoreWrite: '<S3>/Data Store Write11' */
    Assignment2_4_DW.AV_Delay = Assignment2_4_B.AV_Delay;

    /* DataStoreWrite: '<S3>/Data Store Write12' */
    Assignment2_4_DW.VRP = Assignment2_4_B.VRP;

    /* DataStoreWrite: '<S3>/Data Store Write13' */
    Assignment2_4_DW.ARP = Assignment2_4_B.ARP;

    /* DataStoreWrite: '<S3>/Data Store Write14' */
    Assignment2_4_DW.Hysterisis_Escape_Interval =
      Assignment2_4_B.Hysterisis_Escape_Interval;

    /* DataStoreWrite: '<S3>/Data Store Write15' */
    Assignment2_4_DW.Max_Sensor_Rate = Assignment2_4_B.Max_Sensor_Rate;

    /* DataStoreWrite: '<S3>/Data Store Write16' */
    Assignment2_4_DW.Mode_Adaptivity = Assignment2_4_B.Mode_Adaptivity;

    /* DataStoreWrite: '<S3>/Data Store Write17' */
    Assignment2_4_DW.Reaction_Time = Assignment2_4_B.Reaction_Time;

    /* DataStoreWrite: '<S3>/Data Store Write18' */
    Assignment2_4_DW.Response_Factor = Assignment2_4_B.Response_Factor;

    /* DataStoreWrite: '<S3>/Data Store Write19' */
    Assignment2_4_DW.Recovery_Time = Assignment2_4_B.Recovery_Time;
  }

  Assignment2_4_PrevZCX.TriggeredSubsystem_Trig_ZCE = Assignment2_4_B.Trigger;

  /* End of Outputs for SubSystem: '<Root>/Triggered Subsystem' */
}

/* Model initialize function */
void Assignment2_4_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* Model Initialize function for ModelReference Block: '<Root>/Model1' */
  PTHS_initialize(rtmGetErrorStatusPointer(Assignment2_4_M),
                  &(Assignment2_4_DW.Model1_InstanceData.rtm));

  {
    freedomk64f_AnalogInput_Assig_T *obj;
    freedomk64f_fxos8700_Assignme_T *obj_0;
    g_dsp_private_SlidingWindowVa_T *obj_1;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory' */
    Assignment2_4_DW.Smoothed_Acceleration =
      Assignment2_4_P.DataStoreMemory_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory15' */
    Assignment2_4_DW.Max_Sensor_Rate =
      Assignment2_4_P.DataStoreMemory15_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory16' */
    Assignment2_4_DW.Mode_Adaptivity =
      Assignment2_4_P.DataStoreMemory16_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory17' */
    Assignment2_4_DW.Reaction_Time =
      Assignment2_4_P.DataStoreMemory17_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory18' */
    Assignment2_4_DW.Response_Factor =
      Assignment2_4_P.DataStoreMemory18_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory19' */
    Assignment2_4_DW.Recovery_Time =
      Assignment2_4_P.DataStoreMemory19_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory20' */
    Assignment2_4_DW.Mode_Chamber_Paced =
      Assignment2_4_P.DataStoreMemory20_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory21' */
    Assignment2_4_DW.Mode_Chamber_Sensed =
      Assignment2_4_P.DataStoreMemory21_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory22' */
    Assignment2_4_DW.Lower_Rate_Limit =
      Assignment2_4_P.DataStoreMemory22_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory23' */
    Assignment2_4_DW.AV_Delay = Assignment2_4_P.DataStoreMemory23_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory24' */
    Assignment2_4_DW.VRP = Assignment2_4_P.DataStoreMemory24_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory25' */
    Assignment2_4_DW.ARP = Assignment2_4_P.DataStoreMemory25_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory26' */
    Assignment2_4_DW.Hysterisis_Escape_Interval =
      Assignment2_4_P.DataStoreMemory26_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory27' */
    Assignment2_4_DW.Mode_Response =
      Assignment2_4_P.DataStoreMemory27_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory28' */
    Assignment2_4_DW.Ventricular_Amplitude =
      Assignment2_4_P.DataStoreMemory28_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory29' */
    Assignment2_4_DW.Ventricular_Pulse_Width =
      Assignment2_4_P.DataStoreMemory29_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory30' */
    Assignment2_4_DW.Ventricular_Sensitivity =
      Assignment2_4_P.DataStoreMemory30_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory31' */
    Assignment2_4_DW.Atrial_Amplitude =
      Assignment2_4_P.DataStoreMemory31_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory32' */
    Assignment2_4_DW.Atrial_Pulse_Width =
      Assignment2_4_P.DataStoreMemory32_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory33' */
    Assignment2_4_DW.Atrial_Sensitivity =
      Assignment2_4_P.DataStoreMemory33_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory34' */
    Assignment2_4_DW.Hysterisis = Assignment2_4_P.DataStoreMemory34_InitialValue;
    Assignment2_4_PrevZCX.TriggeredSubsystem_Trig_ZCE = ZERO_ZCSIG;

    /* SystemInitialize for ModelReference: '<Root>/Model1' incorporates:
     *  DataStoreRead: '<Root>/Data Store Read'
     *  DataStoreRead: '<Root>/Data Store Read1'
     *  DataStoreRead: '<Root>/Data Store Read10'
     *  DataStoreRead: '<Root>/Data Store Read11'
     *  DataStoreRead: '<Root>/Data Store Read12'
     *  DataStoreRead: '<Root>/Data Store Read13'
     *  DataStoreRead: '<Root>/Data Store Read14'
     *  DataStoreRead: '<Root>/Data Store Read15'
     *  DataStoreRead: '<Root>/Data Store Read16'
     *  DataStoreRead: '<Root>/Data Store Read17'
     *  DataStoreRead: '<Root>/Data Store Read18'
     *  DataStoreRead: '<Root>/Data Store Read19'
     *  DataStoreRead: '<Root>/Data Store Read2'
     *  DataStoreRead: '<Root>/Data Store Read20'
     *  DataStoreRead: '<Root>/Data Store Read3'
     *  DataStoreRead: '<Root>/Data Store Read4'
     *  DataStoreRead: '<Root>/Data Store Read5'
     *  DataStoreRead: '<Root>/Data Store Read6'
     *  DataStoreRead: '<Root>/Data Store Read7'
     *  DataStoreRead: '<Root>/Data Store Read8'
     *  DataStoreRead: '<Root>/Data Store Read9'
     */
    PTHS_Init(&(Assignment2_4_DW.Model1_InstanceData.rtdw));

    /* SystemInitialize for Triggered SubSystem: '<Root>/Triggered Subsystem' */
    /* Start for MATLABSystem: '<S3>/FXOS8700 6-Axes Sensor1' */
    Assignment2_4_DW.obj_o.i2cobj.matlabCodegenIsDeleted = true;
    Assignment2_4_DW.obj_o.matlabCodegenIsDeleted = true;
    obj_0 = &Assignment2_4_DW.obj_o;
    Assignment2_4_DW.obj_o.isInitialized = 0;
    Assignment2_4_DW.obj_o.SampleTime = -1.0;
    obj_0->i2cobj.isInitialized = 0;
    obj_0->i2cobj.matlabCodegenIsDeleted = false;
    Assignment2_4_DW.obj_o.matlabCodegenIsDeleted = false;
    Assignment2_4_DW.objisempty = true;
    Assignment2_4_DW.obj_o.SampleTime =
      Assignment2_4_P.FXOS87006AxesSensor1_SampleTime;
    Assignment_SystemCore_setup_dlb(&Assignment2_4_DW.obj_o);

    /* Start for MATLABSystem: '<S3>/Moving Standard Deviation1' */
    Assignment2_4_DW.obj.matlabCodegenIsDeleted = true;
    Assignment2_4_DW.obj.isInitialized = 0;
    Assignment2_4_DW.obj.NumChannels = -1;
    Assignment2_4_DW.obj.matlabCodegenIsDeleted = false;
    Assignment2_4_DW.objisempty_i = true;
    Assignment2_SystemCore_setup_dl(&Assignment2_4_DW.obj,
      &Assignment2_4_DW.gobj_2);

    /* InitializeConditions for MATLABSystem: '<S3>/Moving Standard Deviation1' */
    obj_1 = Assignment2_4_DW.obj.pStatistic;
    if (obj_1->isInitialized == 1) {
      obj_1->pReverseSamples[0] = 0.0;
      obj_1->pReverseSamples[1] = 0.0;
      obj_1->pReverseSamples[2] = 0.0;
      obj_1->pReverseT[0] = 0.0;
      obj_1->pReverseT[1] = 0.0;
      obj_1->pReverseT[2] = 0.0;
      obj_1->pReverseS[0] = 0.0;
      obj_1->pReverseS[1] = 0.0;
      obj_1->pReverseS[2] = 0.0;
      obj_1->pT = 0.0;
      obj_1->pS = 0.0;
      obj_1->pM = 0.0;
      obj_1->pCounter = 1.0;
    }

    /* End of InitializeConditions for MATLABSystem: '<S3>/Moving Standard Deviation1' */
    /* End of SystemInitialize for SubSystem: '<Root>/Triggered Subsystem' */

    /* Start for MATLABSystem: '<Root>/Serial Receive' */
    Assignment2_4_DW.obj_c.isInitialized = 0;
    Assignment2_4_DW.obj_c.matlabCodegenIsDeleted = false;
    Assignment2_4_DW.objisempty_m = true;
    Assignment2_4_DW.obj_c.SampleTime = Assignment2_4_P.SerialReceive_SampleTime;
    Assignment2_4_SystemCore_setup(&Assignment2_4_DW.obj_c);

    /* Start for MATLABSystem: '<S2>/ATR_SIGNAL' */
    Assignment2_4_DW.obj_i.matlabCodegenIsDeleted = true;
    Assignment2_4_DW.obj_i.isInitialized = 0;
    Assignment2_4_DW.obj_i.SampleTime = -1.0;
    Assignment2_4_DW.obj_i.matlabCodegenIsDeleted = false;
    Assignment2_4_DW.objisempty_a = true;
    Assignment2_4_DW.obj_i.SampleTime = Assignment2_4_P.ATR_SIGNAL_SampleTime;
    obj = &Assignment2_4_DW.obj_i;
    Assignment2_4_DW.obj_i.isSetupComplete = false;
    Assignment2_4_DW.obj_i.isInitialized = 1;
    obj->MW_ANALOGIN_HANDLE = MW_AnalogInSingle_Open(16U);
    Assignment2_4_B.trigger_val = MW_ANALOGIN_SOFTWARE_TRIGGER;
    MW_AnalogIn_SetTriggerSource(Assignment2_4_DW.obj_i.MW_ANALOGIN_HANDLE,
      Assignment2_4_B.trigger_val, 0U);
    Assignment2_4_DW.obj_i.isSetupComplete = true;

    /* Start for MATLABSystem: '<S2>/VENT_SIGNAL' */
    Assignment2_4_DW.obj_b.matlabCodegenIsDeleted = true;
    Assignment2_4_DW.obj_b.isInitialized = 0;
    Assignment2_4_DW.obj_b.SampleTime = -1.0;
    Assignment2_4_DW.obj_b.matlabCodegenIsDeleted = false;
    Assignment2_4_DW.objisempty_g = true;
    Assignment2_4_DW.obj_b.SampleTime = Assignment2_4_P.VENT_SIGNAL_SampleTime;
    obj = &Assignment2_4_DW.obj_b;
    Assignment2_4_DW.obj_b.isSetupComplete = false;
    Assignment2_4_DW.obj_b.isInitialized = 1;
    obj->MW_ANALOGIN_HANDLE = MW_AnalogInSingle_Open(17U);
    Assignment2_4_B.trigger_val = MW_ANALOGIN_SOFTWARE_TRIGGER;
    MW_AnalogIn_SetTriggerSource(Assignment2_4_DW.obj_b.MW_ANALOGIN_HANDLE,
      Assignment2_4_B.trigger_val, 0U);
    Assignment2_4_DW.obj_b.isSetupComplete = true;

    /* Start for MATLABSystem: '<S2>/Serial Transmit1' */
    Assignment2_4_DW.obj_m.isInitialized = 0;
    Assignment2_4_DW.obj_m.matlabCodegenIsDeleted = false;
    Assignment2_4_DW.objisempty_e = true;
    Assignment2__SystemCore_setup_d(&Assignment2_4_DW.obj_m);
  }
}

/* Model terminate function */
void Assignment2_4_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Serial Receive' */
  matlabCodegenHandle_matlabCodeg(&Assignment2_4_DW.obj_c);

  /* Terminate for MATLABSystem: '<S2>/ATR_SIGNAL' */
  matlabCodegenHandle_matlabCo_dl(&Assignment2_4_DW.obj_i);

  /* Terminate for MATLABSystem: '<S2>/VENT_SIGNAL' */
  matlabCodegenHandle_matlabCo_dl(&Assignment2_4_DW.obj_b);

  /* Terminate for MATLABSystem: '<S2>/Serial Transmit1' */
  matlabCodegenHandle_matlabCod_d(&Assignment2_4_DW.obj_m);

  /* Terminate for ModelReference: '<Root>/Model1' incorporates:
   *  DataStoreRead: '<Root>/Data Store Read'
   *  DataStoreRead: '<Root>/Data Store Read1'
   *  DataStoreRead: '<Root>/Data Store Read10'
   *  DataStoreRead: '<Root>/Data Store Read11'
   *  DataStoreRead: '<Root>/Data Store Read12'
   *  DataStoreRead: '<Root>/Data Store Read13'
   *  DataStoreRead: '<Root>/Data Store Read14'
   *  DataStoreRead: '<Root>/Data Store Read15'
   *  DataStoreRead: '<Root>/Data Store Read16'
   *  DataStoreRead: '<Root>/Data Store Read17'
   *  DataStoreRead: '<Root>/Data Store Read18'
   *  DataStoreRead: '<Root>/Data Store Read19'
   *  DataStoreRead: '<Root>/Data Store Read2'
   *  DataStoreRead: '<Root>/Data Store Read20'
   *  DataStoreRead: '<Root>/Data Store Read3'
   *  DataStoreRead: '<Root>/Data Store Read4'
   *  DataStoreRead: '<Root>/Data Store Read5'
   *  DataStoreRead: '<Root>/Data Store Read6'
   *  DataStoreRead: '<Root>/Data Store Read7'
   *  DataStoreRead: '<Root>/Data Store Read8'
   *  DataStoreRead: '<Root>/Data Store Read9'
   */
  PTHS_Term(&(Assignment2_4_DW.Model1_InstanceData.rtdw));

  /* Terminate for Triggered SubSystem: '<Root>/Triggered Subsystem' */
  /* Terminate for MATLABSystem: '<S3>/FXOS8700 6-Axes Sensor1' */
  matlabCodegenHandle_matla_dlbal(&Assignment2_4_DW.obj_o);
  matlabCodegenHandle_matl_dlbala(&Assignment2_4_DW.obj_o.i2cobj);

  /* Terminate for MATLABSystem: '<S3>/Moving Standard Deviation1' */
  matlabCodegenHandle_matlab_dlba(&Assignment2_4_DW.obj);

  /* End of Terminate for SubSystem: '<Root>/Triggered Subsystem' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

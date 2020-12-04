/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Serial_Read.c
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

#include "Serial_Read.h"
#include "Serial_Read_private.h"

P_Serial_Read_T Serial_Read_P = {
  /* Expression: SampleTime
   * Referenced by: '<Root>/VENT_SIGNAL'
   */
  -1.0,

  /* Expression: SampleTime
   * Referenced by: '<Root>/ATR_SIGNAL'
   */
  -1.0,

  /* Expression: 10000
   * Referenced by: '<Root>/Gain'
   */
  10000.0,

  /* Expression: 10000
   * Referenced by: '<Root>/Gain1'
   */
  10000.0
};

/* Forward declaration for local functions */
static void Serial_Read_SystemCore_setup(freedomk64f_SCIWrite_Serial_R_T *obj);
static void Serial_Rea_SystemCore_release_m(const
  freedomk64f_AnalogInput_Seria_T *obj);
static void Serial_Read_SystemCore_delete_a(const
  freedomk64f_AnalogInput_Seria_T *obj);
static void matlabCodegenHandle_matlabCod_g(freedomk64f_AnalogInput_Seria_T *obj);
static void Serial_Read_SystemCore_release(const freedomk64f_SCIWrite_Serial_R_T
  *obj);
static void Serial_Read_SystemCore_delete(const freedomk64f_SCIWrite_Serial_R_T *
  obj);
static void matlabCodegenHandle_matlabCodeg(freedomk64f_SCIWrite_Serial_R_T *obj);
static void Serial_Read_SystemCore_setup(freedomk64f_SCIWrite_Serial_R_T *obj)
{
  uint32_T RxPinLoc;
  uint32_T SCIModuleLoc;
  MW_SCI_StopBits_Type StopBitsValue;
  MW_SCI_Parity_Type ParityValue;
  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  RxPinLoc = MW_UNDEFINED_VALUE;
  SCIModuleLoc = 0;
  obj->MW_SCIHANDLE = MW_SCI_Open(&SCIModuleLoc, false, RxPinLoc, 10U);
  MW_SCI_SetBaudrate(obj->MW_SCIHANDLE, 115200U);
  StopBitsValue = MW_SCI_STOPBITS_1;
  ParityValue = MW_SCI_PARITY_NONE;
  MW_SCI_SetFrameFormat(obj->MW_SCIHANDLE, 8, ParityValue, StopBitsValue);
  obj->isSetupComplete = true;
}

static void Serial_Rea_SystemCore_release_m(const
  freedomk64f_AnalogInput_Seria_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_AnalogIn_Stop(obj->MW_ANALOGIN_HANDLE);
    MW_AnalogIn_Close(obj->MW_ANALOGIN_HANDLE);
  }
}

static void Serial_Read_SystemCore_delete_a(const
  freedomk64f_AnalogInput_Seria_T *obj)
{
  Serial_Rea_SystemCore_release_m(obj);
}

static void matlabCodegenHandle_matlabCod_g(freedomk64f_AnalogInput_Seria_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    Serial_Read_SystemCore_delete_a(obj);
  }
}

static void Serial_Read_SystemCore_release(const freedomk64f_SCIWrite_Serial_R_T
  *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_SCI_Close(obj->MW_SCIHANDLE);
  }
}

static void Serial_Read_SystemCore_delete(const freedomk64f_SCIWrite_Serial_R_T *
  obj)
{
  Serial_Read_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(freedomk64f_SCIWrite_Serial_R_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    Serial_Read_SystemCore_delete(obj);
  }
}

/* System initialize for referenced model: 'Serial_Read' */
void Serial_Read_Init(DW_Serial_Read_f_T *localDW)
{
  freedomk64f_AnalogInput_Seria_T *obj;
  MW_AnalogIn_TriggerSource_Type trigger_val;

  /* Start for MATLABSystem: '<Root>/ATR_SIGNAL' */
  localDW->obj.matlabCodegenIsDeleted = true;
  localDW->obj.isInitialized = 0;
  localDW->obj.SampleTime = -1.0;
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  localDW->obj.SampleTime = Serial_Read_P.ATR_SIGNAL_SampleTime;
  obj = &localDW->obj;
  localDW->obj.isSetupComplete = false;
  localDW->obj.isInitialized = 1;
  obj->MW_ANALOGIN_HANDLE = MW_AnalogInSingle_Open(16U);
  trigger_val = MW_ANALOGIN_SOFTWARE_TRIGGER;
  MW_AnalogIn_SetTriggerSource(localDW->obj.MW_ANALOGIN_HANDLE, trigger_val, 0U);
  localDW->obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/VENT_SIGNAL' */
  localDW->obj_d.matlabCodegenIsDeleted = true;
  localDW->obj_d.isInitialized = 0;
  localDW->obj_d.SampleTime = -1.0;
  localDW->obj_d.matlabCodegenIsDeleted = false;
  localDW->objisempty_a = true;
  localDW->obj_d.SampleTime = Serial_Read_P.VENT_SIGNAL_SampleTime;
  obj = &localDW->obj_d;
  localDW->obj_d.isSetupComplete = false;
  localDW->obj_d.isInitialized = 1;
  obj->MW_ANALOGIN_HANDLE = MW_AnalogInSingle_Open(17U);
  trigger_val = MW_ANALOGIN_SOFTWARE_TRIGGER;
  MW_AnalogIn_SetTriggerSource(localDW->obj_d.MW_ANALOGIN_HANDLE, trigger_val,
    0U);
  localDW->obj_d.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Serial Transmit1' */
  localDW->obj_e.isInitialized = 0;
  localDW->obj_e.matlabCodegenIsDeleted = false;
  localDW->objisempty_g = true;
  Serial_Read_SystemCore_setup(&localDW->obj_e);
}

/* Output and update for referenced model: 'Serial_Read' */
void Serial_Read(const uint8_T *rtu_Mode_Chamber_Paced, const uint8_T
                 *rtu_Mode_Chamber_Sensed, const uint8_T *rtu_Mode_Response,
                 const uint8_T *rtu_Ventricular_Amplitude, const uint8_T
                 *rtu_Ventricular_Pulse_Width, const uint8_T
                 *rtu_Ventricular_Sensitivity, const uint8_T
                 *rtu_Atrial_Amplitude, const uint8_T *rtu_Atrial_Pulse_Width,
                 const uint8_T *rtu_Atrial_Sensitivity, const uint8_T
                 *rtu_Hysterisis, const uint16_T *rtu_Lower_Rate_Limit, const
                 uint16_T *rtu_AV_Delay, const uint16_T *rtu_VRP, const uint16_T
                 *rtu_ARP, const uint16_T *rtu_HysterisisEscapeInterval, const
                 uint8_T *rtu_Max_Sensor_Rate, const uint8_T
                 *rtu_Mode_Adaptivity, const uint8_T *rtu_Reaction_Time, const
                 uint8_T *rtu_Response_Factor, const uint8_T *rtu_Recovery_Time,
                 const uint8_T *rtu_Param_Number, B_Serial_Read_c_T *localB,
                 DW_Serial_Read_f_T *localDW)
{
  real_T rtb_ATR_SIGNAL_0;
  uint8_T status;
  uint8_T TxDataLocChar[3];
  uint8_T rtb_TmpSignalConversionAtSerial[3];

  /* S-Function (any2byte): '<Root>/Byte Pack5' */

  /* Pack: <Root>/Byte Pack5 */
  (void) memcpy(&localB->BytePack5[0], rtu_Lower_Rate_Limit,
                2);

  /* S-Function (any2byte): '<Root>/Byte Pack6' */

  /* Pack: <Root>/Byte Pack6 */
  (void) memcpy(&localB->BytePack6[0], rtu_AV_Delay,
                2);

  /* S-Function (any2byte): '<Root>/Byte Pack1' */

  /* Pack: <Root>/Byte Pack1 */
  (void) memcpy(&localB->BytePack1[0], rtu_VRP,
                2);

  /* S-Function (any2byte): '<Root>/Byte Pack7' */

  /* Pack: <Root>/Byte Pack7 */
  (void) memcpy(&localB->BytePack7[0], rtu_ARP,
                2);

  /* S-Function (any2byte): '<Root>/Byte Pack4' */

  /* Pack: <Root>/Byte Pack4 */
  (void) memcpy(&localB->BytePack4[0], rtu_HysterisisEscapeInterval,
                2);

  /* MATLABSystem: '<Root>/ATR_SIGNAL' */
  if (localDW->obj.SampleTime != Serial_Read_P.ATR_SIGNAL_SampleTime) {
    localDW->obj.SampleTime = Serial_Read_P.ATR_SIGNAL_SampleTime;
  }

  MW_AnalogIn_Start(localDW->obj.MW_ANALOGIN_HANDLE);
  MW_AnalogInSingle_ReadResult(localDW->obj.MW_ANALOGIN_HANDLE,
    &rtb_ATR_SIGNAL_0, 7);

  /* DataTypeConversion: '<Root>/Data Type Conversion2' incorporates:
   *  Gain: '<Root>/Gain'
   *  MATLABSystem: '<Root>/ATR_SIGNAL'
   */
  rtb_ATR_SIGNAL_0 = floor(Serial_Read_P.Gain_Gain * rtb_ATR_SIGNAL_0);
  if (rtIsNaN(rtb_ATR_SIGNAL_0) || rtIsInf(rtb_ATR_SIGNAL_0)) {
    rtb_ATR_SIGNAL_0 = 0.0;
  } else {
    rtb_ATR_SIGNAL_0 = fmod(rtb_ATR_SIGNAL_0, 65536.0);
  }

  localB->DataTypeConversion2 = (uint16_T)(rtb_ATR_SIGNAL_0 < 0.0 ? (int32_T)
    (uint16_T)-(int16_T)(uint16_T)-rtb_ATR_SIGNAL_0 : (int32_T)(uint16_T)
    rtb_ATR_SIGNAL_0);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion2' */

  /* S-Function (any2byte): '<Root>/Byte Pack30' */

  /* Pack: <Root>/Byte Pack30 */
  (void) memcpy(&localB->BytePack30[0], &localB->DataTypeConversion2,
                2);

  /* MATLABSystem: '<Root>/VENT_SIGNAL' */
  if (localDW->obj_d.SampleTime != Serial_Read_P.VENT_SIGNAL_SampleTime) {
    localDW->obj_d.SampleTime = Serial_Read_P.VENT_SIGNAL_SampleTime;
  }

  MW_AnalogIn_Start(localDW->obj_d.MW_ANALOGIN_HANDLE);
  MW_AnalogInSingle_ReadResult(localDW->obj_d.MW_ANALOGIN_HANDLE,
    &rtb_ATR_SIGNAL_0, 7);

  /* DataTypeConversion: '<Root>/Data Type Conversion3' incorporates:
   *  Gain: '<Root>/Gain1'
   *  MATLABSystem: '<Root>/VENT_SIGNAL'
   */
  rtb_ATR_SIGNAL_0 = floor(Serial_Read_P.Gain1_Gain * rtb_ATR_SIGNAL_0);
  if (rtIsNaN(rtb_ATR_SIGNAL_0) || rtIsInf(rtb_ATR_SIGNAL_0)) {
    rtb_ATR_SIGNAL_0 = 0.0;
  } else {
    rtb_ATR_SIGNAL_0 = fmod(rtb_ATR_SIGNAL_0, 65536.0);
  }

  localB->DataTypeConversion3 = (uint16_T)(rtb_ATR_SIGNAL_0 < 0.0 ? (int32_T)
    (uint16_T)-(int16_T)(uint16_T)-rtb_ATR_SIGNAL_0 : (int32_T)(uint16_T)
    rtb_ATR_SIGNAL_0);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion3' */

  /* S-Function (any2byte): '<Root>/Byte Pack31' */

  /* Pack: <Root>/Byte Pack31 */
  (void) memcpy(&localB->BytePack31[0], &localB->DataTypeConversion3,
                2);

  /* MultiPortSwitch: '<Root>/Multiport Switch1' */
  switch (*rtu_Param_Number) {
   case 1:
    /* SignalConversion generated from: '<Root>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] = *rtu_Mode_Chamber_Paced;
    rtb_TmpSignalConversionAtSerial[2] = *rtu_Mode_Chamber_Paced;
    break;

   case 2:
    /* SignalConversion generated from: '<Root>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] = *rtu_Mode_Chamber_Sensed;
    rtb_TmpSignalConversionAtSerial[2] = *rtu_Mode_Chamber_Sensed;
    break;

   case 3:
    /* SignalConversion generated from: '<Root>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] = *rtu_Mode_Response;
    rtb_TmpSignalConversionAtSerial[2] = *rtu_Mode_Response;
    break;

   case 4:
    /* SignalConversion generated from: '<Root>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] = *rtu_Ventricular_Amplitude;
    rtb_TmpSignalConversionAtSerial[2] = *rtu_Ventricular_Amplitude;
    break;

   case 5:
    /* SignalConversion generated from: '<Root>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] = *rtu_Ventricular_Pulse_Width;
    rtb_TmpSignalConversionAtSerial[2] = *rtu_Ventricular_Pulse_Width;
    break;

   case 6:
    /* SignalConversion generated from: '<Root>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] = *rtu_Ventricular_Sensitivity;
    rtb_TmpSignalConversionAtSerial[2] = *rtu_Ventricular_Sensitivity;
    break;

   case 7:
    /* SignalConversion generated from: '<Root>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] = *rtu_Atrial_Amplitude;
    rtb_TmpSignalConversionAtSerial[2] = *rtu_Atrial_Amplitude;
    break;

   case 8:
    /* SignalConversion generated from: '<Root>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] = *rtu_Atrial_Pulse_Width;
    rtb_TmpSignalConversionAtSerial[2] = *rtu_Atrial_Pulse_Width;
    break;

   case 9:
    /* SignalConversion generated from: '<Root>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] = *rtu_Atrial_Sensitivity;
    rtb_TmpSignalConversionAtSerial[2] = *rtu_Atrial_Sensitivity;
    break;

   case 10:
    /* SignalConversion generated from: '<Root>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] = *rtu_Hysterisis;
    rtb_TmpSignalConversionAtSerial[2] = *rtu_Hysterisis;
    break;

   case 11:
    /* SignalConversion generated from: '<Root>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] = localB->BytePack5[0];
    rtb_TmpSignalConversionAtSerial[2] = localB->BytePack5[1];
    break;

   case 12:
    /* SignalConversion generated from: '<Root>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] = localB->BytePack6[0];
    rtb_TmpSignalConversionAtSerial[2] = localB->BytePack6[1];
    break;

   case 13:
    /* SignalConversion generated from: '<Root>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] = localB->BytePack1[0];
    rtb_TmpSignalConversionAtSerial[2] = localB->BytePack1[1];
    break;

   case 14:
    /* SignalConversion generated from: '<Root>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] = localB->BytePack7[0];
    rtb_TmpSignalConversionAtSerial[2] = localB->BytePack7[1];
    break;

   case 15:
    /* SignalConversion generated from: '<Root>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] = localB->BytePack4[0];
    rtb_TmpSignalConversionAtSerial[2] = localB->BytePack4[1];
    break;

   case 16:
    /* SignalConversion generated from: '<Root>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] = *rtu_Max_Sensor_Rate;
    rtb_TmpSignalConversionAtSerial[2] = *rtu_Max_Sensor_Rate;
    break;

   case 17:
    /* SignalConversion generated from: '<Root>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] = *rtu_Mode_Adaptivity;
    rtb_TmpSignalConversionAtSerial[2] = *rtu_Mode_Adaptivity;
    break;

   case 18:
    /* SignalConversion generated from: '<Root>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] = *rtu_Reaction_Time;
    rtb_TmpSignalConversionAtSerial[2] = *rtu_Reaction_Time;
    break;

   case 19:
    /* SignalConversion generated from: '<Root>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] = *rtu_Response_Factor;
    rtb_TmpSignalConversionAtSerial[2] = *rtu_Response_Factor;
    break;

   case 20:
    /* SignalConversion generated from: '<Root>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] = *rtu_Recovery_Time;
    rtb_TmpSignalConversionAtSerial[2] = *rtu_Recovery_Time;
    break;

   case 21:
    /* SignalConversion generated from: '<Root>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] = localB->BytePack30[0];
    rtb_TmpSignalConversionAtSerial[2] = localB->BytePack30[1];
    break;

   default:
    /* SignalConversion generated from: '<Root>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] = localB->BytePack31[0];
    rtb_TmpSignalConversionAtSerial[2] = localB->BytePack31[1];
    break;
  }

  /* End of MultiPortSwitch: '<Root>/Multiport Switch1' */

  /* SignalConversion generated from: '<Root>/Serial Transmit1' */
  rtb_TmpSignalConversionAtSerial[0] = *rtu_Param_Number;

  /* MATLABSystem: '<Root>/Serial Transmit1' */
  status = 1U;
  while (status != 0) {
    memcpy((void *)&TxDataLocChar[0], (void *)&rtb_TmpSignalConversionAtSerial[0],
           (uint32_T)((size_t)3 * sizeof(uint8_T)));
    status = MW_SCI_Transmit(localDW->obj_e.MW_SCIHANDLE, TxDataLocChar, 3U);
  }

  /* End of MATLABSystem: '<Root>/Serial Transmit1' */
}

/* Termination for referenced model: 'Serial_Read' */
void Serial_Read_Term(DW_Serial_Read_f_T *localDW)
{
  /* Terminate for MATLABSystem: '<Root>/ATR_SIGNAL' */
  matlabCodegenHandle_matlabCod_g(&localDW->obj);

  /* Terminate for MATLABSystem: '<Root>/VENT_SIGNAL' */
  matlabCodegenHandle_matlabCod_g(&localDW->obj_d);

  /* Terminate for MATLABSystem: '<Root>/Serial Transmit1' */
  matlabCodegenHandle_matlabCodeg(&localDW->obj_e);
}

/* Model initialize function */
void Serial_Read_initialize(const char_T **rt_errorStatus,
  RT_MODEL_Serial_Read_T *const Serial_Read_M)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatusPointer(Serial_Read_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

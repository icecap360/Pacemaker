/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Assignment2.c
 *
 * Code generated for Simulink model 'Assignment2'.
 *
 * Model version                  : 1.504
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Thu Dec  3 16:57:32 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Assignment2.h"
#include "Assignment2_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define Assignment2_IN_READ_PARAMS     ((uint8_T)1U)
#define Assignment2_IN_START_STATE     ((uint8_T)2U)
#define Assignment2_IN_WAIT_STATE      ((uint8_T)3U)
#define Assignment2_IN_WRITE_PARAMS    ((uint8_T)4U)

/* Block signals (default storage) */
B_Assignment2_T Assignment2_B;

/* Block states (default storage) */
DW_Assignment2_T Assignment2_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_Assignment2_T Assignment2_PrevZCX;

/* Real-time model */
RT_MODEL_Assignment2_T Assignment2_M_;
RT_MODEL_Assignment2_T *const Assignment2_M = &Assignment2_M_;

/* Forward declaration for local functions */
static void Assignment2_SystemCore_release(const freedomk64f_SCIRead_Assignmen_T
  *obj);
static void Assignment2_SystemCore_delete(const freedomk64f_SCIRead_Assignmen_T *
  obj);
static void matlabCodegenHandle_matlabCodeg(freedomk64f_SCIRead_Assignmen_T *obj);
static void Assignment2_SystemCore_setup(freedomk64f_SCIRead_Assignmen_T *obj);
static void Assignment2_SystemCore_release(const freedomk64f_SCIRead_Assignmen_T
  *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_SCI_Close(obj->MW_SCIHANDLE);
  }
}

static void Assignment2_SystemCore_delete(const freedomk64f_SCIRead_Assignmen_T *
  obj)
{
  Assignment2_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(freedomk64f_SCIRead_Assignmen_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    Assignment2_SystemCore_delete(obj);
  }
}

static void Assignment2_SystemCore_setup(freedomk64f_SCIRead_Assignmen_T *obj)
{
  MW_SCI_StopBits_Type StopBitsValue;
  MW_SCI_Parity_Type ParityValue;
  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  Assignment2_B.TxPinLoc = MW_UNDEFINED_VALUE;
  Assignment2_B.SCIModuleLoc = 0;
  obj->MW_SCIHANDLE = MW_SCI_Open(&Assignment2_B.SCIModuleLoc, false, 10U,
    Assignment2_B.TxPinLoc);
  MW_SCI_SetBaudrate(obj->MW_SCIHANDLE, 115200U);
  StopBitsValue = MW_SCI_STOPBITS_1;
  ParityValue = MW_SCI_PARITY_NONE;
  MW_SCI_SetFrameFormat(obj->MW_SCIHANDLE, 8, ParityValue, StopBitsValue);
  obj->isSetupComplete = true;
}

/* Model step function */
void Assignment2_step(void)
{
  real_T offset;
  uint8_T RxDataLocChar[27];
  uint8_T status;

  /* MATLABSystem: '<Root>/Serial Receive' */
  if (Assignment2_DW.obj.SampleTime != Assignment2_P.SerialReceive_SampleTime) {
    Assignment2_DW.obj.SampleTime = Assignment2_P.SerialReceive_SampleTime;
  }

  status = MW_SCI_Receive(Assignment2_DW.obj.MW_SCIHANDLE, RxDataLocChar, 27U);
  memcpy((void *)&Assignment2_B.RxData[0], (void *)&RxDataLocChar[0], (uint32_T)
         ((size_t)27 * sizeof(uint8_T)));

  /* Chart: '<Root>/Chart' incorporates:
   *  MATLABSystem: '<Root>/Serial Receive'
   */
  if (Assignment2_DW.is_active_c8_Assignment2 == 0U) {
    Assignment2_DW.is_active_c8_Assignment2 = 1U;
    Assignment2_DW.is_c8_Assignment2 = Assignment2_IN_START_STATE;
    Assignment2_DW.uint16_bytes = 2.0;
    Assignment2_DW.uint8_bytes = 1.0;
  } else {
    switch (Assignment2_DW.is_c8_Assignment2) {
     case Assignment2_IN_READ_PARAMS:
      Assignment2_DW.is_c8_Assignment2 = Assignment2_IN_WAIT_STATE;
      break;

     case Assignment2_IN_START_STATE:
      Assignment2_DW.is_c8_Assignment2 = Assignment2_IN_WAIT_STATE;
      break;

     case Assignment2_IN_WAIT_STATE:
      if (status == 0) {
        if (Assignment2_B.RxData[0] == 10) {
          switch (Assignment2_B.RxData[1]) {
           case 20:
            Assignment2_DW.is_c8_Assignment2 = Assignment2_IN_WRITE_PARAMS;
            Assignment2_B.Mode_Chamber_Paced = Assignment2_B.RxData[2];
            Assignment2_B.Mode_Chamber_Sensed = Assignment2_B.RxData[(int32_T)
              (Assignment2_DW.uint8_bytes + 3.0) - 1];
            offset = (Assignment2_DW.uint8_bytes + 3.0) +
              Assignment2_DW.uint8_bytes;
            Assignment2_B.Mode_Response = Assignment2_B.RxData[(int32_T)offset -
              1];
            offset += Assignment2_DW.uint8_bytes;
            Assignment2_B.Ventricular_Amplitude = Assignment2_B.RxData[(int32_T)
              offset - 1];
            offset += Assignment2_DW.uint8_bytes;
            Assignment2_B.Ventricular_Pulse_Width = Assignment2_B.RxData
              [(int32_T)offset - 1];
            offset += Assignment2_DW.uint8_bytes;
            Assignment2_B.Ventricular_Sensitivity = Assignment2_B.RxData
              [(int32_T)offset - 1];
            offset += Assignment2_DW.uint8_bytes;
            Assignment2_B.Atrial_Amplitude = Assignment2_B.RxData[(int32_T)
              offset - 1];
            offset += Assignment2_DW.uint8_bytes;
            Assignment2_B.Atrial_Pulse_Width = Assignment2_B.RxData[(int32_T)
              offset - 1];
            offset += Assignment2_DW.uint8_bytes;
            Assignment2_B.Atrial_Sensitivity = Assignment2_B.RxData[(int32_T)
              offset - 1];
            offset += Assignment2_DW.uint8_bytes;
            Assignment2_B.Hysterisis = Assignment2_B.RxData[(int32_T)offset - 1];
            offset += Assignment2_DW.uint8_bytes;
            memcpy((void *)&Assignment2_B.Lower_Rate_Limit, (void *)
                   &Assignment2_B.RxData[(int32_T)offset - 1], (uint32_T)
                   ((size_t)1 * sizeof(uint16_T)));
            offset += Assignment2_DW.uint16_bytes;
            memcpy((void *)&Assignment2_B.AV_Delay, (void *)
                   &Assignment2_B.RxData[(int32_T)offset - 1], (uint32_T)
                   ((size_t)1 * sizeof(uint16_T)));
            offset += Assignment2_DW.uint16_bytes;
            memcpy((void *)&Assignment2_B.VRP, (void *)&Assignment2_B.RxData
                   [(int32_T)offset - 1], (uint32_T)((size_t)1 * sizeof(uint16_T)));
            offset += Assignment2_DW.uint16_bytes;
            memcpy((void *)&Assignment2_B.ARP, (void *)&Assignment2_B.RxData
                   [(int32_T)offset - 1], (uint32_T)((size_t)1 * sizeof(uint16_T)));
            offset += Assignment2_DW.uint16_bytes;
            memcpy((void *)&Assignment2_B.Hysterisis_Escape_Interval, (void *)
                   &Assignment2_B.RxData[(int32_T)offset - 1], (uint32_T)
                   ((size_t)1 * sizeof(uint16_T)));
            offset += Assignment2_DW.uint16_bytes;
            Assignment2_B.Max_Sensor_Rate = Assignment2_B.RxData[(int32_T)offset
              - 1];
            offset += Assignment2_DW.uint8_bytes;
            Assignment2_B.Mode_Adaptivity = Assignment2_B.RxData[(int32_T)offset
              - 1];
            offset += Assignment2_DW.uint8_bytes;
            Assignment2_B.Reaction_Time = Assignment2_B.RxData[(int32_T)offset -
              1];
            offset += Assignment2_DW.uint8_bytes;
            Assignment2_B.Response_Factor = Assignment2_B.RxData[(int32_T)offset
              - 1];
            offset += Assignment2_DW.uint8_bytes;
            Assignment2_B.Recovery_Time = Assignment2_B.RxData[(int32_T)offset -
              1];
            break;

           case 30:
            Assignment2_DW.is_c8_Assignment2 = Assignment2_IN_READ_PARAMS;
            Assignment2_B.Param_Number = Assignment2_B.RxData[2];
            break;

           default:
            Assignment2_DW.is_c8_Assignment2 = Assignment2_IN_WAIT_STATE;
            break;
          }
        } else {
          Assignment2_DW.is_c8_Assignment2 = Assignment2_IN_WAIT_STATE;
        }
      }
      break;

     default:
      /* case IN_WRITE_PARAMS: */
      Assignment2_DW.is_c8_Assignment2 = Assignment2_IN_WAIT_STATE;
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* ModelReference: '<Root>/Model2' */
  Serial_Read(&Assignment2_B.Mode_Chamber_Paced,
              &Assignment2_B.Mode_Chamber_Sensed, &Assignment2_B.Mode_Response,
              &Assignment2_B.Ventricular_Amplitude,
              &Assignment2_B.Ventricular_Pulse_Width,
              &Assignment2_B.Ventricular_Sensitivity,
              &Assignment2_B.Atrial_Amplitude, &Assignment2_B.Atrial_Pulse_Width,
              &Assignment2_B.Atrial_Sensitivity, &Assignment2_B.Hysterisis,
              &Assignment2_B.Lower_Rate_Limit, &Assignment2_B.AV_Delay,
              &Assignment2_B.VRP, &Assignment2_B.ARP,
              &Assignment2_B.Hysterisis_Escape_Interval,
              &Assignment2_B.Max_Sensor_Rate, &Assignment2_B.Mode_Adaptivity,
              &Assignment2_B.Reaction_Time, &Assignment2_B.Response_Factor,
              &Assignment2_B.Recovery_Time, &Assignment2_B.Param_Number,
              &(Assignment2_DW.Model2_InstanceData.rtb),
              &(Assignment2_DW.Model2_InstanceData.rtdw));

  /* ModelReference: '<Root>/Model1' incorporates:
   *  DataStoreRead: '<Root>/Data Store Read'
   *  DataStoreRead: '<Root>/Data Store Read1'
   *  DataStoreRead: '<Root>/Data Store Read10'
   *  DataStoreRead: '<Root>/Data Store Read11'
   *  DataStoreRead: '<Root>/Data Store Read12'
   *  DataStoreRead: '<Root>/Data Store Read13'
   *  DataStoreRead: '<Root>/Data Store Read14'
   *  DataStoreRead: '<Root>/Data Store Read2'
   *  DataStoreRead: '<Root>/Data Store Read3'
   *  DataStoreRead: '<Root>/Data Store Read4'
   *  DataStoreRead: '<Root>/Data Store Read5'
   *  DataStoreRead: '<Root>/Data Store Read6'
   *  DataStoreRead: '<Root>/Data Store Read7'
   *  DataStoreRead: '<Root>/Data Store Read8'
   *  DataStoreRead: '<Root>/Data Store Read9'
   */
  PTHS(&Assignment2_DW.Mode_Chamber_Paced, &Assignment2_DW.Mode_Chamber_Sensed,
       &Assignment2_DW.Mode_Response, &Assignment2_DW.Ventricular_Amplitude,
       &Assignment2_DW.Ventricular_Pulse_Width,
       &Assignment2_DW.Ventricular_Sensitivity, &Assignment2_DW.Atrial_Amplitude,
       &Assignment2_DW.Atrial_Pulse_Width, &Assignment2_DW.Atrial_Sensitivity,
       &Assignment2_DW.Hysterisis, &Assignment2_DW.Lower_Rate_Limit,
       &Assignment2_DW.AV_Delay, &Assignment2_DW.VRP, &Assignment2_DW.ARP,
       &Assignment2_DW.Hysterisis_Escape_Interval, &Assignment2_B.Trigger,
       &(Assignment2_DW.Model1_InstanceData.rtb),
       &(Assignment2_DW.Model1_InstanceData.rtdw));

  /* DataTypeConversion: '<Root>/Data Type Conversion' incorporates:
   *  DataStoreWrite: '<S2>/Data Store Write4'
   */
  Assignment2_DW.Ventricular_Pulse_Width = Assignment2_B.Ventricular_Pulse_Width;

  /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
   *  DataStoreWrite: '<S2>/Data Store Write7'
   */
  Assignment2_DW.Atrial_Pulse_Width = Assignment2_B.Atrial_Pulse_Width;

  /* Outputs for Triggered SubSystem: '<Root>/Triggered Subsystem' incorporates:
   *  TriggerPort: '<S2>/Trigger'
   */
  if ((!Assignment2_B.Trigger) &&
      (Assignment2_PrevZCX.TriggeredSubsystem_Trig_ZCE != ZERO_ZCSIG)) {
    /* DataStoreWrite: '<S2>/Data Store Write' */
    Assignment2_DW.Mode_Chamber_Paced = Assignment2_B.Mode_Chamber_Paced;

    /* DataStoreWrite: '<S2>/Data Store Write1' */
    Assignment2_DW.Mode_Chamber_Sensed = Assignment2_B.Mode_Chamber_Sensed;

    /* DataStoreWrite: '<S2>/Data Store Write2' */
    Assignment2_DW.Mode_Response = Assignment2_B.Mode_Response;

    /* DataStoreWrite: '<S2>/Data Store Write3' */
    Assignment2_DW.Ventricular_Amplitude = Assignment2_B.Ventricular_Amplitude;

    /* DataStoreWrite: '<S2>/Data Store Write5' */
    Assignment2_DW.Ventricular_Sensitivity =
      Assignment2_B.Ventricular_Sensitivity;

    /* DataStoreWrite: '<S2>/Data Store Write6' */
    Assignment2_DW.Atrial_Amplitude = Assignment2_B.Atrial_Amplitude;

    /* DataStoreWrite: '<S2>/Data Store Write8' */
    Assignment2_DW.Atrial_Sensitivity = Assignment2_B.Atrial_Sensitivity;

    /* DataStoreWrite: '<S2>/Data Store Write9' */
    Assignment2_DW.Hysterisis = Assignment2_B.Hysterisis;

    /* DataStoreWrite: '<S2>/Data Store Write10' */
    Assignment2_DW.Lower_Rate_Limit = Assignment2_B.Lower_Rate_Limit;

    /* DataStoreWrite: '<S2>/Data Store Write11' */
    Assignment2_DW.AV_Delay = Assignment2_B.AV_Delay;

    /* DataStoreWrite: '<S2>/Data Store Write12' */
    Assignment2_DW.VRP = Assignment2_B.VRP;

    /* DataStoreWrite: '<S2>/Data Store Write13' */
    Assignment2_DW.ARP = Assignment2_B.ARP;

    /* DataStoreWrite: '<S2>/Data Store Write14' */
    Assignment2_DW.Hysterisis_Escape_Interval =
      Assignment2_B.Hysterisis_Escape_Interval;
  }

  Assignment2_PrevZCX.TriggeredSubsystem_Trig_ZCE = Assignment2_B.Trigger;

  /* End of Outputs for SubSystem: '<Root>/Triggered Subsystem' */
}

/* Model initialize function */
void Assignment2_initialize(void)
{
  /* Model Initialize function for ModelReference Block: '<Root>/Model1' */
  PTHS_initialize(rtmGetErrorStatusPointer(Assignment2_M),
                  &(Assignment2_DW.Model1_InstanceData.rtm));

  /* Model Initialize function for ModelReference Block: '<Root>/Model2' */
  Serial_Read_initialize(rtmGetErrorStatusPointer(Assignment2_M),
    &(Assignment2_DW.Model2_InstanceData.rtm));

  /* Start for DataStoreMemory: '<Root>/Data Store Memory20' */
  Assignment2_DW.Mode_Chamber_Paced =
    Assignment2_P.DataStoreMemory20_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory21' */
  Assignment2_DW.Mode_Chamber_Sensed =
    Assignment2_P.DataStoreMemory21_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory22' */
  Assignment2_DW.Lower_Rate_Limit = Assignment2_P.DataStoreMemory22_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory23' */
  Assignment2_DW.AV_Delay = Assignment2_P.DataStoreMemory23_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory24' */
  Assignment2_DW.VRP = Assignment2_P.DataStoreMemory24_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory25' */
  Assignment2_DW.ARP = Assignment2_P.DataStoreMemory25_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory26' */
  Assignment2_DW.Hysterisis_Escape_Interval =
    Assignment2_P.DataStoreMemory26_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory27' */
  Assignment2_DW.Mode_Response = Assignment2_P.DataStoreMemory27_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory28' */
  Assignment2_DW.Ventricular_Amplitude =
    Assignment2_P.DataStoreMemory28_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory29' */
  Assignment2_DW.Ventricular_Pulse_Width =
    Assignment2_P.DataStoreMemory29_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory30' */
  Assignment2_DW.Ventricular_Sensitivity =
    Assignment2_P.DataStoreMemory30_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory31' */
  Assignment2_DW.Atrial_Amplitude = Assignment2_P.DataStoreMemory31_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory32' */
  Assignment2_DW.Atrial_Pulse_Width =
    Assignment2_P.DataStoreMemory32_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory33' */
  Assignment2_DW.Atrial_Sensitivity =
    Assignment2_P.DataStoreMemory33_InitialValue;

  /* Start for DataStoreMemory: '<Root>/Data Store Memory34' */
  Assignment2_DW.Hysterisis = Assignment2_P.DataStoreMemory34_InitialValue;
  Assignment2_PrevZCX.TriggeredSubsystem_Trig_ZCE = ZERO_ZCSIG;

  /* SystemInitialize for ModelReference: '<Root>/Model2' */
  Serial_Read_Init(&(Assignment2_DW.Model2_InstanceData.rtdw));

  /* SystemInitialize for ModelReference: '<Root>/Model1' incorporates:
   *  DataStoreRead: '<Root>/Data Store Read'
   *  DataStoreRead: '<Root>/Data Store Read1'
   *  DataStoreRead: '<Root>/Data Store Read10'
   *  DataStoreRead: '<Root>/Data Store Read11'
   *  DataStoreRead: '<Root>/Data Store Read12'
   *  DataStoreRead: '<Root>/Data Store Read13'
   *  DataStoreRead: '<Root>/Data Store Read14'
   *  DataStoreRead: '<Root>/Data Store Read2'
   *  DataStoreRead: '<Root>/Data Store Read3'
   *  DataStoreRead: '<Root>/Data Store Read4'
   *  DataStoreRead: '<Root>/Data Store Read5'
   *  DataStoreRead: '<Root>/Data Store Read6'
   *  DataStoreRead: '<Root>/Data Store Read7'
   *  DataStoreRead: '<Root>/Data Store Read8'
   *  DataStoreRead: '<Root>/Data Store Read9'
   */
  PTHS_Init(&(Assignment2_DW.Model1_InstanceData.rtdw));

  /* Start for MATLABSystem: '<Root>/Serial Receive' */
  Assignment2_DW.obj.isInitialized = 0;
  Assignment2_DW.obj.matlabCodegenIsDeleted = false;
  Assignment2_DW.obj.SampleTime = Assignment2_P.SerialReceive_SampleTime;
  Assignment2_SystemCore_setup(&Assignment2_DW.obj);
}

/* Model terminate function */
void Assignment2_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Serial Receive' */
  matlabCodegenHandle_matlabCodeg(&Assignment2_DW.obj);

  /* Terminate for ModelReference: '<Root>/Model2' */
  Serial_Read_Term(&(Assignment2_DW.Model2_InstanceData.rtdw));

  /* Terminate for ModelReference: '<Root>/Model1' incorporates:
   *  DataStoreRead: '<Root>/Data Store Read'
   *  DataStoreRead: '<Root>/Data Store Read1'
   *  DataStoreRead: '<Root>/Data Store Read10'
   *  DataStoreRead: '<Root>/Data Store Read11'
   *  DataStoreRead: '<Root>/Data Store Read12'
   *  DataStoreRead: '<Root>/Data Store Read13'
   *  DataStoreRead: '<Root>/Data Store Read14'
   *  DataStoreRead: '<Root>/Data Store Read2'
   *  DataStoreRead: '<Root>/Data Store Read3'
   *  DataStoreRead: '<Root>/Data Store Read4'
   *  DataStoreRead: '<Root>/Data Store Read5'
   *  DataStoreRead: '<Root>/Data Store Read6'
   *  DataStoreRead: '<Root>/Data Store Read7'
   *  DataStoreRead: '<Root>/Data Store Read8'
   *  DataStoreRead: '<Root>/Data Store Read9'
   */
  PTHS_Term(&(Assignment2_DW.Model1_InstanceData.rtdw));
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

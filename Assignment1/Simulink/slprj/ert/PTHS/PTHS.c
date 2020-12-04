/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PTHS.c
 *
 * Code generated for Simulink model 'PTHS'.
 *
 * Model version                  : 1.33
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Fri Dec  4 00:38:30 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "PTHS.h"
#include "PTHS_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define PTHS_IN_Constant               ((uint8_T)1U)
#define PTHS_IN_Decreasing             ((uint8_T)2U)
#define PTHS_IN_Increasing             ((uint8_T)3U)
#define PTHS_IN_NO_ACTIVE_CHILD        ((uint8_T)0U)
#define PTHS_IN_main                   ((uint8_T)4U)
#define PTHS_IN_start                  ((uint8_T)5U)

/* Named constants for Chart: '<Root>/Chart1' */
#define IN_Discharging_C21_and_Pace_Int ((uint8_T)7U)
#define PTHS_IN_A_PACING               ((uint8_T)2U)
#define PTHS_IN_Atrial_Charge          ((uint8_T)1U)
#define PTHS_IN_Atrial_Discharge       ((uint8_T)2U)
#define PTHS_IN_Atrial_Pacing          ((uint8_T)3U)
#define PTHS_IN_Atrial_Pacing_2        ((uint8_T)4U)
#define PTHS_IN_Atrial_Sensing         ((uint8_T)5U)
#define PTHS_IN_Charging_C23           ((uint8_T)6U)
#define PTHS_IN_DECIDE_STATEFLOW       ((uint8_T)1U)
#define PTHS_IN_DUAL_MODES             ((uint8_T)2U)
#define PTHS_IN_NON_DUAL_MODES         ((uint8_T)3U)
#define PTHS_IN_Pacing                 ((uint8_T)9U)
#define PTHS_IN_Pacing_Begin           ((uint8_T)10U)
#define PTHS_IN_V_PACING               ((uint8_T)4U)
#define PTHS_IN_Vent_Pacing_2          ((uint8_T)11U)
#define PTHS_IN_Ventricular_Charge     ((uint8_T)12U)
#define PTHS_IN_Ventricular_Discharge  ((uint8_T)13U)
#define PTHS_IN_Ventricular_Pacing     ((uint8_T)14U)
#define PTHS_IN_Ventricular_Sensing    ((uint8_T)15U)
#define PTH_IN_A_CHARGING_V_DISCHARGING ((uint8_T)1U)
#define PTH_IN_V_CHARGING_A_DISCHARGING ((uint8_T)3U)
#define P_IN_No_Natural_Activity_Sensed ((uint8_T)8U)

P_PTHS_T PTHS_P = {
  /* Expression: SampleTime
   * Referenced by: '<S3>/Digital Read1'
   */
  -1.0,

  /* Expression: SampleTime
   * Referenced by: '<S3>/Digital Read'
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
static void PTHS_NON_DUAL_MODES(const uint16_T *DataTypeConversion8, const
  boolean_T *DigitalRead1, const boolean_T *DigitalRead, const uint8_T
  *rtu_Mode_Chamber_Paced, const uint8_T *rtu_Mode_Chamber_Sensed, const uint8_T
  *rtu_Mode_Response, const uint8_T *rtu_VentricularAmplitude, const uint16_T
  *rtu_Ventricular_Pulse_Width, const uint8_T *rtu_Ventricular_Sensiitivity,
  const uint8_T *rtu_Atrial_Amplitude, const uint16_T *rtu_Atrial_Pulse_Width,
  const uint8_T *rtu_Atrial_Sensitivity, const uint8_T *rtu_Hysterisis, const
  uint16_T *rtu_VRP, const uint16_T *rtu_ARP, const uint16_T
  *rtu_Hysterisis_Escape_Interval, boolean_T *rty_Trigger, B_PTHS_c_T *localB,
  DW_PTHS_f_T *localDW);
static void SystemCore_release_mt2c4ipiyh1i(const freedomk64f_DigitalRead_PTHS_T
  *obj);
static void SystemCore_delete_asmvpfiv4fd5(const freedomk64f_DigitalRead_PTHS_T *
  obj);
static void matlabCodegenHandl_goquh1bjkbkt(freedomk64f_DigitalRead_PTHS_T *obj);
static void PTHS_SystemCore_release_mt(const freedomk64f_DigitalWrite_PTHS_T
  *obj);
static void PTHS_SystemCore_delete_as(const freedomk64f_DigitalWrite_PTHS_T *obj);
static void matlabCodegenHandle_matlabCo_go(freedomk64f_DigitalWrite_PTHS_T *obj);
static void PTHS_SystemCore_release(const freedomk64f_PWMOutput_PTHS_T *obj);
static void PTHS_SystemCore_delete(const freedomk64f_PWMOutput_PTHS_T *obj);
static void matlabCodegenHandle_matlabCodeg(freedomk64f_PWMOutput_PTHS_T *obj);

/* Function for Chart: '<Root>/Chart1' */
static void PTHS_NON_DUAL_MODES(const uint16_T *DataTypeConversion8, const
  boolean_T *DigitalRead1, const boolean_T *DigitalRead, const uint8_T
  *rtu_Mode_Chamber_Paced, const uint8_T *rtu_Mode_Chamber_Sensed, const uint8_T
  *rtu_Mode_Response, const uint8_T *rtu_VentricularAmplitude, const uint16_T
  *rtu_Ventricular_Pulse_Width, const uint8_T *rtu_Ventricular_Sensiitivity,
  const uint8_T *rtu_Atrial_Amplitude, const uint16_T *rtu_Atrial_Pulse_Width,
  const uint8_T *rtu_Atrial_Sensitivity, const uint8_T *rtu_Hysterisis, const
  uint16_T *rtu_VRP, const uint16_T *rtu_ARP, const uint16_T
  *rtu_Hysterisis_Escape_Interval, boolean_T *rty_Trigger, B_PTHS_c_T *localB,
  DW_PTHS_f_T *localDW)
{
  uint32_T qY;
  switch (localDW->is_NON_DUAL_MODES) {
   case PTHS_IN_Atrial_Charge:
    localDW->is_NON_DUAL_MODES = IN_Discharging_C21_and_Pace_Int;
    localB->PACE_CHARGE_CTRL = localDW->HIGH;
    localB->PACE_GND_CTRL = localDW->HIGH;
    localB->VENT_PACE_CTRL = localDW->LOW;
    localB->Z_ATR_CTRL = localDW->LOW;
    localB->Z_VENT_CTRL = localDW->LOW;
    localB->ATR_PACE_CTRL = localDW->LOW;
    localDW->Pace_Interval = *DataTypeConversion8;

    /* Chart: '<Root>/Chart1' */
    if (*rtu_Hysterisis == localDW->HIGH) {
      qY = (uint32_T)localDW->Pace_Interval + *rtu_Hysterisis_Escape_Interval;
      if (qY > 65535U) {
        qY = 65535U;
      }

      localDW->Pace_Interval = (uint16_T)qY;
    }
    break;

   case PTHS_IN_Atrial_Discharge:
    /* Chart: '<Root>/Chart1' */
    if ((*rtu_Mode_Chamber_Sensed == 0) && (localDW->temporalCounter_i1 >=
         localDW->Pace_Interval)) {
      localDW->is_NON_DUAL_MODES = P_IN_No_Natural_Activity_Sensed;
      localB->FRONT_END_CTRL = localDW->HIGH;
    } else {
      if (*rtu_Mode_Chamber_Sensed == 1) {
        localDW->is_NON_DUAL_MODES = PTHS_IN_Atrial_Sensing;
        localDW->temporalCounter_i1 = 0U;
        localB->FRONT_END_CTRL = localDW->HIGH;
        localB->ATR_CMP_REF_PWM = *rtu_Atrial_Sensitivity;
      }
    }
    break;

   case PTHS_IN_Atrial_Pacing:
    localDW->is_NON_DUAL_MODES = PTHS_IN_Pacing;
    localB->ATR_GND_CTRL = localDW->LOW;
    localB->Z_ATR_CTRL = localDW->LOW;
    localB->Z_VENT_CTRL = localDW->LOW;
    localB->VENT_GND_CTRL = localDW->LOW;
    break;

   case PTHS_IN_Atrial_Pacing_2:
    /* Chart: '<Root>/Chart1' */
    if (localDW->temporalCounter_i1 >= *rtu_Atrial_Pulse_Width) {
      localDW->is_NON_DUAL_MODES = PTHS_IN_NO_ACTIVE_CHILD;
      localDW->is_c2_PTHS = PTHS_IN_DECIDE_STATEFLOW;
      *rty_Trigger = localDW->LOW;
    }
    break;

   case PTHS_IN_Atrial_Sensing:
    if (localDW->temporalCounter_i1 >= localDW->Pace_Interval) {
      localDW->is_NON_DUAL_MODES = P_IN_No_Natural_Activity_Sensed;
      localB->FRONT_END_CTRL = localDW->HIGH;
    } else {
      if ((*rtu_Mode_Response == 2) && (localDW->temporalCounter_i1 >= *rtu_ARP)
          && (*DigitalRead == localDW->HIGH)) {
        localDW->is_NON_DUAL_MODES = PTHS_IN_NO_ACTIVE_CHILD;
        localDW->is_c2_PTHS = PTHS_IN_DECIDE_STATEFLOW;

        /* Chart: '<Root>/Chart1' */
        *rty_Trigger = localDW->LOW;
      }
    }
    break;

   case PTHS_IN_Charging_C23:
    /* Chart: '<Root>/Chart1' */
    switch (*rtu_Mode_Chamber_Paced) {
     case 2:
      localDW->is_NON_DUAL_MODES = PTHS_IN_Ventricular_Charge;
      localB->PACING_REF_PWM = *rtu_VentricularAmplitude;
      break;

     case 1:
      localDW->is_NON_DUAL_MODES = PTHS_IN_Atrial_Charge;
      localB->PACING_REF_PWM = *rtu_Atrial_Amplitude;
      break;
    }
    break;

   case IN_Discharging_C21_and_Pace_Int:
    /* Chart: '<Root>/Chart1' */
    switch (*rtu_Mode_Chamber_Paced) {
     case 1:
      localDW->is_NON_DUAL_MODES = PTHS_IN_Atrial_Discharge;
      localDW->temporalCounter_i1 = 0U;
      localB->ATR_GND_CTRL = localDW->HIGH;
      localB->VENT_GND_CTRL = localDW->LOW;
      qY = (uint32_T)localDW->Pace_Interval - /*MW:OvSatOk*/
        *rtu_Atrial_Pulse_Width;
      if (qY > localDW->Pace_Interval) {
        qY = 0U;
      }

      localDW->Pace_Interval = (uint16_T)qY;
      break;

     case 2:
      localDW->is_NON_DUAL_MODES = PTHS_IN_Ventricular_Discharge;
      localDW->temporalCounter_i1 = 0U;
      localB->ATR_GND_CTRL = localDW->LOW;
      localB->VENT_GND_CTRL = localDW->HIGH;
      qY = (uint32_T)localDW->Pace_Interval - /*MW:OvSatOk*/
        *rtu_Ventricular_Pulse_Width;
      if (qY > localDW->Pace_Interval) {
        qY = 0U;
      }

      localDW->Pace_Interval = (uint16_T)qY;
      break;
    }
    break;

   case P_IN_No_Natural_Activity_Sensed:
    localDW->is_NON_DUAL_MODES = PTHS_IN_Pacing_Begin;
    localB->PACE_CHARGE_CTRL = localDW->LOW;
    localB->PACE_GND_CTRL = localDW->HIGH;
    break;

   case PTHS_IN_Pacing:
    /* Chart: '<Root>/Chart1' */
    switch (*rtu_Mode_Chamber_Paced) {
     case 2:
      localDW->is_NON_DUAL_MODES = PTHS_IN_Vent_Pacing_2;
      localDW->temporalCounter_i1 = 0U;
      localB->VENT_PACE_CTRL = localDW->HIGH;
      break;

     case 1:
      localDW->is_NON_DUAL_MODES = PTHS_IN_Atrial_Pacing_2;
      localDW->temporalCounter_i1 = 0U;
      localB->ATR_PACE_CTRL = localDW->HIGH;
      break;
    }
    break;

   case PTHS_IN_Pacing_Begin:
    /* Chart: '<Root>/Chart1' */
    switch (*rtu_Mode_Chamber_Paced) {
     case 2:
      localDW->is_NON_DUAL_MODES = PTHS_IN_Ventricular_Pacing;
      localB->ATR_PACE_CTRL = localDW->LOW;
      break;

     case 1:
      localDW->is_NON_DUAL_MODES = PTHS_IN_Atrial_Pacing;
      localB->VENT_PACE_CTRL = localDW->LOW;
      break;
    }
    break;

   case PTHS_IN_Vent_Pacing_2:
    /* Chart: '<Root>/Chart1' */
    if (localDW->temporalCounter_i1 >= *rtu_Ventricular_Pulse_Width) {
      localDW->is_NON_DUAL_MODES = PTHS_IN_NO_ACTIVE_CHILD;
      localDW->is_c2_PTHS = PTHS_IN_DECIDE_STATEFLOW;
      *rty_Trigger = localDW->LOW;
    }
    break;

   case PTHS_IN_Ventricular_Charge:
    localDW->is_NON_DUAL_MODES = IN_Discharging_C21_and_Pace_Int;
    localB->PACE_CHARGE_CTRL = localDW->HIGH;
    localB->PACE_GND_CTRL = localDW->HIGH;
    localB->VENT_PACE_CTRL = localDW->LOW;
    localB->Z_ATR_CTRL = localDW->LOW;
    localB->Z_VENT_CTRL = localDW->LOW;
    localB->ATR_PACE_CTRL = localDW->LOW;
    localDW->Pace_Interval = *DataTypeConversion8;

    /* Chart: '<Root>/Chart1' */
    if (*rtu_Hysterisis == localDW->HIGH) {
      qY = (uint32_T)localDW->Pace_Interval + *rtu_Hysterisis_Escape_Interval;
      if (qY > 65535U) {
        qY = 65535U;
      }

      localDW->Pace_Interval = (uint16_T)qY;
    }
    break;

   case PTHS_IN_Ventricular_Discharge:
    /* Chart: '<Root>/Chart1' */
    if (*rtu_Mode_Chamber_Sensed == 2) {
      localDW->is_NON_DUAL_MODES = PTHS_IN_Ventricular_Sensing;
      localDW->temporalCounter_i1 = 0U;
      localB->FRONT_END_CTRL = localDW->HIGH;
      localB->VENT_CMP_REF_PWM = *rtu_Ventricular_Sensiitivity;
    } else {
      if ((*rtu_Mode_Chamber_Sensed == 0) && (localDW->temporalCounter_i1 >=
           localDW->Pace_Interval)) {
        localDW->is_NON_DUAL_MODES = P_IN_No_Natural_Activity_Sensed;
        localB->FRONT_END_CTRL = localDW->HIGH;
      }
    }
    break;

   case PTHS_IN_Ventricular_Pacing:
    localDW->is_NON_DUAL_MODES = PTHS_IN_Pacing;
    localB->ATR_GND_CTRL = localDW->LOW;
    localB->Z_ATR_CTRL = localDW->LOW;
    localB->Z_VENT_CTRL = localDW->LOW;
    localB->VENT_GND_CTRL = localDW->LOW;
    break;

   default:
    /* case IN_Ventricular_Sensing: */
    if (localDW->temporalCounter_i1 >= localDW->Pace_Interval) {
      localDW->is_NON_DUAL_MODES = P_IN_No_Natural_Activity_Sensed;
      localB->FRONT_END_CTRL = localDW->HIGH;
    } else {
      if ((*rtu_Mode_Response == 2) && (*DigitalRead1) &&
          (localDW->temporalCounter_i1 >= *rtu_VRP)) {
        localDW->is_NON_DUAL_MODES = PTHS_IN_NO_ACTIVE_CHILD;
        localDW->is_c2_PTHS = PTHS_IN_DECIDE_STATEFLOW;

        /* Chart: '<Root>/Chart1' */
        *rty_Trigger = localDW->LOW;
      }
    }
    break;
  }
}

static void SystemCore_release_mt2c4ipiyh1i(const freedomk64f_DigitalRead_PTHS_T
  *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_digitalIO_close(obj->MW_DIGITALIO_HANDLE);
  }
}

static void SystemCore_delete_asmvpfiv4fd5(const freedomk64f_DigitalRead_PTHS_T *
  obj)
{
  SystemCore_release_mt2c4ipiyh1i(obj);
}

static void matlabCodegenHandl_goquh1bjkbkt(freedomk64f_DigitalRead_PTHS_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    SystemCore_delete_asmvpfiv4fd5(obj);
  }
}

static void PTHS_SystemCore_release_mt(const freedomk64f_DigitalWrite_PTHS_T
  *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_digitalIO_close(obj->MW_DIGITALIO_HANDLE);
  }
}

static void PTHS_SystemCore_delete_as(const freedomk64f_DigitalWrite_PTHS_T *obj)
{
  PTHS_SystemCore_release_mt(obj);
}

static void matlabCodegenHandle_matlabCo_go(freedomk64f_DigitalWrite_PTHS_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    PTHS_SystemCore_delete_as(obj);
  }
}

static void PTHS_SystemCore_release(const freedomk64f_PWMOutput_PTHS_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_PWM_Stop(obj->MW_PWM_HANDLE);
    MW_PWM_Close(obj->MW_PWM_HANDLE);
  }
}

static void PTHS_SystemCore_delete(const freedomk64f_PWMOutput_PTHS_T *obj)
{
  PTHS_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(freedomk64f_PWMOutput_PTHS_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    PTHS_SystemCore_delete(obj);
  }
}

/* System initialize for referenced model: 'PTHS' */
void PTHS_Init(DW_PTHS_f_T *localDW)
{
  freedomk64f_DigitalRead_PTHS_T *obj;
  freedomk64f_DigitalWrite_PTHS_T *obj_0;
  freedomk64f_PWMOutput_PTHS_T *obj_1;

  /* SystemInitialize for Chart: '<Root>/Chart1' */
  localDW->HIGH = true;

  /* Start for MATLABSystem: '<S3>/Digital Read' */
  localDW->obj.matlabCodegenIsDeleted = true;
  localDW->obj.isInitialized = 0;
  localDW->obj.SampleTime = -1.0;
  localDW->obj.matlabCodegenIsDeleted = false;
  localDW->objisempty = true;
  localDW->obj.SampleTime = PTHS_P.DigitalRead_SampleTime;
  obj = &localDW->obj;
  localDW->obj.isSetupComplete = false;
  localDW->obj.isInitialized = 1;
  obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(0U, 0);
  localDW->obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<S3>/Digital Read1' */
  localDW->obj_k.matlabCodegenIsDeleted = true;
  localDW->obj_k.isInitialized = 0;
  localDW->obj_k.SampleTime = -1.0;
  localDW->obj_k.matlabCodegenIsDeleted = false;
  localDW->objisempty_d = true;
  localDW->obj_k.SampleTime = PTHS_P.DigitalRead1_SampleTime;
  obj = &localDW->obj_k;
  localDW->obj_k.isSetupComplete = false;
  localDW->obj_k.isInitialized = 1;
  obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(1U, 0);
  localDW->obj_k.isSetupComplete = true;

  /* Start for MATLABSystem: '<S3>/Digital Write2' */
  localDW->obj_h.matlabCodegenIsDeleted = true;
  localDW->obj_h.isInitialized = 0;
  localDW->obj_h.matlabCodegenIsDeleted = false;
  localDW->objisempty_i = true;
  obj_0 = &localDW->obj_h;
  localDW->obj_h.isSetupComplete = false;
  localDW->obj_h.isInitialized = 1;
  obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(2U, 1);
  localDW->obj_h.isSetupComplete = true;

  /* Start for MATLABSystem: '<S3>/Digital Write3' */
  localDW->obj_b.matlabCodegenIsDeleted = true;
  localDW->obj_b.isInitialized = 0;
  localDW->obj_b.matlabCodegenIsDeleted = false;
  localDW->objisempty_o = true;
  obj_0 = &localDW->obj_b;
  localDW->obj_b.isSetupComplete = false;
  localDW->obj_b.isInitialized = 1;
  obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(10U, 1);
  localDW->obj_b.isSetupComplete = true;

  /* Start for MATLABSystem: '<S3>/PWM Output1' */
  localDW->obj_j.matlabCodegenIsDeleted = true;
  localDW->obj_j.isInitialized = 0;
  localDW->obj_j.matlabCodegenIsDeleted = false;
  localDW->objisempty_j = true;
  obj_1 = &localDW->obj_j;
  localDW->obj_j.isSetupComplete = false;
  localDW->obj_j.isInitialized = 1;
  obj_1->MW_PWM_HANDLE = MW_PWM_Open(5U, 2000.0, 0.0);
  MW_PWM_Start(localDW->obj_j.MW_PWM_HANDLE);
  localDW->obj_j.isSetupComplete = true;

  /* Start for MATLABSystem: '<S3>/Digital Write8' */
  localDW->obj_a.matlabCodegenIsDeleted = true;
  localDW->obj_a.isInitialized = 0;
  localDW->obj_a.matlabCodegenIsDeleted = false;
  localDW->objisempty_n = true;
  obj_0 = &localDW->obj_a;
  localDW->obj_a.isSetupComplete = false;
  localDW->obj_a.isInitialized = 1;
  obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(9U, 1);
  localDW->obj_a.isSetupComplete = true;

  /* Start for MATLABSystem: '<S3>/Digital Write4' */
  localDW->obj_m.matlabCodegenIsDeleted = true;
  localDW->obj_m.isInitialized = 0;
  localDW->obj_m.matlabCodegenIsDeleted = false;
  localDW->objisempty_b = true;
  obj_0 = &localDW->obj_m;
  localDW->obj_m.isSetupComplete = false;
  localDW->obj_m.isInitialized = 1;
  obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(8U, 1);
  localDW->obj_m.isSetupComplete = true;

  /* Start for MATLABSystem: '<S3>/Digital Write5' */
  localDW->obj_e.matlabCodegenIsDeleted = true;
  localDW->obj_e.isInitialized = 0;
  localDW->obj_e.matlabCodegenIsDeleted = false;
  localDW->objisempty_g = true;
  obj_0 = &localDW->obj_e;
  localDW->obj_e.isSetupComplete = false;
  localDW->obj_e.isInitialized = 1;
  obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(11U, 1);
  localDW->obj_e.isSetupComplete = true;

  /* Start for MATLABSystem: '<S3>/Digital Write6' */
  localDW->obj_d.matlabCodegenIsDeleted = true;
  localDW->obj_d.isInitialized = 0;
  localDW->obj_d.matlabCodegenIsDeleted = false;
  localDW->objisempty_a = true;
  obj_0 = &localDW->obj_d;
  localDW->obj_d.isSetupComplete = false;
  localDW->obj_d.isInitialized = 1;
  obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(4U, 1);
  localDW->obj_d.isSetupComplete = true;

  /* Start for MATLABSystem: '<S3>/Digital Write7' */
  localDW->obj_bs.matlabCodegenIsDeleted = true;
  localDW->obj_bs.isInitialized = 0;
  localDW->obj_bs.matlabCodegenIsDeleted = false;
  localDW->objisempty_l = true;
  obj_0 = &localDW->obj_bs;
  localDW->obj_bs.isSetupComplete = false;
  localDW->obj_bs.isInitialized = 1;
  obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(7U, 1);
  localDW->obj_bs.isSetupComplete = true;

  /* Start for MATLABSystem: '<S3>/Digital Write9' */
  localDW->obj_aq.matlabCodegenIsDeleted = true;
  localDW->obj_aq.isInitialized = 0;
  localDW->obj_aq.matlabCodegenIsDeleted = false;
  localDW->objisempty_dn = true;
  obj_0 = &localDW->obj_aq;
  localDW->obj_aq.isSetupComplete = false;
  localDW->obj_aq.isInitialized = 1;
  obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(12U, 1);
  localDW->obj_aq.isSetupComplete = true;

  /* Start for MATLABSystem: '<S3>/Digital Write1' */
  localDW->obj_p.matlabCodegenIsDeleted = true;
  localDW->obj_p.isInitialized = 0;
  localDW->obj_p.matlabCodegenIsDeleted = false;
  localDW->objisempty_be = true;
  obj_0 = &localDW->obj_p;
  localDW->obj_p.isSetupComplete = false;
  localDW->obj_p.isInitialized = 1;
  obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(13U, 1);
  localDW->obj_p.isSetupComplete = true;

  /* Start for MATLABSystem: '<S3>/PWM Output2' */
  localDW->obj_bg.matlabCodegenIsDeleted = true;
  localDW->obj_bg.isInitialized = 0;
  localDW->obj_bg.matlabCodegenIsDeleted = false;
  localDW->objisempty_e = true;
  obj_1 = &localDW->obj_bg;
  localDW->obj_bg.isSetupComplete = false;
  localDW->obj_bg.isInitialized = 1;
  obj_1->MW_PWM_HANDLE = MW_PWM_Open(6U, 2000.0, 0.0);
  MW_PWM_Start(localDW->obj_bg.MW_PWM_HANDLE);
  localDW->obj_bg.isSetupComplete = true;

  /* Start for MATLABSystem: '<S3>/PWM Output3' */
  localDW->obj_ds.matlabCodegenIsDeleted = true;
  localDW->obj_ds.isInitialized = 0;
  localDW->obj_ds.matlabCodegenIsDeleted = false;
  localDW->objisempty_f = true;
  obj_1 = &localDW->obj_ds;
  localDW->obj_ds.isSetupComplete = false;
  localDW->obj_ds.isInitialized = 1;
  obj_1->MW_PWM_HANDLE = MW_PWM_Open(3U, 2000.0, 0.0);
  MW_PWM_Start(localDW->obj_ds.MW_PWM_HANDLE);
  localDW->obj_ds.isSetupComplete = true;
}

/* Output and update for referenced model: 'PTHS' */
void PTHS(const uint8_T *rtu_Mode_Chamber_Paced, const uint8_T
          *rtu_Mode_Chamber_Sensed, const uint8_T *rtu_Mode_Response, const
          uint8_T *rtu_VentricularAmplitude, const uint16_T
          *rtu_Ventricular_Pulse_Width, const uint8_T
          *rtu_Ventricular_Sensiitivity, const uint8_T *rtu_Atrial_Amplitude,
          const uint16_T *rtu_Atrial_Pulse_Width, const uint8_T
          *rtu_Atrial_Sensitivity, const uint8_T *rtu_Hysterisis, const uint16_T
          *rtu_Lower_Rate_Limit, const uint16_T *rtu_AV_Delay, const uint16_T
          *rtu_VRP, const uint16_T *rtu_ARP, const uint16_T
          *rtu_Hysterisis_Escape_Interval, const uint8_T
          *rtu_Maximum_Sensor_Rate, const uint8_T *rtu_Mode_Adaptivity, const
          uint8_T *rtu_Reaction_Time, const uint8_T *rtu_Response_Factor, const
          uint8_T *rtu_Recovery_Time, const real_T *rtu_Smoother_Acceleration,
          boolean_T *rty_Trigger, B_PTHS_c_T *localB, DW_PTHS_f_T *localDW)
{
  real_T rtb_Divide1;
  uint16_T DataTypeConversion8;
  boolean_T DigitalRead1;
  boolean_T DigitalRead;
  uint32_T qY;
  uint32_T qY_0;

  /* Product: '<Root>/Divide1' incorporates:
   *  Constant: '<Root>/Constant1'
   *  DataTypeConversion: '<Root>/Data Type Conversion5'
   */
  rtb_Divide1 = PTHS_P.Constant1_Value / (real_T)*rtu_Lower_Rate_Limit;

  /* Chart: '<Root>/Chart' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion3'
   *  DataTypeConversion: '<Root>/Data Type Conversion4'
   */
  if (localDW->temporalCounter_i1_i < MAX_uint32_T) {
    localDW->temporalCounter_i1_i++;
  }

  if (localDW->is_active_c1_PTHS == 0U) {
    localDW->is_active_c1_PTHS = 1U;
    localDW->is_c1_PTHS = PTHS_IN_start;
  } else {
    switch (localDW->is_c1_PTHS) {
     case PTHS_IN_Constant:
      localDW->is_c1_PTHS = PTHS_IN_main;
      localDW->RateChange = *rtu_Response_Factor;
      if ((rtb_Divide1 > localB->LRL) || rtIsNaN(localB->LRL)) {
        localB->LRL = rtb_Divide1;
      }

      if (!(localB->LRL < *rtu_Maximum_Sensor_Rate)) {
        localB->LRL = *rtu_Maximum_Sensor_Rate;
      }
      break;

     case PTHS_IN_Decreasing:
      if (localDW->temporalCounter_i1_i >= *rtu_Recovery_Time) {
        localDW->is_c1_PTHS = PTHS_IN_main;
        localDW->RateChange = *rtu_Response_Factor;
        if ((rtb_Divide1 > localB->LRL) || rtIsNaN(localB->LRL)) {
          localB->LRL = rtb_Divide1;
        }

        if (!(localB->LRL < *rtu_Maximum_Sensor_Rate)) {
          localB->LRL = *rtu_Maximum_Sensor_Rate;
        }
      }
      break;

     case PTHS_IN_Increasing:
      if (localDW->temporalCounter_i1_i >= *rtu_Reaction_Time) {
        localDW->is_c1_PTHS = PTHS_IN_main;
        localDW->RateChange = *rtu_Response_Factor;
        if ((rtb_Divide1 > localB->LRL) || rtIsNaN(localB->LRL)) {
          localB->LRL = rtb_Divide1;
        }

        if (!(localB->LRL < *rtu_Maximum_Sensor_Rate)) {
          localB->LRL = *rtu_Maximum_Sensor_Rate;
        }
      }
      break;

     case PTHS_IN_main:
      if ((*rtu_Mode_Adaptivity == 1) && (*rtu_Smoother_Acceleration < 1.5) &&
          (localB->LRL > rtb_Divide1)) {
        localDW->is_c1_PTHS = PTHS_IN_Decreasing;
        localDW->temporalCounter_i1_i = 0U;
        localB->LRL -= localDW->RateChange;
      } else if ((*rtu_Mode_Adaptivity == 1) && (*rtu_Smoother_Acceleration >
                  1.5) && (localB->LRL < *rtu_Maximum_Sensor_Rate)) {
        localDW->is_c1_PTHS = PTHS_IN_Increasing;
        localDW->temporalCounter_i1_i = 0U;
        localB->LRL += localDW->RateChange;
      } else {
        if (*rtu_Mode_Adaptivity == 0) {
          localDW->is_c1_PTHS = PTHS_IN_Constant;
          localB->LRL = rtb_Divide1;
        }
      }
      break;

     default:
      /* case IN_start: */
      if ((rtb_Divide1 > 0.0) && (rtb_Divide1 <= 2000.0)) {
        localB->LRL = rtb_Divide1;
        localDW->is_c1_PTHS = PTHS_IN_main;
        localDW->RateChange = *rtu_Response_Factor;
        if (!(localB->LRL < *rtu_Maximum_Sensor_Rate)) {
          localB->LRL = *rtu_Maximum_Sensor_Rate;
        }
      }
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* DataTypeConversion: '<Root>/Data Type Conversion8' incorporates:
   *  Constant: '<Root>/Constant'
   *  Product: '<Root>/Divide'
   */
  rtb_Divide1 = floor(PTHS_P.Constant_Value / localB->LRL);
  if (rtIsNaN(rtb_Divide1) || rtIsInf(rtb_Divide1)) {
    rtb_Divide1 = 0.0;
  } else {
    rtb_Divide1 = fmod(rtb_Divide1, 65536.0);
  }

  DataTypeConversion8 = (uint16_T)(rtb_Divide1 < 0.0 ? (int32_T)(uint16_T)
    -(int16_T)(uint16_T)-rtb_Divide1 : (int32_T)(uint16_T)rtb_Divide1);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion8' */

  /* MATLABSystem: '<S3>/Digital Read' */
  if (localDW->obj.SampleTime != PTHS_P.DigitalRead_SampleTime) {
    localDW->obj.SampleTime = PTHS_P.DigitalRead_SampleTime;
  }

  DigitalRead = MW_digitalIO_read(localDW->obj.MW_DIGITALIO_HANDLE);

  /* End of MATLABSystem: '<S3>/Digital Read' */

  /* MATLABSystem: '<S3>/Digital Read1' */
  if (localDW->obj_k.SampleTime != PTHS_P.DigitalRead1_SampleTime) {
    localDW->obj_k.SampleTime = PTHS_P.DigitalRead1_SampleTime;
  }

  DigitalRead1 = MW_digitalIO_read(localDW->obj_k.MW_DIGITALIO_HANDLE);

  /* End of MATLABSystem: '<S3>/Digital Read1' */

  /* Chart: '<Root>/Chart1' */
  if (localDW->temporalCounter_i1 < MAX_uint32_T) {
    localDW->temporalCounter_i1++;
  }

  if (localDW->is_active_c2_PTHS == 0U) {
    localDW->is_active_c2_PTHS = 1U;
    localDW->is_c2_PTHS = PTHS_IN_DECIDE_STATEFLOW;
    *rty_Trigger = localDW->LOW;
  } else {
    switch (localDW->is_c2_PTHS) {
     case PTHS_IN_DECIDE_STATEFLOW:
      if (*rtu_Mode_Chamber_Paced == 3) {
        localDW->is_c2_PTHS = PTHS_IN_DUAL_MODES;
        localDW->is_DUAL_MODES = PTH_IN_A_CHARGING_V_DISCHARGING;
        localDW->temporalCounter_i1 = 0U;
        localB->PACING_REF_PWM = *rtu_Atrial_Amplitude;
        localB->PACE_CHARGE_CTRL = localDW->HIGH;
        localB->PACE_GND_CTRL = localDW->HIGH;
        localB->VENT_PACE_CTRL = localDW->LOW;
        localB->Z_ATR_CTRL = localDW->LOW;
        localB->Z_VENT_CTRL = localDW->LOW;
        localB->ATR_PACE_CTRL = localDW->LOW;
        localB->ATR_GND_CTRL = localDW->LOW;
        localB->VENT_GND_CTRL = localDW->HIGH;
        qY = (uint32_T)DataTypeConversion8 - /*MW:OvSatOk*/ *rtu_AV_Delay;
        if (qY > DataTypeConversion8) {
          qY = 0U;
        }

        localDW->Atrial_Escape_Interval = (uint16_T)qY;
        *rty_Trigger = localDW->HIGH;
      } else if ((*rtu_Mode_Chamber_Paced == 2) || (*rtu_Mode_Chamber_Paced == 1))
      {
        localDW->is_c2_PTHS = PTHS_IN_NON_DUAL_MODES;
        localDW->is_NON_DUAL_MODES = PTHS_IN_Charging_C23;
        localB->ATR_PACE_CTRL = localDW->LOW;
        localB->VENT_PACE_CTRL = localDW->LOW;
        *rty_Trigger = localDW->HIGH;
      } else {
        *rty_Trigger = !*rty_Trigger;
      }
      break;

     case PTHS_IN_DUAL_MODES:
      switch (localDW->is_DUAL_MODES) {
       case PTH_IN_A_CHARGING_V_DISCHARGING:
        qY = (uint32_T)localDW->Atrial_Escape_Interval - /*MW:OvSatOk*/
          *rtu_Atrial_Pulse_Width;
        if (qY > localDW->Atrial_Escape_Interval) {
          qY = 0U;
        }

        qY_0 = qY - /*MW:OvSatOk*/ *rtu_Ventricular_Pulse_Width;
        if (qY_0 > qY) {
          qY_0 = 0U;
        }

        if (localDW->temporalCounter_i1 >= qY_0) {
          localDW->is_DUAL_MODES = PTHS_IN_A_PACING;
          localDW->temporalCounter_i1 = 0U;
          localB->PACE_CHARGE_CTRL = localDW->LOW;
          localB->PACE_GND_CTRL = localDW->HIGH;
          localB->VENT_PACE_CTRL = localDW->LOW;
          localB->ATR_GND_CTRL = localDW->LOW;
          localB->Z_ATR_CTRL = localDW->LOW;
          localB->Z_VENT_CTRL = localDW->LOW;
          localB->VENT_GND_CTRL = localDW->LOW;
          localB->ATR_PACE_CTRL = localDW->HIGH;
        }
        break;

       case PTHS_IN_A_PACING:
        if (localDW->temporalCounter_i1 >= *rtu_Atrial_Pulse_Width) {
          localDW->is_DUAL_MODES = PTH_IN_V_CHARGING_A_DISCHARGING;
          localDW->temporalCounter_i1 = 0U;
          localB->PACING_REF_PWM = *rtu_VentricularAmplitude;
          localB->PACE_CHARGE_CTRL = localDW->HIGH;
          localB->PACE_GND_CTRL = localDW->HIGH;
          localB->VENT_PACE_CTRL = localDW->LOW;
          localB->Z_ATR_CTRL = localDW->LOW;
          localB->Z_VENT_CTRL = localDW->LOW;
          localB->ATR_PACE_CTRL = localDW->LOW;
          localB->ATR_GND_CTRL = localDW->HIGH;
          localB->VENT_GND_CTRL = localDW->LOW;
        }
        break;

       case PTH_IN_V_CHARGING_A_DISCHARGING:
        if (localDW->temporalCounter_i1 >= *rtu_AV_Delay) {
          localDW->is_DUAL_MODES = PTHS_IN_V_PACING;
          localDW->temporalCounter_i1 = 0U;
          localB->PACE_CHARGE_CTRL = localDW->LOW;
          localB->PACE_GND_CTRL = localDW->HIGH;
          localB->ATR_PACE_CTRL = localDW->LOW;
          localB->ATR_GND_CTRL = localDW->LOW;
          localB->Z_ATR_CTRL = localDW->LOW;
          localB->Z_VENT_CTRL = localDW->LOW;
          localB->VENT_GND_CTRL = localDW->LOW;
          localB->VENT_PACE_CTRL = localDW->HIGH;
        }
        break;

       default:
        /* case IN_V_PACING: */
        if (localDW->temporalCounter_i1 >= *rtu_Ventricular_Pulse_Width) {
          localDW->is_DUAL_MODES = PTHS_IN_NO_ACTIVE_CHILD;
          localDW->is_c2_PTHS = PTHS_IN_DECIDE_STATEFLOW;
          *rty_Trigger = localDW->LOW;
        }
        break;
      }
      break;

     default:
      /* case IN_NON_DUAL_MODES: */
      PTHS_NON_DUAL_MODES(&DataTypeConversion8, &DigitalRead1, &DigitalRead,
                          rtu_Mode_Chamber_Paced, rtu_Mode_Chamber_Sensed,
                          rtu_Mode_Response, rtu_VentricularAmplitude,
                          rtu_Ventricular_Pulse_Width,
                          rtu_Ventricular_Sensiitivity, rtu_Atrial_Amplitude,
                          rtu_Atrial_Pulse_Width, rtu_Atrial_Sensitivity,
                          rtu_Hysterisis, rtu_VRP, rtu_ARP,
                          rtu_Hysterisis_Escape_Interval, rty_Trigger, localB,
                          localDW);
      break;
    }
  }

  /* End of Chart: '<Root>/Chart1' */

  /* MATLABSystem: '<S3>/Digital Write2' */
  MW_digitalIO_write(localDW->obj_h.MW_DIGITALIO_HANDLE,
                     localB->PACE_CHARGE_CTRL);

  /* MATLABSystem: '<S3>/Digital Write3' */
  MW_digitalIO_write(localDW->obj_b.MW_DIGITALIO_HANDLE, localB->PACE_GND_CTRL);

  /* MATLABSystem: '<S3>/PWM Output1' */
  MW_PWM_SetDutyCycle(localDW->obj_j.MW_PWM_HANDLE, (real_T)
                      localB->PACING_REF_PWM);

  /* MATLABSystem: '<S3>/Digital Write8' */
  MW_digitalIO_write(localDW->obj_a.MW_DIGITALIO_HANDLE, localB->VENT_PACE_CTRL);

  /* MATLABSystem: '<S3>/Digital Write4' */
  MW_digitalIO_write(localDW->obj_m.MW_DIGITALIO_HANDLE, localB->ATR_PACE_CTRL);

  /* MATLABSystem: '<S3>/Digital Write5' */
  MW_digitalIO_write(localDW->obj_e.MW_DIGITALIO_HANDLE, localB->ATR_GND_CTRL);

  /* MATLABSystem: '<S3>/Digital Write6' */
  MW_digitalIO_write(localDW->obj_d.MW_DIGITALIO_HANDLE, localB->Z_ATR_CTRL);

  /* MATLABSystem: '<S3>/Digital Write7' */
  MW_digitalIO_write(localDW->obj_bs.MW_DIGITALIO_HANDLE, localB->Z_VENT_CTRL);

  /* MATLABSystem: '<S3>/Digital Write9' */
  MW_digitalIO_write(localDW->obj_aq.MW_DIGITALIO_HANDLE, localB->VENT_GND_CTRL);

  /* MATLABSystem: '<S3>/Digital Write1' */
  MW_digitalIO_write(localDW->obj_p.MW_DIGITALIO_HANDLE, localB->FRONT_END_CTRL);

  /* MATLABSystem: '<S3>/PWM Output2' */
  MW_PWM_SetDutyCycle(localDW->obj_bg.MW_PWM_HANDLE, (real_T)
                      localB->ATR_CMP_REF_PWM);

  /* MATLABSystem: '<S3>/PWM Output3' */
  MW_PWM_SetDutyCycle(localDW->obj_ds.MW_PWM_HANDLE, (real_T)
                      localB->VENT_CMP_REF_PWM);
}

/* Termination for referenced model: 'PTHS' */
void PTHS_Term(DW_PTHS_f_T *localDW)
{
  /* Terminate for MATLABSystem: '<S3>/Digital Read' */
  matlabCodegenHandl_goquh1bjkbkt(&localDW->obj);

  /* Terminate for MATLABSystem: '<S3>/Digital Read1' */
  matlabCodegenHandl_goquh1bjkbkt(&localDW->obj_k);

  /* Terminate for MATLABSystem: '<S3>/Digital Write2' */
  matlabCodegenHandle_matlabCo_go(&localDW->obj_h);

  /* Terminate for MATLABSystem: '<S3>/Digital Write3' */
  matlabCodegenHandle_matlabCo_go(&localDW->obj_b);

  /* Terminate for MATLABSystem: '<S3>/PWM Output1' */
  matlabCodegenHandle_matlabCodeg(&localDW->obj_j);

  /* Terminate for MATLABSystem: '<S3>/Digital Write8' */
  matlabCodegenHandle_matlabCo_go(&localDW->obj_a);

  /* Terminate for MATLABSystem: '<S3>/Digital Write4' */
  matlabCodegenHandle_matlabCo_go(&localDW->obj_m);

  /* Terminate for MATLABSystem: '<S3>/Digital Write5' */
  matlabCodegenHandle_matlabCo_go(&localDW->obj_e);

  /* Terminate for MATLABSystem: '<S3>/Digital Write6' */
  matlabCodegenHandle_matlabCo_go(&localDW->obj_d);

  /* Terminate for MATLABSystem: '<S3>/Digital Write7' */
  matlabCodegenHandle_matlabCo_go(&localDW->obj_bs);

  /* Terminate for MATLABSystem: '<S3>/Digital Write9' */
  matlabCodegenHandle_matlabCo_go(&localDW->obj_aq);

  /* Terminate for MATLABSystem: '<S3>/Digital Write1' */
  matlabCodegenHandle_matlabCo_go(&localDW->obj_p);

  /* Terminate for MATLABSystem: '<S3>/PWM Output2' */
  matlabCodegenHandle_matlabCodeg(&localDW->obj_bg);

  /* Terminate for MATLABSystem: '<S3>/PWM Output3' */
  matlabCodegenHandle_matlabCodeg(&localDW->obj_ds);
}

/* Model initialize function */
void PTHS_initialize(const char_T **rt_errorStatus, RT_MODEL_PTHS_T *const
                     PTHS_M)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatusPointer(PTHS_M, rt_errorStatus);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

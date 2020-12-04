/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: PTHS.c
 *
 * Code generated for Simulink model 'PTHS'.
 *
 * Model version                  : 1.12
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Thu Dec  3 22:58:35 2020
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
#define PTHS_IN_INITIAL                ((uint8_T)3U)
#define PTHS_IN_Increasing             ((uint8_T)4U)
#define PTHS_IN_NO_ACTIVE_CHILD        ((uint8_T)0U)
#define PTHS_IN_main                   ((uint8_T)5U)

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

/* Block signals (default storage) */
B_PTHS_T PTHS_B;

/* Block states (default storage) */
DW_PTHS_T PTHS_DW;

/* External inputs (root inport signals with default storage) */
ExtU_PTHS_T PTHS_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_PTHS_T PTHS_Y;

/* Real-time model */
RT_MODEL_PTHS_T PTHS_M_;
RT_MODEL_PTHS_T *const PTHS_M = &PTHS_M_;

/* Forward declaration for local functions */
static void PTHS_NON_DUAL_MODES(const uint16_T *DataTypeConversion8, const
  boolean_T *DigitalRead1, const boolean_T *DigitalRead);
static void SystemCore_relea_f3az1rpryocjcx(const freedomk64f_DigitalRead_PTHS_T
  *obj);
static void SystemCore_delet_f3az1rpryocjcx(const freedomk64f_DigitalRead_PTHS_T
  *obj);
static void matlabCodegenHan_f3az1rpryocjcx(freedomk64f_DigitalRead_PTHS_T *obj);
static void PTHS_SystemCore_release(const freedomk64f_DigitalWrite_PTHS_T *obj);
static void PTHS_SystemCore_delete(const freedomk64f_DigitalWrite_PTHS_T *obj);
static void matlabCodegenHandle_matlabCodeg(freedomk64f_DigitalWrite_PTHS_T *obj);
static void PTHS_SystemCore_release_f3(const freedomk64f_PWMOutput_PTHS_T *obj);
static void PTHS_SystemCore_delete_f3(const freedomk64f_PWMOutput_PTHS_T *obj);
static void matlabCodegenHandle_matlabCo_f3(freedomk64f_PWMOutput_PTHS_T *obj);

/* Function for Chart: '<Root>/Chart1' */
static void PTHS_NON_DUAL_MODES(const uint16_T *DataTypeConversion8, const
  boolean_T *DigitalRead1, const boolean_T *DigitalRead)
{
  uint32_T qY;
  switch (PTHS_DW.is_NON_DUAL_MODES) {
   case PTHS_IN_Atrial_Charge:
    PTHS_DW.is_NON_DUAL_MODES = IN_Discharging_C21_and_Pace_Int;
    PTHS_B.PACE_CHARGE_CTRL = PTHS_DW.HIGH;
    PTHS_B.PACE_GND_CTRL = PTHS_DW.HIGH;
    PTHS_B.VENT_PACE_CTRL = PTHS_DW.LOW;
    PTHS_B.Z_ATR_CTRL = PTHS_DW.LOW;
    PTHS_B.Z_VENT_CTRL = PTHS_DW.LOW;
    PTHS_B.ATR_PACE_CTRL = PTHS_DW.LOW;
    PTHS_DW.Pace_Interval = *DataTypeConversion8;

    /* Inport: '<Root>/Hysterisis' */
    if (PTHS_U.Hysterisis == PTHS_DW.HIGH) {
      /* Inport: '<Root>/Hysterisis_Escape_Interval' */
      qY = (uint32_T)PTHS_DW.Pace_Interval + PTHS_U.Hysterisis_Escape_Interval;
      if (qY > 65535U) {
        qY = 65535U;
      }

      PTHS_DW.Pace_Interval = (uint16_T)qY;
    }
    break;

   case PTHS_IN_Atrial_Discharge:
    /* Inport: '<Root>/Mode_Chamber_Sensed' */
    if ((PTHS_U.Mode_Chamber_Sensed == 0) && (PTHS_DW.temporalCounter_i1 >=
         PTHS_DW.Pace_Interval)) {
      PTHS_DW.is_NON_DUAL_MODES = P_IN_No_Natural_Activity_Sensed;
      PTHS_B.FRONT_END_CTRL = PTHS_DW.HIGH;
    } else {
      if (PTHS_U.Mode_Chamber_Sensed == 1) {
        PTHS_DW.is_NON_DUAL_MODES = PTHS_IN_Atrial_Sensing;
        PTHS_DW.temporalCounter_i1 = 0U;
        PTHS_B.FRONT_END_CTRL = PTHS_DW.HIGH;

        /* Inport: '<Root>/Atrial_Sensitivity' */
        PTHS_B.ATR_CMP_REF_PWM = PTHS_U.Atrial_Sensitivity;
      }
    }
    break;

   case PTHS_IN_Atrial_Pacing:
    PTHS_DW.is_NON_DUAL_MODES = PTHS_IN_Pacing;
    PTHS_B.ATR_GND_CTRL = PTHS_DW.LOW;
    PTHS_B.Z_ATR_CTRL = PTHS_DW.LOW;
    PTHS_B.Z_VENT_CTRL = PTHS_DW.LOW;
    PTHS_B.VENT_GND_CTRL = PTHS_DW.LOW;
    break;

   case PTHS_IN_Atrial_Pacing_2:
    /* Inport: '<Root>/Atrial_Pulse_Width' */
    if (PTHS_DW.temporalCounter_i1 >= PTHS_U.Atrial_Pulse_Width) {
      PTHS_DW.is_NON_DUAL_MODES = PTHS_IN_NO_ACTIVE_CHILD;
      PTHS_DW.is_c2_PTHS = PTHS_IN_DECIDE_STATEFLOW;

      /* Outport: '<Root>/Trigger' */
      PTHS_Y.Trigger = PTHS_DW.LOW;
    }
    break;

   case PTHS_IN_Atrial_Sensing:
    if (PTHS_DW.temporalCounter_i1 >= PTHS_DW.Pace_Interval) {
      PTHS_DW.is_NON_DUAL_MODES = P_IN_No_Natural_Activity_Sensed;
      PTHS_B.FRONT_END_CTRL = PTHS_DW.HIGH;
    } else {
      if ((PTHS_U.Mode_Response == 2) && (PTHS_DW.temporalCounter_i1 >=
           PTHS_U.ARP) && (*DigitalRead == PTHS_DW.HIGH)) {
        PTHS_DW.is_NON_DUAL_MODES = PTHS_IN_NO_ACTIVE_CHILD;
        PTHS_DW.is_c2_PTHS = PTHS_IN_DECIDE_STATEFLOW;

        /* Outport: '<Root>/Trigger' */
        PTHS_Y.Trigger = PTHS_DW.LOW;
      }
    }
    break;

   case PTHS_IN_Charging_C23:
    /* Inport: '<Root>/Mode_Chamber_Paced' */
    switch (PTHS_U.Mode_Chamber_Paced) {
     case 2:
      PTHS_DW.is_NON_DUAL_MODES = PTHS_IN_Ventricular_Charge;

      /* Inport: '<Root>/Ventricular Amplitude' */
      PTHS_B.PACING_REF_PWM = PTHS_U.VentricularAmplitude;
      break;

     case 1:
      PTHS_DW.is_NON_DUAL_MODES = PTHS_IN_Atrial_Charge;

      /* Inport: '<Root>/Atrial_Amplitude' */
      PTHS_B.PACING_REF_PWM = PTHS_U.Atrial_Amplitude;
      break;
    }
    break;

   case IN_Discharging_C21_and_Pace_Int:
    /* Inport: '<Root>/Mode_Chamber_Paced' */
    switch (PTHS_U.Mode_Chamber_Paced) {
     case 1:
      PTHS_DW.is_NON_DUAL_MODES = PTHS_IN_Atrial_Discharge;
      PTHS_DW.temporalCounter_i1 = 0U;
      PTHS_B.ATR_GND_CTRL = PTHS_DW.HIGH;
      PTHS_B.VENT_GND_CTRL = PTHS_DW.LOW;

      /* Inport: '<Root>/Atrial_Pulse_Width' */
      qY = (uint32_T)PTHS_DW.Pace_Interval - /*MW:OvSatOk*/
        PTHS_U.Atrial_Pulse_Width;
      if (qY > PTHS_DW.Pace_Interval) {
        qY = 0U;
      }

      PTHS_DW.Pace_Interval = (uint16_T)qY;
      break;

     case 2:
      PTHS_DW.is_NON_DUAL_MODES = PTHS_IN_Ventricular_Discharge;
      PTHS_DW.temporalCounter_i1 = 0U;
      PTHS_B.ATR_GND_CTRL = PTHS_DW.LOW;
      PTHS_B.VENT_GND_CTRL = PTHS_DW.HIGH;

      /* Inport: '<Root>/Ventricular_Pulse_Width' */
      qY = (uint32_T)PTHS_DW.Pace_Interval - /*MW:OvSatOk*/
        PTHS_U.Ventricular_Pulse_Width;
      if (qY > PTHS_DW.Pace_Interval) {
        qY = 0U;
      }

      PTHS_DW.Pace_Interval = (uint16_T)qY;
      break;
    }
    break;

   case P_IN_No_Natural_Activity_Sensed:
    PTHS_DW.is_NON_DUAL_MODES = PTHS_IN_Pacing_Begin;
    PTHS_B.PACE_CHARGE_CTRL = PTHS_DW.LOW;
    PTHS_B.PACE_GND_CTRL = PTHS_DW.HIGH;
    break;

   case PTHS_IN_Pacing:
    /* Inport: '<Root>/Mode_Chamber_Paced' */
    switch (PTHS_U.Mode_Chamber_Paced) {
     case 2:
      PTHS_DW.is_NON_DUAL_MODES = PTHS_IN_Vent_Pacing_2;
      PTHS_DW.temporalCounter_i1 = 0U;
      PTHS_B.VENT_PACE_CTRL = PTHS_DW.HIGH;
      break;

     case 1:
      PTHS_DW.is_NON_DUAL_MODES = PTHS_IN_Atrial_Pacing_2;
      PTHS_DW.temporalCounter_i1 = 0U;
      PTHS_B.ATR_PACE_CTRL = PTHS_DW.HIGH;
      break;
    }
    break;

   case PTHS_IN_Pacing_Begin:
    /* Inport: '<Root>/Mode_Chamber_Paced' */
    switch (PTHS_U.Mode_Chamber_Paced) {
     case 2:
      PTHS_DW.is_NON_DUAL_MODES = PTHS_IN_Ventricular_Pacing;
      PTHS_B.ATR_PACE_CTRL = PTHS_DW.LOW;
      break;

     case 1:
      PTHS_DW.is_NON_DUAL_MODES = PTHS_IN_Atrial_Pacing;
      PTHS_B.VENT_PACE_CTRL = PTHS_DW.LOW;
      break;
    }
    break;

   case PTHS_IN_Vent_Pacing_2:
    /* Inport: '<Root>/Ventricular_Pulse_Width' */
    if (PTHS_DW.temporalCounter_i1 >= PTHS_U.Ventricular_Pulse_Width) {
      PTHS_DW.is_NON_DUAL_MODES = PTHS_IN_NO_ACTIVE_CHILD;
      PTHS_DW.is_c2_PTHS = PTHS_IN_DECIDE_STATEFLOW;

      /* Outport: '<Root>/Trigger' */
      PTHS_Y.Trigger = PTHS_DW.LOW;
    }
    break;

   case PTHS_IN_Ventricular_Charge:
    PTHS_DW.is_NON_DUAL_MODES = IN_Discharging_C21_and_Pace_Int;
    PTHS_B.PACE_CHARGE_CTRL = PTHS_DW.HIGH;
    PTHS_B.PACE_GND_CTRL = PTHS_DW.HIGH;
    PTHS_B.VENT_PACE_CTRL = PTHS_DW.LOW;
    PTHS_B.Z_ATR_CTRL = PTHS_DW.LOW;
    PTHS_B.Z_VENT_CTRL = PTHS_DW.LOW;
    PTHS_B.ATR_PACE_CTRL = PTHS_DW.LOW;
    PTHS_DW.Pace_Interval = *DataTypeConversion8;

    /* Inport: '<Root>/Hysterisis' */
    if (PTHS_U.Hysterisis == PTHS_DW.HIGH) {
      /* Inport: '<Root>/Hysterisis_Escape_Interval' */
      qY = (uint32_T)PTHS_DW.Pace_Interval + PTHS_U.Hysterisis_Escape_Interval;
      if (qY > 65535U) {
        qY = 65535U;
      }

      PTHS_DW.Pace_Interval = (uint16_T)qY;
    }
    break;

   case PTHS_IN_Ventricular_Discharge:
    /* Inport: '<Root>/Mode_Chamber_Sensed' */
    if (PTHS_U.Mode_Chamber_Sensed == 2) {
      PTHS_DW.is_NON_DUAL_MODES = PTHS_IN_Ventricular_Sensing;
      PTHS_DW.temporalCounter_i1 = 0U;
      PTHS_B.FRONT_END_CTRL = PTHS_DW.HIGH;

      /* Inport: '<Root>/Ventricular_Sensiitivity' */
      PTHS_B.VENT_CMP_REF_PWM = PTHS_U.Ventricular_Sensiitivity;
    } else {
      if ((PTHS_U.Mode_Chamber_Sensed == 0) && (PTHS_DW.temporalCounter_i1 >=
           PTHS_DW.Pace_Interval)) {
        PTHS_DW.is_NON_DUAL_MODES = P_IN_No_Natural_Activity_Sensed;
        PTHS_B.FRONT_END_CTRL = PTHS_DW.HIGH;
      }
    }
    break;

   case PTHS_IN_Ventricular_Pacing:
    PTHS_DW.is_NON_DUAL_MODES = PTHS_IN_Pacing;
    PTHS_B.ATR_GND_CTRL = PTHS_DW.LOW;
    PTHS_B.Z_ATR_CTRL = PTHS_DW.LOW;
    PTHS_B.Z_VENT_CTRL = PTHS_DW.LOW;
    PTHS_B.VENT_GND_CTRL = PTHS_DW.LOW;
    break;

   default:
    /* case IN_Ventricular_Sensing: */
    if (PTHS_DW.temporalCounter_i1 >= PTHS_DW.Pace_Interval) {
      PTHS_DW.is_NON_DUAL_MODES = P_IN_No_Natural_Activity_Sensed;
      PTHS_B.FRONT_END_CTRL = PTHS_DW.HIGH;
    } else {
      if ((PTHS_U.Mode_Response == 2) && (*DigitalRead1) &&
          (PTHS_DW.temporalCounter_i1 >= PTHS_U.VRP)) {
        PTHS_DW.is_NON_DUAL_MODES = PTHS_IN_NO_ACTIVE_CHILD;
        PTHS_DW.is_c2_PTHS = PTHS_IN_DECIDE_STATEFLOW;

        /* Outport: '<Root>/Trigger' */
        PTHS_Y.Trigger = PTHS_DW.LOW;
      }
    }
    break;
  }
}

static void SystemCore_relea_f3az1rpryocjcx(const freedomk64f_DigitalRead_PTHS_T
  *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_digitalIO_close(obj->MW_DIGITALIO_HANDLE);
  }
}

static void SystemCore_delet_f3az1rpryocjcx(const freedomk64f_DigitalRead_PTHS_T
  *obj)
{
  SystemCore_relea_f3az1rpryocjcx(obj);
}

static void matlabCodegenHan_f3az1rpryocjcx(freedomk64f_DigitalRead_PTHS_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    SystemCore_delet_f3az1rpryocjcx(obj);
  }
}

static void PTHS_SystemCore_release(const freedomk64f_DigitalWrite_PTHS_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_digitalIO_close(obj->MW_DIGITALIO_HANDLE);
  }
}

static void PTHS_SystemCore_delete(const freedomk64f_DigitalWrite_PTHS_T *obj)
{
  PTHS_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(freedomk64f_DigitalWrite_PTHS_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    PTHS_SystemCore_delete(obj);
  }
}

static void PTHS_SystemCore_release_f3(const freedomk64f_PWMOutput_PTHS_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_PWM_Stop(obj->MW_PWM_HANDLE);
    MW_PWM_Close(obj->MW_PWM_HANDLE);
  }
}

static void PTHS_SystemCore_delete_f3(const freedomk64f_PWMOutput_PTHS_T *obj)
{
  PTHS_SystemCore_release_f3(obj);
}

static void matlabCodegenHandle_matlabCo_f3(freedomk64f_PWMOutput_PTHS_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    PTHS_SystemCore_delete_f3(obj);
  }
}

/* Model step function */
void PTHS_step(void)
{
  real_T rtb_Divide1;
  boolean_T rtb_LED_BLUE;
  uint16_T DataTypeConversion8;
  boolean_T DigitalRead1;
  boolean_T DigitalRead;
  uint32_T qY;
  uint32_T qY_0;

  /* Product: '<Root>/Divide1' incorporates:
   *  Constant: '<Root>/Constant1'
   *  DataTypeConversion: '<Root>/Data Type Conversion5'
   *  Inport: '<Root>/Lower_Rate_Limit'
   */
  rtb_Divide1 = PTHS_P.Constant1_Value / (real_T)PTHS_U.Lower_Rate_Limit;

  /* Chart: '<Root>/Chart' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion4'
   *  Inport: '<Root>/Maximum_Sensor_Rate'
   *  Inport: '<Root>/Mode_Adaptivity'
   *  Inport: '<Root>/Reaction_Time'
   *  Inport: '<Root>/Recovery_Time'
   *  Inport: '<Root>/Smoother_Acceleration'
   */
  if (PTHS_DW.temporalCounter_i1_i < MAX_uint32_T) {
    PTHS_DW.temporalCounter_i1_i++;
  }

  if (PTHS_DW.is_active_c1_PTHS == 0U) {
    PTHS_DW.is_active_c1_PTHS = 1U;
    PTHS_DW.is_c1_PTHS = PTHS_IN_INITIAL;
    PTHS_B.LRL = rtb_Divide1;
    rtb_LED_BLUE = true;
    PTHS_B.LED_RED = true;
  } else {
    switch (PTHS_DW.is_c1_PTHS) {
     case PTHS_IN_Constant:
      PTHS_DW.is_c1_PTHS = PTHS_IN_main;
      rtb_LED_BLUE = false;
      PTHS_B.LED_RED = false;
      if ((rtb_Divide1 > PTHS_B.LRL) || rtIsNaN(PTHS_B.LRL)) {
        PTHS_B.LRL = rtb_Divide1;
      }

      if (!(PTHS_B.LRL < PTHS_U.Maximum_Sensor_Rate)) {
        PTHS_B.LRL = PTHS_U.Maximum_Sensor_Rate;
      }
      break;

     case PTHS_IN_Decreasing:
      rtb_LED_BLUE = true;
      PTHS_B.LED_RED = true;
      if (PTHS_DW.temporalCounter_i1_i >= PTHS_U.Recovery_Time) {
        PTHS_DW.is_c1_PTHS = PTHS_IN_main;
        rtb_LED_BLUE = false;
        PTHS_B.LED_RED = false;
        if ((rtb_Divide1 > PTHS_B.LRL) || rtIsNaN(PTHS_B.LRL)) {
          PTHS_B.LRL = rtb_Divide1;
        }

        if (!(PTHS_B.LRL < PTHS_U.Maximum_Sensor_Rate)) {
          PTHS_B.LRL = PTHS_U.Maximum_Sensor_Rate;
        }
      }
      break;

     case PTHS_IN_INITIAL:
      rtb_LED_BLUE = true;
      PTHS_B.LED_RED = true;
      break;

     case PTHS_IN_Increasing:
      rtb_LED_BLUE = true;
      PTHS_B.LED_RED = true;
      if (PTHS_DW.temporalCounter_i1_i >= PTHS_U.Reaction_Time) {
        PTHS_DW.is_c1_PTHS = PTHS_IN_main;
        rtb_LED_BLUE = false;
        PTHS_B.LED_RED = false;
        if ((rtb_Divide1 > PTHS_B.LRL) || rtIsNaN(PTHS_B.LRL)) {
          PTHS_B.LRL = rtb_Divide1;
        }

        if (!(PTHS_B.LRL < PTHS_U.Maximum_Sensor_Rate)) {
          PTHS_B.LRL = PTHS_U.Maximum_Sensor_Rate;
        }
      }
      break;

     case PTHS_IN_main:
      rtb_LED_BLUE = false;
      PTHS_B.LED_RED = false;
      if ((PTHS_U.Mode_Adaptivity == 1) && (PTHS_U.Smoother_Acceleration < 3.3) &&
          (PTHS_B.LRL > rtb_Divide1)) {
        PTHS_DW.is_c1_PTHS = PTHS_IN_Decreasing;
        PTHS_DW.temporalCounter_i1_i = 0U;
        rtb_LED_BLUE = true;
        PTHS_B.LED_RED = true;
        PTHS_B.LRL -= PTHS_DW.RateChange;
      } else if ((PTHS_U.Mode_Adaptivity == 1) && (PTHS_U.Smoother_Acceleration >
                  3.3) && (PTHS_B.LRL < PTHS_U.Maximum_Sensor_Rate)) {
        PTHS_DW.is_c1_PTHS = PTHS_IN_Increasing;
        PTHS_DW.temporalCounter_i1_i = 0U;
        rtb_LED_BLUE = true;
        PTHS_B.LED_RED = true;
        PTHS_B.LRL += PTHS_DW.RateChange;
      } else {
        if (PTHS_U.Mode_Adaptivity == 0) {
          PTHS_DW.is_c1_PTHS = PTHS_IN_Constant;
          PTHS_B.LRL = rtb_Divide1;
          PTHS_B.LED_RED = true;
        }
      }
      break;

     default:
      /* case IN_start: */
      rtb_LED_BLUE = true;
      if ((rtb_Divide1 > 0.0) && (rtb_Divide1 <= 2000.0)) {
        PTHS_B.LRL = rtb_Divide1;
        PTHS_DW.is_c1_PTHS = PTHS_IN_main;
        rtb_LED_BLUE = false;
        PTHS_B.LED_RED = false;
        if (!(PTHS_B.LRL < PTHS_U.Maximum_Sensor_Rate)) {
          PTHS_B.LRL = PTHS_U.Maximum_Sensor_Rate;
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
  rtb_Divide1 = floor(PTHS_P.Constant_Value / PTHS_B.LRL);
  if (rtIsNaN(rtb_Divide1) || rtIsInf(rtb_Divide1)) {
    rtb_Divide1 = 0.0;
  } else {
    rtb_Divide1 = fmod(rtb_Divide1, 65536.0);
  }

  DataTypeConversion8 = (uint16_T)(rtb_Divide1 < 0.0 ? (int32_T)(uint16_T)
    -(int16_T)(uint16_T)-rtb_Divide1 : (int32_T)(uint16_T)rtb_Divide1);

  /* End of DataTypeConversion: '<Root>/Data Type Conversion8' */

  /* MATLABSystem: '<S3>/Digital Read' */
  if (PTHS_DW.obj.SampleTime != PTHS_P.DigitalRead_SampleTime) {
    PTHS_DW.obj.SampleTime = PTHS_P.DigitalRead_SampleTime;
  }

  DigitalRead = MW_digitalIO_read(PTHS_DW.obj.MW_DIGITALIO_HANDLE);

  /* End of MATLABSystem: '<S3>/Digital Read' */

  /* MATLABSystem: '<S3>/Digital Read1' */
  if (PTHS_DW.obj_k.SampleTime != PTHS_P.DigitalRead1_SampleTime) {
    PTHS_DW.obj_k.SampleTime = PTHS_P.DigitalRead1_SampleTime;
  }

  DigitalRead1 = MW_digitalIO_read(PTHS_DW.obj_k.MW_DIGITALIO_HANDLE);

  /* End of MATLABSystem: '<S3>/Digital Read1' */

  /* Chart: '<Root>/Chart1' incorporates:
   *  Inport: '<Root>/AV_Delay'
   *  Inport: '<Root>/Atrial_Amplitude'
   *  Inport: '<Root>/Atrial_Pulse_Width'
   *  Inport: '<Root>/Mode_Chamber_Paced'
   *  Inport: '<Root>/Ventricular Amplitude'
   *  Inport: '<Root>/Ventricular_Pulse_Width'
   */
  if (PTHS_DW.temporalCounter_i1 < MAX_uint32_T) {
    PTHS_DW.temporalCounter_i1++;
  }

  if (PTHS_DW.is_active_c2_PTHS == 0U) {
    PTHS_DW.is_active_c2_PTHS = 1U;
    PTHS_DW.is_c2_PTHS = PTHS_IN_DECIDE_STATEFLOW;

    /* Outport: '<Root>/Trigger' */
    PTHS_Y.Trigger = PTHS_DW.LOW;
  } else {
    switch (PTHS_DW.is_c2_PTHS) {
     case PTHS_IN_DECIDE_STATEFLOW:
      if (PTHS_U.Mode_Chamber_Paced == 3) {
        PTHS_DW.is_c2_PTHS = PTHS_IN_DUAL_MODES;
        PTHS_DW.is_DUAL_MODES = PTH_IN_A_CHARGING_V_DISCHARGING;
        PTHS_DW.temporalCounter_i1 = 0U;
        PTHS_B.PACING_REF_PWM = PTHS_U.Atrial_Amplitude;
        PTHS_B.PACE_CHARGE_CTRL = PTHS_DW.HIGH;
        PTHS_B.PACE_GND_CTRL = PTHS_DW.HIGH;
        PTHS_B.VENT_PACE_CTRL = PTHS_DW.LOW;
        PTHS_B.Z_ATR_CTRL = PTHS_DW.LOW;
        PTHS_B.Z_VENT_CTRL = PTHS_DW.LOW;
        PTHS_B.ATR_PACE_CTRL = PTHS_DW.LOW;
        PTHS_B.ATR_GND_CTRL = PTHS_DW.LOW;
        PTHS_B.VENT_GND_CTRL = PTHS_DW.HIGH;
        qY = (uint32_T)DataTypeConversion8 - /*MW:OvSatOk*/ PTHS_U.AV_Delay;
        if (qY > DataTypeConversion8) {
          qY = 0U;
        }

        PTHS_DW.Atrial_Escape_Interval = (uint16_T)qY;

        /* Outport: '<Root>/Trigger' incorporates:
         *  Inport: '<Root>/AV_Delay'
         *  Inport: '<Root>/Atrial_Amplitude'
         */
        PTHS_Y.Trigger = PTHS_DW.HIGH;
      } else if ((PTHS_U.Mode_Chamber_Paced == 2) || (PTHS_U.Mode_Chamber_Paced ==
                  1)) {
        PTHS_DW.is_c2_PTHS = PTHS_IN_NON_DUAL_MODES;
        PTHS_DW.is_NON_DUAL_MODES = PTHS_IN_Charging_C23;
        PTHS_B.ATR_PACE_CTRL = PTHS_DW.LOW;
        PTHS_B.VENT_PACE_CTRL = PTHS_DW.LOW;

        /* Outport: '<Root>/Trigger' */
        PTHS_Y.Trigger = PTHS_DW.HIGH;
      } else {
        /* Outport: '<Root>/Trigger' */
        PTHS_Y.Trigger = !PTHS_Y.Trigger;
      }
      break;

     case PTHS_IN_DUAL_MODES:
      switch (PTHS_DW.is_DUAL_MODES) {
       case PTH_IN_A_CHARGING_V_DISCHARGING:
        qY = (uint32_T)PTHS_DW.Atrial_Escape_Interval - /*MW:OvSatOk*/
          PTHS_U.Atrial_Pulse_Width;
        if (qY > PTHS_DW.Atrial_Escape_Interval) {
          qY = 0U;
        }

        qY_0 = qY - /*MW:OvSatOk*/ PTHS_U.Ventricular_Pulse_Width;
        if (qY_0 > qY) {
          qY_0 = 0U;
        }

        if (PTHS_DW.temporalCounter_i1 >= qY_0) {
          PTHS_DW.is_DUAL_MODES = PTHS_IN_A_PACING;
          PTHS_DW.temporalCounter_i1 = 0U;
          PTHS_B.PACE_CHARGE_CTRL = PTHS_DW.LOW;
          PTHS_B.PACE_GND_CTRL = PTHS_DW.HIGH;
          PTHS_B.VENT_PACE_CTRL = PTHS_DW.LOW;
          PTHS_B.ATR_GND_CTRL = PTHS_DW.LOW;
          PTHS_B.Z_ATR_CTRL = PTHS_DW.LOW;
          PTHS_B.Z_VENT_CTRL = PTHS_DW.LOW;
          PTHS_B.VENT_GND_CTRL = PTHS_DW.LOW;
          PTHS_B.ATR_PACE_CTRL = PTHS_DW.HIGH;
        }
        break;

       case PTHS_IN_A_PACING:
        if (PTHS_DW.temporalCounter_i1 >= PTHS_U.Atrial_Pulse_Width) {
          PTHS_DW.is_DUAL_MODES = PTH_IN_V_CHARGING_A_DISCHARGING;
          PTHS_DW.temporalCounter_i1 = 0U;
          PTHS_B.PACING_REF_PWM = PTHS_U.VentricularAmplitude;
          PTHS_B.PACE_CHARGE_CTRL = PTHS_DW.HIGH;
          PTHS_B.PACE_GND_CTRL = PTHS_DW.HIGH;
          PTHS_B.VENT_PACE_CTRL = PTHS_DW.LOW;
          PTHS_B.Z_ATR_CTRL = PTHS_DW.LOW;
          PTHS_B.Z_VENT_CTRL = PTHS_DW.LOW;
          PTHS_B.ATR_PACE_CTRL = PTHS_DW.LOW;
          PTHS_B.ATR_GND_CTRL = PTHS_DW.HIGH;
          PTHS_B.VENT_GND_CTRL = PTHS_DW.LOW;
        }
        break;

       case PTH_IN_V_CHARGING_A_DISCHARGING:
        if (PTHS_DW.temporalCounter_i1 >= PTHS_U.AV_Delay) {
          PTHS_DW.is_DUAL_MODES = PTHS_IN_V_PACING;
          PTHS_DW.temporalCounter_i1 = 0U;
          PTHS_B.PACE_CHARGE_CTRL = PTHS_DW.LOW;
          PTHS_B.PACE_GND_CTRL = PTHS_DW.HIGH;
          PTHS_B.ATR_PACE_CTRL = PTHS_DW.LOW;
          PTHS_B.ATR_GND_CTRL = PTHS_DW.LOW;
          PTHS_B.Z_ATR_CTRL = PTHS_DW.LOW;
          PTHS_B.Z_VENT_CTRL = PTHS_DW.LOW;
          PTHS_B.VENT_GND_CTRL = PTHS_DW.LOW;
          PTHS_B.VENT_PACE_CTRL = PTHS_DW.HIGH;
        }
        break;

       default:
        /* case IN_V_PACING: */
        if (PTHS_DW.temporalCounter_i1 >= PTHS_U.Ventricular_Pulse_Width) {
          PTHS_DW.is_DUAL_MODES = PTHS_IN_NO_ACTIVE_CHILD;
          PTHS_DW.is_c2_PTHS = PTHS_IN_DECIDE_STATEFLOW;

          /* Outport: '<Root>/Trigger' */
          PTHS_Y.Trigger = PTHS_DW.LOW;
        }
        break;
      }
      break;

     default:
      /* case IN_NON_DUAL_MODES: */
      PTHS_NON_DUAL_MODES(&DataTypeConversion8, &DigitalRead1, &DigitalRead);
      break;
    }
  }

  /* End of Chart: '<Root>/Chart1' */

  /* MATLABSystem: '<S3>/Digital Write2' */
  MW_digitalIO_write(PTHS_DW.obj_h.MW_DIGITALIO_HANDLE, PTHS_B.PACE_CHARGE_CTRL);

  /* MATLABSystem: '<S3>/Digital Write3' */
  MW_digitalIO_write(PTHS_DW.obj_b.MW_DIGITALIO_HANDLE, PTHS_B.PACE_GND_CTRL);

  /* MATLABSystem: '<S3>/PWM Output1' */
  MW_PWM_SetDutyCycle(PTHS_DW.obj_j.MW_PWM_HANDLE, (real_T)PTHS_B.PACING_REF_PWM);

  /* MATLABSystem: '<S3>/Digital Write8' */
  MW_digitalIO_write(PTHS_DW.obj_a.MW_DIGITALIO_HANDLE, PTHS_B.VENT_PACE_CTRL);

  /* MATLABSystem: '<S3>/Digital Write4' */
  MW_digitalIO_write(PTHS_DW.obj_m.MW_DIGITALIO_HANDLE, PTHS_B.ATR_PACE_CTRL);

  /* MATLABSystem: '<S3>/Digital Write5' */
  MW_digitalIO_write(PTHS_DW.obj_e.MW_DIGITALIO_HANDLE, PTHS_B.ATR_GND_CTRL);

  /* MATLABSystem: '<S3>/Digital Write6' */
  MW_digitalIO_write(PTHS_DW.obj_d.MW_DIGITALIO_HANDLE, PTHS_B.Z_ATR_CTRL);

  /* MATLABSystem: '<S3>/Digital Write7' */
  MW_digitalIO_write(PTHS_DW.obj_bs.MW_DIGITALIO_HANDLE, PTHS_B.Z_VENT_CTRL);

  /* MATLABSystem: '<S3>/Digital Write9' */
  MW_digitalIO_write(PTHS_DW.obj_aq.MW_DIGITALIO_HANDLE, PTHS_B.VENT_GND_CTRL);

  /* MATLABSystem: '<S3>/Digital Write1' */
  MW_digitalIO_write(PTHS_DW.obj_p.MW_DIGITALIO_HANDLE, PTHS_B.FRONT_END_CTRL);

  /* MATLABSystem: '<S3>/PWM Output2' */
  MW_PWM_SetDutyCycle(PTHS_DW.obj_bg.MW_PWM_HANDLE, (real_T)
                      PTHS_B.ATR_CMP_REF_PWM);

  /* MATLABSystem: '<S3>/PWM Output3' */
  MW_PWM_SetDutyCycle(PTHS_DW.obj_ds.MW_PWM_HANDLE, (real_T)
                      PTHS_B.VENT_CMP_REF_PWM);

  /* MATLABSystem: '<Root>/Digital Write' */
  MW_digitalIO_write(PTHS_DW.obj_i.MW_DIGITALIO_HANDLE, PTHS_B.LED_RED);

  /* MATLABSystem: '<Root>/Digital Write1' */
  MW_digitalIO_write(PTHS_DW.obj_ez.MW_DIGITALIO_HANDLE, rtb_LED_BLUE);
}

/* Model initialize function */
void PTHS_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    freedomk64f_DigitalRead_PTHS_T *obj;
    freedomk64f_DigitalWrite_PTHS_T *obj_0;
    freedomk64f_PWMOutput_PTHS_T *obj_1;

    /* SystemInitialize for Chart: '<Root>/Chart1' */
    PTHS_DW.HIGH = true;

    /* Start for MATLABSystem: '<S3>/Digital Read' */
    PTHS_DW.obj.matlabCodegenIsDeleted = true;
    PTHS_DW.obj.isInitialized = 0;
    PTHS_DW.obj.SampleTime = -1.0;
    PTHS_DW.obj.matlabCodegenIsDeleted = false;
    PTHS_DW.obj.SampleTime = PTHS_P.DigitalRead_SampleTime;
    obj = &PTHS_DW.obj;
    PTHS_DW.obj.isSetupComplete = false;
    PTHS_DW.obj.isInitialized = 1;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(0U, 0);
    PTHS_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/Digital Read1' */
    PTHS_DW.obj_k.matlabCodegenIsDeleted = true;
    PTHS_DW.obj_k.isInitialized = 0;
    PTHS_DW.obj_k.SampleTime = -1.0;
    PTHS_DW.obj_k.matlabCodegenIsDeleted = false;
    PTHS_DW.obj_k.SampleTime = PTHS_P.DigitalRead1_SampleTime;
    obj = &PTHS_DW.obj_k;
    PTHS_DW.obj_k.isSetupComplete = false;
    PTHS_DW.obj_k.isInitialized = 1;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(1U, 0);
    PTHS_DW.obj_k.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/Digital Write2' */
    PTHS_DW.obj_h.matlabCodegenIsDeleted = true;
    PTHS_DW.obj_h.isInitialized = 0;
    PTHS_DW.obj_h.matlabCodegenIsDeleted = false;
    obj_0 = &PTHS_DW.obj_h;
    PTHS_DW.obj_h.isSetupComplete = false;
    PTHS_DW.obj_h.isInitialized = 1;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(2U, 1);
    PTHS_DW.obj_h.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/Digital Write3' */
    PTHS_DW.obj_b.matlabCodegenIsDeleted = true;
    PTHS_DW.obj_b.isInitialized = 0;
    PTHS_DW.obj_b.matlabCodegenIsDeleted = false;
    obj_0 = &PTHS_DW.obj_b;
    PTHS_DW.obj_b.isSetupComplete = false;
    PTHS_DW.obj_b.isInitialized = 1;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(10U, 1);
    PTHS_DW.obj_b.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/PWM Output1' */
    PTHS_DW.obj_j.matlabCodegenIsDeleted = true;
    PTHS_DW.obj_j.isInitialized = 0;
    PTHS_DW.obj_j.matlabCodegenIsDeleted = false;
    obj_1 = &PTHS_DW.obj_j;
    PTHS_DW.obj_j.isSetupComplete = false;
    PTHS_DW.obj_j.isInitialized = 1;
    obj_1->MW_PWM_HANDLE = MW_PWM_Open(5U, 2000.0, 0.0);
    MW_PWM_Start(PTHS_DW.obj_j.MW_PWM_HANDLE);
    PTHS_DW.obj_j.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/Digital Write8' */
    PTHS_DW.obj_a.matlabCodegenIsDeleted = true;
    PTHS_DW.obj_a.isInitialized = 0;
    PTHS_DW.obj_a.matlabCodegenIsDeleted = false;
    obj_0 = &PTHS_DW.obj_a;
    PTHS_DW.obj_a.isSetupComplete = false;
    PTHS_DW.obj_a.isInitialized = 1;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(9U, 1);
    PTHS_DW.obj_a.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/Digital Write4' */
    PTHS_DW.obj_m.matlabCodegenIsDeleted = true;
    PTHS_DW.obj_m.isInitialized = 0;
    PTHS_DW.obj_m.matlabCodegenIsDeleted = false;
    obj_0 = &PTHS_DW.obj_m;
    PTHS_DW.obj_m.isSetupComplete = false;
    PTHS_DW.obj_m.isInitialized = 1;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(8U, 1);
    PTHS_DW.obj_m.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/Digital Write5' */
    PTHS_DW.obj_e.matlabCodegenIsDeleted = true;
    PTHS_DW.obj_e.isInitialized = 0;
    PTHS_DW.obj_e.matlabCodegenIsDeleted = false;
    obj_0 = &PTHS_DW.obj_e;
    PTHS_DW.obj_e.isSetupComplete = false;
    PTHS_DW.obj_e.isInitialized = 1;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(11U, 1);
    PTHS_DW.obj_e.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/Digital Write6' */
    PTHS_DW.obj_d.matlabCodegenIsDeleted = true;
    PTHS_DW.obj_d.isInitialized = 0;
    PTHS_DW.obj_d.matlabCodegenIsDeleted = false;
    obj_0 = &PTHS_DW.obj_d;
    PTHS_DW.obj_d.isSetupComplete = false;
    PTHS_DW.obj_d.isInitialized = 1;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(4U, 1);
    PTHS_DW.obj_d.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/Digital Write7' */
    PTHS_DW.obj_bs.matlabCodegenIsDeleted = true;
    PTHS_DW.obj_bs.isInitialized = 0;
    PTHS_DW.obj_bs.matlabCodegenIsDeleted = false;
    obj_0 = &PTHS_DW.obj_bs;
    PTHS_DW.obj_bs.isSetupComplete = false;
    PTHS_DW.obj_bs.isInitialized = 1;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(7U, 1);
    PTHS_DW.obj_bs.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/Digital Write9' */
    PTHS_DW.obj_aq.matlabCodegenIsDeleted = true;
    PTHS_DW.obj_aq.isInitialized = 0;
    PTHS_DW.obj_aq.matlabCodegenIsDeleted = false;
    obj_0 = &PTHS_DW.obj_aq;
    PTHS_DW.obj_aq.isSetupComplete = false;
    PTHS_DW.obj_aq.isInitialized = 1;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(12U, 1);
    PTHS_DW.obj_aq.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/Digital Write1' */
    PTHS_DW.obj_p.matlabCodegenIsDeleted = true;
    PTHS_DW.obj_p.isInitialized = 0;
    PTHS_DW.obj_p.matlabCodegenIsDeleted = false;
    obj_0 = &PTHS_DW.obj_p;
    PTHS_DW.obj_p.isSetupComplete = false;
    PTHS_DW.obj_p.isInitialized = 1;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(13U, 1);
    PTHS_DW.obj_p.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/PWM Output2' */
    PTHS_DW.obj_bg.matlabCodegenIsDeleted = true;
    PTHS_DW.obj_bg.isInitialized = 0;
    PTHS_DW.obj_bg.matlabCodegenIsDeleted = false;
    obj_1 = &PTHS_DW.obj_bg;
    PTHS_DW.obj_bg.isSetupComplete = false;
    PTHS_DW.obj_bg.isInitialized = 1;
    obj_1->MW_PWM_HANDLE = MW_PWM_Open(6U, 2000.0, 0.0);
    MW_PWM_Start(PTHS_DW.obj_bg.MW_PWM_HANDLE);
    PTHS_DW.obj_bg.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/PWM Output3' */
    PTHS_DW.obj_ds.matlabCodegenIsDeleted = true;
    PTHS_DW.obj_ds.isInitialized = 0;
    PTHS_DW.obj_ds.matlabCodegenIsDeleted = false;
    obj_1 = &PTHS_DW.obj_ds;
    PTHS_DW.obj_ds.isSetupComplete = false;
    PTHS_DW.obj_ds.isInitialized = 1;
    obj_1->MW_PWM_HANDLE = MW_PWM_Open(3U, 2000.0, 0.0);
    MW_PWM_Start(PTHS_DW.obj_ds.MW_PWM_HANDLE);
    PTHS_DW.obj_ds.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Write' */
    PTHS_DW.obj_i.matlabCodegenIsDeleted = true;
    PTHS_DW.obj_i.isInitialized = 0;
    PTHS_DW.obj_i.matlabCodegenIsDeleted = false;
    obj_0 = &PTHS_DW.obj_i;
    PTHS_DW.obj_i.isSetupComplete = false;
    PTHS_DW.obj_i.isInitialized = 1;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(42U, 1);
    PTHS_DW.obj_i.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Write1' */
    PTHS_DW.obj_ez.matlabCodegenIsDeleted = true;
    PTHS_DW.obj_ez.isInitialized = 0;
    PTHS_DW.obj_ez.matlabCodegenIsDeleted = false;
    obj_0 = &PTHS_DW.obj_ez;
    PTHS_DW.obj_ez.isSetupComplete = false;
    PTHS_DW.obj_ez.isInitialized = 1;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(44U, 1);
    PTHS_DW.obj_ez.isSetupComplete = true;
  }
}

/* Model terminate function */
void PTHS_terminate(void)
{
  /* Terminate for MATLABSystem: '<S3>/Digital Read' */
  matlabCodegenHan_f3az1rpryocjcx(&PTHS_DW.obj);

  /* Terminate for MATLABSystem: '<S3>/Digital Read1' */
  matlabCodegenHan_f3az1rpryocjcx(&PTHS_DW.obj_k);

  /* Terminate for MATLABSystem: '<S3>/Digital Write2' */
  matlabCodegenHandle_matlabCodeg(&PTHS_DW.obj_h);

  /* Terminate for MATLABSystem: '<S3>/Digital Write3' */
  matlabCodegenHandle_matlabCodeg(&PTHS_DW.obj_b);

  /* Terminate for MATLABSystem: '<S3>/PWM Output1' */
  matlabCodegenHandle_matlabCo_f3(&PTHS_DW.obj_j);

  /* Terminate for MATLABSystem: '<S3>/Digital Write8' */
  matlabCodegenHandle_matlabCodeg(&PTHS_DW.obj_a);

  /* Terminate for MATLABSystem: '<S3>/Digital Write4' */
  matlabCodegenHandle_matlabCodeg(&PTHS_DW.obj_m);

  /* Terminate for MATLABSystem: '<S3>/Digital Write5' */
  matlabCodegenHandle_matlabCodeg(&PTHS_DW.obj_e);

  /* Terminate for MATLABSystem: '<S3>/Digital Write6' */
  matlabCodegenHandle_matlabCodeg(&PTHS_DW.obj_d);

  /* Terminate for MATLABSystem: '<S3>/Digital Write7' */
  matlabCodegenHandle_matlabCodeg(&PTHS_DW.obj_bs);

  /* Terminate for MATLABSystem: '<S3>/Digital Write9' */
  matlabCodegenHandle_matlabCodeg(&PTHS_DW.obj_aq);

  /* Terminate for MATLABSystem: '<S3>/Digital Write1' */
  matlabCodegenHandle_matlabCodeg(&PTHS_DW.obj_p);

  /* Terminate for MATLABSystem: '<S3>/PWM Output2' */
  matlabCodegenHandle_matlabCo_f3(&PTHS_DW.obj_bg);

  /* Terminate for MATLABSystem: '<S3>/PWM Output3' */
  matlabCodegenHandle_matlabCo_f3(&PTHS_DW.obj_ds);

  /* Terminate for MATLABSystem: '<Root>/Digital Write' */
  matlabCodegenHandle_matlabCodeg(&PTHS_DW.obj_i);

  /* Terminate for MATLABSystem: '<Root>/Digital Write1' */
  matlabCodegenHandle_matlabCodeg(&PTHS_DW.obj_ez);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

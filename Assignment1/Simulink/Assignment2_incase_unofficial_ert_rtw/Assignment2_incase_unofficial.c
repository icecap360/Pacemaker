/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Assignment2_incase_unofficial.c
 *
 * Code generated for Simulink model 'Assignment2_incase_unofficial'.
 *
 * Model version                  : 1.465
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Thu Dec  3 15:18:23 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Assignment2_incase_unofficial.h"
#include "Assignment2_incase_unofficial_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define Assignment2__IN_NO_ACTIVE_CHILD ((uint8_T)0U)
#define Assignment2_inc_IN_WRITE_PARAMS ((uint8_T)4U)
#define Assignment2_inca_IN_READ_PARAMS ((uint8_T)1U)
#define Assignment2_inca_IN_START_STATE ((uint8_T)2U)
#define Assignment2_incas_IN_WAIT_STATE ((uint8_T)3U)

/* Named constants for Chart: '<S2>/Chart1' */
#define A_IN_No_Natural_Activity_Sensed ((uint8_T)8U)
#define Ass_IN_A_CHARGING_V_DISCHARGING ((uint8_T)1U)
#define Ass_IN_V_CHARGING_A_DISCHARGING ((uint8_T)3U)
#define Assign_IN_Ventricular_Discharge ((uint8_T)13U)
#define Assignme_IN_Ventricular_Sensing ((uint8_T)15U)
#define Assignmen_IN_Ventricular_Charge ((uint8_T)12U)
#define Assignmen_IN_Ventricular_Pacing ((uint8_T)14U)
#define Assignment2_IN_Atrial_Discharge ((uint8_T)2U)
#define Assignment2_IN_DECIDE_STATEFLOW ((uint8_T)1U)
#define Assignment2__IN_Atrial_Pacing_2 ((uint8_T)4U)
#define Assignment2_i_IN_Atrial_Sensing ((uint8_T)5U)
#define Assignment2_i_IN_NON_DUAL_MODES ((uint8_T)3U)
#define Assignment2_in_IN_Atrial_Charge ((uint8_T)1U)
#define Assignment2_in_IN_Atrial_Pacing ((uint8_T)3U)
#define Assignment2_in_IN_Vent_Pacing_2 ((uint8_T)11U)
#define Assignment2_inc_IN_Charging_C23 ((uint8_T)6U)
#define Assignment2_inc_IN_Pacing_Begin ((uint8_T)10U)
#define Assignment2_incas_IN_DUAL_MODES ((uint8_T)2U)
#define Assignment2_incase__IN_A_PACING ((uint8_T)2U)
#define Assignment2_incase__IN_V_PACING ((uint8_T)4U)
#define Assignment2_incase_un_IN_Pacing ((uint8_T)9U)
#define IN_Discharging_C21_and_Pace_Int ((uint8_T)7U)

/* Block signals (default storage) */
B_Assignment2_incase_unoffici_T Assignment2_incase_unofficial_B;

/* Block states (default storage) */
DW_Assignment2_incase_unoffic_T Assignment2_incase_unofficia_DW;

/* Previous zero-crossings (trigger) states */
PrevZCX_Assignment2_incase_un_T Assignment2_incase_unof_PrevZCX;

/* Real-time model */
RT_MODEL_Assignment2_incase_u_T Assignment2_incase_unofficia_M_;
RT_MODEL_Assignment2_incase_u_T *const Assignment2_incase_unofficia_M =
  &Assignment2_incase_unofficia_M_;

/* Forward declaration for local functions */
static void Assignment2_inca_NON_DUAL_MODES(const boolean_T *DigitalRead1, const
  boolean_T *DigitalRead);
static void Assignment2__SystemCore_release(const
  freedomk64f_SCIRead_Assignmen_T *obj);
static void Assignment2_i_SystemCore_delete(const
  freedomk64f_SCIRead_Assignmen_T *obj);
static void matlabCodegenHandle_matlabCodeg(freedomk64f_SCIRead_Assignmen_T *obj);
static void A_SystemCore_rele_f(const freedomk64f_AnalogInput_Assig_T *obj);
static void A_SystemCore_dele_f(const freedomk64f_AnalogInput_Assig_T *obj);
static void Assignment2_i_matlabCodegenHa_f(freedomk64f_AnalogInput_Assig_T *obj);
static void SystemCore_rele_aectt34bsusdnod(const
  freedomk64f_SCIWrite_Assignme_T *obj);
static void SystemCore_dele_aectt34bsusdnod(const
  freedomk64f_SCIWrite_Assignme_T *obj);
static void matlabCodegenHa_aectt34bsusdnod(freedomk64f_SCIWrite_Assignme_T *obj);
static void SystemCore_releas_aectt34bsusdn(const
  freedomk64f_DigitalRead_Assig_T *obj);
static void SystemCore_delete_aectt34bsusdn(const
  freedomk64f_DigitalRead_Assig_T *obj);
static void matlabCodegenHand_aectt34bsusdn(freedomk64f_DigitalRead_Assig_T *obj);
static void Assignme_SystemCore_release_aec(const
  freedomk64f_DigitalWrite_Assi_T *obj);
static void Assignmen_SystemCore_delete_aec(const
  freedomk64f_DigitalWrite_Assi_T *obj);
static void matlabCodegenHandle_matlabC_aec(freedomk64f_DigitalWrite_Assi_T *obj);
static void Assignment_SystemCore_release_a(const
  freedomk64f_PWMOutput_Assignm_T *obj);
static void Assignment2_SystemCore_delete_a(const
  freedomk64f_PWMOutput_Assignm_T *obj);
static void matlabCodegenHandle_matlabCod_a(freedomk64f_PWMOutput_Assignm_T *obj);
static void Assignment2_in_SystemCore_setup(freedomk64f_SCIRead_Assignmen_T *obj);
static void Assignment2__SystemCore_setup_a(freedomk64f_SCIWrite_Assignme_T *obj);

/* Function for Chart: '<S2>/Chart1' */
static void Assignment2_inca_NON_DUAL_MODES(const boolean_T *DigitalRead1, const
  boolean_T *DigitalRead)
{
  uint32_T qY;
  switch (Assignment2_incase_unofficia_DW.is_NON_DUAL_MODES) {
   case Assignment2_in_IN_Atrial_Charge:
    Assignment2_incase_unofficia_DW.is_NON_DUAL_MODES =
      IN_Discharging_C21_and_Pace_Int;
    Assignment2_incase_unofficial_B.PACE_CHARGE_CTRL =
      Assignment2_incase_unofficia_DW.HIGH;
    Assignment2_incase_unofficial_B.PACE_GND_CTRL =
      Assignment2_incase_unofficia_DW.HIGH;
    Assignment2_incase_unofficial_B.VENT_PACE_CTRL =
      Assignment2_incase_unofficia_DW.LOW;
    Assignment2_incase_unofficial_B.Z_ATR_CTRL =
      Assignment2_incase_unofficia_DW.LOW;
    Assignment2_incase_unofficial_B.Z_VENT_CTRL =
      Assignment2_incase_unofficia_DW.LOW;
    Assignment2_incase_unofficial_B.ATR_PACE_CTRL =
      Assignment2_incase_unofficia_DW.LOW;

    /* DataStoreRead: '<Root>/Data Store Read10' */
    Assignment2_incase_unofficia_DW.Pace_Interval =
      Assignment2_incase_unofficia_DW.Lower_Rate_Limit;

    /* DataStoreRead: '<Root>/Data Store Read9' incorporates:
     *  DataStoreRead: '<Root>/Data Store Read14'
     */
    if (Assignment2_incase_unofficia_DW.Hysterisis ==
        Assignment2_incase_unofficia_DW.HIGH) {
      qY = (uint32_T)Assignment2_incase_unofficia_DW.Pace_Interval +
        Assignment2_incase_unofficia_DW.Hysterisis_Escape_Interval;
      if (qY > 65535U) {
        qY = 65535U;
      }

      Assignment2_incase_unofficia_DW.Pace_Interval = (uint16_T)qY;
    }
    break;

   case Assignment2_IN_Atrial_Discharge:
    /* DataStoreRead: '<Root>/Data Store Read1' incorporates:
     *  DataStoreRead: '<Root>/Data Store Read8'
     */
    if ((Assignment2_incase_unofficia_DW.Mode_Chamber_Sensed == 0) &&
        (Assignment2_incase_unofficia_DW.temporalCounter_i1 >=
         Assignment2_incase_unofficia_DW.Pace_Interval)) {
      Assignment2_incase_unofficia_DW.is_NON_DUAL_MODES =
        A_IN_No_Natural_Activity_Sensed;
      Assignment2_incase_unofficial_B.FRONT_END_CTRL =
        Assignment2_incase_unofficia_DW.HIGH;
    } else {
      if (Assignment2_incase_unofficia_DW.Mode_Chamber_Sensed == 1) {
        Assignment2_incase_unofficia_DW.is_NON_DUAL_MODES =
          Assignment2_i_IN_Atrial_Sensing;
        Assignment2_incase_unofficia_DW.temporalCounter_i1 = 0U;
        Assignment2_incase_unofficial_B.FRONT_END_CTRL =
          Assignment2_incase_unofficia_DW.HIGH;
        Assignment2_incase_unofficial_B.ATR_CMP_REF_PWM =
          Assignment2_incase_unofficia_DW.Atrial_Sensitivity;
      }
    }
    break;

   case Assignment2_in_IN_Atrial_Pacing:
    Assignment2_incase_unofficia_DW.is_NON_DUAL_MODES =
      Assignment2_incase_un_IN_Pacing;
    Assignment2_incase_unofficial_B.ATR_GND_CTRL =
      Assignment2_incase_unofficia_DW.LOW;
    Assignment2_incase_unofficial_B.Z_ATR_CTRL =
      Assignment2_incase_unofficia_DW.LOW;
    Assignment2_incase_unofficial_B.Z_VENT_CTRL =
      Assignment2_incase_unofficia_DW.LOW;
    Assignment2_incase_unofficial_B.VENT_GND_CTRL =
      Assignment2_incase_unofficia_DW.LOW;
    break;

   case Assignment2__IN_Atrial_Pacing_2:
    /* DataStoreRead: '<Root>/Data Store Read7' */
    if (Assignment2_incase_unofficia_DW.temporalCounter_i1 >=
        Assignment2_incase_unofficia_DW.Atrial_Pulse_Width) {
      Assignment2_incase_unofficia_DW.is_NON_DUAL_MODES =
        Assignment2__IN_NO_ACTIVE_CHILD;
      Assignment2_incase_unofficia_DW.is_c2_Assignment2_incase_unoffi =
        Assignment2_IN_DECIDE_STATEFLOW;
      Assignment2_incase_unofficial_B.Trigger =
        Assignment2_incase_unofficia_DW.LOW;
    }
    break;

   case Assignment2_i_IN_Atrial_Sensing:
    if (Assignment2_incase_unofficia_DW.temporalCounter_i1 >=
        Assignment2_incase_unofficia_DW.Pace_Interval) {
      Assignment2_incase_unofficia_DW.is_NON_DUAL_MODES =
        A_IN_No_Natural_Activity_Sensed;
      Assignment2_incase_unofficial_B.FRONT_END_CTRL =
        Assignment2_incase_unofficia_DW.HIGH;
    } else {
      if ((Assignment2_incase_unofficia_DW.Mode_Response == 2) &&
          (Assignment2_incase_unofficia_DW.temporalCounter_i1 >=
           Assignment2_incase_unofficia_DW.ARP) && (*DigitalRead ==
           Assignment2_incase_unofficia_DW.HIGH)) {
        Assignment2_incase_unofficia_DW.is_NON_DUAL_MODES =
          Assignment2__IN_NO_ACTIVE_CHILD;
        Assignment2_incase_unofficia_DW.is_c2_Assignment2_incase_unoffi =
          Assignment2_IN_DECIDE_STATEFLOW;
        Assignment2_incase_unofficial_B.Trigger =
          Assignment2_incase_unofficia_DW.LOW;
      }
    }
    break;

   case Assignment2_inc_IN_Charging_C23:
    /* DataStoreRead: '<Root>/Data Store Read' incorporates:
     *  DataStoreRead: '<Root>/Data Store Read3'
     *  DataStoreRead: '<Root>/Data Store Read6'
     */
    switch (Assignment2_incase_unofficia_DW.Mode_Chamber_Paced) {
     case 2:
      Assignment2_incase_unofficia_DW.is_NON_DUAL_MODES =
        Assignmen_IN_Ventricular_Charge;
      Assignment2_incase_unofficial_B.PACING_REF_PWM =
        Assignment2_incase_unofficia_DW.Ventricular_Amplitude;
      break;

     case 1:
      Assignment2_incase_unofficia_DW.is_NON_DUAL_MODES =
        Assignment2_in_IN_Atrial_Charge;
      Assignment2_incase_unofficial_B.PACING_REF_PWM =
        Assignment2_incase_unofficia_DW.Atrial_Amplitude;
      break;
    }
    break;

   case IN_Discharging_C21_and_Pace_Int:
    /* DataStoreRead: '<Root>/Data Store Read' incorporates:
     *  DataStoreRead: '<Root>/Data Store Read4'
     *  DataStoreRead: '<Root>/Data Store Read7'
     */
    switch (Assignment2_incase_unofficia_DW.Mode_Chamber_Paced) {
     case 1:
      Assignment2_incase_unofficia_DW.is_NON_DUAL_MODES =
        Assignment2_IN_Atrial_Discharge;
      Assignment2_incase_unofficia_DW.temporalCounter_i1 = 0U;
      Assignment2_incase_unofficial_B.ATR_GND_CTRL =
        Assignment2_incase_unofficia_DW.HIGH;
      Assignment2_incase_unofficial_B.VENT_GND_CTRL =
        Assignment2_incase_unofficia_DW.LOW;
      qY = (uint32_T)Assignment2_incase_unofficia_DW.Pace_Interval -
        /*MW:OvSatOk*/ Assignment2_incase_unofficia_DW.Atrial_Pulse_Width;
      if (qY > Assignment2_incase_unofficia_DW.Pace_Interval) {
        qY = 0U;
      }

      Assignment2_incase_unofficia_DW.Pace_Interval = (uint16_T)qY;
      break;

     case 2:
      Assignment2_incase_unofficia_DW.is_NON_DUAL_MODES =
        Assign_IN_Ventricular_Discharge;
      Assignment2_incase_unofficia_DW.temporalCounter_i1 = 0U;
      Assignment2_incase_unofficial_B.ATR_GND_CTRL =
        Assignment2_incase_unofficia_DW.LOW;
      Assignment2_incase_unofficial_B.VENT_GND_CTRL =
        Assignment2_incase_unofficia_DW.HIGH;
      qY = (uint32_T)Assignment2_incase_unofficia_DW.Pace_Interval -
        /*MW:OvSatOk*/ Assignment2_incase_unofficia_DW.Ventricular_Pulse_Width;
      if (qY > Assignment2_incase_unofficia_DW.Pace_Interval) {
        qY = 0U;
      }

      Assignment2_incase_unofficia_DW.Pace_Interval = (uint16_T)qY;
      break;
    }
    break;

   case A_IN_No_Natural_Activity_Sensed:
    Assignment2_incase_unofficia_DW.is_NON_DUAL_MODES =
      Assignment2_inc_IN_Pacing_Begin;
    Assignment2_incase_unofficial_B.PACE_CHARGE_CTRL =
      Assignment2_incase_unofficia_DW.LOW;
    Assignment2_incase_unofficial_B.PACE_GND_CTRL =
      Assignment2_incase_unofficia_DW.HIGH;
    break;

   case Assignment2_incase_un_IN_Pacing:
    /* DataStoreRead: '<Root>/Data Store Read' */
    switch (Assignment2_incase_unofficia_DW.Mode_Chamber_Paced) {
     case 2:
      Assignment2_incase_unofficia_DW.is_NON_DUAL_MODES =
        Assignment2_in_IN_Vent_Pacing_2;
      Assignment2_incase_unofficia_DW.temporalCounter_i1 = 0U;
      Assignment2_incase_unofficial_B.VENT_PACE_CTRL =
        Assignment2_incase_unofficia_DW.HIGH;
      break;

     case 1:
      Assignment2_incase_unofficia_DW.is_NON_DUAL_MODES =
        Assignment2__IN_Atrial_Pacing_2;
      Assignment2_incase_unofficia_DW.temporalCounter_i1 = 0U;
      Assignment2_incase_unofficial_B.ATR_PACE_CTRL =
        Assignment2_incase_unofficia_DW.HIGH;
      break;
    }
    break;

   case Assignment2_inc_IN_Pacing_Begin:
    /* DataStoreRead: '<Root>/Data Store Read' */
    switch (Assignment2_incase_unofficia_DW.Mode_Chamber_Paced) {
     case 2:
      Assignment2_incase_unofficia_DW.is_NON_DUAL_MODES =
        Assignmen_IN_Ventricular_Pacing;
      Assignment2_incase_unofficial_B.ATR_PACE_CTRL =
        Assignment2_incase_unofficia_DW.LOW;
      break;

     case 1:
      Assignment2_incase_unofficia_DW.is_NON_DUAL_MODES =
        Assignment2_in_IN_Atrial_Pacing;
      Assignment2_incase_unofficial_B.VENT_PACE_CTRL =
        Assignment2_incase_unofficia_DW.LOW;
      break;
    }
    break;

   case Assignment2_in_IN_Vent_Pacing_2:
    /* DataStoreRead: '<Root>/Data Store Read4' */
    if (Assignment2_incase_unofficia_DW.temporalCounter_i1 >=
        Assignment2_incase_unofficia_DW.Ventricular_Pulse_Width) {
      Assignment2_incase_unofficia_DW.is_NON_DUAL_MODES =
        Assignment2__IN_NO_ACTIVE_CHILD;
      Assignment2_incase_unofficia_DW.is_c2_Assignment2_incase_unoffi =
        Assignment2_IN_DECIDE_STATEFLOW;
      Assignment2_incase_unofficial_B.Trigger =
        Assignment2_incase_unofficia_DW.LOW;
    }
    break;

   case Assignmen_IN_Ventricular_Charge:
    Assignment2_incase_unofficia_DW.is_NON_DUAL_MODES =
      IN_Discharging_C21_and_Pace_Int;
    Assignment2_incase_unofficial_B.PACE_CHARGE_CTRL =
      Assignment2_incase_unofficia_DW.HIGH;
    Assignment2_incase_unofficial_B.PACE_GND_CTRL =
      Assignment2_incase_unofficia_DW.HIGH;
    Assignment2_incase_unofficial_B.VENT_PACE_CTRL =
      Assignment2_incase_unofficia_DW.LOW;
    Assignment2_incase_unofficial_B.Z_ATR_CTRL =
      Assignment2_incase_unofficia_DW.LOW;
    Assignment2_incase_unofficial_B.Z_VENT_CTRL =
      Assignment2_incase_unofficia_DW.LOW;
    Assignment2_incase_unofficial_B.ATR_PACE_CTRL =
      Assignment2_incase_unofficia_DW.LOW;

    /* DataStoreRead: '<Root>/Data Store Read10' */
    Assignment2_incase_unofficia_DW.Pace_Interval =
      Assignment2_incase_unofficia_DW.Lower_Rate_Limit;

    /* DataStoreRead: '<Root>/Data Store Read9' incorporates:
     *  DataStoreRead: '<Root>/Data Store Read14'
     */
    if (Assignment2_incase_unofficia_DW.Hysterisis ==
        Assignment2_incase_unofficia_DW.HIGH) {
      qY = (uint32_T)Assignment2_incase_unofficia_DW.Pace_Interval +
        Assignment2_incase_unofficia_DW.Hysterisis_Escape_Interval;
      if (qY > 65535U) {
        qY = 65535U;
      }

      Assignment2_incase_unofficia_DW.Pace_Interval = (uint16_T)qY;
    }
    break;

   case Assign_IN_Ventricular_Discharge:
    /* DataStoreRead: '<Root>/Data Store Read1' incorporates:
     *  DataStoreRead: '<Root>/Data Store Read5'
     */
    if (Assignment2_incase_unofficia_DW.Mode_Chamber_Sensed == 2) {
      Assignment2_incase_unofficia_DW.is_NON_DUAL_MODES =
        Assignme_IN_Ventricular_Sensing;
      Assignment2_incase_unofficia_DW.temporalCounter_i1 = 0U;
      Assignment2_incase_unofficial_B.FRONT_END_CTRL =
        Assignment2_incase_unofficia_DW.HIGH;
      Assignment2_incase_unofficial_B.VENT_CMP_REF_PWM =
        Assignment2_incase_unofficia_DW.Ventricular_Sensitivity;
    } else {
      if ((Assignment2_incase_unofficia_DW.Mode_Chamber_Sensed == 0) &&
          (Assignment2_incase_unofficia_DW.temporalCounter_i1 >=
           Assignment2_incase_unofficia_DW.Pace_Interval)) {
        Assignment2_incase_unofficia_DW.is_NON_DUAL_MODES =
          A_IN_No_Natural_Activity_Sensed;
        Assignment2_incase_unofficial_B.FRONT_END_CTRL =
          Assignment2_incase_unofficia_DW.HIGH;
      }
    }
    break;

   case Assignmen_IN_Ventricular_Pacing:
    Assignment2_incase_unofficia_DW.is_NON_DUAL_MODES =
      Assignment2_incase_un_IN_Pacing;
    Assignment2_incase_unofficial_B.ATR_GND_CTRL =
      Assignment2_incase_unofficia_DW.LOW;
    Assignment2_incase_unofficial_B.Z_ATR_CTRL =
      Assignment2_incase_unofficia_DW.LOW;
    Assignment2_incase_unofficial_B.Z_VENT_CTRL =
      Assignment2_incase_unofficia_DW.LOW;
    Assignment2_incase_unofficial_B.VENT_GND_CTRL =
      Assignment2_incase_unofficia_DW.LOW;
    break;

   default:
    /* case IN_Ventricular_Sensing: */
    if (Assignment2_incase_unofficia_DW.temporalCounter_i1 >=
        Assignment2_incase_unofficia_DW.Pace_Interval) {
      Assignment2_incase_unofficia_DW.is_NON_DUAL_MODES =
        A_IN_No_Natural_Activity_Sensed;
      Assignment2_incase_unofficial_B.FRONT_END_CTRL =
        Assignment2_incase_unofficia_DW.HIGH;
    } else {
      if ((Assignment2_incase_unofficia_DW.Mode_Response == 2) && (*DigitalRead1)
          && (Assignment2_incase_unofficia_DW.temporalCounter_i1 >=
              Assignment2_incase_unofficia_DW.VRP)) {
        Assignment2_incase_unofficia_DW.is_NON_DUAL_MODES =
          Assignment2__IN_NO_ACTIVE_CHILD;
        Assignment2_incase_unofficia_DW.is_c2_Assignment2_incase_unoffi =
          Assignment2_IN_DECIDE_STATEFLOW;
        Assignment2_incase_unofficial_B.Trigger =
          Assignment2_incase_unofficia_DW.LOW;
      }
    }
    break;
  }
}

static void Assignment2__SystemCore_release(const
  freedomk64f_SCIRead_Assignmen_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_SCI_Close(obj->MW_SCIHANDLE);
  }
}

static void Assignment2_i_SystemCore_delete(const
  freedomk64f_SCIRead_Assignmen_T *obj)
{
  Assignment2__SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(freedomk64f_SCIRead_Assignmen_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    Assignment2_i_SystemCore_delete(obj);
  }
}

static void A_SystemCore_rele_f(const freedomk64f_AnalogInput_Assig_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_AnalogIn_Stop(obj->MW_ANALOGIN_HANDLE);
    MW_AnalogIn_Close(obj->MW_ANALOGIN_HANDLE);
  }
}

static void A_SystemCore_dele_f(const freedomk64f_AnalogInput_Assig_T *obj)
{
  A_SystemCore_rele_f(obj);
}

static void Assignment2_i_matlabCodegenHa_f(freedomk64f_AnalogInput_Assig_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    A_SystemCore_dele_f(obj);
  }
}

static void SystemCore_rele_aectt34bsusdnod(const
  freedomk64f_SCIWrite_Assignme_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_SCI_Close(obj->MW_SCIHANDLE);
  }
}

static void SystemCore_dele_aectt34bsusdnod(const
  freedomk64f_SCIWrite_Assignme_T *obj)
{
  SystemCore_rele_aectt34bsusdnod(obj);
}

static void matlabCodegenHa_aectt34bsusdnod(freedomk64f_SCIWrite_Assignme_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    SystemCore_dele_aectt34bsusdnod(obj);
  }
}

static void SystemCore_releas_aectt34bsusdn(const
  freedomk64f_DigitalRead_Assig_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_digitalIO_close(obj->MW_DIGITALIO_HANDLE);
  }
}

static void SystemCore_delete_aectt34bsusdn(const
  freedomk64f_DigitalRead_Assig_T *obj)
{
  SystemCore_releas_aectt34bsusdn(obj);
}

static void matlabCodegenHand_aectt34bsusdn(freedomk64f_DigitalRead_Assig_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    SystemCore_delete_aectt34bsusdn(obj);
  }
}

static void Assignme_SystemCore_release_aec(const
  freedomk64f_DigitalWrite_Assi_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_digitalIO_close(obj->MW_DIGITALIO_HANDLE);
  }
}

static void Assignmen_SystemCore_delete_aec(const
  freedomk64f_DigitalWrite_Assi_T *obj)
{
  Assignme_SystemCore_release_aec(obj);
}

static void matlabCodegenHandle_matlabC_aec(freedomk64f_DigitalWrite_Assi_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    Assignmen_SystemCore_delete_aec(obj);
  }
}

static void Assignment_SystemCore_release_a(const
  freedomk64f_PWMOutput_Assignm_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_PWM_Stop(obj->MW_PWM_HANDLE);
    MW_PWM_Close(obj->MW_PWM_HANDLE);
  }
}

static void Assignment2_SystemCore_delete_a(const
  freedomk64f_PWMOutput_Assignm_T *obj)
{
  Assignment_SystemCore_release_a(obj);
}

static void matlabCodegenHandle_matlabCod_a(freedomk64f_PWMOutput_Assignm_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    Assignment2_SystemCore_delete_a(obj);
  }
}

static void Assignment2_in_SystemCore_setup(freedomk64f_SCIRead_Assignmen_T *obj)
{
  uint32_T TxPinLoc;
  uint32_T SCIModuleLoc;
  MW_SCI_StopBits_Type StopBitsValue;
  MW_SCI_Parity_Type ParityValue;
  obj->isSetupComplete = false;
  obj->isInitialized = 1;
  TxPinLoc = MW_UNDEFINED_VALUE;
  SCIModuleLoc = 0;
  obj->MW_SCIHANDLE = MW_SCI_Open(&SCIModuleLoc, false, 10U, TxPinLoc);
  MW_SCI_SetBaudrate(obj->MW_SCIHANDLE, 115200U);
  StopBitsValue = MW_SCI_STOPBITS_1;
  ParityValue = MW_SCI_PARITY_NONE;
  MW_SCI_SetFrameFormat(obj->MW_SCIHANDLE, 8, ParityValue, StopBitsValue);
  obj->isSetupComplete = true;
}

static void Assignment2__SystemCore_setup_a(freedomk64f_SCIWrite_Assignme_T *obj)
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

/* Model step function */
void Assignment2_incase_unofficial_step(void)
{
  real_T offset;
  uint8_T RxDataLocChar[27];
  uint8_T status;
  uint8_T TxDataLocChar[3];
  uint8_T rtb_TmpSignalConversionAtSerial[3];
  boolean_T DigitalRead1;
  boolean_T DigitalRead;
  uint32_T qY;
  uint32_T qY_0;

  /* MATLABSystem: '<Root>/Serial Receive' */
  if (Assignment2_incase_unofficia_DW.obj.SampleTime !=
      Assignment2_incase_unofficial_P.SerialReceive_SampleTime) {
    Assignment2_incase_unofficia_DW.obj.SampleTime =
      Assignment2_incase_unofficial_P.SerialReceive_SampleTime;
  }

  status = MW_SCI_Receive(Assignment2_incase_unofficia_DW.obj.MW_SCIHANDLE,
    RxDataLocChar, 27U);
  memcpy((void *)&Assignment2_incase_unofficial_B.RxData[0], (void *)
         &RxDataLocChar[0], (uint32_T)((size_t)27 * sizeof(uint8_T)));

  /* Chart: '<Root>/Chart' incorporates:
   *  MATLABSystem: '<Root>/Serial Receive'
   */
  if (Assignment2_incase_unofficia_DW.is_active_c8_Assignment2_incase == 0U) {
    Assignment2_incase_unofficia_DW.is_active_c8_Assignment2_incase = 1U;
    Assignment2_incase_unofficia_DW.is_c8_Assignment2_incase_unoffi =
      Assignment2_inca_IN_START_STATE;
    Assignment2_incase_unofficia_DW.uint16_bytes = 2.0;
    Assignment2_incase_unofficia_DW.uint8_bytes = 1.0;
  } else {
    switch (Assignment2_incase_unofficia_DW.is_c8_Assignment2_incase_unoffi) {
     case Assignment2_inca_IN_READ_PARAMS:
      Assignment2_incase_unofficia_DW.is_c8_Assignment2_incase_unoffi =
        Assignment2_incas_IN_WAIT_STATE;
      break;

     case Assignment2_inca_IN_START_STATE:
      Assignment2_incase_unofficia_DW.is_c8_Assignment2_incase_unoffi =
        Assignment2_incas_IN_WAIT_STATE;
      break;

     case Assignment2_incas_IN_WAIT_STATE:
      if (status == 0) {
        if (Assignment2_incase_unofficial_B.RxData[0] == 10) {
          switch (Assignment2_incase_unofficial_B.RxData[1]) {
           case 20:
            Assignment2_incase_unofficia_DW.is_c8_Assignment2_incase_unoffi =
              Assignment2_inc_IN_WRITE_PARAMS;
            Assignment2_incase_unofficial_B.Mode_Chamber_Paced =
              Assignment2_incase_unofficial_B.RxData[2];
            Assignment2_incase_unofficial_B.Mode_Chamber_Sensed =
              Assignment2_incase_unofficial_B.RxData[(int32_T)
              (Assignment2_incase_unofficia_DW.uint8_bytes + 3.0) - 1];
            offset = (Assignment2_incase_unofficia_DW.uint8_bytes + 3.0) +
              Assignment2_incase_unofficia_DW.uint8_bytes;
            Assignment2_incase_unofficial_B.Mode_Response =
              Assignment2_incase_unofficial_B.RxData[(int32_T)offset - 1];
            offset += Assignment2_incase_unofficia_DW.uint8_bytes;
            Assignment2_incase_unofficial_B.Ventricular_Amplitude =
              Assignment2_incase_unofficial_B.RxData[(int32_T)offset - 1];
            offset += Assignment2_incase_unofficia_DW.uint8_bytes;
            Assignment2_incase_unofficial_B.Ventricular_Pulse_Width =
              Assignment2_incase_unofficial_B.RxData[(int32_T)offset - 1];
            offset += Assignment2_incase_unofficia_DW.uint8_bytes;
            Assignment2_incase_unofficial_B.Ventricular_Sensitivity =
              Assignment2_incase_unofficial_B.RxData[(int32_T)offset - 1];
            offset += Assignment2_incase_unofficia_DW.uint8_bytes;
            Assignment2_incase_unofficial_B.Atrial_Amplitude =
              Assignment2_incase_unofficial_B.RxData[(int32_T)offset - 1];
            offset += Assignment2_incase_unofficia_DW.uint8_bytes;
            Assignment2_incase_unofficial_B.Atrial_Pulse_Width =
              Assignment2_incase_unofficial_B.RxData[(int32_T)offset - 1];
            offset += Assignment2_incase_unofficia_DW.uint8_bytes;
            Assignment2_incase_unofficial_B.Atrial_Sensitivity =
              Assignment2_incase_unofficial_B.RxData[(int32_T)offset - 1];
            offset += Assignment2_incase_unofficia_DW.uint8_bytes;
            Assignment2_incase_unofficial_B.Hysterisis =
              Assignment2_incase_unofficial_B.RxData[(int32_T)offset - 1];
            offset += Assignment2_incase_unofficia_DW.uint8_bytes;
            memcpy((void *)&Assignment2_incase_unofficial_B.Lower_Rate_Limit,
                   (void *)&Assignment2_incase_unofficial_B.RxData[(int32_T)
                   offset - 1], (uint32_T)((size_t)1 * sizeof(uint16_T)));
            offset += Assignment2_incase_unofficia_DW.uint16_bytes;
            memcpy((void *)&Assignment2_incase_unofficial_B.AV_Delay, (void *)
                   &Assignment2_incase_unofficial_B.RxData[(int32_T)offset - 1],
                   (uint32_T)((size_t)1 * sizeof(uint16_T)));
            offset += Assignment2_incase_unofficia_DW.uint16_bytes;
            memcpy((void *)&Assignment2_incase_unofficial_B.VRP, (void *)
                   &Assignment2_incase_unofficial_B.RxData[(int32_T)offset - 1],
                   (uint32_T)((size_t)1 * sizeof(uint16_T)));
            offset += Assignment2_incase_unofficia_DW.uint16_bytes;
            memcpy((void *)&Assignment2_incase_unofficial_B.ARP, (void *)
                   &Assignment2_incase_unofficial_B.RxData[(int32_T)offset - 1],
                   (uint32_T)((size_t)1 * sizeof(uint16_T)));
            offset += Assignment2_incase_unofficia_DW.uint16_bytes;
            memcpy((void *)
                   &Assignment2_incase_unofficial_B.Hysterisis_Escape_Interval,
                   (void *)&Assignment2_incase_unofficial_B.RxData[(int32_T)
                   offset - 1], (uint32_T)((size_t)1 * sizeof(uint16_T)));
            offset += Assignment2_incase_unofficia_DW.uint16_bytes;
            Assignment2_incase_unofficial_B.Max_Sensor_Rate =
              Assignment2_incase_unofficial_B.RxData[(int32_T)offset - 1];
            offset += Assignment2_incase_unofficia_DW.uint8_bytes;
            Assignment2_incase_unofficial_B.Mode_Adaptivity =
              Assignment2_incase_unofficial_B.RxData[(int32_T)offset - 1];
            offset += Assignment2_incase_unofficia_DW.uint8_bytes;
            Assignment2_incase_unofficial_B.Reaction_Time =
              Assignment2_incase_unofficial_B.RxData[(int32_T)offset - 1];
            offset += Assignment2_incase_unofficia_DW.uint8_bytes;
            Assignment2_incase_unofficial_B.Response_Factor =
              Assignment2_incase_unofficial_B.RxData[(int32_T)offset - 1];
            offset += Assignment2_incase_unofficia_DW.uint8_bytes;
            Assignment2_incase_unofficial_B.Recovery_Time =
              Assignment2_incase_unofficial_B.RxData[(int32_T)offset - 1];
            break;

           case 30:
            Assignment2_incase_unofficia_DW.is_c8_Assignment2_incase_unoffi =
              Assignment2_inca_IN_READ_PARAMS;
            Assignment2_incase_unofficial_B.Param_Number =
              Assignment2_incase_unofficial_B.RxData[2];
            break;

           default:
            Assignment2_incase_unofficia_DW.is_c8_Assignment2_incase_unoffi =
              Assignment2_incas_IN_WAIT_STATE;
            break;
          }
        } else {
          Assignment2_incase_unofficia_DW.is_c8_Assignment2_incase_unoffi =
            Assignment2_incas_IN_WAIT_STATE;
        }
      }
      break;

     default:
      /* case IN_WRITE_PARAMS: */
      Assignment2_incase_unofficia_DW.is_c8_Assignment2_incase_unoffi =
        Assignment2_incas_IN_WAIT_STATE;
      break;
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* S-Function (any2byte): '<S3>/Byte Pack5' */

  /* Pack: <S3>/Byte Pack5 */
  (void) memcpy(&Assignment2_incase_unofficial_B.BytePack5[0],
                &Assignment2_incase_unofficial_B.Lower_Rate_Limit,
                2);

  /* S-Function (any2byte): '<S3>/Byte Pack6' */

  /* Pack: <S3>/Byte Pack6 */
  (void) memcpy(&Assignment2_incase_unofficial_B.BytePack6[0],
                &Assignment2_incase_unofficial_B.AV_Delay,
                2);

  /* S-Function (any2byte): '<S3>/Byte Pack1' */

  /* Pack: <S3>/Byte Pack1 */
  (void) memcpy(&Assignment2_incase_unofficial_B.BytePack1[0],
                &Assignment2_incase_unofficial_B.VRP,
                2);

  /* S-Function (any2byte): '<S3>/Byte Pack7' */

  /* Pack: <S3>/Byte Pack7 */
  (void) memcpy(&Assignment2_incase_unofficial_B.BytePack7[0],
                &Assignment2_incase_unofficial_B.ARP,
                2);

  /* S-Function (any2byte): '<S3>/Byte Pack4' */

  /* Pack: <S3>/Byte Pack4 */
  (void) memcpy(&Assignment2_incase_unofficial_B.BytePack4[0],
                &Assignment2_incase_unofficial_B.Hysterisis_Escape_Interval,
                2);

  /* MATLABSystem: '<S3>/ATR_SIGNAL' */
  if (Assignment2_incase_unofficia_DW.obj_i.SampleTime !=
      Assignment2_incase_unofficial_P.ATR_SIGNAL_SampleTime) {
    Assignment2_incase_unofficia_DW.obj_i.SampleTime =
      Assignment2_incase_unofficial_P.ATR_SIGNAL_SampleTime;
  }

  MW_AnalogIn_Start(Assignment2_incase_unofficia_DW.obj_i.MW_ANALOGIN_HANDLE);
  MW_AnalogInSingle_ReadResult
    (Assignment2_incase_unofficia_DW.obj_i.MW_ANALOGIN_HANDLE, &offset, 7);

  /* DataTypeConversion: '<S3>/Data Type Conversion2' incorporates:
   *  Gain: '<S3>/Gain'
   *  MATLABSystem: '<S3>/ATR_SIGNAL'
   */
  offset = floor(Assignment2_incase_unofficial_P.Gain_Gain * offset);
  if (rtIsNaN(offset) || rtIsInf(offset)) {
    offset = 0.0;
  } else {
    offset = fmod(offset, 65536.0);
  }

  Assignment2_incase_unofficial_B.DataTypeConversion2 = (uint16_T)(offset < 0.0 ?
    (int32_T)(uint16_T)-(int16_T)(uint16_T)-offset : (int32_T)(uint16_T)offset);

  /* End of DataTypeConversion: '<S3>/Data Type Conversion2' */

  /* S-Function (any2byte): '<S3>/Byte Pack30' */

  /* Pack: <S3>/Byte Pack30 */
  (void) memcpy(&Assignment2_incase_unofficial_B.BytePack30[0],
                &Assignment2_incase_unofficial_B.DataTypeConversion2,
                2);

  /* MATLABSystem: '<S3>/VENT_SIGNAL' */
  if (Assignment2_incase_unofficia_DW.obj_b4.SampleTime !=
      Assignment2_incase_unofficial_P.VENT_SIGNAL_SampleTime) {
    Assignment2_incase_unofficia_DW.obj_b4.SampleTime =
      Assignment2_incase_unofficial_P.VENT_SIGNAL_SampleTime;
  }

  MW_AnalogIn_Start(Assignment2_incase_unofficia_DW.obj_b4.MW_ANALOGIN_HANDLE);
  MW_AnalogInSingle_ReadResult
    (Assignment2_incase_unofficia_DW.obj_b4.MW_ANALOGIN_HANDLE, &offset, 7);

  /* DataTypeConversion: '<S3>/Data Type Conversion3' incorporates:
   *  Gain: '<S3>/Gain1'
   *  MATLABSystem: '<S3>/VENT_SIGNAL'
   */
  offset = floor(Assignment2_incase_unofficial_P.Gain1_Gain * offset);
  if (rtIsNaN(offset) || rtIsInf(offset)) {
    offset = 0.0;
  } else {
    offset = fmod(offset, 65536.0);
  }

  Assignment2_incase_unofficial_B.DataTypeConversion3 = (uint16_T)(offset < 0.0 ?
    (int32_T)(uint16_T)-(int16_T)(uint16_T)-offset : (int32_T)(uint16_T)offset);

  /* End of DataTypeConversion: '<S3>/Data Type Conversion3' */

  /* S-Function (any2byte): '<S3>/Byte Pack31' */

  /* Pack: <S3>/Byte Pack31 */
  (void) memcpy(&Assignment2_incase_unofficial_B.BytePack31[0],
                &Assignment2_incase_unofficial_B.DataTypeConversion3,
                2);

  /* MultiPortSwitch: '<S3>/Multiport Switch1' */
  switch (Assignment2_incase_unofficial_B.Param_Number) {
   case 1:
    /* SignalConversion generated from: '<S3>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] =
      Assignment2_incase_unofficial_B.Mode_Chamber_Paced;
    rtb_TmpSignalConversionAtSerial[2] =
      Assignment2_incase_unofficial_B.Mode_Chamber_Paced;
    break;

   case 2:
    /* SignalConversion generated from: '<S3>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] =
      Assignment2_incase_unofficial_B.Mode_Chamber_Sensed;
    rtb_TmpSignalConversionAtSerial[2] =
      Assignment2_incase_unofficial_B.Mode_Chamber_Sensed;
    break;

   case 3:
    /* SignalConversion generated from: '<S3>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] =
      Assignment2_incase_unofficial_B.Mode_Response;
    rtb_TmpSignalConversionAtSerial[2] =
      Assignment2_incase_unofficial_B.Mode_Response;
    break;

   case 4:
    /* SignalConversion generated from: '<S3>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] =
      Assignment2_incase_unofficial_B.Ventricular_Amplitude;
    rtb_TmpSignalConversionAtSerial[2] =
      Assignment2_incase_unofficial_B.Ventricular_Amplitude;
    break;

   case 5:
    /* SignalConversion generated from: '<S3>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] =
      Assignment2_incase_unofficial_B.Ventricular_Pulse_Width;
    rtb_TmpSignalConversionAtSerial[2] =
      Assignment2_incase_unofficial_B.Ventricular_Pulse_Width;
    break;

   case 6:
    /* SignalConversion generated from: '<S3>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] =
      Assignment2_incase_unofficial_B.Ventricular_Sensitivity;
    rtb_TmpSignalConversionAtSerial[2] =
      Assignment2_incase_unofficial_B.Ventricular_Sensitivity;
    break;

   case 7:
    /* SignalConversion generated from: '<S3>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] =
      Assignment2_incase_unofficial_B.Atrial_Amplitude;
    rtb_TmpSignalConversionAtSerial[2] =
      Assignment2_incase_unofficial_B.Atrial_Amplitude;
    break;

   case 8:
    /* SignalConversion generated from: '<S3>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] =
      Assignment2_incase_unofficial_B.Atrial_Pulse_Width;
    rtb_TmpSignalConversionAtSerial[2] =
      Assignment2_incase_unofficial_B.Atrial_Pulse_Width;
    break;

   case 9:
    /* SignalConversion generated from: '<S3>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] =
      Assignment2_incase_unofficial_B.Atrial_Sensitivity;
    rtb_TmpSignalConversionAtSerial[2] =
      Assignment2_incase_unofficial_B.Atrial_Sensitivity;
    break;

   case 10:
    /* SignalConversion generated from: '<S3>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] =
      Assignment2_incase_unofficial_B.Hysterisis;
    rtb_TmpSignalConversionAtSerial[2] =
      Assignment2_incase_unofficial_B.Hysterisis;
    break;

   case 11:
    /* SignalConversion generated from: '<S3>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] =
      Assignment2_incase_unofficial_B.BytePack5[0];
    rtb_TmpSignalConversionAtSerial[2] =
      Assignment2_incase_unofficial_B.BytePack5[1];
    break;

   case 12:
    /* SignalConversion generated from: '<S3>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] =
      Assignment2_incase_unofficial_B.BytePack6[0];
    rtb_TmpSignalConversionAtSerial[2] =
      Assignment2_incase_unofficial_B.BytePack6[1];
    break;

   case 13:
    /* SignalConversion generated from: '<S3>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] =
      Assignment2_incase_unofficial_B.BytePack1[0];
    rtb_TmpSignalConversionAtSerial[2] =
      Assignment2_incase_unofficial_B.BytePack1[1];
    break;

   case 14:
    /* SignalConversion generated from: '<S3>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] =
      Assignment2_incase_unofficial_B.BytePack7[0];
    rtb_TmpSignalConversionAtSerial[2] =
      Assignment2_incase_unofficial_B.BytePack7[1];
    break;

   case 15:
    /* SignalConversion generated from: '<S3>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] =
      Assignment2_incase_unofficial_B.BytePack4[0];
    rtb_TmpSignalConversionAtSerial[2] =
      Assignment2_incase_unofficial_B.BytePack4[1];
    break;

   case 16:
    /* SignalConversion generated from: '<S3>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] =
      Assignment2_incase_unofficial_B.Max_Sensor_Rate;
    rtb_TmpSignalConversionAtSerial[2] =
      Assignment2_incase_unofficial_B.Max_Sensor_Rate;
    break;

   case 17:
    /* SignalConversion generated from: '<S3>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] =
      Assignment2_incase_unofficial_B.Mode_Adaptivity;
    rtb_TmpSignalConversionAtSerial[2] =
      Assignment2_incase_unofficial_B.Mode_Adaptivity;
    break;

   case 18:
    /* SignalConversion generated from: '<S3>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] =
      Assignment2_incase_unofficial_B.Reaction_Time;
    rtb_TmpSignalConversionAtSerial[2] =
      Assignment2_incase_unofficial_B.Reaction_Time;
    break;

   case 19:
    /* SignalConversion generated from: '<S3>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] =
      Assignment2_incase_unofficial_B.Response_Factor;
    rtb_TmpSignalConversionAtSerial[2] =
      Assignment2_incase_unofficial_B.Response_Factor;
    break;

   case 20:
    /* SignalConversion generated from: '<S3>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] =
      Assignment2_incase_unofficial_B.Recovery_Time;
    rtb_TmpSignalConversionAtSerial[2] =
      Assignment2_incase_unofficial_B.Recovery_Time;
    break;

   case 21:
    /* SignalConversion generated from: '<S3>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] =
      Assignment2_incase_unofficial_B.BytePack30[0];
    rtb_TmpSignalConversionAtSerial[2] =
      Assignment2_incase_unofficial_B.BytePack30[1];
    break;

   default:
    /* SignalConversion generated from: '<S3>/Serial Transmit1' */
    rtb_TmpSignalConversionAtSerial[1] =
      Assignment2_incase_unofficial_B.BytePack31[0];
    rtb_TmpSignalConversionAtSerial[2] =
      Assignment2_incase_unofficial_B.BytePack31[1];
    break;
  }

  /* End of MultiPortSwitch: '<S3>/Multiport Switch1' */

  /* SignalConversion generated from: '<S3>/Serial Transmit1' */
  rtb_TmpSignalConversionAtSerial[0] =
    Assignment2_incase_unofficial_B.Param_Number;

  /* MATLABSystem: '<S3>/Serial Transmit1' */
  status = 1U;
  while (status != 0) {
    memcpy((void *)&TxDataLocChar[0], (void *)&rtb_TmpSignalConversionAtSerial[0],
           (uint32_T)((size_t)3 * sizeof(uint8_T)));
    status = MW_SCI_Transmit(Assignment2_incase_unofficia_DW.obj_m.MW_SCIHANDLE,
      TxDataLocChar, 3U);
  }

  /* End of MATLABSystem: '<S3>/Serial Transmit1' */

  /* MATLABSystem: '<S6>/Digital Read' */
  if (Assignment2_incase_unofficia_DW.obj_h.SampleTime !=
      Assignment2_incase_unofficial_P.DigitalRead_SampleTime) {
    Assignment2_incase_unofficia_DW.obj_h.SampleTime =
      Assignment2_incase_unofficial_P.DigitalRead_SampleTime;
  }

  DigitalRead = MW_digitalIO_read
    (Assignment2_incase_unofficia_DW.obj_h.MW_DIGITALIO_HANDLE);

  /* End of MATLABSystem: '<S6>/Digital Read' */

  /* MATLABSystem: '<S6>/Digital Read1' */
  if (Assignment2_incase_unofficia_DW.obj_b.SampleTime !=
      Assignment2_incase_unofficial_P.DigitalRead1_SampleTime) {
    Assignment2_incase_unofficia_DW.obj_b.SampleTime =
      Assignment2_incase_unofficial_P.DigitalRead1_SampleTime;
  }

  DigitalRead1 = MW_digitalIO_read
    (Assignment2_incase_unofficia_DW.obj_b.MW_DIGITALIO_HANDLE);

  /* End of MATLABSystem: '<S6>/Digital Read1' */

  /* Chart: '<S2>/Chart1' incorporates:
   *  DataStoreRead: '<Root>/Data Store Read'
   *  DataStoreRead: '<Root>/Data Store Read10'
   *  DataStoreRead: '<Root>/Data Store Read11'
   *  DataStoreRead: '<Root>/Data Store Read3'
   *  DataStoreRead: '<Root>/Data Store Read4'
   *  DataStoreRead: '<Root>/Data Store Read6'
   *  DataStoreRead: '<Root>/Data Store Read7'
   */
  if (Assignment2_incase_unofficia_DW.temporalCounter_i1 < MAX_uint32_T) {
    Assignment2_incase_unofficia_DW.temporalCounter_i1++;
  }

  if (Assignment2_incase_unofficia_DW.is_active_c2_Assignment2_incase == 0U) {
    Assignment2_incase_unofficia_DW.is_active_c2_Assignment2_incase = 1U;
    Assignment2_incase_unofficia_DW.is_c2_Assignment2_incase_unoffi =
      Assignment2_IN_DECIDE_STATEFLOW;
    Assignment2_incase_unofficial_B.Trigger =
      Assignment2_incase_unofficia_DW.LOW;
  } else {
    switch (Assignment2_incase_unofficia_DW.is_c2_Assignment2_incase_unoffi) {
     case Assignment2_IN_DECIDE_STATEFLOW:
      if (Assignment2_incase_unofficia_DW.Mode_Chamber_Paced == 3) {
        Assignment2_incase_unofficia_DW.is_c2_Assignment2_incase_unoffi =
          Assignment2_incas_IN_DUAL_MODES;
        Assignment2_incase_unofficia_DW.is_DUAL_MODES =
          Ass_IN_A_CHARGING_V_DISCHARGING;
        Assignment2_incase_unofficia_DW.temporalCounter_i1 = 0U;
        Assignment2_incase_unofficial_B.PACING_REF_PWM =
          Assignment2_incase_unofficia_DW.Atrial_Amplitude;
        Assignment2_incase_unofficial_B.PACE_CHARGE_CTRL =
          Assignment2_incase_unofficia_DW.HIGH;
        Assignment2_incase_unofficial_B.PACE_GND_CTRL =
          Assignment2_incase_unofficia_DW.HIGH;
        Assignment2_incase_unofficial_B.VENT_PACE_CTRL =
          Assignment2_incase_unofficia_DW.LOW;
        Assignment2_incase_unofficial_B.Z_ATR_CTRL =
          Assignment2_incase_unofficia_DW.LOW;
        Assignment2_incase_unofficial_B.Z_VENT_CTRL =
          Assignment2_incase_unofficia_DW.LOW;
        Assignment2_incase_unofficial_B.ATR_PACE_CTRL =
          Assignment2_incase_unofficia_DW.LOW;
        Assignment2_incase_unofficial_B.ATR_GND_CTRL =
          Assignment2_incase_unofficia_DW.LOW;
        Assignment2_incase_unofficial_B.VENT_GND_CTRL =
          Assignment2_incase_unofficia_DW.HIGH;
        qY = (uint32_T)Assignment2_incase_unofficia_DW.Lower_Rate_Limit -
          /*MW:OvSatOk*/ Assignment2_incase_unofficia_DW.AV_Delay;
        if (qY > Assignment2_incase_unofficia_DW.Lower_Rate_Limit) {
          qY = 0U;
        }

        Assignment2_incase_unofficia_DW.Atrial_Escape_Interval = (uint16_T)qY;
        Assignment2_incase_unofficial_B.Trigger =
          Assignment2_incase_unofficia_DW.HIGH;
      } else if ((Assignment2_incase_unofficia_DW.Mode_Chamber_Paced == 2) ||
                 (Assignment2_incase_unofficia_DW.Mode_Chamber_Paced == 1)) {
        Assignment2_incase_unofficia_DW.is_c2_Assignment2_incase_unoffi =
          Assignment2_i_IN_NON_DUAL_MODES;
        Assignment2_incase_unofficia_DW.is_NON_DUAL_MODES =
          Assignment2_inc_IN_Charging_C23;
        Assignment2_incase_unofficial_B.ATR_PACE_CTRL =
          Assignment2_incase_unofficia_DW.LOW;
        Assignment2_incase_unofficial_B.VENT_PACE_CTRL =
          Assignment2_incase_unofficia_DW.LOW;
        Assignment2_incase_unofficial_B.Trigger =
          Assignment2_incase_unofficia_DW.HIGH;
      } else {
        Assignment2_incase_unofficial_B.Trigger =
          !Assignment2_incase_unofficial_B.Trigger;
      }
      break;

     case Assignment2_incas_IN_DUAL_MODES:
      switch (Assignment2_incase_unofficia_DW.is_DUAL_MODES) {
       case Ass_IN_A_CHARGING_V_DISCHARGING:
        qY = (uint32_T)Assignment2_incase_unofficia_DW.Atrial_Escape_Interval -
          /*MW:OvSatOk*/ Assignment2_incase_unofficia_DW.Atrial_Pulse_Width;
        if (qY > Assignment2_incase_unofficia_DW.Atrial_Escape_Interval) {
          qY = 0U;
        }

        qY_0 = qY - /*MW:OvSatOk*/
          Assignment2_incase_unofficia_DW.Ventricular_Pulse_Width;
        if (qY_0 > qY) {
          qY_0 = 0U;
        }

        if (Assignment2_incase_unofficia_DW.temporalCounter_i1 >= qY_0) {
          Assignment2_incase_unofficia_DW.is_DUAL_MODES =
            Assignment2_incase__IN_A_PACING;
          Assignment2_incase_unofficia_DW.temporalCounter_i1 = 0U;
          Assignment2_incase_unofficial_B.PACE_CHARGE_CTRL =
            Assignment2_incase_unofficia_DW.LOW;
          Assignment2_incase_unofficial_B.PACE_GND_CTRL =
            Assignment2_incase_unofficia_DW.HIGH;
          Assignment2_incase_unofficial_B.VENT_PACE_CTRL =
            Assignment2_incase_unofficia_DW.LOW;
          Assignment2_incase_unofficial_B.ATR_GND_CTRL =
            Assignment2_incase_unofficia_DW.LOW;
          Assignment2_incase_unofficial_B.Z_ATR_CTRL =
            Assignment2_incase_unofficia_DW.LOW;
          Assignment2_incase_unofficial_B.Z_VENT_CTRL =
            Assignment2_incase_unofficia_DW.LOW;
          Assignment2_incase_unofficial_B.VENT_GND_CTRL =
            Assignment2_incase_unofficia_DW.LOW;
          Assignment2_incase_unofficial_B.ATR_PACE_CTRL =
            Assignment2_incase_unofficia_DW.HIGH;
        }
        break;

       case Assignment2_incase__IN_A_PACING:
        if (Assignment2_incase_unofficia_DW.temporalCounter_i1 >=
            Assignment2_incase_unofficia_DW.Atrial_Pulse_Width) {
          Assignment2_incase_unofficia_DW.is_DUAL_MODES =
            Ass_IN_V_CHARGING_A_DISCHARGING;
          Assignment2_incase_unofficia_DW.temporalCounter_i1 = 0U;
          Assignment2_incase_unofficial_B.PACING_REF_PWM =
            Assignment2_incase_unofficia_DW.Ventricular_Amplitude;
          Assignment2_incase_unofficial_B.PACE_CHARGE_CTRL =
            Assignment2_incase_unofficia_DW.HIGH;
          Assignment2_incase_unofficial_B.PACE_GND_CTRL =
            Assignment2_incase_unofficia_DW.HIGH;
          Assignment2_incase_unofficial_B.VENT_PACE_CTRL =
            Assignment2_incase_unofficia_DW.LOW;
          Assignment2_incase_unofficial_B.Z_ATR_CTRL =
            Assignment2_incase_unofficia_DW.LOW;
          Assignment2_incase_unofficial_B.Z_VENT_CTRL =
            Assignment2_incase_unofficia_DW.LOW;
          Assignment2_incase_unofficial_B.ATR_PACE_CTRL =
            Assignment2_incase_unofficia_DW.LOW;
          Assignment2_incase_unofficial_B.ATR_GND_CTRL =
            Assignment2_incase_unofficia_DW.HIGH;
          Assignment2_incase_unofficial_B.VENT_GND_CTRL =
            Assignment2_incase_unofficia_DW.LOW;
        }
        break;

       case Ass_IN_V_CHARGING_A_DISCHARGING:
        if (Assignment2_incase_unofficia_DW.temporalCounter_i1 >=
            Assignment2_incase_unofficia_DW.AV_Delay) {
          Assignment2_incase_unofficia_DW.is_DUAL_MODES =
            Assignment2_incase__IN_V_PACING;
          Assignment2_incase_unofficia_DW.temporalCounter_i1 = 0U;
          Assignment2_incase_unofficial_B.PACE_CHARGE_CTRL =
            Assignment2_incase_unofficia_DW.LOW;
          Assignment2_incase_unofficial_B.PACE_GND_CTRL =
            Assignment2_incase_unofficia_DW.HIGH;
          Assignment2_incase_unofficial_B.ATR_PACE_CTRL =
            Assignment2_incase_unofficia_DW.LOW;
          Assignment2_incase_unofficial_B.ATR_GND_CTRL =
            Assignment2_incase_unofficia_DW.LOW;
          Assignment2_incase_unofficial_B.Z_ATR_CTRL =
            Assignment2_incase_unofficia_DW.LOW;
          Assignment2_incase_unofficial_B.Z_VENT_CTRL =
            Assignment2_incase_unofficia_DW.LOW;
          Assignment2_incase_unofficial_B.VENT_GND_CTRL =
            Assignment2_incase_unofficia_DW.LOW;
          Assignment2_incase_unofficial_B.VENT_PACE_CTRL =
            Assignment2_incase_unofficia_DW.HIGH;
        }
        break;

       default:
        /* case IN_V_PACING: */
        if (Assignment2_incase_unofficia_DW.temporalCounter_i1 >=
            Assignment2_incase_unofficia_DW.Ventricular_Pulse_Width) {
          Assignment2_incase_unofficia_DW.is_DUAL_MODES =
            Assignment2__IN_NO_ACTIVE_CHILD;
          Assignment2_incase_unofficia_DW.is_c2_Assignment2_incase_unoffi =
            Assignment2_IN_DECIDE_STATEFLOW;
          Assignment2_incase_unofficial_B.Trigger =
            Assignment2_incase_unofficia_DW.LOW;
        }
        break;
      }
      break;

     default:
      /* case IN_NON_DUAL_MODES: */
      Assignment2_inca_NON_DUAL_MODES(&DigitalRead1, &DigitalRead);
      break;
    }
  }

  /* End of Chart: '<S2>/Chart1' */

  /* DataTypeConversion: '<Root>/Data Type Conversion' incorporates:
   *  DataStoreWrite: '<S4>/Data Store Write4'
   */
  Assignment2_incase_unofficia_DW.Ventricular_Pulse_Width =
    Assignment2_incase_unofficial_B.Ventricular_Pulse_Width;

  /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
   *  DataStoreWrite: '<S4>/Data Store Write7'
   */
  Assignment2_incase_unofficia_DW.Atrial_Pulse_Width =
    Assignment2_incase_unofficial_B.Atrial_Pulse_Width;

  /* Outputs for Triggered SubSystem: '<Root>/Triggered Subsystem' incorporates:
   *  TriggerPort: '<S4>/Trigger'
   */
  if ((!Assignment2_incase_unofficial_B.Trigger) &&
      (Assignment2_incase_unof_PrevZCX.TriggeredSubsystem_Trig_ZCE != ZERO_ZCSIG))
  {
    /* DataStoreWrite: '<S4>/Data Store Write' */
    Assignment2_incase_unofficia_DW.Mode_Chamber_Paced =
      Assignment2_incase_unofficial_B.Mode_Chamber_Paced;

    /* DataStoreWrite: '<S4>/Data Store Write1' */
    Assignment2_incase_unofficia_DW.Mode_Chamber_Sensed =
      Assignment2_incase_unofficial_B.Mode_Chamber_Sensed;

    /* DataStoreWrite: '<S4>/Data Store Write2' */
    Assignment2_incase_unofficia_DW.Mode_Response =
      Assignment2_incase_unofficial_B.Mode_Response;

    /* DataStoreWrite: '<S4>/Data Store Write3' */
    Assignment2_incase_unofficia_DW.Ventricular_Amplitude =
      Assignment2_incase_unofficial_B.Ventricular_Amplitude;

    /* DataStoreWrite: '<S4>/Data Store Write5' */
    Assignment2_incase_unofficia_DW.Ventricular_Sensitivity =
      Assignment2_incase_unofficial_B.Ventricular_Sensitivity;

    /* DataStoreWrite: '<S4>/Data Store Write6' */
    Assignment2_incase_unofficia_DW.Atrial_Amplitude =
      Assignment2_incase_unofficial_B.Atrial_Amplitude;

    /* DataStoreWrite: '<S4>/Data Store Write8' */
    Assignment2_incase_unofficia_DW.Atrial_Sensitivity =
      Assignment2_incase_unofficial_B.Atrial_Sensitivity;

    /* DataStoreWrite: '<S4>/Data Store Write9' */
    Assignment2_incase_unofficia_DW.Hysterisis =
      Assignment2_incase_unofficial_B.Hysterisis;

    /* DataStoreWrite: '<S4>/Data Store Write10' */
    Assignment2_incase_unofficia_DW.Lower_Rate_Limit =
      Assignment2_incase_unofficial_B.Lower_Rate_Limit;

    /* DataStoreWrite: '<S4>/Data Store Write11' */
    Assignment2_incase_unofficia_DW.AV_Delay =
      Assignment2_incase_unofficial_B.AV_Delay;

    /* DataStoreWrite: '<S4>/Data Store Write12' */
    Assignment2_incase_unofficia_DW.VRP = Assignment2_incase_unofficial_B.VRP;

    /* DataStoreWrite: '<S4>/Data Store Write13' */
    Assignment2_incase_unofficia_DW.ARP = Assignment2_incase_unofficial_B.ARP;

    /* DataStoreWrite: '<S4>/Data Store Write14' */
    Assignment2_incase_unofficia_DW.Hysterisis_Escape_Interval =
      Assignment2_incase_unofficial_B.Hysterisis_Escape_Interval;
  }

  Assignment2_incase_unof_PrevZCX.TriggeredSubsystem_Trig_ZCE =
    Assignment2_incase_unofficial_B.Trigger;

  /* End of Outputs for SubSystem: '<Root>/Triggered Subsystem' */

  /* MATLABSystem: '<S6>/Digital Write2' */
  MW_digitalIO_write(Assignment2_incase_unofficia_DW.obj_o.MW_DIGITALIO_HANDLE,
                     Assignment2_incase_unofficial_B.PACE_CHARGE_CTRL);

  /* MATLABSystem: '<S6>/Digital Write3' */
  MW_digitalIO_write(Assignment2_incase_unofficia_DW.obj_l.MW_DIGITALIO_HANDLE,
                     Assignment2_incase_unofficial_B.PACE_GND_CTRL);

  /* MATLABSystem: '<S6>/PWM Output1' */
  MW_PWM_SetDutyCycle(Assignment2_incase_unofficia_DW.obj_f.MW_PWM_HANDLE,
                      (real_T)Assignment2_incase_unofficial_B.PACING_REF_PWM);

  /* MATLABSystem: '<S6>/Digital Write8' */
  MW_digitalIO_write(Assignment2_incase_unofficia_DW.obj_e.MW_DIGITALIO_HANDLE,
                     Assignment2_incase_unofficial_B.VENT_PACE_CTRL);

  /* MATLABSystem: '<S6>/Digital Write4' */
  MW_digitalIO_write(Assignment2_incase_unofficia_DW.obj_j.MW_DIGITALIO_HANDLE,
                     Assignment2_incase_unofficial_B.ATR_PACE_CTRL);

  /* MATLABSystem: '<S6>/Digital Write5' */
  MW_digitalIO_write(Assignment2_incase_unofficia_DW.obj_b1.MW_DIGITALIO_HANDLE,
                     Assignment2_incase_unofficial_B.ATR_GND_CTRL);

  /* MATLABSystem: '<S6>/Digital Write6' */
  MW_digitalIO_write(Assignment2_incase_unofficia_DW.obj_d.MW_DIGITALIO_HANDLE,
                     Assignment2_incase_unofficial_B.Z_ATR_CTRL);

  /* MATLABSystem: '<S6>/Digital Write7' */
  MW_digitalIO_write(Assignment2_incase_unofficia_DW.obj_n.MW_DIGITALIO_HANDLE,
                     Assignment2_incase_unofficial_B.Z_VENT_CTRL);

  /* MATLABSystem: '<S6>/Digital Write9' */
  MW_digitalIO_write(Assignment2_incase_unofficia_DW.obj_p.MW_DIGITALIO_HANDLE,
                     Assignment2_incase_unofficial_B.VENT_GND_CTRL);

  /* MATLABSystem: '<S6>/Digital Write1' */
  MW_digitalIO_write(Assignment2_incase_unofficia_DW.obj_om.MW_DIGITALIO_HANDLE,
                     Assignment2_incase_unofficial_B.FRONT_END_CTRL);

  /* MATLABSystem: '<S6>/PWM Output2' */
  MW_PWM_SetDutyCycle(Assignment2_incase_unofficia_DW.obj_ib.MW_PWM_HANDLE,
                      (real_T)Assignment2_incase_unofficial_B.ATR_CMP_REF_PWM);

  /* MATLABSystem: '<S6>/PWM Output3' */
  MW_PWM_SetDutyCycle(Assignment2_incase_unofficia_DW.obj_lt.MW_PWM_HANDLE,
                      (real_T)Assignment2_incase_unofficial_B.VENT_CMP_REF_PWM);
}

/* Model initialize function */
void Assignment2_incase_unofficial_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  {
    freedomk64f_AnalogInput_Assig_T *obj;
    freedomk64f_DigitalRead_Assig_T *obj_0;
    freedomk64f_DigitalWrite_Assi_T *obj_1;
    freedomk64f_PWMOutput_Assignm_T *obj_2;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory20' */
    Assignment2_incase_unofficia_DW.Mode_Chamber_Paced =
      Assignment2_incase_unofficial_P.DataStoreMemory20_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory21' */
    Assignment2_incase_unofficia_DW.Mode_Chamber_Sensed =
      Assignment2_incase_unofficial_P.DataStoreMemory21_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory22' */
    Assignment2_incase_unofficia_DW.Lower_Rate_Limit =
      Assignment2_incase_unofficial_P.DataStoreMemory22_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory23' */
    Assignment2_incase_unofficia_DW.AV_Delay =
      Assignment2_incase_unofficial_P.DataStoreMemory23_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory24' */
    Assignment2_incase_unofficia_DW.VRP =
      Assignment2_incase_unofficial_P.DataStoreMemory24_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory25' */
    Assignment2_incase_unofficia_DW.ARP =
      Assignment2_incase_unofficial_P.DataStoreMemory25_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory26' */
    Assignment2_incase_unofficia_DW.Hysterisis_Escape_Interval =
      Assignment2_incase_unofficial_P.DataStoreMemory26_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory27' */
    Assignment2_incase_unofficia_DW.Mode_Response =
      Assignment2_incase_unofficial_P.DataStoreMemory27_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory28' */
    Assignment2_incase_unofficia_DW.Ventricular_Amplitude =
      Assignment2_incase_unofficial_P.DataStoreMemory28_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory29' */
    Assignment2_incase_unofficia_DW.Ventricular_Pulse_Width =
      Assignment2_incase_unofficial_P.DataStoreMemory29_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory30' */
    Assignment2_incase_unofficia_DW.Ventricular_Sensitivity =
      Assignment2_incase_unofficial_P.DataStoreMemory30_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory31' */
    Assignment2_incase_unofficia_DW.Atrial_Amplitude =
      Assignment2_incase_unofficial_P.DataStoreMemory31_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory32' */
    Assignment2_incase_unofficia_DW.Atrial_Pulse_Width =
      Assignment2_incase_unofficial_P.DataStoreMemory32_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory33' */
    Assignment2_incase_unofficia_DW.Atrial_Sensitivity =
      Assignment2_incase_unofficial_P.DataStoreMemory33_InitialValue;

    /* Start for DataStoreMemory: '<Root>/Data Store Memory34' */
    Assignment2_incase_unofficia_DW.Hysterisis =
      Assignment2_incase_unofficial_P.DataStoreMemory34_InitialValue;
    Assignment2_incase_unof_PrevZCX.TriggeredSubsystem_Trig_ZCE = ZERO_ZCSIG;

    /* SystemInitialize for Chart: '<S2>/Chart1' */
    Assignment2_incase_unofficia_DW.HIGH = true;

    /* Start for MATLABSystem: '<Root>/Serial Receive' */
    Assignment2_incase_unofficia_DW.obj.isInitialized = 0;
    Assignment2_incase_unofficia_DW.obj.matlabCodegenIsDeleted = false;
    Assignment2_incase_unofficia_DW.obj.SampleTime =
      Assignment2_incase_unofficial_P.SerialReceive_SampleTime;
    Assignment2_in_SystemCore_setup(&Assignment2_incase_unofficia_DW.obj);

    /* Start for MATLABSystem: '<S3>/ATR_SIGNAL' */
    Assignment2_incase_unofficia_DW.obj_i.matlabCodegenIsDeleted = true;
    Assignment2_incase_unofficia_DW.obj_i.isInitialized = 0;
    Assignment2_incase_unofficia_DW.obj_i.SampleTime = -1.0;
    Assignment2_incase_unofficia_DW.obj_i.matlabCodegenIsDeleted = false;
    Assignment2_incase_unofficia_DW.obj_i.SampleTime =
      Assignment2_incase_unofficial_P.ATR_SIGNAL_SampleTime;
    obj = &Assignment2_incase_unofficia_DW.obj_i;
    Assignment2_incase_unofficia_DW.obj_i.isSetupComplete = false;
    Assignment2_incase_unofficia_DW.obj_i.isInitialized = 1;
    obj->MW_ANALOGIN_HANDLE = MW_AnalogInSingle_Open(16U);
    Assignment2_incase_unofficial_B.trigger_val = MW_ANALOGIN_SOFTWARE_TRIGGER;
    MW_AnalogIn_SetTriggerSource
      (Assignment2_incase_unofficia_DW.obj_i.MW_ANALOGIN_HANDLE,
       Assignment2_incase_unofficial_B.trigger_val, 0U);
    Assignment2_incase_unofficia_DW.obj_i.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/VENT_SIGNAL' */
    Assignment2_incase_unofficia_DW.obj_b4.matlabCodegenIsDeleted = true;
    Assignment2_incase_unofficia_DW.obj_b4.isInitialized = 0;
    Assignment2_incase_unofficia_DW.obj_b4.SampleTime = -1.0;
    Assignment2_incase_unofficia_DW.obj_b4.matlabCodegenIsDeleted = false;
    Assignment2_incase_unofficia_DW.obj_b4.SampleTime =
      Assignment2_incase_unofficial_P.VENT_SIGNAL_SampleTime;
    obj = &Assignment2_incase_unofficia_DW.obj_b4;
    Assignment2_incase_unofficia_DW.obj_b4.isSetupComplete = false;
    Assignment2_incase_unofficia_DW.obj_b4.isInitialized = 1;
    obj->MW_ANALOGIN_HANDLE = MW_AnalogInSingle_Open(17U);
    Assignment2_incase_unofficial_B.trigger_val = MW_ANALOGIN_SOFTWARE_TRIGGER;
    MW_AnalogIn_SetTriggerSource
      (Assignment2_incase_unofficia_DW.obj_b4.MW_ANALOGIN_HANDLE,
       Assignment2_incase_unofficial_B.trigger_val, 0U);
    Assignment2_incase_unofficia_DW.obj_b4.isSetupComplete = true;

    /* Start for MATLABSystem: '<S3>/Serial Transmit1' */
    Assignment2_incase_unofficia_DW.obj_m.isInitialized = 0;
    Assignment2_incase_unofficia_DW.obj_m.matlabCodegenIsDeleted = false;
    Assignment2__SystemCore_setup_a(&Assignment2_incase_unofficia_DW.obj_m);

    /* Start for MATLABSystem: '<S6>/Digital Read' */
    Assignment2_incase_unofficia_DW.obj_h.matlabCodegenIsDeleted = true;
    Assignment2_incase_unofficia_DW.obj_h.isInitialized = 0;
    Assignment2_incase_unofficia_DW.obj_h.SampleTime = -1.0;
    Assignment2_incase_unofficia_DW.obj_h.matlabCodegenIsDeleted = false;
    Assignment2_incase_unofficia_DW.obj_h.SampleTime =
      Assignment2_incase_unofficial_P.DigitalRead_SampleTime;
    obj_0 = &Assignment2_incase_unofficia_DW.obj_h;
    Assignment2_incase_unofficia_DW.obj_h.isSetupComplete = false;
    Assignment2_incase_unofficia_DW.obj_h.isInitialized = 1;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(0U, 0);
    Assignment2_incase_unofficia_DW.obj_h.isSetupComplete = true;

    /* Start for MATLABSystem: '<S6>/Digital Read1' */
    Assignment2_incase_unofficia_DW.obj_b.matlabCodegenIsDeleted = true;
    Assignment2_incase_unofficia_DW.obj_b.isInitialized = 0;
    Assignment2_incase_unofficia_DW.obj_b.SampleTime = -1.0;
    Assignment2_incase_unofficia_DW.obj_b.matlabCodegenIsDeleted = false;
    Assignment2_incase_unofficia_DW.obj_b.SampleTime =
      Assignment2_incase_unofficial_P.DigitalRead1_SampleTime;
    obj_0 = &Assignment2_incase_unofficia_DW.obj_b;
    Assignment2_incase_unofficia_DW.obj_b.isSetupComplete = false;
    Assignment2_incase_unofficia_DW.obj_b.isInitialized = 1;
    obj_0->MW_DIGITALIO_HANDLE = MW_digitalIO_open(1U, 0);
    Assignment2_incase_unofficia_DW.obj_b.isSetupComplete = true;

    /* Start for MATLABSystem: '<S6>/Digital Write2' */
    Assignment2_incase_unofficia_DW.obj_o.matlabCodegenIsDeleted = true;
    Assignment2_incase_unofficia_DW.obj_o.isInitialized = 0;
    Assignment2_incase_unofficia_DW.obj_o.matlabCodegenIsDeleted = false;
    obj_1 = &Assignment2_incase_unofficia_DW.obj_o;
    Assignment2_incase_unofficia_DW.obj_o.isSetupComplete = false;
    Assignment2_incase_unofficia_DW.obj_o.isInitialized = 1;
    obj_1->MW_DIGITALIO_HANDLE = MW_digitalIO_open(2U, 1);
    Assignment2_incase_unofficia_DW.obj_o.isSetupComplete = true;

    /* Start for MATLABSystem: '<S6>/Digital Write3' */
    Assignment2_incase_unofficia_DW.obj_l.matlabCodegenIsDeleted = true;
    Assignment2_incase_unofficia_DW.obj_l.isInitialized = 0;
    Assignment2_incase_unofficia_DW.obj_l.matlabCodegenIsDeleted = false;
    obj_1 = &Assignment2_incase_unofficia_DW.obj_l;
    Assignment2_incase_unofficia_DW.obj_l.isSetupComplete = false;
    Assignment2_incase_unofficia_DW.obj_l.isInitialized = 1;
    obj_1->MW_DIGITALIO_HANDLE = MW_digitalIO_open(10U, 1);
    Assignment2_incase_unofficia_DW.obj_l.isSetupComplete = true;

    /* Start for MATLABSystem: '<S6>/PWM Output1' */
    Assignment2_incase_unofficia_DW.obj_f.matlabCodegenIsDeleted = true;
    Assignment2_incase_unofficia_DW.obj_f.isInitialized = 0;
    Assignment2_incase_unofficia_DW.obj_f.matlabCodegenIsDeleted = false;
    obj_2 = &Assignment2_incase_unofficia_DW.obj_f;
    Assignment2_incase_unofficia_DW.obj_f.isSetupComplete = false;
    Assignment2_incase_unofficia_DW.obj_f.isInitialized = 1;
    obj_2->MW_PWM_HANDLE = MW_PWM_Open(5U, 2000.0, 0.0);
    MW_PWM_Start(Assignment2_incase_unofficia_DW.obj_f.MW_PWM_HANDLE);
    Assignment2_incase_unofficia_DW.obj_f.isSetupComplete = true;

    /* Start for MATLABSystem: '<S6>/Digital Write8' */
    Assignment2_incase_unofficia_DW.obj_e.matlabCodegenIsDeleted = true;
    Assignment2_incase_unofficia_DW.obj_e.isInitialized = 0;
    Assignment2_incase_unofficia_DW.obj_e.matlabCodegenIsDeleted = false;
    obj_1 = &Assignment2_incase_unofficia_DW.obj_e;
    Assignment2_incase_unofficia_DW.obj_e.isSetupComplete = false;
    Assignment2_incase_unofficia_DW.obj_e.isInitialized = 1;
    obj_1->MW_DIGITALIO_HANDLE = MW_digitalIO_open(9U, 1);
    Assignment2_incase_unofficia_DW.obj_e.isSetupComplete = true;

    /* Start for MATLABSystem: '<S6>/Digital Write4' */
    Assignment2_incase_unofficia_DW.obj_j.matlabCodegenIsDeleted = true;
    Assignment2_incase_unofficia_DW.obj_j.isInitialized = 0;
    Assignment2_incase_unofficia_DW.obj_j.matlabCodegenIsDeleted = false;
    obj_1 = &Assignment2_incase_unofficia_DW.obj_j;
    Assignment2_incase_unofficia_DW.obj_j.isSetupComplete = false;
    Assignment2_incase_unofficia_DW.obj_j.isInitialized = 1;
    obj_1->MW_DIGITALIO_HANDLE = MW_digitalIO_open(8U, 1);
    Assignment2_incase_unofficia_DW.obj_j.isSetupComplete = true;

    /* Start for MATLABSystem: '<S6>/Digital Write5' */
    Assignment2_incase_unofficia_DW.obj_b1.matlabCodegenIsDeleted = true;
    Assignment2_incase_unofficia_DW.obj_b1.isInitialized = 0;
    Assignment2_incase_unofficia_DW.obj_b1.matlabCodegenIsDeleted = false;
    obj_1 = &Assignment2_incase_unofficia_DW.obj_b1;
    Assignment2_incase_unofficia_DW.obj_b1.isSetupComplete = false;
    Assignment2_incase_unofficia_DW.obj_b1.isInitialized = 1;
    obj_1->MW_DIGITALIO_HANDLE = MW_digitalIO_open(11U, 1);
    Assignment2_incase_unofficia_DW.obj_b1.isSetupComplete = true;

    /* Start for MATLABSystem: '<S6>/Digital Write6' */
    Assignment2_incase_unofficia_DW.obj_d.matlabCodegenIsDeleted = true;
    Assignment2_incase_unofficia_DW.obj_d.isInitialized = 0;
    Assignment2_incase_unofficia_DW.obj_d.matlabCodegenIsDeleted = false;
    obj_1 = &Assignment2_incase_unofficia_DW.obj_d;
    Assignment2_incase_unofficia_DW.obj_d.isSetupComplete = false;
    Assignment2_incase_unofficia_DW.obj_d.isInitialized = 1;
    obj_1->MW_DIGITALIO_HANDLE = MW_digitalIO_open(4U, 1);
    Assignment2_incase_unofficia_DW.obj_d.isSetupComplete = true;

    /* Start for MATLABSystem: '<S6>/Digital Write7' */
    Assignment2_incase_unofficia_DW.obj_n.matlabCodegenIsDeleted = true;
    Assignment2_incase_unofficia_DW.obj_n.isInitialized = 0;
    Assignment2_incase_unofficia_DW.obj_n.matlabCodegenIsDeleted = false;
    obj_1 = &Assignment2_incase_unofficia_DW.obj_n;
    Assignment2_incase_unofficia_DW.obj_n.isSetupComplete = false;
    Assignment2_incase_unofficia_DW.obj_n.isInitialized = 1;
    obj_1->MW_DIGITALIO_HANDLE = MW_digitalIO_open(7U, 1);
    Assignment2_incase_unofficia_DW.obj_n.isSetupComplete = true;

    /* Start for MATLABSystem: '<S6>/Digital Write9' */
    Assignment2_incase_unofficia_DW.obj_p.matlabCodegenIsDeleted = true;
    Assignment2_incase_unofficia_DW.obj_p.isInitialized = 0;
    Assignment2_incase_unofficia_DW.obj_p.matlabCodegenIsDeleted = false;
    obj_1 = &Assignment2_incase_unofficia_DW.obj_p;
    Assignment2_incase_unofficia_DW.obj_p.isSetupComplete = false;
    Assignment2_incase_unofficia_DW.obj_p.isInitialized = 1;
    obj_1->MW_DIGITALIO_HANDLE = MW_digitalIO_open(12U, 1);
    Assignment2_incase_unofficia_DW.obj_p.isSetupComplete = true;

    /* Start for MATLABSystem: '<S6>/Digital Write1' */
    Assignment2_incase_unofficia_DW.obj_om.matlabCodegenIsDeleted = true;
    Assignment2_incase_unofficia_DW.obj_om.isInitialized = 0;
    Assignment2_incase_unofficia_DW.obj_om.matlabCodegenIsDeleted = false;
    obj_1 = &Assignment2_incase_unofficia_DW.obj_om;
    Assignment2_incase_unofficia_DW.obj_om.isSetupComplete = false;
    Assignment2_incase_unofficia_DW.obj_om.isInitialized = 1;
    obj_1->MW_DIGITALIO_HANDLE = MW_digitalIO_open(13U, 1);
    Assignment2_incase_unofficia_DW.obj_om.isSetupComplete = true;

    /* Start for MATLABSystem: '<S6>/PWM Output2' */
    Assignment2_incase_unofficia_DW.obj_ib.matlabCodegenIsDeleted = true;
    Assignment2_incase_unofficia_DW.obj_ib.isInitialized = 0;
    Assignment2_incase_unofficia_DW.obj_ib.matlabCodegenIsDeleted = false;
    obj_2 = &Assignment2_incase_unofficia_DW.obj_ib;
    Assignment2_incase_unofficia_DW.obj_ib.isSetupComplete = false;
    Assignment2_incase_unofficia_DW.obj_ib.isInitialized = 1;
    obj_2->MW_PWM_HANDLE = MW_PWM_Open(6U, 2000.0, 0.0);
    MW_PWM_Start(Assignment2_incase_unofficia_DW.obj_ib.MW_PWM_HANDLE);
    Assignment2_incase_unofficia_DW.obj_ib.isSetupComplete = true;

    /* Start for MATLABSystem: '<S6>/PWM Output3' */
    Assignment2_incase_unofficia_DW.obj_lt.matlabCodegenIsDeleted = true;
    Assignment2_incase_unofficia_DW.obj_lt.isInitialized = 0;
    Assignment2_incase_unofficia_DW.obj_lt.matlabCodegenIsDeleted = false;
    obj_2 = &Assignment2_incase_unofficia_DW.obj_lt;
    Assignment2_incase_unofficia_DW.obj_lt.isSetupComplete = false;
    Assignment2_incase_unofficia_DW.obj_lt.isInitialized = 1;
    obj_2->MW_PWM_HANDLE = MW_PWM_Open(3U, 2000.0, 0.0);
    MW_PWM_Start(Assignment2_incase_unofficia_DW.obj_lt.MW_PWM_HANDLE);
    Assignment2_incase_unofficia_DW.obj_lt.isSetupComplete = true;
  }
}

/* Model terminate function */
void Assignment2_incase_unofficial_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Serial Receive' */
  matlabCodegenHandle_matlabCodeg(&Assignment2_incase_unofficia_DW.obj);

  /* Terminate for MATLABSystem: '<S3>/ATR_SIGNAL' */
  Assignment2_i_matlabCodegenHa_f(&Assignment2_incase_unofficia_DW.obj_i);

  /* Terminate for MATLABSystem: '<S3>/VENT_SIGNAL' */
  Assignment2_i_matlabCodegenHa_f(&Assignment2_incase_unofficia_DW.obj_b4);

  /* Terminate for MATLABSystem: '<S3>/Serial Transmit1' */
  matlabCodegenHa_aectt34bsusdnod(&Assignment2_incase_unofficia_DW.obj_m);

  /* Terminate for MATLABSystem: '<S6>/Digital Read' */
  matlabCodegenHand_aectt34bsusdn(&Assignment2_incase_unofficia_DW.obj_h);

  /* Terminate for MATLABSystem: '<S6>/Digital Read1' */
  matlabCodegenHand_aectt34bsusdn(&Assignment2_incase_unofficia_DW.obj_b);

  /* Terminate for MATLABSystem: '<S6>/Digital Write2' */
  matlabCodegenHandle_matlabC_aec(&Assignment2_incase_unofficia_DW.obj_o);

  /* Terminate for MATLABSystem: '<S6>/Digital Write3' */
  matlabCodegenHandle_matlabC_aec(&Assignment2_incase_unofficia_DW.obj_l);

  /* Terminate for MATLABSystem: '<S6>/PWM Output1' */
  matlabCodegenHandle_matlabCod_a(&Assignment2_incase_unofficia_DW.obj_f);

  /* Terminate for MATLABSystem: '<S6>/Digital Write8' */
  matlabCodegenHandle_matlabC_aec(&Assignment2_incase_unofficia_DW.obj_e);

  /* Terminate for MATLABSystem: '<S6>/Digital Write4' */
  matlabCodegenHandle_matlabC_aec(&Assignment2_incase_unofficia_DW.obj_j);

  /* Terminate for MATLABSystem: '<S6>/Digital Write5' */
  matlabCodegenHandle_matlabC_aec(&Assignment2_incase_unofficia_DW.obj_b1);

  /* Terminate for MATLABSystem: '<S6>/Digital Write6' */
  matlabCodegenHandle_matlabC_aec(&Assignment2_incase_unofficia_DW.obj_d);

  /* Terminate for MATLABSystem: '<S6>/Digital Write7' */
  matlabCodegenHandle_matlabC_aec(&Assignment2_incase_unofficia_DW.obj_n);

  /* Terminate for MATLABSystem: '<S6>/Digital Write9' */
  matlabCodegenHandle_matlabC_aec(&Assignment2_incase_unofficia_DW.obj_p);

  /* Terminate for MATLABSystem: '<S6>/Digital Write1' */
  matlabCodegenHandle_matlabC_aec(&Assignment2_incase_unofficia_DW.obj_om);

  /* Terminate for MATLABSystem: '<S6>/PWM Output2' */
  matlabCodegenHandle_matlabCod_a(&Assignment2_incase_unofficia_DW.obj_ib);

  /* Terminate for MATLABSystem: '<S6>/PWM Output3' */
  matlabCodegenHandle_matlabCod_a(&Assignment2_incase_unofficia_DW.obj_lt);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

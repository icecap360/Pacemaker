/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Pacing.c
 *
 * Code generated for Simulink model 'Pacing'.
 *
 * Model version                  : 1.72
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Sun Oct 25 01:14:25 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "Pacing.h"
#include "Pacing_private.h"

/* Named constants for Chart: '<Root>/Chart' */
#define IN_Discharching_C21_and_Chargin ((uint8_T)2U)
#define Pacing_IN_AV_Pacing_state_2    ((uint8_T)1U)

/* Block signals (default storage) */
B_Pacing_T Pacing_B;

/* Block states (default storage) */
DW_Pacing_T Pacing_DW;

/* Real-time model */
RT_MODEL_Pacing_T Pacing_M_;
RT_MODEL_Pacing_T *const Pacing_M = &Pacing_M_;

/* Forward declaration for local functions */
static void enter_atomic_Discharching_C21_a(void);
static void Pacing_SystemCore_release_l(const freedomk64f_DigitalWrite_Paci_T
  *obj);
static void Pacing_SystemCore_delete_l(const freedomk64f_DigitalWrite_Paci_T
  *obj);
static void matlabCodegenHandle_matlabCod_l(freedomk64f_DigitalWrite_Paci_T *obj);
static void Pacing_SystemCore_release(const freedomk64f_PWMOutput_Pacing_T *obj);
static void Pacing_SystemCore_delete(const freedomk64f_PWMOutput_Pacing_T *obj);
static void matlabCodegenHandle_matlabCodeg(freedomk64f_PWMOutput_Pacing_T *obj);

/* Function for Chart: '<Root>/Chart' */
static void enter_atomic_Discharching_C21_a(void)
{
  Pacing_B.LED_RED = Pacing_DW.HIGH;

  /* Constant: '<Root>/Constant25' */
  Pacing_B.PACING_REF_PWM_D5 = Pacing_P.Constant25_Value * 20.0;
  Pacing_B.PACE_CHARGE_CTRL_D2 = Pacing_DW.HIGH;
  Pacing_B.PACE_GND_CTRL_D10 = Pacing_DW.HIGH;
  Pacing_B.VENT_PACE_CTRL_D9 = Pacing_DW.LOW;
  Pacing_B.Z_ATR_CTRL_D4 = Pacing_DW.LOW;
  Pacing_B.Z_VENT_CTRL_D7 = Pacing_DW.LOW;
  Pacing_B.ATR_PACE_CTRL_D8 = Pacing_DW.LOW;

  /* Constant: '<Root>/Constant28' */
  if (Pacing_P.Constant28_Value == 1.0) {
    Pacing_B.VENT_GND_CTRL_D12 = Pacing_DW.HIGH;
  } else {
    Pacing_B.ATR_GND_CTRL_D11 = Pacing_DW.HIGH;
    Pacing_B.VENT_GND_CTRL_D12 = Pacing_DW.LOW;
  }

  /* End of Constant: '<Root>/Constant28' */

  /* Constant: '<Root>/Constant27' */
  Pacing_DW.Rate = 1500.0 - Pacing_P.Constant27_Value;
}

static void Pacing_SystemCore_release_l(const freedomk64f_DigitalWrite_Paci_T
  *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_digitalIO_close(obj->MW_DIGITALIO_HANDLE);
  }
}

static void Pacing_SystemCore_delete_l(const freedomk64f_DigitalWrite_Paci_T
  *obj)
{
  Pacing_SystemCore_release_l(obj);
}

static void matlabCodegenHandle_matlabCod_l(freedomk64f_DigitalWrite_Paci_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    Pacing_SystemCore_delete_l(obj);
  }
}

static void Pacing_SystemCore_release(const freedomk64f_PWMOutput_Pacing_T *obj)
{
  if ((obj->isInitialized == 1) && obj->isSetupComplete) {
    MW_PWM_Stop(obj->MW_PWM_HANDLE);
    MW_PWM_Close(obj->MW_PWM_HANDLE);
  }
}

static void Pacing_SystemCore_delete(const freedomk64f_PWMOutput_Pacing_T *obj)
{
  Pacing_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCodeg(freedomk64f_PWMOutput_Pacing_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    Pacing_SystemCore_delete(obj);
  }
}

/* Model step function */
void Pacing_step(void)
{
  /* Chart: '<Root>/Chart' incorporates:
   *  Constant: '<Root>/Constant27'
   *  Constant: '<Root>/Constant28'
   */
  if (Pacing_DW.temporalCounter_i1 < MAX_uint32_T) {
    Pacing_DW.temporalCounter_i1++;
  }

  if (Pacing_DW.is_active_c3_Pacing == 0U) {
    Pacing_DW.is_active_c3_Pacing = 1U;
    Pacing_DW.is_c3_Pacing = IN_Discharching_C21_and_Chargin;
    Pacing_DW.temporalCounter_i1 = 0U;
    enter_atomic_Discharching_C21_a();
  } else if (Pacing_DW.is_c3_Pacing == Pacing_IN_AV_Pacing_state_2) {
    if (Pacing_DW.temporalCounter_i1 >= (uint32_T)ceil(Pacing_P.Constant27_Value))
    {
      Pacing_DW.is_c3_Pacing = IN_Discharching_C21_and_Chargin;
      Pacing_DW.temporalCounter_i1 = 0U;
      enter_atomic_Discharching_C21_a();
    }
  } else {
    /* case IN_Discharching_C21_and_Charging_C22: */
    if (Pacing_DW.temporalCounter_i1 >= 300U) {
      Pacing_DW.is_c3_Pacing = Pacing_IN_AV_Pacing_state_2;
      Pacing_DW.temporalCounter_i1 = 0U;
      Pacing_B.LED_RED = Pacing_DW.LOW;
      Pacing_B.PACE_CHARGE_CTRL_D2 = Pacing_DW.LOW;
      Pacing_B.PACE_GND_CTRL_D10 = Pacing_DW.HIGH;
      Pacing_B.ATR_PACE_CTRL_D8 = Pacing_DW.LOW;
      Pacing_B.ATR_GND_CTRL_D11 = Pacing_DW.LOW;
      Pacing_B.Z_ATR_CTRL_D4 = Pacing_DW.LOW;
      Pacing_B.Z_VENT_CTRL_D7 = Pacing_DW.LOW;
      Pacing_B.VENT_GND_CTRL_D12 = Pacing_DW.LOW;
      if (Pacing_P.Constant28_Value == 1.0) {
        Pacing_B.VENT_PACE_CTRL_D9 = Pacing_DW.HIGH;
      } else {
        Pacing_B.VENT_PACE_CTRL_D9 = Pacing_DW.LOW;
        Pacing_B.ATR_PACE_CTRL_D8 = Pacing_DW.HIGH;
      }
    }
  }

  /* End of Chart: '<Root>/Chart' */

  /* MATLABSystem: '<Root>/Digital Write24' */
  MW_digitalIO_write(Pacing_DW.obj.MW_DIGITALIO_HANDLE,
                     Pacing_B.PACE_CHARGE_CTRL_D2);

  /* MATLABSystem: '<Root>/Digital Write25' */
  MW_digitalIO_write(Pacing_DW.obj_l.MW_DIGITALIO_HANDLE,
                     Pacing_B.PACE_GND_CTRL_D10);

  /* MATLABSystem: '<Root>/Digital Write26' */
  MW_digitalIO_write(Pacing_DW.obj_n.MW_DIGITALIO_HANDLE,
                     Pacing_B.ATR_PACE_CTRL_D8);

  /* MATLABSystem: '<Root>/Digital Write27' */
  MW_digitalIO_write(Pacing_DW.obj_f.MW_DIGITALIO_HANDLE,
                     Pacing_B.ATR_GND_CTRL_D11);

  /* MATLABSystem: '<Root>/Digital Write28' */
  MW_digitalIO_write(Pacing_DW.obj_e.MW_DIGITALIO_HANDLE, Pacing_B.Z_ATR_CTRL_D4);

  /* MATLABSystem: '<Root>/Digital Write29' */
  MW_digitalIO_write(Pacing_DW.obj_ny.MW_DIGITALIO_HANDLE,
                     Pacing_B.Z_VENT_CTRL_D7);

  /* MATLABSystem: '<Root>/Digital Write30' */
  MW_digitalIO_write(Pacing_DW.obj_g.MW_DIGITALIO_HANDLE,
                     Pacing_B.VENT_PACE_CTRL_D9);

  /* MATLABSystem: '<Root>/Digital Write31' */
  MW_digitalIO_write(Pacing_DW.obj_nh.MW_DIGITALIO_HANDLE,
                     Pacing_B.VENT_GND_CTRL_D12);

  /* MATLABSystem: '<Root>/Digital Write32' */
  MW_digitalIO_write(Pacing_DW.obj_o.MW_DIGITALIO_HANDLE, Pacing_B.LED_RED);

  /* MATLABSystem: '<Root>/PWM Output' */
  MW_PWM_SetDutyCycle(Pacing_DW.obj_d.MW_PWM_HANDLE, Pacing_B.PACING_REF_PWM_D5);
}

/* Model initialize function */
void Pacing_initialize(void)
{
  {
    freedomk64f_DigitalWrite_Paci_T *obj;
    freedomk64f_PWMOutput_Pacing_T *obj_0;

    /* SystemInitialize for Chart: '<Root>/Chart' */
    Pacing_DW.HIGH = true;

    /* Start for MATLABSystem: '<Root>/Digital Write24' */
    Pacing_DW.obj.matlabCodegenIsDeleted = true;
    Pacing_DW.obj.isInitialized = 0;
    Pacing_DW.obj.matlabCodegenIsDeleted = false;
    obj = &Pacing_DW.obj;
    Pacing_DW.obj.isSetupComplete = false;
    Pacing_DW.obj.isInitialized = 1;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(2U, 1);
    Pacing_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Write25' */
    Pacing_DW.obj_l.matlabCodegenIsDeleted = true;
    Pacing_DW.obj_l.isInitialized = 0;
    Pacing_DW.obj_l.matlabCodegenIsDeleted = false;
    obj = &Pacing_DW.obj_l;
    Pacing_DW.obj_l.isSetupComplete = false;
    Pacing_DW.obj_l.isInitialized = 1;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(10U, 1);
    Pacing_DW.obj_l.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Write26' */
    Pacing_DW.obj_n.matlabCodegenIsDeleted = true;
    Pacing_DW.obj_n.isInitialized = 0;
    Pacing_DW.obj_n.matlabCodegenIsDeleted = false;
    obj = &Pacing_DW.obj_n;
    Pacing_DW.obj_n.isSetupComplete = false;
    Pacing_DW.obj_n.isInitialized = 1;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(8U, 1);
    Pacing_DW.obj_n.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Write27' */
    Pacing_DW.obj_f.matlabCodegenIsDeleted = true;
    Pacing_DW.obj_f.isInitialized = 0;
    Pacing_DW.obj_f.matlabCodegenIsDeleted = false;
    obj = &Pacing_DW.obj_f;
    Pacing_DW.obj_f.isSetupComplete = false;
    Pacing_DW.obj_f.isInitialized = 1;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(11U, 1);
    Pacing_DW.obj_f.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Write28' */
    Pacing_DW.obj_e.matlabCodegenIsDeleted = true;
    Pacing_DW.obj_e.isInitialized = 0;
    Pacing_DW.obj_e.matlabCodegenIsDeleted = false;
    obj = &Pacing_DW.obj_e;
    Pacing_DW.obj_e.isSetupComplete = false;
    Pacing_DW.obj_e.isInitialized = 1;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(4U, 1);
    Pacing_DW.obj_e.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Write29' */
    Pacing_DW.obj_ny.matlabCodegenIsDeleted = true;
    Pacing_DW.obj_ny.isInitialized = 0;
    Pacing_DW.obj_ny.matlabCodegenIsDeleted = false;
    obj = &Pacing_DW.obj_ny;
    Pacing_DW.obj_ny.isSetupComplete = false;
    Pacing_DW.obj_ny.isInitialized = 1;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(7U, 1);
    Pacing_DW.obj_ny.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Write30' */
    Pacing_DW.obj_g.matlabCodegenIsDeleted = true;
    Pacing_DW.obj_g.isInitialized = 0;
    Pacing_DW.obj_g.matlabCodegenIsDeleted = false;
    obj = &Pacing_DW.obj_g;
    Pacing_DW.obj_g.isSetupComplete = false;
    Pacing_DW.obj_g.isInitialized = 1;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(9U, 1);
    Pacing_DW.obj_g.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Write31' */
    Pacing_DW.obj_nh.matlabCodegenIsDeleted = true;
    Pacing_DW.obj_nh.isInitialized = 0;
    Pacing_DW.obj_nh.matlabCodegenIsDeleted = false;
    obj = &Pacing_DW.obj_nh;
    Pacing_DW.obj_nh.isSetupComplete = false;
    Pacing_DW.obj_nh.isInitialized = 1;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(12U, 1);
    Pacing_DW.obj_nh.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Write32' */
    Pacing_DW.obj_o.matlabCodegenIsDeleted = true;
    Pacing_DW.obj_o.isInitialized = 0;
    Pacing_DW.obj_o.matlabCodegenIsDeleted = false;
    obj = &Pacing_DW.obj_o;
    Pacing_DW.obj_o.isSetupComplete = false;
    Pacing_DW.obj_o.isInitialized = 1;
    obj->MW_DIGITALIO_HANDLE = MW_digitalIO_open(44U, 1);
    Pacing_DW.obj_o.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/PWM Output' */
    Pacing_DW.obj_d.matlabCodegenIsDeleted = true;
    Pacing_DW.obj_d.isInitialized = 0;
    Pacing_DW.obj_d.matlabCodegenIsDeleted = false;
    obj_0 = &Pacing_DW.obj_d;
    Pacing_DW.obj_d.isSetupComplete = false;
    Pacing_DW.obj_d.isInitialized = 1;
    obj_0->MW_PWM_HANDLE = MW_PWM_Open(5U, 2000.0, 50.0);
    MW_PWM_Start(Pacing_DW.obj_d.MW_PWM_HANDLE);
    Pacing_DW.obj_d.isSetupComplete = true;
  }
}

/* Model terminate function */
void Pacing_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Digital Write24' */
  matlabCodegenHandle_matlabCod_l(&Pacing_DW.obj);

  /* Terminate for MATLABSystem: '<Root>/Digital Write25' */
  matlabCodegenHandle_matlabCod_l(&Pacing_DW.obj_l);

  /* Terminate for MATLABSystem: '<Root>/Digital Write26' */
  matlabCodegenHandle_matlabCod_l(&Pacing_DW.obj_n);

  /* Terminate for MATLABSystem: '<Root>/Digital Write27' */
  matlabCodegenHandle_matlabCod_l(&Pacing_DW.obj_f);

  /* Terminate for MATLABSystem: '<Root>/Digital Write28' */
  matlabCodegenHandle_matlabCod_l(&Pacing_DW.obj_e);

  /* Terminate for MATLABSystem: '<Root>/Digital Write29' */
  matlabCodegenHandle_matlabCod_l(&Pacing_DW.obj_ny);

  /* Terminate for MATLABSystem: '<Root>/Digital Write30' */
  matlabCodegenHandle_matlabCod_l(&Pacing_DW.obj_g);

  /* Terminate for MATLABSystem: '<Root>/Digital Write31' */
  matlabCodegenHandle_matlabCod_l(&Pacing_DW.obj_nh);

  /* Terminate for MATLABSystem: '<Root>/Digital Write32' */
  matlabCodegenHandle_matlabCod_l(&Pacing_DW.obj_o);

  /* Terminate for MATLABSystem: '<Root>/PWM Output' */
  matlabCodegenHandle_matlabCodeg(&Pacing_DW.obj_d);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

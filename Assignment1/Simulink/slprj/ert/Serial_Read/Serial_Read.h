/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Serial_Read.h
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

#ifndef RTW_HEADER_Serial_Read_h_
#define RTW_HEADER_Serial_Read_h_
#include <string.h>
#include <math.h>
#ifndef Serial_Read_COMMON_INCLUDES_
# define Serial_Read_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "MW_SCI.h"
#include "MW_AnalogIn.h"
#endif                                 /* Serial_Read_COMMON_INCLUDES_ */

#include "Serial_Read_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Block signals for model 'Serial_Read' */
typedef struct {
  uint16_T DataTypeConversion2;        /* '<Root>/Data Type Conversion2' */
  uint16_T DataTypeConversion3;        /* '<Root>/Data Type Conversion3' */
  uint8_T BytePack5[2];                /* '<Root>/Byte Pack5' */
  uint8_T BytePack6[2];                /* '<Root>/Byte Pack6' */
  uint8_T BytePack1[2];                /* '<Root>/Byte Pack1' */
  uint8_T BytePack7[2];                /* '<Root>/Byte Pack7' */
  uint8_T BytePack4[2];                /* '<Root>/Byte Pack4' */
  uint8_T BytePack30[2];               /* '<Root>/Byte Pack30' */
  uint8_T BytePack31[2];               /* '<Root>/Byte Pack31' */
} B_Serial_Read_c_T;

/* Block states (default storage) for model 'Serial_Read' */
typedef struct {
  freedomk64f_AnalogInput_Seria_T obj; /* '<Root>/ATR_SIGNAL' */
  freedomk64f_AnalogInput_Seria_T obj_d;/* '<Root>/VENT_SIGNAL' */
  freedomk64f_SCIWrite_Serial_R_T obj_e;/* '<Root>/Serial Transmit1' */
  boolean_T objisempty;                /* '<Root>/ATR_SIGNAL' */
  boolean_T objisempty_a;              /* '<Root>/VENT_SIGNAL' */
  boolean_T objisempty_g;              /* '<Root>/Serial Transmit1' */
} DW_Serial_Read_f_T;

/* Parameters (default storage) */
struct P_Serial_Read_T_ {
  real_T VENT_SIGNAL_SampleTime;       /* Expression: SampleTime
                                        * Referenced by: '<Root>/VENT_SIGNAL'
                                        */
  real_T ATR_SIGNAL_SampleTime;        /* Expression: SampleTime
                                        * Referenced by: '<Root>/ATR_SIGNAL'
                                        */
  real_T Gain_Gain;                    /* Expression: 10000
                                        * Referenced by: '<Root>/Gain'
                                        */
  real_T Gain1_Gain;                   /* Expression: 10000
                                        * Referenced by: '<Root>/Gain1'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_Serial_Read_T {
  const char_T **errorStatus;
};

typedef struct {
  B_Serial_Read_c_T rtb;
  DW_Serial_Read_f_T rtdw;
  RT_MODEL_Serial_Read_T rtm;
} MdlrefDW_Serial_Read_T;

/* Model reference registration function */
extern void Serial_Read_initialize(const char_T **rt_errorStatus,
  RT_MODEL_Serial_Read_T *const Serial_Read_M);
extern void Serial_Read_Init(DW_Serial_Read_f_T *localDW);
extern void Serial_Read(const uint8_T *rtu_Mode_Chamber_Paced, const uint8_T
  *rtu_Mode_Chamber_Sensed, const uint8_T *rtu_Mode_Response, const uint8_T
  *rtu_Ventricular_Amplitude, const uint8_T *rtu_Ventricular_Pulse_Width, const
  uint8_T *rtu_Ventricular_Sensitivity, const uint8_T *rtu_Atrial_Amplitude,
  const uint8_T *rtu_Atrial_Pulse_Width, const uint8_T *rtu_Atrial_Sensitivity,
  const uint8_T *rtu_Hysterisis, const uint16_T *rtu_Lower_Rate_Limit, const
  uint16_T *rtu_AV_Delay, const uint16_T *rtu_VRP, const uint16_T *rtu_ARP,
  const uint16_T *rtu_HysterisisEscapeInterval, const uint8_T
  *rtu_Max_Sensor_Rate, const uint8_T *rtu_Mode_Adaptivity, const uint8_T
  *rtu_Reaction_Time, const uint8_T *rtu_Response_Factor, const uint8_T
  *rtu_Recovery_Time, const uint8_T *rtu_Param_Number, B_Serial_Read_c_T *localB,
  DW_Serial_Read_f_T *localDW);
extern void Serial_Read_Term(DW_Serial_Read_f_T *localDW);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Serial_Read'
 */
#endif                                 /* RTW_HEADER_Serial_Read_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

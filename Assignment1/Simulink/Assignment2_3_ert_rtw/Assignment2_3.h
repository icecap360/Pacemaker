/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Assignment2_3.h
 *
 * Code generated for Simulink model 'Assignment2_3'.
 *
 * Model version                  : 1.498
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Thu Dec  3 18:12:06 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: ARM Compatible->ARM Cortex
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Assignment2_3_h_
#define RTW_HEADER_Assignment2_3_h_
#include <string.h>
#include <stddef.h>
#ifndef Assignment2_3_COMMON_INCLUDES_
# define Assignment2_3_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "MW_digitalIO.h"
#include "MW_SCI.h"
#endif                                 /* Assignment2_3_COMMON_INCLUDES_ */

#include "Assignment2_3_types.h"

/* Child system includes */
#include "Serial_Read.h"
#include "PTHS.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetErrorStatusPointer
# define rtmGetErrorStatusPointer(rtm) ((const char_T **)(&((rtm)->errorStatus)))
#endif

/* Block signals (default storage) */
typedef struct {
  uint8_T RxData[27];
  uint32_T TxPinLoc;
  uint32_T SCIModuleLoc;
  MW_SCI_StopBits_Type StopBitsValue;
  uint16_T Lower_Rate_Limit;           /* '<Root>/Chart' */
  uint16_T AV_Delay;                   /* '<Root>/Chart' */
  uint16_T VRP;                        /* '<Root>/Chart' */
  uint16_T ARP;                        /* '<Root>/Chart' */
  uint16_T Hysterisis_Escape_Interval; /* '<Root>/Chart' */
  uint8_T Mode_Chamber_Paced;          /* '<Root>/Chart' */
  uint8_T Mode_Chamber_Sensed;         /* '<Root>/Chart' */
  uint8_T Mode_Response;               /* '<Root>/Chart' */
  uint8_T Ventricular_Amplitude;       /* '<Root>/Chart' */
  uint8_T Ventricular_Pulse_Width;     /* '<Root>/Chart' */
  uint8_T Ventricular_Sensitivity;     /* '<Root>/Chart' */
  uint8_T Atrial_Amplitude;            /* '<Root>/Chart' */
  uint8_T Atrial_Pulse_Width;          /* '<Root>/Chart' */
  uint8_T Atrial_Sensitivity;          /* '<Root>/Chart' */
  uint8_T Hysterisis;                  /* '<Root>/Chart' */
  uint8_T Param_Number;                /* '<Root>/Chart' */
  uint8_T Max_Sensor_Rate;             /* '<Root>/Chart' */
  uint8_T Mode_Adaptivity;             /* '<Root>/Chart' */
  uint8_T Reaction_Time;               /* '<Root>/Chart' */
  uint8_T Response_Factor;             /* '<Root>/Chart' */
  uint8_T Recovery_Time;               /* '<Root>/Chart' */
  boolean_T Trigger;                   /* '<Root>/Model1' */
} B_Assignment2_3_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  freedomk64f_SCIRead_Assignmen_T obj; /* '<Root>/Serial Receive' */
  freedomk64f_DigitalWrite_Assi_T obj_e;/* '<Root>/Digital Write' */
  real_T uint16_bytes;                 /* '<Root>/Chart' */
  real_T uint8_bytes;                  /* '<Root>/Chart' */
  uint16_T Lower_Rate_Limit;           /* '<Root>/Data Store Memory22' */
  uint16_T AV_Delay;                   /* '<Root>/Data Store Memory23' */
  uint16_T VRP;                        /* '<Root>/Data Store Memory24' */
  uint16_T ARP;                        /* '<Root>/Data Store Memory25' */
  uint16_T Hysterisis_Escape_Interval; /* '<Root>/Data Store Memory26' */
  uint16_T Ventricular_Pulse_Width;    /* '<Root>/Data Store Memory29' */
  uint16_T Atrial_Pulse_Width;         /* '<Root>/Data Store Memory32' */
  uint8_T Mode_Chamber_Paced;          /* '<Root>/Data Store Memory20' */
  uint8_T Mode_Chamber_Sensed;         /* '<Root>/Data Store Memory21' */
  uint8_T Mode_Response;               /* '<Root>/Data Store Memory27' */
  uint8_T Ventricular_Amplitude;       /* '<Root>/Data Store Memory28' */
  uint8_T Ventricular_Sensitivity;     /* '<Root>/Data Store Memory30' */
  uint8_T Atrial_Amplitude;            /* '<Root>/Data Store Memory31' */
  uint8_T Atrial_Sensitivity;          /* '<Root>/Data Store Memory33' */
  uint8_T Hysterisis;                  /* '<Root>/Data Store Memory34' */
  uint8_T is_active_c8_Assignment2_3;  /* '<Root>/Chart' */
  uint8_T is_c8_Assignment2_3;         /* '<Root>/Chart' */
  MdlrefDW_Serial_Read_T Model2_InstanceData;/* '<Root>/Model2' */
  MdlrefDW_PTHS_T Model1_InstanceData; /* '<Root>/Model1' */
} DW_Assignment2_3_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState TriggeredSubsystem_Trig_ZCE;/* '<Root>/Triggered Subsystem' */
} PrevZCX_Assignment2_3_T;

/* Parameters (default storage) */
struct P_Assignment2_3_T_ {
  real_T SerialReceive_SampleTime;     /* Expression: -1
                                        * Referenced by: '<Root>/Serial Receive'
                                        */
  uint16_T DataStoreMemory22_InitialValue;
                           /* Computed Parameter: DataStoreMemory22_InitialValue
                            * Referenced by: '<Root>/Data Store Memory22'
                            */
  uint16_T DataStoreMemory23_InitialValue;
                           /* Computed Parameter: DataStoreMemory23_InitialValue
                            * Referenced by: '<Root>/Data Store Memory23'
                            */
  uint16_T DataStoreMemory24_InitialValue;
                           /* Computed Parameter: DataStoreMemory24_InitialValue
                            * Referenced by: '<Root>/Data Store Memory24'
                            */
  uint16_T DataStoreMemory25_InitialValue;
                           /* Computed Parameter: DataStoreMemory25_InitialValue
                            * Referenced by: '<Root>/Data Store Memory25'
                            */
  uint16_T DataStoreMemory26_InitialValue;
                           /* Computed Parameter: DataStoreMemory26_InitialValue
                            * Referenced by: '<Root>/Data Store Memory26'
                            */
  uint16_T DataStoreMemory29_InitialValue;
                           /* Computed Parameter: DataStoreMemory29_InitialValue
                            * Referenced by: '<Root>/Data Store Memory29'
                            */
  uint16_T DataStoreMemory32_InitialValue;
                           /* Computed Parameter: DataStoreMemory32_InitialValue
                            * Referenced by: '<Root>/Data Store Memory32'
                            */
  uint8_T DataStoreMemory15_InitialValue;
                           /* Computed Parameter: DataStoreMemory15_InitialValue
                            * Referenced by: '<Root>/Data Store Memory15'
                            */
  uint8_T DataStoreMemory16_InitialValue;
                           /* Computed Parameter: DataStoreMemory16_InitialValue
                            * Referenced by: '<Root>/Data Store Memory16'
                            */
  uint8_T DataStoreMemory17_InitialValue;
                           /* Computed Parameter: DataStoreMemory17_InitialValue
                            * Referenced by: '<Root>/Data Store Memory17'
                            */
  uint8_T DataStoreMemory18_InitialValue;
                           /* Computed Parameter: DataStoreMemory18_InitialValue
                            * Referenced by: '<Root>/Data Store Memory18'
                            */
  uint8_T DataStoreMemory19_InitialValue;
                           /* Computed Parameter: DataStoreMemory19_InitialValue
                            * Referenced by: '<Root>/Data Store Memory19'
                            */
  uint8_T DataStoreMemory20_InitialValue;
                           /* Computed Parameter: DataStoreMemory20_InitialValue
                            * Referenced by: '<Root>/Data Store Memory20'
                            */
  uint8_T DataStoreMemory21_InitialValue;
                           /* Computed Parameter: DataStoreMemory21_InitialValue
                            * Referenced by: '<Root>/Data Store Memory21'
                            */
  uint8_T DataStoreMemory27_InitialValue;
                           /* Computed Parameter: DataStoreMemory27_InitialValue
                            * Referenced by: '<Root>/Data Store Memory27'
                            */
  uint8_T DataStoreMemory28_InitialValue;
                           /* Computed Parameter: DataStoreMemory28_InitialValue
                            * Referenced by: '<Root>/Data Store Memory28'
                            */
  uint8_T DataStoreMemory30_InitialValue;
                           /* Computed Parameter: DataStoreMemory30_InitialValue
                            * Referenced by: '<Root>/Data Store Memory30'
                            */
  uint8_T DataStoreMemory31_InitialValue;
                           /* Computed Parameter: DataStoreMemory31_InitialValue
                            * Referenced by: '<Root>/Data Store Memory31'
                            */
  uint8_T DataStoreMemory33_InitialValue;
                           /* Computed Parameter: DataStoreMemory33_InitialValue
                            * Referenced by: '<Root>/Data Store Memory33'
                            */
  uint8_T DataStoreMemory34_InitialValue;
                           /* Computed Parameter: DataStoreMemory34_InitialValue
                            * Referenced by: '<Root>/Data Store Memory34'
                            */
};

/* Real-time Model Data Structure */
struct tag_RTM_Assignment2_3_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_Assignment2_3_T Assignment2_3_P;

/* Block signals (default storage) */
extern B_Assignment2_3_T Assignment2_3_B;

/* Block states (default storage) */
extern DW_Assignment2_3_T Assignment2_3_DW;

/* Zero-crossing (trigger) state */
extern PrevZCX_Assignment2_3_T Assignment2_3_PrevZCX;

/* Model entry point functions */
extern void Assignment2_3_initialize(void);
extern void Assignment2_3_step(void);
extern void Assignment2_3_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Assignment2_3_T *const Assignment2_3_M;

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
 * '<Root>' : 'Assignment2_3'
 * '<S1>'   : 'Assignment2_3/Chart'
 * '<S2>'   : 'Assignment2_3/Triggered Subsystem'
 */
#endif                                 /* RTW_HEADER_Assignment2_3_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
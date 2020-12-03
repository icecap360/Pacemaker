/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: Assignment2_incase_unofficial.h
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

#ifndef RTW_HEADER_Assignment2_incase_unofficial_h_
#define RTW_HEADER_Assignment2_incase_unofficial_h_
#include <string.h>
#include <math.h>
#include <stddef.h>
#ifndef Assignment2_incase_unofficial_COMMON_INCLUDES_
# define Assignment2_incase_unofficial_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "MW_SCI.h"
#include "MW_PWM.h"
#include "MW_digitalIO.h"
#include "MW_AnalogIn.h"
#endif                      /* Assignment2_incase_unofficial_COMMON_INCLUDES_ */

#include "Assignment2_incase_unofficial_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

#define Assignment2_incase_unofficial_M (Assignment2_incase_unofficia_M)

/* Block signals (default storage) */
typedef struct {
  uint8_T RxData[27];
  MW_AnalogIn_TriggerSource_Type trigger_val;
  uint16_T DataTypeConversion2;        /* '<S3>/Data Type Conversion2' */
  uint16_T DataTypeConversion3;        /* '<S3>/Data Type Conversion3' */
  uint16_T Lower_Rate_Limit;           /* '<Root>/Chart' */
  uint16_T AV_Delay;                   /* '<Root>/Chart' */
  uint16_T VRP;                        /* '<Root>/Chart' */
  uint16_T ARP;                        /* '<Root>/Chart' */
  uint16_T Hysterisis_Escape_Interval; /* '<Root>/Chart' */
  uint8_T BytePack5[2];                /* '<S3>/Byte Pack5' */
  uint8_T BytePack6[2];                /* '<S3>/Byte Pack6' */
  uint8_T BytePack1[2];                /* '<S3>/Byte Pack1' */
  uint8_T BytePack7[2];                /* '<S3>/Byte Pack7' */
  uint8_T BytePack4[2];                /* '<S3>/Byte Pack4' */
  uint8_T BytePack30[2];               /* '<S3>/Byte Pack30' */
  uint8_T BytePack31[2];               /* '<S3>/Byte Pack31' */
  uint8_T PACING_REF_PWM;              /* '<S2>/Chart1' */
  uint8_T ATR_CMP_REF_PWM;             /* '<S2>/Chart1' */
  uint8_T VENT_CMP_REF_PWM;            /* '<S2>/Chart1' */
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
  boolean_T Trigger;                   /* '<S2>/Chart1' */
  boolean_T PACE_CHARGE_CTRL;          /* '<S2>/Chart1' */
  boolean_T PACE_GND_CTRL;             /* '<S2>/Chart1' */
  boolean_T VENT_PACE_CTRL;            /* '<S2>/Chart1' */
  boolean_T ATR_PACE_CTRL;             /* '<S2>/Chart1' */
  boolean_T ATR_GND_CTRL;              /* '<S2>/Chart1' */
  boolean_T Z_ATR_CTRL;                /* '<S2>/Chart1' */
  boolean_T Z_VENT_CTRL;               /* '<S2>/Chart1' */
  boolean_T VENT_GND_CTRL;             /* '<S2>/Chart1' */
  boolean_T FRONT_END_CTRL;            /* '<S2>/Chart1' */
} B_Assignment2_incase_unoffici_T;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  freedomk64f_SCIRead_Assignmen_T obj; /* '<Root>/Serial Receive' */
  freedomk64f_DigitalRead_Assig_T obj_h;/* '<S6>/Digital Read' */
  freedomk64f_DigitalRead_Assig_T obj_b;/* '<S6>/Digital Read1' */
  freedomk64f_AnalogInput_Assig_T obj_i;/* '<S3>/ATR_SIGNAL' */
  freedomk64f_AnalogInput_Assig_T obj_b4;/* '<S3>/VENT_SIGNAL' */
  freedomk64f_DigitalWrite_Assi_T obj_o;/* '<S6>/Digital Write2' */
  freedomk64f_DigitalWrite_Assi_T obj_l;/* '<S6>/Digital Write3' */
  freedomk64f_DigitalWrite_Assi_T obj_e;/* '<S6>/Digital Write8' */
  freedomk64f_DigitalWrite_Assi_T obj_j;/* '<S6>/Digital Write4' */
  freedomk64f_DigitalWrite_Assi_T obj_b1;/* '<S6>/Digital Write5' */
  freedomk64f_DigitalWrite_Assi_T obj_d;/* '<S6>/Digital Write6' */
  freedomk64f_DigitalWrite_Assi_T obj_n;/* '<S6>/Digital Write7' */
  freedomk64f_DigitalWrite_Assi_T obj_p;/* '<S6>/Digital Write9' */
  freedomk64f_DigitalWrite_Assi_T obj_om;/* '<S6>/Digital Write1' */
  freedomk64f_PWMOutput_Assignm_T obj_f;/* '<S6>/PWM Output1' */
  freedomk64f_PWMOutput_Assignm_T obj_ib;/* '<S6>/PWM Output2' */
  freedomk64f_PWMOutput_Assignm_T obj_lt;/* '<S6>/PWM Output3' */
  freedomk64f_SCIWrite_Assignme_T obj_m;/* '<S3>/Serial Transmit1' */
  real_T uint16_bytes;                 /* '<Root>/Chart' */
  real_T uint8_bytes;                  /* '<Root>/Chart' */
  uint32_T temporalCounter_i1;         /* '<S2>/Chart1' */
  uint16_T Lower_Rate_Limit;           /* '<Root>/Data Store Memory22' */
  uint16_T AV_Delay;                   /* '<Root>/Data Store Memory23' */
  uint16_T VRP;                        /* '<Root>/Data Store Memory24' */
  uint16_T ARP;                        /* '<Root>/Data Store Memory25' */
  uint16_T Hysterisis_Escape_Interval; /* '<Root>/Data Store Memory26' */
  uint16_T Ventricular_Pulse_Width;    /* '<Root>/Data Store Memory29' */
  uint16_T Atrial_Pulse_Width;         /* '<Root>/Data Store Memory32' */
  uint16_T Pace_Interval;              /* '<S2>/Chart1' */
  uint16_T Atrial_Escape_Interval;     /* '<S2>/Chart1' */
  uint8_T Mode_Chamber_Paced;          /* '<Root>/Data Store Memory20' */
  uint8_T Mode_Chamber_Sensed;         /* '<Root>/Data Store Memory21' */
  uint8_T Mode_Response;               /* '<Root>/Data Store Memory27' */
  uint8_T Ventricular_Amplitude;       /* '<Root>/Data Store Memory28' */
  uint8_T Ventricular_Sensitivity;     /* '<Root>/Data Store Memory30' */
  uint8_T Atrial_Amplitude;            /* '<Root>/Data Store Memory31' */
  uint8_T Atrial_Sensitivity;          /* '<Root>/Data Store Memory33' */
  uint8_T Hysterisis;                  /* '<Root>/Data Store Memory34' */
  uint8_T is_active_c2_Assignment2_incase;/* '<S2>/Chart1' */
  uint8_T is_c2_Assignment2_incase_unoffi;/* '<S2>/Chart1' */
  uint8_T is_DUAL_MODES;               /* '<S2>/Chart1' */
  uint8_T is_NON_DUAL_MODES;           /* '<S2>/Chart1' */
  uint8_T is_active_c8_Assignment2_incase;/* '<Root>/Chart' */
  uint8_T is_c8_Assignment2_incase_unoffi;/* '<Root>/Chart' */
  boolean_T HIGH;                      /* '<S2>/Chart1' */
  boolean_T LOW;                       /* '<S2>/Chart1' */
} DW_Assignment2_incase_unoffic_T;

/* Zero-crossing (trigger) state */
typedef struct {
  ZCSigState TriggeredSubsystem_Trig_ZCE;/* '<Root>/Triggered Subsystem' */
} PrevZCX_Assignment2_incase_un_T;

/* Parameters (default storage) */
struct P_Assignment2_incase_unoffici_T_ {
  real_T SerialReceive_SampleTime;     /* Expression: -1
                                        * Referenced by: '<Root>/Serial Receive'
                                        */
  real_T DigitalRead1_SampleTime;      /* Expression: SampleTime
                                        * Referenced by: '<S6>/Digital Read1'
                                        */
  real_T DigitalRead_SampleTime;       /* Expression: SampleTime
                                        * Referenced by: '<S6>/Digital Read'
                                        */
  real_T VENT_SIGNAL_SampleTime;       /* Expression: SampleTime
                                        * Referenced by: '<S3>/VENT_SIGNAL'
                                        */
  real_T ATR_SIGNAL_SampleTime;        /* Expression: SampleTime
                                        * Referenced by: '<S3>/ATR_SIGNAL'
                                        */
  real_T Gain_Gain;                    /* Expression: 10000
                                        * Referenced by: '<S3>/Gain'
                                        */
  real_T Gain1_Gain;                   /* Expression: 10000
                                        * Referenced by: '<S3>/Gain1'
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
struct tag_RTM_Assignment2_incase_un_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_Assignment2_incase_unoffici_T Assignment2_incase_unofficial_P;

/* Block signals (default storage) */
extern B_Assignment2_incase_unoffici_T Assignment2_incase_unofficial_B;

/* Block states (default storage) */
extern DW_Assignment2_incase_unoffic_T Assignment2_incase_unofficia_DW;

/* Zero-crossing (trigger) state */
extern PrevZCX_Assignment2_incase_un_T Assignment2_incase_unof_PrevZCX;

/* Model entry point functions */
extern void Assignment2_incase_unofficial_initialize(void);
extern void Assignment2_incase_unofficial_step(void);
extern void Assignment2_incase_unofficial_terminate(void);

/* Real-time Model object */
extern RT_MODEL_Assignment2_incase_u_T *const Assignment2_incase_unofficia_M;

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
 * '<Root>' : 'Assignment2_incase_unofficial'
 * '<S1>'   : 'Assignment2_incase_unofficial/Chart'
 * '<S2>'   : 'Assignment2_incase_unofficial/Subsystem'
 * '<S3>'   : 'Assignment2_incase_unofficial/Subsystem1'
 * '<S4>'   : 'Assignment2_incase_unofficial/Triggered Subsystem'
 * '<S5>'   : 'Assignment2_incase_unofficial/Subsystem/Chart1'
 * '<S6>'   : 'Assignment2_incase_unofficial/Subsystem/Subsystem'
 */
#endif                         /* RTW_HEADER_Assignment2_incase_unofficial_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

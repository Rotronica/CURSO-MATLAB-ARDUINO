/*
 * File: servo_potenciometro.h
 *
 * Code generated for Simulink model 'servo_potenciometro'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Sun Mar 23 03:59:17 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_servo_potenciometro_h_
#define RTW_HEADER_servo_potenciometro_h_
#ifndef servo_potenciometro_COMMON_INCLUDES_
#define servo_potenciometro_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_AnalogIn.h"
#include "MW_ServoWriteRead.h"
#endif                                /* servo_potenciometro_COMMON_INCLUDES_ */

#include "servo_potenciometro_types.h"
#include <stddef.h>
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_inter_T obj; /* '<Root>/Analog Input' */
} DW_servo_potenciometro_T;

/* Parameters (default storage) */
struct P_servo_potenciometro_T_ {
  real_T AnalogInput_SampleTime;       /* Expression: 0.01
                                        * Referenced by: '<Root>/Analog Input'
                                        */
  real_T Gain_Gain;                    /* Expression: 255/1023
                                        * Referenced by: '<Root>/Gain'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_servo_potenciometro_T {
  const char_T * volatile errorStatus;
};

/* Block parameters (default storage) */
extern P_servo_potenciometro_T servo_potenciometro_P;

/* Block states (default storage) */
extern DW_servo_potenciometro_T servo_potenciometro_DW;

/* Model entry point functions */
extern void servo_potenciometro_initialize(void);
extern void servo_potenciometro_step(void);
extern void servo_potenciometro_terminate(void);

/* Real-time Model object */
extern RT_MODEL_servo_potenciometro_T *const servo_potenciometro_M;
extern volatile boolean_T stopRequested;
extern volatile boolean_T runModel;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
 */

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
 * '<Root>' : 'servo_potenciometro'
 */
#endif                                 /* RTW_HEADER_servo_potenciometro_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

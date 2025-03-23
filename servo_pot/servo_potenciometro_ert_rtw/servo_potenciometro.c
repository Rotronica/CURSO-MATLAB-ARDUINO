/*
 * File: servo_potenciometro.c
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

#include "servo_potenciometro.h"
#include "rtwtypes.h"
#include "servo_potenciometro_private.h"
#include "servo_potenciometro_types.h"
#include <math.h>

/* Block states (default storage) */
DW_servo_potenciometro_T servo_potenciometro_DW;

/* Real-time model */
static RT_MODEL_servo_potenciometro_T servo_potenciometro_M_;
RT_MODEL_servo_potenciometro_T *const servo_potenciometro_M =
  &servo_potenciometro_M_;
real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

/* Model step function */
void servo_potenciometro_step(void)
{
  MW_AnalogIn_ResultDataType_Type datatype_id;
  codertarget_arduinobase_inter_T *obj;
  real_T rtb_Gain;
  uint16_T b_varargout_1;
  uint8_T tmp;

  /* MATLABSystem: '<Root>/Analog Input' */
  if (servo_potenciometro_DW.obj.SampleTime !=
      servo_potenciometro_P.AnalogInput_SampleTime) {
    servo_potenciometro_DW.obj.SampleTime =
      servo_potenciometro_P.AnalogInput_SampleTime;
  }

  obj = &servo_potenciometro_DW.obj;
  obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogIn_GetHandle(14UL);
  datatype_id = MW_ANALOGIN_UINT16;
  MW_AnalogInSingle_ReadResult
    (servo_potenciometro_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE,
     &b_varargout_1, datatype_id);

  /* Gain: '<Root>/Gain' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion'
   *  MATLABSystem: '<Root>/Analog Input'
   */
  rtb_Gain = servo_potenciometro_P.Gain_Gain * (real_T)b_varargout_1;

  /* MATLABSystem: '<Root>/Standard Servo Write' */
  if (rtb_Gain < 0.0) {
    tmp = 0U;
  } else if (rtb_Gain > 180.0) {
    tmp = 180U;
  } else {
    rtb_Gain = rt_roundd_snf(rtb_Gain);
    if (rtb_Gain < 256.0) {
      tmp = (uint8_T)rtb_Gain;
    } else {
      tmp = MAX_uint8_T;
    }
  }

  MW_servoWrite(0, tmp);

  /* End of MATLABSystem: '<Root>/Standard Servo Write' */
}

/* Model initialize function */
void servo_potenciometro_initialize(void)
{
  {
    codertarget_arduinobase_inter_T *obj;

    /* Start for MATLABSystem: '<Root>/Analog Input' */
    servo_potenciometro_DW.obj.matlabCodegenIsDeleted = false;
    servo_potenciometro_DW.obj.SampleTime =
      servo_potenciometro_P.AnalogInput_SampleTime;
    obj = &servo_potenciometro_DW.obj;
    servo_potenciometro_DW.obj.isInitialized = 1L;
    obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogInSingle_Open(14UL);
    servo_potenciometro_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Standard Servo Write' */
    MW_servoAttach(0, 7);
  }
}

/* Model terminate function */
void servo_potenciometro_terminate(void)
{
  codertarget_arduinobase_inter_T *obj;

  /* Terminate for MATLABSystem: '<Root>/Analog Input' */
  obj = &servo_potenciometro_DW.obj;
  if (!servo_potenciometro_DW.obj.matlabCodegenIsDeleted) {
    servo_potenciometro_DW.obj.matlabCodegenIsDeleted = true;
    if ((servo_potenciometro_DW.obj.isInitialized == 1L) &&
        servo_potenciometro_DW.obj.isSetupComplete) {
      obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogIn_GetHandle(14UL);
      MW_AnalogIn_Close
        (servo_potenciometro_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Analog Input' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

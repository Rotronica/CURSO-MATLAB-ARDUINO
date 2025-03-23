/*
 * File: blink.c
 *
 * Code generated for Simulink model 'blink'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Sat Mar 15 23:38:36 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "blink.h"
#include "rtwtypes.h"
#include "blink_private.h"
#include <math.h>

/* Block states (default storage) */
DW_blink_T blink_DW;

/* Real-time model */
static RT_MODEL_blink_T blink_M_;
RT_MODEL_blink_T *const blink_M = &blink_M_;
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
void blink_step(void)
{
  real_T rtb_PulseGenerator;
  uint8_T tmp;

  /* DiscretePulseGenerator: '<Root>/Pulse Generator' */
  rtb_PulseGenerator = (blink_DW.clockTickCounter < blink_P.PulseGenerator_Duty)
    && (blink_DW.clockTickCounter >= 0L) ? blink_P.PulseGenerator_Amp : 0.0;
  if (blink_DW.clockTickCounter >= blink_P.PulseGenerator_Period - 1.0) {
    blink_DW.clockTickCounter = 0L;
  } else {
    blink_DW.clockTickCounter++;
  }

  /* End of DiscretePulseGenerator: '<Root>/Pulse Generator' */

  /* MATLABSystem: '<Root>/Digital Output' */
  rtb_PulseGenerator = rt_roundd_snf(rtb_PulseGenerator);
  if (rtb_PulseGenerator < 256.0) {
    if (rtb_PulseGenerator >= 0.0) {
      tmp = (uint8_T)rtb_PulseGenerator;
    } else {
      tmp = 0U;
    }
  } else {
    tmp = MAX_uint8_T;
  }

  writeDigitalPin(13, tmp);

  /* End of MATLABSystem: '<Root>/Digital Output' */
}

/* Model initialize function */
void blink_initialize(void)
{
  /* Start for MATLABSystem: '<Root>/Digital Output' */
  blink_DW.obj.matlabCodegenIsDeleted = false;
  blink_DW.obj.isInitialized = 1L;
  digitalIOSetup(13, 1);
  blink_DW.obj.isSetupComplete = true;
}

/* Model terminate function */
void blink_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Digital Output' */
  if (!blink_DW.obj.matlabCodegenIsDeleted) {
    blink_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

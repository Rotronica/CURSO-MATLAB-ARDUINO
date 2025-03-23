/*
 * File: untitled.c
 *
 * Code generated for Simulink model 'untitled'.
 *
 * Model version                  : 1.0
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Sun Mar 23 04:53:37 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "untitled.h"
#include "rtwtypes.h"

/* Block states (default storage) */
DW_untitled_T untitled_DW;

/* Real-time model */
static RT_MODEL_untitled_T untitled_M_;
RT_MODEL_untitled_T *const untitled_M = &untitled_M_;

/* Model step function */
void untitled_step(void)
{
  /* MATLABSystem: '<Root>/Digital Output' incorporates:
   *  Constant: '<S1>/PBIn1'
   */
  writeDigitalPin(13, (uint8_T)untitled_P.PBIn1_Value);

  /* MATLABSystem: '<Root>/Digital Output3' incorporates:
   *  Constant: '<S1>/PBIn1'
   */
  writeDigitalPin(4, (uint8_T)untitled_P.PBIn1_Value);

  /* MATLABSystem: '<Root>/Digital Output1' */
  writeDigitalPin(6, 0);

  /* MATLABSystem: '<Root>/Digital Output2' */
  writeDigitalPin(5, 0);
}

/* Model initialize function */
void untitled_initialize(void)
{
  /* Start for MATLABSystem: '<Root>/Digital Output' */
  untitled_DW.obj_p.matlabCodegenIsDeleted = false;
  untitled_DW.obj_p.isInitialized = 1L;
  digitalIOSetup(13, 1);
  untitled_DW.obj_p.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output3' */
  untitled_DW.obj.matlabCodegenIsDeleted = false;
  untitled_DW.obj.isInitialized = 1L;
  digitalIOSetup(4, 1);
  untitled_DW.obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output1' */
  untitled_DW.obj_g.matlabCodegenIsDeleted = false;
  untitled_DW.obj_g.isInitialized = 1L;
  digitalIOSetup(6, 1);
  untitled_DW.obj_g.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output2' */
  untitled_DW.obj_h.matlabCodegenIsDeleted = false;
  untitled_DW.obj_h.isInitialized = 1L;
  digitalIOSetup(5, 1);
  untitled_DW.obj_h.isSetupComplete = true;
}

/* Model terminate function */
void untitled_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Digital Output' */
  if (!untitled_DW.obj_p.matlabCodegenIsDeleted) {
    untitled_DW.obj_p.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output' */

  /* Terminate for MATLABSystem: '<Root>/Digital Output3' */
  if (!untitled_DW.obj.matlabCodegenIsDeleted) {
    untitled_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output3' */

  /* Terminate for MATLABSystem: '<Root>/Digital Output1' */
  if (!untitled_DW.obj_g.matlabCodegenIsDeleted) {
    untitled_DW.obj_g.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output1' */

  /* Terminate for MATLABSystem: '<Root>/Digital Output2' */
  if (!untitled_DW.obj_h.matlabCodegenIsDeleted) {
    untitled_DW.obj_h.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output2' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

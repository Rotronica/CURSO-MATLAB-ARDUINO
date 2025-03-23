/*
 * File: carro.c
 *
 * Code generated for Simulink model 'carro'.
 *
 * Model version                  : 1.1
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Sun Mar 23 05:37:16 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "carro.h"
#include "rtwtypes.h"
#include "carro_private.h"

/* Block states (default storage) */
DW_carro_T carro_DW;

/* Real-time model */
static RT_MODEL_carro_T carro_M_;
RT_MODEL_carro_T *const carro_M = &carro_M_;

/* Model step function */
void carro_step(void)
{
  boolean_T rtb_Equal;
  boolean_T rtb_Equal1;

  /* MATLABSystem: '<Root>/Digital Input' */
  if (carro_DW.obj.SampleTime != carro_P.DigitalInput_SampleTime) {
    carro_DW.obj.SampleTime = carro_P.DigitalInput_SampleTime;
  }

  rtb_Equal1 = readDigitalPin(8);

  /* RelationalOperator: '<Root>/Equal' incorporates:
   *  Constant: '<Root>/Constant'
   *  MATLABSystem: '<Root>/Digital Input'
   */
  rtb_Equal = (rtb_Equal1 == carro_P.Constant_Value);

  /* MATLABSystem: '<Root>/Digital Output' */
  writeDigitalPin(7, (uint8_T)rtb_Equal);

  /* MATLABSystem: '<Root>/Digital Output3' */
  writeDigitalPin(4, (uint8_T)rtb_Equal);

  /* RelationalOperator: '<Root>/Equal1' incorporates:
   *  Constant: '<Root>/Constant1'
   *  MATLABSystem: '<Root>/Digital Input'
   */
  rtb_Equal1 = (rtb_Equal1 == carro_P.Constant1_Value);

  /* MATLABSystem: '<Root>/Digital Output1' */
  writeDigitalPin(6, (uint8_T)rtb_Equal1);

  /* MATLABSystem: '<Root>/Digital Output2' */
  writeDigitalPin(5, (uint8_T)rtb_Equal1);

  {                                    /* Sample time: [0.1s, 0.0s] */
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  carro_M->Timing.taskTime0 =
    ((time_T)(++carro_M->Timing.clockTick0)) * carro_M->Timing.stepSize0;
}

/* Model initialize function */
void carro_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(carro_M, -1);
  carro_M->Timing.stepSize0 = 0.1;

  /* External mode info */
  carro_M->Sizes.checksums[0] = (3276404310U);
  carro_M->Sizes.checksums[1] = (1224811269U);
  carro_M->Sizes.checksums[2] = (1324037753U);
  carro_M->Sizes.checksums[3] = (1413267095U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[6];
    carro_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    systemRan[2] = &rtAlwaysEnabled;
    systemRan[3] = &rtAlwaysEnabled;
    systemRan[4] = &rtAlwaysEnabled;
    systemRan[5] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(carro_M->extModeInfo,
      &carro_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(carro_M->extModeInfo, carro_M->Sizes.checksums);
    rteiSetTPtr(carro_M->extModeInfo, rtmGetTPtr(carro_M));
  }

  /* Start for MATLABSystem: '<Root>/Digital Input' */
  carro_DW.obj.matlabCodegenIsDeleted = false;
  carro_DW.obj.SampleTime = carro_P.DigitalInput_SampleTime;
  carro_DW.obj.isInitialized = 1L;
  digitalIOSetup(8, 0);
  carro_DW.obj.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output' */
  carro_DW.obj_p.matlabCodegenIsDeleted = false;
  carro_DW.obj_p.isInitialized = 1L;
  digitalIOSetup(7, 1);
  carro_DW.obj_p.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output3' */
  carro_DW.obj_h.matlabCodegenIsDeleted = false;
  carro_DW.obj_h.isInitialized = 1L;
  digitalIOSetup(4, 1);
  carro_DW.obj_h.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output1' */
  carro_DW.obj_g.matlabCodegenIsDeleted = false;
  carro_DW.obj_g.isInitialized = 1L;
  digitalIOSetup(6, 1);
  carro_DW.obj_g.isSetupComplete = true;

  /* Start for MATLABSystem: '<Root>/Digital Output2' */
  carro_DW.obj_h5.matlabCodegenIsDeleted = false;
  carro_DW.obj_h5.isInitialized = 1L;
  digitalIOSetup(5, 1);
  carro_DW.obj_h5.isSetupComplete = true;
}

/* Model terminate function */
void carro_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Digital Input' */
  if (!carro_DW.obj.matlabCodegenIsDeleted) {
    carro_DW.obj.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Input' */

  /* Terminate for MATLABSystem: '<Root>/Digital Output' */
  if (!carro_DW.obj_p.matlabCodegenIsDeleted) {
    carro_DW.obj_p.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output' */

  /* Terminate for MATLABSystem: '<Root>/Digital Output3' */
  if (!carro_DW.obj_h.matlabCodegenIsDeleted) {
    carro_DW.obj_h.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output3' */

  /* Terminate for MATLABSystem: '<Root>/Digital Output1' */
  if (!carro_DW.obj_g.matlabCodegenIsDeleted) {
    carro_DW.obj_g.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output1' */

  /* Terminate for MATLABSystem: '<Root>/Digital Output2' */
  if (!carro_DW.obj_h5.matlabCodegenIsDeleted) {
    carro_DW.obj_h5.matlabCodegenIsDeleted = true;
  }

  /* End of Terminate for MATLABSystem: '<Root>/Digital Output2' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

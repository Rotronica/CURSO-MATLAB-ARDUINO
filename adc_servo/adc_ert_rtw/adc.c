/*
 * File: adc.c
 *
 * Code generated for Simulink model 'adc'.
 *
 * Model version                  : 1.3
 * Simulink Coder version         : 9.8 (R2022b) 13-May-2022
 * C/C++ source code generated on : Wed Mar 19 22:14:00 2025
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "adc.h"
#include "adc_types.h"
#include "adc_private.h"

/* Block signals (default storage) */
B_adc_T adc_B;

/* Block states (default storage) */
DW_adc_T adc_DW;

/* Real-time model */
static RT_MODEL_adc_T adc_M_;
RT_MODEL_adc_T *const adc_M = &adc_M_;

/* Model step function */
void adc_step(void)
{
  MW_AnalogIn_ResultDataType_Type datatype_id;
  codertarget_arduinobase_inter_T *obj;

  /* MATLABSystem: '<Root>/Analog Input' */
  if (adc_DW.obj.SampleTime != adc_P.AnalogInput_SampleTime) {
    adc_DW.obj.SampleTime = adc_P.AnalogInput_SampleTime;
  }

  obj = &adc_DW.obj;
  obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogIn_GetHandle(14UL);
  datatype_id = MW_ANALOGIN_UINT16;

  /* MATLABSystem: '<Root>/Analog Input' */
  MW_AnalogInSingle_ReadResult(adc_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE,
    &adc_B.AnalogInput, datatype_id);

  {                                    /* Sample time: [0.01s, 0.0s] */
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   */
  adc_M->Timing.taskTime0 =
    ((time_T)(++adc_M->Timing.clockTick0)) * adc_M->Timing.stepSize0;
}

/* Model initialize function */
void adc_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(adc_M, -1);
  adc_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  adc_M->Sizes.checksums[0] = (2472675670U);
  adc_M->Sizes.checksums[1] = (3791519177U);
  adc_M->Sizes.checksums[2] = (3895739537U);
  adc_M->Sizes.checksums[3] = (817350497U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[2];
    adc_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    systemRan[1] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(adc_M->extModeInfo,
      &adc_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(adc_M->extModeInfo, adc_M->Sizes.checksums);
    rteiSetTPtr(adc_M->extModeInfo, rtmGetTPtr(adc_M));
  }

  {
    codertarget_arduinobase_inter_T *obj;

    /* Start for MATLABSystem: '<Root>/Analog Input' */
    adc_DW.obj.matlabCodegenIsDeleted = false;
    adc_DW.obj.SampleTime = adc_P.AnalogInput_SampleTime;
    obj = &adc_DW.obj;
    adc_DW.obj.isInitialized = 1L;
    obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogInSingle_Open(14UL);
    adc_DW.obj.isSetupComplete = true;
  }
}

/* Model terminate function */
void adc_terminate(void)
{
  codertarget_arduinobase_inter_T *obj;

  /* Terminate for MATLABSystem: '<Root>/Analog Input' */
  obj = &adc_DW.obj;
  if (!adc_DW.obj.matlabCodegenIsDeleted) {
    adc_DW.obj.matlabCodegenIsDeleted = true;
    if ((adc_DW.obj.isInitialized == 1L) && adc_DW.obj.isSetupComplete) {
      obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogIn_GetHandle(14UL);
      MW_AnalogIn_Close(adc_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE);
    }
  }

  /* End of Terminate for MATLABSystem: '<Root>/Analog Input' */
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

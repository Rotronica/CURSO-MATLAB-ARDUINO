/*
 * File: servo_potenciometro_types.h
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

#ifndef RTW_HEADER_servo_potenciometro_types_h_
#define RTW_HEADER_servo_potenciometro_types_h_
#include "MW_SVD.h"
#include "rtwtypes.h"

/* Custom Type definition for MATLABSystem: '<Root>/Analog Input' */
#include "MW_SVD.h"
#ifndef struct_tag_UTG5XI0vJCsmjbgura8BP
#define struct_tag_UTG5XI0vJCsmjbgura8BP

struct tag_UTG5XI0vJCsmjbgura8BP
{
  MW_Handle_Type MW_ANALOGIN_HANDLE;
};

#endif                                 /* struct_tag_UTG5XI0vJCsmjbgura8BP */

#ifndef typedef_f_arduinodriver_ArduinoAnalog_T
#define typedef_f_arduinodriver_ArduinoAnalog_T

typedef struct tag_UTG5XI0vJCsmjbgura8BP f_arduinodriver_ArduinoAnalog_T;

#endif                             /* typedef_f_arduinodriver_ArduinoAnalog_T */

#ifndef struct_tag_8ohiN1FAOgR98njPNu14NC
#define struct_tag_8ohiN1FAOgR98njPNu14NC

struct tag_8ohiN1FAOgR98njPNu14NC
{
  boolean_T matlabCodegenIsDeleted;
  int32_T isInitialized;
  boolean_T isSetupComplete;
  f_arduinodriver_ArduinoAnalog_T AnalogInDriverObj;
  real_T SampleTime;
};

#endif                                 /* struct_tag_8ohiN1FAOgR98njPNu14NC */

#ifndef typedef_codertarget_arduinobase_inter_T
#define typedef_codertarget_arduinobase_inter_T

typedef struct tag_8ohiN1FAOgR98njPNu14NC codertarget_arduinobase_inter_T;

#endif                             /* typedef_codertarget_arduinobase_inter_T */

#ifndef struct_tag_dbvacMp9IP0OwUX1Fvoy4E
#define struct_tag_dbvacMp9IP0OwUX1Fvoy4E

struct tag_dbvacMp9IP0OwUX1Fvoy4E
{
  int32_T isInitialized;
};

#endif                                 /* struct_tag_dbvacMp9IP0OwUX1Fvoy4E */

#ifndef typedef_codertarget_arduinobase_int_n_T
#define typedef_codertarget_arduinobase_int_n_T

typedef struct tag_dbvacMp9IP0OwUX1Fvoy4E codertarget_arduinobase_int_n_T;

#endif                             /* typedef_codertarget_arduinobase_int_n_T */

/* Parameters (default storage) */
typedef struct P_servo_potenciometro_T_ P_servo_potenciometro_T;

/* Forward declaration for rtModel */
typedef struct tag_RTM_servo_potenciometro_T RT_MODEL_servo_potenciometro_T;

#endif                             /* RTW_HEADER_servo_potenciometro_types_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */

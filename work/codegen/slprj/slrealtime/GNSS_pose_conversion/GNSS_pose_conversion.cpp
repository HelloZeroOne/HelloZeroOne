/*
 * Code generation for system model 'GNSS_pose_conversion'
 *
 * Model                      : GNSS_pose_conversion
 * Model version              : 4.11
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Thu May 12 12:47:01 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "GNSS_pose_conversion.h"
#include "GNSS_pose_conversion_private.h"

/*
 * Output and update for atomic system:
 *    '<S1>/MATLAB Function'
 *    '<S1>/MATLAB Function2'
 */
void GNSS_pose_conversion_MATLABFunction(const real_T *rtu_B, const real_T
  *rtu_L, const real_T *rtu_H, B_MATLABFunction_GNSS_pose_conversion_T *localB)
{
  real_T B;
  real_T L;
  real_T Rn;
  real_T b_a;

  /* MATLAB Function 'BLH2ENU/MATLAB Function': '<S4>:1' */
  /* '<S4>:1:8' */
  B = *rtu_B * 3.1415926535897931 / 180.0;

  /* '<S4>:1:9' */
  L = *rtu_L * 3.1415926535897931 / 180.0;

  /* '<S4>:1:11' */
  Rn = std::cos(B);
  b_a = std::sin(B);
  Rn = 4.0680631590769E+13 / std::sqrt(Rn * Rn * 4.0680631590769E+13 + b_a * b_a
    * 4.040829998332425E+13);

  /* '<S4>:1:13' */
  /* '<S4>:1:15' */
  /* '<S4>:1:17' */
  /* '<S4>:1:18' */
  localB->XYZ[0] = (Rn + *rtu_H) * std::cos(B) * std::cos(L);
  localB->XYZ[1] = (Rn + *rtu_H) * std::cos(B) * std::sin(L);
  localB->XYZ[2] = ((Rn + *rtu_H) - 0.0066943800228982039 * Rn) * std::sin(B);
}

/* System initialize for referenced model: 'GNSS_pose_conversion' */
void GNSS_pose_conversion_Init(DW_GNSS_pose_conversion_f_T *localDW)
{
  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
  localDW->UnitDelay_DSTATE =
    GNSS_pose_conversion_cal->UnitDelay_InitialCondition;

  /* SystemInitialize for MATLAB Function: '<Root>/GNSS_heading2ENU_yaw_angle' */
  localDW->cumulative_counter = 0.0;
}

/* System reset for referenced model: 'GNSS_pose_conversion' */
void GNSS_pose_conversion_Reset(DW_GNSS_pose_conversion_f_T *localDW)
{
  /* InitializeConditions for UnitDelay: '<Root>/Unit Delay' */
  localDW->UnitDelay_DSTATE =
    GNSS_pose_conversion_cal->UnitDelay_InitialCondition;

  /* SystemReset for MATLAB Function: '<Root>/GNSS_heading2ENU_yaw_angle' */
  localDW->cumulative_counter = 0.0;
}

/* Output and update for referenced model: 'GNSS_pose_conversion' */
void GNSS_pose_conversion(const real_T *rtu_current_heading, const real_T
  *rtu_current_latitude, const real_T *rtu_current_longitude, const real_T
  *rtu_current_altitude, const real_T *rtu_origin_latitude, const real_T
  *rtu_origin_longitude, const real_T *rtu_origin_altitude, real_T
  *rty_ENU_yaw_angle, real_T *rty_ENU_x, real_T *rty_ENU_y,
  B_GNSS_pose_conversion_c_T *localB, DW_GNSS_pose_conversion_f_T *localDW)
{
  real_T A[9];
  real_T result[3];
  real_T Lp;
  real_T delta_angle;
  real_T result_0;
  real_T tmp;
  int32_T i;

  /* UnitDelay: '<Root>/Unit Delay' */
  localB->UnitDelay = localDW->UnitDelay_DSTATE;

  /* MATLAB Function: '<Root>/GNSS_heading2ENU_yaw_angle' */
  /* MATLAB Function 'GNSS_heading2ENU_yaw_angle': '<S3>:1' */
  /* '<S3>:1:18' */
  delta_angle = *rtu_current_heading - localB->UnitDelay;
  if (-350.0 > delta_angle) {
    /* '<S3>:1:21' */
    /* '<S3>:1:22' */
    localDW->cumulative_counter++;
  }

  if (350.0 < delta_angle) {
    /* '<S3>:1:26' */
    /* '<S3>:1:27' */
    localDW->cumulative_counter--;
  }

  /* '<S3>:1:32' */
  *rty_ENU_yaw_angle = 90.0 - (360.0 * localDW->cumulative_counter +
    *rtu_current_heading);

  /* End of MATLAB Function: '<Root>/GNSS_heading2ENU_yaw_angle' */

  /* MATLAB Function: '<S1>/MATLAB Function' */
  GNSS_pose_conversion_MATLABFunction(rtu_origin_latitude, rtu_origin_longitude,
    rtu_origin_altitude, &localB->sf_MATLABFunction);

  /* MATLAB Function: '<S1>/MATLAB Function2' */
  GNSS_pose_conversion_MATLABFunction(rtu_current_latitude,
    rtu_current_longitude, rtu_current_altitude, &localB->sf_MATLABFunction2);

  /* MATLAB Function: '<S1>/MATLAB Function1' */
  /* MATLAB Function 'BLH2ENU/MATLAB Function1': '<S5>:1' */
  /* '<S5>:1:7' */
  delta_angle = *rtu_origin_latitude * 3.1415926535897931 / 180.0;

  /* '<S5>:1:8' */
  Lp = *rtu_origin_longitude * 3.1415926535897931 / 180.0;

  /* '<S5>:1:11' */
  A[0] = -std::sin(Lp);

  /* '<S5>:1:12' */
  A[3] = std::cos(Lp);

  /* '<S5>:1:13' */
  A[6] = 0.0;

  /* '<S5>:1:14' */
  A[1] = -std::sin(delta_angle) * std::cos(Lp);

  /* '<S5>:1:15' */
  A[4] = -std::sin(delta_angle) * std::sin(Lp);

  /* '<S5>:1:16' */
  A[7] = std::cos(delta_angle);

  /* '<S5>:1:17' */
  A[2] = std::cos(delta_angle) * std::cos(Lp);

  /* '<S5>:1:18' */
  A[5] = std::cos(delta_angle) * std::sin(Lp);

  /* '<S5>:1:19' */
  A[8] = std::sin(delta_angle);

  /* '<S5>:1:21' */
  /* '<S5>:1:24' */
  delta_angle = localB->sf_MATLABFunction2.XYZ[0] -
    localB->sf_MATLABFunction.XYZ[0];
  Lp = localB->sf_MATLABFunction2.XYZ[1] - localB->sf_MATLABFunction.XYZ[1];
  tmp = localB->sf_MATLABFunction2.XYZ[2] - localB->sf_MATLABFunction.XYZ[2];
  for (i = 0; i < 3; i++) {
    result_0 = A[i] * delta_angle;
    result_0 += A[i + 3] * Lp;
    result_0 += A[i + 6] * tmp;
    result[i] = result_0;
  }

  /* '<S5>:1:25' */
  *rty_ENU_x = result[0];

  /* '<S5>:1:26' */
  *rty_ENU_y = result[1];

  /* '<S5>:1:27' */
  localB->Zqp = result[2];

  /* End of MATLAB Function: '<S1>/MATLAB Function1' */

  /* Update for UnitDelay: '<Root>/Unit Delay' */
  localDW->UnitDelay_DSTATE = *rtu_current_heading;
}

/* Model initialize function */
void GNSS_pose_conversion_initialize(const char_T **rt_errorStatus,
  RT_MODEL_GNSS_pose_conversion_T *const GNSS_pose_conversion_M,
  B_GNSS_pose_conversion_c_T *localB, DW_GNSS_pose_conversion_f_T *localDW)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(GNSS_pose_conversion_M, rt_errorStatus);

  /* block I/O */
  {
    localB->UnitDelay = 0.0;
    localB->Zqp = 0.0;
    localB->sf_MATLABFunction2.XYZ[0] = 0.0;
    localB->sf_MATLABFunction2.XYZ[1] = 0.0;
    localB->sf_MATLABFunction2.XYZ[2] = 0.0;
    localB->sf_MATLABFunction.XYZ[0] = 0.0;
    localB->sf_MATLABFunction.XYZ[1] = 0.0;
    localB->sf_MATLABFunction.XYZ[2] = 0.0;
  }

  /* states (dwork) */
  localDW->UnitDelay_DSTATE = 0.0;
  localDW->cumulative_counter = 0.0;
}

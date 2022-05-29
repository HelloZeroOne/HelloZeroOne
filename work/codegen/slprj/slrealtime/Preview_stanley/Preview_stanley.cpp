/*
 * Code generation for system model 'Preview_stanley'
 *
 * Model                      : Preview_stanley
 * Model version              : 4.20
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Thu May 12 12:48:49 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "Preview_stanley.h"
#include "Preview_stanley_private.h"

/* Output and update for referenced model: 'Preview_stanley' */
void Preview_stanley(const real_T *rtu_preview_angle_offset, const real_T
                     *rtu_steering_axle_angle, const real_T
                     *rtu_K_steering_axle_angle, const real_T
                     *rtu_near_lateral_offset, const real_T
                     *rtu_K_lateral_offset, const real_T *rtu_tram_speed, const
                     real_T *rtu_K_speed, real_T *rty_stanley_set_axle_angle,
                     B_Preview_stanley_c_T *localB)
{
  /* Product: '<S4>/Divide1' */
  localB->Divide1 = *rtu_steering_axle_angle * *rtu_K_steering_axle_angle;

  /* Sum: '<S4>/Plus' */
  localB->Plus = *rtu_preview_angle_offset - localB->Divide1;

  /* Gain: '<S1>/Gain1' */
  localB->Gain1 = Preview_stanley_cal->Gain1_Gain * localB->Plus;

  /* Product: '<S2>/Divide2' */
  localB->Divide2 = *rtu_near_lateral_offset * *rtu_K_lateral_offset;

  /* Sum: '<S2>/Plus1' */
  localB->Plus1 = *rtu_tram_speed + *rtu_K_speed;

  /* Product: '<S2>/Divide' */
  localB->Divide = localB->Divide2 / localB->Plus1;

  /* Trigonometry: '<S2>/Atan' */
  localB->Atan = std::atan(localB->Divide);

  /* Sum: '<Root>/Plus2' */
  localB->Plus2 = localB->Gain1 + localB->Atan;

  /* Gain: '<S5>/Gain' */
  *rty_stanley_set_axle_angle = Preview_stanley_cal->Gain_Gain * localB->Plus2;
}

/* Model initialize function */
void Preview_stanley_initialize(const char_T **rt_errorStatus,
  RT_MODEL_Preview_stanley_T *const Preview_stanley_M, B_Preview_stanley_c_T
  *localB)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(Preview_stanley_M, rt_errorStatus);

  /* block I/O */
  {
    localB->Divide1 = 0.0;
    localB->Plus = 0.0;
    localB->Gain1 = 0.0;
    localB->Divide2 = 0.0;
    localB->Plus1 = 0.0;
    localB->Divide = 0.0;
    localB->Atan = 0.0;
    localB->Plus2 = 0.0;
  }
}

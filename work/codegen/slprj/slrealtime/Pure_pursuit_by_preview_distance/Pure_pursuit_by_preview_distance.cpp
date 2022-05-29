/*
 * Code generation for system model 'Pure_pursuit_by_preview_distance'
 *
 * Model                      : Pure_pursuit_by_preview_distance
 * Model version              : 4.12
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Thu May 12 12:49:08 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "Pure_pursuit_by_preview_distance.h"
#include "Pure_pursuit_by_preview_distance_private.h"

/* Output and update for referenced model: 'Pure_pursuit_by_preview_distance' */
void Pure_pursuit_by_preview_distance(const real_T *rtu_ENU_yaw_angle_rad, const
  real_T *rtu_ENU_x, const real_T *rtu_ENU_y, const real_T *rtu_preview_point_x,
  const real_T *rtu_preview_point_y, const real_T *rtu_Lf, const real_T *rtu_Lr,
  const real_T *rtu_preview_distance, real_T *rty_set_steering_axle_angle_rad)
{
  /* MATLAB Function: '<Root>/Pure_Pursuit_By_Preview_Distance' */
  /* MATLAB Function 'Pure_Pursuit_By_Preview_Distance': '<S2>:1' */
  /* '<S2>:1:18' */
  /* '<S2>:1:22' */
  if (0.0 < *rtu_preview_distance) {
    /* '<S2>:1:25' */
    /* '<S2>:1:26' */
    *rty_set_steering_axle_angle_rad = std::sin(std::atan(((*rtu_preview_point_y
      - *rtu_ENU_y) * std::cos(*rtu_ENU_yaw_angle_rad) - (*rtu_preview_point_x -
      *rtu_ENU_x) * std::sin(*rtu_ENU_yaw_angle_rad)) / ((*rtu_preview_point_y -
      *rtu_ENU_y) * std::sin(*rtu_ENU_yaw_angle_rad) + (*rtu_preview_point_x -
      *rtu_ENU_x) * std::cos(*rtu_ENU_yaw_angle_rad)))) * ((*rtu_Lf + *rtu_Lr) *
      2.0) / *rtu_preview_distance;
    *rty_set_steering_axle_angle_rad = std::atan
      (*rty_set_steering_axle_angle_rad);
  } else {
    /* '<S2>:1:28' */
    *rty_set_steering_axle_angle_rad = 0.0;
  }

  /* End of MATLAB Function: '<Root>/Pure_Pursuit_By_Preview_Distance' */
}

/* Model initialize function */
void Pure_pursuit_by_preview_distance_initialize(const char_T **rt_errorStatus,
  RT_MODEL_Pure_pursuit_by_preview_distance_T *const
  Pure_pursuit_by_preview_distance_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(Pure_pursuit_by_preview_distance_M, rt_errorStatus);
}

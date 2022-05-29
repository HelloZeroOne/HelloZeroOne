/*
 * Code generation for system model 'Preview_point_calculate_by_chord'
 *
 * Model                      : Preview_point_calculate_by_chord
 * Model version              : 4.15
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Thu May 12 12:48:41 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "Preview_point_calculate_by_chord.h"
#include "Preview_point_calculate_by_chord_private.h"

/* System initialize for referenced model: 'Preview_point_calculate_by_chord' */
void Preview_point_calculate_by_chord_Init
  (DW_Preview_point_calculate_by_chord_f_T *localDW)
{
  /* SystemInitialize for MATLAB Function: '<Root>/Preview_Point_Calculate_By_Chord' */
  localDW->preview_point_x_previous_not_empty = false;
  localDW->preview_point_y_previous_not_empty = false;
  localDW->preview_yaw_angle_previous = 0.0;
}

/* System reset for referenced model: 'Preview_point_calculate_by_chord' */
void Preview_point_calculate_by_chord_Reset
  (DW_Preview_point_calculate_by_chord_f_T *localDW)
{
  /* SystemReset for MATLAB Function: '<Root>/Preview_Point_Calculate_By_Chord' */
  localDW->preview_point_x_previous_not_empty = false;
  localDW->preview_point_y_previous_not_empty = false;
  localDW->preview_yaw_angle_previous = 0.0;
}

/* Output and update for referenced model: 'Preview_point_calculate_by_chord' */
void Preview_point_calculate_by_chord(const real_T *rtu_min_preview_distance,
  const real_T *rtu_tram_speed, const real_T *rtu_preview_time, const real_T
  *rtu_closest_segment_start_point_index, const real_T *rtu_closest_point_x,
  const real_T *rtu_closest_point_y, const real_T *rtu_ENU_yaw_angle, const
  real_T *rtu_ENU_x, const real_T *rtu_ENU_y, const real_T *rtu_way_point_number,
  const real_T rtu_trajectory_yaw_angle[6001], const real_T rtu_trajectory_x
  [6001], const real_T rtu_trajectory_y[6001], real_T *rty_preview_point_x,
  real_T *rty_preview_point_y, real_T *rty_preview_distance, real_T
  *rty_preview_chord_length, real_T *rty_preview_angle_offset, real_T
  *rty_preview_yaw_angle, DW_Preview_point_calculate_by_chord_f_T *localDW)
{
  real_T b_index;
  real_T delta_x_P1P2;
  real_T delta_y_P1P2;
  real_T distance;
  real_T f_a;
  real_T u1;
  boolean_T pass_previous_point_valid;
  boolean_T preview_point_valid;

  /* MATLAB Function: '<Root>/Preview_Point_Calculate_By_Chord' */
  /* MATLAB Function 'Preview_Point_Calculate_By_Chord': '<S2>:1' */
  if (!localDW->preview_point_x_previous_not_empty) {
    /* '<S2>:1:32' */
    /* '<S2>:1:33' */
    localDW->preview_point_x_previous = *rtu_closest_point_x;
    localDW->preview_point_x_previous_not_empty = true;
  }

  if (!localDW->preview_point_y_previous_not_empty) {
    /* '<S2>:1:38' */
    /* '<S2>:1:39' */
    localDW->preview_point_y_previous = *rtu_closest_point_y;
    localDW->preview_point_y_previous_not_empty = true;
  }

  /* '<S2>:1:49' */
  preview_point_valid = false;

  /* '<S2>:1:50' */
  pass_previous_point_valid = false;

  /* '<S2>:1:54' */
  b_index = *rtu_tram_speed * *rtu_preview_time;
  u1 = *rtu_min_preview_distance;
  if ((b_index > u1) || rtIsNaN(u1)) {
    u1 = b_index;
  }

  /* '<S2>:1:58' */
  b_index = *rtu_ENU_x - rtu_trajectory_x[static_cast<int32_T>
    (*rtu_closest_segment_start_point_index + 1.0) - 1];
  distance = *rtu_ENU_y - rtu_trajectory_y[static_cast<int32_T>
    (*rtu_closest_segment_start_point_index + 1.0) - 1];
  distance = std::sqrt(b_index * b_index + distance * distance);

  /* '<S2>:1:62' */
  b_index = *rtu_closest_segment_start_point_index + 1.0;
  while ((u1 > distance) && (*rtu_way_point_number > b_index)) {
    /* '<S2>:1:63' */
    /* '<S2>:1:65' */
    b_index++;

    /* '<S2>:1:68' */
    distance = *rtu_ENU_x - rtu_trajectory_x[static_cast<int32_T>(b_index) - 1];
    delta_x_P1P2 = *rtu_ENU_y - rtu_trajectory_y[static_cast<int32_T>(b_index) -
      1];
    distance = std::sqrt(distance * distance + delta_x_P1P2 * delta_x_P1P2);

    /* '<S2>:1:72' */
    delta_x_P1P2 = rtu_trajectory_x[static_cast<int32_T>(b_index) - 1] -
      rtu_trajectory_x[static_cast<int32_T>(b_index - 1.0) - 1];
    delta_y_P1P2 = rtu_trajectory_y[static_cast<int32_T>(b_index) - 1] -
      rtu_trajectory_y[static_cast<int32_T>(b_index - 1.0) - 1];
    if (1.0E-6 > std::abs(delta_x_P1P2 * delta_x_P1P2 + delta_y_P1P2 *
                          delta_y_P1P2)) {
      delta_x_P1P2 = 2.0;
    } else {
      delta_x_P1P2 = ((localDW->preview_point_x_previous - rtu_trajectory_x[
                       static_cast<int32_T>(b_index - 1.0) - 1]) * delta_x_P1P2
                      + (localDW->preview_point_y_previous - rtu_trajectory_y[
                         static_cast<int32_T>(b_index - 1.0) - 1]) *
                      delta_y_P1P2) / (delta_x_P1P2 * delta_x_P1P2 +
        delta_y_P1P2 * delta_y_P1P2);
    }

    if (1.0 >= delta_x_P1P2) {
      /* '<S2>:1:76' */
      /* '<S2>:1:77' */
      pass_previous_point_valid = true;
    }
  }

  if (*rtu_way_point_number > b_index) {
    /* '<S2>:1:85' */
    /* '<S2>:1:86' */
    preview_point_valid = true;
  }

  if ((!pass_previous_point_valid) && (rtP_ZERO_SPEED_THRESHOLD <
       *rtu_tram_speed)) {
    /* '<S2>:1:90' */
    /* '<S2>:1:93' */
    delta_x_P1P2 = localDW->preview_point_x_previous;

    /* '<S2>:1:94' */
    distance = localDW->preview_point_y_previous;

    /* '<S2>:1:95' */
    b_index = localDW->preview_yaw_angle_previous;
  } else if (!preview_point_valid) {
    /* '<S2>:1:98' */
    delta_x_P1P2 = rtu_trajectory_x[static_cast<int32_T>(*rtu_way_point_number)
      - 1];

    /* '<S2>:1:99' */
    distance = rtu_trajectory_y[static_cast<int32_T>(*rtu_way_point_number) - 1];

    /* '<S2>:1:100' */
    b_index = rtu_trajectory_yaw_angle[static_cast<int32_T>
      (*rtu_way_point_number) - 1];
  } else {
    /* '<S2>:1:103' */
    delta_x_P1P2 = rtu_trajectory_x[static_cast<int32_T>(b_index) - 1];

    /* '<S2>:1:104' */
    distance = rtu_trajectory_y[static_cast<int32_T>(b_index) - 1];

    /* '<S2>:1:105' */
    b_index = rtu_trajectory_yaw_angle[static_cast<int32_T>(b_index) - 1];
  }

  /* '<S2>:1:109' */
  delta_y_P1P2 = delta_x_P1P2 - *rtu_ENU_x;
  f_a = distance - *rtu_ENU_y;
  *rty_preview_chord_length = delta_y_P1P2 * delta_y_P1P2 + f_a * f_a;
  *rty_preview_chord_length = std::sqrt(*rty_preview_chord_length);

  /* '<S2>:1:114' */
  delta_y_P1P2 = (b_index - *rtu_ENU_yaw_angle) + 540.0;
  if (rtIsNaN(delta_y_P1P2) || rtIsInf(delta_y_P1P2)) {
    f_a = (rtNaN);
  } else if (delta_y_P1P2 == 0.0) {
    f_a = 0.0;
  } else {
    f_a = std::fmod(delta_y_P1P2, 360.0);
    if (f_a == 0.0) {
      f_a = 0.0;
    } else if (delta_y_P1P2 < 0.0) {
      f_a += 360.0;
    }
  }

  *rty_preview_angle_offset = f_a - 180.0;

  /* '<S2>:1:117' */
  localDW->preview_point_x_previous = delta_x_P1P2;

  /* '<S2>:1:118' */
  localDW->preview_point_y_previous = distance;

  /* '<S2>:1:119' */
  localDW->preview_yaw_angle_previous = b_index;
  *rty_preview_point_x = delta_x_P1P2;
  *rty_preview_point_y = distance;
  *rty_preview_distance = u1;
  *rty_preview_yaw_angle = b_index;

  /* End of MATLAB Function: '<Root>/Preview_Point_Calculate_By_Chord' */
}

/* Model initialize function */
void Preview_point_calculate_by_chord_initialize(const char_T **rt_errorStatus,
  RT_MODEL_Preview_point_calculate_by_chord_T *const
  Preview_point_calculate_by_chord_M, DW_Preview_point_calculate_by_chord_f_T
  *localDW)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatusPointer(Preview_point_calculate_by_chord_M, rt_errorStatus);

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(localDW), 0,
                     sizeof(DW_Preview_point_calculate_by_chord_f_T));
  localDW->preview_point_x_previous = 0.0;
  localDW->preview_point_y_previous = 0.0;
  localDW->preview_yaw_angle_previous = 0.0;
}

/*
 * Code generation for system model 'Closest_point_calculate'
 *
 * Model                      : Closest_point_calculate
 * Model version              : 4.15
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Thu May 12 12:47:54 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "Closest_point_calculate.h"
#include "Closest_point_calculate_private.h"
#include "Vector_projection_get_closest_point_m_IUTniha0.h"
#include "mod_2xj8za9I.h"

/* Forward declaration for local functions */
static void Closest_point_calculate_Trajectory_closest_point_info_get_m(real_T
  current_point_yaw_angle, real_T current_point_x, real_T current_point_y, const
  real_T trajectory_ENU_yaw_angle[6001], const real_T trajectory_ENU_x[6001],
  const real_T trajectory_ENU_y[6001], const real_T trajectory_curvature[6001],
  const real_T trajectory_segment_length[6001], real_T
  closest_segment_start_point_index_previous, real_T *closest_point_x, real_T
  *closest_point_y, real_T *closest_point_curvature, real_T
  *closest_segment_start_point_index, real_T *near_lateral_offset);

/* Function for MATLAB Function: '<Root>/Closest_Point_Calculate' */
static void Closest_point_calculate_Trajectory_closest_point_info_get_m(real_T
  current_point_yaw_angle, real_T current_point_x, real_T current_point_y, const
  real_T trajectory_ENU_yaw_angle[6001], const real_T trajectory_ENU_x[6001],
  const real_T trajectory_ENU_y[6001], const real_T trajectory_curvature[6001],
  const real_T trajectory_segment_length[6001], real_T
  closest_segment_start_point_index_previous, real_T *closest_point_x, real_T
  *closest_point_y, real_T *closest_point_curvature, real_T
  *closest_segment_start_point_index, real_T *near_lateral_offset)
{
  real_T closer_point_x_queue[100];
  real_T closer_point_y_queue[100];
  real_T delta_angle_queue[100];
  real_T near_lateral_offset_queue[100];
  real_T b_index;
  real_T delta_angle;
  real_T distance2;
  real_T end_index;
  real_T head_arc_length;
  real_T j_a;
  real_T neighboring_segment_closest_point1_y;
  real_T projection_rate;
  real_T start_index;
  int32_T closest_distance_index;
  int32_T g_index;
  int32_T min_delta_angle_index;
  int32_T queue_index;
  int16_T closer_point_index_queue[100];
  boolean_T closest_point_valid;
  boolean_T distance_relationship_transition_flag;
  boolean_T exitg1;
  closest_point_valid = false;
  *closest_point_x = trajectory_ENU_x[6000];
  *closest_point_y = trajectory_ENU_y[6000];
  *closest_point_curvature = trajectory_curvature[6000];
  *near_lateral_offset = 0.0;
  *closest_segment_start_point_index = 6001.0;
  projection_rate = 1.0;
  distance_relationship_transition_flag = false;
  if (0.0 < closest_segment_start_point_index_previous) {
    head_arc_length = 0.0;
    start_index = 1.0;
    queue_index = static_cast<int32_T>(((-1.0 -
      closest_segment_start_point_index_previous) + 2.0) / -1.0);
    closest_distance_index = 0;
    exitg1 = false;
    while ((!exitg1) && (closest_distance_index <= queue_index - 1)) {
      b_index = closest_segment_start_point_index_previous + -static_cast<real_T>
        (closest_distance_index);
      head_arc_length += trajectory_segment_length[static_cast<int32_T>(b_index)
        - 1];
      if (1.11 <= head_arc_length) {
        start_index = b_index;
        exitg1 = true;
      } else {
        closest_distance_index++;
      }
    }

    head_arc_length = 0.0;
    end_index = 5999.0;
    queue_index = 0;
    exitg1 = false;
    while ((!exitg1) && (queue_index <= static_cast<int32_T>((1.0 -
              (closest_segment_start_point_index_previous + 1.0)) + 5999.0) - 1))
    {
      b_index = (closest_segment_start_point_index_previous + 1.0) +
        static_cast<real_T>(queue_index);
      head_arc_length += trajectory_segment_length[static_cast<int32_T>(b_index)
        - 1];
      if (1.11 <= head_arc_length) {
        end_index = b_index;
        exitg1 = true;
      } else {
        queue_index++;
      }
    }

    queue_index = static_cast<int32_T>((1.0 - start_index) + end_index);
    closest_distance_index = 0;
    exitg1 = false;
    while ((!exitg1) && (closest_distance_index <= queue_index - 1)) {
      b_index = start_index + static_cast<real_T>(closest_distance_index);
      Vector_projection_get_closest_point_m_IUTniha0(current_point_x,
        current_point_y, trajectory_ENU_x[static_cast<int32_T>(b_index) - 1],
        trajectory_ENU_y[static_cast<int32_T>(b_index) - 1], trajectory_ENU_x[
        static_cast<int32_T>(b_index + 1.0) - 1], trajectory_ENU_y[static_cast<
        int32_T>(b_index + 1.0) - 1], &end_index,
        &neighboring_segment_closest_point1_y, &projection_rate);
      Vector_projection_get_closest_point_m_IUTniha0(current_point_x,
        current_point_y, trajectory_ENU_x[static_cast<int32_T>(b_index + 1.0) -
        1], trajectory_ENU_y[static_cast<int32_T>(b_index + 1.0) - 1],
        trajectory_ENU_x[static_cast<int32_T>(b_index + 2.0) - 1],
        trajectory_ENU_y[static_cast<int32_T>(b_index + 2.0) - 1], &delta_angle,
        &distance2, &head_arc_length);
      head_arc_length = current_point_x - end_index;
      j_a = current_point_y - neighboring_segment_closest_point1_y;
      head_arc_length = std::sqrt(head_arc_length * head_arc_length + j_a * j_a);
      delta_angle = current_point_x - delta_angle;
      distance2 = current_point_y - distance2;
      if (std::sqrt(delta_angle * delta_angle + distance2 * distance2) >
          head_arc_length) {
        closest_point_valid = true;
        *closest_point_x = end_index;
        *closest_point_y = neighboring_segment_closest_point1_y;
        *closest_point_curvature = (trajectory_curvature[static_cast<int32_T>
          (b_index + 1.0) - 1] - trajectory_curvature[static_cast<int32_T>
          (b_index) - 1]) * projection_rate + trajectory_curvature
          [static_cast<int32_T>(b_index) - 1];
        *closest_segment_start_point_index = b_index;
        *near_lateral_offset = head_arc_length;
        exitg1 = true;
      } else {
        closest_distance_index++;
      }
    }
  }

  if (!closest_point_valid) {
    for (queue_index = 0; queue_index < 100; queue_index++) {
      closer_point_x_queue[queue_index] = 0.0;
      closer_point_y_queue[queue_index] = 0.0;
      delta_angle_queue[queue_index] = 0.0;
      closer_point_index_queue[queue_index] = 0;
      near_lateral_offset_queue[queue_index] = 0.0;
    }

    closer_point_x_queue[0] = trajectory_ENU_x[0];
    closer_point_y_queue[0] = trajectory_ENU_y[0];
    delta_angle_queue[0] = std::abs(mod_2xj8za9I((current_point_yaw_angle -
      trajectory_ENU_yaw_angle[0]) + 540.0) - 180.0);
    closer_point_index_queue[0] = 1;
    head_arc_length = current_point_x - trajectory_ENU_x[0];
    start_index = current_point_y - trajectory_ENU_y[0];
    near_lateral_offset_queue[0] = std::sqrt(head_arc_length * head_arc_length +
      start_index * start_index);
    closer_point_x_queue[1] = trajectory_ENU_x[5999];
    closer_point_y_queue[1] = trajectory_ENU_y[5999];
    delta_angle_queue[1] = std::abs(mod_2xj8za9I((current_point_yaw_angle -
      trajectory_ENU_yaw_angle[5999]) + 540.0) - 180.0);
    closer_point_index_queue[1] = 6000;
    head_arc_length = current_point_x - trajectory_ENU_x[5999];
    start_index = current_point_y - trajectory_ENU_y[5999];
    near_lateral_offset_queue[1] = std::sqrt(head_arc_length * head_arc_length +
      start_index * start_index);
    queue_index = 1;
    for (closest_distance_index = 0; closest_distance_index < 5999;
         closest_distance_index++) {
      Vector_projection_get_closest_point_m_IUTniha0(current_point_x,
        current_point_y, trajectory_ENU_x[closest_distance_index],
        trajectory_ENU_y[closest_distance_index],
        trajectory_ENU_x[closest_distance_index + 1],
        trajectory_ENU_y[closest_distance_index + 1], &start_index, &b_index,
        &projection_rate);
      Vector_projection_get_closest_point_m_IUTniha0(current_point_x,
        current_point_y, trajectory_ENU_x[closest_distance_index + 1],
        trajectory_ENU_y[closest_distance_index + 1],
        trajectory_ENU_x[closest_distance_index + 2],
        trajectory_ENU_y[closest_distance_index + 2], &end_index,
        &neighboring_segment_closest_point1_y, &head_arc_length);
      head_arc_length = current_point_x - start_index;
      distance2 = current_point_y - b_index;
      head_arc_length = std::sqrt(head_arc_length * head_arc_length + distance2 *
        distance2);
      distance2 = current_point_x - end_index;
      delta_angle = current_point_y - neighboring_segment_closest_point1_y;
      distance2 = std::sqrt(distance2 * distance2 + delta_angle * delta_angle);
      delta_angle = std::abs(mod_2xj8za9I((current_point_yaw_angle -
        trajectory_ENU_yaw_angle[closest_distance_index]) + 540.0) - 180.0);
      if (distance2 > head_arc_length) {
        if (!distance_relationship_transition_flag) {
          j_a = (static_cast<real_T>(queue_index) + 1.0) + 1.0;
          if (!(j_a < 100.0)) {
            j_a = 100.0;
          }

          queue_index = static_cast<int32_T>(j_a) - 1;
          closer_point_x_queue[queue_index] = start_index;
          closer_point_y_queue[queue_index] = b_index;
          delta_angle_queue[queue_index] = delta_angle;
          closer_point_index_queue[queue_index] = static_cast<int16_T>
            (closest_distance_index + 1);
          near_lateral_offset_queue[queue_index] = head_arc_length;
          distance_relationship_transition_flag = true;
        }
      } else {
        distance_relationship_transition_flag = false;
        if (5999 <= closest_distance_index + 1) {
          j_a = (static_cast<real_T>(queue_index) + 1.0) + 1.0;
          if (!(j_a < 100.0)) {
            j_a = 100.0;
          }

          queue_index = static_cast<int32_T>(j_a) - 1;
          closer_point_x_queue[queue_index] = end_index;
          closer_point_y_queue[queue_index] =
            neighboring_segment_closest_point1_y;
          delta_angle_queue[queue_index] = delta_angle;
          closer_point_index_queue[queue_index] = static_cast<int16_T>
            (closest_distance_index + 2);
          near_lateral_offset_queue[queue_index] = distance2;
        }
      }
    }

    head_arc_length = near_lateral_offset_queue[0];
    closest_distance_index = 0;
    start_index = delta_angle_queue[0];
    min_delta_angle_index = 0;
    for (g_index = 0; g_index <= queue_index; g_index++) {
      if (head_arc_length >= near_lateral_offset_queue[g_index]) {
        head_arc_length = near_lateral_offset_queue[g_index];
        closest_distance_index = g_index;
      }

      if ((2.0 > near_lateral_offset_queue[g_index]) && (start_index >=
           delta_angle_queue[g_index])) {
        start_index = delta_angle_queue[g_index];
        min_delta_angle_index = g_index;
      }
    }

    if ((!(2.0 < head_arc_length)) && (90.0 <=
         delta_angle_queue[closest_distance_index])) {
      closest_distance_index = min_delta_angle_index;
    }

    *closest_point_x = closer_point_x_queue[closest_distance_index];
    *closest_point_y = closer_point_y_queue[closest_distance_index];
    *closest_point_curvature =
      (trajectory_curvature[closer_point_index_queue[closest_distance_index]] -
       trajectory_curvature[closer_point_index_queue[closest_distance_index] - 1])
      * projection_rate +
      trajectory_curvature[closer_point_index_queue[closest_distance_index] - 1];
    *closest_segment_start_point_index =
      closer_point_index_queue[closest_distance_index];
    *near_lateral_offset = near_lateral_offset_queue[closest_distance_index];
  }

  projection_rate = 0.017453292519943295 * current_point_yaw_angle;
  if (0.0 > (*closest_point_y - current_point_y) * std::cos(projection_rate) - (*
       closest_point_x - current_point_x) * std::sin(projection_rate)) {
    *near_lateral_offset = -*near_lateral_offset;
  }
}

/* System initialize for referenced model: 'Closest_point_calculate' */
void Closest_point_calculate_Init(DW_Closest_point_calculate_f_T *localDW)
{
  /* SystemInitialize for MATLAB Function: '<Root>/Closest_Point_Calculate' */
  localDW->closest_point_x_previous = 0.0;
  localDW->closest_point_y_previous = 0.0;
  localDW->closest_point_curvature_previous = 0.0;
}

/* System reset for referenced model: 'Closest_point_calculate' */
void Closest_point_calculate_Reset(DW_Closest_point_calculate_f_T *localDW)
{
  /* SystemReset for MATLAB Function: '<Root>/Closest_Point_Calculate' */
  localDW->closest_point_x_previous = 0.0;
  localDW->closest_point_y_previous = 0.0;
  localDW->closest_point_curvature_previous = 0.0;
}

/* Output and update for referenced model: 'Closest_point_calculate' */
void Closest_point_calculate(const real_T *rtu_ENU_yaw_angle, const real_T
  *rtu_ENU_x, const real_T *rtu_ENU_y, const real_T *rtu_way_point_number, const
  real_T rtu_trajectory_yaw_angle[6001], const real_T rtu_trajectory_x[6001],
  const real_T rtu_trajectory_y[6001], const real_T rtu_trajectory_curvature
  [6001], const real_T rtu_segment_length[6001], const real_T *rtu_tram_speed,
  const real_T *rtu_preview_time, const real_T rtu_segment_ID[6001], const
  real_T rtu_vision_priority[6001], const real_T rtu_GNSS_priority[6001], real_T
  *rty_closest_point_x, real_T *rty_closest_point_y, real_T
  *rty_closest_point_curvature, real_T *rty_faraway_point_curvature, real_T
  *rty_closest_segment_start_point_index, real_T *rty_near_lateral_offset,
  real_T *rty_closest_point_segment_ID, real_T
  *rty_closest_point_vision_priority, real_T *rty_closest_point_GNSS_priority,
  DW_Closest_point_calculate_f_T *localDW)
{
  real_T a;
  real_T b_a;
  real_T b_index;
  real_T closest_point_curvature;
  real_T closest_segment_start_point_index;
  real_T cumulative_length;
  real_T faraway_distance;
  real_T preview_time;
  real_T way_point_number;

  /* MATLAB Function: '<Root>/Closest_Point_Calculate' */
  way_point_number = *rtu_way_point_number;
  faraway_distance = *rtu_tram_speed;
  preview_time = *rtu_preview_time;

  /* MATLAB Function 'Closest_Point_Calculate': '<S1>:1' */
  /* '<S1>:1:55' */
  *rty_closest_point_x = localDW->closest_point_x_previous;

  /* '<S1>:1:56' */
  *rty_closest_point_y = localDW->closest_point_y_previous;

  /* '<S1>:1:57' */
  *rty_closest_point_curvature = localDW->closest_point_curvature_previous;

  /* '<S1>:1:58' */
  *rty_faraway_point_curvature = 0.0;

  /* '<S1>:1:59' */
  *rty_closest_segment_start_point_index = 1.0;

  /* '<S1>:1:60' */
  a = *rtu_ENU_x - localDW->closest_point_x_previous;
  b_a = *rtu_ENU_y - localDW->closest_point_y_previous;
  *rty_near_lateral_offset = a * a + b_a * b_a;
  *rty_near_lateral_offset = std::sqrt(*rty_near_lateral_offset);

  /* '<S1>:1:62' */
  *rty_closest_point_segment_ID = 0.0;

  /* '<S1>:1:63' */
  *rty_closest_point_vision_priority = 0.0;

  /* '<S1>:1:64' */
  *rty_closest_point_GNSS_priority = 0.0;

  /* '<S1>:1:67' */
  /* '<S1>:1:68' */
  /* '<S1>:1:69' */
  /* '<S1>:1:70' */
  /* '<S1>:1:71' */
  if (!(3.0 > *rtu_way_point_number)) {
    /* '<S1>:1:81' */
    Closest_point_calculate_Trajectory_closest_point_info_get_m
      (*rtu_ENU_yaw_angle, *rtu_ENU_x, *rtu_ENU_y, rtu_trajectory_yaw_angle,
       rtu_trajectory_x, rtu_trajectory_y, rtu_trajectory_curvature,
       rtu_segment_length, 1.0, &a, &b_a, &closest_point_curvature,
       &closest_segment_start_point_index, rty_near_lateral_offset);

    /* '<S1>:1:81' */
    *rty_closest_point_x = a;

    /* '<S1>:1:81' */
    *rty_closest_point_y = b_a;

    /* '<S1>:1:81' */
    *rty_closest_point_curvature = closest_point_curvature;

    /* '<S1>:1:82' */
    *rty_closest_segment_start_point_index = closest_segment_start_point_index;

    /* '<S1>:1:82' */
    /* '<S1>:1:87' */
    cumulative_length = 0.0;

    /* '<S1>:1:88' */
    b_index = closest_segment_start_point_index + 1.0;

    /* '<S1>:1:89' */
    faraway_distance *= preview_time;
    while ((way_point_number > b_index) && (faraway_distance > cumulative_length))
    {
      /* '<S1>:1:90' */
      /* '<S1>:1:91' */
      cumulative_length += rtu_segment_length[static_cast<int32_T>(b_index) - 1];

      /* '<S1>:1:92' */
      b_index++;
    }

    /* '<S1>:1:96' */
    *rty_faraway_point_curvature = rtu_trajectory_curvature[static_cast<int32_T>
      (b_index) - 1];

    /* '<S1>:1:99' */
    *rty_closest_point_segment_ID = rtu_segment_ID[static_cast<int32_T>
      (closest_segment_start_point_index) - 1];

    /* '<S1>:1:100' */
    *rty_closest_point_vision_priority = rtu_vision_priority[static_cast<int32_T>
      (closest_segment_start_point_index) - 1];

    /* '<S1>:1:101' */
    *rty_closest_point_GNSS_priority = rtu_GNSS_priority[static_cast<int32_T>
      (closest_segment_start_point_index) - 1];

    /* '<S1>:1:104' */
    localDW->closest_point_x_previous = a;

    /* '<S1>:1:105' */
    localDW->closest_point_y_previous = b_a;

    /* '<S1>:1:106' */
    localDW->closest_point_curvature_previous = closest_point_curvature;
  } else {
    /* '<S1>:1:75' */
  }

  /* End of MATLAB Function: '<Root>/Closest_Point_Calculate' */
}

/* Model initialize function */
void Closest_point_calculate_initialize(const char_T **rt_errorStatus,
  RT_MODEL_Closest_point_calculate_T *const Closest_point_calculate_M,
  DW_Closest_point_calculate_f_T *localDW)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatusPointer(Closest_point_calculate_M, rt_errorStatus);

  /* states (dwork) */
  localDW->closest_point_x_previous = 0.0;
  localDW->closest_point_y_previous = 0.0;
  localDW->closest_point_curvature_previous = 0.0;
}

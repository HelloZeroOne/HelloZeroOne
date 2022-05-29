/*
 * Code generation for system model 'ADK_longitudinal_controller'
 *
 * Model                      : ADK_longitudinal_controller
 * Model version              : 4.4
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Thu May 12 12:46:13 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "ADK_longitudinal_controller.h"
#include "ADK_longitudinal_controller_private.h"

/* System initialize for referenced model: 'ADK_longitudinal_controller' */
void ADK_longitudinal_controller_Init(DW_ADK_longitudinal_controller_f_T
  *localDW)
{
  /* InitializeConditions for DiscreteIntegrator: '<S39>/Integrator' */
  localDW->Integrator_DSTATE =
    ADK_longitudinal_controller_cal->DiscretePIDController_InitialConditionForIntegrator;
  localDW->Integrator_PrevResetState = 0;

  /* InitializeConditions for Delay: '<S32>/UD' */
  localDW->UD_DSTATE =
    ADK_longitudinal_controller_cal->DiscretePIDController_DifferentiatorICPrevScaledInput;
}

/* System reset for referenced model: 'ADK_longitudinal_controller' */
void ADK_longitudinal_controller_Reset(DW_ADK_longitudinal_controller_f_T
  *localDW)
{
  /* InitializeConditions for DiscreteIntegrator: '<S39>/Integrator' */
  localDW->Integrator_DSTATE =
    ADK_longitudinal_controller_cal->DiscretePIDController_InitialConditionForIntegrator;
  localDW->Integrator_PrevResetState = 0;

  /* InitializeConditions for Delay: '<S32>/UD' */
  localDW->UD_DSTATE =
    ADK_longitudinal_controller_cal->DiscretePIDController_DifferentiatorICPrevScaledInput;
}

/* Output and update for referenced model: 'ADK_longitudinal_controller' */
void ADK_longitudinal_controller(const IDSWorkStatus *rtu_InBus_IDS_work_status,
  const real_T *rtu_InBus_tram_info_speed_input_value, const Validation
  *rtu_InBus_tram_info_speed_input_value_lock, const real_T
  *rtu_InBus_tram_info_speed_original_value_current, const real_T
  *rtu_InBus_tram_info_speed_original_value_previous, const real_T
  rtu_InBus_tram_info_speed_original_value_queue[10], const real_T
  *rtu_InBus_tram_info_speed_refitted_value_current, const real_T
  *rtu_InBus_tram_info_speed_refitted_value_previous, const real_T
  rtu_InBus_tram_info_speed_refitted_value_queue[10], const Validation
  *rtu_InBus_tram_info_speed_processed_value_lock, const real_T
  *rtu_InBus_tram_info_speed_processed_value_current, const real_T
  *rtu_InBus_tram_info_speed_processed_value_previous, const real_T
  rtu_InBus_tram_info_speed_processed_value_queue[10], const real_T
  *rtu_InBus_tram_info_speed_unit_converter_factor, const SignalProcessingMode
  *rtu_InBus_tram_info_speed_processing_mode, const real_T
  *rtu_InBus_tram_info_speed_increment_limit, const real_T
  *rtu_InBus_tram_info_speed_value_offset, const Validation
  *rtu_InBus_tram_info_speed_absolute_amplitude_limit_mode, const real_T
  *rtu_InBus_tram_info_speed_max_value, const real_T
  *rtu_InBus_tram_info_speed_min_value, const real_T
  *rtu_InBus_tram_info_speed_jump_abnormal_tolerance, const uint32_T
  *rtu_InBus_tram_info_speed_recovery_check_times, const Validation
  *rtu_InBus_tram_info_speed_jump_abnormal_fault, const real_T
  *rtu_InBus_tram_info_Lf, const real_T *rtu_InBus_tram_info_Lr, const
  DrivingMode *rtu_InBus_tram_info_driving_mode, const real_T
  *rtu_InBus_steering_axle_info_actual_angle_input_value, const Validation
  *rtu_InBus_steering_axle_info_actual_angle_input_value_lock, const real_T
  *rtu_InBus_steering_axle_info_actual_angle_original_value_current, const
  real_T *rtu_InBus_steering_axle_info_actual_angle_original_value_previous,
  const real_T rtu_InBus_steering_axle_info_actual_angle_original_value_queue[10],
  const real_T *rtu_InBus_steering_axle_info_actual_angle_refitted_value_current,
  const real_T
  *rtu_InBus_steering_axle_info_actual_angle_refitted_value_previous, const
  real_T rtu_InBus_steering_axle_info_actual_angle_refitted_value_queue[10],
  const Validation
  *rtu_InBus_steering_axle_info_actual_angle_processed_value_lock, const real_T *
  rtu_InBus_steering_axle_info_actual_angle_processed_value_current, const
  real_T *rtu_InBus_steering_axle_info_actual_angle_processed_value_previous,
  const real_T rtu_InBus_steering_axle_info_actual_angle_processed_value_queue
  [10], const real_T
  *rtu_InBus_steering_axle_info_actual_angle_unit_converter_factor, const
  SignalProcessingMode
  *rtu_InBus_steering_axle_info_actual_angle_processing_mode, const real_T
  *rtu_InBus_steering_axle_info_actual_angle_increment_limit, const real_T
  *rtu_InBus_steering_axle_info_actual_angle_value_offset, const Validation
  *rtu_InBus_steering_axle_info_actual_angle_absolute_amplitude_limit_mode,
  const real_T *rtu_InBus_steering_axle_info_actual_angle_max_value, const
  real_T *rtu_InBus_steering_axle_info_actual_angle_min_value, const real_T
  *rtu_InBus_steering_axle_info_actual_angle_jump_abnormal_tolerance, const
  uint32_T *rtu_InBus_steering_axle_info_actual_angle_recovery_check_times,
  const Validation
  *rtu_InBus_steering_axle_info_actual_angle_jump_abnormal_fault, const real_T
  *rtu_InBus_steering_axle_info_set_angle_input_value, const Validation
  *rtu_InBus_steering_axle_info_set_angle_input_value_lock, const real_T
  *rtu_InBus_steering_axle_info_set_angle_original_value_current, const real_T
  *rtu_InBus_steering_axle_info_set_angle_original_value_previous, const real_T
  rtu_InBus_steering_axle_info_set_angle_original_value_queue[10], const real_T *
  rtu_InBus_steering_axle_info_set_angle_refitted_value_current, const real_T
  *rtu_InBus_steering_axle_info_set_angle_refitted_value_previous, const real_T
  rtu_InBus_steering_axle_info_set_angle_refitted_value_queue[10], const
  Validation *rtu_InBus_steering_axle_info_set_angle_processed_value_lock, const
  real_T *rtu_InBus_steering_axle_info_set_angle_processed_value_current, const
  real_T *rtu_InBus_steering_axle_info_set_angle_processed_value_previous, const
  real_T rtu_InBus_steering_axle_info_set_angle_processed_value_queue[10], const
  real_T *rtu_InBus_steering_axle_info_set_angle_unit_converter_factor, const
  SignalProcessingMode *rtu_InBus_steering_axle_info_set_angle_processing_mode,
  const real_T *rtu_InBus_steering_axle_info_set_angle_increment_limit, const
  real_T *rtu_InBus_steering_axle_info_set_angle_value_offset, const Validation *
  rtu_InBus_steering_axle_info_set_angle_absolute_amplitude_limit_mode, const
  real_T *rtu_InBus_steering_axle_info_set_angle_max_value, const real_T
  *rtu_InBus_steering_axle_info_set_angle_min_value, const real_T
  *rtu_InBus_steering_axle_info_set_angle_jump_abnormal_tolerance, const
  uint32_T *rtu_InBus_steering_axle_info_set_angle_recovery_check_times, const
  Validation *rtu_InBus_steering_axle_info_set_angle_jump_abnormal_fault, const
  uint32_T *rtu_InBus_GNSS_info_GNSS_life_value_current, const uint32_T
  *rtu_InBus_GNSS_info_GNSS_life_value_previous, const uint32_T
  *rtu_InBus_GNSS_info_GNSS_life_unchanged_abnormal_check_times, const
  Validation *rtu_InBus_GNSS_info_GNSS_life_unchanged_abnormal_fault, const
  real_T *rtu_InBus_GNSS_info_ENU_yaw_angle, const real_T
  *rtu_InBus_GNSS_info_ENU_x, const real_T *rtu_InBus_GNSS_info_ENU_y, const
  Validation *rtu_InBus_GNSS_info_location_valid_status, const real_T
  *rtu_InBus_reference_trajectory_info_way_point_number, const real_T
  rtu_InBus_reference_trajectory_info_segment_length[6001], const real_T
  rtu_InBus_reference_trajectory_info_trajectory_yaw_angle[6001], const real_T
  rtu_InBus_reference_trajectory_info_trajectory_x[6001], const real_T
  rtu_InBus_reference_trajectory_info_trajectory_y[6001], const real_T
  rtu_InBus_reference_trajectory_info_trajectory_curvature[6001], const real_T
  *rtu_InBus_GNSS_control_info_set_steering_axle_angle_input_value, const
  Validation
  *rtu_InBus_GNSS_control_info_set_steering_axle_angle_input_value_lock, const
  real_T
  *rtu_InBus_GNSS_control_info_set_steering_axle_angle_original_value_current,
  const real_T
  *rtu_InBus_GNSS_control_info_set_steering_axle_angle_original_value_previous,
  const real_T
  rtu_InBus_GNSS_control_info_set_steering_axle_angle_original_value_queue[10],
  const real_T
  *rtu_InBus_GNSS_control_info_set_steering_axle_angle_refitted_value_current,
  const real_T
  *rtu_InBus_GNSS_control_info_set_steering_axle_angle_refitted_value_previous,
  const real_T
  rtu_InBus_GNSS_control_info_set_steering_axle_angle_refitted_value_queue[10],
  const Validation
  *rtu_InBus_GNSS_control_info_set_steering_axle_angle_processed_value_lock,
  const real_T
  *rtu_InBus_GNSS_control_info_set_steering_axle_angle_processed_value_current,
  const real_T
  *rtu_InBus_GNSS_control_info_set_steering_axle_angle_processed_value_previous,
  const real_T
  rtu_InBus_GNSS_control_info_set_steering_axle_angle_processed_value_queue[10],
  const real_T
  *rtu_InBus_GNSS_control_info_set_steering_axle_angle_unit_converter_factor,
  const SignalProcessingMode
  *rtu_InBus_GNSS_control_info_set_steering_axle_angle_processing_mode, const
  real_T *rtu_InBus_GNSS_control_info_set_steering_axle_angle_increment_limit,
  const real_T *rtu_InBus_GNSS_control_info_set_steering_axle_angle_value_offset,
  const Validation
  *rtu_InBus_GNSS_control_info_set_steering_axle_angle_absolute_amplitude_limit_mode,
  const real_T *rtu_InBus_GNSS_control_info_set_steering_axle_angle_max_value,
  const real_T *rtu_InBus_GNSS_control_info_set_steering_axle_angle_min_value,
  const real_T
  *rtu_InBus_GNSS_control_info_set_steering_axle_angle_jump_abnormal_tolerance,
  const uint32_T
  *rtu_InBus_GNSS_control_info_set_steering_axle_angle_recovery_check_times,
  const Validation
  *rtu_InBus_GNSS_control_info_set_steering_axle_angle_jump_abnormal_fault,
  const real_T *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_input_value,
  const Validation
  *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_input_value_lock, const
  real_T
  *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_original_value_current,
  const real_T
  *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_original_value_previous,
  const real_T
  rtu_InBus_GNSS_control_info_stanley_set_axle_angle_original_value_queue[10],
  const real_T
  *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_refitted_value_current,
  const real_T
  *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_refitted_value_previous,
  const real_T
  rtu_InBus_GNSS_control_info_stanley_set_axle_angle_refitted_value_queue[10],
  const Validation
  *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_processed_value_lock,
  const real_T
  *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_processed_value_current,
  const real_T
  *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_processed_value_previous,
  const real_T
  rtu_InBus_GNSS_control_info_stanley_set_axle_angle_processed_value_queue[10],
  const real_T
  *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_unit_converter_factor,
  const SignalProcessingMode
  *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_processing_mode, const
  real_T *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_increment_limit,
  const real_T *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_value_offset,
  const Validation
  *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_absolute_amplitude_limit_mode,
  const real_T *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_max_value,
  const real_T *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_min_value,
  const real_T
  *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_jump_abnormal_tolerance,
  const uint32_T
  *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_recovery_check_times,
  const Validation
  *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_jump_abnormal_fault, const
  real_T *rtu_InBus_GNSS_control_info_preview_time, const real_T
  *rtu_InBus_GNSS_control_info_preview_distance, const real_T
  *rtu_InBus_GNSS_control_info_preview_chord_length, const real_T
  *rtu_InBus_GNSS_control_info_near_lateral_offset, const real_T
  *rtu_InBus_GNSS_control_info_preview_angle_offset, const real_T
  *rtu_InBus_GNSS_control_info_closest_point_x, const real_T
  *rtu_InBus_GNSS_control_info_closest_point_y, const real_T
  *rtu_InBus_GNSS_control_info_closest_point_curvature, const real_T
  *rtu_InBus_GNSS_control_info_faraway_point_curvature, const real_T
  *rtu_InBus_GNSS_control_info_closest_segment_start_point_index, const real_T
  *rtu_InBus_GNSS_control_info_preview_point_x, const real_T
  *rtu_InBus_GNSS_control_info_preview_point_y, const real_T
  *rtu_InBus_GNSS_control_info_min_preview_distance, const real_T
  *rtu_InBus_GNSS_control_info_K_lateral_offset, IDSWorkStatus
  *rty_OutBus_IDS_work_status, real_T *rty_OutBus_tram_info_speed_input_value,
  Validation *rty_OutBus_tram_info_speed_input_value_lock, real_T
  *rty_OutBus_tram_info_speed_original_value_current, real_T
  *rty_OutBus_tram_info_speed_original_value_previous, real_T
  rty_OutBus_tram_info_speed_original_value_queue[10], real_T
  *rty_OutBus_tram_info_speed_refitted_value_current, real_T
  *rty_OutBus_tram_info_speed_refitted_value_previous, real_T
  rty_OutBus_tram_info_speed_refitted_value_queue[10], Validation
  *rty_OutBus_tram_info_speed_processed_value_lock, real_T
  *rty_OutBus_tram_info_speed_processed_value_current, real_T
  *rty_OutBus_tram_info_speed_processed_value_previous, real_T
  rty_OutBus_tram_info_speed_processed_value_queue[10], real_T
  *rty_OutBus_tram_info_speed_unit_converter_factor, SignalProcessingMode
  *rty_OutBus_tram_info_speed_processing_mode, real_T
  *rty_OutBus_tram_info_speed_increment_limit, real_T
  *rty_OutBus_tram_info_speed_value_offset, Validation
  *rty_OutBus_tram_info_speed_absolute_amplitude_limit_mode, real_T
  *rty_OutBus_tram_info_speed_max_value, real_T
  *rty_OutBus_tram_info_speed_min_value, real_T
  *rty_OutBus_tram_info_speed_jump_abnormal_tolerance, uint32_T
  *rty_OutBus_tram_info_speed_recovery_check_times, Validation
  *rty_OutBus_tram_info_speed_jump_abnormal_fault, real_T
  *rty_OutBus_tram_info_Lf, real_T *rty_OutBus_tram_info_Lr, DrivingMode
  *rty_OutBus_tram_info_driving_mode, real_T
  *rty_OutBus_steering_axle_info_actual_angle_input_value, Validation
  *rty_OutBus_steering_axle_info_actual_angle_input_value_lock, real_T
  *rty_OutBus_steering_axle_info_actual_angle_original_value_current, real_T
  *rty_OutBus_steering_axle_info_actual_angle_original_value_previous, real_T
  rty_OutBus_steering_axle_info_actual_angle_original_value_queue[10], real_T
  *rty_OutBus_steering_axle_info_actual_angle_refitted_value_current, real_T
  *rty_OutBus_steering_axle_info_actual_angle_refitted_value_previous, real_T
  rty_OutBus_steering_axle_info_actual_angle_refitted_value_queue[10],
  Validation *rty_OutBus_steering_axle_info_actual_angle_processed_value_lock,
  real_T *rty_OutBus_steering_axle_info_actual_angle_processed_value_current,
  real_T *rty_OutBus_steering_axle_info_actual_angle_processed_value_previous,
  real_T rty_OutBus_steering_axle_info_actual_angle_processed_value_queue[10],
  real_T *rty_OutBus_steering_axle_info_actual_angle_unit_converter_factor,
  SignalProcessingMode
  *rty_OutBus_steering_axle_info_actual_angle_processing_mode, real_T
  *rty_OutBus_steering_axle_info_actual_angle_increment_limit, real_T
  *rty_OutBus_steering_axle_info_actual_angle_value_offset, Validation
  *rty_OutBus_steering_axle_info_actual_angle_absolute_amplitude_limit_mode,
  real_T *rty_OutBus_steering_axle_info_actual_angle_max_value, real_T
  *rty_OutBus_steering_axle_info_actual_angle_min_value, real_T
  *rty_OutBus_steering_axle_info_actual_angle_jump_abnormal_tolerance, uint32_T *
  rty_OutBus_steering_axle_info_actual_angle_recovery_check_times, Validation
  *rty_OutBus_steering_axle_info_actual_angle_jump_abnormal_fault, real_T
  *rty_OutBus_steering_axle_info_set_angle_input_value, Validation
  *rty_OutBus_steering_axle_info_set_angle_input_value_lock, real_T
  *rty_OutBus_steering_axle_info_set_angle_original_value_current, real_T
  *rty_OutBus_steering_axle_info_set_angle_original_value_previous, real_T
  rty_OutBus_steering_axle_info_set_angle_original_value_queue[10], real_T
  *rty_OutBus_steering_axle_info_set_angle_refitted_value_current, real_T
  *rty_OutBus_steering_axle_info_set_angle_refitted_value_previous, real_T
  rty_OutBus_steering_axle_info_set_angle_refitted_value_queue[10], Validation
  *rty_OutBus_steering_axle_info_set_angle_processed_value_lock, real_T
  *rty_OutBus_steering_axle_info_set_angle_processed_value_current, real_T
  *rty_OutBus_steering_axle_info_set_angle_processed_value_previous, real_T
  rty_OutBus_steering_axle_info_set_angle_processed_value_queue[10], real_T
  *rty_OutBus_steering_axle_info_set_angle_unit_converter_factor,
  SignalProcessingMode *rty_OutBus_steering_axle_info_set_angle_processing_mode,
  real_T *rty_OutBus_steering_axle_info_set_angle_increment_limit, real_T
  *rty_OutBus_steering_axle_info_set_angle_value_offset, Validation
  *rty_OutBus_steering_axle_info_set_angle_absolute_amplitude_limit_mode, real_T
  *rty_OutBus_steering_axle_info_set_angle_max_value, real_T
  *rty_OutBus_steering_axle_info_set_angle_min_value, real_T
  *rty_OutBus_steering_axle_info_set_angle_jump_abnormal_tolerance, uint32_T
  *rty_OutBus_steering_axle_info_set_angle_recovery_check_times, Validation
  *rty_OutBus_steering_axle_info_set_angle_jump_abnormal_fault, uint32_T
  *rty_OutBus_GNSS_info_GNSS_life_value_current, uint32_T
  *rty_OutBus_GNSS_info_GNSS_life_value_previous, uint32_T
  *rty_OutBus_GNSS_info_GNSS_life_unchanged_abnormal_check_times, Validation
  *rty_OutBus_GNSS_info_GNSS_life_unchanged_abnormal_fault, real_T
  *rty_OutBus_GNSS_info_ENU_yaw_angle, real_T *rty_OutBus_GNSS_info_ENU_x,
  real_T *rty_OutBus_GNSS_info_ENU_y, Validation
  *rty_OutBus_GNSS_info_location_valid_status, real_T
  *rty_OutBus_reference_trajectory_info_way_point_number, real_T
  rty_OutBus_reference_trajectory_info_segment_length[6001], real_T
  rty_OutBus_reference_trajectory_info_trajectory_yaw_angle[6001], real_T
  rty_OutBus_reference_trajectory_info_trajectory_x[6001], real_T
  rty_OutBus_reference_trajectory_info_trajectory_y[6001], real_T
  rty_OutBus_reference_trajectory_info_trajectory_curvature[6001], real_T
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_input_value, Validation *
  rty_OutBus_GNSS_control_info_set_steering_axle_angle_input_value_lock, real_T *
  rty_OutBus_GNSS_control_info_set_steering_axle_angle_original_value_current,
  real_T
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_original_value_previous,
  real_T
  rty_OutBus_GNSS_control_info_set_steering_axle_angle_original_value_queue[10],
  real_T
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_refitted_value_current,
  real_T
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_refitted_value_previous,
  real_T
  rty_OutBus_GNSS_control_info_set_steering_axle_angle_refitted_value_queue[10],
  Validation
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_processed_value_lock,
  real_T
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_processed_value_current,
  real_T
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_processed_value_previous,
  real_T
  rty_OutBus_GNSS_control_info_set_steering_axle_angle_processed_value_queue[10],
  real_T
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_unit_converter_factor,
  SignalProcessingMode
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_processing_mode, real_T *
  rty_OutBus_GNSS_control_info_set_steering_axle_angle_increment_limit, real_T
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_value_offset, Validation
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_absolute_amplitude_limit_mode,
  real_T *rty_OutBus_GNSS_control_info_set_steering_axle_angle_max_value, real_T
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_min_value, real_T
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_jump_abnormal_tolerance,
  uint32_T
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_recovery_check_times,
  Validation
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_jump_abnormal_fault,
  real_T *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_input_value,
  Validation
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_input_value_lock, real_T *
  rty_OutBus_GNSS_control_info_stanley_set_axle_angle_original_value_current,
  real_T
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_original_value_previous,
  real_T
  rty_OutBus_GNSS_control_info_stanley_set_axle_angle_original_value_queue[10],
  real_T
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_refitted_value_current,
  real_T
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_refitted_value_previous,
  real_T
  rty_OutBus_GNSS_control_info_stanley_set_axle_angle_refitted_value_queue[10],
  Validation
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_processed_value_lock,
  real_T
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_processed_value_current,
  real_T
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_processed_value_previous,
  real_T
  rty_OutBus_GNSS_control_info_stanley_set_axle_angle_processed_value_queue[10],
  real_T
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_unit_converter_factor,
  SignalProcessingMode
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_processing_mode, real_T
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_increment_limit, real_T
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_value_offset, Validation *
  rty_OutBus_GNSS_control_info_stanley_set_axle_angle_absolute_amplitude_limit_mode,
  real_T *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_max_value, real_T *
  rty_OutBus_GNSS_control_info_stanley_set_axle_angle_min_value, real_T
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_jump_abnormal_tolerance,
  uint32_T
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_recovery_check_times,
  Validation
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_jump_abnormal_fault,
  real_T *rty_OutBus_GNSS_control_info_preview_time, real_T
  *rty_OutBus_GNSS_control_info_preview_distance, real_T
  *rty_OutBus_GNSS_control_info_preview_chord_length, real_T
  *rty_OutBus_GNSS_control_info_near_lateral_offset, real_T
  *rty_OutBus_GNSS_control_info_preview_angle_offset, real_T
  *rty_OutBus_GNSS_control_info_closest_point_x, real_T
  *rty_OutBus_GNSS_control_info_closest_point_y, real_T
  *rty_OutBus_GNSS_control_info_closest_point_curvature, real_T
  *rty_OutBus_GNSS_control_info_faraway_point_curvature, real_T
  *rty_OutBus_GNSS_control_info_closest_segment_start_point_index, real_T
  *rty_OutBus_GNSS_control_info_preview_point_x, real_T
  *rty_OutBus_GNSS_control_info_preview_point_y, real_T
  *rty_OutBus_GNSS_control_info_min_preview_distance, real_T
  *rty_OutBus_GNSS_control_info_K_lateral_offset, real_T
  *rty_OutBus_longitudinal_control_info_set_brake_pedal, Gear
  *rty_OutBus_longitudinal_control_info_set_gear, real_T
  *rty_OutBus_longitudinal_control_info_set_throttle_pedal,
  B_ADK_longitudinal_controller_c_T *localB, DW_ADK_longitudinal_controller_f_T *
  localDW, ZCE_ADK_longitudinal_controller_T *localZCE)
{
  real_T u0;
  real_T u1;
  real_T u2;
  boolean_T zcEvent;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_IDS_work_status = *rtu_InBus_IDS_work_status;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_tram_info_speed_processed_value_lock =
    *rtu_InBus_tram_info_speed_processed_value_lock;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_value_offset =
    *rtu_InBus_GNSS_control_info_set_steering_axle_angle_value_offset;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_absolute_amplitude_limit_mode
    =
    *rtu_InBus_GNSS_control_info_set_steering_axle_angle_absolute_amplitude_limit_mode;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_max_value =
    *rtu_InBus_GNSS_control_info_set_steering_axle_angle_max_value;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_min_value =
    *rtu_InBus_GNSS_control_info_set_steering_axle_angle_min_value;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_jump_abnormal_tolerance =
    *rtu_InBus_GNSS_control_info_set_steering_axle_angle_jump_abnormal_tolerance;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_recovery_check_times =
    *rtu_InBus_GNSS_control_info_set_steering_axle_angle_recovery_check_times;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_jump_abnormal_fault =
    *rtu_InBus_GNSS_control_info_set_steering_axle_angle_jump_abnormal_fault;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_input_value =
    *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_input_value;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_input_value_lock =
    *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_input_value_lock;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_original_value_current = *
    rtu_InBus_GNSS_control_info_stanley_set_axle_angle_original_value_current;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_tram_info_speed_processed_value_current =
    *rtu_InBus_tram_info_speed_processed_value_current;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_original_value_previous =
    *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_original_value_previous;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_refitted_value_current = *
    rtu_InBus_GNSS_control_info_stanley_set_axle_angle_refitted_value_current;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_refitted_value_previous =
    *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_refitted_value_previous;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_processed_value_lock =
    *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_processed_value_lock;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_processed_value_current =
    *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_processed_value_current;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_processed_value_previous =
    *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_processed_value_previous;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_unit_converter_factor =
    *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_unit_converter_factor;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_tram_info_speed_processed_value_previous =
    *rtu_InBus_tram_info_speed_processed_value_previous;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_processing_mode =
    *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_processing_mode;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_increment_limit =
    *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_increment_limit;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_value_offset =
    *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_value_offset;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_absolute_amplitude_limit_mode
    =
    *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_absolute_amplitude_limit_mode;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_max_value =
    *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_max_value;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_min_value =
    *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_min_value;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_jump_abnormal_tolerance =
    *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_jump_abnormal_tolerance;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_recovery_check_times =
    *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_recovery_check_times;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_stanley_set_axle_angle_jump_abnormal_fault =
    *rtu_InBus_GNSS_control_info_stanley_set_axle_angle_jump_abnormal_fault;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_preview_time =
    *rtu_InBus_GNSS_control_info_preview_time;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_preview_distance =
    *rtu_InBus_GNSS_control_info_preview_distance;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_preview_chord_length =
    *rtu_InBus_GNSS_control_info_preview_chord_length;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_near_lateral_offset =
    *rtu_InBus_GNSS_control_info_near_lateral_offset;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_preview_angle_offset =
    *rtu_InBus_GNSS_control_info_preview_angle_offset;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_closest_point_x =
    *rtu_InBus_GNSS_control_info_closest_point_x;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_closest_point_y =
    *rtu_InBus_GNSS_control_info_closest_point_y;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_closest_point_curvature =
    *rtu_InBus_GNSS_control_info_closest_point_curvature;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_faraway_point_curvature =
    *rtu_InBus_GNSS_control_info_faraway_point_curvature;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_closest_segment_start_point_index =
    *rtu_InBus_GNSS_control_info_closest_segment_start_point_index;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_preview_point_x =
    *rtu_InBus_GNSS_control_info_preview_point_x;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_tram_info_speed_unit_converter_factor =
    *rtu_InBus_tram_info_speed_unit_converter_factor;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_preview_point_y =
    *rtu_InBus_GNSS_control_info_preview_point_y;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_min_preview_distance =
    *rtu_InBus_GNSS_control_info_min_preview_distance;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_K_lateral_offset =
    *rtu_InBus_GNSS_control_info_K_lateral_offset;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_tram_info_speed_processing_mode =
    *rtu_InBus_tram_info_speed_processing_mode;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_tram_info_speed_increment_limit =
    *rtu_InBus_tram_info_speed_increment_limit;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_tram_info_speed_value_offset =
    *rtu_InBus_tram_info_speed_value_offset;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_tram_info_speed_absolute_amplitude_limit_mode =
    *rtu_InBus_tram_info_speed_absolute_amplitude_limit_mode;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_tram_info_speed_max_value = *rtu_InBus_tram_info_speed_max_value;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_tram_info_speed_input_value =
    *rtu_InBus_tram_info_speed_input_value;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_tram_info_speed_min_value = *rtu_InBus_tram_info_speed_min_value;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_tram_info_speed_jump_abnormal_tolerance =
    *rtu_InBus_tram_info_speed_jump_abnormal_tolerance;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_tram_info_speed_recovery_check_times =
    *rtu_InBus_tram_info_speed_recovery_check_times;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_tram_info_speed_jump_abnormal_fault =
    *rtu_InBus_tram_info_speed_jump_abnormal_fault;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_tram_info_Lf = *rtu_InBus_tram_info_Lf;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_tram_info_Lr = *rtu_InBus_tram_info_Lr;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_tram_info_driving_mode = *rtu_InBus_tram_info_driving_mode;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_actual_angle_input_value =
    *rtu_InBus_steering_axle_info_actual_angle_input_value;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_actual_angle_input_value_lock =
    *rtu_InBus_steering_axle_info_actual_angle_input_value_lock;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_actual_angle_original_value_current =
    *rtu_InBus_steering_axle_info_actual_angle_original_value_current;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_tram_info_speed_input_value_lock =
    *rtu_InBus_tram_info_speed_input_value_lock;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_actual_angle_original_value_previous =
    *rtu_InBus_steering_axle_info_actual_angle_original_value_previous;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_actual_angle_refitted_value_current =
    *rtu_InBus_steering_axle_info_actual_angle_refitted_value_current;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_actual_angle_refitted_value_previous =
    *rtu_InBus_steering_axle_info_actual_angle_refitted_value_previous;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_actual_angle_processed_value_lock =
    *rtu_InBus_steering_axle_info_actual_angle_processed_value_lock;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_actual_angle_processed_value_current =
    *rtu_InBus_steering_axle_info_actual_angle_processed_value_current;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_actual_angle_processed_value_previous =
    *rtu_InBus_steering_axle_info_actual_angle_processed_value_previous;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_actual_angle_unit_converter_factor =
    *rtu_InBus_steering_axle_info_actual_angle_unit_converter_factor;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_tram_info_speed_original_value_current =
    *rtu_InBus_tram_info_speed_original_value_current;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_actual_angle_processing_mode =
    *rtu_InBus_steering_axle_info_actual_angle_processing_mode;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_actual_angle_increment_limit =
    *rtu_InBus_steering_axle_info_actual_angle_increment_limit;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_actual_angle_value_offset =
    *rtu_InBus_steering_axle_info_actual_angle_value_offset;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_actual_angle_absolute_amplitude_limit_mode =
    *rtu_InBus_steering_axle_info_actual_angle_absolute_amplitude_limit_mode;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_actual_angle_max_value =
    *rtu_InBus_steering_axle_info_actual_angle_max_value;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_actual_angle_min_value =
    *rtu_InBus_steering_axle_info_actual_angle_min_value;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_actual_angle_jump_abnormal_tolerance =
    *rtu_InBus_steering_axle_info_actual_angle_jump_abnormal_tolerance;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_actual_angle_recovery_check_times =
    *rtu_InBus_steering_axle_info_actual_angle_recovery_check_times;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_actual_angle_jump_abnormal_fault =
    *rtu_InBus_steering_axle_info_actual_angle_jump_abnormal_fault;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_set_angle_input_value =
    *rtu_InBus_steering_axle_info_set_angle_input_value;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_tram_info_speed_original_value_previous =
    *rtu_InBus_tram_info_speed_original_value_previous;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_set_angle_input_value_lock =
    *rtu_InBus_steering_axle_info_set_angle_input_value_lock;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_set_angle_original_value_current =
    *rtu_InBus_steering_axle_info_set_angle_original_value_current;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_set_angle_original_value_previous =
    *rtu_InBus_steering_axle_info_set_angle_original_value_previous;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_set_angle_refitted_value_current =
    *rtu_InBus_steering_axle_info_set_angle_refitted_value_current;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_set_angle_refitted_value_previous =
    *rtu_InBus_steering_axle_info_set_angle_refitted_value_previous;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_set_angle_processed_value_lock =
    *rtu_InBus_steering_axle_info_set_angle_processed_value_lock;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_set_angle_processed_value_current =
    *rtu_InBus_steering_axle_info_set_angle_processed_value_current;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_set_angle_processed_value_previous =
    *rtu_InBus_steering_axle_info_set_angle_processed_value_previous;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  std::memcpy
    (&rty_OutBus_GNSS_control_info_stanley_set_axle_angle_original_value_queue[0],
     &rtu_InBus_GNSS_control_info_stanley_set_axle_angle_original_value_queue[0],
     10U * sizeof(real_T));

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  std::memcpy
    (&rty_OutBus_GNSS_control_info_stanley_set_axle_angle_refitted_value_queue[0],
     &rtu_InBus_GNSS_control_info_stanley_set_axle_angle_refitted_value_queue[0],
     10U * sizeof(real_T));

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  std::memcpy
    (&rty_OutBus_GNSS_control_info_stanley_set_axle_angle_processed_value_queue
     [0],
     &rtu_InBus_GNSS_control_info_stanley_set_axle_angle_processed_value_queue[0],
     10U * sizeof(real_T));

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  std::memcpy(&rty_OutBus_tram_info_speed_processed_value_queue[0],
              &rtu_InBus_tram_info_speed_processed_value_queue[0], 10U * sizeof
              (real_T));

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  std::memcpy(&rty_OutBus_steering_axle_info_actual_angle_original_value_queue[0],
              &rtu_InBus_steering_axle_info_actual_angle_original_value_queue[0],
              10U * sizeof(real_T));

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  std::memcpy(&rty_OutBus_steering_axle_info_actual_angle_refitted_value_queue[0],
              &rtu_InBus_steering_axle_info_actual_angle_refitted_value_queue[0],
              10U * sizeof(real_T));

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  std::memcpy(&rty_OutBus_steering_axle_info_actual_angle_processed_value_queue
              [0],
              &rtu_InBus_steering_axle_info_actual_angle_processed_value_queue[0],
              10U * sizeof(real_T));

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  std::memcpy(&rty_OutBus_steering_axle_info_set_angle_original_value_queue[0],
              &rtu_InBus_steering_axle_info_set_angle_original_value_queue[0],
              10U * sizeof(real_T));

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  std::memcpy(&rty_OutBus_steering_axle_info_set_angle_refitted_value_queue[0],
              &rtu_InBus_steering_axle_info_set_angle_refitted_value_queue[0],
              10U * sizeof(real_T));

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  std::memcpy(&rty_OutBus_tram_info_speed_original_value_queue[0],
              &rtu_InBus_tram_info_speed_original_value_queue[0], 10U * sizeof
              (real_T));

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  std::memcpy(&rty_OutBus_steering_axle_info_set_angle_processed_value_queue[0],
              &rtu_InBus_steering_axle_info_set_angle_processed_value_queue[0],
              10U * sizeof(real_T));

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_set_angle_unit_converter_factor =
    *rtu_InBus_steering_axle_info_set_angle_unit_converter_factor;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_set_angle_processing_mode =
    *rtu_InBus_steering_axle_info_set_angle_processing_mode;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_set_angle_increment_limit =
    *rtu_InBus_steering_axle_info_set_angle_increment_limit;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_set_angle_value_offset =
    *rtu_InBus_steering_axle_info_set_angle_value_offset;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_set_angle_absolute_amplitude_limit_mode =
    *rtu_InBus_steering_axle_info_set_angle_absolute_amplitude_limit_mode;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_set_angle_max_value =
    *rtu_InBus_steering_axle_info_set_angle_max_value;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_set_angle_min_value =
    *rtu_InBus_steering_axle_info_set_angle_min_value;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_set_angle_jump_abnormal_tolerance =
    *rtu_InBus_steering_axle_info_set_angle_jump_abnormal_tolerance;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_set_angle_recovery_check_times =
    *rtu_InBus_steering_axle_info_set_angle_recovery_check_times;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_tram_info_speed_refitted_value_current =
    *rtu_InBus_tram_info_speed_refitted_value_current;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_steering_axle_info_set_angle_jump_abnormal_fault =
    *rtu_InBus_steering_axle_info_set_angle_jump_abnormal_fault;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_info_GNSS_life_value_current =
    *rtu_InBus_GNSS_info_GNSS_life_value_current;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_info_GNSS_life_value_previous =
    *rtu_InBus_GNSS_info_GNSS_life_value_previous;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_info_GNSS_life_unchanged_abnormal_check_times =
    *rtu_InBus_GNSS_info_GNSS_life_unchanged_abnormal_check_times;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_info_GNSS_life_unchanged_abnormal_fault =
    *rtu_InBus_GNSS_info_GNSS_life_unchanged_abnormal_fault;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_info_ENU_yaw_angle = *rtu_InBus_GNSS_info_ENU_yaw_angle;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_info_ENU_x = *rtu_InBus_GNSS_info_ENU_x;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_info_ENU_y = *rtu_InBus_GNSS_info_ENU_y;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_info_location_valid_status =
    *rtu_InBus_GNSS_info_location_valid_status;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_reference_trajectory_info_way_point_number =
    *rtu_InBus_reference_trajectory_info_way_point_number;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_tram_info_speed_refitted_value_previous =
    *rtu_InBus_tram_info_speed_refitted_value_previous;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  std::memcpy(&rty_OutBus_reference_trajectory_info_segment_length[0],
              &rtu_InBus_reference_trajectory_info_segment_length[0], 6001U *
              sizeof(real_T));

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  std::memcpy(&rty_OutBus_reference_trajectory_info_trajectory_yaw_angle[0],
              &rtu_InBus_reference_trajectory_info_trajectory_yaw_angle[0],
              6001U * sizeof(real_T));

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  std::memcpy(&rty_OutBus_reference_trajectory_info_trajectory_x[0],
              &rtu_InBus_reference_trajectory_info_trajectory_x[0], 6001U *
              sizeof(real_T));

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  std::memcpy(&rty_OutBus_reference_trajectory_info_trajectory_y[0],
              &rtu_InBus_reference_trajectory_info_trajectory_y[0], 6001U *
              sizeof(real_T));

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  std::memcpy(&rty_OutBus_reference_trajectory_info_trajectory_curvature[0],
              &rtu_InBus_reference_trajectory_info_trajectory_curvature[0],
              6001U * sizeof(real_T));

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_input_value =
    *rtu_InBus_GNSS_control_info_set_steering_axle_angle_input_value;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_input_value_lock =
    *rtu_InBus_GNSS_control_info_set_steering_axle_angle_input_value_lock;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_original_value_current =
    *rtu_InBus_GNSS_control_info_set_steering_axle_angle_original_value_current;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_original_value_previous =
    *rtu_InBus_GNSS_control_info_set_steering_axle_angle_original_value_previous;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_refitted_value_current =
    *rtu_InBus_GNSS_control_info_set_steering_axle_angle_refitted_value_current;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_refitted_value_previous =
    *rtu_InBus_GNSS_control_info_set_steering_axle_angle_refitted_value_previous;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_processed_value_lock =
    *rtu_InBus_GNSS_control_info_set_steering_axle_angle_processed_value_lock;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_processed_value_current =
    *rtu_InBus_GNSS_control_info_set_steering_axle_angle_processed_value_current;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_processed_value_previous
    =
    *rtu_InBus_GNSS_control_info_set_steering_axle_angle_processed_value_previous;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  std::memcpy
    (&rty_OutBus_GNSS_control_info_set_steering_axle_angle_original_value_queue
     [0],
     &rtu_InBus_GNSS_control_info_set_steering_axle_angle_original_value_queue[0],
     10U * sizeof(real_T));

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  std::memcpy(&rty_OutBus_tram_info_speed_refitted_value_queue[0],
              &rtu_InBus_tram_info_speed_refitted_value_queue[0], 10U * sizeof
              (real_T));

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  std::memcpy
    (&rty_OutBus_GNSS_control_info_set_steering_axle_angle_refitted_value_queue
     [0],
     &rtu_InBus_GNSS_control_info_set_steering_axle_angle_refitted_value_queue[0],
     10U * sizeof(real_T));

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  std::memcpy
    (&rty_OutBus_GNSS_control_info_set_steering_axle_angle_processed_value_queue[
     0],
     &rtu_InBus_GNSS_control_info_set_steering_axle_angle_processed_value_queue
     [0], 10U * sizeof(real_T));

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_unit_converter_factor = *
    rtu_InBus_GNSS_control_info_set_steering_axle_angle_unit_converter_factor;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_processing_mode =
    *rtu_InBus_GNSS_control_info_set_steering_axle_angle_processing_mode;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' */
  *rty_OutBus_GNSS_control_info_set_steering_axle_angle_increment_limit =
    *rtu_InBus_GNSS_control_info_set_steering_axle_angle_increment_limit;

  /* UnitConversion: '<S5>/Unit Conversion' incorporates:
   *  Constant: '<Root>/Constant2'
   */
  /* Unit Conversion - from: km/hr to: m/s
     Expression: output = (0.277778*input) + (0) */
  localB->UnitConversion = 0.27777777777777779 * rtP_set_speed;

  /* Sum: '<Root>/Sum4' */
  localB->Sum4 = localB->UnitConversion -
    *rtu_InBus_tram_info_speed_processed_value_current;

  /* Gain: '<S44>/Proportional Gain' */
  localB->ProportionalGain =
    ADK_longitudinal_controller_cal->DiscretePIDController_P * localB->Sum4;

  /* RelationalOperator: '<Root>/Equal' incorporates:
   *  Constant: '<S4>/Constant'
   */
  localB->Equal = (*rtu_InBus_tram_info_driving_mode !=
                   ADK_longitudinal_controller_cal->EnumeratedConstant1_Value);

  /* DiscreteIntegrator: '<S39>/Integrator' */
  if (localB->Equal || (localDW->Integrator_PrevResetState != 0)) {
    localDW->Integrator_DSTATE =
      ADK_longitudinal_controller_cal->DiscretePIDController_InitialConditionForIntegrator;
  }

  /* DiscreteIntegrator: '<S39>/Integrator' */
  localB->Integrator = localDW->Integrator_DSTATE;

  /* Gain: '<S31>/Derivative Gain' */
  localB->DerivativeGain =
    ADK_longitudinal_controller_cal->DiscretePIDController_D * localB->Sum4;

  /* SampleTimeMath: '<S34>/Tsamp'
   *
   * About '<S34>/Tsamp':
   *  y = u * K where K = 1 / ( w * Ts )
   */
  localB->Tsamp = localB->DerivativeGain *
    ADK_longitudinal_controller_cal->Tsamp_WtEt;

  /* Delay: '<S32>/UD' */
  zcEvent = (((localZCE->UD_Reset_ZCE == 1) != localB->Equal) &&
             (localZCE->UD_Reset_ZCE != 3));
  if (zcEvent || localB->Equal) {
    localDW->UD_DSTATE =
      ADK_longitudinal_controller_cal->DiscretePIDController_DifferentiatorICPrevScaledInput;
  }

  localZCE->UD_Reset_ZCE = localB->Equal;

  /* Delay: '<S32>/UD' */
  localB->UD = localDW->UD_DSTATE;

  /* Sum: '<S32>/Diff' */
  localB->Diff = localB->Tsamp - localB->UD;

  /* Sum: '<S48>/Sum' */
  localB->Sum = (localB->ProportionalGain + localB->Integrator) + localB->Diff;

  /* DeadZone: '<Root>/Dead Zone' */
  if (localB->Sum > ADK_longitudinal_controller_cal->DeadZone_End) {
    /* DeadZone: '<Root>/Dead Zone' */
    localB->DeadZone = localB->Sum -
      ADK_longitudinal_controller_cal->DeadZone_End;
  } else if (localB->Sum >= ADK_longitudinal_controller_cal->DeadZone_Start) {
    /* DeadZone: '<Root>/Dead Zone' */
    localB->DeadZone = 0.0;
  } else {
    /* DeadZone: '<Root>/Dead Zone' */
    localB->DeadZone = localB->Sum -
      ADK_longitudinal_controller_cal->DeadZone_Start;
  }

  /* End of DeadZone: '<Root>/Dead Zone' */

  /* Gain: '<S36>/Integral Gain' */
  localB->IntegralGain =
    ADK_longitudinal_controller_cal->DiscretePIDController_I * localB->Sum4;

  /* Constant: '<S3>/Constant' */
  *rty_OutBus_longitudinal_control_info_set_gear =
    ADK_longitudinal_controller_cal->EnumeratedConstant_Value;

  /* Gain: '<Root>/Gain11' */
  localB->Gain11 = ADK_longitudinal_controller_cal->Gain11_Gain *
    localB->DeadZone;

  /* Saturate: '<Root>/Limiter_brake' */
  u0 = localB->Gain11;
  u1 = ADK_longitudinal_controller_cal->Limiter_brake_LowerSat;
  u2 = ADK_longitudinal_controller_cal->Limiter_brake_UpperSat;
  if (u0 > u2) {
    u0 = u2;
  } else if (u0 < u1) {
    u0 = u1;
  }

  *rty_OutBus_longitudinal_control_info_set_brake_pedal = u0;

  /* End of Saturate: '<Root>/Limiter_brake' */

  /* Saturate: '<Root>/Limiter_throttle' */
  u0 = localB->DeadZone;
  u1 = ADK_longitudinal_controller_cal->Limiter_throttle_LowerSat;
  u2 = ADK_longitudinal_controller_cal->Limiter_throttle_UpperSat;
  if (u0 > u2) {
    u0 = u2;
  } else if (u0 < u1) {
    u0 = u1;
  }

  *rty_OutBus_longitudinal_control_info_set_throttle_pedal = u0;

  /* End of Saturate: '<Root>/Limiter_throttle' */

  /* Update for DiscreteIntegrator: '<S39>/Integrator' */
  if (!localB->Equal) {
    localDW->Integrator_DSTATE +=
      ADK_longitudinal_controller_cal->Integrator_gainval * localB->IntegralGain;
  }

  localDW->Integrator_PrevResetState = static_cast<int8_T>(localB->Equal);

  /* End of Update for DiscreteIntegrator: '<S39>/Integrator' */

  /* Update for Delay: '<S32>/UD' */
  localDW->UD_DSTATE = localB->Tsamp;
}

/* Model initialize function */
void ADK_longitudinal_controller_initialize(const char_T **rt_errorStatus,
  RT_MODEL_ADK_longitudinal_controller_T *const ADK_longitudinal_controller_M,
  B_ADK_longitudinal_controller_c_T *localB, DW_ADK_longitudinal_controller_f_T *
  localDW, ZCE_ADK_longitudinal_controller_T *localZCE)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(ADK_longitudinal_controller_M, rt_errorStatus);

  /* block I/O */
  (void) std::memset((static_cast<void *>(localB)), 0,
                     sizeof(B_ADK_longitudinal_controller_c_T));

  {
    localB->UnitConversion = 0.0;
    localB->Sum4 = 0.0;
    localB->ProportionalGain = 0.0;
    localB->Integrator = 0.0;
    localB->DerivativeGain = 0.0;
    localB->Tsamp = 0.0;
    localB->UD = 0.0;
    localB->Diff = 0.0;
    localB->Sum = 0.0;
    localB->DeadZone = 0.0;
    localB->IntegralGain = 0.0;
    localB->Gain11 = 0.0;
  }

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(localDW), 0,
                     sizeof(DW_ADK_longitudinal_controller_f_T));
  localDW->Integrator_DSTATE = 0.0;
  localDW->UD_DSTATE = 0.0;
  localZCE->UD_Reset_ZCE = UNINITIALIZED_ZCSIG;
}

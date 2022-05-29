/*
 * Code generation for system model 'ADK_longitudinal_controller'
 * For more details, see corresponding source file ADK_longitudinal_controller.c
 *
 */

#ifndef RTW_HEADER_ADK_longitudinal_controller_h_
#define RTW_HEADER_ADK_longitudinal_controller_h_
#include <cstring>
#include "rtwtypes.h"
#include "zero_crossing_types.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "ADK_longitudinal_controller_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "ADK_longitudinal_controller_cal.h"

/* Block signals for model 'ADK_longitudinal_controller' */
struct B_ADK_longitudinal_controller_c_T {
  real_T UnitConversion;               /* '<S5>/Unit Conversion' */
  real_T Sum4;                         /* '<Root>/Sum4' */
  real_T ProportionalGain;             /* '<S44>/Proportional Gain' */
  real_T Integrator;                   /* '<S39>/Integrator' */
  real_T DerivativeGain;               /* '<S31>/Derivative Gain' */
  real_T Tsamp;                        /* '<S34>/Tsamp' */
  real_T UD;                           /* '<S32>/UD' */
  real_T Diff;                         /* '<S32>/Diff' */
  real_T Sum;                          /* '<S48>/Sum' */
  real_T DeadZone;                     /* '<Root>/Dead Zone' */
  real_T IntegralGain;                 /* '<S36>/Integral Gain' */
  real_T Gain11;                       /* '<Root>/Gain11' */
  boolean_T Equal;                     /* '<Root>/Equal' */
};

/* Block states (default storage) for model 'ADK_longitudinal_controller' */
struct DW_ADK_longitudinal_controller_f_T {
  real_T Integrator_DSTATE;            /* '<S39>/Integrator' */
  real_T UD_DSTATE;                    /* '<S32>/UD' */
  int8_T Integrator_PrevResetState;    /* '<S39>/Integrator' */
};

/* Zero-crossing (trigger) state for model 'ADK_longitudinal_controller' */
struct ZCE_ADK_longitudinal_controller_T {
  ZCSigState UD_Reset_ZCE;             /* '<S32>/UD' */
};

/* Real-time Model Data Structure */
struct tag_RTM_ADK_longitudinal_controller_T {
  const char_T **errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    boolean_T *stopRequestedFlag;
  } Timing;
};

struct MdlrefDW_ADK_longitudinal_controller_T {
  B_ADK_longitudinal_controller_c_T rtb;
  DW_ADK_longitudinal_controller_f_T rtdw;
  RT_MODEL_ADK_longitudinal_controller_T rtm;
  ZCE_ADK_longitudinal_controller_T rtzce;
};

/* Model block global parameters (default storage) */
extern real_T rtP_set_speed;           /* Variable: set_speed
                                        * Referenced by: '<Root>/Constant2'
                                        */

/* Model reference registration function */
extern void ADK_longitudinal_controller_initialize(const char_T **rt_errorStatus,
  RT_MODEL_ADK_longitudinal_controller_T *const ADK_longitudinal_controller_M,
  B_ADK_longitudinal_controller_c_T *localB, DW_ADK_longitudinal_controller_f_T *
  localDW, ZCE_ADK_longitudinal_controller_T *localZCE);
extern void ADK_longitudinal_controller_Init(DW_ADK_longitudinal_controller_f_T *
  localDW);
extern void ADK_longitudinal_controller_Reset(DW_ADK_longitudinal_controller_f_T
  *localDW);
extern void ADK_longitudinal_controller(const IDSWorkStatus
  *rtu_InBus_IDS_work_status, const real_T
  *rtu_InBus_tram_info_speed_input_value, const Validation
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
  localDW, ZCE_ADK_longitudinal_controller_T *localZCE);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'ADK_longitudinal_controller'
 * '<S1>'   : 'ADK_longitudinal_controller/Discrete PID Controller'
 * '<S2>'   : 'ADK_longitudinal_controller/DocBlock'
 * '<S3>'   : 'ADK_longitudinal_controller/Enumerated Constant'
 * '<S4>'   : 'ADK_longitudinal_controller/Enumerated Constant1'
 * '<S5>'   : 'ADK_longitudinal_controller/Velocity Conversion'
 * '<S6>'   : 'ADK_longitudinal_controller/Discrete PID Controller/Anti-windup'
 * '<S7>'   : 'ADK_longitudinal_controller/Discrete PID Controller/D Gain'
 * '<S8>'   : 'ADK_longitudinal_controller/Discrete PID Controller/Filter'
 * '<S9>'   : 'ADK_longitudinal_controller/Discrete PID Controller/Filter ICs'
 * '<S10>'  : 'ADK_longitudinal_controller/Discrete PID Controller/I Gain'
 * '<S11>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Ideal P Gain'
 * '<S12>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Ideal P Gain Fdbk'
 * '<S13>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Integrator'
 * '<S14>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Integrator ICs'
 * '<S15>'  : 'ADK_longitudinal_controller/Discrete PID Controller/N Copy'
 * '<S16>'  : 'ADK_longitudinal_controller/Discrete PID Controller/N Gain'
 * '<S17>'  : 'ADK_longitudinal_controller/Discrete PID Controller/P Copy'
 * '<S18>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Parallel P Gain'
 * '<S19>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Reset Signal'
 * '<S20>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Saturation'
 * '<S21>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Saturation Fdbk'
 * '<S22>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Sum'
 * '<S23>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Sum Fdbk'
 * '<S24>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Tracking Mode'
 * '<S25>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Tracking Mode Sum'
 * '<S26>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Tsamp - Integral'
 * '<S27>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Tsamp - Ngain'
 * '<S28>'  : 'ADK_longitudinal_controller/Discrete PID Controller/postSat Signal'
 * '<S29>'  : 'ADK_longitudinal_controller/Discrete PID Controller/preSat Signal'
 * '<S30>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Anti-windup/Passthrough'
 * '<S31>'  : 'ADK_longitudinal_controller/Discrete PID Controller/D Gain/Internal Parameters'
 * '<S32>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Filter/Differentiator'
 * '<S33>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Filter/Differentiator/Tsamp'
 * '<S34>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Filter/Differentiator/Tsamp/Internal Ts'
 * '<S35>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Filter ICs/Internal IC - Differentiator'
 * '<S36>'  : 'ADK_longitudinal_controller/Discrete PID Controller/I Gain/Internal Parameters'
 * '<S37>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Ideal P Gain/Passthrough'
 * '<S38>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Ideal P Gain Fdbk/Disabled'
 * '<S39>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Integrator/Discrete'
 * '<S40>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Integrator ICs/Internal IC'
 * '<S41>'  : 'ADK_longitudinal_controller/Discrete PID Controller/N Copy/Disabled wSignal Specification'
 * '<S42>'  : 'ADK_longitudinal_controller/Discrete PID Controller/N Gain/Passthrough'
 * '<S43>'  : 'ADK_longitudinal_controller/Discrete PID Controller/P Copy/Disabled'
 * '<S44>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Parallel P Gain/Internal Parameters'
 * '<S45>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Reset Signal/External Reset'
 * '<S46>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Saturation/Passthrough'
 * '<S47>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Saturation Fdbk/Disabled'
 * '<S48>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Sum/Sum_PID'
 * '<S49>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Sum Fdbk/Disabled'
 * '<S50>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Tracking Mode/Disabled'
 * '<S51>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Tracking Mode Sum/Passthrough'
 * '<S52>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Tsamp - Integral/Passthrough'
 * '<S53>'  : 'ADK_longitudinal_controller/Discrete PID Controller/Tsamp - Ngain/Passthrough'
 * '<S54>'  : 'ADK_longitudinal_controller/Discrete PID Controller/postSat Signal/Forward_Path'
 * '<S55>'  : 'ADK_longitudinal_controller/Discrete PID Controller/preSat Signal/Forward_Path'
 */
#endif                           /* RTW_HEADER_ADK_longitudinal_controller_h_ */

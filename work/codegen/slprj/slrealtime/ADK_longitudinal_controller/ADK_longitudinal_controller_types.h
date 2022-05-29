/*
 * ADK_longitudinal_controller_types.h
 *
 * Code generation for model "ADK_longitudinal_controller".
 *
 * Model version              : 4.4
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Thu May 12 12:46:13 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_ADK_longitudinal_controller_types_h_
#define RTW_HEADER_ADK_longitudinal_controller_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_Gear_
#define DEFINED_TYPEDEF_FOR_Gear_

typedef enum {
  P = 1,                               /* Default value */
  R,
  N,
  D
} Gear;

#endif

#ifndef DEFINED_TYPEDEF_FOR_DrivingMode_
#define DEFINED_TYPEDEF_FOR_DrivingMode_

typedef enum {
  Manual = 0,                          /* Default value */
  Autopilot,
  Intervention
} DrivingMode;

#endif

#ifndef DEFINED_TYPEDEF_FOR_IDSWorkStatus_
#define DEFINED_TYPEDEF_FOR_IDSWorkStatus_

typedef enum {
  Manual_Driving = 0,                  /* Default value */
  Auto_Tracking
} IDSWorkStatus;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Validation_
#define DEFINED_TYPEDEF_FOR_Validation_

typedef enum {
  Invalid = 0,                         /* Default value */
  Valid
} Validation;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SignalProcessingMode_
#define DEFINED_TYPEDEF_FOR_SignalProcessingMode_

typedef enum {
  NoFilter = 0,                        /* Default value */
  IncrementLimitFilter
} SignalProcessingMode;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Key_Signal_Info_
#define DEFINED_TYPEDEF_FOR_Key_Signal_Info_

struct Key_Signal_Info
{
  real_T input_value;
  Validation input_value_lock;
  real_T original_value_current;
  real_T original_value_previous;
  real_T original_value_queue[10];
  real_T refitted_value_current;
  real_T refitted_value_previous;
  real_T refitted_value_queue[10];
  Validation processed_value_lock;
  real_T processed_value_current;
  real_T processed_value_previous;
  real_T processed_value_queue[10];
  real_T unit_converter_factor;
  SignalProcessingMode processing_mode;
  real_T increment_limit;
  real_T value_offset;
  Validation absolute_amplitude_limit_mode;
  real_T max_value;
  real_T min_value;
  real_T jump_abnormal_tolerance;
  uint32_T recovery_check_times;
  Validation jump_abnormal_fault;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_Tram_Info_
#define DEFINED_TYPEDEF_FOR_Tram_Info_

struct Tram_Info
{
  Key_Signal_Info speed;
  real_T Lf;
  real_T Lr;
  DrivingMode driving_mode;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_Steering_Axle_Info_
#define DEFINED_TYPEDEF_FOR_Steering_Axle_Info_

struct Steering_Axle_Info
{
  Key_Signal_Info actual_angle;
  Key_Signal_Info set_angle;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_Key_Life_Info_
#define DEFINED_TYPEDEF_FOR_Key_Life_Info_

struct Key_Life_Info
{
  uint32_T value_current;
  uint32_T value_previous;
  uint32_T unchanged_abnormal_check_times;
  Validation unchanged_abnormal_fault;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_GNSS_Info_
#define DEFINED_TYPEDEF_FOR_GNSS_Info_

struct GNSS_Info
{
  Key_Life_Info GNSS_life;
  real_T ENU_yaw_angle;
  real_T ENU_x;
  real_T ENU_y;
  Validation location_valid_status;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_Reference_Trajectory_Info_
#define DEFINED_TYPEDEF_FOR_Reference_Trajectory_Info_

struct Reference_Trajectory_Info
{
  real_T way_point_number;
  real_T segment_length[6001];
  real_T trajectory_yaw_angle[6001];
  real_T trajectory_x[6001];
  real_T trajectory_y[6001];
  real_T trajectory_curvature[6001];
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_GNSS_Control_Info_
#define DEFINED_TYPEDEF_FOR_GNSS_Control_Info_

struct GNSS_Control_Info
{
  Key_Signal_Info set_steering_axle_angle;
  Key_Signal_Info stanley_set_axle_angle;
  real_T preview_time;
  real_T preview_distance;
  real_T preview_chord_length;
  real_T near_lateral_offset;
  real_T preview_angle_offset;
  real_T closest_point_x;
  real_T closest_point_y;
  real_T closest_point_curvature;
  real_T faraway_point_curvature;
  real_T closest_segment_start_point_index;
  real_T preview_point_x;
  real_T preview_point_y;
  real_T min_preview_distance;
  real_T K_lateral_offset;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_Longitudinal_Control_Info_
#define DEFINED_TYPEDEF_FOR_Longitudinal_Control_Info_

struct Longitudinal_Control_Info
{
  real_T set_brake_pedal;
  Gear set_gear;
  real_T set_throttle_pedal;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_ApplicationBus_
#define DEFINED_TYPEDEF_FOR_ApplicationBus_

struct ApplicationBus
{
  IDSWorkStatus IDS_work_status;
  Tram_Info tram_info;
  Steering_Axle_Info steering_axle_info;
  GNSS_Info GNSS_info;
  Reference_Trajectory_Info reference_trajectory_info;
  GNSS_Control_Info GNSS_control_info;
  Longitudinal_Control_Info longitudinal_control_info;
};

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_ADK_longitudinal_controller_T
  RT_MODEL_ADK_longitudinal_controller_T;

#endif                     /* RTW_HEADER_ADK_longitudinal_controller_types_h_ */

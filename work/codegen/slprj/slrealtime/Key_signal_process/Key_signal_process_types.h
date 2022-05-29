/*
 * Key_signal_process_types.h
 *
 * Code generation for model "Key_signal_process".
 *
 * Model version              : 4.12
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Thu May 12 12:48:15 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Key_signal_process_types_h_
#define RTW_HEADER_Key_signal_process_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
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

/* Forward declaration for rtModel */
typedef struct tag_RTM_Key_signal_process_T RT_MODEL_Key_signal_process_T;

#endif                              /* RTW_HEADER_Key_signal_process_types_h_ */

/*
 * AION_auto_unexpected_quit_analysis_types.h
 *
 * Code generation for model "AION_auto_unexpected_quit_analysis".
 *
 * Model version              : 1.8
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Wed May 25 11:57:09 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_AION_auto_unexpected_quit_analysis_types_h_
#define RTW_HEADER_AION_auto_unexpected_quit_analysis_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_Active_status_
#define DEFINED_TYPEDEF_FOR_Active_status_

typedef enum {
  NotActiveStatus = 0,                 /* Default value */
  ActiveStatus
} Active_status;

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_AION_auto_unexpected_quit_analysis_T
  RT_MODEL_AION_auto_unexpected_quit_analysis_T;

#endif              /* RTW_HEADER_AION_auto_unexpected_quit_analysis_types_h_ */

/*
 * Local_trajectory_export_private.h
 *
 * Code generation for model "Local_trajectory_export".
 *
 * Model version              : 4.167
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Thu May 12 12:49:38 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_Local_trajectory_export_private_h_
#define RTW_HEADER_Local_trajectory_export_private_h_
#include "rtwtypes.h"
#include "multiword_types.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         (*((rtm)->errorStatus))
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    (*((rtm)->errorStatus) = (val))
#endif

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm)  (rtm)->errorStatus
#endif

#ifndef rtmSetErrorStatusPointer
#define rtmSetErrorStatusPointer(rtm, val) ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       (*((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  (*((rtm)->Timing.stopRequestedFlag) = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequestedPtr
#define rtmSetStopRequestedPtr(rtm, val) ((rtm)->Timing.stopRequestedFlag = (val))
#endif

extern P_Local_trajectory_export_T Local_trajectory_export_P;

#endif                       /* RTW_HEADER_Local_trajectory_export_private_h_ */

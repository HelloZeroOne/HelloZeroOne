/*
 * AION_auto_unexpected_quit_analysis.h
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

#ifndef RTW_HEADER_AION_auto_unexpected_quit_analysis_h_
#define RTW_HEADER_AION_auto_unexpected_quit_analysis_h_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "verify/verifyIntrf.h"
#include "AION_auto_unexpected_quit_analysis_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "AION_auto_unexpected_quit_analysis_cal.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

/* Block signals (default storage) */
struct B_AION_auto_unexpected_quit_analysis_T {
  Active_status y;                     /* '<Root>/MATLAB Function' */
};

/* Real-time Model Data Structure */
struct tag_RTM_AION_auto_unexpected_quit_analysis_T {
  const char_T *errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_AION_auto_unexpected_quit_analysis_T
    AION_auto_unexpected_quit_analysis_B;

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void AION_auto_unexpected_quit_analysis_initialize(void);
  extern void AION_auto_unexpected_quit_analysis_step(void);
  extern void AION_auto_unexpected_quit_analysis_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_AION_auto_unexpected_quit_analysis_T *const
    AION_auto_unexpected_quit_analysis_M;

#ifdef __cplusplus

}
#endif

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
 * '<Root>' : 'AION_auto_unexpected_quit_analysis'
 * '<S1>'   : 'AION_auto_unexpected_quit_analysis/MATLAB Function'
 */
#endif                    /* RTW_HEADER_AION_auto_unexpected_quit_analysis_h_ */

/*
 * AION_auto_unexpected_quit_analysis.cpp
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

#include "AION_auto_unexpected_quit_analysis.h"
#include "AION_auto_unexpected_quit_analysis_private.h"

/* Block signals (default storage) */
B_AION_auto_unexpected_quit_analysis_T AION_auto_unexpected_quit_analysis_B;

/* Real-time model */
RT_MODEL_AION_auto_unexpected_quit_analysis_T
  AION_auto_unexpected_quit_analysis_M_ =
  RT_MODEL_AION_auto_unexpected_quit_analysis_T();
RT_MODEL_AION_auto_unexpected_quit_analysis_T *const
  AION_auto_unexpected_quit_analysis_M = &AION_auto_unexpected_quit_analysis_M_;

/* Model step function */
void AION_auto_unexpected_quit_analysis_step(void)
{
  /* MATLAB Function: '<Root>/MATLAB Function' */
  /* MATLAB Function 'MATLAB Function': '<S1>:1' */
  /* '<S1>:1:2' */
  AION_auto_unexpected_quit_analysis_B.y = ActiveStatus;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++AION_auto_unexpected_quit_analysis_M->Timing.clockTick0)) {
    ++AION_auto_unexpected_quit_analysis_M->Timing.clockTickH0;
  }

  AION_auto_unexpected_quit_analysis_M->Timing.taskTime0 =
    AION_auto_unexpected_quit_analysis_M->Timing.clockTick0 *
    AION_auto_unexpected_quit_analysis_M->Timing.stepSize0 +
    AION_auto_unexpected_quit_analysis_M->Timing.clockTickH0 *
    AION_auto_unexpected_quit_analysis_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void AION_auto_unexpected_quit_analysis_initialize(void)
{
  /* Registration code */
  AION_auto_unexpected_quit_analysis_M->Timing.stepSize0 = 0.2;

  /* block I/O */
  {
    AION_auto_unexpected_quit_analysis_B.y = NotActiveStatus;
  }
}

/* Model terminate function */
void AION_auto_unexpected_quit_analysis_terminate(void)
{
  /* (no terminate code required) */
}

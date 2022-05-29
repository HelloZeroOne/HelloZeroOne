/*
 * AION_request_fail_analysis.cpp
 *
 * Code generation for model "AION_request_fail_analysis".
 *
 * Model version              : 1.20
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Sun May 22 14:06:18 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "AION_request_fail_analysis.h"
#include "AION_request_fail_analysis_private.h"

/* Block states (default storage) */
DW_AION_request_fail_analysis_T AION_request_fail_analysis_DW;

/* External inputs (root inport signals with default storage) */
ExtU_AION_request_fail_analysis_T AION_request_fail_analysis_U;

/* Real-time model */
RT_MODEL_AION_request_fail_analysis_T AION_request_fail_analysis_M_ =
  RT_MODEL_AION_request_fail_analysis_T();
RT_MODEL_AION_request_fail_analysis_T *const AION_request_fail_analysis_M =
  &AION_request_fail_analysis_M_;

/* Model step function */
void AION_request_fail_analysis_step(void)
{
  /* MATLAB Function: '<Root>/Lateral_request_fail_analysis' incorporates:
   *  Inport: '<Root>/InBus_get_SCU_info_get_LatCtrlMode'
   *  Inport: '<Root>/InBus_set_lateral_control_info_set_LatCtrlReq'
   */
  /* MATLAB Function 'Lateral_request_fail_analysis': '<S1>:1' */
  if ((AION_request_fail_analysis_U.InBus_set_lateral_control_info_set_LatCtrlReq
       == Auto) &&
      (AION_request_fail_analysis_U.InBus_get_SCU_info_get_LatCtrlMode ==
       ManualStatus)) {
    /* '<S1>:1:17' */
    /* '<S1>:1:18' */
    AION_request_fail_analysis_DW.request_fail_count_b++;
  } else {
    /* '<S1>:1:20' */
    AION_request_fail_analysis_DW.request_fail_count_b = 0.0;
  }

  /* End of MATLAB Function: '<Root>/Lateral_request_fail_analysis' */

  /* MATLAB Function: '<Root>/Longitudinal_request_fail_analysis' incorporates:
   *  Inport: '<Root>/InBus_get_SCU_info_get_LngCtrlMode'
   *  Inport: '<Root>/InBus_set_longitudinal_control_info_set_LngCtrlReq'
   */
  /* MATLAB Function 'Longitudinal_request_fail_analysis': '<S2>:1' */
  if ((AION_request_fail_analysis_U.InBus_set_longitudinal_control_info_set_LngCtrlReq
       == Auto) &&
      (AION_request_fail_analysis_U.InBus_get_SCU_info_get_LngCtrlMode ==
       ManualStatus)) {
    /* '<S2>:1:17' */
    /* '<S2>:1:18' */
    AION_request_fail_analysis_DW.request_fail_count++;
  } else {
    /* '<S2>:1:20' */
    AION_request_fail_analysis_DW.request_fail_count = 0.0;
  }

  /* End of MATLAB Function: '<Root>/Longitudinal_request_fail_analysis' */

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++AION_request_fail_analysis_M->Timing.clockTick0)) {
    ++AION_request_fail_analysis_M->Timing.clockTickH0;
  }

  AION_request_fail_analysis_M->Timing.taskTime0 =
    AION_request_fail_analysis_M->Timing.clockTick0 *
    AION_request_fail_analysis_M->Timing.stepSize0 +
    AION_request_fail_analysis_M->Timing.clockTickH0 *
    AION_request_fail_analysis_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void AION_request_fail_analysis_initialize(void)
{
  /* Registration code */
  AION_request_fail_analysis_M->Timing.stepSize0 = 0.2;

  /* states (dwork) */
  AION_request_fail_analysis_DW.request_fail_count = 0.0;
  AION_request_fail_analysis_DW.request_fail_count_b = 0.0;

  /* external inputs */
  (void)std::memset(&AION_request_fail_analysis_U, 0, sizeof
                    (ExtU_AION_request_fail_analysis_T));
  AION_request_fail_analysis_U.InBus_set_lateral_control_info_set_LatCtrlReq =
    Manual;
  AION_request_fail_analysis_U.InBus_set_lateral_control_info_set_SteerWhlTorqReq
    = 0.0;
  AION_request_fail_analysis_U.InBus_set_lateral_control_info_set_SteerAngReq =
    0.0;
  AION_request_fail_analysis_U.InBus_set_lateral_control_info_set_SteerAngSpdLimt
    = 0.0;
  AION_request_fail_analysis_U.InBus_set_longitudinal_control_info_set_LngCtrlReq
    = Manual;
  AION_request_fail_analysis_U.InBus_set_longitudinal_control_info_set_BrakeReq =
    0.0;
  AION_request_fail_analysis_U.InBus_set_longitudinal_control_info_set_GearLvlReq
    = NoRequest;
  AION_request_fail_analysis_U.InBus_set_longitudinal_control_info_set_GearLvlReqVD
    = Invalid;
  AION_request_fail_analysis_U.InBus_get_BCS_info_get_VehSpd = 0.0;
  AION_request_fail_analysis_U.InBus_get_BCS_info_get_YawRate = 0.0;
  AION_request_fail_analysis_U.InBus_get_BCS_info_get_YawRateOffset = 0.0;
  AION_request_fail_analysis_U.InBus_get_BCS_info_get_MasterCylinderPr = 0.0;
  AION_request_fail_analysis_U.InBus_get_BCS_info_get_MasterCylinderPrOffset =
    0.0;
  AION_request_fail_analysis_U.InBus_get_BCS_info_get_FLWheelSpd = 0.0;
  AION_request_fail_analysis_U.InBus_get_BCS_info_get_FRWheelSpd = 0.0;
  AION_request_fail_analysis_U.InBus_get_BCS_info_get_RLWheelSpd = 0.0;
  AION_request_fail_analysis_U.InBus_get_BCS_info_get_RRWheelSpd = 0.0;
  AION_request_fail_analysis_U.InBus_get_BCS_info_get_ActVehLaltrlAccel = 0.0;
  AION_request_fail_analysis_U.InBus_get_BCS_info_get_ActVehLongAccel = 0.0;
  AION_request_fail_analysis_U.InBus_get_BCS_info_get_VehLaltrlAccelOffset = 0.0;
  AION_request_fail_analysis_U.InBus_get_BCS_info_get_VehLongAccelOffset = 0.0;
  AION_request_fail_analysis_U.InBus_get_VCU_info_get_VehRdySt = NotReady;
  AION_request_fail_analysis_U.InBus_get_VCU_info_get_ACCMaxRecpDecel = 0.0;
  AION_request_fail_analysis_U.InBus_get_VCU_info_get_GasPedalActPst = 0.0;
  AION_request_fail_analysis_U.InBus_get_VCU_info_get_GasPedalVirtualPst = 0.0;
  AION_request_fail_analysis_U.InBus_get_SCU_info_get_LatCtrlMode = ManualStatus;
  AION_request_fail_analysis_U.InBus_get_SCU_info_get_LngCtrlMode = ManualStatus;
  AION_request_fail_analysis_U.InBus_get_EPB_info_get_FailSt = NoError;
  AION_request_fail_analysis_U.InBus_get_EPS_info_get_SteeringAngle = 0.0;
  AION_request_fail_analysis_U.InBus_get_EPS_info_get_StrngWhlTorq = 0.0;
  AION_request_fail_analysis_U.InBus_get_BCM_info_get_CtrlAvailable =
    NotAvailable;

  /* SystemInitialize for MATLAB Function: '<Root>/Lateral_request_fail_analysis' */
  AION_request_fail_analysis_DW.request_fail_count_b = 0.0;

  /* SystemInitialize for MATLAB Function: '<Root>/Longitudinal_request_fail_analysis' */
  AION_request_fail_analysis_DW.request_fail_count = 0.0;
}

/* Model terminate function */
void AION_request_fail_analysis_terminate(void)
{
  /* (no terminate code required) */
}

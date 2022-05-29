/*
 * AION_auto_control_realization.cpp
 *
 * Code generation for model "AION_auto_control_realization".
 *
 * Model version              : 1.77
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Sun May 22 21:13:17 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "AION_auto_control_realization.h"
#include "AION_auto_control_realization_private.h"

/* Block signals (default storage) */
B_AION_auto_control_realization_T AION_auto_control_realization_B;

/* Block states (default storage) */
DW_AION_auto_control_realization_T AION_auto_control_realization_DW;

/* External inputs (root inport signals with default storage) */
ExtU_AION_auto_control_realization_T AION_auto_control_realization_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_AION_auto_control_realization_T AION_auto_control_realization_Y;

/* Real-time model */
RT_MODEL_AION_auto_control_realization_T AION_auto_control_realization_M_ =
  RT_MODEL_AION_auto_control_realization_T();
RT_MODEL_AION_auto_control_realization_T *const AION_auto_control_realization_M =
  &AION_auto_control_realization_M_;

/* Model step function */
void AION_auto_control_realization_step(void)
{
  real_T SteerWhlTorqReq_out;
  int32_T AutoTrqWhlReq_out;

  /* MATLAB Function: '<Root>/Acc_and_brake_control' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_LngCtrlMode'
   *  Inport: '<Root>/AutoTrqWhlReq_in_set_longitudinal_control_info_set_AutoTrqWhlReq'
   *  Inport: '<Root>/AutoTrqWhlReq_in_set_longitudinal_control_info_set_BrakeReq'
   */
  /* MATLAB Function 'Acc_and_brake_control': '<S1>:1' */
  if (AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_LngCtrlMode
      == AutoStatus) {
    /* '<S1>:1:20' */
    if (AION_auto_control_realization_U.AutoTrqWhlReq_in_set_longitudinal_control_info_set_BrakeReq
        > 0.0) {
      /* '<S1>:1:23' */
      /* '<S1>:1:24' */
      AION_auto_control_realization_B.BrakeReq_out = 0.0;
    } else if
        (AION_auto_control_realization_U.AutoTrqWhlReq_in_set_longitudinal_control_info_set_BrakeReq
         < -10.0) {
      /* '<S1>:1:25' */
      /* '<S1>:1:26' */
      AION_auto_control_realization_B.BrakeReq_out = -10.0;
    } else {
      /* '<S1>:1:28' */
      AION_auto_control_realization_B.BrakeReq_out =
        AION_auto_control_realization_U.AutoTrqWhlReq_in_set_longitudinal_control_info_set_BrakeReq;
    }

    if (AION_auto_control_realization_U.AutoTrqWhlReq_in_set_longitudinal_control_info_set_BrakeReq
        != 0.0) {
      /* '<S1>:1:31' */
      if (AION_auto_control_realization_U.AutoTrqWhlReq_in_set_longitudinal_control_info_set_AutoTrqWhlReq
          > 5000U) {
        /* '<S1>:1:34' */
        /* '<S1>:1:35' */
        AutoTrqWhlReq_out = 5000;
      } else {
        /* '<S1>:1:37' */
        AutoTrqWhlReq_out = 1;
      }
    } else {
      /* '<S1>:1:40' */
      AutoTrqWhlReq_out = 0;
    }
  } else {
    /* '<S1>:1:43' */
    AION_auto_control_realization_B.BrakeReq_out = 0.0;

    /* '<S1>:1:44' */
    AutoTrqWhlReq_out = 0;
  }

  /* '<S1>:1:46' */
  AION_auto_control_realization_B.AutoTrqWhlReq_out = static_cast<uint32_T>
    (AutoTrqWhlReq_out);

  /* End of MATLAB Function: '<Root>/Acc_and_brake_control' */
  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_set_lateral_control_info_set_LatCtrlReq'
   */
  AION_auto_control_realization_B.set_LatCtrlReq =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_set_lateral_control_info_set_LatCtrlReq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_set_ADCU_info_set_Checksum1'
   */
  AION_auto_control_realization_B.set_Checksum1 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_set_ADCU_info_set_Checksum1;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_Checksum12'
   */
  AION_auto_control_realization_B.get_Checksum12 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_Checksum12;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter12'
   */
  AION_auto_control_realization_B.get_MsgCounter12 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter12;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_Checksum13'
   */
  AION_auto_control_realization_B.get_Checksum13 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_Checksum13;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter13'
   */
  AION_auto_control_realization_B.get_MsgCounter13 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter13;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_EStopSwSt'
   */
  AION_auto_control_realization_B.get_EStopSwSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_EStopSwSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_EStopSwStVD'
   */
  AION_auto_control_realization_B.get_EStopSwStVD =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_EStopSwStVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_LatAutoCheckReport'
   */
  AION_auto_control_realization_B.get_LatAutoCheckReport =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_LatAutoCheckReport;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_LatCtrlMode'
   */
  AION_auto_control_realization_B.get_LatCtrlMode =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_LatCtrlMode;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_LatQuitReport'
   */
  AION_auto_control_realization_B.get_LatQuitReport =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_LatQuitReport;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_LngAutoCheckIReport'
   */
  AION_auto_control_realization_B.get_LngAutoCheckIReport =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_LngAutoCheckIReport;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_set_ADCU_info_set_MsgCounter1'
   */
  AION_auto_control_realization_B.set_MsgCounter1 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_set_ADCU_info_set_MsgCounter1;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_LngCtrlMode'
   */
  AION_auto_control_realization_B.get_LngCtrlMode =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_LngCtrlMode;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_LngQuitReport'
   */
  AION_auto_control_realization_B.get_LngQuitReport =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_LngQuitReport;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_StrngWhlIntv'
   */
  AION_auto_control_realization_B.get_StrngWhlIntv =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_StrngWhlIntv;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_Checksum16'
   */
  AION_auto_control_realization_B.get_Checksum16 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_Checksum16;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter16'
   */
  AION_auto_control_realization_B.get_MsgCounter16 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter16;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_Checksum17'
   */
  AION_auto_control_realization_B.get_Checksum17 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_Checksum17;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter17'
   */
  AION_auto_control_realization_B.get_MsgCounter17 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter17;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_Checksum18'
   */
  AION_auto_control_realization_B.get_Checksum18 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_Checksum18;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter18'
   */
  AION_auto_control_realization_B.get_MsgCounter18 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter18;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_Checksum2'
   */
  AION_auto_control_realization_B.get_Checksum2 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_Checksum2;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_set_ADCU_info_set_Checksum2'
   */
  AION_auto_control_realization_B.set_Checksum2 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_set_ADCU_info_set_Checksum2;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter2'
   */
  AION_auto_control_realization_B.get_MsgCounter2 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter2;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_Checksum3'
   */
  AION_auto_control_realization_B.get_Checksum3 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_Checksum3;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter3'
   */
  AION_auto_control_realization_B.get_MsgCounter3 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter3;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_Checksum4'
   */
  AION_auto_control_realization_B.get_Checksum4 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_Checksum4;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter4'
   */
  AION_auto_control_realization_B.get_MsgCounter4 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter4;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_Checksum5'
   */
  AION_auto_control_realization_B.get_Checksum5 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_Checksum5;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter5'
   */
  AION_auto_control_realization_B.get_MsgCounter5 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter5;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_Checksum6'
   */
  AION_auto_control_realization_B.get_Checksum6 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_Checksum6;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter6'
   */
  AION_auto_control_realization_B.get_MsgCounter6 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter6;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_Checksum7'
   */
  AION_auto_control_realization_B.get_Checksum7 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_Checksum7;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_set_ADCU_info_set_MsgCounter2'
   */
  AION_auto_control_realization_B.set_MsgCounter2 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_set_ADCU_info_set_MsgCounter2;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter7'
   */
  AION_auto_control_realization_B.get_MsgCounter7 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter7;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_Checksum8'
   */
  AION_auto_control_realization_B.get_Checksum8 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_Checksum8;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter8'
   */
  AION_auto_control_realization_B.get_MsgCounter8 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter8;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_Checksum9'
   */
  AION_auto_control_realization_B.get_Checksum9 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_Checksum9;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter9'
   */
  AION_auto_control_realization_B.get_MsgCounter9 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter9;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_EPB_info_get_FailSt'
   */
  AION_auto_control_realization_B.get_FailSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_EPB_info_get_FailSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_EPB_info_get_SwitchSt'
   */
  AION_auto_control_realization_B.get_SwitchSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_EPB_info_get_SwitchSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_EPB_info_get_SwitchStVD'
   */
  AION_auto_control_realization_B.get_SwitchStVD =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_EPB_info_get_SwitchStVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_EPB_info_get_SysSt'
   */
  AION_auto_control_realization_B.get_SysSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_EPB_info_get_SysSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SRS_info_get_DriverSeatBeltSt'
   */
  AION_auto_control_realization_B.get_DriverSeatBeltSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SRS_info_get_DriverSeatBeltSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_set_ADCU_info_set_Checksum3'
   */
  AION_auto_control_realization_B.set_Checksum3 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_set_ADCU_info_set_Checksum3;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SRS_info_get_PsngrSeatBeltSt'
   */
  AION_auto_control_realization_B.get_PsngrSeatBeltSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SRS_info_get_PsngrSeatBeltSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_EPS_info_get_SteeringAngle'
   */
  AION_auto_control_realization_B.get_SteeringAngle =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_EPS_info_get_SteeringAngle;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_EPS_info_get_SteeringAngleSpd'
   */
  AION_auto_control_realization_B.get_SteeringAngleSpd =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_EPS_info_get_SteeringAngleSpd;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_EPS_info_get_SteeringAngleSpdVD'
   */
  AION_auto_control_realization_B.get_SteeringAngleSpdVD =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_EPS_info_get_SteeringAngleSpdVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_EPS_info_get_SteeringAngleVD'
   */
  AION_auto_control_realization_B.get_SteeringAngleVD =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_EPS_info_get_SteeringAngleVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_EPS_info_get_StrngWhlTorq'
   */
  AION_auto_control_realization_B.get_StrngWhlTorq =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_EPS_info_get_StrngWhlTorq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_EPS_info_get_StrngWhlTorqVD'
   */
  AION_auto_control_realization_B.get_StrngWhlTorqVD =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_EPS_info_get_StrngWhlTorqVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_EPS_info_get_ThermalSt'
   */
  AION_auto_control_realization_B.get_ThermalSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_EPS_info_get_ThermalSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_EPS_info_get_WarnLamp'
   */
  AION_auto_control_realization_B.get_WarnLamp =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_EPS_info_get_WarnLamp;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCM_info_get_CtrlAvailable'
   */
  AION_auto_control_realization_B.get_CtrlAvailable =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCM_info_get_CtrlAvailable;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_set_ADCU_info_set_MsgCounter3'
   */
  AION_auto_control_realization_B.set_MsgCounter3 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_set_ADCU_info_set_MsgCounter3;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCM_info_get_DriverDoorAjarSt'
   */
  AION_auto_control_realization_B.get_DriverDoorAjarSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCM_info_get_DriverDoorAjarSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCM_info_get_FrontFogLampSt'
   */
  AION_auto_control_realization_B.get_FrontFogLampSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCM_info_get_FrontFogLampSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCM_info_get_FrontWiperSt'
   */
  AION_auto_control_realization_B.get_FrontWiperSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCM_info_get_FrontWiperSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCM_info_get_HazardLampSt'
   */
  AION_auto_control_realization_B.get_HazardLampSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCM_info_get_HazardLampSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCM_info_get_HighBeamSt'
   */
  AION_auto_control_realization_B.get_HighBeamSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCM_info_get_HighBeamSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCM_info_get_HornSt'
   */
  AION_auto_control_realization_B.get_HornSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCM_info_get_HornSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCM_info_get_KeySt'
   */
  AION_auto_control_realization_B.get_KeySt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCM_info_get_KeySt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCM_info_get_LeftTurnLampFaultSt'
   */
  AION_auto_control_realization_B.get_LeftTurnLampFaultSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCM_info_get_LeftTurnLampFaultSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCM_info_get_LeftTurnLampSt'
   */
  AION_auto_control_realization_B.get_LeftTurnLampSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCM_info_get_LeftTurnLampSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCM_info_get_LowBeamSt'
   */
  AION_auto_control_realization_B.get_LowBeamSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCM_info_get_LowBeamSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCM_info_get_PsngrDoorAjarSt'
   */
  AION_auto_control_realization_B.get_PsngrDoorAjarSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCM_info_get_PsngrDoorAjarSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCM_info_get_RLDoorAjarSt'
   */
  AION_auto_control_realization_B.get_RLDoorAjarSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCM_info_get_RLDoorAjarSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCM_info_get_RRDoorAjarSt'
   */
  AION_auto_control_realization_B.get_RRDoorAjarSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCM_info_get_RRDoorAjarSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCM_info_get_RearFogLampSt'
   */
  AION_auto_control_realization_B.get_RearFogLampSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCM_info_get_RearFogLampSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCM_info_get_RightTurnLampFaultSt'
   */
  AION_auto_control_realization_B.get_RightTurnLampFaultSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCM_info_get_RightTurnLampFaultSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCM_info_get_RightTurnLampSt'
   */
  AION_auto_control_realization_B.get_RightTurnLampSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCM_info_get_RightTurnLampSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_set_ADCU_info_set_BodyCtrlReq'
   */
  AION_auto_control_realization_B.set_BodyCtrlReq =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_set_ADCU_info_set_BodyCtrlReq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_ABSActiveSt'
   */
  AION_auto_control_realization_B.get_ABSActiveSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_ABSActiveSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_ABSFaultSt'
   */
  AION_auto_control_realization_B.get_ABSFaultSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_ABSFaultSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_VDCActiveSt'
   */
  AION_auto_control_realization_B.get_VDCActiveSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_VDCActiveSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_VDCFaultSt'
   */
  AION_auto_control_realization_B.get_VDCFaultSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_VDCFaultSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_VehSpd'
   */
  AION_auto_control_realization_B.get_VehSpd =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_VehSpd;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_VehSpdVD'
   */
  AION_auto_control_realization_B.get_VehSpdVD =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_VehSpdVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_FLWheelSpdEdgesSum'
   */
  AION_auto_control_realization_B.get_FLWheelSpdEdgesSum =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_FLWheelSpdEdgesSum;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_FLWheelSpdEdgesSumVD'
   */
  AION_auto_control_realization_B.get_FLWheelSpdEdgesSumVD =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_FLWheelSpdEdgesSumVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_FRWheelSpdEdgesSum'
   */
  AION_auto_control_realization_B.get_FRWheelSpdEdgesSum =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_FRWheelSpdEdgesSum;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_FRWheelSpdEdgesSumVD'
   */
  AION_auto_control_realization_B.get_FRWheelSpdEdgesSumVD =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_FRWheelSpdEdgesSumVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_RLWheelSpdEdgesSum'
   */
  AION_auto_control_realization_B.get_RLWheelSpdEdgesSum =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_RLWheelSpdEdgesSum;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_RLWheelSpdEdgesSumVD'
   */
  AION_auto_control_realization_B.get_RLWheelSpdEdgesSumVD =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_RLWheelSpdEdgesSumVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_RRWheelSpdEdgesSum'
   */
  AION_auto_control_realization_B.get_RRWheelSpdEdgesSum =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_RRWheelSpdEdgesSum;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_RRWheelSpdEdgesSumVD'
   */
  AION_auto_control_realization_B.get_RRWheelSpdEdgesSumVD =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_RRWheelSpdEdgesSumVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_YawRate'
   */
  AION_auto_control_realization_B.get_YawRate =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_YawRate;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_YawRateOffset'
   */
  AION_auto_control_realization_B.get_YawRateOffset =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_YawRateOffset;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_YawRateSt'
   */
  AION_auto_control_realization_B.get_YawRateSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_YawRateSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_HDCCtrlSt'
   */
  AION_auto_control_realization_B.get_HDCCtrlSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_HDCCtrlSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_HDCErrSt'
   */
  AION_auto_control_realization_B.get_HDCErrSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_HDCErrSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_AEBActive'
   */
  AION_auto_control_realization_B.get_AEBActive =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_AEBActive;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_set_lateral_control_info_set_SteerAngSpdLimt'
   */
  AION_auto_control_realization_B.set_SteerAngSpdLimt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_set_lateral_control_info_set_SteerAngSpdLimt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_AEBAvailable'
   */
  AION_auto_control_realization_B.get_AEBAvailable =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_AEBAvailable;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_CDDActive'
   */
  AION_auto_control_realization_B.get_CDDActive =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_CDDActive;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_CDDAvailable'
   */
  AION_auto_control_realization_B.get_CDDAvailable =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_CDDAvailable;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_CDDFail'
   */
  AION_auto_control_realization_B.get_CDDFail =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_CDDFail;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_MasterCylinderPr'
   */
  AION_auto_control_realization_B.get_MasterCylinderPr =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_MasterCylinderPr;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_MasterCylinderPrOffset'
   */
  AION_auto_control_realization_B.get_MasterCylinderPrOffset =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_MasterCylinderPrOffset;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_MasterCylinderPrOffsetVD'
   */
  AION_auto_control_realization_B.get_MasterCylinderPrOffsetVD =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_MasterCylinderPrOffsetVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_MasterCylinderPrVD'
   */
  AION_auto_control_realization_B.get_MasterCylinderPrVD =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_MasterCylinderPrVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_NoBrakeForce'
   */
  AION_auto_control_realization_B.get_NoBrakeForce =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_NoBrakeForce;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_VehicleStandStillSt'
   */
  AION_auto_control_realization_B.get_VehicleStandStillSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_VehicleStandStillSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_set_longitudinal_control_info_set_LngCtrlReq'
   */
  AION_auto_control_realization_B.set_LngCtrlReq =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_set_longitudinal_control_info_set_LngCtrlReq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_FLWheelRotatedDirection'
   */
  AION_auto_control_realization_B.get_FLWheelRotatedDirection =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_FLWheelRotatedDirection;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_FLWheelRotatedDirectionVD'
   */
  AION_auto_control_realization_B.get_FLWheelRotatedDirectionVD =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_FLWheelRotatedDirectionVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_FLWheelSpd'
   */
  AION_auto_control_realization_B.get_FLWheelSpd =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_FLWheelSpd;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_FLWheelSpdVD'
   */
  AION_auto_control_realization_B.get_FLWheelSpdVD =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_FLWheelSpdVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_FRWheelRotatedDirection'
   */
  AION_auto_control_realization_B.get_FRWheelRotatedDirection =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_FRWheelRotatedDirection;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_FRWheelRotatedDirectionVD'
   */
  AION_auto_control_realization_B.get_FRWheelRotatedDirectionVD =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_FRWheelRotatedDirectionVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_FRWheelSpd'
   */
  AION_auto_control_realization_B.get_FRWheelSpd =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_FRWheelSpd;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_FRWheelSpdVD'
   */
  AION_auto_control_realization_B.get_FRWheelSpdVD =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_FRWheelSpdVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_RLWheelRotatedDirection'
   */
  AION_auto_control_realization_B.get_RLWheelRotatedDirection =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_RLWheelRotatedDirection;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_RLWheelRotatedDirectionVD'
   */
  AION_auto_control_realization_B.get_RLWheelRotatedDirectionVD =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_RLWheelRotatedDirectionVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_RLWheelSpd'
   */
  AION_auto_control_realization_B.get_RLWheelSpd =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_RLWheelSpd;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_RLWheelSpdVD'
   */
  AION_auto_control_realization_B.get_RLWheelSpdVD =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_RLWheelSpdVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_RRWheelRotatedDirection'
   */
  AION_auto_control_realization_B.get_RRWheelRotatedDirection =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_RRWheelRotatedDirection;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_RRWheelRotatedDirectionVD'
   */
  AION_auto_control_realization_B.get_RRWheelRotatedDirectionVD =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_RRWheelRotatedDirectionVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_RRWheelSpd'
   */
  AION_auto_control_realization_B.get_RRWheelSpd =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_RRWheelSpd;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_RRWheelSpdVD'
   */
  AION_auto_control_realization_B.get_RRWheelSpdVD =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_RRWheelSpdVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_ActVehLaltrlAccel'
   */
  AION_auto_control_realization_B.get_ActVehLaltrlAccel =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_ActVehLaltrlAccel;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_ActVehLaltrlAccelVD'
   */
  AION_auto_control_realization_B.get_ActVehLaltrlAccelVD =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_ActVehLaltrlAccelVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_ActVehLongAccel'
   */
  AION_auto_control_realization_B.get_ActVehLongAccel =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_ActVehLongAccel;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_ActVehLongAccelVD'
   */
  AION_auto_control_realization_B.get_ActVehLongAccelVD =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_ActVehLongAccelVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_VehLaltrlAccelOffset'
   */
  AION_auto_control_realization_B.get_VehLaltrlAccelOffset =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_VehLaltrlAccelOffset;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_BCS_info_get_VehLongAccelOffset'
   */
  AION_auto_control_realization_B.get_VehLongAccelOffset =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_VehLongAccelOffset;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_VCU_info_get_GearLeverIntv'
   */
  AION_auto_control_realization_B.get_GearLeverIntv =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_VCU_info_get_GearLeverIntv;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_VCU_info_get_VehDrvMod'
   */
  AION_auto_control_realization_B.get_VehDrvMod =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_VCU_info_get_VehDrvMod;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_VCU_info_get_VehRdySt'
   */
  AION_auto_control_realization_B.get_VehRdySt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_VCU_info_get_VehRdySt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_VCU_info_get_VehRng'
   */
  AION_auto_control_realization_B.get_VehRng =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_VCU_info_get_VehRng;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_VCU_info_get_ActRecpTorq'
   */
  AION_auto_control_realization_B.get_ActRecpTorq =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_VCU_info_get_ActRecpTorq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_VCU_info_get_ActRecpTorqSt'
   */
  AION_auto_control_realization_B.get_ActRecpTorqSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_VCU_info_get_ActRecpTorqSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_VCU_info_get_CrntGearLvl'
   */
  AION_auto_control_realization_B.get_CrntGearLvl =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_VCU_info_get_CrntGearLvl;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_VCU_info_get_CrntGearLvlVD'
   */
  AION_auto_control_realization_B.get_CrntGearLvlVD =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_VCU_info_get_CrntGearLvlVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_VCU_info_get_ACCMaxRecpDecel'
   */
  AION_auto_control_realization_B.get_ACCMaxRecpDecel =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_VCU_info_get_ACCMaxRecpDecel;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_VCU_info_get_ACCMaxRecpDecelVD'
   */
  AION_auto_control_realization_B.get_ACCMaxRecpDecelVD =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_VCU_info_get_ACCMaxRecpDecelVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_VCU_info_get_ActVehWheelTorq'
   */
  AION_auto_control_realization_B.get_ActVehWheelTorq =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_VCU_info_get_ActVehWheelTorq;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_VCU_info_get_LateralAssistBtnInfo'
   */
  AION_auto_control_realization_B.get_LateralAssistBtnInfo =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_VCU_info_get_LateralAssistBtnInfo;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_VCU_info_get_LateralAssistBtnInfoVD'
   */
  AION_auto_control_realization_B.get_LateralAssistBtnInfoVD =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_VCU_info_get_LateralAssistBtnInfoVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_VCU_info_get_ACCButtInfo'
   */
  AION_auto_control_realization_B.get_ACCButtInfo =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_VCU_info_get_ACCButtInfo;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_VCU_info_get_AccElecECFail'
   */
  AION_auto_control_realization_B.get_AccElecECFail =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_VCU_info_get_AccElecECFail;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_VCU_info_get_GasPedalActPst'
   */
  AION_auto_control_realization_B.get_GasPedalActPst =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_VCU_info_get_GasPedalActPst;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_VCU_info_get_GasPedalActPstVD'
   */
  AION_auto_control_realization_B.get_GasPedalActPstVD =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_VCU_info_get_GasPedalActPstVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_VCU_info_get_VehWheelTorqMax'
   */
  AION_auto_control_realization_B.get_VehWheelTorqMax =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_VCU_info_get_VehWheelTorqMax;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_VCU_info_get_BrkPedalSt'
   */
  AION_auto_control_realization_B.get_BrkPedalSt =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_VCU_info_get_BrkPedalSt;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_VCU_info_get_BrkPedalStVD'
   */
  AION_auto_control_realization_B.get_BrkPedalStVD =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_VCU_info_get_BrkPedalStVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_VCU_info_get_GasPedalVirtualPst'
   */
  AION_auto_control_realization_B.get_GasPedalVirtualPst =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_VCU_info_get_GasPedalVirtualPst;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_VCU_info_get_GasPedalVirtualPstVD'
   */
  AION_auto_control_realization_B.get_GasPedalVirtualPstVD =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_VCU_info_get_GasPedalVirtualPstVD;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_Checksum1'
   */
  AION_auto_control_realization_B.get_Checksum1 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_Checksum1;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter1'
   */
  AION_auto_control_realization_B.get_MsgCounter1 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter1;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_Checksum10'
   */
  AION_auto_control_realization_B.get_Checksum10 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_Checksum10;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter10'
   */
  AION_auto_control_realization_B.get_MsgCounter10 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter10;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_Checksum11'
   */
  AION_auto_control_realization_B.get_Checksum11 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_Checksum11;

  /* SignalConversion generated from: '<Root>/OutBus_Outport_1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter11'
   */
  AION_auto_control_realization_B.get_MsgCounter11 =
    AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter11;

  /* MATLAB Function: '<Root>/MATLAB Function' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_LngCtrlMode'
   *  Inport: '<Root>/AutoTrqWhlReq_in_set_longitudinal_control_info_set_GearLvlReq'
   *  Inport: '<Root>/AutoTrqWhlReq_in_set_longitudinal_control_info_set_GearLvlReqVD'
   */
  /* MATLAB Function 'MATLAB Function': '<S2>:1' */
  if ((AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_LngCtrlMode
       == AutoStatus) &&
      (AION_auto_control_realization_U.AutoTrqWhlReq_in_set_longitudinal_control_info_set_GearLvlReqVD
       == Valid)) {
    /* '<S2>:1:15' */
    /* '<S2>:1:17' */
    AION_auto_control_realization_B.GearLvlReqVD_out = Valid;

    /* '<S2>:1:18' */
    AION_auto_control_realization_B.GearLvlReq_out =
      AION_auto_control_realization_U.AutoTrqWhlReq_in_set_longitudinal_control_info_set_GearLvlReq;
  } else {
    /* '<S2>:1:20' */
    AION_auto_control_realization_B.GearLvlReqVD_out = Invalid;

    /* '<S2>:1:21' */
    AION_auto_control_realization_B.GearLvlReq_out = NoRequest;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function' */

  /* MATLAB Function: '<Root>/MATLAB Function1' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_get_SCU_info_get_LatCtrlMode'
   *  Inport: '<Root>/AutoTrqWhlReq_in_set_lateral_control_info_set_SteerAngReq'
   *  Inport: '<Root>/AutoTrqWhlReq_in_set_lateral_control_info_set_SteerWhlTorqReq'
   */
  /* MATLAB Function 'MATLAB Function1': '<S3>:1' */
  if (AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_LatCtrlMode
      == AutoStatus) {
    /* '<S3>:1:14' */
    if (AION_auto_control_realization_U.AutoTrqWhlReq_in_set_lateral_control_info_set_SteerAngReq
        > 540.0) {
      /* '<S3>:1:17' */
      /* '<S3>:1:18' */
      AION_auto_control_realization_B.SteerAngReq_out = 540.0;
    } else if
        (AION_auto_control_realization_U.AutoTrqWhlReq_in_set_lateral_control_info_set_SteerAngReq
         < -540.0) {
      /* '<S3>:1:19' */
      /* '<S3>:1:20' */
      AION_auto_control_realization_B.SteerAngReq_out = -540.0;
    } else {
      /* '<S3>:1:22' */
      AION_auto_control_realization_B.SteerAngReq_out =
        AION_auto_control_realization_U.AutoTrqWhlReq_in_set_lateral_control_info_set_SteerAngReq;
    }

    if (AION_auto_control_realization_U.AutoTrqWhlReq_in_set_lateral_control_info_set_SteerWhlTorqReq
        - AION_auto_control_realization_DW.SteerWhlTorqReq_temp > 10.0) {
      /* '<S3>:1:26' */
      /* '<S3>:1:27' */
      SteerWhlTorqReq_out =
        AION_auto_control_realization_DW.SteerWhlTorqReq_temp + 10.0;
    } else if
        (AION_auto_control_realization_U.AutoTrqWhlReq_in_set_lateral_control_info_set_SteerWhlTorqReq
         - AION_auto_control_realization_DW.SteerWhlTorqReq_temp < -10.0) {
      /* '<S3>:1:28' */
      /* '<S3>:1:29' */
      SteerWhlTorqReq_out =
        AION_auto_control_realization_DW.SteerWhlTorqReq_temp - 10.0;
    } else {
      /* '<S3>:1:31' */
      SteerWhlTorqReq_out =
        AION_auto_control_realization_U.AutoTrqWhlReq_in_set_lateral_control_info_set_SteerWhlTorqReq;
    }

    /* '<S3>:1:33' */
    AION_auto_control_realization_DW.SteerWhlTorqReq_temp = SteerWhlTorqReq_out;
  } else {
    /* '<S3>:1:35' */
    AION_auto_control_realization_B.SteerAngReq_out = 0.0;

    /* '<S3>:1:36' */
    SteerWhlTorqReq_out = 0.0;
  }

  AION_auto_control_realization_B.SteerWhlTorqReq_out = SteerWhlTorqReq_out;

  /* End of MATLAB Function: '<Root>/MATLAB Function1' */

  /* MATLAB Function: '<Root>/MATLAB Function2' incorporates:
   *  Inport: '<Root>/AutoTrqWhlReq_in_set_ADCU_info_set_BeamReq'
   *  Inport: '<Root>/AutoTrqWhlReq_in_set_ADCU_info_set_BodyCtrlReq'
   *  Inport: '<Root>/AutoTrqWhlReq_in_set_ADCU_info_set_HornRingReq'
   *  Inport: '<Root>/AutoTrqWhlReq_in_set_ADCU_info_set_TurnLightReq'
   */
  /* MATLAB Function 'MATLAB Function2': '<S4>:1' */
  if (AION_auto_control_realization_U.AutoTrqWhlReq_in_set_ADCU_info_set_BodyCtrlReq
      == Enable) {
    /* '<S4>:1:11' */
    if (AION_auto_control_realization_U.AutoTrqWhlReq_in_set_ADCU_info_set_TurnLightReq
        == EmergencyLight) {
      /* '<S4>:1:15' */
      if (AION_auto_control_realization_DW.EmergencyLightCount < 2.0) {
        /* '<S4>:1:16' */
        /* '<S4>:1:18' */
        AION_auto_control_realization_B.turn_light_req = NoLightRequest;

        /* '<S4>:1:19' */
        AION_auto_control_realization_DW.EmergencyLightCount++;
      } else {
        /* '<S4>:1:22' */
        AION_auto_control_realization_B.turn_light_req = EmergencyLight;
      }
    } else {
      /* '<S4>:1:26' */
      AION_auto_control_realization_B.turn_light_req =
        AION_auto_control_realization_U.AutoTrqWhlReq_in_set_ADCU_info_set_TurnLightReq;

      /* '<S4>:1:27' */
      AION_auto_control_realization_DW.EmergencyLightCount = 0.0;
    }

    /* '<S4>:1:30' */
    AION_auto_control_realization_B.horn_ring_req =
      AION_auto_control_realization_U.AutoTrqWhlReq_in_set_ADCU_info_set_HornRingReq;

    /* '<S4>:1:32' */
    AION_auto_control_realization_B.beam_req =
      AION_auto_control_realization_U.AutoTrqWhlReq_in_set_ADCU_info_set_BeamReq;
  } else {
    /* '<S4>:1:34' */
    AION_auto_control_realization_B.turn_light_req = NoLightRequest;

    /* '<S4>:1:35' */
    AION_auto_control_realization_B.horn_ring_req = NotActiveRequest;

    /* '<S4>:1:36' */
    AION_auto_control_realization_B.beam_req = NoBeamRequest;
  }

  /* End of MATLAB Function: '<Root>/MATLAB Function2' */

  /* Outport: '<Root>/OutBus_set_lateral_control_info_set_LatCtrlReq' */
  AION_auto_control_realization_Y.OutBus_set_lateral_control_info_set_LatCtrlReq
    = AION_auto_control_realization_B.set_LatCtrlReq;

  /* Outport: '<Root>/OutBus_set_lateral_control_info_set_SteerWhlTorqReq' */
  AION_auto_control_realization_Y.OutBus_set_lateral_control_info_set_SteerWhlTorqReq
    = AION_auto_control_realization_B.SteerWhlTorqReq_out;

  /* Outport: '<Root>/OutBus_set_lateral_control_info_set_SteerAngReq' */
  AION_auto_control_realization_Y.OutBus_set_lateral_control_info_set_SteerAngReq
    = AION_auto_control_realization_B.SteerAngReq_out;

  /* Outport: '<Root>/OutBus_set_lateral_control_info_set_SteerAngSpdLimt' */
  AION_auto_control_realization_Y.OutBus_set_lateral_control_info_set_SteerAngSpdLimt
    = AION_auto_control_realization_B.set_SteerAngSpdLimt;

  /* Outport: '<Root>/OutBus_set_longitudinal_control_info_set_LngCtrlReq' */
  AION_auto_control_realization_Y.OutBus_set_longitudinal_control_info_set_LngCtrlReq
    = AION_auto_control_realization_B.set_LngCtrlReq;

  /* Outport: '<Root>/OutBus_set_longitudinal_control_info_set_AutoTrqWhlReq' */
  AION_auto_control_realization_Y.OutBus_set_longitudinal_control_info_set_AutoTrqWhlReq
    = AION_auto_control_realization_B.AutoTrqWhlReq_out;

  /* Outport: '<Root>/OutBus_set_longitudinal_control_info_set_BrakeReq' */
  AION_auto_control_realization_Y.OutBus_set_longitudinal_control_info_set_BrakeReq
    = AION_auto_control_realization_B.BrakeReq_out;

  /* Outport: '<Root>/OutBus_set_longitudinal_control_info_set_GearLvlReq' */
  AION_auto_control_realization_Y.OutBus_set_longitudinal_control_info_set_GearLvlReq
    = AION_auto_control_realization_B.GearLvlReq_out;

  /* Outport: '<Root>/OutBus_set_longitudinal_control_info_set_GearLvlReqVD' */
  AION_auto_control_realization_Y.OutBus_set_longitudinal_control_info_set_GearLvlReqVD
    = AION_auto_control_realization_B.GearLvlReqVD_out;

  /* Outport: '<Root>/OutBus_set_ADCU_info_set_Checksum1' */
  AION_auto_control_realization_Y.OutBus_set_ADCU_info_set_Checksum1 =
    AION_auto_control_realization_B.set_Checksum1;

  /* Outport: '<Root>/OutBus_set_ADCU_info_set_MsgCounter1' */
  AION_auto_control_realization_Y.OutBus_set_ADCU_info_set_MsgCounter1 =
    AION_auto_control_realization_B.set_MsgCounter1;

  /* Outport: '<Root>/OutBus_set_ADCU_info_set_Checksum2' */
  AION_auto_control_realization_Y.OutBus_set_ADCU_info_set_Checksum2 =
    AION_auto_control_realization_B.set_Checksum2;

  /* Outport: '<Root>/OutBus_set_ADCU_info_set_MsgCounter2' */
  AION_auto_control_realization_Y.OutBus_set_ADCU_info_set_MsgCounter2 =
    AION_auto_control_realization_B.set_MsgCounter2;

  /* Outport: '<Root>/OutBus_set_ADCU_info_set_Checksum3' */
  AION_auto_control_realization_Y.OutBus_set_ADCU_info_set_Checksum3 =
    AION_auto_control_realization_B.set_Checksum3;

  /* Outport: '<Root>/OutBus_set_ADCU_info_set_MsgCounter3' */
  AION_auto_control_realization_Y.OutBus_set_ADCU_info_set_MsgCounter3 =
    AION_auto_control_realization_B.set_MsgCounter3;

  /* Outport: '<Root>/OutBus_set_ADCU_info_set_BeamReq' */
  AION_auto_control_realization_Y.OutBus_set_ADCU_info_set_BeamReq =
    AION_auto_control_realization_B.beam_req;

  /* Outport: '<Root>/OutBus_set_ADCU_info_set_BodyCtrlReq' */
  AION_auto_control_realization_Y.OutBus_set_ADCU_info_set_BodyCtrlReq =
    AION_auto_control_realization_B.set_BodyCtrlReq;

  /* Outport: '<Root>/OutBus_set_ADCU_info_set_HornRingReq' */
  AION_auto_control_realization_Y.OutBus_set_ADCU_info_set_HornRingReq =
    AION_auto_control_realization_B.horn_ring_req;

  /* Outport: '<Root>/OutBus_set_ADCU_info_set_TurnLightReq' */
  AION_auto_control_realization_Y.OutBus_set_ADCU_info_set_TurnLightReq =
    AION_auto_control_realization_B.turn_light_req;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_ABSActiveSt' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_ABSActiveSt =
    AION_auto_control_realization_B.get_ABSActiveSt;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_ABSFaultSt' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_ABSFaultSt =
    AION_auto_control_realization_B.get_ABSFaultSt;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_VDCActiveSt' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_VDCActiveSt =
    AION_auto_control_realization_B.get_VDCActiveSt;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_VDCFaultSt' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_VDCFaultSt =
    AION_auto_control_realization_B.get_VDCFaultSt;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_VehSpd' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_VehSpd =
    AION_auto_control_realization_B.get_VehSpd;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_VehSpdVD' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_VehSpdVD =
    AION_auto_control_realization_B.get_VehSpdVD;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_FLWheelSpdEdgesSum' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_FLWheelSpdEdgesSum =
    AION_auto_control_realization_B.get_FLWheelSpdEdgesSum;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_FLWheelSpdEdgesSumVD' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_FLWheelSpdEdgesSumVD =
    AION_auto_control_realization_B.get_FLWheelSpdEdgesSumVD;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_FRWheelSpdEdgesSum' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_FRWheelSpdEdgesSum =
    AION_auto_control_realization_B.get_FRWheelSpdEdgesSum;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_FRWheelSpdEdgesSumVD' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_FRWheelSpdEdgesSumVD =
    AION_auto_control_realization_B.get_FRWheelSpdEdgesSumVD;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_RLWheelSpdEdgesSum' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_RLWheelSpdEdgesSum =
    AION_auto_control_realization_B.get_RLWheelSpdEdgesSum;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_RLWheelSpdEdgesSumVD' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_RLWheelSpdEdgesSumVD =
    AION_auto_control_realization_B.get_RLWheelSpdEdgesSumVD;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_RRWheelSpdEdgesSum' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_RRWheelSpdEdgesSum =
    AION_auto_control_realization_B.get_RRWheelSpdEdgesSum;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_RRWheelSpdEdgesSumVD' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_RRWheelSpdEdgesSumVD =
    AION_auto_control_realization_B.get_RRWheelSpdEdgesSumVD;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_YawRate' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_YawRate =
    AION_auto_control_realization_B.get_YawRate;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_YawRateOffset' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_YawRateOffset =
    AION_auto_control_realization_B.get_YawRateOffset;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_YawRateSt' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_YawRateSt =
    AION_auto_control_realization_B.get_YawRateSt;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_HDCCtrlSt' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_HDCCtrlSt =
    AION_auto_control_realization_B.get_HDCCtrlSt;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_HDCErrSt' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_HDCErrSt =
    AION_auto_control_realization_B.get_HDCErrSt;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_AEBActive' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_AEBActive =
    AION_auto_control_realization_B.get_AEBActive;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_AEBAvailable' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_AEBAvailable =
    AION_auto_control_realization_B.get_AEBAvailable;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_CDDActive' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_CDDActive =
    AION_auto_control_realization_B.get_CDDActive;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_CDDAvailable' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_CDDAvailable =
    AION_auto_control_realization_B.get_CDDAvailable;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_CDDFail' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_CDDFail =
    AION_auto_control_realization_B.get_CDDFail;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_MasterCylinderPr' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_MasterCylinderPr =
    AION_auto_control_realization_B.get_MasterCylinderPr;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_MasterCylinderPrOffset' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_MasterCylinderPrOffset
    = AION_auto_control_realization_B.get_MasterCylinderPrOffset;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_MasterCylinderPrOffsetVD' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_MasterCylinderPrOffsetVD
    = AION_auto_control_realization_B.get_MasterCylinderPrOffsetVD;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_MasterCylinderPrVD' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_MasterCylinderPrVD =
    AION_auto_control_realization_B.get_MasterCylinderPrVD;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_NoBrakeForce' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_NoBrakeForce =
    AION_auto_control_realization_B.get_NoBrakeForce;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_VehicleStandStillSt' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_VehicleStandStillSt =
    AION_auto_control_realization_B.get_VehicleStandStillSt;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_FLWheelRotatedDirection' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_FLWheelRotatedDirection
    = AION_auto_control_realization_B.get_FLWheelRotatedDirection;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_FLWheelRotatedDirectionVD' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_FLWheelRotatedDirectionVD
    = AION_auto_control_realization_B.get_FLWheelRotatedDirectionVD;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_FLWheelSpd' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_FLWheelSpd =
    AION_auto_control_realization_B.get_FLWheelSpd;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_FLWheelSpdVD' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_FLWheelSpdVD =
    AION_auto_control_realization_B.get_FLWheelSpdVD;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_FRWheelRotatedDirection' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_FRWheelRotatedDirection
    = AION_auto_control_realization_B.get_FRWheelRotatedDirection;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_FRWheelRotatedDirectionVD' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_FRWheelRotatedDirectionVD
    = AION_auto_control_realization_B.get_FRWheelRotatedDirectionVD;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_FRWheelSpd' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_FRWheelSpd =
    AION_auto_control_realization_B.get_FRWheelSpd;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_FRWheelSpdVD' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_FRWheelSpdVD =
    AION_auto_control_realization_B.get_FRWheelSpdVD;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_RLWheelRotatedDirection' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_RLWheelRotatedDirection
    = AION_auto_control_realization_B.get_RLWheelRotatedDirection;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_RLWheelRotatedDirectionVD' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_RLWheelRotatedDirectionVD
    = AION_auto_control_realization_B.get_RLWheelRotatedDirectionVD;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_RLWheelSpd' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_RLWheelSpd =
    AION_auto_control_realization_B.get_RLWheelSpd;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_RLWheelSpdVD' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_RLWheelSpdVD =
    AION_auto_control_realization_B.get_RLWheelSpdVD;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_RRWheelRotatedDirection' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_RRWheelRotatedDirection
    = AION_auto_control_realization_B.get_RRWheelRotatedDirection;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_RRWheelRotatedDirectionVD' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_RRWheelRotatedDirectionVD
    = AION_auto_control_realization_B.get_RRWheelRotatedDirectionVD;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_RRWheelSpd' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_RRWheelSpd =
    AION_auto_control_realization_B.get_RRWheelSpd;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_RRWheelSpdVD' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_RRWheelSpdVD =
    AION_auto_control_realization_B.get_RRWheelSpdVD;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_ActVehLaltrlAccel' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_ActVehLaltrlAccel =
    AION_auto_control_realization_B.get_ActVehLaltrlAccel;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_ActVehLaltrlAccelVD' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_ActVehLaltrlAccelVD =
    AION_auto_control_realization_B.get_ActVehLaltrlAccelVD;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_ActVehLongAccel' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_ActVehLongAccel =
    AION_auto_control_realization_B.get_ActVehLongAccel;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_ActVehLongAccelVD' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_ActVehLongAccelVD =
    AION_auto_control_realization_B.get_ActVehLongAccelVD;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_VehLaltrlAccelOffset' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_VehLaltrlAccelOffset =
    AION_auto_control_realization_B.get_VehLaltrlAccelOffset;

  /* Outport: '<Root>/OutBus_get_BCS_info_get_VehLongAccelOffset' */
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_VehLongAccelOffset =
    AION_auto_control_realization_B.get_VehLongAccelOffset;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_GearLeverIntv' */
  AION_auto_control_realization_Y.OutBus_get_VCU_info_get_GearLeverIntv =
    AION_auto_control_realization_B.get_GearLeverIntv;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_VehDrvMod' */
  AION_auto_control_realization_Y.OutBus_get_VCU_info_get_VehDrvMod =
    AION_auto_control_realization_B.get_VehDrvMod;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_VehRdySt' */
  AION_auto_control_realization_Y.OutBus_get_VCU_info_get_VehRdySt =
    AION_auto_control_realization_B.get_VehRdySt;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_VehRng' */
  AION_auto_control_realization_Y.OutBus_get_VCU_info_get_VehRng =
    AION_auto_control_realization_B.get_VehRng;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_ActRecpTorq' */
  AION_auto_control_realization_Y.OutBus_get_VCU_info_get_ActRecpTorq =
    AION_auto_control_realization_B.get_ActRecpTorq;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_ActRecpTorqSt' */
  AION_auto_control_realization_Y.OutBus_get_VCU_info_get_ActRecpTorqSt =
    AION_auto_control_realization_B.get_ActRecpTorqSt;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_CrntGearLvl' */
  AION_auto_control_realization_Y.OutBus_get_VCU_info_get_CrntGearLvl =
    AION_auto_control_realization_B.get_CrntGearLvl;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_CrntGearLvlVD' */
  AION_auto_control_realization_Y.OutBus_get_VCU_info_get_CrntGearLvlVD =
    AION_auto_control_realization_B.get_CrntGearLvlVD;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_ACCMaxRecpDecel' */
  AION_auto_control_realization_Y.OutBus_get_VCU_info_get_ACCMaxRecpDecel =
    AION_auto_control_realization_B.get_ACCMaxRecpDecel;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_ACCMaxRecpDecelVD' */
  AION_auto_control_realization_Y.OutBus_get_VCU_info_get_ACCMaxRecpDecelVD =
    AION_auto_control_realization_B.get_ACCMaxRecpDecelVD;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_ActVehWheelTorq' */
  AION_auto_control_realization_Y.OutBus_get_VCU_info_get_ActVehWheelTorq =
    AION_auto_control_realization_B.get_ActVehWheelTorq;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_LateralAssistBtnInfo' */
  AION_auto_control_realization_Y.OutBus_get_VCU_info_get_LateralAssistBtnInfo =
    AION_auto_control_realization_B.get_LateralAssistBtnInfo;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_LateralAssistBtnInfoVD' */
  AION_auto_control_realization_Y.OutBus_get_VCU_info_get_LateralAssistBtnInfoVD
    = AION_auto_control_realization_B.get_LateralAssistBtnInfoVD;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_ACCButtInfo' */
  AION_auto_control_realization_Y.OutBus_get_VCU_info_get_ACCButtInfo =
    AION_auto_control_realization_B.get_ACCButtInfo;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_AccElecECFail' */
  AION_auto_control_realization_Y.OutBus_get_VCU_info_get_AccElecECFail =
    AION_auto_control_realization_B.get_AccElecECFail;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_GasPedalActPst' */
  AION_auto_control_realization_Y.OutBus_get_VCU_info_get_GasPedalActPst =
    AION_auto_control_realization_B.get_GasPedalActPst;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_GasPedalActPstVD' */
  AION_auto_control_realization_Y.OutBus_get_VCU_info_get_GasPedalActPstVD =
    AION_auto_control_realization_B.get_GasPedalActPstVD;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_VehWheelTorqMax' */
  AION_auto_control_realization_Y.OutBus_get_VCU_info_get_VehWheelTorqMax =
    AION_auto_control_realization_B.get_VehWheelTorqMax;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_BrkPedalSt' */
  AION_auto_control_realization_Y.OutBus_get_VCU_info_get_BrkPedalSt =
    AION_auto_control_realization_B.get_BrkPedalSt;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_BrkPedalStVD' */
  AION_auto_control_realization_Y.OutBus_get_VCU_info_get_BrkPedalStVD =
    AION_auto_control_realization_B.get_BrkPedalStVD;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_GasPedalVirtualPst' */
  AION_auto_control_realization_Y.OutBus_get_VCU_info_get_GasPedalVirtualPst =
    AION_auto_control_realization_B.get_GasPedalVirtualPst;

  /* Outport: '<Root>/OutBus_get_VCU_info_get_GasPedalVirtualPstVD' */
  AION_auto_control_realization_Y.OutBus_get_VCU_info_get_GasPedalVirtualPstVD =
    AION_auto_control_realization_B.get_GasPedalVirtualPstVD;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_Checksum1' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_Checksum1 =
    AION_auto_control_realization_B.get_Checksum1;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_MsgCounter1' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_MsgCounter1 =
    AION_auto_control_realization_B.get_MsgCounter1;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_Checksum10' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_Checksum10 =
    AION_auto_control_realization_B.get_Checksum10;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_MsgCounter10' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_MsgCounter10 =
    AION_auto_control_realization_B.get_MsgCounter10;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_Checksum11' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_Checksum11 =
    AION_auto_control_realization_B.get_Checksum11;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_MsgCounter11' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_MsgCounter11 =
    AION_auto_control_realization_B.get_MsgCounter11;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_Checksum12' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_Checksum12 =
    AION_auto_control_realization_B.get_Checksum12;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_MsgCounter12' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_MsgCounter12 =
    AION_auto_control_realization_B.get_MsgCounter12;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_Checksum13' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_Checksum13 =
    AION_auto_control_realization_B.get_Checksum13;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_MsgCounter13' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_MsgCounter13 =
    AION_auto_control_realization_B.get_MsgCounter13;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_EStopSwSt' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_EStopSwSt =
    AION_auto_control_realization_B.get_EStopSwSt;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_EStopSwStVD' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_EStopSwStVD =
    AION_auto_control_realization_B.get_EStopSwStVD;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_LatAutoCheckReport' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_LatAutoCheckReport =
    AION_auto_control_realization_B.get_LatAutoCheckReport;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_LatCtrlMode' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_LatCtrlMode =
    AION_auto_control_realization_B.get_LatCtrlMode;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_LatQuitReport' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_LatQuitReport =
    AION_auto_control_realization_B.get_LatQuitReport;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_LngAutoCheckIReport' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_LngAutoCheckIReport =
    AION_auto_control_realization_B.get_LngAutoCheckIReport;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_LngCtrlMode' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_LngCtrlMode =
    AION_auto_control_realization_B.get_LngCtrlMode;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_LngQuitReport' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_LngQuitReport =
    AION_auto_control_realization_B.get_LngQuitReport;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_StrngWhlIntv' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_StrngWhlIntv =
    AION_auto_control_realization_B.get_StrngWhlIntv;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_Checksum16' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_Checksum16 =
    AION_auto_control_realization_B.get_Checksum16;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_MsgCounter16' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_MsgCounter16 =
    AION_auto_control_realization_B.get_MsgCounter16;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_Checksum17' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_Checksum17 =
    AION_auto_control_realization_B.get_Checksum17;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_MsgCounter17' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_MsgCounter17 =
    AION_auto_control_realization_B.get_MsgCounter17;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_Checksum18' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_Checksum18 =
    AION_auto_control_realization_B.get_Checksum18;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_MsgCounter18' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_MsgCounter18 =
    AION_auto_control_realization_B.get_MsgCounter18;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_Checksum2' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_Checksum2 =
    AION_auto_control_realization_B.get_Checksum2;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_MsgCounter2' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_MsgCounter2 =
    AION_auto_control_realization_B.get_MsgCounter2;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_Checksum3' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_Checksum3 =
    AION_auto_control_realization_B.get_Checksum3;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_MsgCounter3' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_MsgCounter3 =
    AION_auto_control_realization_B.get_MsgCounter3;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_Checksum4' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_Checksum4 =
    AION_auto_control_realization_B.get_Checksum4;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_MsgCounter4' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_MsgCounter4 =
    AION_auto_control_realization_B.get_MsgCounter4;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_Checksum5' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_Checksum5 =
    AION_auto_control_realization_B.get_Checksum5;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_MsgCounter5' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_MsgCounter5 =
    AION_auto_control_realization_B.get_MsgCounter5;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_Checksum6' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_Checksum6 =
    AION_auto_control_realization_B.get_Checksum6;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_MsgCounter6' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_MsgCounter6 =
    AION_auto_control_realization_B.get_MsgCounter6;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_Checksum7' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_Checksum7 =
    AION_auto_control_realization_B.get_Checksum7;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_MsgCounter7' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_MsgCounter7 =
    AION_auto_control_realization_B.get_MsgCounter7;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_Checksum8' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_Checksum8 =
    AION_auto_control_realization_B.get_Checksum8;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_MsgCounter8' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_MsgCounter8 =
    AION_auto_control_realization_B.get_MsgCounter8;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_Checksum9' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_Checksum9 =
    AION_auto_control_realization_B.get_Checksum9;

  /* Outport: '<Root>/OutBus_get_SCU_info_get_MsgCounter9' */
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_MsgCounter9 =
    AION_auto_control_realization_B.get_MsgCounter9;

  /* Outport: '<Root>/OutBus_get_EPB_info_get_FailSt' */
  AION_auto_control_realization_Y.OutBus_get_EPB_info_get_FailSt =
    AION_auto_control_realization_B.get_FailSt;

  /* Outport: '<Root>/OutBus_get_EPB_info_get_SwitchSt' */
  AION_auto_control_realization_Y.OutBus_get_EPB_info_get_SwitchSt =
    AION_auto_control_realization_B.get_SwitchSt;

  /* Outport: '<Root>/OutBus_get_EPB_info_get_SwitchStVD' */
  AION_auto_control_realization_Y.OutBus_get_EPB_info_get_SwitchStVD =
    AION_auto_control_realization_B.get_SwitchStVD;

  /* Outport: '<Root>/OutBus_get_EPB_info_get_SysSt' */
  AION_auto_control_realization_Y.OutBus_get_EPB_info_get_SysSt =
    AION_auto_control_realization_B.get_SysSt;

  /* Outport: '<Root>/OutBus_get_SRS_info_get_DriverSeatBeltSt' */
  AION_auto_control_realization_Y.OutBus_get_SRS_info_get_DriverSeatBeltSt =
    AION_auto_control_realization_B.get_DriverSeatBeltSt;

  /* Outport: '<Root>/OutBus_get_SRS_info_get_PsngrSeatBeltSt' */
  AION_auto_control_realization_Y.OutBus_get_SRS_info_get_PsngrSeatBeltSt =
    AION_auto_control_realization_B.get_PsngrSeatBeltSt;

  /* Outport: '<Root>/OutBus_get_EPS_info_get_SteeringAngle' */
  AION_auto_control_realization_Y.OutBus_get_EPS_info_get_SteeringAngle =
    AION_auto_control_realization_B.get_SteeringAngle;

  /* Outport: '<Root>/OutBus_get_EPS_info_get_SteeringAngleSpd' */
  AION_auto_control_realization_Y.OutBus_get_EPS_info_get_SteeringAngleSpd =
    AION_auto_control_realization_B.get_SteeringAngleSpd;

  /* Outport: '<Root>/OutBus_get_EPS_info_get_SteeringAngleSpdVD' */
  AION_auto_control_realization_Y.OutBus_get_EPS_info_get_SteeringAngleSpdVD =
    AION_auto_control_realization_B.get_SteeringAngleSpdVD;

  /* Outport: '<Root>/OutBus_get_EPS_info_get_SteeringAngleVD' */
  AION_auto_control_realization_Y.OutBus_get_EPS_info_get_SteeringAngleVD =
    AION_auto_control_realization_B.get_SteeringAngleVD;

  /* Outport: '<Root>/OutBus_get_EPS_info_get_StrngWhlTorq' */
  AION_auto_control_realization_Y.OutBus_get_EPS_info_get_StrngWhlTorq =
    AION_auto_control_realization_B.get_StrngWhlTorq;

  /* Outport: '<Root>/OutBus_get_EPS_info_get_StrngWhlTorqVD' */
  AION_auto_control_realization_Y.OutBus_get_EPS_info_get_StrngWhlTorqVD =
    AION_auto_control_realization_B.get_StrngWhlTorqVD;

  /* Outport: '<Root>/OutBus_get_EPS_info_get_ThermalSt' */
  AION_auto_control_realization_Y.OutBus_get_EPS_info_get_ThermalSt =
    AION_auto_control_realization_B.get_ThermalSt;

  /* Outport: '<Root>/OutBus_get_EPS_info_get_WarnLamp' */
  AION_auto_control_realization_Y.OutBus_get_EPS_info_get_WarnLamp =
    AION_auto_control_realization_B.get_WarnLamp;

  /* Outport: '<Root>/OutBus_get_BCM_info_get_CtrlAvailable' */
  AION_auto_control_realization_Y.OutBus_get_BCM_info_get_CtrlAvailable =
    AION_auto_control_realization_B.get_CtrlAvailable;

  /* Outport: '<Root>/OutBus_get_BCM_info_get_DriverDoorAjarSt' */
  AION_auto_control_realization_Y.OutBus_get_BCM_info_get_DriverDoorAjarSt =
    AION_auto_control_realization_B.get_DriverDoorAjarSt;

  /* Outport: '<Root>/OutBus_get_BCM_info_get_FrontFogLampSt' */
  AION_auto_control_realization_Y.OutBus_get_BCM_info_get_FrontFogLampSt =
    AION_auto_control_realization_B.get_FrontFogLampSt;

  /* Outport: '<Root>/OutBus_get_BCM_info_get_FrontWiperSt' */
  AION_auto_control_realization_Y.OutBus_get_BCM_info_get_FrontWiperSt =
    AION_auto_control_realization_B.get_FrontWiperSt;

  /* Outport: '<Root>/OutBus_get_BCM_info_get_HazardLampSt' */
  AION_auto_control_realization_Y.OutBus_get_BCM_info_get_HazardLampSt =
    AION_auto_control_realization_B.get_HazardLampSt;

  /* Outport: '<Root>/OutBus_get_BCM_info_get_HighBeamSt' */
  AION_auto_control_realization_Y.OutBus_get_BCM_info_get_HighBeamSt =
    AION_auto_control_realization_B.get_HighBeamSt;

  /* Outport: '<Root>/OutBus_get_BCM_info_get_HornSt' */
  AION_auto_control_realization_Y.OutBus_get_BCM_info_get_HornSt =
    AION_auto_control_realization_B.get_HornSt;

  /* Outport: '<Root>/OutBus_get_BCM_info_get_KeySt' */
  AION_auto_control_realization_Y.OutBus_get_BCM_info_get_KeySt =
    AION_auto_control_realization_B.get_KeySt;

  /* Outport: '<Root>/OutBus_get_BCM_info_get_LeftTurnLampFaultSt' */
  AION_auto_control_realization_Y.OutBus_get_BCM_info_get_LeftTurnLampFaultSt =
    AION_auto_control_realization_B.get_LeftTurnLampFaultSt;

  /* Outport: '<Root>/OutBus_get_BCM_info_get_LeftTurnLampSt' */
  AION_auto_control_realization_Y.OutBus_get_BCM_info_get_LeftTurnLampSt =
    AION_auto_control_realization_B.get_LeftTurnLampSt;

  /* Outport: '<Root>/OutBus_get_BCM_info_get_LowBeamSt' */
  AION_auto_control_realization_Y.OutBus_get_BCM_info_get_LowBeamSt =
    AION_auto_control_realization_B.get_LowBeamSt;

  /* Outport: '<Root>/OutBus_get_BCM_info_get_PsngrDoorAjarSt' */
  AION_auto_control_realization_Y.OutBus_get_BCM_info_get_PsngrDoorAjarSt =
    AION_auto_control_realization_B.get_PsngrDoorAjarSt;

  /* Outport: '<Root>/OutBus_get_BCM_info_get_RLDoorAjarSt' */
  AION_auto_control_realization_Y.OutBus_get_BCM_info_get_RLDoorAjarSt =
    AION_auto_control_realization_B.get_RLDoorAjarSt;

  /* Outport: '<Root>/OutBus_get_BCM_info_get_RRDoorAjarSt' */
  AION_auto_control_realization_Y.OutBus_get_BCM_info_get_RRDoorAjarSt =
    AION_auto_control_realization_B.get_RRDoorAjarSt;

  /* Outport: '<Root>/OutBus_get_BCM_info_get_RearFogLampSt' */
  AION_auto_control_realization_Y.OutBus_get_BCM_info_get_RearFogLampSt =
    AION_auto_control_realization_B.get_RearFogLampSt;

  /* Outport: '<Root>/OutBus_get_BCM_info_get_RightTurnLampFaultSt' */
  AION_auto_control_realization_Y.OutBus_get_BCM_info_get_RightTurnLampFaultSt =
    AION_auto_control_realization_B.get_RightTurnLampFaultSt;

  /* Outport: '<Root>/OutBus_get_BCM_info_get_RightTurnLampSt' */
  AION_auto_control_realization_Y.OutBus_get_BCM_info_get_RightTurnLampSt =
    AION_auto_control_realization_B.get_RightTurnLampSt;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++AION_auto_control_realization_M->Timing.clockTick0)) {
    ++AION_auto_control_realization_M->Timing.clockTickH0;
  }

  AION_auto_control_realization_M->Timing.taskTime0 =
    AION_auto_control_realization_M->Timing.clockTick0 *
    AION_auto_control_realization_M->Timing.stepSize0 +
    AION_auto_control_realization_M->Timing.clockTickH0 *
    AION_auto_control_realization_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void AION_auto_control_realization_initialize(void)
{
  /* Registration code */
  AION_auto_control_realization_M->Timing.stepSize0 = 0.2;

  /* block I/O */
  (void) std::memset((static_cast<void *>(&AION_auto_control_realization_B)), 0,
                     sizeof(B_AION_auto_control_realization_T));

  {
    AION_auto_control_realization_B.get_SteeringAngle = 0.0;
    AION_auto_control_realization_B.get_StrngWhlTorq = 0.0;
    AION_auto_control_realization_B.get_VehSpd = 0.0;
    AION_auto_control_realization_B.get_YawRate = 0.0;
    AION_auto_control_realization_B.get_YawRateOffset = 0.0;
    AION_auto_control_realization_B.set_SteerAngSpdLimt = 0.0;
    AION_auto_control_realization_B.get_MasterCylinderPr = 0.0;
    AION_auto_control_realization_B.get_MasterCylinderPrOffset = 0.0;
    AION_auto_control_realization_B.get_FLWheelSpd = 0.0;
    AION_auto_control_realization_B.get_FRWheelSpd = 0.0;
    AION_auto_control_realization_B.get_RLWheelSpd = 0.0;
    AION_auto_control_realization_B.get_RRWheelSpd = 0.0;
    AION_auto_control_realization_B.get_ActVehLaltrlAccel = 0.0;
    AION_auto_control_realization_B.get_ActVehLongAccel = 0.0;
    AION_auto_control_realization_B.get_VehLaltrlAccelOffset = 0.0;
    AION_auto_control_realization_B.get_VehLongAccelOffset = 0.0;
    AION_auto_control_realization_B.get_ACCMaxRecpDecel = 0.0;
    AION_auto_control_realization_B.get_GasPedalActPst = 0.0;
    AION_auto_control_realization_B.get_GasPedalVirtualPst = 0.0;
    AION_auto_control_realization_B.SteerAngReq_out = 0.0;
    AION_auto_control_realization_B.SteerWhlTorqReq_out = 0.0;
    AION_auto_control_realization_B.BrakeReq_out = 0.0;
    AION_auto_control_realization_B.GearLvlReqVD_out = Invalid;
    AION_auto_control_realization_B.get_VehRdySt = NotReady;
    AION_auto_control_realization_B.turn_light_req = NoLightRequest;
    AION_auto_control_realization_B.get_LeftTurnLampFaultSt = NotFault;
    AION_auto_control_realization_B.get_RightTurnLampFaultSt = NotFault;
    AION_auto_control_realization_B.get_FailSt = NoError;
    AION_auto_control_realization_B.set_BodyCtrlReq = Disable;
    AION_auto_control_realization_B.get_LatCtrlMode = ManualStatus;
    AION_auto_control_realization_B.get_LngCtrlMode = ManualStatus;
    AION_auto_control_realization_B.set_LatCtrlReq = Manual;
    AION_auto_control_realization_B.set_LngCtrlReq = Manual;
    AION_auto_control_realization_B.beam_req = NoBeamRequest;
    AION_auto_control_realization_B.get_CtrlAvailable = NotAvailable;
    AION_auto_control_realization_B.horn_ring_req = NotActiveRequest;
    AION_auto_control_realization_B.GearLvlReq_out = NoRequest;
  }

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&AION_auto_control_realization_DW), 0,
                     sizeof(DW_AION_auto_control_realization_T));
  AION_auto_control_realization_DW.EmergencyLightCount = 0.0;
  AION_auto_control_realization_DW.SteerWhlTorqReq_temp = 0.0;

  /* external inputs */
  (void)std::memset(&AION_auto_control_realization_U, 0, sizeof
                    (ExtU_AION_auto_control_realization_T));
  AION_auto_control_realization_U.AutoTrqWhlReq_in_set_lateral_control_info_set_LatCtrlReq
    = Manual;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_set_lateral_control_info_set_SteerWhlTorqReq
    = 0.0;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_set_lateral_control_info_set_SteerAngReq
    = 0.0;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_set_lateral_control_info_set_SteerAngSpdLimt
    = 0.0;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_set_longitudinal_control_info_set_LngCtrlReq
    = Manual;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_set_longitudinal_control_info_set_BrakeReq
    = 0.0;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_set_longitudinal_control_info_set_GearLvlReq
    = NoRequest;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_set_longitudinal_control_info_set_GearLvlReqVD
    = Invalid;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_set_ADCU_info_set_BeamReq =
    NoBeamRequest;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_set_ADCU_info_set_BodyCtrlReq
    = Disable;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_set_ADCU_info_set_HornRingReq
    = NotActiveRequest;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_set_ADCU_info_set_TurnLightReq
    = NoLightRequest;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_VehSpd = 0.0;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_YawRate =
    0.0;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_YawRateOffset
    = 0.0;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_MasterCylinderPr
    = 0.0;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_MasterCylinderPrOffset
    = 0.0;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_FLWheelSpd =
    0.0;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_FRWheelSpd =
    0.0;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_RLWheelSpd =
    0.0;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_RRWheelSpd =
    0.0;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_ActVehLaltrlAccel
    = 0.0;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_ActVehLongAccel
    = 0.0;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_VehLaltrlAccelOffset
    = 0.0;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCS_info_get_VehLongAccelOffset
    = 0.0;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_get_VCU_info_get_VehRdySt =
    NotReady;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_get_VCU_info_get_ACCMaxRecpDecel
    = 0.0;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_get_VCU_info_get_GasPedalActPst
    = 0.0;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_get_VCU_info_get_GasPedalVirtualPst
    = 0.0;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_LatCtrlMode =
    ManualStatus;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_get_SCU_info_get_LngCtrlMode =
    ManualStatus;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_get_EPB_info_get_FailSt =
    NoError;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_get_EPS_info_get_SteeringAngle
    = 0.0;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_get_EPS_info_get_StrngWhlTorq
    = 0.0;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCM_info_get_CtrlAvailable
    = NotAvailable;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCM_info_get_LeftTurnLampFaultSt
    = NotFault;
  AION_auto_control_realization_U.AutoTrqWhlReq_in_get_BCM_info_get_RightTurnLampFaultSt
    = NotFault;

  /* external outputs */
  (void) std::memset(static_cast<void *>(&AION_auto_control_realization_Y), 0,
                     sizeof(ExtY_AION_auto_control_realization_T));
  AION_auto_control_realization_Y.OutBus_set_lateral_control_info_set_LatCtrlReq
    = Manual;
  AION_auto_control_realization_Y.OutBus_set_lateral_control_info_set_SteerWhlTorqReq
    = 0.0;
  AION_auto_control_realization_Y.OutBus_set_lateral_control_info_set_SteerAngReq
    = 0.0;
  AION_auto_control_realization_Y.OutBus_set_lateral_control_info_set_SteerAngSpdLimt
    = 0.0;
  AION_auto_control_realization_Y.OutBus_set_longitudinal_control_info_set_LngCtrlReq
    = Manual;
  AION_auto_control_realization_Y.OutBus_set_longitudinal_control_info_set_BrakeReq
    = 0.0;
  AION_auto_control_realization_Y.OutBus_set_longitudinal_control_info_set_GearLvlReq
    = NoRequest;
  AION_auto_control_realization_Y.OutBus_set_longitudinal_control_info_set_GearLvlReqVD
    = Invalid;
  AION_auto_control_realization_Y.OutBus_set_ADCU_info_set_BeamReq =
    NoBeamRequest;
  AION_auto_control_realization_Y.OutBus_set_ADCU_info_set_BodyCtrlReq = Disable;
  AION_auto_control_realization_Y.OutBus_set_ADCU_info_set_HornRingReq =
    NotActiveRequest;
  AION_auto_control_realization_Y.OutBus_set_ADCU_info_set_TurnLightReq =
    NoLightRequest;
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_VehSpd = 0.0;
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_YawRate = 0.0;
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_YawRateOffset = 0.0;
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_MasterCylinderPr = 0.0;
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_MasterCylinderPrOffset
    = 0.0;
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_FLWheelSpd = 0.0;
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_FRWheelSpd = 0.0;
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_RLWheelSpd = 0.0;
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_RRWheelSpd = 0.0;
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_ActVehLaltrlAccel =
    0.0;
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_ActVehLongAccel = 0.0;
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_VehLaltrlAccelOffset =
    0.0;
  AION_auto_control_realization_Y.OutBus_get_BCS_info_get_VehLongAccelOffset =
    0.0;
  AION_auto_control_realization_Y.OutBus_get_VCU_info_get_VehRdySt = NotReady;
  AION_auto_control_realization_Y.OutBus_get_VCU_info_get_ACCMaxRecpDecel = 0.0;
  AION_auto_control_realization_Y.OutBus_get_VCU_info_get_GasPedalActPst = 0.0;
  AION_auto_control_realization_Y.OutBus_get_VCU_info_get_GasPedalVirtualPst =
    0.0;
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_LatCtrlMode =
    ManualStatus;
  AION_auto_control_realization_Y.OutBus_get_SCU_info_get_LngCtrlMode =
    ManualStatus;
  AION_auto_control_realization_Y.OutBus_get_EPB_info_get_FailSt = NoError;
  AION_auto_control_realization_Y.OutBus_get_EPS_info_get_SteeringAngle = 0.0;
  AION_auto_control_realization_Y.OutBus_get_EPS_info_get_StrngWhlTorq = 0.0;
  AION_auto_control_realization_Y.OutBus_get_BCM_info_get_CtrlAvailable =
    NotAvailable;
  AION_auto_control_realization_Y.OutBus_get_BCM_info_get_LeftTurnLampFaultSt =
    NotFault;
  AION_auto_control_realization_Y.OutBus_get_BCM_info_get_RightTurnLampFaultSt =
    NotFault;

  /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function1' */
  AION_auto_control_realization_DW.SteerWhlTorqReq_temp = 0.0;

  /* SystemInitialize for MATLAB Function: '<Root>/MATLAB Function2' */
  AION_auto_control_realization_DW.EmergencyLightCount = 0.0;
}

/* Model terminate function */
void AION_auto_control_realization_terminate(void)
{
  /* (no terminate code required) */
}

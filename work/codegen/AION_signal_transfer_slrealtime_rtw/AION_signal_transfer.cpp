/*
 * AION_signal_transfer.cpp
 *
 * Code generation for model "AION_signal_transfer".
 *
 * Model version              : 4.42
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Tue May 17 14:10:21 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "AION_signal_transfer.h"
#include "AION_signal_transfer_private.h"

/* Block signals (default storage) */
B_AION_signal_transfer_T AION_signal_transfer_B;

/* External inputs (root inport signals with default storage) */
ExtU_AION_signal_transfer_T AION_signal_transfer_U;

/* External outputs (root outports fed by signals with default storage) */
ExtY_AION_signal_transfer_T AION_signal_transfer_Y;

/* Real-time model */
RT_MODEL_AION_signal_transfer_T AION_signal_transfer_M_ =
  RT_MODEL_AION_signal_transfer_T();
RT_MODEL_AION_signal_transfer_T *const AION_signal_transfer_M =
  &AION_signal_transfer_M_;

/* Model step function */
void AION_signal_transfer_step(void)
{
  real_T tmp;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_SteeringAngle'
   */
  AION_signal_transfer_B.get_EPS_steering_angle =
    AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_SteeringAngle;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_1_BCS_VehSpd'
   */
  AION_signal_transfer_B.get_vehicle_spd =
    AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_1_BCS_VehSpd;

  /* DataTypeConversion: '<Root>/Data Type Conversion1' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LngCtrlMode'
   */
  tmp = std::floor
    (AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LngCtrlMode);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  AION_signal_transfer_B.DataTypeConversion1 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion2' incorporates:
   *  Inport: '<Root>/ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LatCtrlMode'
   */
  tmp = std::floor
    (AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LatCtrlMode);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  AION_signal_transfer_B.DataTypeConversion2 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion18' */
  AION_signal_transfer_B.DataTypeConversion18 = static_cast<Control_status>
    (AION_signal_transfer_B.DataTypeConversion2);

  /* DataTypeConversion: '<Root>/Data Type Conversion20' */
  AION_signal_transfer_B.DataTypeConversion20 = static_cast<Control_status>
    (AION_signal_transfer_B.DataTypeConversion1);

  /* DataTypeConversion: '<Root>/Data Type Conversion3' incorporates:
   *  Inport: '<Root>/ADCU_InternalOutputPort_AION_longitudinal_control_info_set_longitudinal_control_request'
   */
  AION_signal_transfer_B.DataTypeConversion3 = static_cast<uint8_T>
    (AION_signal_transfer_U.ADCU_InternalOutputPort_AION_longitudinal_control_info_set_longitudinal_control_request);

  /* DataTypeConversion: '<Root>/Data Type Conversion10' */
  AION_signal_transfer_B.DataTypeConversion10 =
    AION_signal_transfer_B.DataTypeConversion3;

  /* DataTypeConversion: '<Root>/Data Type Conversion11' incorporates:
   *  Inport: '<Root>/ADCU_InternalOutputPort_AION_longitudinal_control_info_set_gear_level_req_val'
   */
  AION_signal_transfer_B.DataTypeConversion11 = static_cast<uint8_T>
    (AION_signal_transfer_U.ADCU_InternalOutputPort_AION_longitudinal_control_info_set_gear_level_req_val);

  /* DataTypeConversion: '<Root>/Data Type Conversion12' incorporates:
   *  Inport: '<Root>/ADCU_InternalOutputPort_AION_lateral_control_info_set_steer_torque_request'
   */
  AION_signal_transfer_B.DataTypeConversion12 =
    AION_signal_transfer_U.ADCU_InternalOutputPort_AION_lateral_control_info_set_steer_torque_request;

  /* DataTypeConversion: '<Root>/Data Type Conversion4' incorporates:
   *  Inport: '<Root>/ADCU_InternalOutputPort_AION_longitudinal_control_info_set_gear_level_request'
   */
  AION_signal_transfer_B.DataTypeConversion4 = static_cast<uint8_T>
    (AION_signal_transfer_U.ADCU_InternalOutputPort_AION_longitudinal_control_info_set_gear_level_request);

  /* DataTypeConversion: '<Root>/Data Type Conversion14' */
  AION_signal_transfer_B.DataTypeConversion14 =
    AION_signal_transfer_B.DataTypeConversion4;

  /* DataTypeConversion: '<Root>/Data Type Conversion15' incorporates:
   *  Inport: '<Root>/ADCU_InternalOutputPort_AION_lateral_control_info_set_lateral_control_request'
   */
  AION_signal_transfer_B.DataTypeConversion15 = static_cast<int32_T>
    (AION_signal_transfer_U.ADCU_InternalOutputPort_AION_lateral_control_info_set_lateral_control_request);

  /* DataTypeConversion: '<Root>/Data Type Conversion16' incorporates:
   *  Inport: '<Root>/ADCU_InternalOutputPort_AION_lateral_control_info_set_steer_angle_request'
   */
  AION_signal_transfer_B.DataTypeConversion16 =
    AION_signal_transfer_U.ADCU_InternalOutputPort_AION_lateral_control_info_set_steer_angle_request;

  /* DataTypeConversion: '<Root>/Data Type Conversion6' incorporates:
   *  Inport: '<Root>/ADCU_InternalOutputPort_AION_longitudinal_control_info_set_torque_request'
   */
  tmp = std::floor
    (AION_signal_transfer_U.ADCU_InternalOutputPort_AION_longitudinal_control_info_set_torque_request);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion6' */
  AION_signal_transfer_B.DataTypeConversion6 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion5' */
  AION_signal_transfer_B.DataTypeConversion5 =
    AION_signal_transfer_B.DataTypeConversion6;

  /* DataTypeConversion: '<Root>/Data Type Conversion8' incorporates:
   *  Inport: '<Root>/ADCU_InternalOutputPort_AION_longitudinal_control_info_set_brake_request'
   */
  tmp = std::floor
    (AION_signal_transfer_U.ADCU_InternalOutputPort_AION_longitudinal_control_info_set_brake_request);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion8' */
  AION_signal_transfer_B.DataTypeConversion8 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion7' */
  AION_signal_transfer_B.DataTypeConversion7 =
    AION_signal_transfer_B.DataTypeConversion8;

  /* DataTypeConversion: '<Root>/Data Type Conversion9' */
  AION_signal_transfer_B.DataTypeConversion9 =
    AION_signal_transfer_B.DataTypeConversion11;

  /* Outport: '<Root>/ADCU_InternalInputPort_AION_lateral_control_info_set_lateral_control_request' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_AION_lateral_control_info_set_lateral_control_request
    = Manual;

  /* Outport: '<Root>/ADCU_InternalInputPort_AION_lateral_control_info_set_steer_torque_request' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_AION_lateral_control_info_set_steer_torque_request
    = 0.0;

  /* Outport: '<Root>/ADCU_InternalInputPort_AION_lateral_control_info_set_steer_angle_request' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_AION_lateral_control_info_set_steer_angle_request
    = 0.0;

  /* Outport: '<Root>/ADCU_InternalInputPort_AION_lateral_control_info_set_steer_ang_spd_limit' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_AION_lateral_control_info_set_steer_ang_spd_limit
    = 0.0;

  /* Outport: '<Root>/ADCU_InternalInputPort_AION_lateral_control_info_get_lateral_control_status' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_AION_lateral_control_info_get_lateral_control_status
    = AION_signal_transfer_B.DataTypeConversion18;

  /* Outport: '<Root>/ADCU_InternalInputPort_AION_lateral_control_info_get_EPS_steering_angle' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_AION_lateral_control_info_get_EPS_steering_angle
    = AION_signal_transfer_B.get_EPS_steering_angle;

  /* Outport: '<Root>/ADCU_InternalInputPort_AION_longitudinal_control_info_get_vehicle_spd' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_AION_longitudinal_control_info_get_vehicle_spd
    = AION_signal_transfer_B.get_vehicle_spd;

  /* Outport: '<Root>/ADCU_InternalInputPort_AION_longitudinal_control_info_get_longitudinal_control_status' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_AION_longitudinal_control_info_get_longitudinal_control_status
    = AION_signal_transfer_B.DataTypeConversion20;

  /* Outport: '<Root>/ADCU_InternalInputPort_AION_longitudinal_control_info_set_longitudinal_control_request' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_AION_longitudinal_control_info_set_longitudinal_control_request
    = Manual;

  /* Outport: '<Root>/ADCU_InternalInputPort_AION_longitudinal_control_info_set_brake_request' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_AION_longitudinal_control_info_set_brake_request
    = 0.0;

  /* Outport: '<Root>/ADCU_InternalInputPort_AION_longitudinal_control_info_set_gear_level_request' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_AION_longitudinal_control_info_set_gear_level_request
    = No_request;

  /* Outport: '<Root>/ADCU_InternalInputPort_AION_longitudinal_control_info_set_gear_level_req_val' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_AION_longitudinal_control_info_set_gear_level_req_val
    = Invalid;

  /* Outport: '<Root>/ADCU_InternalInputPort_AION_longitudinal_control_info_set_torque_request' */
  AION_signal_transfer_Y.ADCU_InternalInputPort_AION_longitudinal_control_info_set_torque_request
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_1_Checksum' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_1_Checksum
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_1_MsgCounter' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_1_MsgCounter
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_AutoTrqWhlReq' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_AutoTrqWhlReq
    = AION_signal_transfer_B.DataTypeConversion5;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_BrakeReq' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_BrakeReq
    = AION_signal_transfer_B.DataTypeConversion7;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_GearLvlReq' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_GearLvlReq
    = AION_signal_transfer_B.DataTypeConversion14;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_GearLvlReqVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_GearLvlReqVD
    = AION_signal_transfer_B.DataTypeConversion9;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_LngCtrlReq' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_LngCtrlReq
    = AION_signal_transfer_B.DataTypeConversion10;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_ParkingReqToEPB' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_ParkingReqToEPB
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_ParkingReqToEPBVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_ParkingReqToEPBVD
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_2_Checksum' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_2_Checksum
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_2_MsgCounter' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_2_MsgCounter
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_LatCtrlReq' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_LatCtrlReq
    = AION_signal_transfer_B.DataTypeConversion15;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerAngReq' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerAngReq
    = AION_signal_transfer_B.DataTypeConversion16;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerAngSpdLimt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerAngSpdLimt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerWhlTorqReq' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerWhlTorqReq
    = AION_signal_transfer_B.DataTypeConversion12;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_3_Checksum' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_3_Checksum
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_3_MsgCounter' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_3_MsgCounter
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_BeamReq' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_BeamReq
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_BodyCtrlReq' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_BodyCtrlReq
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_HornRingReq' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_HornRingReq
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_TurnLightReq' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_TurnLightReq
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_ABSActiveSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_ABSActiveSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_ABSFaultSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_ABSFaultSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_VDCActiveSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_VDCActiveSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_VDCFaultSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_VDCFaultSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_VehSpd' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_VehSpd
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_VehSpdVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_VehSpdVD
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_SCU_1_Checksum' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_SCU_1_Checksum
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_SCU_1_MsgCounter' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_SCU_1_MsgCounter
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_SteeringAngle' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_SteeringAngle
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleSpd' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleSpd
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleSpdVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleSpdVD
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleVD
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_StrngWhlTorq' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_StrngWhlTorq
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_StrngWhlTorqVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_StrngWhlTorqVD
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_ThermalSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_ThermalSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_WarnLamp' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_WarnLamp
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_SCU_10_Checksum' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_SCU_10_Checksum
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_SCU_10_MsgCounter' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_SCU_10_MsgCounter
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_CtrlAvailable' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_CtrlAvailable
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_DriverDoorAjarSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_DriverDoorAjarSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_FrontFogLampSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_FrontFogLampSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_FrontWiperSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_FrontWiperSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_HazardLampSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_HazardLampSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_HighBeamSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_HighBeamSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_HornSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_HornSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_KeySt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_KeySt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_LeftTurnLampFaultSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_LeftTurnLampFaultSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_LeftTurnLampSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_LeftTurnLampSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_LowBeamSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_LowBeamSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_PsngrDoorAjarSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_PsngrDoorAjarSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RLDoorAjarSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RLDoorAjarSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RRDoorAjarSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RRDoorAjarSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RearFogLampSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RearFogLampSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RightTurnLampFaultSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RightTurnLampFaultSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RightTurnLampSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RightTurnLampSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_SCU_11_Checksum' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_SCU_11_Checksum
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_SCU_11_MsgCounter' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_SCU_11_MsgCounter
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_12_SCU_12_Checksum' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_12_SCU_12_Checksum
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_12_SCU_12_MsgCounter' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_12_SCU_12_MsgCounter
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_12_SRS_DriverSeatBeltSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_12_SRS_DriverSeatBeltSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_12_SRS_PsngrSeatBeltSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_12_SRS_PsngrSeatBeltSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_13_Checksum' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_13_Checksum
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_13_MsgCounter' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_13_MsgCounter
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_EStopSwSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_EStopSwSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_EStopSwStVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_EStopSwStVD
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LatAutoCheckReport' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LatAutoCheckReport
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LatCtrlMode' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LatCtrlMode
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LatQuitReport' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LatQuitReport
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LngAutoChecklReport' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LngAutoChecklReport
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LngCtrlMode' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LngCtrlMode
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LngQuitReport' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LngQuitReport
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_StrngWhlIntv' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_StrngWhlIntv
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_VCU_GearLeverIntv' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_VCU_GearLeverIntv
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_14_VCU_VehDrvMod' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_14_VCU_VehDrvMod
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_14_VCU_VehRdySt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_14_VCU_VehRdySt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_14_VCU_VehRng' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_14_VCU_VehRng
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_15_VCU_ActRecpTorq' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_15_VCU_ActRecpTorq
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_15_VCU_ActRecpTorqSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_15_VCU_ActRecpTorqSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_15_VCU_CrntGearLvl' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_15_VCU_CrntGearLvl
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_15_VCU_CrntGearLvlVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_15_VCU_CrntGearLvlVD
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_SCU_16_Checksum' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_SCU_16_Checksum
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_SCU_16_MsgCounter' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_SCU_16_MsgCounter
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_ACCMaxRecpDecel' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_ACCMaxRecpDecel
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_ACCMaxRecpDecelVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_ACCMaxRecpDecelVD
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_ActVehWheelTorq' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_ActVehWheelTorq
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_LateralAssistBtnInfo' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_LateralAssistBtnInfo
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_LateralAssistBtnInfoVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_LateralAssistBtnInfoVD
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_SCU_17_Checksum' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_SCU_17_Checksum
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_SCU_17_MsgCounter' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_SCU_17_MsgCounter
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_ACCButtInfo' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_ACCButtInfo
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_AccElecECFail' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_AccElecECFail
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_GasPedalActPst' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_GasPedalActPst
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_GasPedalActPstVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_GasPedalActPstVD
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_VehWheelTorqMax' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_VehWheelTorqMax
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_SCU_18_Checksum' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_SCU_18_Checksum
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_SCU_18_MsgCounter' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_SCU_18_MsgCounter
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_VCU_BrkPedalSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_VCU_BrkPedalSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_VCU_BrkPedalStVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_VCU_BrkPedalStVD
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_VCU_GasPedalVirtualPst' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_VCU_GasPedalVirtualPst
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_VCU_GasPedalVirtualPstVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_VCU_GasPedalVirtualPstVD
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_FLWheelSpdEdgesSum' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_FLWheelSpdEdgesSum
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_FLWheelSpdEdgesSumVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_FLWheelSpdEdgesSumVD
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_FRWheelSpdEdgesSum' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_FRWheelSpdEdgesSum
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_FRWheelSpdEdgesSumVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_FRWheelSpdEdgesSumVD
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_RLWheelSpdEdgesSum' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_RLWheelSpdEdgesSum
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_RLWheelSpdEdgesSumVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_RLWheelSpdEdgesSumVD
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_RRWheelSpdEdgesSum' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_RRWheelSpdEdgesSum
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_RRWheelSpdEdgesSumVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_RRWheelSpdEdgesSumVD
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_SCU_2_Checksum' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_SCU_2_Checksum
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_SCU_2_MsgCounter' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_SCU_2_MsgCounter
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_BCS_YawRate' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_BCS_YawRate
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_BCS_YawRateOffset' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_BCS_YawRateOffset
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_BCS_YawRateSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_BCS_YawRateSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_SCU_3_Checksum' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_SCU_3_Checksum
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_SCU_3_MsgCounter' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_SCU_3_MsgCounter
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_4_BCS_HDCCtrlSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_4_BCS_HDCCtrlSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_4_BCS_HDCErrSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_4_BCS_HDCErrSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_4_SCU_4_Checksum' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_4_SCU_4_Checksum
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_4_SCU_4_MsgCounter' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_4_SCU_4_MsgCounter
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_AEBActive' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_AEBActive
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_AEBAvailable' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_AEBAvailable
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_CDDActive' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_CDDActive
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_CDDAvailable' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_CDDAvailable
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_CDDFail' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_CDDFail
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPr' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPr
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPrOffset' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPrOffset
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPrOffsetVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPrOffsetVD
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPrVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPrVD
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_NoBrakeForce' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_NoBrakeForce
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_VehicleStandStillSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_VehicleStandStillSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_SCU_5_Checksum' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_SCU_5_Checksum
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_SCU_5_MsgCounter' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_SCU_5_MsgCounter
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FLWheelRotatedDirection' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FLWheelRotatedDirection
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FLWheelRotatedDirectionVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FLWheelRotatedDirectionVD
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FLWheelSpd' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FLWheelSpd
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FLWheelSpdVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FLWheelSpdVD
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FRWheelRotatedDirection' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FRWheelRotatedDirection
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FRWheelRotatedDirectionVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FRWheelRotatedDirectionVD
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FRWheelSpd' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FRWheelSpd
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FRWheelSpdVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FRWheelSpdVD
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_SCU_6_Checksum' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_SCU_6_Checksum
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_SCU_6_MsgCounter' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_SCU_6_MsgCounter
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RLWheelRotatedDirection' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RLWheelRotatedDirection
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RLWheelRotatedDirectionVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RLWheelRotatedDirectionVD
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RLWheelSpd' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RLWheelSpd
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RLWheelSpdVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RLWheelSpdVD
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RRWheelRotatedDirection' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RRWheelRotatedDirection
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RRWheelRotatedDirectionVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RRWheelRotatedDirectionVD
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RRWheelSpd' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RRWheelSpd
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RRWheelSpdVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RRWheelSpdVD
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_SCU_7_Checksum' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_SCU_7_Checksum
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_SCU_7_MsgCounter' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_SCU_7_MsgCounter
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_ActVehLaltrlAccel' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_ActVehLaltrlAccel
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_ActVehLaltrlAccelVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_ActVehLaltrlAccelVD
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_ActVehLongAccel' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_ActVehLongAccel
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_ActVehLongAccelVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_ActVehLongAccelVD
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_VehLaltrlAccelOffset' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_VehLaltrlAccelOffset
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_VehLongAccelOffset' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_VehLongAccelOffset
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_SCU_8_Checksum' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_SCU_8_Checksum
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_SCU_8_MsgCounter' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_SCU_8_MsgCounter
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_EPB_FailSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_EPB_FailSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_EPB_SwitchSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_EPB_SwitchSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_EPB_SwitchStVD' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_EPB_SwitchStVD
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_EPB_SysSt' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_EPB_SysSt
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_SCU_9_Checksum' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_SCU_9_Checksum
    = 0.0;

  /* Outport: '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_SCU_9_MsgCounter' */
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_SCU_9_MsgCounter
    = 0.0;

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++AION_signal_transfer_M->Timing.clockTick0)) {
    ++AION_signal_transfer_M->Timing.clockTickH0;
  }

  AION_signal_transfer_M->Timing.taskTime0 =
    AION_signal_transfer_M->Timing.clockTick0 *
    AION_signal_transfer_M->Timing.stepSize0 +
    AION_signal_transfer_M->Timing.clockTickH0 *
    AION_signal_transfer_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void AION_signal_transfer_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  AION_signal_transfer_M->Timing.stepSize0 = 0.2;

  /* block I/O */
  (void) std::memset((static_cast<void *>(&AION_signal_transfer_B)), 0,
                     sizeof(B_AION_signal_transfer_T));

  {
    AION_signal_transfer_B.get_EPS_steering_angle = 0.0;
    AION_signal_transfer_B.get_vehicle_spd = 0.0;
    AION_signal_transfer_B.DataTypeConversion10 = 0.0;
    AION_signal_transfer_B.DataTypeConversion12 = 0.0;
    AION_signal_transfer_B.DataTypeConversion14 = 0.0;
    AION_signal_transfer_B.DataTypeConversion15 = 0.0;
    AION_signal_transfer_B.DataTypeConversion16 = 0.0;
    AION_signal_transfer_B.DataTypeConversion5 = 0.0;
    AION_signal_transfer_B.DataTypeConversion7 = 0.0;
    AION_signal_transfer_B.DataTypeConversion9 = 0.0;
    AION_signal_transfer_B.DataTypeConversion18 = Manual_status;
    AION_signal_transfer_B.DataTypeConversion20 = Manual_status;
  }

  /* external inputs */
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_1_BCS_ABSActiveSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_1_BCS_ABSFaultSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_1_BCS_VDCActiveSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_1_BCS_VDCFaultSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_1_BCS_VehSpd
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_1_BCS_VehSpdVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_1_SCU_1_Checksum
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_1_SCU_1_MsgCounter
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_SteeringAngle
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleSpd
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleSpdVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_StrngWhlTorq
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_StrngWhlTorqVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_ThermalSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_WarnLamp
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_SCU_10_Checksum
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_SCU_10_MsgCounter
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_CtrlAvailable
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_DriverDoorAjarSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_FrontFogLampSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_FrontWiperSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_HazardLampSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_HighBeamSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_HornSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_KeySt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_LeftTurnLampFaultSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_LeftTurnLampSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_LowBeamSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_PsngrDoorAjarSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_RLDoorAjarSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_RRDoorAjarSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_RearFogLampSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_RightTurnLampFaultSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_RightTurnLampSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_SCU_11_Checksum
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_SCU_11_MsgCounter
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_12_SCU_12_Checksum
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_12_SCU_12_MsgCounter
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_12_SRS_DriverSeatBeltSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_12_SRS_PsngrSeatBeltSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_13_Checksum
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_13_MsgCounter
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_EStopSwSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_EStopSwStVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LatAutoCheckReport
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LatCtrlMode
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LatQuitReport
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LngAutoChecklReport
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LngCtrlMode
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LngQuitReport
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_StrngWhlIntv
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_VCU_GearLeverIntv
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_14_VCU_VehDrvMod
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_14_VCU_VehRdySt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_14_VCU_VehRng
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_15_VCU_ActRecpTorq
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_15_VCU_ActRecpTorqSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_15_VCU_CrntGearLvl
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_15_VCU_CrntGearLvlVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_16_SCU_16_Checksum
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_16_SCU_16_MsgCounter
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_16_VCU_ACCMaxRecpDecel
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_16_VCU_ACCMaxRecpDecelVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_16_VCU_ActVehWheelTorq
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_16_VCU_LateralAssistBtnInfo
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_16_VCU_LateralAssistBtnInfoVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_17_SCU_17_Checksum
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_17_SCU_17_MsgCounter
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_17_VCU_ACCButtInfo
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_17_VCU_AccElecECFail
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_17_VCU_GasPedalActPst
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_17_VCU_GasPedalActPstVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_17_VCU_VehWheelTorqMax
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_18_SCU_18_Checksum
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_18_SCU_18_MsgCounter
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_18_VCU_BrkPedalSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_18_VCU_BrkPedalStVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_18_VCU_GasPedalVirtualPst
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_18_VCU_GasPedalVirtualPstVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_2_BCS_FLWheelSpdEdgesSum
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_2_BCS_FLWheelSpdEdgesSumVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_2_BCS_FRWheelSpdEdgesSum
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_2_BCS_FRWheelSpdEdgesSumVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_2_BCS_RLWheelSpdEdgesSum
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_2_BCS_RLWheelSpdEdgesSumVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_2_BCS_RRWheelSpdEdgesSum
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_2_BCS_RRWheelSpdEdgesSumVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_2_SCU_2_Checksum
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_2_SCU_2_MsgCounter
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_3_BCS_YawRate
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_3_BCS_YawRateOffset
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_3_BCS_YawRateSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_3_SCU_3_Checksum
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_3_SCU_3_MsgCounter
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_4_BCS_HDCCtrlSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_4_BCS_HDCErrSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_4_SCU_4_Checksum
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_4_SCU_4_MsgCounter
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_5_BCS_AEBActive
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_5_BCS_AEBAvailable
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_5_BCS_CDDActive
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_5_BCS_CDDAvailable
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_5_BCS_CDDFail
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPr
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPrOffset
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPrOffsetVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPrVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_5_BCS_NoBrakeForce
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_5_BCS_VehicleStandStillSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_5_SCU_5_Checksum
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_5_SCU_5_MsgCounter
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_6_BCS_FLWheelRotatedDirection
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_6_BCS_FLWheelRotatedDirectionVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_6_BCS_FLWheelSpd
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_6_BCS_FLWheelSpdVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_6_BCS_FRWheelRotatedDirection
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_6_BCS_FRWheelRotatedDirectionVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_6_BCS_FRWheelSpd
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_6_BCS_FRWheelSpdVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_6_SCU_6_Checksum
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_6_SCU_6_MsgCounter
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_7_BCS_RLWheelRotatedDirection
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_7_BCS_RLWheelRotatedDirectionVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_7_BCS_RLWheelSpd
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_7_BCS_RLWheelSpdVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_7_BCS_RRWheelRotatedDirection
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_7_BCS_RRWheelRotatedDirectionVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_7_BCS_RRWheelSpd
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_7_BCS_RRWheelSpdVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_7_SCU_7_Checksum
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_7_SCU_7_MsgCounter
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_8_BCS_ActVehLaltrlAccel
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_8_BCS_ActVehLaltrlAccelVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_8_BCS_ActVehLongAccel
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_8_BCS_ActVehLongAccelVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_8_BCS_VehLaltrlAccelOffset
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_8_BCS_VehLongAccelOffset
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_8_SCU_8_Checksum
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_8_SCU_8_MsgCounter
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_9_EPB_FailSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_9_EPB_SwitchSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_9_EPB_SwitchStVD
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_9_EPB_SysSt
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_9_SCU_9_Checksum
    = 0.0;
  AION_signal_transfer_U.ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_9_SCU_9_MsgCounter
    = 0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_AION_lateral_control_info_set_lateral_control_request
    = Manual;
  AION_signal_transfer_U.ADCU_InternalOutputPort_AION_lateral_control_info_set_steer_torque_request
    = 0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_AION_lateral_control_info_set_steer_angle_request
    = 0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_AION_lateral_control_info_set_steer_ang_spd_limit
    = 0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_AION_lateral_control_info_get_lateral_control_status
    = Manual_status;
  AION_signal_transfer_U.ADCU_InternalOutputPort_AION_lateral_control_info_get_EPS_steering_angle
    = 0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_AION_longitudinal_control_info_get_vehicle_spd
    = 0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_AION_longitudinal_control_info_get_longitudinal_control_status
    = Manual_status;
  AION_signal_transfer_U.ADCU_InternalOutputPort_AION_longitudinal_control_info_set_longitudinal_control_request
    = Manual;
  AION_signal_transfer_U.ADCU_InternalOutputPort_AION_longitudinal_control_info_set_brake_request
    = 0.0;
  AION_signal_transfer_U.ADCU_InternalOutputPort_AION_longitudinal_control_info_set_gear_level_request
    = No_request;
  AION_signal_transfer_U.ADCU_InternalOutputPort_AION_longitudinal_control_info_set_gear_level_req_val
    = Invalid;
  AION_signal_transfer_U.ADCU_InternalOutputPort_AION_longitudinal_control_info_set_torque_request
    = 0.0;

  /* external outputs */
  AION_signal_transfer_Y.ADCU_InternalInputPort_AION_lateral_control_info_set_lateral_control_request
    = Manual;
  AION_signal_transfer_Y.ADCU_InternalInputPort_AION_lateral_control_info_set_steer_torque_request
    = 0.0;
  AION_signal_transfer_Y.ADCU_InternalInputPort_AION_lateral_control_info_set_steer_angle_request
    = 0.0;
  AION_signal_transfer_Y.ADCU_InternalInputPort_AION_lateral_control_info_set_steer_ang_spd_limit
    = 0.0;
  AION_signal_transfer_Y.ADCU_InternalInputPort_AION_lateral_control_info_get_lateral_control_status
    = Manual_status;
  AION_signal_transfer_Y.ADCU_InternalInputPort_AION_lateral_control_info_get_EPS_steering_angle
    = 0.0;
  AION_signal_transfer_Y.ADCU_InternalInputPort_AION_longitudinal_control_info_get_vehicle_spd
    = 0.0;
  AION_signal_transfer_Y.ADCU_InternalInputPort_AION_longitudinal_control_info_get_longitudinal_control_status
    = Manual_status;
  AION_signal_transfer_Y.ADCU_InternalInputPort_AION_longitudinal_control_info_set_longitudinal_control_request
    = Manual;
  AION_signal_transfer_Y.ADCU_InternalInputPort_AION_longitudinal_control_info_set_brake_request
    = 0.0;
  AION_signal_transfer_Y.ADCU_InternalInputPort_AION_longitudinal_control_info_set_gear_level_request
    = No_request;
  AION_signal_transfer_Y.ADCU_InternalInputPort_AION_longitudinal_control_info_set_gear_level_req_val
    = Invalid;
  AION_signal_transfer_Y.ADCU_InternalInputPort_AION_longitudinal_control_info_set_torque_request
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_1_Checksum
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_1_MsgCounter
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_AutoTrqWhlReq
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_BrakeReq
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_GearLvlReq
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_GearLvlReqVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_LngCtrlReq
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_ParkingReqToEPB
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_ParkingReqToEPBVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_2_Checksum
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_2_MsgCounter
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_LatCtrlReq
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerAngReq
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerAngSpdLimt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerWhlTorqReq
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_3_Checksum
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_3_MsgCounter
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_BeamReq
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_BodyCtrlReq
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_HornRingReq
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_TurnLightReq
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_ABSActiveSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_ABSFaultSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_VDCActiveSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_VDCFaultSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_VehSpd
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_VehSpdVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_SCU_1_Checksum
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_SCU_1_MsgCounter
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_SteeringAngle
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleSpd
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleSpdVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_StrngWhlTorq
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_StrngWhlTorqVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_ThermalSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_WarnLamp
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_SCU_10_Checksum
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_SCU_10_MsgCounter
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_CtrlAvailable
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_DriverDoorAjarSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_FrontFogLampSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_FrontWiperSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_HazardLampSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_HighBeamSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_HornSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_KeySt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_LeftTurnLampFaultSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_LeftTurnLampSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_LowBeamSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_PsngrDoorAjarSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RLDoorAjarSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RRDoorAjarSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RearFogLampSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RightTurnLampFaultSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RightTurnLampSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_SCU_11_Checksum
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_SCU_11_MsgCounter
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_12_SCU_12_Checksum
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_12_SCU_12_MsgCounter
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_12_SRS_DriverSeatBeltSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_12_SRS_PsngrSeatBeltSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_13_Checksum
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_13_MsgCounter
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_EStopSwSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_EStopSwStVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LatAutoCheckReport
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LatCtrlMode
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LatQuitReport
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LngAutoChecklReport
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LngCtrlMode
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LngQuitReport
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_StrngWhlIntv
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_VCU_GearLeverIntv
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_14_VCU_VehDrvMod
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_14_VCU_VehRdySt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_14_VCU_VehRng
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_15_VCU_ActRecpTorq
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_15_VCU_ActRecpTorqSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_15_VCU_CrntGearLvl
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_15_VCU_CrntGearLvlVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_SCU_16_Checksum
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_SCU_16_MsgCounter
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_ACCMaxRecpDecel
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_ACCMaxRecpDecelVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_ActVehWheelTorq
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_LateralAssistBtnInfo
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_LateralAssistBtnInfoVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_SCU_17_Checksum
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_SCU_17_MsgCounter
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_ACCButtInfo
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_AccElecECFail
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_GasPedalActPst
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_GasPedalActPstVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_VehWheelTorqMax
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_SCU_18_Checksum
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_SCU_18_MsgCounter
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_VCU_BrkPedalSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_VCU_BrkPedalStVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_VCU_GasPedalVirtualPst
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_VCU_GasPedalVirtualPstVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_FLWheelSpdEdgesSum
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_FLWheelSpdEdgesSumVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_FRWheelSpdEdgesSum
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_FRWheelSpdEdgesSumVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_RLWheelSpdEdgesSum
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_RLWheelSpdEdgesSumVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_RRWheelSpdEdgesSum
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_RRWheelSpdEdgesSumVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_SCU_2_Checksum
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_SCU_2_MsgCounter
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_BCS_YawRate
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_BCS_YawRateOffset
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_BCS_YawRateSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_SCU_3_Checksum
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_SCU_3_MsgCounter
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_4_BCS_HDCCtrlSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_4_BCS_HDCErrSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_4_SCU_4_Checksum
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_4_SCU_4_MsgCounter
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_AEBActive
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_AEBAvailable
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_CDDActive
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_CDDAvailable
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_CDDFail
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPr
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPrOffset
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPrOffsetVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPrVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_NoBrakeForce
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_VehicleStandStillSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_SCU_5_Checksum
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_SCU_5_MsgCounter
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FLWheelRotatedDirection
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FLWheelRotatedDirectionVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FLWheelSpd
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FLWheelSpdVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FRWheelRotatedDirection
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FRWheelRotatedDirectionVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FRWheelSpd
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FRWheelSpdVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_SCU_6_Checksum
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_SCU_6_MsgCounter
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RLWheelRotatedDirection
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RLWheelRotatedDirectionVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RLWheelSpd
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RLWheelSpdVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RRWheelRotatedDirection
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RRWheelRotatedDirectionVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RRWheelSpd
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RRWheelSpdVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_SCU_7_Checksum
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_SCU_7_MsgCounter
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_ActVehLaltrlAccel
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_ActVehLaltrlAccelVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_ActVehLongAccel
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_ActVehLongAccelVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_VehLaltrlAccelOffset
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_VehLongAccelOffset
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_SCU_8_Checksum
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_SCU_8_MsgCounter
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_EPB_FailSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_EPB_SwitchSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_EPB_SwitchStVD
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_EPB_SysSt
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_SCU_9_Checksum
    = 0.0;
  AION_signal_transfer_Y.ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_SCU_9_MsgCounter
    = 0.0;
}

/* Model terminate function */
void AION_signal_transfer_terminate(void)
{
  /* (no terminate code required) */
}

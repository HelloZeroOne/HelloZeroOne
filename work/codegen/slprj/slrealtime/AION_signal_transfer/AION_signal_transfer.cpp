/*
 * Code generation for system model 'AION_signal_transfer'
 *
 * Model                      : AION_signal_transfer
 * Model version              : 4.81
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Fri May 27 15:32:19 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "AION_signal_transfer.h"
#include "AION_signal_transfer_private.h"

/* Output and update for referenced model: 'AION_signal_transfer' */
void AION_signal_transfer(const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_1_BCS_VehSpd, const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_SteeringAngle, const
  real_T *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_CtrlAvailable,
  const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_HazardLampSt, const
  real_T *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_HighBeamSt,
  const real_T *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_HornSt,
  const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_LeftTurnLampFaultSt,
  const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_LeftTurnLampSt, const
  real_T *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_LowBeamSt,
  const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_RightTurnLampFaultSt,
  const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_RightTurnLampSt,
  const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LatCtrlMode, const
  real_T *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LngCtrlMode,
  const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_14_VCU_VehDrvMod, const
  real_T *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_14_VCU_VehRdySt,
  const real_T
  *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_15_VCU_CrntGearLvl, const
  real_T *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_9_EPB_FailSt, const
  Control_request
  *rtu_ADCU_InternalOutputPort_set_lateral_control_info_set_LatCtrlReq, const
  real_T
  *rtu_ADCU_InternalOutputPort_set_lateral_control_info_set_SteerWhlTorqReq,
  const real_T
  *rtu_ADCU_InternalOutputPort_set_lateral_control_info_set_SteerAngReq, const
  Control_request
  *rtu_ADCU_InternalOutputPort_set_longitudinal_control_info_set_LngCtrlReq,
  const real_T
  *rtu_ADCU_InternalOutputPort_set_longitudinal_control_info_set_AutoTrqWhlReq,
  const real_T
  *rtu_ADCU_InternalOutputPort_set_longitudinal_control_info_set_BrakeReq, const
  Gear_request
  *rtu_ADCU_InternalOutputPort_set_longitudinal_control_info_set_GearLvlReq,
  const Validation_status
  *rtu_ADCU_InternalOutputPort_set_longitudinal_control_info_set_GearLvlReqVD,
  const Beam_request *rtu_ADCU_InternalOutputPort_set_ADCU_info_set_BeamReq,
  const Enable_request
  *rtu_ADCU_InternalOutputPort_set_ADCU_info_set_BodyCtrlReq, const
  Active_request *rtu_ADCU_InternalOutputPort_set_ADCU_info_set_HornRingReq,
  const Light_request
  *rtu_ADCU_InternalOutputPort_set_ADCU_info_set_TurnLightReq, Control_request
  *rty_ADCU_InternalInputPort_set_lateral_control_info_set_LatCtrlReq, real_T
  *rty_ADCU_InternalInputPort_set_lateral_control_info_set_SteerWhlTorqReq,
  real_T *rty_ADCU_InternalInputPort_set_lateral_control_info_set_SteerAngReq,
  real_T
  *rty_ADCU_InternalInputPort_set_lateral_control_info_set_SteerAngSpdLimt,
  Control_request
  *rty_ADCU_InternalInputPort_set_longitudinal_control_info_set_LngCtrlReq,
  real_T
  *rty_ADCU_InternalInputPort_set_longitudinal_control_info_set_AutoTrqWhlReq,
  real_T *rty_ADCU_InternalInputPort_set_longitudinal_control_info_set_BrakeReq,
  Gear_request
  *rty_ADCU_InternalInputPort_set_longitudinal_control_info_set_GearLvlReq,
  Validation_status
  *rty_ADCU_InternalInputPort_set_longitudinal_control_info_set_GearLvlReqVD,
  uint32_T *rty_ADCU_InternalInputPort_set_ADCU_info_set_Checksum1, uint32_T
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_MsgCounter1, uint32_T
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_Checksum2, uint32_T
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_MsgCounter2, uint32_T
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_Checksum3, uint32_T
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_MsgCounter3, Beam_request
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_BeamReq, Enable_request
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_BodyCtrlReq, Active_request
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_HornRingReq, Light_request
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_TurnLightReq, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_ABSActiveSt, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_ABSFaultSt, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_VDCActiveSt, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_VDCFaultSt, real_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_VehSpd, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_VehSpdVD, uint32_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_FLWheelSpdEdgesSum, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_FLWheelSpdEdgesSumVD, uint32_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_FRWheelSpdEdgesSum, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_FRWheelSpdEdgesSumVD, uint32_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_RLWheelSpdEdgesSum, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_RLWheelSpdEdgesSumVD, uint32_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_RRWheelSpdEdgesSum, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_RRWheelSpdEdgesSumVD, real_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_YawRate, real_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_YawRateOffset, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_YawRateSt, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_HDCCtrlSt, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_HDCErrSt, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_AEBActive, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_AEBAvailable, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_CDDActive, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_CDDAvailable, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_CDDFail, real_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_MasterCylinderPr, real_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_MasterCylinderPrOffset, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_MasterCylinderPrOffsetVD, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_MasterCylinderPrVD, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_NoBrakeForce, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_VehicleStandStillSt, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_FLWheelRotatedDirection, uint8_T *
  rty_ADCU_InternalInputPort_get_BCS_info_get_FLWheelRotatedDirectionVD, real_T *
  rty_ADCU_InternalInputPort_get_BCS_info_get_FLWheelSpd, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_FLWheelSpdVD, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_FRWheelRotatedDirection, uint8_T *
  rty_ADCU_InternalInputPort_get_BCS_info_get_FRWheelRotatedDirectionVD, real_T *
  rty_ADCU_InternalInputPort_get_BCS_info_get_FRWheelSpd, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_FRWheelSpdVD, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_RLWheelRotatedDirection, uint8_T *
  rty_ADCU_InternalInputPort_get_BCS_info_get_RLWheelRotatedDirectionVD, real_T *
  rty_ADCU_InternalInputPort_get_BCS_info_get_RLWheelSpd, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_RLWheelSpdVD, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_RRWheelRotatedDirection, uint8_T *
  rty_ADCU_InternalInputPort_get_BCS_info_get_RRWheelRotatedDirectionVD, real_T *
  rty_ADCU_InternalInputPort_get_BCS_info_get_RRWheelSpd, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_RRWheelSpdVD, real_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_ActVehLaltrlAccel, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_ActVehLaltrlAccelVD, real_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_ActVehLongAccel, uint8_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_ActVehLongAccelVD, real_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_VehLaltrlAccelOffset, real_T
  *rty_ADCU_InternalInputPort_get_BCS_info_get_VehLongAccelOffset, uint8_T
  *rty_ADCU_InternalInputPort_get_VCU_info_get_GearLeverIntv, Drive_status
  *rty_ADCU_InternalInputPort_get_VCU_info_get_VehDrvMod, Ready_status
  *rty_ADCU_InternalInputPort_get_VCU_info_get_VehRdySt, uint32_T
  *rty_ADCU_InternalInputPort_get_VCU_info_get_VehRng, uint32_T
  *rty_ADCU_InternalInputPort_get_VCU_info_get_ActRecpTorq, uint8_T
  *rty_ADCU_InternalInputPort_get_VCU_info_get_ActRecpTorqSt, Gear_status
  *rty_ADCU_InternalInputPort_get_VCU_info_get_CrntGearLvl, uint8_T
  *rty_ADCU_InternalInputPort_get_VCU_info_get_CrntGearLvlVD, real_T
  *rty_ADCU_InternalInputPort_get_VCU_info_get_ACCMaxRecpDecel, uint8_T
  *rty_ADCU_InternalInputPort_get_VCU_info_get_ACCMaxRecpDecelVD, uint32_T
  *rty_ADCU_InternalInputPort_get_VCU_info_get_ActVehWheelTorq, uint8_T
  *rty_ADCU_InternalInputPort_get_VCU_info_get_LateralAssistBtnInfo, uint8_T
  *rty_ADCU_InternalInputPort_get_VCU_info_get_LateralAssistBtnInfoVD, uint32_T *
  rty_ADCU_InternalInputPort_get_VCU_info_get_ACCButtInfo, uint8_T
  *rty_ADCU_InternalInputPort_get_VCU_info_get_AccElecECFail, real_T
  *rty_ADCU_InternalInputPort_get_VCU_info_get_GasPedalActPst, uint8_T
  *rty_ADCU_InternalInputPort_get_VCU_info_get_GasPedalActPstVD, uint32_T
  *rty_ADCU_InternalInputPort_get_VCU_info_get_VehWheelTorqMax, uint8_T
  *rty_ADCU_InternalInputPort_get_VCU_info_get_BrkPedalSt, uint8_T
  *rty_ADCU_InternalInputPort_get_VCU_info_get_BrkPedalStVD, real_T
  *rty_ADCU_InternalInputPort_get_VCU_info_get_GasPedalVirtualPst, uint8_T
  *rty_ADCU_InternalInputPort_get_VCU_info_get_GasPedalVirtualPstVD, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum1, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter1, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum10, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter10, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum11, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter11, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum12, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter12, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum13, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter13, uint8_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_EStopSwSt, uint8_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_EStopSwStVD, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_LatAutoCheckReport,
  Control_status *rty_ADCU_InternalInputPort_get_SCU_info_get_LatCtrlMode,
  uint32_T *rty_ADCU_InternalInputPort_get_SCU_info_get_LatQuitReport, uint32_T *
  rty_ADCU_InternalInputPort_get_SCU_info_get_LngAutoCheckIReport,
  Control_status *rty_ADCU_InternalInputPort_get_SCU_info_get_LngCtrlMode,
  uint32_T *rty_ADCU_InternalInputPort_get_SCU_info_get_LngQuitReport, uint8_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_StrngWhlIntv, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum16, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter16, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum17, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter17, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum18, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter18, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum2, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter2, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum3, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter3, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum4, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter4, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum5, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter5, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum6, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter6, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum7, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter7, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum8, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter8, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum9, uint32_T
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter9, Error_status
  *rty_ADCU_InternalInputPort_get_EPB_info_get_FailSt, uint8_T
  *rty_ADCU_InternalInputPort_get_EPB_info_get_SwitchSt, uint8_T
  *rty_ADCU_InternalInputPort_get_EPB_info_get_SwitchStVD, uint8_T
  *rty_ADCU_InternalInputPort_get_EPB_info_get_SysSt, uint8_T
  *rty_ADCU_InternalInputPort_get_SRS_info_get_DriverSeatBeltSt, uint8_T
  *rty_ADCU_InternalInputPort_get_SRS_info_get_PsngrSeatBeltSt, real_T
  *rty_ADCU_InternalInputPort_get_EPS_info_get_SteeringAngle, uint32_T
  *rty_ADCU_InternalInputPort_get_EPS_info_get_SteeringAngleSpd, uint8_T
  *rty_ADCU_InternalInputPort_get_EPS_info_get_SteeringAngleSpdVD, uint8_T
  *rty_ADCU_InternalInputPort_get_EPS_info_get_SteeringAngleVD, real_T
  *rty_ADCU_InternalInputPort_get_EPS_info_get_StrngWhlTorq, uint8_T
  *rty_ADCU_InternalInputPort_get_EPS_info_get_StrngWhlTorqVD, uint8_T
  *rty_ADCU_InternalInputPort_get_EPS_info_get_ThermalSt, uint8_T
  *rty_ADCU_InternalInputPort_get_EPS_info_get_WarnLamp, Available_status
  *rty_ADCU_InternalInputPort_get_BCM_info_get_CtrlAvailable, uint8_T
  *rty_ADCU_InternalInputPort_get_BCM_info_get_DriverDoorAjarSt, uint8_T
  *rty_ADCU_InternalInputPort_get_BCM_info_get_FrontFogLampSt, uint8_T
  *rty_ADCU_InternalInputPort_get_BCM_info_get_FrontWiperSt, Active_status
  *rty_ADCU_InternalInputPort_get_BCM_info_get_HazardLampSt, Active_status
  *rty_ADCU_InternalInputPort_get_BCM_info_get_HighBeamSt, Active_status
  *rty_ADCU_InternalInputPort_get_BCM_info_get_HornSt, uint8_T
  *rty_ADCU_InternalInputPort_get_BCM_info_get_KeySt, Fault_status
  *rty_ADCU_InternalInputPort_get_BCM_info_get_LeftTurnLampFaultSt,
  Active_status *rty_ADCU_InternalInputPort_get_BCM_info_get_LeftTurnLampSt,
  Active_status *rty_ADCU_InternalInputPort_get_BCM_info_get_LowBeamSt, uint8_T *
  rty_ADCU_InternalInputPort_get_BCM_info_get_PsngrDoorAjarSt, uint8_T
  *rty_ADCU_InternalInputPort_get_BCM_info_get_RLDoorAjarSt, uint8_T
  *rty_ADCU_InternalInputPort_get_BCM_info_get_RRDoorAjarSt, uint8_T
  *rty_ADCU_InternalInputPort_get_BCM_info_get_RearFogLampSt, Fault_status
  *rty_ADCU_InternalInputPort_get_BCM_info_get_RightTurnLampFaultSt,
  Active_status *rty_ADCU_InternalInputPort_get_BCM_info_get_RightTurnLampSt,
  real_T *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_1_Checksum,
  real_T *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_1_MsgCounter,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_AutoTrqWhlReq,
  real_T *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_BrakeReq,
  real_T *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_GearLvlReq,
  real_T *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_GearLvlReqVD,
  real_T *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_LngCtrlReq,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_ParkingReqToEPB,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_ParkingReqToEPBVD,
  real_T *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_2_Checksum,
  real_T *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_2_MsgCounter,
  real_T *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_LatCtrlReq,
  real_T *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerAngReq,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerAngSpdLimt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerWhlTorqReq,
  real_T *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_3_Checksum,
  real_T *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_3_MsgCounter,
  real_T *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_BeamReq,
  real_T *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_BodyCtrlReq,
  real_T *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_HornRingReq,
  real_T *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_TurnLightReq,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_ABSActiveSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_ABSFaultSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_VDCActiveSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_VDCFaultSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_VehSpd,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_VehSpdVD,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_SCU_1_Checksum,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_SCU_1_MsgCounter,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_SteeringAngle,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleSpd,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleSpdVD,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleVD,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_StrngWhlTorq,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_StrngWhlTorqVD,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_ThermalSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_WarnLamp,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_SCU_10_Checksum,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_SCU_10_MsgCounter,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_CtrlAvailable,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_DriverDoorAjarSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_FrontFogLampSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_FrontWiperSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_HazardLampSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_HighBeamSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_HornSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_KeySt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_LeftTurnLampFaultSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_LeftTurnLampSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_LowBeamSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_PsngrDoorAjarSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RLDoorAjarSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RRDoorAjarSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RearFogLampSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RightTurnLampFaultSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RightTurnLampSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_SCU_11_Checksum,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_SCU_11_MsgCounter,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_12_SCU_12_Checksum,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_12_SCU_12_MsgCounter,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_12_SRS_DriverSeatBeltSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_12_SRS_PsngrSeatBeltSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_13_Checksum,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_13_MsgCounter,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_EStopSwSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_EStopSwStVD,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LatAutoCheckReport,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LatCtrlMode,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LatQuitReport,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LngAutoChecklReport,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LngCtrlMode,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LngQuitReport,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_StrngWhlIntv,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_VCU_GearLeverIntv,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_14_VCU_VehDrvMod,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_14_VCU_VehRdySt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_14_VCU_VehRng,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_15_VCU_ActRecpTorq,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_15_VCU_ActRecpTorqSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_15_VCU_CrntGearLvl,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_15_VCU_CrntGearLvlVD,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_SCU_16_Checksum,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_SCU_16_MsgCounter,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_ACCMaxRecpDecel,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_ACCMaxRecpDecelVD,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_ActVehWheelTorq,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_LateralAssistBtnInfo,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_LateralAssistBtnInfoV,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_SCU_17_Checksum,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_SCU_17_MsgCounter,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_ACCButtInfo,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_AccElecECFail,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_GasPedalActPst,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_GasPedalActPstVD,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_VehWheelTorqMax,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_SCU_18_Checksum,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_SCU_18_MsgCounter,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_VCU_BrkPedalSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_VCU_BrkPedalStVD,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_VCU_GasPedalVirtualPst,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_VCU_GasPedalVirtualPstVD,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_FLWheelSpdEdgesSum,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_FLWheelSpdEdgesSumVD,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_FRWheelSpdEdgesSum,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_FRWheelSpdEdgesSumVD,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_RLWheelSpdEdgesSum,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_RLWheelSpdEdgesSumVD,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_RRWheelSpdEdgesSum,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_RRWheelSpdEdgesSumVD,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_SCU_2_Checksum,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_SCU_2_MsgCounter,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_BCS_YawRate,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_BCS_YawRateOffset,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_BCS_YawRateSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_SCU_3_Checksum,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_SCU_3_MsgCounter,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_4_BCS_HDCCtrlSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_4_BCS_HDCErrSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_4_SCU_4_Checksum,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_4_SCU_4_MsgCounter,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_AEBActive,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_AEBAvailable,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_CDDActive,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_CDDAvailable,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_CDDFail,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPr,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPrOffset,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPrOffs_e,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPrVD,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_NoBrakeForce,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_VehicleStandStillSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_SCU_5_Checksum,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_SCU_5_MsgCounter,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FLWheelRotatedDirectio,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FLWheelRotatedDirect_m,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FLWheelSpd,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FLWheelSpdVD,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FRWheelRotatedDirectio,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FRWheelRotatedDirect_i,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FRWheelSpd,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FRWheelSpdVD,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_SCU_6_Checksum,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_SCU_6_MsgCounter,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RLWheelRotatedDirectio,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RLWheelRotatedDirect_e,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RLWheelSpd,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RLWheelSpdVD,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RRWheelRotatedDirectio,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RRWheelRotatedDirect_p,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RRWheelSpd,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RRWheelSpdVD,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_SCU_7_Checksum,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_SCU_7_MsgCounter,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_ActVehLaltrlAccel,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_ActVehLaltrlAccelVD,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_ActVehLongAccel,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_ActVehLongAccelVD,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_VehLaltrlAccelOffset,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_VehLongAccelOffset,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_SCU_8_Checksum,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_SCU_8_MsgCounter,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_EPB_FailSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_EPB_SwitchSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_EPB_SwitchStVD,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_EPB_SysSt,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_SCU_9_Checksum,
  real_T
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_SCU_9_MsgCounter,
  B_AION_signal_transfer_c_T *localB)
{
  real_T tmp;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_EPS_info_get_SteeringAngleSpd = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_EPS_info_get_SteeringAngleSpdVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_EPS_info_get_SteeringAngleVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_EPS_info_get_StrngWhlTorq = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_EPS_info_get_StrngWhlTorqVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_EPS_info_get_ThermalSt = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_EPS_info_get_WarnLamp = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCM_info_get_PsngrDoorAjarSt = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCM_info_get_RLDoorAjarSt = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCM_info_get_RRDoorAjarSt = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCM_info_get_RearFogLampSt = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCM_info_get_DriverDoorAjarSt = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCM_info_get_FrontFogLampSt = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCM_info_get_FrontWiperSt = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCM_info_get_KeySt = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_lateral_control_info_set_LatCtrlReq = Manual;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_lateral_control_info_set_SteerWhlTorqReq = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_lateral_control_info_set_SteerAngReq = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_lateral_control_info_set_SteerAngSpdLimt = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_longitudinal_control_info_set_LngCtrlReq =
    Manual;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_longitudinal_control_info_set_AutoTrqWhlReq =
    0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_longitudinal_control_info_set_BrakeReq = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_longitudinal_control_info_set_GearLvlReq =
    NoRequest;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_longitudinal_control_info_set_GearLvlReqVD =
    Invalid;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_Checksum1 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_TurnLightReq = NoLightRequest;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_MsgCounter1 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_Checksum2 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_MsgCounter2 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_Checksum3 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_MsgCounter3 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_BeamReq = NoBeamRequest;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_BodyCtrlReq = Disable;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_set_ADCU_info_set_HornRingReq = NotActiveRequest;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_ABSActiveSt = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_FRWheelSpdEdgesSumVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_RLWheelSpdEdgesSum = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_RLWheelSpdEdgesSumVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_RRWheelSpdEdgesSum = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_RRWheelSpdEdgesSumVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_YawRate = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_YawRateOffset = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_YawRateSt = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_HDCCtrlSt = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_HDCErrSt = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_ABSFaultSt = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_AEBActive = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_AEBAvailable = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_CDDActive = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_CDDAvailable = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_CDDFail = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_MasterCylinderPr = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_MasterCylinderPrOffset = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_MasterCylinderPrOffsetVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_MasterCylinderPrVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_NoBrakeForce = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_VDCActiveSt = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_VehicleStandStillSt = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_FLWheelRotatedDirection = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_FLWheelRotatedDirectionVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_FLWheelSpd = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_FLWheelSpdVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_FRWheelRotatedDirection = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_FRWheelRotatedDirectionVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_FRWheelSpd = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_FRWheelSpdVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_RLWheelRotatedDirection = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_VDCFaultSt = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_RLWheelRotatedDirectionVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_RLWheelSpd = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_RLWheelSpdVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_RRWheelRotatedDirection = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_RRWheelRotatedDirectionVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_RRWheelSpd = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_RRWheelSpdVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_ActVehLaltrlAccel = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_ActVehLaltrlAccelVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_ActVehLongAccel = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_ActVehLongAccelVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_VehLaltrlAccelOffset = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_VehLongAccelOffset = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_VehSpdVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_FLWheelSpdEdgesSum = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_FLWheelSpdEdgesSumVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_FRWheelSpdEdgesSum = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_GearLeverIntv = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_ACCMaxRecpDecelVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_ActVehWheelTorq = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_LateralAssistBtnInfo = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_LateralAssistBtnInfoVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_ACCButtInfo = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_AccElecECFail = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_GasPedalActPst = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_GasPedalActPstVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_VehWheelTorqMax = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_BrkPedalSt = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_BrkPedalStVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_GasPedalVirtualPst = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_GasPedalVirtualPstVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_VehRng = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_ActRecpTorq = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_ActRecpTorqSt = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_CrntGearLvlVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_ACCMaxRecpDecel = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum1 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter13 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_EStopSwSt = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_EStopSwStVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_LatAutoCheckReport = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_LatQuitReport = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_LngAutoCheckIReport = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_LngQuitReport = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_StrngWhlIntv = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter1 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum16 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter16 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum17 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter17 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum18 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter18 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum2 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter2 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum3 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter3 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum10 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum4 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter4 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum5 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter5 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum6 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter6 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum7 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter7 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum8 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter8 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter10 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum9 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter9 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum11 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter11 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum12 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_MsgCounter12 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_Checksum13 = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_EPB_info_get_SwitchSt = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_EPB_info_get_SwitchStVD = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_EPB_info_get_SysSt = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SRS_info_get_DriverSeatBeltSt = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_SRS_info_get_PsngrSeatBeltSt = 0U;

  /* SignalConversion generated from: '<Root>/ADCU_InternalInputPort_Outport_1' */
  *rty_ADCU_InternalInputPort_get_BCS_info_get_VehSpd =
    *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_1_BCS_VehSpd;

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  tmp = std::floor
    (*rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_CtrlAvailable);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion1' */
  localB->DataTypeConversion1 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>(static_cast<
    uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>(tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion13' */
  tmp = std::floor
    (*rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LngCtrlMode);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion13' */
  localB->DataTypeConversion13 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>(static_cast<
    uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>(tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion17' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_LngCtrlMode =
    static_cast<Control_status>(localB->DataTypeConversion13);

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  tmp = std::floor
    (*rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LatCtrlMode);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion2' */
  localB->DataTypeConversion2 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>(static_cast<
    uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>(tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion18' */
  *rty_ADCU_InternalInputPort_get_SCU_info_get_LatCtrlMode =
    static_cast<Control_status>(localB->DataTypeConversion2);

  /* DataTypeConversion: '<Root>/Data Type Conversion20' */
  *rty_ADCU_InternalInputPort_get_BCM_info_get_CtrlAvailable =
    static_cast<Available_status>(localB->DataTypeConversion1);

  /* DataTypeConversion: '<Root>/Data Type Conversion23' */
  tmp = std::floor
    (*rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_9_EPB_FailSt);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion23' */
  localB->DataTypeConversion23 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>(static_cast<
    uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>(tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion24' */
  *rty_ADCU_InternalInputPort_get_EPB_info_get_FailSt = static_cast<Error_status>
    (localB->DataTypeConversion23);

  /* DataTypeConversion: '<Root>/Data Type Conversion30' */
  tmp = std::floor
    (*rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_RightTurnLampFaultSt);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion30' */
  localB->DataTypeConversion30 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion31' */
  *rty_ADCU_InternalInputPort_get_BCM_info_get_RightTurnLampFaultSt =
    static_cast<Fault_status>(localB->DataTypeConversion30);

  /* DataTypeConversion: '<Root>/Data Type Conversion32' */
  tmp = std::floor
    (*rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_LeftTurnLampFaultSt);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion32' */
  localB->DataTypeConversion32 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion33' */
  *rty_ADCU_InternalInputPort_get_BCM_info_get_LeftTurnLampFaultSt =
    static_cast<Fault_status>(localB->DataTypeConversion32);

  /* DataTypeConversion: '<Root>/Data Type Conversion35' */
  tmp = std::floor
    (*rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_15_VCU_CrntGearLvl);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion35' */
  localB->DataTypeConversion35 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion34' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_CrntGearLvl =
    static_cast<Gear_status>(localB->DataTypeConversion35);

  /* DataTypeConversion: '<Root>/Data Type Conversion36' */
  tmp = std::floor
    (*rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_HazardLampSt);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion36' */
  localB->DataTypeConversion36 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion37' */
  *rty_ADCU_InternalInputPort_get_BCM_info_get_HazardLampSt =
    static_cast<Active_status>(localB->DataTypeConversion36);

  /* DataTypeConversion: '<Root>/Data Type Conversion38' */
  tmp = std::floor
    (*rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_HornSt);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion38' */
  localB->DataTypeConversion38 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion39' */
  *rty_ADCU_InternalInputPort_get_BCM_info_get_HornSt =
    static_cast<Active_status>(localB->DataTypeConversion38);

  /* DataTypeConversion: '<Root>/Data Type Conversion40' */
  tmp = std::floor
    (*rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_LowBeamSt);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion40' */
  localB->DataTypeConversion40 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion41' */
  *rty_ADCU_InternalInputPort_get_BCM_info_get_LowBeamSt =
    static_cast<Active_status>(localB->DataTypeConversion40);

  /* DataTypeConversion: '<Root>/Data Type Conversion42' */
  tmp = std::floor
    (*rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_HighBeamSt);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion42' */
  localB->DataTypeConversion42 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion43' */
  *rty_ADCU_InternalInputPort_get_BCM_info_get_HighBeamSt =
    static_cast<Active_status>(localB->DataTypeConversion42);

  /* DataTypeConversion: '<Root>/Data Type Conversion44' */
  tmp = std::floor
    (*rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_LeftTurnLampSt);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion44' */
  localB->DataTypeConversion44 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>(static_cast<
    uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>(tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion45' */
  *rty_ADCU_InternalInputPort_get_BCM_info_get_LeftTurnLampSt =
    static_cast<Active_status>(localB->DataTypeConversion44);

  /* DataTypeConversion: '<Root>/Data Type Conversion46' */
  tmp = std::floor
    (*rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_RightTurnLampSt);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion46' */
  localB->DataTypeConversion46 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion47' */
  *rty_ADCU_InternalInputPort_get_BCM_info_get_RightTurnLampSt =
    static_cast<Active_status>(localB->DataTypeConversion46);

  /* DataTypeConversion: '<Root>/Data Type Conversion48' */
  tmp = std::floor
    (*rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_14_VCU_VehRdySt);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion48' */
  localB->DataTypeConversion48 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion49' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_VehRdySt =
    static_cast<Ready_status>(localB->DataTypeConversion48);

  /* DataTypeConversion: '<Root>/Data Type Conversion51' */
  tmp = std::floor
    (*rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_14_VCU_VehDrvMod);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<Root>/Data Type Conversion51' */
  localB->DataTypeConversion51 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<Root>/Data Type Conversion50' */
  *rty_ADCU_InternalInputPort_get_VCU_info_get_VehDrvMod =
    static_cast<Drive_status>(localB->DataTypeConversion51);

  /* DataTypeConversion: '<Root>/Data Type Conversion8' */
  *rty_ADCU_InternalInputPort_get_EPS_info_get_SteeringAngle =
    *rtu_ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_SteeringAngle;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_SteeringAngle
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_SCU_10_MsgCounter
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleSpd
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleSpdVD
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleVD
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_StrngWhlTorq
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_StrngWhlTorqVD
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_ThermalSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_WarnLamp
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_SCU_10_Checksum
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_CtrlAvailable
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_LeftTurnLampSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_LowBeamSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_PsngrDoorAjarSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RLDoorAjarSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RRDoorAjarSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RearFogLampSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RightTurnLampFaultSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RightTurnLampSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_SCU_11_Checksum
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_SCU_11_MsgCounter
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_DriverDoorAjarSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_FrontFogLampSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_FrontWiperSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_HazardLampSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_HighBeamSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_HornSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_KeySt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_LeftTurnLampFaultSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_12_SCU_12_Checksum
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_12_SCU_12_MsgCounter
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_12_SRS_DriverSeatBeltSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_12_SRS_PsngrSeatBeltSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_13_Checksum
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LngQuitReport
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_StrngWhlIntv
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_VCU_GearLeverIntv
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_13_MsgCounter
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_EStopSwSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_EStopSwStVD
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LatAutoCheckReport
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LatCtrlMode
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LatQuitReport
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LngAutoChecklReport
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LngCtrlMode
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_14_VCU_VehDrvMod
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_14_VCU_VehRdySt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_14_VCU_VehRng
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_15_VCU_ActRecpTorq
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_15_VCU_ActRecpTorqSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_15_VCU_CrntGearLvl
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_15_VCU_CrntGearLvlVD
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_SCU_16_Checksum
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_SCU_16_MsgCounter
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_ACCMaxRecpDecel
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_ACCMaxRecpDecelVD
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_ActVehWheelTorq
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_LateralAssistBtnInfo
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_LateralAssistBtnInfoV
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_SCU_17_Checksum
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_SCU_17_MsgCounter
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_ACCButtInfo
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_AccElecECFail
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_GasPedalActPst
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_GasPedalActPstVD
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_VehWheelTorqMax
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_SCU_18_Checksum
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_SCU_18_MsgCounter
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_VCU_BrkPedalSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_VCU_BrkPedalStVD
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_VCU_GasPedalVirtualPst
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_VCU_GasPedalVirtualPstVD
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_FLWheelSpdEdgesSum
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_SCU_2_MsgCounter
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_FLWheelSpdEdgesSumVD
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_FRWheelSpdEdgesSum
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_FRWheelSpdEdgesSumVD
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_RLWheelSpdEdgesSum
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_RLWheelSpdEdgesSumVD
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_RRWheelSpdEdgesSum
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_RRWheelSpdEdgesSumVD
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_SCU_2_Checksum
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_BCS_YawRate
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_BCS_YawRateOffset
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_BCS_YawRateSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_SCU_3_Checksum
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_SCU_3_MsgCounter
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_4_BCS_HDCCtrlSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_4_BCS_HDCErrSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_4_SCU_4_Checksum
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_4_SCU_4_MsgCounter
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_AEBActive
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_NoBrakeForce
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_VehicleStandStillSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_SCU_5_Checksum
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_SCU_5_MsgCounter
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_AEBAvailable
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_CDDActive
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_CDDAvailable
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_CDDFail
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPr
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPrOffset
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPrOffs_e
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPrVD
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FLWheelRotatedDirectio
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_SCU_6_MsgCounter
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FLWheelRotatedDirect_m
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FLWheelSpd
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FLWheelSpdVD
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FRWheelRotatedDirectio
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FRWheelRotatedDirect_i
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FRWheelSpd
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FRWheelSpdVD
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_SCU_6_Checksum
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RLWheelRotatedDirectio
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_SCU_7_MsgCounter
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RLWheelRotatedDirect_e
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RLWheelSpd
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RLWheelSpdVD
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RRWheelRotatedDirectio
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RRWheelRotatedDirect_p
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RRWheelSpd
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RRWheelSpdVD
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_SCU_7_Checksum
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_ActVehLaltrlAccel
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_ActVehLaltrlAccelVD
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_ActVehLongAccel
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_ActVehLongAccelVD
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_VehLaltrlAccelOffset
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_VehLongAccelOffset
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_SCU_8_Checksum
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_SCU_8_MsgCounter
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_EPB_FailSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_EPB_SwitchSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_EPB_SwitchStVD
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_EPB_SysSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_SCU_9_Checksum
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_SCU_9_MsgCounter
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_1_Checksum = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_1_MsgCounter = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_ParkingReqToEPB =
    0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_ParkingReqToEPBVD =
    0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_2_Checksum = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_2_MsgCounter = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerAngSpdLimt =
    0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_3_Checksum = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_3_MsgCounter = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_ABSActiveSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_ABSFaultSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_VDCActiveSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_VDCFaultSt
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_VehSpd
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_VehSpdVD
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_SCU_1_Checksum
    = 0.0;

  /* SignalConversion generated from: '<Root>/ADCU_OuputPort_Outport_2' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_SCU_1_MsgCounter
    = 0.0;

  /* DataTypeConversion: '<Root>/Data Type Conversion3' */
  localB->DataTypeConversion3 = static_cast<uint8_T>
    (*rtu_ADCU_InternalOutputPort_set_longitudinal_control_info_set_LngCtrlReq);

  /* DataTypeConversion: '<Root>/Data Type Conversion10' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_LngCtrlReq =
    localB->DataTypeConversion3;

  /* DataTypeConversion: '<Root>/Data Type Conversion11' */
  localB->DataTypeConversion11 = static_cast<uint8_T>
    (*rtu_ADCU_InternalOutputPort_set_longitudinal_control_info_set_GearLvlReqVD);

  /* DataTypeConversion: '<Root>/Data Type Conversion12' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerWhlTorqReq =
    *rtu_ADCU_InternalOutputPort_set_lateral_control_info_set_SteerWhlTorqReq;

  /* DataTypeConversion: '<Root>/Data Type Conversion4' */
  localB->DataTypeConversion4 = static_cast<uint64_T>
    (*rtu_ADCU_InternalOutputPort_set_longitudinal_control_info_set_GearLvlReq);

  /* DataTypeConversion: '<Root>/Data Type Conversion14' incorporates:
   *  DataTypeConversion: '<Root>/Data Type Conversion4'
   */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_GearLvlReq =
    static_cast<real_T>(localB->DataTypeConversion4);

  /* DataTypeConversion: '<Root>/Data Type Conversion15' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_LatCtrlReq =
    static_cast<int32_T>
    (*rtu_ADCU_InternalOutputPort_set_lateral_control_info_set_LatCtrlReq);

  /* DataTypeConversion: '<Root>/Data Type Conversion16' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerAngReq =
    *rtu_ADCU_InternalOutputPort_set_lateral_control_info_set_SteerAngReq;

  /* DataTypeConversion: '<Root>/Data Type Conversion26' */
  localB->DataTypeConversion26 = static_cast<uint8_T>
    (*rtu_ADCU_InternalOutputPort_set_ADCU_info_set_BodyCtrlReq);

  /* DataTypeConversion: '<Root>/Data Type Conversion19' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_BodyCtrlReq =
    localB->DataTypeConversion26;

  /* DataTypeConversion: '<Root>/Data Type Conversion27' */
  localB->DataTypeConversion27 = static_cast<uint8_T>
    (*rtu_ADCU_InternalOutputPort_set_ADCU_info_set_TurnLightReq);

  /* DataTypeConversion: '<Root>/Data Type Conversion21' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_TurnLightReq =
    localB->DataTypeConversion27;

  /* DataTypeConversion: '<Root>/Data Type Conversion28' */
  localB->DataTypeConversion28 = static_cast<uint8_T>
    (*rtu_ADCU_InternalOutputPort_set_ADCU_info_set_HornRingReq);

  /* DataTypeConversion: '<Root>/Data Type Conversion22' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_HornRingReq =
    localB->DataTypeConversion28;

  /* DataTypeConversion: '<Root>/Data Type Conversion29' */
  localB->DataTypeConversion29 = static_cast<uint8_T>
    (*rtu_ADCU_InternalOutputPort_set_ADCU_info_set_BeamReq);

  /* DataTypeConversion: '<Root>/Data Type Conversion25' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_BeamReq =
    localB->DataTypeConversion29;

  /* DataTypeConversion: '<Root>/Data Type Conversion5' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_AutoTrqWhlReq =
    *rtu_ADCU_InternalOutputPort_set_longitudinal_control_info_set_AutoTrqWhlReq;

  /* DataTypeConversion: '<Root>/Data Type Conversion7' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_BrakeReq =
    *rtu_ADCU_InternalOutputPort_set_longitudinal_control_info_set_BrakeReq;

  /* DataTypeConversion: '<Root>/Data Type Conversion9' */
  *rty_ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_GearLvlReqVD =
    localB->DataTypeConversion11;
}

/* Model initialize function */
void AION_signal_transfer_initialize(const char_T **rt_errorStatus,
  RT_MODEL_AION_signal_transfer_T *const AION_signal_transfer_M,
  B_AION_signal_transfer_c_T *localB)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));

  /* initialize error status */
  rtmSetErrorStatusPointer(AION_signal_transfer_M, rt_errorStatus);

  /* block I/O */
  (void) std::memset((static_cast<void *>(localB)), 0,
                     sizeof(B_AION_signal_transfer_c_T));

  {
    localB->DataTypeConversion4 = (0UL);
  }
}

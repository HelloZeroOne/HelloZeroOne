/*
 * Code generation for system model 'AION_signal_transfer'
 * For more details, see corresponding source file AION_signal_transfer.c
 *
 */

#ifndef RTW_HEADER_AION_signal_transfer_h_
#define RTW_HEADER_AION_signal_transfer_h_
#include <cmath>
#include <cstring>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "AION_signal_transfer_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Block signals for model 'AION_signal_transfer' */
struct B_AION_signal_transfer_c_T {
  uint64_T DataTypeConversion4;        /* '<Root>/Data Type Conversion4' */
  uint8_T DataTypeConversion1;         /* '<Root>/Data Type Conversion1' */
  uint8_T DataTypeConversion13;        /* '<Root>/Data Type Conversion13' */
  uint8_T DataTypeConversion2;         /* '<Root>/Data Type Conversion2' */
  uint8_T DataTypeConversion23;        /* '<Root>/Data Type Conversion23' */
  uint8_T DataTypeConversion30;        /* '<Root>/Data Type Conversion30' */
  uint8_T DataTypeConversion32;        /* '<Root>/Data Type Conversion32' */
  uint8_T DataTypeConversion35;        /* '<Root>/Data Type Conversion35' */
  uint8_T DataTypeConversion36;        /* '<Root>/Data Type Conversion36' */
  uint8_T DataTypeConversion38;        /* '<Root>/Data Type Conversion38' */
  uint8_T DataTypeConversion40;        /* '<Root>/Data Type Conversion40' */
  uint8_T DataTypeConversion42;        /* '<Root>/Data Type Conversion42' */
  uint8_T DataTypeConversion44;        /* '<Root>/Data Type Conversion44' */
  uint8_T DataTypeConversion46;        /* '<Root>/Data Type Conversion46' */
  uint8_T DataTypeConversion48;        /* '<Root>/Data Type Conversion48' */
  uint8_T DataTypeConversion51;        /* '<Root>/Data Type Conversion51' */
  uint8_T DataTypeConversion3;         /* '<Root>/Data Type Conversion3' */
  uint8_T DataTypeConversion11;        /* '<Root>/Data Type Conversion11' */
  uint8_T DataTypeConversion26;        /* '<Root>/Data Type Conversion26' */
  uint8_T DataTypeConversion27;        /* '<Root>/Data Type Conversion27' */
  uint8_T DataTypeConversion28;        /* '<Root>/Data Type Conversion28' */
  uint8_T DataTypeConversion29;        /* '<Root>/Data Type Conversion29' */
};

/* Real-time Model Data Structure */
struct tag_RTM_AION_signal_transfer_T {
  const char_T **errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    boolean_T *stopRequestedFlag;
  } Timing;
};

struct MdlrefDW_AION_signal_transfer_T {
  B_AION_signal_transfer_c_T rtb;
  RT_MODEL_AION_signal_transfer_T rtm;
};

/* Model reference registration function */
extern void AION_signal_transfer_initialize(const char_T **rt_errorStatus,
  RT_MODEL_AION_signal_transfer_T *const AION_signal_transfer_M,
  B_AION_signal_transfer_c_T *localB);
extern void AION_signal_transfer(const real_T
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
  B_AION_signal_transfer_c_T *localB);

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
 * '<Root>' : 'AION_signal_transfer'
 * '<S1>'   : 'AION_signal_transfer/DocBlock'
 */
#endif                                 /* RTW_HEADER_AION_signal_transfer_h_ */

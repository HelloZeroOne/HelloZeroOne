/*
 * Code generation for system model 'AION_auto_mode_request'
 * For more details, see corresponding source file AION_auto_mode_request.c
 *
 */

#ifndef RTW_HEADER_AION_auto_mode_request_h_
#define RTW_HEADER_AION_auto_mode_request_h_
#include <cmath>
#include <cstring>
#include <logsrv.h>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "verify/verifyIntrf.h"
#include "AION_auto_mode_request_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Block signals for model 'AION_auto_mode_request' */
struct B_AION_auto_mode_request_c_T {
  real_T ADCU_Checksum1;               /* '<Root>/ADCU_life_signal' */
  real_T ADCU_MsgCounter1;             /* '<Root>/ADCU_life_signal' */
  real_T ADCU_Checksum2;               /* '<Root>/ADCU_life_signal' */
  real_T ADCU_MsgCounter2;             /* '<Root>/ADCU_life_signal' */
  real_T ADCU_Checksum3;               /* '<Root>/ADCU_life_signal' */
  real_T ADCU_MsgCounter3;             /* '<Root>/ADCU_life_signal' */
  uint32_T ADCU_MsgCounter1_m;         /* '<Root>/Data Type Conversion2' */
  uint32_T ADCU_MsgCounter2_j;         /* '<Root>/Data Type Conversion4' */
  Enable_request body_control_req;     /* '<Root>/body_control_request' */
  Control_request longitudinal_control_req;
                                /* '<Root>/Longitudinal_control_status_judge' */
  Control_request lateral_control_req;
                                     /* '<Root>/Lateral_control_status_judge' */
};

/* Block states (default storage) for model 'AION_auto_mode_request' */
struct DW_AION_auto_mode_request_f_T {
  real_T adcu_msg_count;               /* '<Root>/ADCU_life_signal' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_DataTypeConversion2_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_DataTypeConversion4_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Lateral_control_status_judge_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Longitudinal_control_status_judge_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_body_control_request_at_outport_0_PWORK;/* synthesized block */
};

/* Real-time Model Data Structure */
struct tag_RTM_AION_auto_mode_request_T {
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

struct MdlrefDW_AION_auto_mode_request_T {
  B_AION_auto_mode_request_c_T rtb;
  DW_AION_auto_mode_request_f_T rtdw;
  RT_MODEL_AION_auto_mode_request_T rtm;
};

/* Model reference registration function */
extern void AION_auto_mode_request_initialize(const char_T **rt_errorStatus,
  RT_MODEL_AION_auto_mode_request_T *const AION_auto_mode_request_M,
  B_AION_auto_mode_request_c_T *localB, DW_AION_auto_mode_request_f_T *localDW);
extern void AION_auto_mode_request_Init(DW_AION_auto_mode_request_f_T *localDW);
extern void AION_auto_mode_request_Reset(DW_AION_auto_mode_request_f_T *localDW);
extern void AION_auto_mode_request(const Control_request
  *rtu_InBus_set_lateral_control_info_set_LatCtrlReq, const real_T
  *rtu_InBus_set_lateral_control_info_set_SteerWhlTorqReq, const real_T
  *rtu_InBus_set_lateral_control_info_set_SteerAngReq, const real_T
  *rtu_InBus_set_lateral_control_info_set_SteerAngSpdLimt, const Control_request
  *rtu_InBus_set_longitudinal_control_info_set_LngCtrlReq, const real_T
  *rtu_InBus_set_longitudinal_control_info_set_AutoTrqWhlReq, const real_T
  *rtu_InBus_set_longitudinal_control_info_set_BrakeReq, const Gear_request
  *rtu_InBus_set_longitudinal_control_info_set_GearLvlReq, const
  Validation_status *rtu_InBus_set_longitudinal_control_info_set_GearLvlReqVD,
  const Beam_request *rtu_InBus_set_ADCU_info_set_BeamReq, const Enable_request *
  rtu_InBus_set_ADCU_info_set_BodyCtrlReq, const Active_request
  *rtu_InBus_set_ADCU_info_set_HornRingReq, const Light_request
  *rtu_InBus_set_ADCU_info_set_TurnLightReq, const uint8_T
  *rtu_InBus_get_BCS_info_get_ABSActiveSt, const uint8_T
  *rtu_InBus_get_BCS_info_get_ABSFaultSt, const uint8_T
  *rtu_InBus_get_BCS_info_get_VDCActiveSt, const uint8_T
  *rtu_InBus_get_BCS_info_get_VDCFaultSt, const real_T
  *rtu_InBus_get_BCS_info_get_VehSpd, const uint8_T
  *rtu_InBus_get_BCS_info_get_VehSpdVD, const uint32_T
  *rtu_InBus_get_BCS_info_get_FLWheelSpdEdgesSum, const uint8_T
  *rtu_InBus_get_BCS_info_get_FLWheelSpdEdgesSumVD, const uint32_T
  *rtu_InBus_get_BCS_info_get_FRWheelSpdEdgesSum, const uint8_T
  *rtu_InBus_get_BCS_info_get_FRWheelSpdEdgesSumVD, const uint32_T
  *rtu_InBus_get_BCS_info_get_RLWheelSpdEdgesSum, const uint8_T
  *rtu_InBus_get_BCS_info_get_RLWheelSpdEdgesSumVD, const uint32_T
  *rtu_InBus_get_BCS_info_get_RRWheelSpdEdgesSum, const uint8_T
  *rtu_InBus_get_BCS_info_get_RRWheelSpdEdgesSumVD, const real_T
  *rtu_InBus_get_BCS_info_get_YawRate, const real_T
  *rtu_InBus_get_BCS_info_get_YawRateOffset, const uint8_T
  *rtu_InBus_get_BCS_info_get_YawRateSt, const uint8_T
  *rtu_InBus_get_BCS_info_get_HDCCtrlSt, const uint8_T
  *rtu_InBus_get_BCS_info_get_HDCErrSt, const uint8_T
  *rtu_InBus_get_BCS_info_get_AEBActive, const uint8_T
  *rtu_InBus_get_BCS_info_get_AEBAvailable, const uint8_T
  *rtu_InBus_get_BCS_info_get_CDDActive, const uint8_T
  *rtu_InBus_get_BCS_info_get_CDDAvailable, const uint8_T
  *rtu_InBus_get_BCS_info_get_CDDFail, const real_T
  *rtu_InBus_get_BCS_info_get_MasterCylinderPr, const real_T
  *rtu_InBus_get_BCS_info_get_MasterCylinderPrOffset, const uint8_T
  *rtu_InBus_get_BCS_info_get_MasterCylinderPrOffsetVD, const uint8_T
  *rtu_InBus_get_BCS_info_get_MasterCylinderPrVD, const uint8_T
  *rtu_InBus_get_BCS_info_get_NoBrakeForce, const uint8_T
  *rtu_InBus_get_BCS_info_get_VehicleStandStillSt, const uint8_T
  *rtu_InBus_get_BCS_info_get_FLWheelRotatedDirection, const uint8_T
  *rtu_InBus_get_BCS_info_get_FLWheelRotatedDirectionVD, const real_T
  *rtu_InBus_get_BCS_info_get_FLWheelSpd, const uint8_T
  *rtu_InBus_get_BCS_info_get_FLWheelSpdVD, const uint8_T
  *rtu_InBus_get_BCS_info_get_FRWheelRotatedDirection, const uint8_T
  *rtu_InBus_get_BCS_info_get_FRWheelRotatedDirectionVD, const real_T
  *rtu_InBus_get_BCS_info_get_FRWheelSpd, const uint8_T
  *rtu_InBus_get_BCS_info_get_FRWheelSpdVD, const uint8_T
  *rtu_InBus_get_BCS_info_get_RLWheelRotatedDirection, const uint8_T
  *rtu_InBus_get_BCS_info_get_RLWheelRotatedDirectionVD, const real_T
  *rtu_InBus_get_BCS_info_get_RLWheelSpd, const uint8_T
  *rtu_InBus_get_BCS_info_get_RLWheelSpdVD, const uint8_T
  *rtu_InBus_get_BCS_info_get_RRWheelRotatedDirection, const uint8_T
  *rtu_InBus_get_BCS_info_get_RRWheelRotatedDirectionVD, const real_T
  *rtu_InBus_get_BCS_info_get_RRWheelSpd, const uint8_T
  *rtu_InBus_get_BCS_info_get_RRWheelSpdVD, const real_T
  *rtu_InBus_get_BCS_info_get_ActVehLaltrlAccel, const uint8_T
  *rtu_InBus_get_BCS_info_get_ActVehLaltrlAccelVD, const real_T
  *rtu_InBus_get_BCS_info_get_ActVehLongAccel, const uint8_T
  *rtu_InBus_get_BCS_info_get_ActVehLongAccelVD, const real_T
  *rtu_InBus_get_BCS_info_get_VehLaltrlAccelOffset, const real_T
  *rtu_InBus_get_BCS_info_get_VehLongAccelOffset, const uint8_T
  *rtu_InBus_get_VCU_info_get_GearLeverIntv, const Drive_status
  *rtu_InBus_get_VCU_info_get_VehDrvMod, const Ready_status
  *rtu_InBus_get_VCU_info_get_VehRdySt, const uint32_T
  *rtu_InBus_get_VCU_info_get_VehRng, const uint32_T
  *rtu_InBus_get_VCU_info_get_ActRecpTorq, const uint8_T
  *rtu_InBus_get_VCU_info_get_ActRecpTorqSt, const Gear_status
  *rtu_InBus_get_VCU_info_get_CrntGearLvl, const uint8_T
  *rtu_InBus_get_VCU_info_get_CrntGearLvlVD, const real_T
  *rtu_InBus_get_VCU_info_get_ACCMaxRecpDecel, const uint8_T
  *rtu_InBus_get_VCU_info_get_ACCMaxRecpDecelVD, const uint32_T
  *rtu_InBus_get_VCU_info_get_ActVehWheelTorq, const uint8_T
  *rtu_InBus_get_VCU_info_get_LateralAssistBtnInfo, const uint8_T
  *rtu_InBus_get_VCU_info_get_LateralAssistBtnInfoVD, const uint32_T
  *rtu_InBus_get_VCU_info_get_ACCButtInfo, const uint8_T
  *rtu_InBus_get_VCU_info_get_AccElecECFail, const real_T
  *rtu_InBus_get_VCU_info_get_GasPedalActPst, const uint8_T
  *rtu_InBus_get_VCU_info_get_GasPedalActPstVD, const uint32_T
  *rtu_InBus_get_VCU_info_get_VehWheelTorqMax, const uint8_T
  *rtu_InBus_get_VCU_info_get_BrkPedalSt, const uint8_T
  *rtu_InBus_get_VCU_info_get_BrkPedalStVD, const real_T
  *rtu_InBus_get_VCU_info_get_GasPedalVirtualPst, const uint8_T
  *rtu_InBus_get_VCU_info_get_GasPedalVirtualPstVD, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum1, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter1, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum10, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter10, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum11, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter11, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum12, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter12, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum13, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter13, const uint8_T
  *rtu_InBus_get_SCU_info_get_EStopSwSt, const uint8_T
  *rtu_InBus_get_SCU_info_get_EStopSwStVD, const uint32_T
  *rtu_InBus_get_SCU_info_get_LatAutoCheckReport, const Control_status
  *rtu_InBus_get_SCU_info_get_LatCtrlMode, const uint32_T
  *rtu_InBus_get_SCU_info_get_LatQuitReport, const uint32_T
  *rtu_InBus_get_SCU_info_get_LngAutoCheckIReport, const Control_status
  *rtu_InBus_get_SCU_info_get_LngCtrlMode, const uint32_T
  *rtu_InBus_get_SCU_info_get_LngQuitReport, const uint8_T
  *rtu_InBus_get_SCU_info_get_StrngWhlIntv, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum16, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter16, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum17, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter17, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum18, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter18, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum2, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter2, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum3, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter3, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum4, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter4, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum5, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter5, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum6, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter6, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum7, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter7, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum8, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter8, const uint32_T
  *rtu_InBus_get_SCU_info_get_Checksum9, const uint32_T
  *rtu_InBus_get_SCU_info_get_MsgCounter9, const Error_status
  *rtu_InBus_get_EPB_info_get_FailSt, const uint8_T
  *rtu_InBus_get_EPB_info_get_SwitchSt, const uint8_T
  *rtu_InBus_get_EPB_info_get_SwitchStVD, const uint8_T
  *rtu_InBus_get_EPB_info_get_SysSt, const uint8_T
  *rtu_InBus_get_SRS_info_get_DriverSeatBeltSt, const uint8_T
  *rtu_InBus_get_SRS_info_get_PsngrSeatBeltSt, const real_T
  *rtu_InBus_get_EPS_info_get_SteeringAngle, const uint32_T
  *rtu_InBus_get_EPS_info_get_SteeringAngleSpd, const uint8_T
  *rtu_InBus_get_EPS_info_get_SteeringAngleSpdVD, const uint8_T
  *rtu_InBus_get_EPS_info_get_SteeringAngleVD, const real_T
  *rtu_InBus_get_EPS_info_get_StrngWhlTorq, const uint8_T
  *rtu_InBus_get_EPS_info_get_StrngWhlTorqVD, const uint8_T
  *rtu_InBus_get_EPS_info_get_ThermalSt, const uint8_T
  *rtu_InBus_get_EPS_info_get_WarnLamp, const Available_status
  *rtu_InBus_get_BCM_info_get_CtrlAvailable, const uint8_T
  *rtu_InBus_get_BCM_info_get_DriverDoorAjarSt, const uint8_T
  *rtu_InBus_get_BCM_info_get_FrontFogLampSt, const uint8_T
  *rtu_InBus_get_BCM_info_get_FrontWiperSt, const Active_status
  *rtu_InBus_get_BCM_info_get_HazardLampSt, const Active_status
  *rtu_InBus_get_BCM_info_get_HighBeamSt, const Active_status
  *rtu_InBus_get_BCM_info_get_HornSt, const uint8_T
  *rtu_InBus_get_BCM_info_get_KeySt, const Fault_status
  *rtu_InBus_get_BCM_info_get_LeftTurnLampFaultSt, const Active_status
  *rtu_InBus_get_BCM_info_get_LeftTurnLampSt, const Active_status
  *rtu_InBus_get_BCM_info_get_LowBeamSt, const uint8_T
  *rtu_InBus_get_BCM_info_get_PsngrDoorAjarSt, const uint8_T
  *rtu_InBus_get_BCM_info_get_RLDoorAjarSt, const uint8_T
  *rtu_InBus_get_BCM_info_get_RRDoorAjarSt, const uint8_T
  *rtu_InBus_get_BCM_info_get_RearFogLampSt, const Fault_status
  *rtu_InBus_get_BCM_info_get_RightTurnLampFaultSt, const Active_status
  *rtu_InBus_get_BCM_info_get_RightTurnLampSt, Control_request
  *rty_OutBus_set_lateral_control_info_set_LatCtrlReq, real_T
  *rty_OutBus_set_lateral_control_info_set_SteerWhlTorqReq, real_T
  *rty_OutBus_set_lateral_control_info_set_SteerAngReq, real_T
  *rty_OutBus_set_lateral_control_info_set_SteerAngSpdLimt, Control_request
  *rty_OutBus_set_longitudinal_control_info_set_LngCtrlReq, real_T
  *rty_OutBus_set_longitudinal_control_info_set_AutoTrqWhlReq, real_T
  *rty_OutBus_set_longitudinal_control_info_set_BrakeReq, Gear_request
  *rty_OutBus_set_longitudinal_control_info_set_GearLvlReq, Validation_status
  *rty_OutBus_set_longitudinal_control_info_set_GearLvlReqVD, uint32_T
  *rty_OutBus_set_ADCU_info_set_Checksum1, uint32_T
  *rty_OutBus_set_ADCU_info_set_MsgCounter1, uint32_T
  *rty_OutBus_set_ADCU_info_set_Checksum2, uint32_T
  *rty_OutBus_set_ADCU_info_set_MsgCounter2, uint32_T
  *rty_OutBus_set_ADCU_info_set_Checksum3, uint32_T
  *rty_OutBus_set_ADCU_info_set_MsgCounter3, Beam_request
  *rty_OutBus_set_ADCU_info_set_BeamReq, Enable_request
  *rty_OutBus_set_ADCU_info_set_BodyCtrlReq, Active_request
  *rty_OutBus_set_ADCU_info_set_HornRingReq, Light_request
  *rty_OutBus_set_ADCU_info_set_TurnLightReq, uint8_T
  *rty_OutBus_get_BCS_info_get_ABSActiveSt, uint8_T
  *rty_OutBus_get_BCS_info_get_ABSFaultSt, uint8_T
  *rty_OutBus_get_BCS_info_get_VDCActiveSt, uint8_T
  *rty_OutBus_get_BCS_info_get_VDCFaultSt, real_T
  *rty_OutBus_get_BCS_info_get_VehSpd, uint8_T
  *rty_OutBus_get_BCS_info_get_VehSpdVD, uint32_T
  *rty_OutBus_get_BCS_info_get_FLWheelSpdEdgesSum, uint8_T
  *rty_OutBus_get_BCS_info_get_FLWheelSpdEdgesSumVD, uint32_T
  *rty_OutBus_get_BCS_info_get_FRWheelSpdEdgesSum, uint8_T
  *rty_OutBus_get_BCS_info_get_FRWheelSpdEdgesSumVD, uint32_T
  *rty_OutBus_get_BCS_info_get_RLWheelSpdEdgesSum, uint8_T
  *rty_OutBus_get_BCS_info_get_RLWheelSpdEdgesSumVD, uint32_T
  *rty_OutBus_get_BCS_info_get_RRWheelSpdEdgesSum, uint8_T
  *rty_OutBus_get_BCS_info_get_RRWheelSpdEdgesSumVD, real_T
  *rty_OutBus_get_BCS_info_get_YawRate, real_T
  *rty_OutBus_get_BCS_info_get_YawRateOffset, uint8_T
  *rty_OutBus_get_BCS_info_get_YawRateSt, uint8_T
  *rty_OutBus_get_BCS_info_get_HDCCtrlSt, uint8_T
  *rty_OutBus_get_BCS_info_get_HDCErrSt, uint8_T
  *rty_OutBus_get_BCS_info_get_AEBActive, uint8_T
  *rty_OutBus_get_BCS_info_get_AEBAvailable, uint8_T
  *rty_OutBus_get_BCS_info_get_CDDActive, uint8_T
  *rty_OutBus_get_BCS_info_get_CDDAvailable, uint8_T
  *rty_OutBus_get_BCS_info_get_CDDFail, real_T
  *rty_OutBus_get_BCS_info_get_MasterCylinderPr, real_T
  *rty_OutBus_get_BCS_info_get_MasterCylinderPrOffset, uint8_T
  *rty_OutBus_get_BCS_info_get_MasterCylinderPrOffsetVD, uint8_T
  *rty_OutBus_get_BCS_info_get_MasterCylinderPrVD, uint8_T
  *rty_OutBus_get_BCS_info_get_NoBrakeForce, uint8_T
  *rty_OutBus_get_BCS_info_get_VehicleStandStillSt, uint8_T
  *rty_OutBus_get_BCS_info_get_FLWheelRotatedDirection, uint8_T
  *rty_OutBus_get_BCS_info_get_FLWheelRotatedDirectionVD, real_T
  *rty_OutBus_get_BCS_info_get_FLWheelSpd, uint8_T
  *rty_OutBus_get_BCS_info_get_FLWheelSpdVD, uint8_T
  *rty_OutBus_get_BCS_info_get_FRWheelRotatedDirection, uint8_T
  *rty_OutBus_get_BCS_info_get_FRWheelRotatedDirectionVD, real_T
  *rty_OutBus_get_BCS_info_get_FRWheelSpd, uint8_T
  *rty_OutBus_get_BCS_info_get_FRWheelSpdVD, uint8_T
  *rty_OutBus_get_BCS_info_get_RLWheelRotatedDirection, uint8_T
  *rty_OutBus_get_BCS_info_get_RLWheelRotatedDirectionVD, real_T
  *rty_OutBus_get_BCS_info_get_RLWheelSpd, uint8_T
  *rty_OutBus_get_BCS_info_get_RLWheelSpdVD, uint8_T
  *rty_OutBus_get_BCS_info_get_RRWheelRotatedDirection, uint8_T
  *rty_OutBus_get_BCS_info_get_RRWheelRotatedDirectionVD, real_T
  *rty_OutBus_get_BCS_info_get_RRWheelSpd, uint8_T
  *rty_OutBus_get_BCS_info_get_RRWheelSpdVD, real_T
  *rty_OutBus_get_BCS_info_get_ActVehLaltrlAccel, uint8_T
  *rty_OutBus_get_BCS_info_get_ActVehLaltrlAccelVD, real_T
  *rty_OutBus_get_BCS_info_get_ActVehLongAccel, uint8_T
  *rty_OutBus_get_BCS_info_get_ActVehLongAccelVD, real_T
  *rty_OutBus_get_BCS_info_get_VehLaltrlAccelOffset, real_T
  *rty_OutBus_get_BCS_info_get_VehLongAccelOffset, uint8_T
  *rty_OutBus_get_VCU_info_get_GearLeverIntv, Drive_status
  *rty_OutBus_get_VCU_info_get_VehDrvMod, Ready_status
  *rty_OutBus_get_VCU_info_get_VehRdySt, uint32_T
  *rty_OutBus_get_VCU_info_get_VehRng, uint32_T
  *rty_OutBus_get_VCU_info_get_ActRecpTorq, uint8_T
  *rty_OutBus_get_VCU_info_get_ActRecpTorqSt, Gear_status
  *rty_OutBus_get_VCU_info_get_CrntGearLvl, uint8_T
  *rty_OutBus_get_VCU_info_get_CrntGearLvlVD, real_T
  *rty_OutBus_get_VCU_info_get_ACCMaxRecpDecel, uint8_T
  *rty_OutBus_get_VCU_info_get_ACCMaxRecpDecelVD, uint32_T
  *rty_OutBus_get_VCU_info_get_ActVehWheelTorq, uint8_T
  *rty_OutBus_get_VCU_info_get_LateralAssistBtnInfo, uint8_T
  *rty_OutBus_get_VCU_info_get_LateralAssistBtnInfoVD, uint32_T
  *rty_OutBus_get_VCU_info_get_ACCButtInfo, uint8_T
  *rty_OutBus_get_VCU_info_get_AccElecECFail, real_T
  *rty_OutBus_get_VCU_info_get_GasPedalActPst, uint8_T
  *rty_OutBus_get_VCU_info_get_GasPedalActPstVD, uint32_T
  *rty_OutBus_get_VCU_info_get_VehWheelTorqMax, uint8_T
  *rty_OutBus_get_VCU_info_get_BrkPedalSt, uint8_T
  *rty_OutBus_get_VCU_info_get_BrkPedalStVD, real_T
  *rty_OutBus_get_VCU_info_get_GasPedalVirtualPst, uint8_T
  *rty_OutBus_get_VCU_info_get_GasPedalVirtualPstVD, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum1, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter1, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum10, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter10, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum11, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter11, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum12, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter12, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum13, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter13, uint8_T
  *rty_OutBus_get_SCU_info_get_EStopSwSt, uint8_T
  *rty_OutBus_get_SCU_info_get_EStopSwStVD, uint32_T
  *rty_OutBus_get_SCU_info_get_LatAutoCheckReport, Control_status
  *rty_OutBus_get_SCU_info_get_LatCtrlMode, uint32_T
  *rty_OutBus_get_SCU_info_get_LatQuitReport, uint32_T
  *rty_OutBus_get_SCU_info_get_LngAutoCheckIReport, Control_status
  *rty_OutBus_get_SCU_info_get_LngCtrlMode, uint32_T
  *rty_OutBus_get_SCU_info_get_LngQuitReport, uint8_T
  *rty_OutBus_get_SCU_info_get_StrngWhlIntv, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum16, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter16, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum17, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter17, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum18, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter18, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum2, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter2, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum3, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter3, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum4, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter4, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum5, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter5, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum6, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter6, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum7, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter7, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum8, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter8, uint32_T
  *rty_OutBus_get_SCU_info_get_Checksum9, uint32_T
  *rty_OutBus_get_SCU_info_get_MsgCounter9, Error_status
  *rty_OutBus_get_EPB_info_get_FailSt, uint8_T
  *rty_OutBus_get_EPB_info_get_SwitchSt, uint8_T
  *rty_OutBus_get_EPB_info_get_SwitchStVD, uint8_T
  *rty_OutBus_get_EPB_info_get_SysSt, uint8_T
  *rty_OutBus_get_SRS_info_get_DriverSeatBeltSt, uint8_T
  *rty_OutBus_get_SRS_info_get_PsngrSeatBeltSt, real_T
  *rty_OutBus_get_EPS_info_get_SteeringAngle, uint32_T
  *rty_OutBus_get_EPS_info_get_SteeringAngleSpd, uint8_T
  *rty_OutBus_get_EPS_info_get_SteeringAngleSpdVD, uint8_T
  *rty_OutBus_get_EPS_info_get_SteeringAngleVD, real_T
  *rty_OutBus_get_EPS_info_get_StrngWhlTorq, uint8_T
  *rty_OutBus_get_EPS_info_get_StrngWhlTorqVD, uint8_T
  *rty_OutBus_get_EPS_info_get_ThermalSt, uint8_T
  *rty_OutBus_get_EPS_info_get_WarnLamp, Available_status
  *rty_OutBus_get_BCM_info_get_CtrlAvailable, uint8_T
  *rty_OutBus_get_BCM_info_get_DriverDoorAjarSt, uint8_T
  *rty_OutBus_get_BCM_info_get_FrontFogLampSt, uint8_T
  *rty_OutBus_get_BCM_info_get_FrontWiperSt, Active_status
  *rty_OutBus_get_BCM_info_get_HazardLampSt, Active_status
  *rty_OutBus_get_BCM_info_get_HighBeamSt, Active_status
  *rty_OutBus_get_BCM_info_get_HornSt, uint8_T
  *rty_OutBus_get_BCM_info_get_KeySt, Fault_status
  *rty_OutBus_get_BCM_info_get_LeftTurnLampFaultSt, Active_status
  *rty_OutBus_get_BCM_info_get_LeftTurnLampSt, Active_status
  *rty_OutBus_get_BCM_info_get_LowBeamSt, uint8_T
  *rty_OutBus_get_BCM_info_get_PsngrDoorAjarSt, uint8_T
  *rty_OutBus_get_BCM_info_get_RLDoorAjarSt, uint8_T
  *rty_OutBus_get_BCM_info_get_RRDoorAjarSt, uint8_T
  *rty_OutBus_get_BCM_info_get_RearFogLampSt, Fault_status
  *rty_OutBus_get_BCM_info_get_RightTurnLampFaultSt, Active_status
  *rty_OutBus_get_BCM_info_get_RightTurnLampSt, B_AION_auto_mode_request_c_T
  *localB, DW_AION_auto_mode_request_f_T *localDW);

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
 * '<Root>' : 'AION_auto_mode_request'
 * '<S1>'   : 'AION_auto_mode_request/ADCU_life_signal'
 * '<S2>'   : 'AION_auto_mode_request/Lateral_control_status_judge'
 * '<S3>'   : 'AION_auto_mode_request/Longitudinal_control_status_judge'
 * '<S4>'   : 'AION_auto_mode_request/body_control_request'
 */
#endif                                /* RTW_HEADER_AION_auto_mode_request_h_ */

/*
 * AION_request_fail_analysis.h
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

#ifndef RTW_HEADER_AION_request_fail_analysis_h_
#define RTW_HEADER_AION_request_fail_analysis_h_
#include <cstring>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "verify/verifyIntrf.h"
#include "AION_request_fail_analysis_types.h"

/* Shared type includes */
#include "multiword_types.h"

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

/* Block states (default storage) for system '<Root>' */
struct DW_AION_request_fail_analysis_T {
  real_T request_fail_count;   /* '<Root>/Longitudinal_request_fail_analysis' */
  real_T request_fail_count_b;      /* '<Root>/Lateral_request_fail_analysis' */
};

/* External inputs (root inport signals with default storage) */
struct ExtU_AION_request_fail_analysis_T {
  Control_request InBus_set_lateral_control_info_set_LatCtrlReq;/* '<Root>/B_-1_-1' */
  real_T InBus_set_lateral_control_info_set_SteerWhlTorqReq;/* '<Root>/B_-1_-1' */
  real_T InBus_set_lateral_control_info_set_SteerAngReq;/* '<Root>/B_-1_-1' */
  real_T InBus_set_lateral_control_info_set_SteerAngSpdLimt;/* '<Root>/B_-1_-1' */
  Control_request InBus_set_longitudinal_control_info_set_LngCtrlReq;/* '<Root>/B_-1_-1' */
  int32_T InBus_set_longitudinal_control_info_set_AutoTrqWhlReq;/* '<Root>/B_-1_-1' */
  real_T InBus_set_longitudinal_control_info_set_BrakeReq;/* '<Root>/B_-1_-1' */
  AION_gear InBus_set_longitudinal_control_info_set_GearLvlReq;/* '<Root>/B_-1_-1' */
  Validation_status InBus_set_longitudinal_control_info_set_GearLvlReqVD;/* '<Root>/B_-1_-1' */
  uint32_T InBus_set_ADCU_info_set_Checksum1;/* '<Root>/B_-1_-1' */
  uint32_T InBus_set_ADCU_info_set_MsgCounter1;/* '<Root>/B_-1_-1' */
  uint32_T InBus_set_ADCU_info_set_Checksum2;/* '<Root>/B_-1_-1' */
  uint32_T InBus_set_ADCU_info_set_MsgCounter2;/* '<Root>/B_-1_-1' */
  uint32_T InBus_set_ADCU_info_set_Checksum3;/* '<Root>/B_-1_-1' */
  uint32_T InBus_set_ADCU_info_set_MsgCounter3;/* '<Root>/B_-1_-1' */
  uint8_T InBus_set_ADCU_info_set_BeamReq;/* '<Root>/B_-1_-1' */
  uint8_T InBus_set_ADCU_info_set_BodyCtrlReq;/* '<Root>/B_-1_-1' */
  uint8_T InBus_set_ADCU_info_set_HornRingReq;/* '<Root>/B_-1_-1' */
  uint8_T InBus_set_ADCU_info_set_TurnLightReq;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_ABSActiveSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_ABSFaultSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_VDCActiveSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_VDCFaultSt;/* '<Root>/B_-1_-1' */
  real_T InBus_get_BCS_info_get_VehSpd;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_VehSpdVD;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_BCS_info_get_FLWheelSpdEdgesSum;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_FLWheelSpdEdgesSumVD;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_BCS_info_get_FRWheelSpdEdgesSum;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_FRWheelSpdEdgesSumVD;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_BCS_info_get_RLWheelSpdEdgesSum;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_RLWheelSpdEdgesSumVD;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_BCS_info_get_RRWheelSpdEdgesSum;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_RRWheelSpdEdgesSumVD;/* '<Root>/B_-1_-1' */
  real_T InBus_get_BCS_info_get_YawRate;/* '<Root>/B_-1_-1' */
  real_T InBus_get_BCS_info_get_YawRateOffset;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_YawRateSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_HDCCtrlSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_HDCErrSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_AEBActive;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_AEBAvailable;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_CDDActive;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_CDDAvailable;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_CDDFail;/* '<Root>/B_-1_-1' */
  real_T InBus_get_BCS_info_get_MasterCylinderPr;/* '<Root>/B_-1_-1' */
  real_T InBus_get_BCS_info_get_MasterCylinderPrOffset;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_MasterCylinderPrOffsetVD;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_MasterCylinderPrVD;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_NoBrakeForce;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_VehicleStandStillSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_FLWheelRotatedDirection;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_FLWheelRotatedDirectionVD;/* '<Root>/B_-1_-1' */
  real_T InBus_get_BCS_info_get_FLWheelSpd;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_FLWheelSpdVD;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_FRWheelRotatedDirection;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_FRWheelRotatedDirectionVD;/* '<Root>/B_-1_-1' */
  real_T InBus_get_BCS_info_get_FRWheelSpd;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_FRWheelSpdVD;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_RLWheelRotatedDirection;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_RLWheelRotatedDirectionVD;/* '<Root>/B_-1_-1' */
  real_T InBus_get_BCS_info_get_RLWheelSpd;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_RLWheelSpdVD;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_RRWheelRotatedDirection;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_RRWheelRotatedDirectionVD;/* '<Root>/B_-1_-1' */
  real_T InBus_get_BCS_info_get_RRWheelSpd;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_RRWheelSpdVD;/* '<Root>/B_-1_-1' */
  real_T InBus_get_BCS_info_get_ActVehLaltrlAccel;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_ActVehLaltrlAccelVD;/* '<Root>/B_-1_-1' */
  real_T InBus_get_BCS_info_get_ActVehLongAccel;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCS_info_get_ActVehLongAccelVD;/* '<Root>/B_-1_-1' */
  real_T InBus_get_BCS_info_get_VehLaltrlAccelOffset;/* '<Root>/B_-1_-1' */
  real_T InBus_get_BCS_info_get_VehLongAccelOffset;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_VCU_info_get_GearLeverIntv;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_VCU_info_get_VehDrvMod;/* '<Root>/B_-1_-1' */
  Ready_status InBus_get_VCU_info_get_VehRdySt;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_VCU_info_get_VehRng;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_VCU_info_get_ActRecpTorq;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_VCU_info_get_ActRecpTorqSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_VCU_info_get_CrntGearLvl;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_VCU_info_get_CrntGearLvlVD;/* '<Root>/B_-1_-1' */
  real_T InBus_get_VCU_info_get_ACCMaxRecpDecel;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_VCU_info_get_ACCMaxRecpDecelVD;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_VCU_info_get_ActVehWheelTorq;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_VCU_info_get_LateralAssistBtnInfo;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_VCU_info_get_LateralAssistBtnInfoVD;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_VCU_info_get_ACCButtInfo;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_VCU_info_get_AccElecECFail;/* '<Root>/B_-1_-1' */
  real_T InBus_get_VCU_info_get_GasPedalActPst;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_VCU_info_get_GasPedalActPstVD;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_VCU_info_get_VehWheelTorqMax;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_VCU_info_get_BrkPedalSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_VCU_info_get_BrkPedalStVD;/* '<Root>/B_-1_-1' */
  real_T InBus_get_VCU_info_get_GasPedalVirtualPst;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_VCU_info_get_GasPedalVirtualPstVD;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_Checksum1;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_MsgCounter1;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_Checksum10;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_MsgCounter10;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_Checksum11;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_MsgCounter11;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_Checksum12;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_MsgCounter12;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_Checksum13;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_MsgCounter13;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_SCU_info_get_EStopSwSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_SCU_info_get_EStopSwStVD;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_LatAutoCheckReport;/* '<Root>/B_-1_-1' */
  Control_status InBus_get_SCU_info_get_LatCtrlMode;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_LatQuitReport;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_LngAutoCheckIReport;/* '<Root>/B_-1_-1' */
  Control_status InBus_get_SCU_info_get_LngCtrlMode;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_LngQuitReport;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_SCU_info_get_StrngWhlIntv;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_Checksum16;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_MsgCounter16;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_Checksum17;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_MsgCounter17;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_Checksum18;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_MsgCounter18;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_Checksum2;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_MsgCounter2;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_Checksum3;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_MsgCounter3;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_Checksum4;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_MsgCounter4;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_Checksum5;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_MsgCounter5;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_Checksum6;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_MsgCounter6;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_Checksum7;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_MsgCounter7;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_Checksum8;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_MsgCounter8;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_Checksum9;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_SCU_info_get_MsgCounter9;/* '<Root>/B_-1_-1' */
  Error_status InBus_get_EPB_info_get_FailSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_EPB_info_get_SwitchSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_EPB_info_get_SwitchStVD;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_EPB_info_get_SysSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_SRS_info_get_DriverSeatBeltSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_SRS_info_get_PsngrSeatBeltSt;/* '<Root>/B_-1_-1' */
  real_T InBus_get_EPS_info_get_SteeringAngle;/* '<Root>/B_-1_-1' */
  uint32_T InBus_get_EPS_info_get_SteeringAngleSpd;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_EPS_info_get_SteeringAngleSpdVD;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_EPS_info_get_SteeringAngleVD;/* '<Root>/B_-1_-1' */
  real_T InBus_get_EPS_info_get_StrngWhlTorq;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_EPS_info_get_StrngWhlTorqVD;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_EPS_info_get_ThermalSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_EPS_info_get_WarnLamp;/* '<Root>/B_-1_-1' */
  Available_status InBus_get_BCM_info_get_CtrlAvailable;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCM_info_get_DriverDoorAjarSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCM_info_get_FrontFogLampSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCM_info_get_FrontWiperSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCM_info_get_HazardLampSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCM_info_get_HighBeamSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCM_info_get_HornSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCM_info_get_KeySt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCM_info_get_LeftTurnLampFaultSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCM_info_get_LeftTurnLampSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCM_info_get_LowBeamSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCM_info_get_PsngrDoorAjarSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCM_info_get_RLDoorAjarSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCM_info_get_RRDoorAjarSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCM_info_get_RearFogLampSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCM_info_get_RightTurnLampFaultSt;/* '<Root>/B_-1_-1' */
  uint8_T InBus_get_BCM_info_get_RightTurnLampSt;/* '<Root>/B_-1_-1' */
};

/* Real-time Model Data Structure */
struct tag_RTM_AION_request_fail_analysis_T {
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

/* Block states (default storage) */
extern struct DW_AION_request_fail_analysis_T AION_request_fail_analysis_DW;

#ifdef __cplusplus

extern "C" {

#endif

  /* External inputs (root inport signals with default storage) */
  extern struct ExtU_AION_request_fail_analysis_T AION_request_fail_analysis_U;

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void AION_request_fail_analysis_initialize(void);
  extern void AION_request_fail_analysis_step(void);
  extern void AION_request_fail_analysis_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_AION_request_fail_analysis_T *const
    AION_request_fail_analysis_M;

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
 * '<Root>' : 'AION_request_fail_analysis'
 * '<S1>'   : 'AION_request_fail_analysis/Lateral_request_fail_analysis'
 * '<S2>'   : 'AION_request_fail_analysis/Longitudinal_request_fail_analysis'
 */
#endif                            /* RTW_HEADER_AION_request_fail_analysis_h_ */

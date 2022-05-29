/*
 * AION_request_fail_analysis_types.h
 *
 * Code generation for model "AION_request_fail_analysis".
 *
 * Model version              : 1.31
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Thu May 26 14:57:53 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_AION_request_fail_analysis_types_h_
#define RTW_HEADER_AION_request_fail_analysis_types_h_
#include "rtwtypes.h"

/* Model Code Variants */
#ifndef DEFINED_TYPEDEF_FOR_Control_request_
#define DEFINED_TYPEDEF_FOR_Control_request_

typedef enum {
  Manual = 0,                          /* Default value */
  Auto,
  Reserved,
  Reserved1
} Control_request;

#endif

#ifndef DEFINED_TYPEDEF_FOR_AION_Lateral_Control_Info_
#define DEFINED_TYPEDEF_FOR_AION_Lateral_Control_Info_

struct AION_Lateral_Control_Info
{
  Control_request set_LatCtrlReq;
  real_T set_SteerWhlTorqReq;
  real_T set_SteerAngReq;
  real_T set_SteerAngSpdLimt;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_Gear_request_
#define DEFINED_TYPEDEF_FOR_Gear_request_

typedef enum {
  NoRequest = 0,                       /* Default value */
  P,
  R,
  N,
  D,
  Reserved_gear,
  Reserved1_gear,
  Reserved2_gear
} Gear_request;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Validation_status_
#define DEFINED_TYPEDEF_FOR_Validation_status_

typedef enum {
  Invalid = 0,                         /* Default value */
  Valid
} Validation_status;

#endif

#ifndef DEFINED_TYPEDEF_FOR_AION_Longitudinal_Control_Info_
#define DEFINED_TYPEDEF_FOR_AION_Longitudinal_Control_Info_

struct AION_Longitudinal_Control_Info
{
  Control_request set_LngCtrlReq;
  uint32_T set_AutoTrqWhlReq;
  real_T set_BrakeReq;
  Gear_request set_GearLvlReq;
  Validation_status set_GearLvlReqVD;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_Beam_request_
#define DEFINED_TYPEDEF_FOR_Beam_request_

typedef enum {
  NoBeamRequest = 0,                   /* Default value */
  LowBeam,
  HighBeam,
  BeamReserved
} Beam_request;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Enable_request_
#define DEFINED_TYPEDEF_FOR_Enable_request_

typedef enum {
  Disable = 0,                         /* Default value */
  Enable
} Enable_request;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Active_request_
#define DEFINED_TYPEDEF_FOR_Active_request_

typedef enum {
  NotActiveRequest = 0,                /* Default value */
  ActiveRequest
} Active_request;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Light_request_
#define DEFINED_TYPEDEF_FOR_Light_request_

typedef enum {
  NoLightRequest = 0,                  /* Default value */
  TurnLeftLight,
  TurnRightLight,
  EmergencyLight
} Light_request;

#endif

#ifndef DEFINED_TYPEDEF_FOR_ADCU_Info_
#define DEFINED_TYPEDEF_FOR_ADCU_Info_

struct ADCU_Info
{
  uint32_T set_Checksum1;
  uint32_T set_MsgCounter1;
  uint32_T set_Checksum2;
  uint32_T set_MsgCounter2;
  uint32_T set_Checksum3;
  uint32_T set_MsgCounter3;
  Beam_request set_BeamReq;
  Enable_request set_BodyCtrlReq;
  Active_request set_HornRingReq;
  Light_request set_TurnLightReq;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_BCS_Info_
#define DEFINED_TYPEDEF_FOR_BCS_Info_

struct BCS_Info
{
  uint8_T get_ABSActiveSt;
  uint8_T get_ABSFaultSt;
  uint8_T get_VDCActiveSt;
  uint8_T get_VDCFaultSt;
  real_T get_VehSpd;
  uint8_T get_VehSpdVD;
  uint32_T get_FLWheelSpdEdgesSum;
  uint8_T get_FLWheelSpdEdgesSumVD;
  uint32_T get_FRWheelSpdEdgesSum;
  uint8_T get_FRWheelSpdEdgesSumVD;
  uint32_T get_RLWheelSpdEdgesSum;
  uint8_T get_RLWheelSpdEdgesSumVD;
  uint32_T get_RRWheelSpdEdgesSum;
  uint8_T get_RRWheelSpdEdgesSumVD;
  real_T get_YawRate;
  real_T get_YawRateOffset;
  uint8_T get_YawRateSt;
  uint8_T get_HDCCtrlSt;
  uint8_T get_HDCErrSt;
  uint8_T get_AEBActive;
  uint8_T get_AEBAvailable;
  uint8_T get_CDDActive;
  uint8_T get_CDDAvailable;
  uint8_T get_CDDFail;
  real_T get_MasterCylinderPr;
  real_T get_MasterCylinderPrOffset;
  uint8_T get_MasterCylinderPrOffsetVD;
  uint8_T get_MasterCylinderPrVD;
  uint8_T get_NoBrakeForce;
  uint8_T get_VehicleStandStillSt;
  uint8_T get_FLWheelRotatedDirection;
  uint8_T get_FLWheelRotatedDirectionVD;
  real_T get_FLWheelSpd;
  uint8_T get_FLWheelSpdVD;
  uint8_T get_FRWheelRotatedDirection;
  uint8_T get_FRWheelRotatedDirectionVD;
  real_T get_FRWheelSpd;
  uint8_T get_FRWheelSpdVD;
  uint8_T get_RLWheelRotatedDirection;
  uint8_T get_RLWheelRotatedDirectionVD;
  real_T get_RLWheelSpd;
  uint8_T get_RLWheelSpdVD;
  uint8_T get_RRWheelRotatedDirection;
  uint8_T get_RRWheelRotatedDirectionVD;
  real_T get_RRWheelSpd;
  uint8_T get_RRWheelSpdVD;
  real_T get_ActVehLaltrlAccel;
  uint8_T get_ActVehLaltrlAccelVD;
  real_T get_ActVehLongAccel;
  uint8_T get_ActVehLongAccelVD;
  real_T get_VehLaltrlAccelOffset;
  real_T get_VehLongAccelOffset;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_Drive_status_
#define DEFINED_TYPEDEF_FOR_Drive_status_

typedef enum {
  InvalidDriveStatus = 0,              /* Default value */
  EcoPlusModeStatus,
  EcoModeStatus,
  NormalModeStatus,
  DrivingModeStatus,
  SportModeStatus
} Drive_status;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Ready_status_
#define DEFINED_TYPEDEF_FOR_Ready_status_

typedef enum {
  NotReady = 0,                        /* Default value */
  Ready
} Ready_status;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Gear_status_
#define DEFINED_TYPEDEF_FOR_Gear_status_

typedef enum {
  InvalidGearStatus = 0,               /* Default value */
  DriveGearStatus,
  NeutralGearStatus,
  ReverseGearStatus,
  ParkGearStatus
} Gear_status;

#endif

#ifndef DEFINED_TYPEDEF_FOR_VCU_Info_
#define DEFINED_TYPEDEF_FOR_VCU_Info_

struct VCU_Info
{
  uint8_T get_GearLeverIntv;
  Drive_status get_VehDrvMod;
  Ready_status get_VehRdySt;
  uint32_T get_VehRng;
  uint32_T get_ActRecpTorq;
  uint8_T get_ActRecpTorqSt;
  Gear_status get_CrntGearLvl;
  uint8_T get_CrntGearLvlVD;
  real_T get_ACCMaxRecpDecel;
  uint8_T get_ACCMaxRecpDecelVD;
  uint32_T get_ActVehWheelTorq;
  uint8_T get_LateralAssistBtnInfo;
  uint8_T get_LateralAssistBtnInfoVD;
  uint32_T get_ACCButtInfo;
  uint8_T get_AccElecECFail;
  real_T get_GasPedalActPst;
  uint8_T get_GasPedalActPstVD;
  uint32_T get_VehWheelTorqMax;
  uint8_T get_BrkPedalSt;
  uint8_T get_BrkPedalStVD;
  real_T get_GasPedalVirtualPst;
  uint8_T get_GasPedalVirtualPstVD;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_Control_status_
#define DEFINED_TYPEDEF_FOR_Control_status_

typedef enum {
  ManualStatus = 0,                    /* Default value */
  QuitStatus,
  AutoStatus,
  FaultStatus
} Control_status;

#endif

#ifndef DEFINED_TYPEDEF_FOR_SCU_Info_
#define DEFINED_TYPEDEF_FOR_SCU_Info_

struct SCU_Info
{
  uint32_T get_Checksum1;
  uint32_T get_MsgCounter1;
  uint32_T get_Checksum10;
  uint32_T get_MsgCounter10;
  uint32_T get_Checksum11;
  uint32_T get_MsgCounter11;
  uint32_T get_Checksum12;
  uint32_T get_MsgCounter12;
  uint32_T get_Checksum13;
  uint32_T get_MsgCounter13;
  uint8_T get_EStopSwSt;
  uint8_T get_EStopSwStVD;
  uint32_T get_LatAutoCheckReport;
  Control_status get_LatCtrlMode;
  uint32_T get_LatQuitReport;
  uint32_T get_LngAutoCheckIReport;
  Control_status get_LngCtrlMode;
  uint32_T get_LngQuitReport;
  uint8_T get_StrngWhlIntv;
  uint32_T get_Checksum16;
  uint32_T get_MsgCounter16;
  uint32_T get_Checksum17;
  uint32_T get_MsgCounter17;
  uint32_T get_Checksum18;
  uint32_T get_MsgCounter18;
  uint32_T get_Checksum2;
  uint32_T get_MsgCounter2;
  uint32_T get_Checksum3;
  uint32_T get_MsgCounter3;
  uint32_T get_Checksum4;
  uint32_T get_MsgCounter4;
  uint32_T get_Checksum5;
  uint32_T get_MsgCounter5;
  uint32_T get_Checksum6;
  uint32_T get_MsgCounter6;
  uint32_T get_Checksum7;
  uint32_T get_MsgCounter7;
  uint32_T get_Checksum8;
  uint32_T get_MsgCounter8;
  uint32_T get_Checksum9;
  uint32_T get_MsgCounter9;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_Error_status_
#define DEFINED_TYPEDEF_FOR_Error_status_

typedef enum {
  NoError = 0,                         /* Default value */
  Error
} Error_status;

#endif

#ifndef DEFINED_TYPEDEF_FOR_EPB_Info_
#define DEFINED_TYPEDEF_FOR_EPB_Info_

struct EPB_Info
{
  Error_status get_FailSt;
  uint8_T get_SwitchSt;
  uint8_T get_SwitchStVD;
  uint8_T get_SysSt;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_SRS_Info_
#define DEFINED_TYPEDEF_FOR_SRS_Info_

struct SRS_Info
{
  uint8_T get_DriverSeatBeltSt;
  uint8_T get_PsngrSeatBeltSt;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_EPS_Info_
#define DEFINED_TYPEDEF_FOR_EPS_Info_

struct EPS_Info
{
  real_T get_SteeringAngle;
  uint32_T get_SteeringAngleSpd;
  uint8_T get_SteeringAngleSpdVD;
  uint8_T get_SteeringAngleVD;
  real_T get_StrngWhlTorq;
  uint8_T get_StrngWhlTorqVD;
  uint8_T get_ThermalSt;
  uint8_T get_WarnLamp;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_Available_status_
#define DEFINED_TYPEDEF_FOR_Available_status_

typedef enum {
  NotAvailable = 0,                    /* Default value */
  Available
} Available_status;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Active_status_
#define DEFINED_TYPEDEF_FOR_Active_status_

typedef enum {
  NotActiveStatus = 0,                 /* Default value */
  ActiveStatus
} Active_status;

#endif

#ifndef DEFINED_TYPEDEF_FOR_Fault_status_
#define DEFINED_TYPEDEF_FOR_Fault_status_

typedef enum {
  NotFault = 0,                        /* Default value */
  Fault
} Fault_status;

#endif

#ifndef DEFINED_TYPEDEF_FOR_BCM_Info_
#define DEFINED_TYPEDEF_FOR_BCM_Info_

struct BCM_Info
{
  Available_status get_CtrlAvailable;
  uint8_T get_DriverDoorAjarSt;
  uint8_T get_FrontFogLampSt;
  uint8_T get_FrontWiperSt;
  Active_status get_HazardLampSt;
  Active_status get_HighBeamSt;
  Active_status get_HornSt;
  uint8_T get_KeySt;
  Fault_status get_LeftTurnLampFaultSt;
  Active_status get_LeftTurnLampSt;
  Active_status get_LowBeamSt;
  uint8_T get_PsngrDoorAjarSt;
  uint8_T get_RLDoorAjarSt;
  uint8_T get_RRDoorAjarSt;
  uint8_T get_RearFogLampSt;
  Fault_status get_RightTurnLampFaultSt;
  Active_status get_RightTurnLampSt;
};

#endif

#ifndef DEFINED_TYPEDEF_FOR_AION_ApplicationBus_
#define DEFINED_TYPEDEF_FOR_AION_ApplicationBus_

struct AION_ApplicationBus
{
  AION_Lateral_Control_Info set_lateral_control_info;
  AION_Longitudinal_Control_Info set_longitudinal_control_info;
  ADCU_Info set_ADCU_info;
  BCS_Info get_BCS_info;
  VCU_Info get_VCU_info;
  SCU_Info get_SCU_info;
  EPB_Info get_EPB_info;
  SRS_Info get_SRS_info;
  EPS_Info get_EPS_info;
  BCM_Info get_BCM_info;
};

#endif

/* Forward declaration for rtModel */
typedef struct tag_RTM_AION_request_fail_analysis_T
  RT_MODEL_AION_request_fail_analysis_T;

#endif                      /* RTW_HEADER_AION_request_fail_analysis_types_h_ */

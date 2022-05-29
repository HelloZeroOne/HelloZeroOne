/*
 * AION_auto_control_realization.h
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

#ifndef RTW_HEADER_AION_auto_control_realization_h_
#define RTW_HEADER_AION_auto_control_realization_h_
#include <cstring>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "verify/verifyIntrf.h"
#include "AION_auto_control_realization_types.h"

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

/* Block signals (default storage) */
struct B_AION_auto_control_realization_T {
  real_T get_SteeringAngle;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_StrngWhlTorq;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_VehSpd;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_YawRate;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_YawRateOffset;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T set_SteerAngSpdLimt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_MasterCylinderPr;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_MasterCylinderPrOffset;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_FLWheelSpd;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_FRWheelSpd;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_RLWheelSpd;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_RRWheelSpd;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_ActVehLaltrlAccel;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_ActVehLongAccel;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_VehLaltrlAccelOffset;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_VehLongAccelOffset;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_ACCMaxRecpDecel;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_GasPedalActPst;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T get_GasPedalVirtualPst;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  real_T SteerAngReq_out;              /* '<Root>/MATLAB Function1' */
  real_T SteerWhlTorqReq_out;          /* '<Root>/MATLAB Function1' */
  real_T BrakeReq_out;                 /* '<Root>/Acc_and_brake_control' */
  uint32_T set_Checksum1;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_Checksum12;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_MsgCounter12;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_Checksum13;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_MsgCounter13;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_LatAutoCheckReport;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_LatQuitReport;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_LngAutoCheckIReport;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T set_MsgCounter1;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_LngQuitReport;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_Checksum16;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_MsgCounter16;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_Checksum17;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_MsgCounter17;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_Checksum18;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_MsgCounter18;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_Checksum2;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T set_Checksum2;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_MsgCounter2;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_Checksum3;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_MsgCounter3;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_Checksum4;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_MsgCounter4;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_Checksum5;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_MsgCounter5;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_Checksum6;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_MsgCounter6;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_Checksum7;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T set_MsgCounter2;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_MsgCounter7;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_Checksum8;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_MsgCounter8;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_Checksum9;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_MsgCounter9;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T set_Checksum3;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_SteeringAngleSpd;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T set_MsgCounter3;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_FLWheelSpdEdgesSum;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_FRWheelSpdEdgesSum;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_RLWheelSpdEdgesSum;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_RRWheelSpdEdgesSum;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_VehRng;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_ActRecpTorq;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_ActVehWheelTorq;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_ACCButtInfo;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_VehWheelTorqMax;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_Checksum1;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_MsgCounter1;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_Checksum10;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_MsgCounter10;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_Checksum11;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T get_MsgCounter11;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint32_T AutoTrqWhlReq_out;          /* '<Root>/Acc_and_brake_control' */
  Validation_status GearLvlReqVD_out;  /* '<Root>/MATLAB Function' */
  Ready_status get_VehRdySt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  Light_request turn_light_req;        /* '<Root>/MATLAB Function2' */
  Fault_status get_LeftTurnLampFaultSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  Fault_status get_RightTurnLampFaultSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  Error_status get_FailSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  Enable_request set_BodyCtrlReq;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  Control_status get_LatCtrlMode;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  Control_status get_LngCtrlMode;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  Control_request set_LatCtrlReq;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  Control_request set_LngCtrlReq;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  Beam_request beam_req;               /* '<Root>/MATLAB Function2' */
  Available_status get_CtrlAvailable;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  Active_request horn_ring_req;        /* '<Root>/MATLAB Function2' */
  AION_gear GearLvlReq_out;            /* '<Root>/MATLAB Function' */
  uint8_T get_EStopSwSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_EStopSwStVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_StrngWhlIntv;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_SwitchSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_SwitchStVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_SysSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_DriverSeatBeltSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_PsngrSeatBeltSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_SteeringAngleSpdVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_SteeringAngleVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_StrngWhlTorqVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_ThermalSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_WarnLamp;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_DriverDoorAjarSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_FrontFogLampSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_FrontWiperSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_HazardLampSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_HighBeamSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_HornSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_KeySt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_LeftTurnLampSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_LowBeamSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_PsngrDoorAjarSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_RLDoorAjarSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_RRDoorAjarSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_RearFogLampSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_RightTurnLampSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_ABSActiveSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_ABSFaultSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_VDCActiveSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_VDCFaultSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_VehSpdVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_FLWheelSpdEdgesSumVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_FRWheelSpdEdgesSumVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_RLWheelSpdEdgesSumVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_RRWheelSpdEdgesSumVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_YawRateSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_HDCCtrlSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_HDCErrSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_AEBActive;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_AEBAvailable;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_CDDActive;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_CDDAvailable;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_CDDFail;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_MasterCylinderPrOffsetVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_MasterCylinderPrVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_NoBrakeForce;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_VehicleStandStillSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_FLWheelRotatedDirection;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_FLWheelRotatedDirectionVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_FLWheelSpdVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_FRWheelRotatedDirection;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_FRWheelRotatedDirectionVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_FRWheelSpdVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_RLWheelRotatedDirection;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_RLWheelRotatedDirectionVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_RLWheelSpdVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_RRWheelRotatedDirection;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_RRWheelRotatedDirectionVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_RRWheelSpdVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_ActVehLaltrlAccelVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_ActVehLongAccelVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_GearLeverIntv;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_VehDrvMod;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_ActRecpTorqSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_CrntGearLvl;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_CrntGearLvlVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_ACCMaxRecpDecelVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_LateralAssistBtnInfo;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_LateralAssistBtnInfoVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_AccElecECFail;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_GasPedalActPstVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_BrkPedalSt;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_BrkPedalStVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
  uint8_T get_GasPedalVirtualPstVD;
           /* '<Root>/BusConversion_InsertedFor_OutBus_Outport_1_at_inport_0' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_AION_auto_control_realization_T {
  real_T EmergencyLightCount;          /* '<Root>/MATLAB Function2' */
  real_T SteerWhlTorqReq_temp;         /* '<Root>/MATLAB Function1' */
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<Root>/Scope' */
};

/* External inputs (root inport signals with default storage) */
struct ExtU_AION_auto_control_realization_T {
  Control_request AutoTrqWhlReq_in_set_lateral_control_info_set_LatCtrlReq;/* '<Root>/B_-1_-1' */
  real_T AutoTrqWhlReq_in_set_lateral_control_info_set_SteerWhlTorqReq;/* '<Root>/B_-1_-1' */
  real_T AutoTrqWhlReq_in_set_lateral_control_info_set_SteerAngReq;/* '<Root>/B_-1_-1' */
  real_T AutoTrqWhlReq_in_set_lateral_control_info_set_SteerAngSpdLimt;/* '<Root>/B_-1_-1' */
  Control_request AutoTrqWhlReq_in_set_longitudinal_control_info_set_LngCtrlReq;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_set_longitudinal_control_info_set_AutoTrqWhlReq;/* '<Root>/B_-1_-1' */
  real_T AutoTrqWhlReq_in_set_longitudinal_control_info_set_BrakeReq;/* '<Root>/B_-1_-1' */
  AION_gear AutoTrqWhlReq_in_set_longitudinal_control_info_set_GearLvlReq;/* '<Root>/B_-1_-1' */
  Validation_status
    AutoTrqWhlReq_in_set_longitudinal_control_info_set_GearLvlReqVD;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_set_ADCU_info_set_Checksum1;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_set_ADCU_info_set_MsgCounter1;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_set_ADCU_info_set_Checksum2;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_set_ADCU_info_set_MsgCounter2;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_set_ADCU_info_set_Checksum3;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_set_ADCU_info_set_MsgCounter3;/* '<Root>/B_-1_-1' */
  Beam_request AutoTrqWhlReq_in_set_ADCU_info_set_BeamReq;/* '<Root>/B_-1_-1' */
  Enable_request AutoTrqWhlReq_in_set_ADCU_info_set_BodyCtrlReq;/* '<Root>/B_-1_-1' */
  Active_request AutoTrqWhlReq_in_set_ADCU_info_set_HornRingReq;/* '<Root>/B_-1_-1' */
  Light_request AutoTrqWhlReq_in_set_ADCU_info_set_TurnLightReq;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_ABSActiveSt;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_ABSFaultSt;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_VDCActiveSt;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_VDCFaultSt;/* '<Root>/B_-1_-1' */
  real_T AutoTrqWhlReq_in_get_BCS_info_get_VehSpd;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_VehSpdVD;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_BCS_info_get_FLWheelSpdEdgesSum;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_FLWheelSpdEdgesSumVD;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_BCS_info_get_FRWheelSpdEdgesSum;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_FRWheelSpdEdgesSumVD;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_BCS_info_get_RLWheelSpdEdgesSum;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_RLWheelSpdEdgesSumVD;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_BCS_info_get_RRWheelSpdEdgesSum;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_RRWheelSpdEdgesSumVD;/* '<Root>/B_-1_-1' */
  real_T AutoTrqWhlReq_in_get_BCS_info_get_YawRate;/* '<Root>/B_-1_-1' */
  real_T AutoTrqWhlReq_in_get_BCS_info_get_YawRateOffset;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_YawRateSt;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_HDCCtrlSt;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_HDCErrSt;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_AEBActive;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_AEBAvailable;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_CDDActive;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_CDDAvailable;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_CDDFail;/* '<Root>/B_-1_-1' */
  real_T AutoTrqWhlReq_in_get_BCS_info_get_MasterCylinderPr;/* '<Root>/B_-1_-1' */
  real_T AutoTrqWhlReq_in_get_BCS_info_get_MasterCylinderPrOffset;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_MasterCylinderPrOffsetVD;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_MasterCylinderPrVD;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_NoBrakeForce;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_VehicleStandStillSt;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_FLWheelRotatedDirection;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_FLWheelRotatedDirectionVD;/* '<Root>/B_-1_-1' */
  real_T AutoTrqWhlReq_in_get_BCS_info_get_FLWheelSpd;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_FLWheelSpdVD;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_FRWheelRotatedDirection;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_FRWheelRotatedDirectionVD;/* '<Root>/B_-1_-1' */
  real_T AutoTrqWhlReq_in_get_BCS_info_get_FRWheelSpd;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_FRWheelSpdVD;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_RLWheelRotatedDirection;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_RLWheelRotatedDirectionVD;/* '<Root>/B_-1_-1' */
  real_T AutoTrqWhlReq_in_get_BCS_info_get_RLWheelSpd;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_RLWheelSpdVD;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_RRWheelRotatedDirection;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_RRWheelRotatedDirectionVD;/* '<Root>/B_-1_-1' */
  real_T AutoTrqWhlReq_in_get_BCS_info_get_RRWheelSpd;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_RRWheelSpdVD;/* '<Root>/B_-1_-1' */
  real_T AutoTrqWhlReq_in_get_BCS_info_get_ActVehLaltrlAccel;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_ActVehLaltrlAccelVD;/* '<Root>/B_-1_-1' */
  real_T AutoTrqWhlReq_in_get_BCS_info_get_ActVehLongAccel;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCS_info_get_ActVehLongAccelVD;/* '<Root>/B_-1_-1' */
  real_T AutoTrqWhlReq_in_get_BCS_info_get_VehLaltrlAccelOffset;/* '<Root>/B_-1_-1' */
  real_T AutoTrqWhlReq_in_get_BCS_info_get_VehLongAccelOffset;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_VCU_info_get_GearLeverIntv;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_VCU_info_get_VehDrvMod;/* '<Root>/B_-1_-1' */
  Ready_status AutoTrqWhlReq_in_get_VCU_info_get_VehRdySt;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_VCU_info_get_VehRng;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_VCU_info_get_ActRecpTorq;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_VCU_info_get_ActRecpTorqSt;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_VCU_info_get_CrntGearLvl;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_VCU_info_get_CrntGearLvlVD;/* '<Root>/B_-1_-1' */
  real_T AutoTrqWhlReq_in_get_VCU_info_get_ACCMaxRecpDecel;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_VCU_info_get_ACCMaxRecpDecelVD;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_VCU_info_get_ActVehWheelTorq;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_VCU_info_get_LateralAssistBtnInfo;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_VCU_info_get_LateralAssistBtnInfoVD;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_VCU_info_get_ACCButtInfo;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_VCU_info_get_AccElecECFail;/* '<Root>/B_-1_-1' */
  real_T AutoTrqWhlReq_in_get_VCU_info_get_GasPedalActPst;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_VCU_info_get_GasPedalActPstVD;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_VCU_info_get_VehWheelTorqMax;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_VCU_info_get_BrkPedalSt;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_VCU_info_get_BrkPedalStVD;/* '<Root>/B_-1_-1' */
  real_T AutoTrqWhlReq_in_get_VCU_info_get_GasPedalVirtualPst;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_VCU_info_get_GasPedalVirtualPstVD;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_Checksum1;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter1;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_Checksum10;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter10;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_Checksum11;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter11;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_Checksum12;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter12;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_Checksum13;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter13;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_SCU_info_get_EStopSwSt;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_SCU_info_get_EStopSwStVD;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_LatAutoCheckReport;/* '<Root>/B_-1_-1' */
  Control_status AutoTrqWhlReq_in_get_SCU_info_get_LatCtrlMode;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_LatQuitReport;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_LngAutoCheckIReport;/* '<Root>/B_-1_-1' */
  Control_status AutoTrqWhlReq_in_get_SCU_info_get_LngCtrlMode;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_LngQuitReport;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_SCU_info_get_StrngWhlIntv;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_Checksum16;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter16;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_Checksum17;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter17;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_Checksum18;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter18;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_Checksum2;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter2;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_Checksum3;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter3;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_Checksum4;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter4;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_Checksum5;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter5;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_Checksum6;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter6;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_Checksum7;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter7;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_Checksum8;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter8;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_Checksum9;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_SCU_info_get_MsgCounter9;/* '<Root>/B_-1_-1' */
  Error_status AutoTrqWhlReq_in_get_EPB_info_get_FailSt;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_EPB_info_get_SwitchSt;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_EPB_info_get_SwitchStVD;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_EPB_info_get_SysSt;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_SRS_info_get_DriverSeatBeltSt;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_SRS_info_get_PsngrSeatBeltSt;/* '<Root>/B_-1_-1' */
  real_T AutoTrqWhlReq_in_get_EPS_info_get_SteeringAngle;/* '<Root>/B_-1_-1' */
  uint32_T AutoTrqWhlReq_in_get_EPS_info_get_SteeringAngleSpd;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_EPS_info_get_SteeringAngleSpdVD;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_EPS_info_get_SteeringAngleVD;/* '<Root>/B_-1_-1' */
  real_T AutoTrqWhlReq_in_get_EPS_info_get_StrngWhlTorq;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_EPS_info_get_StrngWhlTorqVD;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_EPS_info_get_ThermalSt;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_EPS_info_get_WarnLamp;/* '<Root>/B_-1_-1' */
  Available_status AutoTrqWhlReq_in_get_BCM_info_get_CtrlAvailable;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCM_info_get_DriverDoorAjarSt;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCM_info_get_FrontFogLampSt;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCM_info_get_FrontWiperSt;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCM_info_get_HazardLampSt;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCM_info_get_HighBeamSt;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCM_info_get_HornSt;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCM_info_get_KeySt;/* '<Root>/B_-1_-1' */
  Fault_status AutoTrqWhlReq_in_get_BCM_info_get_LeftTurnLampFaultSt;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCM_info_get_LeftTurnLampSt;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCM_info_get_LowBeamSt;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCM_info_get_PsngrDoorAjarSt;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCM_info_get_RLDoorAjarSt;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCM_info_get_RRDoorAjarSt;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCM_info_get_RearFogLampSt;/* '<Root>/B_-1_-1' */
  Fault_status AutoTrqWhlReq_in_get_BCM_info_get_RightTurnLampFaultSt;/* '<Root>/B_-1_-1' */
  uint8_T AutoTrqWhlReq_in_get_BCM_info_get_RightTurnLampSt;/* '<Root>/B_-1_-1' */
};

/* External outputs (root outports fed by signals with default storage) */
struct ExtY_AION_auto_control_realization_T {
  Control_request OutBus_set_lateral_control_info_set_LatCtrlReq;
                   /* '<Root>/OutBus_set_lateral_control_info_set_LatCtrlReq' */
  real_T OutBus_set_lateral_control_info_set_SteerWhlTorqReq;
              /* '<Root>/OutBus_set_lateral_control_info_set_SteerWhlTorqReq' */
  real_T OutBus_set_lateral_control_info_set_SteerAngReq;
                  /* '<Root>/OutBus_set_lateral_control_info_set_SteerAngReq' */
  real_T OutBus_set_lateral_control_info_set_SteerAngSpdLimt;
              /* '<Root>/OutBus_set_lateral_control_info_set_SteerAngSpdLimt' */
  Control_request OutBus_set_longitudinal_control_info_set_LngCtrlReq;
              /* '<Root>/OutBus_set_longitudinal_control_info_set_LngCtrlReq' */
  uint32_T OutBus_set_longitudinal_control_info_set_AutoTrqWhlReq;
           /* '<Root>/OutBus_set_longitudinal_control_info_set_AutoTrqWhlReq' */
  real_T OutBus_set_longitudinal_control_info_set_BrakeReq;
                /* '<Root>/OutBus_set_longitudinal_control_info_set_BrakeReq' */
  AION_gear OutBus_set_longitudinal_control_info_set_GearLvlReq;
              /* '<Root>/OutBus_set_longitudinal_control_info_set_GearLvlReq' */
  Validation_status OutBus_set_longitudinal_control_info_set_GearLvlReqVD;
            /* '<Root>/OutBus_set_longitudinal_control_info_set_GearLvlReqVD' */
  uint32_T OutBus_set_ADCU_info_set_Checksum1;
                               /* '<Root>/OutBus_set_ADCU_info_set_Checksum1' */
  uint32_T OutBus_set_ADCU_info_set_MsgCounter1;
                             /* '<Root>/OutBus_set_ADCU_info_set_MsgCounter1' */
  uint32_T OutBus_set_ADCU_info_set_Checksum2;
                               /* '<Root>/OutBus_set_ADCU_info_set_Checksum2' */
  uint32_T OutBus_set_ADCU_info_set_MsgCounter2;
                             /* '<Root>/OutBus_set_ADCU_info_set_MsgCounter2' */
  uint32_T OutBus_set_ADCU_info_set_Checksum3;
                               /* '<Root>/OutBus_set_ADCU_info_set_Checksum3' */
  uint32_T OutBus_set_ADCU_info_set_MsgCounter3;
                             /* '<Root>/OutBus_set_ADCU_info_set_MsgCounter3' */
  Beam_request OutBus_set_ADCU_info_set_BeamReq;
                                 /* '<Root>/OutBus_set_ADCU_info_set_BeamReq' */
  Enable_request OutBus_set_ADCU_info_set_BodyCtrlReq;
                             /* '<Root>/OutBus_set_ADCU_info_set_BodyCtrlReq' */
  Active_request OutBus_set_ADCU_info_set_HornRingReq;
                             /* '<Root>/OutBus_set_ADCU_info_set_HornRingReq' */
  Light_request OutBus_set_ADCU_info_set_TurnLightReq;
                            /* '<Root>/OutBus_set_ADCU_info_set_TurnLightReq' */
  uint8_T OutBus_get_BCS_info_get_ABSActiveSt;
                              /* '<Root>/OutBus_get_BCS_info_get_ABSActiveSt' */
  uint8_T OutBus_get_BCS_info_get_ABSFaultSt;
                               /* '<Root>/OutBus_get_BCS_info_get_ABSFaultSt' */
  uint8_T OutBus_get_BCS_info_get_VDCActiveSt;
                              /* '<Root>/OutBus_get_BCS_info_get_VDCActiveSt' */
  uint8_T OutBus_get_BCS_info_get_VDCFaultSt;
                               /* '<Root>/OutBus_get_BCS_info_get_VDCFaultSt' */
  real_T OutBus_get_BCS_info_get_VehSpd;
                                   /* '<Root>/OutBus_get_BCS_info_get_VehSpd' */
  uint8_T OutBus_get_BCS_info_get_VehSpdVD;
                                 /* '<Root>/OutBus_get_BCS_info_get_VehSpdVD' */
  uint32_T OutBus_get_BCS_info_get_FLWheelSpdEdgesSum;
                       /* '<Root>/OutBus_get_BCS_info_get_FLWheelSpdEdgesSum' */
  uint8_T OutBus_get_BCS_info_get_FLWheelSpdEdgesSumVD;
                     /* '<Root>/OutBus_get_BCS_info_get_FLWheelSpdEdgesSumVD' */
  uint32_T OutBus_get_BCS_info_get_FRWheelSpdEdgesSum;
                       /* '<Root>/OutBus_get_BCS_info_get_FRWheelSpdEdgesSum' */
  uint8_T OutBus_get_BCS_info_get_FRWheelSpdEdgesSumVD;
                     /* '<Root>/OutBus_get_BCS_info_get_FRWheelSpdEdgesSumVD' */
  uint32_T OutBus_get_BCS_info_get_RLWheelSpdEdgesSum;
                       /* '<Root>/OutBus_get_BCS_info_get_RLWheelSpdEdgesSum' */
  uint8_T OutBus_get_BCS_info_get_RLWheelSpdEdgesSumVD;
                     /* '<Root>/OutBus_get_BCS_info_get_RLWheelSpdEdgesSumVD' */
  uint32_T OutBus_get_BCS_info_get_RRWheelSpdEdgesSum;
                       /* '<Root>/OutBus_get_BCS_info_get_RRWheelSpdEdgesSum' */
  uint8_T OutBus_get_BCS_info_get_RRWheelSpdEdgesSumVD;
                     /* '<Root>/OutBus_get_BCS_info_get_RRWheelSpdEdgesSumVD' */
  real_T OutBus_get_BCS_info_get_YawRate;
                                  /* '<Root>/OutBus_get_BCS_info_get_YawRate' */
  real_T OutBus_get_BCS_info_get_YawRateOffset;
                            /* '<Root>/OutBus_get_BCS_info_get_YawRateOffset' */
  uint8_T OutBus_get_BCS_info_get_YawRateSt;
                                /* '<Root>/OutBus_get_BCS_info_get_YawRateSt' */
  uint8_T OutBus_get_BCS_info_get_HDCCtrlSt;
                                /* '<Root>/OutBus_get_BCS_info_get_HDCCtrlSt' */
  uint8_T OutBus_get_BCS_info_get_HDCErrSt;
                                 /* '<Root>/OutBus_get_BCS_info_get_HDCErrSt' */
  uint8_T OutBus_get_BCS_info_get_AEBActive;
                                /* '<Root>/OutBus_get_BCS_info_get_AEBActive' */
  uint8_T OutBus_get_BCS_info_get_AEBAvailable;
                             /* '<Root>/OutBus_get_BCS_info_get_AEBAvailable' */
  uint8_T OutBus_get_BCS_info_get_CDDActive;
                                /* '<Root>/OutBus_get_BCS_info_get_CDDActive' */
  uint8_T OutBus_get_BCS_info_get_CDDAvailable;
                             /* '<Root>/OutBus_get_BCS_info_get_CDDAvailable' */
  uint8_T OutBus_get_BCS_info_get_CDDFail;
                                  /* '<Root>/OutBus_get_BCS_info_get_CDDFail' */
  real_T OutBus_get_BCS_info_get_MasterCylinderPr;
                         /* '<Root>/OutBus_get_BCS_info_get_MasterCylinderPr' */
  real_T OutBus_get_BCS_info_get_MasterCylinderPrOffset;
                   /* '<Root>/OutBus_get_BCS_info_get_MasterCylinderPrOffset' */
  uint8_T OutBus_get_BCS_info_get_MasterCylinderPrOffsetVD;
                 /* '<Root>/OutBus_get_BCS_info_get_MasterCylinderPrOffsetVD' */
  uint8_T OutBus_get_BCS_info_get_MasterCylinderPrVD;
                       /* '<Root>/OutBus_get_BCS_info_get_MasterCylinderPrVD' */
  uint8_T OutBus_get_BCS_info_get_NoBrakeForce;
                             /* '<Root>/OutBus_get_BCS_info_get_NoBrakeForce' */
  uint8_T OutBus_get_BCS_info_get_VehicleStandStillSt;
                      /* '<Root>/OutBus_get_BCS_info_get_VehicleStandStillSt' */
  uint8_T OutBus_get_BCS_info_get_FLWheelRotatedDirection;
                  /* '<Root>/OutBus_get_BCS_info_get_FLWheelRotatedDirection' */
  uint8_T OutBus_get_BCS_info_get_FLWheelRotatedDirectionVD;
                /* '<Root>/OutBus_get_BCS_info_get_FLWheelRotatedDirectionVD' */
  real_T OutBus_get_BCS_info_get_FLWheelSpd;
                               /* '<Root>/OutBus_get_BCS_info_get_FLWheelSpd' */
  uint8_T OutBus_get_BCS_info_get_FLWheelSpdVD;
                             /* '<Root>/OutBus_get_BCS_info_get_FLWheelSpdVD' */
  uint8_T OutBus_get_BCS_info_get_FRWheelRotatedDirection;
                  /* '<Root>/OutBus_get_BCS_info_get_FRWheelRotatedDirection' */
  uint8_T OutBus_get_BCS_info_get_FRWheelRotatedDirectionVD;
                /* '<Root>/OutBus_get_BCS_info_get_FRWheelRotatedDirectionVD' */
  real_T OutBus_get_BCS_info_get_FRWheelSpd;
                               /* '<Root>/OutBus_get_BCS_info_get_FRWheelSpd' */
  uint8_T OutBus_get_BCS_info_get_FRWheelSpdVD;
                             /* '<Root>/OutBus_get_BCS_info_get_FRWheelSpdVD' */
  uint8_T OutBus_get_BCS_info_get_RLWheelRotatedDirection;
                  /* '<Root>/OutBus_get_BCS_info_get_RLWheelRotatedDirection' */
  uint8_T OutBus_get_BCS_info_get_RLWheelRotatedDirectionVD;
                /* '<Root>/OutBus_get_BCS_info_get_RLWheelRotatedDirectionVD' */
  real_T OutBus_get_BCS_info_get_RLWheelSpd;
                               /* '<Root>/OutBus_get_BCS_info_get_RLWheelSpd' */
  uint8_T OutBus_get_BCS_info_get_RLWheelSpdVD;
                             /* '<Root>/OutBus_get_BCS_info_get_RLWheelSpdVD' */
  uint8_T OutBus_get_BCS_info_get_RRWheelRotatedDirection;
                  /* '<Root>/OutBus_get_BCS_info_get_RRWheelRotatedDirection' */
  uint8_T OutBus_get_BCS_info_get_RRWheelRotatedDirectionVD;
                /* '<Root>/OutBus_get_BCS_info_get_RRWheelRotatedDirectionVD' */
  real_T OutBus_get_BCS_info_get_RRWheelSpd;
                               /* '<Root>/OutBus_get_BCS_info_get_RRWheelSpd' */
  uint8_T OutBus_get_BCS_info_get_RRWheelSpdVD;
                             /* '<Root>/OutBus_get_BCS_info_get_RRWheelSpdVD' */
  real_T OutBus_get_BCS_info_get_ActVehLaltrlAccel;
                        /* '<Root>/OutBus_get_BCS_info_get_ActVehLaltrlAccel' */
  uint8_T OutBus_get_BCS_info_get_ActVehLaltrlAccelVD;
                      /* '<Root>/OutBus_get_BCS_info_get_ActVehLaltrlAccelVD' */
  real_T OutBus_get_BCS_info_get_ActVehLongAccel;
                          /* '<Root>/OutBus_get_BCS_info_get_ActVehLongAccel' */
  uint8_T OutBus_get_BCS_info_get_ActVehLongAccelVD;
                        /* '<Root>/OutBus_get_BCS_info_get_ActVehLongAccelVD' */
  real_T OutBus_get_BCS_info_get_VehLaltrlAccelOffset;
                     /* '<Root>/OutBus_get_BCS_info_get_VehLaltrlAccelOffset' */
  real_T OutBus_get_BCS_info_get_VehLongAccelOffset;
                       /* '<Root>/OutBus_get_BCS_info_get_VehLongAccelOffset' */
  uint8_T OutBus_get_VCU_info_get_GearLeverIntv;
                            /* '<Root>/OutBus_get_VCU_info_get_GearLeverIntv' */
  uint8_T OutBus_get_VCU_info_get_VehDrvMod;
                                /* '<Root>/OutBus_get_VCU_info_get_VehDrvMod' */
  Ready_status OutBus_get_VCU_info_get_VehRdySt;
                                 /* '<Root>/OutBus_get_VCU_info_get_VehRdySt' */
  uint32_T OutBus_get_VCU_info_get_VehRng;
                                   /* '<Root>/OutBus_get_VCU_info_get_VehRng' */
  uint32_T OutBus_get_VCU_info_get_ActRecpTorq;
                              /* '<Root>/OutBus_get_VCU_info_get_ActRecpTorq' */
  uint8_T OutBus_get_VCU_info_get_ActRecpTorqSt;
                            /* '<Root>/OutBus_get_VCU_info_get_ActRecpTorqSt' */
  uint8_T OutBus_get_VCU_info_get_CrntGearLvl;
                              /* '<Root>/OutBus_get_VCU_info_get_CrntGearLvl' */
  uint8_T OutBus_get_VCU_info_get_CrntGearLvlVD;
                            /* '<Root>/OutBus_get_VCU_info_get_CrntGearLvlVD' */
  real_T OutBus_get_VCU_info_get_ACCMaxRecpDecel;
                          /* '<Root>/OutBus_get_VCU_info_get_ACCMaxRecpDecel' */
  uint8_T OutBus_get_VCU_info_get_ACCMaxRecpDecelVD;
                        /* '<Root>/OutBus_get_VCU_info_get_ACCMaxRecpDecelVD' */
  uint32_T OutBus_get_VCU_info_get_ActVehWheelTorq;
                          /* '<Root>/OutBus_get_VCU_info_get_ActVehWheelTorq' */
  uint8_T OutBus_get_VCU_info_get_LateralAssistBtnInfo;
                     /* '<Root>/OutBus_get_VCU_info_get_LateralAssistBtnInfo' */
  uint8_T OutBus_get_VCU_info_get_LateralAssistBtnInfoVD;
                   /* '<Root>/OutBus_get_VCU_info_get_LateralAssistBtnInfoVD' */
  uint32_T OutBus_get_VCU_info_get_ACCButtInfo;
                              /* '<Root>/OutBus_get_VCU_info_get_ACCButtInfo' */
  uint8_T OutBus_get_VCU_info_get_AccElecECFail;
                            /* '<Root>/OutBus_get_VCU_info_get_AccElecECFail' */
  real_T OutBus_get_VCU_info_get_GasPedalActPst;
                           /* '<Root>/OutBus_get_VCU_info_get_GasPedalActPst' */
  uint8_T OutBus_get_VCU_info_get_GasPedalActPstVD;
                         /* '<Root>/OutBus_get_VCU_info_get_GasPedalActPstVD' */
  uint32_T OutBus_get_VCU_info_get_VehWheelTorqMax;
                          /* '<Root>/OutBus_get_VCU_info_get_VehWheelTorqMax' */
  uint8_T OutBus_get_VCU_info_get_BrkPedalSt;
                               /* '<Root>/OutBus_get_VCU_info_get_BrkPedalSt' */
  uint8_T OutBus_get_VCU_info_get_BrkPedalStVD;
                             /* '<Root>/OutBus_get_VCU_info_get_BrkPedalStVD' */
  real_T OutBus_get_VCU_info_get_GasPedalVirtualPst;
                       /* '<Root>/OutBus_get_VCU_info_get_GasPedalVirtualPst' */
  uint8_T OutBus_get_VCU_info_get_GasPedalVirtualPstVD;
                     /* '<Root>/OutBus_get_VCU_info_get_GasPedalVirtualPstVD' */
  uint32_T OutBus_get_SCU_info_get_Checksum1;
                                /* '<Root>/OutBus_get_SCU_info_get_Checksum1' */
  uint32_T OutBus_get_SCU_info_get_MsgCounter1;
                              /* '<Root>/OutBus_get_SCU_info_get_MsgCounter1' */
  uint32_T OutBus_get_SCU_info_get_Checksum10;
                               /* '<Root>/OutBus_get_SCU_info_get_Checksum10' */
  uint32_T OutBus_get_SCU_info_get_MsgCounter10;
                             /* '<Root>/OutBus_get_SCU_info_get_MsgCounter10' */
  uint32_T OutBus_get_SCU_info_get_Checksum11;
                               /* '<Root>/OutBus_get_SCU_info_get_Checksum11' */
  uint32_T OutBus_get_SCU_info_get_MsgCounter11;
                             /* '<Root>/OutBus_get_SCU_info_get_MsgCounter11' */
  uint32_T OutBus_get_SCU_info_get_Checksum12;
                               /* '<Root>/OutBus_get_SCU_info_get_Checksum12' */
  uint32_T OutBus_get_SCU_info_get_MsgCounter12;
                             /* '<Root>/OutBus_get_SCU_info_get_MsgCounter12' */
  uint32_T OutBus_get_SCU_info_get_Checksum13;
                               /* '<Root>/OutBus_get_SCU_info_get_Checksum13' */
  uint32_T OutBus_get_SCU_info_get_MsgCounter13;
                             /* '<Root>/OutBus_get_SCU_info_get_MsgCounter13' */
  uint8_T OutBus_get_SCU_info_get_EStopSwSt;
                                /* '<Root>/OutBus_get_SCU_info_get_EStopSwSt' */
  uint8_T OutBus_get_SCU_info_get_EStopSwStVD;
                              /* '<Root>/OutBus_get_SCU_info_get_EStopSwStVD' */
  uint32_T OutBus_get_SCU_info_get_LatAutoCheckReport;
                       /* '<Root>/OutBus_get_SCU_info_get_LatAutoCheckReport' */
  Control_status OutBus_get_SCU_info_get_LatCtrlMode;
                              /* '<Root>/OutBus_get_SCU_info_get_LatCtrlMode' */
  uint32_T OutBus_get_SCU_info_get_LatQuitReport;
                            /* '<Root>/OutBus_get_SCU_info_get_LatQuitReport' */
  uint32_T OutBus_get_SCU_info_get_LngAutoCheckIReport;
                      /* '<Root>/OutBus_get_SCU_info_get_LngAutoCheckIReport' */
  Control_status OutBus_get_SCU_info_get_LngCtrlMode;
                              /* '<Root>/OutBus_get_SCU_info_get_LngCtrlMode' */
  uint32_T OutBus_get_SCU_info_get_LngQuitReport;
                            /* '<Root>/OutBus_get_SCU_info_get_LngQuitReport' */
  uint8_T OutBus_get_SCU_info_get_StrngWhlIntv;
                             /* '<Root>/OutBus_get_SCU_info_get_StrngWhlIntv' */
  uint32_T OutBus_get_SCU_info_get_Checksum16;
                               /* '<Root>/OutBus_get_SCU_info_get_Checksum16' */
  uint32_T OutBus_get_SCU_info_get_MsgCounter16;
                             /* '<Root>/OutBus_get_SCU_info_get_MsgCounter16' */
  uint32_T OutBus_get_SCU_info_get_Checksum17;
                               /* '<Root>/OutBus_get_SCU_info_get_Checksum17' */
  uint32_T OutBus_get_SCU_info_get_MsgCounter17;
                             /* '<Root>/OutBus_get_SCU_info_get_MsgCounter17' */
  uint32_T OutBus_get_SCU_info_get_Checksum18;
                               /* '<Root>/OutBus_get_SCU_info_get_Checksum18' */
  uint32_T OutBus_get_SCU_info_get_MsgCounter18;
                             /* '<Root>/OutBus_get_SCU_info_get_MsgCounter18' */
  uint32_T OutBus_get_SCU_info_get_Checksum2;
                                /* '<Root>/OutBus_get_SCU_info_get_Checksum2' */
  uint32_T OutBus_get_SCU_info_get_MsgCounter2;
                              /* '<Root>/OutBus_get_SCU_info_get_MsgCounter2' */
  uint32_T OutBus_get_SCU_info_get_Checksum3;
                                /* '<Root>/OutBus_get_SCU_info_get_Checksum3' */
  uint32_T OutBus_get_SCU_info_get_MsgCounter3;
                              /* '<Root>/OutBus_get_SCU_info_get_MsgCounter3' */
  uint32_T OutBus_get_SCU_info_get_Checksum4;
                                /* '<Root>/OutBus_get_SCU_info_get_Checksum4' */
  uint32_T OutBus_get_SCU_info_get_MsgCounter4;
                              /* '<Root>/OutBus_get_SCU_info_get_MsgCounter4' */
  uint32_T OutBus_get_SCU_info_get_Checksum5;
                                /* '<Root>/OutBus_get_SCU_info_get_Checksum5' */
  uint32_T OutBus_get_SCU_info_get_MsgCounter5;
                              /* '<Root>/OutBus_get_SCU_info_get_MsgCounter5' */
  uint32_T OutBus_get_SCU_info_get_Checksum6;
                                /* '<Root>/OutBus_get_SCU_info_get_Checksum6' */
  uint32_T OutBus_get_SCU_info_get_MsgCounter6;
                              /* '<Root>/OutBus_get_SCU_info_get_MsgCounter6' */
  uint32_T OutBus_get_SCU_info_get_Checksum7;
                                /* '<Root>/OutBus_get_SCU_info_get_Checksum7' */
  uint32_T OutBus_get_SCU_info_get_MsgCounter7;
                              /* '<Root>/OutBus_get_SCU_info_get_MsgCounter7' */
  uint32_T OutBus_get_SCU_info_get_Checksum8;
                                /* '<Root>/OutBus_get_SCU_info_get_Checksum8' */
  uint32_T OutBus_get_SCU_info_get_MsgCounter8;
                              /* '<Root>/OutBus_get_SCU_info_get_MsgCounter8' */
  uint32_T OutBus_get_SCU_info_get_Checksum9;
                                /* '<Root>/OutBus_get_SCU_info_get_Checksum9' */
  uint32_T OutBus_get_SCU_info_get_MsgCounter9;
                              /* '<Root>/OutBus_get_SCU_info_get_MsgCounter9' */
  Error_status OutBus_get_EPB_info_get_FailSt;
                                   /* '<Root>/OutBus_get_EPB_info_get_FailSt' */
  uint8_T OutBus_get_EPB_info_get_SwitchSt;
                                 /* '<Root>/OutBus_get_EPB_info_get_SwitchSt' */
  uint8_T OutBus_get_EPB_info_get_SwitchStVD;
                               /* '<Root>/OutBus_get_EPB_info_get_SwitchStVD' */
  uint8_T OutBus_get_EPB_info_get_SysSt;
                                    /* '<Root>/OutBus_get_EPB_info_get_SysSt' */
  uint8_T OutBus_get_SRS_info_get_DriverSeatBeltSt;
                         /* '<Root>/OutBus_get_SRS_info_get_DriverSeatBeltSt' */
  uint8_T OutBus_get_SRS_info_get_PsngrSeatBeltSt;
                          /* '<Root>/OutBus_get_SRS_info_get_PsngrSeatBeltSt' */
  real_T OutBus_get_EPS_info_get_SteeringAngle;
                            /* '<Root>/OutBus_get_EPS_info_get_SteeringAngle' */
  uint32_T OutBus_get_EPS_info_get_SteeringAngleSpd;
                         /* '<Root>/OutBus_get_EPS_info_get_SteeringAngleSpd' */
  uint8_T OutBus_get_EPS_info_get_SteeringAngleSpdVD;
                       /* '<Root>/OutBus_get_EPS_info_get_SteeringAngleSpdVD' */
  uint8_T OutBus_get_EPS_info_get_SteeringAngleVD;
                          /* '<Root>/OutBus_get_EPS_info_get_SteeringAngleVD' */
  real_T OutBus_get_EPS_info_get_StrngWhlTorq;
                             /* '<Root>/OutBus_get_EPS_info_get_StrngWhlTorq' */
  uint8_T OutBus_get_EPS_info_get_StrngWhlTorqVD;
                           /* '<Root>/OutBus_get_EPS_info_get_StrngWhlTorqVD' */
  uint8_T OutBus_get_EPS_info_get_ThermalSt;
                                /* '<Root>/OutBus_get_EPS_info_get_ThermalSt' */
  uint8_T OutBus_get_EPS_info_get_WarnLamp;
                                 /* '<Root>/OutBus_get_EPS_info_get_WarnLamp' */
  Available_status OutBus_get_BCM_info_get_CtrlAvailable;
                            /* '<Root>/OutBus_get_BCM_info_get_CtrlAvailable' */
  uint8_T OutBus_get_BCM_info_get_DriverDoorAjarSt;
                         /* '<Root>/OutBus_get_BCM_info_get_DriverDoorAjarSt' */
  uint8_T OutBus_get_BCM_info_get_FrontFogLampSt;
                           /* '<Root>/OutBus_get_BCM_info_get_FrontFogLampSt' */
  uint8_T OutBus_get_BCM_info_get_FrontWiperSt;
                             /* '<Root>/OutBus_get_BCM_info_get_FrontWiperSt' */
  uint8_T OutBus_get_BCM_info_get_HazardLampSt;
                             /* '<Root>/OutBus_get_BCM_info_get_HazardLampSt' */
  uint8_T OutBus_get_BCM_info_get_HighBeamSt;
                               /* '<Root>/OutBus_get_BCM_info_get_HighBeamSt' */
  uint8_T OutBus_get_BCM_info_get_HornSt;
                                   /* '<Root>/OutBus_get_BCM_info_get_HornSt' */
  uint8_T OutBus_get_BCM_info_get_KeySt;
                                    /* '<Root>/OutBus_get_BCM_info_get_KeySt' */
  Fault_status OutBus_get_BCM_info_get_LeftTurnLampFaultSt;
                      /* '<Root>/OutBus_get_BCM_info_get_LeftTurnLampFaultSt' */
  uint8_T OutBus_get_BCM_info_get_LeftTurnLampSt;
                           /* '<Root>/OutBus_get_BCM_info_get_LeftTurnLampSt' */
  uint8_T OutBus_get_BCM_info_get_LowBeamSt;
                                /* '<Root>/OutBus_get_BCM_info_get_LowBeamSt' */
  uint8_T OutBus_get_BCM_info_get_PsngrDoorAjarSt;
                          /* '<Root>/OutBus_get_BCM_info_get_PsngrDoorAjarSt' */
  uint8_T OutBus_get_BCM_info_get_RLDoorAjarSt;
                             /* '<Root>/OutBus_get_BCM_info_get_RLDoorAjarSt' */
  uint8_T OutBus_get_BCM_info_get_RRDoorAjarSt;
                             /* '<Root>/OutBus_get_BCM_info_get_RRDoorAjarSt' */
  uint8_T OutBus_get_BCM_info_get_RearFogLampSt;
                            /* '<Root>/OutBus_get_BCM_info_get_RearFogLampSt' */
  Fault_status OutBus_get_BCM_info_get_RightTurnLampFaultSt;
                     /* '<Root>/OutBus_get_BCM_info_get_RightTurnLampFaultSt' */
  uint8_T OutBus_get_BCM_info_get_RightTurnLampSt;
                          /* '<Root>/OutBus_get_BCM_info_get_RightTurnLampSt' */
};

/* Real-time Model Data Structure */
struct tag_RTM_AION_auto_control_realization_T {
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

  extern struct B_AION_auto_control_realization_T
    AION_auto_control_realization_B;

#ifdef __cplusplus

}
#endif

/* Block states (default storage) */
extern struct DW_AION_auto_control_realization_T
  AION_auto_control_realization_DW;

#ifdef __cplusplus

extern "C" {

#endif

  /* External inputs (root inport signals with default storage) */
  extern struct ExtU_AION_auto_control_realization_T
    AION_auto_control_realization_U;

  /* External outputs (root outports fed by signals with default storage) */
  extern struct ExtY_AION_auto_control_realization_T
    AION_auto_control_realization_Y;

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void AION_auto_control_realization_initialize(void);
  extern void AION_auto_control_realization_step(void);
  extern void AION_auto_control_realization_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_AION_auto_control_realization_T *const
    AION_auto_control_realization_M;

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
 * '<Root>' : 'AION_auto_control_realization'
 * '<S1>'   : 'AION_auto_control_realization/Acc_and_brake_control'
 * '<S2>'   : 'AION_auto_control_realization/MATLAB Function'
 * '<S3>'   : 'AION_auto_control_realization/MATLAB Function1'
 * '<S4>'   : 'AION_auto_control_realization/MATLAB Function2'
 */
#endif                         /* RTW_HEADER_AION_auto_control_realization_h_ */

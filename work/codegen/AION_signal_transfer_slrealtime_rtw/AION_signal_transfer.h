/*
 * AION_signal_transfer.h
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
struct B_AION_signal_transfer_T {
  real_T get_EPS_steering_angle;
  /* '<Root>/BusConversion_InsertedFor_ADCU_InternalInputPort_Outport_1_at_inport_0' */
  real_T get_vehicle_spd;
  /* '<Root>/BusConversion_InsertedFor_ADCU_InternalInputPort_Outport_1_at_inport_0' */
  real_T DataTypeConversion10;         /* '<Root>/Data Type Conversion10' */
  real_T DataTypeConversion12;         /* '<Root>/Data Type Conversion12' */
  real_T DataTypeConversion14;         /* '<Root>/Data Type Conversion14' */
  real_T DataTypeConversion15;         /* '<Root>/Data Type Conversion15' */
  real_T DataTypeConversion16;         /* '<Root>/Data Type Conversion16' */
  real_T DataTypeConversion5;          /* '<Root>/Data Type Conversion5' */
  real_T DataTypeConversion7;          /* '<Root>/Data Type Conversion7' */
  real_T DataTypeConversion9;          /* '<Root>/Data Type Conversion9' */
  Control_status DataTypeConversion18; /* '<Root>/Data Type Conversion18' */
  Control_status DataTypeConversion20; /* '<Root>/Data Type Conversion20' */
  uint8_T DataTypeConversion1;         /* '<Root>/Data Type Conversion1' */
  uint8_T DataTypeConversion2;         /* '<Root>/Data Type Conversion2' */
  uint8_T DataTypeConversion3;         /* '<Root>/Data Type Conversion3' */
  uint8_T DataTypeConversion11;        /* '<Root>/Data Type Conversion11' */
  uint8_T DataTypeConversion4;         /* '<Root>/Data Type Conversion4' */
  uint8_T DataTypeConversion6;         /* '<Root>/Data Type Conversion6' */
  uint8_T DataTypeConversion8;         /* '<Root>/Data Type Conversion8' */
};

/* External inputs (root inport signals with default storage) */
struct ExtU_AION_signal_transfer_T {
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_1_BCS_ABSActiveSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_1_BCS_ABSFaultSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_1_BCS_VDCActiveSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_1_BCS_VDCFaultSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_1_BCS_VehSpd;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_1_BCS_VehSpdVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_1_SCU_1_Checksum;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_1_SCU_1_MsgCounter;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_SteeringAngle;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleSpd;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleSpdVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_StrngWhlTorq;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_StrngWhlTorqVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_ThermalSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_EPS_WarnLamp;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_SCU_10_Checksum;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_10_SCU_10_MsgCounter;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_CtrlAvailable;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_DriverDoorAjarSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_FrontFogLampSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_FrontWiperSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_HazardLampSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_HighBeamSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_HornSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_KeySt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_LeftTurnLampFaultSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_LeftTurnLampSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_LowBeamSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_PsngrDoorAjarSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_RLDoorAjarSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_RRDoorAjarSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_RearFogLampSt;/* '<Root>/B_-1_-1' */
  real_T
    ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_RightTurnLampFaultSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_BCM_RightTurnLampSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_SCU_11_Checksum;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_11_SCU_11_MsgCounter;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_12_SCU_12_Checksum;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_12_SCU_12_MsgCounter;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_12_SRS_DriverSeatBeltSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_12_SRS_PsngrSeatBeltSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_13_Checksum;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_13_MsgCounter;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_EStopSwSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_EStopSwStVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LatAutoCheckReport;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LatCtrlMode;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LatQuitReport;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LngAutoChecklReport;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LngCtrlMode;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_LngQuitReport;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_SCU_StrngWhlIntv;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_13_VCU_GearLeverIntv;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_14_VCU_VehDrvMod;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_14_VCU_VehRdySt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_14_VCU_VehRng;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_15_VCU_ActRecpTorq;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_15_VCU_ActRecpTorqSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_15_VCU_CrntGearLvl;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_15_VCU_CrntGearLvlVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_16_SCU_16_Checksum;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_16_SCU_16_MsgCounter;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_16_VCU_ACCMaxRecpDecel;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_16_VCU_ACCMaxRecpDecelVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_16_VCU_ActVehWheelTorq;/* '<Root>/B_-1_-1' */
  real_T
    ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_16_VCU_LateralAssistBtnInfo;/* '<Root>/B_-1_-1' */
  real_T
    ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_16_VCU_LateralAssistBtnInfoVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_17_SCU_17_Checksum;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_17_SCU_17_MsgCounter;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_17_VCU_ACCButtInfo;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_17_VCU_AccElecECFail;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_17_VCU_GasPedalActPst;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_17_VCU_GasPedalActPstVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_17_VCU_VehWheelTorqMax;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_18_SCU_18_Checksum;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_18_SCU_18_MsgCounter;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_18_VCU_BrkPedalSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_18_VCU_BrkPedalStVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_18_VCU_GasPedalVirtualPst;/* '<Root>/B_-1_-1' */
  real_T
    ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_18_VCU_GasPedalVirtualPstVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_2_BCS_FLWheelSpdEdgesSum;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_2_BCS_FLWheelSpdEdgesSumVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_2_BCS_FRWheelSpdEdgesSum;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_2_BCS_FRWheelSpdEdgesSumVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_2_BCS_RLWheelSpdEdgesSum;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_2_BCS_RLWheelSpdEdgesSumVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_2_BCS_RRWheelSpdEdgesSum;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_2_BCS_RRWheelSpdEdgesSumVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_2_SCU_2_Checksum;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_2_SCU_2_MsgCounter;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_3_BCS_YawRate;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_3_BCS_YawRateOffset;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_3_BCS_YawRateSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_3_SCU_3_Checksum;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_3_SCU_3_MsgCounter;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_4_BCS_HDCCtrlSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_4_BCS_HDCErrSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_4_SCU_4_Checksum;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_4_SCU_4_MsgCounter;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_5_BCS_AEBActive;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_5_BCS_AEBAvailable;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_5_BCS_CDDActive;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_5_BCS_CDDAvailable;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_5_BCS_CDDFail;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPr;/* '<Root>/B_-1_-1' */
  real_T
    ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPrOffset;/* '<Root>/B_-1_-1' */
  real_T
    ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPrOffsetVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPrVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_5_BCS_NoBrakeForce;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_5_BCS_VehicleStandStillSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_5_SCU_5_Checksum;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_5_SCU_5_MsgCounter;/* '<Root>/B_-1_-1' */
  real_T
    ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_6_BCS_FLWheelRotatedDirection;/* '<Root>/B_-1_-1' */
  real_T
    ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_6_BCS_FLWheelRotatedDirectionVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_6_BCS_FLWheelSpd;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_6_BCS_FLWheelSpdVD;/* '<Root>/B_-1_-1' */
  real_T
    ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_6_BCS_FRWheelRotatedDirection;/* '<Root>/B_-1_-1' */
  real_T
    ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_6_BCS_FRWheelRotatedDirectionVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_6_BCS_FRWheelSpd;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_6_BCS_FRWheelSpdVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_6_SCU_6_Checksum;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_6_SCU_6_MsgCounter;/* '<Root>/B_-1_-1' */
  real_T
    ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_7_BCS_RLWheelRotatedDirection;/* '<Root>/B_-1_-1' */
  real_T
    ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_7_BCS_RLWheelRotatedDirectionVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_7_BCS_RLWheelSpd;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_7_BCS_RLWheelSpdVD;/* '<Root>/B_-1_-1' */
  real_T
    ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_7_BCS_RRWheelRotatedDirection;/* '<Root>/B_-1_-1' */
  real_T
    ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_7_BCS_RRWheelRotatedDirectionVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_7_BCS_RRWheelSpd;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_7_BCS_RRWheelSpdVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_7_SCU_7_Checksum;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_7_SCU_7_MsgCounter;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_8_BCS_ActVehLaltrlAccel;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_8_BCS_ActVehLaltrlAccelVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_8_BCS_ActVehLongAccel;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_8_BCS_ActVehLongAccelVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_8_BCS_VehLaltrlAccelOffset;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_8_BCS_VehLongAccelOffset;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_8_SCU_8_Checksum;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_8_SCU_8_MsgCounter;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_9_EPB_FailSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_9_EPB_SwitchSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_9_EPB_SwitchStVD;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_9_EPB_SysSt;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_9_SCU_9_Checksum;/* '<Root>/B_-1_-1' */
  real_T ADCU_InputPort_InputCAN_bus_SCU2ADCU_bus_SCU_9_SCU_9_MsgCounter;/* '<Root>/B_-1_-1' */
  Control_request
    ADCU_InternalOutputPort_AION_lateral_control_info_set_lateral_control_request;/* '<Root>/B_-1_-1' */
  real_T
    ADCU_InternalOutputPort_AION_lateral_control_info_set_steer_torque_request;/* '<Root>/B_-1_-1' */
  real_T
    ADCU_InternalOutputPort_AION_lateral_control_info_set_steer_angle_request;/* '<Root>/B_-1_-1' */
  real_T
    ADCU_InternalOutputPort_AION_lateral_control_info_set_steer_ang_spd_limit;/* '<Root>/B_-1_-1' */
  Control_status
    ADCU_InternalOutputPort_AION_lateral_control_info_get_lateral_control_status;/* '<Root>/B_-1_-1' */
  real_T
    ADCU_InternalOutputPort_AION_lateral_control_info_get_EPS_steering_angle;/* '<Root>/B_-1_-1' */
  real_T ADCU_InternalOutputPort_AION_longitudinal_control_info_get_vehicle_spd;/* '<Root>/B_-1_-1' */
  Control_status
    ADCU_InternalOutputPort_AION_longitudinal_control_info_get_longitudinal_control_status;/* '<Root>/B_-1_-1' */
  Control_request
    ADCU_InternalOutputPort_AION_longitudinal_control_info_set_longitudinal_control_request;/* '<Root>/B_-1_-1' */
  real_T
    ADCU_InternalOutputPort_AION_longitudinal_control_info_set_brake_request;/* '<Root>/B_-1_-1' */
  AION_gear
    ADCU_InternalOutputPort_AION_longitudinal_control_info_set_gear_level_request;/* '<Root>/B_-1_-1' */
  Validation
    ADCU_InternalOutputPort_AION_longitudinal_control_info_set_gear_level_req_val;/* '<Root>/B_-1_-1' */
  real_T
    ADCU_InternalOutputPort_AION_longitudinal_control_info_set_torque_request;/* '<Root>/B_-1_-1' */
};

/* External outputs (root outports fed by signals with default storage) */
struct ExtY_AION_signal_transfer_T {
  Control_request
    ADCU_InternalInputPort_AION_lateral_control_info_set_lateral_control_request;
  /* '<Root>/ADCU_InternalInputPort_AION_lateral_control_info_set_lateral_control_request' */
  real_T
    ADCU_InternalInputPort_AION_lateral_control_info_set_steer_torque_request;
  /* '<Root>/ADCU_InternalInputPort_AION_lateral_control_info_set_steer_torque_request' */
  real_T
    ADCU_InternalInputPort_AION_lateral_control_info_set_steer_angle_request;
  /* '<Root>/ADCU_InternalInputPort_AION_lateral_control_info_set_steer_angle_request' */
  real_T
    ADCU_InternalInputPort_AION_lateral_control_info_set_steer_ang_spd_limit;
  /* '<Root>/ADCU_InternalInputPort_AION_lateral_control_info_set_steer_ang_spd_limit' */
  Control_status
    ADCU_InternalInputPort_AION_lateral_control_info_get_lateral_control_status;
  /* '<Root>/ADCU_InternalInputPort_AION_lateral_control_info_get_lateral_control_status' */
  real_T ADCU_InternalInputPort_AION_lateral_control_info_get_EPS_steering_angle;
  /* '<Root>/ADCU_InternalInputPort_AION_lateral_control_info_get_EPS_steering_angle' */
  real_T ADCU_InternalInputPort_AION_longitudinal_control_info_get_vehicle_spd;
  /* '<Root>/ADCU_InternalInputPort_AION_longitudinal_control_info_get_vehicle_spd' */
  Control_status
    ADCU_InternalInputPort_AION_longitudinal_control_info_get_longitudinal_control_status;
  /* '<Root>/ADCU_InternalInputPort_AION_longitudinal_control_info_get_longitudinal_control_status' */
  Control_request
    ADCU_InternalInputPort_AION_longitudinal_control_info_set_longitudinal_control_request;
  /* '<Root>/ADCU_InternalInputPort_AION_longitudinal_control_info_set_longitudinal_control_request' */
  real_T ADCU_InternalInputPort_AION_longitudinal_control_info_set_brake_request;
  /* '<Root>/ADCU_InternalInputPort_AION_longitudinal_control_info_set_brake_request' */
  AION_gear
    ADCU_InternalInputPort_AION_longitudinal_control_info_set_gear_level_request;
  /* '<Root>/ADCU_InternalInputPort_AION_longitudinal_control_info_set_gear_level_request' */
  Validation
    ADCU_InternalInputPort_AION_longitudinal_control_info_set_gear_level_req_val;
  /* '<Root>/ADCU_InternalInputPort_AION_longitudinal_control_info_set_gear_level_req_val' */
  real_T
    ADCU_InternalInputPort_AION_longitudinal_control_info_set_torque_request;
  /* '<Root>/ADCU_InternalInputPort_AION_longitudinal_control_info_set_torque_request' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_1_Checksum;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_1_Checksum' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_1_MsgCounter;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_1_MsgCounter' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_AutoTrqWhlReq;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_AutoTrqWhlReq' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_BrakeReq;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_BrakeReq' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_GearLvlReq;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_GearLvlReq' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_GearLvlReqVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_GearLvlReqVD' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_LngCtrlReq;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_LngCtrlReq' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_ParkingReqToEPB;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_ParkingReqToEPB' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_ParkingReqToEPBVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_1_ADCU_ParkingReqToEPBVD' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_2_Checksum;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_2_Checksum' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_2_MsgCounter;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_2_MsgCounter' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_LatCtrlReq;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_LatCtrlReq' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerAngReq;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerAngReq' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerAngSpdLimt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerAngSpdLimt' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerWhlTorqReq;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_2_ADCU_SteerWhlTorqReq' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_3_Checksum;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_3_Checksum' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_3_MsgCounter;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_3_MsgCounter' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_BeamReq;
    /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_BeamReq' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_BodyCtrlReq;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_BodyCtrlReq' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_HornRingReq;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_HornRingReq' */
  real_T ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_TurnLightReq;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_ADCU_3_ADCU_TurnLightReq' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_ABSActiveSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_ABSActiveSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_ABSFaultSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_ABSFaultSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_VDCActiveSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_VDCActiveSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_VDCFaultSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_VDCFaultSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_VehSpd;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_VehSpd' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_VehSpdVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_BCS_VehSpdVD' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_SCU_1_Checksum;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_SCU_1_Checksum' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_SCU_1_MsgCounter;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_1_SCU_1_MsgCounter' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_SteeringAngle;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_SteeringAngle' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleSpd;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleSpd' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleSpdVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleSpdVD' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_SteeringAngleVD' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_StrngWhlTorq;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_StrngWhlTorq' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_StrngWhlTorqVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_StrngWhlTorqVD' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_ThermalSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_ThermalSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_WarnLamp;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_EPS_WarnLamp' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_SCU_10_Checksum;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_SCU_10_Checksum' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_SCU_10_MsgCounter;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_10_SCU_10_MsgCounter' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_CtrlAvailable;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_CtrlAvailable' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_DriverDoorAjarSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_DriverDoorAjarSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_FrontFogLampSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_FrontFogLampSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_FrontWiperSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_FrontWiperSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_HazardLampSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_HazardLampSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_HighBeamSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_HighBeamSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_HornSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_HornSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_KeySt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_KeySt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_LeftTurnLampFaultSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_LeftTurnLampFaultSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_LeftTurnLampSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_LeftTurnLampSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_LowBeamSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_LowBeamSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_PsngrDoorAjarSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_PsngrDoorAjarSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RLDoorAjarSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RLDoorAjarSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RRDoorAjarSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RRDoorAjarSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RearFogLampSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RearFogLampSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RightTurnLampFaultSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RightTurnLampFaultSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RightTurnLampSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_BCM_RightTurnLampSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_SCU_11_Checksum;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_SCU_11_Checksum' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_SCU_11_MsgCounter;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_11_SCU_11_MsgCounter' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_12_SCU_12_Checksum;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_12_SCU_12_Checksum' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_12_SCU_12_MsgCounter;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_12_SCU_12_MsgCounter' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_12_SRS_DriverSeatBeltSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_12_SRS_DriverSeatBeltSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_12_SRS_PsngrSeatBeltSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_12_SRS_PsngrSeatBeltSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_13_Checksum;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_13_Checksum' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_13_MsgCounter;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_13_MsgCounter' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_EStopSwSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_EStopSwSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_EStopSwStVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_EStopSwStVD' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LatAutoCheckReport;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LatAutoCheckReport' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LatCtrlMode;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LatCtrlMode' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LatQuitReport;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LatQuitReport' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LngAutoChecklReport;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LngAutoChecklReport' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LngCtrlMode;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LngCtrlMode' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LngQuitReport;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_LngQuitReport' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_StrngWhlIntv;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_SCU_StrngWhlIntv' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_VCU_GearLeverIntv;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_13_VCU_GearLeverIntv' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_14_VCU_VehDrvMod;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_14_VCU_VehDrvMod' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_14_VCU_VehRdySt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_14_VCU_VehRdySt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_14_VCU_VehRng;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_14_VCU_VehRng' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_15_VCU_ActRecpTorq;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_15_VCU_ActRecpTorq' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_15_VCU_ActRecpTorqSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_15_VCU_ActRecpTorqSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_15_VCU_CrntGearLvl;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_15_VCU_CrntGearLvl' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_15_VCU_CrntGearLvlVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_15_VCU_CrntGearLvlVD' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_SCU_16_Checksum;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_SCU_16_Checksum' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_SCU_16_MsgCounter;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_SCU_16_MsgCounter' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_ACCMaxRecpDecel;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_ACCMaxRecpDecel' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_ACCMaxRecpDecelVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_ACCMaxRecpDecelVD' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_ActVehWheelTorq;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_ActVehWheelTorq' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_LateralAssistBtnInfo;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_LateralAssistBtnInfo' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_LateralAssistBtnInfoVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_16_VCU_LateralAssistBtnInfoVD' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_SCU_17_Checksum;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_SCU_17_Checksum' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_SCU_17_MsgCounter;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_SCU_17_MsgCounter' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_ACCButtInfo;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_ACCButtInfo' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_AccElecECFail;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_AccElecECFail' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_GasPedalActPst;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_GasPedalActPst' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_GasPedalActPstVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_GasPedalActPstVD' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_VehWheelTorqMax;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_17_VCU_VehWheelTorqMax' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_SCU_18_Checksum;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_SCU_18_Checksum' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_SCU_18_MsgCounter;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_SCU_18_MsgCounter' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_VCU_BrkPedalSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_VCU_BrkPedalSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_VCU_BrkPedalStVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_VCU_BrkPedalStVD' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_VCU_GasPedalVirtualPst;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_VCU_GasPedalVirtualPst' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_VCU_GasPedalVirtualPstVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_18_VCU_GasPedalVirtualPstVD' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_FLWheelSpdEdgesSum;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_FLWheelSpdEdgesSum' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_FLWheelSpdEdgesSumVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_FLWheelSpdEdgesSumVD' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_FRWheelSpdEdgesSum;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_FRWheelSpdEdgesSum' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_FRWheelSpdEdgesSumVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_FRWheelSpdEdgesSumVD' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_RLWheelSpdEdgesSum;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_RLWheelSpdEdgesSum' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_RLWheelSpdEdgesSumVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_RLWheelSpdEdgesSumVD' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_RRWheelSpdEdgesSum;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_RRWheelSpdEdgesSum' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_RRWheelSpdEdgesSumVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_BCS_RRWheelSpdEdgesSumVD' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_SCU_2_Checksum;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_SCU_2_Checksum' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_SCU_2_MsgCounter;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_2_SCU_2_MsgCounter' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_BCS_YawRate;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_BCS_YawRate' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_BCS_YawRateOffset;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_BCS_YawRateOffset' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_BCS_YawRateSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_BCS_YawRateSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_SCU_3_Checksum;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_SCU_3_Checksum' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_SCU_3_MsgCounter;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_3_SCU_3_MsgCounter' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_4_BCS_HDCCtrlSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_4_BCS_HDCCtrlSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_4_BCS_HDCErrSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_4_BCS_HDCErrSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_4_SCU_4_Checksum;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_4_SCU_4_Checksum' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_4_SCU_4_MsgCounter;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_4_SCU_4_MsgCounter' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_AEBActive;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_AEBActive' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_AEBAvailable;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_AEBAvailable' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_CDDActive;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_CDDActive' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_CDDAvailable;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_CDDAvailable' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_CDDFail;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_CDDFail' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPr;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPr' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPrOffset;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPrOffset' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPrOffsetVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPrOffsetVD' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPrVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_MasterCylinderPrVD' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_NoBrakeForce;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_NoBrakeForce' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_VehicleStandStillSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_BCS_VehicleStandStillSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_SCU_5_Checksum;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_SCU_5_Checksum' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_SCU_5_MsgCounter;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_5_SCU_5_MsgCounter' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FLWheelRotatedDirection;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FLWheelRotatedDirection' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FLWheelRotatedDirectionVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FLWheelRotatedDirectionVD' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FLWheelSpd;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FLWheelSpd' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FLWheelSpdVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FLWheelSpdVD' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FRWheelRotatedDirection;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FRWheelRotatedDirection' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FRWheelRotatedDirectionVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FRWheelRotatedDirectionVD' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FRWheelSpd;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FRWheelSpd' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FRWheelSpdVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_BCS_FRWheelSpdVD' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_SCU_6_Checksum;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_SCU_6_Checksum' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_SCU_6_MsgCounter;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_6_SCU_6_MsgCounter' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RLWheelRotatedDirection;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RLWheelRotatedDirection' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RLWheelRotatedDirectionVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RLWheelRotatedDirectionVD' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RLWheelSpd;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RLWheelSpd' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RLWheelSpdVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RLWheelSpdVD' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RRWheelRotatedDirection;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RRWheelRotatedDirection' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RRWheelRotatedDirectionVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RRWheelRotatedDirectionVD' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RRWheelSpd;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RRWheelSpd' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RRWheelSpdVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_BCS_RRWheelSpdVD' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_SCU_7_Checksum;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_SCU_7_Checksum' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_SCU_7_MsgCounter;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_7_SCU_7_MsgCounter' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_ActVehLaltrlAccel;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_ActVehLaltrlAccel' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_ActVehLaltrlAccelVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_ActVehLaltrlAccelVD' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_ActVehLongAccel;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_ActVehLongAccel' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_ActVehLongAccelVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_ActVehLongAccelVD' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_VehLaltrlAccelOffset;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_VehLaltrlAccelOffset' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_VehLongAccelOffset;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_BCS_VehLongAccelOffset' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_SCU_8_Checksum;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_SCU_8_Checksum' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_SCU_8_MsgCounter;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_8_SCU_8_MsgCounter' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_EPB_FailSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_EPB_FailSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_EPB_SwitchSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_EPB_SwitchSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_EPB_SwitchStVD;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_EPB_SwitchStVD' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_EPB_SysSt;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_EPB_SysSt' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_SCU_9_Checksum;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_SCU_9_Checksum' */
  real_T
    ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_SCU_9_MsgCounter;
  /* '<Root>/ADCU_OuputPort_OutputCAN_bus_ADCU2SCU_bus_aaa_SCU2ADCU_bus_SCU_9_SCU_9_MsgCounter' */
};

/* Real-time Model Data Structure */
struct tag_RTM_AION_signal_transfer_T {
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

  extern struct B_AION_signal_transfer_T AION_signal_transfer_B;

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  /* External inputs (root inport signals with default storage) */
  extern struct ExtU_AION_signal_transfer_T AION_signal_transfer_U;

  /* External outputs (root outports fed by signals with default storage) */
  extern struct ExtY_AION_signal_transfer_T AION_signal_transfer_Y;

#ifdef __cplusplus

}
#endif

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void AION_signal_transfer_initialize(void);
  extern void AION_signal_transfer_step(void);
  extern void AION_signal_transfer_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_AION_signal_transfer_T *const AION_signal_transfer_M;

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
 * '<Root>' : 'AION_signal_transfer'
 * '<S1>'   : 'AION_signal_transfer/DocBlock'
 */
#endif                                 /* RTW_HEADER_AION_signal_transfer_h_ */

/*
 * AION_IDS_SPEEDGOAT.h
 *
 * Code generation for model "AION_IDS_SPEEDGOAT".
 *
 * Model version              : 4.237
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Fri May 27 16:05:01 2022
 *
 * Target selection: slrealtime.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Linux 64)
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#ifndef RTW_HEADER_AION_IDS_SPEEDGOAT_h_
#define RTW_HEADER_AION_IDS_SPEEDGOAT_h_
#include <stddef.h>
#include <cstring>
#include <cmath>
#include <string.h>
#include <math.h>
#include <logsrv.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "verify/verifyIntrf.h"
#include "can_message.h"
#include "AION_IDS_SPEEDGOAT_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "AION_signal_transfer.h"
#include "AION_auto_mode_request.h"
#include "AION_IDS_SPEEDGOAT_cal.h"
#include "crl_mutex.hpp"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmGetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm) ((rtm)->CTOutputIncnstWithState)
#endif

#ifndef rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag
#define rtmSetContTimeOutputInconsistentWithStateAtMajorStepFlag(rtm, val) ((rtm)->CTOutputIncnstWithState = (val))
#endif

#ifndef rtmGetDerivCacheNeedsReset
#define rtmGetDerivCacheNeedsReset(rtm) ((rtm)->derivCacheNeedsReset)
#endif

#ifndef rtmSetDerivCacheNeedsReset
#define rtmSetDerivCacheNeedsReset(rtm, val) ((rtm)->derivCacheNeedsReset = (val))
#endif

#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetSampleHitArray
#define rtmGetSampleHitArray(rtm)      ((rtm)->Timing.sampleHitArray)
#endif

#ifndef rtmGetStepSize
#define rtmGetStepSize(rtm)            ((rtm)->Timing.stepSize)
#endif

#ifndef rtmGetZCCacheNeedsReset
#define rtmGetZCCacheNeedsReset(rtm)   ((rtm)->zCCacheNeedsReset)
#endif

#ifndef rtmSetZCCacheNeedsReset
#define rtmSetZCCacheNeedsReset(rtm, val) ((rtm)->zCCacheNeedsReset = (val))
#endif

#ifndef rtmGet_TimeOfLastOutput
#define rtmGet_TimeOfLastOutput(rtm)   ((rtm)->Timing.timeOfLastOutput)
#endif

#ifndef rtmCounterLimit
#define rtmCounterLimit(rtm, idx)      ((rtm)->Timing.TaskCounters.cLimit[(idx)])
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetErrorStatusPointer
#define rtmGetErrorStatusPointer(rtm)  ((const char_T **)(&((rtm)->errorStatus)))
#endif

#ifndef rtmStepTask
#define rtmStepTask(rtm, idx)          ((rtm)->Timing.TaskCounters.TID[(idx)] == 0)
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
#define rtmGetT(rtm)                   (rtmGetTPtr((rtm))[0])
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                ((rtm)->Timing.t)
#endif

#ifndef rtmGetTStart
#define rtmGetTStart(rtm)              ((rtm)->Timing.tStart)
#endif

#ifndef rtmTaskCounter
#define rtmTaskCounter(rtm, idx)       ((rtm)->Timing.TaskCounters.TID[(idx)])
#endif

#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm)    ((rtm)->Timing.timeOfLastOutput)
#endif

/* user code (top of export header file) */
#include "can_message.h"

/* Block signals (default storage) */
struct B_AION_IDS_SPEEDGOAT_T {
  AION_ApplicationBus UnitDelay;       /* '<S1>/Unit Delay' */
  AION_ApplicationBus TmpRTBAtUnitDelayInport1;/* '<S1>/Initialization' */
  AION_ApplicationBus ToVirtualBus_BusCreator1;/* '<S1>/To Virtual Bus' */
  CAN_DATATYPE ADCU2SCU_Brake_Command_CAN_pack;
                                   /* '<S28>/ADCU2SCU_Brake_Command_CAN_pack' */
  CAN_DATATYPE RT_f;                   /* '<S28>/RT' */
  CAN_DATATYPE ADCU2SCU_Gear_Command_CAN_pack;
                                    /* '<S28>/ADCU2SCU_Gear_Command_CAN_pack' */
  CAN_DATATYPE RT1;                    /* '<S28>/RT1' */
  CAN_DATATYPE ADCU2SCU_Steer_Command_CAN_pack;
                                   /* '<S28>/ADCU2SCU_Steer_Command_CAN_pack' */
  CAN_DATATYPE RT2;                    /* '<S28>/RT2' */
  CAN_DATATYPE SCU2ADCU_CAN_read_o2;   /* '<S25>/SCU2ADCU_CAN_read' */
  real_T SCU2ADCU_SampleTimes;         /* '<S24>/SCU2ADCU_SampleTime(s)' */
  real_T set_SteerWhlTorqReq;          /* '<S2>/Signal_Transfer' */
  real_T set_SteerAngReq;              /* '<S2>/Signal_Transfer' */
  real_T set_SteerAngSpdLimt;          /* '<S2>/Signal_Transfer' */
  real_T set_AutoTrqWhlReq;            /* '<S2>/Signal_Transfer' */
  real_T set_BrakeReq;                 /* '<S2>/Signal_Transfer' */
  real_T get_VehSpd;                   /* '<S2>/Signal_Transfer' */
  real_T get_YawRate;                  /* '<S2>/Signal_Transfer' */
  real_T get_YawRateOffset;            /* '<S2>/Signal_Transfer' */
  real_T get_MasterCylinderPr;         /* '<S2>/Signal_Transfer' */
  real_T get_MasterCylinderPrOffset;   /* '<S2>/Signal_Transfer' */
  real_T get_FLWheelSpd;               /* '<S2>/Signal_Transfer' */
  real_T get_FRWheelSpd;               /* '<S2>/Signal_Transfer' */
  real_T get_RLWheelSpd;               /* '<S2>/Signal_Transfer' */
  real_T get_RRWheelSpd;               /* '<S2>/Signal_Transfer' */
  real_T get_ActVehLaltrlAccel;        /* '<S2>/Signal_Transfer' */
  real_T get_ActVehLongAccel;          /* '<S2>/Signal_Transfer' */
  real_T get_VehLaltrlAccelOffset;     /* '<S2>/Signal_Transfer' */
  real_T get_VehLongAccelOffset;       /* '<S2>/Signal_Transfer' */
  real_T get_ACCMaxRecpDecel;          /* '<S2>/Signal_Transfer' */
  real_T get_GasPedalActPst;           /* '<S2>/Signal_Transfer' */
  real_T get_GasPedalVirtualPst;       /* '<S2>/Signal_Transfer' */
  real_T get_SteeringAngle;            /* '<S2>/Signal_Transfer' */
  real_T get_StrngWhlTorq;             /* '<S2>/Signal_Transfer' */
  real_T ADCU_1_Checksum;              /* '<S2>/Signal_Transfer' */
  real_T ADCU_1_MsgCounter;            /* '<S2>/Signal_Transfer' */
  real_T ADCU_AutoTrqWhlReq;           /* '<S2>/Signal_Transfer' */
  real_T ADCU_BrakeReq;                /* '<S2>/Signal_Transfer' */
  real_T ADCU_GearLvlReq;              /* '<S2>/Signal_Transfer' */
  real_T ADCU_GearLvlReqVD;            /* '<S2>/Signal_Transfer' */
  real_T ADCU_LngCtrlReq;              /* '<S2>/Signal_Transfer' */
  real_T ADCU_ParkingReqToEPB;         /* '<S2>/Signal_Transfer' */
  real_T ADCU_ParkingReqToEPBVD;       /* '<S2>/Signal_Transfer' */
  real_T ADCU_2_Checksum;              /* '<S2>/Signal_Transfer' */
  real_T ADCU_2_MsgCounter;            /* '<S2>/Signal_Transfer' */
  real_T ADCU_LatCtrlReq;              /* '<S2>/Signal_Transfer' */
  real_T ADCU_SteerAngReq;             /* '<S2>/Signal_Transfer' */
  real_T ADCU_SteerAngSpdLimt;         /* '<S2>/Signal_Transfer' */
  real_T ADCU_SteerWhlTorqReq;         /* '<S2>/Signal_Transfer' */
  real_T ADCU_3_Checksum;              /* '<S2>/Signal_Transfer' */
  real_T ADCU_3_MsgCounter;            /* '<S2>/Signal_Transfer' */
  real_T ADCU_BeamReq;                 /* '<S2>/Signal_Transfer' */
  real_T ADCU_BodyCtrlReq;             /* '<S2>/Signal_Transfer' */
  real_T ADCU_HornRingReq;             /* '<S2>/Signal_Transfer' */
  real_T ADCU_TurnLightReq;            /* '<S2>/Signal_Transfer' */
  real_T BCS_ABSActiveSt;              /* '<S2>/Signal_Transfer' */
  real_T BCS_ABSFaultSt;               /* '<S2>/Signal_Transfer' */
  real_T BCS_VDCActiveSt;              /* '<S2>/Signal_Transfer' */
  real_T BCS_VDCFaultSt;               /* '<S2>/Signal_Transfer' */
  real_T BCS_VehSpd;                   /* '<S2>/Signal_Transfer' */
  real_T BCS_VehSpdVD;                 /* '<S2>/Signal_Transfer' */
  real_T SCU_1_Checksum;               /* '<S2>/Signal_Transfer' */
  real_T SCU_1_MsgCounter;             /* '<S2>/Signal_Transfer' */
  real_T EPS_SteeringAngle;            /* '<S2>/Signal_Transfer' */
  real_T EPS_SteeringAngleSpd;         /* '<S2>/Signal_Transfer' */
  real_T EPS_SteeringAngleSpdVD;       /* '<S2>/Signal_Transfer' */
  real_T EPS_SteeringAngleVD;          /* '<S2>/Signal_Transfer' */
  real_T EPS_StrngWhlTorq;             /* '<S2>/Signal_Transfer' */
  real_T EPS_StrngWhlTorqVD;           /* '<S2>/Signal_Transfer' */
  real_T EPS_ThermalSt;                /* '<S2>/Signal_Transfer' */
  real_T EPS_WarnLamp;                 /* '<S2>/Signal_Transfer' */
  real_T SCU_10_Checksum;              /* '<S2>/Signal_Transfer' */
  real_T SCU_10_MsgCounter;            /* '<S2>/Signal_Transfer' */
  real_T BCM_CtrlAvailable;            /* '<S2>/Signal_Transfer' */
  real_T BCM_DriverDoorAjarSt;         /* '<S2>/Signal_Transfer' */
  real_T BCM_FrontFogLampSt;           /* '<S2>/Signal_Transfer' */
  real_T BCM_FrontWiperSt;             /* '<S2>/Signal_Transfer' */
  real_T BCM_HazardLampSt;             /* '<S2>/Signal_Transfer' */
  real_T BCM_HighBeamSt;               /* '<S2>/Signal_Transfer' */
  real_T BCM_HornSt;                   /* '<S2>/Signal_Transfer' */
  real_T BCM_KeySt;                    /* '<S2>/Signal_Transfer' */
  real_T BCM_LeftTurnLampFaultSt;      /* '<S2>/Signal_Transfer' */
  real_T BCM_LeftTurnLampSt;           /* '<S2>/Signal_Transfer' */
  real_T BCM_LowBeamSt;                /* '<S2>/Signal_Transfer' */
  real_T BCM_PsngrDoorAjarSt;          /* '<S2>/Signal_Transfer' */
  real_T BCM_RLDoorAjarSt;             /* '<S2>/Signal_Transfer' */
  real_T BCM_RRDoorAjarSt;             /* '<S2>/Signal_Transfer' */
  real_T BCM_RearFogLampSt;            /* '<S2>/Signal_Transfer' */
  real_T BCM_RightTurnLampFaultSt;     /* '<S2>/Signal_Transfer' */
  real_T BCM_RightTurnLampSt;          /* '<S2>/Signal_Transfer' */
  real_T SCU_11_Checksum;              /* '<S2>/Signal_Transfer' */
  real_T SCU_11_MsgCounter;            /* '<S2>/Signal_Transfer' */
  real_T SCU_12_Checksum;              /* '<S2>/Signal_Transfer' */
  real_T SCU_12_MsgCounter;            /* '<S2>/Signal_Transfer' */
  real_T SRS_DriverSeatBeltSt;         /* '<S2>/Signal_Transfer' */
  real_T SRS_PsngrSeatBeltSt;          /* '<S2>/Signal_Transfer' */
  real_T SCU_13_Checksum;              /* '<S2>/Signal_Transfer' */
  real_T SCU_13_MsgCounter;            /* '<S2>/Signal_Transfer' */
  real_T SCU_EStopSwSt;                /* '<S2>/Signal_Transfer' */
  real_T SCU_EStopSwStVD;              /* '<S2>/Signal_Transfer' */
  real_T SCU_LatAutoCheckReport;       /* '<S2>/Signal_Transfer' */
  real_T SCU_LatCtrlMode;              /* '<S2>/Signal_Transfer' */
  real_T SCU_LatQuitReport;            /* '<S2>/Signal_Transfer' */
  real_T SCU_LngAutoChecklReport;      /* '<S2>/Signal_Transfer' */
  real_T SCU_LngCtrlMode;              /* '<S2>/Signal_Transfer' */
  real_T SCU_LngQuitReport;            /* '<S2>/Signal_Transfer' */
  real_T SCU_StrngWhlIntv;             /* '<S2>/Signal_Transfer' */
  real_T VCU_GearLeverIntv;            /* '<S2>/Signal_Transfer' */
  real_T VCU_VehDrvMod;                /* '<S2>/Signal_Transfer' */
  real_T VCU_VehRdySt;                 /* '<S2>/Signal_Transfer' */
  real_T VCU_VehRng;                   /* '<S2>/Signal_Transfer' */
  real_T VCU_ActRecpTorq;              /* '<S2>/Signal_Transfer' */
  real_T VCU_ActRecpTorqSt;            /* '<S2>/Signal_Transfer' */
  real_T VCU_CrntGearLvl;              /* '<S2>/Signal_Transfer' */
  real_T VCU_CrntGearLvlVD;            /* '<S2>/Signal_Transfer' */
  real_T SCU_16_Checksum;              /* '<S2>/Signal_Transfer' */
  real_T SCU_16_MsgCounter;            /* '<S2>/Signal_Transfer' */
  real_T VCU_ACCMaxRecpDecel;          /* '<S2>/Signal_Transfer' */
  real_T VCU_ACCMaxRecpDecelVD;        /* '<S2>/Signal_Transfer' */
  real_T VCU_ActVehWheelTorq;          /* '<S2>/Signal_Transfer' */
  real_T VCU_LateralAssistBtnInfo;     /* '<S2>/Signal_Transfer' */
  real_T VCU_LateralAssistBtnInfoVD;   /* '<S2>/Signal_Transfer' */
  real_T SCU_17_Checksum;              /* '<S2>/Signal_Transfer' */
  real_T SCU_17_MsgCounter;            /* '<S2>/Signal_Transfer' */
  real_T VCU_ACCButtInfo;              /* '<S2>/Signal_Transfer' */
  real_T VCU_AccElecECFail;            /* '<S2>/Signal_Transfer' */
  real_T VCU_GasPedalActPst;           /* '<S2>/Signal_Transfer' */
  real_T VCU_GasPedalActPstVD;         /* '<S2>/Signal_Transfer' */
  real_T VCU_VehWheelTorqMax;          /* '<S2>/Signal_Transfer' */
  real_T SCU_18_Checksum;              /* '<S2>/Signal_Transfer' */
  real_T SCU_18_MsgCounter;            /* '<S2>/Signal_Transfer' */
  real_T VCU_BrkPedalSt;               /* '<S2>/Signal_Transfer' */
  real_T VCU_BrkPedalStVD;             /* '<S2>/Signal_Transfer' */
  real_T VCU_GasPedalVirtualPst;       /* '<S2>/Signal_Transfer' */
  real_T VCU_GasPedalVirtualPstVD;     /* '<S2>/Signal_Transfer' */
  real_T BCS_FLWheelSpdEdgesSum;       /* '<S2>/Signal_Transfer' */
  real_T BCS_FLWheelSpdEdgesSumVD;     /* '<S2>/Signal_Transfer' */
  real_T BCS_FRWheelSpdEdgesSum;       /* '<S2>/Signal_Transfer' */
  real_T BCS_FRWheelSpdEdgesSumVD;     /* '<S2>/Signal_Transfer' */
  real_T BCS_RLWheelSpdEdgesSum;       /* '<S2>/Signal_Transfer' */
  real_T BCS_RLWheelSpdEdgesSumVD;     /* '<S2>/Signal_Transfer' */
  real_T BCS_RRWheelSpdEdgesSum;       /* '<S2>/Signal_Transfer' */
  real_T BCS_RRWheelSpdEdgesSumVD;     /* '<S2>/Signal_Transfer' */
  real_T SCU_2_Checksum;               /* '<S2>/Signal_Transfer' */
  real_T SCU_2_MsgCounter;             /* '<S2>/Signal_Transfer' */
  real_T BCS_YawRate;                  /* '<S2>/Signal_Transfer' */
  real_T BCS_YawRateOffset;            /* '<S2>/Signal_Transfer' */
  real_T BCS_YawRateSt;                /* '<S2>/Signal_Transfer' */
  real_T SCU_3_Checksum;               /* '<S2>/Signal_Transfer' */
  real_T SCU_3_MsgCounter;             /* '<S2>/Signal_Transfer' */
  real_T BCS_HDCCtrlSt;                /* '<S2>/Signal_Transfer' */
  real_T BCS_HDCErrSt;                 /* '<S2>/Signal_Transfer' */
  real_T SCU_4_Checksum;               /* '<S2>/Signal_Transfer' */
  real_T SCU_4_MsgCounter;             /* '<S2>/Signal_Transfer' */
  real_T BCS_AEBActive;                /* '<S2>/Signal_Transfer' */
  real_T BCS_AEBAvailable;             /* '<S2>/Signal_Transfer' */
  real_T BCS_CDDActive;                /* '<S2>/Signal_Transfer' */
  real_T BCS_CDDAvailable;             /* '<S2>/Signal_Transfer' */
  real_T BCS_CDDFail;                  /* '<S2>/Signal_Transfer' */
  real_T BCS_MasterCylinderPr;         /* '<S2>/Signal_Transfer' */
  real_T BCS_MasterCylinderPrOffset;   /* '<S2>/Signal_Transfer' */
  real_T BCS_MasterCylinderPrOffsetVD; /* '<S2>/Signal_Transfer' */
  real_T BCS_MasterCylinderPrVD;       /* '<S2>/Signal_Transfer' */
  real_T BCS_NoBrakeForce;             /* '<S2>/Signal_Transfer' */
  real_T BCS_VehicleStandStillSt;      /* '<S2>/Signal_Transfer' */
  real_T SCU_5_Checksum;               /* '<S2>/Signal_Transfer' */
  real_T SCU_5_MsgCounter;             /* '<S2>/Signal_Transfer' */
  real_T BCS_FLWheelRotatedDirection;  /* '<S2>/Signal_Transfer' */
  real_T BCS_FLWheelRotatedDirectionVD;/* '<S2>/Signal_Transfer' */
  real_T BCS_FLWheelSpd;               /* '<S2>/Signal_Transfer' */
  real_T BCS_FLWheelSpdVD;             /* '<S2>/Signal_Transfer' */
  real_T BCS_FRWheelRotatedDirection;  /* '<S2>/Signal_Transfer' */
  real_T BCS_FRWheelRotatedDirectionVD;/* '<S2>/Signal_Transfer' */
  real_T BCS_FRWheelSpd;               /* '<S2>/Signal_Transfer' */
  real_T BCS_FRWheelSpdVD;             /* '<S2>/Signal_Transfer' */
  real_T SCU_6_Checksum;               /* '<S2>/Signal_Transfer' */
  real_T SCU_6_MsgCounter;             /* '<S2>/Signal_Transfer' */
  real_T BCS_RLWheelRotatedDirection;  /* '<S2>/Signal_Transfer' */
  real_T BCS_RLWheelRotatedDirectionVD;/* '<S2>/Signal_Transfer' */
  real_T BCS_RLWheelSpd;               /* '<S2>/Signal_Transfer' */
  real_T BCS_RLWheelSpdVD;             /* '<S2>/Signal_Transfer' */
  real_T BCS_RRWheelRotatedDirection;  /* '<S2>/Signal_Transfer' */
  real_T BCS_RRWheelRotatedDirectionVD;/* '<S2>/Signal_Transfer' */
  real_T BCS_RRWheelSpd;               /* '<S2>/Signal_Transfer' */
  real_T BCS_RRWheelSpdVD;             /* '<S2>/Signal_Transfer' */
  real_T SCU_7_Checksum;               /* '<S2>/Signal_Transfer' */
  real_T SCU_7_MsgCounter;             /* '<S2>/Signal_Transfer' */
  real_T BCS_ActVehLaltrlAccel;        /* '<S2>/Signal_Transfer' */
  real_T BCS_ActVehLaltrlAccelVD;      /* '<S2>/Signal_Transfer' */
  real_T BCS_ActVehLongAccel;          /* '<S2>/Signal_Transfer' */
  real_T BCS_ActVehLongAccelVD;        /* '<S2>/Signal_Transfer' */
  real_T BCS_VehLaltrlAccelOffset;     /* '<S2>/Signal_Transfer' */
  real_T BCS_VehLongAccelOffset;       /* '<S2>/Signal_Transfer' */
  real_T SCU_8_Checksum;               /* '<S2>/Signal_Transfer' */
  real_T SCU_8_MsgCounter;             /* '<S2>/Signal_Transfer' */
  real_T EPB_FailSt;                   /* '<S2>/Signal_Transfer' */
  real_T EPB_SwitchSt;                 /* '<S2>/Signal_Transfer' */
  real_T EPB_SwitchStVD;               /* '<S2>/Signal_Transfer' */
  real_T EPB_SysSt;                    /* '<S2>/Signal_Transfer' */
  real_T SCU_9_Checksum;               /* '<S2>/Signal_Transfer' */
  real_T SCU_9_MsgCounter;             /* '<S2>/Signal_Transfer' */
  real_T AutoTrqWhlReq_test;           /* '<S5>/AutoTrqWhlReq_test' */
  real_T BrakeReq_test;                /* '<S5>/BrakeReq_test' */
  real_T LatCtrlReq_test;              /* '<S5>/LatCtrlReq_test' */
  real_T get_SteeringAngle_m;          /* '<S1>/RT1' */
  real_T get_VehSpd_a;                 /* '<S1>/RT1' */
  real_T TmpRTBAtAION_auto_mode_requestInport2;
  real_T TmpRTBAtAION_auto_mode_requestInport3;
  real_T set_SteerAngSpdLimt_c;        /* '<S1>/RT1' */
  real_T AutoTrqWhlReq_test_p;
  real_T BrakeReq_test_e;
  real_T get_YawRate_o;                /* '<S1>/RT1' */
  real_T get_YawRateOffset_i;          /* '<S1>/RT1' */
  real_T get_MasterCylinderPr_g;       /* '<S1>/RT1' */
  real_T get_MasterCylinderPrOffset_k; /* '<S1>/RT1' */
  real_T get_FLWheelSpd_p;             /* '<S1>/RT1' */
  real_T get_FRWheelSpd_m;             /* '<S1>/RT1' */
  real_T get_RLWheelSpd_j;             /* '<S1>/RT1' */
  real_T get_RRWheelSpd_o;             /* '<S1>/RT1' */
  real_T get_ActVehLaltrlAccel_f;      /* '<S1>/RT1' */
  real_T get_ActVehLongAccel_a;        /* '<S1>/RT1' */
  real_T get_VehLaltrlAccelOffset_a;   /* '<S1>/RT1' */
  real_T get_VehLongAccelOffset_l;     /* '<S1>/RT1' */
  real_T get_ACCMaxRecpDecel_p;        /* '<S1>/RT1' */
  real_T get_GasPedalActPst_f;         /* '<S1>/RT1' */
  real_T get_GasPedalVirtualPst_f;     /* '<S1>/RT1' */
  real_T get_StrngWhlTorq_e;           /* '<S1>/RT1' */
  real_T set_SteerWhlTorqReq_o;        /* '<S1>/AION_auto_mode_request' */
  real_T set_SteerAngReq_o;            /* '<S1>/AION_auto_mode_request' */
  real_T set_SteerAngSpdLimt_k;        /* '<S1>/AION_auto_mode_request' */
  real_T set_AutoTrqWhlReq_g;          /* '<S1>/AION_auto_mode_request' */
  real_T set_BrakeReq_o;               /* '<S1>/AION_auto_mode_request' */
  real_T get_VehSpd_e;                 /* '<S1>/AION_auto_mode_request' */
  real_T get_YawRate_j;                /* '<S1>/AION_auto_mode_request' */
  real_T get_YawRateOffset_a;          /* '<S1>/AION_auto_mode_request' */
  real_T get_MasterCylinderPr_o;       /* '<S1>/AION_auto_mode_request' */
  real_T get_MasterCylinderPrOffset_e; /* '<S1>/AION_auto_mode_request' */
  real_T get_FLWheelSpd_l;             /* '<S1>/AION_auto_mode_request' */
  real_T get_FRWheelSpd_b;             /* '<S1>/AION_auto_mode_request' */
  real_T get_RLWheelSpd_a;             /* '<S1>/AION_auto_mode_request' */
  real_T get_RRWheelSpd_c;             /* '<S1>/AION_auto_mode_request' */
  real_T get_ActVehLaltrlAccel_b;      /* '<S1>/AION_auto_mode_request' */
  real_T get_ActVehLongAccel_l;        /* '<S1>/AION_auto_mode_request' */
  real_T get_VehLaltrlAccelOffset_i;   /* '<S1>/AION_auto_mode_request' */
  real_T get_VehLongAccelOffset_p;     /* '<S1>/AION_auto_mode_request' */
  real_T get_ACCMaxRecpDecel_a;        /* '<S1>/AION_auto_mode_request' */
  real_T get_GasPedalActPst_c;         /* '<S1>/AION_auto_mode_request' */
  real_T get_GasPedalVirtualPst_h;     /* '<S1>/AION_auto_mode_request' */
  real_T get_SteeringAngle_h;          /* '<S1>/AION_auto_mode_request' */
  real_T get_StrngWhlTorq_m;           /* '<S1>/AION_auto_mode_request' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack_o1;
                                  /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack_o2;
                                  /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack_o3;
                                  /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack_o4;
                                  /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack_o5;
                                  /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack_o6;
                                  /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack_o7;
                                  /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack_o8;
                                  /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack1_o1;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack1' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack1_o2;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack1' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack1_o3;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack1' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack1_o4;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack1' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack1_o5;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack1' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack10_o1;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack10_o2;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack10_o3;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack10_o4;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack10_o5;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack10_o6;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack10_o7;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack10_o8;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack10_o9;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack10_o10;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack10_o11;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack10_o12;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack11_o1;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack11' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack11_o2;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack11' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack11_o3;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack11' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack12_o1;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack12' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack12_o2;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack12' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack12_o3;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack12' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack12_o4;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack12' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack13_o1;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack13' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack13_o2;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack13' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack13_o3;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack13' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack13_o4;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack13' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack13_o5;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack13' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack13_o6;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack13' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack13_o7;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack13' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack14_o1;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack14' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack14_o2;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack14' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack14_o3;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack14' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack14_o4;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack14' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack14_o5;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack14' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack14_o6;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack14' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack14_o7;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack14' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack15_o1;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack15' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack15_o2;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack15' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack15_o3;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack15' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack15_o4;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack15' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack15_o5;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack15' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack15_o6;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack15' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack2_o1;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack2' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack2_o2;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack2' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack2_o3;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack2' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack2_o4;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack2' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack3_o1;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack3' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack3_o2;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack3' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack3_o3;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack3' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack3_o4;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack3' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack3_o5;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack3' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack3_o6;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack3' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack3_o7;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack3' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack3_o8;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack3' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack3_o9;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack3' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack3_o10;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack3' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack3_o11;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack3' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack3_o12;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack3' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack3_o13;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack3' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack4_o1;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack4' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack4_o2;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack4' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack4_o3;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack4' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack4_o4;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack4' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack4_o5;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack4' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack4_o6;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack4' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack4_o7;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack4' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack4_o8;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack4' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack4_o9;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack4' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack4_o10;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack4' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack5_o1;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack5' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack5_o2;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack5' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack5_o3;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack5' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack5_o4;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack5' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack5_o5;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack5' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack5_o6;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack5' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack5_o7;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack5' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack5_o8;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack5' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack5_o9;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack5' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack5_o10;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack5' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack6_o1;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack6' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack6_o2;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack6' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack6_o3;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack6' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack6_o4;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack6' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack6_o5;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack6' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack6_o6;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack6' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack6_o7;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack6' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack6_o8;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack6' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack7_o1;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack7' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack7_o2;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack7' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack7_o3;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack7' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack7_o4;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack7' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack7_o5;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack7' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack7_o6;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack7' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack8_o1;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack8' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack8_o2;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack8' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack8_o3;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack8' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack8_o4;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack8' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack8_o5;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack8' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack8_o6;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack8' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack8_o7;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack8' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack8_o8;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack8' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack8_o9;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack8' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack8_o10;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack8' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack9_o1;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack9' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack9_o2;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack9' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack9_o3;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack9' */
  real_T SCU2ADCU_Brake_Status_CAN_unpack9_o4;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack9' */
  real_T SCU2ADCU_Status1_CAN_unpack_o1;/* '<S26>/SCU2ADCU_Status1_CAN_unpack' */
  real_T SCU2ADCU_Status1_CAN_unpack_o2;/* '<S26>/SCU2ADCU_Status1_CAN_unpack' */
  real_T SCU2ADCU_Status1_CAN_unpack_o3;/* '<S26>/SCU2ADCU_Status1_CAN_unpack' */
  real_T SCU2ADCU_Status1_CAN_unpack_o4;/* '<S26>/SCU2ADCU_Status1_CAN_unpack' */
  real_T SCU2ADCU_Status1_CAN_unpack_o5;/* '<S26>/SCU2ADCU_Status1_CAN_unpack' */
  real_T SCU2ADCU_Status1_CAN_unpack_o6;/* '<S26>/SCU2ADCU_Status1_CAN_unpack' */
  real_T SCU2ADCU_Status1_CAN_unpack_o7;/* '<S26>/SCU2ADCU_Status1_CAN_unpack' */
  real_T SCU2ADCU_Status1_CAN_unpack_o8;/* '<S26>/SCU2ADCU_Status1_CAN_unpack' */
  real_T SCU2ADCU_Status1_CAN_unpack_o9;/* '<S26>/SCU2ADCU_Status1_CAN_unpack' */
  real_T SCU2ADCU_Status1_CAN_unpack_o10;/* '<S26>/SCU2ADCU_Status1_CAN_unpack' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o1;
                                      /* '<S26>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o2;
                                      /* '<S26>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o3;
                                      /* '<S26>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o4;
                                      /* '<S26>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o5;
                                      /* '<S26>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o6;
                                      /* '<S26>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o7;
                                      /* '<S26>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o8;
                                      /* '<S26>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o9;
                                      /* '<S26>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o10;
                                      /* '<S26>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o11;
                                      /* '<S26>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o12;
                                      /* '<S26>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o13;
                                      /* '<S26>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o14;
                                      /* '<S26>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o15;
                                      /* '<S26>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o16;
                                      /* '<S26>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o17;
                                      /* '<S26>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o18;
                                      /* '<S26>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T SCU2ADCU_Status1_CAN_unpack1_o19;
                                      /* '<S26>/SCU2ADCU_Status1_CAN_unpack1' */
  real_T get_VehSpd_b;                 /* '<S7>/MATLAB Function6' */
  real_T get_SteeringAngle_j;          /* '<S7>/MATLAB Function3' */
  uint32_T set_Checksum1;              /* '<S2>/Signal_Transfer' */
  uint32_T set_MsgCounter1;            /* '<S2>/Signal_Transfer' */
  uint32_T set_Checksum2;              /* '<S2>/Signal_Transfer' */
  uint32_T set_MsgCounter2;            /* '<S2>/Signal_Transfer' */
  uint32_T set_Checksum3;              /* '<S2>/Signal_Transfer' */
  uint32_T set_MsgCounter3;            /* '<S2>/Signal_Transfer' */
  uint32_T get_FLWheelSpdEdgesSum;     /* '<S2>/Signal_Transfer' */
  uint32_T get_FRWheelSpdEdgesSum;     /* '<S2>/Signal_Transfer' */
  uint32_T get_RLWheelSpdEdgesSum;     /* '<S2>/Signal_Transfer' */
  uint32_T get_RRWheelSpdEdgesSum;     /* '<S2>/Signal_Transfer' */
  uint32_T get_VehRng;                 /* '<S2>/Signal_Transfer' */
  uint32_T get_ActRecpTorq;            /* '<S2>/Signal_Transfer' */
  uint32_T get_ActVehWheelTorq;        /* '<S2>/Signal_Transfer' */
  uint32_T get_ACCButtInfo;            /* '<S2>/Signal_Transfer' */
  uint32_T get_VehWheelTorqMax;        /* '<S2>/Signal_Transfer' */
  uint32_T get_Checksum1;              /* '<S2>/Signal_Transfer' */
  uint32_T get_MsgCounter1;            /* '<S2>/Signal_Transfer' */
  uint32_T get_Checksum10;             /* '<S2>/Signal_Transfer' */
  uint32_T get_MsgCounter10;           /* '<S2>/Signal_Transfer' */
  uint32_T get_Checksum11;             /* '<S2>/Signal_Transfer' */
  uint32_T get_MsgCounter11;           /* '<S2>/Signal_Transfer' */
  uint32_T get_Checksum12;             /* '<S2>/Signal_Transfer' */
  uint32_T get_MsgCounter12;           /* '<S2>/Signal_Transfer' */
  uint32_T get_Checksum13;             /* '<S2>/Signal_Transfer' */
  uint32_T get_MsgCounter13;           /* '<S2>/Signal_Transfer' */
  uint32_T get_LatAutoCheckReport;     /* '<S2>/Signal_Transfer' */
  uint32_T get_LatQuitReport;          /* '<S2>/Signal_Transfer' */
  uint32_T get_LngAutoCheckIReport;    /* '<S2>/Signal_Transfer' */
  uint32_T get_LngQuitReport;          /* '<S2>/Signal_Transfer' */
  uint32_T get_Checksum16;             /* '<S2>/Signal_Transfer' */
  uint32_T get_MsgCounter16;           /* '<S2>/Signal_Transfer' */
  uint32_T get_Checksum17;             /* '<S2>/Signal_Transfer' */
  uint32_T get_MsgCounter17;           /* '<S2>/Signal_Transfer' */
  uint32_T get_Checksum18;             /* '<S2>/Signal_Transfer' */
  uint32_T get_MsgCounter18;           /* '<S2>/Signal_Transfer' */
  uint32_T get_Checksum2;              /* '<S2>/Signal_Transfer' */
  uint32_T get_MsgCounter2;            /* '<S2>/Signal_Transfer' */
  uint32_T get_Checksum3;              /* '<S2>/Signal_Transfer' */
  uint32_T get_MsgCounter3;            /* '<S2>/Signal_Transfer' */
  uint32_T get_Checksum4;              /* '<S2>/Signal_Transfer' */
  uint32_T get_MsgCounter4;            /* '<S2>/Signal_Transfer' */
  uint32_T get_Checksum5;              /* '<S2>/Signal_Transfer' */
  uint32_T get_MsgCounter5;            /* '<S2>/Signal_Transfer' */
  uint32_T get_Checksum6;              /* '<S2>/Signal_Transfer' */
  uint32_T get_MsgCounter6;            /* '<S2>/Signal_Transfer' */
  uint32_T get_Checksum7;              /* '<S2>/Signal_Transfer' */
  uint32_T get_MsgCounter7;            /* '<S2>/Signal_Transfer' */
  uint32_T get_Checksum8;              /* '<S2>/Signal_Transfer' */
  uint32_T get_MsgCounter8;            /* '<S2>/Signal_Transfer' */
  uint32_T get_Checksum9;              /* '<S2>/Signal_Transfer' */
  uint32_T get_MsgCounter9;            /* '<S2>/Signal_Transfer' */
  uint32_T get_SteeringAngleSpd;       /* '<S2>/Signal_Transfer' */
  uint32_T get_FLWheelSpdEdgesSum_h;   /* '<S1>/RT1' */
  uint32_T get_FRWheelSpdEdgesSum_e;   /* '<S1>/RT1' */
  uint32_T get_RLWheelSpdEdgesSum_h;   /* '<S1>/RT1' */
  uint32_T get_RRWheelSpdEdgesSum_n;   /* '<S1>/RT1' */
  uint32_T get_VehRng_j;               /* '<S1>/RT1' */
  uint32_T get_ActRecpTorq_j;          /* '<S1>/RT1' */
  uint32_T get_ActVehWheelTorq_d;      /* '<S1>/RT1' */
  uint32_T get_ACCButtInfo_i;          /* '<S1>/RT1' */
  uint32_T get_VehWheelTorqMax_d;      /* '<S1>/RT1' */
  uint32_T get_Checksum1_j;            /* '<S1>/RT1' */
  uint32_T get_MsgCounter1_f;          /* '<S1>/RT1' */
  uint32_T get_Checksum10_n;           /* '<S1>/RT1' */
  uint32_T get_MsgCounter10_o;         /* '<S1>/RT1' */
  uint32_T get_Checksum11_p;           /* '<S1>/RT1' */
  uint32_T get_MsgCounter11_f;         /* '<S1>/RT1' */
  uint32_T get_Checksum12_h;           /* '<S1>/RT1' */
  uint32_T get_MsgCounter12_c;         /* '<S1>/RT1' */
  uint32_T get_Checksum13_e;           /* '<S1>/RT1' */
  uint32_T get_MsgCounter13_i;         /* '<S1>/RT1' */
  uint32_T get_LatAutoCheckReport_d;   /* '<S1>/RT1' */
  uint32_T get_LatQuitReport_d;        /* '<S1>/RT1' */
  uint32_T get_LngAutoCheckIReport_e;  /* '<S1>/RT1' */
  uint32_T get_LngQuitReport_o;        /* '<S1>/RT1' */
  uint32_T get_Checksum16_p;           /* '<S1>/RT1' */
  uint32_T get_MsgCounter16_h;         /* '<S1>/RT1' */
  uint32_T get_Checksum17_g;           /* '<S1>/RT1' */
  uint32_T get_MsgCounter17_f;         /* '<S1>/RT1' */
  uint32_T get_Checksum18_n;           /* '<S1>/RT1' */
  uint32_T get_MsgCounter18_p;         /* '<S1>/RT1' */
  uint32_T get_Checksum2_i;            /* '<S1>/RT1' */
  uint32_T get_MsgCounter2_h;          /* '<S1>/RT1' */
  uint32_T get_Checksum3_n;            /* '<S1>/RT1' */
  uint32_T get_MsgCounter3_p;          /* '<S1>/RT1' */
  uint32_T get_Checksum4_n;            /* '<S1>/RT1' */
  uint32_T get_MsgCounter4_b;          /* '<S1>/RT1' */
  uint32_T get_Checksum5_g;            /* '<S1>/RT1' */
  uint32_T get_MsgCounter5_o;          /* '<S1>/RT1' */
  uint32_T get_Checksum6_p;            /* '<S1>/RT1' */
  uint32_T get_MsgCounter6_l;          /* '<S1>/RT1' */
  uint32_T get_Checksum7_b;            /* '<S1>/RT1' */
  uint32_T get_MsgCounter7_i;          /* '<S1>/RT1' */
  uint32_T get_Checksum8_k;            /* '<S1>/RT1' */
  uint32_T get_MsgCounter8_p;          /* '<S1>/RT1' */
  uint32_T get_Checksum9_f;            /* '<S1>/RT1' */
  uint32_T get_MsgCounter9_g;          /* '<S1>/RT1' */
  uint32_T get_SteeringAngleSpd_j;     /* '<S1>/RT1' */
  uint32_T set_Checksum1_b;            /* '<S1>/AION_auto_mode_request' */
  uint32_T set_MsgCounter1_h;          /* '<S1>/AION_auto_mode_request' */
  uint32_T set_Checksum2_e;            /* '<S1>/AION_auto_mode_request' */
  uint32_T set_MsgCounter2_p;          /* '<S1>/AION_auto_mode_request' */
  uint32_T set_Checksum3_n;            /* '<S1>/AION_auto_mode_request' */
  uint32_T set_MsgCounter3_b;          /* '<S1>/AION_auto_mode_request' */
  uint32_T get_FLWheelSpdEdgesSum_a;   /* '<S1>/AION_auto_mode_request' */
  uint32_T get_FRWheelSpdEdgesSum_f;   /* '<S1>/AION_auto_mode_request' */
  uint32_T get_RLWheelSpdEdgesSum_f;   /* '<S1>/AION_auto_mode_request' */
  uint32_T get_RRWheelSpdEdgesSum_c;   /* '<S1>/AION_auto_mode_request' */
  uint32_T get_VehRng_k;               /* '<S1>/AION_auto_mode_request' */
  uint32_T get_ActRecpTorq_l;          /* '<S1>/AION_auto_mode_request' */
  uint32_T get_ActVehWheelTorq_i;      /* '<S1>/AION_auto_mode_request' */
  uint32_T get_ACCButtInfo_d;          /* '<S1>/AION_auto_mode_request' */
  uint32_T get_VehWheelTorqMax_g;      /* '<S1>/AION_auto_mode_request' */
  uint32_T get_Checksum1_d;            /* '<S1>/AION_auto_mode_request' */
  uint32_T get_MsgCounter1_c;          /* '<S1>/AION_auto_mode_request' */
  uint32_T get_Checksum10_h;           /* '<S1>/AION_auto_mode_request' */
  uint32_T get_MsgCounter10_c;         /* '<S1>/AION_auto_mode_request' */
  uint32_T get_Checksum11_k;           /* '<S1>/AION_auto_mode_request' */
  uint32_T get_MsgCounter11_g;         /* '<S1>/AION_auto_mode_request' */
  uint32_T get_Checksum12_j;           /* '<S1>/AION_auto_mode_request' */
  uint32_T get_MsgCounter12_i;         /* '<S1>/AION_auto_mode_request' */
  uint32_T get_Checksum13_l;           /* '<S1>/AION_auto_mode_request' */
  uint32_T get_MsgCounter13_b;         /* '<S1>/AION_auto_mode_request' */
  uint32_T get_LatAutoCheckReport_h;   /* '<S1>/AION_auto_mode_request' */
  uint32_T get_LatQuitReport_g;        /* '<S1>/AION_auto_mode_request' */
  uint32_T get_LngAutoCheckIReport_b;  /* '<S1>/AION_auto_mode_request' */
  uint32_T get_LngQuitReport_b;        /* '<S1>/AION_auto_mode_request' */
  uint32_T get_Checksum16_d;           /* '<S1>/AION_auto_mode_request' */
  uint32_T get_MsgCounter16_o;         /* '<S1>/AION_auto_mode_request' */
  uint32_T get_Checksum17_f;           /* '<S1>/AION_auto_mode_request' */
  uint32_T get_MsgCounter17_a;         /* '<S1>/AION_auto_mode_request' */
  uint32_T get_Checksum18_l;           /* '<S1>/AION_auto_mode_request' */
  uint32_T get_MsgCounter18_a;         /* '<S1>/AION_auto_mode_request' */
  uint32_T get_Checksum2_f;            /* '<S1>/AION_auto_mode_request' */
  uint32_T get_MsgCounter2_d;          /* '<S1>/AION_auto_mode_request' */
  uint32_T get_Checksum3_j;            /* '<S1>/AION_auto_mode_request' */
  uint32_T get_MsgCounter3_o;          /* '<S1>/AION_auto_mode_request' */
  uint32_T get_Checksum4_m;            /* '<S1>/AION_auto_mode_request' */
  uint32_T get_MsgCounter4_d;          /* '<S1>/AION_auto_mode_request' */
  uint32_T get_Checksum5_p;            /* '<S1>/AION_auto_mode_request' */
  uint32_T get_MsgCounter5_h;          /* '<S1>/AION_auto_mode_request' */
  uint32_T get_Checksum6_h;            /* '<S1>/AION_auto_mode_request' */
  uint32_T get_MsgCounter6_d;          /* '<S1>/AION_auto_mode_request' */
  uint32_T get_Checksum7_k;            /* '<S1>/AION_auto_mode_request' */
  uint32_T get_MsgCounter7_a;          /* '<S1>/AION_auto_mode_request' */
  uint32_T get_Checksum8_a;            /* '<S1>/AION_auto_mode_request' */
  uint32_T get_MsgCounter8_k;          /* '<S1>/AION_auto_mode_request' */
  uint32_T get_Checksum9_i;            /* '<S1>/AION_auto_mode_request' */
  uint32_T get_MsgCounter9_c;          /* '<S1>/AION_auto_mode_request' */
  uint32_T get_SteeringAngleSpd_f;     /* '<S1>/AION_auto_mode_request' */
  uint32_T set_Checksum1_n;            /* '<S1>/RT1' */
  uint32_T set_MsgCounter1_a;          /* '<S1>/RT1' */
  uint32_T set_Checksum2_o;            /* '<S1>/RT1' */
  uint32_T set_MsgCounter2_g;          /* '<S1>/RT1' */
  uint32_T set_Checksum3_j;            /* '<S1>/RT1' */
  uint32_T set_MsgCounter3_k;          /* '<S1>/RT1' */
  Validation_status set_GearLvlReqVD;  /* '<S2>/Signal_Transfer' */
  Validation_status DataTypeConversion4;/* '<S5>/Data Type Conversion4' */
  Validation_status TmpRTBAtAION_auto_mode_requestInport9;
  Validation_status set_GearLvlReqVD_b;/* '<S1>/AION_auto_mode_request' */
  Ready_status get_VehRdySt;           /* '<S2>/Signal_Transfer' */
  Ready_status get_VehRdySt_c;         /* '<S1>/RT1' */
  Ready_status get_VehRdySt_d;         /* '<S1>/AION_auto_mode_request' */
  Ready_status get_VehRdySt_a;         /* '<S7>/MATLAB Function' */
  Light_request set_TurnLightReq;      /* '<S2>/Signal_Transfer' */
  Light_request DataTypeConversion14;  /* '<S5>/Data Type Conversion14' */
  Light_request TmpRTBAtAION_auto_mode_requestInport19;
  Light_request set_TurnLightReq_c;    /* '<S1>/AION_auto_mode_request' */
  Gear_status get_CrntGearLvl;         /* '<S2>/Signal_Transfer' */
  Gear_status get_CrntGearLvl_g;       /* '<S1>/RT1' */
  Gear_status get_CrntGearLvl_h;       /* '<S1>/AION_auto_mode_request' */
  Gear_status get_CrntGearLvl_b;       /* '<S7>/MATLAB Function5' */
  Gear_request set_GearLvlReq;         /* '<S2>/Signal_Transfer' */
  Gear_request DataTypeConversion2;    /* '<S5>/Data Type Conversion2' */
  Gear_request TmpRTBAtAION_auto_mode_requestInport8;
  Gear_request set_GearLvlReq_l;       /* '<S1>/AION_auto_mode_request' */
  Fault_status get_LeftTurnLampFaultSt;/* '<S2>/Signal_Transfer' */
  Fault_status get_RightTurnLampFaultSt;/* '<S2>/Signal_Transfer' */
  Fault_status get_LeftTurnLampFaultSt_o;/* '<S1>/RT1' */
  Fault_status get_RightTurnLampFaultSt_m;/* '<S1>/RT1' */
  Fault_status get_LeftTurnLampFaultSt_j;/* '<S1>/AION_auto_mode_request' */
  Fault_status get_RightTurnLampFaultSt_mz;/* '<S1>/AION_auto_mode_request' */
  Error_status get_FailSt;             /* '<S2>/Signal_Transfer' */
  Error_status get_FailSt_e;           /* '<S1>/RT1' */
  Error_status get_FailSt_g;           /* '<S1>/AION_auto_mode_request' */
  Enable_request set_BodyCtrlReq;      /* '<S2>/Signal_Transfer' */
  Enable_request DataTypeConversion12; /* '<S5>/Data Type Conversion12' */
  Enable_request TmpRTBAtAION_auto_mode_requestInport17;
  Enable_request set_BodyCtrlReq_a;    /* '<S1>/AION_auto_mode_request' */
  Drive_status get_VehDrvMod;          /* '<S2>/Signal_Transfer' */
  Drive_status get_VehDrvMod_a;        /* '<S1>/RT1' */
  Drive_status get_VehDrvMod_i;        /* '<S1>/AION_auto_mode_request' */
  Drive_status get_VehDrvMod_c;        /* '<S7>/MATLAB Function1' */
  Control_status get_LatCtrlMode;      /* '<S2>/Signal_Transfer' */
  Control_status get_LngCtrlMode;      /* '<S2>/Signal_Transfer' */
  Control_status get_LatCtrlMode_l;    /* '<S1>/RT1' */
  Control_status get_LngCtrlMode_i;    /* '<S1>/RT1' */
  Control_status get_LatCtrlMode_la;   /* '<S1>/AION_auto_mode_request' */
  Control_status get_LngCtrlMode_k;    /* '<S1>/AION_auto_mode_request' */
  Control_status get_LngCtrlMode_m;    /* '<S7>/MATLAB Function4' */
  Control_status get_LatCtrlMode_m;    /* '<S7>/MATLAB Function2' */
  Control_request set_LatCtrlReq;      /* '<S2>/Signal_Transfer' */
  Control_request set_LngCtrlReq;      /* '<S2>/Signal_Transfer' */
  Control_request DataTypeConversion7; /* '<S5>/Data Type Conversion7' */
  Control_request DataTypeConversion9; /* '<S5>/Data Type Conversion9' */
  Control_request TmpRTBAtAION_auto_mode_requestInport1;
  Control_request TmpRTBAtAION_auto_mode_requestInport5;
  Control_request set_LatCtrlReq_n;    /* '<S1>/AION_auto_mode_request' */
  Control_request set_LngCtrlReq_p;    /* '<S1>/AION_auto_mode_request' */
  Beam_request set_BeamReq;            /* '<S2>/Signal_Transfer' */
  Beam_request DataTypeConversion18;   /* '<S5>/Data Type Conversion18' */
  Beam_request TmpRTBAtAION_auto_mode_requestInport16;
  Beam_request set_BeamReq_j;          /* '<S1>/AION_auto_mode_request' */
  Available_status get_CtrlAvailable;  /* '<S2>/Signal_Transfer' */
  Available_status get_CtrlAvailable_j;/* '<S1>/RT1' */
  Available_status get_CtrlAvailable_c;/* '<S1>/AION_auto_mode_request' */
  Available_status get_CtrlAvailable_a;/* '<S7>/MATLAB Function7' */
  Active_status get_HazardLampSt;      /* '<S2>/Signal_Transfer' */
  Active_status get_HighBeamSt;        /* '<S2>/Signal_Transfer' */
  Active_status get_HornSt;            /* '<S2>/Signal_Transfer' */
  Active_status get_LeftTurnLampSt;    /* '<S2>/Signal_Transfer' */
  Active_status get_LowBeamSt;         /* '<S2>/Signal_Transfer' */
  Active_status get_RightTurnLampSt;   /* '<S2>/Signal_Transfer' */
  Active_status get_LowBeamSt_i;       /* '<S1>/RT1' */
  Active_status get_HighBeamSt_d;      /* '<S1>/RT1' */
  Active_status get_LeftTurnLampSt_g;  /* '<S1>/RT1' */
  Active_status get_RightTurnLampSt_l; /* '<S1>/RT1' */
  Active_status get_HazardLampSt_g;    /* '<S1>/RT1' */
  Active_status get_HornSt_f;          /* '<S1>/RT1' */
  Active_status get_HazardLampSt_l;    /* '<S1>/AION_auto_mode_request' */
  Active_status get_HighBeamSt_h;      /* '<S1>/AION_auto_mode_request' */
  Active_status get_HornSt_h;          /* '<S1>/AION_auto_mode_request' */
  Active_status get_LeftTurnLampSt_c;  /* '<S1>/AION_auto_mode_request' */
  Active_status get_LowBeamSt_n;       /* '<S1>/AION_auto_mode_request' */
  Active_status get_RightTurnLampSt_ld;/* '<S1>/AION_auto_mode_request' */
  Active_status get_HornSt_o;          /* '<S7>/MATLAB Function9' */
  Active_status get_HazardLampSt_n;    /* '<S7>/MATLAB Function8' */
  Active_status get_RightTurnLampSt_i; /* '<S7>/MATLAB Function13' */
  Active_status get_LeftTurnLampSt_l;  /* '<S7>/MATLAB Function12' */
  Active_status get_HighBeamSt_a;      /* '<S7>/MATLAB Function11' */
  Active_status get_LowBeamSt_nw;      /* '<S7>/MATLAB Function10' */
  Active_request set_HornRingReq;      /* '<S2>/Signal_Transfer' */
  Active_request DataTypeConversion16; /* '<S5>/Data Type Conversion16' */
  Active_request TmpRTBAtAION_auto_mode_requestInport18;
  Active_request set_HornRingReq_g;    /* '<S1>/AION_auto_mode_request' */
  uint8_T get_ABSActiveSt;             /* '<S2>/Signal_Transfer' */
  uint8_T get_ABSFaultSt;              /* '<S2>/Signal_Transfer' */
  uint8_T get_VDCActiveSt;             /* '<S2>/Signal_Transfer' */
  uint8_T get_VDCFaultSt;              /* '<S2>/Signal_Transfer' */
  uint8_T get_VehSpdVD;                /* '<S2>/Signal_Transfer' */
  uint8_T get_FLWheelSpdEdgesSumVD;    /* '<S2>/Signal_Transfer' */
  uint8_T get_FRWheelSpdEdgesSumVD;    /* '<S2>/Signal_Transfer' */
  uint8_T get_RLWheelSpdEdgesSumVD;    /* '<S2>/Signal_Transfer' */
  uint8_T get_RRWheelSpdEdgesSumVD;    /* '<S2>/Signal_Transfer' */
  uint8_T get_YawRateSt;               /* '<S2>/Signal_Transfer' */
  uint8_T get_HDCCtrlSt;               /* '<S2>/Signal_Transfer' */
  uint8_T get_HDCErrSt;                /* '<S2>/Signal_Transfer' */
  uint8_T get_AEBActive;               /* '<S2>/Signal_Transfer' */
  uint8_T get_AEBAvailable;            /* '<S2>/Signal_Transfer' */
  uint8_T get_CDDActive;               /* '<S2>/Signal_Transfer' */
  uint8_T get_CDDAvailable;            /* '<S2>/Signal_Transfer' */
  uint8_T get_CDDFail;                 /* '<S2>/Signal_Transfer' */
  uint8_T get_MasterCylinderPrOffsetVD;/* '<S2>/Signal_Transfer' */
  uint8_T get_MasterCylinderPrVD;      /* '<S2>/Signal_Transfer' */
  uint8_T get_NoBrakeForce;            /* '<S2>/Signal_Transfer' */
  uint8_T get_VehicleStandStillSt;     /* '<S2>/Signal_Transfer' */
  uint8_T get_FLWheelRotatedDirection; /* '<S2>/Signal_Transfer' */
  uint8_T get_FLWheelRotatedDirectionVD;/* '<S2>/Signal_Transfer' */
  uint8_T get_FLWheelSpdVD;            /* '<S2>/Signal_Transfer' */
  uint8_T get_FRWheelRotatedDirection; /* '<S2>/Signal_Transfer' */
  uint8_T get_FRWheelRotatedDirectionVD;/* '<S2>/Signal_Transfer' */
  uint8_T get_FRWheelSpdVD;            /* '<S2>/Signal_Transfer' */
  uint8_T get_RLWheelRotatedDirection; /* '<S2>/Signal_Transfer' */
  uint8_T get_RLWheelRotatedDirectionVD;/* '<S2>/Signal_Transfer' */
  uint8_T get_RLWheelSpdVD;            /* '<S2>/Signal_Transfer' */
  uint8_T get_RRWheelRotatedDirection; /* '<S2>/Signal_Transfer' */
  uint8_T get_RRWheelRotatedDirectionVD;/* '<S2>/Signal_Transfer' */
  uint8_T get_RRWheelSpdVD;            /* '<S2>/Signal_Transfer' */
  uint8_T get_ActVehLaltrlAccelVD;     /* '<S2>/Signal_Transfer' */
  uint8_T get_ActVehLongAccelVD;       /* '<S2>/Signal_Transfer' */
  uint8_T get_GearLeverIntv;           /* '<S2>/Signal_Transfer' */
  uint8_T get_ActRecpTorqSt;           /* '<S2>/Signal_Transfer' */
  uint8_T get_CrntGearLvlVD;           /* '<S2>/Signal_Transfer' */
  uint8_T get_ACCMaxRecpDecelVD;       /* '<S2>/Signal_Transfer' */
  uint8_T get_LateralAssistBtnInfo;    /* '<S2>/Signal_Transfer' */
  uint8_T get_LateralAssistBtnInfoVD;  /* '<S2>/Signal_Transfer' */
  uint8_T get_AccElecECFail;           /* '<S2>/Signal_Transfer' */
  uint8_T get_GasPedalActPstVD;        /* '<S2>/Signal_Transfer' */
  uint8_T get_BrkPedalSt;              /* '<S2>/Signal_Transfer' */
  uint8_T get_BrkPedalStVD;            /* '<S2>/Signal_Transfer' */
  uint8_T get_GasPedalVirtualPstVD;    /* '<S2>/Signal_Transfer' */
  uint8_T get_EStopSwSt;               /* '<S2>/Signal_Transfer' */
  uint8_T get_EStopSwStVD;             /* '<S2>/Signal_Transfer' */
  uint8_T get_StrngWhlIntv;            /* '<S2>/Signal_Transfer' */
  uint8_T get_SwitchSt;                /* '<S2>/Signal_Transfer' */
  uint8_T get_SwitchStVD;              /* '<S2>/Signal_Transfer' */
  uint8_T get_SysSt;                   /* '<S2>/Signal_Transfer' */
  uint8_T get_DriverSeatBeltSt;        /* '<S2>/Signal_Transfer' */
  uint8_T get_PsngrSeatBeltSt;         /* '<S2>/Signal_Transfer' */
  uint8_T get_SteeringAngleSpdVD;      /* '<S2>/Signal_Transfer' */
  uint8_T get_SteeringAngleVD;         /* '<S2>/Signal_Transfer' */
  uint8_T get_StrngWhlTorqVD;          /* '<S2>/Signal_Transfer' */
  uint8_T get_ThermalSt;               /* '<S2>/Signal_Transfer' */
  uint8_T get_WarnLamp;                /* '<S2>/Signal_Transfer' */
  uint8_T get_DriverDoorAjarSt;        /* '<S2>/Signal_Transfer' */
  uint8_T get_FrontFogLampSt;          /* '<S2>/Signal_Transfer' */
  uint8_T get_FrontWiperSt;            /* '<S2>/Signal_Transfer' */
  uint8_T get_KeySt;                   /* '<S2>/Signal_Transfer' */
  uint8_T get_PsngrDoorAjarSt;         /* '<S2>/Signal_Transfer' */
  uint8_T get_RLDoorAjarSt;            /* '<S2>/Signal_Transfer' */
  uint8_T get_RRDoorAjarSt;            /* '<S2>/Signal_Transfer' */
  uint8_T get_RearFogLampSt;           /* '<S2>/Signal_Transfer' */
  uint8_T DataTypeConversion8;         /* '<S5>/Data Type Conversion8' */
  uint8_T DataTypeConversion17;        /* '<S5>/Data Type Conversion17' */
  uint8_T DataTypeConversion11;        /* '<S5>/Data Type Conversion11' */
  uint8_T DataTypeConversion15;        /* '<S5>/Data Type Conversion15' */
  uint8_T DataTypeConversion13;        /* '<S5>/Data Type Conversion13' */
  uint8_T DataTypeConversion10;        /* '<S5>/Data Type Conversion10' */
  uint8_T DataTypeConversion3;         /* '<S5>/Data Type Conversion3' */
  uint8_T DataTypeConversion1;         /* '<S5>/Data Type Conversion1' */
  uint8_T get_ABSActiveSt_j;           /* '<S1>/RT1' */
  uint8_T get_ABSFaultSt_h;            /* '<S1>/RT1' */
  uint8_T get_VDCActiveSt_h;           /* '<S1>/RT1' */
  uint8_T get_VDCFaultSt_l;            /* '<S1>/RT1' */
  uint8_T get_VehSpdVD_a;              /* '<S1>/RT1' */
  uint8_T get_FLWheelSpdEdgesSumVD_d;  /* '<S1>/RT1' */
  uint8_T get_FRWheelSpdEdgesSumVD_f;  /* '<S1>/RT1' */
  uint8_T get_RLWheelSpdEdgesSumVD_c;  /* '<S1>/RT1' */
  uint8_T get_RRWheelSpdEdgesSumVD_g;  /* '<S1>/RT1' */
  uint8_T get_YawRateSt_m;             /* '<S1>/RT1' */
  uint8_T get_HDCCtrlSt_m;             /* '<S1>/RT1' */
  uint8_T get_HDCErrSt_h;              /* '<S1>/RT1' */
  uint8_T get_AEBActive_b;             /* '<S1>/RT1' */
  uint8_T get_AEBAvailable_m;          /* '<S1>/RT1' */
  uint8_T get_CDDActive_h;             /* '<S1>/RT1' */
  uint8_T get_CDDAvailable_d;          /* '<S1>/RT1' */
  uint8_T get_CDDFail_f;               /* '<S1>/RT1' */
  uint8_T get_MasterCylinderPrOffsetVD_i;/* '<S1>/RT1' */
  uint8_T get_MasterCylinderPrVD_l;    /* '<S1>/RT1' */
  uint8_T get_NoBrakeForce_l;          /* '<S1>/RT1' */
  uint8_T get_VehicleStandStillSt_a;   /* '<S1>/RT1' */
  uint8_T get_FLWheelRotatedDirection_h;/* '<S1>/RT1' */
  uint8_T get_FLWheelRotatedDirectionVD_g;/* '<S1>/RT1' */
  uint8_T get_FLWheelSpdVD_a;          /* '<S1>/RT1' */
  uint8_T get_FRWheelRotatedDirection_f;/* '<S1>/RT1' */
  uint8_T get_FRWheelRotatedDirectionVD_b;/* '<S1>/RT1' */
  uint8_T get_FRWheelSpdVD_o;          /* '<S1>/RT1' */
  uint8_T get_RLWheelRotatedDirection_i;/* '<S1>/RT1' */
  uint8_T get_RLWheelRotatedDirectionVD_k;/* '<S1>/RT1' */
  uint8_T get_RLWheelSpdVD_g;          /* '<S1>/RT1' */
  uint8_T get_RRWheelRotatedDirection_m;/* '<S1>/RT1' */
  uint8_T get_RRWheelRotatedDirectionVD_e;/* '<S1>/RT1' */
  uint8_T get_RRWheelSpdVD_d;          /* '<S1>/RT1' */
  uint8_T get_ActVehLaltrlAccelVD_l;   /* '<S1>/RT1' */
  uint8_T get_ActVehLongAccelVD_a;     /* '<S1>/RT1' */
  uint8_T get_GearLeverIntv_d;         /* '<S1>/RT1' */
  uint8_T get_ActRecpTorqSt_e;         /* '<S1>/RT1' */
  uint8_T get_CrntGearLvlVD_p;         /* '<S1>/RT1' */
  uint8_T get_ACCMaxRecpDecelVD_n;     /* '<S1>/RT1' */
  uint8_T get_LateralAssistBtnInfo_n;  /* '<S1>/RT1' */
  uint8_T get_LateralAssistBtnInfoVD_g;/* '<S1>/RT1' */
  uint8_T get_AccElecECFail_b;         /* '<S1>/RT1' */
  uint8_T get_GasPedalActPstVD_k;      /* '<S1>/RT1' */
  uint8_T get_BrkPedalSt_d;            /* '<S1>/RT1' */
  uint8_T get_BrkPedalStVD_k;          /* '<S1>/RT1' */
  uint8_T get_GasPedalVirtualPstVD_g;  /* '<S1>/RT1' */
  uint8_T get_EStopSwSt_k;             /* '<S1>/RT1' */
  uint8_T get_EStopSwStVD_e;           /* '<S1>/RT1' */
  uint8_T get_StrngWhlIntv_g;          /* '<S1>/RT1' */
  uint8_T get_SwitchSt_a;              /* '<S1>/RT1' */
  uint8_T get_SwitchStVD_g;            /* '<S1>/RT1' */
  uint8_T get_SysSt_b;                 /* '<S1>/RT1' */
  uint8_T get_DriverSeatBeltSt_p;      /* '<S1>/RT1' */
  uint8_T get_PsngrSeatBeltSt_e;       /* '<S1>/RT1' */
  uint8_T get_SteeringAngleSpdVD_f;    /* '<S1>/RT1' */
  uint8_T get_SteeringAngleVD_d;       /* '<S1>/RT1' */
  uint8_T get_StrngWhlTorqVD_c;        /* '<S1>/RT1' */
  uint8_T get_ThermalSt_m;             /* '<S1>/RT1' */
  uint8_T get_WarnLamp_d;              /* '<S1>/RT1' */
  uint8_T get_DriverDoorAjarSt_m;      /* '<S1>/RT1' */
  uint8_T get_FrontFogLampSt_k;        /* '<S1>/RT1' */
  uint8_T get_FrontWiperSt_f;          /* '<S1>/RT1' */
  uint8_T get_KeySt_e;                 /* '<S1>/RT1' */
  uint8_T get_PsngrDoorAjarSt_a;       /* '<S1>/RT1' */
  uint8_T get_RLDoorAjarSt_e;          /* '<S1>/RT1' */
  uint8_T get_RRDoorAjarSt_n;          /* '<S1>/RT1' */
  uint8_T get_RearFogLampSt_f;         /* '<S1>/RT1' */
  uint8_T get_ABSActiveSt_l;           /* '<S1>/AION_auto_mode_request' */
  uint8_T get_ABSFaultSt_g;            /* '<S1>/AION_auto_mode_request' */
  uint8_T get_VDCActiveSt_j;           /* '<S1>/AION_auto_mode_request' */
  uint8_T get_VDCFaultSt_n;            /* '<S1>/AION_auto_mode_request' */
  uint8_T get_VehSpdVD_b;              /* '<S1>/AION_auto_mode_request' */
  uint8_T get_FLWheelSpdEdgesSumVD_a;  /* '<S1>/AION_auto_mode_request' */
  uint8_T get_FRWheelSpdEdgesSumVD_i;  /* '<S1>/AION_auto_mode_request' */
  uint8_T get_RLWheelSpdEdgesSumVD_d;  /* '<S1>/AION_auto_mode_request' */
  uint8_T get_RRWheelSpdEdgesSumVD_k;  /* '<S1>/AION_auto_mode_request' */
  uint8_T get_YawRateSt_f;             /* '<S1>/AION_auto_mode_request' */
  uint8_T get_HDCCtrlSt_j;             /* '<S1>/AION_auto_mode_request' */
  uint8_T get_HDCErrSt_d;              /* '<S1>/AION_auto_mode_request' */
  uint8_T get_AEBActive_m;             /* '<S1>/AION_auto_mode_request' */
  uint8_T get_AEBAvailable_b;          /* '<S1>/AION_auto_mode_request' */
  uint8_T get_CDDActive_n;             /* '<S1>/AION_auto_mode_request' */
  uint8_T get_CDDAvailable_m;          /* '<S1>/AION_auto_mode_request' */
  uint8_T get_CDDFail_j;               /* '<S1>/AION_auto_mode_request' */
  uint8_T get_MasterCylinderPrOffsetVD_h;/* '<S1>/AION_auto_mode_request' */
  uint8_T get_MasterCylinderPrVD_c;    /* '<S1>/AION_auto_mode_request' */
  uint8_T get_NoBrakeForce_f;          /* '<S1>/AION_auto_mode_request' */
  uint8_T get_VehicleStandStillSt_f;   /* '<S1>/AION_auto_mode_request' */
  uint8_T get_FLWheelRotatedDirection_p;/* '<S1>/AION_auto_mode_request' */
  uint8_T get_FLWheelRotatedDirectionVD_k;/* '<S1>/AION_auto_mode_request' */
  uint8_T get_FLWheelSpdVD_o;          /* '<S1>/AION_auto_mode_request' */
  uint8_T get_FRWheelRotatedDirection_p;/* '<S1>/AION_auto_mode_request' */
  uint8_T get_FRWheelRotatedDirectionVD_k;/* '<S1>/AION_auto_mode_request' */
  uint8_T get_FRWheelSpdVD_b;          /* '<S1>/AION_auto_mode_request' */
  uint8_T get_RLWheelRotatedDirection_f;/* '<S1>/AION_auto_mode_request' */
  uint8_T get_RLWheelRotatedDirectionVD_p;/* '<S1>/AION_auto_mode_request' */
  uint8_T get_RLWheelSpdVD_a;          /* '<S1>/AION_auto_mode_request' */
  uint8_T get_RRWheelRotatedDirection_n;/* '<S1>/AION_auto_mode_request' */
  uint8_T get_RRWheelRotatedDirectionVD_j;/* '<S1>/AION_auto_mode_request' */
  uint8_T get_RRWheelSpdVD_c;          /* '<S1>/AION_auto_mode_request' */
  uint8_T get_ActVehLaltrlAccelVD_n;   /* '<S1>/AION_auto_mode_request' */
  uint8_T get_ActVehLongAccelVD_p;     /* '<S1>/AION_auto_mode_request' */
  uint8_T get_GearLeverIntv_df;        /* '<S1>/AION_auto_mode_request' */
  uint8_T get_ActRecpTorqSt_c;         /* '<S1>/AION_auto_mode_request' */
  uint8_T get_CrntGearLvlVD_c;         /* '<S1>/AION_auto_mode_request' */
  uint8_T get_ACCMaxRecpDecelVD_l;     /* '<S1>/AION_auto_mode_request' */
  uint8_T get_LateralAssistBtnInfo_j;  /* '<S1>/AION_auto_mode_request' */
  uint8_T get_LateralAssistBtnInfoVD_e;/* '<S1>/AION_auto_mode_request' */
  uint8_T get_AccElecECFail_l;         /* '<S1>/AION_auto_mode_request' */
  uint8_T get_GasPedalActPstVD_i;      /* '<S1>/AION_auto_mode_request' */
  uint8_T get_BrkPedalSt_n;            /* '<S1>/AION_auto_mode_request' */
  uint8_T get_BrkPedalStVD_j;          /* '<S1>/AION_auto_mode_request' */
  uint8_T get_GasPedalVirtualPstVD_p;  /* '<S1>/AION_auto_mode_request' */
  uint8_T get_EStopSwSt_h;             /* '<S1>/AION_auto_mode_request' */
  uint8_T get_EStopSwStVD_o;           /* '<S1>/AION_auto_mode_request' */
  uint8_T get_StrngWhlIntv_m;          /* '<S1>/AION_auto_mode_request' */
  uint8_T get_SwitchSt_l;              /* '<S1>/AION_auto_mode_request' */
  uint8_T get_SwitchStVD_j;            /* '<S1>/AION_auto_mode_request' */
  uint8_T get_SysSt_e;                 /* '<S1>/AION_auto_mode_request' */
  uint8_T get_DriverSeatBeltSt_g;      /* '<S1>/AION_auto_mode_request' */
  uint8_T get_PsngrSeatBeltSt_m;       /* '<S1>/AION_auto_mode_request' */
  uint8_T get_SteeringAngleSpdVD_l;    /* '<S1>/AION_auto_mode_request' */
  uint8_T get_SteeringAngleVD_b;       /* '<S1>/AION_auto_mode_request' */
  uint8_T get_StrngWhlTorqVD_f;        /* '<S1>/AION_auto_mode_request' */
  uint8_T get_ThermalSt_g;             /* '<S1>/AION_auto_mode_request' */
  uint8_T get_WarnLamp_j;              /* '<S1>/AION_auto_mode_request' */
  uint8_T get_DriverDoorAjarSt_mx;     /* '<S1>/AION_auto_mode_request' */
  uint8_T get_FrontFogLampSt_c;        /* '<S1>/AION_auto_mode_request' */
  uint8_T get_FrontWiperSt_m;          /* '<S1>/AION_auto_mode_request' */
  uint8_T get_KeySt_i;                 /* '<S1>/AION_auto_mode_request' */
  uint8_T get_PsngrDoorAjarSt_e;       /* '<S1>/AION_auto_mode_request' */
  uint8_T get_RLDoorAjarSt_n;          /* '<S1>/AION_auto_mode_request' */
  uint8_T get_RRDoorAjarSt_b;          /* '<S1>/AION_auto_mode_request' */
  uint8_T get_RearFogLampSt_i;         /* '<S1>/AION_auto_mode_request' */
  boolean_T SCU2ADCU_CAN_read_o1;      /* '<S25>/SCU2ADCU_CAN_read' */
};

/* Block states (default storage) for system '<Root>' */
struct DW_AION_IDS_SPEEDGOAT_T {
  AION_ApplicationBus UnitDelay_DSTATE;/* '<S1>/Unit Delay' */
  AION_ApplicationBus TmpRTBAtUnitDelayInport1_Buf[3];/* synthesized block */
  CAN_DATATYPE RT2_Buf0;               /* '<S28>/RT2' */
  CAN_DATATYPE RT2_Buf1;               /* '<S28>/RT2' */
  CAN_DATATYPE RT2_Buf2;               /* '<S28>/RT2' */
  real_T AutoTrqWhlReq_test_Buf0;      /* synthesized block */
  real_T AutoTrqWhlReq_test_Buf1;      /* synthesized block */
  real_T AutoTrqWhlReq_test_Buf2;      /* synthesized block */
  real_T BrakeReq_test_Buf0;           /* synthesized block */
  real_T BrakeReq_test_Buf1;           /* synthesized block */
  real_T BrakeReq_test_Buf2;           /* synthesized block */
  real_T TmpRTBAtAION_auto_mode_requestInport2_Buf0;/* synthesized block */
  real_T TmpRTBAtAION_auto_mode_requestInport2_Buf1;/* synthesized block */
  real_T TmpRTBAtAION_auto_mode_requestInport2_Buf2;/* synthesized block */
  real_T TmpRTBAtAION_auto_mode_requestInport3_Buf0;/* synthesized block */
  real_T TmpRTBAtAION_auto_mode_requestInport3_Buf1;/* synthesized block */
  real_T TmpRTBAtAION_auto_mode_requestInport3_Buf2;/* synthesized block */
  real_T RT1_141_Buf0;                 /* '<S1>/RT1' */
  real_T RT1_141_Buf1;                 /* '<S1>/RT1' */
  real_T RT1_141_Buf2;                 /* '<S1>/RT1' */
  real_T RT1_145_Buf0;                 /* '<S1>/RT1' */
  real_T RT1_145_Buf1;                 /* '<S1>/RT1' */
  real_T RT1_145_Buf2;                 /* '<S1>/RT1' */
  real_T RT1_24_Buf0;                  /* '<S1>/RT1' */
  real_T RT1_24_Buf1;                  /* '<S1>/RT1' */
  real_T RT1_24_Buf2;                  /* '<S1>/RT1' */
  real_T RT1_34_Buf0;                  /* '<S1>/RT1' */
  real_T RT1_34_Buf1;                  /* '<S1>/RT1' */
  real_T RT1_34_Buf2;                  /* '<S1>/RT1' */
  real_T RT1_35_Buf0;                  /* '<S1>/RT1' */
  real_T RT1_35_Buf1;                  /* '<S1>/RT1' */
  real_T RT1_35_Buf2;                  /* '<S1>/RT1' */
  real_T RT1_4_Buf0;                   /* '<S1>/RT1' */
  real_T RT1_4_Buf1;                   /* '<S1>/RT1' */
  real_T RT1_4_Buf2;                   /* '<S1>/RT1' */
  real_T RT1_44_Buf0;                  /* '<S1>/RT1' */
  real_T RT1_44_Buf1;                  /* '<S1>/RT1' */
  real_T RT1_44_Buf2;                  /* '<S1>/RT1' */
  real_T RT1_45_Buf0;                  /* '<S1>/RT1' */
  real_T RT1_45_Buf1;                  /* '<S1>/RT1' */
  real_T RT1_45_Buf2;                  /* '<S1>/RT1' */
  real_T RT1_52_Buf0;                  /* '<S1>/RT1' */
  real_T RT1_52_Buf1;                  /* '<S1>/RT1' */
  real_T RT1_52_Buf2;                  /* '<S1>/RT1' */
  real_T RT1_56_Buf0;                  /* '<S1>/RT1' */
  real_T RT1_56_Buf1;                  /* '<S1>/RT1' */
  real_T RT1_56_Buf2;                  /* '<S1>/RT1' */
  real_T RT1_60_Buf0;                  /* '<S1>/RT1' */
  real_T RT1_60_Buf1;                  /* '<S1>/RT1' */
  real_T RT1_60_Buf2;                  /* '<S1>/RT1' */
  real_T RT1_64_Buf0;                  /* '<S1>/RT1' */
  real_T RT1_64_Buf1;                  /* '<S1>/RT1' */
  real_T RT1_64_Buf2;                  /* '<S1>/RT1' */
  real_T RT1_66_Buf0;                  /* '<S1>/RT1' */
  real_T RT1_66_Buf1;                  /* '<S1>/RT1' */
  real_T RT1_66_Buf2;                  /* '<S1>/RT1' */
  real_T RT1_68_Buf0;                  /* '<S1>/RT1' */
  real_T RT1_68_Buf1;                  /* '<S1>/RT1' */
  real_T RT1_68_Buf2;                  /* '<S1>/RT1' */
  real_T RT1_70_Buf0;                  /* '<S1>/RT1' */
  real_T RT1_70_Buf1;                  /* '<S1>/RT1' */
  real_T RT1_70_Buf2;                  /* '<S1>/RT1' */
  real_T RT1_71_Buf0;                  /* '<S1>/RT1' */
  real_T RT1_71_Buf1;                  /* '<S1>/RT1' */
  real_T RT1_71_Buf2;                  /* '<S1>/RT1' */
  real_T RT1_80_Buf0;                  /* '<S1>/RT1' */
  real_T RT1_80_Buf1;                  /* '<S1>/RT1' */
  real_T RT1_80_Buf2;                  /* '<S1>/RT1' */
  real_T RT1_87_Buf0;                  /* '<S1>/RT1' */
  real_T RT1_87_Buf1;                  /* '<S1>/RT1' */
  real_T RT1_87_Buf2;                  /* '<S1>/RT1' */
  real_T RT1_92_Buf0;                  /* '<S1>/RT1' */
  real_T RT1_92_Buf1;                  /* '<S1>/RT1' */
  real_T RT1_92_Buf2;                  /* '<S1>/RT1' */
  void *ADCU2SCU_Brake_Command_CAN_write_PWORK;
                                  /* '<S28>/ADCU2SCU_Brake_Command_CAN_write' */
  void *ADCU2SCU_Gear_Command_CAN_write_PWORK;
                                   /* '<S28>/ADCU2SCU_Gear_Command_CAN_write' */
  void* RT2_d0_SEMAPHORE;              /* '<S28>/RT2' */
  void* AutoTrqWhlReq_test_d0_SEMAPHORE;/* synthesized block */
  void* BrakeReq_test_d0_SEMAPHORE;    /* synthesized block */
  void* TmpRTBAtAION_auto_mode_requestInport1_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtAION_auto_mode_requestInport16_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtAION_auto_mode_requestInport17_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtAION_auto_mode_requestInport18_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtAION_auto_mode_requestInport19_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtAION_auto_mode_requestInport2_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtAION_auto_mode_requestInport3_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtAION_auto_mode_requestInport5_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtAION_auto_mode_requestInport8_d0_SEMAPHORE;/* synthesized block */
  void* TmpRTBAtAION_auto_mode_requestInport9_d0_SEMAPHORE;/* synthesized block */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_AutoTrqWhlReq_test_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_BrakeReq_test_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_LatCtrlReq_test_at_outport_0_PWORK;/* synthesized block */

  void* RT1_10_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_100_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_101_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_102_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_103_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_106_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_107_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_108_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_109_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_11_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_110_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_111_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_113_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_114_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_115_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_116_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_117_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_118_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_119_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_12_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_120_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_121_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_122_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_123_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_124_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_125_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_126_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_127_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_128_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_129_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_13_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_130_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_131_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_132_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_133_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_134_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_135_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_14_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_141_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_142_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_145_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_149_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_15_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_153_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_154_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_155_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_157_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_158_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_159_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_164_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_165_d0_SEMAPHORE;          /* '<S1>/RT1' */
  void* RT1_24_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_26_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_28_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_30_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_32_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_34_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_35_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_4_d0_SEMAPHORE;            /* '<S1>/RT1' */
  void* RT1_44_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_45_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_52_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_56_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_60_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_64_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_66_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_68_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_70_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_71_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_73_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_74_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_75_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_76_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_78_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_80_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_82_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_85_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_87_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_89_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_92_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_94_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_95_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_96_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_97_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_98_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* RT1_99_d0_SEMAPHORE;           /* '<S1>/RT1' */
  void* TmpRTBAtUnitDelayInport1_d0_SEMAPHORE;/* synthesized block */
  void *ADCU2SCU_Steer_Command_CAN_write_PWORK;
                                  /* '<S28>/ADCU2SCU_Steer_Command_CAN_write' */
  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Subsystem2_at_outport_0_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Subsystem2_at_outport_1_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Subsystem2_at_outport_10_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Subsystem2_at_outport_11_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Subsystem2_at_outport_12_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Subsystem2_at_outport_13_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Subsystem2_at_outport_2_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Subsystem2_at_outport_3_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Subsystem2_at_outport_4_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Subsystem2_at_outport_5_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Subsystem2_at_outport_6_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Subsystem2_at_outport_7_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Subsystem2_at_outport_8_PWORK;/* synthesized block */

  struct {
    void *AQHandles;
  } TAQSigLogging_InsertedFor_Subsystem2_at_outport_9_PWORK;/* synthesized block */

  uint32_T RT1_10_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_10_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_10_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_100_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_100_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_100_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_101_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_101_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_101_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_102_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_102_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_102_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_103_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_103_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_103_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_106_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_106_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_106_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_108_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_108_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_108_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_109_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_109_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_109_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_11_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_11_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_11_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_111_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_111_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_111_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_113_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_113_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_113_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_114_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_114_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_114_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_115_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_115_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_115_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_116_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_116_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_116_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_117_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_117_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_117_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_118_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_118_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_118_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_119_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_119_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_119_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_12_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_12_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_12_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_120_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_120_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_120_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_121_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_121_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_121_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_122_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_122_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_122_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_123_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_123_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_123_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_124_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_124_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_124_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_125_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_125_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_125_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_126_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_126_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_126_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_127_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_127_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_127_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_128_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_128_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_128_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_129_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_129_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_129_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_13_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_13_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_13_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_130_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_130_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_130_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_131_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_131_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_131_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_132_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_132_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_132_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_133_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_133_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_133_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_134_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_134_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_134_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_14_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_14_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_14_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_142_Buf0;               /* '<S1>/RT1' */
  uint32_T RT1_142_Buf1;               /* '<S1>/RT1' */
  uint32_T RT1_142_Buf2;               /* '<S1>/RT1' */
  uint32_T RT1_15_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_15_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_15_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_26_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_26_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_26_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_28_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_28_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_28_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_30_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_30_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_30_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_32_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_32_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_32_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_75_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_75_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_75_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_76_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_76_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_76_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_82_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_82_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_82_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_85_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_85_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_85_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_89_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_89_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_89_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_94_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_94_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_94_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_95_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_95_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_95_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_96_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_96_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_96_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_97_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_97_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_97_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_98_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_98_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_98_Buf2;                /* '<S1>/RT1' */
  uint32_T RT1_99_Buf0;                /* '<S1>/RT1' */
  uint32_T RT1_99_Buf1;                /* '<S1>/RT1' */
  uint32_T RT1_99_Buf2;                /* '<S1>/RT1' */
  Control_request TmpRTBAtAION_auto_mode_requestInport1_Buf0;/* synthesized block */
  Control_request TmpRTBAtAION_auto_mode_requestInport1_Buf1;/* synthesized block */
  Control_request TmpRTBAtAION_auto_mode_requestInport1_Buf2;/* synthesized block */
  Control_request TmpRTBAtAION_auto_mode_requestInport5_Buf0;/* synthesized block */
  Control_request TmpRTBAtAION_auto_mode_requestInport5_Buf1;/* synthesized block */
  Control_request TmpRTBAtAION_auto_mode_requestInport5_Buf2;/* synthesized block */
  Gear_request TmpRTBAtAION_auto_mode_requestInport8_Buf0;/* synthesized block */
  Gear_request TmpRTBAtAION_auto_mode_requestInport8_Buf1;/* synthesized block */
  Gear_request TmpRTBAtAION_auto_mode_requestInport8_Buf2;/* synthesized block */
  Validation_status TmpRTBAtAION_auto_mode_requestInport9_Buf0;/* synthesized block */
  Validation_status TmpRTBAtAION_auto_mode_requestInport9_Buf1;/* synthesized block */
  Validation_status TmpRTBAtAION_auto_mode_requestInport9_Buf2;/* synthesized block */
  Beam_request TmpRTBAtAION_auto_mode_requestInport16_Buf0;/* synthesized block */
  Beam_request TmpRTBAtAION_auto_mode_requestInport16_Buf1;/* synthesized block */
  Beam_request TmpRTBAtAION_auto_mode_requestInport16_Buf2;/* synthesized block */
  Enable_request TmpRTBAtAION_auto_mode_requestInport17_Buf0;/* synthesized block */
  Enable_request TmpRTBAtAION_auto_mode_requestInport17_Buf1;/* synthesized block */
  Enable_request TmpRTBAtAION_auto_mode_requestInport17_Buf2;/* synthesized block */
  Active_request TmpRTBAtAION_auto_mode_requestInport18_Buf0;/* synthesized block */
  Active_request TmpRTBAtAION_auto_mode_requestInport18_Buf1;/* synthesized block */
  Active_request TmpRTBAtAION_auto_mode_requestInport18_Buf2;/* synthesized block */
  Light_request TmpRTBAtAION_auto_mode_requestInport19_Buf0;/* synthesized block */
  Light_request TmpRTBAtAION_auto_mode_requestInport19_Buf1;/* synthesized block */
  Light_request TmpRTBAtAION_auto_mode_requestInport19_Buf2;/* synthesized block */
  Drive_status RT1_73_Buf0;            /* '<S1>/RT1' */
  Drive_status RT1_73_Buf1;            /* '<S1>/RT1' */
  Drive_status RT1_73_Buf2;            /* '<S1>/RT1' */
  Ready_status RT1_74_Buf0;            /* '<S1>/RT1' */
  Ready_status RT1_74_Buf1;            /* '<S1>/RT1' */
  Ready_status RT1_74_Buf2;            /* '<S1>/RT1' */
  Gear_status RT1_78_Buf0;             /* '<S1>/RT1' */
  Gear_status RT1_78_Buf1;             /* '<S1>/RT1' */
  Gear_status RT1_78_Buf2;             /* '<S1>/RT1' */
  Control_status RT1_107_Buf0;         /* '<S1>/RT1' */
  Control_status RT1_107_Buf1;         /* '<S1>/RT1' */
  Control_status RT1_107_Buf2;         /* '<S1>/RT1' */
  Control_status RT1_110_Buf0;         /* '<S1>/RT1' */
  Control_status RT1_110_Buf1;         /* '<S1>/RT1' */
  Control_status RT1_110_Buf2;         /* '<S1>/RT1' */
  Error_status RT1_135_Buf0;           /* '<S1>/RT1' */
  Error_status RT1_135_Buf1;           /* '<S1>/RT1' */
  Error_status RT1_135_Buf2;           /* '<S1>/RT1' */
  Available_status RT1_149_Buf0;       /* '<S1>/RT1' */
  Available_status RT1_149_Buf1;       /* '<S1>/RT1' */
  Available_status RT1_149_Buf2;       /* '<S1>/RT1' */
  Active_status RT1_153_Buf0;          /* '<S1>/RT1' */
  Active_status RT1_153_Buf1;          /* '<S1>/RT1' */
  Active_status RT1_153_Buf2;          /* '<S1>/RT1' */
  Active_status RT1_154_Buf0;          /* '<S1>/RT1' */
  Active_status RT1_154_Buf1;          /* '<S1>/RT1' */
  Active_status RT1_154_Buf2;          /* '<S1>/RT1' */
  Active_status RT1_155_Buf0;          /* '<S1>/RT1' */
  Active_status RT1_155_Buf1;          /* '<S1>/RT1' */
  Active_status RT1_155_Buf2;          /* '<S1>/RT1' */
  Active_status RT1_158_Buf0;          /* '<S1>/RT1' */
  Active_status RT1_158_Buf1;          /* '<S1>/RT1' */
  Active_status RT1_158_Buf2;          /* '<S1>/RT1' */
  Active_status RT1_159_Buf0;          /* '<S1>/RT1' */
  Active_status RT1_159_Buf1;          /* '<S1>/RT1' */
  Active_status RT1_159_Buf2;          /* '<S1>/RT1' */
  Active_status RT1_165_Buf0;          /* '<S1>/RT1' */
  Active_status RT1_165_Buf1;          /* '<S1>/RT1' */
  Active_status RT1_165_Buf2;          /* '<S1>/RT1' */
  Fault_status RT1_157_Buf0;           /* '<S1>/RT1' */
  Fault_status RT1_157_Buf1;           /* '<S1>/RT1' */
  Fault_status RT1_157_Buf2;           /* '<S1>/RT1' */
  Fault_status RT1_164_Buf0;           /* '<S1>/RT1' */
  Fault_status RT1_164_Buf1;           /* '<S1>/RT1' */
  Fault_status RT1_164_Buf2;           /* '<S1>/RT1' */
  int_T CANSetup_IWORK;                /* '<S2>/CAN Setup' */
  int_T ADCU2SCU_Brake_Command_CAN_pack_ModeSignalID;
                                   /* '<S28>/ADCU2SCU_Brake_Command_CAN_pack' */
  int_T ADCU2SCU_Brake_Command_CAN_write_IWORK;
                                  /* '<S28>/ADCU2SCU_Brake_Command_CAN_write' */
  int_T ADCU2SCU_Gear_Command_CAN_pack_ModeSignalID;
                                    /* '<S28>/ADCU2SCU_Gear_Command_CAN_pack' */
  int_T ADCU2SCU_Gear_Command_CAN_write_IWORK;
                                   /* '<S28>/ADCU2SCU_Gear_Command_CAN_write' */
  int_T ADCU2SCU_Steer_Command_CAN_pack_ModeSignalID;
                                   /* '<S28>/ADCU2SCU_Steer_Command_CAN_pack' */
  int_T ADCU2SCU_Steer_Command_CAN_write_IWORK;
                                  /* '<S28>/ADCU2SCU_Steer_Command_CAN_write' */
  int_T SCU2ADCU_CAN_read_IWORK;       /* '<S25>/SCU2ADCU_CAN_read' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack_ModeSignalID;
                                  /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack_StatusPortID;
                                  /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack1_ModeSignalID;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack1' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack1_StatusPortID;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack1' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack10_ModeSignalID;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack10_StatusPortID;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack10' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack11_ModeSignalID;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack11' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack11_StatusPortID;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack11' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack12_ModeSignalID;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack12' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack12_StatusPortID;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack12' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack13_ModeSignalID;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack13' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack13_StatusPortID;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack13' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack14_ModeSignalID;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack14' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack14_StatusPortID;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack14' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack15_ModeSignalID;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack15' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack15_StatusPortID;
                                /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack15' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack2_ModeSignalID;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack2' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack2_StatusPortID;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack2' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack3_ModeSignalID;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack3' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack3_StatusPortID;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack3' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack4_ModeSignalID;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack4' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack4_StatusPortID;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack4' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack5_ModeSignalID;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack5' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack5_StatusPortID;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack5' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack6_ModeSignalID;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack6' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack6_StatusPortID;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack6' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack7_ModeSignalID;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack7' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack7_StatusPortID;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack7' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack8_ModeSignalID;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack8' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack8_StatusPortID;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack8' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack9_ModeSignalID;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack9' */
  int_T SCU2ADCU_Brake_Status_CAN_unpack9_StatusPortID;
                                 /* '<S26>/SCU2ADCU_Brake_Status_CAN_unpack9' */
  int_T SCU2ADCU_Status1_CAN_unpack_ModeSignalID;/* '<S26>/SCU2ADCU_Status1_CAN_unpack' */
  int_T SCU2ADCU_Status1_CAN_unpack_StatusPortID;/* '<S26>/SCU2ADCU_Status1_CAN_unpack' */
  int_T SCU2ADCU_Status1_CAN_unpack1_ModeSignalID;
                                      /* '<S26>/SCU2ADCU_Status1_CAN_unpack1' */
  int_T SCU2ADCU_Status1_CAN_unpack1_StatusPortID;
                                      /* '<S26>/SCU2ADCU_Status1_CAN_unpack1' */
  int8_T RT2_LstBufWR;                 /* '<S28>/RT2' */
  int8_T RT2_RDBuf;                    /* '<S28>/RT2' */
  int8_T AutoTrqWhlReq_test_LstBufWR;  /* synthesized block */
  int8_T AutoTrqWhlReq_test_RDBuf;     /* synthesized block */
  int8_T BrakeReq_test_LstBufWR;       /* synthesized block */
  int8_T BrakeReq_test_RDBuf;          /* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport1_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport1_RDBuf;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport16_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport16_RDBuf;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport17_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport17_RDBuf;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport18_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport18_RDBuf;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport19_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport19_RDBuf;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport2_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport2_RDBuf;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport3_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport3_RDBuf;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport5_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport5_RDBuf;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport8_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport8_RDBuf;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport9_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtAION_auto_mode_requestInport9_RDBuf;/* synthesized block */
  int8_T RT1_10_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_10_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_100_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_100_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_101_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_101_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_102_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_102_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_103_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_103_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_106_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_106_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_107_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_107_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_108_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_108_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_109_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_109_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_11_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_11_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_110_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_110_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_111_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_111_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_113_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_113_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_114_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_114_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_115_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_115_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_116_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_116_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_117_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_117_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_118_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_118_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_119_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_119_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_12_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_12_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_120_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_120_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_121_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_121_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_122_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_122_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_123_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_123_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_124_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_124_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_125_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_125_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_126_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_126_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_127_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_127_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_128_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_128_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_129_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_129_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_13_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_13_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_130_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_130_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_131_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_131_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_132_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_132_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_133_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_133_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_134_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_134_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_135_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_135_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_14_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_14_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_141_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_141_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_142_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_142_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_145_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_145_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_149_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_149_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_15_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_15_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_153_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_153_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_154_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_154_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_155_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_155_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_157_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_157_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_158_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_158_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_159_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_159_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_164_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_164_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_165_LstBufWR;             /* '<S1>/RT1' */
  int8_T RT1_165_RDBuf;                /* '<S1>/RT1' */
  int8_T RT1_24_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_24_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_26_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_26_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_28_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_28_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_30_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_30_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_32_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_32_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_34_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_34_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_35_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_35_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_4_LstBufWR;               /* '<S1>/RT1' */
  int8_T RT1_4_RDBuf;                  /* '<S1>/RT1' */
  int8_T RT1_44_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_44_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_45_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_45_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_52_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_52_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_56_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_56_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_60_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_60_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_64_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_64_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_66_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_66_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_68_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_68_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_70_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_70_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_71_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_71_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_73_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_73_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_74_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_74_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_75_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_75_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_76_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_76_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_78_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_78_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_80_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_80_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_82_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_82_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_85_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_85_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_87_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_87_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_89_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_89_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_92_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_92_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_94_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_94_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_95_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_95_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_96_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_96_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_97_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_97_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_98_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_98_RDBuf;                 /* '<S1>/RT1' */
  int8_T RT1_99_LstBufWR;              /* '<S1>/RT1' */
  int8_T RT1_99_RDBuf;                 /* '<S1>/RT1' */
  int8_T TmpRTBAtUnitDelayInport1_LstBufWR;/* synthesized block */
  int8_T TmpRTBAtUnitDelayInport1_RDBuf;/* synthesized block */
  MdlrefDW_AION_signal_transfer_T Signal_Transfer_InstanceData;/* '<S2>/Signal_Transfer' */
  MdlrefDW_AION_auto_mode_request_T AION_auto_mode_request_InstanceData;/* '<S1>/AION_auto_mode_request' */
};

/* Real-time Model Data Structure */
struct tag_RTM_AION_IDS_SPEEDGOAT_T {
  struct SimStruct_tag * *childSfunctions;
  const char_T *errorStatus;
  SS_SimMode simMode;
  RTWSolverInfo solverInfo;
  RTWSolverInfo *solverInfoPtr;
  void *sfcnInfo;

  /*
   * NonInlinedSFcns:
   * The following substructure contains information regarding
   * non-inlined s-functions used in the model.
   */
  struct {
    RTWSfcnInfo sfcnInfo;
    time_T *taskTimePtrs[4];
    SimStruct childSFunctions[5];
    SimStruct *childSFunctionPtrs[5];
    struct _ssBlkInfo2 blkInfo2[5];
    struct _ssSFcnModelMethods2 methods2[5];
    struct _ssSFcnModelMethods3 methods3[5];
    struct _ssSFcnModelMethods4 methods4[5];
    struct _ssStatesInfo2 statesInfo2[5];
    ssPeriodicStatesInfo periodicStatesInfo[5];
    struct _ssPortInfo2 inputOutputPortInfo2[5];
    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortOutputs outputPortInfo[2];
      struct _ssOutPortUnit outputPortUnits[2];
      struct _ssOutPortCoSimAttribute outputPortCoSimAttribute[2];
      uint_T attribs[6];
      mxArray *params[6];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn0;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      uint_T attribs[31];
      mxArray *params[31];
      struct _ssDWorkRecord dWork[1];
      struct _ssDWorkAuxRecord dWorkAux[1];
    } Sfcn1;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn2;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn3;

    struct {
      time_T sfcnPeriod[1];
      time_T sfcnOffset[1];
      int_T sfcnTsMap[1];
      struct _ssPortInputs inputPortInfo[1];
      struct _ssInPortUnit inputPortUnits[1];
      struct _ssInPortCoSimAttribute inputPortCoSimAttribute[1];
      uint_T attribs[7];
      mxArray *params[7];
      struct _ssDWorkRecord dWork[2];
      struct _ssDWorkAuxRecord dWorkAux[2];
    } Sfcn4;
  } NonInlinedSFcns;

  boolean_T zCCacheNeedsReset;
  boolean_T derivCacheNeedsReset;
  boolean_T CTOutputIncnstWithState;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T options;
    int_T numContStates;
    int_T numU;
    int_T numY;
    int_T numSampTimes;
    int_T numBlocks;
    int_T numBlockIO;
    int_T numBlockPrms;
    int_T numDwork;
    int_T numSFcnPrms;
    int_T numSFcns;
    int_T numIports;
    int_T numOports;
    int_T numNonSampZCs;
    int_T sysDirFeedThru;
    int_T rtwGenSfcn;
  } Sizes;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T stepSize;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    uint32_T clockTick1;
    uint32_T clockTickH1;
    time_T stepSize1;
    uint32_T clockTick2;
    uint32_T clockTickH2;
    time_T stepSize2;
    uint32_T clockTick3;
    uint32_T clockTickH3;
    struct {
      uint32_T TID[4];
      uint32_T cLimit[4];
    } TaskCounters;

    time_T tStart;
    time_T tFinal;
    time_T timeOfLastOutput;
    boolean_T stopRequestedFlag;
    time_T *sampleTimes;
    time_T *offsetTimes;
    int_T *sampleTimeTaskIDPtr;
    int_T *sampleHits;
    int_T *perTaskSampleHits;
    time_T *t;
    time_T sampleTimesArray[4];
    time_T offsetTimesArray[4];
    int_T sampleTimeTaskIDArray[4];
    int_T sampleHitArray[4];
    int_T perTaskSampleHitsArray[16];
    time_T tArray[4];
  } Timing;
};

/* Block signals (default storage) */
#ifdef __cplusplus

extern "C" {

#endif

  extern struct B_AION_IDS_SPEEDGOAT_T AION_IDS_SPEEDGOAT_B;

#ifdef __cplusplus

}
#endif

/* Block states (default storage) */
extern struct DW_AION_IDS_SPEEDGOAT_T AION_IDS_SPEEDGOAT_DW;

/* External data declarations for dependent source files */
extern const AION_ApplicationBus AION_IDS_SPEEDGOAT_rtZAION_ApplicationBus;/* AION_ApplicationBus ground */

/* Model block global parameters (default storage) */
extern real_T rtP_AutoTrqWhlReq_test;  /* Variable: AutoTrqWhlReq_test
                                        * Referenced by: '<S5>/AutoTrqWhlReq_test'
                                        */
extern real_T rtP_BeamReq_test;        /* Variable: BeamReq_test
                                        * Referenced by: '<S5>/BeamReq_test'
                                        */
extern real_T rtP_BodyCtrlReq_test;    /* Variable: BodyCtrlReq_test
                                        * Referenced by: '<S5>/BodyCtrlReq_test'
                                        */
extern real_T rtP_BrakeReq_test;       /* Variable: BrakeReq_test
                                        * Referenced by: '<S5>/BrakeReq_test'
                                        */
extern real_T rtP_GearLvlReqVD_test;   /* Variable: GearLvlReqVD_test
                                        * Referenced by: '<S5>/GearLvlReqVD_test'
                                        */
extern real_T rtP_GearLvlReq_test;     /* Variable: GearLvlReq_test
                                        * Referenced by: '<S5>/GearLvlReq_test'
                                        */
extern real_T rtP_HornRingReq_test;    /* Variable: HornRingReq_test
                                        * Referenced by: '<S5>/HornRingReq_test'
                                        */
extern real_T rtP_LatCtrlReq_test;     /* Variable: LatCtrlReq_test
                                        * Referenced by: '<S5>/LatCtrlReq_test'
                                        */
extern real_T rtP_LngCtrlReq_test;     /* Variable: LngCtrlReq_test
                                        * Referenced by: '<S5>/LngCtrlReq_test'
                                        */
extern real_T rtP_SCU_ADCU_CYCLE_TIME; /* Variable: SCU_ADCU_CYCLE_TIME
                                        * Referenced by: '<S24>/SCU2ADCU_SampleTime(s)'
                                        */
extern real_T rtP_SteerAngReq_test;    /* Variable: SteerAngReq_test
                                        * Referenced by: '<S5>/SteerAngReq_test'
                                        */
extern real_T rtP_SteerWhlTorqReq_test;/* Variable: SteerWhlTorqReq_test
                                        * Referenced by: '<S5>/SteerWhlTorqReq_test'
                                        */
extern real_T rtP_TurnLightReq_test;   /* Variable: TurnLightReq_test
                                        * Referenced by: '<S5>/TurnLightReq_test'
                                        */
extern void rate_scheduler(void);

#ifdef __cplusplus

extern "C" {

#endif

  /* Model entry point functions */
  extern void AION_IDS_SPEEDGOAT_initialize(void);
  extern void AION_IDS_SPEEDGOAT_step0(void);
  extern void AION_IDS_SPEEDGOAT_step1(void);
  extern void AION_IDS_SPEEDGOAT_step2(void);
  extern void AION_IDS_SPEEDGOAT_step3(void);
  extern void AION_IDS_SPEEDGOAT_step(int_T tid);
  extern void AION_IDS_SPEEDGOAT_terminate(void);

#ifdef __cplusplus

}
#endif

/* Real-time Model object */
#ifdef __cplusplus

extern "C" {

#endif

  extern RT_MODEL_AION_IDS_SPEEDGOAT_T *const AION_IDS_SPEEDGOAT_M;

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
 * '<Root>' : 'AION_IDS_SPEEDGOAT'
 * '<S1>'   : 'AION_IDS_SPEEDGOAT/Application_Layer'
 * '<S2>'   : 'AION_IDS_SPEEDGOAT/Communication_Layer'
 * '<S3>'   : 'AION_IDS_SPEEDGOAT/DashBoard'
 * '<S4>'   : 'AION_IDS_SPEEDGOAT/DocBlock'
 * '<S5>'   : 'AION_IDS_SPEEDGOAT/Application_Layer/Initialization'
 * '<S6>'   : 'AION_IDS_SPEEDGOAT/Application_Layer/Signal_test'
 * '<S7>'   : 'AION_IDS_SPEEDGOAT/Application_Layer/Signal_test/Subsystem2'
 * '<S8>'   : 'AION_IDS_SPEEDGOAT/Application_Layer/Signal_test/Subsystem2/MATLAB Function'
 * '<S9>'   : 'AION_IDS_SPEEDGOAT/Application_Layer/Signal_test/Subsystem2/MATLAB Function1'
 * '<S10>'  : 'AION_IDS_SPEEDGOAT/Application_Layer/Signal_test/Subsystem2/MATLAB Function10'
 * '<S11>'  : 'AION_IDS_SPEEDGOAT/Application_Layer/Signal_test/Subsystem2/MATLAB Function11'
 * '<S12>'  : 'AION_IDS_SPEEDGOAT/Application_Layer/Signal_test/Subsystem2/MATLAB Function12'
 * '<S13>'  : 'AION_IDS_SPEEDGOAT/Application_Layer/Signal_test/Subsystem2/MATLAB Function13'
 * '<S14>'  : 'AION_IDS_SPEEDGOAT/Application_Layer/Signal_test/Subsystem2/MATLAB Function2'
 * '<S15>'  : 'AION_IDS_SPEEDGOAT/Application_Layer/Signal_test/Subsystem2/MATLAB Function3'
 * '<S16>'  : 'AION_IDS_SPEEDGOAT/Application_Layer/Signal_test/Subsystem2/MATLAB Function4'
 * '<S17>'  : 'AION_IDS_SPEEDGOAT/Application_Layer/Signal_test/Subsystem2/MATLAB Function5'
 * '<S18>'  : 'AION_IDS_SPEEDGOAT/Application_Layer/Signal_test/Subsystem2/MATLAB Function6'
 * '<S19>'  : 'AION_IDS_SPEEDGOAT/Application_Layer/Signal_test/Subsystem2/MATLAB Function7'
 * '<S20>'  : 'AION_IDS_SPEEDGOAT/Application_Layer/Signal_test/Subsystem2/MATLAB Function8'
 * '<S21>'  : 'AION_IDS_SPEEDGOAT/Application_Layer/Signal_test/Subsystem2/MATLAB Function9'
 * '<S22>'  : 'AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_InputPort'
 * '<S23>'  : 'AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_OutputPort'
 * '<S24>'  : 'AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_InputPort/InputCAN'
 * '<S25>'  : 'AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_InputPort/InputCAN/SCU2ADCU(IDS)_loop_receive'
 * '<S26>'  : 'AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_InputPort/InputCAN/SCU2ADCU(IDS)_loop_receive/CAN_unpack_SCU2ADCU'
 * '<S27>'  : 'AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_OutputPort/OutputCAN'
 * '<S28>'  : 'AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_OutputPort/OutputCAN/CAN_pack_ADCU2SCU'
 */
#endif                                 /* RTW_HEADER_AION_IDS_SPEEDGOAT_h_ */

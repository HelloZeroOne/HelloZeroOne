#include "AION_IDS_SPEEDGOAT.h"

/* Storage class 'PageSwitching' */
AION_IDS_SPEEDGOAT_cal_type AION_IDS_SPEEDGOAT_cal_impl = {
  /* Computed Parameter: UnitDelay_InitialCondition
   * Referenced by: '<S1>/Unit Delay'
   */
  {
    {
      Manual,                          /* set_LatCtrlReq */
      0.0,                             /* set_SteerWhlTorqReq */
      0.0,                             /* set_SteerAngReq */
      0.0                              /* set_SteerAngSpdLimt */
    },                                 /* set_lateral_control_info */

    {
      Manual,                          /* set_LngCtrlReq */
      0.0,                             /* set_AutoTrqWhlReq */
      0.0,                             /* set_BrakeReq */
      NoRequest,                       /* set_GearLvlReq */
      Invalid                          /* set_GearLvlReqVD */
    },                                 /* set_longitudinal_control_info */

    {
      0U,                              /* set_Checksum1 */
      0U,                              /* set_MsgCounter1 */
      0U,                              /* set_Checksum2 */
      0U,                              /* set_MsgCounter2 */
      0U,                              /* set_Checksum3 */
      0U,                              /* set_MsgCounter3 */
      NoBeamRequest,                   /* set_BeamReq */
      Disable,                         /* set_BodyCtrlReq */
      NotActiveRequest,                /* set_HornRingReq */
      NoLightRequest                   /* set_TurnLightReq */
    },                                 /* set_ADCU_info */

    {
      0U,                              /* get_ABSActiveSt */
      0U,                              /* get_ABSFaultSt */
      0U,                              /* get_VDCActiveSt */
      0U,                              /* get_VDCFaultSt */
      0.0,                             /* get_VehSpd */
      0U,                              /* get_VehSpdVD */
      0U,                              /* get_FLWheelSpdEdgesSum */
      0U,                              /* get_FLWheelSpdEdgesSumVD */
      0U,                              /* get_FRWheelSpdEdgesSum */
      0U,                              /* get_FRWheelSpdEdgesSumVD */
      0U,                              /* get_RLWheelSpdEdgesSum */
      0U,                              /* get_RLWheelSpdEdgesSumVD */
      0U,                              /* get_RRWheelSpdEdgesSum */
      0U,                              /* get_RRWheelSpdEdgesSumVD */
      0.0,                             /* get_YawRate */
      0.0,                             /* get_YawRateOffset */
      0U,                              /* get_YawRateSt */
      0U,                              /* get_HDCCtrlSt */
      0U,                              /* get_HDCErrSt */
      0U,                              /* get_AEBActive */
      0U,                              /* get_AEBAvailable */
      0U,                              /* get_CDDActive */
      0U,                              /* get_CDDAvailable */
      0U,                              /* get_CDDFail */
      0.0,                             /* get_MasterCylinderPr */
      0.0,                             /* get_MasterCylinderPrOffset */
      0U,                              /* get_MasterCylinderPrOffsetVD */
      0U,                              /* get_MasterCylinderPrVD */
      0U,                              /* get_NoBrakeForce */
      0U,                              /* get_VehicleStandStillSt */
      0U,                              /* get_FLWheelRotatedDirection */
      0U,                              /* get_FLWheelRotatedDirectionVD */
      0.0,                             /* get_FLWheelSpd */
      0U,                              /* get_FLWheelSpdVD */
      0U,                              /* get_FRWheelRotatedDirection */
      0U,                              /* get_FRWheelRotatedDirectionVD */
      0.0,                             /* get_FRWheelSpd */
      0U,                              /* get_FRWheelSpdVD */
      0U,                              /* get_RLWheelRotatedDirection */
      0U,                              /* get_RLWheelRotatedDirectionVD */
      0.0,                             /* get_RLWheelSpd */
      0U,                              /* get_RLWheelSpdVD */
      0U,                              /* get_RRWheelRotatedDirection */
      0U,                              /* get_RRWheelRotatedDirectionVD */
      0.0,                             /* get_RRWheelSpd */
      0U,                              /* get_RRWheelSpdVD */
      0.0,                             /* get_ActVehLaltrlAccel */
      0U,                              /* get_ActVehLaltrlAccelVD */
      0.0,                             /* get_ActVehLongAccel */
      0U,                              /* get_ActVehLongAccelVD */
      0.0,                             /* get_VehLaltrlAccelOffset */
      0.0                              /* get_VehLongAccelOffset */
    },                                 /* get_BCS_info */

    {
      0U,                              /* get_GearLeverIntv */
      InvalidDriveStatus,              /* get_VehDrvMod */
      NotReady,                        /* get_VehRdySt */
      0U,                              /* get_VehRng */
      0U,                              /* get_ActRecpTorq */
      0U,                              /* get_ActRecpTorqSt */
      InvalidGearStatus,               /* get_CrntGearLvl */
      0U,                              /* get_CrntGearLvlVD */
      0.0,                             /* get_ACCMaxRecpDecel */
      0U,                              /* get_ACCMaxRecpDecelVD */
      0U,                              /* get_ActVehWheelTorq */
      0U,                              /* get_LateralAssistBtnInfo */
      0U,                              /* get_LateralAssistBtnInfoVD */
      0U,                              /* get_ACCButtInfo */
      0U,                              /* get_AccElecECFail */
      0.0,                             /* get_GasPedalActPst */
      0U,                              /* get_GasPedalActPstVD */
      0U,                              /* get_VehWheelTorqMax */
      0U,                              /* get_BrkPedalSt */
      0U,                              /* get_BrkPedalStVD */
      0.0,                             /* get_GasPedalVirtualPst */
      0U                               /* get_GasPedalVirtualPstVD */
    },                                 /* get_VCU_info */

    {
      0U,                              /* get_Checksum1 */
      0U,                              /* get_MsgCounter1 */
      0U,                              /* get_Checksum10 */
      0U,                              /* get_MsgCounter10 */
      0U,                              /* get_Checksum11 */
      0U,                              /* get_MsgCounter11 */
      0U,                              /* get_Checksum12 */
      0U,                              /* get_MsgCounter12 */
      0U,                              /* get_Checksum13 */
      0U,                              /* get_MsgCounter13 */
      0U,                              /* get_EStopSwSt */
      0U,                              /* get_EStopSwStVD */
      0U,                              /* get_LatAutoCheckReport */
      ManualStatus,                    /* get_LatCtrlMode */
      0U,                              /* get_LatQuitReport */
      0U,                              /* get_LngAutoCheckIReport */
      ManualStatus,                    /* get_LngCtrlMode */
      0U,                              /* get_LngQuitReport */
      0U,                              /* get_StrngWhlIntv */
      0U,                              /* get_Checksum16 */
      0U,                              /* get_MsgCounter16 */
      0U,                              /* get_Checksum17 */
      0U,                              /* get_MsgCounter17 */
      0U,                              /* get_Checksum18 */
      0U,                              /* get_MsgCounter18 */
      0U,                              /* get_Checksum2 */
      0U,                              /* get_MsgCounter2 */
      0U,                              /* get_Checksum3 */
      0U,                              /* get_MsgCounter3 */
      0U,                              /* get_Checksum4 */
      0U,                              /* get_MsgCounter4 */
      0U,                              /* get_Checksum5 */
      0U,                              /* get_MsgCounter5 */
      0U,                              /* get_Checksum6 */
      0U,                              /* get_MsgCounter6 */
      0U,                              /* get_Checksum7 */
      0U,                              /* get_MsgCounter7 */
      0U,                              /* get_Checksum8 */
      0U,                              /* get_MsgCounter8 */
      0U,                              /* get_Checksum9 */
      0U                               /* get_MsgCounter9 */
    },                                 /* get_SCU_info */

    {
      NoError,                         /* get_FailSt */
      0U,                              /* get_SwitchSt */
      0U,                              /* get_SwitchStVD */
      0U                               /* get_SysSt */
    },                                 /* get_EPB_info */

    {
      0U,                              /* get_DriverSeatBeltSt */
      0U                               /* get_PsngrSeatBeltSt */
    },                                 /* get_SRS_info */

    {
      0.0,                             /* get_SteeringAngle */
      0U,                              /* get_SteeringAngleSpd */
      0U,                              /* get_SteeringAngleSpdVD */
      0U,                              /* get_SteeringAngleVD */
      0.0,                             /* get_StrngWhlTorq */
      0U,                              /* get_StrngWhlTorqVD */
      0U,                              /* get_ThermalSt */
      0U                               /* get_WarnLamp */
    },                                 /* get_EPS_info */

    {
      NotAvailable,                    /* get_CtrlAvailable */
      0U,                              /* get_DriverDoorAjarSt */
      0U,                              /* get_FrontFogLampSt */
      0U,                              /* get_FrontWiperSt */
      NotActiveStatus,                 /* get_HazardLampSt */
      NotActiveStatus,                 /* get_HighBeamSt */
      NotActiveStatus,                 /* get_HornSt */
      0U,                              /* get_KeySt */
      NotFault,                        /* get_LeftTurnLampFaultSt */
      NotActiveStatus,                 /* get_LeftTurnLampSt */
      NotActiveStatus,                 /* get_LowBeamSt */
      0U,                              /* get_PsngrDoorAjarSt */
      0U,                              /* get_RLDoorAjarSt */
      0U,                              /* get_RRDoorAjarSt */
      0U,                              /* get_RearFogLampSt */
      NotFault,                        /* get_RightTurnLampFaultSt */
      NotActiveStatus                  /* get_RightTurnLampSt */
    }                                  /* get_BCM_info */
  },

  /* Computed Parameter: TmpRTBAtUnitDelayInport1_InitialCondition
   * Referenced by: synthesized block
   */
  {
    {
      Manual,                          /* set_LatCtrlReq */
      0.0,                             /* set_SteerWhlTorqReq */
      0.0,                             /* set_SteerAngReq */
      0.0                              /* set_SteerAngSpdLimt */
    },                                 /* set_lateral_control_info */

    {
      Manual,                          /* set_LngCtrlReq */
      0.0,                             /* set_AutoTrqWhlReq */
      0.0,                             /* set_BrakeReq */
      NoRequest,                       /* set_GearLvlReq */
      Invalid                          /* set_GearLvlReqVD */
    },                                 /* set_longitudinal_control_info */

    {
      0U,                              /* set_Checksum1 */
      0U,                              /* set_MsgCounter1 */
      0U,                              /* set_Checksum2 */
      0U,                              /* set_MsgCounter2 */
      0U,                              /* set_Checksum3 */
      0U,                              /* set_MsgCounter3 */
      NoBeamRequest,                   /* set_BeamReq */
      Disable,                         /* set_BodyCtrlReq */
      NotActiveRequest,                /* set_HornRingReq */
      NoLightRequest                   /* set_TurnLightReq */
    },                                 /* set_ADCU_info */

    {
      0U,                              /* get_ABSActiveSt */
      0U,                              /* get_ABSFaultSt */
      0U,                              /* get_VDCActiveSt */
      0U,                              /* get_VDCFaultSt */
      0.0,                             /* get_VehSpd */
      0U,                              /* get_VehSpdVD */
      0U,                              /* get_FLWheelSpdEdgesSum */
      0U,                              /* get_FLWheelSpdEdgesSumVD */
      0U,                              /* get_FRWheelSpdEdgesSum */
      0U,                              /* get_FRWheelSpdEdgesSumVD */
      0U,                              /* get_RLWheelSpdEdgesSum */
      0U,                              /* get_RLWheelSpdEdgesSumVD */
      0U,                              /* get_RRWheelSpdEdgesSum */
      0U,                              /* get_RRWheelSpdEdgesSumVD */
      0.0,                             /* get_YawRate */
      0.0,                             /* get_YawRateOffset */
      0U,                              /* get_YawRateSt */
      0U,                              /* get_HDCCtrlSt */
      0U,                              /* get_HDCErrSt */
      0U,                              /* get_AEBActive */
      0U,                              /* get_AEBAvailable */
      0U,                              /* get_CDDActive */
      0U,                              /* get_CDDAvailable */
      0U,                              /* get_CDDFail */
      0.0,                             /* get_MasterCylinderPr */
      0.0,                             /* get_MasterCylinderPrOffset */
      0U,                              /* get_MasterCylinderPrOffsetVD */
      0U,                              /* get_MasterCylinderPrVD */
      0U,                              /* get_NoBrakeForce */
      0U,                              /* get_VehicleStandStillSt */
      0U,                              /* get_FLWheelRotatedDirection */
      0U,                              /* get_FLWheelRotatedDirectionVD */
      0.0,                             /* get_FLWheelSpd */
      0U,                              /* get_FLWheelSpdVD */
      0U,                              /* get_FRWheelRotatedDirection */
      0U,                              /* get_FRWheelRotatedDirectionVD */
      0.0,                             /* get_FRWheelSpd */
      0U,                              /* get_FRWheelSpdVD */
      0U,                              /* get_RLWheelRotatedDirection */
      0U,                              /* get_RLWheelRotatedDirectionVD */
      0.0,                             /* get_RLWheelSpd */
      0U,                              /* get_RLWheelSpdVD */
      0U,                              /* get_RRWheelRotatedDirection */
      0U,                              /* get_RRWheelRotatedDirectionVD */
      0.0,                             /* get_RRWheelSpd */
      0U,                              /* get_RRWheelSpdVD */
      0.0,                             /* get_ActVehLaltrlAccel */
      0U,                              /* get_ActVehLaltrlAccelVD */
      0.0,                             /* get_ActVehLongAccel */
      0U,                              /* get_ActVehLongAccelVD */
      0.0,                             /* get_VehLaltrlAccelOffset */
      0.0                              /* get_VehLongAccelOffset */
    },                                 /* get_BCS_info */

    {
      0U,                              /* get_GearLeverIntv */
      InvalidDriveStatus,              /* get_VehDrvMod */
      NotReady,                        /* get_VehRdySt */
      0U,                              /* get_VehRng */
      0U,                              /* get_ActRecpTorq */
      0U,                              /* get_ActRecpTorqSt */
      InvalidGearStatus,               /* get_CrntGearLvl */
      0U,                              /* get_CrntGearLvlVD */
      0.0,                             /* get_ACCMaxRecpDecel */
      0U,                              /* get_ACCMaxRecpDecelVD */
      0U,                              /* get_ActVehWheelTorq */
      0U,                              /* get_LateralAssistBtnInfo */
      0U,                              /* get_LateralAssistBtnInfoVD */
      0U,                              /* get_ACCButtInfo */
      0U,                              /* get_AccElecECFail */
      0.0,                             /* get_GasPedalActPst */
      0U,                              /* get_GasPedalActPstVD */
      0U,                              /* get_VehWheelTorqMax */
      0U,                              /* get_BrkPedalSt */
      0U,                              /* get_BrkPedalStVD */
      0.0,                             /* get_GasPedalVirtualPst */
      0U                               /* get_GasPedalVirtualPstVD */
    },                                 /* get_VCU_info */

    {
      0U,                              /* get_Checksum1 */
      0U,                              /* get_MsgCounter1 */
      0U,                              /* get_Checksum10 */
      0U,                              /* get_MsgCounter10 */
      0U,                              /* get_Checksum11 */
      0U,                              /* get_MsgCounter11 */
      0U,                              /* get_Checksum12 */
      0U,                              /* get_MsgCounter12 */
      0U,                              /* get_Checksum13 */
      0U,                              /* get_MsgCounter13 */
      0U,                              /* get_EStopSwSt */
      0U,                              /* get_EStopSwStVD */
      0U,                              /* get_LatAutoCheckReport */
      ManualStatus,                    /* get_LatCtrlMode */
      0U,                              /* get_LatQuitReport */
      0U,                              /* get_LngAutoCheckIReport */
      ManualStatus,                    /* get_LngCtrlMode */
      0U,                              /* get_LngQuitReport */
      0U,                              /* get_StrngWhlIntv */
      0U,                              /* get_Checksum16 */
      0U,                              /* get_MsgCounter16 */
      0U,                              /* get_Checksum17 */
      0U,                              /* get_MsgCounter17 */
      0U,                              /* get_Checksum18 */
      0U,                              /* get_MsgCounter18 */
      0U,                              /* get_Checksum2 */
      0U,                              /* get_MsgCounter2 */
      0U,                              /* get_Checksum3 */
      0U,                              /* get_MsgCounter3 */
      0U,                              /* get_Checksum4 */
      0U,                              /* get_MsgCounter4 */
      0U,                              /* get_Checksum5 */
      0U,                              /* get_MsgCounter5 */
      0U,                              /* get_Checksum6 */
      0U,                              /* get_MsgCounter6 */
      0U,                              /* get_Checksum7 */
      0U,                              /* get_MsgCounter7 */
      0U,                              /* get_Checksum8 */
      0U,                              /* get_MsgCounter8 */
      0U,                              /* get_Checksum9 */
      0U                               /* get_MsgCounter9 */
    },                                 /* get_SCU_info */

    {
      NoError,                         /* get_FailSt */
      0U,                              /* get_SwitchSt */
      0U,                              /* get_SwitchStVD */
      0U                               /* get_SysSt */
    },                                 /* get_EPB_info */

    {
      0U,                              /* get_DriverSeatBeltSt */
      0U                               /* get_PsngrSeatBeltSt */
    },                                 /* get_SRS_info */

    {
      0.0,                             /* get_SteeringAngle */
      0U,                              /* get_SteeringAngleSpd */
      0U,                              /* get_SteeringAngleSpdVD */
      0U,                              /* get_SteeringAngleVD */
      0.0,                             /* get_StrngWhlTorq */
      0U,                              /* get_StrngWhlTorqVD */
      0U,                              /* get_ThermalSt */
      0U                               /* get_WarnLamp */
    },                                 /* get_EPS_info */

    {
      NotAvailable,                    /* get_CtrlAvailable */
      0U,                              /* get_DriverDoorAjarSt */
      0U,                              /* get_FrontFogLampSt */
      0U,                              /* get_FrontWiperSt */
      NotActiveStatus,                 /* get_HazardLampSt */
      NotActiveStatus,                 /* get_HighBeamSt */
      NotActiveStatus,                 /* get_HornSt */
      0U,                              /* get_KeySt */
      NotFault,                        /* get_LeftTurnLampFaultSt */
      NotActiveStatus,                 /* get_LeftTurnLampSt */
      NotActiveStatus,                 /* get_LowBeamSt */
      0U,                              /* get_PsngrDoorAjarSt */
      0U,                              /* get_RLDoorAjarSt */
      0U,                              /* get_RRDoorAjarSt */
      0U,                              /* get_RearFogLampSt */
      NotFault,                        /* get_RightTurnLampFaultSt */
      NotActiveStatus                  /* get_RightTurnLampSt */
    }                                  /* get_BCM_info */
  },

  /* Computed Parameter: RT2_InitialCondition
   * Referenced by: '<S28>/RT2'
   */
  { 0, 0, 0, 0, 0, 0.0, { 0, 0, 0, 0, 0, 0, 0, 0 } },

  /* Computed Parameter: SCU2ADCU_CAN_read_P1_Size
   * Referenced by: '<S25>/SCU2ADCU_CAN_read'
   */
  { 1.0, 1.0 },

  /* Expression: id
   * Referenced by: '<S25>/SCU2ADCU_CAN_read'
   */
  1.0,

  /* Computed Parameter: SCU2ADCU_CAN_read_P2_Size
   * Referenced by: '<S25>/SCU2ADCU_CAN_read'
   */
  { 1.0, 1.0 },

  /* Expression: sampleTime
   * Referenced by: '<S25>/SCU2ADCU_CAN_read'
   */
  -1.0,

  /* Computed Parameter: SCU2ADCU_CAN_read_P3_Size
   * Referenced by: '<S25>/SCU2ADCU_CAN_read'
   */
  { 1.0, 1.0 },

  /* Expression: messageType
   * Referenced by: '<S25>/SCU2ADCU_CAN_read'
   */
  1.0,

  /* Computed Parameter: SCU2ADCU_CAN_read_P4_Size
   * Referenced by: '<S25>/SCU2ADCU_CAN_read'
   */
  { 1.0, 5.0 },

  /* Computed Parameter: SCU2ADCU_CAN_read_P4
   * Referenced by: '<S25>/SCU2ADCU_CAN_read'
   */
  { 73.0, 79.0, 54.0, 49.0, 50.0 },

  /* Computed Parameter: SCU2ADCU_CAN_read_P5_Size
   * Referenced by: '<S25>/SCU2ADCU_CAN_read'
   */
  { 1.0, 1.0 },

  /* Expression: ptIdx
   * Referenced by: '<S25>/SCU2ADCU_CAN_read'
   */
  0.0,

  /* Computed Parameter: SCU2ADCU_CAN_read_P6_Size
   * Referenced by: '<S25>/SCU2ADCU_CAN_read'
   */
  { 1.0, 1.0 },

  /* Expression: isFDMod
   * Referenced by: '<S25>/SCU2ADCU_CAN_read'
   */
  0.0,

  /* Computed Parameter: CANSetup_P1_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 1.0 },

  /* Expression: id
   * Referenced by: '<S2>/CAN Setup'
   */
  1.0,

  /* Computed Parameter: CANSetup_P2_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 2.0 },

  /* Computed Parameter: CANSetup_P2
   * Referenced by: '<S2>/CAN Setup'
   */
  { 67.0, 58.0 },

  /* Computed Parameter: CANSetup_P3_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 1.0 },

  /* Expression: PCISlot
   * Referenced by: '<S2>/CAN Setup'
   */
  -1.0,

  /* Computed Parameter: CANSetup_P4_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 1.0 },

  /* Expression: port1
   * Referenced by: '<S2>/CAN Setup'
   */
  2.0,

  /* Computed Parameter: CANSetup_P5_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 1.0 },

  /* Expression: port2
   * Referenced by: '<S2>/CAN Setup'
   */
  2.0,

  /* Computed Parameter: CANSetup_P6_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 1.0 },

  /* Expression: port3
   * Referenced by: '<S2>/CAN Setup'
   */
  1.0,

  /* Computed Parameter: CANSetup_P7_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 1.0 },

  /* Expression: port4
   * Referenced by: '<S2>/CAN Setup'
   */
  1.0,

  /* Computed Parameter: CANSetup_P8_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 1.0 },

  /* Expression: opModeCAN1
   * Referenced by: '<S2>/CAN Setup'
   */
  1.0,

  /* Computed Parameter: CANSetup_P9_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 4.0 },

  /* Expression: usrBdrCAN1
   * Referenced by: '<S2>/CAN Setup'
   */
  { 10.0, 1.0, 13.0, 2.0 },

  /* Computed Parameter: CANSetup_P10_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 2.0 },

  /* Expression: stdAccMaskCAN1
   * Referenced by: '<S2>/CAN Setup'
   */
  { 0.0, 0.0 },

  /* Computed Parameter: CANSetup_P11_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 2.0 },

  /* Expression: extAccMaskCAN1
   * Referenced by: '<S2>/CAN Setup'
   */
  { 0.0, 0.0 },

  /* Computed Parameter: CANSetup_P12_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 1.0 },

  /* Expression: opModeCAN2
   * Referenced by: '<S2>/CAN Setup'
   */
  1.0,

  /* Computed Parameter: CANSetup_P13_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 4.0 },

  /* Expression: usrBdrCAN2
   * Referenced by: '<S2>/CAN Setup'
   */
  { 10.0, 1.0, 13.0, 2.0 },

  /* Computed Parameter: CANSetup_P14_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 2.0 },

  /* Expression: stdAccMaskCAN2
   * Referenced by: '<S2>/CAN Setup'
   */
  { 0.0, 0.0 },

  /* Computed Parameter: CANSetup_P15_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 2.0 },

  /* Expression: extAccMaskCAN2
   * Referenced by: '<S2>/CAN Setup'
   */
  { 0.0, 0.0 },

  /* Computed Parameter: CANSetup_P16_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 1.0 },

  /* Expression: opModeCAN3
   * Referenced by: '<S2>/CAN Setup'
   */
  1.0,

  /* Computed Parameter: CANSetup_P17_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 4.0 },

  /* Expression: usrBdrCAN3
   * Referenced by: '<S2>/CAN Setup'
   */
  { 10.0, 1.0, 13.0, 2.0 },

  /* Computed Parameter: CANSetup_P18_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 2.0 },

  /* Expression: stdAccMaskCAN3
   * Referenced by: '<S2>/CAN Setup'
   */
  { 0.0, 0.0 },

  /* Computed Parameter: CANSetup_P19_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 2.0 },

  /* Expression: extAccMaskCAN3
   * Referenced by: '<S2>/CAN Setup'
   */
  { 0.0, 0.0 },

  /* Computed Parameter: CANSetup_P20_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 1.0 },

  /* Expression: opModeCAN4
   * Referenced by: '<S2>/CAN Setup'
   */
  1.0,

  /* Computed Parameter: CANSetup_P21_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 4.0 },

  /* Expression: usrBdrCAN4
   * Referenced by: '<S2>/CAN Setup'
   */
  { 10.0, 1.0, 13.0, 2.0 },

  /* Computed Parameter: CANSetup_P22_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 2.0 },

  /* Expression: stdAccMaskCAN4
   * Referenced by: '<S2>/CAN Setup'
   */
  { 0.0, 0.0 },

  /* Computed Parameter: CANSetup_P23_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 2.0 },

  /* Expression: extAccMaskCAN4
   * Referenced by: '<S2>/CAN Setup'
   */
  { 0.0, 0.0 },

  /* Computed Parameter: CANSetup_P24_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 1.0 },

  /* Expression: initStruct
   * Referenced by: '<S2>/CAN Setup'
   */
  0.0,

  /* Computed Parameter: CANSetup_P25_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 1.0 },

  /* Expression: termStruct
   * Referenced by: '<S2>/CAN Setup'
   */
  0.0,

  /* Computed Parameter: CANSetup_P26_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 5.0 },

  /* Computed Parameter: CANSetup_P26
   * Referenced by: '<S2>/CAN Setup'
   */
  { 73.0, 79.0, 54.0, 49.0, 50.0 },

  /* Computed Parameter: CANSetup_P27_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 1.0 },

  /* Expression: qtyMod
   * Referenced by: '<S2>/CAN Setup'
   */
  1.0,

  /* Computed Parameter: CANSetup_P28_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 4.0 },

  /* Expression: chNo
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 2.0, 3.0, 4.0 },

  /* Computed Parameter: CANSetup_P29_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 4.0 },

  /* Expression: ptTypes
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 1.0, 1.0, 1.0 },

  /* Computed Parameter: CANSetup_P30_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 4.0 },

  /* Expression: protlHelpIdx
   * Referenced by: '<S2>/CAN Setup'
   */
  { 0.0, 1.0, 2.0, 3.0 },

  /* Computed Parameter: CANSetup_P31_Size
   * Referenced by: '<S2>/CAN Setup'
   */
  { 1.0, 1.0 },

  /* Expression: isFDMod
   * Referenced by: '<S2>/CAN Setup'
   */
  0.0,

  /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P1_Size
   * Referenced by: '<S28>/ADCU2SCU_Brake_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: id
   * Referenced by: '<S28>/ADCU2SCU_Brake_Command_CAN_write'
   */
  1.0,

  /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P2_Size
   * Referenced by: '<S28>/ADCU2SCU_Brake_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: sampleTime
   * Referenced by: '<S28>/ADCU2SCU_Brake_Command_CAN_write'
   */
  0.02,

  /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P3_Size
   * Referenced by: '<S28>/ADCU2SCU_Brake_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: messageType
   * Referenced by: '<S28>/ADCU2SCU_Brake_Command_CAN_write'
   */
  1.0,

  /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P4_Size
   * Referenced by: '<S28>/ADCU2SCU_Brake_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: enaStatusPort
   * Referenced by: '<S28>/ADCU2SCU_Brake_Command_CAN_write'
   */
  0.0,

  /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P5_Size
   * Referenced by: '<S28>/ADCU2SCU_Brake_Command_CAN_write'
   */
  { 1.0, 5.0 },

  /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P5
   * Referenced by: '<S28>/ADCU2SCU_Brake_Command_CAN_write'
   */
  { 73.0, 79.0, 54.0, 49.0, 50.0 },

  /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P6_Size
   * Referenced by: '<S28>/ADCU2SCU_Brake_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: ptIdx
   * Referenced by: '<S28>/ADCU2SCU_Brake_Command_CAN_write'
   */
  0.0,

  /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P7_Size
   * Referenced by: '<S28>/ADCU2SCU_Brake_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: isFDMod
   * Referenced by: '<S28>/ADCU2SCU_Brake_Command_CAN_write'
   */
  0.0,

  /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P1_Size
   * Referenced by: '<S28>/ADCU2SCU_Gear_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: id
   * Referenced by: '<S28>/ADCU2SCU_Gear_Command_CAN_write'
   */
  1.0,

  /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P2_Size
   * Referenced by: '<S28>/ADCU2SCU_Gear_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: sampleTime
   * Referenced by: '<S28>/ADCU2SCU_Gear_Command_CAN_write'
   */
  0.02,

  /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P3_Size
   * Referenced by: '<S28>/ADCU2SCU_Gear_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: messageType
   * Referenced by: '<S28>/ADCU2SCU_Gear_Command_CAN_write'
   */
  1.0,

  /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P4_Size
   * Referenced by: '<S28>/ADCU2SCU_Gear_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: enaStatusPort
   * Referenced by: '<S28>/ADCU2SCU_Gear_Command_CAN_write'
   */
  0.0,

  /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P5_Size
   * Referenced by: '<S28>/ADCU2SCU_Gear_Command_CAN_write'
   */
  { 1.0, 5.0 },

  /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P5
   * Referenced by: '<S28>/ADCU2SCU_Gear_Command_CAN_write'
   */
  { 73.0, 79.0, 54.0, 49.0, 50.0 },

  /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P6_Size
   * Referenced by: '<S28>/ADCU2SCU_Gear_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: ptIdx
   * Referenced by: '<S28>/ADCU2SCU_Gear_Command_CAN_write'
   */
  0.0,

  /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P7_Size
   * Referenced by: '<S28>/ADCU2SCU_Gear_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: isFDMod
   * Referenced by: '<S28>/ADCU2SCU_Gear_Command_CAN_write'
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: synthesized block
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/RT1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/RT1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/RT1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/RT1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/RT1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/RT1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/RT1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/RT1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/RT1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/RT1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/RT1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/RT1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/RT1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/RT1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/RT1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/RT1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/RT1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/RT1'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S1>/RT1'
   */
  0.0,

  /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P1_Size
   * Referenced by: '<S28>/ADCU2SCU_Steer_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: id
   * Referenced by: '<S28>/ADCU2SCU_Steer_Command_CAN_write'
   */
  1.0,

  /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P2_Size
   * Referenced by: '<S28>/ADCU2SCU_Steer_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: sampleTime
   * Referenced by: '<S28>/ADCU2SCU_Steer_Command_CAN_write'
   */
  0.05,

  /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P3_Size
   * Referenced by: '<S28>/ADCU2SCU_Steer_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: messageType
   * Referenced by: '<S28>/ADCU2SCU_Steer_Command_CAN_write'
   */
  1.0,

  /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P4_Size
   * Referenced by: '<S28>/ADCU2SCU_Steer_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: enaStatusPort
   * Referenced by: '<S28>/ADCU2SCU_Steer_Command_CAN_write'
   */
  0.0,

  /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P5_Size
   * Referenced by: '<S28>/ADCU2SCU_Steer_Command_CAN_write'
   */
  { 1.0, 5.0 },

  /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P5
   * Referenced by: '<S28>/ADCU2SCU_Steer_Command_CAN_write'
   */
  { 73.0, 79.0, 54.0, 49.0, 50.0 },

  /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P6_Size
   * Referenced by: '<S28>/ADCU2SCU_Steer_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: ptIdx
   * Referenced by: '<S28>/ADCU2SCU_Steer_Command_CAN_write'
   */
  0.0,

  /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P7_Size
   * Referenced by: '<S28>/ADCU2SCU_Steer_Command_CAN_write'
   */
  { 1.0, 1.0 },

  /* Expression: isFDMod
   * Referenced by: '<S28>/ADCU2SCU_Steer_Command_CAN_write'
   */
  0.0,

  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport18_InitialCondition
   * Referenced by: synthesized block
   */
  NotActiveRequest,

  /* Computed Parameter: RT1_153_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  NotActiveStatus,

  /* Computed Parameter: RT1_154_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  NotActiveStatus,

  /* Computed Parameter: RT1_155_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  NotActiveStatus,

  /* Computed Parameter: RT1_158_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  NotActiveStatus,

  /* Computed Parameter: RT1_159_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  NotActiveStatus,

  /* Computed Parameter: RT1_165_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  NotActiveStatus,

  /* Computed Parameter: RT1_149_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  NotAvailable,

  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport16_InitialCondition
   * Referenced by: synthesized block
   */
  NoBeamRequest,

  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport1_InitialCondition
   * Referenced by: synthesized block
   */
  Manual,

  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport5_InitialCondition
   * Referenced by: synthesized block
   */
  Manual,

  /* Computed Parameter: RT1_107_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  ManualStatus,

  /* Computed Parameter: RT1_110_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  ManualStatus,

  /* Computed Parameter: RT1_73_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  InvalidDriveStatus,

  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport17_InitialCondition
   * Referenced by: synthesized block
   */
  Disable,

  /* Computed Parameter: RT1_135_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  NoError,

  /* Computed Parameter: RT1_157_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  NotFault,

  /* Computed Parameter: RT1_164_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  NotFault,

  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport8_InitialCondition
   * Referenced by: synthesized block
   */
  NoRequest,

  /* Computed Parameter: RT1_78_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  InvalidGearStatus,

  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport19_InitialCondition
   * Referenced by: synthesized block
   */
  NoLightRequest,

  /* Computed Parameter: RT1_74_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  NotReady,

  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport9_InitialCondition
   * Referenced by: synthesized block
   */
  Invalid,

  /* Computed Parameter: RT1_10_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_100_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_101_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_102_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_103_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_106_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_108_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_109_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_11_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_111_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_113_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_114_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_115_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_116_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_117_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_118_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_119_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_12_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_120_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_121_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_122_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_123_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_124_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_125_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_126_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_127_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_128_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_129_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_13_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_130_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_131_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_132_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_133_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_134_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_14_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_142_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_15_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_26_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_28_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_30_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_32_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_75_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_76_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_82_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_85_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_89_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_94_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_95_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_96_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_97_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_98_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U,

  /* Computed Parameter: RT1_99_InitialCondition
   * Referenced by: '<S1>/RT1'
   */
  0U
};

AION_IDS_SPEEDGOAT_cal_type *AION_IDS_SPEEDGOAT_cal =
  &AION_IDS_SPEEDGOAT_cal_impl;

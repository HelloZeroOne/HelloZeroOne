/*
 * AION_IDS_SPEEDGOAT.cpp
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

#include "AION_IDS_SPEEDGOAT.h"
#include "AION_IDS_SPEEDGOAT_private.h"

const AION_ApplicationBus AION_IDS_SPEEDGOAT_rtZAION_ApplicationBus = {
  {
    Manual,                            /* set_LatCtrlReq */
    0.0,                               /* set_SteerWhlTorqReq */
    0.0,                               /* set_SteerAngReq */
    0.0                                /* set_SteerAngSpdLimt */
  },                                   /* set_lateral_control_info */

  {
    Manual,                            /* set_LngCtrlReq */
    0.0,                               /* set_AutoTrqWhlReq */
    0.0,                               /* set_BrakeReq */
    NoRequest,                         /* set_GearLvlReq */
    Invalid                            /* set_GearLvlReqVD */
  },                                   /* set_longitudinal_control_info */

  {
    0U,                                /* set_Checksum1 */
    0U,                                /* set_MsgCounter1 */
    0U,                                /* set_Checksum2 */
    0U,                                /* set_MsgCounter2 */
    0U,                                /* set_Checksum3 */
    0U,                                /* set_MsgCounter3 */
    NoBeamRequest,                     /* set_BeamReq */
    Disable,                           /* set_BodyCtrlReq */
    NotActiveRequest,                  /* set_HornRingReq */
    NoLightRequest                     /* set_TurnLightReq */
  },                                   /* set_ADCU_info */

  {
    0U,                                /* get_ABSActiveSt */
    0U,                                /* get_ABSFaultSt */
    0U,                                /* get_VDCActiveSt */
    0U,                                /* get_VDCFaultSt */
    0.0,                               /* get_VehSpd */
    0U,                                /* get_VehSpdVD */
    0U,                                /* get_FLWheelSpdEdgesSum */
    0U,                                /* get_FLWheelSpdEdgesSumVD */
    0U,                                /* get_FRWheelSpdEdgesSum */
    0U,                                /* get_FRWheelSpdEdgesSumVD */
    0U,                                /* get_RLWheelSpdEdgesSum */
    0U,                                /* get_RLWheelSpdEdgesSumVD */
    0U,                                /* get_RRWheelSpdEdgesSum */
    0U,                                /* get_RRWheelSpdEdgesSumVD */
    0.0,                               /* get_YawRate */
    0.0,                               /* get_YawRateOffset */
    0U,                                /* get_YawRateSt */
    0U,                                /* get_HDCCtrlSt */
    0U,                                /* get_HDCErrSt */
    0U,                                /* get_AEBActive */
    0U,                                /* get_AEBAvailable */
    0U,                                /* get_CDDActive */
    0U,                                /* get_CDDAvailable */
    0U,                                /* get_CDDFail */
    0.0,                               /* get_MasterCylinderPr */
    0.0,                               /* get_MasterCylinderPrOffset */
    0U,                                /* get_MasterCylinderPrOffsetVD */
    0U,                                /* get_MasterCylinderPrVD */
    0U,                                /* get_NoBrakeForce */
    0U,                                /* get_VehicleStandStillSt */
    0U,                                /* get_FLWheelRotatedDirection */
    0U,                                /* get_FLWheelRotatedDirectionVD */
    0.0,                               /* get_FLWheelSpd */
    0U,                                /* get_FLWheelSpdVD */
    0U,                                /* get_FRWheelRotatedDirection */
    0U,                                /* get_FRWheelRotatedDirectionVD */
    0.0,                               /* get_FRWheelSpd */
    0U,                                /* get_FRWheelSpdVD */
    0U,                                /* get_RLWheelRotatedDirection */
    0U,                                /* get_RLWheelRotatedDirectionVD */
    0.0,                               /* get_RLWheelSpd */
    0U,                                /* get_RLWheelSpdVD */
    0U,                                /* get_RRWheelRotatedDirection */
    0U,                                /* get_RRWheelRotatedDirectionVD */
    0.0,                               /* get_RRWheelSpd */
    0U,                                /* get_RRWheelSpdVD */
    0.0,                               /* get_ActVehLaltrlAccel */
    0U,                                /* get_ActVehLaltrlAccelVD */
    0.0,                               /* get_ActVehLongAccel */
    0U,                                /* get_ActVehLongAccelVD */
    0.0,                               /* get_VehLaltrlAccelOffset */
    0.0                                /* get_VehLongAccelOffset */
  },                                   /* get_BCS_info */

  {
    0U,                                /* get_GearLeverIntv */
    InvalidDriveStatus,                /* get_VehDrvMod */
    NotReady,                          /* get_VehRdySt */
    0U,                                /* get_VehRng */
    0U,                                /* get_ActRecpTorq */
    0U,                                /* get_ActRecpTorqSt */
    InvalidGearStatus,                 /* get_CrntGearLvl */
    0U,                                /* get_CrntGearLvlVD */
    0.0,                               /* get_ACCMaxRecpDecel */
    0U,                                /* get_ACCMaxRecpDecelVD */
    0U,                                /* get_ActVehWheelTorq */
    0U,                                /* get_LateralAssistBtnInfo */
    0U,                                /* get_LateralAssistBtnInfoVD */
    0U,                                /* get_ACCButtInfo */
    0U,                                /* get_AccElecECFail */
    0.0,                               /* get_GasPedalActPst */
    0U,                                /* get_GasPedalActPstVD */
    0U,                                /* get_VehWheelTorqMax */
    0U,                                /* get_BrkPedalSt */
    0U,                                /* get_BrkPedalStVD */
    0.0,                               /* get_GasPedalVirtualPst */
    0U                                 /* get_GasPedalVirtualPstVD */
  },                                   /* get_VCU_info */

  {
    0U,                                /* get_Checksum1 */
    0U,                                /* get_MsgCounter1 */
    0U,                                /* get_Checksum10 */
    0U,                                /* get_MsgCounter10 */
    0U,                                /* get_Checksum11 */
    0U,                                /* get_MsgCounter11 */
    0U,                                /* get_Checksum12 */
    0U,                                /* get_MsgCounter12 */
    0U,                                /* get_Checksum13 */
    0U,                                /* get_MsgCounter13 */
    0U,                                /* get_EStopSwSt */
    0U,                                /* get_EStopSwStVD */
    0U,                                /* get_LatAutoCheckReport */
    ManualStatus,                      /* get_LatCtrlMode */
    0U,                                /* get_LatQuitReport */
    0U,                                /* get_LngAutoCheckIReport */
    ManualStatus,                      /* get_LngCtrlMode */
    0U,                                /* get_LngQuitReport */
    0U,                                /* get_StrngWhlIntv */
    0U,                                /* get_Checksum16 */
    0U,                                /* get_MsgCounter16 */
    0U,                                /* get_Checksum17 */
    0U,                                /* get_MsgCounter17 */
    0U,                                /* get_Checksum18 */
    0U,                                /* get_MsgCounter18 */
    0U,                                /* get_Checksum2 */
    0U,                                /* get_MsgCounter2 */
    0U,                                /* get_Checksum3 */
    0U,                                /* get_MsgCounter3 */
    0U,                                /* get_Checksum4 */
    0U,                                /* get_MsgCounter4 */
    0U,                                /* get_Checksum5 */
    0U,                                /* get_MsgCounter5 */
    0U,                                /* get_Checksum6 */
    0U,                                /* get_MsgCounter6 */
    0U,                                /* get_Checksum7 */
    0U,                                /* get_MsgCounter7 */
    0U,                                /* get_Checksum8 */
    0U,                                /* get_MsgCounter8 */
    0U,                                /* get_Checksum9 */
    0U                                 /* get_MsgCounter9 */
  },                                   /* get_SCU_info */

  {
    NoError,                           /* get_FailSt */
    0U,                                /* get_SwitchSt */
    0U,                                /* get_SwitchStVD */
    0U                                 /* get_SysSt */
  },                                   /* get_EPB_info */

  {
    0U,                                /* get_DriverSeatBeltSt */
    0U                                 /* get_PsngrSeatBeltSt */
  },                                   /* get_SRS_info */

  {
    0.0,                               /* get_SteeringAngle */
    0U,                                /* get_SteeringAngleSpd */
    0U,                                /* get_SteeringAngleSpdVD */
    0U,                                /* get_SteeringAngleVD */
    0.0,                               /* get_StrngWhlTorq */
    0U,                                /* get_StrngWhlTorqVD */
    0U,                                /* get_ThermalSt */
    0U                                 /* get_WarnLamp */
  },                                   /* get_EPS_info */

  {
    NotAvailable,                      /* get_CtrlAvailable */
    0U,                                /* get_DriverDoorAjarSt */
    0U,                                /* get_FrontFogLampSt */
    0U,                                /* get_FrontWiperSt */
    NotActiveStatus,                   /* get_HazardLampSt */
    NotActiveStatus,                   /* get_HighBeamSt */
    NotActiveStatus,                   /* get_HornSt */
    0U,                                /* get_KeySt */
    NotFault,                          /* get_LeftTurnLampFaultSt */
    NotActiveStatus,                   /* get_LeftTurnLampSt */
    NotActiveStatus,                   /* get_LowBeamSt */
    0U,                                /* get_PsngrDoorAjarSt */
    0U,                                /* get_RLDoorAjarSt */
    0U,                                /* get_RRDoorAjarSt */
    0U,                                /* get_RearFogLampSt */
    NotFault,                          /* get_RightTurnLampFaultSt */
    NotActiveStatus                    /* get_RightTurnLampSt */
  }                                    /* get_BCM_info */
} ;                                    /* AION_ApplicationBus ground */

/* Block signals (default storage) */
B_AION_IDS_SPEEDGOAT_T AION_IDS_SPEEDGOAT_B;

/* Block states (default storage) */
DW_AION_IDS_SPEEDGOAT_T AION_IDS_SPEEDGOAT_DW;

/* Real-time model */
RT_MODEL_AION_IDS_SPEEDGOAT_T AION_IDS_SPEEDGOAT_M_ =
  RT_MODEL_AION_IDS_SPEEDGOAT_T();
RT_MODEL_AION_IDS_SPEEDGOAT_T *const AION_IDS_SPEEDGOAT_M =
  &AION_IDS_SPEEDGOAT_M_;

/*
 *   This function updates active task flag for each subrate.
 * The function is called in the model base rate function.
 * It maintains SampleHit information to allow scheduling
 * of the subrates from the base rate function.
 */
void rate_scheduler(void)
{
  /* Compute which subrates run during the next base time step.  Subrates
   * are an integer multiple of the base rate counter.  Therefore, the subtask
   * counter is reset when it reaches its limit (zero means run).
   */
  (AION_IDS_SPEEDGOAT_M->Timing.TaskCounters.TID[1])++;
  if ((AION_IDS_SPEEDGOAT_M->Timing.TaskCounters.TID[1]) > 1) {/* Sample time: [0.02s, 0.0s] */
    AION_IDS_SPEEDGOAT_M->Timing.TaskCounters.TID[1] = 0;
  }

  (AION_IDS_SPEEDGOAT_M->Timing.TaskCounters.TID[2])++;
  if ((AION_IDS_SPEEDGOAT_M->Timing.TaskCounters.TID[2]) > 4) {/* Sample time: [0.05s, 0.0s] */
    AION_IDS_SPEEDGOAT_M->Timing.TaskCounters.TID[2] = 0;
  }

  (AION_IDS_SPEEDGOAT_M->Timing.TaskCounters.TID[3])++;
  if ((AION_IDS_SPEEDGOAT_M->Timing.TaskCounters.TID[3]) > 19) {/* Sample time: [0.2s, 0.0s] */
    AION_IDS_SPEEDGOAT_M->Timing.TaskCounters.TID[3] = 0;
  }
}

/* Model step function for TID0 */
void AION_IDS_SPEEDGOAT_step0(void)    /* Sample time: [0.01s, 0.0s] */
{
  /* Update absolute time */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++AION_IDS_SPEEDGOAT_M->Timing.clockTick0)) {
    ++AION_IDS_SPEEDGOAT_M->Timing.clockTickH0;
  }

  AION_IDS_SPEEDGOAT_M->Timing.t[0] = AION_IDS_SPEEDGOAT_M->Timing.clockTick0 *
    AION_IDS_SPEEDGOAT_M->Timing.stepSize0 +
    AION_IDS_SPEEDGOAT_M->Timing.clockTickH0 *
    AION_IDS_SPEEDGOAT_M->Timing.stepSize0 * 4294967296.0;
}

/* Model step function for TID1 */
void AION_IDS_SPEEDGOAT_step1(void)    /* Sample time: [0.02s, 0.0s] */
{
  real_T tmp;
  int8_T wrBufIdx;

  /* S-Function (sg_IO612_setup_s): '<S2>/CAN Setup' */

  /* Level2 S-Function Block: '<S2>/CAN Setup' (sg_IO612_setup_s) */
  {
    SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[1];
    sfcnOutputs(rts,1);
  }

  /* Constant: '<S24>/SCU2ADCU_SampleTime(s)' */
  AION_IDS_SPEEDGOAT_B.SCU2ADCU_SampleTimes = rtP_SCU_ADCU_CYCLE_TIME;
  do {
    /* Level2 S-Function Block: '<S25>/SCU2ADCU_CAN_read' (sg_IO61X_read_s) */
    {
      SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[0];
      sfcnOutputs(rts,1);
    }

    {
      /* S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack' */
      if ((8 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((384 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 1
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x2U)) >> 1);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack_o1 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 2
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x4U)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack_o2 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 53
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[6]) &
                      (uint8_T)(0x20U)) >> 5);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack_o3 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 7
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x80U)) >> 7);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack_o4 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 40
             *  length                  = 13
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.05625
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[5]);
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[4]) &
                      (uint16_T)(0x1FU)) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.05625;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack_o5 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 37
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[4]) &
                      (uint8_T)(0x20U)) >> 5);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack_o6 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 6 ------------------
             *  startBit                = 56
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[7]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack_o7 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 7 ------------------
             *  startBit                = 48
             *  length                  = 4
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[6]) &
                      (uint8_T)(0xFU));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack_o8 =
                  result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack1' */
      if ((8 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((547 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 8
             *  length                  = 12
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.00097656
             *  offset                  = -2.0943
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]);
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint16_T)(0xFU)) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.00097656) + -2.0943;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack1_o1 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 24
             *  length                  = 12
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.00097656
             *  offset                  = -0.13
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[3]);
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[2]) &
                      (uint16_T)(0xFU)) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.00097656) + -0.13;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack1_o2 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 4
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x10U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack1_o3 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 56
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[7]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack1_o4 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 20
             *  length                  = 4
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[2]) &
                      (uint8_T)(0xF0U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack1_o5 =
                  result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack10' */
      if ((8 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((554 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 56
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[7]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o1 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 48
             *  length                  = 4
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[6]) &
                      (uint8_T)(0xFU));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o2 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 4
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x10U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o3 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 5
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x20U)) >> 5);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o4 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 52
             *  length                  = 4
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[6]) &
                      (uint8_T)(0xF0U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o5 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 2
             *  length                  = 2
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0xCU)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o6 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 6 ------------------
             *  startBit                = 24
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[3]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o7 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 7 ------------------
             *  startBit                = 40
             *  length                  = 16
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[5]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[4]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o8 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 8 ------------------
             *  startBit                = 0
             *  length                  = 2
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x3U));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o9 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 9 ------------------
             *  startBit                = 16
             *  length                  = 16
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[2]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o10 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 10 ------------------
             *  startBit                = 7
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x80U)) >> 7);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o11 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 11 ------------------
             *  startBit                = 6
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x40U)) >> 6);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o12 =
                  result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack11' */
      if ((8 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((706 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 11
             *  length                  = 3
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) &
                      (uint8_T)(0x38U)) >> 3);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack11_o1 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 10
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) &
                      (uint8_T)(0x4U)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack11_o2 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 14
             *  length                  = 10
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) &
                      (uint16_T)(0xC0U)) >> 6);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) << 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack11_o3 =
                  result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack12' */
      if ((8 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((555 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 16
             *  length                  = 10
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 2.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[2]);
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) &
                      (uint16_T)(0x3U)) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 2.0;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack12_o1 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 10
             *  length                  = 2
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) &
                      (uint8_T)(0xCU)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack12_o2 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 36
             *  length                  = 3
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[4]) &
                      (uint8_T)(0x70U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack12_o3 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 35
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[4]) &
                      (uint8_T)(0x8U)) >> 3);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack12_o4 =
                  result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack13' */
      if ((8 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((556 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 56
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[7]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack13_o1 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 48
             *  length                  = 4
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[6]) &
                      (uint8_T)(0xFU));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack13_o2 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 16
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.05
             *  offset                  = -5.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[2]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.05) + -5.0;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack13_o3 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 26
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[3]) &
                      (uint8_T)(0x4U)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack13_o4 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 42
             *  length                  = 14
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[5]) &
                      (uint16_T)(0xFCU)) >> 2);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[4]) << 6);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack13_o5 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 27
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[3]) &
                      (uint8_T)(0x8U)) >> 3);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack13_o6 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 6 ------------------
             *  startBit                = 28
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[3]) &
                      (uint8_T)(0x10U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack13_o7 =
                  result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack14' */
      if ((8 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((557 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 56
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[7]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack14_o1 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 48
             *  length                  = 4
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[6]) &
                      (uint8_T)(0xFU));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack14_o2 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 32
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[4]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack14_o3 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 30
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[3]) &
                      (uint8_T)(0x40U)) >> 6);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack14_o4 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 40
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.392
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[5]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.392;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack14_o5 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 27
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[3]) &
                      (uint8_T)(0x8U)) >> 3);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack14_o6 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 6 ------------------
             *  startBit                = 10
             *  length                  = 14
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) &
                      (uint16_T)(0xFCU)) >> 2);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) << 6);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack14_o7 =
                  result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack15' */
      if ((8 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((559 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 56
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[7]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack15_o1 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 48
             *  length                  = 4
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[6]) &
                      (uint8_T)(0xFU));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack15_o2 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 53
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[6]) &
                      (uint8_T)(0x20U)) >> 5);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack15_o3 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 54
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[6]) &
                      (uint8_T)(0x40U)) >> 6);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack15_o4 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 40
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.392
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[5]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.392;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack15_o5 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 55
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[6]) &
                      (uint8_T)(0x80U)) >> 7);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack15_o6 =
                  result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack2' */
      if ((8 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((548 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 19
             *  length                  = 2
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[2]) &
                      (uint8_T)(0x18U)) >> 3);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack2_o1 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 22
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[2]) &
                      (uint8_T)(0x40U)) >> 6);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack2_o2 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 56
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[7]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack2_o3 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 27
             *  length                  = 4
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[3]) &
                      (uint8_T)(0x78U)) >> 3);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack2_o4 =
                  result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack3' */
      if ((8 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((385 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 34
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[4]) &
                      (uint8_T)(0x4U)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack3_o1 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 35
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[4]) &
                      (uint8_T)(0x8U)) >> 3);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack3_o2 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 38
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[4]) &
                      (uint8_T)(0x40U)) >> 6);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack3_o3 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 39
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[4]) &
                      (uint8_T)(0x80U)) >> 7);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack3_o4 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 47
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[5]) &
                      (uint8_T)(0x80U)) >> 7);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack3_o5 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 8
             *  length                  = 12
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.1
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]);
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint16_T)(0xFU)) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.1;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack3_o6 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 6 ------------------
             *  startBit                = 24
             *  length                  = 10
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.1
             *  offset                  = -15.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[3]);
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[2]) &
                      (uint16_T)(0x3U)) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.1) + -15.0;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack3_o7 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 7 ------------------
             *  startBit                = 7
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x80U)) >> 7);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack3_o8 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 8 ------------------
             *  startBit                = 6
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x40U)) >> 6);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack3_o9 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 9 ------------------
             *  startBit                = 4
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x10U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack3_o10 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 10 ------------------
             *  startBit                = 41
             *  length                  = 2
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[5]) &
                      (uint8_T)(0x6U)) >> 1);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack3_o11 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 11 ------------------
             *  startBit                = 56
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[7]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack3_o12 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 12 ------------------
             *  startBit                = 20
             *  length                  = 4
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[2]) &
                      (uint8_T)(0xF0U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack3_o13 =
                  result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack4' */
      if ((8 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((549 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 6
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x40U)) >> 6);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack4_o1 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 7
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x80U)) >> 7);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack4_o2 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 16
             *  length                  = 13
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.05625
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[2]);
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) &
                      (uint16_T)(0x1FU)) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.05625;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack4_o3 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 5
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x20U)) >> 5);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack4_o4 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 30
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[3]) &
                      (uint8_T)(0x40U)) >> 6);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack4_o5 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 29
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[3]) &
                      (uint8_T)(0x20U)) >> 5);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack4_o6 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 6 ------------------
             *  startBit                = 32
             *  length                  = 13
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.05625
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[4]);
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[3]) &
                      (uint16_T)(0x1FU)) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.05625;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack4_o7 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 7 ------------------
             *  startBit                = 31
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[3]) &
                      (uint8_T)(0x80U)) >> 7);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack4_o8 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 8 ------------------
             *  startBit                = 56
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[7]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack4_o9 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 9 ------------------
             *  startBit                = 48
             *  length                  = 4
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[6]) &
                      (uint8_T)(0xFU));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack4_o10 =
                  result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack5' */
      if ((8 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((550 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 6
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x40U)) >> 6);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack5_o1 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 7
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x80U)) >> 7);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack5_o2 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 16
             *  length                  = 13
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.05625
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[2]);
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) &
                      (uint16_T)(0x1FU)) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.05625;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack5_o3 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 5
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x20U)) >> 5);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack5_o4 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 30
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[3]) &
                      (uint8_T)(0x40U)) >> 6);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack5_o5 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 29
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[3]) &
                      (uint8_T)(0x20U)) >> 5);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack5_o6 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 6 ------------------
             *  startBit                = 32
             *  length                  = 13
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.05625
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[4]);
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[3]) &
                      (uint16_T)(0x1FU)) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 0.05625;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack5_o7 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 7 ------------------
             *  startBit                = 31
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[3]) &
                      (uint8_T)(0x80U)) >> 7);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack5_o8 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 8 ------------------
             *  startBit                = 56
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[7]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack5_o9 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 9 ------------------
             *  startBit                = 48
             *  length                  = 4
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[6]) &
                      (uint8_T)(0xFU));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack5_o10 =
                  result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack6' */
      if ((8 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((551 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 36
             *  length                  = 12
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.027127
             *  offset                  = -21.593
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[4]) &
                      (uint16_T)(0xF0U)) >> 4);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[3]) << 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.027127) + -21.593;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack6_o1 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 53
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[6]) &
                      (uint8_T)(0x20U)) >> 5);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack6_o2 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 12
             *  length                  = 12
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.027127
             *  offset                  = -21.593
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) &
                      (uint16_T)(0xF0U)) >> 4);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) << 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.027127) + -21.593;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack6_o3 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 52
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[6]) &
                      (uint8_T)(0x10U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack6_o4 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 40
             *  length                  = 12
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.027127
             *  offset                  = -21.593
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[5]);
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[4]) &
                      (uint16_T)(0xFU)) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.027127) + -21.593;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack6_o5 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 16
             *  length                  = 12
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.027127
             *  offset                  = -21.593
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[2]);
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) &
                      (uint16_T)(0xFU)) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.027127) + -21.593;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack6_o6 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 6 ------------------
             *  startBit                = 56
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[7]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack6_o7 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 7 ------------------
             *  startBit                = 48
             *  length                  = 4
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[6]) &
                      (uint8_T)(0xFU));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack6_o8 =
                  result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack7' */
      if ((8 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((552 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 55
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[6]) &
                      (uint8_T)(0x80U)) >> 7);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack7_o1 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 0
             *  length                  = 2
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x3U));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack7_o2 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 2
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x4U)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack7_o3 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 8
             *  length                  = 3
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) &
                      (uint8_T)(0x7U));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack7_o4 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 56
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[7]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack7_o5 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 48
             *  length                  = 4
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[6]) &
                      (uint8_T)(0xFU));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack7_o6 =
                  result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack8' */
      if ((8 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((553 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 16
             *  length                  = 16
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.1
             *  offset                  = -780.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[2]);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.1) + -780.0;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o1 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 38
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 4.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[4]) &
                      (uint8_T)(0xC0U)) >> 6);
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[3]) &
                      (uint8_T)(0x3FU)) << 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = result * 4.0;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o2 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 7
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x80U)) >> 7);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o3 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 34
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[4]) &
                      (uint8_T)(0x4U)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o4 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 40
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 0.1
             *  offset                  = -12.7
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[5]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                result = (result * 0.1) + -12.7;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o5 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 0
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x1U));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o6 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 6 ------------------
             *  startBit                = 30
             *  length                  = 2
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[3]) &
                      (uint8_T)(0xC0U)) >> 6);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o7 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 7 ------------------
             *  startBit                = 1
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x2U)) >> 1);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o8 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 8 ------------------
             *  startBit                = 56
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[7]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o9 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 9 ------------------
             *  startBit                = 2
             *  length                  = 4
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x3CU)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o10 =
                  result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack9' */
      if ((8 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((705 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 56
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[7]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack9_o1 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 48
             *  length                  = 4
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[6]) &
                      (uint8_T)(0xFU));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack9_o2 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 2
             *  length                  = 2
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0xCU)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack9_o3 =
                  result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 0
             *  length                  = 2
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x3U));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack9_o4 =
                  result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S26>/SCU2ADCU_Status1_CAN_unpack' */
      if ((8 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((546 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 12
             *  length                  = 12
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) &
                      (uint16_T)(0xF0U)) >> 4);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) << 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack_o1 = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 48
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[6]) &
                      (uint8_T)(0x1U));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack_o2 = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 16
             *  length                  = 12
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[2]);
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) &
                      (uint16_T)(0xFU)) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack_o3 = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 49
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[6]) &
                      (uint8_T)(0x2U)) >> 1);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack_o4 = result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 36
             *  length                  = 12
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[4]) &
                      (uint16_T)(0xF0U)) >> 4);
                    tempValue = tempValue | (uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[3]) << 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack_o5 = result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 50
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[6]) &
                      (uint8_T)(0x4U)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack_o6 = result;
              }
            }

            /* --------------- START Unpacking signal 6 ------------------
             *  startBit                = 40
             *  length                  = 12
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint16_T unpackedValue = 0;

                {
                  uint16_T tempValue = (uint16_T) (0);

                  {
                    tempValue = tempValue | (uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[5]);
                    tempValue = tempValue | (uint16_T)((uint16_T)((uint16_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[4]) &
                      (uint16_T)(0xFU)) << 8);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack_o7 = result;
              }
            }

            /* --------------- START Unpacking signal 7 ------------------
             *  startBit                = 51
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[6]) &
                      (uint8_T)(0x8U)) >> 3);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack_o8 = result;
              }
            }

            /* --------------- START Unpacking signal 8 ------------------
             *  startBit                = 56
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[7]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack_o9 = result;
              }
            }

            /* --------------- START Unpacking signal 9 ------------------
             *  startBit                = 52
             *  length                  = 4
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[6]) &
                      (uint8_T)(0xF0U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack_o10 = result;
              }
            }
          }
        }
      }
    }

    {
      /* S-Function (scanunpack): '<S26>/SCU2ADCU_Status1_CAN_unpack1' */
      if ((8 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Length) &&
          (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID != INVALID_CAN_ID) ) {
        if ((704 == AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.ID) && (0U ==
             AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Extended) ) {
          {
            /* --------------- START Unpacking signal 0 ------------------
             *  startBit                = 18
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[2]) &
                      (uint8_T)(0x4U)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o1 = result;
              }
            }

            /* --------------- START Unpacking signal 1 ------------------
             *  startBit                = 8
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) &
                      (uint8_T)(0x1U));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o2 = result;
              }
            }

            /* --------------- START Unpacking signal 2 ------------------
             *  startBit                = 6
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x40U)) >> 6);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o3 = result;
              }
            }

            /* --------------- START Unpacking signal 3 ------------------
             *  startBit                = 0
             *  length                  = 2
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x3U));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o4 = result;
              }
            }

            /* --------------- START Unpacking signal 4 ------------------
             *  startBit                = 16
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[2]) &
                      (uint8_T)(0x1U));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o5 = result;
              }
            }

            /* --------------- START Unpacking signal 5 ------------------
             *  startBit                = 5
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x20U)) >> 5);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o6 = result;
              }
            }

            /* --------------- START Unpacking signal 6 ------------------
             *  startBit                = 17
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[2]) &
                      (uint8_T)(0x2U)) >> 1);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o7 = result;
              }
            }

            /* --------------- START Unpacking signal 7 ------------------
             *  startBit                = 2
             *  length                  = 2
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0xCU)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o8 = result;
              }
            }

            /* --------------- START Unpacking signal 8 ------------------
             *  startBit                = 13
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) &
                      (uint8_T)(0x20U)) >> 5);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o9 = result;
              }
            }

            /* --------------- START Unpacking signal 9 ------------------
             *  startBit                = 12
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) &
                      (uint8_T)(0x10U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o10 = result;
              }
            }

            /* --------------- START Unpacking signal 10 ------------------
             *  startBit                = 4
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x10U)) >> 4);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o11 = result;
              }
            }

            /* --------------- START Unpacking signal 11 ------------------
             *  startBit                = 9
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) &
                      (uint8_T)(0x2U)) >> 1);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o12 = result;
              }
            }

            /* --------------- START Unpacking signal 12 ------------------
             *  startBit                = 10
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) &
                      (uint8_T)(0x4U)) >> 2);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o13 = result;
              }
            }

            /* --------------- START Unpacking signal 13 ------------------
             *  startBit                = 11
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) &
                      (uint8_T)(0x8U)) >> 3);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o14 = result;
              }
            }

            /* --------------- START Unpacking signal 14 ------------------
             *  startBit                = 7
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[0]) &
                      (uint8_T)(0x80U)) >> 7);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o15 = result;
              }
            }

            /* --------------- START Unpacking signal 15 ------------------
             *  startBit                = 15
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) &
                      (uint8_T)(0x80U)) >> 7);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o16 = result;
              }
            }

            /* --------------- START Unpacking signal 16 ------------------
             *  startBit                = 14
             *  length                  = 1
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[1]) &
                      (uint8_T)(0x40U)) >> 6);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o17 = result;
              }
            }

            /* --------------- START Unpacking signal 17 ------------------
             *  startBit                = 56
             *  length                  = 8
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[7]);
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o18 = result;
              }
            }

            /* --------------- START Unpacking signal 18 ------------------
             *  startBit                = 48
             *  length                  = 4
             *  desiredSignalByteLayout = BIGENDIAN
             *  dataType                = UNSIGNED
             *  factor                  = 1.0
             *  offset                  = 0.0
             * -----------------------------------------------------------------------*/
            {
              real64_T outValue = 0;

              {
                uint8_T unpackedValue = 0;

                {
                  uint8_T tempValue = (uint8_T) (0);

                  {
                    tempValue = tempValue | (uint8_T)((uint8_T)
                      (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2.Data[6]) &
                      (uint8_T)(0xFU));
                  }

                  unpackedValue = tempValue;
                }

                outValue = (real64_T) (unpackedValue);
              }

              {
                real64_T result = (real64_T) outValue;
                AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o19 = result;
              }
            }
          }
        }
      }
    }
  } while (AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o1);

  /* UnitDelay: '<S1>/Unit Delay' */
  AION_IDS_SPEEDGOAT_B.UnitDelay = AION_IDS_SPEEDGOAT_DW.UnitDelay_DSTATE;

  /* ModelReference generated from: '<S2>/Signal_Transfer' */
  AION_signal_transfer(&AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack_o5,
                       &AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o1,
                       &AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o1,
                       &AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o5,
                       &AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o6,
                       &AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o7,
                       &AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o9,
                       &AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o10,
                       &AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o11,
                       &AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o16,
                       &AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o17,
                       &AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o6,
                       &AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o9,
                       &AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack11_o1,
                       &AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack11_o2,
                       &AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack12_o3,
                       &AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack7_o1,
                       &AION_IDS_SPEEDGOAT_B.UnitDelay.set_lateral_control_info.set_LatCtrlReq,
                       &AION_IDS_SPEEDGOAT_B.UnitDelay.set_lateral_control_info.set_SteerWhlTorqReq,
                       &AION_IDS_SPEEDGOAT_B.UnitDelay.set_lateral_control_info.set_SteerAngReq,
                       &AION_IDS_SPEEDGOAT_B.UnitDelay.set_longitudinal_control_info.set_LngCtrlReq,
                       &AION_IDS_SPEEDGOAT_B.UnitDelay.set_longitudinal_control_info.set_AutoTrqWhlReq,
                       &AION_IDS_SPEEDGOAT_B.UnitDelay.set_longitudinal_control_info.set_BrakeReq,
                       &AION_IDS_SPEEDGOAT_B.UnitDelay.set_longitudinal_control_info.set_GearLvlReq,
                       &AION_IDS_SPEEDGOAT_B.UnitDelay.set_longitudinal_control_info.set_GearLvlReqVD,
                       &AION_IDS_SPEEDGOAT_B.UnitDelay.set_ADCU_info.set_BeamReq,
                       &AION_IDS_SPEEDGOAT_B.UnitDelay.set_ADCU_info.set_BodyCtrlReq,
                       &AION_IDS_SPEEDGOAT_B.UnitDelay.set_ADCU_info.set_HornRingReq,
                       &AION_IDS_SPEEDGOAT_B.UnitDelay.set_ADCU_info.set_TurnLightReq,
                       &AION_IDS_SPEEDGOAT_B.set_LatCtrlReq,
                       &AION_IDS_SPEEDGOAT_B.set_SteerWhlTorqReq,
                       &AION_IDS_SPEEDGOAT_B.set_SteerAngReq,
                       &AION_IDS_SPEEDGOAT_B.set_SteerAngSpdLimt,
                       &AION_IDS_SPEEDGOAT_B.set_LngCtrlReq,
                       &AION_IDS_SPEEDGOAT_B.set_AutoTrqWhlReq,
                       &AION_IDS_SPEEDGOAT_B.set_BrakeReq,
                       &AION_IDS_SPEEDGOAT_B.set_GearLvlReq,
                       &AION_IDS_SPEEDGOAT_B.set_GearLvlReqVD,
                       &AION_IDS_SPEEDGOAT_B.set_Checksum1,
                       &AION_IDS_SPEEDGOAT_B.set_MsgCounter1,
                       &AION_IDS_SPEEDGOAT_B.set_Checksum2,
                       &AION_IDS_SPEEDGOAT_B.set_MsgCounter2,
                       &AION_IDS_SPEEDGOAT_B.set_Checksum3,
                       &AION_IDS_SPEEDGOAT_B.set_MsgCounter3,
                       &AION_IDS_SPEEDGOAT_B.set_BeamReq,
                       &AION_IDS_SPEEDGOAT_B.set_BodyCtrlReq,
                       &AION_IDS_SPEEDGOAT_B.set_HornRingReq,
                       &AION_IDS_SPEEDGOAT_B.set_TurnLightReq,
                       &AION_IDS_SPEEDGOAT_B.get_ABSActiveSt,
                       &AION_IDS_SPEEDGOAT_B.get_ABSFaultSt,
                       &AION_IDS_SPEEDGOAT_B.get_VDCActiveSt,
                       &AION_IDS_SPEEDGOAT_B.get_VDCFaultSt,
                       &AION_IDS_SPEEDGOAT_B.get_VehSpd,
                       &AION_IDS_SPEEDGOAT_B.get_VehSpdVD,
                       &AION_IDS_SPEEDGOAT_B.get_FLWheelSpdEdgesSum,
                       &AION_IDS_SPEEDGOAT_B.get_FLWheelSpdEdgesSumVD,
                       &AION_IDS_SPEEDGOAT_B.get_FRWheelSpdEdgesSum,
                       &AION_IDS_SPEEDGOAT_B.get_FRWheelSpdEdgesSumVD,
                       &AION_IDS_SPEEDGOAT_B.get_RLWheelSpdEdgesSum,
                       &AION_IDS_SPEEDGOAT_B.get_RLWheelSpdEdgesSumVD,
                       &AION_IDS_SPEEDGOAT_B.get_RRWheelSpdEdgesSum,
                       &AION_IDS_SPEEDGOAT_B.get_RRWheelSpdEdgesSumVD,
                       &AION_IDS_SPEEDGOAT_B.get_YawRate,
                       &AION_IDS_SPEEDGOAT_B.get_YawRateOffset,
                       &AION_IDS_SPEEDGOAT_B.get_YawRateSt,
                       &AION_IDS_SPEEDGOAT_B.get_HDCCtrlSt,
                       &AION_IDS_SPEEDGOAT_B.get_HDCErrSt,
                       &AION_IDS_SPEEDGOAT_B.get_AEBActive,
                       &AION_IDS_SPEEDGOAT_B.get_AEBAvailable,
                       &AION_IDS_SPEEDGOAT_B.get_CDDActive,
                       &AION_IDS_SPEEDGOAT_B.get_CDDAvailable,
                       &AION_IDS_SPEEDGOAT_B.get_CDDFail,
                       &AION_IDS_SPEEDGOAT_B.get_MasterCylinderPr,
                       &AION_IDS_SPEEDGOAT_B.get_MasterCylinderPrOffset,
                       &AION_IDS_SPEEDGOAT_B.get_MasterCylinderPrOffsetVD,
                       &AION_IDS_SPEEDGOAT_B.get_MasterCylinderPrVD,
                       &AION_IDS_SPEEDGOAT_B.get_NoBrakeForce,
                       &AION_IDS_SPEEDGOAT_B.get_VehicleStandStillSt,
                       &AION_IDS_SPEEDGOAT_B.get_FLWheelRotatedDirection,
                       &AION_IDS_SPEEDGOAT_B.get_FLWheelRotatedDirectionVD,
                       &AION_IDS_SPEEDGOAT_B.get_FLWheelSpd,
                       &AION_IDS_SPEEDGOAT_B.get_FLWheelSpdVD,
                       &AION_IDS_SPEEDGOAT_B.get_FRWheelRotatedDirection,
                       &AION_IDS_SPEEDGOAT_B.get_FRWheelRotatedDirectionVD,
                       &AION_IDS_SPEEDGOAT_B.get_FRWheelSpd,
                       &AION_IDS_SPEEDGOAT_B.get_FRWheelSpdVD,
                       &AION_IDS_SPEEDGOAT_B.get_RLWheelRotatedDirection,
                       &AION_IDS_SPEEDGOAT_B.get_RLWheelRotatedDirectionVD,
                       &AION_IDS_SPEEDGOAT_B.get_RLWheelSpd,
                       &AION_IDS_SPEEDGOAT_B.get_RLWheelSpdVD,
                       &AION_IDS_SPEEDGOAT_B.get_RRWheelRotatedDirection,
                       &AION_IDS_SPEEDGOAT_B.get_RRWheelRotatedDirectionVD,
                       &AION_IDS_SPEEDGOAT_B.get_RRWheelSpd,
                       &AION_IDS_SPEEDGOAT_B.get_RRWheelSpdVD,
                       &AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccel,
                       &AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccelVD,
                       &AION_IDS_SPEEDGOAT_B.get_ActVehLongAccel,
                       &AION_IDS_SPEEDGOAT_B.get_ActVehLongAccelVD,
                       &AION_IDS_SPEEDGOAT_B.get_VehLaltrlAccelOffset,
                       &AION_IDS_SPEEDGOAT_B.get_VehLongAccelOffset,
                       &AION_IDS_SPEEDGOAT_B.get_GearLeverIntv,
                       &AION_IDS_SPEEDGOAT_B.get_VehDrvMod,
                       &AION_IDS_SPEEDGOAT_B.get_VehRdySt,
                       &AION_IDS_SPEEDGOAT_B.get_VehRng,
                       &AION_IDS_SPEEDGOAT_B.get_ActRecpTorq,
                       &AION_IDS_SPEEDGOAT_B.get_ActRecpTorqSt,
                       &AION_IDS_SPEEDGOAT_B.get_CrntGearLvl,
                       &AION_IDS_SPEEDGOAT_B.get_CrntGearLvlVD,
                       &AION_IDS_SPEEDGOAT_B.get_ACCMaxRecpDecel,
                       &AION_IDS_SPEEDGOAT_B.get_ACCMaxRecpDecelVD,
                       &AION_IDS_SPEEDGOAT_B.get_ActVehWheelTorq,
                       &AION_IDS_SPEEDGOAT_B.get_LateralAssistBtnInfo,
                       &AION_IDS_SPEEDGOAT_B.get_LateralAssistBtnInfoVD,
                       &AION_IDS_SPEEDGOAT_B.get_ACCButtInfo,
                       &AION_IDS_SPEEDGOAT_B.get_AccElecECFail,
                       &AION_IDS_SPEEDGOAT_B.get_GasPedalActPst,
                       &AION_IDS_SPEEDGOAT_B.get_GasPedalActPstVD,
                       &AION_IDS_SPEEDGOAT_B.get_VehWheelTorqMax,
                       &AION_IDS_SPEEDGOAT_B.get_BrkPedalSt,
                       &AION_IDS_SPEEDGOAT_B.get_BrkPedalStVD,
                       &AION_IDS_SPEEDGOAT_B.get_GasPedalVirtualPst,
                       &AION_IDS_SPEEDGOAT_B.get_GasPedalVirtualPstVD,
                       &AION_IDS_SPEEDGOAT_B.get_Checksum1,
                       &AION_IDS_SPEEDGOAT_B.get_MsgCounter1,
                       &AION_IDS_SPEEDGOAT_B.get_Checksum10,
                       &AION_IDS_SPEEDGOAT_B.get_MsgCounter10,
                       &AION_IDS_SPEEDGOAT_B.get_Checksum11,
                       &AION_IDS_SPEEDGOAT_B.get_MsgCounter11,
                       &AION_IDS_SPEEDGOAT_B.get_Checksum12,
                       &AION_IDS_SPEEDGOAT_B.get_MsgCounter12,
                       &AION_IDS_SPEEDGOAT_B.get_Checksum13,
                       &AION_IDS_SPEEDGOAT_B.get_MsgCounter13,
                       &AION_IDS_SPEEDGOAT_B.get_EStopSwSt,
                       &AION_IDS_SPEEDGOAT_B.get_EStopSwStVD,
                       &AION_IDS_SPEEDGOAT_B.get_LatAutoCheckReport,
                       &AION_IDS_SPEEDGOAT_B.get_LatCtrlMode,
                       &AION_IDS_SPEEDGOAT_B.get_LatQuitReport,
                       &AION_IDS_SPEEDGOAT_B.get_LngAutoCheckIReport,
                       &AION_IDS_SPEEDGOAT_B.get_LngCtrlMode,
                       &AION_IDS_SPEEDGOAT_B.get_LngQuitReport,
                       &AION_IDS_SPEEDGOAT_B.get_StrngWhlIntv,
                       &AION_IDS_SPEEDGOAT_B.get_Checksum16,
                       &AION_IDS_SPEEDGOAT_B.get_MsgCounter16,
                       &AION_IDS_SPEEDGOAT_B.get_Checksum17,
                       &AION_IDS_SPEEDGOAT_B.get_MsgCounter17,
                       &AION_IDS_SPEEDGOAT_B.get_Checksum18,
                       &AION_IDS_SPEEDGOAT_B.get_MsgCounter18,
                       &AION_IDS_SPEEDGOAT_B.get_Checksum2,
                       &AION_IDS_SPEEDGOAT_B.get_MsgCounter2,
                       &AION_IDS_SPEEDGOAT_B.get_Checksum3,
                       &AION_IDS_SPEEDGOAT_B.get_MsgCounter3,
                       &AION_IDS_SPEEDGOAT_B.get_Checksum4,
                       &AION_IDS_SPEEDGOAT_B.get_MsgCounter4,
                       &AION_IDS_SPEEDGOAT_B.get_Checksum5,
                       &AION_IDS_SPEEDGOAT_B.get_MsgCounter5,
                       &AION_IDS_SPEEDGOAT_B.get_Checksum6,
                       &AION_IDS_SPEEDGOAT_B.get_MsgCounter6,
                       &AION_IDS_SPEEDGOAT_B.get_Checksum7,
                       &AION_IDS_SPEEDGOAT_B.get_MsgCounter7,
                       &AION_IDS_SPEEDGOAT_B.get_Checksum8,
                       &AION_IDS_SPEEDGOAT_B.get_MsgCounter8,
                       &AION_IDS_SPEEDGOAT_B.get_Checksum9,
                       &AION_IDS_SPEEDGOAT_B.get_MsgCounter9,
                       &AION_IDS_SPEEDGOAT_B.get_FailSt,
                       &AION_IDS_SPEEDGOAT_B.get_SwitchSt,
                       &AION_IDS_SPEEDGOAT_B.get_SwitchStVD,
                       &AION_IDS_SPEEDGOAT_B.get_SysSt,
                       &AION_IDS_SPEEDGOAT_B.get_DriverSeatBeltSt,
                       &AION_IDS_SPEEDGOAT_B.get_PsngrSeatBeltSt,
                       &AION_IDS_SPEEDGOAT_B.get_SteeringAngle,
                       &AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpd,
                       &AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpdVD,
                       &AION_IDS_SPEEDGOAT_B.get_SteeringAngleVD,
                       &AION_IDS_SPEEDGOAT_B.get_StrngWhlTorq,
                       &AION_IDS_SPEEDGOAT_B.get_StrngWhlTorqVD,
                       &AION_IDS_SPEEDGOAT_B.get_ThermalSt,
                       &AION_IDS_SPEEDGOAT_B.get_WarnLamp,
                       &AION_IDS_SPEEDGOAT_B.get_CtrlAvailable,
                       &AION_IDS_SPEEDGOAT_B.get_DriverDoorAjarSt,
                       &AION_IDS_SPEEDGOAT_B.get_FrontFogLampSt,
                       &AION_IDS_SPEEDGOAT_B.get_FrontWiperSt,
                       &AION_IDS_SPEEDGOAT_B.get_HazardLampSt,
                       &AION_IDS_SPEEDGOAT_B.get_HighBeamSt,
                       &AION_IDS_SPEEDGOAT_B.get_HornSt,
                       &AION_IDS_SPEEDGOAT_B.get_KeySt,
                       &AION_IDS_SPEEDGOAT_B.get_LeftTurnLampFaultSt,
                       &AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt,
                       &AION_IDS_SPEEDGOAT_B.get_LowBeamSt,
                       &AION_IDS_SPEEDGOAT_B.get_PsngrDoorAjarSt,
                       &AION_IDS_SPEEDGOAT_B.get_RLDoorAjarSt,
                       &AION_IDS_SPEEDGOAT_B.get_RRDoorAjarSt,
                       &AION_IDS_SPEEDGOAT_B.get_RearFogLampSt,
                       &AION_IDS_SPEEDGOAT_B.get_RightTurnLampFaultSt,
                       &AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt,
                       &AION_IDS_SPEEDGOAT_B.ADCU_1_Checksum,
                       &AION_IDS_SPEEDGOAT_B.ADCU_1_MsgCounter,
                       &AION_IDS_SPEEDGOAT_B.ADCU_AutoTrqWhlReq,
                       &AION_IDS_SPEEDGOAT_B.ADCU_BrakeReq,
                       &AION_IDS_SPEEDGOAT_B.ADCU_GearLvlReq,
                       &AION_IDS_SPEEDGOAT_B.ADCU_GearLvlReqVD,
                       &AION_IDS_SPEEDGOAT_B.ADCU_LngCtrlReq,
                       &AION_IDS_SPEEDGOAT_B.ADCU_ParkingReqToEPB,
                       &AION_IDS_SPEEDGOAT_B.ADCU_ParkingReqToEPBVD,
                       &AION_IDS_SPEEDGOAT_B.ADCU_2_Checksum,
                       &AION_IDS_SPEEDGOAT_B.ADCU_2_MsgCounter,
                       &AION_IDS_SPEEDGOAT_B.ADCU_LatCtrlReq,
                       &AION_IDS_SPEEDGOAT_B.ADCU_SteerAngReq,
                       &AION_IDS_SPEEDGOAT_B.ADCU_SteerAngSpdLimt,
                       &AION_IDS_SPEEDGOAT_B.ADCU_SteerWhlTorqReq,
                       &AION_IDS_SPEEDGOAT_B.ADCU_3_Checksum,
                       &AION_IDS_SPEEDGOAT_B.ADCU_3_MsgCounter,
                       &AION_IDS_SPEEDGOAT_B.ADCU_BeamReq,
                       &AION_IDS_SPEEDGOAT_B.ADCU_BodyCtrlReq,
                       &AION_IDS_SPEEDGOAT_B.ADCU_HornRingReq,
                       &AION_IDS_SPEEDGOAT_B.ADCU_TurnLightReq,
                       &AION_IDS_SPEEDGOAT_B.BCS_ABSActiveSt,
                       &AION_IDS_SPEEDGOAT_B.BCS_ABSFaultSt,
                       &AION_IDS_SPEEDGOAT_B.BCS_VDCActiveSt,
                       &AION_IDS_SPEEDGOAT_B.BCS_VDCFaultSt,
                       &AION_IDS_SPEEDGOAT_B.BCS_VehSpd,
                       &AION_IDS_SPEEDGOAT_B.BCS_VehSpdVD,
                       &AION_IDS_SPEEDGOAT_B.SCU_1_Checksum,
                       &AION_IDS_SPEEDGOAT_B.SCU_1_MsgCounter,
                       &AION_IDS_SPEEDGOAT_B.EPS_SteeringAngle,
                       &AION_IDS_SPEEDGOAT_B.EPS_SteeringAngleSpd,
                       &AION_IDS_SPEEDGOAT_B.EPS_SteeringAngleSpdVD,
                       &AION_IDS_SPEEDGOAT_B.EPS_SteeringAngleVD,
                       &AION_IDS_SPEEDGOAT_B.EPS_StrngWhlTorq,
                       &AION_IDS_SPEEDGOAT_B.EPS_StrngWhlTorqVD,
                       &AION_IDS_SPEEDGOAT_B.EPS_ThermalSt,
                       &AION_IDS_SPEEDGOAT_B.EPS_WarnLamp,
                       &AION_IDS_SPEEDGOAT_B.SCU_10_Checksum,
                       &AION_IDS_SPEEDGOAT_B.SCU_10_MsgCounter,
                       &AION_IDS_SPEEDGOAT_B.BCM_CtrlAvailable,
                       &AION_IDS_SPEEDGOAT_B.BCM_DriverDoorAjarSt,
                       &AION_IDS_SPEEDGOAT_B.BCM_FrontFogLampSt,
                       &AION_IDS_SPEEDGOAT_B.BCM_FrontWiperSt,
                       &AION_IDS_SPEEDGOAT_B.BCM_HazardLampSt,
                       &AION_IDS_SPEEDGOAT_B.BCM_HighBeamSt,
                       &AION_IDS_SPEEDGOAT_B.BCM_HornSt,
                       &AION_IDS_SPEEDGOAT_B.BCM_KeySt,
                       &AION_IDS_SPEEDGOAT_B.BCM_LeftTurnLampFaultSt,
                       &AION_IDS_SPEEDGOAT_B.BCM_LeftTurnLampSt,
                       &AION_IDS_SPEEDGOAT_B.BCM_LowBeamSt,
                       &AION_IDS_SPEEDGOAT_B.BCM_PsngrDoorAjarSt,
                       &AION_IDS_SPEEDGOAT_B.BCM_RLDoorAjarSt,
                       &AION_IDS_SPEEDGOAT_B.BCM_RRDoorAjarSt,
                       &AION_IDS_SPEEDGOAT_B.BCM_RearFogLampSt,
                       &AION_IDS_SPEEDGOAT_B.BCM_RightTurnLampFaultSt,
                       &AION_IDS_SPEEDGOAT_B.BCM_RightTurnLampSt,
                       &AION_IDS_SPEEDGOAT_B.SCU_11_Checksum,
                       &AION_IDS_SPEEDGOAT_B.SCU_11_MsgCounter,
                       &AION_IDS_SPEEDGOAT_B.SCU_12_Checksum,
                       &AION_IDS_SPEEDGOAT_B.SCU_12_MsgCounter,
                       &AION_IDS_SPEEDGOAT_B.SRS_DriverSeatBeltSt,
                       &AION_IDS_SPEEDGOAT_B.SRS_PsngrSeatBeltSt,
                       &AION_IDS_SPEEDGOAT_B.SCU_13_Checksum,
                       &AION_IDS_SPEEDGOAT_B.SCU_13_MsgCounter,
                       &AION_IDS_SPEEDGOAT_B.SCU_EStopSwSt,
                       &AION_IDS_SPEEDGOAT_B.SCU_EStopSwStVD,
                       &AION_IDS_SPEEDGOAT_B.SCU_LatAutoCheckReport,
                       &AION_IDS_SPEEDGOAT_B.SCU_LatCtrlMode,
                       &AION_IDS_SPEEDGOAT_B.SCU_LatQuitReport,
                       &AION_IDS_SPEEDGOAT_B.SCU_LngAutoChecklReport,
                       &AION_IDS_SPEEDGOAT_B.SCU_LngCtrlMode,
                       &AION_IDS_SPEEDGOAT_B.SCU_LngQuitReport,
                       &AION_IDS_SPEEDGOAT_B.SCU_StrngWhlIntv,
                       &AION_IDS_SPEEDGOAT_B.VCU_GearLeverIntv,
                       &AION_IDS_SPEEDGOAT_B.VCU_VehDrvMod,
                       &AION_IDS_SPEEDGOAT_B.VCU_VehRdySt,
                       &AION_IDS_SPEEDGOAT_B.VCU_VehRng,
                       &AION_IDS_SPEEDGOAT_B.VCU_ActRecpTorq,
                       &AION_IDS_SPEEDGOAT_B.VCU_ActRecpTorqSt,
                       &AION_IDS_SPEEDGOAT_B.VCU_CrntGearLvl,
                       &AION_IDS_SPEEDGOAT_B.VCU_CrntGearLvlVD,
                       &AION_IDS_SPEEDGOAT_B.SCU_16_Checksum,
                       &AION_IDS_SPEEDGOAT_B.SCU_16_MsgCounter,
                       &AION_IDS_SPEEDGOAT_B.VCU_ACCMaxRecpDecel,
                       &AION_IDS_SPEEDGOAT_B.VCU_ACCMaxRecpDecelVD,
                       &AION_IDS_SPEEDGOAT_B.VCU_ActVehWheelTorq,
                       &AION_IDS_SPEEDGOAT_B.VCU_LateralAssistBtnInfo,
                       &AION_IDS_SPEEDGOAT_B.VCU_LateralAssistBtnInfoVD,
                       &AION_IDS_SPEEDGOAT_B.SCU_17_Checksum,
                       &AION_IDS_SPEEDGOAT_B.SCU_17_MsgCounter,
                       &AION_IDS_SPEEDGOAT_B.VCU_ACCButtInfo,
                       &AION_IDS_SPEEDGOAT_B.VCU_AccElecECFail,
                       &AION_IDS_SPEEDGOAT_B.VCU_GasPedalActPst,
                       &AION_IDS_SPEEDGOAT_B.VCU_GasPedalActPstVD,
                       &AION_IDS_SPEEDGOAT_B.VCU_VehWheelTorqMax,
                       &AION_IDS_SPEEDGOAT_B.SCU_18_Checksum,
                       &AION_IDS_SPEEDGOAT_B.SCU_18_MsgCounter,
                       &AION_IDS_SPEEDGOAT_B.VCU_BrkPedalSt,
                       &AION_IDS_SPEEDGOAT_B.VCU_BrkPedalStVD,
                       &AION_IDS_SPEEDGOAT_B.VCU_GasPedalVirtualPst,
                       &AION_IDS_SPEEDGOAT_B.VCU_GasPedalVirtualPstVD,
                       &AION_IDS_SPEEDGOAT_B.BCS_FLWheelSpdEdgesSum,
                       &AION_IDS_SPEEDGOAT_B.BCS_FLWheelSpdEdgesSumVD,
                       &AION_IDS_SPEEDGOAT_B.BCS_FRWheelSpdEdgesSum,
                       &AION_IDS_SPEEDGOAT_B.BCS_FRWheelSpdEdgesSumVD,
                       &AION_IDS_SPEEDGOAT_B.BCS_RLWheelSpdEdgesSum,
                       &AION_IDS_SPEEDGOAT_B.BCS_RLWheelSpdEdgesSumVD,
                       &AION_IDS_SPEEDGOAT_B.BCS_RRWheelSpdEdgesSum,
                       &AION_IDS_SPEEDGOAT_B.BCS_RRWheelSpdEdgesSumVD,
                       &AION_IDS_SPEEDGOAT_B.SCU_2_Checksum,
                       &AION_IDS_SPEEDGOAT_B.SCU_2_MsgCounter,
                       &AION_IDS_SPEEDGOAT_B.BCS_YawRate,
                       &AION_IDS_SPEEDGOAT_B.BCS_YawRateOffset,
                       &AION_IDS_SPEEDGOAT_B.BCS_YawRateSt,
                       &AION_IDS_SPEEDGOAT_B.SCU_3_Checksum,
                       &AION_IDS_SPEEDGOAT_B.SCU_3_MsgCounter,
                       &AION_IDS_SPEEDGOAT_B.BCS_HDCCtrlSt,
                       &AION_IDS_SPEEDGOAT_B.BCS_HDCErrSt,
                       &AION_IDS_SPEEDGOAT_B.SCU_4_Checksum,
                       &AION_IDS_SPEEDGOAT_B.SCU_4_MsgCounter,
                       &AION_IDS_SPEEDGOAT_B.BCS_AEBActive,
                       &AION_IDS_SPEEDGOAT_B.BCS_AEBAvailable,
                       &AION_IDS_SPEEDGOAT_B.BCS_CDDActive,
                       &AION_IDS_SPEEDGOAT_B.BCS_CDDAvailable,
                       &AION_IDS_SPEEDGOAT_B.BCS_CDDFail,
                       &AION_IDS_SPEEDGOAT_B.BCS_MasterCylinderPr,
                       &AION_IDS_SPEEDGOAT_B.BCS_MasterCylinderPrOffset,
                       &AION_IDS_SPEEDGOAT_B.BCS_MasterCylinderPrOffsetVD,
                       &AION_IDS_SPEEDGOAT_B.BCS_MasterCylinderPrVD,
                       &AION_IDS_SPEEDGOAT_B.BCS_NoBrakeForce,
                       &AION_IDS_SPEEDGOAT_B.BCS_VehicleStandStillSt,
                       &AION_IDS_SPEEDGOAT_B.SCU_5_Checksum,
                       &AION_IDS_SPEEDGOAT_B.SCU_5_MsgCounter,
                       &AION_IDS_SPEEDGOAT_B.BCS_FLWheelRotatedDirection,
                       &AION_IDS_SPEEDGOAT_B.BCS_FLWheelRotatedDirectionVD,
                       &AION_IDS_SPEEDGOAT_B.BCS_FLWheelSpd,
                       &AION_IDS_SPEEDGOAT_B.BCS_FLWheelSpdVD,
                       &AION_IDS_SPEEDGOAT_B.BCS_FRWheelRotatedDirection,
                       &AION_IDS_SPEEDGOAT_B.BCS_FRWheelRotatedDirectionVD,
                       &AION_IDS_SPEEDGOAT_B.BCS_FRWheelSpd,
                       &AION_IDS_SPEEDGOAT_B.BCS_FRWheelSpdVD,
                       &AION_IDS_SPEEDGOAT_B.SCU_6_Checksum,
                       &AION_IDS_SPEEDGOAT_B.SCU_6_MsgCounter,
                       &AION_IDS_SPEEDGOAT_B.BCS_RLWheelRotatedDirection,
                       &AION_IDS_SPEEDGOAT_B.BCS_RLWheelRotatedDirectionVD,
                       &AION_IDS_SPEEDGOAT_B.BCS_RLWheelSpd,
                       &AION_IDS_SPEEDGOAT_B.BCS_RLWheelSpdVD,
                       &AION_IDS_SPEEDGOAT_B.BCS_RRWheelRotatedDirection,
                       &AION_IDS_SPEEDGOAT_B.BCS_RRWheelRotatedDirectionVD,
                       &AION_IDS_SPEEDGOAT_B.BCS_RRWheelSpd,
                       &AION_IDS_SPEEDGOAT_B.BCS_RRWheelSpdVD,
                       &AION_IDS_SPEEDGOAT_B.SCU_7_Checksum,
                       &AION_IDS_SPEEDGOAT_B.SCU_7_MsgCounter,
                       &AION_IDS_SPEEDGOAT_B.BCS_ActVehLaltrlAccel,
                       &AION_IDS_SPEEDGOAT_B.BCS_ActVehLaltrlAccelVD,
                       &AION_IDS_SPEEDGOAT_B.BCS_ActVehLongAccel,
                       &AION_IDS_SPEEDGOAT_B.BCS_ActVehLongAccelVD,
                       &AION_IDS_SPEEDGOAT_B.BCS_VehLaltrlAccelOffset,
                       &AION_IDS_SPEEDGOAT_B.BCS_VehLongAccelOffset,
                       &AION_IDS_SPEEDGOAT_B.SCU_8_Checksum,
                       &AION_IDS_SPEEDGOAT_B.SCU_8_MsgCounter,
                       &AION_IDS_SPEEDGOAT_B.EPB_FailSt,
                       &AION_IDS_SPEEDGOAT_B.EPB_SwitchSt,
                       &AION_IDS_SPEEDGOAT_B.EPB_SwitchStVD,
                       &AION_IDS_SPEEDGOAT_B.EPB_SysSt,
                       &AION_IDS_SPEEDGOAT_B.SCU_9_Checksum,
                       &AION_IDS_SPEEDGOAT_B.SCU_9_MsgCounter,
                       &(AION_IDS_SPEEDGOAT_DW.Signal_Transfer_InstanceData.rtb));

  /* S-Function (scanpack): '<S28>/ADCU2SCU_Brake_Command_CAN_pack' */
  /* S-Function (scanpack): '<S28>/ADCU2SCU_Brake_Command_CAN_pack' */
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.ID = 544U;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Length = 8U;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Extended = 0U;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Remote = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[0] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[1] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[2] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[3] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[4] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[5] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[6] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 56
     *  length                  = 8
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_1_Checksum;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(255)) {
          packedValue = (uint8_T) 255;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[7] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[7] |
              (uint8_T)(packedValue);
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 48
     *  length                  = 4
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_1_MsgCounter;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(15)) {
          packedValue = (uint8_T) 15;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[6] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[6] |
              (uint8_T)((uint8_T)(packedValue & (uint8_T)0xFU));
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 26
     *  length                  = 14
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = -5000.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_AutoTrqWhlReq;

        /* no factor to apply */
        result = result - -5000.0;

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(16383)) {
          packedValue = (uint16_T) 16383;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[3] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[3] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0x3FU) <<
              2));
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[2] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[2] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0x3FC0U) >>
              6));
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
     *  startBit                = 8
     *  length                  = 16
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 0.0004882
     *  offset                  = -16.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_BrakeReq;

        /* full scaling operation */
        result = (result - -16.0) * (1 / 0.0004882);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(65535)) {
          packedValue = (uint16_T) 65535;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[1] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[1] |
              (uint8_T)((uint16_T)(packedValue & (uint16_T)0xFFU));
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[0] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[0] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 4 ------------------
     *  startBit                = 37
     *  length                  = 3
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_GearLvlReq;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(7)) {
          packedValue = (uint8_T) 7;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[4] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[4] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x7U) << 5));
          }
        }
      }
    }

    /* --------------- START Packing signal 5 ------------------
     *  startBit                = 36
     *  length                  = 1
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_GearLvlReqVD;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[4] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[4] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 4));
          }
        }
      }
    }

    /* --------------- START Packing signal 6 ------------------
     *  startBit                = 24
     *  length                  = 2
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_LngCtrlReq;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(3)) {
          packedValue = (uint8_T) 3;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[3] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[3] |
              (uint8_T)((uint8_T)(packedValue & (uint8_T)0x3U));
          }
        }
      }
    }

    /* --------------- START Packing signal 7 ------------------
     *  startBit                = 35
     *  length                  = 1
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_ParkingReqToEPB;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[4] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[4] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 3));
          }
        }
      }
    }

    /* --------------- START Packing signal 8 ------------------
     *  startBit                = 34
     *  length                  = 1
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_ParkingReqToEPBVD;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[4] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack.Data[4] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 2));
          }
        }
      }
    }
  }

  /* RateTransition: '<S28>/RT' */
  AION_IDS_SPEEDGOAT_B.RT_f =
    AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack;

  /* S-Function (sg_IO61X_write_s): '<S28>/ADCU2SCU_Brake_Command_CAN_write' */

  /* Level2 S-Function Block: '<S28>/ADCU2SCU_Brake_Command_CAN_write' (sg_IO61X_write_s) */
  {
    SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[2];
    sfcnOutputs(rts,1);
  }

  /* S-Function (scanpack): '<S28>/ADCU2SCU_Gear_Command_CAN_pack' */
  /* S-Function (scanpack): '<S28>/ADCU2SCU_Gear_Command_CAN_pack' */
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.ID = 545U;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Length = 8U;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Extended = 0U;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Remote = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[0] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[1] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[2] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[3] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[4] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[5] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[6] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 56
     *  length                  = 8
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_2_Checksum;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(255)) {
          packedValue = (uint8_T) 255;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[7] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[7] |
              (uint8_T)(packedValue);
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 48
     *  length                  = 4
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_2_MsgCounter;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(15)) {
          packedValue = (uint8_T) 15;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[6] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[6] |
              (uint8_T)((uint8_T)(packedValue & (uint8_T)0xFU));
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 44
     *  length                  = 1
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_LatCtrlReq;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[5] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[5] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 4));
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
     *  startBit                = 8
     *  length                  = 16
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 0.1
     *  offset                  = -780.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_SteerAngReq;

        /* full scaling operation */
        result = (result - -780.0) * (1 / 0.1);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(65535)) {
          packedValue = (uint16_T) 65535;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[1] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[1] |
              (uint8_T)((uint16_T)(packedValue & (uint16_T)0xFFU));
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[0] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[0] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 4 ------------------
     *  startBit                = 24
     *  length                  = 16
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 0.125
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_SteerAngSpdLimt;

        /* no offset to apply */
        result = result * (1 / 0.125);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(65535)) {
          packedValue = (uint16_T) 65535;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[3] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[3] |
              (uint8_T)((uint16_T)(packedValue & (uint16_T)0xFFU));
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[2] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[2] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0xFF00U) >>
              8));
          }
        }
      }
    }

    /* --------------- START Packing signal 5 ------------------
     *  startBit                = 45
     *  length                  = 11
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 0.01
     *  offset                  = -10.24
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_SteerWhlTorqReq;

        /* full scaling operation */
        result = (result - -10.24) * (1 / 0.01);

        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint16_T packedValue;
        if (outValue > (real64_T)(2047)) {
          packedValue = (uint16_T) 2047;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint16_T) 0;
        } else {
          packedValue = (uint16_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[5] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[5] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0x7U) << 5));
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[4] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack.Data[4] |
              (uint8_T)((uint16_T)((uint16_T)(packedValue & (uint16_T)0x7F8U) >>
              3));
          }
        }
      }
    }
  }

  /* RateTransition: '<S28>/RT1' */
  AION_IDS_SPEEDGOAT_B.RT1 = AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack;

  /* S-Function (sg_IO61X_write_s): '<S28>/ADCU2SCU_Gear_Command_CAN_write' */

  /* Level2 S-Function Block: '<S28>/ADCU2SCU_Gear_Command_CAN_write' (sg_IO61X_write_s) */
  {
    SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[3];
    sfcnOutputs(rts,1);
  }

  /* S-Function (scanpack): '<S28>/ADCU2SCU_Steer_Command_CAN_pack' */
  /* S-Function (scanpack): '<S28>/ADCU2SCU_Steer_Command_CAN_pack' */
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.ID = 640U;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Length = 8U;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Extended = 0U;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Remote = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[0] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[1] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[2] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[3] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[4] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[5] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[6] = 0;
  AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[7] = 0;

  {
    /* --------------- START Packing signal 0 ------------------
     *  startBit                = 56
     *  length                  = 8
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_3_Checksum;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(255)) {
          packedValue = (uint8_T) 255;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[7] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[7] |
              (uint8_T)(packedValue);
          }
        }
      }
    }

    /* --------------- START Packing signal 1 ------------------
     *  startBit                = 48
     *  length                  = 4
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_3_MsgCounter;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(15)) {
          packedValue = (uint8_T) 15;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[6] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[6] |
              (uint8_T)((uint8_T)(packedValue & (uint8_T)0xFU));
          }
        }
      }
    }

    /* --------------- START Packing signal 2 ------------------
     *  startBit                = 2
     *  length                  = 2
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_BeamReq;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(3)) {
          packedValue = (uint8_T) 3;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[0] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[0] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x3U) << 2));
          }
        }
      }
    }

    /* --------------- START Packing signal 3 ------------------
     *  startBit                = 4
     *  length                  = 1
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_BodyCtrlReq;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[0] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[0] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 4));
          }
        }
      }
    }

    /* --------------- START Packing signal 4 ------------------
     *  startBit                = 5
     *  length                  = 1
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_HornRingReq;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(1)) {
          packedValue = (uint8_T) 1;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[0] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[0] |
              (uint8_T)((uint8_T)((uint8_T)(packedValue & (uint8_T)0x1U) << 5));
          }
        }
      }
    }

    /* --------------- START Packing signal 5 ------------------
     *  startBit                = 0
     *  length                  = 2
     *  desiredSignalByteLayout = BIGENDIAN
     *  dataType                = UNSIGNED
     *  factor                  = 1.0
     *  offset                  = 0.0
     *  minimum                 = 0.0
     *  maximum                 = 0.0
     * -----------------------------------------------------------------------*/
    {
      real64_T outValue = 0;

      {
        real64_T result = AION_IDS_SPEEDGOAT_B.ADCU_TurnLightReq;

        /* no scaling required */
        /* round to closest integer value for integer CAN signal */
        outValue = round(result);
      }

      {
        uint8_T packedValue;
        if (outValue > (real64_T)(3)) {
          packedValue = (uint8_T) 3;
        } else if (outValue < (real64_T)(0)) {
          packedValue = (uint8_T) 0;
        } else {
          packedValue = (uint8_T) (outValue);
        }

        {
          {
            AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[0] =
              AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack.Data[0] |
              (uint8_T)((uint8_T)(packedValue & (uint8_T)0x3U));
          }
        }
      }
    }
  }

  /* RateTransition: '<S28>/RT2' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT2_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT2_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT2_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT2_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT2_Buf0 =
      AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT2_Buf1 =
      AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT2_Buf2 =
      AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT2_LstBufWR = wrBufIdx;

  /* End of RateTransition: '<S28>/RT2' */

  /* Constant: '<S5>/AutoTrqWhlReq_test' */
  AION_IDS_SPEEDGOAT_B.AutoTrqWhlReq_test = rtP_AutoTrqWhlReq_test;

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>
    (AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_Buf0 =
      AION_IDS_SPEEDGOAT_B.AutoTrqWhlReq_test;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_Buf1 =
      AION_IDS_SPEEDGOAT_B.AutoTrqWhlReq_test;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_Buf2 =
      AION_IDS_SPEEDGOAT_B.AutoTrqWhlReq_test;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_LstBufWR = wrBufIdx;

  /* Constant: '<S5>/BrakeReq_test' */
  AION_IDS_SPEEDGOAT_B.BrakeReq_test = rtP_BrakeReq_test;

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.BrakeReq_test_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.BrakeReq_test_LstBufWR +
    1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.BrakeReq_test_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.BrakeReq_test_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.BrakeReq_test_Buf0 =
      AION_IDS_SPEEDGOAT_B.BrakeReq_test;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.BrakeReq_test_Buf1 =
      AION_IDS_SPEEDGOAT_B.BrakeReq_test;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.BrakeReq_test_Buf2 =
      AION_IDS_SPEEDGOAT_B.BrakeReq_test;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.BrakeReq_test_LstBufWR = wrBufIdx;

  /* Constant: '<S5>/LatCtrlReq_test' */
  AION_IDS_SPEEDGOAT_B.LatCtrlReq_test = rtP_LatCtrlReq_test;

  /* DataTypeConversion: '<S5>/Data Type Conversion8' */
  tmp = std::floor(AION_IDS_SPEEDGOAT_B.LatCtrlReq_test);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S5>/Data Type Conversion8' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion8 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<S5>/Data Type Conversion7' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion7 = static_cast<Control_request>
    (AION_IDS_SPEEDGOAT_B.DataTypeConversion8);

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx ==
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_Buf0 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion7;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_Buf1 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion7;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_Buf2 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion7;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_LstBufWR =
    wrBufIdx;

  /* DataTypeConversion: '<S5>/Data Type Conversion17' incorporates:
   *  Constant: '<S5>/BeamReq_test'
   */
  tmp = std::floor(rtP_BeamReq_test);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S5>/Data Type Conversion17' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion17 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>(static_cast<
    uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>(tmp)));

  /* DataTypeConversion: '<S5>/Data Type Conversion18' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion18 = static_cast<Beam_request>
    (AION_IDS_SPEEDGOAT_B.DataTypeConversion17);

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx ==
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_Buf0 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion18;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_Buf1 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion18;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_Buf2 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion18;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_LstBufWR =
    wrBufIdx;

  /* DataTypeConversion: '<S5>/Data Type Conversion11' incorporates:
   *  Constant: '<S5>/BodyCtrlReq_test'
   */
  tmp = std::floor(rtP_BodyCtrlReq_test);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S5>/Data Type Conversion11' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion11 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>(static_cast<
    uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>(tmp)));

  /* DataTypeConversion: '<S5>/Data Type Conversion12' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion12 = static_cast<Enable_request>
    (AION_IDS_SPEEDGOAT_B.DataTypeConversion11);

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx ==
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_Buf0 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion12;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_Buf1 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion12;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_Buf2 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion12;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_LstBufWR =
    wrBufIdx;

  /* DataTypeConversion: '<S5>/Data Type Conversion15' incorporates:
   *  Constant: '<S5>/HornRingReq_test'
   */
  tmp = std::floor(rtP_HornRingReq_test);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S5>/Data Type Conversion15' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion15 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>(static_cast<
    uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>(tmp)));

  /* DataTypeConversion: '<S5>/Data Type Conversion16' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion16 = static_cast<Active_request>
    (AION_IDS_SPEEDGOAT_B.DataTypeConversion15);

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport18_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport18_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx ==
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport18_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport18_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport18_Buf0 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion16;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport18_Buf1 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion16;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport18_Buf2 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion16;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport18_LstBufWR =
    wrBufIdx;

  /* DataTypeConversion: '<S5>/Data Type Conversion13' incorporates:
   *  Constant: '<S5>/TurnLightReq_test'
   */
  tmp = std::floor(rtP_TurnLightReq_test);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S5>/Data Type Conversion13' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion13 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>(static_cast<
    uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>(tmp)));

  /* DataTypeConversion: '<S5>/Data Type Conversion14' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion14 = static_cast<Light_request>
    (AION_IDS_SPEEDGOAT_B.DataTypeConversion13);

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport19_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport19_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx ==
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport19_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport19_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport19_Buf0 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion14;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport19_Buf1 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion14;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport19_Buf2 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion14;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport19_LstBufWR =
    wrBufIdx;

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' incorporates:
   *  Constant: '<S5>/SteerWhlTorqReq_test'
   */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx ==
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_Buf0 =
      rtP_SteerWhlTorqReq_test;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_Buf1 =
      rtP_SteerWhlTorqReq_test;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_Buf2 =
      rtP_SteerWhlTorqReq_test;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_LstBufWR =
    wrBufIdx;

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' incorporates:
   *  Constant: '<S5>/SteerAngReq_test'
   */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx ==
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_Buf0 =
      rtP_SteerAngReq_test;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_Buf1 =
      rtP_SteerAngReq_test;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_Buf2 =
      rtP_SteerAngReq_test;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_LstBufWR =
    wrBufIdx;

  /* DataTypeConversion: '<S5>/Data Type Conversion10' incorporates:
   *  Constant: '<S5>/LngCtrlReq_test'
   */
  tmp = std::floor(rtP_LngCtrlReq_test);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S5>/Data Type Conversion10' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion10 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>(static_cast<
    uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>(tmp)));

  /* DataTypeConversion: '<S5>/Data Type Conversion9' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion9 = static_cast<Control_request>
    (AION_IDS_SPEEDGOAT_B.DataTypeConversion10);

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport5_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport5_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx ==
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport5_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport5_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport5_Buf0 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion9;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport5_Buf1 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion9;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport5_Buf2 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion9;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport5_LstBufWR =
    wrBufIdx;

  /* DataTypeConversion: '<S5>/Data Type Conversion3' incorporates:
   *  Constant: '<S5>/GearLvlReq_test'
   */
  tmp = std::floor(rtP_GearLvlReq_test);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S5>/Data Type Conversion3' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion3 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<S5>/Data Type Conversion2' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion2 = static_cast<Gear_request>
    (AION_IDS_SPEEDGOAT_B.DataTypeConversion3);

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport8_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport8_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx ==
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport8_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport8_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport8_Buf0 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion2;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport8_Buf1 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion2;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport8_Buf2 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion2;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport8_LstBufWR =
    wrBufIdx;

  /* DataTypeConversion: '<S5>/Data Type Conversion1' incorporates:
   *  Constant: '<S5>/GearLvlReqVD_test'
   */
  tmp = std::floor(rtP_GearLvlReqVD_test);
  if (rtIsNaN(tmp) || rtIsInf(tmp)) {
    tmp = 0.0;
  } else {
    tmp = std::fmod(tmp, 256.0);
  }

  /* DataTypeConversion: '<S5>/Data Type Conversion1' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion1 = static_cast<uint8_T>(tmp < 0.0 ?
    static_cast<int32_T>(static_cast<uint8_T>(-static_cast<int8_T>
    (static_cast<uint8_T>(-tmp)))) : static_cast<int32_T>(static_cast<uint8_T>
    (tmp)));

  /* DataTypeConversion: '<S5>/Data Type Conversion4' */
  AION_IDS_SPEEDGOAT_B.DataTypeConversion4 = static_cast<Validation_status>
    (AION_IDS_SPEEDGOAT_B.DataTypeConversion1);

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport9_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport9_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx ==
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport9_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport9_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport9_Buf0 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion4;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport9_Buf1 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion4;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport9_Buf2 =
      AION_IDS_SPEEDGOAT_B.DataTypeConversion4;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport9_LstBufWR =
    wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_10_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_10_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_10_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_10_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_10_Buf0 = AION_IDS_SPEEDGOAT_B.set_Checksum1;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_10_Buf1 = AION_IDS_SPEEDGOAT_B.set_Checksum1;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_10_Buf2 = AION_IDS_SPEEDGOAT_B.set_Checksum1;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_10_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_100_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_100_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_100_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_100_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_100_Buf0 = AION_IDS_SPEEDGOAT_B.get_Checksum12;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_100_Buf1 = AION_IDS_SPEEDGOAT_B.get_Checksum12;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_100_Buf2 = AION_IDS_SPEEDGOAT_B.get_Checksum12;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_100_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_101_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_101_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_101_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_101_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_101_Buf0 = AION_IDS_SPEEDGOAT_B.get_MsgCounter12;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_101_Buf1 = AION_IDS_SPEEDGOAT_B.get_MsgCounter12;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_101_Buf2 = AION_IDS_SPEEDGOAT_B.get_MsgCounter12;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_101_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_102_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_102_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_102_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_102_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_102_Buf0 = AION_IDS_SPEEDGOAT_B.get_Checksum13;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_102_Buf1 = AION_IDS_SPEEDGOAT_B.get_Checksum13;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_102_Buf2 = AION_IDS_SPEEDGOAT_B.get_Checksum13;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_102_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_103_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_103_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_103_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_103_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_103_Buf0 = AION_IDS_SPEEDGOAT_B.get_MsgCounter13;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_103_Buf1 = AION_IDS_SPEEDGOAT_B.get_MsgCounter13;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_103_Buf2 = AION_IDS_SPEEDGOAT_B.get_MsgCounter13;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_103_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_106_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_106_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_106_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_106_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_106_Buf0 =
      AION_IDS_SPEEDGOAT_B.get_LatAutoCheckReport;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_106_Buf1 =
      AION_IDS_SPEEDGOAT_B.get_LatAutoCheckReport;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_106_Buf2 =
      AION_IDS_SPEEDGOAT_B.get_LatAutoCheckReport;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_106_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_107_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_107_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_107_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_107_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_107_Buf0 = AION_IDS_SPEEDGOAT_B.get_LatCtrlMode;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_107_Buf1 = AION_IDS_SPEEDGOAT_B.get_LatCtrlMode;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_107_Buf2 = AION_IDS_SPEEDGOAT_B.get_LatCtrlMode;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_107_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_108_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_108_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_108_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_108_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_108_Buf0 = AION_IDS_SPEEDGOAT_B.get_LatQuitReport;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_108_Buf1 = AION_IDS_SPEEDGOAT_B.get_LatQuitReport;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_108_Buf2 = AION_IDS_SPEEDGOAT_B.get_LatQuitReport;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_108_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_109_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_109_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_109_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_109_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_109_Buf0 =
      AION_IDS_SPEEDGOAT_B.get_LngAutoCheckIReport;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_109_Buf1 =
      AION_IDS_SPEEDGOAT_B.get_LngAutoCheckIReport;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_109_Buf2 =
      AION_IDS_SPEEDGOAT_B.get_LngAutoCheckIReport;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_109_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_11_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_11_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_11_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_11_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_11_Buf0 = AION_IDS_SPEEDGOAT_B.set_MsgCounter1;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_11_Buf1 = AION_IDS_SPEEDGOAT_B.set_MsgCounter1;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_11_Buf2 = AION_IDS_SPEEDGOAT_B.set_MsgCounter1;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_11_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_110_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_110_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_110_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_110_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_110_Buf0 = AION_IDS_SPEEDGOAT_B.get_LngCtrlMode;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_110_Buf1 = AION_IDS_SPEEDGOAT_B.get_LngCtrlMode;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_110_Buf2 = AION_IDS_SPEEDGOAT_B.get_LngCtrlMode;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_110_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_111_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_111_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_111_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_111_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_111_Buf0 = AION_IDS_SPEEDGOAT_B.get_LngQuitReport;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_111_Buf1 = AION_IDS_SPEEDGOAT_B.get_LngQuitReport;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_111_Buf2 = AION_IDS_SPEEDGOAT_B.get_LngQuitReport;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_111_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_113_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_113_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_113_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_113_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_113_Buf0 = AION_IDS_SPEEDGOAT_B.get_Checksum16;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_113_Buf1 = AION_IDS_SPEEDGOAT_B.get_Checksum16;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_113_Buf2 = AION_IDS_SPEEDGOAT_B.get_Checksum16;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_113_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_114_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_114_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_114_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_114_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_114_Buf0 = AION_IDS_SPEEDGOAT_B.get_MsgCounter16;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_114_Buf1 = AION_IDS_SPEEDGOAT_B.get_MsgCounter16;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_114_Buf2 = AION_IDS_SPEEDGOAT_B.get_MsgCounter16;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_114_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_115_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_115_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_115_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_115_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_115_Buf0 = AION_IDS_SPEEDGOAT_B.get_Checksum17;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_115_Buf1 = AION_IDS_SPEEDGOAT_B.get_Checksum17;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_115_Buf2 = AION_IDS_SPEEDGOAT_B.get_Checksum17;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_115_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_116_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_116_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_116_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_116_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_116_Buf0 = AION_IDS_SPEEDGOAT_B.get_MsgCounter17;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_116_Buf1 = AION_IDS_SPEEDGOAT_B.get_MsgCounter17;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_116_Buf2 = AION_IDS_SPEEDGOAT_B.get_MsgCounter17;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_116_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_117_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_117_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_117_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_117_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_117_Buf0 = AION_IDS_SPEEDGOAT_B.get_Checksum18;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_117_Buf1 = AION_IDS_SPEEDGOAT_B.get_Checksum18;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_117_Buf2 = AION_IDS_SPEEDGOAT_B.get_Checksum18;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_117_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_118_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_118_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_118_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_118_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_118_Buf0 = AION_IDS_SPEEDGOAT_B.get_MsgCounter18;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_118_Buf1 = AION_IDS_SPEEDGOAT_B.get_MsgCounter18;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_118_Buf2 = AION_IDS_SPEEDGOAT_B.get_MsgCounter18;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_118_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_119_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_119_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_119_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_119_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_119_Buf0 = AION_IDS_SPEEDGOAT_B.get_Checksum2;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_119_Buf1 = AION_IDS_SPEEDGOAT_B.get_Checksum2;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_119_Buf2 = AION_IDS_SPEEDGOAT_B.get_Checksum2;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_119_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_12_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_12_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_12_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_12_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_12_Buf0 = AION_IDS_SPEEDGOAT_B.set_Checksum2;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_12_Buf1 = AION_IDS_SPEEDGOAT_B.set_Checksum2;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_12_Buf2 = AION_IDS_SPEEDGOAT_B.set_Checksum2;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_12_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_120_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_120_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_120_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_120_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_120_Buf0 = AION_IDS_SPEEDGOAT_B.get_MsgCounter2;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_120_Buf1 = AION_IDS_SPEEDGOAT_B.get_MsgCounter2;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_120_Buf2 = AION_IDS_SPEEDGOAT_B.get_MsgCounter2;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_120_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_121_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_121_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_121_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_121_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_121_Buf0 = AION_IDS_SPEEDGOAT_B.get_Checksum3;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_121_Buf1 = AION_IDS_SPEEDGOAT_B.get_Checksum3;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_121_Buf2 = AION_IDS_SPEEDGOAT_B.get_Checksum3;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_121_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_122_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_122_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_122_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_122_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_122_Buf0 = AION_IDS_SPEEDGOAT_B.get_MsgCounter3;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_122_Buf1 = AION_IDS_SPEEDGOAT_B.get_MsgCounter3;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_122_Buf2 = AION_IDS_SPEEDGOAT_B.get_MsgCounter3;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_122_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_123_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_123_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_123_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_123_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_123_Buf0 = AION_IDS_SPEEDGOAT_B.get_Checksum4;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_123_Buf1 = AION_IDS_SPEEDGOAT_B.get_Checksum4;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_123_Buf2 = AION_IDS_SPEEDGOAT_B.get_Checksum4;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_123_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_124_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_124_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_124_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_124_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_124_Buf0 = AION_IDS_SPEEDGOAT_B.get_MsgCounter4;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_124_Buf1 = AION_IDS_SPEEDGOAT_B.get_MsgCounter4;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_124_Buf2 = AION_IDS_SPEEDGOAT_B.get_MsgCounter4;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_124_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_125_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_125_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_125_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_125_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_125_Buf0 = AION_IDS_SPEEDGOAT_B.get_Checksum5;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_125_Buf1 = AION_IDS_SPEEDGOAT_B.get_Checksum5;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_125_Buf2 = AION_IDS_SPEEDGOAT_B.get_Checksum5;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_125_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_126_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_126_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_126_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_126_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_126_Buf0 = AION_IDS_SPEEDGOAT_B.get_MsgCounter5;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_126_Buf1 = AION_IDS_SPEEDGOAT_B.get_MsgCounter5;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_126_Buf2 = AION_IDS_SPEEDGOAT_B.get_MsgCounter5;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_126_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_127_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_127_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_127_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_127_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_127_Buf0 = AION_IDS_SPEEDGOAT_B.get_Checksum6;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_127_Buf1 = AION_IDS_SPEEDGOAT_B.get_Checksum6;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_127_Buf2 = AION_IDS_SPEEDGOAT_B.get_Checksum6;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_127_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_128_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_128_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_128_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_128_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_128_Buf0 = AION_IDS_SPEEDGOAT_B.get_MsgCounter6;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_128_Buf1 = AION_IDS_SPEEDGOAT_B.get_MsgCounter6;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_128_Buf2 = AION_IDS_SPEEDGOAT_B.get_MsgCounter6;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_128_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_129_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_129_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_129_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_129_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_129_Buf0 = AION_IDS_SPEEDGOAT_B.get_Checksum7;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_129_Buf1 = AION_IDS_SPEEDGOAT_B.get_Checksum7;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_129_Buf2 = AION_IDS_SPEEDGOAT_B.get_Checksum7;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_129_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_13_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_13_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_13_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_13_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_13_Buf0 = AION_IDS_SPEEDGOAT_B.set_MsgCounter2;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_13_Buf1 = AION_IDS_SPEEDGOAT_B.set_MsgCounter2;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_13_Buf2 = AION_IDS_SPEEDGOAT_B.set_MsgCounter2;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_13_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_130_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_130_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_130_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_130_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_130_Buf0 = AION_IDS_SPEEDGOAT_B.get_MsgCounter7;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_130_Buf1 = AION_IDS_SPEEDGOAT_B.get_MsgCounter7;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_130_Buf2 = AION_IDS_SPEEDGOAT_B.get_MsgCounter7;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_130_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_131_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_131_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_131_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_131_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_131_Buf0 = AION_IDS_SPEEDGOAT_B.get_Checksum8;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_131_Buf1 = AION_IDS_SPEEDGOAT_B.get_Checksum8;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_131_Buf2 = AION_IDS_SPEEDGOAT_B.get_Checksum8;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_131_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_132_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_132_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_132_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_132_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_132_Buf0 = AION_IDS_SPEEDGOAT_B.get_MsgCounter8;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_132_Buf1 = AION_IDS_SPEEDGOAT_B.get_MsgCounter8;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_132_Buf2 = AION_IDS_SPEEDGOAT_B.get_MsgCounter8;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_132_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_133_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_133_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_133_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_133_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_133_Buf0 = AION_IDS_SPEEDGOAT_B.get_Checksum9;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_133_Buf1 = AION_IDS_SPEEDGOAT_B.get_Checksum9;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_133_Buf2 = AION_IDS_SPEEDGOAT_B.get_Checksum9;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_133_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_134_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_134_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_134_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_134_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_134_Buf0 = AION_IDS_SPEEDGOAT_B.get_MsgCounter9;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_134_Buf1 = AION_IDS_SPEEDGOAT_B.get_MsgCounter9;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_134_Buf2 = AION_IDS_SPEEDGOAT_B.get_MsgCounter9;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_134_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_135_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_135_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_135_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_135_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_135_Buf0 = AION_IDS_SPEEDGOAT_B.get_FailSt;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_135_Buf1 = AION_IDS_SPEEDGOAT_B.get_FailSt;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_135_Buf2 = AION_IDS_SPEEDGOAT_B.get_FailSt;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_135_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_14_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_14_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_14_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_14_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_14_Buf0 = AION_IDS_SPEEDGOAT_B.set_Checksum3;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_14_Buf1 = AION_IDS_SPEEDGOAT_B.set_Checksum3;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_14_Buf2 = AION_IDS_SPEEDGOAT_B.set_Checksum3;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_14_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_141_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_141_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_141_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_141_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_141_Buf0 = AION_IDS_SPEEDGOAT_B.get_SteeringAngle;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_141_Buf1 = AION_IDS_SPEEDGOAT_B.get_SteeringAngle;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_141_Buf2 = AION_IDS_SPEEDGOAT_B.get_SteeringAngle;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_141_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_142_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_142_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_142_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_142_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_142_Buf0 =
      AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpd;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_142_Buf1 =
      AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpd;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_142_Buf2 =
      AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpd;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_142_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_145_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_145_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_145_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_145_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_145_Buf0 = AION_IDS_SPEEDGOAT_B.get_StrngWhlTorq;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_145_Buf1 = AION_IDS_SPEEDGOAT_B.get_StrngWhlTorq;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_145_Buf2 = AION_IDS_SPEEDGOAT_B.get_StrngWhlTorq;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_145_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_149_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_149_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_149_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_149_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_149_Buf0 = AION_IDS_SPEEDGOAT_B.get_CtrlAvailable;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_149_Buf1 = AION_IDS_SPEEDGOAT_B.get_CtrlAvailable;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_149_Buf2 = AION_IDS_SPEEDGOAT_B.get_CtrlAvailable;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_149_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_15_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_15_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_15_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_15_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_15_Buf0 = AION_IDS_SPEEDGOAT_B.set_MsgCounter3;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_15_Buf1 = AION_IDS_SPEEDGOAT_B.set_MsgCounter3;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_15_Buf2 = AION_IDS_SPEEDGOAT_B.set_MsgCounter3;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_15_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_153_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_153_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_153_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_153_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_153_Buf0 = AION_IDS_SPEEDGOAT_B.get_HazardLampSt;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_153_Buf1 = AION_IDS_SPEEDGOAT_B.get_HazardLampSt;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_153_Buf2 = AION_IDS_SPEEDGOAT_B.get_HazardLampSt;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_153_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_154_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_154_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_154_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_154_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_154_Buf0 = AION_IDS_SPEEDGOAT_B.get_HighBeamSt;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_154_Buf1 = AION_IDS_SPEEDGOAT_B.get_HighBeamSt;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_154_Buf2 = AION_IDS_SPEEDGOAT_B.get_HighBeamSt;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_154_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_155_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_155_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_155_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_155_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_155_Buf0 = AION_IDS_SPEEDGOAT_B.get_HornSt;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_155_Buf1 = AION_IDS_SPEEDGOAT_B.get_HornSt;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_155_Buf2 = AION_IDS_SPEEDGOAT_B.get_HornSt;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_155_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_157_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_157_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_157_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_157_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_157_Buf0 =
      AION_IDS_SPEEDGOAT_B.get_LeftTurnLampFaultSt;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_157_Buf1 =
      AION_IDS_SPEEDGOAT_B.get_LeftTurnLampFaultSt;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_157_Buf2 =
      AION_IDS_SPEEDGOAT_B.get_LeftTurnLampFaultSt;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_157_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_158_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_158_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_158_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_158_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_158_Buf0 = AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_158_Buf1 = AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_158_Buf2 = AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_158_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_159_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_159_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_159_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_159_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_159_Buf0 = AION_IDS_SPEEDGOAT_B.get_LowBeamSt;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_159_Buf1 = AION_IDS_SPEEDGOAT_B.get_LowBeamSt;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_159_Buf2 = AION_IDS_SPEEDGOAT_B.get_LowBeamSt;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_159_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_164_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_164_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_164_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_164_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_164_Buf0 =
      AION_IDS_SPEEDGOAT_B.get_RightTurnLampFaultSt;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_164_Buf1 =
      AION_IDS_SPEEDGOAT_B.get_RightTurnLampFaultSt;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_164_Buf2 =
      AION_IDS_SPEEDGOAT_B.get_RightTurnLampFaultSt;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_164_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_165_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_165_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_165_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_165_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_165_Buf0 =
      AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_165_Buf1 =
      AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_165_Buf2 =
      AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_165_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_24_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_24_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_24_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_24_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_24_Buf0 = AION_IDS_SPEEDGOAT_B.get_VehSpd;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_24_Buf1 = AION_IDS_SPEEDGOAT_B.get_VehSpd;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_24_Buf2 = AION_IDS_SPEEDGOAT_B.get_VehSpd;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_24_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_26_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_26_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_26_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_26_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_26_Buf0 =
      AION_IDS_SPEEDGOAT_B.get_FLWheelSpdEdgesSum;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_26_Buf1 =
      AION_IDS_SPEEDGOAT_B.get_FLWheelSpdEdgesSum;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_26_Buf2 =
      AION_IDS_SPEEDGOAT_B.get_FLWheelSpdEdgesSum;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_26_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_28_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_28_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_28_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_28_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_28_Buf0 =
      AION_IDS_SPEEDGOAT_B.get_FRWheelSpdEdgesSum;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_28_Buf1 =
      AION_IDS_SPEEDGOAT_B.get_FRWheelSpdEdgesSum;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_28_Buf2 =
      AION_IDS_SPEEDGOAT_B.get_FRWheelSpdEdgesSum;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_28_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_30_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_30_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_30_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_30_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_30_Buf0 =
      AION_IDS_SPEEDGOAT_B.get_RLWheelSpdEdgesSum;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_30_Buf1 =
      AION_IDS_SPEEDGOAT_B.get_RLWheelSpdEdgesSum;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_30_Buf2 =
      AION_IDS_SPEEDGOAT_B.get_RLWheelSpdEdgesSum;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_30_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_32_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_32_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_32_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_32_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_32_Buf0 =
      AION_IDS_SPEEDGOAT_B.get_RRWheelSpdEdgesSum;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_32_Buf1 =
      AION_IDS_SPEEDGOAT_B.get_RRWheelSpdEdgesSum;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_32_Buf2 =
      AION_IDS_SPEEDGOAT_B.get_RRWheelSpdEdgesSum;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_32_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_34_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_34_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_34_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_34_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_34_Buf0 = AION_IDS_SPEEDGOAT_B.get_YawRate;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_34_Buf1 = AION_IDS_SPEEDGOAT_B.get_YawRate;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_34_Buf2 = AION_IDS_SPEEDGOAT_B.get_YawRate;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_34_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_35_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_35_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_35_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_35_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_35_Buf0 = AION_IDS_SPEEDGOAT_B.get_YawRateOffset;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_35_Buf1 = AION_IDS_SPEEDGOAT_B.get_YawRateOffset;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_35_Buf2 = AION_IDS_SPEEDGOAT_B.get_YawRateOffset;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_35_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_4_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_4_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_4_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_4_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_4_Buf0 = AION_IDS_SPEEDGOAT_B.set_SteerAngSpdLimt;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_4_Buf1 = AION_IDS_SPEEDGOAT_B.set_SteerAngSpdLimt;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_4_Buf2 = AION_IDS_SPEEDGOAT_B.set_SteerAngSpdLimt;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_4_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_44_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_44_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_44_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_44_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_44_Buf0 =
      AION_IDS_SPEEDGOAT_B.get_MasterCylinderPr;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_44_Buf1 =
      AION_IDS_SPEEDGOAT_B.get_MasterCylinderPr;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_44_Buf2 =
      AION_IDS_SPEEDGOAT_B.get_MasterCylinderPr;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_44_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_45_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_45_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_45_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_45_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_45_Buf0 =
      AION_IDS_SPEEDGOAT_B.get_MasterCylinderPrOffset;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_45_Buf1 =
      AION_IDS_SPEEDGOAT_B.get_MasterCylinderPrOffset;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_45_Buf2 =
      AION_IDS_SPEEDGOAT_B.get_MasterCylinderPrOffset;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_45_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_52_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_52_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_52_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_52_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_52_Buf0 = AION_IDS_SPEEDGOAT_B.get_FLWheelSpd;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_52_Buf1 = AION_IDS_SPEEDGOAT_B.get_FLWheelSpd;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_52_Buf2 = AION_IDS_SPEEDGOAT_B.get_FLWheelSpd;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_52_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_56_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_56_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_56_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_56_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_56_Buf0 = AION_IDS_SPEEDGOAT_B.get_FRWheelSpd;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_56_Buf1 = AION_IDS_SPEEDGOAT_B.get_FRWheelSpd;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_56_Buf2 = AION_IDS_SPEEDGOAT_B.get_FRWheelSpd;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_56_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_60_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_60_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_60_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_60_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_60_Buf0 = AION_IDS_SPEEDGOAT_B.get_RLWheelSpd;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_60_Buf1 = AION_IDS_SPEEDGOAT_B.get_RLWheelSpd;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_60_Buf2 = AION_IDS_SPEEDGOAT_B.get_RLWheelSpd;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_60_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_64_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_64_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_64_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_64_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_64_Buf0 = AION_IDS_SPEEDGOAT_B.get_RRWheelSpd;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_64_Buf1 = AION_IDS_SPEEDGOAT_B.get_RRWheelSpd;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_64_Buf2 = AION_IDS_SPEEDGOAT_B.get_RRWheelSpd;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_64_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_66_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_66_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_66_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_66_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_66_Buf0 =
      AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccel;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_66_Buf1 =
      AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccel;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_66_Buf2 =
      AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccel;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_66_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_68_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_68_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_68_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_68_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_68_Buf0 = AION_IDS_SPEEDGOAT_B.get_ActVehLongAccel;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_68_Buf1 = AION_IDS_SPEEDGOAT_B.get_ActVehLongAccel;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_68_Buf2 = AION_IDS_SPEEDGOAT_B.get_ActVehLongAccel;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_68_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_70_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_70_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_70_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_70_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_70_Buf0 =
      AION_IDS_SPEEDGOAT_B.get_VehLaltrlAccelOffset;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_70_Buf1 =
      AION_IDS_SPEEDGOAT_B.get_VehLaltrlAccelOffset;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_70_Buf2 =
      AION_IDS_SPEEDGOAT_B.get_VehLaltrlAccelOffset;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_70_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_71_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_71_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_71_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_71_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_71_Buf0 =
      AION_IDS_SPEEDGOAT_B.get_VehLongAccelOffset;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_71_Buf1 =
      AION_IDS_SPEEDGOAT_B.get_VehLongAccelOffset;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_71_Buf2 =
      AION_IDS_SPEEDGOAT_B.get_VehLongAccelOffset;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_71_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_73_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_73_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_73_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_73_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_73_Buf0 = AION_IDS_SPEEDGOAT_B.get_VehDrvMod;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_73_Buf1 = AION_IDS_SPEEDGOAT_B.get_VehDrvMod;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_73_Buf2 = AION_IDS_SPEEDGOAT_B.get_VehDrvMod;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_73_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_74_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_74_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_74_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_74_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_74_Buf0 = AION_IDS_SPEEDGOAT_B.get_VehRdySt;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_74_Buf1 = AION_IDS_SPEEDGOAT_B.get_VehRdySt;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_74_Buf2 = AION_IDS_SPEEDGOAT_B.get_VehRdySt;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_74_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_75_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_75_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_75_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_75_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_75_Buf0 = AION_IDS_SPEEDGOAT_B.get_VehRng;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_75_Buf1 = AION_IDS_SPEEDGOAT_B.get_VehRng;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_75_Buf2 = AION_IDS_SPEEDGOAT_B.get_VehRng;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_75_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_76_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_76_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_76_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_76_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_76_Buf0 = AION_IDS_SPEEDGOAT_B.get_ActRecpTorq;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_76_Buf1 = AION_IDS_SPEEDGOAT_B.get_ActRecpTorq;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_76_Buf2 = AION_IDS_SPEEDGOAT_B.get_ActRecpTorq;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_76_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_78_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_78_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_78_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_78_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_78_Buf0 = AION_IDS_SPEEDGOAT_B.get_CrntGearLvl;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_78_Buf1 = AION_IDS_SPEEDGOAT_B.get_CrntGearLvl;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_78_Buf2 = AION_IDS_SPEEDGOAT_B.get_CrntGearLvl;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_78_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_80_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_80_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_80_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_80_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_80_Buf0 = AION_IDS_SPEEDGOAT_B.get_ACCMaxRecpDecel;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_80_Buf1 = AION_IDS_SPEEDGOAT_B.get_ACCMaxRecpDecel;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_80_Buf2 = AION_IDS_SPEEDGOAT_B.get_ACCMaxRecpDecel;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_80_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_82_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_82_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_82_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_82_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_82_Buf0 = AION_IDS_SPEEDGOAT_B.get_ActVehWheelTorq;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_82_Buf1 = AION_IDS_SPEEDGOAT_B.get_ActVehWheelTorq;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_82_Buf2 = AION_IDS_SPEEDGOAT_B.get_ActVehWheelTorq;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_82_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_85_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_85_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_85_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_85_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_85_Buf0 = AION_IDS_SPEEDGOAT_B.get_ACCButtInfo;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_85_Buf1 = AION_IDS_SPEEDGOAT_B.get_ACCButtInfo;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_85_Buf2 = AION_IDS_SPEEDGOAT_B.get_ACCButtInfo;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_85_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_87_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_87_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_87_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_87_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_87_Buf0 = AION_IDS_SPEEDGOAT_B.get_GasPedalActPst;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_87_Buf1 = AION_IDS_SPEEDGOAT_B.get_GasPedalActPst;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_87_Buf2 = AION_IDS_SPEEDGOAT_B.get_GasPedalActPst;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_87_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_89_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_89_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_89_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_89_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_89_Buf0 = AION_IDS_SPEEDGOAT_B.get_VehWheelTorqMax;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_89_Buf1 = AION_IDS_SPEEDGOAT_B.get_VehWheelTorqMax;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_89_Buf2 = AION_IDS_SPEEDGOAT_B.get_VehWheelTorqMax;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_89_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_92_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_92_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_92_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_92_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_92_Buf0 =
      AION_IDS_SPEEDGOAT_B.get_GasPedalVirtualPst;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_92_Buf1 =
      AION_IDS_SPEEDGOAT_B.get_GasPedalVirtualPst;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_92_Buf2 =
      AION_IDS_SPEEDGOAT_B.get_GasPedalVirtualPst;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_92_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_94_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_94_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_94_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_94_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_94_Buf0 = AION_IDS_SPEEDGOAT_B.get_Checksum1;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_94_Buf1 = AION_IDS_SPEEDGOAT_B.get_Checksum1;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_94_Buf2 = AION_IDS_SPEEDGOAT_B.get_Checksum1;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_94_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_95_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_95_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_95_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_95_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_95_Buf0 = AION_IDS_SPEEDGOAT_B.get_MsgCounter1;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_95_Buf1 = AION_IDS_SPEEDGOAT_B.get_MsgCounter1;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_95_Buf2 = AION_IDS_SPEEDGOAT_B.get_MsgCounter1;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_95_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_96_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_96_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_96_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_96_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_96_Buf0 = AION_IDS_SPEEDGOAT_B.get_Checksum10;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_96_Buf1 = AION_IDS_SPEEDGOAT_B.get_Checksum10;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_96_Buf2 = AION_IDS_SPEEDGOAT_B.get_Checksum10;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_96_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_97_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_97_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_97_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_97_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_97_Buf0 = AION_IDS_SPEEDGOAT_B.get_MsgCounter10;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_97_Buf1 = AION_IDS_SPEEDGOAT_B.get_MsgCounter10;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_97_Buf2 = AION_IDS_SPEEDGOAT_B.get_MsgCounter10;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_97_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_98_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_98_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_98_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_98_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_98_Buf0 = AION_IDS_SPEEDGOAT_B.get_Checksum11;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_98_Buf1 = AION_IDS_SPEEDGOAT_B.get_Checksum11;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_98_Buf2 = AION_IDS_SPEEDGOAT_B.get_Checksum11;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_98_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_99_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>(AION_IDS_SPEEDGOAT_DW.RT1_99_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.RT1_99_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_99_d0_SEMAPHORE);
  switch (wrBufIdx) {
   case 0:
    AION_IDS_SPEEDGOAT_DW.RT1_99_Buf0 = AION_IDS_SPEEDGOAT_B.get_MsgCounter11;
    break;

   case 1:
    AION_IDS_SPEEDGOAT_DW.RT1_99_Buf1 = AION_IDS_SPEEDGOAT_B.get_MsgCounter11;
    break;

   case 2:
    AION_IDS_SPEEDGOAT_DW.RT1_99_Buf2 = AION_IDS_SPEEDGOAT_B.get_MsgCounter11;
    break;
  }

  AION_IDS_SPEEDGOAT_DW.RT1_99_LstBufWR = wrBufIdx;

  /* RateTransition generated from: '<S1>/Unit Delay' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtUnitDelayInport1_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtUnitDelayInport1_RDBuf =
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtUnitDelayInport1_LstBufWR;
  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtUnitDelayInport1_d0_SEMAPHORE);

  /* RateTransition generated from: '<S1>/Unit Delay' */
  AION_IDS_SPEEDGOAT_B.TmpRTBAtUnitDelayInport1 =
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtUnitDelayInport1_Buf[AION_IDS_SPEEDGOAT_DW.TmpRTBAtUnitDelayInport1_RDBuf];

  /* Update for UnitDelay: '<S1>/Unit Delay' */
  AION_IDS_SPEEDGOAT_DW.UnitDelay_DSTATE =
    AION_IDS_SPEEDGOAT_B.TmpRTBAtUnitDelayInport1;

  /* Update absolute time */
  /* The "clockTick1" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick1"
   * and "Timing.stepSize1". Size of "clockTick1" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick1 and the high bits
   * Timing.clockTickH1. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++AION_IDS_SPEEDGOAT_M->Timing.clockTick1)) {
    ++AION_IDS_SPEEDGOAT_M->Timing.clockTickH1;
  }

  AION_IDS_SPEEDGOAT_M->Timing.t[1] = AION_IDS_SPEEDGOAT_M->Timing.clockTick1 *
    AION_IDS_SPEEDGOAT_M->Timing.stepSize1 +
    AION_IDS_SPEEDGOAT_M->Timing.clockTickH1 *
    AION_IDS_SPEEDGOAT_M->Timing.stepSize1 * 4294967296.0;
}

/* Model step function for TID2 */
void AION_IDS_SPEEDGOAT_step2(void)    /* Sample time: [0.05s, 0.0s] */
{
  /* RateTransition: '<S28>/RT2' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT2_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT2_RDBuf = AION_IDS_SPEEDGOAT_DW.RT2_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT2_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT2_RDBuf) {
   case 0:
    /* RateTransition: '<S28>/RT2' */
    AION_IDS_SPEEDGOAT_B.RT2 = AION_IDS_SPEEDGOAT_DW.RT2_Buf0;
    break;

   case 1:
    /* RateTransition: '<S28>/RT2' */
    AION_IDS_SPEEDGOAT_B.RT2 = AION_IDS_SPEEDGOAT_DW.RT2_Buf1;
    break;

   case 2:
    /* RateTransition: '<S28>/RT2' */
    AION_IDS_SPEEDGOAT_B.RT2 = AION_IDS_SPEEDGOAT_DW.RT2_Buf2;
    break;
  }

  /* End of RateTransition: '<S28>/RT2' */

  /* S-Function (sg_IO61X_write_s): '<S28>/ADCU2SCU_Steer_Command_CAN_write' */

  /* Level2 S-Function Block: '<S28>/ADCU2SCU_Steer_Command_CAN_write' (sg_IO61X_write_s) */
  {
    SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[4];
    sfcnOutputs(rts,2);
  }

  /* Update absolute time */
  /* The "clockTick2" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick2"
   * and "Timing.stepSize2". Size of "clockTick2" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick2 and the high bits
   * Timing.clockTickH2. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++AION_IDS_SPEEDGOAT_M->Timing.clockTick2)) {
    ++AION_IDS_SPEEDGOAT_M->Timing.clockTickH2;
  }

  AION_IDS_SPEEDGOAT_M->Timing.t[2] = AION_IDS_SPEEDGOAT_M->Timing.clockTick2 *
    AION_IDS_SPEEDGOAT_M->Timing.stepSize2 +
    AION_IDS_SPEEDGOAT_M->Timing.clockTickH2 *
    AION_IDS_SPEEDGOAT_M->Timing.stepSize2 * 4294967296.0;
}

/* Model step function for TID3 */
void AION_IDS_SPEEDGOAT_step3(void)    /* Sample time: [0.2s, 0.0s] */
{
  int8_T wrBufIdx;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_74_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_74_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_74_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_74_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_74_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehRdySt_c = AION_IDS_SPEEDGOAT_DW.RT1_74_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehRdySt_c = AION_IDS_SPEEDGOAT_DW.RT1_74_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehRdySt_c = AION_IDS_SPEEDGOAT_DW.RT1_74_Buf2;
    break;
  }

  /* MATLAB Function: '<S7>/MATLAB Function' */
  /* MATLAB Function 'Application_Layer/Signal_test/Subsystem2/MATLAB Function': '<S8>:1' */
  /* '<S8>:1:3' */
  AION_IDS_SPEEDGOAT_B.get_VehRdySt_a = AION_IDS_SPEEDGOAT_B.get_VehRdySt_c;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_73_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_73_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_73_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_73_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_73_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehDrvMod_a = AION_IDS_SPEEDGOAT_DW.RT1_73_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehDrvMod_a = AION_IDS_SPEEDGOAT_DW.RT1_73_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehDrvMod_a = AION_IDS_SPEEDGOAT_DW.RT1_73_Buf2;
    break;
  }

  /* MATLAB Function: '<S7>/MATLAB Function1' */
  /* MATLAB Function 'Application_Layer/Signal_test/Subsystem2/MATLAB Function1': '<S9>:1' */
  /* '<S9>:1:3' */
  AION_IDS_SPEEDGOAT_B.get_VehDrvMod_c = AION_IDS_SPEEDGOAT_B.get_VehDrvMod_a;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_159_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_159_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_159_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_159_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_159_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LowBeamSt_i = AION_IDS_SPEEDGOAT_DW.RT1_159_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LowBeamSt_i = AION_IDS_SPEEDGOAT_DW.RT1_159_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LowBeamSt_i = AION_IDS_SPEEDGOAT_DW.RT1_159_Buf2;
    break;
  }

  /* MATLAB Function: '<S7>/MATLAB Function10' */
  /* MATLAB Function 'Application_Layer/Signal_test/Subsystem2/MATLAB Function10': '<S10>:1' */
  /* '<S10>:1:3' */
  AION_IDS_SPEEDGOAT_B.get_LowBeamSt_nw = AION_IDS_SPEEDGOAT_B.get_LowBeamSt_i;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_154_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_154_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_154_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_154_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_154_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_HighBeamSt_d = AION_IDS_SPEEDGOAT_DW.RT1_154_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_HighBeamSt_d = AION_IDS_SPEEDGOAT_DW.RT1_154_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_HighBeamSt_d = AION_IDS_SPEEDGOAT_DW.RT1_154_Buf2;
    break;
  }

  /* MATLAB Function: '<S7>/MATLAB Function11' */
  /* MATLAB Function 'Application_Layer/Signal_test/Subsystem2/MATLAB Function11': '<S11>:1' */
  /* '<S11>:1:3' */
  AION_IDS_SPEEDGOAT_B.get_HighBeamSt_a = AION_IDS_SPEEDGOAT_B.get_HighBeamSt_d;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_158_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_158_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_158_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_158_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_158_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt_g =
      AION_IDS_SPEEDGOAT_DW.RT1_158_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt_g =
      AION_IDS_SPEEDGOAT_DW.RT1_158_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt_g =
      AION_IDS_SPEEDGOAT_DW.RT1_158_Buf2;
    break;
  }

  /* MATLAB Function: '<S7>/MATLAB Function12' */
  /* MATLAB Function 'Application_Layer/Signal_test/Subsystem2/MATLAB Function12': '<S12>:1' */
  /* '<S12>:1:3' */
  AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt_l =
    AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt_g;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_165_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_165_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_165_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_165_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_165_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt_l =
      AION_IDS_SPEEDGOAT_DW.RT1_165_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt_l =
      AION_IDS_SPEEDGOAT_DW.RT1_165_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt_l =
      AION_IDS_SPEEDGOAT_DW.RT1_165_Buf2;
    break;
  }

  /* MATLAB Function: '<S7>/MATLAB Function13' */
  /* MATLAB Function 'Application_Layer/Signal_test/Subsystem2/MATLAB Function13': '<S13>:1' */
  /* '<S13>:1:3' */
  AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt_i =
    AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt_l;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_107_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_107_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_107_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_107_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_107_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LatCtrlMode_l = AION_IDS_SPEEDGOAT_DW.RT1_107_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LatCtrlMode_l = AION_IDS_SPEEDGOAT_DW.RT1_107_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LatCtrlMode_l = AION_IDS_SPEEDGOAT_DW.RT1_107_Buf2;
    break;
  }

  /* MATLAB Function: '<S7>/MATLAB Function2' */
  /* MATLAB Function 'Application_Layer/Signal_test/Subsystem2/MATLAB Function2': '<S14>:1' */
  /* '<S14>:1:3' */
  AION_IDS_SPEEDGOAT_B.get_LatCtrlMode_m =
    AION_IDS_SPEEDGOAT_B.get_LatCtrlMode_l;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_141_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_141_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_141_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_141_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_141_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_SteeringAngle_m =
      AION_IDS_SPEEDGOAT_DW.RT1_141_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_SteeringAngle_m =
      AION_IDS_SPEEDGOAT_DW.RT1_141_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_SteeringAngle_m =
      AION_IDS_SPEEDGOAT_DW.RT1_141_Buf2;
    break;
  }

  /* MATLAB Function: '<S7>/MATLAB Function3' */
  /* MATLAB Function 'Application_Layer/Signal_test/Subsystem2/MATLAB Function3': '<S15>:1' */
  /* '<S15>:1:3' */
  AION_IDS_SPEEDGOAT_B.get_SteeringAngle_j =
    AION_IDS_SPEEDGOAT_B.get_SteeringAngle_m;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_110_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_110_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_110_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_110_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_110_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LngCtrlMode_i = AION_IDS_SPEEDGOAT_DW.RT1_110_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LngCtrlMode_i = AION_IDS_SPEEDGOAT_DW.RT1_110_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LngCtrlMode_i = AION_IDS_SPEEDGOAT_DW.RT1_110_Buf2;
    break;
  }

  /* MATLAB Function: '<S7>/MATLAB Function4' */
  /* MATLAB Function 'Application_Layer/Signal_test/Subsystem2/MATLAB Function4': '<S16>:1' */
  /* '<S16>:1:3' */
  AION_IDS_SPEEDGOAT_B.get_LngCtrlMode_m =
    AION_IDS_SPEEDGOAT_B.get_LngCtrlMode_i;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_78_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_78_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_78_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_78_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_78_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_CrntGearLvl_g = AION_IDS_SPEEDGOAT_DW.RT1_78_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_CrntGearLvl_g = AION_IDS_SPEEDGOAT_DW.RT1_78_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_CrntGearLvl_g = AION_IDS_SPEEDGOAT_DW.RT1_78_Buf2;
    break;
  }

  /* MATLAB Function: '<S7>/MATLAB Function5' */
  /* MATLAB Function 'Application_Layer/Signal_test/Subsystem2/MATLAB Function5': '<S17>:1' */
  /* '<S17>:1:3' */
  AION_IDS_SPEEDGOAT_B.get_CrntGearLvl_b =
    AION_IDS_SPEEDGOAT_B.get_CrntGearLvl_g;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_24_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_24_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_24_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_24_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_24_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehSpd_a = AION_IDS_SPEEDGOAT_DW.RT1_24_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehSpd_a = AION_IDS_SPEEDGOAT_DW.RT1_24_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehSpd_a = AION_IDS_SPEEDGOAT_DW.RT1_24_Buf2;
    break;
  }

  /* MATLAB Function: '<S7>/MATLAB Function6' */
  /* MATLAB Function 'Application_Layer/Signal_test/Subsystem2/MATLAB Function6': '<S18>:1' */
  /* '<S18>:1:3' */
  AION_IDS_SPEEDGOAT_B.get_VehSpd_b = AION_IDS_SPEEDGOAT_B.get_VehSpd_a;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_149_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_149_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_149_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_149_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_149_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_CtrlAvailable_j =
      AION_IDS_SPEEDGOAT_DW.RT1_149_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_CtrlAvailable_j =
      AION_IDS_SPEEDGOAT_DW.RT1_149_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_CtrlAvailable_j =
      AION_IDS_SPEEDGOAT_DW.RT1_149_Buf2;
    break;
  }

  /* MATLAB Function: '<S7>/MATLAB Function7' */
  /* MATLAB Function 'Application_Layer/Signal_test/Subsystem2/MATLAB Function7': '<S19>:1' */
  /* '<S19>:1:3' */
  AION_IDS_SPEEDGOAT_B.get_CtrlAvailable_a =
    AION_IDS_SPEEDGOAT_B.get_CtrlAvailable_j;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_153_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_153_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_153_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_153_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_153_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_HazardLampSt_g = AION_IDS_SPEEDGOAT_DW.RT1_153_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_HazardLampSt_g = AION_IDS_SPEEDGOAT_DW.RT1_153_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_HazardLampSt_g = AION_IDS_SPEEDGOAT_DW.RT1_153_Buf2;
    break;
  }

  /* MATLAB Function: '<S7>/MATLAB Function8' */
  /* MATLAB Function 'Application_Layer/Signal_test/Subsystem2/MATLAB Function8': '<S20>:1' */
  /* '<S20>:1:3' */
  AION_IDS_SPEEDGOAT_B.get_HazardLampSt_n =
    AION_IDS_SPEEDGOAT_B.get_HazardLampSt_g;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_155_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_155_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_155_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_155_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_155_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_HornSt_f = AION_IDS_SPEEDGOAT_DW.RT1_155_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_HornSt_f = AION_IDS_SPEEDGOAT_DW.RT1_155_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_HornSt_f = AION_IDS_SPEEDGOAT_DW.RT1_155_Buf2;
    break;
  }

  /* MATLAB Function: '<S7>/MATLAB Function9' */
  /* MATLAB Function 'Application_Layer/Signal_test/Subsystem2/MATLAB Function9': '<S21>:1' */
  /* '<S21>:1:3' */
  AION_IDS_SPEEDGOAT_B.get_HornSt_o = AION_IDS_SPEEDGOAT_B.get_HornSt_f;

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_RDBuf =
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_LstBufWR;
  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport1 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport1 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport1 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_RDBuf =
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_LstBufWR;
  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport2 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport2 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport2 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_RDBuf =
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_LstBufWR;
  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport3 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport3 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport3 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_4_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_4_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_4_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_4_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_4_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_SteerAngSpdLimt_c =
      AION_IDS_SPEEDGOAT_DW.RT1_4_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_SteerAngSpdLimt_c =
      AION_IDS_SPEEDGOAT_DW.RT1_4_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_SteerAngSpdLimt_c =
      AION_IDS_SPEEDGOAT_DW.RT1_4_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport5_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport5_RDBuf =
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport5_LstBufWR;
  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport5_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport5_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport5 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport5_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport5 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport5_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport5 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport5_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_RDBuf =
    AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_LstBufWR;
  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.AutoTrqWhlReq_test_p =
      AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.AutoTrqWhlReq_test_p =
      AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.AutoTrqWhlReq_test_p =
      AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.BrakeReq_test_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.BrakeReq_test_RDBuf =
    AION_IDS_SPEEDGOAT_DW.BrakeReq_test_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.BrakeReq_test_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.BrakeReq_test_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.BrakeReq_test_e =
      AION_IDS_SPEEDGOAT_DW.BrakeReq_test_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.BrakeReq_test_e =
      AION_IDS_SPEEDGOAT_DW.BrakeReq_test_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.BrakeReq_test_e =
      AION_IDS_SPEEDGOAT_DW.BrakeReq_test_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport8_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport8_RDBuf =
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport8_LstBufWR;
  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport8_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport8_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport8 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport8_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport8 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport8_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport8 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport8_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport9_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport9_RDBuf =
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport9_LstBufWR;
  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport9_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport9_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport9 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport9_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport9 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport9_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport9 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport9_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_RDBuf =
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_LstBufWR;
  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport16 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport16 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport16 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_RDBuf =
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_LstBufWR;
  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport17 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport17 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport17 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport18_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport18_RDBuf =
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport18_LstBufWR;
  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport18_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport18_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport18 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport18_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport18 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport18_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport18 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport18_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport19_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport19_RDBuf =
    AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport19_LstBufWR;
  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport19_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport19_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport19 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport19_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport19 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport19_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/AION_auto_mode_request' */
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport19 =
      AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport19_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_ABSActiveSt_j = AION_IDS_SPEEDGOAT_B.get_ABSActiveSt;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_ABSFaultSt_h = AION_IDS_SPEEDGOAT_B.get_ABSFaultSt;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_VDCActiveSt_h = AION_IDS_SPEEDGOAT_B.get_VDCActiveSt;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_VDCFaultSt_l = AION_IDS_SPEEDGOAT_B.get_VDCFaultSt;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_VehSpdVD_a = AION_IDS_SPEEDGOAT_B.get_VehSpdVD;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_26_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_26_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_26_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_26_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_26_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_FLWheelSpdEdgesSum_h =
      AION_IDS_SPEEDGOAT_DW.RT1_26_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_FLWheelSpdEdgesSum_h =
      AION_IDS_SPEEDGOAT_DW.RT1_26_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_FLWheelSpdEdgesSum_h =
      AION_IDS_SPEEDGOAT_DW.RT1_26_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_FLWheelSpdEdgesSumVD_d =
    AION_IDS_SPEEDGOAT_B.get_FLWheelSpdEdgesSumVD;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_28_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_28_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_28_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_28_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_28_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_FRWheelSpdEdgesSum_e =
      AION_IDS_SPEEDGOAT_DW.RT1_28_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_FRWheelSpdEdgesSum_e =
      AION_IDS_SPEEDGOAT_DW.RT1_28_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_FRWheelSpdEdgesSum_e =
      AION_IDS_SPEEDGOAT_DW.RT1_28_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_FRWheelSpdEdgesSumVD_f =
    AION_IDS_SPEEDGOAT_B.get_FRWheelSpdEdgesSumVD;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_30_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_30_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_30_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_30_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_30_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_RLWheelSpdEdgesSum_h =
      AION_IDS_SPEEDGOAT_DW.RT1_30_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_RLWheelSpdEdgesSum_h =
      AION_IDS_SPEEDGOAT_DW.RT1_30_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_RLWheelSpdEdgesSum_h =
      AION_IDS_SPEEDGOAT_DW.RT1_30_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_RLWheelSpdEdgesSumVD_c =
    AION_IDS_SPEEDGOAT_B.get_RLWheelSpdEdgesSumVD;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_32_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_32_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_32_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_32_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_32_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_RRWheelSpdEdgesSum_n =
      AION_IDS_SPEEDGOAT_DW.RT1_32_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_RRWheelSpdEdgesSum_n =
      AION_IDS_SPEEDGOAT_DW.RT1_32_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_RRWheelSpdEdgesSum_n =
      AION_IDS_SPEEDGOAT_DW.RT1_32_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_RRWheelSpdEdgesSumVD_g =
    AION_IDS_SPEEDGOAT_B.get_RRWheelSpdEdgesSumVD;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_34_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_34_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_34_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_34_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_34_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_YawRate_o = AION_IDS_SPEEDGOAT_DW.RT1_34_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_YawRate_o = AION_IDS_SPEEDGOAT_DW.RT1_34_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_YawRate_o = AION_IDS_SPEEDGOAT_DW.RT1_34_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_35_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_35_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_35_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_35_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_35_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_YawRateOffset_i = AION_IDS_SPEEDGOAT_DW.RT1_35_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_YawRateOffset_i = AION_IDS_SPEEDGOAT_DW.RT1_35_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_YawRateOffset_i = AION_IDS_SPEEDGOAT_DW.RT1_35_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_YawRateSt_m = AION_IDS_SPEEDGOAT_B.get_YawRateSt;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_HDCCtrlSt_m = AION_IDS_SPEEDGOAT_B.get_HDCCtrlSt;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_HDCErrSt_h = AION_IDS_SPEEDGOAT_B.get_HDCErrSt;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_AEBActive_b = AION_IDS_SPEEDGOAT_B.get_AEBActive;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_AEBAvailable_m =
    AION_IDS_SPEEDGOAT_B.get_AEBAvailable;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_CDDActive_h = AION_IDS_SPEEDGOAT_B.get_CDDActive;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_CDDAvailable_d =
    AION_IDS_SPEEDGOAT_B.get_CDDAvailable;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_CDDFail_f = AION_IDS_SPEEDGOAT_B.get_CDDFail;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_44_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_44_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_44_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_44_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_44_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MasterCylinderPr_g =
      AION_IDS_SPEEDGOAT_DW.RT1_44_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MasterCylinderPr_g =
      AION_IDS_SPEEDGOAT_DW.RT1_44_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MasterCylinderPr_g =
      AION_IDS_SPEEDGOAT_DW.RT1_44_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_45_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_45_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_45_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_45_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_45_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MasterCylinderPrOffset_k =
      AION_IDS_SPEEDGOAT_DW.RT1_45_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MasterCylinderPrOffset_k =
      AION_IDS_SPEEDGOAT_DW.RT1_45_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MasterCylinderPrOffset_k =
      AION_IDS_SPEEDGOAT_DW.RT1_45_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_MasterCylinderPrOffsetVD_i =
    AION_IDS_SPEEDGOAT_B.get_MasterCylinderPrOffsetVD;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_MasterCylinderPrVD_l =
    AION_IDS_SPEEDGOAT_B.get_MasterCylinderPrVD;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_NoBrakeForce_l =
    AION_IDS_SPEEDGOAT_B.get_NoBrakeForce;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_VehicleStandStillSt_a =
    AION_IDS_SPEEDGOAT_B.get_VehicleStandStillSt;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_FLWheelRotatedDirection_h =
    AION_IDS_SPEEDGOAT_B.get_FLWheelRotatedDirection;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_FLWheelRotatedDirectionVD_g =
    AION_IDS_SPEEDGOAT_B.get_FLWheelRotatedDirectionVD;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_52_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_52_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_52_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_52_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_52_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_FLWheelSpd_p = AION_IDS_SPEEDGOAT_DW.RT1_52_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_FLWheelSpd_p = AION_IDS_SPEEDGOAT_DW.RT1_52_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_FLWheelSpd_p = AION_IDS_SPEEDGOAT_DW.RT1_52_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_FLWheelSpdVD_a =
    AION_IDS_SPEEDGOAT_B.get_FLWheelSpdVD;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_FRWheelRotatedDirection_f =
    AION_IDS_SPEEDGOAT_B.get_FRWheelRotatedDirection;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_FRWheelRotatedDirectionVD_b =
    AION_IDS_SPEEDGOAT_B.get_FRWheelRotatedDirectionVD;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_56_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_56_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_56_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_56_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_56_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_FRWheelSpd_m = AION_IDS_SPEEDGOAT_DW.RT1_56_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_FRWheelSpd_m = AION_IDS_SPEEDGOAT_DW.RT1_56_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_FRWheelSpd_m = AION_IDS_SPEEDGOAT_DW.RT1_56_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_FRWheelSpdVD_o =
    AION_IDS_SPEEDGOAT_B.get_FRWheelSpdVD;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_RLWheelRotatedDirection_i =
    AION_IDS_SPEEDGOAT_B.get_RLWheelRotatedDirection;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_RLWheelRotatedDirectionVD_k =
    AION_IDS_SPEEDGOAT_B.get_RLWheelRotatedDirectionVD;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_60_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_60_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_60_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_60_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_60_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_RLWheelSpd_j = AION_IDS_SPEEDGOAT_DW.RT1_60_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_RLWheelSpd_j = AION_IDS_SPEEDGOAT_DW.RT1_60_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_RLWheelSpd_j = AION_IDS_SPEEDGOAT_DW.RT1_60_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_RLWheelSpdVD_g =
    AION_IDS_SPEEDGOAT_B.get_RLWheelSpdVD;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_RRWheelRotatedDirection_m =
    AION_IDS_SPEEDGOAT_B.get_RRWheelRotatedDirection;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_RRWheelRotatedDirectionVD_e =
    AION_IDS_SPEEDGOAT_B.get_RRWheelRotatedDirectionVD;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_64_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_64_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_64_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_64_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_64_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_RRWheelSpd_o = AION_IDS_SPEEDGOAT_DW.RT1_64_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_RRWheelSpd_o = AION_IDS_SPEEDGOAT_DW.RT1_64_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_RRWheelSpd_o = AION_IDS_SPEEDGOAT_DW.RT1_64_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_RRWheelSpdVD_d =
    AION_IDS_SPEEDGOAT_B.get_RRWheelSpdVD;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_66_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_66_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_66_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_66_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_66_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccel_f =
      AION_IDS_SPEEDGOAT_DW.RT1_66_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccel_f =
      AION_IDS_SPEEDGOAT_DW.RT1_66_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccel_f =
      AION_IDS_SPEEDGOAT_DW.RT1_66_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccelVD_l =
    AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccelVD;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_68_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_68_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_68_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_68_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_68_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_ActVehLongAccel_a =
      AION_IDS_SPEEDGOAT_DW.RT1_68_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_ActVehLongAccel_a =
      AION_IDS_SPEEDGOAT_DW.RT1_68_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_ActVehLongAccel_a =
      AION_IDS_SPEEDGOAT_DW.RT1_68_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_ActVehLongAccelVD_a =
    AION_IDS_SPEEDGOAT_B.get_ActVehLongAccelVD;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_70_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_70_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_70_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_70_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_70_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehLaltrlAccelOffset_a =
      AION_IDS_SPEEDGOAT_DW.RT1_70_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehLaltrlAccelOffset_a =
      AION_IDS_SPEEDGOAT_DW.RT1_70_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehLaltrlAccelOffset_a =
      AION_IDS_SPEEDGOAT_DW.RT1_70_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_71_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_71_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_71_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_71_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_71_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehLongAccelOffset_l =
      AION_IDS_SPEEDGOAT_DW.RT1_71_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehLongAccelOffset_l =
      AION_IDS_SPEEDGOAT_DW.RT1_71_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehLongAccelOffset_l =
      AION_IDS_SPEEDGOAT_DW.RT1_71_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_GearLeverIntv_d =
    AION_IDS_SPEEDGOAT_B.get_GearLeverIntv;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_75_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_75_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_75_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_75_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_75_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehRng_j = AION_IDS_SPEEDGOAT_DW.RT1_75_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehRng_j = AION_IDS_SPEEDGOAT_DW.RT1_75_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehRng_j = AION_IDS_SPEEDGOAT_DW.RT1_75_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_76_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_76_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_76_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_76_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_76_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_ActRecpTorq_j = AION_IDS_SPEEDGOAT_DW.RT1_76_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_ActRecpTorq_j = AION_IDS_SPEEDGOAT_DW.RT1_76_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_ActRecpTorq_j = AION_IDS_SPEEDGOAT_DW.RT1_76_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_ActRecpTorqSt_e =
    AION_IDS_SPEEDGOAT_B.get_ActRecpTorqSt;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_CrntGearLvlVD_p =
    AION_IDS_SPEEDGOAT_B.get_CrntGearLvlVD;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_80_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_80_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_80_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_80_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_80_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_ACCMaxRecpDecel_p =
      AION_IDS_SPEEDGOAT_DW.RT1_80_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_ACCMaxRecpDecel_p =
      AION_IDS_SPEEDGOAT_DW.RT1_80_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_ACCMaxRecpDecel_p =
      AION_IDS_SPEEDGOAT_DW.RT1_80_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_ACCMaxRecpDecelVD_n =
    AION_IDS_SPEEDGOAT_B.get_ACCMaxRecpDecelVD;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_82_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_82_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_82_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_82_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_82_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_ActVehWheelTorq_d =
      AION_IDS_SPEEDGOAT_DW.RT1_82_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_ActVehWheelTorq_d =
      AION_IDS_SPEEDGOAT_DW.RT1_82_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_ActVehWheelTorq_d =
      AION_IDS_SPEEDGOAT_DW.RT1_82_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_LateralAssistBtnInfo_n =
    AION_IDS_SPEEDGOAT_B.get_LateralAssistBtnInfo;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_LateralAssistBtnInfoVD_g =
    AION_IDS_SPEEDGOAT_B.get_LateralAssistBtnInfoVD;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_85_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_85_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_85_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_85_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_85_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_ACCButtInfo_i = AION_IDS_SPEEDGOAT_DW.RT1_85_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_ACCButtInfo_i = AION_IDS_SPEEDGOAT_DW.RT1_85_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_ACCButtInfo_i = AION_IDS_SPEEDGOAT_DW.RT1_85_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_AccElecECFail_b =
    AION_IDS_SPEEDGOAT_B.get_AccElecECFail;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_87_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_87_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_87_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_87_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_87_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_GasPedalActPst_f =
      AION_IDS_SPEEDGOAT_DW.RT1_87_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_GasPedalActPst_f =
      AION_IDS_SPEEDGOAT_DW.RT1_87_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_GasPedalActPst_f =
      AION_IDS_SPEEDGOAT_DW.RT1_87_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_GasPedalActPstVD_k =
    AION_IDS_SPEEDGOAT_B.get_GasPedalActPstVD;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_89_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_89_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_89_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_89_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_89_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehWheelTorqMax_d =
      AION_IDS_SPEEDGOAT_DW.RT1_89_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehWheelTorqMax_d =
      AION_IDS_SPEEDGOAT_DW.RT1_89_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_VehWheelTorqMax_d =
      AION_IDS_SPEEDGOAT_DW.RT1_89_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_BrkPedalSt_d = AION_IDS_SPEEDGOAT_B.get_BrkPedalSt;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_BrkPedalStVD_k =
    AION_IDS_SPEEDGOAT_B.get_BrkPedalStVD;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_92_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_92_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_92_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_92_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_92_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_GasPedalVirtualPst_f =
      AION_IDS_SPEEDGOAT_DW.RT1_92_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_GasPedalVirtualPst_f =
      AION_IDS_SPEEDGOAT_DW.RT1_92_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_GasPedalVirtualPst_f =
      AION_IDS_SPEEDGOAT_DW.RT1_92_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_GasPedalVirtualPstVD_g =
    AION_IDS_SPEEDGOAT_B.get_GasPedalVirtualPstVD;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_94_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_94_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_94_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_94_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_94_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum1_j = AION_IDS_SPEEDGOAT_DW.RT1_94_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum1_j = AION_IDS_SPEEDGOAT_DW.RT1_94_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum1_j = AION_IDS_SPEEDGOAT_DW.RT1_94_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_95_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_95_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_95_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_95_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_95_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter1_f = AION_IDS_SPEEDGOAT_DW.RT1_95_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter1_f = AION_IDS_SPEEDGOAT_DW.RT1_95_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter1_f = AION_IDS_SPEEDGOAT_DW.RT1_95_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_96_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_96_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_96_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_96_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_96_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum10_n = AION_IDS_SPEEDGOAT_DW.RT1_96_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum10_n = AION_IDS_SPEEDGOAT_DW.RT1_96_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum10_n = AION_IDS_SPEEDGOAT_DW.RT1_96_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_97_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_97_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_97_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_97_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_97_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter10_o = AION_IDS_SPEEDGOAT_DW.RT1_97_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter10_o = AION_IDS_SPEEDGOAT_DW.RT1_97_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter10_o = AION_IDS_SPEEDGOAT_DW.RT1_97_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_98_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_98_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_98_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_98_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_98_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum11_p = AION_IDS_SPEEDGOAT_DW.RT1_98_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum11_p = AION_IDS_SPEEDGOAT_DW.RT1_98_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum11_p = AION_IDS_SPEEDGOAT_DW.RT1_98_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_99_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_99_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_99_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_99_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_99_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter11_f = AION_IDS_SPEEDGOAT_DW.RT1_99_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter11_f = AION_IDS_SPEEDGOAT_DW.RT1_99_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter11_f = AION_IDS_SPEEDGOAT_DW.RT1_99_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_100_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_100_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_100_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_100_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_100_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum12_h = AION_IDS_SPEEDGOAT_DW.RT1_100_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum12_h = AION_IDS_SPEEDGOAT_DW.RT1_100_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum12_h = AION_IDS_SPEEDGOAT_DW.RT1_100_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_101_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_101_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_101_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_101_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_101_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter12_c = AION_IDS_SPEEDGOAT_DW.RT1_101_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter12_c = AION_IDS_SPEEDGOAT_DW.RT1_101_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter12_c = AION_IDS_SPEEDGOAT_DW.RT1_101_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_102_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_102_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_102_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_102_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_102_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum13_e = AION_IDS_SPEEDGOAT_DW.RT1_102_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum13_e = AION_IDS_SPEEDGOAT_DW.RT1_102_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum13_e = AION_IDS_SPEEDGOAT_DW.RT1_102_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_103_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_103_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_103_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_103_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_103_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter13_i = AION_IDS_SPEEDGOAT_DW.RT1_103_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter13_i = AION_IDS_SPEEDGOAT_DW.RT1_103_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter13_i = AION_IDS_SPEEDGOAT_DW.RT1_103_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_EStopSwSt_k = AION_IDS_SPEEDGOAT_B.get_EStopSwSt;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_EStopSwStVD_e = AION_IDS_SPEEDGOAT_B.get_EStopSwStVD;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_106_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_106_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_106_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_106_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_106_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LatAutoCheckReport_d =
      AION_IDS_SPEEDGOAT_DW.RT1_106_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LatAutoCheckReport_d =
      AION_IDS_SPEEDGOAT_DW.RT1_106_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LatAutoCheckReport_d =
      AION_IDS_SPEEDGOAT_DW.RT1_106_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_108_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_108_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_108_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_108_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_108_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LatQuitReport_d =
      AION_IDS_SPEEDGOAT_DW.RT1_108_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LatQuitReport_d =
      AION_IDS_SPEEDGOAT_DW.RT1_108_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LatQuitReport_d =
      AION_IDS_SPEEDGOAT_DW.RT1_108_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_109_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_109_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_109_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_109_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_109_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LngAutoCheckIReport_e =
      AION_IDS_SPEEDGOAT_DW.RT1_109_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LngAutoCheckIReport_e =
      AION_IDS_SPEEDGOAT_DW.RT1_109_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LngAutoCheckIReport_e =
      AION_IDS_SPEEDGOAT_DW.RT1_109_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_111_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_111_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_111_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_111_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_111_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LngQuitReport_o =
      AION_IDS_SPEEDGOAT_DW.RT1_111_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LngQuitReport_o =
      AION_IDS_SPEEDGOAT_DW.RT1_111_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LngQuitReport_o =
      AION_IDS_SPEEDGOAT_DW.RT1_111_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_StrngWhlIntv_g =
    AION_IDS_SPEEDGOAT_B.get_StrngWhlIntv;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_113_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_113_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_113_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_113_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_113_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum16_p = AION_IDS_SPEEDGOAT_DW.RT1_113_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum16_p = AION_IDS_SPEEDGOAT_DW.RT1_113_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum16_p = AION_IDS_SPEEDGOAT_DW.RT1_113_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_114_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_114_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_114_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_114_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_114_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter16_h = AION_IDS_SPEEDGOAT_DW.RT1_114_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter16_h = AION_IDS_SPEEDGOAT_DW.RT1_114_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter16_h = AION_IDS_SPEEDGOAT_DW.RT1_114_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_115_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_115_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_115_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_115_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_115_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum17_g = AION_IDS_SPEEDGOAT_DW.RT1_115_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum17_g = AION_IDS_SPEEDGOAT_DW.RT1_115_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum17_g = AION_IDS_SPEEDGOAT_DW.RT1_115_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_116_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_116_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_116_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_116_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_116_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter17_f = AION_IDS_SPEEDGOAT_DW.RT1_116_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter17_f = AION_IDS_SPEEDGOAT_DW.RT1_116_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter17_f = AION_IDS_SPEEDGOAT_DW.RT1_116_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_117_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_117_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_117_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_117_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_117_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum18_n = AION_IDS_SPEEDGOAT_DW.RT1_117_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum18_n = AION_IDS_SPEEDGOAT_DW.RT1_117_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum18_n = AION_IDS_SPEEDGOAT_DW.RT1_117_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_118_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_118_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_118_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_118_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_118_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter18_p = AION_IDS_SPEEDGOAT_DW.RT1_118_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter18_p = AION_IDS_SPEEDGOAT_DW.RT1_118_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter18_p = AION_IDS_SPEEDGOAT_DW.RT1_118_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_119_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_119_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_119_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_119_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_119_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum2_i = AION_IDS_SPEEDGOAT_DW.RT1_119_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum2_i = AION_IDS_SPEEDGOAT_DW.RT1_119_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum2_i = AION_IDS_SPEEDGOAT_DW.RT1_119_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_120_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_120_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_120_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_120_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_120_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter2_h = AION_IDS_SPEEDGOAT_DW.RT1_120_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter2_h = AION_IDS_SPEEDGOAT_DW.RT1_120_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter2_h = AION_IDS_SPEEDGOAT_DW.RT1_120_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_121_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_121_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_121_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_121_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_121_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum3_n = AION_IDS_SPEEDGOAT_DW.RT1_121_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum3_n = AION_IDS_SPEEDGOAT_DW.RT1_121_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum3_n = AION_IDS_SPEEDGOAT_DW.RT1_121_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_122_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_122_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_122_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_122_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_122_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter3_p = AION_IDS_SPEEDGOAT_DW.RT1_122_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter3_p = AION_IDS_SPEEDGOAT_DW.RT1_122_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter3_p = AION_IDS_SPEEDGOAT_DW.RT1_122_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_123_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_123_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_123_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_123_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_123_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum4_n = AION_IDS_SPEEDGOAT_DW.RT1_123_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum4_n = AION_IDS_SPEEDGOAT_DW.RT1_123_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum4_n = AION_IDS_SPEEDGOAT_DW.RT1_123_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_124_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_124_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_124_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_124_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_124_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter4_b = AION_IDS_SPEEDGOAT_DW.RT1_124_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter4_b = AION_IDS_SPEEDGOAT_DW.RT1_124_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter4_b = AION_IDS_SPEEDGOAT_DW.RT1_124_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_125_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_125_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_125_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_125_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_125_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum5_g = AION_IDS_SPEEDGOAT_DW.RT1_125_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum5_g = AION_IDS_SPEEDGOAT_DW.RT1_125_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum5_g = AION_IDS_SPEEDGOAT_DW.RT1_125_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_126_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_126_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_126_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_126_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_126_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter5_o = AION_IDS_SPEEDGOAT_DW.RT1_126_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter5_o = AION_IDS_SPEEDGOAT_DW.RT1_126_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter5_o = AION_IDS_SPEEDGOAT_DW.RT1_126_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_127_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_127_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_127_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_127_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_127_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum6_p = AION_IDS_SPEEDGOAT_DW.RT1_127_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum6_p = AION_IDS_SPEEDGOAT_DW.RT1_127_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum6_p = AION_IDS_SPEEDGOAT_DW.RT1_127_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_128_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_128_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_128_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_128_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_128_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter6_l = AION_IDS_SPEEDGOAT_DW.RT1_128_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter6_l = AION_IDS_SPEEDGOAT_DW.RT1_128_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter6_l = AION_IDS_SPEEDGOAT_DW.RT1_128_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_129_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_129_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_129_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_129_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_129_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum7_b = AION_IDS_SPEEDGOAT_DW.RT1_129_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum7_b = AION_IDS_SPEEDGOAT_DW.RT1_129_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum7_b = AION_IDS_SPEEDGOAT_DW.RT1_129_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_130_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_130_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_130_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_130_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_130_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter7_i = AION_IDS_SPEEDGOAT_DW.RT1_130_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter7_i = AION_IDS_SPEEDGOAT_DW.RT1_130_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter7_i = AION_IDS_SPEEDGOAT_DW.RT1_130_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_131_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_131_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_131_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_131_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_131_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum8_k = AION_IDS_SPEEDGOAT_DW.RT1_131_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum8_k = AION_IDS_SPEEDGOAT_DW.RT1_131_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum8_k = AION_IDS_SPEEDGOAT_DW.RT1_131_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_132_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_132_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_132_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_132_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_132_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter8_p = AION_IDS_SPEEDGOAT_DW.RT1_132_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter8_p = AION_IDS_SPEEDGOAT_DW.RT1_132_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter8_p = AION_IDS_SPEEDGOAT_DW.RT1_132_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_133_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_133_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_133_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_133_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_133_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum9_f = AION_IDS_SPEEDGOAT_DW.RT1_133_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum9_f = AION_IDS_SPEEDGOAT_DW.RT1_133_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_Checksum9_f = AION_IDS_SPEEDGOAT_DW.RT1_133_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_134_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_134_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_134_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_134_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_134_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter9_g = AION_IDS_SPEEDGOAT_DW.RT1_134_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter9_g = AION_IDS_SPEEDGOAT_DW.RT1_134_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_MsgCounter9_g = AION_IDS_SPEEDGOAT_DW.RT1_134_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_135_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_135_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_135_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_135_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_135_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_FailSt_e = AION_IDS_SPEEDGOAT_DW.RT1_135_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_FailSt_e = AION_IDS_SPEEDGOAT_DW.RT1_135_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_FailSt_e = AION_IDS_SPEEDGOAT_DW.RT1_135_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_SwitchSt_a = AION_IDS_SPEEDGOAT_B.get_SwitchSt;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_SwitchStVD_g = AION_IDS_SPEEDGOAT_B.get_SwitchStVD;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_SysSt_b = AION_IDS_SPEEDGOAT_B.get_SysSt;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_DriverSeatBeltSt_p =
    AION_IDS_SPEEDGOAT_B.get_DriverSeatBeltSt;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_PsngrSeatBeltSt_e =
    AION_IDS_SPEEDGOAT_B.get_PsngrSeatBeltSt;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_142_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_142_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_142_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_142_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_142_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpd_j =
      AION_IDS_SPEEDGOAT_DW.RT1_142_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpd_j =
      AION_IDS_SPEEDGOAT_DW.RT1_142_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpd_j =
      AION_IDS_SPEEDGOAT_DW.RT1_142_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpdVD_f =
    AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpdVD;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_SteeringAngleVD_d =
    AION_IDS_SPEEDGOAT_B.get_SteeringAngleVD;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_145_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_145_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_145_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_145_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_145_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_StrngWhlTorq_e = AION_IDS_SPEEDGOAT_DW.RT1_145_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_StrngWhlTorq_e = AION_IDS_SPEEDGOAT_DW.RT1_145_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_StrngWhlTorq_e = AION_IDS_SPEEDGOAT_DW.RT1_145_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_StrngWhlTorqVD_c =
    AION_IDS_SPEEDGOAT_B.get_StrngWhlTorqVD;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_ThermalSt_m = AION_IDS_SPEEDGOAT_B.get_ThermalSt;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_WarnLamp_d = AION_IDS_SPEEDGOAT_B.get_WarnLamp;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_DriverDoorAjarSt_m =
    AION_IDS_SPEEDGOAT_B.get_DriverDoorAjarSt;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_FrontFogLampSt_k =
    AION_IDS_SPEEDGOAT_B.get_FrontFogLampSt;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_FrontWiperSt_f =
    AION_IDS_SPEEDGOAT_B.get_FrontWiperSt;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_KeySt_e = AION_IDS_SPEEDGOAT_B.get_KeySt;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_157_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_157_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_157_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_157_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_157_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LeftTurnLampFaultSt_o =
      AION_IDS_SPEEDGOAT_DW.RT1_157_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LeftTurnLampFaultSt_o =
      AION_IDS_SPEEDGOAT_DW.RT1_157_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_LeftTurnLampFaultSt_o =
      AION_IDS_SPEEDGOAT_DW.RT1_157_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_PsngrDoorAjarSt_a =
    AION_IDS_SPEEDGOAT_B.get_PsngrDoorAjarSt;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_RLDoorAjarSt_e =
    AION_IDS_SPEEDGOAT_B.get_RLDoorAjarSt;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_RRDoorAjarSt_n =
    AION_IDS_SPEEDGOAT_B.get_RRDoorAjarSt;

  /* RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_RearFogLampSt_f =
    AION_IDS_SPEEDGOAT_B.get_RearFogLampSt;

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_164_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_164_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_164_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_164_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_164_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_RightTurnLampFaultSt_m =
      AION_IDS_SPEEDGOAT_DW.RT1_164_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_RightTurnLampFaultSt_m =
      AION_IDS_SPEEDGOAT_DW.RT1_164_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.get_RightTurnLampFaultSt_m =
      AION_IDS_SPEEDGOAT_DW.RT1_164_Buf2;
    break;
  }

  /* ModelReference generated from: '<S1>/AION_auto_mode_request' */
  AION_auto_mode_request
    (&AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport1,
     &AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport2,
     &AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport3,
     &AION_IDS_SPEEDGOAT_B.set_SteerAngSpdLimt_c,
     &AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport5,
     &AION_IDS_SPEEDGOAT_B.AutoTrqWhlReq_test_p,
     &AION_IDS_SPEEDGOAT_B.BrakeReq_test_e,
     &AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport8,
     &AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport9,
     &AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport16,
     &AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport17,
     &AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport18,
     &AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport19,
     &AION_IDS_SPEEDGOAT_B.get_ABSActiveSt_j,
     &AION_IDS_SPEEDGOAT_B.get_ABSFaultSt_h,
     &AION_IDS_SPEEDGOAT_B.get_VDCActiveSt_h,
     &AION_IDS_SPEEDGOAT_B.get_VDCFaultSt_l, &AION_IDS_SPEEDGOAT_B.get_VehSpd_a,
     &AION_IDS_SPEEDGOAT_B.get_VehSpdVD_a,
     &AION_IDS_SPEEDGOAT_B.get_FLWheelSpdEdgesSum_h,
     &AION_IDS_SPEEDGOAT_B.get_FLWheelSpdEdgesSumVD_d,
     &AION_IDS_SPEEDGOAT_B.get_FRWheelSpdEdgesSum_e,
     &AION_IDS_SPEEDGOAT_B.get_FRWheelSpdEdgesSumVD_f,
     &AION_IDS_SPEEDGOAT_B.get_RLWheelSpdEdgesSum_h,
     &AION_IDS_SPEEDGOAT_B.get_RLWheelSpdEdgesSumVD_c,
     &AION_IDS_SPEEDGOAT_B.get_RRWheelSpdEdgesSum_n,
     &AION_IDS_SPEEDGOAT_B.get_RRWheelSpdEdgesSumVD_g,
     &AION_IDS_SPEEDGOAT_B.get_YawRate_o,
     &AION_IDS_SPEEDGOAT_B.get_YawRateOffset_i,
     &AION_IDS_SPEEDGOAT_B.get_YawRateSt_m,
     &AION_IDS_SPEEDGOAT_B.get_HDCCtrlSt_m, &AION_IDS_SPEEDGOAT_B.get_HDCErrSt_h,
     &AION_IDS_SPEEDGOAT_B.get_AEBActive_b,
     &AION_IDS_SPEEDGOAT_B.get_AEBAvailable_m,
     &AION_IDS_SPEEDGOAT_B.get_CDDActive_h,
     &AION_IDS_SPEEDGOAT_B.get_CDDAvailable_d,
     &AION_IDS_SPEEDGOAT_B.get_CDDFail_f,
     &AION_IDS_SPEEDGOAT_B.get_MasterCylinderPr_g,
     &AION_IDS_SPEEDGOAT_B.get_MasterCylinderPrOffset_k,
     &AION_IDS_SPEEDGOAT_B.get_MasterCylinderPrOffsetVD_i,
     &AION_IDS_SPEEDGOAT_B.get_MasterCylinderPrVD_l,
     &AION_IDS_SPEEDGOAT_B.get_NoBrakeForce_l,
     &AION_IDS_SPEEDGOAT_B.get_VehicleStandStillSt_a,
     &AION_IDS_SPEEDGOAT_B.get_FLWheelRotatedDirection_h,
     &AION_IDS_SPEEDGOAT_B.get_FLWheelRotatedDirectionVD_g,
     &AION_IDS_SPEEDGOAT_B.get_FLWheelSpd_p,
     &AION_IDS_SPEEDGOAT_B.get_FLWheelSpdVD_a,
     &AION_IDS_SPEEDGOAT_B.get_FRWheelRotatedDirection_f,
     &AION_IDS_SPEEDGOAT_B.get_FRWheelRotatedDirectionVD_b,
     &AION_IDS_SPEEDGOAT_B.get_FRWheelSpd_m,
     &AION_IDS_SPEEDGOAT_B.get_FRWheelSpdVD_o,
     &AION_IDS_SPEEDGOAT_B.get_RLWheelRotatedDirection_i,
     &AION_IDS_SPEEDGOAT_B.get_RLWheelRotatedDirectionVD_k,
     &AION_IDS_SPEEDGOAT_B.get_RLWheelSpd_j,
     &AION_IDS_SPEEDGOAT_B.get_RLWheelSpdVD_g,
     &AION_IDS_SPEEDGOAT_B.get_RRWheelRotatedDirection_m,
     &AION_IDS_SPEEDGOAT_B.get_RRWheelRotatedDirectionVD_e,
     &AION_IDS_SPEEDGOAT_B.get_RRWheelSpd_o,
     &AION_IDS_SPEEDGOAT_B.get_RRWheelSpdVD_d,
     &AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccel_f,
     &AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccelVD_l,
     &AION_IDS_SPEEDGOAT_B.get_ActVehLongAccel_a,
     &AION_IDS_SPEEDGOAT_B.get_ActVehLongAccelVD_a,
     &AION_IDS_SPEEDGOAT_B.get_VehLaltrlAccelOffset_a,
     &AION_IDS_SPEEDGOAT_B.get_VehLongAccelOffset_l,
     &AION_IDS_SPEEDGOAT_B.get_GearLeverIntv_d,
     &AION_IDS_SPEEDGOAT_B.get_VehDrvMod_a, &AION_IDS_SPEEDGOAT_B.get_VehRdySt_c,
     &AION_IDS_SPEEDGOAT_B.get_VehRng_j, &AION_IDS_SPEEDGOAT_B.get_ActRecpTorq_j,
     &AION_IDS_SPEEDGOAT_B.get_ActRecpTorqSt_e,
     &AION_IDS_SPEEDGOAT_B.get_CrntGearLvl_g,
     &AION_IDS_SPEEDGOAT_B.get_CrntGearLvlVD_p,
     &AION_IDS_SPEEDGOAT_B.get_ACCMaxRecpDecel_p,
     &AION_IDS_SPEEDGOAT_B.get_ACCMaxRecpDecelVD_n,
     &AION_IDS_SPEEDGOAT_B.get_ActVehWheelTorq_d,
     &AION_IDS_SPEEDGOAT_B.get_LateralAssistBtnInfo_n,
     &AION_IDS_SPEEDGOAT_B.get_LateralAssistBtnInfoVD_g,
     &AION_IDS_SPEEDGOAT_B.get_ACCButtInfo_i,
     &AION_IDS_SPEEDGOAT_B.get_AccElecECFail_b,
     &AION_IDS_SPEEDGOAT_B.get_GasPedalActPst_f,
     &AION_IDS_SPEEDGOAT_B.get_GasPedalActPstVD_k,
     &AION_IDS_SPEEDGOAT_B.get_VehWheelTorqMax_d,
     &AION_IDS_SPEEDGOAT_B.get_BrkPedalSt_d,
     &AION_IDS_SPEEDGOAT_B.get_BrkPedalStVD_k,
     &AION_IDS_SPEEDGOAT_B.get_GasPedalVirtualPst_f,
     &AION_IDS_SPEEDGOAT_B.get_GasPedalVirtualPstVD_g,
     &AION_IDS_SPEEDGOAT_B.get_Checksum1_j,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter1_f,
     &AION_IDS_SPEEDGOAT_B.get_Checksum10_n,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter10_o,
     &AION_IDS_SPEEDGOAT_B.get_Checksum11_p,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter11_f,
     &AION_IDS_SPEEDGOAT_B.get_Checksum12_h,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter12_c,
     &AION_IDS_SPEEDGOAT_B.get_Checksum13_e,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter13_i,
     &AION_IDS_SPEEDGOAT_B.get_EStopSwSt_k,
     &AION_IDS_SPEEDGOAT_B.get_EStopSwStVD_e,
     &AION_IDS_SPEEDGOAT_B.get_LatAutoCheckReport_d,
     &AION_IDS_SPEEDGOAT_B.get_LatCtrlMode_l,
     &AION_IDS_SPEEDGOAT_B.get_LatQuitReport_d,
     &AION_IDS_SPEEDGOAT_B.get_LngAutoCheckIReport_e,
     &AION_IDS_SPEEDGOAT_B.get_LngCtrlMode_i,
     &AION_IDS_SPEEDGOAT_B.get_LngQuitReport_o,
     &AION_IDS_SPEEDGOAT_B.get_StrngWhlIntv_g,
     &AION_IDS_SPEEDGOAT_B.get_Checksum16_p,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter16_h,
     &AION_IDS_SPEEDGOAT_B.get_Checksum17_g,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter17_f,
     &AION_IDS_SPEEDGOAT_B.get_Checksum18_n,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter18_p,
     &AION_IDS_SPEEDGOAT_B.get_Checksum2_i,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter2_h,
     &AION_IDS_SPEEDGOAT_B.get_Checksum3_n,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter3_p,
     &AION_IDS_SPEEDGOAT_B.get_Checksum4_n,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter4_b,
     &AION_IDS_SPEEDGOAT_B.get_Checksum5_g,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter5_o,
     &AION_IDS_SPEEDGOAT_B.get_Checksum6_p,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter6_l,
     &AION_IDS_SPEEDGOAT_B.get_Checksum7_b,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter7_i,
     &AION_IDS_SPEEDGOAT_B.get_Checksum8_k,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter8_p,
     &AION_IDS_SPEEDGOAT_B.get_Checksum9_f,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter9_g, &AION_IDS_SPEEDGOAT_B.get_FailSt_e,
     &AION_IDS_SPEEDGOAT_B.get_SwitchSt_a,
     &AION_IDS_SPEEDGOAT_B.get_SwitchStVD_g, &AION_IDS_SPEEDGOAT_B.get_SysSt_b,
     &AION_IDS_SPEEDGOAT_B.get_DriverSeatBeltSt_p,
     &AION_IDS_SPEEDGOAT_B.get_PsngrSeatBeltSt_e,
     &AION_IDS_SPEEDGOAT_B.get_SteeringAngle_m,
     &AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpd_j,
     &AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpdVD_f,
     &AION_IDS_SPEEDGOAT_B.get_SteeringAngleVD_d,
     &AION_IDS_SPEEDGOAT_B.get_StrngWhlTorq_e,
     &AION_IDS_SPEEDGOAT_B.get_StrngWhlTorqVD_c,
     &AION_IDS_SPEEDGOAT_B.get_ThermalSt_m, &AION_IDS_SPEEDGOAT_B.get_WarnLamp_d,
     &AION_IDS_SPEEDGOAT_B.get_CtrlAvailable_j,
     &AION_IDS_SPEEDGOAT_B.get_DriverDoorAjarSt_m,
     &AION_IDS_SPEEDGOAT_B.get_FrontFogLampSt_k,
     &AION_IDS_SPEEDGOAT_B.get_FrontWiperSt_f,
     &AION_IDS_SPEEDGOAT_B.get_HazardLampSt_g,
     &AION_IDS_SPEEDGOAT_B.get_HighBeamSt_d, &AION_IDS_SPEEDGOAT_B.get_HornSt_f,
     &AION_IDS_SPEEDGOAT_B.get_KeySt_e,
     &AION_IDS_SPEEDGOAT_B.get_LeftTurnLampFaultSt_o,
     &AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt_g,
     &AION_IDS_SPEEDGOAT_B.get_LowBeamSt_i,
     &AION_IDS_SPEEDGOAT_B.get_PsngrDoorAjarSt_a,
     &AION_IDS_SPEEDGOAT_B.get_RLDoorAjarSt_e,
     &AION_IDS_SPEEDGOAT_B.get_RRDoorAjarSt_n,
     &AION_IDS_SPEEDGOAT_B.get_RearFogLampSt_f,
     &AION_IDS_SPEEDGOAT_B.get_RightTurnLampFaultSt_m,
     &AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt_l,
     &AION_IDS_SPEEDGOAT_B.set_LatCtrlReq_n,
     &AION_IDS_SPEEDGOAT_B.set_SteerWhlTorqReq_o,
     &AION_IDS_SPEEDGOAT_B.set_SteerAngReq_o,
     &AION_IDS_SPEEDGOAT_B.set_SteerAngSpdLimt_k,
     &AION_IDS_SPEEDGOAT_B.set_LngCtrlReq_p,
     &AION_IDS_SPEEDGOAT_B.set_AutoTrqWhlReq_g,
     &AION_IDS_SPEEDGOAT_B.set_BrakeReq_o,
     &AION_IDS_SPEEDGOAT_B.set_GearLvlReq_l,
     &AION_IDS_SPEEDGOAT_B.set_GearLvlReqVD_b,
     &AION_IDS_SPEEDGOAT_B.set_Checksum1_b,
     &AION_IDS_SPEEDGOAT_B.set_MsgCounter1_h,
     &AION_IDS_SPEEDGOAT_B.set_Checksum2_e,
     &AION_IDS_SPEEDGOAT_B.set_MsgCounter2_p,
     &AION_IDS_SPEEDGOAT_B.set_Checksum3_n,
     &AION_IDS_SPEEDGOAT_B.set_MsgCounter3_b,
     &AION_IDS_SPEEDGOAT_B.set_BeamReq_j,
     &AION_IDS_SPEEDGOAT_B.set_BodyCtrlReq_a,
     &AION_IDS_SPEEDGOAT_B.set_HornRingReq_g,
     &AION_IDS_SPEEDGOAT_B.set_TurnLightReq_c,
     &AION_IDS_SPEEDGOAT_B.get_ABSActiveSt_l,
     &AION_IDS_SPEEDGOAT_B.get_ABSFaultSt_g,
     &AION_IDS_SPEEDGOAT_B.get_VDCActiveSt_j,
     &AION_IDS_SPEEDGOAT_B.get_VDCFaultSt_n, &AION_IDS_SPEEDGOAT_B.get_VehSpd_e,
     &AION_IDS_SPEEDGOAT_B.get_VehSpdVD_b,
     &AION_IDS_SPEEDGOAT_B.get_FLWheelSpdEdgesSum_a,
     &AION_IDS_SPEEDGOAT_B.get_FLWheelSpdEdgesSumVD_a,
     &AION_IDS_SPEEDGOAT_B.get_FRWheelSpdEdgesSum_f,
     &AION_IDS_SPEEDGOAT_B.get_FRWheelSpdEdgesSumVD_i,
     &AION_IDS_SPEEDGOAT_B.get_RLWheelSpdEdgesSum_f,
     &AION_IDS_SPEEDGOAT_B.get_RLWheelSpdEdgesSumVD_d,
     &AION_IDS_SPEEDGOAT_B.get_RRWheelSpdEdgesSum_c,
     &AION_IDS_SPEEDGOAT_B.get_RRWheelSpdEdgesSumVD_k,
     &AION_IDS_SPEEDGOAT_B.get_YawRate_j,
     &AION_IDS_SPEEDGOAT_B.get_YawRateOffset_a,
     &AION_IDS_SPEEDGOAT_B.get_YawRateSt_f,
     &AION_IDS_SPEEDGOAT_B.get_HDCCtrlSt_j, &AION_IDS_SPEEDGOAT_B.get_HDCErrSt_d,
     &AION_IDS_SPEEDGOAT_B.get_AEBActive_m,
     &AION_IDS_SPEEDGOAT_B.get_AEBAvailable_b,
     &AION_IDS_SPEEDGOAT_B.get_CDDActive_n,
     &AION_IDS_SPEEDGOAT_B.get_CDDAvailable_m,
     &AION_IDS_SPEEDGOAT_B.get_CDDFail_j,
     &AION_IDS_SPEEDGOAT_B.get_MasterCylinderPr_o,
     &AION_IDS_SPEEDGOAT_B.get_MasterCylinderPrOffset_e,
     &AION_IDS_SPEEDGOAT_B.get_MasterCylinderPrOffsetVD_h,
     &AION_IDS_SPEEDGOAT_B.get_MasterCylinderPrVD_c,
     &AION_IDS_SPEEDGOAT_B.get_NoBrakeForce_f,
     &AION_IDS_SPEEDGOAT_B.get_VehicleStandStillSt_f,
     &AION_IDS_SPEEDGOAT_B.get_FLWheelRotatedDirection_p,
     &AION_IDS_SPEEDGOAT_B.get_FLWheelRotatedDirectionVD_k,
     &AION_IDS_SPEEDGOAT_B.get_FLWheelSpd_l,
     &AION_IDS_SPEEDGOAT_B.get_FLWheelSpdVD_o,
     &AION_IDS_SPEEDGOAT_B.get_FRWheelRotatedDirection_p,
     &AION_IDS_SPEEDGOAT_B.get_FRWheelRotatedDirectionVD_k,
     &AION_IDS_SPEEDGOAT_B.get_FRWheelSpd_b,
     &AION_IDS_SPEEDGOAT_B.get_FRWheelSpdVD_b,
     &AION_IDS_SPEEDGOAT_B.get_RLWheelRotatedDirection_f,
     &AION_IDS_SPEEDGOAT_B.get_RLWheelRotatedDirectionVD_p,
     &AION_IDS_SPEEDGOAT_B.get_RLWheelSpd_a,
     &AION_IDS_SPEEDGOAT_B.get_RLWheelSpdVD_a,
     &AION_IDS_SPEEDGOAT_B.get_RRWheelRotatedDirection_n,
     &AION_IDS_SPEEDGOAT_B.get_RRWheelRotatedDirectionVD_j,
     &AION_IDS_SPEEDGOAT_B.get_RRWheelSpd_c,
     &AION_IDS_SPEEDGOAT_B.get_RRWheelSpdVD_c,
     &AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccel_b,
     &AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccelVD_n,
     &AION_IDS_SPEEDGOAT_B.get_ActVehLongAccel_l,
     &AION_IDS_SPEEDGOAT_B.get_ActVehLongAccelVD_p,
     &AION_IDS_SPEEDGOAT_B.get_VehLaltrlAccelOffset_i,
     &AION_IDS_SPEEDGOAT_B.get_VehLongAccelOffset_p,
     &AION_IDS_SPEEDGOAT_B.get_GearLeverIntv_df,
     &AION_IDS_SPEEDGOAT_B.get_VehDrvMod_i, &AION_IDS_SPEEDGOAT_B.get_VehRdySt_d,
     &AION_IDS_SPEEDGOAT_B.get_VehRng_k, &AION_IDS_SPEEDGOAT_B.get_ActRecpTorq_l,
     &AION_IDS_SPEEDGOAT_B.get_ActRecpTorqSt_c,
     &AION_IDS_SPEEDGOAT_B.get_CrntGearLvl_h,
     &AION_IDS_SPEEDGOAT_B.get_CrntGearLvlVD_c,
     &AION_IDS_SPEEDGOAT_B.get_ACCMaxRecpDecel_a,
     &AION_IDS_SPEEDGOAT_B.get_ACCMaxRecpDecelVD_l,
     &AION_IDS_SPEEDGOAT_B.get_ActVehWheelTorq_i,
     &AION_IDS_SPEEDGOAT_B.get_LateralAssistBtnInfo_j,
     &AION_IDS_SPEEDGOAT_B.get_LateralAssistBtnInfoVD_e,
     &AION_IDS_SPEEDGOAT_B.get_ACCButtInfo_d,
     &AION_IDS_SPEEDGOAT_B.get_AccElecECFail_l,
     &AION_IDS_SPEEDGOAT_B.get_GasPedalActPst_c,
     &AION_IDS_SPEEDGOAT_B.get_GasPedalActPstVD_i,
     &AION_IDS_SPEEDGOAT_B.get_VehWheelTorqMax_g,
     &AION_IDS_SPEEDGOAT_B.get_BrkPedalSt_n,
     &AION_IDS_SPEEDGOAT_B.get_BrkPedalStVD_j,
     &AION_IDS_SPEEDGOAT_B.get_GasPedalVirtualPst_h,
     &AION_IDS_SPEEDGOAT_B.get_GasPedalVirtualPstVD_p,
     &AION_IDS_SPEEDGOAT_B.get_Checksum1_d,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter1_c,
     &AION_IDS_SPEEDGOAT_B.get_Checksum10_h,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter10_c,
     &AION_IDS_SPEEDGOAT_B.get_Checksum11_k,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter11_g,
     &AION_IDS_SPEEDGOAT_B.get_Checksum12_j,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter12_i,
     &AION_IDS_SPEEDGOAT_B.get_Checksum13_l,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter13_b,
     &AION_IDS_SPEEDGOAT_B.get_EStopSwSt_h,
     &AION_IDS_SPEEDGOAT_B.get_EStopSwStVD_o,
     &AION_IDS_SPEEDGOAT_B.get_LatAutoCheckReport_h,
     &AION_IDS_SPEEDGOAT_B.get_LatCtrlMode_la,
     &AION_IDS_SPEEDGOAT_B.get_LatQuitReport_g,
     &AION_IDS_SPEEDGOAT_B.get_LngAutoCheckIReport_b,
     &AION_IDS_SPEEDGOAT_B.get_LngCtrlMode_k,
     &AION_IDS_SPEEDGOAT_B.get_LngQuitReport_b,
     &AION_IDS_SPEEDGOAT_B.get_StrngWhlIntv_m,
     &AION_IDS_SPEEDGOAT_B.get_Checksum16_d,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter16_o,
     &AION_IDS_SPEEDGOAT_B.get_Checksum17_f,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter17_a,
     &AION_IDS_SPEEDGOAT_B.get_Checksum18_l,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter18_a,
     &AION_IDS_SPEEDGOAT_B.get_Checksum2_f,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter2_d,
     &AION_IDS_SPEEDGOAT_B.get_Checksum3_j,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter3_o,
     &AION_IDS_SPEEDGOAT_B.get_Checksum4_m,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter4_d,
     &AION_IDS_SPEEDGOAT_B.get_Checksum5_p,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter5_h,
     &AION_IDS_SPEEDGOAT_B.get_Checksum6_h,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter6_d,
     &AION_IDS_SPEEDGOAT_B.get_Checksum7_k,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter7_a,
     &AION_IDS_SPEEDGOAT_B.get_Checksum8_a,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter8_k,
     &AION_IDS_SPEEDGOAT_B.get_Checksum9_i,
     &AION_IDS_SPEEDGOAT_B.get_MsgCounter9_c, &AION_IDS_SPEEDGOAT_B.get_FailSt_g,
     &AION_IDS_SPEEDGOAT_B.get_SwitchSt_l,
     &AION_IDS_SPEEDGOAT_B.get_SwitchStVD_j, &AION_IDS_SPEEDGOAT_B.get_SysSt_e,
     &AION_IDS_SPEEDGOAT_B.get_DriverSeatBeltSt_g,
     &AION_IDS_SPEEDGOAT_B.get_PsngrSeatBeltSt_m,
     &AION_IDS_SPEEDGOAT_B.get_SteeringAngle_h,
     &AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpd_f,
     &AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpdVD_l,
     &AION_IDS_SPEEDGOAT_B.get_SteeringAngleVD_b,
     &AION_IDS_SPEEDGOAT_B.get_StrngWhlTorq_m,
     &AION_IDS_SPEEDGOAT_B.get_StrngWhlTorqVD_f,
     &AION_IDS_SPEEDGOAT_B.get_ThermalSt_g, &AION_IDS_SPEEDGOAT_B.get_WarnLamp_j,
     &AION_IDS_SPEEDGOAT_B.get_CtrlAvailable_c,
     &AION_IDS_SPEEDGOAT_B.get_DriverDoorAjarSt_mx,
     &AION_IDS_SPEEDGOAT_B.get_FrontFogLampSt_c,
     &AION_IDS_SPEEDGOAT_B.get_FrontWiperSt_m,
     &AION_IDS_SPEEDGOAT_B.get_HazardLampSt_l,
     &AION_IDS_SPEEDGOAT_B.get_HighBeamSt_h, &AION_IDS_SPEEDGOAT_B.get_HornSt_h,
     &AION_IDS_SPEEDGOAT_B.get_KeySt_i,
     &AION_IDS_SPEEDGOAT_B.get_LeftTurnLampFaultSt_j,
     &AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt_c,
     &AION_IDS_SPEEDGOAT_B.get_LowBeamSt_n,
     &AION_IDS_SPEEDGOAT_B.get_PsngrDoorAjarSt_e,
     &AION_IDS_SPEEDGOAT_B.get_RLDoorAjarSt_n,
     &AION_IDS_SPEEDGOAT_B.get_RRDoorAjarSt_b,
     &AION_IDS_SPEEDGOAT_B.get_RearFogLampSt_i,
     &AION_IDS_SPEEDGOAT_B.get_RightTurnLampFaultSt_mz,
     &AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt_ld,
     &(AION_IDS_SPEEDGOAT_DW.AION_auto_mode_request_InstanceData.rtb),
     &(AION_IDS_SPEEDGOAT_DW.AION_auto_mode_request_InstanceData.rtdw));

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_10_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_10_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_10_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_10_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_10_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_Checksum1_n = AION_IDS_SPEEDGOAT_DW.RT1_10_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_Checksum1_n = AION_IDS_SPEEDGOAT_DW.RT1_10_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_Checksum1_n = AION_IDS_SPEEDGOAT_DW.RT1_10_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_11_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_11_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_11_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_11_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_11_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_MsgCounter1_a = AION_IDS_SPEEDGOAT_DW.RT1_11_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_MsgCounter1_a = AION_IDS_SPEEDGOAT_DW.RT1_11_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_MsgCounter1_a = AION_IDS_SPEEDGOAT_DW.RT1_11_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_12_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_12_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_12_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_12_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_12_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_Checksum2_o = AION_IDS_SPEEDGOAT_DW.RT1_12_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_Checksum2_o = AION_IDS_SPEEDGOAT_DW.RT1_12_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_Checksum2_o = AION_IDS_SPEEDGOAT_DW.RT1_12_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_13_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_13_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_13_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_13_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_13_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_MsgCounter2_g = AION_IDS_SPEEDGOAT_DW.RT1_13_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_MsgCounter2_g = AION_IDS_SPEEDGOAT_DW.RT1_13_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_MsgCounter2_g = AION_IDS_SPEEDGOAT_DW.RT1_13_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_14_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_14_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_14_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_14_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_14_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_Checksum3_j = AION_IDS_SPEEDGOAT_DW.RT1_14_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_Checksum3_j = AION_IDS_SPEEDGOAT_DW.RT1_14_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_Checksum3_j = AION_IDS_SPEEDGOAT_DW.RT1_14_Buf2;
    break;
  }

  /* RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_lock(AION_IDS_SPEEDGOAT_DW.RT1_15_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.RT1_15_RDBuf = AION_IDS_SPEEDGOAT_DW.RT1_15_LstBufWR;
  rtw_slrealtime_mutex_unlock(AION_IDS_SPEEDGOAT_DW.RT1_15_d0_SEMAPHORE);
  switch (AION_IDS_SPEEDGOAT_DW.RT1_15_RDBuf) {
   case 0:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_MsgCounter3_k = AION_IDS_SPEEDGOAT_DW.RT1_15_Buf0;
    break;

   case 1:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_MsgCounter3_k = AION_IDS_SPEEDGOAT_DW.RT1_15_Buf1;
    break;

   case 2:
    /* RateTransition generated from: '<S1>/RT1' */
    AION_IDS_SPEEDGOAT_B.set_MsgCounter3_k = AION_IDS_SPEEDGOAT_DW.RT1_15_Buf2;
    break;
  }

  /* BusCreator generated from: '<S1>/To Virtual Bus' */
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_lateral_control_info.set_LatCtrlReq
    = AION_IDS_SPEEDGOAT_B.set_LatCtrlReq_n;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_lateral_control_info.set_SteerWhlTorqReq
    = AION_IDS_SPEEDGOAT_B.set_SteerWhlTorqReq_o;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_lateral_control_info.set_SteerAngReq
    = AION_IDS_SPEEDGOAT_B.set_SteerAngReq_o;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_lateral_control_info.set_SteerAngSpdLimt
    = AION_IDS_SPEEDGOAT_B.set_SteerAngSpdLimt_k;

  /* BusCreator generated from: '<S1>/To Virtual Bus' */
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_longitudinal_control_info.set_LngCtrlReq
    = AION_IDS_SPEEDGOAT_B.set_LngCtrlReq_p;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_longitudinal_control_info.set_AutoTrqWhlReq
    = AION_IDS_SPEEDGOAT_B.set_AutoTrqWhlReq_g;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_longitudinal_control_info.set_BrakeReq
    = AION_IDS_SPEEDGOAT_B.set_BrakeReq_o;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_longitudinal_control_info.set_GearLvlReq
    = AION_IDS_SPEEDGOAT_B.set_GearLvlReq_l;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_longitudinal_control_info.set_GearLvlReqVD
    = AION_IDS_SPEEDGOAT_B.set_GearLvlReqVD_b;

  /* BusCreator generated from: '<S1>/To Virtual Bus' */
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_ADCU_info.set_Checksum1 =
    AION_IDS_SPEEDGOAT_B.set_Checksum1_b;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_ADCU_info.set_MsgCounter1 =
    AION_IDS_SPEEDGOAT_B.set_MsgCounter1_h;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_ADCU_info.set_Checksum2 =
    AION_IDS_SPEEDGOAT_B.set_Checksum2_e;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_ADCU_info.set_MsgCounter2 =
    AION_IDS_SPEEDGOAT_B.set_MsgCounter2_p;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_ADCU_info.set_Checksum3 =
    AION_IDS_SPEEDGOAT_B.set_Checksum3_n;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_ADCU_info.set_MsgCounter3 =
    AION_IDS_SPEEDGOAT_B.set_MsgCounter3_b;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_ADCU_info.set_BeamReq =
    AION_IDS_SPEEDGOAT_B.set_BeamReq_j;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_ADCU_info.set_BodyCtrlReq =
    AION_IDS_SPEEDGOAT_B.set_BodyCtrlReq_a;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_ADCU_info.set_HornRingReq =
    AION_IDS_SPEEDGOAT_B.set_HornRingReq_g;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.set_ADCU_info.set_TurnLightReq =
    AION_IDS_SPEEDGOAT_B.set_TurnLightReq_c;

  /* BusCreator generated from: '<S1>/To Virtual Bus' */
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_ABSActiveSt =
    AION_IDS_SPEEDGOAT_B.get_ABSActiveSt_l;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_ABSFaultSt =
    AION_IDS_SPEEDGOAT_B.get_ABSFaultSt_g;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_VDCActiveSt =
    AION_IDS_SPEEDGOAT_B.get_VDCActiveSt_j;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_VDCFaultSt =
    AION_IDS_SPEEDGOAT_B.get_VDCFaultSt_n;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_VehSpd =
    AION_IDS_SPEEDGOAT_B.get_VehSpd_e;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_VehSpdVD =
    AION_IDS_SPEEDGOAT_B.get_VehSpdVD_b;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_FLWheelSpdEdgesSum
    = AION_IDS_SPEEDGOAT_B.get_FLWheelSpdEdgesSum_a;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_FLWheelSpdEdgesSumVD
    = AION_IDS_SPEEDGOAT_B.get_FLWheelSpdEdgesSumVD_a;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_FRWheelSpdEdgesSum
    = AION_IDS_SPEEDGOAT_B.get_FRWheelSpdEdgesSum_f;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_FRWheelSpdEdgesSumVD
    = AION_IDS_SPEEDGOAT_B.get_FRWheelSpdEdgesSumVD_i;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_RLWheelSpdEdgesSum
    = AION_IDS_SPEEDGOAT_B.get_RLWheelSpdEdgesSum_f;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_RLWheelSpdEdgesSumVD
    = AION_IDS_SPEEDGOAT_B.get_RLWheelSpdEdgesSumVD_d;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_RRWheelSpdEdgesSum
    = AION_IDS_SPEEDGOAT_B.get_RRWheelSpdEdgesSum_c;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_RRWheelSpdEdgesSumVD
    = AION_IDS_SPEEDGOAT_B.get_RRWheelSpdEdgesSumVD_k;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_YawRate =
    AION_IDS_SPEEDGOAT_B.get_YawRate_j;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_YawRateOffset =
    AION_IDS_SPEEDGOAT_B.get_YawRateOffset_a;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_YawRateSt =
    AION_IDS_SPEEDGOAT_B.get_YawRateSt_f;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_HDCCtrlSt =
    AION_IDS_SPEEDGOAT_B.get_HDCCtrlSt_j;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_HDCErrSt =
    AION_IDS_SPEEDGOAT_B.get_HDCErrSt_d;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_AEBActive =
    AION_IDS_SPEEDGOAT_B.get_AEBActive_m;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_AEBAvailable =
    AION_IDS_SPEEDGOAT_B.get_AEBAvailable_b;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_CDDActive =
    AION_IDS_SPEEDGOAT_B.get_CDDActive_n;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_CDDAvailable =
    AION_IDS_SPEEDGOAT_B.get_CDDAvailable_m;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_CDDFail =
    AION_IDS_SPEEDGOAT_B.get_CDDFail_j;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_MasterCylinderPr
    = AION_IDS_SPEEDGOAT_B.get_MasterCylinderPr_o;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_MasterCylinderPrOffset
    = AION_IDS_SPEEDGOAT_B.get_MasterCylinderPrOffset_e;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_MasterCylinderPrOffsetVD
    = AION_IDS_SPEEDGOAT_B.get_MasterCylinderPrOffsetVD_h;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_MasterCylinderPrVD
    = AION_IDS_SPEEDGOAT_B.get_MasterCylinderPrVD_c;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_NoBrakeForce =
    AION_IDS_SPEEDGOAT_B.get_NoBrakeForce_f;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_VehicleStandStillSt
    = AION_IDS_SPEEDGOAT_B.get_VehicleStandStillSt_f;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_FLWheelRotatedDirection
    = AION_IDS_SPEEDGOAT_B.get_FLWheelRotatedDirection_p;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_FLWheelRotatedDirectionVD
    = AION_IDS_SPEEDGOAT_B.get_FLWheelRotatedDirectionVD_k;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_FLWheelSpd =
    AION_IDS_SPEEDGOAT_B.get_FLWheelSpd_l;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_FLWheelSpdVD =
    AION_IDS_SPEEDGOAT_B.get_FLWheelSpdVD_o;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_FRWheelRotatedDirection
    = AION_IDS_SPEEDGOAT_B.get_FRWheelRotatedDirection_p;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_FRWheelRotatedDirectionVD
    = AION_IDS_SPEEDGOAT_B.get_FRWheelRotatedDirectionVD_k;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_FRWheelSpd =
    AION_IDS_SPEEDGOAT_B.get_FRWheelSpd_b;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_FRWheelSpdVD =
    AION_IDS_SPEEDGOAT_B.get_FRWheelSpdVD_b;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_RLWheelRotatedDirection
    = AION_IDS_SPEEDGOAT_B.get_RLWheelRotatedDirection_f;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_RLWheelRotatedDirectionVD
    = AION_IDS_SPEEDGOAT_B.get_RLWheelRotatedDirectionVD_p;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_RLWheelSpd =
    AION_IDS_SPEEDGOAT_B.get_RLWheelSpd_a;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_RLWheelSpdVD =
    AION_IDS_SPEEDGOAT_B.get_RLWheelSpdVD_a;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_RRWheelRotatedDirection
    = AION_IDS_SPEEDGOAT_B.get_RRWheelRotatedDirection_n;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_RRWheelRotatedDirectionVD
    = AION_IDS_SPEEDGOAT_B.get_RRWheelRotatedDirectionVD_j;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_RRWheelSpd =
    AION_IDS_SPEEDGOAT_B.get_RRWheelSpd_c;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_RRWheelSpdVD =
    AION_IDS_SPEEDGOAT_B.get_RRWheelSpdVD_c;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_ActVehLaltrlAccel
    = AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccel_b;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_ActVehLaltrlAccelVD
    = AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccelVD_n;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_ActVehLongAccel
    = AION_IDS_SPEEDGOAT_B.get_ActVehLongAccel_l;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_ActVehLongAccelVD
    = AION_IDS_SPEEDGOAT_B.get_ActVehLongAccelVD_p;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_VehLaltrlAccelOffset
    = AION_IDS_SPEEDGOAT_B.get_VehLaltrlAccelOffset_i;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCS_info.get_VehLongAccelOffset
    = AION_IDS_SPEEDGOAT_B.get_VehLongAccelOffset_p;

  /* BusCreator generated from: '<S1>/To Virtual Bus' */
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_GearLeverIntv =
    AION_IDS_SPEEDGOAT_B.get_GearLeverIntv_df;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_VehDrvMod =
    AION_IDS_SPEEDGOAT_B.get_VehDrvMod_i;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_VehRdySt =
    AION_IDS_SPEEDGOAT_B.get_VehRdySt_d;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_VehRng =
    AION_IDS_SPEEDGOAT_B.get_VehRng_k;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_ActRecpTorq =
    AION_IDS_SPEEDGOAT_B.get_ActRecpTorq_l;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_ActRecpTorqSt =
    AION_IDS_SPEEDGOAT_B.get_ActRecpTorqSt_c;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_CrntGearLvl =
    AION_IDS_SPEEDGOAT_B.get_CrntGearLvl_h;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_CrntGearLvlVD =
    AION_IDS_SPEEDGOAT_B.get_CrntGearLvlVD_c;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_ACCMaxRecpDecel
    = AION_IDS_SPEEDGOAT_B.get_ACCMaxRecpDecel_a;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_ACCMaxRecpDecelVD
    = AION_IDS_SPEEDGOAT_B.get_ACCMaxRecpDecelVD_l;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_ActVehWheelTorq
    = AION_IDS_SPEEDGOAT_B.get_ActVehWheelTorq_i;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_LateralAssistBtnInfo
    = AION_IDS_SPEEDGOAT_B.get_LateralAssistBtnInfo_j;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_LateralAssistBtnInfoVD
    = AION_IDS_SPEEDGOAT_B.get_LateralAssistBtnInfoVD_e;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_ACCButtInfo =
    AION_IDS_SPEEDGOAT_B.get_ACCButtInfo_d;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_AccElecECFail =
    AION_IDS_SPEEDGOAT_B.get_AccElecECFail_l;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_GasPedalActPst =
    AION_IDS_SPEEDGOAT_B.get_GasPedalActPst_c;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_GasPedalActPstVD
    = AION_IDS_SPEEDGOAT_B.get_GasPedalActPstVD_i;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_VehWheelTorqMax
    = AION_IDS_SPEEDGOAT_B.get_VehWheelTorqMax_g;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_BrkPedalSt =
    AION_IDS_SPEEDGOAT_B.get_BrkPedalSt_n;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_BrkPedalStVD =
    AION_IDS_SPEEDGOAT_B.get_BrkPedalStVD_j;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_GasPedalVirtualPst
    = AION_IDS_SPEEDGOAT_B.get_GasPedalVirtualPst_h;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_VCU_info.get_GasPedalVirtualPstVD
    = AION_IDS_SPEEDGOAT_B.get_GasPedalVirtualPstVD_p;

  /* BusCreator generated from: '<S1>/To Virtual Bus' */
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_Checksum1 =
    AION_IDS_SPEEDGOAT_B.get_Checksum1_d;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_MsgCounter1 =
    AION_IDS_SPEEDGOAT_B.get_MsgCounter1_c;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_Checksum10 =
    AION_IDS_SPEEDGOAT_B.get_Checksum10_h;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_MsgCounter10 =
    AION_IDS_SPEEDGOAT_B.get_MsgCounter10_c;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_Checksum11 =
    AION_IDS_SPEEDGOAT_B.get_Checksum11_k;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_MsgCounter11 =
    AION_IDS_SPEEDGOAT_B.get_MsgCounter11_g;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_Checksum12 =
    AION_IDS_SPEEDGOAT_B.get_Checksum12_j;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_MsgCounter12 =
    AION_IDS_SPEEDGOAT_B.get_MsgCounter12_i;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_Checksum13 =
    AION_IDS_SPEEDGOAT_B.get_Checksum13_l;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_MsgCounter13 =
    AION_IDS_SPEEDGOAT_B.get_MsgCounter13_b;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_EStopSwSt =
    AION_IDS_SPEEDGOAT_B.get_EStopSwSt_h;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_EStopSwStVD =
    AION_IDS_SPEEDGOAT_B.get_EStopSwStVD_o;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_LatAutoCheckReport
    = AION_IDS_SPEEDGOAT_B.get_LatAutoCheckReport_h;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_LatCtrlMode =
    AION_IDS_SPEEDGOAT_B.get_LatCtrlMode_la;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_LatQuitReport =
    AION_IDS_SPEEDGOAT_B.get_LatQuitReport_g;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_LngAutoCheckIReport
    = AION_IDS_SPEEDGOAT_B.get_LngAutoCheckIReport_b;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_LngCtrlMode =
    AION_IDS_SPEEDGOAT_B.get_LngCtrlMode_k;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_LngQuitReport =
    AION_IDS_SPEEDGOAT_B.get_LngQuitReport_b;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_StrngWhlIntv =
    AION_IDS_SPEEDGOAT_B.get_StrngWhlIntv_m;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_Checksum16 =
    AION_IDS_SPEEDGOAT_B.get_Checksum16_d;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_MsgCounter16 =
    AION_IDS_SPEEDGOAT_B.get_MsgCounter16_o;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_Checksum17 =
    AION_IDS_SPEEDGOAT_B.get_Checksum17_f;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_MsgCounter17 =
    AION_IDS_SPEEDGOAT_B.get_MsgCounter17_a;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_Checksum18 =
    AION_IDS_SPEEDGOAT_B.get_Checksum18_l;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_MsgCounter18 =
    AION_IDS_SPEEDGOAT_B.get_MsgCounter18_a;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_Checksum2 =
    AION_IDS_SPEEDGOAT_B.get_Checksum2_f;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_MsgCounter2 =
    AION_IDS_SPEEDGOAT_B.get_MsgCounter2_d;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_Checksum3 =
    AION_IDS_SPEEDGOAT_B.get_Checksum3_j;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_MsgCounter3 =
    AION_IDS_SPEEDGOAT_B.get_MsgCounter3_o;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_Checksum4 =
    AION_IDS_SPEEDGOAT_B.get_Checksum4_m;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_MsgCounter4 =
    AION_IDS_SPEEDGOAT_B.get_MsgCounter4_d;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_Checksum5 =
    AION_IDS_SPEEDGOAT_B.get_Checksum5_p;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_MsgCounter5 =
    AION_IDS_SPEEDGOAT_B.get_MsgCounter5_h;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_Checksum6 =
    AION_IDS_SPEEDGOAT_B.get_Checksum6_h;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_MsgCounter6 =
    AION_IDS_SPEEDGOAT_B.get_MsgCounter6_d;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_Checksum7 =
    AION_IDS_SPEEDGOAT_B.get_Checksum7_k;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_MsgCounter7 =
    AION_IDS_SPEEDGOAT_B.get_MsgCounter7_a;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_Checksum8 =
    AION_IDS_SPEEDGOAT_B.get_Checksum8_a;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_MsgCounter8 =
    AION_IDS_SPEEDGOAT_B.get_MsgCounter8_k;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_Checksum9 =
    AION_IDS_SPEEDGOAT_B.get_Checksum9_i;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SCU_info.get_MsgCounter9 =
    AION_IDS_SPEEDGOAT_B.get_MsgCounter9_c;

  /* BusCreator generated from: '<S1>/To Virtual Bus' */
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_EPB_info.get_FailSt =
    AION_IDS_SPEEDGOAT_B.get_FailSt_g;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_EPB_info.get_SwitchSt =
    AION_IDS_SPEEDGOAT_B.get_SwitchSt_l;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_EPB_info.get_SwitchStVD =
    AION_IDS_SPEEDGOAT_B.get_SwitchStVD_j;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_EPB_info.get_SysSt =
    AION_IDS_SPEEDGOAT_B.get_SysSt_e;

  /* BusCreator generated from: '<S1>/To Virtual Bus' */
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SRS_info.get_DriverSeatBeltSt
    = AION_IDS_SPEEDGOAT_B.get_DriverSeatBeltSt_g;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_SRS_info.get_PsngrSeatBeltSt
    = AION_IDS_SPEEDGOAT_B.get_PsngrSeatBeltSt_m;

  /* BusCreator generated from: '<S1>/To Virtual Bus' */
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_EPS_info.get_SteeringAngle =
    AION_IDS_SPEEDGOAT_B.get_SteeringAngle_h;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_EPS_info.get_SteeringAngleSpd
    = AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpd_f;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_EPS_info.get_SteeringAngleSpdVD
    = AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpdVD_l;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_EPS_info.get_SteeringAngleVD
    = AION_IDS_SPEEDGOAT_B.get_SteeringAngleVD_b;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_EPS_info.get_StrngWhlTorq =
    AION_IDS_SPEEDGOAT_B.get_StrngWhlTorq_m;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_EPS_info.get_StrngWhlTorqVD =
    AION_IDS_SPEEDGOAT_B.get_StrngWhlTorqVD_f;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_EPS_info.get_ThermalSt =
    AION_IDS_SPEEDGOAT_B.get_ThermalSt_g;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_EPS_info.get_WarnLamp =
    AION_IDS_SPEEDGOAT_B.get_WarnLamp_j;

  /* BusCreator generated from: '<S1>/To Virtual Bus' */
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCM_info.get_CtrlAvailable =
    AION_IDS_SPEEDGOAT_B.get_CtrlAvailable_c;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCM_info.get_DriverDoorAjarSt
    = AION_IDS_SPEEDGOAT_B.get_DriverDoorAjarSt_mx;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCM_info.get_FrontFogLampSt =
    AION_IDS_SPEEDGOAT_B.get_FrontFogLampSt_c;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCM_info.get_FrontWiperSt =
    AION_IDS_SPEEDGOAT_B.get_FrontWiperSt_m;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCM_info.get_HazardLampSt =
    AION_IDS_SPEEDGOAT_B.get_HazardLampSt_l;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCM_info.get_HighBeamSt =
    AION_IDS_SPEEDGOAT_B.get_HighBeamSt_h;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCM_info.get_HornSt =
    AION_IDS_SPEEDGOAT_B.get_HornSt_h;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCM_info.get_KeySt =
    AION_IDS_SPEEDGOAT_B.get_KeySt_i;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCM_info.get_LeftTurnLampFaultSt
    = AION_IDS_SPEEDGOAT_B.get_LeftTurnLampFaultSt_j;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCM_info.get_LeftTurnLampSt =
    AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt_c;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCM_info.get_LowBeamSt =
    AION_IDS_SPEEDGOAT_B.get_LowBeamSt_n;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCM_info.get_PsngrDoorAjarSt
    = AION_IDS_SPEEDGOAT_B.get_PsngrDoorAjarSt_e;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCM_info.get_RLDoorAjarSt =
    AION_IDS_SPEEDGOAT_B.get_RLDoorAjarSt_n;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCM_info.get_RRDoorAjarSt =
    AION_IDS_SPEEDGOAT_B.get_RRDoorAjarSt_b;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCM_info.get_RearFogLampSt =
    AION_IDS_SPEEDGOAT_B.get_RearFogLampSt_i;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCM_info.get_RightTurnLampFaultSt
    = AION_IDS_SPEEDGOAT_B.get_RightTurnLampFaultSt_mz;
  AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1.get_BCM_info.get_RightTurnLampSt
    = AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt_ld;

  /* RateTransition generated from: '<S1>/Unit Delay' */
  rtw_slrealtime_mutex_lock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtUnitDelayInport1_d0_SEMAPHORE);
  wrBufIdx = static_cast<int8_T>
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtUnitDelayInport1_LstBufWR + 1);
  if (wrBufIdx == 3) {
    wrBufIdx = 0;
  }

  if (wrBufIdx == AION_IDS_SPEEDGOAT_DW.TmpRTBAtUnitDelayInport1_RDBuf) {
    wrBufIdx = static_cast<int8_T>(wrBufIdx + 1);
    if (wrBufIdx == 3) {
      wrBufIdx = 0;
    }
  }

  rtw_slrealtime_mutex_unlock
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtUnitDelayInport1_d0_SEMAPHORE);
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtUnitDelayInport1_Buf[wrBufIdx] =
    AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1;
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtUnitDelayInport1_LstBufWR = wrBufIdx;

  /* End of RateTransition generated from: '<S1>/Unit Delay' */

  /* Update absolute time */
  /* The "clockTick3" counts the number of times the code of this task has
   * been executed. The resolution of this integer timer is 0.2, which is the step size
   * of the task. Size of "clockTick3" ensures timer will not overflow during the
   * application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick3 and the high bits
   * Timing.clockTickH3. When the low bit overflows to 0, the high bits increment.
   */
  AION_IDS_SPEEDGOAT_M->Timing.clockTick3++;
  if (!AION_IDS_SPEEDGOAT_M->Timing.clockTick3) {
    AION_IDS_SPEEDGOAT_M->Timing.clockTickH3++;
  }
}

/* Model wrapper function for compatibility with a static main program */
void AION_IDS_SPEEDGOAT_step(int_T tid)
{
  switch (tid) {
   case 0 :
    AION_IDS_SPEEDGOAT_step0();
    break;

   case 1 :
    AION_IDS_SPEEDGOAT_step1();
    break;

   case 2 :
    AION_IDS_SPEEDGOAT_step2();
    break;

   case 3 :
    AION_IDS_SPEEDGOAT_step3();
    break;

   default :
    break;
  }
}

/* Model initialize function */
void AION_IDS_SPEEDGOAT_initialize(void)
{
  /* Registration code */

  /* initialize non-finites */
  rt_InitInfAndNaN(sizeof(real_T));
  (AION_IDS_SPEEDGOAT_M)->Timing.TaskCounters.cLimit[0] = 1;
  (AION_IDS_SPEEDGOAT_M)->Timing.TaskCounters.cLimit[1] = 2;
  (AION_IDS_SPEEDGOAT_M)->Timing.TaskCounters.cLimit[2] = 5;
  (AION_IDS_SPEEDGOAT_M)->Timing.TaskCounters.cLimit[3] = 20;
  rtsiSetSolverName(&AION_IDS_SPEEDGOAT_M->solverInfo,"FixedStepDiscrete");
  AION_IDS_SPEEDGOAT_M->solverInfoPtr = (&AION_IDS_SPEEDGOAT_M->solverInfo);

  /* Initialize timing info */
  {
    int_T *mdlTsMap = AION_IDS_SPEEDGOAT_M->Timing.sampleTimeTaskIDArray;
    mdlTsMap[0] = 0;
    mdlTsMap[1] = 1;
    mdlTsMap[2] = 2;
    mdlTsMap[3] = 3;
    AION_IDS_SPEEDGOAT_M->Timing.sampleTimeTaskIDPtr = (&mdlTsMap[0]);
    AION_IDS_SPEEDGOAT_M->Timing.sampleTimes =
      (&AION_IDS_SPEEDGOAT_M->Timing.sampleTimesArray[0]);
    AION_IDS_SPEEDGOAT_M->Timing.offsetTimes =
      (&AION_IDS_SPEEDGOAT_M->Timing.offsetTimesArray[0]);

    /* task periods */
    AION_IDS_SPEEDGOAT_M->Timing.sampleTimes[0] = (0.01);
    AION_IDS_SPEEDGOAT_M->Timing.sampleTimes[1] = (0.02);
    AION_IDS_SPEEDGOAT_M->Timing.sampleTimes[2] = (0.05);
    AION_IDS_SPEEDGOAT_M->Timing.sampleTimes[3] = (0.2);

    /* task offsets */
    AION_IDS_SPEEDGOAT_M->Timing.offsetTimes[0] = (0.0);
    AION_IDS_SPEEDGOAT_M->Timing.offsetTimes[1] = (0.0);
    AION_IDS_SPEEDGOAT_M->Timing.offsetTimes[2] = (0.0);
    AION_IDS_SPEEDGOAT_M->Timing.offsetTimes[3] = (0.0);
  }

  rtmSetTPtr(AION_IDS_SPEEDGOAT_M, &AION_IDS_SPEEDGOAT_M->Timing.tArray[0]);

  {
    int_T *mdlSampleHits = AION_IDS_SPEEDGOAT_M->Timing.sampleHitArray;
    int_T *mdlPerTaskSampleHits =
      AION_IDS_SPEEDGOAT_M->Timing.perTaskSampleHitsArray;
    AION_IDS_SPEEDGOAT_M->Timing.perTaskSampleHits = (&mdlPerTaskSampleHits[0]);
    mdlSampleHits[0] = 1;
    AION_IDS_SPEEDGOAT_M->Timing.sampleHits = (&mdlSampleHits[0]);
  }

  rtmSetTFinal(AION_IDS_SPEEDGOAT_M, -1);
  AION_IDS_SPEEDGOAT_M->Timing.stepSize0 = 0.01;
  AION_IDS_SPEEDGOAT_M->Timing.stepSize1 = 0.02;
  AION_IDS_SPEEDGOAT_M->Timing.stepSize2 = 0.05;
  AION_IDS_SPEEDGOAT_M->solverInfoPtr = (&AION_IDS_SPEEDGOAT_M->solverInfo);
  AION_IDS_SPEEDGOAT_M->Timing.stepSize = (0.01);
  rtsiSetFixedStepSize(&AION_IDS_SPEEDGOAT_M->solverInfo, 0.01);
  rtsiSetSolverMode(&AION_IDS_SPEEDGOAT_M->solverInfo, SOLVER_MODE_MULTITASKING);

  /* block I/O */
  (void) std::memset((static_cast<void *>(&AION_IDS_SPEEDGOAT_B)), 0,
                     sizeof(B_AION_IDS_SPEEDGOAT_T));

  {
    AION_IDS_SPEEDGOAT_B.UnitDelay = AION_IDS_SPEEDGOAT_rtZAION_ApplicationBus;
    AION_IDS_SPEEDGOAT_B.TmpRTBAtUnitDelayInport1 =
      AION_IDS_SPEEDGOAT_rtZAION_ApplicationBus;
    AION_IDS_SPEEDGOAT_B.ToVirtualBus_BusCreator1 =
      AION_IDS_SPEEDGOAT_rtZAION_ApplicationBus;
    AION_IDS_SPEEDGOAT_B.ADCU2SCU_Brake_Command_CAN_pack = CAN_DATATYPE_GROUND;
    AION_IDS_SPEEDGOAT_B.RT_f = CAN_DATATYPE_GROUND;
    AION_IDS_SPEEDGOAT_B.ADCU2SCU_Gear_Command_CAN_pack = CAN_DATATYPE_GROUND;
    AION_IDS_SPEEDGOAT_B.RT1 = CAN_DATATYPE_GROUND;
    AION_IDS_SPEEDGOAT_B.ADCU2SCU_Steer_Command_CAN_pack = CAN_DATATYPE_GROUND;
    AION_IDS_SPEEDGOAT_B.RT2 = CAN_DATATYPE_GROUND;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2 = CAN_DATATYPE_GROUND;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_SampleTimes = 0.0;
    AION_IDS_SPEEDGOAT_B.set_SteerWhlTorqReq = 0.0;
    AION_IDS_SPEEDGOAT_B.set_SteerAngReq = 0.0;
    AION_IDS_SPEEDGOAT_B.set_SteerAngSpdLimt = 0.0;
    AION_IDS_SPEEDGOAT_B.set_AutoTrqWhlReq = 0.0;
    AION_IDS_SPEEDGOAT_B.set_BrakeReq = 0.0;
    AION_IDS_SPEEDGOAT_B.get_VehSpd = 0.0;
    AION_IDS_SPEEDGOAT_B.get_YawRate = 0.0;
    AION_IDS_SPEEDGOAT_B.get_YawRateOffset = 0.0;
    AION_IDS_SPEEDGOAT_B.get_MasterCylinderPr = 0.0;
    AION_IDS_SPEEDGOAT_B.get_MasterCylinderPrOffset = 0.0;
    AION_IDS_SPEEDGOAT_B.get_FLWheelSpd = 0.0;
    AION_IDS_SPEEDGOAT_B.get_FRWheelSpd = 0.0;
    AION_IDS_SPEEDGOAT_B.get_RLWheelSpd = 0.0;
    AION_IDS_SPEEDGOAT_B.get_RRWheelSpd = 0.0;
    AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccel = 0.0;
    AION_IDS_SPEEDGOAT_B.get_ActVehLongAccel = 0.0;
    AION_IDS_SPEEDGOAT_B.get_VehLaltrlAccelOffset = 0.0;
    AION_IDS_SPEEDGOAT_B.get_VehLongAccelOffset = 0.0;
    AION_IDS_SPEEDGOAT_B.get_ACCMaxRecpDecel = 0.0;
    AION_IDS_SPEEDGOAT_B.get_GasPedalActPst = 0.0;
    AION_IDS_SPEEDGOAT_B.get_GasPedalVirtualPst = 0.0;
    AION_IDS_SPEEDGOAT_B.get_SteeringAngle = 0.0;
    AION_IDS_SPEEDGOAT_B.get_StrngWhlTorq = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_1_Checksum = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_1_MsgCounter = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_AutoTrqWhlReq = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_BrakeReq = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_GearLvlReq = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_GearLvlReqVD = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_LngCtrlReq = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_ParkingReqToEPB = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_ParkingReqToEPBVD = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_2_Checksum = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_2_MsgCounter = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_LatCtrlReq = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_SteerAngReq = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_SteerAngSpdLimt = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_SteerWhlTorqReq = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_3_Checksum = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_3_MsgCounter = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_BeamReq = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_BodyCtrlReq = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_HornRingReq = 0.0;
    AION_IDS_SPEEDGOAT_B.ADCU_TurnLightReq = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_ABSActiveSt = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_ABSFaultSt = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_VDCActiveSt = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_VDCFaultSt = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_VehSpd = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_VehSpdVD = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_1_Checksum = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_1_MsgCounter = 0.0;
    AION_IDS_SPEEDGOAT_B.EPS_SteeringAngle = 0.0;
    AION_IDS_SPEEDGOAT_B.EPS_SteeringAngleSpd = 0.0;
    AION_IDS_SPEEDGOAT_B.EPS_SteeringAngleSpdVD = 0.0;
    AION_IDS_SPEEDGOAT_B.EPS_SteeringAngleVD = 0.0;
    AION_IDS_SPEEDGOAT_B.EPS_StrngWhlTorq = 0.0;
    AION_IDS_SPEEDGOAT_B.EPS_StrngWhlTorqVD = 0.0;
    AION_IDS_SPEEDGOAT_B.EPS_ThermalSt = 0.0;
    AION_IDS_SPEEDGOAT_B.EPS_WarnLamp = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_10_Checksum = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_10_MsgCounter = 0.0;
    AION_IDS_SPEEDGOAT_B.BCM_CtrlAvailable = 0.0;
    AION_IDS_SPEEDGOAT_B.BCM_DriverDoorAjarSt = 0.0;
    AION_IDS_SPEEDGOAT_B.BCM_FrontFogLampSt = 0.0;
    AION_IDS_SPEEDGOAT_B.BCM_FrontWiperSt = 0.0;
    AION_IDS_SPEEDGOAT_B.BCM_HazardLampSt = 0.0;
    AION_IDS_SPEEDGOAT_B.BCM_HighBeamSt = 0.0;
    AION_IDS_SPEEDGOAT_B.BCM_HornSt = 0.0;
    AION_IDS_SPEEDGOAT_B.BCM_KeySt = 0.0;
    AION_IDS_SPEEDGOAT_B.BCM_LeftTurnLampFaultSt = 0.0;
    AION_IDS_SPEEDGOAT_B.BCM_LeftTurnLampSt = 0.0;
    AION_IDS_SPEEDGOAT_B.BCM_LowBeamSt = 0.0;
    AION_IDS_SPEEDGOAT_B.BCM_PsngrDoorAjarSt = 0.0;
    AION_IDS_SPEEDGOAT_B.BCM_RLDoorAjarSt = 0.0;
    AION_IDS_SPEEDGOAT_B.BCM_RRDoorAjarSt = 0.0;
    AION_IDS_SPEEDGOAT_B.BCM_RearFogLampSt = 0.0;
    AION_IDS_SPEEDGOAT_B.BCM_RightTurnLampFaultSt = 0.0;
    AION_IDS_SPEEDGOAT_B.BCM_RightTurnLampSt = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_11_Checksum = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_11_MsgCounter = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_12_Checksum = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_12_MsgCounter = 0.0;
    AION_IDS_SPEEDGOAT_B.SRS_DriverSeatBeltSt = 0.0;
    AION_IDS_SPEEDGOAT_B.SRS_PsngrSeatBeltSt = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_13_Checksum = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_13_MsgCounter = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_EStopSwSt = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_EStopSwStVD = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_LatAutoCheckReport = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_LatCtrlMode = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_LatQuitReport = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_LngAutoChecklReport = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_LngCtrlMode = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_LngQuitReport = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_StrngWhlIntv = 0.0;
    AION_IDS_SPEEDGOAT_B.VCU_GearLeverIntv = 0.0;
    AION_IDS_SPEEDGOAT_B.VCU_VehDrvMod = 0.0;
    AION_IDS_SPEEDGOAT_B.VCU_VehRdySt = 0.0;
    AION_IDS_SPEEDGOAT_B.VCU_VehRng = 0.0;
    AION_IDS_SPEEDGOAT_B.VCU_ActRecpTorq = 0.0;
    AION_IDS_SPEEDGOAT_B.VCU_ActRecpTorqSt = 0.0;
    AION_IDS_SPEEDGOAT_B.VCU_CrntGearLvl = 0.0;
    AION_IDS_SPEEDGOAT_B.VCU_CrntGearLvlVD = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_16_Checksum = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_16_MsgCounter = 0.0;
    AION_IDS_SPEEDGOAT_B.VCU_ACCMaxRecpDecel = 0.0;
    AION_IDS_SPEEDGOAT_B.VCU_ACCMaxRecpDecelVD = 0.0;
    AION_IDS_SPEEDGOAT_B.VCU_ActVehWheelTorq = 0.0;
    AION_IDS_SPEEDGOAT_B.VCU_LateralAssistBtnInfo = 0.0;
    AION_IDS_SPEEDGOAT_B.VCU_LateralAssistBtnInfoVD = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_17_Checksum = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_17_MsgCounter = 0.0;
    AION_IDS_SPEEDGOAT_B.VCU_ACCButtInfo = 0.0;
    AION_IDS_SPEEDGOAT_B.VCU_AccElecECFail = 0.0;
    AION_IDS_SPEEDGOAT_B.VCU_GasPedalActPst = 0.0;
    AION_IDS_SPEEDGOAT_B.VCU_GasPedalActPstVD = 0.0;
    AION_IDS_SPEEDGOAT_B.VCU_VehWheelTorqMax = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_18_Checksum = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_18_MsgCounter = 0.0;
    AION_IDS_SPEEDGOAT_B.VCU_BrkPedalSt = 0.0;
    AION_IDS_SPEEDGOAT_B.VCU_BrkPedalStVD = 0.0;
    AION_IDS_SPEEDGOAT_B.VCU_GasPedalVirtualPst = 0.0;
    AION_IDS_SPEEDGOAT_B.VCU_GasPedalVirtualPstVD = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_FLWheelSpdEdgesSum = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_FLWheelSpdEdgesSumVD = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_FRWheelSpdEdgesSum = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_FRWheelSpdEdgesSumVD = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_RLWheelSpdEdgesSum = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_RLWheelSpdEdgesSumVD = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_RRWheelSpdEdgesSum = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_RRWheelSpdEdgesSumVD = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_2_Checksum = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_2_MsgCounter = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_YawRate = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_YawRateOffset = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_YawRateSt = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_3_Checksum = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_3_MsgCounter = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_HDCCtrlSt = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_HDCErrSt = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_4_Checksum = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_4_MsgCounter = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_AEBActive = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_AEBAvailable = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_CDDActive = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_CDDAvailable = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_CDDFail = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_MasterCylinderPr = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_MasterCylinderPrOffset = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_MasterCylinderPrOffsetVD = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_MasterCylinderPrVD = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_NoBrakeForce = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_VehicleStandStillSt = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_5_Checksum = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_5_MsgCounter = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_FLWheelRotatedDirection = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_FLWheelRotatedDirectionVD = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_FLWheelSpd = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_FLWheelSpdVD = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_FRWheelRotatedDirection = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_FRWheelRotatedDirectionVD = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_FRWheelSpd = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_FRWheelSpdVD = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_6_Checksum = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_6_MsgCounter = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_RLWheelRotatedDirection = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_RLWheelRotatedDirectionVD = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_RLWheelSpd = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_RLWheelSpdVD = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_RRWheelRotatedDirection = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_RRWheelRotatedDirectionVD = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_RRWheelSpd = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_RRWheelSpdVD = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_7_Checksum = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_7_MsgCounter = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_ActVehLaltrlAccel = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_ActVehLaltrlAccelVD = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_ActVehLongAccel = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_ActVehLongAccelVD = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_VehLaltrlAccelOffset = 0.0;
    AION_IDS_SPEEDGOAT_B.BCS_VehLongAccelOffset = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_8_Checksum = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_8_MsgCounter = 0.0;
    AION_IDS_SPEEDGOAT_B.EPB_FailSt = 0.0;
    AION_IDS_SPEEDGOAT_B.EPB_SwitchSt = 0.0;
    AION_IDS_SPEEDGOAT_B.EPB_SwitchStVD = 0.0;
    AION_IDS_SPEEDGOAT_B.EPB_SysSt = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_9_Checksum = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU_9_MsgCounter = 0.0;
    AION_IDS_SPEEDGOAT_B.AutoTrqWhlReq_test = 0.0;
    AION_IDS_SPEEDGOAT_B.BrakeReq_test = 0.0;
    AION_IDS_SPEEDGOAT_B.LatCtrlReq_test = 0.0;
    AION_IDS_SPEEDGOAT_B.get_SteeringAngle_m = 0.0;
    AION_IDS_SPEEDGOAT_B.get_VehSpd_a = 0.0;
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport2 = 0.0;
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport3 = 0.0;
    AION_IDS_SPEEDGOAT_B.set_SteerAngSpdLimt_c = 0.0;
    AION_IDS_SPEEDGOAT_B.AutoTrqWhlReq_test_p = 0.0;
    AION_IDS_SPEEDGOAT_B.BrakeReq_test_e = 0.0;
    AION_IDS_SPEEDGOAT_B.get_YawRate_o = 0.0;
    AION_IDS_SPEEDGOAT_B.get_YawRateOffset_i = 0.0;
    AION_IDS_SPEEDGOAT_B.get_MasterCylinderPr_g = 0.0;
    AION_IDS_SPEEDGOAT_B.get_MasterCylinderPrOffset_k = 0.0;
    AION_IDS_SPEEDGOAT_B.get_FLWheelSpd_p = 0.0;
    AION_IDS_SPEEDGOAT_B.get_FRWheelSpd_m = 0.0;
    AION_IDS_SPEEDGOAT_B.get_RLWheelSpd_j = 0.0;
    AION_IDS_SPEEDGOAT_B.get_RRWheelSpd_o = 0.0;
    AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccel_f = 0.0;
    AION_IDS_SPEEDGOAT_B.get_ActVehLongAccel_a = 0.0;
    AION_IDS_SPEEDGOAT_B.get_VehLaltrlAccelOffset_a = 0.0;
    AION_IDS_SPEEDGOAT_B.get_VehLongAccelOffset_l = 0.0;
    AION_IDS_SPEEDGOAT_B.get_ACCMaxRecpDecel_p = 0.0;
    AION_IDS_SPEEDGOAT_B.get_GasPedalActPst_f = 0.0;
    AION_IDS_SPEEDGOAT_B.get_GasPedalVirtualPst_f = 0.0;
    AION_IDS_SPEEDGOAT_B.get_StrngWhlTorq_e = 0.0;
    AION_IDS_SPEEDGOAT_B.set_SteerWhlTorqReq_o = 0.0;
    AION_IDS_SPEEDGOAT_B.set_SteerAngReq_o = 0.0;
    AION_IDS_SPEEDGOAT_B.set_SteerAngSpdLimt_k = 0.0;
    AION_IDS_SPEEDGOAT_B.set_AutoTrqWhlReq_g = 0.0;
    AION_IDS_SPEEDGOAT_B.set_BrakeReq_o = 0.0;
    AION_IDS_SPEEDGOAT_B.get_VehSpd_e = 0.0;
    AION_IDS_SPEEDGOAT_B.get_YawRate_j = 0.0;
    AION_IDS_SPEEDGOAT_B.get_YawRateOffset_a = 0.0;
    AION_IDS_SPEEDGOAT_B.get_MasterCylinderPr_o = 0.0;
    AION_IDS_SPEEDGOAT_B.get_MasterCylinderPrOffset_e = 0.0;
    AION_IDS_SPEEDGOAT_B.get_FLWheelSpd_l = 0.0;
    AION_IDS_SPEEDGOAT_B.get_FRWheelSpd_b = 0.0;
    AION_IDS_SPEEDGOAT_B.get_RLWheelSpd_a = 0.0;
    AION_IDS_SPEEDGOAT_B.get_RRWheelSpd_c = 0.0;
    AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccel_b = 0.0;
    AION_IDS_SPEEDGOAT_B.get_ActVehLongAccel_l = 0.0;
    AION_IDS_SPEEDGOAT_B.get_VehLaltrlAccelOffset_i = 0.0;
    AION_IDS_SPEEDGOAT_B.get_VehLongAccelOffset_p = 0.0;
    AION_IDS_SPEEDGOAT_B.get_ACCMaxRecpDecel_a = 0.0;
    AION_IDS_SPEEDGOAT_B.get_GasPedalActPst_c = 0.0;
    AION_IDS_SPEEDGOAT_B.get_GasPedalVirtualPst_h = 0.0;
    AION_IDS_SPEEDGOAT_B.get_SteeringAngle_h = 0.0;
    AION_IDS_SPEEDGOAT_B.get_StrngWhlTorq_m = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack_o1 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack_o2 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack_o3 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack_o4 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack_o5 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack_o6 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack_o7 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack_o8 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack1_o1 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack1_o2 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack1_o3 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack1_o4 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack1_o5 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o1 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o2 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o3 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o4 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o5 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o6 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o7 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o8 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o9 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o10 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o11 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack10_o12 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack11_o1 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack11_o2 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack11_o3 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack12_o1 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack12_o2 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack12_o3 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack12_o4 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack13_o1 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack13_o2 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack13_o3 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack13_o4 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack13_o5 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack13_o6 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack13_o7 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack14_o1 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack14_o2 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack14_o3 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack14_o4 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack14_o5 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack14_o6 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack14_o7 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack15_o1 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack15_o2 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack15_o3 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack15_o4 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack15_o5 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack15_o6 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack2_o1 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack2_o2 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack2_o3 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack2_o4 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack3_o1 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack3_o2 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack3_o3 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack3_o4 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack3_o5 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack3_o6 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack3_o7 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack3_o8 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack3_o9 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack3_o10 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack3_o11 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack3_o12 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack3_o13 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack4_o1 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack4_o2 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack4_o3 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack4_o4 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack4_o5 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack4_o6 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack4_o7 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack4_o8 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack4_o9 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack4_o10 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack5_o1 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack5_o2 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack5_o3 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack5_o4 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack5_o5 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack5_o6 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack5_o7 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack5_o8 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack5_o9 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack5_o10 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack6_o1 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack6_o2 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack6_o3 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack6_o4 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack6_o5 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack6_o6 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack6_o7 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack6_o8 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack7_o1 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack7_o2 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack7_o3 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack7_o4 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack7_o5 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack7_o6 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o1 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o2 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o3 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o4 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o5 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o6 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o7 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o8 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o9 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack8_o10 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack9_o1 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack9_o2 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack9_o3 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Brake_Status_CAN_unpack9_o4 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack_o1 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack_o2 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack_o3 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack_o4 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack_o5 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack_o6 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack_o7 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack_o8 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack_o9 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack_o10 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o1 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o2 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o3 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o4 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o5 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o6 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o7 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o8 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o9 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o10 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o11 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o12 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o13 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o14 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o15 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o16 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o17 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o18 = 0.0;
    AION_IDS_SPEEDGOAT_B.SCU2ADCU_Status1_CAN_unpack1_o19 = 0.0;
    AION_IDS_SPEEDGOAT_B.get_VehSpd_b = 0.0;
    AION_IDS_SPEEDGOAT_B.get_SteeringAngle_j = 0.0;
    AION_IDS_SPEEDGOAT_B.set_GearLvlReqVD = Invalid;
    AION_IDS_SPEEDGOAT_B.DataTypeConversion4 = Invalid;
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport9 = Invalid;
    AION_IDS_SPEEDGOAT_B.set_GearLvlReqVD_b = Invalid;
    AION_IDS_SPEEDGOAT_B.get_VehRdySt = NotReady;
    AION_IDS_SPEEDGOAT_B.get_VehRdySt_c = NotReady;
    AION_IDS_SPEEDGOAT_B.get_VehRdySt_d = NotReady;
    AION_IDS_SPEEDGOAT_B.get_VehRdySt_a = NotReady;
    AION_IDS_SPEEDGOAT_B.set_TurnLightReq = NoLightRequest;
    AION_IDS_SPEEDGOAT_B.DataTypeConversion14 = NoLightRequest;
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport19 = NoLightRequest;
    AION_IDS_SPEEDGOAT_B.set_TurnLightReq_c = NoLightRequest;
    AION_IDS_SPEEDGOAT_B.get_CrntGearLvl = InvalidGearStatus;
    AION_IDS_SPEEDGOAT_B.get_CrntGearLvl_g = InvalidGearStatus;
    AION_IDS_SPEEDGOAT_B.get_CrntGearLvl_h = InvalidGearStatus;
    AION_IDS_SPEEDGOAT_B.get_CrntGearLvl_b = InvalidGearStatus;
    AION_IDS_SPEEDGOAT_B.set_GearLvlReq = NoRequest;
    AION_IDS_SPEEDGOAT_B.DataTypeConversion2 = NoRequest;
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport8 = NoRequest;
    AION_IDS_SPEEDGOAT_B.set_GearLvlReq_l = NoRequest;
    AION_IDS_SPEEDGOAT_B.get_LeftTurnLampFaultSt = NotFault;
    AION_IDS_SPEEDGOAT_B.get_RightTurnLampFaultSt = NotFault;
    AION_IDS_SPEEDGOAT_B.get_LeftTurnLampFaultSt_o = NotFault;
    AION_IDS_SPEEDGOAT_B.get_RightTurnLampFaultSt_m = NotFault;
    AION_IDS_SPEEDGOAT_B.get_LeftTurnLampFaultSt_j = NotFault;
    AION_IDS_SPEEDGOAT_B.get_RightTurnLampFaultSt_mz = NotFault;
    AION_IDS_SPEEDGOAT_B.get_FailSt = NoError;
    AION_IDS_SPEEDGOAT_B.get_FailSt_e = NoError;
    AION_IDS_SPEEDGOAT_B.get_FailSt_g = NoError;
    AION_IDS_SPEEDGOAT_B.set_BodyCtrlReq = Disable;
    AION_IDS_SPEEDGOAT_B.DataTypeConversion12 = Disable;
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport17 = Disable;
    AION_IDS_SPEEDGOAT_B.set_BodyCtrlReq_a = Disable;
    AION_IDS_SPEEDGOAT_B.get_VehDrvMod = InvalidDriveStatus;
    AION_IDS_SPEEDGOAT_B.get_VehDrvMod_a = InvalidDriveStatus;
    AION_IDS_SPEEDGOAT_B.get_VehDrvMod_i = InvalidDriveStatus;
    AION_IDS_SPEEDGOAT_B.get_VehDrvMod_c = InvalidDriveStatus;
    AION_IDS_SPEEDGOAT_B.get_LatCtrlMode = ManualStatus;
    AION_IDS_SPEEDGOAT_B.get_LngCtrlMode = ManualStatus;
    AION_IDS_SPEEDGOAT_B.get_LatCtrlMode_l = ManualStatus;
    AION_IDS_SPEEDGOAT_B.get_LngCtrlMode_i = ManualStatus;
    AION_IDS_SPEEDGOAT_B.get_LatCtrlMode_la = ManualStatus;
    AION_IDS_SPEEDGOAT_B.get_LngCtrlMode_k = ManualStatus;
    AION_IDS_SPEEDGOAT_B.get_LngCtrlMode_m = ManualStatus;
    AION_IDS_SPEEDGOAT_B.get_LatCtrlMode_m = ManualStatus;
    AION_IDS_SPEEDGOAT_B.set_LatCtrlReq = Manual;
    AION_IDS_SPEEDGOAT_B.set_LngCtrlReq = Manual;
    AION_IDS_SPEEDGOAT_B.DataTypeConversion7 = Manual;
    AION_IDS_SPEEDGOAT_B.DataTypeConversion9 = Manual;
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport1 = Manual;
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport5 = Manual;
    AION_IDS_SPEEDGOAT_B.set_LatCtrlReq_n = Manual;
    AION_IDS_SPEEDGOAT_B.set_LngCtrlReq_p = Manual;
    AION_IDS_SPEEDGOAT_B.set_BeamReq = NoBeamRequest;
    AION_IDS_SPEEDGOAT_B.DataTypeConversion18 = NoBeamRequest;
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport16 = NoBeamRequest;
    AION_IDS_SPEEDGOAT_B.set_BeamReq_j = NoBeamRequest;
    AION_IDS_SPEEDGOAT_B.get_CtrlAvailable = NotAvailable;
    AION_IDS_SPEEDGOAT_B.get_CtrlAvailable_j = NotAvailable;
    AION_IDS_SPEEDGOAT_B.get_CtrlAvailable_c = NotAvailable;
    AION_IDS_SPEEDGOAT_B.get_CtrlAvailable_a = NotAvailable;
    AION_IDS_SPEEDGOAT_B.get_HazardLampSt = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_HighBeamSt = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_HornSt = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_LowBeamSt = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_LowBeamSt_i = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_HighBeamSt_d = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt_g = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt_l = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_HazardLampSt_g = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_HornSt_f = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_HazardLampSt_l = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_HighBeamSt_h = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_HornSt_h = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt_c = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_LowBeamSt_n = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt_ld = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_HornSt_o = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_HazardLampSt_n = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt_i = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt_l = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_HighBeamSt_a = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.get_LowBeamSt_nw = NotActiveStatus;
    AION_IDS_SPEEDGOAT_B.set_HornRingReq = NotActiveRequest;
    AION_IDS_SPEEDGOAT_B.DataTypeConversion16 = NotActiveRequest;
    AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport18 =
      NotActiveRequest;
    AION_IDS_SPEEDGOAT_B.set_HornRingReq_g = NotActiveRequest;
  }

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(&AION_IDS_SPEEDGOAT_DW), 0,
                     sizeof(DW_AION_IDS_SPEEDGOAT_T));
  AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.BrakeReq_test_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.BrakeReq_test_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.BrakeReq_test_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_141_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_141_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_141_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_145_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_145_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_145_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_24_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_24_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_24_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_34_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_34_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_34_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_35_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_35_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_35_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_4_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_4_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_4_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_44_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_44_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_44_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_45_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_45_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_45_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_52_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_52_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_52_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_56_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_56_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_56_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_60_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_60_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_60_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_64_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_64_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_64_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_66_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_66_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_66_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_68_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_68_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_68_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_70_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_70_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_70_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_71_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_71_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_71_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_80_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_80_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_80_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_87_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_87_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_87_Buf2 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_92_Buf0 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_92_Buf1 = 0.0;
  AION_IDS_SPEEDGOAT_DW.RT1_92_Buf2 = 0.0;

  /* child S-Function registration */
  {
    RTWSfcnInfo *sfcnInfo = &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.sfcnInfo;
    AION_IDS_SPEEDGOAT_M->sfcnInfo = (sfcnInfo);
    rtssSetErrorStatusPtr(sfcnInfo, (&rtmGetErrorStatus(AION_IDS_SPEEDGOAT_M)));
    rtssSetNumRootSampTimesPtr(sfcnInfo,
      &AION_IDS_SPEEDGOAT_M->Sizes.numSampTimes);
    AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.taskTimePtrs[0] = &(rtmGetTPtr
      (AION_IDS_SPEEDGOAT_M)[0]);
    AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.taskTimePtrs[1] = &(rtmGetTPtr
      (AION_IDS_SPEEDGOAT_M)[1]);
    AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.taskTimePtrs[2] = &(rtmGetTPtr
      (AION_IDS_SPEEDGOAT_M)[2]);
    AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.taskTimePtrs[3] = &(rtmGetTPtr
      (AION_IDS_SPEEDGOAT_M)[3]);
    rtssSetTPtrPtr(sfcnInfo,AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.taskTimePtrs);
    rtssSetTStartPtr(sfcnInfo, &rtmGetTStart(AION_IDS_SPEEDGOAT_M));
    rtssSetTFinalPtr(sfcnInfo, &rtmGetTFinal(AION_IDS_SPEEDGOAT_M));
    rtssSetTimeOfLastOutputPtr(sfcnInfo, &rtmGetTimeOfLastOutput
      (AION_IDS_SPEEDGOAT_M));
    rtssSetStepSizePtr(sfcnInfo, &AION_IDS_SPEEDGOAT_M->Timing.stepSize);
    rtssSetStopRequestedPtr(sfcnInfo, &rtmGetStopRequested(AION_IDS_SPEEDGOAT_M));
    rtssSetDerivCacheNeedsResetPtr(sfcnInfo,
      &AION_IDS_SPEEDGOAT_M->derivCacheNeedsReset);
    rtssSetZCCacheNeedsResetPtr(sfcnInfo,
      &AION_IDS_SPEEDGOAT_M->zCCacheNeedsReset);
    rtssSetContTimeOutputInconsistentWithStateAtMajorStepPtr(sfcnInfo,
      &AION_IDS_SPEEDGOAT_M->CTOutputIncnstWithState);
    rtssSetSampleHitsPtr(sfcnInfo, &AION_IDS_SPEEDGOAT_M->Timing.sampleHits);
    rtssSetPerTaskSampleHitsPtr(sfcnInfo,
      &AION_IDS_SPEEDGOAT_M->Timing.perTaskSampleHits);
    rtssSetSimModePtr(sfcnInfo, &AION_IDS_SPEEDGOAT_M->simMode);
    rtssSetSolverInfoPtr(sfcnInfo, &AION_IDS_SPEEDGOAT_M->solverInfoPtr);
  }

  AION_IDS_SPEEDGOAT_M->Sizes.numSFcns = (5);

  /* register each child */
  {
    (void) std::memset(static_cast<void *>
                       (&AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.childSFunctions[0]),
                       0,
                       5*sizeof(SimStruct));
    AION_IDS_SPEEDGOAT_M->childSfunctions =
      (&AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.childSFunctionPtrs[0]);

    {
      int_T i;
      for (i = 0; i < 5; i++) {
        AION_IDS_SPEEDGOAT_M->childSfunctions[i] =
          (&AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.childSFunctions[i]);
      }
    }

    /* Level2 S-Function Block: AION_IDS_SPEEDGOAT/<S25>/SCU2ADCU_CAN_read (sg_IO61X_read_s) */
    {
      SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[0];

      /* timing info */
      time_T *sfcnPeriod =
        AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn0.sfcnPeriod;
      time_T *sfcnOffset =
        AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn0.sfcnOffset;
      int_T *sfcnTsMap = AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn0.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.blkInfo2[0]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.inputOutputPortInfo2[0]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AION_IDS_SPEEDGOAT_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.methods2
                           [0]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.methods3
                           [0]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.methods4
                           [0]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &AION_IDS_SPEEDGOAT_M->
                         NonInlinedSFcns.statesInfo2[0]);
        ssSetPeriodicStatesInfo(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.periodicStatesInfo[0]);
      }

      /* outputs */
      {
        ssSetPortInfoForOutputs(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn0.outputPortInfo[0]);
        _ssSetNumOutputPorts(rts, 2);
        _ssSetPortInfo2ForOutputUnits(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn0.outputPortUnits[0]);
        ssSetOutputPortUnit(rts, 0, 0);
        ssSetOutputPortUnit(rts, 1, 0);
        _ssSetPortInfo2ForOutputCoSimAttribute(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn0.outputPortCoSimAttribute
          [0]);
        ssSetOutputPortIsContinuousQuantity(rts, 0, 0);
        ssSetOutputPortIsContinuousQuantity(rts, 1, 0);

        /* port 0 */
        {
          _ssSetOutputPortNumDimensions(rts, 0, 1);
          ssSetOutputPortWidth(rts, 0, 1);
          ssSetOutputPortSignal(rts, 0, ((boolean_T *)
            &AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o1));
        }

        /* port 1 */
        {
          _ssSetOutputPortNumDimensions(rts, 1, 1);
          ssSetOutputPortWidth(rts, 1, 1);
          ssSetOutputPortSignal(rts, 1, ((CAN_DATATYPE *)
            &AION_IDS_SPEEDGOAT_B.SCU2ADCU_CAN_read_o2));
        }
      }

      /* path info */
      ssSetModelName(rts, "SCU2ADCU_CAN_read");
      ssSetPath(rts,
                "AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_InputPort/InputCAN/SCU2ADCU(IDS)_loop_receive/SCU2ADCU_CAN_read");
      ssSetRTModel(rts,AION_IDS_SPEEDGOAT_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn0.params;
        ssSetSFcnParamsCount(rts, 6);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->SCU2ADCU_CAN_read_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->SCU2ADCU_CAN_read_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->SCU2ADCU_CAN_read_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->SCU2ADCU_CAN_read_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->SCU2ADCU_CAN_read_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->SCU2ADCU_CAN_read_P6_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &AION_IDS_SPEEDGOAT_DW.SCU2ADCU_CAN_read_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn0.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn0.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &AION_IDS_SPEEDGOAT_DW.SCU2ADCU_CAN_read_IWORK);
      }

      /* registration */
      sg_IO61X_read_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.02);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetOutputPortConnected(rts, 0, 1);
      _ssSetOutputPortConnected(rts, 1, 1);
      _ssSetOutputPortBeingMerged(rts, 0, 0);
      _ssSetOutputPortBeingMerged(rts, 1, 0);

      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: AION_IDS_SPEEDGOAT/<S2>/CAN Setup (sg_IO612_setup_s) */
    {
      SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[1];

      /* timing info */
      time_T *sfcnPeriod =
        AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn1.sfcnPeriod;
      time_T *sfcnOffset =
        AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn1.sfcnOffset;
      int_T *sfcnTsMap = AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn1.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.blkInfo2[1]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.inputOutputPortInfo2[1]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AION_IDS_SPEEDGOAT_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.methods2
                           [1]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.methods3
                           [1]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.methods4
                           [1]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &AION_IDS_SPEEDGOAT_M->
                         NonInlinedSFcns.statesInfo2[1]);
        ssSetPeriodicStatesInfo(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.periodicStatesInfo[1]);
      }

      /* path info */
      ssSetModelName(rts, "CAN Setup");
      ssSetPath(rts, "AION_IDS_SPEEDGOAT/Communication_Layer/CAN Setup");
      ssSetRTModel(rts,AION_IDS_SPEEDGOAT_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn1.params;
        ssSetSFcnParamsCount(rts, 31);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P7_Size);
        ssSetSFcnParam(rts, 7, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P8_Size);
        ssSetSFcnParam(rts, 8, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P9_Size);
        ssSetSFcnParam(rts, 9, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P10_Size);
        ssSetSFcnParam(rts, 10, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P11_Size);
        ssSetSFcnParam(rts, 11, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P12_Size);
        ssSetSFcnParam(rts, 12, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P13_Size);
        ssSetSFcnParam(rts, 13, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P14_Size);
        ssSetSFcnParam(rts, 14, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P15_Size);
        ssSetSFcnParam(rts, 15, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P16_Size);
        ssSetSFcnParam(rts, 16, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P17_Size);
        ssSetSFcnParam(rts, 17, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P18_Size);
        ssSetSFcnParam(rts, 18, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P19_Size);
        ssSetSFcnParam(rts, 19, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P20_Size);
        ssSetSFcnParam(rts, 20, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P21_Size);
        ssSetSFcnParam(rts, 21, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P22_Size);
        ssSetSFcnParam(rts, 22, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P23_Size);
        ssSetSFcnParam(rts, 23, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P24_Size);
        ssSetSFcnParam(rts, 24, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P25_Size);
        ssSetSFcnParam(rts, 25, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P26_Size);
        ssSetSFcnParam(rts, 26, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P27_Size);
        ssSetSFcnParam(rts, 27, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P28_Size);
        ssSetSFcnParam(rts, 28, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P29_Size);
        ssSetSFcnParam(rts, 29, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P30_Size);
        ssSetSFcnParam(rts, 30, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->CANSetup_P31_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *) &AION_IDS_SPEEDGOAT_DW.CANSetup_IWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn1.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn1.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 1);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0, &AION_IDS_SPEEDGOAT_DW.CANSetup_IWORK);
      }

      /* registration */
      sg_IO612_setup_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.02);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      /* Update the BufferDstPort flags for each input port */
    }

    /* Level2 S-Function Block: AION_IDS_SPEEDGOAT/<S28>/ADCU2SCU_Brake_Command_CAN_write (sg_IO61X_write_s) */
    {
      SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[2];

      /* timing info */
      time_T *sfcnPeriod =
        AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn2.sfcnPeriod;
      time_T *sfcnOffset =
        AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn2.sfcnOffset;
      int_T *sfcnTsMap = AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn2.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.blkInfo2[2]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.inputOutputPortInfo2[2]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AION_IDS_SPEEDGOAT_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.methods2
                           [2]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.methods3
                           [2]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.methods4
                           [2]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &AION_IDS_SPEEDGOAT_M->
                         NonInlinedSFcns.statesInfo2[2]);
        ssSetPeriodicStatesInfo(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.periodicStatesInfo[2]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn2.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn2.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn2.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &AION_IDS_SPEEDGOAT_B.RT_f);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "ADCU2SCU_Brake_Command_CAN_write");
      ssSetPath(rts,
                "AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_OutputPort/OutputCAN/CAN_pack_ADCU2SCU/ADCU2SCU_Brake_Command_CAN_write");
      ssSetRTModel(rts,AION_IDS_SPEEDGOAT_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn2.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Brake_Command_CAN_write_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Brake_Command_CAN_write_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Brake_Command_CAN_write_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Brake_Command_CAN_write_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Brake_Command_CAN_write_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Brake_Command_CAN_write_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Brake_Command_CAN_write_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AION_IDS_SPEEDGOAT_DW.ADCU2SCU_Brake_Command_CAN_write_IWORK);
      ssSetPWork(rts, (void **)
                 &AION_IDS_SPEEDGOAT_DW.ADCU2SCU_Brake_Command_CAN_write_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn2.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn2.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AION_IDS_SPEEDGOAT_DW.ADCU2SCU_Brake_Command_CAN_write_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &AION_IDS_SPEEDGOAT_DW.ADCU2SCU_Brake_Command_CAN_write_PWORK);
      }

      /* registration */
      sg_IO61X_write_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.02);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: AION_IDS_SPEEDGOAT/<S28>/ADCU2SCU_Gear_Command_CAN_write (sg_IO61X_write_s) */
    {
      SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[3];

      /* timing info */
      time_T *sfcnPeriod =
        AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn3.sfcnPeriod;
      time_T *sfcnOffset =
        AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn3.sfcnOffset;
      int_T *sfcnTsMap = AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn3.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.blkInfo2[3]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.inputOutputPortInfo2[3]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AION_IDS_SPEEDGOAT_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.methods2
                           [3]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.methods3
                           [3]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.methods4
                           [3]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &AION_IDS_SPEEDGOAT_M->
                         NonInlinedSFcns.statesInfo2[3]);
        ssSetPeriodicStatesInfo(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.periodicStatesInfo[3]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn3.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn3.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn3.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &AION_IDS_SPEEDGOAT_B.RT1);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "ADCU2SCU_Gear_Command_CAN_write");
      ssSetPath(rts,
                "AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_OutputPort/OutputCAN/CAN_pack_ADCU2SCU/ADCU2SCU_Gear_Command_CAN_write");
      ssSetRTModel(rts,AION_IDS_SPEEDGOAT_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn3.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Gear_Command_CAN_write_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Gear_Command_CAN_write_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Gear_Command_CAN_write_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Gear_Command_CAN_write_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Gear_Command_CAN_write_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Gear_Command_CAN_write_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Gear_Command_CAN_write_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AION_IDS_SPEEDGOAT_DW.ADCU2SCU_Gear_Command_CAN_write_IWORK);
      ssSetPWork(rts, (void **)
                 &AION_IDS_SPEEDGOAT_DW.ADCU2SCU_Gear_Command_CAN_write_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn3.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn3.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AION_IDS_SPEEDGOAT_DW.ADCU2SCU_Gear_Command_CAN_write_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &AION_IDS_SPEEDGOAT_DW.ADCU2SCU_Gear_Command_CAN_write_PWORK);
      }

      /* registration */
      sg_IO61X_write_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.02);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 1;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }

    /* Level2 S-Function Block: AION_IDS_SPEEDGOAT/<S28>/ADCU2SCU_Steer_Command_CAN_write (sg_IO61X_write_s) */
    {
      SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[4];

      /* timing info */
      time_T *sfcnPeriod =
        AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn4.sfcnPeriod;
      time_T *sfcnOffset =
        AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn4.sfcnOffset;
      int_T *sfcnTsMap = AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn4.sfcnTsMap;
      (void) std::memset(static_cast<void*>(sfcnPeriod), 0,
                         sizeof(time_T)*1);
      (void) std::memset(static_cast<void*>(sfcnOffset), 0,
                         sizeof(time_T)*1);
      ssSetSampleTimePtr(rts, &sfcnPeriod[0]);
      ssSetOffsetTimePtr(rts, &sfcnOffset[0]);
      ssSetSampleTimeTaskIDPtr(rts, sfcnTsMap);

      {
        ssSetBlkInfo2Ptr(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.blkInfo2[4]);
      }

      _ssSetBlkInfo2PortInfo2Ptr(rts,
        &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.inputOutputPortInfo2[4]);

      /* Set up the mdlInfo pointer */
      ssSetRTWSfcnInfo(rts, AION_IDS_SPEEDGOAT_M->sfcnInfo);

      /* Allocate memory of model methods 2 */
      {
        ssSetModelMethods2(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.methods2
                           [4]);
      }

      /* Allocate memory of model methods 3 */
      {
        ssSetModelMethods3(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.methods3
                           [4]);
      }

      /* Allocate memory of model methods 4 */
      {
        ssSetModelMethods4(rts, &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.methods4
                           [4]);
      }

      /* Allocate memory for states auxilliary information */
      {
        ssSetStatesInfo2(rts, &AION_IDS_SPEEDGOAT_M->
                         NonInlinedSFcns.statesInfo2[4]);
        ssSetPeriodicStatesInfo(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.periodicStatesInfo[4]);
      }

      /* inputs */
      {
        _ssSetNumInputPorts(rts, 1);
        ssSetPortInfoForInputs(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn4.inputPortInfo[0]);
        _ssSetPortInfo2ForInputUnits(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn4.inputPortUnits[0]);
        ssSetInputPortUnit(rts, 0, 0);
        _ssSetPortInfo2ForInputCoSimAttribute(rts,
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn4.inputPortCoSimAttribute[0]);
        ssSetInputPortIsContinuousQuantity(rts, 0, 0);

        /* port 0 */
        {
          ssSetInputPortRequiredContiguous(rts, 0, 1);
          ssSetInputPortSignal(rts, 0, &AION_IDS_SPEEDGOAT_B.RT2);
          _ssSetInputPortNumDimensions(rts, 0, 1);
          ssSetInputPortWidth(rts, 0, 1);
        }
      }

      /* path info */
      ssSetModelName(rts, "ADCU2SCU_Steer_Command_CAN_write");
      ssSetPath(rts,
                "AION_IDS_SPEEDGOAT/Communication_Layer/ADCU(IDS)_OutputPort/OutputCAN/CAN_pack_ADCU2SCU/ADCU2SCU_Steer_Command_CAN_write");
      ssSetRTModel(rts,AION_IDS_SPEEDGOAT_M);
      ssSetParentSS(rts, (NULL));
      ssSetRootSS(rts, rts);
      ssSetVersion(rts, SIMSTRUCT_VERSION_LEVEL2);

      /* parameters */
      {
        mxArray **sfcnParams = (mxArray **)
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn4.params;
        ssSetSFcnParamsCount(rts, 7);
        ssSetSFcnParamsPtr(rts, &sfcnParams[0]);
        ssSetSFcnParam(rts, 0, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Steer_Command_CAN_write_P1_Size);
        ssSetSFcnParam(rts, 1, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Steer_Command_CAN_write_P2_Size);
        ssSetSFcnParam(rts, 2, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Steer_Command_CAN_write_P3_Size);
        ssSetSFcnParam(rts, 3, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Steer_Command_CAN_write_P4_Size);
        ssSetSFcnParam(rts, 4, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Steer_Command_CAN_write_P5_Size);
        ssSetSFcnParam(rts, 5, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Steer_Command_CAN_write_P6_Size);
        ssSetSFcnParam(rts, 6, (mxArray*)
                       AION_IDS_SPEEDGOAT_cal->ADCU2SCU_Steer_Command_CAN_write_P7_Size);
      }

      /* work vectors */
      ssSetIWork(rts, (int_T *)
                 &AION_IDS_SPEEDGOAT_DW.ADCU2SCU_Steer_Command_CAN_write_IWORK);
      ssSetPWork(rts, (void **)
                 &AION_IDS_SPEEDGOAT_DW.ADCU2SCU_Steer_Command_CAN_write_PWORK);

      {
        struct _ssDWorkRecord *dWorkRecord = (struct _ssDWorkRecord *)
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn4.dWork;
        struct _ssDWorkAuxRecord *dWorkAuxRecord = (struct _ssDWorkAuxRecord *)
          &AION_IDS_SPEEDGOAT_M->NonInlinedSFcns.Sfcn4.dWorkAux;
        ssSetSFcnDWork(rts, dWorkRecord);
        ssSetSFcnDWorkAux(rts, dWorkAuxRecord);
        _ssSetNumDWork(rts, 2);

        /* IWORK */
        ssSetDWorkWidth(rts, 0, 1);
        ssSetDWorkDataType(rts, 0,SS_INTEGER);
        ssSetDWorkComplexSignal(rts, 0, 0);
        ssSetDWork(rts, 0,
                   &AION_IDS_SPEEDGOAT_DW.ADCU2SCU_Steer_Command_CAN_write_IWORK);

        /* PWORK */
        ssSetDWorkWidth(rts, 1, 1);
        ssSetDWorkDataType(rts, 1,SS_POINTER);
        ssSetDWorkComplexSignal(rts, 1, 0);
        ssSetDWork(rts, 1,
                   &AION_IDS_SPEEDGOAT_DW.ADCU2SCU_Steer_Command_CAN_write_PWORK);
      }

      /* registration */
      sg_IO61X_write_s(rts);
      sfcnInitializeSizes(rts);
      sfcnInitializeSampleTimes(rts);

      /* adjust sample time */
      ssSetSampleTime(rts, 0, 0.05);
      ssSetOffsetTime(rts, 0, 0.0);
      sfcnTsMap[0] = 2;

      /* set compiled values of dynamic vector attributes */
      ssSetNumNonsampledZCs(rts, 0);

      /* Update connectivity flags for each port */
      _ssSetInputPortConnected(rts, 0, 1);

      /* Update the BufferDstPort flags for each input port */
      ssSetInputPortBufferDstPort(rts, 0, -1);
    }
  }

  /* Model Initialize function for ModelReference Block: '<S1>/AION_auto_mode_request' */
  AION_auto_mode_request_initialize(rtmGetErrorStatusPointer
    (AION_IDS_SPEEDGOAT_M),
    &(AION_IDS_SPEEDGOAT_DW.AION_auto_mode_request_InstanceData.rtm),
    &(AION_IDS_SPEEDGOAT_DW.AION_auto_mode_request_InstanceData.rtb),
    &(AION_IDS_SPEEDGOAT_DW.AION_auto_mode_request_InstanceData.rtdw));

  /* Model Initialize function for ModelReference Block: '<S2>/Signal_Transfer' */
  AION_signal_transfer_initialize(rtmGetErrorStatusPointer(AION_IDS_SPEEDGOAT_M),
    &(AION_IDS_SPEEDGOAT_DW.Signal_Transfer_InstanceData.rtm),
    &(AION_IDS_SPEEDGOAT_DW.Signal_Transfer_InstanceData.rtb));

  /* Start for S-Function (sg_IO612_setup_s): '<S2>/CAN Setup' */
  /* Level2 S-Function Block: '<S2>/CAN Setup' (sg_IO612_setup_s) */
  {
    SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[1];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for Iterator SubSystem: '<S24>/SCU2ADCU(IDS)_loop_receive' */

  /* Start for S-Function (sg_IO61X_read_s): '<S25>/SCU2ADCU_CAN_read' */
  /* Level2 S-Function Block: '<S25>/SCU2ADCU_CAN_read' (sg_IO61X_read_s) */
  {
    SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[0];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack' */

  /*-----------S-Function Block: <S26>/SCU2ADCU_Brake_Status_CAN_unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack1' */

  /*-----------S-Function Block: <S26>/SCU2ADCU_Brake_Status_CAN_unpack1 -----------------*/

  /* Start for S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack10' */

  /*-----------S-Function Block: <S26>/SCU2ADCU_Brake_Status_CAN_unpack10 -----------------*/

  /* Start for S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack11' */

  /*-----------S-Function Block: <S26>/SCU2ADCU_Brake_Status_CAN_unpack11 -----------------*/

  /* Start for S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack12' */

  /*-----------S-Function Block: <S26>/SCU2ADCU_Brake_Status_CAN_unpack12 -----------------*/

  /* Start for S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack13' */

  /*-----------S-Function Block: <S26>/SCU2ADCU_Brake_Status_CAN_unpack13 -----------------*/

  /* Start for S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack14' */

  /*-----------S-Function Block: <S26>/SCU2ADCU_Brake_Status_CAN_unpack14 -----------------*/

  /* Start for S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack15' */

  /*-----------S-Function Block: <S26>/SCU2ADCU_Brake_Status_CAN_unpack15 -----------------*/

  /* Start for S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack2' */

  /*-----------S-Function Block: <S26>/SCU2ADCU_Brake_Status_CAN_unpack2 -----------------*/

  /* Start for S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack3' */

  /*-----------S-Function Block: <S26>/SCU2ADCU_Brake_Status_CAN_unpack3 -----------------*/

  /* Start for S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack4' */

  /*-----------S-Function Block: <S26>/SCU2ADCU_Brake_Status_CAN_unpack4 -----------------*/

  /* Start for S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack5' */

  /*-----------S-Function Block: <S26>/SCU2ADCU_Brake_Status_CAN_unpack5 -----------------*/

  /* Start for S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack6' */

  /*-----------S-Function Block: <S26>/SCU2ADCU_Brake_Status_CAN_unpack6 -----------------*/

  /* Start for S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack7' */

  /*-----------S-Function Block: <S26>/SCU2ADCU_Brake_Status_CAN_unpack7 -----------------*/

  /* Start for S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack8' */

  /*-----------S-Function Block: <S26>/SCU2ADCU_Brake_Status_CAN_unpack8 -----------------*/

  /* Start for S-Function (scanunpack): '<S26>/SCU2ADCU_Brake_Status_CAN_unpack9' */

  /*-----------S-Function Block: <S26>/SCU2ADCU_Brake_Status_CAN_unpack9 -----------------*/

  /* Start for S-Function (scanunpack): '<S26>/SCU2ADCU_Status1_CAN_unpack' */

  /*-----------S-Function Block: <S26>/SCU2ADCU_Status1_CAN_unpack -----------------*/

  /* Start for S-Function (scanunpack): '<S26>/SCU2ADCU_Status1_CAN_unpack1' */

  /*-----------S-Function Block: <S26>/SCU2ADCU_Status1_CAN_unpack1 -----------------*/

  /* End of Start for SubSystem: '<S24>/SCU2ADCU(IDS)_loop_receive' */

  /* Start for S-Function (sg_IO61X_write_s): '<S28>/ADCU2SCU_Brake_Command_CAN_write' */
  /* Level2 S-Function Block: '<S28>/ADCU2SCU_Brake_Command_CAN_write' (sg_IO61X_write_s) */
  {
    SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[2];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for S-Function (sg_IO61X_write_s): '<S28>/ADCU2SCU_Gear_Command_CAN_write' */
  /* Level2 S-Function Block: '<S28>/ADCU2SCU_Gear_Command_CAN_write' (sg_IO61X_write_s) */
  {
    SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[3];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* Start for RateTransition: '<S28>/RT2' */
  AION_IDS_SPEEDGOAT_B.RT2 = AION_IDS_SPEEDGOAT_cal->RT2_InitialCondition;

  /* Start for RateTransition: '<S28>/RT2' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT2_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_B.AutoTrqWhlReq_test_p =
    AION_IDS_SPEEDGOAT_cal->AutoTrqWhlReq_test_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_init
    (&AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_B.BrakeReq_test_e =
    AION_IDS_SPEEDGOAT_cal->BrakeReq_test_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.BrakeReq_test_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport1 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport1_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_init
    (&AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport16 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport16_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_init
    (&AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport17 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport17_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_init
    (&AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport18 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport18_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_init
    (&AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport18_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport19 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport19_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_init
    (&AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport19_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport2 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport2_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_init
    (&AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport3 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport3_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_init
    (&AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport5 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport5_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_init
    (&AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport5_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport8 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport8_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_init
    (&AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport8_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_B.TmpRTBAtAION_auto_mode_requestInport9 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport9_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_init
    (&AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport9_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.set_Checksum1_n =
    AION_IDS_SPEEDGOAT_cal->RT1_10_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_10_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_Checksum12_h =
    AION_IDS_SPEEDGOAT_cal->RT1_100_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_100_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_MsgCounter12_c =
    AION_IDS_SPEEDGOAT_cal->RT1_101_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_101_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_Checksum13_e =
    AION_IDS_SPEEDGOAT_cal->RT1_102_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_102_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_MsgCounter13_i =
    AION_IDS_SPEEDGOAT_cal->RT1_103_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_103_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_LatAutoCheckReport_d =
    AION_IDS_SPEEDGOAT_cal->RT1_106_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_106_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_LatCtrlMode_l =
    AION_IDS_SPEEDGOAT_cal->RT1_107_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_107_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_LatQuitReport_d =
    AION_IDS_SPEEDGOAT_cal->RT1_108_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_108_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_LngAutoCheckIReport_e =
    AION_IDS_SPEEDGOAT_cal->RT1_109_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_109_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.set_MsgCounter1_a =
    AION_IDS_SPEEDGOAT_cal->RT1_11_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_11_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_LngCtrlMode_i =
    AION_IDS_SPEEDGOAT_cal->RT1_110_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_110_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_LngQuitReport_o =
    AION_IDS_SPEEDGOAT_cal->RT1_111_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_111_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_Checksum16_p =
    AION_IDS_SPEEDGOAT_cal->RT1_113_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_113_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_MsgCounter16_h =
    AION_IDS_SPEEDGOAT_cal->RT1_114_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_114_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_Checksum17_g =
    AION_IDS_SPEEDGOAT_cal->RT1_115_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_115_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_MsgCounter17_f =
    AION_IDS_SPEEDGOAT_cal->RT1_116_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_116_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_Checksum18_n =
    AION_IDS_SPEEDGOAT_cal->RT1_117_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_117_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_MsgCounter18_p =
    AION_IDS_SPEEDGOAT_cal->RT1_118_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_118_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_Checksum2_i =
    AION_IDS_SPEEDGOAT_cal->RT1_119_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_119_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.set_Checksum2_o =
    AION_IDS_SPEEDGOAT_cal->RT1_12_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_12_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_MsgCounter2_h =
    AION_IDS_SPEEDGOAT_cal->RT1_120_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_120_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_Checksum3_n =
    AION_IDS_SPEEDGOAT_cal->RT1_121_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_121_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_MsgCounter3_p =
    AION_IDS_SPEEDGOAT_cal->RT1_122_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_122_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_Checksum4_n =
    AION_IDS_SPEEDGOAT_cal->RT1_123_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_123_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_MsgCounter4_b =
    AION_IDS_SPEEDGOAT_cal->RT1_124_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_124_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_Checksum5_g =
    AION_IDS_SPEEDGOAT_cal->RT1_125_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_125_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_MsgCounter5_o =
    AION_IDS_SPEEDGOAT_cal->RT1_126_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_126_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_Checksum6_p =
    AION_IDS_SPEEDGOAT_cal->RT1_127_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_127_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_MsgCounter6_l =
    AION_IDS_SPEEDGOAT_cal->RT1_128_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_128_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_Checksum7_b =
    AION_IDS_SPEEDGOAT_cal->RT1_129_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_129_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.set_MsgCounter2_g =
    AION_IDS_SPEEDGOAT_cal->RT1_13_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_13_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_MsgCounter7_i =
    AION_IDS_SPEEDGOAT_cal->RT1_130_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_130_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_Checksum8_k =
    AION_IDS_SPEEDGOAT_cal->RT1_131_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_131_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_MsgCounter8_p =
    AION_IDS_SPEEDGOAT_cal->RT1_132_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_132_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_Checksum9_f =
    AION_IDS_SPEEDGOAT_cal->RT1_133_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_133_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_MsgCounter9_g =
    AION_IDS_SPEEDGOAT_cal->RT1_134_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_134_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_FailSt_e =
    AION_IDS_SPEEDGOAT_cal->RT1_135_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_135_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.set_Checksum3_j =
    AION_IDS_SPEEDGOAT_cal->RT1_14_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_14_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_SteeringAngle_m =
    AION_IDS_SPEEDGOAT_cal->RT1_141_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_141_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_SteeringAngleSpd_j =
    AION_IDS_SPEEDGOAT_cal->RT1_142_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_142_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_StrngWhlTorq_e =
    AION_IDS_SPEEDGOAT_cal->RT1_145_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_145_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_CtrlAvailable_j =
    AION_IDS_SPEEDGOAT_cal->RT1_149_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_149_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.set_MsgCounter3_k =
    AION_IDS_SPEEDGOAT_cal->RT1_15_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_15_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_HazardLampSt_g =
    AION_IDS_SPEEDGOAT_cal->RT1_153_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_153_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_HighBeamSt_d =
    AION_IDS_SPEEDGOAT_cal->RT1_154_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_154_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_HornSt_f =
    AION_IDS_SPEEDGOAT_cal->RT1_155_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_155_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_LeftTurnLampFaultSt_o =
    AION_IDS_SPEEDGOAT_cal->RT1_157_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_157_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_LeftTurnLampSt_g =
    AION_IDS_SPEEDGOAT_cal->RT1_158_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_158_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_LowBeamSt_i =
    AION_IDS_SPEEDGOAT_cal->RT1_159_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_159_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_RightTurnLampFaultSt_m =
    AION_IDS_SPEEDGOAT_cal->RT1_164_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_164_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_RightTurnLampSt_l =
    AION_IDS_SPEEDGOAT_cal->RT1_165_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_165_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_VehSpd_a =
    AION_IDS_SPEEDGOAT_cal->RT1_24_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_24_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_FLWheelSpdEdgesSum_h =
    AION_IDS_SPEEDGOAT_cal->RT1_26_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_26_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_FRWheelSpdEdgesSum_e =
    AION_IDS_SPEEDGOAT_cal->RT1_28_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_28_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_RLWheelSpdEdgesSum_h =
    AION_IDS_SPEEDGOAT_cal->RT1_30_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_30_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_RRWheelSpdEdgesSum_n =
    AION_IDS_SPEEDGOAT_cal->RT1_32_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_32_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_YawRate_o =
    AION_IDS_SPEEDGOAT_cal->RT1_34_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_34_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_YawRateOffset_i =
    AION_IDS_SPEEDGOAT_cal->RT1_35_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_35_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.set_SteerAngSpdLimt_c =
    AION_IDS_SPEEDGOAT_cal->RT1_4_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_4_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_MasterCylinderPr_g =
    AION_IDS_SPEEDGOAT_cal->RT1_44_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_44_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_MasterCylinderPrOffset_k =
    AION_IDS_SPEEDGOAT_cal->RT1_45_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_45_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_FLWheelSpd_p =
    AION_IDS_SPEEDGOAT_cal->RT1_52_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_52_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_FRWheelSpd_m =
    AION_IDS_SPEEDGOAT_cal->RT1_56_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_56_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_RLWheelSpd_j =
    AION_IDS_SPEEDGOAT_cal->RT1_60_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_60_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_RRWheelSpd_o =
    AION_IDS_SPEEDGOAT_cal->RT1_64_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_64_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_ActVehLaltrlAccel_f =
    AION_IDS_SPEEDGOAT_cal->RT1_66_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_66_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_ActVehLongAccel_a =
    AION_IDS_SPEEDGOAT_cal->RT1_68_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_68_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_VehLaltrlAccelOffset_a =
    AION_IDS_SPEEDGOAT_cal->RT1_70_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_70_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_VehLongAccelOffset_l =
    AION_IDS_SPEEDGOAT_cal->RT1_71_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_71_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_VehDrvMod_a =
    AION_IDS_SPEEDGOAT_cal->RT1_73_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_73_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_VehRdySt_c =
    AION_IDS_SPEEDGOAT_cal->RT1_74_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_74_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_VehRng_j =
    AION_IDS_SPEEDGOAT_cal->RT1_75_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_75_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_ActRecpTorq_j =
    AION_IDS_SPEEDGOAT_cal->RT1_76_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_76_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_CrntGearLvl_g =
    AION_IDS_SPEEDGOAT_cal->RT1_78_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_78_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_ACCMaxRecpDecel_p =
    AION_IDS_SPEEDGOAT_cal->RT1_80_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_80_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_ActVehWheelTorq_d =
    AION_IDS_SPEEDGOAT_cal->RT1_82_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_82_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_ACCButtInfo_i =
    AION_IDS_SPEEDGOAT_cal->RT1_85_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_85_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_GasPedalActPst_f =
    AION_IDS_SPEEDGOAT_cal->RT1_87_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_87_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_VehWheelTorqMax_d =
    AION_IDS_SPEEDGOAT_cal->RT1_89_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_89_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_GasPedalVirtualPst_f =
    AION_IDS_SPEEDGOAT_cal->RT1_92_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_92_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_Checksum1_j =
    AION_IDS_SPEEDGOAT_cal->RT1_94_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_94_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_MsgCounter1_f =
    AION_IDS_SPEEDGOAT_cal->RT1_95_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_95_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_Checksum10_n =
    AION_IDS_SPEEDGOAT_cal->RT1_96_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_96_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_MsgCounter10_o =
    AION_IDS_SPEEDGOAT_cal->RT1_97_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_97_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_Checksum11_p =
    AION_IDS_SPEEDGOAT_cal->RT1_98_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_98_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_B.get_MsgCounter11_f =
    AION_IDS_SPEEDGOAT_cal->RT1_99_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_init(&AION_IDS_SPEEDGOAT_DW.RT1_99_d0_SEMAPHORE);

  /* Start for RateTransition generated from: '<S1>/Unit Delay' */
  AION_IDS_SPEEDGOAT_B.TmpRTBAtUnitDelayInport1 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtUnitDelayInport1_InitialCondition;

  /* Start for RateTransition generated from: '<S1>/Unit Delay' */
  rtw_slrealtime_mutex_init
    (&AION_IDS_SPEEDGOAT_DW.TmpRTBAtUnitDelayInport1_d0_SEMAPHORE);

  /* Start for S-Function (sg_IO61X_write_s): '<S28>/ADCU2SCU_Steer_Command_CAN_write' */
  /* Level2 S-Function Block: '<S28>/ADCU2SCU_Steer_Command_CAN_write' (sg_IO61X_write_s) */
  {
    SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[4];
    sfcnStart(rts);
    if (ssGetErrorStatus(rts) != (NULL))
      return;
  }

  /* InitializeConditions for UnitDelay: '<S1>/Unit Delay' */
  AION_IDS_SPEEDGOAT_DW.UnitDelay_DSTATE =
    AION_IDS_SPEEDGOAT_cal->UnitDelay_InitialCondition;

  /* InitializeConditions for RateTransition: '<S28>/RT2' */
  AION_IDS_SPEEDGOAT_DW.RT2_Buf0 = AION_IDS_SPEEDGOAT_cal->RT2_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_Buf0 =
    AION_IDS_SPEEDGOAT_cal->AutoTrqWhlReq_test_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_DW.BrakeReq_test_Buf0 =
    AION_IDS_SPEEDGOAT_cal->BrakeReq_test_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_Buf0 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport1_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_Buf0 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport16_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_Buf0 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport17_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport18_Buf0 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport18_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport19_Buf0 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport19_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_Buf0 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport2_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_Buf0 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport3_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport5_Buf0 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport5_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport8_Buf0 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport8_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport9_Buf0 =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtAION_auto_mode_requestInport9_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_10_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_10_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_100_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_100_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_101_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_101_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_102_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_102_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_103_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_103_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_106_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_106_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_107_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_107_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_108_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_108_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_109_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_109_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_11_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_11_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_110_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_110_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_111_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_111_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_113_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_113_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_114_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_114_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_115_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_115_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_116_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_116_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_117_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_117_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_118_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_118_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_119_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_119_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_12_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_12_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_120_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_120_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_121_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_121_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_122_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_122_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_123_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_123_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_124_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_124_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_125_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_125_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_126_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_126_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_127_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_127_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_128_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_128_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_129_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_129_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_13_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_13_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_130_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_130_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_131_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_131_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_132_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_132_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_133_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_133_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_134_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_134_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_135_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_135_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_14_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_14_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_141_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_141_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_142_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_142_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_145_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_145_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_149_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_149_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_15_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_15_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_153_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_153_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_154_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_154_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_155_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_155_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_157_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_157_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_158_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_158_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_159_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_159_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_164_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_164_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_165_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_165_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_24_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_24_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_26_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_26_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_28_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_28_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_30_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_30_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_32_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_32_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_34_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_34_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_35_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_35_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_4_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_4_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_44_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_44_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_45_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_45_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_52_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_52_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_56_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_56_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_60_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_60_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_64_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_64_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_66_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_66_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_68_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_68_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_70_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_70_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_71_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_71_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_73_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_73_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_74_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_74_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_75_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_75_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_76_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_76_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_78_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_78_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_80_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_80_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_82_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_82_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_85_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_85_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_87_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_87_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_89_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_89_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_92_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_92_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_94_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_94_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_95_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_95_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_96_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_96_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_97_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_97_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_98_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_98_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/RT1' */
  AION_IDS_SPEEDGOAT_DW.RT1_99_Buf0 =
    AION_IDS_SPEEDGOAT_cal->RT1_99_InitialCondition;

  /* InitializeConditions for RateTransition generated from: '<S1>/Unit Delay' */
  AION_IDS_SPEEDGOAT_DW.TmpRTBAtUnitDelayInport1_Buf[0] =
    AION_IDS_SPEEDGOAT_cal->TmpRTBAtUnitDelayInport1_InitialCondition;

  /* SystemInitialize for ModelReference generated from: '<S1>/AION_auto_mode_request' */
  AION_auto_mode_request_Init
    (&(AION_IDS_SPEEDGOAT_DW.AION_auto_mode_request_InstanceData.rtdw));
}

/* Model terminate function */
void AION_IDS_SPEEDGOAT_terminate(void)
{
  /* Terminate for S-Function (sg_IO612_setup_s): '<S2>/CAN Setup' */
  /* Level2 S-Function Block: '<S2>/CAN Setup' (sg_IO612_setup_s) */
  {
    SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[1];
    sfcnTerminate(rts);
  }

  /* Terminate for Iterator SubSystem: '<S24>/SCU2ADCU(IDS)_loop_receive' */

  /* Terminate for S-Function (sg_IO61X_read_s): '<S25>/SCU2ADCU_CAN_read' */
  /* Level2 S-Function Block: '<S25>/SCU2ADCU_CAN_read' (sg_IO61X_read_s) */
  {
    SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[0];
    sfcnTerminate(rts);
  }

  /* End of Terminate for SubSystem: '<S24>/SCU2ADCU(IDS)_loop_receive' */

  /* Terminate for S-Function (sg_IO61X_write_s): '<S28>/ADCU2SCU_Brake_Command_CAN_write' */
  /* Level2 S-Function Block: '<S28>/ADCU2SCU_Brake_Command_CAN_write' (sg_IO61X_write_s) */
  {
    SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[2];
    sfcnTerminate(rts);
  }

  /* Terminate for S-Function (sg_IO61X_write_s): '<S28>/ADCU2SCU_Gear_Command_CAN_write' */
  /* Level2 S-Function Block: '<S28>/ADCU2SCU_Gear_Command_CAN_write' (sg_IO61X_write_s) */
  {
    SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[3];
    sfcnTerminate(rts);
  }

  /* Terminate for RateTransition: '<S28>/RT2' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT2_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_destroy
    (AION_IDS_SPEEDGOAT_DW.AutoTrqWhlReq_test_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.BrakeReq_test_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_destroy
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport1_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_destroy
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport16_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_destroy
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport17_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_destroy
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport18_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_destroy
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport19_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_destroy
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport2_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_destroy
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport3_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_destroy
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport5_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_destroy
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport8_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/AION_auto_mode_request' */
  rtw_slrealtime_mutex_destroy
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtAION_auto_mode_requestInport9_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_10_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_100_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_101_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_102_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_103_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_106_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_107_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_108_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_109_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_11_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_110_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_111_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_113_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_114_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_115_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_116_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_117_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_118_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_119_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_12_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_120_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_121_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_122_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_123_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_124_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_125_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_126_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_127_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_128_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_129_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_13_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_130_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_131_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_132_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_133_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_134_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_135_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_14_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_141_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_142_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_145_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_149_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_15_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_153_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_154_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_155_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_157_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_158_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_159_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_164_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_165_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_24_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_26_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_28_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_30_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_32_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_34_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_35_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_4_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_44_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_45_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_52_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_56_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_60_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_64_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_66_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_68_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_70_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_71_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_73_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_74_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_75_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_76_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_78_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_80_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_82_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_85_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_87_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_89_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_92_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_94_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_95_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_96_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_97_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_98_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/RT1' */
  rtw_slrealtime_mutex_destroy(AION_IDS_SPEEDGOAT_DW.RT1_99_d0_SEMAPHORE);

  /* Terminate for RateTransition generated from: '<S1>/Unit Delay' */
  rtw_slrealtime_mutex_destroy
    (AION_IDS_SPEEDGOAT_DW.TmpRTBAtUnitDelayInport1_d0_SEMAPHORE);

  /* Terminate for S-Function (sg_IO61X_write_s): '<S28>/ADCU2SCU_Steer_Command_CAN_write' */
  /* Level2 S-Function Block: '<S28>/ADCU2SCU_Steer_Command_CAN_write' (sg_IO61X_write_s) */
  {
    SimStruct *rts = AION_IDS_SPEEDGOAT_M->childSfunctions[4];
    sfcnTerminate(rts);
  }
}

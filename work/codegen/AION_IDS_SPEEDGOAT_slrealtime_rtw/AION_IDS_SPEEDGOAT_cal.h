#ifndef RTW_HEADER_AION_IDS_SPEEDGOAT_cal_h_
#define RTW_HEADER_AION_IDS_SPEEDGOAT_cal_h_
#include "rtwtypes.h"
#include "AION_IDS_SPEEDGOAT_types.h"

/* Storage class 'PageSwitching', for system '<Root>' */
struct AION_IDS_SPEEDGOAT_cal_type {
  AION_ApplicationBus UnitDelay_InitialCondition;
                               /* Computed Parameter: UnitDelay_InitialCondition
                                * Referenced by: '<S1>/Unit Delay'
                                */
  AION_ApplicationBus TmpRTBAtUnitDelayInport1_InitialCondition;
                /* Computed Parameter: TmpRTBAtUnitDelayInport1_InitialCondition
                 * Referenced by: synthesized block
                 */
  CAN_DATATYPE RT2_InitialCondition; /* Computed Parameter: RT2_InitialCondition
                                      * Referenced by: '<S28>/RT2'
                                      */
  real_T SCU2ADCU_CAN_read_P1_Size[2];
                                /* Computed Parameter: SCU2ADCU_CAN_read_P1_Size
                                 * Referenced by: '<S25>/SCU2ADCU_CAN_read'
                                 */
  real_T SCU2ADCU_CAN_read_P1;         /* Expression: id
                                        * Referenced by: '<S25>/SCU2ADCU_CAN_read'
                                        */
  real_T SCU2ADCU_CAN_read_P2_Size[2];
                                /* Computed Parameter: SCU2ADCU_CAN_read_P2_Size
                                 * Referenced by: '<S25>/SCU2ADCU_CAN_read'
                                 */
  real_T SCU2ADCU_CAN_read_P2;         /* Expression: sampleTime
                                        * Referenced by: '<S25>/SCU2ADCU_CAN_read'
                                        */
  real_T SCU2ADCU_CAN_read_P3_Size[2];
                                /* Computed Parameter: SCU2ADCU_CAN_read_P3_Size
                                 * Referenced by: '<S25>/SCU2ADCU_CAN_read'
                                 */
  real_T SCU2ADCU_CAN_read_P3;         /* Expression: messageType
                                        * Referenced by: '<S25>/SCU2ADCU_CAN_read'
                                        */
  real_T SCU2ADCU_CAN_read_P4_Size[2];
                                /* Computed Parameter: SCU2ADCU_CAN_read_P4_Size
                                 * Referenced by: '<S25>/SCU2ADCU_CAN_read'
                                 */
  real_T SCU2ADCU_CAN_read_P4[5];    /* Computed Parameter: SCU2ADCU_CAN_read_P4
                                      * Referenced by: '<S25>/SCU2ADCU_CAN_read'
                                      */
  real_T SCU2ADCU_CAN_read_P5_Size[2];
                                /* Computed Parameter: SCU2ADCU_CAN_read_P5_Size
                                 * Referenced by: '<S25>/SCU2ADCU_CAN_read'
                                 */
  real_T SCU2ADCU_CAN_read_P5;         /* Expression: ptIdx
                                        * Referenced by: '<S25>/SCU2ADCU_CAN_read'
                                        */
  real_T SCU2ADCU_CAN_read_P6_Size[2];
                                /* Computed Parameter: SCU2ADCU_CAN_read_P6_Size
                                 * Referenced by: '<S25>/SCU2ADCU_CAN_read'
                                 */
  real_T SCU2ADCU_CAN_read_P6;         /* Expression: isFDMod
                                        * Referenced by: '<S25>/SCU2ADCU_CAN_read'
                                        */
  real_T CANSetup_P1_Size[2];          /* Computed Parameter: CANSetup_P1_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P1;                  /* Expression: id
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P2_Size[2];          /* Computed Parameter: CANSetup_P2_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P2[2];               /* Computed Parameter: CANSetup_P2
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P3_Size[2];          /* Computed Parameter: CANSetup_P3_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P3;                  /* Expression: PCISlot
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P4_Size[2];          /* Computed Parameter: CANSetup_P4_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P4;                  /* Expression: port1
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P5_Size[2];          /* Computed Parameter: CANSetup_P5_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P5;                  /* Expression: port2
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P6_Size[2];          /* Computed Parameter: CANSetup_P6_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P6;                  /* Expression: port3
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P7_Size[2];          /* Computed Parameter: CANSetup_P7_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P7;                  /* Expression: port4
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P8_Size[2];          /* Computed Parameter: CANSetup_P8_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P8;                  /* Expression: opModeCAN1
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P9_Size[2];          /* Computed Parameter: CANSetup_P9_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P9[4];               /* Expression: usrBdrCAN1
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P10_Size[2];         /* Computed Parameter: CANSetup_P10_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P10[2];              /* Expression: stdAccMaskCAN1
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P11_Size[2];         /* Computed Parameter: CANSetup_P11_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P11[2];              /* Expression: extAccMaskCAN1
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P12_Size[2];         /* Computed Parameter: CANSetup_P12_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P12;                 /* Expression: opModeCAN2
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P13_Size[2];         /* Computed Parameter: CANSetup_P13_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P13[4];              /* Expression: usrBdrCAN2
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P14_Size[2];         /* Computed Parameter: CANSetup_P14_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P14[2];              /* Expression: stdAccMaskCAN2
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P15_Size[2];         /* Computed Parameter: CANSetup_P15_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P15[2];              /* Expression: extAccMaskCAN2
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P16_Size[2];         /* Computed Parameter: CANSetup_P16_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P16;                 /* Expression: opModeCAN3
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P17_Size[2];         /* Computed Parameter: CANSetup_P17_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P17[4];              /* Expression: usrBdrCAN3
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P18_Size[2];         /* Computed Parameter: CANSetup_P18_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P18[2];              /* Expression: stdAccMaskCAN3
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P19_Size[2];         /* Computed Parameter: CANSetup_P19_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P19[2];              /* Expression: extAccMaskCAN3
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P20_Size[2];         /* Computed Parameter: CANSetup_P20_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P20;                 /* Expression: opModeCAN4
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P21_Size[2];         /* Computed Parameter: CANSetup_P21_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P21[4];              /* Expression: usrBdrCAN4
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P22_Size[2];         /* Computed Parameter: CANSetup_P22_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P22[2];              /* Expression: stdAccMaskCAN4
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P23_Size[2];         /* Computed Parameter: CANSetup_P23_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P23[2];              /* Expression: extAccMaskCAN4
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P24_Size[2];         /* Computed Parameter: CANSetup_P24_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P24;                 /* Expression: initStruct
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P25_Size[2];         /* Computed Parameter: CANSetup_P25_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P25;                 /* Expression: termStruct
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P26_Size[2];         /* Computed Parameter: CANSetup_P26_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P26[5];              /* Computed Parameter: CANSetup_P26
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P27_Size[2];         /* Computed Parameter: CANSetup_P27_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P27;                 /* Expression: qtyMod
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P28_Size[2];         /* Computed Parameter: CANSetup_P28_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P28[4];              /* Expression: chNo
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P29_Size[2];         /* Computed Parameter: CANSetup_P29_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P29[4];              /* Expression: ptTypes
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P30_Size[2];         /* Computed Parameter: CANSetup_P30_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P30[4];              /* Expression: protlHelpIdx
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P31_Size[2];         /* Computed Parameter: CANSetup_P31_Size
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T CANSetup_P31;                 /* Expression: isFDMod
                                        * Referenced by: '<S2>/CAN Setup'
                                        */
  real_T ADCU2SCU_Brake_Command_CAN_write_P1_Size[2];
                 /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P1_Size
                  * Referenced by: '<S28>/ADCU2SCU_Brake_Command_CAN_write'
                  */
  real_T ADCU2SCU_Brake_Command_CAN_write_P1;/* Expression: id
                                              * Referenced by: '<S28>/ADCU2SCU_Brake_Command_CAN_write'
                                              */
  real_T ADCU2SCU_Brake_Command_CAN_write_P2_Size[2];
                 /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P2_Size
                  * Referenced by: '<S28>/ADCU2SCU_Brake_Command_CAN_write'
                  */
  real_T ADCU2SCU_Brake_Command_CAN_write_P2;/* Expression: sampleTime
                                              * Referenced by: '<S28>/ADCU2SCU_Brake_Command_CAN_write'
                                              */
  real_T ADCU2SCU_Brake_Command_CAN_write_P3_Size[2];
                 /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P3_Size
                  * Referenced by: '<S28>/ADCU2SCU_Brake_Command_CAN_write'
                  */
  real_T ADCU2SCU_Brake_Command_CAN_write_P3;/* Expression: messageType
                                              * Referenced by: '<S28>/ADCU2SCU_Brake_Command_CAN_write'
                                              */
  real_T ADCU2SCU_Brake_Command_CAN_write_P4_Size[2];
                 /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P4_Size
                  * Referenced by: '<S28>/ADCU2SCU_Brake_Command_CAN_write'
                  */
  real_T ADCU2SCU_Brake_Command_CAN_write_P4;/* Expression: enaStatusPort
                                              * Referenced by: '<S28>/ADCU2SCU_Brake_Command_CAN_write'
                                              */
  real_T ADCU2SCU_Brake_Command_CAN_write_P5_Size[2];
                 /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P5_Size
                  * Referenced by: '<S28>/ADCU2SCU_Brake_Command_CAN_write'
                  */
  real_T ADCU2SCU_Brake_Command_CAN_write_P5[5];
                      /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P5
                       * Referenced by: '<S28>/ADCU2SCU_Brake_Command_CAN_write'
                       */
  real_T ADCU2SCU_Brake_Command_CAN_write_P6_Size[2];
                 /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P6_Size
                  * Referenced by: '<S28>/ADCU2SCU_Brake_Command_CAN_write'
                  */
  real_T ADCU2SCU_Brake_Command_CAN_write_P6;/* Expression: ptIdx
                                              * Referenced by: '<S28>/ADCU2SCU_Brake_Command_CAN_write'
                                              */
  real_T ADCU2SCU_Brake_Command_CAN_write_P7_Size[2];
                 /* Computed Parameter: ADCU2SCU_Brake_Command_CAN_write_P7_Size
                  * Referenced by: '<S28>/ADCU2SCU_Brake_Command_CAN_write'
                  */
  real_T ADCU2SCU_Brake_Command_CAN_write_P7;/* Expression: isFDMod
                                              * Referenced by: '<S28>/ADCU2SCU_Brake_Command_CAN_write'
                                              */
  real_T ADCU2SCU_Gear_Command_CAN_write_P1_Size[2];
                  /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P1_Size
                   * Referenced by: '<S28>/ADCU2SCU_Gear_Command_CAN_write'
                   */
  real_T ADCU2SCU_Gear_Command_CAN_write_P1;/* Expression: id
                                             * Referenced by: '<S28>/ADCU2SCU_Gear_Command_CAN_write'
                                             */
  real_T ADCU2SCU_Gear_Command_CAN_write_P2_Size[2];
                  /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P2_Size
                   * Referenced by: '<S28>/ADCU2SCU_Gear_Command_CAN_write'
                   */
  real_T ADCU2SCU_Gear_Command_CAN_write_P2;/* Expression: sampleTime
                                             * Referenced by: '<S28>/ADCU2SCU_Gear_Command_CAN_write'
                                             */
  real_T ADCU2SCU_Gear_Command_CAN_write_P3_Size[2];
                  /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P3_Size
                   * Referenced by: '<S28>/ADCU2SCU_Gear_Command_CAN_write'
                   */
  real_T ADCU2SCU_Gear_Command_CAN_write_P3;/* Expression: messageType
                                             * Referenced by: '<S28>/ADCU2SCU_Gear_Command_CAN_write'
                                             */
  real_T ADCU2SCU_Gear_Command_CAN_write_P4_Size[2];
                  /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P4_Size
                   * Referenced by: '<S28>/ADCU2SCU_Gear_Command_CAN_write'
                   */
  real_T ADCU2SCU_Gear_Command_CAN_write_P4;/* Expression: enaStatusPort
                                             * Referenced by: '<S28>/ADCU2SCU_Gear_Command_CAN_write'
                                             */
  real_T ADCU2SCU_Gear_Command_CAN_write_P5_Size[2];
                  /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P5_Size
                   * Referenced by: '<S28>/ADCU2SCU_Gear_Command_CAN_write'
                   */
  real_T ADCU2SCU_Gear_Command_CAN_write_P5[5];
                       /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P5
                        * Referenced by: '<S28>/ADCU2SCU_Gear_Command_CAN_write'
                        */
  real_T ADCU2SCU_Gear_Command_CAN_write_P6_Size[2];
                  /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P6_Size
                   * Referenced by: '<S28>/ADCU2SCU_Gear_Command_CAN_write'
                   */
  real_T ADCU2SCU_Gear_Command_CAN_write_P6;/* Expression: ptIdx
                                             * Referenced by: '<S28>/ADCU2SCU_Gear_Command_CAN_write'
                                             */
  real_T ADCU2SCU_Gear_Command_CAN_write_P7_Size[2];
                  /* Computed Parameter: ADCU2SCU_Gear_Command_CAN_write_P7_Size
                   * Referenced by: '<S28>/ADCU2SCU_Gear_Command_CAN_write'
                   */
  real_T ADCU2SCU_Gear_Command_CAN_write_P7;/* Expression: isFDMod
                                             * Referenced by: '<S28>/ADCU2SCU_Gear_Command_CAN_write'
                                             */
  real_T AutoTrqWhlReq_test_InitialCondition;/* Expression: 0
                                              * Referenced by: synthesized block
                                              */
  real_T BrakeReq_test_InitialCondition;/* Expression: 0
                                         * Referenced by: synthesized block
                                         */
  real_T TmpRTBAtAION_auto_mode_requestInport2_InitialCondition;/* Expression: 0
                                                                 * Referenced by: synthesized block
                                                                 */
  real_T TmpRTBAtAION_auto_mode_requestInport3_InitialCondition;/* Expression: 0
                                                                 * Referenced by: synthesized block
                                                                 */
  real_T RT1_141_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<S1>/RT1'
                                        */
  real_T RT1_145_InitialCondition;     /* Expression: 0
                                        * Referenced by: '<S1>/RT1'
                                        */
  real_T RT1_24_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S1>/RT1'
                                        */
  real_T RT1_34_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S1>/RT1'
                                        */
  real_T RT1_35_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S1>/RT1'
                                        */
  real_T RT1_4_InitialCondition;       /* Expression: 0
                                        * Referenced by: '<S1>/RT1'
                                        */
  real_T RT1_44_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S1>/RT1'
                                        */
  real_T RT1_45_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S1>/RT1'
                                        */
  real_T RT1_52_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S1>/RT1'
                                        */
  real_T RT1_56_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S1>/RT1'
                                        */
  real_T RT1_60_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S1>/RT1'
                                        */
  real_T RT1_64_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S1>/RT1'
                                        */
  real_T RT1_66_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S1>/RT1'
                                        */
  real_T RT1_68_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S1>/RT1'
                                        */
  real_T RT1_70_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S1>/RT1'
                                        */
  real_T RT1_71_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S1>/RT1'
                                        */
  real_T RT1_80_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S1>/RT1'
                                        */
  real_T RT1_87_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S1>/RT1'
                                        */
  real_T RT1_92_InitialCondition;      /* Expression: 0
                                        * Referenced by: '<S1>/RT1'
                                        */
  real_T ADCU2SCU_Steer_Command_CAN_write_P1_Size[2];
                 /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P1_Size
                  * Referenced by: '<S28>/ADCU2SCU_Steer_Command_CAN_write'
                  */
  real_T ADCU2SCU_Steer_Command_CAN_write_P1;/* Expression: id
                                              * Referenced by: '<S28>/ADCU2SCU_Steer_Command_CAN_write'
                                              */
  real_T ADCU2SCU_Steer_Command_CAN_write_P2_Size[2];
                 /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P2_Size
                  * Referenced by: '<S28>/ADCU2SCU_Steer_Command_CAN_write'
                  */
  real_T ADCU2SCU_Steer_Command_CAN_write_P2;/* Expression: sampleTime
                                              * Referenced by: '<S28>/ADCU2SCU_Steer_Command_CAN_write'
                                              */
  real_T ADCU2SCU_Steer_Command_CAN_write_P3_Size[2];
                 /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P3_Size
                  * Referenced by: '<S28>/ADCU2SCU_Steer_Command_CAN_write'
                  */
  real_T ADCU2SCU_Steer_Command_CAN_write_P3;/* Expression: messageType
                                              * Referenced by: '<S28>/ADCU2SCU_Steer_Command_CAN_write'
                                              */
  real_T ADCU2SCU_Steer_Command_CAN_write_P4_Size[2];
                 /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P4_Size
                  * Referenced by: '<S28>/ADCU2SCU_Steer_Command_CAN_write'
                  */
  real_T ADCU2SCU_Steer_Command_CAN_write_P4;/* Expression: enaStatusPort
                                              * Referenced by: '<S28>/ADCU2SCU_Steer_Command_CAN_write'
                                              */
  real_T ADCU2SCU_Steer_Command_CAN_write_P5_Size[2];
                 /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P5_Size
                  * Referenced by: '<S28>/ADCU2SCU_Steer_Command_CAN_write'
                  */
  real_T ADCU2SCU_Steer_Command_CAN_write_P5[5];
                      /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P5
                       * Referenced by: '<S28>/ADCU2SCU_Steer_Command_CAN_write'
                       */
  real_T ADCU2SCU_Steer_Command_CAN_write_P6_Size[2];
                 /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P6_Size
                  * Referenced by: '<S28>/ADCU2SCU_Steer_Command_CAN_write'
                  */
  real_T ADCU2SCU_Steer_Command_CAN_write_P6;/* Expression: ptIdx
                                              * Referenced by: '<S28>/ADCU2SCU_Steer_Command_CAN_write'
                                              */
  real_T ADCU2SCU_Steer_Command_CAN_write_P7_Size[2];
                 /* Computed Parameter: ADCU2SCU_Steer_Command_CAN_write_P7_Size
                  * Referenced by: '<S28>/ADCU2SCU_Steer_Command_CAN_write'
                  */
  real_T ADCU2SCU_Steer_Command_CAN_write_P7;/* Expression: isFDMod
                                              * Referenced by: '<S28>/ADCU2SCU_Steer_Command_CAN_write'
                                              */
  Active_request TmpRTBAtAION_auto_mode_requestInport18_InitialCondition;
  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport18_InitialCondition
   * Referenced by: synthesized block
   */
  Active_status RT1_153_InitialCondition;
                                 /* Computed Parameter: RT1_153_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  Active_status RT1_154_InitialCondition;
                                 /* Computed Parameter: RT1_154_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  Active_status RT1_155_InitialCondition;
                                 /* Computed Parameter: RT1_155_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  Active_status RT1_158_InitialCondition;
                                 /* Computed Parameter: RT1_158_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  Active_status RT1_159_InitialCondition;
                                 /* Computed Parameter: RT1_159_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  Active_status RT1_165_InitialCondition;
                                 /* Computed Parameter: RT1_165_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  Available_status RT1_149_InitialCondition;
                                 /* Computed Parameter: RT1_149_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  Beam_request TmpRTBAtAION_auto_mode_requestInport16_InitialCondition;
  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport16_InitialCondition
   * Referenced by: synthesized block
   */
  Control_request TmpRTBAtAION_auto_mode_requestInport1_InitialCondition;
  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport1_InitialCondition
   * Referenced by: synthesized block
   */
  Control_request TmpRTBAtAION_auto_mode_requestInport5_InitialCondition;
  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport5_InitialCondition
   * Referenced by: synthesized block
   */
  Control_status RT1_107_InitialCondition;
                                 /* Computed Parameter: RT1_107_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  Control_status RT1_110_InitialCondition;
                                 /* Computed Parameter: RT1_110_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  Drive_status RT1_73_InitialCondition;
                                  /* Computed Parameter: RT1_73_InitialCondition
                                   * Referenced by: '<S1>/RT1'
                                   */
  Enable_request TmpRTBAtAION_auto_mode_requestInport17_InitialCondition;
  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport17_InitialCondition
   * Referenced by: synthesized block
   */
  Error_status RT1_135_InitialCondition;
                                 /* Computed Parameter: RT1_135_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  Fault_status RT1_157_InitialCondition;
                                 /* Computed Parameter: RT1_157_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  Fault_status RT1_164_InitialCondition;
                                 /* Computed Parameter: RT1_164_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  Gear_request TmpRTBAtAION_auto_mode_requestInport8_InitialCondition;
  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport8_InitialCondition
   * Referenced by: synthesized block
   */
  Gear_status RT1_78_InitialCondition;
                                  /* Computed Parameter: RT1_78_InitialCondition
                                   * Referenced by: '<S1>/RT1'
                                   */
  Light_request TmpRTBAtAION_auto_mode_requestInport19_InitialCondition;
  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport19_InitialCondition
   * Referenced by: synthesized block
   */
  Ready_status RT1_74_InitialCondition;
                                  /* Computed Parameter: RT1_74_InitialCondition
                                   * Referenced by: '<S1>/RT1'
                                   */
  Validation_status TmpRTBAtAION_auto_mode_requestInport9_InitialCondition;
  /* Computed Parameter: TmpRTBAtAION_auto_mode_requestInport9_InitialCondition
   * Referenced by: synthesized block
   */
  uint32_T RT1_10_InitialCondition;
                                  /* Computed Parameter: RT1_10_InitialCondition
                                   * Referenced by: '<S1>/RT1'
                                   */
  uint32_T RT1_100_InitialCondition;
                                 /* Computed Parameter: RT1_100_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_101_InitialCondition;
                                 /* Computed Parameter: RT1_101_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_102_InitialCondition;
                                 /* Computed Parameter: RT1_102_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_103_InitialCondition;
                                 /* Computed Parameter: RT1_103_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_106_InitialCondition;
                                 /* Computed Parameter: RT1_106_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_108_InitialCondition;
                                 /* Computed Parameter: RT1_108_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_109_InitialCondition;
                                 /* Computed Parameter: RT1_109_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_11_InitialCondition;
                                  /* Computed Parameter: RT1_11_InitialCondition
                                   * Referenced by: '<S1>/RT1'
                                   */
  uint32_T RT1_111_InitialCondition;
                                 /* Computed Parameter: RT1_111_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_113_InitialCondition;
                                 /* Computed Parameter: RT1_113_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_114_InitialCondition;
                                 /* Computed Parameter: RT1_114_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_115_InitialCondition;
                                 /* Computed Parameter: RT1_115_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_116_InitialCondition;
                                 /* Computed Parameter: RT1_116_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_117_InitialCondition;
                                 /* Computed Parameter: RT1_117_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_118_InitialCondition;
                                 /* Computed Parameter: RT1_118_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_119_InitialCondition;
                                 /* Computed Parameter: RT1_119_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_12_InitialCondition;
                                  /* Computed Parameter: RT1_12_InitialCondition
                                   * Referenced by: '<S1>/RT1'
                                   */
  uint32_T RT1_120_InitialCondition;
                                 /* Computed Parameter: RT1_120_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_121_InitialCondition;
                                 /* Computed Parameter: RT1_121_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_122_InitialCondition;
                                 /* Computed Parameter: RT1_122_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_123_InitialCondition;
                                 /* Computed Parameter: RT1_123_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_124_InitialCondition;
                                 /* Computed Parameter: RT1_124_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_125_InitialCondition;
                                 /* Computed Parameter: RT1_125_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_126_InitialCondition;
                                 /* Computed Parameter: RT1_126_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_127_InitialCondition;
                                 /* Computed Parameter: RT1_127_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_128_InitialCondition;
                                 /* Computed Parameter: RT1_128_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_129_InitialCondition;
                                 /* Computed Parameter: RT1_129_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_13_InitialCondition;
                                  /* Computed Parameter: RT1_13_InitialCondition
                                   * Referenced by: '<S1>/RT1'
                                   */
  uint32_T RT1_130_InitialCondition;
                                 /* Computed Parameter: RT1_130_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_131_InitialCondition;
                                 /* Computed Parameter: RT1_131_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_132_InitialCondition;
                                 /* Computed Parameter: RT1_132_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_133_InitialCondition;
                                 /* Computed Parameter: RT1_133_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_134_InitialCondition;
                                 /* Computed Parameter: RT1_134_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_14_InitialCondition;
                                  /* Computed Parameter: RT1_14_InitialCondition
                                   * Referenced by: '<S1>/RT1'
                                   */
  uint32_T RT1_142_InitialCondition;
                                 /* Computed Parameter: RT1_142_InitialCondition
                                  * Referenced by: '<S1>/RT1'
                                  */
  uint32_T RT1_15_InitialCondition;
                                  /* Computed Parameter: RT1_15_InitialCondition
                                   * Referenced by: '<S1>/RT1'
                                   */
  uint32_T RT1_26_InitialCondition;
                                  /* Computed Parameter: RT1_26_InitialCondition
                                   * Referenced by: '<S1>/RT1'
                                   */
  uint32_T RT1_28_InitialCondition;
                                  /* Computed Parameter: RT1_28_InitialCondition
                                   * Referenced by: '<S1>/RT1'
                                   */
  uint32_T RT1_30_InitialCondition;
                                  /* Computed Parameter: RT1_30_InitialCondition
                                   * Referenced by: '<S1>/RT1'
                                   */
  uint32_T RT1_32_InitialCondition;
                                  /* Computed Parameter: RT1_32_InitialCondition
                                   * Referenced by: '<S1>/RT1'
                                   */
  uint32_T RT1_75_InitialCondition;
                                  /* Computed Parameter: RT1_75_InitialCondition
                                   * Referenced by: '<S1>/RT1'
                                   */
  uint32_T RT1_76_InitialCondition;
                                  /* Computed Parameter: RT1_76_InitialCondition
                                   * Referenced by: '<S1>/RT1'
                                   */
  uint32_T RT1_82_InitialCondition;
                                  /* Computed Parameter: RT1_82_InitialCondition
                                   * Referenced by: '<S1>/RT1'
                                   */
  uint32_T RT1_85_InitialCondition;
                                  /* Computed Parameter: RT1_85_InitialCondition
                                   * Referenced by: '<S1>/RT1'
                                   */
  uint32_T RT1_89_InitialCondition;
                                  /* Computed Parameter: RT1_89_InitialCondition
                                   * Referenced by: '<S1>/RT1'
                                   */
  uint32_T RT1_94_InitialCondition;
                                  /* Computed Parameter: RT1_94_InitialCondition
                                   * Referenced by: '<S1>/RT1'
                                   */
  uint32_T RT1_95_InitialCondition;
                                  /* Computed Parameter: RT1_95_InitialCondition
                                   * Referenced by: '<S1>/RT1'
                                   */
  uint32_T RT1_96_InitialCondition;
                                  /* Computed Parameter: RT1_96_InitialCondition
                                   * Referenced by: '<S1>/RT1'
                                   */
  uint32_T RT1_97_InitialCondition;
                                  /* Computed Parameter: RT1_97_InitialCondition
                                   * Referenced by: '<S1>/RT1'
                                   */
  uint32_T RT1_98_InitialCondition;
                                  /* Computed Parameter: RT1_98_InitialCondition
                                   * Referenced by: '<S1>/RT1'
                                   */
  uint32_T RT1_99_InitialCondition;
                                  /* Computed Parameter: RT1_99_InitialCondition
                                   * Referenced by: '<S1>/RT1'
                                   */
};

/* Storage class 'PageSwitching' */
extern AION_IDS_SPEEDGOAT_cal_type AION_IDS_SPEEDGOAT_cal_impl;
extern AION_IDS_SPEEDGOAT_cal_type *AION_IDS_SPEEDGOAT_cal;

#endif                                /* RTW_HEADER_AION_IDS_SPEEDGOAT_cal_h_ */

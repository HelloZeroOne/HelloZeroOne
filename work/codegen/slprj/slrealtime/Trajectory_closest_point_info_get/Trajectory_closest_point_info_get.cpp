/*
 * Code generation for system model 'Trajectory_closest_point_info_get'
 *
 * Model                      : Trajectory_closest_point_info_get
 * Model version              : 4.329
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Thu May 12 12:49:22 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "Trajectory_closest_point_info_get.h"
#include "Trajectory_closest_point_info_get_private.h"

P_Trajectory_closest_point_info_get_T Trajectory_closest_point_info_get_P = {
  /* Mask Parameter: CompareToConstant1_const
   * Referenced by: '<S26>/Constant'
   */
  2,

  /* Mask Parameter: CompareToConstant_const
   * Referenced by: '<S20>/Constant'
   */
  -1,

  /* Mask Parameter: CompareToConstant1_const_a
   * Referenced by: '<S21>/Constant'
   */
  -1,

  /* Mask Parameter: CompareToConstant1_const_e
   * Referenced by: '<S5>/Constant'
   */
  -1,

  /* Expression: 0
   * Referenced by: '<S22>/Unit Delay'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S23>/Unit Delay'
   */
  0.0,

  /* Expression: zeros(N_ALTERNATIVE_CLOSEST_POINT_QUEUE, 1)
   * Referenced by: '<S6>/Data Store Memory'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: zeros(N_ALTERNATIVE_CLOSEST_POINT_QUEUE, 1)
   * Referenced by: '<S6>/Data Store Memory1'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: zeros(N_ALTERNATIVE_CLOSEST_POINT_QUEUE, 1)
   * Referenced by: '<S6>/Data Store Memory2'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: zeros(N_ALTERNATIVE_CLOSEST_POINT_QUEUE, 1)
   * Referenced by: '<S6>/Data Store Memory4'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<S6>/Data Store Memory7'
   */
  0.0,

  /* Expression: zeros(N_ALTERNATIVE_CLOSEST_POINT_QUEUE, 1)
   * Referenced by: '<S6>/Data Store Memory8'
   */
  { 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0 },

  /* Expression: 0
   * Referenced by: '<S6>/Data Store Memory9'
   */
  0.0,

  /* Expression: 0
   * Referenced by: '<S4>/Switch'
   */
  0.0,

  /* Computed Parameter: Constant_Value
   * Referenced by: '<S3>/Constant'
   */
  2,

  /* Computed Parameter: Constant1_Value
   * Referenced by: '<S3>/Constant1'
   */
  1,

  /* Computed Parameter: Constant1_Value_l
   * Referenced by: '<S19>/Constant1'
   */
  1,

  /* Computed Parameter: Constant2_Value
   * Referenced by: '<S19>/Constant2'
   */
  1,

  /* Computed Parameter: Constant3_Value
   * Referenced by: '<S19>/Constant3'
   */
  1,

  /* Computed Parameter: Constant1_Value_o
   * Referenced by: '<S22>/Constant1'
   */
  1,

  /* Computed Parameter: Constant1_Value_b
   * Referenced by: '<S23>/Constant1'
   */
  1,

  /* Computed Parameter: Constant11_Value
   * Referenced by: '<S15>/Constant11'
   */
  1,

  /* Computed Parameter: Constant3_Value_f
   * Referenced by: '<S15>/Constant3'
   */
  1,

  /* Computed Parameter: Constant11_Value_d
   * Referenced by: '<S14>/Constant11'
   */
  1,

  /* Computed Parameter: Constant2_Value_d
   * Referenced by: '<S14>/Constant2'
   */
  1,

  /* Computed Parameter: Constant3_Value_p
   * Referenced by: '<S14>/Constant3'
   */
  2,

  /* Computed Parameter: Constant2_Value_o
   * Referenced by: '<S9>/Constant2'
   */
  1,

  /* Computed Parameter: Constant3_Value_n
   * Referenced by: '<S9>/Constant3'
   */
  1,

  /* Computed Parameter: Constant1_Value_a
   * Referenced by: '<S9>/Constant1'
   */
  2,

  /* Computed Parameter: Constant2_Value_oh
   * Referenced by: '<S8>/Constant2'
   */
  1,

  /* Computed Parameter: Constant11_Value_b
   * Referenced by: '<S8>/Constant11'
   */
  1,

  /* Computed Parameter: Constant1_Value_d
   * Referenced by: '<S8>/Constant1'
   */
  { 1, 2 },

  /* Computed Parameter: Constant4_Value
   * Referenced by: '<S8>/Constant4'
   */
  { 1, 2 },

  /* Computed Parameter: Constant6_Value
   * Referenced by: '<S8>/Constant6'
   */
  1,

  /* Computed Parameter: Constant14_Value
   * Referenced by: '<S8>/Constant14'
   */
  { 1, 2 },

  /* Computed Parameter: Constant16_Value
   * Referenced by: '<S8>/Constant16'
   */
  { 1, 2 },

  /* Computed Parameter: Constant19_Value
   * Referenced by: '<S8>/Constant19'
   */
  1,

  /* Computed Parameter: Constant20_Value
   * Referenced by: '<S8>/Constant20'
   */
  1,

  /* Computed Parameter: Constant22_Value
   * Referenced by: '<S8>/Constant22'
   */
  { 1, 2 },

  /* Computed Parameter: Constant3_Value_k
   * Referenced by: '<S8>/Constant3'
   */
  { 1, 2 },

  /* Computed Parameter: Constant23_Value
   * Referenced by: '<S8>/Constant23'
   */
  2,

  /* Computed Parameter: Constant5_Value
   * Referenced by: '<S8>/Constant5'
   */
  2,

  /* Computed Parameter: DataStoreMemory3_InitialValue
   * Referenced by: '<S6>/Data Store Memory3'
   */
  { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 },

  /* Computed Parameter: DataStoreMemory5_InitialValue
   * Referenced by: '<S6>/Data Store Memory5'
   */
  0,

  /* Computed Parameter: closest_point_invalid_flag_Y0
   * Referenced by: '<S19>/closest_point_invalid_flag'
   */
  1,

  /* Computed Parameter: closest_point_invalid_flag_Y0_k
   * Referenced by: '<S7>/closest_point_invalid_flag'
   */
  1,

  /* Computed Parameter: Constant2_Value_g
   * Referenced by: '<S15>/Constant2'
   */
  1,

  /* Computed Parameter: Constant2_Value_a
   * Referenced by: '<S12>/Constant2'
   */
  0,

  /* Computed Parameter: DataStoreMemory6_InitialValue
   * Referenced by: '<S6>/Data Store Memory6'
   */
  0
};

/* System initialize for referenced model: 'Trajectory_closest_point_info_get' */
void Trajectory_closest_point_info_get_Init
  (B_Trajectory_closest_point_info_get_c_T *localB,
   DW_Trajectory_closest_point_info_get_f_T *localDW)
{
  /* SystemInitialize for IfAction SubSystem: '<Root>/Greater_Than_Or_Equal_3_Point' */
  /* SystemInitialize for IfAction SubSystem: '<S2>/Local_Search' */
  /* SystemInitialize for Iterator SubSystem: '<S7>/Start_Index_Search_Loop' */
  /* InitializeConditions for UnitDelay: '<S23>/Unit Delay' */
  localDW->head_arc_length_previous =
    Trajectory_closest_point_info_get_P.UnitDelay_InitialCondition_h;

  /* End of SystemInitialize for SubSystem: '<S7>/Start_Index_Search_Loop' */

  /* SystemInitialize for Iterator SubSystem: '<S7>/End_Index_Search_Loop' */
  /* InitializeConditions for UnitDelay: '<S22>/Unit Delay' */
  localDW->tail_arc_length_previous =
    Trajectory_closest_point_info_get_P.UnitDelay_InitialCondition;

  /* End of SystemInitialize for SubSystem: '<S7>/End_Index_Search_Loop' */

  /* SystemInitialize for Iterator SubSystem: '<S7>/Closest_Point_Search_Loop' */
  /* SystemInitialize for RelationalOperator: '<S19>/GreaterThanOrEqual' incorporates:
   *  Outport: '<S19>/closest_point_invalid_flag'
   *  Outport: '<S7>/closest_point_invalid_flag'
   */
  localB->closest_point_invalid_flag =
    Trajectory_closest_point_info_get_P.closest_point_invalid_flag_Y0;

  /* End of SystemInitialize for SubSystem: '<S7>/Closest_Point_Search_Loop' */
  localB->closest_point_invalid_flag =
    Trajectory_closest_point_info_get_P.closest_point_invalid_flag_Y0_k;

  /* End of SystemInitialize for SubSystem: '<S2>/Local_Search' */
  /* End of SystemInitialize for SubSystem: '<Root>/Greater_Than_Or_Equal_3_Point' */
}

/* Disable for referenced model: 'Trajectory_closest_point_info_get' */
void Trajectory_closest_point_info_get_Disable
  (DW_Trajectory_closest_point_info_get_f_T *localDW)
{
  /* Disable for If: '<Root>/If' */
  if (localDW->If_ActiveSubsystem == 1) {
    /* Disable for If: '<S2>/If' */
    localDW->If_ActiveSubsystem_j = -1;
  }

  localDW->If_ActiveSubsystem = -1;

  /* End of Disable for If: '<Root>/If' */
}

/* Start for referenced model: 'Trajectory_closest_point_info_get' */
void Trajectory_closest_point_info_get_Start
  (DW_Trajectory_closest_point_info_get_f_T *localDW)
{
  /* Start for If: '<Root>/If' */
  localDW->If_ActiveSubsystem = -1;

  /* Start for IfAction SubSystem: '<Root>/Greater_Than_Or_Equal_3_Point' */
  /* Start for If: '<S2>/If' */
  localDW->If_ActiveSubsystem_j = -1;

  /* Start for IfAction SubSystem: '<S2>/Global_Search' */
  /* Start for DataStoreMemory: '<S6>/Data Store Memory5' */
  localDW->valid_queue_length =
    Trajectory_closest_point_info_get_P.DataStoreMemory5_InitialValue;

  /* Start for DataStoreMemory: '<S6>/Data Store Memory6' */
  localDW->distance_relationship_transition_flag =
    Trajectory_closest_point_info_get_P.DataStoreMemory6_InitialValue;

  /* Start for DataStoreMemory: '<S6>/Data Store Memory7' */
  localDW->closest_distance =
    Trajectory_closest_point_info_get_P.DataStoreMemory7_InitialValue;

  /* Start for DataStoreMemory: '<S6>/Data Store Memory' */
  std::memcpy(&localDW->closer_point_x_queue[0],
              &Trajectory_closest_point_info_get_P.DataStoreMemory_InitialValue
              [0], 100U * sizeof(real_T));

  /* Start for DataStoreMemory: '<S6>/Data Store Memory1' */
  std::memcpy(&localDW->closer_point_y_queue[0],
              &Trajectory_closest_point_info_get_P.DataStoreMemory1_InitialValue[
              0], 100U * sizeof(real_T));

  /* Start for DataStoreMemory: '<S6>/Data Store Memory2' */
  std::memcpy(&localDW->delta_angle_queue[0],
              &Trajectory_closest_point_info_get_P.DataStoreMemory2_InitialValue[
              0], 100U * sizeof(real_T));

  /* Start for DataStoreMemory: '<S6>/Data Store Memory3' */
  std::memcpy(&localDW->closer_point_index_queue[0],
              &Trajectory_closest_point_info_get_P.DataStoreMemory3_InitialValue[
              0], 100U * sizeof(int32_T));

  /* Start for DataStoreMemory: '<S6>/Data Store Memory4' */
  std::memcpy(&localDW->near_lateral_offset_queue[0],
              &Trajectory_closest_point_info_get_P.DataStoreMemory4_InitialValue[
              0], 100U * sizeof(real_T));

  /* Start for DataStoreMemory: '<S6>/Data Store Memory8' */
  std::memcpy(&localDW->closer_point_curvature_queue[0],
              &Trajectory_closest_point_info_get_P.DataStoreMemory8_InitialValue[
              0], 100U * sizeof(real_T));

  /* Start for DataStoreMemory: '<S6>/Data Store Memory9' */
  localDW->min_delta_angle =
    Trajectory_closest_point_info_get_P.DataStoreMemory9_InitialValue;

  /* End of Start for SubSystem: '<S2>/Global_Search' */
  /* End of Start for SubSystem: '<Root>/Greater_Than_Or_Equal_3_Point' */
}

/* Output and update for referenced model: 'Trajectory_closest_point_info_get' */
void Trajectory_closest_point_info_get(const real_T rtu_trajectory_x[20001],
  const real_T rtu_trajectory_y[20001], const real_T rtu_trajectory_yaw_angle
  [20001], const real_T rtu_trajectory_curvature[20001], const real_T
  rtu_trajectory_segment_length[20001], const real_T *rtu_current_point_x, const
  real_T *rtu_current_point_y, const real_T *rtu_current_point_yaw_angle, const
  int32_T *rtu_closest_segment_start_point_index_previous, const int32_T
  *rtu_way_point_number, real_T *rty_closest_point_x, real_T
  *rty_closest_point_y, real_T *rty_closest_point_curvature, int32_T
  *rty_closest_segment_start_point_index, real_T *rty_near_lateral_offset,
  B_Trajectory_closest_point_info_get_c_T *localB,
  DW_Trajectory_closest_point_info_get_f_T *localDW)
{
  int32_T s23_iter;
  int32_T traverse_index;
  int32_T u0;
  int32_T yIdx;
  int8_T rtAction;
  int8_T rtPrevAction;
  boolean_T loopCond;

  /* If: '<Root>/If' */
  rtPrevAction = localDW->If_ActiveSubsystem;
  rtAction = static_cast<int8_T>(*rtu_way_point_number >= 3);
  localDW->If_ActiveSubsystem = rtAction;
  if ((rtPrevAction != rtAction) && (rtPrevAction == 1)) {
    /* Disable for If: '<S2>/If' */
    localDW->If_ActiveSubsystem_j = -1;
  }

  if (rtAction == 0) {
    /* Outputs for IfAction SubSystem: '<Root>/Less_Than_3_Point' incorporates:
     *  ActionPort: '<S3>/Action Port'
     */
    /* MinMax: '<S3>/Max' incorporates:
     *  Constant: '<S3>/Constant'
     */
    u0 = *rtu_way_point_number;
    s23_iter = Trajectory_closest_point_info_get_P.Constant_Value;
    if (u0 > s23_iter) {
      s23_iter = u0;
    }

    /* MinMax: '<S3>/Max' */
    localB->valid_way_point_number = s23_iter;

    /* Sum: '<S3>/Minus' incorporates:
     *  Constant: '<S3>/Constant1'
     */
    localB->temp_index = localB->valid_way_point_number -
      Trajectory_closest_point_info_get_P.Constant1_Value;

    /* Selector: '<S3>/Selector' */
    localB->next_to_last_point_x = rtu_trajectory_x[localB->temp_index - 1];

    /* Selector: '<S3>/Selector6' */
    localB->next_to_last_point_y = rtu_trajectory_y[localB->temp_index - 1];

    /* Selector: '<S3>/Selector1' */
    localB->last_point_x = rtu_trajectory_x[localB->valid_way_point_number - 1];

    /* Selector: '<S3>/Selector2' */
    localB->last_point_y = rtu_trajectory_y[localB->valid_way_point_number - 1];

    /* ModelReference: '<S3>/Vector_Projection_Get_Closest_Point' */
    Vector_projection_get_closest_point(rtu_current_point_x, rtu_current_point_y,
      &localB->next_to_last_point_x, &localB->next_to_last_point_y,
      &localB->last_point_x, &localB->last_point_y,
      &localB->output_closest_point_x_o, &localB->output_closest_point_y_h,
      &localB->temp_projection_rate,
      &(localDW->Vector_Projection_Get_Closest_Point_InstanceData.rtb));

    /* Selector: '<S3>/Selector10' */
    localB->Selector10_n = rtu_trajectory_curvature
      [localB->valid_way_point_number - 1];

    /* Selector: '<S3>/Selector3' */
    localB->Selector3_o = rtu_trajectory_curvature[localB->temp_index - 1];

    /* Sum: '<S3>/Subtract1' */
    localB->Subtract1_e = localB->Selector10_n - localB->Selector3_o;

    /* Product: '<S3>/Product' */
    localB->Product_k = localB->temp_projection_rate * localB->Subtract1_e;

    /* Sum: '<S3>/Plus2' */
    *rty_closest_point_curvature = localB->Product_k + localB->Selector3_o;

    /* SignalConversion: '<S3>/Signal Copy' */
    *rty_closest_point_x = localB->output_closest_point_x_o;

    /* SignalConversion: '<S3>/Signal Copy1' */
    *rty_closest_point_y = localB->output_closest_point_y_h;

    /* SignalConversion: '<S3>/Signal Copy2' */
    *rty_closest_segment_start_point_index = localB->temp_index;

    /* ModelReference: '<S3>/Two_Point_Distance_Calculate' */
    Two_point_distance_calculate(rtu_current_point_x, rtu_current_point_y,
      &localB->output_closest_point_x_o, &localB->output_closest_point_y_h,
      &localB->output_near_lateral_offset,
      &(localDW->Two_Point_Distance_Calculate_InstanceData.rtb));

    /* End of Outputs for SubSystem: '<Root>/Less_Than_3_Point' */
  } else {
    /* Outputs for IfAction SubSystem: '<Root>/Greater_Than_Or_Equal_3_Point' incorporates:
     *  ActionPort: '<S2>/Action Port'
     */
    /* RelationalOperator: '<S5>/Compare' incorporates:
     *  Constant: '<S5>/Constant'
     */
    localB->Compare = (*rtu_closest_segment_start_point_index_previous <=
                       Trajectory_closest_point_info_get_P.CompareToConstant1_const_e);

    /* If: '<S2>/If' */
    rtAction = -1;
    if (*rtu_closest_segment_start_point_index_previous > -1) {
      rtAction = 0;
    }

    localDW->If_ActiveSubsystem_j = rtAction;
    if (rtAction == 0) {
      /* Outputs for IfAction SubSystem: '<S2>/Local_Search' incorporates:
       *  ActionPort: '<S7>/Action Port'
       */
      /* RelationalOperator: '<S20>/Compare' incorporates:
       *  Constant: '<S20>/Constant'
       */
      localB->Compare_h = (*rtu_closest_segment_start_point_index_previous >
                           Trajectory_closest_point_info_get_P.CompareToConstant_const);

      /* Outputs for Iterator SubSystem: '<S7>/Start_Index_Search_Loop' incorporates:
       *  WhileIterator: '<S23>/While Iterator'
       */
      s23_iter = 1;

      /* InitializeConditions for UnitDelay: '<S23>/Unit Delay' */
      localDW->head_arc_length_previous =
        Trajectory_closest_point_info_get_P.UnitDelay_InitialCondition_h;
      loopCond = localB->Compare_h;
      while (loopCond && (s23_iter <= 20001)) {
        /* Outputs for Iterator SubSystem: '<S7>/Start_Index_Search_Loop' incorporates:
         *  WhileIterator: '<S23>/While Iterator'
         */
        localB->WhileIterator = s23_iter;

        /* Sum: '<S23>/Plus' incorporates:
         *  Constant: '<S23>/Constant1'
         */
        localB->Plus_f = *rtu_closest_segment_start_point_index_previous +
          Trajectory_closest_point_info_get_P.Constant1_Value_b;

        /* Sum: '<S23>/Subtract2' */
        localB->start_index = localB->Plus_f - localB->WhileIterator;

        /* Selector: '<S23>/Selector2' */
        localB->Selector2_e = rtu_trajectory_segment_length[localB->start_index
          - 1];

        /* UnitDelay: '<S23>/Unit Delay' */
        localB->UnitDelay = localDW->head_arc_length_previous;

        /* Sum: '<S23>/Plus1' */
        localB->head_arc_length_current = localB->Selector2_e +
          localB->UnitDelay;

        /* RelationalOperator: '<S25>/Compare' incorporates:
         *  Constant: '<S25>/Constant'
         */
        localB->Compare_j = (localB->head_arc_length_current <
                             rtP_SINGLE_STEP_MOTION_ARC_LENGTH_THRESHOLD);

        /* RelationalOperator: '<S26>/Compare' incorporates:
         *  Constant: '<S26>/Constant'
         */
        localB->Compare_jr = (localB->start_index >=
                              Trajectory_closest_point_info_get_P.CompareToConstant1_const);

        /* Logic: '<S23>/AND' */
        localB->AND_f = (localB->Compare_j && localB->Compare_jr);

        /* Update for UnitDelay: '<S23>/Unit Delay' */
        localDW->head_arc_length_previous = localB->head_arc_length_current;
        loopCond = localB->AND_f;
        s23_iter++;
      }

      /* End of Outputs for SubSystem: '<S7>/Start_Index_Search_Loop' */

      /* RelationalOperator: '<S21>/Compare' incorporates:
       *  Constant: '<S21>/Constant'
       */
      localB->Compare_i = (*rtu_closest_segment_start_point_index_previous >
                           Trajectory_closest_point_info_get_P.CompareToConstant1_const_a);

      /* Outputs for Iterator SubSystem: '<S7>/End_Index_Search_Loop' incorporates:
       *  WhileIterator: '<S22>/While Iterator'
       */
      s23_iter = 1;

      /* InitializeConditions for UnitDelay: '<S22>/Unit Delay' */
      localDW->tail_arc_length_previous =
        Trajectory_closest_point_info_get_P.UnitDelay_InitialCondition;
      loopCond = localB->Compare_i;
      while (loopCond && (s23_iter <= 20001)) {
        /* Outputs for Iterator SubSystem: '<S7>/End_Index_Search_Loop' incorporates:
         *  WhileIterator: '<S22>/While Iterator'
         */
        localB->WhileIterator_e = s23_iter;

        /* Sum: '<S22>/Plus2' */
        localB->end_index = *rtu_closest_segment_start_point_index_previous +
          localB->WhileIterator_e;

        /* Selector: '<S22>/Selector2' */
        localB->Selector2_p = rtu_trajectory_segment_length[localB->end_index -
          1];

        /* UnitDelay: '<S22>/Unit Delay' */
        localB->UnitDelay_g = localDW->tail_arc_length_previous;

        /* Sum: '<S22>/Plus1' */
        localB->tail_arc_length_current = localB->Selector2_p +
          localB->UnitDelay_g;

        /* RelationalOperator: '<S24>/Compare' incorporates:
         *  Constant: '<S24>/Constant'
         */
        localB->Compare_b = (localB->tail_arc_length_current <
                             rtP_SINGLE_STEP_MOTION_ARC_LENGTH_THRESHOLD);

        /* Sum: '<S22>/Subtract' incorporates:
         *  Constant: '<S22>/Constant1'
         */
        localB->Subtract = *rtu_way_point_number -
          Trajectory_closest_point_info_get_P.Constant1_Value_o;

        /* RelationalOperator: '<S22>/Less Than' */
        localB->LessThan_o = (localB->end_index < localB->Subtract);

        /* Logic: '<S22>/AND' */
        localB->AND_n = (localB->Compare_b && localB->LessThan_o);

        /* Update for UnitDelay: '<S22>/Unit Delay' */
        localDW->tail_arc_length_previous = localB->tail_arc_length_current;
        loopCond = localB->AND_n;
        s23_iter++;
      }

      /* End of Outputs for SubSystem: '<S7>/End_Index_Search_Loop' */

      /* RelationalOperator: '<S7>/LessThanOrEqual' */
      localB->LessThanOrEqual_b = (localB->start_index <= localB->end_index);

      /* Outputs for Iterator SubSystem: '<S7>/Closest_Point_Search_Loop' incorporates:
       *  WhileIterator: '<S19>/While Iterator'
       */
      s23_iter = 1;
      loopCond = localB->LessThanOrEqual_b;
      while (loopCond && (s23_iter <= 20001)) {
        /* Outputs for Iterator SubSystem: '<S7>/Closest_Point_Search_Loop' incorporates:
         *  WhileIterator: '<S19>/While Iterator'
         */
        localB->WhileIterator_c = s23_iter;

        /* Sum: '<S19>/Subtract' incorporates:
         *  Constant: '<S19>/Constant1'
         */
        localB->Subtract_m = localB->start_index -
          Trajectory_closest_point_info_get_P.Constant1_Value_l;

        /* Sum: '<S19>/Plus2' */
        localB->traverse_index_b = localB->Subtract_m + localB->WhileIterator_c;

        /* RelationalOperator: '<S19>/LessThanOrEqual' */
        localB->LessThanOrEqual_d = (localB->traverse_index_b <=
          localB->end_index);

        /* Selector: '<S19>/Selector1' */
        localB->traverse_point_x = rtu_trajectory_x[localB->traverse_index_b - 1];

        /* Selector: '<S19>/Selector3' */
        localB->traverse_point_y = rtu_trajectory_y[localB->traverse_index_b - 1];

        /* Sum: '<S19>/Plus3' incorporates:
         *  Constant: '<S19>/Constant2'
         */
        localB->Plus3_k = localB->traverse_index_b +
          Trajectory_closest_point_info_get_P.Constant2_Value;

        /* Selector: '<S19>/Selector4' */
        localB->Selector4_a = rtu_trajectory_x[localB->Plus3_k - 1];

        /* Selector: '<S19>/Selector5' */
        localB->Selector5_k = rtu_trajectory_y[localB->Plus3_k - 1];

        /* ModelReference: '<S19>/Vector_Projection_Get_Closest_Point1' */
        Vector_projection_get_closest_point(rtu_current_point_x,
          rtu_current_point_y, &localB->traverse_point_x,
          &localB->traverse_point_y, &localB->Selector4_a, &localB->Selector5_k,
          &localB->output_closest_point_x_k, &localB->output_closest_point_y_l,
          &localB->projection_rate1_m,
          &(localDW->Vector_Projection_Get_Closest_Point1_InstanceData_e.rtb));

        /* ModelReference: '<S19>/Two_Point_Distance1_Calculate' */
        Two_point_distance_calculate(rtu_current_point_x, rtu_current_point_y,
          &localB->output_closest_point_x_k, &localB->output_closest_point_y_l,
          &localB->output_near_lateral_offset_c,
          &(localDW->Two_Point_Distance1_Calculate_InstanceData_j.rtb));

        /* Selector: '<S19>/Selector6' */
        localB->Selector6_p = rtu_trajectory_x[localB->Plus3_k - 1];

        /* Selector: '<S19>/Selector7' */
        localB->Selector7_o = rtu_trajectory_y[localB->Plus3_k - 1];

        /* Sum: '<S19>/Plus4' incorporates:
         *  Constant: '<S19>/Constant3'
         */
        localB->Plus4_o = localB->Plus3_k +
          Trajectory_closest_point_info_get_P.Constant3_Value;

        /* Selector: '<S19>/Selector8' */
        localB->Selector8_p = rtu_trajectory_x[localB->Plus4_o - 1];

        /* Selector: '<S19>/Selector9' */
        localB->Selector9_m = rtu_trajectory_y[localB->Plus4_o - 1];

        /* ModelReference: '<S19>/Vector_Projection_Get_Closest_Point2' */
        Vector_projection_get_closest_point(rtu_current_point_x,
          rtu_current_point_y, &localB->Selector6_p, &localB->Selector7_o,
          &localB->Selector8_p, &localB->Selector9_m,
          &localB->neighboring_segment_closest_point2_x_p,
          &localB->neighboring_segment_closest_point2_y_a,
          &localB->projection_rate2_f,
          &(localDW->Vector_Projection_Get_Closest_Point2_InstanceData_a.rtb));

        /* ModelReference: '<S19>/Two_Point_Distance2_Calculate' */
        Two_point_distance_calculate(rtu_current_point_x, rtu_current_point_y,
          &localB->neighboring_segment_closest_point2_x_p,
          &localB->neighboring_segment_closest_point2_y_a, &localB->distance2_f,
          &(localDW->Two_Point_Distance2_Calculate_InstanceData_l.rtb));

        /* RelationalOperator: '<S19>/GreaterThanOrEqual' */
        localB->closest_point_invalid_flag =
          (localB->output_near_lateral_offset_c >= localB->distance2_f);

        /* Logic: '<S19>/AND' */
        localB->AND_g = (localB->LessThanOrEqual_d &&
                         localB->closest_point_invalid_flag);

        /* Selector: '<S19>/Selector10' */
        localB->Selector10_f = rtu_trajectory_curvature[localB->Plus3_k - 1];

        /* Selector: '<S19>/Selector2' */
        localB->temp_next_to_traverse_point_curvature =
          rtu_trajectory_curvature[localB->traverse_index_b - 1];

        /* Sum: '<S19>/Subtract1' */
        localB->Subtract1_n = localB->Selector10_f -
          localB->temp_next_to_traverse_point_curvature;

        /* Product: '<S19>/Product' */
        localB->Product_b = localB->projection_rate1_m * localB->Subtract1_n;

        /* Sum: '<S19>/Plus' */
        localB->output_closest_point_curvature_i = localB->Product_b +
          localB->temp_next_to_traverse_point_curvature;
        loopCond = localB->AND_g;
        s23_iter++;
      }

      /* End of Outputs for SubSystem: '<S7>/Closest_Point_Search_Loop' */
      /* End of Outputs for SubSystem: '<S2>/Local_Search' */
    }

    /* End of If: '<S2>/If' */

    /* Logic: '<S2>/OR' */
    localB->global_search_enable_flag = (localB->closest_point_invalid_flag ||
      localB->Compare);

    /* If: '<S2>/If1' incorporates:
     *  Constant: '<S8>/Constant2'
     */
    if (localB->global_search_enable_flag) {
      /* Outputs for IfAction SubSystem: '<S2>/Global_Search' incorporates:
       *  ActionPort: '<S6>/Action Port'
       */
      localB->VectorConcatenate[0] =
        Trajectory_closest_point_info_get_P.Constant2_Value_oh;

      /* Sum: '<S8>/Subtract2' incorporates:
       *  Constant: '<S8>/Constant11'
       *  Constant: '<S8>/Constant2'
       */
      localB->Subtract2 = *rtu_way_point_number -
        Trajectory_closest_point_info_get_P.Constant11_Value_b;

      /* SignalConversion generated from: '<S8>/Vector Concatenate' */
      localB->VectorConcatenate[1] = localB->Subtract2;

      /* Selector: '<S8>/Selector2' incorporates:
       *  Concatenate: '<S8>/Vector Concatenate'
       */
      localB->Selector2[0] = rtu_trajectory_x[localB->VectorConcatenate[0] - 1];
      localB->Selector2[1] = rtu_trajectory_x[localB->VectorConcatenate[1] - 1];

      /* DataStoreWrite: '<S8>/Data Store Write' incorporates:
       *  Constant: '<S8>/Constant1'
       *  Selector: '<S8>/Selector2'
       */
      localDW->
        closer_point_x_queue[Trajectory_closest_point_info_get_P.Constant1_Value_d
        [0] - 1] = localB->Selector2[0];

      /* Selector: '<S8>/Selector1' incorporates:
       *  Concatenate: '<S8>/Vector Concatenate'
       */
      localB->Selector1[0] = rtu_trajectory_y[localB->VectorConcatenate[0] - 1];

      /* DataStoreWrite: '<S8>/Data Store Write' incorporates:
       *  Constant: '<S8>/Constant1'
       *  Selector: '<S8>/Selector2'
       */
      localDW->
        closer_point_x_queue[Trajectory_closest_point_info_get_P.Constant1_Value_d
        [1] - 1] = localB->Selector2[1];

      /* Selector: '<S8>/Selector1' incorporates:
       *  Concatenate: '<S8>/Vector Concatenate'
       */
      localB->Selector1[1] = rtu_trajectory_y[localB->VectorConcatenate[1] - 1];

      /* DataStoreWrite: '<S8>/Data Store Write1' incorporates:
       *  Constant: '<S8>/Constant4'
       *  Selector: '<S8>/Selector1'
       */
      localDW->
        closer_point_y_queue[Trajectory_closest_point_info_get_P.Constant4_Value[
        0] - 1] = localB->Selector1[0];
      localDW->
        closer_point_y_queue[Trajectory_closest_point_info_get_P.Constant4_Value[
        1] - 1] = localB->Selector1[1];

      /* Selector: '<S8>/Selector3' incorporates:
       *  Constant: '<S8>/Constant6'
       */
      localB->Selector3 =
        rtu_trajectory_yaw_angle[Trajectory_closest_point_info_get_P.Constant6_Value
        - 1];

      /* Sum: '<S8>/Subtract' */
      localB->temp_delta_angle1 = *rtu_current_point_yaw_angle -
        localB->Selector3;

      /* ModelReference: '<S8>/Custom_Mod1' incorporates:
       *  Constant: '<S8>/Constant7'
       *  Constant: '<S8>/Constant8'
       *  Constant: '<S8>/Constant9'
       */
      Custom_mod(&localB->temp_delta_angle1, &rtP_DELTA_ANGLE_COMPENSATION1,
                 &rtP_DELTA_ANGLE_DIVISOR360, &rtP_DELTA_ANGLE_COMPENSATION2,
                 &localB->specific_range_delta_angle1,
                 &(localDW->Custom_Mod1_InstanceData.rtb));

      /* Abs: '<S8>/Abs' */
      localB->Abs = std::abs(localB->specific_range_delta_angle1);

      /* SignalConversion generated from: '<S8>/Vector Concatenate2' */
      localB->VectorConcatenate2[0] = localB->Abs;

      /* Selector: '<S8>/Selector4' */
      localB->Selector4 = rtu_trajectory_yaw_angle[localB->Subtract2 - 1];

      /* Sum: '<S8>/Subtract1' */
      localB->temp_delta_angle2 = *rtu_current_point_yaw_angle -
        localB->Selector4;

      /* ModelReference: '<S8>/Custom_Mod2' incorporates:
       *  Constant: '<S8>/Constant24'
       *  Constant: '<S8>/Constant25'
       *  Constant: '<S8>/Constant26'
       */
      Custom_mod(&localB->temp_delta_angle2, &rtP_DELTA_ANGLE_COMPENSATION1,
                 &rtP_DELTA_ANGLE_DIVISOR360, &rtP_DELTA_ANGLE_COMPENSATION2,
                 &localB->specific_range_delta_angle2,
                 &(localDW->Custom_Mod2_InstanceData.rtb));

      /* Abs: '<S8>/Abs1' */
      localB->VectorConcatenate2[1] = std::abs
        (localB->specific_range_delta_angle2);

      /* DataStoreWrite: '<S8>/Data Store Write2' incorporates:
       *  Constant: '<S8>/Constant14'
       */
      localDW->
        delta_angle_queue[Trajectory_closest_point_info_get_P.Constant14_Value[0]
        - 1] = localB->VectorConcatenate2[0];
      localDW->
        delta_angle_queue[Trajectory_closest_point_info_get_P.Constant14_Value[1]
        - 1] = localB->VectorConcatenate2[1];

      /* DataStoreWrite: '<S8>/Data Store Write3' incorporates:
       *  Concatenate: '<S8>/Vector Concatenate'
       *  Constant: '<S8>/Constant16'
       */
      localDW->
        closer_point_index_queue[Trajectory_closest_point_info_get_P.Constant16_Value
        [0] - 1] = localB->VectorConcatenate[0];
      localDW->
        closer_point_index_queue[Trajectory_closest_point_info_get_P.Constant16_Value
        [1] - 1] = localB->VectorConcatenate[1];

      /* Selector: '<S8>/Selector5' incorporates:
       *  Constant: '<S8>/Constant19'
       */
      localB->Selector5 =
        rtu_trajectory_x[Trajectory_closest_point_info_get_P.Constant19_Value -
        1];

      /* Selector: '<S8>/Selector6' incorporates:
       *  Constant: '<S8>/Constant20'
       */
      localB->Selector6 =
        rtu_trajectory_y[Trajectory_closest_point_info_get_P.Constant20_Value -
        1];

      /* ModelReference: '<S8>/Two_Point_Distance1_Calculate' */
      Two_point_distance_calculate(rtu_current_point_x, rtu_current_point_y,
        &localB->Selector5, &localB->Selector6,
        &localB->specific_near_lateral_offset1,
        &(localDW->Two_Point_Distance1_Calculate_InstanceData.rtb));

      /* SignalConversion generated from: '<S8>/Vector Concatenate4' */
      localB->VectorConcatenate4[0] = localB->specific_near_lateral_offset1;

      /* Selector: '<S8>/Selector7' */
      localB->Selector7 = rtu_trajectory_x[localB->Subtract2 - 1];

      /* Selector: '<S8>/Selector8' */
      localB->Selector8 = rtu_trajectory_y[localB->Subtract2 - 1];

      /* ModelReference: '<S8>/Two_Point_Distance2_Calculate' */
      Two_point_distance_calculate(rtu_current_point_x, rtu_current_point_y,
        &localB->Selector7, &localB->Selector8,
        &localB->specific_near_lateral_offset2,
        &(localDW->Two_Point_Distance2_Calculate_InstanceData.rtb));

      /* SignalConversion generated from: '<S8>/Vector Concatenate4' */
      localB->VectorConcatenate4[1] = localB->specific_near_lateral_offset2;

      /* DataStoreWrite: '<S8>/Data Store Write4' incorporates:
       *  Constant: '<S8>/Constant22'
       */
      localDW->
        near_lateral_offset_queue[Trajectory_closest_point_info_get_P.Constant22_Value
        [0] - 1] = localB->VectorConcatenate4[0];

      /* Selector: '<S8>/Selector9' incorporates:
       *  Concatenate: '<S8>/Vector Concatenate'
       */
      localB->Selector9[0] = rtu_trajectory_curvature[localB->VectorConcatenate
        [0] - 1];

      /* DataStoreWrite: '<S8>/Data Store Write4' incorporates:
       *  Constant: '<S8>/Constant22'
       */
      localDW->
        near_lateral_offset_queue[Trajectory_closest_point_info_get_P.Constant22_Value
        [1] - 1] = localB->VectorConcatenate4[1];

      /* Selector: '<S8>/Selector9' incorporates:
       *  Concatenate: '<S8>/Vector Concatenate'
       */
      localB->Selector9[1] = rtu_trajectory_curvature[localB->VectorConcatenate
        [1] - 1];

      /* DataStoreWrite: '<S8>/Data Store Write6' incorporates:
       *  Constant: '<S8>/Constant3'
       *  Selector: '<S8>/Selector9'
       */
      localDW->
        closer_point_curvature_queue[Trajectory_closest_point_info_get_P.Constant3_Value_k
        [0] - 1] = localB->Selector9[0];
      localDW->
        closer_point_curvature_queue[Trajectory_closest_point_info_get_P.Constant3_Value_k
        [1] - 1] = localB->Selector9[1];

      /* DataStoreWrite: '<S8>/Data Store Write7' */
      localDW->min_delta_angle = localB->Abs;

      /* DataStoreWrite: '<S8>/Data Store Write9' */
      localDW->closest_distance = localB->specific_near_lateral_offset1;

      /* DataStoreWrite: '<S8>/Data Store Write5' incorporates:
       *  Constant: '<S8>/Constant23'
       */
      localDW->valid_queue_length =
        Trajectory_closest_point_info_get_P.Constant23_Value;

      /* Sum: '<S8>/Subtract3' incorporates:
       *  Constant: '<S8>/Constant5'
       */
      localB->Subtract3 = *rtu_way_point_number -
        Trajectory_closest_point_info_get_P.Constant5_Value;

      /* Outputs for Iterator SubSystem: '<S6>/Closer_Point_Queue_Search_Loop' incorporates:
       *  ForIterator: '<S9>/For Iterator'
       */
      yIdx = localB->Subtract3;
      if (yIdx > 2147483646) {
        yIdx = 2147483646;
      } else if (yIdx < 0) {
        yIdx = 0;
      }

      for (traverse_index = 1; traverse_index <= yIdx; traverse_index++) {
        /* Outputs for Iterator SubSystem: '<S6>/Closer_Point_Queue_Search_Loop' incorporates:
         *  ForIterator: '<S9>/For Iterator'
         */
        localB->traverse_index = traverse_index;

        /* Sum: '<S9>/Plus3' incorporates:
         *  Constant: '<S9>/Constant2'
         */
        localB->Plus3 = localB->traverse_index +
          Trajectory_closest_point_info_get_P.Constant2_Value_o;

        /* Selector: '<S9>/Selector6' */
        localB->Selector6_b = rtu_trajectory_x[localB->Plus3 - 1];

        /* Selector: '<S9>/Selector7' */
        localB->Selector7_m = rtu_trajectory_y[localB->Plus3 - 1];

        /* Sum: '<S9>/Plus4' incorporates:
         *  Constant: '<S9>/Constant3'
         */
        localB->Plus4 = localB->Plus3 +
          Trajectory_closest_point_info_get_P.Constant3_Value_n;

        /* Selector: '<S9>/Selector8' */
        localB->Selector8_i = rtu_trajectory_x[localB->Plus4 - 1];

        /* Selector: '<S9>/Selector9' */
        localB->Selector9_b = rtu_trajectory_y[localB->Plus4 - 1];

        /* ModelReference: '<S9>/Vector_Projection_Get_Closest_Point2' */
        Vector_projection_get_closest_point(rtu_current_point_x,
          rtu_current_point_y, &localB->Selector6_b, &localB->Selector7_m,
          &localB->Selector8_i, &localB->Selector9_b,
          &localB->neighboring_segment_closest_point2_x,
          &localB->neighboring_segment_closest_point2_y,
          &localB->projection_rate2,
          &(localDW->Vector_Projection_Get_Closest_Point2_InstanceData.rtb));

        /* ModelReference: '<S9>/Two_Point_Distance2_Calculate' */
        Two_point_distance_calculate(rtu_current_point_x, rtu_current_point_y,
          &localB->neighboring_segment_closest_point2_x,
          &localB->neighboring_segment_closest_point2_y, &localB->distance2,
          &(localDW->Two_Point_Distance2_Calculate_InstanceData_b.rtb));

        /* Selector: '<S9>/Selector1' */
        localB->Selector1_k = rtu_trajectory_x[localB->traverse_index - 1];

        /* Selector: '<S9>/Selector3' */
        localB->Selector3_e = rtu_trajectory_y[localB->traverse_index - 1];

        /* Selector: '<S9>/Selector4' */
        localB->Selector4_d = rtu_trajectory_x[localB->Plus3 - 1];

        /* Selector: '<S9>/Selector5' */
        localB->Selector5_p = rtu_trajectory_y[localB->Plus3 - 1];

        /* ModelReference: '<S9>/Vector_Projection_Get_Closest_Point1' */
        Vector_projection_get_closest_point(rtu_current_point_x,
          rtu_current_point_y, &localB->Selector1_k, &localB->Selector3_e,
          &localB->Selector4_d, &localB->Selector5_p,
          &localB->neighboring_segment_closest_point1_x,
          &localB->neighboring_segment_closest_point1_y,
          &localB->projection_rate1,
          &(localDW->Vector_Projection_Get_Closest_Point1_InstanceData.rtb));

        /* ModelReference: '<S9>/Two_Point_Distance1_Calculate' */
        Two_point_distance_calculate(rtu_current_point_x, rtu_current_point_y,
          &localB->neighboring_segment_closest_point1_x,
          &localB->neighboring_segment_closest_point1_y, &localB->distance1,
          &(localDW->Two_Point_Distance1_Calculate_InstanceData_d.rtb));

        /* Selector: '<S9>/Selector2' */
        localB->Selector2_b = rtu_trajectory_yaw_angle[localB->traverse_index -
          1];

        /* Sum: '<S9>/Subtract' */
        localB->traverse_delta_angle = *rtu_current_point_yaw_angle -
          localB->Selector2_b;

        /* ModelReference: '<S9>/Custom_Mod' incorporates:
         *  Constant: '<S9>/Constant7'
         *  Constant: '<S9>/Constant8'
         *  Constant: '<S9>/Constant9'
         */
        Custom_mod(&localB->traverse_delta_angle, &rtP_DELTA_ANGLE_COMPENSATION1,
                   &rtP_DELTA_ANGLE_DIVISOR360, &rtP_DELTA_ANGLE_COMPENSATION2,
                   &localB->specific_range_traverse_delta_angle,
                   &(localDW->Custom_Mod_InstanceData.rtb));

        /* Abs: '<S9>/Abs' */
        localB->absolute_delta_angle = std::abs
          (localB->specific_range_traverse_delta_angle);

        /* Sum: '<S9>/Subtract1' incorporates:
         *  Constant: '<S9>/Constant1'
         */
        localB->Subtract1_j = *rtu_way_point_number -
          Trajectory_closest_point_info_get_P.Constant1_Value_a;

        /* RelationalOperator: '<S9>/GreaterThanOrEqual' */
        localB->GreaterThanOrEqual_i = (localB->traverse_index >=
          localB->Subtract1_j);

        /* If: '<S9>/If' */
        if (localB->distance2 > localB->distance1) {
          /* Outputs for IfAction SubSystem: '<S9>/Find_A_Closer_Point' incorporates:
           *  ActionPort: '<S13>/Action Port'
           */
          /* DataStoreRead: '<S13>/Data Store Read5' */
          localB->DataStoreRead5_d =
            localDW->distance_relationship_transition_flag;

          /* DataStoreRead: '<S13>/Data Store Read1' */
          localB->DataStoreRead1_n = localDW->valid_queue_length;

          /* RelationalOperator: '<S13>/Less Than' incorporates:
           *  Constant: '<S13>/Constant1'
           */
          localB->LessThan_n = (localB->DataStoreRead1_n <
                                rtP_N_ALTERNATIVE_CLOSEST_POINT_QUEUE);

          /* If: '<S13>/If' */
          if ((!localB->DataStoreRead5_d) && localB->LessThan_n) {
            /* Outputs for IfAction SubSystem: '<S13>/Change_Distance_Relationship' incorporates:
             *  ActionPort: '<S15>/Action Port'
             */
            /* DataStoreRead: '<S15>/Data Store Read5' */
            localB->DataStoreRead5_h = localDW->valid_queue_length;

            /* Sum: '<S15>/Plus' incorporates:
             *  Constant: '<S15>/Constant11'
             */
            localB->Plus_i = localB->DataStoreRead5_h +
              Trajectory_closest_point_info_get_P.Constant11_Value;

            /* MinMax: '<S15>/Min' incorporates:
             *  Constant: '<S15>/Constant1'
             */
            u0 = localB->Plus_i;
            s23_iter = rtP_N_ALTERNATIVE_CLOSEST_POINT_QUEUE;
            if (u0 < s23_iter) {
              s23_iter = u0;
            }

            /* MinMax: '<S15>/Min' */
            localB->output_valid_queue_length_p = s23_iter;

            /* DataStoreWrite: '<S15>/Data Store Write' */
            localDW->closer_point_x_queue[localB->output_valid_queue_length_p -
              1] = localB->neighboring_segment_closest_point1_x;

            /* DataStoreWrite: '<S15>/Data Store Write1' */
            localDW->closer_point_y_queue[localB->output_valid_queue_length_p -
              1] = localB->neighboring_segment_closest_point1_y;

            /* DataStoreWrite: '<S15>/Data Store Write2' */
            localDW->delta_angle_queue[localB->output_valid_queue_length_p - 1] =
              localB->absolute_delta_angle;

            /* DataStoreWrite: '<S15>/Data Store Write3' */
            localDW->closer_point_index_queue
              [localB->output_valid_queue_length_p - 1] = localB->traverse_index;

            /* DataStoreWrite: '<S15>/Data Store Write4' */
            localDW->near_lateral_offset_queue
              [localB->output_valid_queue_length_p - 1] = localB->distance1;

            /* Sum: '<S15>/Plus1' incorporates:
             *  Constant: '<S15>/Constant3'
             */
            localB->Plus1_m = localB->traverse_index +
              Trajectory_closest_point_info_get_P.Constant3_Value_f;

            /* Selector: '<S15>/Selector10' */
            localB->Selector10_h = rtu_trajectory_curvature[localB->Plus1_m - 1];

            /* Selector: '<S15>/Selector2' */
            localB->Selector2_a = rtu_trajectory_curvature
              [localB->traverse_index - 1];

            /* Sum: '<S15>/Subtract1' */
            localB->Subtract1_h = localB->Selector10_h - localB->Selector2_a;

            /* Product: '<S15>/Product' */
            localB->Product_a = localB->projection_rate1 * localB->Subtract1_h;

            /* Sum: '<S15>/Plus2' */
            localB->Plus2_e = localB->Product_a + localB->Selector2_a;

            /* DataStoreWrite: '<S15>/Data Store Write5' */
            localDW->closer_point_curvature_queue
              [localB->output_valid_queue_length_p - 1] = localB->Plus2_e;

            /* DataStoreWrite: '<S15>/Data Store Write6' incorporates:
             *  Constant: '<S15>/Constant2'
             */
            localDW->distance_relationship_transition_flag =
              Trajectory_closest_point_info_get_P.Constant2_Value_g;

            /* Merge: '<S9>/Merge' incorporates:
             *  SignalConversion: '<S15>/Signal Copy'
             */
            localB->output_valid_queue_length =
              localB->output_valid_queue_length_p;

            /* End of Outputs for SubSystem: '<S13>/Change_Distance_Relationship' */
          }

          /* End of If: '<S13>/If' */
          /* End of Outputs for SubSystem: '<S9>/Find_A_Closer_Point' */
        } else {
          /* Outputs for IfAction SubSystem: '<S9>/Change_Distance_Relationship' incorporates:
           *  ActionPort: '<S12>/Action Port'
           */
          /* DataStoreWrite: '<S12>/Data Store Write6' incorporates:
           *  Constant: '<S12>/Constant2'
           */
          localDW->distance_relationship_transition_flag =
            Trajectory_closest_point_info_get_P.Constant2_Value_a;

          /* DataStoreRead: '<S12>/Data Store Read1' */
          localB->DataStoreRead1_e = localDW->valid_queue_length;

          /* RelationalOperator: '<S12>/Less Than' incorporates:
           *  Constant: '<S12>/Constant1'
           */
          localB->LessThan = (localB->DataStoreRead1_e <
                              rtP_N_ALTERNATIVE_CLOSEST_POINT_QUEUE);

          /* If: '<S12>/If' */
          if (localB->GreaterThanOrEqual_i && localB->LessThan) {
            /* Outputs for IfAction SubSystem: '<S12>/Global_Search_Terminate' incorporates:
             *  ActionPort: '<S14>/Action Port'
             */
            /* DataStoreRead: '<S14>/Data Store Read5' */
            localB->DataStoreRead5 = localDW->valid_queue_length;

            /* Sum: '<S14>/Plus' incorporates:
             *  Constant: '<S14>/Constant11'
             */
            localB->Plus = localB->DataStoreRead5 +
              Trajectory_closest_point_info_get_P.Constant11_Value_d;

            /* MinMax: '<S14>/Min' incorporates:
             *  Constant: '<S14>/Constant1'
             */
            u0 = localB->Plus;
            s23_iter = rtP_N_ALTERNATIVE_CLOSEST_POINT_QUEUE;
            if (u0 < s23_iter) {
              s23_iter = u0;
            }

            /* MinMax: '<S14>/Min' */
            localB->output_valid_queue_length_f = s23_iter;

            /* DataStoreWrite: '<S14>/Data Store Write' */
            localDW->closer_point_x_queue[localB->output_valid_queue_length_f -
              1] = localB->neighboring_segment_closest_point2_x;

            /* DataStoreWrite: '<S14>/Data Store Write1' */
            localDW->closer_point_y_queue[localB->output_valid_queue_length_f -
              1] = localB->neighboring_segment_closest_point2_y;

            /* DataStoreWrite: '<S14>/Data Store Write2' */
            localDW->delta_angle_queue[localB->output_valid_queue_length_f - 1] =
              localB->absolute_delta_angle;

            /* Sum: '<S14>/Plus1' incorporates:
             *  Constant: '<S14>/Constant2'
             */
            localB->Plus1 = localB->traverse_index +
              Trajectory_closest_point_info_get_P.Constant2_Value_d;

            /* DataStoreWrite: '<S14>/Data Store Write3' */
            localDW->closer_point_index_queue
              [localB->output_valid_queue_length_f - 1] = localB->Plus1;

            /* DataStoreWrite: '<S14>/Data Store Write4' */
            localDW->near_lateral_offset_queue
              [localB->output_valid_queue_length_f - 1] = localB->distance2;

            /* Sum: '<S14>/Plus3' incorporates:
             *  Constant: '<S14>/Constant3'
             */
            localB->Plus3_n = localB->traverse_index +
              Trajectory_closest_point_info_get_P.Constant3_Value_p;

            /* Selector: '<S14>/Selector10' */
            localB->Selector10 = rtu_trajectory_curvature[localB->Plus3_n - 1];

            /* Selector: '<S14>/Selector2' */
            localB->next_to_traverse_point_curvature =
              rtu_trajectory_curvature[localB->Plus1 - 1];

            /* Sum: '<S14>/Subtract1' */
            localB->Subtract1 = localB->Selector10 -
              localB->next_to_traverse_point_curvature;

            /* Product: '<S14>/Product' */
            localB->Product = localB->projection_rate2 * localB->Subtract1;

            /* Sum: '<S14>/Plus2' */
            localB->Plus2 = localB->Product +
              localB->next_to_traverse_point_curvature;

            /* DataStoreWrite: '<S14>/Data Store Write5' */
            localDW->closer_point_curvature_queue
              [localB->output_valid_queue_length_f - 1] = localB->Plus2;

            /* Merge: '<S9>/Merge' incorporates:
             *  SignalConversion: '<S14>/Signal Copy'
             */
            localB->output_valid_queue_length =
              localB->output_valid_queue_length_f;

            /* End of Outputs for SubSystem: '<S12>/Global_Search_Terminate' */
          }

          /* End of If: '<S12>/If' */
          /* End of Outputs for SubSystem: '<S9>/Change_Distance_Relationship' */
        }

        /* End of If: '<S9>/If' */

        /* DataStoreWrite: '<S9>/Data Store Write5' */
        localDW->valid_queue_length = localB->output_valid_queue_length;
      }

      /* End of Outputs for SubSystem: '<S6>/Closer_Point_Queue_Search_Loop' */

      /* Outputs for Iterator SubSystem: '<S6>/Specific_Closest_Point_Search_Loop' incorporates:
       *  ForIterator: '<S11>/For Iterator'
       */
      yIdx = localB->output_valid_queue_length;
      if (yIdx > 2147483646) {
        yIdx = 2147483646;
      } else if (yIdx < 0) {
        yIdx = 0;
      }

      for (traverse_index = 1; traverse_index <= yIdx; traverse_index++) {
        /* Outputs for Iterator SubSystem: '<S6>/Specific_Closest_Point_Search_Loop' incorporates:
         *  ForIterator: '<S11>/For Iterator'
         */
        localB->ForIterator = traverse_index;

        /* DataStoreRead: '<S11>/Data Store Read' */
        localB->DataStoreRead_a = localDW->near_lateral_offset_queue
          [localB->ForIterator - 1];

        /* DataStoreRead: '<S11>/Data Store Read1' */
        localB->DataStoreRead1 = localDW->closest_distance;

        /* DataStoreRead: '<S11>/Data Store Read2' */
        localB->DataStoreRead2 = localDW->near_lateral_offset_queue
          [localB->ForIterator - 1];

        /* If: '<S11>/If' incorporates:
         *  Inport: '<S16>/traverse_index'
         */
        if (localB->DataStoreRead1 >= localB->DataStoreRead_a) {
          /* Outputs for IfAction SubSystem: '<S11>/Find_A_Closer_Distance_Point' incorporates:
           *  ActionPort: '<S16>/Action Port'
           */
          localB->closest_distance_index = localB->ForIterator;

          /* DataStoreRead: '<S16>/Data Store Read' incorporates:
           *  Inport: '<S16>/traverse_index'
           */
          localB->output_closest_distance = localDW->
            near_lateral_offset_queue[localB->closest_distance_index - 1];

          /* DataStoreWrite: '<S16>/Data Store Write5' */
          localDW->closest_distance = localB->output_closest_distance;

          /* End of Outputs for SubSystem: '<S11>/Find_A_Closer_Distance_Point' */
        }

        /* End of If: '<S11>/If' */

        /* If: '<S11>/If1' incorporates:
         *  Constant: '<S11>/Constant'
         */
        if (rtP_CLOSEST_DISTANCE_THRESHOLD >= localB->DataStoreRead2) {
          /* Outputs for IfAction SubSystem: '<S11>/Find_A_Point_Less_Than_Threshold' incorporates:
           *  ActionPort: '<S17>/Action Port'
           */
          /* DataStoreRead: '<S17>/Data Store Read1' */
          localB->DataStoreRead1_a = localDW->delta_angle_queue
            [localB->ForIterator - 1];

          /* DataStoreRead: '<S17>/Data Store Read2' */
          localB->DataStoreRead2_a = localDW->min_delta_angle;

          /* If: '<S17>/If' incorporates:
           *  Inport: '<S18>/traverse_index'
           */
          if (localB->DataStoreRead2_a >= localB->DataStoreRead1_a) {
            /* Outputs for IfAction SubSystem: '<S17>/Find_A_Smaller_Delta_Angle_Point' incorporates:
             *  ActionPort: '<S18>/Action Port'
             */
            localB->min_delta_angle_index = localB->ForIterator;

            /* DataStoreRead: '<S18>/Data Store Read' incorporates:
             *  Inport: '<S18>/traverse_index'
             */
            localB->DataStoreRead_m = localDW->delta_angle_queue
              [localB->min_delta_angle_index - 1];

            /* DataStoreWrite: '<S18>/Data Store Write5' */
            localDW->min_delta_angle = localB->DataStoreRead_m;

            /* End of Outputs for SubSystem: '<S17>/Find_A_Smaller_Delta_Angle_Point' */
          }

          /* End of If: '<S17>/If' */
          /* End of Outputs for SubSystem: '<S11>/Find_A_Point_Less_Than_Threshold' */
        }

        /* End of If: '<S11>/If1' */
      }

      /* End of Outputs for SubSystem: '<S6>/Specific_Closest_Point_Search_Loop' */

      /* RelationalOperator: '<S10>/LessThanOrEqual' incorporates:
       *  Constant: '<S10>/Constant1'
       */
      localB->LessThanOrEqual = (localB->output_closest_distance <=
        rtP_CLOSEST_DISTANCE_THRESHOLD);

      /* DataStoreRead: '<S10>/Data Store Read' */
      localB->DataStoreRead = localDW->delta_angle_queue
        [localB->closest_distance_index - 1];

      /* RelationalOperator: '<S10>/GreaterThanOrEqual' incorporates:
       *  Constant: '<S10>/Constant'
       */
      localB->GreaterThanOrEqual = (localB->DataStoreRead >=
        rtP_DELTA_ANGLE_THRESHOLD);

      /* Logic: '<S10>/AND' */
      localB->AND = (localB->LessThanOrEqual && localB->GreaterThanOrEqual);

      /* Switch: '<S10>/Switch' */
      if (localB->AND) {
        /* Switch: '<S10>/Switch' */
        localB->closest_point_index = localB->min_delta_angle_index;
      } else {
        /* Switch: '<S10>/Switch' */
        localB->closest_point_index = localB->closest_distance_index;
      }

      /* End of Switch: '<S10>/Switch' */

      /* DataStoreRead: '<S10>/Data Store Read1' */
      localB->output_closest_point_x = localDW->closer_point_x_queue
        [localB->closest_point_index - 1];

      /* DataStoreRead: '<S10>/Data Store Read2' */
      localB->output_closest_point_y = localDW->closer_point_y_queue
        [localB->closest_point_index - 1];

      /* DataStoreRead: '<S10>/Data Store Read3' */
      localB->output_closest_segment_start_point_index =
        localDW->closer_point_index_queue[localB->closest_point_index - 1];

      /* DataStoreRead: '<S10>/Data Store Read4' */
      localB->output_near_lateral_offset_m = localDW->
        near_lateral_offset_queue[localB->closest_point_index - 1];

      /* DataStoreRead: '<S10>/Data Store Read5' */
      localB->output_closest_point_curvature =
        localDW->closer_point_curvature_queue[localB->closest_point_index - 1];

      /* End of Outputs for SubSystem: '<S2>/Global_Search' */
    }

    /* End of If: '<S2>/If1' */

    /* Switch: '<S2>/Switch' incorporates:
     *  Switch: '<S2>/Switch1'
     *  Switch: '<S2>/Switch2'
     *  Switch: '<S2>/Switch3'
     *  Switch: '<S2>/Switch4'
     */
    if (localB->global_search_enable_flag) {
      *rty_closest_point_x = localB->output_closest_point_x;
      *rty_closest_point_y = localB->output_closest_point_y;
      *rty_closest_point_curvature = localB->output_closest_point_curvature;
      *rty_closest_segment_start_point_index =
        localB->output_closest_segment_start_point_index;

      /* Merge: '<Root>/Merge4' */
      localB->output_near_lateral_offset = localB->output_near_lateral_offset_m;
    } else {
      *rty_closest_point_x = localB->output_closest_point_x_k;
      *rty_closest_point_y = localB->output_closest_point_y_l;
      *rty_closest_point_curvature = localB->output_closest_point_curvature_i;
      *rty_closest_segment_start_point_index = localB->traverse_index_b;

      /* Merge: '<Root>/Merge4' */
      localB->output_near_lateral_offset = localB->output_near_lateral_offset_c;
    }

    /* End of Switch: '<S2>/Switch' */
    /* End of Outputs for SubSystem: '<Root>/Greater_Than_Or_Equal_3_Point' */
  }

  /* End of If: '<Root>/If' */

  /* Gain: '<S4>/Multiply' */
  localB->yaw_angle_rad = rtP_DEG2RAD * *rtu_current_point_yaw_angle;

  /* ModelReference: '<S4>/Vehicle_Coordinate_Transfer' */
  Vehicle_coordinate_transfer(rtu_current_point_x, rtu_current_point_y,
    rty_closest_point_x, rty_closest_point_y, &localB->yaw_angle_rad,
    &localB->vehicle_x1, &localB->vehicle_y1,
    &(localDW->Vehicle_Coordinate_Transfer_InstanceData.rtb));

  /* Switch: '<S4>/Switch' */
  if (localB->vehicle_y1 >= Trajectory_closest_point_info_get_P.Switch_Threshold)
  {
    *rty_near_lateral_offset = localB->output_near_lateral_offset;
  } else {
    /* UnaryMinus: '<S4>/Unary Minus' */
    localB->UnaryMinus = -localB->output_near_lateral_offset;
    *rty_near_lateral_offset = localB->UnaryMinus;
  }

  /* End of Switch: '<S4>/Switch' */
}

/* Model initialize function */
void Trajectory_closest_point_info_get_initialize(const char_T **rt_errorStatus,
  RT_MODEL_Trajectory_closest_point_info_get_T *const
  Trajectory_closest_point_info_get_M, B_Trajectory_closest_point_info_get_c_T
  *localB, DW_Trajectory_closest_point_info_get_f_T *localDW)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(Trajectory_closest_point_info_get_M, rt_errorStatus);

  /* block I/O */
  (void) std::memset((static_cast<void *>(localB)), 0,
                     sizeof(B_Trajectory_closest_point_info_get_c_T));

  {
    localB->output_near_lateral_offset = 0.0;
    localB->yaw_angle_rad = 0.0;
    localB->vehicle_x1 = 0.0;
    localB->vehicle_y1 = 0.0;
    localB->UnaryMinus = 0.0;
    localB->Selector2[0] = 0.0;
    localB->Selector2[1] = 0.0;
    localB->Selector1[0] = 0.0;
    localB->Selector1[1] = 0.0;
    localB->Selector3 = 0.0;
    localB->temp_delta_angle1 = 0.0;
    localB->specific_range_delta_angle1 = 0.0;
    localB->Abs = 0.0;
    localB->Selector4 = 0.0;
    localB->temp_delta_angle2 = 0.0;
    localB->specific_range_delta_angle2 = 0.0;
    localB->VectorConcatenate2[0] = 0.0;
    localB->VectorConcatenate2[1] = 0.0;
    localB->Selector5 = 0.0;
    localB->Selector6 = 0.0;
    localB->specific_near_lateral_offset1 = 0.0;
    localB->Selector7 = 0.0;
    localB->Selector8 = 0.0;
    localB->specific_near_lateral_offset2 = 0.0;
    localB->VectorConcatenate4[0] = 0.0;
    localB->VectorConcatenate4[1] = 0.0;
    localB->Selector9[0] = 0.0;
    localB->Selector9[1] = 0.0;
    localB->DataStoreRead = 0.0;
    localB->output_closest_point_x = 0.0;
    localB->output_closest_point_y = 0.0;
    localB->output_near_lateral_offset_m = 0.0;
    localB->output_closest_point_curvature = 0.0;
    localB->DataStoreRead_a = 0.0;
    localB->DataStoreRead1 = 0.0;
    localB->DataStoreRead2 = 0.0;
    localB->DataStoreRead1_a = 0.0;
    localB->DataStoreRead2_a = 0.0;
    localB->DataStoreRead_m = 0.0;
    localB->output_closest_distance = 0.0;
    localB->Selector6_b = 0.0;
    localB->Selector7_m = 0.0;
    localB->Selector8_i = 0.0;
    localB->Selector9_b = 0.0;
    localB->neighboring_segment_closest_point2_x = 0.0;
    localB->neighboring_segment_closest_point2_y = 0.0;
    localB->projection_rate2 = 0.0;
    localB->distance2 = 0.0;
    localB->Selector1_k = 0.0;
    localB->Selector3_e = 0.0;
    localB->Selector4_d = 0.0;
    localB->Selector5_p = 0.0;
    localB->neighboring_segment_closest_point1_x = 0.0;
    localB->neighboring_segment_closest_point1_y = 0.0;
    localB->projection_rate1 = 0.0;
    localB->distance1 = 0.0;
    localB->Selector2_b = 0.0;
    localB->traverse_delta_angle = 0.0;
    localB->specific_range_traverse_delta_angle = 0.0;
    localB->absolute_delta_angle = 0.0;
    localB->Selector10 = 0.0;
    localB->next_to_traverse_point_curvature = 0.0;
    localB->Subtract1 = 0.0;
    localB->Product = 0.0;
    localB->Plus2 = 0.0;
    localB->Selector10_h = 0.0;
    localB->Selector2_a = 0.0;
    localB->Subtract1_h = 0.0;
    localB->Product_a = 0.0;
    localB->Plus2_e = 0.0;
    localB->Selector2_e = 0.0;
    localB->UnitDelay = 0.0;
    localB->head_arc_length_current = 0.0;
    localB->Selector2_p = 0.0;
    localB->UnitDelay_g = 0.0;
    localB->tail_arc_length_current = 0.0;
    localB->traverse_point_x = 0.0;
    localB->traverse_point_y = 0.0;
    localB->Selector4_a = 0.0;
    localB->Selector5_k = 0.0;
    localB->output_closest_point_x_k = 0.0;
    localB->output_closest_point_y_l = 0.0;
    localB->projection_rate1_m = 0.0;
    localB->output_near_lateral_offset_c = 0.0;
    localB->Selector6_p = 0.0;
    localB->Selector7_o = 0.0;
    localB->Selector8_p = 0.0;
    localB->Selector9_m = 0.0;
    localB->neighboring_segment_closest_point2_x_p = 0.0;
    localB->neighboring_segment_closest_point2_y_a = 0.0;
    localB->projection_rate2_f = 0.0;
    localB->distance2_f = 0.0;
    localB->Selector10_f = 0.0;
    localB->temp_next_to_traverse_point_curvature = 0.0;
    localB->Subtract1_n = 0.0;
    localB->Product_b = 0.0;
    localB->output_closest_point_curvature_i = 0.0;
    localB->next_to_last_point_x = 0.0;
    localB->next_to_last_point_y = 0.0;
    localB->last_point_x = 0.0;
    localB->last_point_y = 0.0;
    localB->output_closest_point_x_o = 0.0;
    localB->output_closest_point_y_h = 0.0;
    localB->temp_projection_rate = 0.0;
    localB->Selector10_n = 0.0;
    localB->Selector3_o = 0.0;
    localB->Subtract1_e = 0.0;
    localB->Product_k = 0.0;
    localB->closest_point_invalid_flag = true;
  }

  /* states (dwork) */
  (void) std::memset(static_cast<void *>(localDW), 0,
                     sizeof(DW_Trajectory_closest_point_info_get_f_T));
  localDW->head_arc_length_previous = 0.0;
  localDW->tail_arc_length_previous = 0.0;

  {
    int32_T i;
    for (i = 0; i < 100; i++) {
      localDW->closer_point_x_queue[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 100; i++) {
      localDW->closer_point_y_queue[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 100; i++) {
      localDW->delta_angle_queue[i] = 0.0;
    }
  }

  {
    int32_T i;
    for (i = 0; i < 100; i++) {
      localDW->near_lateral_offset_queue[i] = 0.0;
    }
  }

  localDW->closest_distance = 0.0;

  {
    int32_T i;
    for (i = 0; i < 100; i++) {
      localDW->closer_point_curvature_queue[i] = 0.0;
    }
  }

  localDW->min_delta_angle = 0.0;

  /* Model Initialize function for ModelReference Block: '<S8>/Custom_Mod1' */
  Custom_mod_initialize(rtmGetErrorStatusPointer
                        (Trajectory_closest_point_info_get_M),
                        &(localDW->Custom_Mod1_InstanceData.rtm),
                        &(localDW->Custom_Mod1_InstanceData.rtb));

  /* Model Initialize function for ModelReference Block: '<S8>/Custom_Mod2' */
  Custom_mod_initialize(rtmGetErrorStatusPointer
                        (Trajectory_closest_point_info_get_M),
                        &(localDW->Custom_Mod2_InstanceData.rtm),
                        &(localDW->Custom_Mod2_InstanceData.rtb));

  /* Model Initialize function for ModelReference Block: '<S8>/Two_Point_Distance1_Calculate' */
  Two_point_distance_calculate_initialize(rtmGetErrorStatusPointer
    (Trajectory_closest_point_info_get_M),
    &(localDW->Two_Point_Distance1_Calculate_InstanceData.rtm),
    &(localDW->Two_Point_Distance1_Calculate_InstanceData.rtb));

  /* Model Initialize function for ModelReference Block: '<S8>/Two_Point_Distance2_Calculate' */
  Two_point_distance_calculate_initialize(rtmGetErrorStatusPointer
    (Trajectory_closest_point_info_get_M),
    &(localDW->Two_Point_Distance2_Calculate_InstanceData.rtm),
    &(localDW->Two_Point_Distance2_Calculate_InstanceData.rtb));

  /* Model Initialize function for ModelReference Block: '<S9>/Custom_Mod' */
  Custom_mod_initialize(rtmGetErrorStatusPointer
                        (Trajectory_closest_point_info_get_M),
                        &(localDW->Custom_Mod_InstanceData.rtm),
                        &(localDW->Custom_Mod_InstanceData.rtb));

  /* Model Initialize function for ModelReference Block: '<S9>/Two_Point_Distance1_Calculate' */
  Two_point_distance_calculate_initialize(rtmGetErrorStatusPointer
    (Trajectory_closest_point_info_get_M),
    &(localDW->Two_Point_Distance1_Calculate_InstanceData_d.rtm),
    &(localDW->Two_Point_Distance1_Calculate_InstanceData_d.rtb));

  /* Model Initialize function for ModelReference Block: '<S9>/Two_Point_Distance2_Calculate' */
  Two_point_distance_calculate_initialize(rtmGetErrorStatusPointer
    (Trajectory_closest_point_info_get_M),
    &(localDW->Two_Point_Distance2_Calculate_InstanceData_b.rtm),
    &(localDW->Two_Point_Distance2_Calculate_InstanceData_b.rtb));

  /* Model Initialize function for ModelReference Block: '<S9>/Vector_Projection_Get_Closest_Point1' */
  Vector_projection_get_closest_point_initialize(rtmGetErrorStatusPointer
    (Trajectory_closest_point_info_get_M),
    &(localDW->Vector_Projection_Get_Closest_Point1_InstanceData.rtm),
    &(localDW->Vector_Projection_Get_Closest_Point1_InstanceData.rtb));

  /* Model Initialize function for ModelReference Block: '<S9>/Vector_Projection_Get_Closest_Point2' */
  Vector_projection_get_closest_point_initialize(rtmGetErrorStatusPointer
    (Trajectory_closest_point_info_get_M),
    &(localDW->Vector_Projection_Get_Closest_Point2_InstanceData.rtm),
    &(localDW->Vector_Projection_Get_Closest_Point2_InstanceData.rtb));

  /* Model Initialize function for ModelReference Block: '<S19>/Two_Point_Distance1_Calculate' */
  Two_point_distance_calculate_initialize(rtmGetErrorStatusPointer
    (Trajectory_closest_point_info_get_M),
    &(localDW->Two_Point_Distance1_Calculate_InstanceData_j.rtm),
    &(localDW->Two_Point_Distance1_Calculate_InstanceData_j.rtb));

  /* Model Initialize function for ModelReference Block: '<S19>/Two_Point_Distance2_Calculate' */
  Two_point_distance_calculate_initialize(rtmGetErrorStatusPointer
    (Trajectory_closest_point_info_get_M),
    &(localDW->Two_Point_Distance2_Calculate_InstanceData_l.rtm),
    &(localDW->Two_Point_Distance2_Calculate_InstanceData_l.rtb));

  /* Model Initialize function for ModelReference Block: '<S19>/Vector_Projection_Get_Closest_Point1' */
  Vector_projection_get_closest_point_initialize(rtmGetErrorStatusPointer
    (Trajectory_closest_point_info_get_M),
    &(localDW->Vector_Projection_Get_Closest_Point1_InstanceData_e.rtm),
    &(localDW->Vector_Projection_Get_Closest_Point1_InstanceData_e.rtb));

  /* Model Initialize function for ModelReference Block: '<S19>/Vector_Projection_Get_Closest_Point2' */
  Vector_projection_get_closest_point_initialize(rtmGetErrorStatusPointer
    (Trajectory_closest_point_info_get_M),
    &(localDW->Vector_Projection_Get_Closest_Point2_InstanceData_a.rtm),
    &(localDW->Vector_Projection_Get_Closest_Point2_InstanceData_a.rtb));

  /* Model Initialize function for ModelReference Block: '<S3>/Two_Point_Distance_Calculate' */
  Two_point_distance_calculate_initialize(rtmGetErrorStatusPointer
    (Trajectory_closest_point_info_get_M),
    &(localDW->Two_Point_Distance_Calculate_InstanceData.rtm),
    &(localDW->Two_Point_Distance_Calculate_InstanceData.rtb));

  /* Model Initialize function for ModelReference Block: '<S3>/Vector_Projection_Get_Closest_Point' */
  Vector_projection_get_closest_point_initialize(rtmGetErrorStatusPointer
    (Trajectory_closest_point_info_get_M),
    &(localDW->Vector_Projection_Get_Closest_Point_InstanceData.rtm),
    &(localDW->Vector_Projection_Get_Closest_Point_InstanceData.rtb));

  /* Model Initialize function for ModelReference Block: '<S4>/Vehicle_Coordinate_Transfer' */
  Vehicle_coordinate_transfer_initialize(rtmGetErrorStatusPointer
    (Trajectory_closest_point_info_get_M),
    &(localDW->Vehicle_Coordinate_Transfer_InstanceData.rtm),
    &(localDW->Vehicle_Coordinate_Transfer_InstanceData.rtb));
}

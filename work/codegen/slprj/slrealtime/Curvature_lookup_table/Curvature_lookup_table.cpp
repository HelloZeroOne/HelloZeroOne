/*
 * Code generation for system model 'Curvature_lookup_table'
 *
 * Model                      : Curvature_lookup_table
 * Model version              : 4.10
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Thu May 12 12:48:05 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "Curvature_lookup_table.h"
#include "Curvature_lookup_table_private.h"

/* Output and update for referenced model: 'Curvature_lookup_table' */
void Curvature_lookup_table(const real_T *rtu_closest_point_curvature, const
  real_T rtu_curvature_threshold[6], const real_T rtu_preview_distance_level[6],
  const real_T rtu_K_lateral_offset_level[6], real_T *rty_min_preview_distance,
  real_T *rty_K_lateral_offset)
{
  int32_T b_index;
  boolean_T exitg1;

  /* MATLAB Function: '<Root>/Curvature_Lookup_Table' */
  /* MATLAB Function 'Curvature_Lookup_Table': '<S1>:1' */
  /* '<S1>:1:16' */
  *rty_min_preview_distance = rtu_preview_distance_level[5];

  /* '<S1>:1:17' */
  *rty_K_lateral_offset = rtu_K_lateral_offset_level[5];

  /* '<S1>:1:20' */
  b_index = 0;
  exitg1 = false;
  while ((!exitg1) && (b_index < 6)) {
    /* '<S1>:1:20' */
    if (rtu_curvature_threshold[b_index] > std::abs(*rtu_closest_point_curvature))
    {
      /* '<S1>:1:21' */
      /* '<S1>:1:22' */
      *rty_min_preview_distance = rtu_preview_distance_level[b_index];

      /* '<S1>:1:23' */
      *rty_K_lateral_offset = rtu_K_lateral_offset_level[b_index];
      exitg1 = true;
    } else {
      b_index++;
    }
  }
}

/* Model initialize function */
void Curvature_lookup_table_initialize(const char_T **rt_errorStatus,
  RT_MODEL_Curvature_lookup_table_T *const Curvature_lookup_table_M)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(Curvature_lookup_table_M, rt_errorStatus);
}

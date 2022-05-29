/*
 * Code generation for system model 'Two_point_distance_calculate'
 *
 * Model                      : Two_point_distance_calculate
 * Model version              : 4.51
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Thu May 12 12:47:21 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "Two_point_distance_calculate.h"
#include "Two_point_distance_calculate_private.h"

/* Output and update for referenced model: 'Two_point_distance_calculate' */
void Two_point_distance_calculate(const real_T *rtu_x1, const real_T *rtu_y1,
  const real_T *rtu_x2, const real_T *rtu_y2, real_T *rty_distance,
  B_Two_point_distance_calculate_c_T *localB)
{
  /* Sum: '<Root>/Minus1' */
  localB->delta_x = *rtu_x2 - *rtu_x1;

  /* Sum: '<Root>/Minus2' */
  localB->delta_y = *rtu_y2 - *rtu_y1;

  /* Math: '<Root>/Square' */
  localB->Square = localB->delta_x * localB->delta_x;

  /* Math: '<Root>/Square1' */
  localB->Square1 = localB->delta_y * localB->delta_y;

  /* Sum: '<Root>/Plus' */
  localB->Plus = localB->Square + localB->Square1;

  /* Sqrt: '<Root>/Sqrt' */
  *rty_distance = std::sqrt(localB->Plus);
}

/* Model initialize function */
void Two_point_distance_calculate_initialize(const char_T **rt_errorStatus,
  RT_MODEL_Two_point_distance_calculate_T *const Two_point_distance_calculate_M,
  B_Two_point_distance_calculate_c_T *localB)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(Two_point_distance_calculate_M, rt_errorStatus);

  /* block I/O */
  {
    localB->delta_x = 0.0;
    localB->delta_y = 0.0;
    localB->Square = 0.0;
    localB->Square1 = 0.0;
    localB->Plus = 0.0;
  }
}

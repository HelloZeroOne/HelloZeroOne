/*
 * Code generation for system model 'Vector_projection_get_closest_point'
 *
 * Model                      : Vector_projection_get_closest_point
 * Model version              : 4.45
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Thu May 12 12:47:30 2022
 *
 * Note that the functions contained in this file are part of a Simulink
 * model, and are not self-contained algorithms.
 */

#include "Vector_projection_get_closest_point.h"
#include "Vector_projection_get_closest_point_private.h"

/* Output and update for referenced model: 'Vector_projection_get_closest_point' */
void Vector_projection_get_closest_point(const real_T *rtu_x0, const real_T
  *rtu_y0, const real_T *rtu_x1, const real_T *rtu_y1, const real_T *rtu_x2,
  const real_T *rtu_y2, real_T *rty_closest_point_x, real_T *rty_closest_point_y,
  real_T *rty_projection_rate, B_Vector_projection_get_closest_point_c_T *localB)
{
  /* Sum: '<Root>/Subtract2' */
  localB->delta_x_P1P = *rtu_x0 - *rtu_x1;

  /* Sum: '<Root>/Subtract' */
  localB->delta_x_P1P2 = *rtu_x2 - *rtu_x1;

  /* Sum: '<Root>/Subtract3' */
  localB->delta_y_P1P = *rtu_y0 - *rtu_y1;

  /* Sum: '<Root>/Subtract1' */
  localB->delta_y_P1P2 = *rtu_y2 - *rtu_y1;

  /* Math: '<Root>/Math Function' */
  localB->MathFunction = localB->delta_x_P1P2 * localB->delta_x_P1P2;

  /* Math: '<Root>/Math Function1' */
  localB->MathFunction1 = localB->delta_y_P1P2 * localB->delta_y_P1P2;

  /* Sum: '<Root>/Sum' */
  localB->square_P1P2 = localB->MathFunction + localB->MathFunction1;

  /* Switch: '<Root>/Switch' incorporates:
   *  Constant: '<Root>/Constant'
   */
  if (localB->square_P1P2 >
      Vector_projection_get_closest_point_cal->Switch_Threshold) {
    /* Product: '<Root>/Product1' */
    localB->Product1 = localB->delta_y_P1P * localB->delta_y_P1P2;

    /* Product: '<Root>/Product' */
    localB->Product = localB->delta_x_P1P * localB->delta_x_P1P2;

    /* Sum: '<Root>/Sum1' */
    localB->Sum1 = localB->Product + localB->Product1;

    /* Product: '<Root>/Divide' */
    localB->Divide = localB->Sum1 / localB->square_P1P2;
    *rty_projection_rate = localB->Divide;
  } else {
    *rty_projection_rate =
      Vector_projection_get_closest_point_cal->Constant_Value;
  }

  /* End of Switch: '<Root>/Switch' */

  /* Switch: '<Root>/Switch1' */
  if (*rty_projection_rate >=
      Vector_projection_get_closest_point_cal->Switch1_Threshold) {
    /* Switch: '<Root>/Switch2' */
    if (*rty_projection_rate >
        Vector_projection_get_closest_point_cal->Switch2_Threshold) {
      /* Switch: '<Root>/Switch2' */
      localB->Switch2[0] = *rtu_x2;
      localB->Switch2[1] = *rtu_y2;
    } else {
      /* Product: '<Root>/Product2' */
      localB->Product2 = *rty_projection_rate * localB->delta_x_P1P2;

      /* Sum: '<Root>/Sum2' */
      localB->Sum2 = *rtu_x1 + localB->Product2;

      /* Product: '<Root>/Product3' */
      localB->Product3 = *rty_projection_rate * localB->delta_y_P1P2;

      /* Sum: '<Root>/Sum3' */
      localB->Sum3 = *rtu_y1 + localB->Product3;

      /* Switch: '<Root>/Switch2' */
      localB->Switch2[0] = localB->Sum2;
      localB->Switch2[1] = localB->Sum3;
    }

    /* End of Switch: '<Root>/Switch2' */

    /* Switch: '<Root>/Switch1' */
    localB->Switch1[0] = localB->Switch2[0];
    localB->Switch1[1] = localB->Switch2[1];
  } else {
    /* Switch: '<Root>/Switch1' */
    localB->Switch1[0] = *rtu_x1;
    localB->Switch1[1] = *rtu_y1;
  }

  /* End of Switch: '<Root>/Switch1' */

  /* SignalConversion generated from: '<Root>/closest_point_x' */
  *rty_closest_point_x = localB->Switch1[0];

  /* SignalConversion generated from: '<Root>/closest_point_y' */
  *rty_closest_point_y = localB->Switch1[1];
}

/* Model initialize function */
void Vector_projection_get_closest_point_initialize(const char_T
  **rt_errorStatus, RT_MODEL_Vector_projection_get_closest_point_T *const
  Vector_projection_get_closest_point_M,
  B_Vector_projection_get_closest_point_c_T *localB)
{
  /* Registration code */

  /* initialize error status */
  rtmSetErrorStatusPointer(Vector_projection_get_closest_point_M, rt_errorStatus);

  /* block I/O */
  {
    localB->delta_x_P1P = 0.0;
    localB->delta_x_P1P2 = 0.0;
    localB->delta_y_P1P = 0.0;
    localB->delta_y_P1P2 = 0.0;
    localB->MathFunction = 0.0;
    localB->MathFunction1 = 0.0;
    localB->square_P1P2 = 0.0;
    localB->Switch1[0] = 0.0;
    localB->Switch1[1] = 0.0;
    localB->Product1 = 0.0;
    localB->Product = 0.0;
    localB->Sum1 = 0.0;
    localB->Divide = 0.0;
    localB->Switch2[0] = 0.0;
    localB->Switch2[1] = 0.0;
    localB->Product2 = 0.0;
    localB->Sum2 = 0.0;
    localB->Product3 = 0.0;
    localB->Sum3 = 0.0;
  }
}

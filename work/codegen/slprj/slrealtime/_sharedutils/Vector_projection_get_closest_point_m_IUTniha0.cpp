/*
 * Vector_projection_get_closest_point_m_IUTniha0.cpp
 *
 * Code generation for model "Closest_point_calculate".
 *
 * Model version              : 4.15
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Thu May 12 12:47:54 2022
 * Created for block: Closest_point_calculate
 */

#include "rtwtypes.h"
#include <cmath>
#include "Vector_projection_get_closest_point_m_IUTniha0.h"

/* Function for MATLAB Function: '<Root>/Closest_Point_Calculate' */
void Vector_projection_get_closest_point_m_IUTniha0(real_T x0, real_T b_y0,
  real_T x1, real_T b_y1, real_T x2, real_T y2, real_T *closest_point_x, real_T *
  closest_point_y, real_T *projection_rate)
{
  real_T delta_x_P1P2;
  real_T delta_y_P1P2;
  delta_x_P1P2 = x2 - x1;
  delta_y_P1P2 = y2 - b_y1;
  if (1.0E-6 > std::abs(delta_x_P1P2 * delta_x_P1P2 + delta_y_P1P2 *
                        delta_y_P1P2)) {
    *projection_rate = 2.0;
  } else {
    *projection_rate = ((x0 - x1) * delta_x_P1P2 + (b_y0 - b_y1) * delta_y_P1P2)
      / (delta_x_P1P2 * delta_x_P1P2 + delta_y_P1P2 * delta_y_P1P2);
  }

  if (0.0 > *projection_rate) {
    *closest_point_x = x1;
    *closest_point_y = b_y1;
  } else if (1.0 < *projection_rate) {
    *closest_point_x = x2;
    *closest_point_y = y2;
  } else {
    *closest_point_x = *projection_rate * delta_x_P1P2 + x1;
    *closest_point_y = *projection_rate * delta_y_P1P2 + b_y1;
  }
}

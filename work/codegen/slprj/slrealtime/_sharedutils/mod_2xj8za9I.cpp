/*
 * mod_2xj8za9I.cpp
 *
 * Code generation for model "Closest_point_calculate".
 *
 * Model version              : 4.15
 * Simulink Coder version : 9.5 (R2021a) 14-Nov-2020
 * C++ source code generated on : Thu May 12 12:47:54 2022
 * Created for block: Closest_point_calculate
 */

#include "rtwtypes.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include <cmath>
#include "mod_2xj8za9I.h"

/* Function for MATLAB Function: '<Root>/Closest_Point_Calculate' */
real_T mod_2xj8za9I(real_T x)
{
  real_T r;
  if (rtIsNaN(x) || rtIsInf(x)) {
    r = (rtNaN);
  } else if (x == 0.0) {
    r = 0.0;
  } else {
    r = std::fmod(x, 360.0);
    if (r == 0.0) {
      r = 0.0;
    } else if (x < 0.0) {
      r += 360.0;
    }
  }

  return r;
}

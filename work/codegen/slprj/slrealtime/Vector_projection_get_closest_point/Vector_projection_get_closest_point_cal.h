#ifndef RTW_HEADER_Vector_projection_get_closest_point_cal_h_
#define RTW_HEADER_Vector_projection_get_closest_point_cal_h_
#include "rtwtypes.h"
#include "Vector_projection_get_closest_point_types.h"

/* Storage class 'PageSwitching', for model 'Vector_projection_get_closest_point' */
struct Vector_projection_get_closest_point_cal_type {
  real_T Switch2_Threshold;            /* Expression: 1
                                        * Referenced by: '<Root>/Switch2'
                                        */
  real_T Constant_Value;               /* Expression: 2
                                        * Referenced by: '<Root>/Constant'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<Root>/Switch'
                                        */
  real_T Switch1_Threshold;            /* Expression: 0
                                        * Referenced by: '<Root>/Switch1'
                                        */
};

/* Storage class 'PageSwitching' */
extern Vector_projection_get_closest_point_cal_type
  Vector_projection_get_closest_point_cal_impl;
extern Vector_projection_get_closest_point_cal_type
  *Vector_projection_get_closest_point_cal;

#endif               /* RTW_HEADER_Vector_projection_get_closest_point_cal_h_ */

#ifndef RTW_HEADER_Custom_mod_cal_h_
#define RTW_HEADER_Custom_mod_cal_h_
#include "rtwtypes.h"
#include "Custom_mod_types.h"

/* Storage class 'PageSwitching', for model 'Custom_mod' */
struct Custom_mod_cal_type {
  real_T Constant_Value;               /* Expression: 0
                                        * Referenced by: '<S2>/Constant'
                                        */
};

/* Storage class 'PageSwitching' */
extern Custom_mod_cal_type Custom_mod_cal_impl;
extern Custom_mod_cal_type *Custom_mod_cal;

#endif                                 /* RTW_HEADER_Custom_mod_cal_h_ */

#ifndef RTW_HEADER_Preview_stanley_cal_h_
#define RTW_HEADER_Preview_stanley_cal_h_
#include "rtwtypes.h"
#include "Preview_stanley_types.h"

/* Storage class 'PageSwitching', for model 'Preview_stanley' */
struct Preview_stanley_cal_type {
  real_T Gain1_Gain;                   /* Expression: pi/180
                                        * Referenced by: '<S1>/Gain1'
                                        */
  real_T Gain_Gain;                    /* Expression: 180/pi
                                        * Referenced by: '<S5>/Gain'
                                        */
};

/* Storage class 'PageSwitching' */
extern Preview_stanley_cal_type Preview_stanley_cal_impl;
extern Preview_stanley_cal_type *Preview_stanley_cal;

#endif                                 /* RTW_HEADER_Preview_stanley_cal_h_ */

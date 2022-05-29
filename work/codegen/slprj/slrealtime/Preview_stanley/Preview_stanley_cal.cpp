#include "Preview_stanley.h"

/* Storage class 'PageSwitching' */
Preview_stanley_cal_type Preview_stanley_cal_impl = {
  /* Expression: pi/180
   * Referenced by: '<S1>/Gain1'
   */
  0.017453292519943295,

  /* Expression: 180/pi
   * Referenced by: '<S5>/Gain'
   */
  57.295779513082323
};

Preview_stanley_cal_type *Preview_stanley_cal = &Preview_stanley_cal_impl;

#ifndef RTW_HEADER_GNSS_pose_conversion_cal_h_
#define RTW_HEADER_GNSS_pose_conversion_cal_h_
#include "rtwtypes.h"
#include "GNSS_pose_conversion_types.h"

/* Storage class 'PageSwitching', for model 'GNSS_pose_conversion' */
struct GNSS_pose_conversion_cal_type {
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay'
                                        */
};

/* Storage class 'PageSwitching' */
extern GNSS_pose_conversion_cal_type GNSS_pose_conversion_cal_impl;
extern GNSS_pose_conversion_cal_type *GNSS_pose_conversion_cal;

#endif                              /* RTW_HEADER_GNSS_pose_conversion_cal_h_ */

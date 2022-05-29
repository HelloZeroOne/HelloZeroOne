/*
 * Code generation for system model 'GNSS_pose_conversion'
 * For more details, see corresponding source file GNSS_pose_conversion.c
 *
 */

#ifndef RTW_HEADER_GNSS_pose_conversion_h_
#define RTW_HEADER_GNSS_pose_conversion_h_
#include <cmath>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "verify/verifyIntrf.h"
#include "GNSS_pose_conversion_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "GNSS_pose_conversion_cal.h"

/* Block signals for system '<S1>/MATLAB Function' */
struct B_MATLABFunction_GNSS_pose_conversion_T {
  real_T XYZ[3];                       /* '<S1>/MATLAB Function' */
};

/* Block signals for model 'GNSS_pose_conversion' */
struct B_GNSS_pose_conversion_c_T {
  real_T UnitDelay;                    /* '<Root>/Unit Delay' */
  real_T Zqp;                          /* '<S1>/MATLAB Function1' */
  B_MATLABFunction_GNSS_pose_conversion_T sf_MATLABFunction2;/* '<S1>/MATLAB Function2' */
  B_MATLABFunction_GNSS_pose_conversion_T sf_MATLABFunction;/* '<S1>/MATLAB Function' */
};

/* Block states (default storage) for model 'GNSS_pose_conversion' */
struct DW_GNSS_pose_conversion_f_T {
  real_T UnitDelay_DSTATE;             /* '<Root>/Unit Delay' */
  real_T cumulative_counter;           /* '<Root>/GNSS_heading2ENU_yaw_angle' */
};

/* Real-time Model Data Structure */
struct tag_RTM_GNSS_pose_conversion_T {
  const char_T **errorStatus;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    boolean_T *stopRequestedFlag;
  } Timing;
};

struct MdlrefDW_GNSS_pose_conversion_T {
  B_GNSS_pose_conversion_c_T rtb;
  DW_GNSS_pose_conversion_f_T rtdw;
  RT_MODEL_GNSS_pose_conversion_T rtm;
};

/* Model reference registration function */
extern void GNSS_pose_conversion_initialize(const char_T **rt_errorStatus,
  RT_MODEL_GNSS_pose_conversion_T *const GNSS_pose_conversion_M,
  B_GNSS_pose_conversion_c_T *localB, DW_GNSS_pose_conversion_f_T *localDW);
extern void GNSS_pose_conversion_MATLABFunction(const real_T *rtu_B, const
  real_T *rtu_L, const real_T *rtu_H, B_MATLABFunction_GNSS_pose_conversion_T
  *localB);
extern void GNSS_pose_conversion_Init(DW_GNSS_pose_conversion_f_T *localDW);
extern void GNSS_pose_conversion_Reset(DW_GNSS_pose_conversion_f_T *localDW);
extern void GNSS_pose_conversion(const real_T *rtu_current_heading, const real_T
  *rtu_current_latitude, const real_T *rtu_current_longitude, const real_T
  *rtu_current_altitude, const real_T *rtu_origin_latitude, const real_T
  *rtu_origin_longitude, const real_T *rtu_origin_altitude, real_T
  *rty_ENU_yaw_angle, real_T *rty_ENU_x, real_T *rty_ENU_y,
  B_GNSS_pose_conversion_c_T *localB, DW_GNSS_pose_conversion_f_T *localDW);

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'GNSS_pose_conversion'
 * '<S1>'   : 'GNSS_pose_conversion/BLH2ENU'
 * '<S2>'   : 'GNSS_pose_conversion/DocBlock'
 * '<S3>'   : 'GNSS_pose_conversion/GNSS_heading2ENU_yaw_angle'
 * '<S4>'   : 'GNSS_pose_conversion/BLH2ENU/MATLAB Function'
 * '<S5>'   : 'GNSS_pose_conversion/BLH2ENU/MATLAB Function1'
 * '<S6>'   : 'GNSS_pose_conversion/BLH2ENU/MATLAB Function2'
 */
#endif                                 /* RTW_HEADER_GNSS_pose_conversion_h_ */

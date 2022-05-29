/*
 * Code generation for system model 'Preview_stanley'
 * For more details, see corresponding source file Preview_stanley.c
 *
 */

#ifndef RTW_HEADER_Preview_stanley_h_
#define RTW_HEADER_Preview_stanley_h_
#include <cmath>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "Preview_stanley_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "Preview_stanley_cal.h"

/* Block signals for model 'Preview_stanley' */
struct B_Preview_stanley_c_T {
  real_T Divide1;                      /* '<S4>/Divide1' */
  real_T Plus;                         /* '<S4>/Plus' */
  real_T Gain1;                        /* '<S1>/Gain1' */
  real_T Divide2;                      /* '<S2>/Divide2' */
  real_T Plus1;                        /* '<S2>/Plus1' */
  real_T Divide;                       /* '<S2>/Divide' */
  real_T Atan;                         /* '<S2>/Atan' */
  real_T Plus2;                        /* '<Root>/Plus2' */
};

/* Real-time Model Data Structure */
struct tag_RTM_Preview_stanley_T {
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

struct MdlrefDW_Preview_stanley_T {
  B_Preview_stanley_c_T rtb;
  RT_MODEL_Preview_stanley_T rtm;
};

/* Model reference registration function */
extern void Preview_stanley_initialize(const char_T **rt_errorStatus,
  RT_MODEL_Preview_stanley_T *const Preview_stanley_M, B_Preview_stanley_c_T
  *localB);
extern void Preview_stanley(const real_T *rtu_preview_angle_offset, const real_T
  *rtu_steering_axle_angle, const real_T *rtu_K_steering_axle_angle, const
  real_T *rtu_near_lateral_offset, const real_T *rtu_K_lateral_offset, const
  real_T *rtu_tram_speed, const real_T *rtu_K_speed, real_T
  *rty_stanley_set_axle_angle, B_Preview_stanley_c_T *localB);

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
 * '<Root>' : 'Preview_stanley'
 * '<S1>'   : 'Preview_stanley/Degrees to Radians2'
 * '<S2>'   : 'Preview_stanley/Distance_Offset_Part'
 * '<S3>'   : 'Preview_stanley/DocBlock'
 * '<S4>'   : 'Preview_stanley/Preview_Yaw_Angle_Offset_Part'
 * '<S5>'   : 'Preview_stanley/Radians to Degrees'
 */
#endif                                 /* RTW_HEADER_Preview_stanley_h_ */

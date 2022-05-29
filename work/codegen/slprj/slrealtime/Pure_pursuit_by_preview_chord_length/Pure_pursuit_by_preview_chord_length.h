/*
 * Code generation for system model 'Pure_pursuit_by_preview_chord_length'
 * For more details, see corresponding source file Pure_pursuit_by_preview_chord_length.c
 *
 */

#ifndef RTW_HEADER_Pure_pursuit_by_preview_chord_length_h_
#define RTW_HEADER_Pure_pursuit_by_preview_chord_length_h_
#include <cmath>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "verify/verifyIntrf.h"
#include "Pure_pursuit_by_preview_chord_length_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Real-time Model Data Structure */
struct tag_RTM_Pure_pursuit_by_preview_chord_length_T {
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

struct MdlrefDW_Pure_pursuit_by_preview_chord_length_T {
  RT_MODEL_Pure_pursuit_by_preview_chord_length_T rtm;
};

/* Model reference registration function */
extern void Pure_pursuit_by_preview_chord_length_initialize(const char_T
  **rt_errorStatus, RT_MODEL_Pure_pursuit_by_preview_chord_length_T *const
  Pure_pursuit_by_preview_chord_length_M);
extern void Pure_pursuit_by_preview_chord_length(const real_T
  *rtu_ENU_yaw_angle_rad, const real_T *rtu_ENU_x, const real_T *rtu_ENU_y,
  const real_T *rtu_preview_point_x, const real_T *rtu_preview_point_y, const
  real_T *rtu_Lf, const real_T *rtu_Lr, const real_T *rtu_preview_chord_length,
  real_T *rty_set_steering_axle_angle_rad);

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
 * '<Root>' : 'Pure_pursuit_by_preview_chord_length'
 * '<S1>'   : 'Pure_pursuit_by_preview_chord_length/DocBlock'
 * '<S2>'   : 'Pure_pursuit_by_preview_chord_length/Pure_Pursuit_By_Preview_Chord_Length'
 */
#endif                  /* RTW_HEADER_Pure_pursuit_by_preview_chord_length_h_ */

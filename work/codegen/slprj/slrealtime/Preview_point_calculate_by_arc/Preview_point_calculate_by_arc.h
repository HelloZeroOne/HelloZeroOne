/*
 * Code generation for system model 'Preview_point_calculate_by_arc'
 * For more details, see corresponding source file Preview_point_calculate_by_arc.c
 *
 */

#ifndef RTW_HEADER_Preview_point_calculate_by_arc_h_
#define RTW_HEADER_Preview_point_calculate_by_arc_h_
#include <cmath>
#include <cstring>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "verify/verifyIntrf.h"
#include "Preview_point_calculate_by_arc_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetNaN.h"
#include "rt_nonfinite.h"
#include "rtGetInf.h"

/* Block states (default storage) for model 'Preview_point_calculate_by_arc' */
struct DW_Preview_point_calculate_by_arc_f_T {
  real_T preview_point_x_previous; /* '<Root>/Preview_Point_Calculate_By_Arc' */
  real_T preview_point_y_previous; /* '<Root>/Preview_Point_Calculate_By_Arc' */
  real_T preview_yaw_angle_previous;
                                   /* '<Root>/Preview_Point_Calculate_By_Arc' */
  boolean_T preview_point_x_previous_not_empty;
                                   /* '<Root>/Preview_Point_Calculate_By_Arc' */
  boolean_T preview_point_y_previous_not_empty;
                                   /* '<Root>/Preview_Point_Calculate_By_Arc' */
};

/* Real-time Model Data Structure */
struct tag_RTM_Preview_point_calculate_by_arc_T {
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

struct MdlrefDW_Preview_point_calculate_by_arc_T {
  DW_Preview_point_calculate_by_arc_f_T rtdw;
  RT_MODEL_Preview_point_calculate_by_arc_T rtm;
};

/* Model block global parameters (default storage) */
extern real_T rtP_ZERO_SPEED_THRESHOLD;/* Variable: ZERO_SPEED_THRESHOLD
                                        * Referenced by: '<Root>/Preview_Point_Calculate_By_Arc'
                                        */

/* Model reference registration function */
extern void Preview_point_calculate_by_arc_initialize(const char_T
  **rt_errorStatus, RT_MODEL_Preview_point_calculate_by_arc_T *const
  Preview_point_calculate_by_arc_M, DW_Preview_point_calculate_by_arc_f_T
  *localDW);
extern void Preview_point_calculate_by_arc_Init
  (DW_Preview_point_calculate_by_arc_f_T *localDW);
extern void Preview_point_calculate_by_arc_Reset
  (DW_Preview_point_calculate_by_arc_f_T *localDW);
extern void Preview_point_calculate_by_arc(const real_T
  *rtu_min_preview_distance, const real_T *rtu_tram_speed, const real_T
  *rtu_preview_time, const real_T *rtu_closest_segment_start_point_index, const
  real_T *rtu_closest_point_x, const real_T *rtu_closest_point_y, const real_T
  *rtu_ENU_yaw_angle, const real_T *rtu_ENU_x, const real_T *rtu_ENU_y, const
  real_T *rtu_way_point_number, const real_T rtu_segment_length[6001], const
  real_T rtu_trajectory_yaw_angle[6001], const real_T rtu_trajectory_x[6001],
  const real_T rtu_trajectory_y[6001], real_T *rty_preview_point_x, real_T
  *rty_preview_point_y, real_T *rty_preview_distance, real_T
  *rty_preview_chord_length, real_T *rty_preview_angle_offset, real_T
  *rty_preview_yaw_angle, DW_Preview_point_calculate_by_arc_f_T *localDW);

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
 * '<Root>' : 'Preview_point_calculate_by_arc'
 * '<S1>'   : 'Preview_point_calculate_by_arc/DocBlock'
 * '<S2>'   : 'Preview_point_calculate_by_arc/Preview_Point_Calculate_By_Arc'
 */
#endif                        /* RTW_HEADER_Preview_point_calculate_by_arc_h_ */

/*
 * Code generation for system model 'Closest_point_calculate'
 * For more details, see corresponding source file Closest_point_calculate.c
 *
 */

#ifndef RTW_HEADER_Closest_point_calculate_h_
#define RTW_HEADER_Closest_point_calculate_h_
#include <cmath>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "verify/verifyIntrf.h"
#include "Closest_point_calculate_types.h"

/* Shared type includes */
#include "multiword_types.h"
#include "rtGetInf.h"
#include "rt_nonfinite.h"

/* Block states (default storage) for model 'Closest_point_calculate' */
struct DW_Closest_point_calculate_f_T {
  real_T closest_point_x_previous;     /* '<Root>/Closest_Point_Calculate' */
  real_T closest_point_y_previous;     /* '<Root>/Closest_Point_Calculate' */
  real_T closest_point_curvature_previous;/* '<Root>/Closest_Point_Calculate' */
};

/* Real-time Model Data Structure */
struct tag_RTM_Closest_point_calculate_T {
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

struct MdlrefDW_Closest_point_calculate_T {
  DW_Closest_point_calculate_f_T rtdw;
  RT_MODEL_Closest_point_calculate_T rtm;
};

/* Model reference registration function */
extern void Closest_point_calculate_initialize(const char_T **rt_errorStatus,
  RT_MODEL_Closest_point_calculate_T *const Closest_point_calculate_M,
  DW_Closest_point_calculate_f_T *localDW);
extern void Closest_point_calculate_Init(DW_Closest_point_calculate_f_T *localDW);
extern void Closest_point_calculate_Reset(DW_Closest_point_calculate_f_T
  *localDW);
extern void Closest_point_calculate(const real_T *rtu_ENU_yaw_angle, const
  real_T *rtu_ENU_x, const real_T *rtu_ENU_y, const real_T *rtu_way_point_number,
  const real_T rtu_trajectory_yaw_angle[6001], const real_T rtu_trajectory_x
  [6001], const real_T rtu_trajectory_y[6001], const real_T
  rtu_trajectory_curvature[6001], const real_T rtu_segment_length[6001], const
  real_T *rtu_tram_speed, const real_T *rtu_preview_time, const real_T
  rtu_segment_ID[6001], const real_T rtu_vision_priority[6001], const real_T
  rtu_GNSS_priority[6001], real_T *rty_closest_point_x, real_T
  *rty_closest_point_y, real_T *rty_closest_point_curvature, real_T
  *rty_faraway_point_curvature, real_T *rty_closest_segment_start_point_index,
  real_T *rty_near_lateral_offset, real_T *rty_closest_point_segment_ID, real_T *
  rty_closest_point_vision_priority, real_T *rty_closest_point_GNSS_priority,
  DW_Closest_point_calculate_f_T *localDW);

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
 * '<Root>' : 'Closest_point_calculate'
 * '<S1>'   : 'Closest_point_calculate/Closest_Point_Calculate'
 * '<S2>'   : 'Closest_point_calculate/DocBlock'
 */
#endif                               /* RTW_HEADER_Closest_point_calculate_h_ */

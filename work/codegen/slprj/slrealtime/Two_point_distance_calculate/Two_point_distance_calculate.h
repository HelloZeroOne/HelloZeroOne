/*
 * Code generation for system model 'Two_point_distance_calculate'
 * For more details, see corresponding source file Two_point_distance_calculate.c
 *
 */

#ifndef RTW_HEADER_Two_point_distance_calculate_h_
#define RTW_HEADER_Two_point_distance_calculate_h_
#include <cmath>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "Two_point_distance_calculate_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Block signals for model 'Two_point_distance_calculate' */
struct B_Two_point_distance_calculate_c_T {
  real_T delta_x;                      /* '<Root>/Minus1' */
  real_T delta_y;                      /* '<Root>/Minus2' */
  real_T Square;                       /* '<Root>/Square' */
  real_T Square1;                      /* '<Root>/Square1' */
  real_T Plus;                         /* '<Root>/Plus' */
};

/* Real-time Model Data Structure */
struct tag_RTM_Two_point_distance_calculate_T {
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

struct MdlrefDW_Two_point_distance_calculate_T {
  B_Two_point_distance_calculate_c_T rtb;
  RT_MODEL_Two_point_distance_calculate_T rtm;
};

/* Model reference registration function */
extern void Two_point_distance_calculate_initialize(const char_T
  **rt_errorStatus, RT_MODEL_Two_point_distance_calculate_T *const
  Two_point_distance_calculate_M, B_Two_point_distance_calculate_c_T *localB);
extern void Two_point_distance_calculate(const real_T *rtu_x1, const real_T
  *rtu_y1, const real_T *rtu_x2, const real_T *rtu_y2, real_T *rty_distance,
  B_Two_point_distance_calculate_c_T *localB);

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
 * '<Root>' : 'Two_point_distance_calculate'
 * '<S1>'   : 'Two_point_distance_calculate/DocBlock'
 */
#endif                          /* RTW_HEADER_Two_point_distance_calculate_h_ */

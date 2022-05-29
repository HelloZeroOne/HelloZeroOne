/*
 * Code generation for system model 'Vector_projection_get_closest_point'
 * For more details, see corresponding source file Vector_projection_get_closest_point.c
 *
 */

#ifndef RTW_HEADER_Vector_projection_get_closest_point_h_
#define RTW_HEADER_Vector_projection_get_closest_point_h_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "Vector_projection_get_closest_point_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "Vector_projection_get_closest_point_cal.h"

/* Block signals for model 'Vector_projection_get_closest_point' */
struct B_Vector_projection_get_closest_point_c_T {
  real_T delta_x_P1P;                  /* '<Root>/Subtract2' */
  real_T delta_x_P1P2;                 /* '<Root>/Subtract' */
  real_T delta_y_P1P;                  /* '<Root>/Subtract3' */
  real_T delta_y_P1P2;                 /* '<Root>/Subtract1' */
  real_T MathFunction;                 /* '<Root>/Math Function' */
  real_T MathFunction1;                /* '<Root>/Math Function1' */
  real_T square_P1P2;                  /* '<Root>/Sum' */
  real_T Switch1[2];                   /* '<Root>/Switch1' */
  real_T Product1;                     /* '<Root>/Product1' */
  real_T Product;                      /* '<Root>/Product' */
  real_T Sum1;                         /* '<Root>/Sum1' */
  real_T Divide;                       /* '<Root>/Divide' */
  real_T Switch2[2];                   /* '<Root>/Switch2' */
  real_T Product2;                     /* '<Root>/Product2' */
  real_T Sum2;                         /* '<Root>/Sum2' */
  real_T Product3;                     /* '<Root>/Product3' */
  real_T Sum3;                         /* '<Root>/Sum3' */
};

/* Real-time Model Data Structure */
struct tag_RTM_Vector_projection_get_closest_point_T {
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

struct MdlrefDW_Vector_projection_get_closest_point_T {
  B_Vector_projection_get_closest_point_c_T rtb;
  RT_MODEL_Vector_projection_get_closest_point_T rtm;
};

/* Model reference registration function */
extern void Vector_projection_get_closest_point_initialize(const char_T
  **rt_errorStatus, RT_MODEL_Vector_projection_get_closest_point_T *const
  Vector_projection_get_closest_point_M,
  B_Vector_projection_get_closest_point_c_T *localB);
extern void Vector_projection_get_closest_point(const real_T *rtu_x0, const
  real_T *rtu_y0, const real_T *rtu_x1, const real_T *rtu_y1, const real_T
  *rtu_x2, const real_T *rtu_y2, real_T *rty_closest_point_x, real_T
  *rty_closest_point_y, real_T *rty_projection_rate,
  B_Vector_projection_get_closest_point_c_T *localB);

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
 * '<Root>' : 'Vector_projection_get_closest_point'
 * '<S1>'   : 'Vector_projection_get_closest_point/DocBlock'
 */
#endif                   /* RTW_HEADER_Vector_projection_get_closest_point_h_ */

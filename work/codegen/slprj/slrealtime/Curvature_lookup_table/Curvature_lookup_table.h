/*
 * Code generation for system model 'Curvature_lookup_table'
 * For more details, see corresponding source file Curvature_lookup_table.c
 *
 */

#ifndef RTW_HEADER_Curvature_lookup_table_h_
#define RTW_HEADER_Curvature_lookup_table_h_
#include <cmath>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "verify/verifyIntrf.h"
#include "Curvature_lookup_table_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Real-time Model Data Structure */
struct tag_RTM_Curvature_lookup_table_T {
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

struct MdlrefDW_Curvature_lookup_table_T {
  RT_MODEL_Curvature_lookup_table_T rtm;
};

/* Model reference registration function */
extern void Curvature_lookup_table_initialize(const char_T **rt_errorStatus,
  RT_MODEL_Curvature_lookup_table_T *const Curvature_lookup_table_M);
extern void Curvature_lookup_table(const real_T *rtu_closest_point_curvature,
  const real_T rtu_curvature_threshold[6], const real_T
  rtu_preview_distance_level[6], const real_T rtu_K_lateral_offset_level[6],
  real_T *rty_min_preview_distance, real_T *rty_K_lateral_offset);

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
 * '<Root>' : 'Curvature_lookup_table'
 * '<S1>'   : 'Curvature_lookup_table/Curvature_Lookup_Table'
 * '<S2>'   : 'Curvature_lookup_table/DocBlock'
 */
#endif                                /* RTW_HEADER_Curvature_lookup_table_h_ */

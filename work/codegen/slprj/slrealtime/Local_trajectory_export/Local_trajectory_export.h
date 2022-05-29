/*
 * Code generation for system model 'Local_trajectory_export'
 * For more details, see corresponding source file Local_trajectory_export.c
 *
 */

#ifndef RTW_HEADER_Local_trajectory_export_h_
#define RTW_HEADER_Local_trajectory_export_h_
#include <cmath>
#include <cstring>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "Local_trajectory_export_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "Trajectory_closest_point_info_get.h"
#include "Two_point_distance_calculate.h"

/* Block signals for model 'Local_trajectory_export' */
struct B_Local_trajectory_export_c_T {
  real_T UnitDelay2;                   /* '<Root>/Unit Delay2' */
  real_T Abs;                          /* '<Root>/Abs' */
  real_T Selector4;                    /* '<Root>/Selector4' */
  real_T output_closest_point_x;/* '<Root>/Trajectory_Closest_Point_Info_Get' */
  real_T output_closest_point_y;/* '<Root>/Trajectory_Closest_Point_Info_Get' */
  real_T temp_closest_point_curvature;
                                /* '<Root>/Trajectory_Closest_Point_Info_Get' */
  real_T Trajectory_Closest_Point_Info_Get_o5;
                                /* '<Root>/Trajectory_Closest_Point_Info_Get' */
  real_T closest_point_cumulative_length;/* '<Root>/Selector5' */
  real_T rest_distance;                /* '<Root>/Subtract1' */
  real_T Selector;                     /* '<Root>/Selector' */
  real_T Selector2;                    /* '<Root>/Selector2' */
  real_T Selector1;                    /* '<Root>/Selector1' */
  real_T Selector3;                    /* '<Root>/Selector3' */
  real_T start_end_distance;         /* '<Root>/Two_Point_Distance_Calculate' */
  real_T temp1_trajectory_yaw_angle[20001];/* '<S2>/temp1_trajectory_yaw_angle' */
  real_T temp2_trajectory_yaw_angle[20001];/* '<S2>/temp2_trajectory_yaw_angle' */
  real_T temp1_trajectory_x[20001];    /* '<S2>/temp1_trajectory_x' */
  real_T temp2_trajectory_x[20001];    /* '<S2>/temp2_trajectory_x' */
  real_T temp1_trajectory_y[20001];    /* '<S2>/temp1_trajectory_y' */
  real_T temp2_trajectory_y[20001];    /* '<S2>/temp2_trajectory_y' */
  real_T temp_double_buffer[20001];    /* '<S2>/temp_double_buffer' */
  real_T temp2_trajectory_curvature[20001];/* '<S2>/temp2_trajectory_curvature' */
  real_T specific_delta_index1[20001]; /* '<S2>/specific_delta_index1' */
  real_T temp2_segment_length[20001];  /* '<S2>/temp2_segment_length' */
  real_T temp3_segment_length[20001];  /* '<S2>/temp3_segment_length' */
  real_T Selector1_e;                  /* '<S4>/Selector1' */
  real_T Plus;                         /* '<S4>/Plus' */
  real_T Selector_o;                   /* '<S4>/Selector' */
  real_T temp1_trajectory_yaw_angle_l[20001];/* '<S6>/temp1_trajectory_yaw_angle' */
  real_T temp2_trajectory_yaw_angle_h[20001];/* '<S6>/temp2_trajectory_yaw_angle' */
  real_T temp3_trajectory_yaw_angle[20001];/* '<S6>/temp3_trajectory_yaw_angle' */
  real_T temp4_trajectory_yaw_angle[20001];/* '<S6>/temp4_trajectory_yaw_angle' */
  real_T temp1_trajectory_x_l[20001];  /* '<S6>/temp1_trajectory_x' */
  real_T temp2_trajectory_x_f[20001];  /* '<S6>/temp2_trajectory_x' */
  real_T temp3_trajectory_x[20001];    /* '<S6>/temp3_trajectory_x' */
  real_T temp4_trajectory_x[20001];    /* '<S6>/temp4_trajectory_x' */
  real_T temp1_trajectory_y_b[20001];  /* '<S6>/temp1_trajectory_y' */
  real_T temp2_trajectory_y_d[20001];  /* '<S6>/temp2_trajectory_y' */
  real_T temp3_trajectory_y[20001];    /* '<S6>/temp3_trajectory_y' */
  real_T temp4_trajectory_y[20001];    /* '<S6>/temp4_trajectory_y' */
  real_T temp1_trajectory_curvature[20001];/* '<S6>/temp1_trajectory_curvature' */
  real_T temp2_trajectory_curvature_p[20001];/* '<S6>/temp2_trajectory_curvature' */
  real_T temp3_trajectory_curvature[20001];/* '<S6>/temp3_trajectory_curvature' */
  real_T temp4_trajectory_curvature[20001];/* '<S6>/temp4_trajectory_curvature' */
  real_T temp1_segment_length[20001];  /* '<S6>/temp1_segment_length' */
  real_T temp2_segment_length_a[20001];/* '<S6>/temp2_segment_length' */
  real_T specific_delta_index2[20001]; /* '<S6>/specific_delta_index2' */
  real_T temp4_segment_length[20001];  /* '<S6>/temp4_segment_length' */
  real_T temp5_segment_length[20001];  /* '<S6>/temp5_segment_length' */
  real_T temp6_segment_length[20001];  /* '<S6>/temp6_segment_length' */
  real_T Subtract;                     /* '<S7>/Subtract' */
  real_T Selector_j;                   /* '<S7>/Selector' */
  real_T temp1_trajectory_yaw_angle_h[20001];/* '<S5>/temp1_trajectory_yaw_angle' */
  real_T temp2_trajectory_yaw_angle_k[20001];/* '<S5>/temp2_trajectory_yaw_angle' */
  real_T temp1_trajectory_x_c[20001];  /* '<S5>/temp1_trajectory_x' */
  real_T temp2_trajectory_x_o[20001];  /* '<S5>/temp2_trajectory_x' */
  real_T temp1_trajectory_y_f[20001];  /* '<S5>/temp1_trajectory_y' */
  real_T temp2_trajectory_y_f[20001];  /* '<S5>/temp2_trajectory_y' */
  real_T temp1_trajectory_curvature_c[20001];/* '<S5>/temp1_trajectory_curvature' */
  real_T temp2_trajectory_curvature_j[20001];/* '<S5>/temp2_trajectory_curvature' */
  real_T temp1_segment_length_g[20001];/* '<S5>/temp1_segment_length' */
  real_T temp2_segment_length_j[20001];/* '<S5>/temp2_segment_length' */
  real_T temp3_segment_length_n[20001];/* '<S5>/temp3_segment_length' */
  int32_T UnitDelay;                   /* '<Root>/Unit Delay' */
  int32_T temp_index;                  /* '<Root>/Switch' */
  int32_T closest_segment_start_point_index_current;
                                /* '<Root>/Trajectory_Closest_Point_Info_Get' */
  int32_T Subtract_p;                  /* '<Root>/Subtract' */
  int32_T rest_point_number;           /* '<Root>/Plus' */
  int32_T output_way_point_number;     /* '<S2>/Min' */
  int32_T Plus_k;                      /* '<S2>/Plus' */
  int32_T specific_index_range3[2];    /* '<S2>/Vector Concatenate8' */
  int32_T temp_index_e;                /* '<S4>/While Iterator' */
  int32_T Plus1;                       /* '<S4>/Plus1' */
  int32_T temp_index_d;                /* '<S4>/Subtract1' */
  int32_T Plus1_l;                     /* '<S6>/Plus1' */
  int32_T output_way_point_number_c;   /* '<S6>/Min' */
  int32_T Plus_g;                      /* '<S6>/Plus' */
  int32_T Plus2;                       /* '<S6>/Plus2' */
  int32_T specific_index_range1[2];    /* '<S6>/Vector Concatenate8' */
  int32_T specific_index_range2[2];    /* '<S6>/Vector Concatenate1' */
  int32_T temp_index_dc;               /* '<S7>/While Iterator' */
  int32_T temp_index_c;                /* '<S7>/Subtract1' */
  int32_T output_way_point_number_c1;  /* '<S5>/Min' */
  int32_T Plus_km;                     /* '<S5>/Plus' */
  int32_T specific_index_range[2];     /* '<S5>/Vector Concatenate8' */
  int8_T UnitDelay1;                   /* '<Root>/Unit Delay1' */
  int8_T temp1_segment_ID[20001];      /* '<S2>/temp1_segment_ID' */
  int8_T temp2_segment_ID[20001];      /* '<S2>/temp2_segment_ID' */
  int8_T temp1_vision_priority[20001]; /* '<S2>/temp1_vision_priority' */
  int8_T temp2_vision_priority[20001]; /* '<S2>/temp2_vision_priority' */
  int8_T temp_int8_buffer[20001];      /* '<S2>/temp_int8_buffer' */
  int8_T temp2_GNSS_priority[20001];   /* '<S2>/temp2_GNSS_priority' */
  int8_T temp1_segment_ID_i[20001];    /* '<S6>/temp1_segment_ID' */
  int8_T temp2_segment_ID_i[20001];    /* '<S6>/temp2_segment_ID' */
  int8_T temp3_segment_ID[20001];      /* '<S6>/temp3_segment_ID' */
  int8_T temp4_segment_ID[20001];      /* '<S6>/temp4_segment_ID' */
  int8_T temp1_vision_priority_f[20001];/* '<S6>/temp1_vision_priority' */
  int8_T temp2_vision_priority_e[20001];/* '<S6>/temp2_vision_priority' */
  int8_T temp3_vision_priority[20001]; /* '<S6>/temp3_vision_priority' */
  int8_T temp4_vision_priority[20001]; /* '<S6>/temp4_vision_priority' */
  int8_T temp1_GNSS_priority[20001];   /* '<S6>/temp1_GNSS_priority' */
  int8_T temp2_GNSS_priority_c[20001]; /* '<S6>/temp2_GNSS_priority' */
  int8_T temp3_GNSS_priority[20001];   /* '<S6>/temp3_GNSS_priority' */
  int8_T temp4_GNSS_priority[20001];   /* '<S6>/temp4_GNSS_priority' */
  int8_T temp1_segment_ID_b[20001];    /* '<S5>/temp1_segment_ID' */
  int8_T temp2_segment_ID_p[20001];    /* '<S5>/temp2_segment_ID' */
  int8_T temp1_vision_priority_e[20001];/* '<S5>/temp1_vision_priority' */
  int8_T temp2_vision_priority_ed[20001];/* '<S5>/temp2_vision_priority' */
  int8_T temp1_GNSS_priority_d[20001]; /* '<S5>/temp1_GNSS_priority' */
  int8_T temp2_GNSS_priority_o[20001]; /* '<S5>/temp2_GNSS_priority' */
  boolean_T NotEqual;                  /* '<Root>/NotEqual' */
  boolean_T LessThan;                  /* '<Root>/Less Than' */
  boolean_T OR;                        /* '<Root>/OR' */
  boolean_T LessThanOrEqual;           /* '<S2>/LessThanOrEqual' */
  boolean_T GreaterThan;               /* '<S4>/GreaterThan' */
  boolean_T LessThanOrEqual_o;         /* '<S4>/LessThanOrEqual' */
  boolean_T AND;                       /* '<S4>/AND' */
  boolean_T GreaterThanOrEqual;        /* '<S6>/GreaterThanOrEqual' */
  boolean_T GreaterThan_o;             /* '<S7>/GreaterThan' */
};

/* Block states (default storage) for model 'Local_trajectory_export' */
struct DW_Local_trajectory_export_f_T {
  real_T near_lateral_offset_previous; /* '<Root>/Unit Delay2' */
  int32_T closest_segment_start_point_index_previous;/* '<Root>/Unit Delay' */
  int32_T temp1_trajectory_yaw_angle_DIMS1;/* '<S2>/temp1_trajectory_yaw_angle' */
  int32_T temp1_trajectory_x_DIMS1;    /* '<S2>/temp1_trajectory_x' */
  int32_T temp1_trajectory_y_DIMS1;    /* '<S2>/temp1_trajectory_y' */
  int32_T temp_double_buffer_DIMS1;    /* '<S2>/temp_double_buffer' */
  int32_T specific_delta_index1_DIMS1; /* '<S2>/specific_delta_index1' */
  int32_T temp1_segment_ID_DIMS1;      /* '<S2>/temp1_segment_ID' */
  int32_T temp1_vision_priority_DIMS1; /* '<S2>/temp1_vision_priority' */
  int32_T temp_int8_buffer_DIMS1;      /* '<S2>/temp_int8_buffer' */
  int32_T temp1_trajectory_yaw_angle_DIMS1_l;/* '<S6>/temp1_trajectory_yaw_angle' */
  int32_T temp3_trajectory_yaw_angle_DIMS1;/* '<S6>/temp3_trajectory_yaw_angle' */
  int32_T temp1_trajectory_x_DIMS1_c;  /* '<S6>/temp1_trajectory_x' */
  int32_T temp3_trajectory_x_DIMS1;    /* '<S6>/temp3_trajectory_x' */
  int32_T temp1_trajectory_y_DIMS1_l;  /* '<S6>/temp1_trajectory_y' */
  int32_T temp3_trajectory_y_DIMS1;    /* '<S6>/temp3_trajectory_y' */
  int32_T temp1_trajectory_curvature_DIMS1;/* '<S6>/temp1_trajectory_curvature' */
  int32_T temp3_trajectory_curvature_DIMS1;/* '<S6>/temp3_trajectory_curvature' */
  int32_T temp1_segment_length_DIMS1;  /* '<S6>/temp1_segment_length' */
  int32_T specific_delta_index2_DIMS1; /* '<S6>/specific_delta_index2' */
  int32_T temp1_segment_ID_DIMS1_d;    /* '<S6>/temp1_segment_ID' */
  int32_T temp3_segment_ID_DIMS1;      /* '<S6>/temp3_segment_ID' */
  int32_T temp1_vision_priority_DIMS1_d;/* '<S6>/temp1_vision_priority' */
  int32_T temp3_vision_priority_DIMS1; /* '<S6>/temp3_vision_priority' */
  int32_T temp1_GNSS_priority_DIMS1;   /* '<S6>/temp1_GNSS_priority' */
  int32_T temp3_GNSS_priority_DIMS1;   /* '<S6>/temp3_GNSS_priority' */
  int32_T temp1_trajectory_yaw_angle_DIMS1_i;/* '<S5>/temp1_trajectory_yaw_angle' */
  int32_T temp1_trajectory_x_DIMS1_h;  /* '<S5>/temp1_trajectory_x' */
  int32_T temp1_trajectory_y_DIMS1_e;  /* '<S5>/temp1_trajectory_y' */
  int32_T temp1_trajectory_curvature_DIMS1_g;/* '<S5>/temp1_trajectory_curvature' */
  int32_T temp1_segment_length_DIMS1_n;/* '<S5>/temp1_segment_length' */
  int32_T temp1_segment_ID_DIMS1_g;    /* '<S5>/temp1_segment_ID' */
  int32_T temp1_vision_priority_DIMS1_a;/* '<S5>/temp1_vision_priority' */
  int32_T temp1_GNSS_priority_DIMS1_a; /* '<S5>/temp1_GNSS_priority' */
  int8_T trajectory_index_previous;    /* '<Root>/Unit Delay1' */
  MdlrefDW_Trajectory_closest_point_info_get_T
    Trajectory_Closest_Point_Info_Get_InstanceData;
                                /* '<Root>/Trajectory_Closest_Point_Info_Get' */
  MdlrefDW_Two_point_distance_calculate_T
    Two_Point_Distance_Calculate_InstanceData;
                                     /* '<Root>/Two_Point_Distance_Calculate' */
};

/* Parameters (default storage) */
struct P_Local_trajectory_export_T_ {
  real_T Constant10_Value[20001];
                 /* Expression: zeros(MAX_GLOBAL_TRAJECTORY_WAY_POINT_NUMBER, 1)
                  * Referenced by: '<S5>/Constant10'
                  */
  real_T Constant17_Value;             /* Expression: 0
                                        * Referenced by: '<S5>/Constant17'
                                        */
  real_T Constant2_Value[20001];
                 /* Expression: zeros(MAX_GLOBAL_TRAJECTORY_WAY_POINT_NUMBER, 1)
                  * Referenced by: '<S5>/Constant2'
                  */
  real_T Constant4_Value[20001];
                 /* Expression: zeros(MAX_GLOBAL_TRAJECTORY_WAY_POINT_NUMBER, 1)
                  * Referenced by: '<S5>/Constant4'
                  */
  real_T Constant6_Value[20001];
                 /* Expression: zeros(MAX_GLOBAL_TRAJECTORY_WAY_POINT_NUMBER, 1)
                  * Referenced by: '<S5>/Constant6'
                  */
  real_T Constant8_Value[20001];
                 /* Expression: zeros(MAX_GLOBAL_TRAJECTORY_WAY_POINT_NUMBER, 1)
                  * Referenced by: '<S5>/Constant8'
                  */
  real_T Constant10_Value_i[20001];
                 /* Expression: zeros(MAX_GLOBAL_TRAJECTORY_WAY_POINT_NUMBER, 1)
                  * Referenced by: '<S6>/Constant10'
                  */
  real_T Constant17_Value_o;           /* Expression: 0
                                        * Referenced by: '<S6>/Constant17'
                                        */
  real_T Constant2_Value_d[20001];
                 /* Expression: zeros(MAX_GLOBAL_TRAJECTORY_WAY_POINT_NUMBER, 1)
                  * Referenced by: '<S6>/Constant2'
                  */
  real_T Constant4_Value_e[20001];
                 /* Expression: zeros(MAX_GLOBAL_TRAJECTORY_WAY_POINT_NUMBER, 1)
                  * Referenced by: '<S6>/Constant4'
                  */
  real_T Constant6_Value_d[20001];
                 /* Expression: zeros(MAX_GLOBAL_TRAJECTORY_WAY_POINT_NUMBER, 1)
                  * Referenced by: '<S6>/Constant6'
                  */
  real_T Constant8_Value_g[20001];
                 /* Expression: zeros(MAX_GLOBAL_TRAJECTORY_WAY_POINT_NUMBER, 1)
                  * Referenced by: '<S6>/Constant8'
                  */
  real_T Constant10_Value_d[20001];
                 /* Expression: zeros(MAX_GLOBAL_TRAJECTORY_WAY_POINT_NUMBER, 1)
                  * Referenced by: '<S2>/Constant10'
                  */
  real_T Constant17_Value_h;           /* Expression: 0
                                        * Referenced by: '<S2>/Constant17'
                                        */
  real_T Constant2_Value_e[20001];
                 /* Expression: zeros(MAX_GLOBAL_TRAJECTORY_WAY_POINT_NUMBER, 1)
                  * Referenced by: '<S2>/Constant2'
                  */
  real_T Constant4_Value_b[20001];
                 /* Expression: zeros(MAX_GLOBAL_TRAJECTORY_WAY_POINT_NUMBER, 1)
                  * Referenced by: '<S2>/Constant4'
                  */
  real_T Constant6_Value_l[20001];
                 /* Expression: zeros(MAX_GLOBAL_TRAJECTORY_WAY_POINT_NUMBER, 1)
                  * Referenced by: '<S2>/Constant6'
                  */
  real_T Constant8_Value_f[20001];
                 /* Expression: zeros(MAX_GLOBAL_TRAJECTORY_WAY_POINT_NUMBER, 1)
                  * Referenced by: '<S2>/Constant8'
                  */
  real_T UnitDelay2_InitialCondition;  /* Expression: 0
                                        * Referenced by: '<Root>/Unit Delay2'
                                        */
  int32_T Constant1_Value;             /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S5>/Constant1'
                                        */
  int32_T Constant12_Value;            /* Computed Parameter: Constant12_Value
                                        * Referenced by: '<S5>/Constant12'
                                        */
  int32_T Constant14_Value;            /* Computed Parameter: Constant14_Value
                                        * Referenced by: '<S5>/Constant14'
                                        */
  int32_T Constant16_Value;            /* Computed Parameter: Constant16_Value
                                        * Referenced by: '<S5>/Constant16'
                                        */
  int32_T Constant18_Value;            /* Computed Parameter: Constant18_Value
                                        * Referenced by: '<S5>/Constant18'
                                        */
  int32_T Constant3_Value;             /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S5>/Constant3'
                                        */
  int32_T Constant5_Value;             /* Computed Parameter: Constant5_Value
                                        * Referenced by: '<S5>/Constant5'
                                        */
  int32_T Constant7_Value;             /* Computed Parameter: Constant7_Value
                                        * Referenced by: '<S5>/Constant7'
                                        */
  int32_T Constant9_Value;             /* Computed Parameter: Constant9_Value
                                        * Referenced by: '<S5>/Constant9'
                                        */
  int32_T Constant_Value;              /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S7>/Constant'
                                        */
  int32_T Constant1_Value_p;           /* Computed Parameter: Constant1_Value_p
                                        * Referenced by: '<S6>/Constant1'
                                        */
  int32_T Constant12_Value_o;          /* Computed Parameter: Constant12_Value_o
                                        * Referenced by: '<S6>/Constant12'
                                        */
  int32_T Constant14_Value_a;          /* Computed Parameter: Constant14_Value_a
                                        * Referenced by: '<S6>/Constant14'
                                        */
  int32_T Constant16_Value_g;          /* Computed Parameter: Constant16_Value_g
                                        * Referenced by: '<S6>/Constant16'
                                        */
  int32_T Constant18_Value_m;          /* Computed Parameter: Constant18_Value_m
                                        * Referenced by: '<S6>/Constant18'
                                        */
  int32_T Constant20_Value;            /* Computed Parameter: Constant20_Value
                                        * Referenced by: '<S6>/Constant20'
                                        */
  int32_T Constant21_Value;            /* Computed Parameter: Constant21_Value
                                        * Referenced by: '<S6>/Constant21'
                                        */
  int32_T Constant3_Value_p;           /* Computed Parameter: Constant3_Value_p
                                        * Referenced by: '<S6>/Constant3'
                                        */
  int32_T Constant5_Value_k;           /* Computed Parameter: Constant5_Value_k
                                        * Referenced by: '<S6>/Constant5'
                                        */
  int32_T Constant7_Value_c;           /* Computed Parameter: Constant7_Value_c
                                        * Referenced by: '<S6>/Constant7'
                                        */
  int32_T Constant9_Value_i;           /* Computed Parameter: Constant9_Value_i
                                        * Referenced by: '<S6>/Constant9'
                                        */
  int32_T Constant_Value_g;            /* Computed Parameter: Constant_Value_g
                                        * Referenced by: '<S4>/Constant'
                                        */
  int32_T Constant1_Value_pk;          /* Computed Parameter: Constant1_Value_pk
                                        * Referenced by: '<S2>/Constant1'
                                        */
  int32_T Constant12_Value_p;          /* Computed Parameter: Constant12_Value_p
                                        * Referenced by: '<S2>/Constant12'
                                        */
  int32_T Constant14_Value_k;          /* Computed Parameter: Constant14_Value_k
                                        * Referenced by: '<S2>/Constant14'
                                        */
  int32_T Constant16_Value_a;          /* Computed Parameter: Constant16_Value_a
                                        * Referenced by: '<S2>/Constant16'
                                        */
  int32_T Constant18_Value_m3;        /* Computed Parameter: Constant18_Value_m3
                                       * Referenced by: '<S2>/Constant18'
                                       */
  int32_T Constant3_Value_o;           /* Computed Parameter: Constant3_Value_o
                                        * Referenced by: '<S2>/Constant3'
                                        */
  int32_T Constant5_Value_b;           /* Computed Parameter: Constant5_Value_b
                                        * Referenced by: '<S2>/Constant5'
                                        */
  int32_T Constant7_Value_e;           /* Computed Parameter: Constant7_Value_e
                                        * Referenced by: '<S2>/Constant7'
                                        */
  int32_T Constant9_Value_h;           /* Computed Parameter: Constant9_Value_h
                                        * Referenced by: '<S2>/Constant9'
                                        */
  int32_T Constant_Value_c;            /* Computed Parameter: Constant_Value_c
                                        * Referenced by: '<Root>/Constant'
                                        */
  int32_T Constant10_Value_m;          /* Computed Parameter: Constant10_Value_m
                                        * Referenced by: '<Root>/Constant10'
                                        */
  int32_T Constant11_Value;            /* Computed Parameter: Constant11_Value
                                        * Referenced by: '<Root>/Constant11'
                                        */
  int32_T Constant12_Value_of;        /* Computed Parameter: Constant12_Value_of
                                       * Referenced by: '<Root>/Constant12'
                                       */
  int32_T UnitDelay_InitialCondition;
                               /* Computed Parameter: UnitDelay_InitialCondition
                                * Referenced by: '<Root>/Unit Delay'
                                */
  int8_T Constant11_Value_g[20001];    /* Computed Parameter: Constant11_Value_g
                                        * Referenced by: '<S5>/Constant11'
                                        */
  int8_T Constant13_Value[20001];      /* Computed Parameter: Constant13_Value
                                        * Referenced by: '<S5>/Constant13'
                                        */
  int8_T Constant15_Value[20001];      /* Computed Parameter: Constant15_Value
                                        * Referenced by: '<S5>/Constant15'
                                        */
  int8_T Constant11_Value_d[20001];    /* Computed Parameter: Constant11_Value_d
                                        * Referenced by: '<S6>/Constant11'
                                        */
  int8_T Constant13_Value_l[20001];    /* Computed Parameter: Constant13_Value_l
                                        * Referenced by: '<S6>/Constant13'
                                        */
  int8_T Constant15_Value_m[20001];    /* Computed Parameter: Constant15_Value_m
                                        * Referenced by: '<S6>/Constant15'
                                        */
  int8_T Constant11_Value_j[20001];    /* Computed Parameter: Constant11_Value_j
                                        * Referenced by: '<S2>/Constant11'
                                        */
  int8_T Constant13_Value_i[20001];    /* Computed Parameter: Constant13_Value_i
                                        * Referenced by: '<S2>/Constant13'
                                        */
  int8_T Constant15_Value_i[20001];    /* Computed Parameter: Constant15_Value_i
                                        * Referenced by: '<S2>/Constant15'
                                        */
  int8_T UnitDelay1_InitialCondition;
                              /* Computed Parameter: UnitDelay1_InitialCondition
                               * Referenced by: '<Root>/Unit Delay1'
                               */
};

/* Real-time Model Data Structure */
struct tag_RTM_Local_trajectory_export_T {
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

struct MdlrefDW_Local_trajectory_export_T {
  B_Local_trajectory_export_c_T rtb;
  DW_Local_trajectory_export_f_T rtdw;
  RT_MODEL_Local_trajectory_export_T rtm;
};

/* Model block global parameters (default storage) */
extern real_T rtP_CLOSEST_DISTANCE_THRESHOLD;/* Variable: CLOSEST_DISTANCE_THRESHOLD
                                              * Referenced by: '<Root>/Trajectory_Closest_Point_Info_Get'
                                              */
extern real_T rtP_DEG2RAD;             /* Variable: DEG2RAD
                                        * Referenced by: '<Root>/Trajectory_Closest_Point_Info_Get'
                                        */
extern real_T rtP_DELTA_ANGLE_COMPENSATION1;/* Variable: DELTA_ANGLE_COMPENSATION1
                                             * Referenced by: '<Root>/Trajectory_Closest_Point_Info_Get'
                                             */
extern real_T rtP_DELTA_ANGLE_COMPENSATION2;/* Variable: DELTA_ANGLE_COMPENSATION2
                                             * Referenced by: '<Root>/Trajectory_Closest_Point_Info_Get'
                                             */
extern real_T rtP_DELTA_ANGLE_DIVISOR360;/* Variable: DELTA_ANGLE_DIVISOR360
                                          * Referenced by: '<Root>/Trajectory_Closest_Point_Info_Get'
                                          */
extern real_T rtP_DELTA_ANGLE_THRESHOLD;/* Variable: DELTA_ANGLE_THRESHOLD
                                         * Referenced by: '<Root>/Trajectory_Closest_Point_Info_Get'
                                         */
extern real_T rtP_EPSILON;             /* Variable: EPSILON
                                        * Referenced by: '<Root>/Trajectory_Closest_Point_Info_Get'
                                        */
extern real_T rtP_LATERAL_DISTANCE_THRESHOLD;/* Variable: LATERAL_DISTANCE_THRESHOLD
                                              * Referenced by: '<Root>/Constant1'
                                              */
extern real_T rtP_MAX_TRAJECTORY_LENGTH;/* Variable: MAX_TRAJECTORY_LENGTH
                                         * Referenced by:
                                         *   '<Root>/Constant13'
                                         *   '<S2>/Constant22'
                                         *   '<S4>/Constant13'
                                         *   '<S7>/Constant13'
                                         */
extern real_T rtP_SINGLE_STEP_MOTION_ARC_LENGTH_THRESHOLD;
                            /* Variable: SINGLE_STEP_MOTION_ARC_LENGTH_THRESHOLD
                             * Referenced by: '<Root>/Trajectory_Closest_Point_Info_Get'
                             */
extern real_T rtP_START_END_DISTANCE_THRESHOLD;/* Variable: START_END_DISTANCE_THRESHOLD
                                                * Referenced by:
                                                *   '<S3>/Constant'
                                                *   '<S6>/Constant19'
                                                */
extern int32_T rtP_MAX_LOCAL_TRAJECTORY_WAY_POINT_NUMBER;
                              /* Variable: MAX_LOCAL_TRAJECTORY_WAY_POINT_NUMBER
                               * Referenced by:
                               *   '<S2>/Constant'
                               *   '<S5>/Constant'
                               *   '<S6>/Constant'
                               */
extern int32_T rtP_N_ALTERNATIVE_CLOSEST_POINT_QUEUE;
                                  /* Variable: N_ALTERNATIVE_CLOSEST_POINT_QUEUE
                                   * Referenced by: '<Root>/Trajectory_Closest_Point_Info_Get'
                                   */

/* Model reference registration function */
extern void Local_trajectory_export_initialize(const char_T **rt_errorStatus,
  RT_MODEL_Local_trajectory_export_T *const Local_trajectory_export_M,
  B_Local_trajectory_export_c_T *localB, DW_Local_trajectory_export_f_T *localDW);
extern void Local_trajectory_export_Init(DW_Local_trajectory_export_f_T *localDW);
extern void Local_trajectory_export_Reset(DW_Local_trajectory_export_f_T
  *localDW);
extern void Local_trajectory_export_Start(DW_Local_trajectory_export_f_T
  *localDW);
extern void Local_trajectory_export_Disable(DW_Local_trajectory_export_f_T
  *localDW);
extern void Local_trajectory_export(const real_T *rtu_ENU_yaw_angle, const
  real_T *rtu_ENU_x, const real_T *rtu_ENU_y, const int8_T *rtu_trajectory_index,
  const int32_T *rtu_global_trajectory_point_number, const real_T
  rtu_global_trajectory_yaw_angle[20001], const real_T rtu_global_trajectory_x
  [20001], const real_T rtu_global_trajectory_y[20001], const real_T
  rtu_global_trajectory_curvature[20001], const real_T
  rtu_global_trajectory_segment_length[20001], const real_T
  rtu_global_trajectory_cumulative_length[20001], const int8_T
  rtu_global_trajectory_segment_ID[20001], const int8_T
  rtu_global_trajectory_vision_priority[20001], const int8_T
  rtu_global_trajectory_GNSS_priority[20001], int32_T *rty_way_point_number,
  real_T rty_trajectory_yaw_angle[60], real_T rty_trajectory_x[60], real_T
  rty_trajectory_y[60], real_T rty_trajectory_curvature[60], real_T
  rty_segment_length[60], int8_T rty_segment_ID[60], int8_T rty_vision_priority
  [60], int8_T rty_GNSS_priority[60], B_Local_trajectory_export_c_T *localB,
  DW_Local_trajectory_export_f_T *localDW);

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
 * '<Root>' : 'Local_trajectory_export'
 * '<S1>'   : 'Local_trajectory_export/DocBlock'
 * '<S2>'   : 'Local_trajectory_export/Rest_Distance_Greater_Than_Or_Equal_Threshold'
 * '<S3>'   : 'Local_trajectory_export/Rest_Distance_Less_Than_Threshold'
 * '<S4>'   : 'Local_trajectory_export/Rest_Distance_Greater_Than_Or_Equal_Threshold/End_Point_Number_Calculate'
 * '<S5>'   : 'Local_trajectory_export/Rest_Distance_Less_Than_Threshold/Start_End_Distance_Greater_Than_Threshold'
 * '<S6>'   : 'Local_trajectory_export/Rest_Distance_Less_Than_Threshold/Start_End_Distance_Less_Than_Or_Equal_Threshold'
 * '<S7>'   : 'Local_trajectory_export/Rest_Distance_Less_Than_Threshold/Start_End_Distance_Less_Than_Or_Equal_Threshold/Append_Point_Number_Calculate'
 */
#endif                               /* RTW_HEADER_Local_trajectory_export_h_ */

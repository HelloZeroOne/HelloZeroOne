/*
 * Code generation for system model 'Trajectory_closest_point_info_get'
 * For more details, see corresponding source file Trajectory_closest_point_info_get.c
 *
 */

#ifndef RTW_HEADER_Trajectory_closest_point_info_get_h_
#define RTW_HEADER_Trajectory_closest_point_info_get_h_
#include <cmath>
#include <cstring>
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "Trajectory_closest_point_info_get_types.h"

/* Shared type includes */
#include "multiword_types.h"

/* Child system includes */
#include "Vehicle_coordinate_transfer.h"
#include "Custom_mod.h"
#include "Two_point_distance_calculate.h"
#include "Vector_projection_get_closest_point.h"

/* Block signals for model 'Trajectory_closest_point_info_get' */
struct B_Trajectory_closest_point_info_get_c_T {
  real_T output_near_lateral_offset;   /* '<Root>/Merge4' */
  real_T yaw_angle_rad;                /* '<S4>/Multiply' */
  real_T vehicle_x1;                   /* '<S4>/Vehicle_Coordinate_Transfer' */
  real_T vehicle_y1;                   /* '<S4>/Vehicle_Coordinate_Transfer' */
  real_T UnaryMinus;                   /* '<S4>/Unary Minus' */
  real_T Selector2[2];                 /* '<S8>/Selector2' */
  real_T Selector1[2];                 /* '<S8>/Selector1' */
  real_T Selector3;                    /* '<S8>/Selector3' */
  real_T temp_delta_angle1;            /* '<S8>/Subtract' */
  real_T specific_range_delta_angle1;  /* '<S8>/Custom_Mod1' */
  real_T Abs;                          /* '<S8>/Abs' */
  real_T Selector4;                    /* '<S8>/Selector4' */
  real_T temp_delta_angle2;            /* '<S8>/Subtract1' */
  real_T specific_range_delta_angle2;  /* '<S8>/Custom_Mod2' */
  real_T VectorConcatenate2[2];        /* '<S8>/Vector Concatenate2' */
  real_T Selector5;                    /* '<S8>/Selector5' */
  real_T Selector6;                    /* '<S8>/Selector6' */
  real_T specific_near_lateral_offset1;
                                      /* '<S8>/Two_Point_Distance1_Calculate' */
  real_T Selector7;                    /* '<S8>/Selector7' */
  real_T Selector8;                    /* '<S8>/Selector8' */
  real_T specific_near_lateral_offset2;
                                      /* '<S8>/Two_Point_Distance2_Calculate' */
  real_T VectorConcatenate4[2];        /* '<S8>/Vector Concatenate4' */
  real_T Selector9[2];                 /* '<S8>/Selector9' */
  real_T DataStoreRead;                /* '<S10>/Data Store Read' */
  real_T output_closest_point_x;       /* '<S10>/Data Store Read1' */
  real_T output_closest_point_y;       /* '<S10>/Data Store Read2' */
  real_T output_near_lateral_offset_m; /* '<S10>/Data Store Read4' */
  real_T output_closest_point_curvature;/* '<S10>/Data Store Read5' */
  real_T DataStoreRead_a;              /* '<S11>/Data Store Read' */
  real_T DataStoreRead1;               /* '<S11>/Data Store Read1' */
  real_T DataStoreRead2;               /* '<S11>/Data Store Read2' */
  real_T DataStoreRead1_a;             /* '<S17>/Data Store Read1' */
  real_T DataStoreRead2_a;             /* '<S17>/Data Store Read2' */
  real_T DataStoreRead_m;              /* '<S18>/Data Store Read' */
  real_T output_closest_distance;      /* '<S16>/Data Store Read' */
  real_T Selector6_b;                  /* '<S9>/Selector6' */
  real_T Selector7_m;                  /* '<S9>/Selector7' */
  real_T Selector8_i;                  /* '<S9>/Selector8' */
  real_T Selector9_b;                  /* '<S9>/Selector9' */
  real_T neighboring_segment_closest_point2_x;
                               /* '<S9>/Vector_Projection_Get_Closest_Point2' */
  real_T neighboring_segment_closest_point2_y;
                               /* '<S9>/Vector_Projection_Get_Closest_Point2' */
  real_T projection_rate2;     /* '<S9>/Vector_Projection_Get_Closest_Point2' */
  real_T distance2;                   /* '<S9>/Two_Point_Distance2_Calculate' */
  real_T Selector1_k;                  /* '<S9>/Selector1' */
  real_T Selector3_e;                  /* '<S9>/Selector3' */
  real_T Selector4_d;                  /* '<S9>/Selector4' */
  real_T Selector5_p;                  /* '<S9>/Selector5' */
  real_T neighboring_segment_closest_point1_x;
                               /* '<S9>/Vector_Projection_Get_Closest_Point1' */
  real_T neighboring_segment_closest_point1_y;
                               /* '<S9>/Vector_Projection_Get_Closest_Point1' */
  real_T projection_rate1;     /* '<S9>/Vector_Projection_Get_Closest_Point1' */
  real_T distance1;                   /* '<S9>/Two_Point_Distance1_Calculate' */
  real_T Selector2_b;                  /* '<S9>/Selector2' */
  real_T traverse_delta_angle;         /* '<S9>/Subtract' */
  real_T specific_range_traverse_delta_angle;/* '<S9>/Custom_Mod' */
  real_T absolute_delta_angle;         /* '<S9>/Abs' */
  real_T Selector10;                   /* '<S14>/Selector10' */
  real_T next_to_traverse_point_curvature;/* '<S14>/Selector2' */
  real_T Subtract1;                    /* '<S14>/Subtract1' */
  real_T Product;                      /* '<S14>/Product' */
  real_T Plus2;                        /* '<S14>/Plus2' */
  real_T Selector10_h;                 /* '<S15>/Selector10' */
  real_T Selector2_a;                  /* '<S15>/Selector2' */
  real_T Subtract1_h;                  /* '<S15>/Subtract1' */
  real_T Product_a;                    /* '<S15>/Product' */
  real_T Plus2_e;                      /* '<S15>/Plus2' */
  real_T Selector2_e;                  /* '<S23>/Selector2' */
  real_T UnitDelay;                    /* '<S23>/Unit Delay' */
  real_T head_arc_length_current;      /* '<S23>/Plus1' */
  real_T Selector2_p;                  /* '<S22>/Selector2' */
  real_T UnitDelay_g;                  /* '<S22>/Unit Delay' */
  real_T tail_arc_length_current;      /* '<S22>/Plus1' */
  real_T traverse_point_x;             /* '<S19>/Selector1' */
  real_T traverse_point_y;             /* '<S19>/Selector3' */
  real_T Selector4_a;                  /* '<S19>/Selector4' */
  real_T Selector5_k;                  /* '<S19>/Selector5' */
  real_T output_closest_point_x_k;
                              /* '<S19>/Vector_Projection_Get_Closest_Point1' */
  real_T output_closest_point_y_l;
                              /* '<S19>/Vector_Projection_Get_Closest_Point1' */
  real_T projection_rate1_m;  /* '<S19>/Vector_Projection_Get_Closest_Point1' */
  real_T output_near_lateral_offset_c;
                                     /* '<S19>/Two_Point_Distance1_Calculate' */
  real_T Selector6_p;                  /* '<S19>/Selector6' */
  real_T Selector7_o;                  /* '<S19>/Selector7' */
  real_T Selector8_p;                  /* '<S19>/Selector8' */
  real_T Selector9_m;                  /* '<S19>/Selector9' */
  real_T neighboring_segment_closest_point2_x_p;
                              /* '<S19>/Vector_Projection_Get_Closest_Point2' */
  real_T neighboring_segment_closest_point2_y_a;
                              /* '<S19>/Vector_Projection_Get_Closest_Point2' */
  real_T projection_rate2_f;  /* '<S19>/Vector_Projection_Get_Closest_Point2' */
  real_T distance2_f;                /* '<S19>/Two_Point_Distance2_Calculate' */
  real_T Selector10_f;                 /* '<S19>/Selector10' */
  real_T temp_next_to_traverse_point_curvature;/* '<S19>/Selector2' */
  real_T Subtract1_n;                  /* '<S19>/Subtract1' */
  real_T Product_b;                    /* '<S19>/Product' */
  real_T output_closest_point_curvature_i;/* '<S19>/Plus' */
  real_T next_to_last_point_x;         /* '<S3>/Selector' */
  real_T next_to_last_point_y;         /* '<S3>/Selector6' */
  real_T last_point_x;                 /* '<S3>/Selector1' */
  real_T last_point_y;                 /* '<S3>/Selector2' */
  real_T output_closest_point_x_o;
                                /* '<S3>/Vector_Projection_Get_Closest_Point' */
  real_T output_closest_point_y_h;
                                /* '<S3>/Vector_Projection_Get_Closest_Point' */
  real_T temp_projection_rate;  /* '<S3>/Vector_Projection_Get_Closest_Point' */
  real_T Selector10_n;                 /* '<S3>/Selector10' */
  real_T Selector3_o;                  /* '<S3>/Selector3' */
  real_T Subtract1_e;                  /* '<S3>/Subtract1' */
  real_T Product_k;                    /* '<S3>/Product' */
  int32_T Subtract2;                   /* '<S8>/Subtract2' */
  int32_T VectorConcatenate[2];        /* '<S8>/Vector Concatenate' */
  int32_T Subtract3;                   /* '<S8>/Subtract3' */
  int32_T closest_point_index;         /* '<S10>/Switch' */
  int32_T output_closest_segment_start_point_index;/* '<S10>/Data Store Read3' */
  int32_T ForIterator;                 /* '<S11>/For Iterator' */
  int32_T min_delta_angle_index;       /* '<S18>/traverse_index' */
  int32_T closest_distance_index;      /* '<S16>/traverse_index' */
  int32_T traverse_index;              /* '<S9>/For Iterator' */
  int32_T Plus3;                       /* '<S9>/Plus3' */
  int32_T Plus4;                       /* '<S9>/Plus4' */
  int32_T Subtract1_j;                 /* '<S9>/Subtract1' */
  int32_T output_valid_queue_length;   /* '<S9>/Merge' */
  int32_T DataStoreRead1_e;            /* '<S12>/Data Store Read1' */
  int32_T DataStoreRead5;              /* '<S14>/Data Store Read5' */
  int32_T Plus;                        /* '<S14>/Plus' */
  int32_T output_valid_queue_length_f; /* '<S14>/Min' */
  int32_T Plus1;                       /* '<S14>/Plus1' */
  int32_T Plus3_n;                     /* '<S14>/Plus3' */
  int32_T DataStoreRead1_n;            /* '<S13>/Data Store Read1' */
  int32_T DataStoreRead5_h;            /* '<S15>/Data Store Read5' */
  int32_T Plus_i;                      /* '<S15>/Plus' */
  int32_T output_valid_queue_length_p; /* '<S15>/Min' */
  int32_T Plus1_m;                     /* '<S15>/Plus1' */
  int32_T WhileIterator;               /* '<S23>/While Iterator' */
  int32_T Plus_f;                      /* '<S23>/Plus' */
  int32_T start_index;                 /* '<S23>/Subtract2' */
  int32_T WhileIterator_e;             /* '<S22>/While Iterator' */
  int32_T end_index;                   /* '<S22>/Plus2' */
  int32_T Subtract;                    /* '<S22>/Subtract' */
  int32_T WhileIterator_c;             /* '<S19>/While Iterator' */
  int32_T Subtract_m;                  /* '<S19>/Subtract' */
  int32_T traverse_index_b;            /* '<S19>/Plus2' */
  int32_T Plus3_k;                     /* '<S19>/Plus3' */
  int32_T Plus4_o;                     /* '<S19>/Plus4' */
  int32_T valid_way_point_number;      /* '<S3>/Max' */
  int32_T temp_index;                  /* '<S3>/Minus' */
  boolean_T Compare;                   /* '<S5>/Compare' */
  boolean_T global_search_enable_flag; /* '<S2>/OR' */
  boolean_T LessThanOrEqual;           /* '<S10>/LessThanOrEqual' */
  boolean_T GreaterThanOrEqual;        /* '<S10>/GreaterThanOrEqual' */
  boolean_T AND;                       /* '<S10>/AND' */
  boolean_T GreaterThanOrEqual_i;      /* '<S9>/GreaterThanOrEqual' */
  boolean_T LessThan;                  /* '<S12>/Less Than' */
  boolean_T DataStoreRead5_d;          /* '<S13>/Data Store Read5' */
  boolean_T LessThan_n;                /* '<S13>/Less Than' */
  boolean_T Compare_h;                 /* '<S20>/Compare' */
  boolean_T Compare_i;                 /* '<S21>/Compare' */
  boolean_T LessThanOrEqual_b;         /* '<S7>/LessThanOrEqual' */
  boolean_T Compare_j;                 /* '<S25>/Compare' */
  boolean_T Compare_jr;                /* '<S26>/Compare' */
  boolean_T AND_f;                     /* '<S23>/AND' */
  boolean_T Compare_b;                 /* '<S24>/Compare' */
  boolean_T LessThan_o;                /* '<S22>/Less Than' */
  boolean_T AND_n;                     /* '<S22>/AND' */
  boolean_T LessThanOrEqual_d;         /* '<S19>/LessThanOrEqual' */
  boolean_T closest_point_invalid_flag;/* '<S19>/GreaterThanOrEqual' */
  boolean_T AND_g;                     /* '<S19>/AND' */
};

/* Block states (default storage) for model 'Trajectory_closest_point_info_get' */
struct DW_Trajectory_closest_point_info_get_f_T {
  real_T head_arc_length_previous;     /* '<S23>/Unit Delay' */
  real_T tail_arc_length_previous;     /* '<S22>/Unit Delay' */
  real_T closer_point_x_queue[100];    /* '<S6>/Data Store Memory' */
  real_T closer_point_y_queue[100];    /* '<S6>/Data Store Memory1' */
  real_T delta_angle_queue[100];       /* '<S6>/Data Store Memory2' */
  real_T near_lateral_offset_queue[100];/* '<S6>/Data Store Memory4' */
  real_T closest_distance;             /* '<S6>/Data Store Memory7' */
  real_T closer_point_curvature_queue[100];/* '<S6>/Data Store Memory8' */
  real_T min_delta_angle;              /* '<S6>/Data Store Memory9' */
  int32_T closer_point_index_queue[100];/* '<S6>/Data Store Memory3' */
  int32_T valid_queue_length;          /* '<S6>/Data Store Memory5' */
  int8_T If_ActiveSubsystem;           /* '<Root>/If' */
  int8_T If_ActiveSubsystem_j;         /* '<S2>/If' */
  boolean_T distance_relationship_transition_flag;/* '<S6>/Data Store Memory6' */
  MdlrefDW_Vehicle_coordinate_transfer_T
    Vehicle_Coordinate_Transfer_InstanceData;/* '<S4>/Vehicle_Coordinate_Transfer' */
  MdlrefDW_Custom_mod_T Custom_Mod1_InstanceData;/* '<S8>/Custom_Mod1' */
  MdlrefDW_Custom_mod_T Custom_Mod2_InstanceData;/* '<S8>/Custom_Mod2' */
  MdlrefDW_Two_point_distance_calculate_T
    Two_Point_Distance1_Calculate_InstanceData;
                                      /* '<S8>/Two_Point_Distance1_Calculate' */
  MdlrefDW_Two_point_distance_calculate_T
    Two_Point_Distance2_Calculate_InstanceData;
                                      /* '<S8>/Two_Point_Distance2_Calculate' */
  MdlrefDW_Vector_projection_get_closest_point_T
    Vector_Projection_Get_Closest_Point2_InstanceData;
                               /* '<S9>/Vector_Projection_Get_Closest_Point2' */
  MdlrefDW_Two_point_distance_calculate_T
    Two_Point_Distance2_Calculate_InstanceData_b;
                                      /* '<S9>/Two_Point_Distance2_Calculate' */
  MdlrefDW_Vector_projection_get_closest_point_T
    Vector_Projection_Get_Closest_Point1_InstanceData;
                               /* '<S9>/Vector_Projection_Get_Closest_Point1' */
  MdlrefDW_Two_point_distance_calculate_T
    Two_Point_Distance1_Calculate_InstanceData_d;
                                      /* '<S9>/Two_Point_Distance1_Calculate' */
  MdlrefDW_Custom_mod_T Custom_Mod_InstanceData;/* '<S9>/Custom_Mod' */
  MdlrefDW_Vector_projection_get_closest_point_T
    Vector_Projection_Get_Closest_Point1_InstanceData_e;
                              /* '<S19>/Vector_Projection_Get_Closest_Point1' */
  MdlrefDW_Two_point_distance_calculate_T
    Two_Point_Distance1_Calculate_InstanceData_j;
                                     /* '<S19>/Two_Point_Distance1_Calculate' */
  MdlrefDW_Vector_projection_get_closest_point_T
    Vector_Projection_Get_Closest_Point2_InstanceData_a;
                              /* '<S19>/Vector_Projection_Get_Closest_Point2' */
  MdlrefDW_Two_point_distance_calculate_T
    Two_Point_Distance2_Calculate_InstanceData_l;
                                     /* '<S19>/Two_Point_Distance2_Calculate' */
  MdlrefDW_Vector_projection_get_closest_point_T
    Vector_Projection_Get_Closest_Point_InstanceData;
                                /* '<S3>/Vector_Projection_Get_Closest_Point' */
  MdlrefDW_Two_point_distance_calculate_T
    Two_Point_Distance_Calculate_InstanceData;/* '<S3>/Two_Point_Distance_Calculate' */
};

/* Parameters (default storage) */
struct P_Trajectory_closest_point_info_get_T_ {
  int32_T CompareToConstant1_const;  /* Mask Parameter: CompareToConstant1_const
                                      * Referenced by: '<S26>/Constant'
                                      */
  int32_T CompareToConstant_const;    /* Mask Parameter: CompareToConstant_const
                                       * Referenced by: '<S20>/Constant'
                                       */
  int32_T CompareToConstant1_const_a;
                                   /* Mask Parameter: CompareToConstant1_const_a
                                    * Referenced by: '<S21>/Constant'
                                    */
  int32_T CompareToConstant1_const_e;
                                   /* Mask Parameter: CompareToConstant1_const_e
                                    * Referenced by: '<S5>/Constant'
                                    */
  real_T UnitDelay_InitialCondition;   /* Expression: 0
                                        * Referenced by: '<S22>/Unit Delay'
                                        */
  real_T UnitDelay_InitialCondition_h; /* Expression: 0
                                        * Referenced by: '<S23>/Unit Delay'
                                        */
  real_T DataStoreMemory_InitialValue[100];
                      /* Expression: zeros(N_ALTERNATIVE_CLOSEST_POINT_QUEUE, 1)
                       * Referenced by: '<S6>/Data Store Memory'
                       */
  real_T DataStoreMemory1_InitialValue[100];
                      /* Expression: zeros(N_ALTERNATIVE_CLOSEST_POINT_QUEUE, 1)
                       * Referenced by: '<S6>/Data Store Memory1'
                       */
  real_T DataStoreMemory2_InitialValue[100];
                      /* Expression: zeros(N_ALTERNATIVE_CLOSEST_POINT_QUEUE, 1)
                       * Referenced by: '<S6>/Data Store Memory2'
                       */
  real_T DataStoreMemory4_InitialValue[100];
                      /* Expression: zeros(N_ALTERNATIVE_CLOSEST_POINT_QUEUE, 1)
                       * Referenced by: '<S6>/Data Store Memory4'
                       */
  real_T DataStoreMemory7_InitialValue;/* Expression: 0
                                        * Referenced by: '<S6>/Data Store Memory7'
                                        */
  real_T DataStoreMemory8_InitialValue[100];
                      /* Expression: zeros(N_ALTERNATIVE_CLOSEST_POINT_QUEUE, 1)
                       * Referenced by: '<S6>/Data Store Memory8'
                       */
  real_T DataStoreMemory9_InitialValue;/* Expression: 0
                                        * Referenced by: '<S6>/Data Store Memory9'
                                        */
  real_T Switch_Threshold;             /* Expression: 0
                                        * Referenced by: '<S4>/Switch'
                                        */
  int32_T Constant_Value;              /* Computed Parameter: Constant_Value
                                        * Referenced by: '<S3>/Constant'
                                        */
  int32_T Constant1_Value;             /* Computed Parameter: Constant1_Value
                                        * Referenced by: '<S3>/Constant1'
                                        */
  int32_T Constant1_Value_l;           /* Computed Parameter: Constant1_Value_l
                                        * Referenced by: '<S19>/Constant1'
                                        */
  int32_T Constant2_Value;             /* Computed Parameter: Constant2_Value
                                        * Referenced by: '<S19>/Constant2'
                                        */
  int32_T Constant3_Value;             /* Computed Parameter: Constant3_Value
                                        * Referenced by: '<S19>/Constant3'
                                        */
  int32_T Constant1_Value_o;           /* Computed Parameter: Constant1_Value_o
                                        * Referenced by: '<S22>/Constant1'
                                        */
  int32_T Constant1_Value_b;           /* Computed Parameter: Constant1_Value_b
                                        * Referenced by: '<S23>/Constant1'
                                        */
  int32_T Constant11_Value;            /* Computed Parameter: Constant11_Value
                                        * Referenced by: '<S15>/Constant11'
                                        */
  int32_T Constant3_Value_f;           /* Computed Parameter: Constant3_Value_f
                                        * Referenced by: '<S15>/Constant3'
                                        */
  int32_T Constant11_Value_d;          /* Computed Parameter: Constant11_Value_d
                                        * Referenced by: '<S14>/Constant11'
                                        */
  int32_T Constant2_Value_d;           /* Computed Parameter: Constant2_Value_d
                                        * Referenced by: '<S14>/Constant2'
                                        */
  int32_T Constant3_Value_p;           /* Computed Parameter: Constant3_Value_p
                                        * Referenced by: '<S14>/Constant3'
                                        */
  int32_T Constant2_Value_o;           /* Computed Parameter: Constant2_Value_o
                                        * Referenced by: '<S9>/Constant2'
                                        */
  int32_T Constant3_Value_n;           /* Computed Parameter: Constant3_Value_n
                                        * Referenced by: '<S9>/Constant3'
                                        */
  int32_T Constant1_Value_a;           /* Computed Parameter: Constant1_Value_a
                                        * Referenced by: '<S9>/Constant1'
                                        */
  int32_T Constant2_Value_oh;          /* Computed Parameter: Constant2_Value_oh
                                        * Referenced by: '<S8>/Constant2'
                                        */
  int32_T Constant11_Value_b;          /* Computed Parameter: Constant11_Value_b
                                        * Referenced by: '<S8>/Constant11'
                                        */
  int32_T Constant1_Value_d[2];        /* Computed Parameter: Constant1_Value_d
                                        * Referenced by: '<S8>/Constant1'
                                        */
  int32_T Constant4_Value[2];          /* Computed Parameter: Constant4_Value
                                        * Referenced by: '<S8>/Constant4'
                                        */
  int32_T Constant6_Value;             /* Computed Parameter: Constant6_Value
                                        * Referenced by: '<S8>/Constant6'
                                        */
  int32_T Constant14_Value[2];         /* Computed Parameter: Constant14_Value
                                        * Referenced by: '<S8>/Constant14'
                                        */
  int32_T Constant16_Value[2];         /* Computed Parameter: Constant16_Value
                                        * Referenced by: '<S8>/Constant16'
                                        */
  int32_T Constant19_Value;            /* Computed Parameter: Constant19_Value
                                        * Referenced by: '<S8>/Constant19'
                                        */
  int32_T Constant20_Value;            /* Computed Parameter: Constant20_Value
                                        * Referenced by: '<S8>/Constant20'
                                        */
  int32_T Constant22_Value[2];         /* Computed Parameter: Constant22_Value
                                        * Referenced by: '<S8>/Constant22'
                                        */
  int32_T Constant3_Value_k[2];        /* Computed Parameter: Constant3_Value_k
                                        * Referenced by: '<S8>/Constant3'
                                        */
  int32_T Constant23_Value;            /* Computed Parameter: Constant23_Value
                                        * Referenced by: '<S8>/Constant23'
                                        */
  int32_T Constant5_Value;             /* Computed Parameter: Constant5_Value
                                        * Referenced by: '<S8>/Constant5'
                                        */
  int32_T DataStoreMemory3_InitialValue[100];
                            /* Computed Parameter: DataStoreMemory3_InitialValue
                             * Referenced by: '<S6>/Data Store Memory3'
                             */
  int32_T DataStoreMemory5_InitialValue;
                            /* Computed Parameter: DataStoreMemory5_InitialValue
                             * Referenced by: '<S6>/Data Store Memory5'
                             */
  boolean_T closest_point_invalid_flag_Y0;
                            /* Computed Parameter: closest_point_invalid_flag_Y0
                             * Referenced by: '<S19>/closest_point_invalid_flag'
                             */
  boolean_T closest_point_invalid_flag_Y0_k;
                          /* Computed Parameter: closest_point_invalid_flag_Y0_k
                           * Referenced by: '<S7>/closest_point_invalid_flag'
                           */
  boolean_T Constant2_Value_g;         /* Computed Parameter: Constant2_Value_g
                                        * Referenced by: '<S15>/Constant2'
                                        */
  boolean_T Constant2_Value_a;         /* Computed Parameter: Constant2_Value_a
                                        * Referenced by: '<S12>/Constant2'
                                        */
  boolean_T DataStoreMemory6_InitialValue;
                            /* Computed Parameter: DataStoreMemory6_InitialValue
                             * Referenced by: '<S6>/Data Store Memory6'
                             */
};

/* Real-time Model Data Structure */
struct tag_RTM_Trajectory_closest_point_info_get_T {
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

struct MdlrefDW_Trajectory_closest_point_info_get_T {
  B_Trajectory_closest_point_info_get_c_T rtb;
  DW_Trajectory_closest_point_info_get_f_T rtdw;
  RT_MODEL_Trajectory_closest_point_info_get_T rtm;
};

/* Model block global parameters (default storage) */
extern real_T rtP_CLOSEST_DISTANCE_THRESHOLD;/* Variable: CLOSEST_DISTANCE_THRESHOLD
                                              * Referenced by:
                                              *   '<S10>/Constant1'
                                              *   '<S11>/Constant'
                                              */
extern real_T rtP_DEG2RAD;             /* Variable: DEG2RAD
                                        * Referenced by: '<S4>/Multiply'
                                        */
extern real_T rtP_DELTA_ANGLE_COMPENSATION1;/* Variable: DELTA_ANGLE_COMPENSATION1
                                             * Referenced by:
                                             *   '<S8>/Constant25'
                                             *   '<S8>/Constant8'
                                             *   '<S9>/Constant8'
                                             */
extern real_T rtP_DELTA_ANGLE_COMPENSATION2;/* Variable: DELTA_ANGLE_COMPENSATION2
                                             * Referenced by:
                                             *   '<S8>/Constant26'
                                             *   '<S8>/Constant9'
                                             *   '<S9>/Constant9'
                                             */
extern real_T rtP_DELTA_ANGLE_DIVISOR360;/* Variable: DELTA_ANGLE_DIVISOR360
                                          * Referenced by:
                                          *   '<S8>/Constant24'
                                          *   '<S8>/Constant7'
                                          *   '<S9>/Constant7'
                                          */
extern real_T rtP_DELTA_ANGLE_THRESHOLD;/* Variable: DELTA_ANGLE_THRESHOLD
                                         * Referenced by: '<S10>/Constant'
                                         */
extern real_T rtP_EPSILON;             /* Variable: EPSILON
                                        * Referenced by:
                                        *   '<S8>/Custom_Mod1'
                                        *   '<S8>/Custom_Mod2'
                                        *   '<S9>/Custom_Mod'
                                        */
extern real_T rtP_SINGLE_STEP_MOTION_ARC_LENGTH_THRESHOLD;
                            /* Variable: SINGLE_STEP_MOTION_ARC_LENGTH_THRESHOLD
                             * Referenced by:
                             *   '<S24>/Constant'
                             *   '<S25>/Constant'
                             */
extern int32_T rtP_N_ALTERNATIVE_CLOSEST_POINT_QUEUE;
                                  /* Variable: N_ALTERNATIVE_CLOSEST_POINT_QUEUE
                                   * Referenced by:
                                   *   '<S12>/Constant1'
                                   *   '<S13>/Constant1'
                                   *   '<S14>/Constant1'
                                   *   '<S15>/Constant1'
                                   */

/* Model reference registration function */
extern void Trajectory_closest_point_info_get_initialize(const char_T
  **rt_errorStatus, RT_MODEL_Trajectory_closest_point_info_get_T *const
  Trajectory_closest_point_info_get_M, B_Trajectory_closest_point_info_get_c_T
  *localB, DW_Trajectory_closest_point_info_get_f_T *localDW);
extern void Trajectory_closest_point_info_get_Init
  (B_Trajectory_closest_point_info_get_c_T *localB,
   DW_Trajectory_closest_point_info_get_f_T *localDW);
extern void Trajectory_closest_point_info_get_Start
  (DW_Trajectory_closest_point_info_get_f_T *localDW);
extern void Trajectory_closest_point_info_get_Disable
  (DW_Trajectory_closest_point_info_get_f_T *localDW);
extern void Trajectory_closest_point_info_get(const real_T rtu_trajectory_x
  [20001], const real_T rtu_trajectory_y[20001], const real_T
  rtu_trajectory_yaw_angle[20001], const real_T rtu_trajectory_curvature[20001],
  const real_T rtu_trajectory_segment_length[20001], const real_T
  *rtu_current_point_x, const real_T *rtu_current_point_y, const real_T
  *rtu_current_point_yaw_angle, const int32_T
  *rtu_closest_segment_start_point_index_previous, const int32_T
  *rtu_way_point_number, real_T *rty_closest_point_x, real_T
  *rty_closest_point_y, real_T *rty_closest_point_curvature, int32_T
  *rty_closest_segment_start_point_index, real_T *rty_near_lateral_offset,
  B_Trajectory_closest_point_info_get_c_T *localB,
  DW_Trajectory_closest_point_info_get_f_T *localDW);

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
 * '<Root>' : 'Trajectory_closest_point_info_get'
 * '<S1>'   : 'Trajectory_closest_point_info_get/DocBlock'
 * '<S2>'   : 'Trajectory_closest_point_info_get/Greater_Than_Or_Equal_3_Point'
 * '<S3>'   : 'Trajectory_closest_point_info_get/Less_Than_3_Point'
 * '<S4>'   : 'Trajectory_closest_point_info_get/Near_Lateral_Offset_Symbol_Set'
 * '<S5>'   : 'Trajectory_closest_point_info_get/Greater_Than_Or_Equal_3_Point/Compare To Constant1'
 * '<S6>'   : 'Trajectory_closest_point_info_get/Greater_Than_Or_Equal_3_Point/Global_Search'
 * '<S7>'   : 'Trajectory_closest_point_info_get/Greater_Than_Or_Equal_3_Point/Local_Search'
 * '<S8>'   : 'Trajectory_closest_point_info_get/Greater_Than_Or_Equal_3_Point/Global_Search/Alternative_Queue_Initialize'
 * '<S9>'   : 'Trajectory_closest_point_info_get/Greater_Than_Or_Equal_3_Point/Global_Search/Closer_Point_Queue_Search_Loop'
 * '<S10>'  : 'Trajectory_closest_point_info_get/Greater_Than_Or_Equal_3_Point/Global_Search/Closest_Point_Get'
 * '<S11>'  : 'Trajectory_closest_point_info_get/Greater_Than_Or_Equal_3_Point/Global_Search/Specific_Closest_Point_Search_Loop'
 * '<S12>'  : 'Trajectory_closest_point_info_get/Greater_Than_Or_Equal_3_Point/Global_Search/Closer_Point_Queue_Search_Loop/Change_Distance_Relationship'
 * '<S13>'  : 'Trajectory_closest_point_info_get/Greater_Than_Or_Equal_3_Point/Global_Search/Closer_Point_Queue_Search_Loop/Find_A_Closer_Point'
 * '<S14>'  : 'Trajectory_closest_point_info_get/Greater_Than_Or_Equal_3_Point/Global_Search/Closer_Point_Queue_Search_Loop/Change_Distance_Relationship/Global_Search_Terminate'
 * '<S15>'  : 'Trajectory_closest_point_info_get/Greater_Than_Or_Equal_3_Point/Global_Search/Closer_Point_Queue_Search_Loop/Find_A_Closer_Point/Change_Distance_Relationship'
 * '<S16>'  : 'Trajectory_closest_point_info_get/Greater_Than_Or_Equal_3_Point/Global_Search/Specific_Closest_Point_Search_Loop/Find_A_Closer_Distance_Point'
 * '<S17>'  : 'Trajectory_closest_point_info_get/Greater_Than_Or_Equal_3_Point/Global_Search/Specific_Closest_Point_Search_Loop/Find_A_Point_Less_Than_Threshold'
 * '<S18>'  : 'Trajectory_closest_point_info_get/Greater_Than_Or_Equal_3_Point/Global_Search/Specific_Closest_Point_Search_Loop/Find_A_Point_Less_Than_Threshold/Find_A_Smaller_Delta_Angle_Point'
 * '<S19>'  : 'Trajectory_closest_point_info_get/Greater_Than_Or_Equal_3_Point/Local_Search/Closest_Point_Search_Loop'
 * '<S20>'  : 'Trajectory_closest_point_info_get/Greater_Than_Or_Equal_3_Point/Local_Search/Compare To Constant'
 * '<S21>'  : 'Trajectory_closest_point_info_get/Greater_Than_Or_Equal_3_Point/Local_Search/Compare To Constant1'
 * '<S22>'  : 'Trajectory_closest_point_info_get/Greater_Than_Or_Equal_3_Point/Local_Search/End_Index_Search_Loop'
 * '<S23>'  : 'Trajectory_closest_point_info_get/Greater_Than_Or_Equal_3_Point/Local_Search/Start_Index_Search_Loop'
 * '<S24>'  : 'Trajectory_closest_point_info_get/Greater_Than_Or_Equal_3_Point/Local_Search/End_Index_Search_Loop/Compare To Constant'
 * '<S25>'  : 'Trajectory_closest_point_info_get/Greater_Than_Or_Equal_3_Point/Local_Search/Start_Index_Search_Loop/Compare To Constant'
 * '<S26>'  : 'Trajectory_closest_point_info_get/Greater_Than_Or_Equal_3_Point/Local_Search/Start_Index_Search_Loop/Compare To Constant1'
 */
#endif                     /* RTW_HEADER_Trajectory_closest_point_info_get_h_ */

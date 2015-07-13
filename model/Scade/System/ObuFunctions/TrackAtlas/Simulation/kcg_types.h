/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-12T18:20:55
*************************************************************$ */
#ifndef _KCG_TYPES_H_
#define _KCG_TYPES_H_

#define KCG_MAPW_CPY

#include "./user_macros.h"

#ifndef kcg_int
#define kcg_int kcg_int
typedef int kcg_int;
#endif /* kcg_int */

#ifndef kcg_bool
#define kcg_bool kcg_bool
typedef unsigned char kcg_bool;
#endif /* kcg_bool */

#ifndef kcg_real
#define kcg_real kcg_real
typedef double kcg_real;
#endif /* kcg_real */

#ifndef kcg_char
#define kcg_char kcg_char
typedef unsigned char kcg_char;
#endif /* kcg_char */

#ifndef kcg_false
#define kcg_false ((kcg_bool) 0)
#endif /* kcg_false */

#ifndef kcg_true
#define kcg_true ((kcg_bool) 1)
#endif /* kcg_true */

#ifndef kcg_assign
#include "kcg_assign.h"
#endif /* kcg_assign */

#ifndef kcg_assign_struct
#define kcg_assign_struct kcg_assign
#endif /* kcg_assign_struct */

#ifndef kcg_assign_array
#define kcg_assign_array kcg_assign
#endif /* kcg_assign_array */

/* Q_SCALE */
typedef enum {
  Q_SCALE_10_cm_scale = 0,
  Q_SCALE_1_m_scale = 1,
  Q_SCALE_10_m_scale = 2
} Q_SCALE;
/* Q_DIR */
typedef enum {
  Q_DIR_Reverse = 0,
  Q_DIR_Nominal = 1,
  Q_DIR_Both_directions = 2
} Q_DIR;
/* Q_FRONT */
typedef enum {
  Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element = 0,
  Q_FRONT_No_train_length_delay_on_validity_end_point_of_profile_element = 1
} Q_FRONT;
/* D_STATIC */
typedef kcg_int D_STATIC;

/* V_STATIC */
typedef kcg_int V_STATIC;

/* N_ITER */
typedef kcg_int N_ITER;

/* NC_DIFF */
typedef kcg_int NC_DIFF;

/* V_DIFF */
typedef kcg_int V_DIFF;

/* TA_MRSP::SSP_t_section_t */
typedef kcg_int SSP_t_section_t_TA_MRSP;

/* TA_MRSP::SSP_s_section_t */
typedef kcg_int SSP_s_section_t_TA_MRSP;

/* Obu_BasicTypes_Pkg::V_internal_Type */
typedef kcg_int V_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::L_internal_Type */
typedef kcg_int L_internal_Type_Obu_BasicTypes_Pkg;

typedef struct { kcg_bool valid; NC_DIFF nc_diff; V_DIFF v_diff; } struct__455;

/* TM_baseline2::P027V1_section_enum_qdiff_T */
typedef struct__455 P027V1_section_enum_qdiff_T_TM_baseline2;

typedef P027V1_section_enum_qdiff_T_TM_baseline2 array__461[32];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_qdiff_T */
typedef array__461 _1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  N_ITER n_iter;
  _1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 SECTIONS_q_diff;
} struct__464;

/* TM_baseline2::P027V1_section_enum_T */
typedef struct__464 P027V1_section_enum_T_TM_baseline2;

typedef P027V1_section_enum_T_TM_baseline2 array__473[33];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_T */
typedef array__473 P027V1_OBU_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 sections;
} struct__476;

/* TM_baseline2::P027V1_OBU_T */
typedef struct__476 P027V1_OBU_T_TM_baseline2;

typedef struct {
  SSP_t_section_t_TA_MRSP target;
  SSP_s_section_t_TA_MRSP speed;
} struct__483;

/* TA_MRSP::SSP_section_t */
typedef struct__483 SSP_section_t_TA_MRSP;

typedef SSP_section_t_TA_MRSP array__488[33];

/* TA_MRSP::SSP_cat_t */
typedef array__488 SSP_cat_t_TA_MRSP;

typedef P027V1_section_enum_T_TM_baseline2 array__491[32];

typedef array__473 array__494[33];

typedef Q_SCALE array__497[33];

typedef kcg_int array_int_33[33];

typedef P027V1_section_enum_T_TM_baseline2 array__503[1];

#ifndef kcg_copy_struct__455
#define kcg_copy_struct__455(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__455)))
#endif /* kcg_copy_struct__455 */

#ifndef kcg_copy_struct__464
#define kcg_copy_struct__464(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__464)))
#endif /* kcg_copy_struct__464 */

#ifndef kcg_copy_struct__476
#define kcg_copy_struct__476(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__476)))
#endif /* kcg_copy_struct__476 */

#ifndef kcg_copy_struct__483
#define kcg_copy_struct__483(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__483)))
#endif /* kcg_copy_struct__483 */

#ifndef kcg_copy_array__461
#define kcg_copy_array__461(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__461)))
#endif /* kcg_copy_array__461 */

#ifndef kcg_copy_array__473
#define kcg_copy_array__473(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__473)))
#endif /* kcg_copy_array__473 */

#ifndef kcg_copy_array__488
#define kcg_copy_array__488(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__488)))
#endif /* kcg_copy_array__488 */

#ifndef kcg_copy_array__491
#define kcg_copy_array__491(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__491)))
#endif /* kcg_copy_array__491 */

#ifndef kcg_copy_array__494
#define kcg_copy_array__494(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__494)))
#endif /* kcg_copy_array__494 */

#ifndef kcg_copy_array__497
#define kcg_copy_array__497(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__497)))
#endif /* kcg_copy_array__497 */

#ifndef kcg_copy_array_int_33
#define kcg_copy_array_int_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33)))
#endif /* kcg_copy_array_int_33 */

#ifndef kcg_copy_array__503
#define kcg_copy_array__503(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__503)))
#endif /* kcg_copy_array__503 */

#ifndef kcg_comp_struct__455
extern kcg_bool kcg_comp_struct__455(struct__455 *kcg_c1, struct__455 *kcg_c2);
#endif /* kcg_comp_struct__455 */

#ifndef kcg_comp_struct__464
extern kcg_bool kcg_comp_struct__464(struct__464 *kcg_c1, struct__464 *kcg_c2);
#endif /* kcg_comp_struct__464 */

#ifndef kcg_comp_struct__476
extern kcg_bool kcg_comp_struct__476(struct__476 *kcg_c1, struct__476 *kcg_c2);
#endif /* kcg_comp_struct__476 */

#ifndef kcg_comp_struct__483
extern kcg_bool kcg_comp_struct__483(struct__483 *kcg_c1, struct__483 *kcg_c2);
#endif /* kcg_comp_struct__483 */

#ifndef kcg_comp_array__461
extern kcg_bool kcg_comp_array__461(array__461 *kcg_c1, array__461 *kcg_c2);
#endif /* kcg_comp_array__461 */

#ifndef kcg_comp_array__473
extern kcg_bool kcg_comp_array__473(array__473 *kcg_c1, array__473 *kcg_c2);
#endif /* kcg_comp_array__473 */

#ifndef kcg_comp_array__488
extern kcg_bool kcg_comp_array__488(array__488 *kcg_c1, array__488 *kcg_c2);
#endif /* kcg_comp_array__488 */

#ifndef kcg_comp_array__491
extern kcg_bool kcg_comp_array__491(array__491 *kcg_c1, array__491 *kcg_c2);
#endif /* kcg_comp_array__491 */

#ifndef kcg_comp_array__494
extern kcg_bool kcg_comp_array__494(array__494 *kcg_c1, array__494 *kcg_c2);
#endif /* kcg_comp_array__494 */

#ifndef kcg_comp_array__497
extern kcg_bool kcg_comp_array__497(array__497 *kcg_c1, array__497 *kcg_c2);
#endif /* kcg_comp_array__497 */

#ifndef kcg_comp_array_int_33
extern kcg_bool kcg_comp_array_int_33(
  array_int_33 *kcg_c1,
  array_int_33 *kcg_c2);
#endif /* kcg_comp_array_int_33 */

#ifndef kcg_comp_array__503
extern kcg_bool kcg_comp_array__503(array__503 *kcg_c1, array__503 *kcg_c2);
#endif /* kcg_comp_array__503 */

#define kcg_comp_P027V1_OBU_T_TM_baseline2 kcg_comp_struct__476

#define kcg_copy_P027V1_OBU_T_TM_baseline2 kcg_copy_struct__476

#define kcg_comp_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_comp_array__473

#define kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_copy_array__473

#define kcg_comp_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_comp_struct__455

#define kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_copy_struct__455

#define kcg_comp__1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_comp_array__461

#define kcg_copy__1_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_copy_array__461

#define kcg_comp_P027V1_section_enum_T_TM_baseline2 kcg_comp_struct__464

#define kcg_copy_P027V1_section_enum_T_TM_baseline2 kcg_copy_struct__464

#define kcg_comp_SSP_cat_t_TA_MRSP kcg_comp_array__488

#define kcg_copy_SSP_cat_t_TA_MRSP kcg_copy_array__488

#define kcg_comp_SSP_section_t_TA_MRSP kcg_comp_struct__483

#define kcg_copy_SSP_section_t_TA_MRSP kcg_copy_struct__483

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-07-12T18:20:55
*************************************************************$ */


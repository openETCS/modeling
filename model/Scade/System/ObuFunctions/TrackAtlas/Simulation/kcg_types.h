/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:18:56
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
/* Q_GDIR */
typedef enum { Q_GDIR_downhill = 0, Q_GDIR_uphill = 1 } Q_GDIR;
/* D_GRADIENT */
typedef kcg_int D_GRADIENT;

/* G_A */
typedef kcg_int G_A;

/* N_ITER */
typedef kcg_int N_ITER;

/* Obu_BasicTypes_Pkg::L_internal_Type */
typedef kcg_int L_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::G_internal_Type */
typedef kcg_int G_internal_Type_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_Absolute;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_LRBG;
  G_internal_Type_Obu_BasicTypes_Pkg Gradient;
  L_internal_Type_Obu_BasicTypes_Pkg L_Gradient;
} struct__307;

/* TrackAtlasTypes::Gradient_section_t */
typedef struct__307 Gradient_section_t_TrackAtlasTypes;

typedef Gradient_section_t_TrackAtlasTypes array__315[50];

/* TrackAtlasTypes::GradientProfile_t */
typedef array__315 GradientProfile_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} struct__318;

/* TM::P021_section_enum_T */
typedef struct__318 P021_section_enum_T_TM;

typedef P021_section_enum_T_TM array__325[33];

/* TM::P021_OBU_sectionlist_enum_T */
typedef array__325 P021_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P021_OBU_sectionlist_enum_T_TM sections;
} struct__328;

/* TM::P021_OBU_T */
typedef struct__328 P021_OBU_T_TM;

typedef array__325 array__336[33];

typedef Q_SCALE array__339[33];

#ifndef kcg_copy_struct__307
#define kcg_copy_struct__307(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__307)))
#endif /* kcg_copy_struct__307 */

#ifndef kcg_copy_struct__318
#define kcg_copy_struct__318(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__318)))
#endif /* kcg_copy_struct__318 */

#ifndef kcg_copy_struct__328
#define kcg_copy_struct__328(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__328)))
#endif /* kcg_copy_struct__328 */

#ifndef kcg_copy_array__315
#define kcg_copy_array__315(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__315)))
#endif /* kcg_copy_array__315 */

#ifndef kcg_copy_array__325
#define kcg_copy_array__325(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__325)))
#endif /* kcg_copy_array__325 */

#ifndef kcg_copy_array__336
#define kcg_copy_array__336(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__336)))
#endif /* kcg_copy_array__336 */

#ifndef kcg_copy_array__339
#define kcg_copy_array__339(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__339)))
#endif /* kcg_copy_array__339 */

#ifndef kcg_comp_struct__307
extern kcg_bool kcg_comp_struct__307(struct__307 *kcg_c1, struct__307 *kcg_c2);
#endif /* kcg_comp_struct__307 */

#ifndef kcg_comp_struct__318
extern kcg_bool kcg_comp_struct__318(struct__318 *kcg_c1, struct__318 *kcg_c2);
#endif /* kcg_comp_struct__318 */

#ifndef kcg_comp_struct__328
extern kcg_bool kcg_comp_struct__328(struct__328 *kcg_c1, struct__328 *kcg_c2);
#endif /* kcg_comp_struct__328 */

#ifndef kcg_comp_array__315
extern kcg_bool kcg_comp_array__315(array__315 *kcg_c1, array__315 *kcg_c2);
#endif /* kcg_comp_array__315 */

#ifndef kcg_comp_array__325
extern kcg_bool kcg_comp_array__325(array__325 *kcg_c1, array__325 *kcg_c2);
#endif /* kcg_comp_array__325 */

#ifndef kcg_comp_array__336
extern kcg_bool kcg_comp_array__336(array__336 *kcg_c1, array__336 *kcg_c2);
#endif /* kcg_comp_array__336 */

#ifndef kcg_comp_array__339
extern kcg_bool kcg_comp_array__339(array__339 *kcg_c1, array__339 *kcg_c2);
#endif /* kcg_comp_array__339 */

#define kcg_comp_GradientProfile_t_TrackAtlasTypes kcg_comp_array__315

#define kcg_copy_GradientProfile_t_TrackAtlasTypes kcg_copy_array__315

#define kcg_comp_Gradient_section_t_TrackAtlasTypes kcg_comp_struct__307

#define kcg_copy_Gradient_section_t_TrackAtlasTypes kcg_copy_struct__307

#define kcg_comp_P021_OBU_T_TM kcg_comp_struct__328

#define kcg_copy_P021_OBU_T_TM kcg_copy_struct__328

#define kcg_comp_P021_OBU_sectionlist_enum_T_TM kcg_comp_array__325

#define kcg_copy_P021_OBU_sectionlist_enum_T_TM kcg_copy_array__325

#define kcg_comp_P021_section_enum_T_TM kcg_comp_struct__318

#define kcg_copy_P021_section_enum_T_TM kcg_copy_struct__318

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-08-30T07:18:56
*************************************************************$ */


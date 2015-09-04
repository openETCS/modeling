/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T15:52:43
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

/* Obu_BasicTypes_Pkg::L_internal_Type */
typedef kcg_int L_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::V_internal_Type */
typedef kcg_int V_internal_Type_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg d_static_abs;
  L_internal_Type_Obu_BasicTypes_Pkg d_static_LRBG;
  kcg_bool q_train_length_corr;
  V_internal_Type_Obu_BasicTypes_Pkg v_static;
} struct__136;

/* TrackAtlasTypes::StaticSpeedSection_t */
typedef struct__136 StaticSpeedSection_t_TrackAtlasTypes;

typedef StaticSpeedSection_t_TrackAtlasTypes array__144[50];

/* TrackAtlasTypes::StaticSpeedProfile_t */
typedef array__144 StaticSpeedProfile_t_TrackAtlasTypes;

#ifndef kcg_copy_struct__136
#define kcg_copy_struct__136(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__136)))
#endif /* kcg_copy_struct__136 */

#ifndef kcg_copy_array__144
#define kcg_copy_array__144(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__144)))
#endif /* kcg_copy_array__144 */

#ifndef kcg_comp_struct__136
extern kcg_bool kcg_comp_struct__136(struct__136 *kcg_c1, struct__136 *kcg_c2);
#endif /* kcg_comp_struct__136 */

#ifndef kcg_comp_array__144
extern kcg_bool kcg_comp_array__144(array__144 *kcg_c1, array__144 *kcg_c2);
#endif /* kcg_comp_array__144 */

#define kcg_comp_StaticSpeedProfile_t_TrackAtlasTypes kcg_comp_array__144

#define kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes kcg_copy_array__144

#define kcg_comp_StaticSpeedSection_t_TrackAtlasTypes kcg_comp_struct__136

#define kcg_copy_StaticSpeedSection_t_TrackAtlasTypes kcg_copy_struct__136

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-09-04T15:52:43
*************************************************************$ */


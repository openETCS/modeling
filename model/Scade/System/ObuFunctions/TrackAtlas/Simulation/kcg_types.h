/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T11:09:09
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

/* Obu_BasicTypes_Pkg::G_internal_Type */
typedef kcg_int G_internal_Type_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_Absolute;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_LRBG;
  G_internal_Type_Obu_BasicTypes_Pkg Gradient;
  L_internal_Type_Obu_BasicTypes_Pkg L_Gradient;
} struct__237;

/* TrackAtlasTypes::Gradient_section_t */
typedef struct__237 Gradient_section_t_TrackAtlasTypes;

typedef Gradient_section_t_TrackAtlasTypes array__245[50];

/* TrackAtlasTypes::GradientProfile_t */
typedef array__245 GradientProfile_t_TrackAtlasTypes;

typedef GradientProfile_t_TrackAtlasTypes array__248[33];

typedef kcg_int array_int_33[33];

#ifndef kcg_copy_struct__237
#define kcg_copy_struct__237(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__237)))
#endif /* kcg_copy_struct__237 */

#ifndef kcg_copy_array__245
#define kcg_copy_array__245(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__245)))
#endif /* kcg_copy_array__245 */

#ifndef kcg_copy_array__248
#define kcg_copy_array__248(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__248)))
#endif /* kcg_copy_array__248 */

#ifndef kcg_copy_array_int_33
#define kcg_copy_array_int_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33)))
#endif /* kcg_copy_array_int_33 */

#ifndef kcg_comp_struct__237
extern kcg_bool kcg_comp_struct__237(struct__237 *kcg_c1, struct__237 *kcg_c2);
#endif /* kcg_comp_struct__237 */

#ifndef kcg_comp_array__245
extern kcg_bool kcg_comp_array__245(array__245 *kcg_c1, array__245 *kcg_c2);
#endif /* kcg_comp_array__245 */

#ifndef kcg_comp_array__248
extern kcg_bool kcg_comp_array__248(array__248 *kcg_c1, array__248 *kcg_c2);
#endif /* kcg_comp_array__248 */

#ifndef kcg_comp_array_int_33
extern kcg_bool kcg_comp_array_int_33(
  array_int_33 *kcg_c1,
  array_int_33 *kcg_c2);
#endif /* kcg_comp_array_int_33 */

#define kcg_comp_Gradient_section_t_TrackAtlasTypes kcg_comp_struct__237

#define kcg_copy_Gradient_section_t_TrackAtlasTypes kcg_copy_struct__237

#define kcg_comp_GradientProfile_t_TrackAtlasTypes kcg_comp_array__245

#define kcg_copy_GradientProfile_t_TrackAtlasTypes kcg_copy_array__245

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-08-30T11:09:09
*************************************************************$ */


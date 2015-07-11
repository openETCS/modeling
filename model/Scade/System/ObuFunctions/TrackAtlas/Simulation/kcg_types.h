/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-10T22:36:52
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

/* TA_MRSP::SSP_t_section_t */
typedef kcg_int SSP_t_section_t_TA_MRSP;

/* TA_MRSP::SSP_s_section_t */
typedef kcg_int SSP_s_section_t_TA_MRSP;

typedef struct {
  SSP_t_section_t_TA_MRSP target;
  SSP_s_section_t_TA_MRSP speed;
} struct__246;

/* TA_MRSP::SSP_section_t */
typedef struct__246 SSP_section_t_TA_MRSP;

typedef SSP_section_t_TA_MRSP array__251[33];

/* TA_MRSP::SSP_cat_t */
typedef array__251 SSP_cat_t_TA_MRSP;

typedef SSP_cat_t_TA_MRSP array__254[33];

typedef kcg_int array_int_33[33];

#ifndef kcg_copy_struct__246
#define kcg_copy_struct__246(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__246)))
#endif /* kcg_copy_struct__246 */

#ifndef kcg_copy_array__251
#define kcg_copy_array__251(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__251)))
#endif /* kcg_copy_array__251 */

#ifndef kcg_copy_array__254
#define kcg_copy_array__254(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__254)))
#endif /* kcg_copy_array__254 */

#ifndef kcg_copy_array_int_33
#define kcg_copy_array_int_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33)))
#endif /* kcg_copy_array_int_33 */

#ifndef kcg_comp_struct__246
extern kcg_bool kcg_comp_struct__246(struct__246 *kcg_c1, struct__246 *kcg_c2);
#endif /* kcg_comp_struct__246 */

#ifndef kcg_comp_array__251
extern kcg_bool kcg_comp_array__251(array__251 *kcg_c1, array__251 *kcg_c2);
#endif /* kcg_comp_array__251 */

#ifndef kcg_comp_array__254
extern kcg_bool kcg_comp_array__254(array__254 *kcg_c1, array__254 *kcg_c2);
#endif /* kcg_comp_array__254 */

#ifndef kcg_comp_array_int_33
extern kcg_bool kcg_comp_array_int_33(
  array_int_33 *kcg_c1,
  array_int_33 *kcg_c2);
#endif /* kcg_comp_array_int_33 */

#define kcg_comp_SSP_section_t_TA_MRSP kcg_comp_struct__246

#define kcg_copy_SSP_section_t_TA_MRSP kcg_copy_struct__246

#define kcg_comp_SSP_cat_t_TA_MRSP kcg_comp_array__251

#define kcg_copy_SSP_cat_t_TA_MRSP kcg_copy_array__251

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-07-10T22:36:52
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-03T16:20:45
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

/* D_STATIC */
typedef kcg_int D_STATIC;

/* TA_MRSP::SSP_t_section_t */
typedef kcg_int SSP_t_section_t_TA_MRSP;

/* TA_MRSP::SSP_s_section_t */
typedef kcg_int SSP_s_section_t_TA_MRSP;

typedef struct {
  SSP_t_section_t_TA_MRSP target;
  SSP_s_section_t_TA_MRSP speed;
} struct__176;

/* TA_MRSP::SSP_section_t */
typedef struct__176 SSP_section_t_TA_MRSP;

typedef SSP_section_t_TA_MRSP array__181[33];

/* TA_MRSP::SSP_cat_t */
typedef array__181 SSP_cat_t_TA_MRSP;

typedef SSP_cat_t_TA_MRSP array__184[33];

typedef SSP_t_section_t_TA_MRSP array_int_33[33];

#ifndef kcg_copy_struct__176
#define kcg_copy_struct__176(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__176)))
#endif /* kcg_copy_struct__176 */

#ifndef kcg_copy_array__181
#define kcg_copy_array__181(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__181)))
#endif /* kcg_copy_array__181 */

#ifndef kcg_copy_array__184
#define kcg_copy_array__184(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__184)))
#endif /* kcg_copy_array__184 */

#ifndef kcg_copy_array_int_33
#define kcg_copy_array_int_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33)))
#endif /* kcg_copy_array_int_33 */

#ifndef kcg_comp_struct__176
extern kcg_bool kcg_comp_struct__176(struct__176 *kcg_c1, struct__176 *kcg_c2);
#endif /* kcg_comp_struct__176 */

#ifndef kcg_comp_array__181
extern kcg_bool kcg_comp_array__181(array__181 *kcg_c1, array__181 *kcg_c2);
#endif /* kcg_comp_array__181 */

#ifndef kcg_comp_array__184
extern kcg_bool kcg_comp_array__184(array__184 *kcg_c1, array__184 *kcg_c2);
#endif /* kcg_comp_array__184 */

#ifndef kcg_comp_array_int_33
extern kcg_bool kcg_comp_array_int_33(
  array_int_33 *kcg_c1,
  array_int_33 *kcg_c2);
#endif /* kcg_comp_array_int_33 */

#define kcg_comp_SSP_cat_t_TA_MRSP kcg_comp_array__181

#define kcg_copy_SSP_cat_t_TA_MRSP kcg_copy_array__181

#define kcg_comp_SSP_section_t_TA_MRSP kcg_comp_struct__176

#define kcg_copy_SSP_section_t_TA_MRSP kcg_copy_struct__176

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-09-03T16:20:45
*************************************************************$ */


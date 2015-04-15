/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-06T22:03:24
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

/* SSP_target_t */
typedef kcg_int SSP_target_t;

typedef struct {
  kcg_int Category_Index;
  kcg_int Pos_Index;
  SSP_target_t Loc;
} struct__147;

/* SSP_t_indexed_matrix_element */
typedef struct__147 SSP_t_indexed_matrix_element;

typedef SSP_t_indexed_matrix_element array__153[88];

/* SSP_t_list_t */
typedef array__153 SSP_t_list_t;

#ifndef kcg_copy_struct__147
#define kcg_copy_struct__147(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__147)))
#endif /* kcg_copy_struct__147 */

#ifndef kcg_copy_array__153
#define kcg_copy_array__153(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__153)))
#endif /* kcg_copy_array__153 */

#ifndef kcg_comp_struct__147
extern kcg_bool kcg_comp_struct__147(struct__147 *kcg_c1, struct__147 *kcg_c2);
#endif /* kcg_comp_struct__147 */

#ifndef kcg_comp_array__153
extern kcg_bool kcg_comp_array__153(array__153 *kcg_c1, array__153 *kcg_c2);
#endif /* kcg_comp_array__153 */

#define kcg_comp_SSP_t_list_t kcg_comp_array__153

#define kcg_copy_SSP_t_list_t kcg_copy_array__153

#define kcg_comp_SSP_t_indexed_matrix_element kcg_comp_struct__147

#define kcg_copy_SSP_t_indexed_matrix_element kcg_copy_struct__147

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-04-06T22:03:24
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config Z:/Documents/projects/openETCS/github/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/Simulation\kcg_s2c_config.txt
** Generation date: 2015-02-07T17:55:09
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

/* BM_Types_Flat::InfoElement_T */
typedef kcg_int InfoElement_T_BM_Types_Flat;

/* Types_Notfound::NID_VBCMK_T */
typedef kcg_int NID_VBCMK_T_Types_Notfound;

typedef InfoElement_T_BM_Types_Flat array_int_20[20];

/* BM_Types_Flat::Information_T */
typedef array_int_20 Information_T_BM_Types_Flat;

#ifndef kcg_copy_array_int_20
#define kcg_copy_array_int_20(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_20)))
#endif /* kcg_copy_array_int_20 */

#ifndef kcg_comp_array_int_20
extern kcg_bool kcg_comp_array_int_20(
  array_int_20 *kcg_c1,
  array_int_20 *kcg_c2);
#endif /* kcg_comp_array_int_20 */

#define kcg_comp_Information_T_BM_Types_Flat kcg_comp_array_int_20

#define kcg_copy_Information_T_BM_Types_Flat kcg_copy_array_int_20

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-02-07T17:55:09
*************************************************************$ */


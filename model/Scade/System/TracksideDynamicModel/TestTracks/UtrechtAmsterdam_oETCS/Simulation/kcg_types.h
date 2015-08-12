/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-12T19:26:02
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

typedef struct { kcg_int NID_BG; kcg_real TrainPos; } struct__149;

/* Internal_Tests::BPos_Single */
typedef struct__149 BPos_Single_Internal_Tests;

typedef BPos_Single_Internal_Tests array__154[100];

/* Internal_Tests::BPos */
typedef array__154 BPos_Internal_Tests;

typedef kcg_int array_int_100[100];

#ifndef kcg_copy_struct__149
#define kcg_copy_struct__149(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__149)))
#endif /* kcg_copy_struct__149 */

#ifndef kcg_copy_array__154
#define kcg_copy_array__154(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__154)))
#endif /* kcg_copy_array__154 */

#ifndef kcg_copy_array_int_100
#define kcg_copy_array_int_100(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_100)))
#endif /* kcg_copy_array_int_100 */

#ifndef kcg_comp_struct__149
extern kcg_bool kcg_comp_struct__149(struct__149 *kcg_c1, struct__149 *kcg_c2);
#endif /* kcg_comp_struct__149 */

#ifndef kcg_comp_array__154
extern kcg_bool kcg_comp_array__154(array__154 *kcg_c1, array__154 *kcg_c2);
#endif /* kcg_comp_array__154 */

#ifndef kcg_comp_array_int_100
extern kcg_bool kcg_comp_array_int_100(
  array_int_100 *kcg_c1,
  array_int_100 *kcg_c2);
#endif /* kcg_comp_array_int_100 */

#define kcg_comp_BPos_Single_Internal_Tests kcg_comp_struct__149

#define kcg_copy_BPos_Single_Internal_Tests kcg_copy_struct__149

#define kcg_comp_BPos_Internal_Tests kcg_comp_array__154

#define kcg_copy_BPos_Internal_Tests kcg_copy_array__154

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-08-12T19:26:02
*************************************************************$ */


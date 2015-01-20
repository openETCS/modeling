/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config C:/Users/Valerio/Desktop/DMI Funzionante/2014-09-02 RailDriverMachineInterface/RailDriverMachineInterface/Test/Simulation/config.txt
** Generation date: 2015-01-20T14:34:49
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
typedef char kcg_char;
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

/* Test_DMI::SM1 */
typedef enum kcg_tag_SSM_TR_SM1 {
  SSM_TR_no_trans_SM1,
  SSM_TR_VisibleState_1_SM1,
  SSM_TR_InvisibleState_1_SM1
} SSM_TR_SM1;
/* Test_DMI::SM1 */
typedef enum kcg_tag_SSM_ST_SM1 {
  SSM_st_VisibleState_SM1,
  SSM_st_InvisibleState_SM1
} SSM_ST_SM1;
/* Test_DMI::ShowDistanceToTarget */
typedef enum kcg_tag_SSM_TR_ShowDistanceToTarget {
  SSM_TR_no_trans_ShowDistanceToTarget,
  SSM_TR_VisibleState_1_ShowDistanceToTarget,
  SSM_TR_InvisibleState_1_ShowDistanceToTarget
} SSM_TR_ShowDistanceToTarget;
/* Test_DMI::ShowDistanceToTarget */
typedef enum kcg_tag_SSM_ST_ShowDistanceToTarget {
  SSM_st_VisibleState_ShowDistanceToTarget,
  SSM_st_InvisibleState_ShowDistanceToTarget
} SSM_ST_ShowDistanceToTarget;
typedef kcg_bool array_bool_12[12];

typedef kcg_real array_real_12[12];

typedef kcg_int array_int_1[1];

#ifndef kcg_copy_array_bool_12
#define kcg_copy_array_bool_12(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_12)))
#endif /* kcg_copy_array_bool_12 */

#ifndef kcg_copy_array_real_12
#define kcg_copy_array_real_12(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_12)))
#endif /* kcg_copy_array_real_12 */

#ifndef kcg_copy_array_int_1
#define kcg_copy_array_int_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_1)))
#endif /* kcg_copy_array_int_1 */

#ifdef kcg_use_array_bool_12
#ifndef kcg_comp_array_bool_12
extern kcg_bool kcg_comp_array_bool_12(
  array_bool_12 *kcg_c1,
  array_bool_12 *kcg_c2);
#endif /* kcg_comp_array_bool_12 */
#endif /* kcg_use_array_bool_12 */

#ifdef kcg_use_array_real_12
#ifndef kcg_comp_array_real_12
extern kcg_bool kcg_comp_array_real_12(
  array_real_12 *kcg_c1,
  array_real_12 *kcg_c2);
#endif /* kcg_comp_array_real_12 */
#endif /* kcg_use_array_real_12 */

#ifdef kcg_use_array_int_1
#ifndef kcg_comp_array_int_1
extern kcg_bool kcg_comp_array_int_1(array_int_1 *kcg_c1, array_int_1 *kcg_c2);
#endif /* kcg_comp_array_int_1 */
#endif /* kcg_use_array_int_1 */

#endif /* _KCG_TYPES_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** kcg_types.h
** Generation date: 2015-01-20T14:34:49
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-03-03T05:55:49
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

/* OrBG */
typedef enum { Amsterdam, Utrecht } OrBG;
/* OrLine */
typedef enum { N, Z } OrLine;
/* BG_passed::SM1 */
typedef enum {
  SSM_TR_no_trans_SM1,
  SSM_TR_State1_1_SM1,
  SSM_TR_BG_passed_1_SM1
} SSM_TR_SM1;
/* BG_passed::SM1 */
typedef enum { SSM_st_State1_SM1, SSM_st_BG_passed_SM1 } SSM_ST_SM1;
/* BG_passed::SM1::State1::SM3 */
typedef enum {
  SSM_TR_no_trans_SM3_SM1_State1,
  SSM_TR_B2_1_SM3_SM1_State1
} SSM_TR_SM3_SM1_State1;
/* BG_passed::SM1::State1::SM3 */
typedef enum {
  SSM_st_B2_SM1_State1_SM3,
  SSM_st_B2_passed_SM1_State1_SM3
} SSM_ST_SM3_SM1_State1;
/* BG_passed::SM1::State1::SM2 */
typedef enum {
  SSM_TR_no_trans_SM2_SM1_State1,
  SSM_TR_B1_1_SM2_SM1_State1
} SSM_TR_SM2_SM1_State1;
/* BG_passed::SM1::State1::SM2 */
typedef enum {
  SSM_st_B1_SM1_State1_SM2,
  SSM_st_B1_passed_SM1_State1_SM2
} SSM_ST_SM2_SM1_State1;
typedef struct {
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Pos;
  OrBG Or_BG;
  OrLine Or_Line;
} struct__371;

/* BaliseGroupData */
typedef struct__371 BaliseGroupData;

#ifndef kcg_copy_struct__371
#define kcg_copy_struct__371(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__371)))
#endif /* kcg_copy_struct__371 */

#ifndef kcg_comp_struct__371
extern kcg_bool kcg_comp_struct__371(struct__371 *kcg_c1, struct__371 *kcg_c2);
#endif /* kcg_comp_struct__371 */

#define kcg_comp_BaliseGroupData kcg_comp_struct__371

#define kcg_copy_BaliseGroupData kcg_copy_struct__371

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-03-03T05:55:49
*************************************************************$ */


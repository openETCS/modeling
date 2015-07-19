/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-19T14:15:36
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

/* T_TRAIN */
typedef kcg_real T_TRAIN;

/* NID_MESSAGE */
typedef kcg_int NID_MESSAGE;

/* L_MESSAGE */
typedef kcg_int L_MESSAGE;

/* NID_ENGINE */
typedef kcg_int NID_ENGINE;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  NID_ENGINE nid_engine;
  kcg_int field1;
  kcg_int field2;
  kcg_int field3;
} struct__244;

/* TM_radio_messages::M_TrainTrack_Radio */
typedef struct__244 M_TrainTrack_Radio_TM_radio_messages;

typedef kcg_int array_int_20[20];

typedef M_TrainTrack_Radio_TM_radio_messages array__258[20];

#ifndef kcg_copy_struct__244
#define kcg_copy_struct__244(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__244)))
#endif /* kcg_copy_struct__244 */

#ifndef kcg_copy_array_int_20
#define kcg_copy_array_int_20(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_20)))
#endif /* kcg_copy_array_int_20 */

#ifndef kcg_copy_array__258
#define kcg_copy_array__258(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__258)))
#endif /* kcg_copy_array__258 */

#ifndef kcg_comp_struct__244
extern kcg_bool kcg_comp_struct__244(struct__244 *kcg_c1, struct__244 *kcg_c2);
#endif /* kcg_comp_struct__244 */

#ifndef kcg_comp_array_int_20
extern kcg_bool kcg_comp_array_int_20(
  array_int_20 *kcg_c1,
  array_int_20 *kcg_c2);
#endif /* kcg_comp_array_int_20 */

#ifndef kcg_comp_array__258
extern kcg_bool kcg_comp_array__258(array__258 *kcg_c1, array__258 *kcg_c2);
#endif /* kcg_comp_array__258 */

#define kcg_comp_M_TrainTrack_Radio_TM_radio_messages kcg_comp_struct__244

#define kcg_copy_M_TrainTrack_Radio_TM_radio_messages kcg_copy_struct__244

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-07-19T14:15:36
*************************************************************$ */


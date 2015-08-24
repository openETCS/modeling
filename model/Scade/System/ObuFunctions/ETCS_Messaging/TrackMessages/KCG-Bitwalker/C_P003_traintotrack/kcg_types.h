/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-Bitwalker/C_P003_traintotrack\kcg_s2c_config.txt
** Generation date: 2015-08-21T16:43:59
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

/* NID_PACKET */
typedef kcg_int NID_PACKET;

/* L_PACKET */
typedef kcg_int L_PACKET;

/* N_ITER */
typedef kcg_int N_ITER;

/* NID_RADIO */
typedef kcg_int NID_RADIO;

typedef kcg_int array_int_32[32];

/* TM_TrainToTrack::P003_nid_radio_list_t */
typedef array_int_32 P003_nid_radio_list_t_TM_TrainToTrack;

/* TM_TrainToTrack::P003_nid_radio_list_int_t */
typedef array_int_32 P003_nid_radio_list_int_t_TM_TrainToTrack;

typedef kcg_int array_int_200[200];

/* TM_TrainToTrack::TrainToTrackPacket_int_T */
typedef array_int_200 TrainToTrackPacket_int_T_TM_TrainToTrack;

typedef struct {
  kcg_int meta_id;
  kcg_int start_addr;
  kcg_int end_addr;
} struct__337;

/* TM_TrainToTrack::TrainToTrack_meta */
typedef struct__337 TrainToTrack_meta_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  N_ITER n_iter;
  P003_nid_radio_list_t_TM_TrainToTrack nid_radio;
} struct__343;

/* TM_TrainToTrack::P003 */
typedef struct__343 P003_TM_TrainToTrack;

typedef kcg_int array_int_165[165];

#ifndef kcg_copy_struct__337
#define kcg_copy_struct__337(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__337)))
#endif /* kcg_copy_struct__337 */

#ifndef kcg_copy_struct__343
#define kcg_copy_struct__343(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__343)))
#endif /* kcg_copy_struct__343 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array_int_200
#define kcg_copy_array_int_200(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_200)))
#endif /* kcg_copy_array_int_200 */

#ifndef kcg_copy_array_int_165
#define kcg_copy_array_int_165(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_165)))
#endif /* kcg_copy_array_int_165 */

#ifndef kcg_comp_struct__337
extern kcg_bool kcg_comp_struct__337(struct__337 *kcg_c1, struct__337 *kcg_c2);
#endif /* kcg_comp_struct__337 */

#ifndef kcg_comp_struct__343
extern kcg_bool kcg_comp_struct__343(struct__343 *kcg_c1, struct__343 *kcg_c2);
#endif /* kcg_comp_struct__343 */

#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */

#ifndef kcg_comp_array_int_200
extern kcg_bool kcg_comp_array_int_200(
  array_int_200 *kcg_c1,
  array_int_200 *kcg_c2);
#endif /* kcg_comp_array_int_200 */

#ifndef kcg_comp_array_int_165
extern kcg_bool kcg_comp_array_int_165(
  array_int_165 *kcg_c1,
  array_int_165 *kcg_c2);
#endif /* kcg_comp_array_int_165 */

#define kcg_comp_TrainToTrack_meta_TM_TrainToTrack kcg_comp_struct__337

#define kcg_copy_TrainToTrack_meta_TM_TrainToTrack kcg_copy_struct__337

#define kcg_comp_P003_nid_radio_list_t_TM_TrainToTrack kcg_comp_array_int_32

#define kcg_copy_P003_nid_radio_list_t_TM_TrainToTrack kcg_copy_array_int_32

#define kcg_comp_P003_TM_TrainToTrack kcg_comp_struct__343

#define kcg_copy_P003_TM_TrainToTrack kcg_copy_struct__343

#define kcg_comp_TrainToTrackPacket_int_T_TM_TrainToTrack kcg_comp_array_int_200

#define kcg_copy_TrainToTrackPacket_int_T_TM_TrainToTrack kcg_copy_array_int_200

#define kcg_comp_P003_nid_radio_list_int_t_TM_TrainToTrack kcg_comp_array_int_32

#define kcg_copy_P003_nid_radio_list_int_t_TM_TrainToTrack kcg_copy_array_int_32

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-08-21T16:43:59
*************************************************************$ */


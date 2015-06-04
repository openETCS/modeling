/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-04T14:43:42
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

/* Q_NEWCOUNTRY */
typedef enum {
  Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows = 0,
  Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows = 1
} Q_NEWCOUNTRY;
/* Q_LINKORIENTATION */
typedef enum {
  _1_Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction = 0,
  Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction = 1
} Q_LINKORIENTATION;
/* Q_LINKREACTION */
typedef enum {
  Q_LINKREACTION_Train_trip = 0,
  Q_LINKREACTION_Apply_service_brake = 1,
  Q_LINKREACTION_No_Reaction = 2
} Q_LINKREACTION;
/* D_LINK */
typedef kcg_int D_LINK;

/* NID_C */
typedef kcg_int NID_C;

/* NID_BG */
typedef kcg_int NID_BG;

/* Q_LOCACC */
typedef kcg_int Q_LOCACC;

typedef struct {
  kcg_bool valid;
  D_LINK d_link;
  Q_NEWCOUNTRY q_newcountry;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINKORIENTATION q_linkorientation;
  Q_LINKREACTION q_linkreaction;
  Q_LOCACC q_locacc;
} struct__532;

/* TM::P005_OBU_section */
typedef struct__532 P005_OBU_section_TM;

typedef P005_OBU_section_TM array__543[32];

/* TM::P005_OBU_sectionlist */
typedef array__543 P005_OBU_sectionlist_TM;

typedef kcg_int array_int_224[224];

/* TM::P005_sections_array_flat */
typedef array_int_224 P005_sections_array_flat_TM;

typedef kcg_int array_int_32[32];

typedef P005_sections_array_flat_TM array_int_224_32[32];

#ifndef kcg_copy_struct__532
#define kcg_copy_struct__532(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__532)))
#endif /* kcg_copy_struct__532 */

#ifndef kcg_copy_array__543
#define kcg_copy_array__543(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__543)))
#endif /* kcg_copy_array__543 */

#ifndef kcg_copy_array_int_224
#define kcg_copy_array_int_224(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_224)))
#endif /* kcg_copy_array_int_224 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array_int_224_32
#define kcg_copy_array_int_224_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_224_32)))
#endif /* kcg_copy_array_int_224_32 */

#ifndef kcg_comp_struct__532
extern kcg_bool kcg_comp_struct__532(struct__532 *kcg_c1, struct__532 *kcg_c2);
#endif /* kcg_comp_struct__532 */

#ifndef kcg_comp_array__543
extern kcg_bool kcg_comp_array__543(array__543 *kcg_c1, array__543 *kcg_c2);
#endif /* kcg_comp_array__543 */

#ifndef kcg_comp_array_int_224
extern kcg_bool kcg_comp_array_int_224(
  array_int_224 *kcg_c1,
  array_int_224 *kcg_c2);
#endif /* kcg_comp_array_int_224 */

#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */

#ifndef kcg_comp_array_int_224_32
extern kcg_bool kcg_comp_array_int_224_32(
  array_int_224_32 *kcg_c1,
  array_int_224_32 *kcg_c2);
#endif /* kcg_comp_array_int_224_32 */

#define kcg_comp_P005_OBU_sectionlist_TM kcg_comp_array__543

#define kcg_copy_P005_OBU_sectionlist_TM kcg_copy_array__543

#define kcg_comp_P005_sections_array_flat_TM kcg_comp_array_int_224

#define kcg_copy_P005_sections_array_flat_TM kcg_copy_array_int_224

#define kcg_comp_P005_OBU_section_TM kcg_comp_struct__532

#define kcg_copy_P005_OBU_section_TM kcg_copy_struct__532

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-06-04T14:43:42
*************************************************************$ */


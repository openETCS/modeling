/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-02T14:47:37
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

/* Q_DIR */
typedef enum {
  Q_DIR_Reverse = 0,
  Q_DIR_Nominal = 1,
  Q_DIR_Both_directions = 2
} Q_DIR;
/* Q_LINKREACTION */
typedef enum {
  Q_LINKREACTION_Train_trip = 0,
  Q_LINKREACTION_Apply_service_brake = 1,
  Q_LINKREACTION_No_Reaction = 2
} Q_LINKREACTION;
/* Q_LINKORIENTATION */
typedef enum {
  _1_Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction = 0,
  Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction = 1
} Q_LINKORIENTATION;
/* Q_NEWCOUNTRY */
typedef enum {
  Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows = 0,
  Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows = 1
} Q_NEWCOUNTRY;
/* Q_SCALE */
typedef enum {
  Q_SCALE_10_cm_scale = 0,
  Q_SCALE_1_m_scale = 1,
  Q_SCALE_10_m_scale = 2
} Q_SCALE;
/* NID_PACKET */
typedef kcg_int NID_PACKET;

/* NID_LRBG */
typedef kcg_int NID_LRBG;

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
  NID_LRBG nid_LRBG;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_LINK d_link;
  Q_NEWCOUNTRY q_newcountry;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINKORIENTATION q_linkorientation;
  Q_LINKREACTION q_linkreaction;
  Q_LOCACC q_locacc;
} struct__953;

/* BG_Types_Pkg::LinkedBG_T */
typedef struct__953 LinkedBG_T_BG_Types_Pkg;

typedef LinkedBG_T_BG_Types_Pkg array__967[4];

/* BG_Types_Pkg::LinkedBGs_T */
typedef array__967 LinkedBGs_T_BG_Types_Pkg;

typedef kcg_int array_int_7[7];

/* TM::P005E_array_T */
typedef array_int_7 P005E_array_T_TM;

typedef kcg_int array_int_4[4];

/* TM::Array4 */
typedef array_int_4 Array4_TM;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__976;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__976 MetadataElement_T_Common_Types_Pkg;

typedef kcg_int array_int_39[39];

/* TM::P005_array_T */
typedef array_int_39 P005_array_T_TM;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__990[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__990 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__993;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__993 CompressedPackets_T_Common_Types_Pkg;

typedef kcg_int array_int_30[30];

typedef CompressedPacketData_T_Common_Types_Pkg array_int_500_500[500];

#ifndef kcg_copy_struct__953
#define kcg_copy_struct__953(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__953)))
#endif /* kcg_copy_struct__953 */

#ifndef kcg_copy_struct__976
#define kcg_copy_struct__976(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__976)))
#endif /* kcg_copy_struct__976 */

#ifndef kcg_copy_struct__993
#define kcg_copy_struct__993(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__993)))
#endif /* kcg_copy_struct__993 */

#ifndef kcg_copy_array__967
#define kcg_copy_array__967(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__967)))
#endif /* kcg_copy_array__967 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_int_39
#define kcg_copy_array_int_39(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_39)))
#endif /* kcg_copy_array_int_39 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__990
#define kcg_copy_array__990(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__990)))
#endif /* kcg_copy_array__990 */

#ifndef kcg_copy_array_int_30
#define kcg_copy_array_int_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_30)))
#endif /* kcg_copy_array_int_30 */

#ifndef kcg_copy_array_int_500_500
#define kcg_copy_array_int_500_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500_500)))
#endif /* kcg_copy_array_int_500_500 */

#ifndef kcg_comp_struct__953
extern kcg_bool kcg_comp_struct__953(struct__953 *kcg_c1, struct__953 *kcg_c2);
#endif /* kcg_comp_struct__953 */

#ifndef kcg_comp_struct__976
extern kcg_bool kcg_comp_struct__976(struct__976 *kcg_c1, struct__976 *kcg_c2);
#endif /* kcg_comp_struct__976 */

#ifndef kcg_comp_struct__993
extern kcg_bool kcg_comp_struct__993(struct__993 *kcg_c1, struct__993 *kcg_c2);
#endif /* kcg_comp_struct__993 */

#ifndef kcg_comp_array__967
extern kcg_bool kcg_comp_array__967(array__967 *kcg_c1, array__967 *kcg_c2);
#endif /* kcg_comp_array__967 */

#ifndef kcg_comp_array_int_7
extern kcg_bool kcg_comp_array_int_7(array_int_7 *kcg_c1, array_int_7 *kcg_c2);
#endif /* kcg_comp_array_int_7 */

#ifndef kcg_comp_array_int_4
extern kcg_bool kcg_comp_array_int_4(array_int_4 *kcg_c1, array_int_4 *kcg_c2);
#endif /* kcg_comp_array_int_4 */

#ifndef kcg_comp_array_int_39
extern kcg_bool kcg_comp_array_int_39(
  array_int_39 *kcg_c1,
  array_int_39 *kcg_c2);
#endif /* kcg_comp_array_int_39 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__990
extern kcg_bool kcg_comp_array__990(array__990 *kcg_c1, array__990 *kcg_c2);
#endif /* kcg_comp_array__990 */

#ifndef kcg_comp_array_int_30
extern kcg_bool kcg_comp_array_int_30(
  array_int_30 *kcg_c1,
  array_int_30 *kcg_c2);
#endif /* kcg_comp_array_int_30 */

#ifndef kcg_comp_array_int_500_500
extern kcg_bool kcg_comp_array_int_500_500(
  array_int_500_500 *kcg_c1,
  array_int_500_500 *kcg_c2);
#endif /* kcg_comp_array_int_500_500 */

#define kcg_comp_LinkedBGs_T_BG_Types_Pkg kcg_comp_array__967

#define kcg_copy_LinkedBGs_T_BG_Types_Pkg kcg_copy_array__967

#define kcg_comp_LinkedBG_T_BG_Types_Pkg kcg_comp_struct__953

#define kcg_copy_LinkedBG_T_BG_Types_Pkg kcg_copy_struct__953

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__993

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__993

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__990

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__990

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__976

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__976

#define kcg_comp_P005E_array_T_TM kcg_comp_array_int_7

#define kcg_copy_P005E_array_T_TM kcg_copy_array_int_7

#define kcg_comp_Array4_TM kcg_comp_array_int_4

#define kcg_copy_Array4_TM kcg_copy_array_int_4

#define kcg_comp_P005_array_T_TM kcg_comp_array_int_39

#define kcg_copy_P005_array_T_TM kcg_copy_array_int_39

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-06-02T14:47:37
*************************************************************$ */


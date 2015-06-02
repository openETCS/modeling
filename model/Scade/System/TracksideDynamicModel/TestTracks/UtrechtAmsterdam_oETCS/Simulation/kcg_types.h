/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-02T15:02:41
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

/* TM::OrBG */
typedef enum { Amsterdam_TM, Utrecht_TM } OrBG_TM;
/* TM::OrLine */
typedef enum { N_TM, Z_TM } OrLine_TM;
/* Q_UPDOWN */
typedef enum {
  Q_UPDOWN_Down_link_telegram = 0,
  Q_UPDOWN_Up_link_telegram = 1
} Q_UPDOWN;
/* M_VERSION */
typedef enum {
  M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS = 0,
  M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0 = 16,
  M_VERSION_Version_1_1_introduced_in_SRS_3_3_0 = 17,
  M_VERSION_Version_2_0_introduced_in_SRS_3_3_0 = 32
} M_VERSION;
/* Q_MEDIA */
typedef enum { Q_MEDIA_Balise = 0, Q_MEDIA_Loop = 1 } Q_MEDIA;
/* N_PIG */
typedef enum {
  N_PIG_I_am_the_1st = 0,
  N_PIG_I_am_the_2nd = 1,
  N_PIG_I_am_the_3rd = 2,
  N_PIG_I_am_the_4th = 3,
  N_PIG_I_am_the_5th = 4,
  N_PIG_I_am_the_6th = 5,
  N_PIG_I_am_the_7th = 6,
  N_PIG_I_am_the_8th = 7
} N_PIG;
/* N_TOTAL */
typedef enum {
  N_TOTAL_1_balise_in_the_group = 0,
  N_TOTAL_2_balises_in_the_group = 1,
  N_TOTAL_3_balises_in_the_group = 2,
  N_TOTAL_4_balises_in_the_group = 3,
  N_TOTAL_5_balises_in_the_group = 4,
  N_TOTAL_6_balises_in_the_group = 5,
  N_TOTAL_7_balises_in_the_group = 6,
  N_TOTAL_8_balises_in_the_group = 7
} N_TOTAL;
/* M_DUP */
typedef enum {
  M_DUP_No_duplicates = 0,
  _2_M_DUP_This_balise_is_a_duplicate_of_the_next_balise = 1,
  M_DUP_This_balise_is_a_duplicate_of_the_previous_balise = 2
} M_DUP;
/* Q_LINK */
typedef enum { Q_LINK_Unlinked = 0, Q_LINK_Linked = 1 } Q_LINK;
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

/* M_MCOUNT */
typedef kcg_int M_MCOUNT;

/* NID_C */
typedef kcg_int NID_C;

/* NID_BG */
typedef kcg_int NID_BG;

/* NID_LRBG */
typedef kcg_int NID_LRBG;

/* D_LINK */
typedef kcg_int D_LINK;

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
} struct__4835;

/* BG_Types_Pkg::LinkedBG_T */
typedef struct__4835 LinkedBG_T_BG_Types_Pkg;

typedef LinkedBG_T_BG_Types_Pkg array__4849[4];

/* BG_Types_Pkg::LinkedBGs_T */
typedef array__4849 LinkedBGs_T_BG_Types_Pkg;

typedef struct {
  Q_UPDOWN q_updown;
  M_VERSION m_version;
  Q_MEDIA q_media;
  N_PIG n_pig;
  N_TOTAL n_total;
  M_DUP m_dup;
  M_MCOUNT m_mcount;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINK q_link;
} struct__4852;

/* BG_Types_Pkg::TelegramHeader_T */
typedef struct__4852 TelegramHeader_T_BG_Types_Pkg;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__4868;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__4868 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__4876[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__4876 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__4879;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__4879 CompressedPackets_T_Common_Types_Pkg;

typedef kcg_int array_int_4[4];

/* TM::Array4 */
typedef array_int_4 Array4_TM;

typedef kcg_int array_int_7[7];

/* TM::P005E_array_T */
typedef array_int_7 P005E_array_T_TM;

typedef kcg_int array_int_39[39];

/* TM::P005_array_T */
typedef array_int_39 P005_array_T_TM;

typedef struct {
  kcg_int q_updown;
  kcg_int m_version;
  kcg_int q_media;
  kcg_int n_pig;
  kcg_int n_total;
  kcg_int m_dup;
  kcg_int m_mcount;
  kcg_int nid_c;
  kcg_int nid_bg;
  kcg_int q_link;
} struct__4893;

/* TM::BaliseTelegramHeader_int_T */
typedef struct__4893 BaliseTelegramHeader_int_T_TM;

typedef struct {
  BaliseTelegramHeader_int_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__4906;

/* TM::CompressedBaliseMessage */
typedef struct__4906 CompressedBaliseMessage_TM;

typedef struct {
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Pos;
  OrBG_TM Or_BG;
  OrLine_TM Or_Line;
} struct__4911;

/* TM::BaliseGroupData */
typedef struct__4911 BaliseGroupData_TM;

/* Basics::BaliseGroupData */
typedef struct__4911 BaliseGroupData_Basics;

typedef struct {
  BaliseTelegramHeader_int_T_TM header;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int engineering_BG_location;
  kcg_real TrainPos;
  kcg_int pig_nom_0;
  kcg_bool balise_passed;
} struct__4919;

/* FirstTest::InfraLibInt::B_data_internal */
typedef struct__4919 B_data_internal_FirstTest_InfraLibInt;

typedef struct {
  kcg_bool valid;
  kcg_int D_LINK;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_LINKORIENTATION;
  kcg_int Q_LINKREACTION;
  kcg_int Q_LOCACC;
} struct__4928;

/* TM::P005E_T */
typedef struct__4928 P005E_T_TM;

typedef P005E_T_TM array__4939[5];

/* TM::P005Es_T */
typedef array__4939 P005Es_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int N_ITER;
  P005Es_T_TM SECTIONS;
} struct__4942;

/* TM::P005 */
typedef struct__4942 P005_TM;

typedef CompressedPacketData_T_Common_Types_Pkg array_int_500_500[500];

typedef kcg_int array_int_461[461];

typedef kcg_int array_int_11[11];

typedef kcg_int array_int_18[18];

typedef kcg_int array_int_25[25];

typedef kcg_int array_int_32[32];

typedef kcg_int array_int_30[30];

#ifndef kcg_copy_struct__4835
#define kcg_copy_struct__4835(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__4835)))
#endif /* kcg_copy_struct__4835 */

#ifndef kcg_copy_struct__4852
#define kcg_copy_struct__4852(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__4852)))
#endif /* kcg_copy_struct__4852 */

#ifndef kcg_copy_struct__4868
#define kcg_copy_struct__4868(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__4868)))
#endif /* kcg_copy_struct__4868 */

#ifndef kcg_copy_struct__4879
#define kcg_copy_struct__4879(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__4879)))
#endif /* kcg_copy_struct__4879 */

#ifndef kcg_copy_struct__4893
#define kcg_copy_struct__4893(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__4893)))
#endif /* kcg_copy_struct__4893 */

#ifndef kcg_copy_struct__4906
#define kcg_copy_struct__4906(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__4906)))
#endif /* kcg_copy_struct__4906 */

#ifndef kcg_copy_struct__4911
#define kcg_copy_struct__4911(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__4911)))
#endif /* kcg_copy_struct__4911 */

#ifndef kcg_copy_struct__4919
#define kcg_copy_struct__4919(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__4919)))
#endif /* kcg_copy_struct__4919 */

#ifndef kcg_copy_struct__4928
#define kcg_copy_struct__4928(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__4928)))
#endif /* kcg_copy_struct__4928 */

#ifndef kcg_copy_struct__4942
#define kcg_copy_struct__4942(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__4942)))
#endif /* kcg_copy_struct__4942 */

#ifndef kcg_copy_array__4849
#define kcg_copy_array__4849(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__4849)))
#endif /* kcg_copy_array__4849 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__4876
#define kcg_copy_array__4876(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__4876)))
#endif /* kcg_copy_array__4876 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array_int_39
#define kcg_copy_array_int_39(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_39)))
#endif /* kcg_copy_array_int_39 */

#ifndef kcg_copy_array__4939
#define kcg_copy_array__4939(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__4939)))
#endif /* kcg_copy_array__4939 */

#ifndef kcg_copy_array_int_500_500
#define kcg_copy_array_int_500_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500_500)))
#endif /* kcg_copy_array_int_500_500 */

#ifndef kcg_copy_array_int_461
#define kcg_copy_array_int_461(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_461)))
#endif /* kcg_copy_array_int_461 */

#ifndef kcg_copy_array_int_11
#define kcg_copy_array_int_11(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_11)))
#endif /* kcg_copy_array_int_11 */

#ifndef kcg_copy_array_int_18
#define kcg_copy_array_int_18(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_18)))
#endif /* kcg_copy_array_int_18 */

#ifndef kcg_copy_array_int_25
#define kcg_copy_array_int_25(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_25)))
#endif /* kcg_copy_array_int_25 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array_int_30
#define kcg_copy_array_int_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_30)))
#endif /* kcg_copy_array_int_30 */

#ifndef kcg_comp_struct__4835
extern kcg_bool kcg_comp_struct__4835(
  struct__4835 *kcg_c1,
  struct__4835 *kcg_c2);
#endif /* kcg_comp_struct__4835 */

#ifndef kcg_comp_struct__4852
extern kcg_bool kcg_comp_struct__4852(
  struct__4852 *kcg_c1,
  struct__4852 *kcg_c2);
#endif /* kcg_comp_struct__4852 */

#ifndef kcg_comp_struct__4868
extern kcg_bool kcg_comp_struct__4868(
  struct__4868 *kcg_c1,
  struct__4868 *kcg_c2);
#endif /* kcg_comp_struct__4868 */

#ifndef kcg_comp_struct__4879
extern kcg_bool kcg_comp_struct__4879(
  struct__4879 *kcg_c1,
  struct__4879 *kcg_c2);
#endif /* kcg_comp_struct__4879 */

#ifndef kcg_comp_struct__4893
extern kcg_bool kcg_comp_struct__4893(
  struct__4893 *kcg_c1,
  struct__4893 *kcg_c2);
#endif /* kcg_comp_struct__4893 */

#ifndef kcg_comp_struct__4906
extern kcg_bool kcg_comp_struct__4906(
  struct__4906 *kcg_c1,
  struct__4906 *kcg_c2);
#endif /* kcg_comp_struct__4906 */

#ifndef kcg_comp_struct__4911
extern kcg_bool kcg_comp_struct__4911(
  struct__4911 *kcg_c1,
  struct__4911 *kcg_c2);
#endif /* kcg_comp_struct__4911 */

#ifndef kcg_comp_struct__4919
extern kcg_bool kcg_comp_struct__4919(
  struct__4919 *kcg_c1,
  struct__4919 *kcg_c2);
#endif /* kcg_comp_struct__4919 */

#ifndef kcg_comp_struct__4928
extern kcg_bool kcg_comp_struct__4928(
  struct__4928 *kcg_c1,
  struct__4928 *kcg_c2);
#endif /* kcg_comp_struct__4928 */

#ifndef kcg_comp_struct__4942
extern kcg_bool kcg_comp_struct__4942(
  struct__4942 *kcg_c1,
  struct__4942 *kcg_c2);
#endif /* kcg_comp_struct__4942 */

#ifndef kcg_comp_array__4849
extern kcg_bool kcg_comp_array__4849(array__4849 *kcg_c1, array__4849 *kcg_c2);
#endif /* kcg_comp_array__4849 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__4876
extern kcg_bool kcg_comp_array__4876(array__4876 *kcg_c1, array__4876 *kcg_c2);
#endif /* kcg_comp_array__4876 */

#ifndef kcg_comp_array_int_4
extern kcg_bool kcg_comp_array_int_4(array_int_4 *kcg_c1, array_int_4 *kcg_c2);
#endif /* kcg_comp_array_int_4 */

#ifndef kcg_comp_array_int_7
extern kcg_bool kcg_comp_array_int_7(array_int_7 *kcg_c1, array_int_7 *kcg_c2);
#endif /* kcg_comp_array_int_7 */

#ifndef kcg_comp_array_int_39
extern kcg_bool kcg_comp_array_int_39(
  array_int_39 *kcg_c1,
  array_int_39 *kcg_c2);
#endif /* kcg_comp_array_int_39 */

#ifndef kcg_comp_array__4939
extern kcg_bool kcg_comp_array__4939(array__4939 *kcg_c1, array__4939 *kcg_c2);
#endif /* kcg_comp_array__4939 */

#ifndef kcg_comp_array_int_500_500
extern kcg_bool kcg_comp_array_int_500_500(
  array_int_500_500 *kcg_c1,
  array_int_500_500 *kcg_c2);
#endif /* kcg_comp_array_int_500_500 */

#ifndef kcg_comp_array_int_461
extern kcg_bool kcg_comp_array_int_461(
  array_int_461 *kcg_c1,
  array_int_461 *kcg_c2);
#endif /* kcg_comp_array_int_461 */

#ifndef kcg_comp_array_int_11
extern kcg_bool kcg_comp_array_int_11(
  array_int_11 *kcg_c1,
  array_int_11 *kcg_c2);
#endif /* kcg_comp_array_int_11 */

#ifndef kcg_comp_array_int_18
extern kcg_bool kcg_comp_array_int_18(
  array_int_18 *kcg_c1,
  array_int_18 *kcg_c2);
#endif /* kcg_comp_array_int_18 */

#ifndef kcg_comp_array_int_25
extern kcg_bool kcg_comp_array_int_25(
  array_int_25 *kcg_c1,
  array_int_25 *kcg_c2);
#endif /* kcg_comp_array_int_25 */

#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */

#ifndef kcg_comp_array_int_30
extern kcg_bool kcg_comp_array_int_30(
  array_int_30 *kcg_c1,
  array_int_30 *kcg_c2);
#endif /* kcg_comp_array_int_30 */

#define kcg_comp_LinkedBG_T_BG_Types_Pkg kcg_comp_struct__4835

#define kcg_copy_LinkedBG_T_BG_Types_Pkg kcg_copy_struct__4835

#define kcg_comp_TelegramHeader_T_BG_Types_Pkg kcg_comp_struct__4852

#define kcg_copy_TelegramHeader_T_BG_Types_Pkg kcg_copy_struct__4852

#define kcg_comp_B_data_internal_FirstTest_InfraLibInt kcg_comp_struct__4919

#define kcg_copy_B_data_internal_FirstTest_InfraLibInt kcg_copy_struct__4919

#define kcg_comp_BaliseGroupData_Basics kcg_comp_struct__4911

#define kcg_copy_BaliseGroupData_Basics kcg_copy_struct__4911

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__4868

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__4868

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__4876

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__4876

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__4879

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__4879

#define kcg_comp_Array4_TM kcg_comp_array_int_4

#define kcg_copy_Array4_TM kcg_copy_array_int_4

#define kcg_comp_P005_array_T_TM kcg_comp_array_int_39

#define kcg_copy_P005_array_T_TM kcg_copy_array_int_39

#define kcg_comp_BaliseGroupData_TM kcg_comp_struct__4911

#define kcg_copy_BaliseGroupData_TM kcg_copy_struct__4911

#define kcg_comp_P005E_array_T_TM kcg_comp_array_int_7

#define kcg_copy_P005E_array_T_TM kcg_copy_array_int_7

#define kcg_comp_P005E_T_TM kcg_comp_struct__4928

#define kcg_copy_P005E_T_TM kcg_copy_struct__4928

#define kcg_comp_P005Es_T_TM kcg_comp_array__4939

#define kcg_copy_P005Es_T_TM kcg_copy_array__4939

#define kcg_comp_P005_TM kcg_comp_struct__4942

#define kcg_copy_P005_TM kcg_copy_struct__4942

#define kcg_comp_BaliseTelegramHeader_int_T_TM kcg_comp_struct__4893

#define kcg_copy_BaliseTelegramHeader_int_T_TM kcg_copy_struct__4893

#define kcg_comp_CompressedBaliseMessage_TM kcg_comp_struct__4906

#define kcg_copy_CompressedBaliseMessage_TM kcg_copy_struct__4906

#define kcg_comp_LinkedBGs_T_BG_Types_Pkg kcg_comp_array__4849

#define kcg_copy_LinkedBGs_T_BG_Types_Pkg kcg_copy_array__4849

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-06-02T15:02:41
*************************************************************$ */


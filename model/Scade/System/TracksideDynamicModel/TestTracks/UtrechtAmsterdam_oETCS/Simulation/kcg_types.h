/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-08T18:54:31
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
/* Q_SCALE */
typedef enum {
  Q_SCALE_10_cm_scale = 0,
  Q_SCALE_1_m_scale = 1,
  Q_SCALE_10_m_scale = 2
} Q_SCALE;
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
/* NID_PACKET */
typedef kcg_int NID_PACKET;

/* M_MCOUNT */
typedef kcg_int M_MCOUNT;

/* NID_C */
typedef kcg_int NID_C;

/* NID_BG */
typedef kcg_int NID_BG;

/* D_LINK */
typedef kcg_int D_LINK;

/* Q_LOCACC */
typedef kcg_int Q_LOCACC;

/* N_ITER */
typedef kcg_int N_ITER;

/* L_PACKET */
typedef kcg_int L_PACKET;

/* NID_LRBG */
typedef kcg_int NID_LRBG;

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
} struct__5290;

/* BG_Types_Pkg::LinkedBG_T */
typedef struct__5290 LinkedBG_T_BG_Types_Pkg;

typedef LinkedBG_T_BG_Types_Pkg array__5304[4];

/* BG_Types_Pkg::LinkedBGs_T */
typedef array__5304 LinkedBGs_T_BG_Types_Pkg;

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
} struct__5307;

/* BG_Types_Pkg::TelegramHeader_T */
typedef struct__5307 TelegramHeader_T_BG_Types_Pkg;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__5323;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__5323 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__5331[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__5331 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__5334;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__5334 CompressedPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_LINK d_link;
  Q_NEWCOUNTRY q_newcountry;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINKORIENTATION q_linkorientation;
  Q_LINKREACTION q_linkreaction;
  Q_LOCACC q_locacc;
} struct__5339;

/* TM::P005_section_enum_T */
typedef struct__5339 P005_section_enum_T_TM;

typedef P005_section_enum_T_TM array__5350[33];

/* TM::P005_OBU_sectionlist_enum_T */
typedef array__5350 P005_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  L_PACKET l_packet;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P005_OBU_sectionlist_enum_T_TM sections;
} struct__5353;

/* TM::P005_OBU_T */
typedef struct__5353 P005_OBU_T_TM;

typedef kcg_int array_int_231[231];

/* TM::P005_sections_array_flat_T */
typedef array_int_231 P005_sections_array_flat_T_TM;

typedef kcg_int array_int_3[3];

/* TM::Array03 */
typedef array_int_3 Array03_TM;

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
} struct__5368;

/* TM::BaliseTelegramHeader_int_T */
typedef struct__5368 BaliseTelegramHeader_int_T_TM;

typedef struct {
  BaliseTelegramHeader_int_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__5381;

/* TM::CompressedBaliseMessage */
typedef struct__5381 CompressedBaliseMessage_TM;

typedef struct {
  BaliseTelegramHeader_int_T_TM header;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int engineering_BG_location;
  kcg_real TrainPos;
  kcg_int pig_nom_0;
  kcg_bool balise_passed;
} struct__5386;

/* InfraLib::B_data_internal_T */
typedef struct__5386 B_data_internal_T_InfraLib;

typedef struct {
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Pos;
  OrBG_TM Or_BG;
  OrLine_TM Or_Line;
} struct__5395;

/* TM::BaliseGroupData */
typedef struct__5395 BaliseGroupData_TM;

/* Basics::BaliseGroupData */
typedef struct__5395 BaliseGroupData_Basics;

typedef struct {
  kcg_int D_LINK;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_LINKORIENTATION;
  kcg_int Q_LINKREACTION;
  kcg_int Q_LOCACC;
} struct__5403;

/* TM::P005_section_int_T */
typedef struct__5403 P005_section_int_T_TM;

typedef P005_section_int_T_TM array__5413[32];

/* TM::P005_trackide_sectionlist_T */
typedef array__5413 P005_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_LINK;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_LINKORIENTATION;
  kcg_int Q_LINKREACTION;
  kcg_int Q_LOCACC;
  kcg_int N_ITER;
  P005_trackide_sectionlist_T_TM SECTIONS;
} struct__5416;

/* TM::P005_trackside_int_T */
typedef struct__5416 P005_trackside_int_T_TM;

typedef kcg_int array_int_7[7];

/* TM::P005_section_array_T */
typedef array_int_7 P005_section_array_T_TM;

typedef P005_section_array_T_TM array_int_7_33[33];

/* TM::P005_OBU_sectionlist_array_T */
typedef array_int_7_33 P005_OBU_sectionlist_array_T_TM;

typedef P005_section_int_T_TM array__5439[33];

/* TM::P005_OBU_sectionlist_int_T */
typedef array__5439 P005_OBU_sectionlist_int_T_TM;

typedef CompressedPacketData_T_Common_Types_Pkg array_int_500_500[500];

typedef array_int_7_33 array_int_7_33_231[231];

typedef kcg_int array_int_264[264];

typedef kcg_int array_int_4[4];

typedef kcg_int array_int_1[1];

typedef kcg_int array_int_5[5];

typedef kcg_int array_int_236[236];

typedef P005_section_int_T_TM array__5463[1];

typedef kcg_int array_int_30[30];

typedef kcg_int array_int_33[33];

typedef P005_sections_array_flat_T_TM array_int_231_33[33];

typedef P005_section_enum_T_TM array__5475[4];

typedef Q_DIR array__5478[4];

typedef Q_SCALE array__5481[4];

#ifndef kcg_copy_struct__5290
#define kcg_copy_struct__5290(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__5290)))
#endif /* kcg_copy_struct__5290 */

#ifndef kcg_copy_struct__5307
#define kcg_copy_struct__5307(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__5307)))
#endif /* kcg_copy_struct__5307 */

#ifndef kcg_copy_struct__5323
#define kcg_copy_struct__5323(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__5323)))
#endif /* kcg_copy_struct__5323 */

#ifndef kcg_copy_struct__5334
#define kcg_copy_struct__5334(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__5334)))
#endif /* kcg_copy_struct__5334 */

#ifndef kcg_copy_struct__5339
#define kcg_copy_struct__5339(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__5339)))
#endif /* kcg_copy_struct__5339 */

#ifndef kcg_copy_struct__5353
#define kcg_copy_struct__5353(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__5353)))
#endif /* kcg_copy_struct__5353 */

#ifndef kcg_copy_struct__5368
#define kcg_copy_struct__5368(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__5368)))
#endif /* kcg_copy_struct__5368 */

#ifndef kcg_copy_struct__5381
#define kcg_copy_struct__5381(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__5381)))
#endif /* kcg_copy_struct__5381 */

#ifndef kcg_copy_struct__5386
#define kcg_copy_struct__5386(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__5386)))
#endif /* kcg_copy_struct__5386 */

#ifndef kcg_copy_struct__5395
#define kcg_copy_struct__5395(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__5395)))
#endif /* kcg_copy_struct__5395 */

#ifndef kcg_copy_struct__5403
#define kcg_copy_struct__5403(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__5403)))
#endif /* kcg_copy_struct__5403 */

#ifndef kcg_copy_struct__5416
#define kcg_copy_struct__5416(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__5416)))
#endif /* kcg_copy_struct__5416 */

#ifndef kcg_copy_array__5304
#define kcg_copy_array__5304(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__5304)))
#endif /* kcg_copy_array__5304 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__5331
#define kcg_copy_array__5331(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__5331)))
#endif /* kcg_copy_array__5331 */

#ifndef kcg_copy_array__5350
#define kcg_copy_array__5350(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__5350)))
#endif /* kcg_copy_array__5350 */

#ifndef kcg_copy_array_int_231
#define kcg_copy_array_int_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231)))
#endif /* kcg_copy_array_int_231 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array__5413
#define kcg_copy_array__5413(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__5413)))
#endif /* kcg_copy_array__5413 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array_int_7_33
#define kcg_copy_array_int_7_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33)))
#endif /* kcg_copy_array_int_7_33 */

#ifndef kcg_copy_array__5439
#define kcg_copy_array__5439(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__5439)))
#endif /* kcg_copy_array__5439 */

#ifndef kcg_copy_array_int_500_500
#define kcg_copy_array_int_500_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500_500)))
#endif /* kcg_copy_array_int_500_500 */

#ifndef kcg_copy_array_int_7_33_231
#define kcg_copy_array_int_7_33_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33_231)))
#endif /* kcg_copy_array_int_7_33_231 */

#ifndef kcg_copy_array_int_264
#define kcg_copy_array_int_264(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_264)))
#endif /* kcg_copy_array_int_264 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_int_1
#define kcg_copy_array_int_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_1)))
#endif /* kcg_copy_array_int_1 */

#ifndef kcg_copy_array_int_5
#define kcg_copy_array_int_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_5)))
#endif /* kcg_copy_array_int_5 */

#ifndef kcg_copy_array_int_236
#define kcg_copy_array_int_236(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_236)))
#endif /* kcg_copy_array_int_236 */

#ifndef kcg_copy_array__5463
#define kcg_copy_array__5463(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__5463)))
#endif /* kcg_copy_array__5463 */

#ifndef kcg_copy_array_int_30
#define kcg_copy_array_int_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_30)))
#endif /* kcg_copy_array_int_30 */

#ifndef kcg_copy_array_int_33
#define kcg_copy_array_int_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33)))
#endif /* kcg_copy_array_int_33 */

#ifndef kcg_copy_array_int_231_33
#define kcg_copy_array_int_231_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231_33)))
#endif /* kcg_copy_array_int_231_33 */

#ifndef kcg_copy_array__5475
#define kcg_copy_array__5475(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__5475)))
#endif /* kcg_copy_array__5475 */

#ifndef kcg_copy_array__5478
#define kcg_copy_array__5478(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__5478)))
#endif /* kcg_copy_array__5478 */

#ifndef kcg_copy_array__5481
#define kcg_copy_array__5481(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__5481)))
#endif /* kcg_copy_array__5481 */

#ifndef kcg_comp_struct__5290
extern kcg_bool kcg_comp_struct__5290(
  struct__5290 *kcg_c1,
  struct__5290 *kcg_c2);
#endif /* kcg_comp_struct__5290 */

#ifndef kcg_comp_struct__5307
extern kcg_bool kcg_comp_struct__5307(
  struct__5307 *kcg_c1,
  struct__5307 *kcg_c2);
#endif /* kcg_comp_struct__5307 */

#ifndef kcg_comp_struct__5323
extern kcg_bool kcg_comp_struct__5323(
  struct__5323 *kcg_c1,
  struct__5323 *kcg_c2);
#endif /* kcg_comp_struct__5323 */

#ifndef kcg_comp_struct__5334
extern kcg_bool kcg_comp_struct__5334(
  struct__5334 *kcg_c1,
  struct__5334 *kcg_c2);
#endif /* kcg_comp_struct__5334 */

#ifndef kcg_comp_struct__5339
extern kcg_bool kcg_comp_struct__5339(
  struct__5339 *kcg_c1,
  struct__5339 *kcg_c2);
#endif /* kcg_comp_struct__5339 */

#ifndef kcg_comp_struct__5353
extern kcg_bool kcg_comp_struct__5353(
  struct__5353 *kcg_c1,
  struct__5353 *kcg_c2);
#endif /* kcg_comp_struct__5353 */

#ifndef kcg_comp_struct__5368
extern kcg_bool kcg_comp_struct__5368(
  struct__5368 *kcg_c1,
  struct__5368 *kcg_c2);
#endif /* kcg_comp_struct__5368 */

#ifndef kcg_comp_struct__5381
extern kcg_bool kcg_comp_struct__5381(
  struct__5381 *kcg_c1,
  struct__5381 *kcg_c2);
#endif /* kcg_comp_struct__5381 */

#ifndef kcg_comp_struct__5386
extern kcg_bool kcg_comp_struct__5386(
  struct__5386 *kcg_c1,
  struct__5386 *kcg_c2);
#endif /* kcg_comp_struct__5386 */

#ifndef kcg_comp_struct__5395
extern kcg_bool kcg_comp_struct__5395(
  struct__5395 *kcg_c1,
  struct__5395 *kcg_c2);
#endif /* kcg_comp_struct__5395 */

#ifndef kcg_comp_struct__5403
extern kcg_bool kcg_comp_struct__5403(
  struct__5403 *kcg_c1,
  struct__5403 *kcg_c2);
#endif /* kcg_comp_struct__5403 */

#ifndef kcg_comp_struct__5416
extern kcg_bool kcg_comp_struct__5416(
  struct__5416 *kcg_c1,
  struct__5416 *kcg_c2);
#endif /* kcg_comp_struct__5416 */

#ifndef kcg_comp_array__5304
extern kcg_bool kcg_comp_array__5304(array__5304 *kcg_c1, array__5304 *kcg_c2);
#endif /* kcg_comp_array__5304 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__5331
extern kcg_bool kcg_comp_array__5331(array__5331 *kcg_c1, array__5331 *kcg_c2);
#endif /* kcg_comp_array__5331 */

#ifndef kcg_comp_array__5350
extern kcg_bool kcg_comp_array__5350(array__5350 *kcg_c1, array__5350 *kcg_c2);
#endif /* kcg_comp_array__5350 */

#ifndef kcg_comp_array_int_231
extern kcg_bool kcg_comp_array_int_231(
  array_int_231 *kcg_c1,
  array_int_231 *kcg_c2);
#endif /* kcg_comp_array_int_231 */

#ifndef kcg_comp_array_int_3
extern kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2);
#endif /* kcg_comp_array_int_3 */

#ifndef kcg_comp_array__5413
extern kcg_bool kcg_comp_array__5413(array__5413 *kcg_c1, array__5413 *kcg_c2);
#endif /* kcg_comp_array__5413 */

#ifndef kcg_comp_array_int_7
extern kcg_bool kcg_comp_array_int_7(array_int_7 *kcg_c1, array_int_7 *kcg_c2);
#endif /* kcg_comp_array_int_7 */

#ifndef kcg_comp_array_int_7_33
extern kcg_bool kcg_comp_array_int_7_33(
  array_int_7_33 *kcg_c1,
  array_int_7_33 *kcg_c2);
#endif /* kcg_comp_array_int_7_33 */

#ifndef kcg_comp_array__5439
extern kcg_bool kcg_comp_array__5439(array__5439 *kcg_c1, array__5439 *kcg_c2);
#endif /* kcg_comp_array__5439 */

#ifndef kcg_comp_array_int_500_500
extern kcg_bool kcg_comp_array_int_500_500(
  array_int_500_500 *kcg_c1,
  array_int_500_500 *kcg_c2);
#endif /* kcg_comp_array_int_500_500 */

#ifndef kcg_comp_array_int_7_33_231
extern kcg_bool kcg_comp_array_int_7_33_231(
  array_int_7_33_231 *kcg_c1,
  array_int_7_33_231 *kcg_c2);
#endif /* kcg_comp_array_int_7_33_231 */

#ifndef kcg_comp_array_int_264
extern kcg_bool kcg_comp_array_int_264(
  array_int_264 *kcg_c1,
  array_int_264 *kcg_c2);
#endif /* kcg_comp_array_int_264 */

#ifndef kcg_comp_array_int_4
extern kcg_bool kcg_comp_array_int_4(array_int_4 *kcg_c1, array_int_4 *kcg_c2);
#endif /* kcg_comp_array_int_4 */

#ifndef kcg_comp_array_int_1
extern kcg_bool kcg_comp_array_int_1(array_int_1 *kcg_c1, array_int_1 *kcg_c2);
#endif /* kcg_comp_array_int_1 */

#ifndef kcg_comp_array_int_5
extern kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2);
#endif /* kcg_comp_array_int_5 */

#ifndef kcg_comp_array_int_236
extern kcg_bool kcg_comp_array_int_236(
  array_int_236 *kcg_c1,
  array_int_236 *kcg_c2);
#endif /* kcg_comp_array_int_236 */

#ifndef kcg_comp_array__5463
extern kcg_bool kcg_comp_array__5463(array__5463 *kcg_c1, array__5463 *kcg_c2);
#endif /* kcg_comp_array__5463 */

#ifndef kcg_comp_array_int_30
extern kcg_bool kcg_comp_array_int_30(
  array_int_30 *kcg_c1,
  array_int_30 *kcg_c2);
#endif /* kcg_comp_array_int_30 */

#ifndef kcg_comp_array_int_33
extern kcg_bool kcg_comp_array_int_33(
  array_int_33 *kcg_c1,
  array_int_33 *kcg_c2);
#endif /* kcg_comp_array_int_33 */

#ifndef kcg_comp_array_int_231_33
extern kcg_bool kcg_comp_array_int_231_33(
  array_int_231_33 *kcg_c1,
  array_int_231_33 *kcg_c2);
#endif /* kcg_comp_array_int_231_33 */

#ifndef kcg_comp_array__5475
extern kcg_bool kcg_comp_array__5475(array__5475 *kcg_c1, array__5475 *kcg_c2);
#endif /* kcg_comp_array__5475 */

#ifndef kcg_comp_array__5478
extern kcg_bool kcg_comp_array__5478(array__5478 *kcg_c1, array__5478 *kcg_c2);
#endif /* kcg_comp_array__5478 */

#ifndef kcg_comp_array__5481
extern kcg_bool kcg_comp_array__5481(array__5481 *kcg_c1, array__5481 *kcg_c2);
#endif /* kcg_comp_array__5481 */

#define kcg_comp_Array03_TM kcg_comp_array_int_3

#define kcg_copy_Array03_TM kcg_copy_array_int_3

#define kcg_comp_P005_OBU_T_TM kcg_comp_struct__5353

#define kcg_copy_P005_OBU_T_TM kcg_copy_struct__5353

#define kcg_comp_P005_OBU_sectionlist_enum_T_TM kcg_comp_array__5350

#define kcg_copy_P005_OBU_sectionlist_enum_T_TM kcg_copy_array__5350

#define kcg_comp_P005_section_enum_T_TM kcg_comp_struct__5339

#define kcg_copy_P005_section_enum_T_TM kcg_copy_struct__5339

#define kcg_comp_BaliseGroupData_TM kcg_comp_struct__5395

#define kcg_copy_BaliseGroupData_TM kcg_copy_struct__5395

#define kcg_comp_P005_OBU_sectionlist_int_T_TM kcg_comp_array__5439

#define kcg_copy_P005_OBU_sectionlist_int_T_TM kcg_copy_array__5439

#define kcg_comp_P005_section_array_T_TM kcg_comp_array_int_7

#define kcg_copy_P005_section_array_T_TM kcg_copy_array_int_7

#define kcg_comp_P005_OBU_sectionlist_array_T_TM kcg_comp_array_int_7_33

#define kcg_copy_P005_OBU_sectionlist_array_T_TM kcg_copy_array_int_7_33

#define kcg_comp_P005_sections_array_flat_T_TM kcg_comp_array_int_231

#define kcg_copy_P005_sections_array_flat_T_TM kcg_copy_array_int_231

#define kcg_comp_P005_section_int_T_TM kcg_comp_struct__5403

#define kcg_copy_P005_section_int_T_TM kcg_copy_struct__5403

#define kcg_comp_P005_trackide_sectionlist_T_TM kcg_comp_array__5413

#define kcg_copy_P005_trackide_sectionlist_T_TM kcg_copy_array__5413

#define kcg_comp_P005_trackside_int_T_TM kcg_comp_struct__5416

#define kcg_copy_P005_trackside_int_T_TM kcg_copy_struct__5416

#define kcg_comp_BaliseTelegramHeader_int_T_TM kcg_comp_struct__5368

#define kcg_copy_BaliseTelegramHeader_int_T_TM kcg_copy_struct__5368

#define kcg_comp_CompressedBaliseMessage_TM kcg_comp_struct__5381

#define kcg_copy_CompressedBaliseMessage_TM kcg_copy_struct__5381

#define kcg_comp_B_data_internal_T_InfraLib kcg_comp_struct__5386

#define kcg_copy_B_data_internal_T_InfraLib kcg_copy_struct__5386

#define kcg_comp_LinkedBGs_T_BG_Types_Pkg kcg_comp_array__5304

#define kcg_copy_LinkedBGs_T_BG_Types_Pkg kcg_copy_array__5304

#define kcg_comp_LinkedBG_T_BG_Types_Pkg kcg_comp_struct__5290

#define kcg_copy_LinkedBG_T_BG_Types_Pkg kcg_copy_struct__5290

#define kcg_comp_BaliseGroupData_Basics kcg_comp_struct__5395

#define kcg_copy_BaliseGroupData_Basics kcg_copy_struct__5395

#define kcg_comp_TelegramHeader_T_BG_Types_Pkg kcg_comp_struct__5307

#define kcg_copy_TelegramHeader_T_BG_Types_Pkg kcg_copy_struct__5307

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__5323

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__5323

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__5331

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__5331

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__5334

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__5334

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-06-08T18:54:31
*************************************************************$ */


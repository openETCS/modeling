/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-09T14:04:51
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
} struct__5278;

/* BG_Types_Pkg::LinkedBG_T */
typedef struct__5278 LinkedBG_T_BG_Types_Pkg;

typedef LinkedBG_T_BG_Types_Pkg array__5292[4];

/* BG_Types_Pkg::LinkedBGs_T */
typedef array__5292 LinkedBGs_T_BG_Types_Pkg;

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
} struct__5295;

/* BG_Types_Pkg::TelegramHeader_T */
typedef struct__5295 TelegramHeader_T_BG_Types_Pkg;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__5311;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__5311 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__5319[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__5319 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__5322;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__5322 CompressedPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_LINK d_link;
  Q_NEWCOUNTRY q_newcountry;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINKORIENTATION q_linkorientation;
  Q_LINKREACTION q_linkreaction;
  Q_LOCACC q_locacc;
} struct__5327;

/* TM::P005_section_enum_T */
typedef struct__5327 P005_section_enum_T_TM;

typedef P005_section_enum_T_TM array__5338[33];

/* TM::P005_OBU_sectionlist_enum_T */
typedef array__5338 P005_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  L_PACKET l_packet;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P005_OBU_sectionlist_enum_T_TM sections;
} struct__5341;

/* TM::P005_OBU_T */
typedef struct__5341 P005_OBU_T_TM;

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
} struct__5356;

/* TM::BaliseTelegramHeader_int_T */
typedef struct__5356 BaliseTelegramHeader_int_T_TM;

typedef struct {
  BaliseTelegramHeader_int_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__5369;

/* TM::CompressedBaliseMessage */
typedef struct__5369 CompressedBaliseMessage_TM;

typedef struct {
  BaliseTelegramHeader_int_T_TM header;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int engineering_BG_location;
  kcg_real TrainPos;
  kcg_int pig_nom_0;
  kcg_bool balise_passed;
} struct__5374;

/* InfraLib::B_data_internal_T */
typedef struct__5374 B_data_internal_T_InfraLib;

typedef struct {
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Pos;
  OrBG_TM Or_BG;
  OrLine_TM Or_Line;
} struct__5383;

/* TM::BaliseGroupData */
typedef struct__5383 BaliseGroupData_TM;

/* Basics::BaliseGroupData */
typedef struct__5383 BaliseGroupData_Basics;

typedef struct {
  kcg_int D_LINK;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_LINKORIENTATION;
  kcg_int Q_LINKREACTION;
  kcg_int Q_LOCACC;
} struct__5391;

/* TM::P005_section_int_T */
typedef struct__5391 P005_section_int_T_TM;

typedef P005_section_int_T_TM array__5401[32];

/* TM::P005_trackide_sectionlist_T */
typedef array__5401 P005_trackide_sectionlist_T_TM;

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
} struct__5404;

/* TM::P005_trackside_int_T */
typedef struct__5404 P005_trackside_int_T_TM;

typedef kcg_int array_int_7[7];

/* TM::P005_section_array_T */
typedef array_int_7 P005_section_array_T_TM;

typedef P005_section_array_T_TM array_int_7_33[33];

/* TM::P005_OBU_sectionlist_array_T */
typedef array_int_7_33 P005_OBU_sectionlist_array_T_TM;

typedef P005_section_int_T_TM array__5427[33];

/* TM::P005_OBU_sectionlist_int_T */
typedef array__5427 P005_OBU_sectionlist_int_T_TM;

typedef CompressedPacketData_T_Common_Types_Pkg array_int_500_500[500];

typedef array_int_7_33 array_int_7_33_231[231];

typedef kcg_int array_int_264[264];

typedef kcg_int array_int_4[4];

typedef kcg_int array_int_1[1];

typedef kcg_int array_int_5[5];

typedef kcg_int array_int_236[236];

typedef P005_section_int_T_TM array__5451[1];

typedef kcg_int array_int_30[30];

typedef kcg_int array_int_33[33];

typedef P005_sections_array_flat_T_TM array_int_231_33[33];

typedef P005_section_enum_T_TM array__5463[4];

typedef Q_DIR array__5466[4];

typedef Q_SCALE array__5469[4];

#ifndef kcg_copy_struct__5278
#define kcg_copy_struct__5278(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__5278)))
#endif /* kcg_copy_struct__5278 */

#ifndef kcg_copy_struct__5295
#define kcg_copy_struct__5295(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__5295)))
#endif /* kcg_copy_struct__5295 */

#ifndef kcg_copy_struct__5311
#define kcg_copy_struct__5311(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__5311)))
#endif /* kcg_copy_struct__5311 */

#ifndef kcg_copy_struct__5322
#define kcg_copy_struct__5322(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__5322)))
#endif /* kcg_copy_struct__5322 */

#ifndef kcg_copy_struct__5327
#define kcg_copy_struct__5327(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__5327)))
#endif /* kcg_copy_struct__5327 */

#ifndef kcg_copy_struct__5341
#define kcg_copy_struct__5341(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__5341)))
#endif /* kcg_copy_struct__5341 */

#ifndef kcg_copy_struct__5356
#define kcg_copy_struct__5356(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__5356)))
#endif /* kcg_copy_struct__5356 */

#ifndef kcg_copy_struct__5369
#define kcg_copy_struct__5369(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__5369)))
#endif /* kcg_copy_struct__5369 */

#ifndef kcg_copy_struct__5374
#define kcg_copy_struct__5374(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__5374)))
#endif /* kcg_copy_struct__5374 */

#ifndef kcg_copy_struct__5383
#define kcg_copy_struct__5383(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__5383)))
#endif /* kcg_copy_struct__5383 */

#ifndef kcg_copy_struct__5391
#define kcg_copy_struct__5391(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__5391)))
#endif /* kcg_copy_struct__5391 */

#ifndef kcg_copy_struct__5404
#define kcg_copy_struct__5404(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__5404)))
#endif /* kcg_copy_struct__5404 */

#ifndef kcg_copy_array__5292
#define kcg_copy_array__5292(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__5292)))
#endif /* kcg_copy_array__5292 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__5319
#define kcg_copy_array__5319(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__5319)))
#endif /* kcg_copy_array__5319 */

#ifndef kcg_copy_array__5338
#define kcg_copy_array__5338(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__5338)))
#endif /* kcg_copy_array__5338 */

#ifndef kcg_copy_array_int_231
#define kcg_copy_array_int_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231)))
#endif /* kcg_copy_array_int_231 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array__5401
#define kcg_copy_array__5401(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__5401)))
#endif /* kcg_copy_array__5401 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array_int_7_33
#define kcg_copy_array_int_7_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33)))
#endif /* kcg_copy_array_int_7_33 */

#ifndef kcg_copy_array__5427
#define kcg_copy_array__5427(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__5427)))
#endif /* kcg_copy_array__5427 */

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

#ifndef kcg_copy_array__5451
#define kcg_copy_array__5451(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__5451)))
#endif /* kcg_copy_array__5451 */

#ifndef kcg_copy_array_int_30
#define kcg_copy_array_int_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_30)))
#endif /* kcg_copy_array_int_30 */

#ifndef kcg_copy_array_int_33
#define kcg_copy_array_int_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33)))
#endif /* kcg_copy_array_int_33 */

#ifndef kcg_copy_array_int_231_33
#define kcg_copy_array_int_231_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231_33)))
#endif /* kcg_copy_array_int_231_33 */

#ifndef kcg_copy_array__5463
#define kcg_copy_array__5463(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__5463)))
#endif /* kcg_copy_array__5463 */

#ifndef kcg_copy_array__5466
#define kcg_copy_array__5466(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__5466)))
#endif /* kcg_copy_array__5466 */

#ifndef kcg_copy_array__5469
#define kcg_copy_array__5469(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__5469)))
#endif /* kcg_copy_array__5469 */

#ifndef kcg_comp_struct__5278
extern kcg_bool kcg_comp_struct__5278(
  struct__5278 *kcg_c1,
  struct__5278 *kcg_c2);
#endif /* kcg_comp_struct__5278 */

#ifndef kcg_comp_struct__5295
extern kcg_bool kcg_comp_struct__5295(
  struct__5295 *kcg_c1,
  struct__5295 *kcg_c2);
#endif /* kcg_comp_struct__5295 */

#ifndef kcg_comp_struct__5311
extern kcg_bool kcg_comp_struct__5311(
  struct__5311 *kcg_c1,
  struct__5311 *kcg_c2);
#endif /* kcg_comp_struct__5311 */

#ifndef kcg_comp_struct__5322
extern kcg_bool kcg_comp_struct__5322(
  struct__5322 *kcg_c1,
  struct__5322 *kcg_c2);
#endif /* kcg_comp_struct__5322 */

#ifndef kcg_comp_struct__5327
extern kcg_bool kcg_comp_struct__5327(
  struct__5327 *kcg_c1,
  struct__5327 *kcg_c2);
#endif /* kcg_comp_struct__5327 */

#ifndef kcg_comp_struct__5341
extern kcg_bool kcg_comp_struct__5341(
  struct__5341 *kcg_c1,
  struct__5341 *kcg_c2);
#endif /* kcg_comp_struct__5341 */

#ifndef kcg_comp_struct__5356
extern kcg_bool kcg_comp_struct__5356(
  struct__5356 *kcg_c1,
  struct__5356 *kcg_c2);
#endif /* kcg_comp_struct__5356 */

#ifndef kcg_comp_struct__5369
extern kcg_bool kcg_comp_struct__5369(
  struct__5369 *kcg_c1,
  struct__5369 *kcg_c2);
#endif /* kcg_comp_struct__5369 */

#ifndef kcg_comp_struct__5374
extern kcg_bool kcg_comp_struct__5374(
  struct__5374 *kcg_c1,
  struct__5374 *kcg_c2);
#endif /* kcg_comp_struct__5374 */

#ifndef kcg_comp_struct__5383
extern kcg_bool kcg_comp_struct__5383(
  struct__5383 *kcg_c1,
  struct__5383 *kcg_c2);
#endif /* kcg_comp_struct__5383 */

#ifndef kcg_comp_struct__5391
extern kcg_bool kcg_comp_struct__5391(
  struct__5391 *kcg_c1,
  struct__5391 *kcg_c2);
#endif /* kcg_comp_struct__5391 */

#ifndef kcg_comp_struct__5404
extern kcg_bool kcg_comp_struct__5404(
  struct__5404 *kcg_c1,
  struct__5404 *kcg_c2);
#endif /* kcg_comp_struct__5404 */

#ifndef kcg_comp_array__5292
extern kcg_bool kcg_comp_array__5292(array__5292 *kcg_c1, array__5292 *kcg_c2);
#endif /* kcg_comp_array__5292 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__5319
extern kcg_bool kcg_comp_array__5319(array__5319 *kcg_c1, array__5319 *kcg_c2);
#endif /* kcg_comp_array__5319 */

#ifndef kcg_comp_array__5338
extern kcg_bool kcg_comp_array__5338(array__5338 *kcg_c1, array__5338 *kcg_c2);
#endif /* kcg_comp_array__5338 */

#ifndef kcg_comp_array_int_231
extern kcg_bool kcg_comp_array_int_231(
  array_int_231 *kcg_c1,
  array_int_231 *kcg_c2);
#endif /* kcg_comp_array_int_231 */

#ifndef kcg_comp_array_int_3
extern kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2);
#endif /* kcg_comp_array_int_3 */

#ifndef kcg_comp_array__5401
extern kcg_bool kcg_comp_array__5401(array__5401 *kcg_c1, array__5401 *kcg_c2);
#endif /* kcg_comp_array__5401 */

#ifndef kcg_comp_array_int_7
extern kcg_bool kcg_comp_array_int_7(array_int_7 *kcg_c1, array_int_7 *kcg_c2);
#endif /* kcg_comp_array_int_7 */

#ifndef kcg_comp_array_int_7_33
extern kcg_bool kcg_comp_array_int_7_33(
  array_int_7_33 *kcg_c1,
  array_int_7_33 *kcg_c2);
#endif /* kcg_comp_array_int_7_33 */

#ifndef kcg_comp_array__5427
extern kcg_bool kcg_comp_array__5427(array__5427 *kcg_c1, array__5427 *kcg_c2);
#endif /* kcg_comp_array__5427 */

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

#ifndef kcg_comp_array__5451
extern kcg_bool kcg_comp_array__5451(array__5451 *kcg_c1, array__5451 *kcg_c2);
#endif /* kcg_comp_array__5451 */

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

#ifndef kcg_comp_array__5463
extern kcg_bool kcg_comp_array__5463(array__5463 *kcg_c1, array__5463 *kcg_c2);
#endif /* kcg_comp_array__5463 */

#ifndef kcg_comp_array__5466
extern kcg_bool kcg_comp_array__5466(array__5466 *kcg_c1, array__5466 *kcg_c2);
#endif /* kcg_comp_array__5466 */

#ifndef kcg_comp_array__5469
extern kcg_bool kcg_comp_array__5469(array__5469 *kcg_c1, array__5469 *kcg_c2);
#endif /* kcg_comp_array__5469 */

#define kcg_comp_Array03_TM kcg_comp_array_int_3

#define kcg_copy_Array03_TM kcg_copy_array_int_3

#define kcg_comp_P005_OBU_T_TM kcg_comp_struct__5341

#define kcg_copy_P005_OBU_T_TM kcg_copy_struct__5341

#define kcg_comp_P005_OBU_sectionlist_enum_T_TM kcg_comp_array__5338

#define kcg_copy_P005_OBU_sectionlist_enum_T_TM kcg_copy_array__5338

#define kcg_comp_P005_section_enum_T_TM kcg_comp_struct__5327

#define kcg_copy_P005_section_enum_T_TM kcg_copy_struct__5327

#define kcg_comp_BaliseGroupData_TM kcg_comp_struct__5383

#define kcg_copy_BaliseGroupData_TM kcg_copy_struct__5383

#define kcg_comp_P005_OBU_sectionlist_int_T_TM kcg_comp_array__5427

#define kcg_copy_P005_OBU_sectionlist_int_T_TM kcg_copy_array__5427

#define kcg_comp_P005_section_array_T_TM kcg_comp_array_int_7

#define kcg_copy_P005_section_array_T_TM kcg_copy_array_int_7

#define kcg_comp_P005_OBU_sectionlist_array_T_TM kcg_comp_array_int_7_33

#define kcg_copy_P005_OBU_sectionlist_array_T_TM kcg_copy_array_int_7_33

#define kcg_comp_P005_sections_array_flat_T_TM kcg_comp_array_int_231

#define kcg_copy_P005_sections_array_flat_T_TM kcg_copy_array_int_231

#define kcg_comp_P005_section_int_T_TM kcg_comp_struct__5391

#define kcg_copy_P005_section_int_T_TM kcg_copy_struct__5391

#define kcg_comp_P005_trackide_sectionlist_T_TM kcg_comp_array__5401

#define kcg_copy_P005_trackide_sectionlist_T_TM kcg_copy_array__5401

#define kcg_comp_P005_trackside_int_T_TM kcg_comp_struct__5404

#define kcg_copy_P005_trackside_int_T_TM kcg_copy_struct__5404

#define kcg_comp_BaliseTelegramHeader_int_T_TM kcg_comp_struct__5356

#define kcg_copy_BaliseTelegramHeader_int_T_TM kcg_copy_struct__5356

#define kcg_comp_CompressedBaliseMessage_TM kcg_comp_struct__5369

#define kcg_copy_CompressedBaliseMessage_TM kcg_copy_struct__5369

#define kcg_comp_B_data_internal_T_InfraLib kcg_comp_struct__5374

#define kcg_copy_B_data_internal_T_InfraLib kcg_copy_struct__5374

#define kcg_comp_LinkedBGs_T_BG_Types_Pkg kcg_comp_array__5292

#define kcg_copy_LinkedBGs_T_BG_Types_Pkg kcg_copy_array__5292

#define kcg_comp_LinkedBG_T_BG_Types_Pkg kcg_comp_struct__5278

#define kcg_copy_LinkedBG_T_BG_Types_Pkg kcg_copy_struct__5278

#define kcg_comp_BaliseGroupData_Basics kcg_comp_struct__5383

#define kcg_copy_BaliseGroupData_Basics kcg_copy_struct__5383

#define kcg_comp_TelegramHeader_T_BG_Types_Pkg kcg_comp_struct__5295

#define kcg_copy_TelegramHeader_T_BG_Types_Pkg kcg_copy_struct__5295

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__5311

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__5311

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__5319

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__5319

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__5322

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__5322

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-06-09T14:04:51
*************************************************************$ */


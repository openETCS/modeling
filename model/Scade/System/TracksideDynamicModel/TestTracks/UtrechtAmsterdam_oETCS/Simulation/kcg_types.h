/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-25T17:50:03
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

/* TM_OrBG */
typedef enum { Amsterdam, Utrecht } TM_OrBG;
/* TM_OrLine */
typedef enum { N, Z } TM_OrLine;
/* Q_DIR */
typedef enum {
  Q_DIR_Reverse = 0,
  Q_DIR_Nominal = 1,
  Q_DIR_Both_directions = 2
} Q_DIR;
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
  _1_M_DUP_This_balise_is_a_duplicate_of_the_next_balise = 1,
  M_DUP_This_balise_is_a_duplicate_of_the_previous_balise = 2
} M_DUP;
/* Q_LINK */
typedef enum { Q_LINK_Unlinked = 0, Q_LINK_Linked = 1 } Q_LINK;
/* NID_PACKET */
typedef kcg_int NID_PACKET;

/* M_MCOUNT */
typedef kcg_int M_MCOUNT;

/* NID_C */
typedef kcg_int NID_C;

/* NID_BG */
typedef kcg_int NID_BG;

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
} struct__3653;

/* BG_Types_Pkg::TelegramHeader_T */
typedef struct__3653 TelegramHeader_T_BG_Types_Pkg;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__3669;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__3669 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__3677[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__3677 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__3680;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__3680 CompressedPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Pos;
  TM_OrBG Or_BG;
  TM_OrLine Or_Line;
} struct__3685;

/* TM_BaliseGroupData */
typedef struct__3685 TM_BaliseGroupData;

/* Basics::BaliseGroupData */
typedef struct__3685 BaliseGroupData_Basics;

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
} struct__3693;

/* TM_BaliseTelegramHeader_int_T */
typedef struct__3693 TM_BaliseTelegramHeader_int_T;

typedef struct {
  TM_BaliseTelegramHeader_int_T header;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int engineering_BG_location;
  kcg_real TrainPos;
  kcg_int pig_nom_0;
  kcg_bool balise_passed;
} struct__3706;

/* FirstTest::InfraLib::B_data_internal */
typedef struct__3706 B_data_internal_FirstTest_InfraLib;

typedef struct {
  TM_BaliseTelegramHeader_int_T Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__3715;

/* TM_CompressedBaliseMessage */
typedef struct__3715 TM_CompressedBaliseMessage;

typedef struct {
  kcg_bool valid;
  kcg_int D_LINK;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_LINKORIENTATION;
  kcg_int Q_LINKREACTION;
  kcg_int Q_LOCACC;
} struct__3720;

/* TM_P005E_T */
typedef struct__3720 TM_P005E_T;

typedef TM_P005E_T array__3731[5];

/* TM_P05Es_T */
typedef array__3731 TM_P05Es_T;

typedef struct {
  kcg_bool valid;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int N_ITER;
  TM_P05Es_T SECTIONS;
} struct__3734;

/* TM_P005 */
typedef struct__3734 TM_P005;

typedef kcg_int array_int_7[7];

/* TM_P005E_array_T */
typedef array_int_7 TM_P005E_array_T;

typedef kcg_int array_int_461[461];

typedef kcg_int array_int_11[11];

typedef kcg_int array_int_18[18];

typedef kcg_int array_int_25[25];

typedef kcg_int array_int_32[32];

typedef kcg_int array_int_39[39];

typedef kcg_int array_int_4[4];

typedef CompressedPacketData_T_Common_Types_Pkg array_int_500_500[500];

#ifndef kcg_copy_struct__3653
#define kcg_copy_struct__3653(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__3653)))
#endif /* kcg_copy_struct__3653 */

#ifndef kcg_copy_struct__3669
#define kcg_copy_struct__3669(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__3669)))
#endif /* kcg_copy_struct__3669 */

#ifndef kcg_copy_struct__3680
#define kcg_copy_struct__3680(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__3680)))
#endif /* kcg_copy_struct__3680 */

#ifndef kcg_copy_struct__3685
#define kcg_copy_struct__3685(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__3685)))
#endif /* kcg_copy_struct__3685 */

#ifndef kcg_copy_struct__3693
#define kcg_copy_struct__3693(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__3693)))
#endif /* kcg_copy_struct__3693 */

#ifndef kcg_copy_struct__3706
#define kcg_copy_struct__3706(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__3706)))
#endif /* kcg_copy_struct__3706 */

#ifndef kcg_copy_struct__3715
#define kcg_copy_struct__3715(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__3715)))
#endif /* kcg_copy_struct__3715 */

#ifndef kcg_copy_struct__3720
#define kcg_copy_struct__3720(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__3720)))
#endif /* kcg_copy_struct__3720 */

#ifndef kcg_copy_struct__3734
#define kcg_copy_struct__3734(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__3734)))
#endif /* kcg_copy_struct__3734 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__3677
#define kcg_copy_array__3677(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__3677)))
#endif /* kcg_copy_array__3677 */

#ifndef kcg_copy_array__3731
#define kcg_copy_array__3731(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__3731)))
#endif /* kcg_copy_array__3731 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

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

#ifndef kcg_copy_array_int_39
#define kcg_copy_array_int_39(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_39)))
#endif /* kcg_copy_array_int_39 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_int_500_500
#define kcg_copy_array_int_500_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500_500)))
#endif /* kcg_copy_array_int_500_500 */

#ifndef kcg_comp_struct__3653
extern kcg_bool kcg_comp_struct__3653(
  struct__3653 *kcg_c1,
  struct__3653 *kcg_c2);
#endif /* kcg_comp_struct__3653 */

#ifndef kcg_comp_struct__3669
extern kcg_bool kcg_comp_struct__3669(
  struct__3669 *kcg_c1,
  struct__3669 *kcg_c2);
#endif /* kcg_comp_struct__3669 */

#ifndef kcg_comp_struct__3680
extern kcg_bool kcg_comp_struct__3680(
  struct__3680 *kcg_c1,
  struct__3680 *kcg_c2);
#endif /* kcg_comp_struct__3680 */

#ifndef kcg_comp_struct__3685
extern kcg_bool kcg_comp_struct__3685(
  struct__3685 *kcg_c1,
  struct__3685 *kcg_c2);
#endif /* kcg_comp_struct__3685 */

#ifndef kcg_comp_struct__3693
extern kcg_bool kcg_comp_struct__3693(
  struct__3693 *kcg_c1,
  struct__3693 *kcg_c2);
#endif /* kcg_comp_struct__3693 */

#ifndef kcg_comp_struct__3706
extern kcg_bool kcg_comp_struct__3706(
  struct__3706 *kcg_c1,
  struct__3706 *kcg_c2);
#endif /* kcg_comp_struct__3706 */

#ifndef kcg_comp_struct__3715
extern kcg_bool kcg_comp_struct__3715(
  struct__3715 *kcg_c1,
  struct__3715 *kcg_c2);
#endif /* kcg_comp_struct__3715 */

#ifndef kcg_comp_struct__3720
extern kcg_bool kcg_comp_struct__3720(
  struct__3720 *kcg_c1,
  struct__3720 *kcg_c2);
#endif /* kcg_comp_struct__3720 */

#ifndef kcg_comp_struct__3734
extern kcg_bool kcg_comp_struct__3734(
  struct__3734 *kcg_c1,
  struct__3734 *kcg_c2);
#endif /* kcg_comp_struct__3734 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__3677
extern kcg_bool kcg_comp_array__3677(array__3677 *kcg_c1, array__3677 *kcg_c2);
#endif /* kcg_comp_array__3677 */

#ifndef kcg_comp_array__3731
extern kcg_bool kcg_comp_array__3731(array__3731 *kcg_c1, array__3731 *kcg_c2);
#endif /* kcg_comp_array__3731 */

#ifndef kcg_comp_array_int_7
extern kcg_bool kcg_comp_array_int_7(array_int_7 *kcg_c1, array_int_7 *kcg_c2);
#endif /* kcg_comp_array_int_7 */

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

#ifndef kcg_comp_array_int_39
extern kcg_bool kcg_comp_array_int_39(
  array_int_39 *kcg_c1,
  array_int_39 *kcg_c2);
#endif /* kcg_comp_array_int_39 */

#ifndef kcg_comp_array_int_4
extern kcg_bool kcg_comp_array_int_4(array_int_4 *kcg_c1, array_int_4 *kcg_c2);
#endif /* kcg_comp_array_int_4 */

#ifndef kcg_comp_array_int_500_500
extern kcg_bool kcg_comp_array_int_500_500(
  array_int_500_500 *kcg_c1,
  array_int_500_500 *kcg_c2);
#endif /* kcg_comp_array_int_500_500 */

#define kcg_comp_BaliseGroupData_Basics kcg_comp_struct__3685

#define kcg_copy_BaliseGroupData_Basics kcg_copy_struct__3685

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__3669

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__3669

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__3677

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__3677

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__3680

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__3680

#define kcg_comp_TM_BaliseGroupData kcg_comp_struct__3685

#define kcg_copy_TM_BaliseGroupData kcg_copy_struct__3685

#define kcg_comp_TM_P005E_array_T kcg_comp_array_int_7

#define kcg_copy_TM_P005E_array_T kcg_copy_array_int_7

#define kcg_comp_TM_P005E_T kcg_comp_struct__3720

#define kcg_copy_TM_P005E_T kcg_copy_struct__3720

#define kcg_comp_TM_P05Es_T kcg_comp_array__3731

#define kcg_copy_TM_P05Es_T kcg_copy_array__3731

#define kcg_comp_TM_P005 kcg_comp_struct__3734

#define kcg_copy_TM_P005 kcg_copy_struct__3734

#define kcg_comp_TM_BaliseTelegramHeader_int_T kcg_comp_struct__3693

#define kcg_copy_TM_BaliseTelegramHeader_int_T kcg_copy_struct__3693

#define kcg_comp_TM_CompressedBaliseMessage kcg_comp_struct__3715

#define kcg_copy_TM_CompressedBaliseMessage kcg_copy_struct__3715

#define kcg_comp_B_data_internal_FirstTest_InfraLib kcg_comp_struct__3706

#define kcg_copy_B_data_internal_FirstTest_InfraLib kcg_copy_struct__3706

#define kcg_comp_TelegramHeader_T_BG_Types_Pkg kcg_comp_struct__3653

#define kcg_copy_TelegramHeader_T_BG_Types_Pkg kcg_copy_struct__3653

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-04-25T17:50:03
*************************************************************$ */


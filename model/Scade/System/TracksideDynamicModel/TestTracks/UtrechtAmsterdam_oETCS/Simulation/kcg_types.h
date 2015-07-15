/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-12T22:54:50
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

/* TM::nid_packet_meta */
typedef kcg_int nid_packet_meta_TM;

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
} struct__21746;

/* BG_Types_Pkg::TelegramHeader_T */
typedef struct__21746 TelegramHeader_T_BG_Types_Pkg;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__21762;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__21762 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__21770[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__21770 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__21773;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__21773 CompressedPackets_T_Common_Types_Pkg;

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
} struct__21778;

/* TM::BaliseTelegramHeader_int_T */
typedef struct__21778 BaliseTelegramHeader_int_T_TM;

typedef struct {
  BaliseTelegramHeader_int_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__21791;

/* TM::CompressedBaliseMessage */
typedef struct__21791 CompressedBaliseMessage_TM;

typedef struct {
  kcg_real TrainPos_in;
  kcg_int OffsetTotal;
  kcg_real TrainPosCalibrated;
} struct__21796;

/* InfraLib::TrainPosRaw_T */
typedef struct__21796 TrainPosRaw_T_InfraLib;

typedef struct {
  TrainPosRaw_T_InfraLib TrainPosRaw;
  CompressedBaliseMessage_TM BG_Message;
} struct__21802;

/* InfraLib::TrackSectionData_T */
typedef struct__21802 TrackSectionData_T_InfraLib;

typedef struct {
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Pos;
  OrBG_TM Or_BG;
  OrLine_TM Or_Line;
} struct__21807;

/* Basics::BaliseGroupData */
typedef struct__21807 BaliseGroupData_Basics;

/* TM::BaliseGroupData */
typedef struct__21807 BaliseGroupData_TM;

typedef struct {
  BaliseTelegramHeader_int_T_TM header;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int engineering_BG_location;
  kcg_real TrainPos;
  kcg_int pig_nom_0;
  kcg_bool balise_passed;
} struct__21815;

/* InfraLib::B_data_internal_T */
typedef struct__21815 B_data_internal_T_InfraLib;

typedef struct { kcg_bool valid; kcg_int NID_PACKET; } struct__21824;

/* TM::P255_trackside_int_T */
typedef struct__21824 P255_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SRSTOP;
} struct__21829;

/* TM::P137_trackside_int_T */
typedef struct__21829 P137_trackside_int_T_TM;

typedef kcg_int array_int_3[3];

/* TM::P041_section_array_T */
typedef array_int_3 P041_section_array_T_TM;

typedef struct {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
} struct__21840;

/* TM::P041_section_int_T */
typedef struct__21840 P041_section_int_T_TM;

typedef P041_section_array_T_TM array_int_3_33[33];

/* TM::P041_OBU_sectionlist_array_T */
typedef array_int_3_33 P041_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_99[99];

/* TM::P041_sections_array_flat_T */
typedef array_int_99 P041_sections_array_flat_T_TM;

typedef P041_section_int_T_TM array__21852[33];

/* TM::P041_OBU_sectionlist_int_T */
typedef array__21852 P041_OBU_sectionlist_int_T_TM;

typedef P041_section_int_T_TM array__21855[32];

/* TM::P041_trackide_sectionlist_T */
typedef array__21855 P041_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_LEVELTR;
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
  kcg_int N_ITER;
  P041_trackide_sectionlist_T_TM SECTIONS;
} struct__21858;

/* TM::P041_trackside_int_T */
typedef struct__21858 P041_trackside_int_T_TM;

typedef kcg_int array_int_2[2];

/* TM::P046_section_array_T */
typedef array_int_2 P046_section_array_T_TM;

typedef struct { kcg_int M_LEVELTR; kcg_int NID_NTC; } struct__21875;

/* TM::P046_section_int_T */
typedef struct__21875 P046_section_int_T_TM;

typedef P046_section_array_T_TM array_int_2_33[33];

/* TM::P046_OBU_sectionlist_array_T */
typedef array_int_2_33 P046_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_66[66];

/* TM::P046_sections_array_flat_T */
typedef array_int_66 P046_sections_array_flat_T_TM;

typedef P046_section_int_T_TM array__21886[33];

/* TM::P046_OBU_sectionlist_int_T */
typedef array__21886 P046_OBU_sectionlist_int_T_TM;

typedef P046_section_int_T_TM array__21889[32];

/* TM::P046_trackide_sectionlist_T */
typedef array__21889 P046_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int N_ITER;
  P046_trackide_sectionlist_T_TM SECTIONS;
} struct__21892;

/* TM::P046_trackside_int_T */
typedef struct__21892 P046_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_RBC;
  kcg_int NID_C;
  kcg_int NID_RBC;
  kcg_int NID_RADIO;
  kcg_int Q_SLEEPSESSION;
} struct__21903;

/* TM::P042_trackside_int_T */
typedef struct__21903 P042_trackside_int_T_TM;

typedef kcg_int array_int_32[32];

/* TM_baseline2::P003V1_trackide_sectionlist_T */
typedef array_int_32 P003V1_trackide_sectionlist_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_VALIDNV;
  kcg_int N_ITER;
  P003V1_trackide_sectionlist_T_TM_baseline2 SECTIONS;
  kcg_int V_NVSHUNT;
  kcg_int V_NVSTFF;
  kcg_int V_NVONSIGHT;
  kcg_int V_NVUNFIT;
  kcg_int V_NVREL;
  kcg_int D_NVROLL;
  kcg_int Q_NVSRBKTRG;
  kcg_int Q_NVEMRRLS;
  kcg_int V_NVALLOWOVTRP;
  kcg_int V_NVSUPOVTRP;
  kcg_int D_NVOVTRP;
  kcg_int T_NVOVTRP;
  kcg_int D_NVPOTRP;
  kcg_int M_NVCONTACT;
  kcg_int T_NVCONTACT;
  kcg_int M_NVDERUN;
  kcg_int D_NVSTFF;
  kcg_int Q_NVDRIVER_ADHES;
} struct__21918;

/* TM_baseline2::P003V1_trackside_int_T */
typedef struct__21918 P003V1_trackside_int_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_MN;
} struct__21947;

/* TM::P045_trackside_int_T */
typedef struct__21947 P045_trackside_int_T_TM;

typedef CompressedPacketData_T_Common_Types_Pkg array_int_500_500[500];

typedef kcg_int array_int_499[499];

typedef kcg_int array_int_1[1];

typedef kcg_int array_int_496[496];

typedef kcg_int array_int_4[4];

typedef kcg_int array_int_492[492];

typedef kcg_int array_int_8[8];

typedef array_int_2_33 array_int_2_33_99[99];

typedef kcg_int array_int_430[430];

typedef kcg_int array_int_70[70];

typedef P046_section_int_T_TM array__21985[1];

typedef kcg_int array_int_444[444];

typedef kcg_int array_int_6[6];

typedef kcg_int array_int_24[24];

typedef kcg_int array_int_56[56];

typedef kcg_int array_int_18[18];

typedef array_int_3_33 array_int_3_33_99[99];

typedef kcg_int array_int_395[395];

typedef kcg_int array_int_5[5];

typedef kcg_int array_int_105[105];

typedef P041_section_int_T_TM array__22015[1];

#ifndef kcg_copy_struct__21746
#define kcg_copy_struct__21746(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__21746)))
#endif /* kcg_copy_struct__21746 */

#ifndef kcg_copy_struct__21762
#define kcg_copy_struct__21762(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__21762)))
#endif /* kcg_copy_struct__21762 */

#ifndef kcg_copy_struct__21773
#define kcg_copy_struct__21773(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__21773)))
#endif /* kcg_copy_struct__21773 */

#ifndef kcg_copy_struct__21778
#define kcg_copy_struct__21778(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__21778)))
#endif /* kcg_copy_struct__21778 */

#ifndef kcg_copy_struct__21791
#define kcg_copy_struct__21791(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__21791)))
#endif /* kcg_copy_struct__21791 */

#ifndef kcg_copy_struct__21796
#define kcg_copy_struct__21796(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__21796)))
#endif /* kcg_copy_struct__21796 */

#ifndef kcg_copy_struct__21802
#define kcg_copy_struct__21802(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__21802)))
#endif /* kcg_copy_struct__21802 */

#ifndef kcg_copy_struct__21807
#define kcg_copy_struct__21807(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__21807)))
#endif /* kcg_copy_struct__21807 */

#ifndef kcg_copy_struct__21815
#define kcg_copy_struct__21815(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__21815)))
#endif /* kcg_copy_struct__21815 */

#ifndef kcg_copy_struct__21824
#define kcg_copy_struct__21824(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__21824)))
#endif /* kcg_copy_struct__21824 */

#ifndef kcg_copy_struct__21829
#define kcg_copy_struct__21829(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__21829)))
#endif /* kcg_copy_struct__21829 */

#ifndef kcg_copy_struct__21840
#define kcg_copy_struct__21840(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__21840)))
#endif /* kcg_copy_struct__21840 */

#ifndef kcg_copy_struct__21858
#define kcg_copy_struct__21858(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__21858)))
#endif /* kcg_copy_struct__21858 */

#ifndef kcg_copy_struct__21875
#define kcg_copy_struct__21875(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__21875)))
#endif /* kcg_copy_struct__21875 */

#ifndef kcg_copy_struct__21892
#define kcg_copy_struct__21892(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__21892)))
#endif /* kcg_copy_struct__21892 */

#ifndef kcg_copy_struct__21903
#define kcg_copy_struct__21903(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__21903)))
#endif /* kcg_copy_struct__21903 */

#ifndef kcg_copy_struct__21918
#define kcg_copy_struct__21918(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__21918)))
#endif /* kcg_copy_struct__21918 */

#ifndef kcg_copy_struct__21947
#define kcg_copy_struct__21947(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__21947)))
#endif /* kcg_copy_struct__21947 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__21770
#define kcg_copy_array__21770(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__21770)))
#endif /* kcg_copy_array__21770 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_int_3_33
#define kcg_copy_array_int_3_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33)))
#endif /* kcg_copy_array_int_3_33 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__21852
#define kcg_copy_array__21852(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__21852)))
#endif /* kcg_copy_array__21852 */

#ifndef kcg_copy_array__21855
#define kcg_copy_array__21855(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__21855)))
#endif /* kcg_copy_array__21855 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array_int_2_33
#define kcg_copy_array_int_2_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_33)))
#endif /* kcg_copy_array_int_2_33 */

#ifndef kcg_copy_array_int_66
#define kcg_copy_array_int_66(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_66)))
#endif /* kcg_copy_array_int_66 */

#ifndef kcg_copy_array__21886
#define kcg_copy_array__21886(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__21886)))
#endif /* kcg_copy_array__21886 */

#ifndef kcg_copy_array__21889
#define kcg_copy_array__21889(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__21889)))
#endif /* kcg_copy_array__21889 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array_int_500_500
#define kcg_copy_array_int_500_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500_500)))
#endif /* kcg_copy_array_int_500_500 */

#ifndef kcg_copy_array_int_499
#define kcg_copy_array_int_499(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_499)))
#endif /* kcg_copy_array_int_499 */

#ifndef kcg_copy_array_int_1
#define kcg_copy_array_int_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_1)))
#endif /* kcg_copy_array_int_1 */

#ifndef kcg_copy_array_int_496
#define kcg_copy_array_int_496(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_496)))
#endif /* kcg_copy_array_int_496 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_int_492
#define kcg_copy_array_int_492(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_492)))
#endif /* kcg_copy_array_int_492 */

#ifndef kcg_copy_array_int_8
#define kcg_copy_array_int_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_8)))
#endif /* kcg_copy_array_int_8 */

#ifndef kcg_copy_array_int_2_33_99
#define kcg_copy_array_int_2_33_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_33_99)))
#endif /* kcg_copy_array_int_2_33_99 */

#ifndef kcg_copy_array_int_430
#define kcg_copy_array_int_430(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_430)))
#endif /* kcg_copy_array_int_430 */

#ifndef kcg_copy_array_int_70
#define kcg_copy_array_int_70(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_70)))
#endif /* kcg_copy_array_int_70 */

#ifndef kcg_copy_array__21985
#define kcg_copy_array__21985(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__21985)))
#endif /* kcg_copy_array__21985 */

#ifndef kcg_copy_array_int_444
#define kcg_copy_array_int_444(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_444)))
#endif /* kcg_copy_array_int_444 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array_int_24
#define kcg_copy_array_int_24(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_24)))
#endif /* kcg_copy_array_int_24 */

#ifndef kcg_copy_array_int_56
#define kcg_copy_array_int_56(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_56)))
#endif /* kcg_copy_array_int_56 */

#ifndef kcg_copy_array_int_18
#define kcg_copy_array_int_18(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_18)))
#endif /* kcg_copy_array_int_18 */

#ifndef kcg_copy_array_int_3_33_99
#define kcg_copy_array_int_3_33_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33_99)))
#endif /* kcg_copy_array_int_3_33_99 */

#ifndef kcg_copy_array_int_395
#define kcg_copy_array_int_395(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_395)))
#endif /* kcg_copy_array_int_395 */

#ifndef kcg_copy_array_int_5
#define kcg_copy_array_int_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_5)))
#endif /* kcg_copy_array_int_5 */

#ifndef kcg_copy_array_int_105
#define kcg_copy_array_int_105(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_105)))
#endif /* kcg_copy_array_int_105 */

#ifndef kcg_copy_array__22015
#define kcg_copy_array__22015(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__22015)))
#endif /* kcg_copy_array__22015 */

#ifndef kcg_comp_struct__21746
extern kcg_bool kcg_comp_struct__21746(
  struct__21746 *kcg_c1,
  struct__21746 *kcg_c2);
#endif /* kcg_comp_struct__21746 */

#ifndef kcg_comp_struct__21762
extern kcg_bool kcg_comp_struct__21762(
  struct__21762 *kcg_c1,
  struct__21762 *kcg_c2);
#endif /* kcg_comp_struct__21762 */

#ifndef kcg_comp_struct__21773
extern kcg_bool kcg_comp_struct__21773(
  struct__21773 *kcg_c1,
  struct__21773 *kcg_c2);
#endif /* kcg_comp_struct__21773 */

#ifndef kcg_comp_struct__21778
extern kcg_bool kcg_comp_struct__21778(
  struct__21778 *kcg_c1,
  struct__21778 *kcg_c2);
#endif /* kcg_comp_struct__21778 */

#ifndef kcg_comp_struct__21791
extern kcg_bool kcg_comp_struct__21791(
  struct__21791 *kcg_c1,
  struct__21791 *kcg_c2);
#endif /* kcg_comp_struct__21791 */

#ifndef kcg_comp_struct__21796
extern kcg_bool kcg_comp_struct__21796(
  struct__21796 *kcg_c1,
  struct__21796 *kcg_c2);
#endif /* kcg_comp_struct__21796 */

#ifndef kcg_comp_struct__21802
extern kcg_bool kcg_comp_struct__21802(
  struct__21802 *kcg_c1,
  struct__21802 *kcg_c2);
#endif /* kcg_comp_struct__21802 */

#ifndef kcg_comp_struct__21807
extern kcg_bool kcg_comp_struct__21807(
  struct__21807 *kcg_c1,
  struct__21807 *kcg_c2);
#endif /* kcg_comp_struct__21807 */

#ifndef kcg_comp_struct__21815
extern kcg_bool kcg_comp_struct__21815(
  struct__21815 *kcg_c1,
  struct__21815 *kcg_c2);
#endif /* kcg_comp_struct__21815 */

#ifndef kcg_comp_struct__21824
extern kcg_bool kcg_comp_struct__21824(
  struct__21824 *kcg_c1,
  struct__21824 *kcg_c2);
#endif /* kcg_comp_struct__21824 */

#ifndef kcg_comp_struct__21829
extern kcg_bool kcg_comp_struct__21829(
  struct__21829 *kcg_c1,
  struct__21829 *kcg_c2);
#endif /* kcg_comp_struct__21829 */

#ifndef kcg_comp_struct__21840
extern kcg_bool kcg_comp_struct__21840(
  struct__21840 *kcg_c1,
  struct__21840 *kcg_c2);
#endif /* kcg_comp_struct__21840 */

#ifndef kcg_comp_struct__21858
extern kcg_bool kcg_comp_struct__21858(
  struct__21858 *kcg_c1,
  struct__21858 *kcg_c2);
#endif /* kcg_comp_struct__21858 */

#ifndef kcg_comp_struct__21875
extern kcg_bool kcg_comp_struct__21875(
  struct__21875 *kcg_c1,
  struct__21875 *kcg_c2);
#endif /* kcg_comp_struct__21875 */

#ifndef kcg_comp_struct__21892
extern kcg_bool kcg_comp_struct__21892(
  struct__21892 *kcg_c1,
  struct__21892 *kcg_c2);
#endif /* kcg_comp_struct__21892 */

#ifndef kcg_comp_struct__21903
extern kcg_bool kcg_comp_struct__21903(
  struct__21903 *kcg_c1,
  struct__21903 *kcg_c2);
#endif /* kcg_comp_struct__21903 */

#ifndef kcg_comp_struct__21918
extern kcg_bool kcg_comp_struct__21918(
  struct__21918 *kcg_c1,
  struct__21918 *kcg_c2);
#endif /* kcg_comp_struct__21918 */

#ifndef kcg_comp_struct__21947
extern kcg_bool kcg_comp_struct__21947(
  struct__21947 *kcg_c1,
  struct__21947 *kcg_c2);
#endif /* kcg_comp_struct__21947 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__21770
extern kcg_bool kcg_comp_array__21770(
  array__21770 *kcg_c1,
  array__21770 *kcg_c2);
#endif /* kcg_comp_array__21770 */

#ifndef kcg_comp_array_int_3
extern kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2);
#endif /* kcg_comp_array_int_3 */

#ifndef kcg_comp_array_int_3_33
extern kcg_bool kcg_comp_array_int_3_33(
  array_int_3_33 *kcg_c1,
  array_int_3_33 *kcg_c2);
#endif /* kcg_comp_array_int_3_33 */

#ifndef kcg_comp_array_int_99
extern kcg_bool kcg_comp_array_int_99(
  array_int_99 *kcg_c1,
  array_int_99 *kcg_c2);
#endif /* kcg_comp_array_int_99 */

#ifndef kcg_comp_array__21852
extern kcg_bool kcg_comp_array__21852(
  array__21852 *kcg_c1,
  array__21852 *kcg_c2);
#endif /* kcg_comp_array__21852 */

#ifndef kcg_comp_array__21855
extern kcg_bool kcg_comp_array__21855(
  array__21855 *kcg_c1,
  array__21855 *kcg_c2);
#endif /* kcg_comp_array__21855 */

#ifndef kcg_comp_array_int_2
extern kcg_bool kcg_comp_array_int_2(array_int_2 *kcg_c1, array_int_2 *kcg_c2);
#endif /* kcg_comp_array_int_2 */

#ifndef kcg_comp_array_int_2_33
extern kcg_bool kcg_comp_array_int_2_33(
  array_int_2_33 *kcg_c1,
  array_int_2_33 *kcg_c2);
#endif /* kcg_comp_array_int_2_33 */

#ifndef kcg_comp_array_int_66
extern kcg_bool kcg_comp_array_int_66(
  array_int_66 *kcg_c1,
  array_int_66 *kcg_c2);
#endif /* kcg_comp_array_int_66 */

#ifndef kcg_comp_array__21886
extern kcg_bool kcg_comp_array__21886(
  array__21886 *kcg_c1,
  array__21886 *kcg_c2);
#endif /* kcg_comp_array__21886 */

#ifndef kcg_comp_array__21889
extern kcg_bool kcg_comp_array__21889(
  array__21889 *kcg_c1,
  array__21889 *kcg_c2);
#endif /* kcg_comp_array__21889 */

#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */

#ifndef kcg_comp_array_int_500_500
extern kcg_bool kcg_comp_array_int_500_500(
  array_int_500_500 *kcg_c1,
  array_int_500_500 *kcg_c2);
#endif /* kcg_comp_array_int_500_500 */

#ifndef kcg_comp_array_int_499
extern kcg_bool kcg_comp_array_int_499(
  array_int_499 *kcg_c1,
  array_int_499 *kcg_c2);
#endif /* kcg_comp_array_int_499 */

#ifndef kcg_comp_array_int_1
extern kcg_bool kcg_comp_array_int_1(array_int_1 *kcg_c1, array_int_1 *kcg_c2);
#endif /* kcg_comp_array_int_1 */

#ifndef kcg_comp_array_int_496
extern kcg_bool kcg_comp_array_int_496(
  array_int_496 *kcg_c1,
  array_int_496 *kcg_c2);
#endif /* kcg_comp_array_int_496 */

#ifndef kcg_comp_array_int_4
extern kcg_bool kcg_comp_array_int_4(array_int_4 *kcg_c1, array_int_4 *kcg_c2);
#endif /* kcg_comp_array_int_4 */

#ifndef kcg_comp_array_int_492
extern kcg_bool kcg_comp_array_int_492(
  array_int_492 *kcg_c1,
  array_int_492 *kcg_c2);
#endif /* kcg_comp_array_int_492 */

#ifndef kcg_comp_array_int_8
extern kcg_bool kcg_comp_array_int_8(array_int_8 *kcg_c1, array_int_8 *kcg_c2);
#endif /* kcg_comp_array_int_8 */

#ifndef kcg_comp_array_int_2_33_99
extern kcg_bool kcg_comp_array_int_2_33_99(
  array_int_2_33_99 *kcg_c1,
  array_int_2_33_99 *kcg_c2);
#endif /* kcg_comp_array_int_2_33_99 */

#ifndef kcg_comp_array_int_430
extern kcg_bool kcg_comp_array_int_430(
  array_int_430 *kcg_c1,
  array_int_430 *kcg_c2);
#endif /* kcg_comp_array_int_430 */

#ifndef kcg_comp_array_int_70
extern kcg_bool kcg_comp_array_int_70(
  array_int_70 *kcg_c1,
  array_int_70 *kcg_c2);
#endif /* kcg_comp_array_int_70 */

#ifndef kcg_comp_array__21985
extern kcg_bool kcg_comp_array__21985(
  array__21985 *kcg_c1,
  array__21985 *kcg_c2);
#endif /* kcg_comp_array__21985 */

#ifndef kcg_comp_array_int_444
extern kcg_bool kcg_comp_array_int_444(
  array_int_444 *kcg_c1,
  array_int_444 *kcg_c2);
#endif /* kcg_comp_array_int_444 */

#ifndef kcg_comp_array_int_6
extern kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2);
#endif /* kcg_comp_array_int_6 */

#ifndef kcg_comp_array_int_24
extern kcg_bool kcg_comp_array_int_24(
  array_int_24 *kcg_c1,
  array_int_24 *kcg_c2);
#endif /* kcg_comp_array_int_24 */

#ifndef kcg_comp_array_int_56
extern kcg_bool kcg_comp_array_int_56(
  array_int_56 *kcg_c1,
  array_int_56 *kcg_c2);
#endif /* kcg_comp_array_int_56 */

#ifndef kcg_comp_array_int_18
extern kcg_bool kcg_comp_array_int_18(
  array_int_18 *kcg_c1,
  array_int_18 *kcg_c2);
#endif /* kcg_comp_array_int_18 */

#ifndef kcg_comp_array_int_3_33_99
extern kcg_bool kcg_comp_array_int_3_33_99(
  array_int_3_33_99 *kcg_c1,
  array_int_3_33_99 *kcg_c2);
#endif /* kcg_comp_array_int_3_33_99 */

#ifndef kcg_comp_array_int_395
extern kcg_bool kcg_comp_array_int_395(
  array_int_395 *kcg_c1,
  array_int_395 *kcg_c2);
#endif /* kcg_comp_array_int_395 */

#ifndef kcg_comp_array_int_5
extern kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2);
#endif /* kcg_comp_array_int_5 */

#ifndef kcg_comp_array_int_105
extern kcg_bool kcg_comp_array_int_105(
  array_int_105 *kcg_c1,
  array_int_105 *kcg_c2);
#endif /* kcg_comp_array_int_105 */

#ifndef kcg_comp_array__22015
extern kcg_bool kcg_comp_array__22015(
  array__22015 *kcg_c1,
  array__22015 *kcg_c2);
#endif /* kcg_comp_array__22015 */

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__21762

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__21762

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__21770

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__21770

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__21773

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__21773

#define kcg_comp_TrainPosRaw_T_InfraLib kcg_comp_struct__21796

#define kcg_copy_TrainPosRaw_T_InfraLib kcg_copy_struct__21796

#define kcg_comp_TrackSectionData_T_InfraLib kcg_comp_struct__21802

#define kcg_copy_TrackSectionData_T_InfraLib kcg_copy_struct__21802

#define kcg_comp_B_data_internal_T_InfraLib kcg_comp_struct__21815

#define kcg_copy_B_data_internal_T_InfraLib kcg_copy_struct__21815

#define kcg_comp_P137_trackside_int_T_TM kcg_comp_struct__21829

#define kcg_copy_P137_trackside_int_T_TM kcg_copy_struct__21829

#define kcg_comp_P041_OBU_sectionlist_int_T_TM kcg_comp_array__21852

#define kcg_copy_P041_OBU_sectionlist_int_T_TM kcg_copy_array__21852

#define kcg_comp_P041_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P041_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P041_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P041_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P041_section_int_T_TM kcg_comp_struct__21840

#define kcg_copy_P041_section_int_T_TM kcg_copy_struct__21840

#define kcg_comp_P041_trackide_sectionlist_T_TM kcg_comp_array__21855

#define kcg_copy_P041_trackide_sectionlist_T_TM kcg_copy_array__21855

#define kcg_comp_P041_trackside_int_T_TM kcg_comp_struct__21858

#define kcg_copy_P041_trackside_int_T_TM kcg_copy_struct__21858

#define kcg_comp_P046_OBU_sectionlist_int_T_TM kcg_comp_array__21886

#define kcg_copy_P046_OBU_sectionlist_int_T_TM kcg_copy_array__21886

#define kcg_comp_P046_section_array_T_TM kcg_comp_array_int_2

#define kcg_copy_P046_section_array_T_TM kcg_copy_array_int_2

#define kcg_comp_P046_OBU_sectionlist_array_T_TM kcg_comp_array_int_2_33

#define kcg_copy_P046_OBU_sectionlist_array_T_TM kcg_copy_array_int_2_33

#define kcg_comp_P046_sections_array_flat_T_TM kcg_comp_array_int_66

#define kcg_copy_P046_sections_array_flat_T_TM kcg_copy_array_int_66

#define kcg_comp_TelegramHeader_T_BG_Types_Pkg kcg_comp_struct__21746

#define kcg_copy_TelegramHeader_T_BG_Types_Pkg kcg_copy_struct__21746

#define kcg_comp_P046_section_int_T_TM kcg_comp_struct__21875

#define kcg_copy_P046_section_int_T_TM kcg_copy_struct__21875

#define kcg_comp_P046_trackide_sectionlist_T_TM kcg_comp_array__21889

#define kcg_copy_P046_trackide_sectionlist_T_TM kcg_copy_array__21889

#define kcg_comp_P046_trackside_int_T_TM kcg_comp_struct__21892

#define kcg_copy_P046_trackside_int_T_TM kcg_copy_struct__21892

#define kcg_comp_P042_trackside_int_T_TM kcg_comp_struct__21903

#define kcg_copy_P042_trackside_int_T_TM kcg_copy_struct__21903

#define kcg_comp_CompressedBaliseMessage_TM kcg_comp_struct__21791

#define kcg_copy_CompressedBaliseMessage_TM kcg_copy_struct__21791

#define kcg_comp_BaliseGroupData_TM kcg_comp_struct__21807

#define kcg_copy_BaliseGroupData_TM kcg_copy_struct__21807

#define kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P045_trackside_int_T_TM kcg_comp_struct__21947

#define kcg_copy_P045_trackside_int_T_TM kcg_copy_struct__21947

#define kcg_comp_P003V1_trackside_int_T_TM_baseline2 kcg_comp_struct__21918

#define kcg_copy_P003V1_trackside_int_T_TM_baseline2 kcg_copy_struct__21918

#define kcg_comp_P255_trackside_int_T_TM kcg_comp_struct__21824

#define kcg_copy_P255_trackside_int_T_TM kcg_copy_struct__21824

#define kcg_comp_BaliseTelegramHeader_int_T_TM kcg_comp_struct__21778

#define kcg_copy_BaliseTelegramHeader_int_T_TM kcg_copy_struct__21778

#define kcg_comp_BaliseGroupData_Basics kcg_comp_struct__21807

#define kcg_copy_BaliseGroupData_Basics kcg_copy_struct__21807

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-07-12T22:54:50
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:55:34
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
  _4_M_DUP_This_balise_is_a_duplicate_of_the_next_balise = 1,
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
/* M_VERSION */
typedef enum {
  M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS = 0,
  M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0 = 16,
  M_VERSION_Version_1_1_introduced_in_SRS_3_3_0 = 17,
  M_VERSION_Version_2_0_introduced_in_SRS_3_3_0 = 32
} M_VERSION;
/* M_ACK */
typedef enum {
  M_ACK_No_acknowledgement_required = 0,
  M_ACK_Acknowledgement_required = 1
} M_ACK;
/* Q_SCALE */
typedef enum {
  Q_SCALE_10_cm_scale = 0,
  Q_SCALE_1_m_scale = 1,
  Q_SCALE_10_m_scale = 2
} Q_SCALE;
/* T_TRAIN */
typedef kcg_real T_TRAIN;

/* NID_PACKET */
typedef kcg_int NID_PACKET;

/* M_MCOUNT */
typedef kcg_int M_MCOUNT;

/* NID_C */
typedef kcg_int NID_C;

/* NID_BG */
typedef kcg_int NID_BG;

/* NID_MESSAGE */
typedef kcg_int NID_MESSAGE;

/* NID_LRBG */
typedef kcg_int NID_LRBG;

/* NID_EM */
typedef kcg_int NID_EM;

/* D_SR */
typedef kcg_int D_SR;

/* D_REF */
typedef kcg_int D_REF;

/* D_EMERGENCYSTOP */
typedef kcg_int D_EMERGENCYSTOP;

/* L_MESSAGE */
typedef kcg_int L_MESSAGE;

/* TM::nid_packet_meta */
typedef kcg_int nid_packet_meta_TM;

/* Obu_BasicTypes_Pkg::T_internal_Type */
typedef kcg_int T_internal_Type_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_int radioDevice;
  T_internal_Type_Obu_BasicTypes_Pkg receivedSystemTime;
  NID_MESSAGE nid_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_reference;
  NID_EM nid_em;
  Q_SCALE q_scale;
  D_SR d_sr;
  T_TRAIN t_sh_rqst;
  D_REF d_ref;
  Q_DIR q_dir;
  D_EMERGENCYSTOP d_emergencystop;
  M_VERSION m_version;
} struct__29593;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct__29593 Radio_TrackTrain_Header_T_Radio_Types_Pkg;

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
} struct__29611;

/* BG_Types_Pkg::TelegramHeader_T */
typedef struct__29611 TelegramHeader_T_BG_Types_Pkg;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__29627;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__29627 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__29635[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__29635 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__29638;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__29638 CompressedPackets_T_Common_Types_Pkg;

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
} struct__29643;

/* TM::BaliseTelegramHeader_int_T */
typedef struct__29643 BaliseTelegramHeader_int_T_TM;

typedef struct {
  kcg_int radioDevice;
  kcg_int receivedSystemTime;
  kcg_int nid_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
  kcg_int t_train_reference;
  kcg_int nid_em;
  kcg_int q_scale;
  kcg_int d_sr;
  kcg_int t_sh_rqst;
  kcg_int d_ref;
  kcg_int q_dir;
  kcg_int d_emergencystop;
  kcg_int m_version;
} struct__29656;

/* TM::Radio_TrackTrain_Header_T */
typedef struct__29656 _3_Radio_TrackTrain_Header_T_TM;

typedef struct {
  _3_Radio_TrackTrain_Header_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__29674;

/* TM::CompressedRadioMessage */
typedef struct__29674 CompressedRadioMessage_TM;

typedef struct {
  BaliseTelegramHeader_int_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__29679;

/* TM::CompressedBaliseMessage */
typedef struct__29679 CompressedBaliseMessage_TM;

typedef struct {
  kcg_real TrainPos_in;
  kcg_int OffsetTotal;
  kcg_real TrainPosCalibrated;
} struct__29684;

/* InfraLib::TrainPosRaw_T */
typedef struct__29684 TrainPosRaw_T_InfraLib;

typedef struct {
  TrainPosRaw_T_InfraLib TrainPosRaw;
  CompressedBaliseMessage_TM BG_Message;
} struct__29690;

/* InfraLib::TrackSectionData_T */
typedef struct__29690 TrackSectionData_T_InfraLib;

typedef struct {
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Pos;
  OrBG_TM Or_BG;
  OrLine_TM Or_Line;
} struct__29695;

/* Basics::BaliseGroupData */
typedef struct__29695 BaliseGroupData_Basics;

/* TM::BaliseGroupData */
typedef struct__29695 BaliseGroupData_TM;

typedef struct {
  BaliseTelegramHeader_int_T_TM header;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int engineering_BG_location;
  kcg_real TrainPos;
  kcg_int pig_nom_0;
  kcg_bool balise_passed;
} struct__29703;

/* InfraLib::B_data_internal_T */
typedef struct__29703 B_data_internal_T_InfraLib;

typedef struct { kcg_bool valid; kcg_int NID_PACKET; } struct__29712;

/* TM::P255_trackside_int_T */
typedef struct__29712 P255_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SRSTOP;
} struct__29717;

/* TM::P137_trackside_int_T */
typedef struct__29717 P137_trackside_int_T_TM;

typedef kcg_int array_int_3[3];

/* TM::P041_section_array_T */
typedef array_int_3 P041_section_array_T_TM;

/* TM::P021_section_array_T */
typedef array_int_3 P021_section_array_T_TM;

typedef struct {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
} struct__29728;

/* TM::P041_section_int_T */
typedef struct__29728 P041_section_int_T_TM;

typedef array_int_3 array_int_3_33[33];

/* TM::P041_OBU_sectionlist_array_T */
typedef array_int_3_33 P041_OBU_sectionlist_array_T_TM;

/* TM::P021_OBU_sectionlist_array_T */
typedef array_int_3_33 P021_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_99[99];

/* TM::P041_sections_array_flat_T */
typedef array_int_99 P041_sections_array_flat_T_TM;

/* TM::P021_sections_array_flat_T */
typedef array_int_99 P021_sections_array_flat_T_TM;

typedef P041_section_int_T_TM array__29740[33];

/* TM::P041_OBU_sectionlist_int_T */
typedef array__29740 P041_OBU_sectionlist_int_T_TM;

typedef P041_section_int_T_TM array__29743[32];

/* TM::P041_trackide_sectionlist_T */
typedef array__29743 P041_trackide_sectionlist_T_TM;

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
} struct__29746;

/* TM::P041_trackside_int_T */
typedef struct__29746 P041_trackside_int_T_TM;

typedef kcg_int array_int_2[2];

/* TM::P046_section_array_T */
typedef array_int_2 P046_section_array_T_TM;

/* TM::P058_section_array_T */
typedef array_int_2 P058_section_array_T_TM;

/* TM_baseline2::P027V1_section_array_qdiff_T */
typedef array_int_2 P027V1_section_array_qdiff_T_TM_baseline2;

typedef struct { kcg_int M_LEVELTR; kcg_int NID_NTC; } struct__29763;

/* TM::P046_section_int_T */
typedef struct__29763 P046_section_int_T_TM;

typedef P046_section_array_T_TM array_int_2_33[33];

/* TM::P046_OBU_sectionlist_array_T */
typedef array_int_2_33 P046_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_66[66];

/* TM::P046_sections_array_flat_T */
typedef array_int_66 P046_sections_array_flat_T_TM;

typedef P046_section_int_T_TM array__29774[33];

/* TM::P046_OBU_sectionlist_int_T */
typedef array__29774 P046_OBU_sectionlist_int_T_TM;

typedef P046_section_int_T_TM array__29777[32];

/* TM::P046_trackide_sectionlist_T */
typedef array__29777 P046_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int N_ITER;
  P046_trackide_sectionlist_T_TM SECTIONS;
} struct__29780;

/* TM::P046_trackside_int_T */
typedef struct__29780 P046_trackside_int_T_TM;

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
} struct__29791;

/* TM::P042_trackside_int_T */
typedef struct__29791 P042_trackside_int_T_TM;

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
} struct__29806;

/* TM_baseline2::P003V1_trackside_int_T */
typedef struct__29806 P003V1_trackside_int_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_MN;
} struct__29835;

/* TM::P045_trackside_int_T */
typedef struct__29835 P045_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
} struct__29843;

/* TM_radio_messages::M_024_T */
typedef struct__29843 M_024_T_TM_radio_messages;

/* TM_radio_messages::M_003_T */
typedef struct__29843 M_003_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_received;
} struct__29852;

/* TM_radio_messages::M_008_T */
typedef struct__29852 M_008_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  NID_EM nid_em;
  Q_SCALE q_scale;
  D_REF d_ref;
  Q_DIR q_dir;
  D_EMERGENCYSTOP d_emergencystop;
} struct__29862;

/* TM_radio_messages::M_015_T */
typedef struct__29862 M_015_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  M_VERSION m_version;
} struct__29876;

/* TM_radio_messages::M_032_T */
typedef struct__29876 M_032_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int field1;
  kcg_int field2;
  kcg_int field3;
  kcg_int field4;
  kcg_int field5;
  kcg_int field6;
  kcg_int field7;
  kcg_int field8;
} struct__29886;

/* TM_radio_messages::M_TrackTrain_Radio_T */
typedef struct__29886 M_TrackTrain_Radio_T_TM_radio_messages;

typedef struct {
  M_TrackTrain_Radio_T_TM_radio_messages message;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int trigger;
  kcg_bool message_sent;
} struct__29901;

/* InfraLib::R_data_internal_T */
typedef struct__29901 R_data_internal_T_InfraLib;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
  kcg_int nid_em;
  kcg_int q_scale;
  kcg_int d_ref;
  kcg_int q_dir;
  kcg_int d_emergencystop;
} struct__29908;

/* TM_radio_messages::M_015_int_T */
typedef struct__29908 M_015_int_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
} struct__29922;

/* TM_radio_messages::M_024_int_T */
typedef struct__29922 M_024_int_T_TM_radio_messages;

/* TM_radio_messages::M_003_int_T */
typedef struct__29922 M_003_int_T_TM_radio_messages;

typedef kcg_int array_int_4[4];

/* TM::P015_section_array_T */
typedef array_int_4 P015_section_array_T_TM;

typedef struct {
  kcg_int L_SECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
} struct__29934;

/* TM::P015_section_int_T */
typedef struct__29934 P015_section_int_T_TM;

typedef P015_section_array_T_TM array_int_4_32[32];

/* TM::P015_OBU_sectionlist_array_T */
typedef array_int_4_32 P015_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_128[128];

/* TM::P015_sections_array_flat_T */
typedef array_int_128 P015_sections_array_flat_T_TM;

typedef P015_section_int_T_TM array__29947[32];

/* TM::P015_trackide_sectionlist_T */
typedef array__29947 P015_trackide_sectionlist_T_TM;

/* TM::P015_OBU_sectionlist_int_T */
typedef array__29947 P015_OBU_sectionlist_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int V_LOA;
  kcg_int T_LOA;
  kcg_int N_ITER;
  P015_trackide_sectionlist_T_TM SECTIONS;
  kcg_int L_ENDSECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
  kcg_int Q_ENDTIMER;
  kcg_int T_ENDTIMER;
  kcg_int D_ENDTIMERSTARTLOC;
  kcg_int Q_DANGERPOINT;
  kcg_int D_DP;
  kcg_int V_RELEASEDP;
  kcg_int Q_OVERLAP;
  kcg_int D_STARTOL;
  kcg_int T_OL;
  kcg_int D_OL;
  kcg_int V_RELEASEOL;
} struct__29950;

/* TM::P015_trackside_int_T */
typedef struct__29950 P015_trackside_int_T_TM;

typedef kcg_int array_int_7[7];

/* TM::P005_section_array_T */
typedef array_int_7 P005_section_array_T_TM;

typedef struct {
  kcg_int D_LINK;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_LINKORIENTATION;
  kcg_int Q_LINKREACTION;
  kcg_int Q_LOCACC;
} struct__29979;

/* TM::P005_section_int_T */
typedef struct__29979 P005_section_int_T_TM;

typedef P005_section_array_T_TM array_int_7_33[33];

/* TM::P005_OBU_sectionlist_array_T */
typedef array_int_7_33 P005_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_231[231];

/* TM::P005_sections_array_flat_T */
typedef array_int_231 P005_sections_array_flat_T_TM;

typedef P005_section_int_T_TM array__29995[33];

/* TM::P005_OBU_sectionlist_int_T */
typedef array__29995 P005_OBU_sectionlist_int_T_TM;

typedef P005_section_int_T_TM array__29998[32];

/* TM::P005_trackide_sectionlist_T */
typedef array__29998 P005_trackide_sectionlist_T_TM;

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
} struct__30001;

/* TM::P005_trackside_int_T */
typedef struct__30001 P005_trackside_int_T_TM;

typedef kcg_int array_int_64[64];

/* TM::P058_sections_array_flat_T */
typedef array_int_64 P058_sections_array_flat_T_TM;

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef struct { kcg_int NC_DIFF; kcg_int V_DIFF; } struct__30021;

/* TM_baseline2::P027V1_section_int_qdiff_T */
typedef struct__30021 P027V1_section_int_qdiff_T_TM_baseline2;

typedef P027V1_section_int_qdiff_T_TM_baseline2 array__30026[32];

/* TM_baseline2::P027V1_trackside_qdifflist_T */
typedef array__30026 P027V1_trackside_qdifflist_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_int_qdiff_T */
typedef array__30026 P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2;

typedef struct {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
} struct__30029;

/* TM_baseline2::P027V1_section_int_T */
typedef struct__30029 P027V1_section_int_T_TM_baseline2;

typedef array_int_2 array_int_2_32[32];

/* TM::P058_OBU_sectionlist_array_T */
typedef array_int_2_32 P058_OBU_sectionlist_array_T_TM;

/* TM_baseline2::P027V1_OBU_sectionlist_array_qdiff_T */
typedef array_int_2_32 _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__30040[33];

/* TM_baseline2::P027V1_OBU_sectionlist_int_T */
typedef array__30040 _2_P027V1_OBU_sectionlist_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__30043[32];

/* TM_baseline2::P027V1_trackside_sectionlist_T */
typedef array__30043 P027V1_trackside_sectionlist_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER_n;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
  kcg_int N_ITER_k;
  P027V1_trackside_sectionlist_T_TM_baseline2 SECTIONS_SSP;
} struct__30046;

/* TM_baseline2::P027V1_trackside_int_T */
typedef struct__30046 P027V1_trackside_int_T_TM_baseline2;

typedef struct {
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
} struct__30061;

/* TM::P021_section_int_T */
typedef struct__30061 P021_section_int_T_TM;

typedef P021_section_int_T_TM array__30067[33];

/* TM::P021_OBU_sectionlist_int_T */
typedef array__30067 P021_OBU_sectionlist_int_T_TM;

typedef P021_section_int_T_TM array__30070[32];

/* TM::P021_trackide_sectionlist_T */
typedef array__30070 P021_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
  kcg_int N_ITER;
  P021_trackide_sectionlist_T_TM SECTIONS;
} struct__30073;

/* TM::P021_trackside_int_T */
typedef struct__30073 P021_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int NID_TSR;
  kcg_int D_TSR;
  kcg_int L_TSR;
  kcg_int Q_FRONT;
  kcg_int V_TSR;
} struct__30086;

/* TM::P065_trackside_int_T */
typedef struct__30086 P065_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int T_MAR;
  kcg_int T_TIMEOUTRQST;
  kcg_int T_CYCRQST;
} struct__30099;

/* TM::P057_trackside_int_T */
typedef struct__30099 P057_trackside_int_T_TM;

typedef struct { kcg_int D_LOC; kcg_int Q_LGTLOC; } struct__30109;

/* TM::P058_section_int_T */
typedef struct__30109 P058_section_int_T_TM;

typedef P058_section_int_T_TM array__30114[32];

/* TM::P058_trackide_sectionlist_T */
typedef array__30114 P058_trackide_sectionlist_T_TM;

/* TM::P058_OBU_sectionlist_int_T */
typedef array__30114 P058_OBU_sectionlist_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int T_CYCLOC;
  kcg_int D_CYCLOC;
  kcg_int M_LOC;
  kcg_int N_ITER;
  P058_trackide_sectionlist_T_TM SECTIONS;
} struct__30117;

/* TM::P058_trackside_int_T */
typedef struct__30117 P058_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
  kcg_int t_train_received;
} struct__30130;

/* TM_radio_messages::M_008_int_T */
typedef struct__30130 M_008_int_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
  kcg_int m_version;
} struct__30140;

/* TM_radio_messages::M_032_int_T */
typedef struct__30140 M_032_int_T_TM_radio_messages;

typedef CompressedPacketData_T_Common_Types_Pkg array_int_500_500[500];

typedef kcg_int array_int_499[499];

typedef kcg_int array_int_1[1];

typedef kcg_int array_int_496[496];

typedef kcg_int array_int_492[492];

typedef kcg_int array_int_8[8];

typedef array_int_2_33 array_int_2_33_99[99];

typedef kcg_int array_int_430[430];

typedef kcg_int array_int_70[70];

typedef P046_section_int_T_TM array__30177[1];

typedef kcg_int array_int_444[444];

typedef kcg_int array_int_6[6];

typedef kcg_int array_int_24[24];

typedef kcg_int array_int_56[56];

typedef kcg_int array_int_18[18];

typedef array_int_3_33 array_int_3_33_99[99];

typedef kcg_int array_int_395[395];

typedef kcg_int array_int_5[5];

typedef kcg_int array_int_105[105];

typedef P041_section_int_T_TM array__30207[1];

typedef array_int_2_32 array_int_2_32_64[64];

typedef kcg_int array_int_428[428];

typedef kcg_int array_int_72[72];

typedef kcg_int array_int_494[494];

typedef array_int_3_33 array_int_3_33_231[231];

typedef kcg_int array_int_396[396];

typedef kcg_int array_int_104[104];

typedef P021_section_int_T_TM array__30231[1];

typedef P027V1_section_int_T_TM_baseline2 array__30234[1];

typedef array_int_2_32 array_int_2_32_32[32];

typedef kcg_int array_int_432[432];

typedef kcg_int array_int_68[68];

typedef kcg_int array_int_33[33];

typedef array_int_7_33 array_int_7_33_231[231];

typedef kcg_int array_int_264[264];

typedef kcg_int array_int_236[236];

typedef P005_section_int_T_TM array__30258[1];

typedef kcg_int array_int_491[491];

typedef kcg_int array_int_9[9];

typedef array_int_4_32 array_int_4_32_128[128];

typedef kcg_int array_int_351[351];

typedef kcg_int array_int_20[20];

typedef kcg_int array_int_149[149];

typedef kcg_int array_int_14[14];

typedef kcg_int array_int_21[21];

#ifndef kcg_copy_struct__29593
#define kcg_copy_struct__29593(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29593)))
#endif /* kcg_copy_struct__29593 */

#ifndef kcg_copy_struct__29611
#define kcg_copy_struct__29611(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29611)))
#endif /* kcg_copy_struct__29611 */

#ifndef kcg_copy_struct__29627
#define kcg_copy_struct__29627(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29627)))
#endif /* kcg_copy_struct__29627 */

#ifndef kcg_copy_struct__29638
#define kcg_copy_struct__29638(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29638)))
#endif /* kcg_copy_struct__29638 */

#ifndef kcg_copy_struct__29643
#define kcg_copy_struct__29643(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29643)))
#endif /* kcg_copy_struct__29643 */

#ifndef kcg_copy_struct__29656
#define kcg_copy_struct__29656(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29656)))
#endif /* kcg_copy_struct__29656 */

#ifndef kcg_copy_struct__29674
#define kcg_copy_struct__29674(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29674)))
#endif /* kcg_copy_struct__29674 */

#ifndef kcg_copy_struct__29679
#define kcg_copy_struct__29679(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29679)))
#endif /* kcg_copy_struct__29679 */

#ifndef kcg_copy_struct__29684
#define kcg_copy_struct__29684(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29684)))
#endif /* kcg_copy_struct__29684 */

#ifndef kcg_copy_struct__29690
#define kcg_copy_struct__29690(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29690)))
#endif /* kcg_copy_struct__29690 */

#ifndef kcg_copy_struct__29695
#define kcg_copy_struct__29695(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29695)))
#endif /* kcg_copy_struct__29695 */

#ifndef kcg_copy_struct__29703
#define kcg_copy_struct__29703(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29703)))
#endif /* kcg_copy_struct__29703 */

#ifndef kcg_copy_struct__29712
#define kcg_copy_struct__29712(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29712)))
#endif /* kcg_copy_struct__29712 */

#ifndef kcg_copy_struct__29717
#define kcg_copy_struct__29717(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29717)))
#endif /* kcg_copy_struct__29717 */

#ifndef kcg_copy_struct__29728
#define kcg_copy_struct__29728(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29728)))
#endif /* kcg_copy_struct__29728 */

#ifndef kcg_copy_struct__29746
#define kcg_copy_struct__29746(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29746)))
#endif /* kcg_copy_struct__29746 */

#ifndef kcg_copy_struct__29763
#define kcg_copy_struct__29763(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29763)))
#endif /* kcg_copy_struct__29763 */

#ifndef kcg_copy_struct__29780
#define kcg_copy_struct__29780(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29780)))
#endif /* kcg_copy_struct__29780 */

#ifndef kcg_copy_struct__29791
#define kcg_copy_struct__29791(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29791)))
#endif /* kcg_copy_struct__29791 */

#ifndef kcg_copy_struct__29806
#define kcg_copy_struct__29806(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29806)))
#endif /* kcg_copy_struct__29806 */

#ifndef kcg_copy_struct__29835
#define kcg_copy_struct__29835(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29835)))
#endif /* kcg_copy_struct__29835 */

#ifndef kcg_copy_struct__29843
#define kcg_copy_struct__29843(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29843)))
#endif /* kcg_copy_struct__29843 */

#ifndef kcg_copy_struct__29852
#define kcg_copy_struct__29852(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29852)))
#endif /* kcg_copy_struct__29852 */

#ifndef kcg_copy_struct__29862
#define kcg_copy_struct__29862(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29862)))
#endif /* kcg_copy_struct__29862 */

#ifndef kcg_copy_struct__29876
#define kcg_copy_struct__29876(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29876)))
#endif /* kcg_copy_struct__29876 */

#ifndef kcg_copy_struct__29886
#define kcg_copy_struct__29886(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29886)))
#endif /* kcg_copy_struct__29886 */

#ifndef kcg_copy_struct__29901
#define kcg_copy_struct__29901(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29901)))
#endif /* kcg_copy_struct__29901 */

#ifndef kcg_copy_struct__29908
#define kcg_copy_struct__29908(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29908)))
#endif /* kcg_copy_struct__29908 */

#ifndef kcg_copy_struct__29922
#define kcg_copy_struct__29922(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29922)))
#endif /* kcg_copy_struct__29922 */

#ifndef kcg_copy_struct__29934
#define kcg_copy_struct__29934(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29934)))
#endif /* kcg_copy_struct__29934 */

#ifndef kcg_copy_struct__29950
#define kcg_copy_struct__29950(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29950)))
#endif /* kcg_copy_struct__29950 */

#ifndef kcg_copy_struct__29979
#define kcg_copy_struct__29979(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__29979)))
#endif /* kcg_copy_struct__29979 */

#ifndef kcg_copy_struct__30001
#define kcg_copy_struct__30001(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__30001)))
#endif /* kcg_copy_struct__30001 */

#ifndef kcg_copy_struct__30021
#define kcg_copy_struct__30021(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__30021)))
#endif /* kcg_copy_struct__30021 */

#ifndef kcg_copy_struct__30029
#define kcg_copy_struct__30029(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__30029)))
#endif /* kcg_copy_struct__30029 */

#ifndef kcg_copy_struct__30046
#define kcg_copy_struct__30046(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__30046)))
#endif /* kcg_copy_struct__30046 */

#ifndef kcg_copy_struct__30061
#define kcg_copy_struct__30061(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__30061)))
#endif /* kcg_copy_struct__30061 */

#ifndef kcg_copy_struct__30073
#define kcg_copy_struct__30073(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__30073)))
#endif /* kcg_copy_struct__30073 */

#ifndef kcg_copy_struct__30086
#define kcg_copy_struct__30086(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__30086)))
#endif /* kcg_copy_struct__30086 */

#ifndef kcg_copy_struct__30099
#define kcg_copy_struct__30099(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__30099)))
#endif /* kcg_copy_struct__30099 */

#ifndef kcg_copy_struct__30109
#define kcg_copy_struct__30109(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__30109)))
#endif /* kcg_copy_struct__30109 */

#ifndef kcg_copy_struct__30117
#define kcg_copy_struct__30117(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__30117)))
#endif /* kcg_copy_struct__30117 */

#ifndef kcg_copy_struct__30130
#define kcg_copy_struct__30130(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__30130)))
#endif /* kcg_copy_struct__30130 */

#ifndef kcg_copy_struct__30140
#define kcg_copy_struct__30140(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__30140)))
#endif /* kcg_copy_struct__30140 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__29635
#define kcg_copy_array__29635(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__29635)))
#endif /* kcg_copy_array__29635 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_int_3_33
#define kcg_copy_array_int_3_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33)))
#endif /* kcg_copy_array_int_3_33 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__29740
#define kcg_copy_array__29740(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__29740)))
#endif /* kcg_copy_array__29740 */

#ifndef kcg_copy_array__29743
#define kcg_copy_array__29743(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__29743)))
#endif /* kcg_copy_array__29743 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array_int_2_33
#define kcg_copy_array_int_2_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_33)))
#endif /* kcg_copy_array_int_2_33 */

#ifndef kcg_copy_array_int_66
#define kcg_copy_array_int_66(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_66)))
#endif /* kcg_copy_array_int_66 */

#ifndef kcg_copy_array__29774
#define kcg_copy_array__29774(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__29774)))
#endif /* kcg_copy_array__29774 */

#ifndef kcg_copy_array__29777
#define kcg_copy_array__29777(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__29777)))
#endif /* kcg_copy_array__29777 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_int_4_32
#define kcg_copy_array_int_4_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4_32)))
#endif /* kcg_copy_array_int_4_32 */

#ifndef kcg_copy_array_int_128
#define kcg_copy_array_int_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128)))
#endif /* kcg_copy_array_int_128 */

#ifndef kcg_copy_array__29947
#define kcg_copy_array__29947(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__29947)))
#endif /* kcg_copy_array__29947 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array_int_7_33
#define kcg_copy_array_int_7_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33)))
#endif /* kcg_copy_array_int_7_33 */

#ifndef kcg_copy_array_int_231
#define kcg_copy_array_int_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231)))
#endif /* kcg_copy_array_int_231 */

#ifndef kcg_copy_array__29995
#define kcg_copy_array__29995(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__29995)))
#endif /* kcg_copy_array__29995 */

#ifndef kcg_copy_array__29998
#define kcg_copy_array__29998(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__29998)))
#endif /* kcg_copy_array__29998 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array__30026
#define kcg_copy_array__30026(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__30026)))
#endif /* kcg_copy_array__30026 */

#ifndef kcg_copy_array_int_2_32
#define kcg_copy_array_int_2_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32)))
#endif /* kcg_copy_array_int_2_32 */

#ifndef kcg_copy_array__30040
#define kcg_copy_array__30040(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__30040)))
#endif /* kcg_copy_array__30040 */

#ifndef kcg_copy_array__30043
#define kcg_copy_array__30043(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__30043)))
#endif /* kcg_copy_array__30043 */

#ifndef kcg_copy_array__30067
#define kcg_copy_array__30067(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__30067)))
#endif /* kcg_copy_array__30067 */

#ifndef kcg_copy_array__30070
#define kcg_copy_array__30070(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__30070)))
#endif /* kcg_copy_array__30070 */

#ifndef kcg_copy_array__30114
#define kcg_copy_array__30114(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__30114)))
#endif /* kcg_copy_array__30114 */

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

#ifndef kcg_copy_array__30177
#define kcg_copy_array__30177(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__30177)))
#endif /* kcg_copy_array__30177 */

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

#ifndef kcg_copy_array__30207
#define kcg_copy_array__30207(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__30207)))
#endif /* kcg_copy_array__30207 */

#ifndef kcg_copy_array_int_2_32_64
#define kcg_copy_array_int_2_32_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32_64)))
#endif /* kcg_copy_array_int_2_32_64 */

#ifndef kcg_copy_array_int_428
#define kcg_copy_array_int_428(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_428)))
#endif /* kcg_copy_array_int_428 */

#ifndef kcg_copy_array_int_72
#define kcg_copy_array_int_72(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_72)))
#endif /* kcg_copy_array_int_72 */

#ifndef kcg_copy_array_int_494
#define kcg_copy_array_int_494(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_494)))
#endif /* kcg_copy_array_int_494 */

#ifndef kcg_copy_array_int_3_33_231
#define kcg_copy_array_int_3_33_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33_231)))
#endif /* kcg_copy_array_int_3_33_231 */

#ifndef kcg_copy_array_int_396
#define kcg_copy_array_int_396(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_396)))
#endif /* kcg_copy_array_int_396 */

#ifndef kcg_copy_array_int_104
#define kcg_copy_array_int_104(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_104)))
#endif /* kcg_copy_array_int_104 */

#ifndef kcg_copy_array__30231
#define kcg_copy_array__30231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__30231)))
#endif /* kcg_copy_array__30231 */

#ifndef kcg_copy_array__30234
#define kcg_copy_array__30234(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__30234)))
#endif /* kcg_copy_array__30234 */

#ifndef kcg_copy_array_int_2_32_32
#define kcg_copy_array_int_2_32_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32_32)))
#endif /* kcg_copy_array_int_2_32_32 */

#ifndef kcg_copy_array_int_432
#define kcg_copy_array_int_432(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_432)))
#endif /* kcg_copy_array_int_432 */

#ifndef kcg_copy_array_int_68
#define kcg_copy_array_int_68(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_68)))
#endif /* kcg_copy_array_int_68 */

#ifndef kcg_copy_array_int_33
#define kcg_copy_array_int_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33)))
#endif /* kcg_copy_array_int_33 */

#ifndef kcg_copy_array_int_7_33_231
#define kcg_copy_array_int_7_33_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33_231)))
#endif /* kcg_copy_array_int_7_33_231 */

#ifndef kcg_copy_array_int_264
#define kcg_copy_array_int_264(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_264)))
#endif /* kcg_copy_array_int_264 */

#ifndef kcg_copy_array_int_236
#define kcg_copy_array_int_236(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_236)))
#endif /* kcg_copy_array_int_236 */

#ifndef kcg_copy_array__30258
#define kcg_copy_array__30258(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__30258)))
#endif /* kcg_copy_array__30258 */

#ifndef kcg_copy_array_int_491
#define kcg_copy_array_int_491(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_491)))
#endif /* kcg_copy_array_int_491 */

#ifndef kcg_copy_array_int_9
#define kcg_copy_array_int_9(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_9)))
#endif /* kcg_copy_array_int_9 */

#ifndef kcg_copy_array_int_4_32_128
#define kcg_copy_array_int_4_32_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4_32_128)))
#endif /* kcg_copy_array_int_4_32_128 */

#ifndef kcg_copy_array_int_351
#define kcg_copy_array_int_351(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_351)))
#endif /* kcg_copy_array_int_351 */

#ifndef kcg_copy_array_int_20
#define kcg_copy_array_int_20(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_20)))
#endif /* kcg_copy_array_int_20 */

#ifndef kcg_copy_array_int_149
#define kcg_copy_array_int_149(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_149)))
#endif /* kcg_copy_array_int_149 */

#ifndef kcg_copy_array_int_14
#define kcg_copy_array_int_14(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_14)))
#endif /* kcg_copy_array_int_14 */

#ifndef kcg_copy_array_int_21
#define kcg_copy_array_int_21(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_21)))
#endif /* kcg_copy_array_int_21 */

#ifndef kcg_comp_struct__29593
extern kcg_bool kcg_comp_struct__29593(
  struct__29593 *kcg_c1,
  struct__29593 *kcg_c2);
#endif /* kcg_comp_struct__29593 */

#ifndef kcg_comp_struct__29611
extern kcg_bool kcg_comp_struct__29611(
  struct__29611 *kcg_c1,
  struct__29611 *kcg_c2);
#endif /* kcg_comp_struct__29611 */

#ifndef kcg_comp_struct__29627
extern kcg_bool kcg_comp_struct__29627(
  struct__29627 *kcg_c1,
  struct__29627 *kcg_c2);
#endif /* kcg_comp_struct__29627 */

#ifndef kcg_comp_struct__29638
extern kcg_bool kcg_comp_struct__29638(
  struct__29638 *kcg_c1,
  struct__29638 *kcg_c2);
#endif /* kcg_comp_struct__29638 */

#ifndef kcg_comp_struct__29643
extern kcg_bool kcg_comp_struct__29643(
  struct__29643 *kcg_c1,
  struct__29643 *kcg_c2);
#endif /* kcg_comp_struct__29643 */

#ifndef kcg_comp_struct__29656
extern kcg_bool kcg_comp_struct__29656(
  struct__29656 *kcg_c1,
  struct__29656 *kcg_c2);
#endif /* kcg_comp_struct__29656 */

#ifndef kcg_comp_struct__29674
extern kcg_bool kcg_comp_struct__29674(
  struct__29674 *kcg_c1,
  struct__29674 *kcg_c2);
#endif /* kcg_comp_struct__29674 */

#ifndef kcg_comp_struct__29679
extern kcg_bool kcg_comp_struct__29679(
  struct__29679 *kcg_c1,
  struct__29679 *kcg_c2);
#endif /* kcg_comp_struct__29679 */

#ifndef kcg_comp_struct__29684
extern kcg_bool kcg_comp_struct__29684(
  struct__29684 *kcg_c1,
  struct__29684 *kcg_c2);
#endif /* kcg_comp_struct__29684 */

#ifndef kcg_comp_struct__29690
extern kcg_bool kcg_comp_struct__29690(
  struct__29690 *kcg_c1,
  struct__29690 *kcg_c2);
#endif /* kcg_comp_struct__29690 */

#ifndef kcg_comp_struct__29695
extern kcg_bool kcg_comp_struct__29695(
  struct__29695 *kcg_c1,
  struct__29695 *kcg_c2);
#endif /* kcg_comp_struct__29695 */

#ifndef kcg_comp_struct__29703
extern kcg_bool kcg_comp_struct__29703(
  struct__29703 *kcg_c1,
  struct__29703 *kcg_c2);
#endif /* kcg_comp_struct__29703 */

#ifndef kcg_comp_struct__29712
extern kcg_bool kcg_comp_struct__29712(
  struct__29712 *kcg_c1,
  struct__29712 *kcg_c2);
#endif /* kcg_comp_struct__29712 */

#ifndef kcg_comp_struct__29717
extern kcg_bool kcg_comp_struct__29717(
  struct__29717 *kcg_c1,
  struct__29717 *kcg_c2);
#endif /* kcg_comp_struct__29717 */

#ifndef kcg_comp_struct__29728
extern kcg_bool kcg_comp_struct__29728(
  struct__29728 *kcg_c1,
  struct__29728 *kcg_c2);
#endif /* kcg_comp_struct__29728 */

#ifndef kcg_comp_struct__29746
extern kcg_bool kcg_comp_struct__29746(
  struct__29746 *kcg_c1,
  struct__29746 *kcg_c2);
#endif /* kcg_comp_struct__29746 */

#ifndef kcg_comp_struct__29763
extern kcg_bool kcg_comp_struct__29763(
  struct__29763 *kcg_c1,
  struct__29763 *kcg_c2);
#endif /* kcg_comp_struct__29763 */

#ifndef kcg_comp_struct__29780
extern kcg_bool kcg_comp_struct__29780(
  struct__29780 *kcg_c1,
  struct__29780 *kcg_c2);
#endif /* kcg_comp_struct__29780 */

#ifndef kcg_comp_struct__29791
extern kcg_bool kcg_comp_struct__29791(
  struct__29791 *kcg_c1,
  struct__29791 *kcg_c2);
#endif /* kcg_comp_struct__29791 */

#ifndef kcg_comp_struct__29806
extern kcg_bool kcg_comp_struct__29806(
  struct__29806 *kcg_c1,
  struct__29806 *kcg_c2);
#endif /* kcg_comp_struct__29806 */

#ifndef kcg_comp_struct__29835
extern kcg_bool kcg_comp_struct__29835(
  struct__29835 *kcg_c1,
  struct__29835 *kcg_c2);
#endif /* kcg_comp_struct__29835 */

#ifndef kcg_comp_struct__29843
extern kcg_bool kcg_comp_struct__29843(
  struct__29843 *kcg_c1,
  struct__29843 *kcg_c2);
#endif /* kcg_comp_struct__29843 */

#ifndef kcg_comp_struct__29852
extern kcg_bool kcg_comp_struct__29852(
  struct__29852 *kcg_c1,
  struct__29852 *kcg_c2);
#endif /* kcg_comp_struct__29852 */

#ifndef kcg_comp_struct__29862
extern kcg_bool kcg_comp_struct__29862(
  struct__29862 *kcg_c1,
  struct__29862 *kcg_c2);
#endif /* kcg_comp_struct__29862 */

#ifndef kcg_comp_struct__29876
extern kcg_bool kcg_comp_struct__29876(
  struct__29876 *kcg_c1,
  struct__29876 *kcg_c2);
#endif /* kcg_comp_struct__29876 */

#ifndef kcg_comp_struct__29886
extern kcg_bool kcg_comp_struct__29886(
  struct__29886 *kcg_c1,
  struct__29886 *kcg_c2);
#endif /* kcg_comp_struct__29886 */

#ifndef kcg_comp_struct__29901
extern kcg_bool kcg_comp_struct__29901(
  struct__29901 *kcg_c1,
  struct__29901 *kcg_c2);
#endif /* kcg_comp_struct__29901 */

#ifndef kcg_comp_struct__29908
extern kcg_bool kcg_comp_struct__29908(
  struct__29908 *kcg_c1,
  struct__29908 *kcg_c2);
#endif /* kcg_comp_struct__29908 */

#ifndef kcg_comp_struct__29922
extern kcg_bool kcg_comp_struct__29922(
  struct__29922 *kcg_c1,
  struct__29922 *kcg_c2);
#endif /* kcg_comp_struct__29922 */

#ifndef kcg_comp_struct__29934
extern kcg_bool kcg_comp_struct__29934(
  struct__29934 *kcg_c1,
  struct__29934 *kcg_c2);
#endif /* kcg_comp_struct__29934 */

#ifndef kcg_comp_struct__29950
extern kcg_bool kcg_comp_struct__29950(
  struct__29950 *kcg_c1,
  struct__29950 *kcg_c2);
#endif /* kcg_comp_struct__29950 */

#ifndef kcg_comp_struct__29979
extern kcg_bool kcg_comp_struct__29979(
  struct__29979 *kcg_c1,
  struct__29979 *kcg_c2);
#endif /* kcg_comp_struct__29979 */

#ifndef kcg_comp_struct__30001
extern kcg_bool kcg_comp_struct__30001(
  struct__30001 *kcg_c1,
  struct__30001 *kcg_c2);
#endif /* kcg_comp_struct__30001 */

#ifndef kcg_comp_struct__30021
extern kcg_bool kcg_comp_struct__30021(
  struct__30021 *kcg_c1,
  struct__30021 *kcg_c2);
#endif /* kcg_comp_struct__30021 */

#ifndef kcg_comp_struct__30029
extern kcg_bool kcg_comp_struct__30029(
  struct__30029 *kcg_c1,
  struct__30029 *kcg_c2);
#endif /* kcg_comp_struct__30029 */

#ifndef kcg_comp_struct__30046
extern kcg_bool kcg_comp_struct__30046(
  struct__30046 *kcg_c1,
  struct__30046 *kcg_c2);
#endif /* kcg_comp_struct__30046 */

#ifndef kcg_comp_struct__30061
extern kcg_bool kcg_comp_struct__30061(
  struct__30061 *kcg_c1,
  struct__30061 *kcg_c2);
#endif /* kcg_comp_struct__30061 */

#ifndef kcg_comp_struct__30073
extern kcg_bool kcg_comp_struct__30073(
  struct__30073 *kcg_c1,
  struct__30073 *kcg_c2);
#endif /* kcg_comp_struct__30073 */

#ifndef kcg_comp_struct__30086
extern kcg_bool kcg_comp_struct__30086(
  struct__30086 *kcg_c1,
  struct__30086 *kcg_c2);
#endif /* kcg_comp_struct__30086 */

#ifndef kcg_comp_struct__30099
extern kcg_bool kcg_comp_struct__30099(
  struct__30099 *kcg_c1,
  struct__30099 *kcg_c2);
#endif /* kcg_comp_struct__30099 */

#ifndef kcg_comp_struct__30109
extern kcg_bool kcg_comp_struct__30109(
  struct__30109 *kcg_c1,
  struct__30109 *kcg_c2);
#endif /* kcg_comp_struct__30109 */

#ifndef kcg_comp_struct__30117
extern kcg_bool kcg_comp_struct__30117(
  struct__30117 *kcg_c1,
  struct__30117 *kcg_c2);
#endif /* kcg_comp_struct__30117 */

#ifndef kcg_comp_struct__30130
extern kcg_bool kcg_comp_struct__30130(
  struct__30130 *kcg_c1,
  struct__30130 *kcg_c2);
#endif /* kcg_comp_struct__30130 */

#ifndef kcg_comp_struct__30140
extern kcg_bool kcg_comp_struct__30140(
  struct__30140 *kcg_c1,
  struct__30140 *kcg_c2);
#endif /* kcg_comp_struct__30140 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__29635
extern kcg_bool kcg_comp_array__29635(
  array__29635 *kcg_c1,
  array__29635 *kcg_c2);
#endif /* kcg_comp_array__29635 */

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

#ifndef kcg_comp_array__29740
extern kcg_bool kcg_comp_array__29740(
  array__29740 *kcg_c1,
  array__29740 *kcg_c2);
#endif /* kcg_comp_array__29740 */

#ifndef kcg_comp_array__29743
extern kcg_bool kcg_comp_array__29743(
  array__29743 *kcg_c1,
  array__29743 *kcg_c2);
#endif /* kcg_comp_array__29743 */

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

#ifndef kcg_comp_array__29774
extern kcg_bool kcg_comp_array__29774(
  array__29774 *kcg_c1,
  array__29774 *kcg_c2);
#endif /* kcg_comp_array__29774 */

#ifndef kcg_comp_array__29777
extern kcg_bool kcg_comp_array__29777(
  array__29777 *kcg_c1,
  array__29777 *kcg_c2);
#endif /* kcg_comp_array__29777 */

#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */

#ifndef kcg_comp_array_int_4
extern kcg_bool kcg_comp_array_int_4(array_int_4 *kcg_c1, array_int_4 *kcg_c2);
#endif /* kcg_comp_array_int_4 */

#ifndef kcg_comp_array_int_4_32
extern kcg_bool kcg_comp_array_int_4_32(
  array_int_4_32 *kcg_c1,
  array_int_4_32 *kcg_c2);
#endif /* kcg_comp_array_int_4_32 */

#ifndef kcg_comp_array_int_128
extern kcg_bool kcg_comp_array_int_128(
  array_int_128 *kcg_c1,
  array_int_128 *kcg_c2);
#endif /* kcg_comp_array_int_128 */

#ifndef kcg_comp_array__29947
extern kcg_bool kcg_comp_array__29947(
  array__29947 *kcg_c1,
  array__29947 *kcg_c2);
#endif /* kcg_comp_array__29947 */

#ifndef kcg_comp_array_int_7
extern kcg_bool kcg_comp_array_int_7(array_int_7 *kcg_c1, array_int_7 *kcg_c2);
#endif /* kcg_comp_array_int_7 */

#ifndef kcg_comp_array_int_7_33
extern kcg_bool kcg_comp_array_int_7_33(
  array_int_7_33 *kcg_c1,
  array_int_7_33 *kcg_c2);
#endif /* kcg_comp_array_int_7_33 */

#ifndef kcg_comp_array_int_231
extern kcg_bool kcg_comp_array_int_231(
  array_int_231 *kcg_c1,
  array_int_231 *kcg_c2);
#endif /* kcg_comp_array_int_231 */

#ifndef kcg_comp_array__29995
extern kcg_bool kcg_comp_array__29995(
  array__29995 *kcg_c1,
  array__29995 *kcg_c2);
#endif /* kcg_comp_array__29995 */

#ifndef kcg_comp_array__29998
extern kcg_bool kcg_comp_array__29998(
  array__29998 *kcg_c1,
  array__29998 *kcg_c2);
#endif /* kcg_comp_array__29998 */

#ifndef kcg_comp_array_int_64
extern kcg_bool kcg_comp_array_int_64(
  array_int_64 *kcg_c1,
  array_int_64 *kcg_c2);
#endif /* kcg_comp_array_int_64 */

#ifndef kcg_comp_array__30026
extern kcg_bool kcg_comp_array__30026(
  array__30026 *kcg_c1,
  array__30026 *kcg_c2);
#endif /* kcg_comp_array__30026 */

#ifndef kcg_comp_array_int_2_32
extern kcg_bool kcg_comp_array_int_2_32(
  array_int_2_32 *kcg_c1,
  array_int_2_32 *kcg_c2);
#endif /* kcg_comp_array_int_2_32 */

#ifndef kcg_comp_array__30040
extern kcg_bool kcg_comp_array__30040(
  array__30040 *kcg_c1,
  array__30040 *kcg_c2);
#endif /* kcg_comp_array__30040 */

#ifndef kcg_comp_array__30043
extern kcg_bool kcg_comp_array__30043(
  array__30043 *kcg_c1,
  array__30043 *kcg_c2);
#endif /* kcg_comp_array__30043 */

#ifndef kcg_comp_array__30067
extern kcg_bool kcg_comp_array__30067(
  array__30067 *kcg_c1,
  array__30067 *kcg_c2);
#endif /* kcg_comp_array__30067 */

#ifndef kcg_comp_array__30070
extern kcg_bool kcg_comp_array__30070(
  array__30070 *kcg_c1,
  array__30070 *kcg_c2);
#endif /* kcg_comp_array__30070 */

#ifndef kcg_comp_array__30114
extern kcg_bool kcg_comp_array__30114(
  array__30114 *kcg_c1,
  array__30114 *kcg_c2);
#endif /* kcg_comp_array__30114 */

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

#ifndef kcg_comp_array__30177
extern kcg_bool kcg_comp_array__30177(
  array__30177 *kcg_c1,
  array__30177 *kcg_c2);
#endif /* kcg_comp_array__30177 */

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

#ifndef kcg_comp_array__30207
extern kcg_bool kcg_comp_array__30207(
  array__30207 *kcg_c1,
  array__30207 *kcg_c2);
#endif /* kcg_comp_array__30207 */

#ifndef kcg_comp_array_int_2_32_64
extern kcg_bool kcg_comp_array_int_2_32_64(
  array_int_2_32_64 *kcg_c1,
  array_int_2_32_64 *kcg_c2);
#endif /* kcg_comp_array_int_2_32_64 */

#ifndef kcg_comp_array_int_428
extern kcg_bool kcg_comp_array_int_428(
  array_int_428 *kcg_c1,
  array_int_428 *kcg_c2);
#endif /* kcg_comp_array_int_428 */

#ifndef kcg_comp_array_int_72
extern kcg_bool kcg_comp_array_int_72(
  array_int_72 *kcg_c1,
  array_int_72 *kcg_c2);
#endif /* kcg_comp_array_int_72 */

#ifndef kcg_comp_array_int_494
extern kcg_bool kcg_comp_array_int_494(
  array_int_494 *kcg_c1,
  array_int_494 *kcg_c2);
#endif /* kcg_comp_array_int_494 */

#ifndef kcg_comp_array_int_3_33_231
extern kcg_bool kcg_comp_array_int_3_33_231(
  array_int_3_33_231 *kcg_c1,
  array_int_3_33_231 *kcg_c2);
#endif /* kcg_comp_array_int_3_33_231 */

#ifndef kcg_comp_array_int_396
extern kcg_bool kcg_comp_array_int_396(
  array_int_396 *kcg_c1,
  array_int_396 *kcg_c2);
#endif /* kcg_comp_array_int_396 */

#ifndef kcg_comp_array_int_104
extern kcg_bool kcg_comp_array_int_104(
  array_int_104 *kcg_c1,
  array_int_104 *kcg_c2);
#endif /* kcg_comp_array_int_104 */

#ifndef kcg_comp_array__30231
extern kcg_bool kcg_comp_array__30231(
  array__30231 *kcg_c1,
  array__30231 *kcg_c2);
#endif /* kcg_comp_array__30231 */

#ifndef kcg_comp_array__30234
extern kcg_bool kcg_comp_array__30234(
  array__30234 *kcg_c1,
  array__30234 *kcg_c2);
#endif /* kcg_comp_array__30234 */

#ifndef kcg_comp_array_int_2_32_32
extern kcg_bool kcg_comp_array_int_2_32_32(
  array_int_2_32_32 *kcg_c1,
  array_int_2_32_32 *kcg_c2);
#endif /* kcg_comp_array_int_2_32_32 */

#ifndef kcg_comp_array_int_432
extern kcg_bool kcg_comp_array_int_432(
  array_int_432 *kcg_c1,
  array_int_432 *kcg_c2);
#endif /* kcg_comp_array_int_432 */

#ifndef kcg_comp_array_int_68
extern kcg_bool kcg_comp_array_int_68(
  array_int_68 *kcg_c1,
  array_int_68 *kcg_c2);
#endif /* kcg_comp_array_int_68 */

#ifndef kcg_comp_array_int_33
extern kcg_bool kcg_comp_array_int_33(
  array_int_33 *kcg_c1,
  array_int_33 *kcg_c2);
#endif /* kcg_comp_array_int_33 */

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

#ifndef kcg_comp_array_int_236
extern kcg_bool kcg_comp_array_int_236(
  array_int_236 *kcg_c1,
  array_int_236 *kcg_c2);
#endif /* kcg_comp_array_int_236 */

#ifndef kcg_comp_array__30258
extern kcg_bool kcg_comp_array__30258(
  array__30258 *kcg_c1,
  array__30258 *kcg_c2);
#endif /* kcg_comp_array__30258 */

#ifndef kcg_comp_array_int_491
extern kcg_bool kcg_comp_array_int_491(
  array_int_491 *kcg_c1,
  array_int_491 *kcg_c2);
#endif /* kcg_comp_array_int_491 */

#ifndef kcg_comp_array_int_9
extern kcg_bool kcg_comp_array_int_9(array_int_9 *kcg_c1, array_int_9 *kcg_c2);
#endif /* kcg_comp_array_int_9 */

#ifndef kcg_comp_array_int_4_32_128
extern kcg_bool kcg_comp_array_int_4_32_128(
  array_int_4_32_128 *kcg_c1,
  array_int_4_32_128 *kcg_c2);
#endif /* kcg_comp_array_int_4_32_128 */

#ifndef kcg_comp_array_int_351
extern kcg_bool kcg_comp_array_int_351(
  array_int_351 *kcg_c1,
  array_int_351 *kcg_c2);
#endif /* kcg_comp_array_int_351 */

#ifndef kcg_comp_array_int_20
extern kcg_bool kcg_comp_array_int_20(
  array_int_20 *kcg_c1,
  array_int_20 *kcg_c2);
#endif /* kcg_comp_array_int_20 */

#ifndef kcg_comp_array_int_149
extern kcg_bool kcg_comp_array_int_149(
  array_int_149 *kcg_c1,
  array_int_149 *kcg_c2);
#endif /* kcg_comp_array_int_149 */

#ifndef kcg_comp_array_int_14
extern kcg_bool kcg_comp_array_int_14(
  array_int_14 *kcg_c1,
  array_int_14 *kcg_c2);
#endif /* kcg_comp_array_int_14 */

#ifndef kcg_comp_array_int_21
extern kcg_bool kcg_comp_array_int_21(
  array_int_21 *kcg_c1,
  array_int_21 *kcg_c2);
#endif /* kcg_comp_array_int_21 */

#define kcg_comp_BaliseGroupData_Basics kcg_comp_struct__29695

#define kcg_copy_BaliseGroupData_Basics kcg_copy_struct__29695

#define kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_comp_struct__29593

#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_copy_struct__29593

#define kcg_comp_M_003_T_TM_radio_messages kcg_comp_struct__29843

#define kcg_copy_M_003_T_TM_radio_messages kcg_copy_struct__29843

#define kcg_comp_M_008_T_TM_radio_messages kcg_comp_struct__29852

#define kcg_copy_M_008_T_TM_radio_messages kcg_copy_struct__29852

#define kcg_comp_M_015_T_TM_radio_messages kcg_comp_struct__29862

#define kcg_copy_M_015_T_TM_radio_messages kcg_copy_struct__29862

#define kcg_comp_M_024_T_TM_radio_messages kcg_comp_struct__29843

#define kcg_copy_M_024_T_TM_radio_messages kcg_copy_struct__29843

#define kcg_comp_M_032_T_TM_radio_messages kcg_comp_struct__29876

#define kcg_copy_M_032_T_TM_radio_messages kcg_copy_struct__29876

#define kcg_comp_M_015_int_T_TM_radio_messages kcg_comp_struct__29908

#define kcg_copy_M_015_int_T_TM_radio_messages kcg_copy_struct__29908

#define kcg_comp_M_003_int_T_TM_radio_messages kcg_comp_struct__29922

#define kcg_copy_M_003_int_T_TM_radio_messages kcg_copy_struct__29922

#define kcg_comp_R_data_internal_T_InfraLib kcg_comp_struct__29901

#define kcg_copy_R_data_internal_T_InfraLib kcg_copy_struct__29901

#define kcg_comp_M_024_int_T_TM_radio_messages kcg_comp_struct__29922

#define kcg_copy_M_024_int_T_TM_radio_messages kcg_copy_struct__29922

#define kcg_comp_TrainPosRaw_T_InfraLib kcg_comp_struct__29684

#define kcg_copy_TrainPosRaw_T_InfraLib kcg_copy_struct__29684

#define kcg_comp_M_008_int_T_TM_radio_messages kcg_comp_struct__30130

#define kcg_copy_M_008_int_T_TM_radio_messages kcg_copy_struct__30130

#define kcg_comp_TrackSectionData_T_InfraLib kcg_comp_struct__29690

#define kcg_copy_TrackSectionData_T_InfraLib kcg_copy_struct__29690

#define kcg_comp_M_TrackTrain_Radio_T_TM_radio_messages kcg_comp_struct__29886

#define kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages kcg_copy_struct__29886

#define kcg_comp_B_data_internal_T_InfraLib kcg_comp_struct__29703

#define kcg_copy_B_data_internal_T_InfraLib kcg_copy_struct__29703

#define kcg_comp_M_032_int_T_TM_radio_messages kcg_comp_struct__30140

#define kcg_copy_M_032_int_T_TM_radio_messages kcg_copy_struct__30140

#define kcg_comp_CompressedRadioMessage_TM kcg_comp_struct__29674

#define kcg_copy_CompressedRadioMessage_TM kcg_copy_struct__29674

#define kcg_comp__3_Radio_TrackTrain_Header_T_TM kcg_comp_struct__29656

#define kcg_copy__3_Radio_TrackTrain_Header_T_TM kcg_copy_struct__29656

#define kcg_comp_P015_OBU_sectionlist_int_T_TM kcg_comp_array__29947

#define kcg_copy_P015_OBU_sectionlist_int_T_TM kcg_copy_array__29947

#define kcg_comp_P015_section_array_T_TM kcg_comp_array_int_4

#define kcg_copy_P015_section_array_T_TM kcg_copy_array_int_4

#define kcg_comp_P015_OBU_sectionlist_array_T_TM kcg_comp_array_int_4_32

#define kcg_copy_P015_OBU_sectionlist_array_T_TM kcg_copy_array_int_4_32

#define kcg_comp_P015_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P015_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_P015_section_int_T_TM kcg_comp_struct__29934

#define kcg_copy_P015_section_int_T_TM kcg_copy_struct__29934

#define kcg_comp_P015_trackide_sectionlist_T_TM kcg_comp_array__29947

#define kcg_copy_P015_trackide_sectionlist_T_TM kcg_copy_array__29947

#define kcg_comp_P015_trackside_int_T_TM kcg_comp_struct__29950

#define kcg_copy_P015_trackside_int_T_TM kcg_copy_struct__29950

#define kcg_comp_P065_trackside_int_T_TM kcg_comp_struct__30086

#define kcg_copy_P065_trackside_int_T_TM kcg_copy_struct__30086

#define kcg_comp_P005_OBU_sectionlist_int_T_TM kcg_comp_array__29995

#define kcg_copy_P005_OBU_sectionlist_int_T_TM kcg_copy_array__29995

#define kcg_comp_P005_section_array_T_TM kcg_comp_array_int_7

#define kcg_copy_P005_section_array_T_TM kcg_copy_array_int_7

#define kcg_comp_P005_OBU_sectionlist_array_T_TM kcg_comp_array_int_7_33

#define kcg_copy_P005_OBU_sectionlist_array_T_TM kcg_copy_array_int_7_33

#define kcg_comp_P005_sections_array_flat_T_TM kcg_comp_array_int_231

#define kcg_copy_P005_sections_array_flat_T_TM kcg_copy_array_int_231

#define kcg_comp_P005_section_int_T_TM kcg_comp_struct__29979

#define kcg_copy_P005_section_int_T_TM kcg_copy_struct__29979

#define kcg_comp_P005_trackide_sectionlist_T_TM kcg_comp_array__29998

#define kcg_copy_P005_trackide_sectionlist_T_TM kcg_copy_array__29998

#define kcg_comp_P005_trackside_int_T_TM kcg_comp_struct__30001

#define kcg_copy_P005_trackside_int_T_TM kcg_copy_struct__30001

#define kcg_comp_P021_OBU_sectionlist_int_T_TM kcg_comp_array__30067

#define kcg_copy_P021_OBU_sectionlist_int_T_TM kcg_copy_array__30067

#define kcg_comp_P021_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P021_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P021_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P021_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P021_section_int_T_TM kcg_comp_struct__30061

#define kcg_copy_P021_section_int_T_TM kcg_copy_struct__30061

#define kcg_comp_P021_trackide_sectionlist_T_TM kcg_comp_array__30070

#define kcg_copy_P021_trackide_sectionlist_T_TM kcg_copy_array__30070

#define kcg_comp_P021_trackside_int_T_TM kcg_comp_struct__30073

#define kcg_copy_P021_trackside_int_T_TM kcg_copy_struct__30073

#define kcg_comp_P057_trackside_int_T_TM kcg_comp_struct__30099

#define kcg_copy_P057_trackside_int_T_TM kcg_copy_struct__30099

#define kcg_comp_P058_OBU_sectionlist_int_T_TM kcg_comp_array__30114

#define kcg_copy_P058_OBU_sectionlist_int_T_TM kcg_copy_array__30114

#define kcg_comp_P058_section_array_T_TM kcg_comp_array_int_2

#define kcg_copy_P058_section_array_T_TM kcg_copy_array_int_2

#define kcg_comp_P058_OBU_sectionlist_array_T_TM kcg_comp_array_int_2_32

#define kcg_copy_P058_OBU_sectionlist_array_T_TM kcg_copy_array_int_2_32

#define kcg_comp_P058_sections_array_flat_T_TM kcg_comp_array_int_64

#define kcg_copy_P058_sections_array_flat_T_TM kcg_copy_array_int_64

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_P058_section_int_T_TM kcg_comp_struct__30109

#define kcg_copy_P058_section_int_T_TM kcg_copy_struct__30109

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__29627

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__29627

#define kcg_comp_P058_trackide_sectionlist_T_TM kcg_comp_array__30114

#define kcg_copy_P058_trackide_sectionlist_T_TM kcg_copy_array__30114

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__29635

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__29635

#define kcg_comp_P058_trackside_int_T_TM kcg_comp_struct__30117

#define kcg_copy_P058_trackside_int_T_TM kcg_copy_struct__30117

#define kcg_comp_P137_trackside_int_T_TM kcg_comp_struct__29717

#define kcg_copy_P137_trackside_int_T_TM kcg_copy_struct__29717

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__29638

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__29638

#define kcg_comp_P041_OBU_sectionlist_int_T_TM kcg_comp_array__29740

#define kcg_copy_P041_OBU_sectionlist_int_T_TM kcg_copy_array__29740

#define kcg_comp_P041_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P041_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P041_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P041_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P041_section_int_T_TM kcg_comp_struct__29728

#define kcg_copy_P041_section_int_T_TM kcg_copy_struct__29728

#define kcg_comp_P041_trackide_sectionlist_T_TM kcg_comp_array__29743

#define kcg_copy_P041_trackide_sectionlist_T_TM kcg_copy_array__29743

#define kcg_comp_P041_trackside_int_T_TM kcg_comp_struct__29746

#define kcg_copy_P041_trackside_int_T_TM kcg_copy_struct__29746

#define kcg_comp_P046_OBU_sectionlist_int_T_TM kcg_comp_array__29774

#define kcg_copy_P046_OBU_sectionlist_int_T_TM kcg_copy_array__29774

#define kcg_comp_P046_section_array_T_TM kcg_comp_array_int_2

#define kcg_copy_P046_section_array_T_TM kcg_copy_array_int_2

#define kcg_comp_P046_OBU_sectionlist_array_T_TM kcg_comp_array_int_2_33

#define kcg_copy_P046_OBU_sectionlist_array_T_TM kcg_copy_array_int_2_33

#define kcg_comp_P046_sections_array_flat_T_TM kcg_comp_array_int_66

#define kcg_copy_P046_sections_array_flat_T_TM kcg_copy_array_int_66

#define kcg_comp_P046_section_int_T_TM kcg_comp_struct__29763

#define kcg_copy_P046_section_int_T_TM kcg_copy_struct__29763

#define kcg_comp_P046_trackide_sectionlist_T_TM kcg_comp_array__29777

#define kcg_copy_P046_trackide_sectionlist_T_TM kcg_copy_array__29777

#define kcg_comp_P046_trackside_int_T_TM kcg_comp_struct__29780

#define kcg_copy_P046_trackside_int_T_TM kcg_copy_struct__29780

#define kcg_comp_P042_trackside_int_T_TM kcg_comp_struct__29791

#define kcg_copy_P042_trackside_int_T_TM kcg_copy_struct__29791

#define kcg_comp_CompressedBaliseMessage_TM kcg_comp_struct__29679

#define kcg_copy_CompressedBaliseMessage_TM kcg_copy_struct__29679

#define kcg_comp_BaliseGroupData_TM kcg_comp_struct__29695

#define kcg_copy_BaliseGroupData_TM kcg_copy_struct__29695

#define kcg_comp_P045_trackside_int_T_TM kcg_comp_struct__29835

#define kcg_copy_P045_trackside_int_T_TM kcg_copy_struct__29835

#define kcg_comp_P255_trackside_int_T_TM kcg_comp_struct__29712

#define kcg_copy_P255_trackside_int_T_TM kcg_copy_struct__29712

#define kcg_comp_BaliseTelegramHeader_int_T_TM kcg_comp_struct__29643

#define kcg_copy_BaliseTelegramHeader_int_T_TM kcg_copy_struct__29643

#define kcg_comp_TelegramHeader_T_BG_Types_Pkg kcg_comp_struct__29611

#define kcg_copy_TelegramHeader_T_BG_Types_Pkg kcg_copy_struct__29611

#define kcg_comp_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_comp_array__30026

#define kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_copy_array__30026

#define kcg_comp_P027V1_section_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2

#define kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2

#define kcg_comp__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2_32

#define kcg_copy__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2_32

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp__2_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array__30040

#define kcg_copy__2_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array__30040

#define kcg_comp_P027V1_section_int_T_TM_baseline2 kcg_comp_struct__30029

#define kcg_copy_P027V1_section_int_T_TM_baseline2 kcg_copy_struct__30029

#define kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_comp_array__30043

#define kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_copy_array__30043

#define kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2 kcg_comp_struct__30021

#define kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2 kcg_copy_struct__30021

#define kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_comp_array__30026

#define kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_copy_array__30026

#define kcg_comp_P027V1_trackside_int_T_TM_baseline2 kcg_comp_struct__30046

#define kcg_copy_P027V1_trackside_int_T_TM_baseline2 kcg_copy_struct__30046

#define kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P003V1_trackside_int_T_TM_baseline2 kcg_comp_struct__29806

#define kcg_copy_P003V1_trackside_int_T_TM_baseline2 kcg_copy_struct__29806

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-07-21T17:55:34
*************************************************************$ */


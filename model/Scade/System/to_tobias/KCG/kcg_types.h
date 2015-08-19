/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-21T17:56:59
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
  M_DUP_This_balise_is_a_duplicate_of_the_next_balise = 1,
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
} struct__30815;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct__30815 Radio_TrackTrain_Header_T_Radio_Types_Pkg;

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
} struct__30833;

/* BG_Types_Pkg::TelegramHeader_T */
typedef struct__30833 TelegramHeader_T_BG_Types_Pkg;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__30849;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__30849 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__30857[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__30857 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__30860;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__30860 CompressedPackets_T_Common_Types_Pkg;

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
} struct__30865;

/* TM::BaliseTelegramHeader_int_T */
typedef struct__30865 BaliseTelegramHeader_int_T_TM;

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
} struct__30878;

/* TM::Radio_TrackTrain_Header_T */
typedef struct__30878 Radio_TrackTrain_Header_T_TM;

typedef struct {
  Radio_TrackTrain_Header_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__30896;

/* TM::CompressedRadioMessage */
typedef struct__30896 CompressedRadioMessage_TM;

typedef struct {
  BaliseTelegramHeader_int_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__30901;

/* TM::CompressedBaliseMessage */
typedef struct__30901 CompressedBaliseMessage_TM;

typedef struct {
  kcg_real TrainPos_in;
  kcg_int OffsetTotal;
  kcg_real TrainPosCalibrated;
} struct__30906;

/* InfraLib::TrainPosRaw_T */
typedef struct__30906 TrainPosRaw_T_InfraLib;

typedef struct {
  TrainPosRaw_T_InfraLib TrainPosRaw;
  CompressedBaliseMessage_TM BG_Message;
} struct__30912;

/* InfraLib::TrackSectionData_T */
typedef struct__30912 TrackSectionData_T_InfraLib;

typedef struct {
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Pos;
  OrBG_TM Or_BG;
  OrLine_TM Or_Line;
} struct__30917;

/* Basics::BaliseGroupData */
typedef struct__30917 BaliseGroupData_Basics;

/* TM::BaliseGroupData */
typedef struct__30917 BaliseGroupData_TM;

typedef struct {
  BaliseTelegramHeader_int_T_TM header;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int engineering_BG_location;
  kcg_real TrainPos;
  kcg_int pig_nom_0;
  kcg_bool balise_passed;
} struct__30925;

/* InfraLib::B_data_internal_T */
typedef struct__30925 B_data_internal_T_InfraLib;

typedef struct { kcg_bool valid; kcg_int NID_PACKET; } struct__30934;

/* TM::P255_trackside_int_T */
typedef struct__30934 P255_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SRSTOP;
} struct__30939;

/* TM::P137_trackside_int_T */
typedef struct__30939 P137_trackside_int_T_TM;

typedef kcg_int array_int_3[3];

/* TM::P041_section_array_T */
typedef array_int_3 P041_section_array_T_TM;

/* TM::P021_section_array_T */
typedef array_int_3 P021_section_array_T_TM;

typedef struct {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
} struct__30950;

/* TM::P041_section_int_T */
typedef struct__30950 P041_section_int_T_TM;

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

typedef P041_section_int_T_TM array__30962[33];

/* TM::P041_OBU_sectionlist_int_T */
typedef array__30962 P041_OBU_sectionlist_int_T_TM;

typedef P041_section_int_T_TM array__30965[32];

/* TM::P041_trackide_sectionlist_T */
typedef array__30965 P041_trackide_sectionlist_T_TM;

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
} struct__30968;

/* TM::P041_trackside_int_T */
typedef struct__30968 P041_trackside_int_T_TM;

typedef kcg_int array_int_2[2];

/* TM::P046_section_array_T */
typedef array_int_2 P046_section_array_T_TM;

/* TM::P058_section_array_T */
typedef array_int_2 P058_section_array_T_TM;

/* TM_baseline2::P027V1_section_array_qdiff_T */
typedef array_int_2 P027V1_section_array_qdiff_T_TM_baseline2;

typedef struct { kcg_int M_LEVELTR; kcg_int NID_NTC; } struct__30985;

/* TM::P046_section_int_T */
typedef struct__30985 P046_section_int_T_TM;

typedef P046_section_array_T_TM array_int_2_33[33];

/* TM::P046_OBU_sectionlist_array_T */
typedef array_int_2_33 P046_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_66[66];

/* TM::P046_sections_array_flat_T */
typedef array_int_66 P046_sections_array_flat_T_TM;

typedef P046_section_int_T_TM array__30996[33];

/* TM::P046_OBU_sectionlist_int_T */
typedef array__30996 P046_OBU_sectionlist_int_T_TM;

typedef P046_section_int_T_TM array__30999[32];

/* TM::P046_trackide_sectionlist_T */
typedef array__30999 P046_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int N_ITER;
  P046_trackide_sectionlist_T_TM SECTIONS;
} struct__31002;

/* TM::P046_trackside_int_T */
typedef struct__31002 P046_trackside_int_T_TM;

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
} struct__31013;

/* TM::P042_trackside_int_T */
typedef struct__31013 P042_trackside_int_T_TM;

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
} struct__31028;

/* TM_baseline2::P003V1_trackside_int_T */
typedef struct__31028 P003V1_trackside_int_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_MN;
} struct__31057;

/* TM::P045_trackside_int_T */
typedef struct__31057 P045_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
} struct__31065;

/* TM_radio_messages::M_024_T */
typedef struct__31065 M_024_T_TM_radio_messages;

/* TM_radio_messages::M_003_T */
typedef struct__31065 M_003_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_received;
} struct__31074;

/* TM_radio_messages::M_008_T */
typedef struct__31074 M_008_T_TM_radio_messages;

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
} struct__31084;

/* TM_radio_messages::M_015_T */
typedef struct__31084 M_015_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  M_VERSION m_version;
} struct__31098;

/* TM_radio_messages::M_032_T */
typedef struct__31098 M_032_T_TM_radio_messages;

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
} struct__31108;

/* TM_radio_messages::M_TrackTrain_Radio_T */
typedef struct__31108 M_TrackTrain_Radio_T_TM_radio_messages;

typedef struct {
  M_TrackTrain_Radio_T_TM_radio_messages message;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int trigger;
  kcg_bool message_sent;
} struct__31123;

/* InfraLib::R_data_internal_T */
typedef struct__31123 R_data_internal_T_InfraLib;

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
} struct__31130;

/* TM_radio_messages::M_015_int_T */
typedef struct__31130 M_015_int_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
} struct__31144;

/* TM_radio_messages::M_024_int_T */
typedef struct__31144 M_024_int_T_TM_radio_messages;

/* TM_radio_messages::M_003_int_T */
typedef struct__31144 M_003_int_T_TM_radio_messages;

typedef kcg_int array_int_4[4];

/* TM::P015_section_array_T */
typedef array_int_4 P015_section_array_T_TM;

typedef struct {
  kcg_int L_SECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
} struct__31156;

/* TM::P015_section_int_T */
typedef struct__31156 P015_section_int_T_TM;

typedef P015_section_array_T_TM array_int_4_32[32];

/* TM::P015_OBU_sectionlist_array_T */
typedef array_int_4_32 P015_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_128[128];

/* TM::P015_sections_array_flat_T */
typedef array_int_128 P015_sections_array_flat_T_TM;

typedef P015_section_int_T_TM array__31169[32];

/* TM::P015_trackide_sectionlist_T */
typedef array__31169 P015_trackide_sectionlist_T_TM;

/* TM::P015_OBU_sectionlist_int_T */
typedef array__31169 P015_OBU_sectionlist_int_T_TM;

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
} struct__31172;

/* TM::P015_trackside_int_T */
typedef struct__31172 P015_trackside_int_T_TM;

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
} struct__31201;

/* TM::P005_section_int_T */
typedef struct__31201 P005_section_int_T_TM;

typedef P005_section_array_T_TM array_int_7_33[33];

/* TM::P005_OBU_sectionlist_array_T */
typedef array_int_7_33 P005_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_231[231];

/* TM::P005_sections_array_flat_T */
typedef array_int_231 P005_sections_array_flat_T_TM;

typedef P005_section_int_T_TM array__31217[33];

/* TM::P005_OBU_sectionlist_int_T */
typedef array__31217 P005_OBU_sectionlist_int_T_TM;

typedef P005_section_int_T_TM array__31220[32];

/* TM::P005_trackide_sectionlist_T */
typedef array__31220 P005_trackide_sectionlist_T_TM;

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
} struct__31223;

/* TM::P005_trackside_int_T */
typedef struct__31223 P005_trackside_int_T_TM;

typedef kcg_int array_int_64[64];

/* TM::P058_sections_array_flat_T */
typedef array_int_64 P058_sections_array_flat_T_TM;

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef struct { kcg_int NC_DIFF; kcg_int V_DIFF; } struct__31243;

/* TM_baseline2::P027V1_section_int_qdiff_T */
typedef struct__31243 P027V1_section_int_qdiff_T_TM_baseline2;

typedef P027V1_section_int_qdiff_T_TM_baseline2 array__31248[32];

/* TM_baseline2::P027V1_trackside_qdifflist_T */
typedef array__31248 P027V1_trackside_qdifflist_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_int_qdiff_T */
typedef array__31248 P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2;

typedef struct {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
} struct__31251;

/* TM_baseline2::P027V1_section_int_T */
typedef struct__31251 P027V1_section_int_T_TM_baseline2;

typedef array_int_2 array_int_2_32[32];

/* TM::P058_OBU_sectionlist_array_T */
typedef array_int_2_32 P058_OBU_sectionlist_array_T_TM;

/* TM_baseline2::P027V1_OBU_sectionlist_array_qdiff_T */
typedef array_int_2_32 P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__31262[33];

/* TM_baseline2::P027V1_OBU_sectionlist_int_T */
typedef array__31262 P027V1_OBU_sectionlist_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__31265[32];

/* TM_baseline2::P027V1_trackside_sectionlist_T */
typedef array__31265 P027V1_trackside_sectionlist_T_TM_baseline2;

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
} struct__31268;

/* TM_baseline2::P027V1_trackside_int_T */
typedef struct__31268 P027V1_trackside_int_T_TM_baseline2;

typedef struct {
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
} struct__31283;

/* TM::P021_section_int_T */
typedef struct__31283 P021_section_int_T_TM;

typedef P021_section_int_T_TM array__31289[33];

/* TM::P021_OBU_sectionlist_int_T */
typedef array__31289 P021_OBU_sectionlist_int_T_TM;

typedef P021_section_int_T_TM array__31292[32];

/* TM::P021_trackide_sectionlist_T */
typedef array__31292 P021_trackide_sectionlist_T_TM;

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
} struct__31295;

/* TM::P021_trackside_int_T */
typedef struct__31295 P021_trackside_int_T_TM;

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
} struct__31308;

/* TM::P065_trackside_int_T */
typedef struct__31308 P065_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int T_MAR;
  kcg_int T_TIMEOUTRQST;
  kcg_int T_CYCRQST;
} struct__31321;

/* TM::P057_trackside_int_T */
typedef struct__31321 P057_trackside_int_T_TM;

typedef struct { kcg_int D_LOC; kcg_int Q_LGTLOC; } struct__31331;

/* TM::P058_section_int_T */
typedef struct__31331 P058_section_int_T_TM;

typedef P058_section_int_T_TM array__31336[32];

/* TM::P058_trackide_sectionlist_T */
typedef array__31336 P058_trackide_sectionlist_T_TM;

/* TM::P058_OBU_sectionlist_int_T */
typedef array__31336 P058_OBU_sectionlist_int_T_TM;

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
} struct__31339;

/* TM::P058_trackside_int_T */
typedef struct__31339 P058_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
  kcg_int t_train_received;
} struct__31352;

/* TM_radio_messages::M_008_int_T */
typedef struct__31352 M_008_int_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
  kcg_int m_version;
} struct__31362;

/* TM_radio_messages::M_032_int_T */
typedef struct__31362 M_032_int_T_TM_radio_messages;

typedef kcg_int array_int_430[430];

typedef kcg_int array_int_444[444];

typedef kcg_int array_int_395[395];

typedef kcg_int array_int_428[428];

typedef kcg_int array_int_396[396];

typedef kcg_int array_int_432[432];

typedef kcg_int array_int_264[264];

typedef kcg_int array_int_351[351];

#ifndef kcg_copy_struct__30815
#define kcg_copy_struct__30815(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__30815)))
#endif /* kcg_copy_struct__30815 */

#ifndef kcg_copy_struct__30833
#define kcg_copy_struct__30833(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__30833)))
#endif /* kcg_copy_struct__30833 */

#ifndef kcg_copy_struct__30849
#define kcg_copy_struct__30849(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__30849)))
#endif /* kcg_copy_struct__30849 */

#ifndef kcg_copy_struct__30860
#define kcg_copy_struct__30860(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__30860)))
#endif /* kcg_copy_struct__30860 */

#ifndef kcg_copy_struct__30865
#define kcg_copy_struct__30865(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__30865)))
#endif /* kcg_copy_struct__30865 */

#ifndef kcg_copy_struct__30878
#define kcg_copy_struct__30878(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__30878)))
#endif /* kcg_copy_struct__30878 */

#ifndef kcg_copy_struct__30896
#define kcg_copy_struct__30896(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__30896)))
#endif /* kcg_copy_struct__30896 */

#ifndef kcg_copy_struct__30901
#define kcg_copy_struct__30901(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__30901)))
#endif /* kcg_copy_struct__30901 */

#ifndef kcg_copy_struct__30906
#define kcg_copy_struct__30906(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__30906)))
#endif /* kcg_copy_struct__30906 */

#ifndef kcg_copy_struct__30912
#define kcg_copy_struct__30912(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__30912)))
#endif /* kcg_copy_struct__30912 */

#ifndef kcg_copy_struct__30917
#define kcg_copy_struct__30917(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__30917)))
#endif /* kcg_copy_struct__30917 */

#ifndef kcg_copy_struct__30925
#define kcg_copy_struct__30925(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__30925)))
#endif /* kcg_copy_struct__30925 */

#ifndef kcg_copy_struct__30934
#define kcg_copy_struct__30934(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__30934)))
#endif /* kcg_copy_struct__30934 */

#ifndef kcg_copy_struct__30939
#define kcg_copy_struct__30939(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__30939)))
#endif /* kcg_copy_struct__30939 */

#ifndef kcg_copy_struct__30950
#define kcg_copy_struct__30950(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__30950)))
#endif /* kcg_copy_struct__30950 */

#ifndef kcg_copy_struct__30968
#define kcg_copy_struct__30968(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__30968)))
#endif /* kcg_copy_struct__30968 */

#ifndef kcg_copy_struct__30985
#define kcg_copy_struct__30985(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__30985)))
#endif /* kcg_copy_struct__30985 */

#ifndef kcg_copy_struct__31002
#define kcg_copy_struct__31002(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31002)))
#endif /* kcg_copy_struct__31002 */

#ifndef kcg_copy_struct__31013
#define kcg_copy_struct__31013(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31013)))
#endif /* kcg_copy_struct__31013 */

#ifndef kcg_copy_struct__31028
#define kcg_copy_struct__31028(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31028)))
#endif /* kcg_copy_struct__31028 */

#ifndef kcg_copy_struct__31057
#define kcg_copy_struct__31057(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31057)))
#endif /* kcg_copy_struct__31057 */

#ifndef kcg_copy_struct__31065
#define kcg_copy_struct__31065(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31065)))
#endif /* kcg_copy_struct__31065 */

#ifndef kcg_copy_struct__31074
#define kcg_copy_struct__31074(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31074)))
#endif /* kcg_copy_struct__31074 */

#ifndef kcg_copy_struct__31084
#define kcg_copy_struct__31084(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31084)))
#endif /* kcg_copy_struct__31084 */

#ifndef kcg_copy_struct__31098
#define kcg_copy_struct__31098(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31098)))
#endif /* kcg_copy_struct__31098 */

#ifndef kcg_copy_struct__31108
#define kcg_copy_struct__31108(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31108)))
#endif /* kcg_copy_struct__31108 */

#ifndef kcg_copy_struct__31123
#define kcg_copy_struct__31123(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31123)))
#endif /* kcg_copy_struct__31123 */

#ifndef kcg_copy_struct__31130
#define kcg_copy_struct__31130(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31130)))
#endif /* kcg_copy_struct__31130 */

#ifndef kcg_copy_struct__31144
#define kcg_copy_struct__31144(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31144)))
#endif /* kcg_copy_struct__31144 */

#ifndef kcg_copy_struct__31156
#define kcg_copy_struct__31156(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31156)))
#endif /* kcg_copy_struct__31156 */

#ifndef kcg_copy_struct__31172
#define kcg_copy_struct__31172(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31172)))
#endif /* kcg_copy_struct__31172 */

#ifndef kcg_copy_struct__31201
#define kcg_copy_struct__31201(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31201)))
#endif /* kcg_copy_struct__31201 */

#ifndef kcg_copy_struct__31223
#define kcg_copy_struct__31223(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31223)))
#endif /* kcg_copy_struct__31223 */

#ifndef kcg_copy_struct__31243
#define kcg_copy_struct__31243(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31243)))
#endif /* kcg_copy_struct__31243 */

#ifndef kcg_copy_struct__31251
#define kcg_copy_struct__31251(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31251)))
#endif /* kcg_copy_struct__31251 */

#ifndef kcg_copy_struct__31268
#define kcg_copy_struct__31268(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31268)))
#endif /* kcg_copy_struct__31268 */

#ifndef kcg_copy_struct__31283
#define kcg_copy_struct__31283(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31283)))
#endif /* kcg_copy_struct__31283 */

#ifndef kcg_copy_struct__31295
#define kcg_copy_struct__31295(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31295)))
#endif /* kcg_copy_struct__31295 */

#ifndef kcg_copy_struct__31308
#define kcg_copy_struct__31308(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31308)))
#endif /* kcg_copy_struct__31308 */

#ifndef kcg_copy_struct__31321
#define kcg_copy_struct__31321(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31321)))
#endif /* kcg_copy_struct__31321 */

#ifndef kcg_copy_struct__31331
#define kcg_copy_struct__31331(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31331)))
#endif /* kcg_copy_struct__31331 */

#ifndef kcg_copy_struct__31339
#define kcg_copy_struct__31339(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31339)))
#endif /* kcg_copy_struct__31339 */

#ifndef kcg_copy_struct__31352
#define kcg_copy_struct__31352(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31352)))
#endif /* kcg_copy_struct__31352 */

#ifndef kcg_copy_struct__31362
#define kcg_copy_struct__31362(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31362)))
#endif /* kcg_copy_struct__31362 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__30857
#define kcg_copy_array__30857(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__30857)))
#endif /* kcg_copy_array__30857 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_int_3_33
#define kcg_copy_array_int_3_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33)))
#endif /* kcg_copy_array_int_3_33 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__30962
#define kcg_copy_array__30962(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__30962)))
#endif /* kcg_copy_array__30962 */

#ifndef kcg_copy_array__30965
#define kcg_copy_array__30965(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__30965)))
#endif /* kcg_copy_array__30965 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array_int_2_33
#define kcg_copy_array_int_2_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_33)))
#endif /* kcg_copy_array_int_2_33 */

#ifndef kcg_copy_array_int_66
#define kcg_copy_array_int_66(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_66)))
#endif /* kcg_copy_array_int_66 */

#ifndef kcg_copy_array__30996
#define kcg_copy_array__30996(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__30996)))
#endif /* kcg_copy_array__30996 */

#ifndef kcg_copy_array__30999
#define kcg_copy_array__30999(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__30999)))
#endif /* kcg_copy_array__30999 */

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

#ifndef kcg_copy_array__31169
#define kcg_copy_array__31169(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31169)))
#endif /* kcg_copy_array__31169 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array_int_7_33
#define kcg_copy_array_int_7_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33)))
#endif /* kcg_copy_array_int_7_33 */

#ifndef kcg_copy_array_int_231
#define kcg_copy_array_int_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231)))
#endif /* kcg_copy_array_int_231 */

#ifndef kcg_copy_array__31217
#define kcg_copy_array__31217(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31217)))
#endif /* kcg_copy_array__31217 */

#ifndef kcg_copy_array__31220
#define kcg_copy_array__31220(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31220)))
#endif /* kcg_copy_array__31220 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array__31248
#define kcg_copy_array__31248(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31248)))
#endif /* kcg_copy_array__31248 */

#ifndef kcg_copy_array_int_2_32
#define kcg_copy_array_int_2_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32)))
#endif /* kcg_copy_array_int_2_32 */

#ifndef kcg_copy_array__31262
#define kcg_copy_array__31262(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31262)))
#endif /* kcg_copy_array__31262 */

#ifndef kcg_copy_array__31265
#define kcg_copy_array__31265(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31265)))
#endif /* kcg_copy_array__31265 */

#ifndef kcg_copy_array__31289
#define kcg_copy_array__31289(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31289)))
#endif /* kcg_copy_array__31289 */

#ifndef kcg_copy_array__31292
#define kcg_copy_array__31292(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31292)))
#endif /* kcg_copy_array__31292 */

#ifndef kcg_copy_array__31336
#define kcg_copy_array__31336(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31336)))
#endif /* kcg_copy_array__31336 */

#ifndef kcg_copy_array_int_430
#define kcg_copy_array_int_430(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_430)))
#endif /* kcg_copy_array_int_430 */

#ifndef kcg_copy_array_int_444
#define kcg_copy_array_int_444(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_444)))
#endif /* kcg_copy_array_int_444 */

#ifndef kcg_copy_array_int_395
#define kcg_copy_array_int_395(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_395)))
#endif /* kcg_copy_array_int_395 */

#ifndef kcg_copy_array_int_428
#define kcg_copy_array_int_428(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_428)))
#endif /* kcg_copy_array_int_428 */

#ifndef kcg_copy_array_int_396
#define kcg_copy_array_int_396(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_396)))
#endif /* kcg_copy_array_int_396 */

#ifndef kcg_copy_array_int_432
#define kcg_copy_array_int_432(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_432)))
#endif /* kcg_copy_array_int_432 */

#ifndef kcg_copy_array_int_264
#define kcg_copy_array_int_264(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_264)))
#endif /* kcg_copy_array_int_264 */

#ifndef kcg_copy_array_int_351
#define kcg_copy_array_int_351(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_351)))
#endif /* kcg_copy_array_int_351 */

#ifndef kcg_comp_struct__30815
extern kcg_bool kcg_comp_struct__30815(
  struct__30815 *kcg_c1,
  struct__30815 *kcg_c2);
#endif /* kcg_comp_struct__30815 */

#ifndef kcg_comp_struct__30833
extern kcg_bool kcg_comp_struct__30833(
  struct__30833 *kcg_c1,
  struct__30833 *kcg_c2);
#endif /* kcg_comp_struct__30833 */

#ifndef kcg_comp_struct__30849
extern kcg_bool kcg_comp_struct__30849(
  struct__30849 *kcg_c1,
  struct__30849 *kcg_c2);
#endif /* kcg_comp_struct__30849 */

#ifndef kcg_comp_struct__30860
extern kcg_bool kcg_comp_struct__30860(
  struct__30860 *kcg_c1,
  struct__30860 *kcg_c2);
#endif /* kcg_comp_struct__30860 */

#ifndef kcg_comp_struct__30865
extern kcg_bool kcg_comp_struct__30865(
  struct__30865 *kcg_c1,
  struct__30865 *kcg_c2);
#endif /* kcg_comp_struct__30865 */

#ifndef kcg_comp_struct__30878
extern kcg_bool kcg_comp_struct__30878(
  struct__30878 *kcg_c1,
  struct__30878 *kcg_c2);
#endif /* kcg_comp_struct__30878 */

#ifndef kcg_comp_struct__30896
extern kcg_bool kcg_comp_struct__30896(
  struct__30896 *kcg_c1,
  struct__30896 *kcg_c2);
#endif /* kcg_comp_struct__30896 */

#ifndef kcg_comp_struct__30901
extern kcg_bool kcg_comp_struct__30901(
  struct__30901 *kcg_c1,
  struct__30901 *kcg_c2);
#endif /* kcg_comp_struct__30901 */

#ifndef kcg_comp_struct__30906
extern kcg_bool kcg_comp_struct__30906(
  struct__30906 *kcg_c1,
  struct__30906 *kcg_c2);
#endif /* kcg_comp_struct__30906 */

#ifndef kcg_comp_struct__30912
extern kcg_bool kcg_comp_struct__30912(
  struct__30912 *kcg_c1,
  struct__30912 *kcg_c2);
#endif /* kcg_comp_struct__30912 */

#ifndef kcg_comp_struct__30917
extern kcg_bool kcg_comp_struct__30917(
  struct__30917 *kcg_c1,
  struct__30917 *kcg_c2);
#endif /* kcg_comp_struct__30917 */

#ifndef kcg_comp_struct__30925
extern kcg_bool kcg_comp_struct__30925(
  struct__30925 *kcg_c1,
  struct__30925 *kcg_c2);
#endif /* kcg_comp_struct__30925 */

#ifndef kcg_comp_struct__30934
extern kcg_bool kcg_comp_struct__30934(
  struct__30934 *kcg_c1,
  struct__30934 *kcg_c2);
#endif /* kcg_comp_struct__30934 */

#ifndef kcg_comp_struct__30939
extern kcg_bool kcg_comp_struct__30939(
  struct__30939 *kcg_c1,
  struct__30939 *kcg_c2);
#endif /* kcg_comp_struct__30939 */

#ifndef kcg_comp_struct__30950
extern kcg_bool kcg_comp_struct__30950(
  struct__30950 *kcg_c1,
  struct__30950 *kcg_c2);
#endif /* kcg_comp_struct__30950 */

#ifndef kcg_comp_struct__30968
extern kcg_bool kcg_comp_struct__30968(
  struct__30968 *kcg_c1,
  struct__30968 *kcg_c2);
#endif /* kcg_comp_struct__30968 */

#ifndef kcg_comp_struct__30985
extern kcg_bool kcg_comp_struct__30985(
  struct__30985 *kcg_c1,
  struct__30985 *kcg_c2);
#endif /* kcg_comp_struct__30985 */

#ifndef kcg_comp_struct__31002
extern kcg_bool kcg_comp_struct__31002(
  struct__31002 *kcg_c1,
  struct__31002 *kcg_c2);
#endif /* kcg_comp_struct__31002 */

#ifndef kcg_comp_struct__31013
extern kcg_bool kcg_comp_struct__31013(
  struct__31013 *kcg_c1,
  struct__31013 *kcg_c2);
#endif /* kcg_comp_struct__31013 */

#ifndef kcg_comp_struct__31028
extern kcg_bool kcg_comp_struct__31028(
  struct__31028 *kcg_c1,
  struct__31028 *kcg_c2);
#endif /* kcg_comp_struct__31028 */

#ifndef kcg_comp_struct__31057
extern kcg_bool kcg_comp_struct__31057(
  struct__31057 *kcg_c1,
  struct__31057 *kcg_c2);
#endif /* kcg_comp_struct__31057 */

#ifndef kcg_comp_struct__31065
extern kcg_bool kcg_comp_struct__31065(
  struct__31065 *kcg_c1,
  struct__31065 *kcg_c2);
#endif /* kcg_comp_struct__31065 */

#ifndef kcg_comp_struct__31074
extern kcg_bool kcg_comp_struct__31074(
  struct__31074 *kcg_c1,
  struct__31074 *kcg_c2);
#endif /* kcg_comp_struct__31074 */

#ifndef kcg_comp_struct__31084
extern kcg_bool kcg_comp_struct__31084(
  struct__31084 *kcg_c1,
  struct__31084 *kcg_c2);
#endif /* kcg_comp_struct__31084 */

#ifndef kcg_comp_struct__31098
extern kcg_bool kcg_comp_struct__31098(
  struct__31098 *kcg_c1,
  struct__31098 *kcg_c2);
#endif /* kcg_comp_struct__31098 */

#ifndef kcg_comp_struct__31108
extern kcg_bool kcg_comp_struct__31108(
  struct__31108 *kcg_c1,
  struct__31108 *kcg_c2);
#endif /* kcg_comp_struct__31108 */

#ifndef kcg_comp_struct__31123
extern kcg_bool kcg_comp_struct__31123(
  struct__31123 *kcg_c1,
  struct__31123 *kcg_c2);
#endif /* kcg_comp_struct__31123 */

#ifndef kcg_comp_struct__31130
extern kcg_bool kcg_comp_struct__31130(
  struct__31130 *kcg_c1,
  struct__31130 *kcg_c2);
#endif /* kcg_comp_struct__31130 */

#ifndef kcg_comp_struct__31144
extern kcg_bool kcg_comp_struct__31144(
  struct__31144 *kcg_c1,
  struct__31144 *kcg_c2);
#endif /* kcg_comp_struct__31144 */

#ifndef kcg_comp_struct__31156
extern kcg_bool kcg_comp_struct__31156(
  struct__31156 *kcg_c1,
  struct__31156 *kcg_c2);
#endif /* kcg_comp_struct__31156 */

#ifndef kcg_comp_struct__31172
extern kcg_bool kcg_comp_struct__31172(
  struct__31172 *kcg_c1,
  struct__31172 *kcg_c2);
#endif /* kcg_comp_struct__31172 */

#ifndef kcg_comp_struct__31201
extern kcg_bool kcg_comp_struct__31201(
  struct__31201 *kcg_c1,
  struct__31201 *kcg_c2);
#endif /* kcg_comp_struct__31201 */

#ifndef kcg_comp_struct__31223
extern kcg_bool kcg_comp_struct__31223(
  struct__31223 *kcg_c1,
  struct__31223 *kcg_c2);
#endif /* kcg_comp_struct__31223 */

#ifndef kcg_comp_struct__31243
extern kcg_bool kcg_comp_struct__31243(
  struct__31243 *kcg_c1,
  struct__31243 *kcg_c2);
#endif /* kcg_comp_struct__31243 */

#ifndef kcg_comp_struct__31251
extern kcg_bool kcg_comp_struct__31251(
  struct__31251 *kcg_c1,
  struct__31251 *kcg_c2);
#endif /* kcg_comp_struct__31251 */

#ifndef kcg_comp_struct__31268
extern kcg_bool kcg_comp_struct__31268(
  struct__31268 *kcg_c1,
  struct__31268 *kcg_c2);
#endif /* kcg_comp_struct__31268 */

#ifndef kcg_comp_struct__31283
extern kcg_bool kcg_comp_struct__31283(
  struct__31283 *kcg_c1,
  struct__31283 *kcg_c2);
#endif /* kcg_comp_struct__31283 */

#ifndef kcg_comp_struct__31295
extern kcg_bool kcg_comp_struct__31295(
  struct__31295 *kcg_c1,
  struct__31295 *kcg_c2);
#endif /* kcg_comp_struct__31295 */

#ifndef kcg_comp_struct__31308
extern kcg_bool kcg_comp_struct__31308(
  struct__31308 *kcg_c1,
  struct__31308 *kcg_c2);
#endif /* kcg_comp_struct__31308 */

#ifndef kcg_comp_struct__31321
extern kcg_bool kcg_comp_struct__31321(
  struct__31321 *kcg_c1,
  struct__31321 *kcg_c2);
#endif /* kcg_comp_struct__31321 */

#ifndef kcg_comp_struct__31331
extern kcg_bool kcg_comp_struct__31331(
  struct__31331 *kcg_c1,
  struct__31331 *kcg_c2);
#endif /* kcg_comp_struct__31331 */

#ifndef kcg_comp_struct__31339
extern kcg_bool kcg_comp_struct__31339(
  struct__31339 *kcg_c1,
  struct__31339 *kcg_c2);
#endif /* kcg_comp_struct__31339 */

#ifndef kcg_comp_struct__31352
extern kcg_bool kcg_comp_struct__31352(
  struct__31352 *kcg_c1,
  struct__31352 *kcg_c2);
#endif /* kcg_comp_struct__31352 */

#ifndef kcg_comp_struct__31362
extern kcg_bool kcg_comp_struct__31362(
  struct__31362 *kcg_c1,
  struct__31362 *kcg_c2);
#endif /* kcg_comp_struct__31362 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__30857
extern kcg_bool kcg_comp_array__30857(
  array__30857 *kcg_c1,
  array__30857 *kcg_c2);
#endif /* kcg_comp_array__30857 */

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

#ifndef kcg_comp_array__30962
extern kcg_bool kcg_comp_array__30962(
  array__30962 *kcg_c1,
  array__30962 *kcg_c2);
#endif /* kcg_comp_array__30962 */

#ifndef kcg_comp_array__30965
extern kcg_bool kcg_comp_array__30965(
  array__30965 *kcg_c1,
  array__30965 *kcg_c2);
#endif /* kcg_comp_array__30965 */

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

#ifndef kcg_comp_array__30996
extern kcg_bool kcg_comp_array__30996(
  array__30996 *kcg_c1,
  array__30996 *kcg_c2);
#endif /* kcg_comp_array__30996 */

#ifndef kcg_comp_array__30999
extern kcg_bool kcg_comp_array__30999(
  array__30999 *kcg_c1,
  array__30999 *kcg_c2);
#endif /* kcg_comp_array__30999 */

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

#ifndef kcg_comp_array__31169
extern kcg_bool kcg_comp_array__31169(
  array__31169 *kcg_c1,
  array__31169 *kcg_c2);
#endif /* kcg_comp_array__31169 */

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

#ifndef kcg_comp_array__31217
extern kcg_bool kcg_comp_array__31217(
  array__31217 *kcg_c1,
  array__31217 *kcg_c2);
#endif /* kcg_comp_array__31217 */

#ifndef kcg_comp_array__31220
extern kcg_bool kcg_comp_array__31220(
  array__31220 *kcg_c1,
  array__31220 *kcg_c2);
#endif /* kcg_comp_array__31220 */

#ifndef kcg_comp_array_int_64
extern kcg_bool kcg_comp_array_int_64(
  array_int_64 *kcg_c1,
  array_int_64 *kcg_c2);
#endif /* kcg_comp_array_int_64 */

#ifndef kcg_comp_array__31248
extern kcg_bool kcg_comp_array__31248(
  array__31248 *kcg_c1,
  array__31248 *kcg_c2);
#endif /* kcg_comp_array__31248 */

#ifndef kcg_comp_array_int_2_32
extern kcg_bool kcg_comp_array_int_2_32(
  array_int_2_32 *kcg_c1,
  array_int_2_32 *kcg_c2);
#endif /* kcg_comp_array_int_2_32 */

#ifndef kcg_comp_array__31262
extern kcg_bool kcg_comp_array__31262(
  array__31262 *kcg_c1,
  array__31262 *kcg_c2);
#endif /* kcg_comp_array__31262 */

#ifndef kcg_comp_array__31265
extern kcg_bool kcg_comp_array__31265(
  array__31265 *kcg_c1,
  array__31265 *kcg_c2);
#endif /* kcg_comp_array__31265 */

#ifndef kcg_comp_array__31289
extern kcg_bool kcg_comp_array__31289(
  array__31289 *kcg_c1,
  array__31289 *kcg_c2);
#endif /* kcg_comp_array__31289 */

#ifndef kcg_comp_array__31292
extern kcg_bool kcg_comp_array__31292(
  array__31292 *kcg_c1,
  array__31292 *kcg_c2);
#endif /* kcg_comp_array__31292 */

#ifndef kcg_comp_array__31336
extern kcg_bool kcg_comp_array__31336(
  array__31336 *kcg_c1,
  array__31336 *kcg_c2);
#endif /* kcg_comp_array__31336 */

#ifndef kcg_comp_array_int_430
extern kcg_bool kcg_comp_array_int_430(
  array_int_430 *kcg_c1,
  array_int_430 *kcg_c2);
#endif /* kcg_comp_array_int_430 */

#ifndef kcg_comp_array_int_444
extern kcg_bool kcg_comp_array_int_444(
  array_int_444 *kcg_c1,
  array_int_444 *kcg_c2);
#endif /* kcg_comp_array_int_444 */

#ifndef kcg_comp_array_int_395
extern kcg_bool kcg_comp_array_int_395(
  array_int_395 *kcg_c1,
  array_int_395 *kcg_c2);
#endif /* kcg_comp_array_int_395 */

#ifndef kcg_comp_array_int_428
extern kcg_bool kcg_comp_array_int_428(
  array_int_428 *kcg_c1,
  array_int_428 *kcg_c2);
#endif /* kcg_comp_array_int_428 */

#ifndef kcg_comp_array_int_396
extern kcg_bool kcg_comp_array_int_396(
  array_int_396 *kcg_c1,
  array_int_396 *kcg_c2);
#endif /* kcg_comp_array_int_396 */

#ifndef kcg_comp_array_int_432
extern kcg_bool kcg_comp_array_int_432(
  array_int_432 *kcg_c1,
  array_int_432 *kcg_c2);
#endif /* kcg_comp_array_int_432 */

#ifndef kcg_comp_array_int_264
extern kcg_bool kcg_comp_array_int_264(
  array_int_264 *kcg_c1,
  array_int_264 *kcg_c2);
#endif /* kcg_comp_array_int_264 */

#ifndef kcg_comp_array_int_351
extern kcg_bool kcg_comp_array_int_351(
  array_int_351 *kcg_c1,
  array_int_351 *kcg_c2);
#endif /* kcg_comp_array_int_351 */

#define kcg_comp_BaliseGroupData_Basics kcg_comp_struct__30917

#define kcg_copy_BaliseGroupData_Basics kcg_copy_struct__30917

#define kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_comp_struct__30815

#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_copy_struct__30815

#define kcg_comp_M_003_T_TM_radio_messages kcg_comp_struct__31065

#define kcg_copy_M_003_T_TM_radio_messages kcg_copy_struct__31065

#define kcg_comp_M_008_T_TM_radio_messages kcg_comp_struct__31074

#define kcg_copy_M_008_T_TM_radio_messages kcg_copy_struct__31074

#define kcg_comp_M_015_T_TM_radio_messages kcg_comp_struct__31084

#define kcg_copy_M_015_T_TM_radio_messages kcg_copy_struct__31084

#define kcg_comp_M_024_T_TM_radio_messages kcg_comp_struct__31065

#define kcg_copy_M_024_T_TM_radio_messages kcg_copy_struct__31065

#define kcg_comp_M_032_T_TM_radio_messages kcg_comp_struct__31098

#define kcg_copy_M_032_T_TM_radio_messages kcg_copy_struct__31098

#define kcg_comp_M_015_int_T_TM_radio_messages kcg_comp_struct__31130

#define kcg_copy_M_015_int_T_TM_radio_messages kcg_copy_struct__31130

#define kcg_comp_M_003_int_T_TM_radio_messages kcg_comp_struct__31144

#define kcg_copy_M_003_int_T_TM_radio_messages kcg_copy_struct__31144

#define kcg_comp_R_data_internal_T_InfraLib kcg_comp_struct__31123

#define kcg_copy_R_data_internal_T_InfraLib kcg_copy_struct__31123

#define kcg_comp_M_024_int_T_TM_radio_messages kcg_comp_struct__31144

#define kcg_copy_M_024_int_T_TM_radio_messages kcg_copy_struct__31144

#define kcg_comp_TrainPosRaw_T_InfraLib kcg_comp_struct__30906

#define kcg_copy_TrainPosRaw_T_InfraLib kcg_copy_struct__30906

#define kcg_comp_M_008_int_T_TM_radio_messages kcg_comp_struct__31352

#define kcg_copy_M_008_int_T_TM_radio_messages kcg_copy_struct__31352

#define kcg_comp_TrackSectionData_T_InfraLib kcg_comp_struct__30912

#define kcg_copy_TrackSectionData_T_InfraLib kcg_copy_struct__30912

#define kcg_comp_M_TrackTrain_Radio_T_TM_radio_messages kcg_comp_struct__31108

#define kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages kcg_copy_struct__31108

#define kcg_comp_B_data_internal_T_InfraLib kcg_comp_struct__30925

#define kcg_copy_B_data_internal_T_InfraLib kcg_copy_struct__30925

#define kcg_comp_M_032_int_T_TM_radio_messages kcg_comp_struct__31362

#define kcg_copy_M_032_int_T_TM_radio_messages kcg_copy_struct__31362

#define kcg_comp_CompressedRadioMessage_TM kcg_comp_struct__30896

#define kcg_copy_CompressedRadioMessage_TM kcg_copy_struct__30896

#define kcg_comp_Radio_TrackTrain_Header_T_TM kcg_comp_struct__30878

#define kcg_copy_Radio_TrackTrain_Header_T_TM kcg_copy_struct__30878

#define kcg_comp_P015_OBU_sectionlist_int_T_TM kcg_comp_array__31169

#define kcg_copy_P015_OBU_sectionlist_int_T_TM kcg_copy_array__31169

#define kcg_comp_P015_section_array_T_TM kcg_comp_array_int_4

#define kcg_copy_P015_section_array_T_TM kcg_copy_array_int_4

#define kcg_comp_P015_OBU_sectionlist_array_T_TM kcg_comp_array_int_4_32

#define kcg_copy_P015_OBU_sectionlist_array_T_TM kcg_copy_array_int_4_32

#define kcg_comp_P015_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P015_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_P015_section_int_T_TM kcg_comp_struct__31156

#define kcg_copy_P015_section_int_T_TM kcg_copy_struct__31156

#define kcg_comp_P015_trackide_sectionlist_T_TM kcg_comp_array__31169

#define kcg_copy_P015_trackide_sectionlist_T_TM kcg_copy_array__31169

#define kcg_comp_P015_trackside_int_T_TM kcg_comp_struct__31172

#define kcg_copy_P015_trackside_int_T_TM kcg_copy_struct__31172

#define kcg_comp_P065_trackside_int_T_TM kcg_comp_struct__31308

#define kcg_copy_P065_trackside_int_T_TM kcg_copy_struct__31308

#define kcg_comp_P005_OBU_sectionlist_int_T_TM kcg_comp_array__31217

#define kcg_copy_P005_OBU_sectionlist_int_T_TM kcg_copy_array__31217

#define kcg_comp_P005_section_array_T_TM kcg_comp_array_int_7

#define kcg_copy_P005_section_array_T_TM kcg_copy_array_int_7

#define kcg_comp_P005_OBU_sectionlist_array_T_TM kcg_comp_array_int_7_33

#define kcg_copy_P005_OBU_sectionlist_array_T_TM kcg_copy_array_int_7_33

#define kcg_comp_P005_sections_array_flat_T_TM kcg_comp_array_int_231

#define kcg_copy_P005_sections_array_flat_T_TM kcg_copy_array_int_231

#define kcg_comp_P005_section_int_T_TM kcg_comp_struct__31201

#define kcg_copy_P005_section_int_T_TM kcg_copy_struct__31201

#define kcg_comp_P005_trackide_sectionlist_T_TM kcg_comp_array__31220

#define kcg_copy_P005_trackide_sectionlist_T_TM kcg_copy_array__31220

#define kcg_comp_P005_trackside_int_T_TM kcg_comp_struct__31223

#define kcg_copy_P005_trackside_int_T_TM kcg_copy_struct__31223

#define kcg_comp_P021_OBU_sectionlist_int_T_TM kcg_comp_array__31289

#define kcg_copy_P021_OBU_sectionlist_int_T_TM kcg_copy_array__31289

#define kcg_comp_P021_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P021_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P021_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P021_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P021_section_int_T_TM kcg_comp_struct__31283

#define kcg_copy_P021_section_int_T_TM kcg_copy_struct__31283

#define kcg_comp_P021_trackide_sectionlist_T_TM kcg_comp_array__31292

#define kcg_copy_P021_trackide_sectionlist_T_TM kcg_copy_array__31292

#define kcg_comp_P021_trackside_int_T_TM kcg_comp_struct__31295

#define kcg_copy_P021_trackside_int_T_TM kcg_copy_struct__31295

#define kcg_comp_P057_trackside_int_T_TM kcg_comp_struct__31321

#define kcg_copy_P057_trackside_int_T_TM kcg_copy_struct__31321

#define kcg_comp_P058_OBU_sectionlist_int_T_TM kcg_comp_array__31336

#define kcg_copy_P058_OBU_sectionlist_int_T_TM kcg_copy_array__31336

#define kcg_comp_P058_section_array_T_TM kcg_comp_array_int_2

#define kcg_copy_P058_section_array_T_TM kcg_copy_array_int_2

#define kcg_comp_P058_OBU_sectionlist_array_T_TM kcg_comp_array_int_2_32

#define kcg_copy_P058_OBU_sectionlist_array_T_TM kcg_copy_array_int_2_32

#define kcg_comp_P058_sections_array_flat_T_TM kcg_comp_array_int_64

#define kcg_copy_P058_sections_array_flat_T_TM kcg_copy_array_int_64

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_P058_section_int_T_TM kcg_comp_struct__31331

#define kcg_copy_P058_section_int_T_TM kcg_copy_struct__31331

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__30849

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__30849

#define kcg_comp_P058_trackide_sectionlist_T_TM kcg_comp_array__31336

#define kcg_copy_P058_trackide_sectionlist_T_TM kcg_copy_array__31336

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__30857

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__30857

#define kcg_comp_P058_trackside_int_T_TM kcg_comp_struct__31339

#define kcg_copy_P058_trackside_int_T_TM kcg_copy_struct__31339

#define kcg_comp_P137_trackside_int_T_TM kcg_comp_struct__30939

#define kcg_copy_P137_trackside_int_T_TM kcg_copy_struct__30939

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__30860

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__30860

#define kcg_comp_P041_OBU_sectionlist_int_T_TM kcg_comp_array__30962

#define kcg_copy_P041_OBU_sectionlist_int_T_TM kcg_copy_array__30962

#define kcg_comp_P041_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P041_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P041_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P041_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P041_section_int_T_TM kcg_comp_struct__30950

#define kcg_copy_P041_section_int_T_TM kcg_copy_struct__30950

#define kcg_comp_P041_trackide_sectionlist_T_TM kcg_comp_array__30965

#define kcg_copy_P041_trackide_sectionlist_T_TM kcg_copy_array__30965

#define kcg_comp_P041_trackside_int_T_TM kcg_comp_struct__30968

#define kcg_copy_P041_trackside_int_T_TM kcg_copy_struct__30968

#define kcg_comp_P046_OBU_sectionlist_int_T_TM kcg_comp_array__30996

#define kcg_copy_P046_OBU_sectionlist_int_T_TM kcg_copy_array__30996

#define kcg_comp_P046_section_array_T_TM kcg_comp_array_int_2

#define kcg_copy_P046_section_array_T_TM kcg_copy_array_int_2

#define kcg_comp_P046_OBU_sectionlist_array_T_TM kcg_comp_array_int_2_33

#define kcg_copy_P046_OBU_sectionlist_array_T_TM kcg_copy_array_int_2_33

#define kcg_comp_P046_sections_array_flat_T_TM kcg_comp_array_int_66

#define kcg_copy_P046_sections_array_flat_T_TM kcg_copy_array_int_66

#define kcg_comp_P046_section_int_T_TM kcg_comp_struct__30985

#define kcg_copy_P046_section_int_T_TM kcg_copy_struct__30985

#define kcg_comp_P046_trackide_sectionlist_T_TM kcg_comp_array__30999

#define kcg_copy_P046_trackide_sectionlist_T_TM kcg_copy_array__30999

#define kcg_comp_P046_trackside_int_T_TM kcg_comp_struct__31002

#define kcg_copy_P046_trackside_int_T_TM kcg_copy_struct__31002

#define kcg_comp_P042_trackside_int_T_TM kcg_comp_struct__31013

#define kcg_copy_P042_trackside_int_T_TM kcg_copy_struct__31013

#define kcg_comp_CompressedBaliseMessage_TM kcg_comp_struct__30901

#define kcg_copy_CompressedBaliseMessage_TM kcg_copy_struct__30901

#define kcg_comp_BaliseGroupData_TM kcg_comp_struct__30917

#define kcg_copy_BaliseGroupData_TM kcg_copy_struct__30917

#define kcg_comp_P045_trackside_int_T_TM kcg_comp_struct__31057

#define kcg_copy_P045_trackside_int_T_TM kcg_copy_struct__31057

#define kcg_comp_P255_trackside_int_T_TM kcg_comp_struct__30934

#define kcg_copy_P255_trackside_int_T_TM kcg_copy_struct__30934

#define kcg_comp_BaliseTelegramHeader_int_T_TM kcg_comp_struct__30865

#define kcg_copy_BaliseTelegramHeader_int_T_TM kcg_copy_struct__30865

#define kcg_comp_TelegramHeader_T_BG_Types_Pkg kcg_comp_struct__30833

#define kcg_copy_TelegramHeader_T_BG_Types_Pkg kcg_copy_struct__30833

#define kcg_comp_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_comp_array__31248

#define kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_copy_array__31248

#define kcg_comp_P027V1_section_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2

#define kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2

#define kcg_comp_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2_32

#define kcg_copy_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2_32

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array__31262

#define kcg_copy_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array__31262

#define kcg_comp_P027V1_section_int_T_TM_baseline2 kcg_comp_struct__31251

#define kcg_copy_P027V1_section_int_T_TM_baseline2 kcg_copy_struct__31251

#define kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_comp_array__31265

#define kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_copy_array__31265

#define kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2 kcg_comp_struct__31243

#define kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2 kcg_copy_struct__31243

#define kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_comp_array__31248

#define kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_copy_array__31248

#define kcg_comp_P027V1_trackside_int_T_TM_baseline2 kcg_comp_struct__31268

#define kcg_copy_P027V1_trackside_int_T_TM_baseline2 kcg_copy_struct__31268

#define kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P003V1_trackside_int_T_TM_baseline2 kcg_comp_struct__31028

#define kcg_copy_P003V1_trackside_int_T_TM_baseline2 kcg_copy_struct__31028

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-07-21T17:56:59
*************************************************************$ */


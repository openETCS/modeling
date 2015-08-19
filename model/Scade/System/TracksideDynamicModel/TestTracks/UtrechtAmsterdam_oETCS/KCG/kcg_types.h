/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-07-22T10:57:38
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
} struct__614690;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct__614690 Radio_TrackTrain_Header_T_Radio_Types_Pkg;

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
} struct__614708;

/* BG_Types_Pkg::TelegramHeader_T */
typedef struct__614708 TelegramHeader_T_BG_Types_Pkg;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__614724;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__614724 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__614732[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__614732 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__614735;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__614735 CompressedPackets_T_Common_Types_Pkg;

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
} struct__614740;

/* TM::BaliseTelegramHeader_int_T */
typedef struct__614740 BaliseTelegramHeader_int_T_TM;

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
} struct__614753;

/* TM::Radio_TrackTrain_Header_T */
typedef struct__614753 Radio_TrackTrain_Header_T_TM;

typedef struct {
  Radio_TrackTrain_Header_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__614771;

/* TM::CompressedRadioMessage */
typedef struct__614771 CompressedRadioMessage_TM;

typedef struct {
  BaliseTelegramHeader_int_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__614776;

/* TM::CompressedBaliseMessage */
typedef struct__614776 CompressedBaliseMessage_TM;

typedef struct {
  kcg_real TrainPos_in;
  kcg_int OffsetTotal;
  kcg_real TrainPosCalibrated;
} struct__614781;

/* InfraLib::TrainPosRaw_T */
typedef struct__614781 TrainPosRaw_T_InfraLib;

typedef struct {
  TrainPosRaw_T_InfraLib TrainPosRaw;
  CompressedBaliseMessage_TM BG_Message;
} struct__614787;

/* InfraLib::TrackSectionData_T */
typedef struct__614787 TrackSectionData_T_InfraLib;

typedef struct {
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Pos;
  OrBG_TM Or_BG;
  OrLine_TM Or_Line;
} struct__614792;

/* Basics::BaliseGroupData */
typedef struct__614792 BaliseGroupData_Basics;

/* TM::BaliseGroupData */
typedef struct__614792 BaliseGroupData_TM;

typedef struct {
  BaliseTelegramHeader_int_T_TM header;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int engineering_BG_location;
  kcg_real TrainPos;
  kcg_int pig_nom_0;
  kcg_bool balise_passed;
} struct__614800;

/* InfraLib::B_data_internal_T */
typedef struct__614800 B_data_internal_T_InfraLib;

typedef struct { kcg_bool valid; kcg_int NID_PACKET; } struct__614809;

/* TM::P255_trackside_int_T */
typedef struct__614809 P255_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SRSTOP;
} struct__614814;

/* TM::P137_trackside_int_T */
typedef struct__614814 P137_trackside_int_T_TM;

typedef kcg_int array_int_3[3];

/* TM::P041_section_array_T */
typedef array_int_3 P041_section_array_T_TM;

/* TM::P021_section_array_T */
typedef array_int_3 P021_section_array_T_TM;

typedef struct {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
} struct__614825;

/* TM::P041_section_int_T */
typedef struct__614825 P041_section_int_T_TM;

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

typedef P041_section_int_T_TM array__614837[33];

/* TM::P041_OBU_sectionlist_int_T */
typedef array__614837 P041_OBU_sectionlist_int_T_TM;

typedef P041_section_int_T_TM array__614840[32];

/* TM::P041_trackide_sectionlist_T */
typedef array__614840 P041_trackide_sectionlist_T_TM;

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
} struct__614843;

/* TM::P041_trackside_int_T */
typedef struct__614843 P041_trackside_int_T_TM;

typedef kcg_int array_int_2[2];

/* TM::P046_section_array_T */
typedef array_int_2 P046_section_array_T_TM;

/* TM::P058_section_array_T */
typedef array_int_2 P058_section_array_T_TM;

/* TM_baseline2::P027V1_section_array_qdiff_T */
typedef array_int_2 P027V1_section_array_qdiff_T_TM_baseline2;

typedef struct { kcg_int M_LEVELTR; kcg_int NID_NTC; } struct__614860;

/* TM::P046_section_int_T */
typedef struct__614860 P046_section_int_T_TM;

typedef P046_section_array_T_TM array_int_2_33[33];

/* TM::P046_OBU_sectionlist_array_T */
typedef array_int_2_33 P046_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_66[66];

/* TM::P046_sections_array_flat_T */
typedef array_int_66 P046_sections_array_flat_T_TM;

typedef P046_section_int_T_TM array__614871[33];

/* TM::P046_OBU_sectionlist_int_T */
typedef array__614871 P046_OBU_sectionlist_int_T_TM;

typedef P046_section_int_T_TM array__614874[32];

/* TM::P046_trackide_sectionlist_T */
typedef array__614874 P046_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int N_ITER;
  P046_trackide_sectionlist_T_TM SECTIONS;
} struct__614877;

/* TM::P046_trackside_int_T */
typedef struct__614877 P046_trackside_int_T_TM;

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
} struct__614888;

/* TM::P042_trackside_int_T */
typedef struct__614888 P042_trackside_int_T_TM;

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
} struct__614903;

/* TM_baseline2::P003V1_trackside_int_T */
typedef struct__614903 P003V1_trackside_int_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_MN;
} struct__614932;

/* TM::P045_trackside_int_T */
typedef struct__614932 P045_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
} struct__614940;

/* TM_radio_messages::M_024_T */
typedef struct__614940 M_024_T_TM_radio_messages;

/* TM_radio_messages::M_003_T */
typedef struct__614940 M_003_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_received;
} struct__614949;

/* TM_radio_messages::M_008_T */
typedef struct__614949 M_008_T_TM_radio_messages;

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
} struct__614959;

/* TM_radio_messages::M_015_T */
typedef struct__614959 M_015_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  M_VERSION m_version;
} struct__614973;

/* TM_radio_messages::M_032_T */
typedef struct__614973 M_032_T_TM_radio_messages;

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
} struct__614983;

/* TM_radio_messages::M_TrackTrain_Radio_T */
typedef struct__614983 M_TrackTrain_Radio_T_TM_radio_messages;

typedef struct {
  M_TrackTrain_Radio_T_TM_radio_messages message;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int trigger;
  kcg_bool message_sent;
} struct__614998;

/* InfraLib::R_data_internal_T */
typedef struct__614998 R_data_internal_T_InfraLib;

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
} struct__615005;

/* TM_radio_messages::M_015_int_T */
typedef struct__615005 M_015_int_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
} struct__615019;

/* TM_radio_messages::M_024_int_T */
typedef struct__615019 M_024_int_T_TM_radio_messages;

/* TM_radio_messages::M_003_int_T */
typedef struct__615019 M_003_int_T_TM_radio_messages;

typedef kcg_int array_int_4[4];

/* TM::P015_section_array_T */
typedef array_int_4 P015_section_array_T_TM;

typedef struct {
  kcg_int L_SECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
} struct__615031;

/* TM::P015_section_int_T */
typedef struct__615031 P015_section_int_T_TM;

typedef P015_section_array_T_TM array_int_4_32[32];

/* TM::P015_OBU_sectionlist_array_T */
typedef array_int_4_32 P015_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_128[128];

/* TM::P015_sections_array_flat_T */
typedef array_int_128 P015_sections_array_flat_T_TM;

typedef P015_section_int_T_TM array__615044[32];

/* TM::P015_trackide_sectionlist_T */
typedef array__615044 P015_trackide_sectionlist_T_TM;

/* TM::P015_OBU_sectionlist_int_T */
typedef array__615044 P015_OBU_sectionlist_int_T_TM;

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
} struct__615047;

/* TM::P015_trackside_int_T */
typedef struct__615047 P015_trackside_int_T_TM;

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
} struct__615076;

/* TM::P005_section_int_T */
typedef struct__615076 P005_section_int_T_TM;

typedef P005_section_array_T_TM array_int_7_33[33];

/* TM::P005_OBU_sectionlist_array_T */
typedef array_int_7_33 P005_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_231[231];

/* TM::P005_sections_array_flat_T */
typedef array_int_231 P005_sections_array_flat_T_TM;

typedef P005_section_int_T_TM array__615092[33];

/* TM::P005_OBU_sectionlist_int_T */
typedef array__615092 P005_OBU_sectionlist_int_T_TM;

typedef P005_section_int_T_TM array__615095[32];

/* TM::P005_trackide_sectionlist_T */
typedef array__615095 P005_trackide_sectionlist_T_TM;

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
} struct__615098;

/* TM::P005_trackside_int_T */
typedef struct__615098 P005_trackside_int_T_TM;

typedef kcg_int array_int_64[64];

/* TM::P058_sections_array_flat_T */
typedef array_int_64 P058_sections_array_flat_T_TM;

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef struct { kcg_int NC_DIFF; kcg_int V_DIFF; } struct__615118;

/* TM_baseline2::P027V1_section_int_qdiff_T */
typedef struct__615118 P027V1_section_int_qdiff_T_TM_baseline2;

typedef P027V1_section_int_qdiff_T_TM_baseline2 array__615123[32];

/* TM_baseline2::P027V1_trackside_qdifflist_T */
typedef array__615123 P027V1_trackside_qdifflist_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_int_qdiff_T */
typedef array__615123 P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2;

typedef struct {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
} struct__615126;

/* TM_baseline2::P027V1_section_int_T */
typedef struct__615126 P027V1_section_int_T_TM_baseline2;

typedef array_int_2 array_int_2_32[32];

/* TM::P058_OBU_sectionlist_array_T */
typedef array_int_2_32 P058_OBU_sectionlist_array_T_TM;

/* TM_baseline2::P027V1_OBU_sectionlist_array_qdiff_T */
typedef array_int_2_32 P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__615137[33];

/* TM_baseline2::P027V1_OBU_sectionlist_int_T */
typedef array__615137 P027V1_OBU_sectionlist_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__615140[32];

/* TM_baseline2::P027V1_trackside_sectionlist_T */
typedef array__615140 P027V1_trackside_sectionlist_T_TM_baseline2;

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
} struct__615143;

/* TM_baseline2::P027V1_trackside_int_T */
typedef struct__615143 P027V1_trackside_int_T_TM_baseline2;

typedef struct {
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
} struct__615158;

/* TM::P021_section_int_T */
typedef struct__615158 P021_section_int_T_TM;

typedef P021_section_int_T_TM array__615164[33];

/* TM::P021_OBU_sectionlist_int_T */
typedef array__615164 P021_OBU_sectionlist_int_T_TM;

typedef P021_section_int_T_TM array__615167[32];

/* TM::P021_trackide_sectionlist_T */
typedef array__615167 P021_trackide_sectionlist_T_TM;

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
} struct__615170;

/* TM::P021_trackside_int_T */
typedef struct__615170 P021_trackside_int_T_TM;

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
} struct__615183;

/* TM::P065_trackside_int_T */
typedef struct__615183 P065_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int T_MAR;
  kcg_int T_TIMEOUTRQST;
  kcg_int T_CYCRQST;
} struct__615196;

/* TM::P057_trackside_int_T */
typedef struct__615196 P057_trackside_int_T_TM;

typedef struct { kcg_int D_LOC; kcg_int Q_LGTLOC; } struct__615206;

/* TM::P058_section_int_T */
typedef struct__615206 P058_section_int_T_TM;

typedef P058_section_int_T_TM array__615211[32];

/* TM::P058_trackide_sectionlist_T */
typedef array__615211 P058_trackide_sectionlist_T_TM;

/* TM::P058_OBU_sectionlist_int_T */
typedef array__615211 P058_OBU_sectionlist_int_T_TM;

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
} struct__615214;

/* TM::P058_trackside_int_T */
typedef struct__615214 P058_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
  kcg_int t_train_received;
} struct__615227;

/* TM_radio_messages::M_008_int_T */
typedef struct__615227 M_008_int_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
  kcg_int m_version;
} struct__615237;

/* TM_radio_messages::M_032_int_T */
typedef struct__615237 M_032_int_T_TM_radio_messages;

typedef kcg_int array_int_432[432];

typedef kcg_int array_int_351[351];

typedef kcg_int array_int_1[1];

typedef kcg_int array_int_491[491];

typedef kcg_int array_int_264[264];

typedef kcg_int array_int_396[396];

typedef kcg_int array_int_494[494];

typedef kcg_int array_int_428[428];

typedef kcg_int array_int_395[395];

typedef kcg_int array_int_430[430];

typedef kcg_int array_int_444[444];

typedef kcg_int array_int_492[492];

typedef kcg_int array_int_496[496];

typedef kcg_int array_int_499[499];

#ifndef kcg_copy_struct__614690
#define kcg_copy_struct__614690(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__614690)))
#endif /* kcg_copy_struct__614690 */

#ifndef kcg_copy_struct__614708
#define kcg_copy_struct__614708(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__614708)))
#endif /* kcg_copy_struct__614708 */

#ifndef kcg_copy_struct__614724
#define kcg_copy_struct__614724(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__614724)))
#endif /* kcg_copy_struct__614724 */

#ifndef kcg_copy_struct__614735
#define kcg_copy_struct__614735(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__614735)))
#endif /* kcg_copy_struct__614735 */

#ifndef kcg_copy_struct__614740
#define kcg_copy_struct__614740(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__614740)))
#endif /* kcg_copy_struct__614740 */

#ifndef kcg_copy_struct__614753
#define kcg_copy_struct__614753(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__614753)))
#endif /* kcg_copy_struct__614753 */

#ifndef kcg_copy_struct__614771
#define kcg_copy_struct__614771(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__614771)))
#endif /* kcg_copy_struct__614771 */

#ifndef kcg_copy_struct__614776
#define kcg_copy_struct__614776(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__614776)))
#endif /* kcg_copy_struct__614776 */

#ifndef kcg_copy_struct__614781
#define kcg_copy_struct__614781(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__614781)))
#endif /* kcg_copy_struct__614781 */

#ifndef kcg_copy_struct__614787
#define kcg_copy_struct__614787(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__614787)))
#endif /* kcg_copy_struct__614787 */

#ifndef kcg_copy_struct__614792
#define kcg_copy_struct__614792(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__614792)))
#endif /* kcg_copy_struct__614792 */

#ifndef kcg_copy_struct__614800
#define kcg_copy_struct__614800(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__614800)))
#endif /* kcg_copy_struct__614800 */

#ifndef kcg_copy_struct__614809
#define kcg_copy_struct__614809(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__614809)))
#endif /* kcg_copy_struct__614809 */

#ifndef kcg_copy_struct__614814
#define kcg_copy_struct__614814(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__614814)))
#endif /* kcg_copy_struct__614814 */

#ifndef kcg_copy_struct__614825
#define kcg_copy_struct__614825(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__614825)))
#endif /* kcg_copy_struct__614825 */

#ifndef kcg_copy_struct__614843
#define kcg_copy_struct__614843(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__614843)))
#endif /* kcg_copy_struct__614843 */

#ifndef kcg_copy_struct__614860
#define kcg_copy_struct__614860(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__614860)))
#endif /* kcg_copy_struct__614860 */

#ifndef kcg_copy_struct__614877
#define kcg_copy_struct__614877(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__614877)))
#endif /* kcg_copy_struct__614877 */

#ifndef kcg_copy_struct__614888
#define kcg_copy_struct__614888(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__614888)))
#endif /* kcg_copy_struct__614888 */

#ifndef kcg_copy_struct__614903
#define kcg_copy_struct__614903(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__614903)))
#endif /* kcg_copy_struct__614903 */

#ifndef kcg_copy_struct__614932
#define kcg_copy_struct__614932(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__614932)))
#endif /* kcg_copy_struct__614932 */

#ifndef kcg_copy_struct__614940
#define kcg_copy_struct__614940(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__614940)))
#endif /* kcg_copy_struct__614940 */

#ifndef kcg_copy_struct__614949
#define kcg_copy_struct__614949(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__614949)))
#endif /* kcg_copy_struct__614949 */

#ifndef kcg_copy_struct__614959
#define kcg_copy_struct__614959(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__614959)))
#endif /* kcg_copy_struct__614959 */

#ifndef kcg_copy_struct__614973
#define kcg_copy_struct__614973(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__614973)))
#endif /* kcg_copy_struct__614973 */

#ifndef kcg_copy_struct__614983
#define kcg_copy_struct__614983(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__614983)))
#endif /* kcg_copy_struct__614983 */

#ifndef kcg_copy_struct__614998
#define kcg_copy_struct__614998(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__614998)))
#endif /* kcg_copy_struct__614998 */

#ifndef kcg_copy_struct__615005
#define kcg_copy_struct__615005(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__615005)))
#endif /* kcg_copy_struct__615005 */

#ifndef kcg_copy_struct__615019
#define kcg_copy_struct__615019(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__615019)))
#endif /* kcg_copy_struct__615019 */

#ifndef kcg_copy_struct__615031
#define kcg_copy_struct__615031(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__615031)))
#endif /* kcg_copy_struct__615031 */

#ifndef kcg_copy_struct__615047
#define kcg_copy_struct__615047(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__615047)))
#endif /* kcg_copy_struct__615047 */

#ifndef kcg_copy_struct__615076
#define kcg_copy_struct__615076(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__615076)))
#endif /* kcg_copy_struct__615076 */

#ifndef kcg_copy_struct__615098
#define kcg_copy_struct__615098(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__615098)))
#endif /* kcg_copy_struct__615098 */

#ifndef kcg_copy_struct__615118
#define kcg_copy_struct__615118(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__615118)))
#endif /* kcg_copy_struct__615118 */

#ifndef kcg_copy_struct__615126
#define kcg_copy_struct__615126(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__615126)))
#endif /* kcg_copy_struct__615126 */

#ifndef kcg_copy_struct__615143
#define kcg_copy_struct__615143(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__615143)))
#endif /* kcg_copy_struct__615143 */

#ifndef kcg_copy_struct__615158
#define kcg_copy_struct__615158(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__615158)))
#endif /* kcg_copy_struct__615158 */

#ifndef kcg_copy_struct__615170
#define kcg_copy_struct__615170(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__615170)))
#endif /* kcg_copy_struct__615170 */

#ifndef kcg_copy_struct__615183
#define kcg_copy_struct__615183(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__615183)))
#endif /* kcg_copy_struct__615183 */

#ifndef kcg_copy_struct__615196
#define kcg_copy_struct__615196(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__615196)))
#endif /* kcg_copy_struct__615196 */

#ifndef kcg_copy_struct__615206
#define kcg_copy_struct__615206(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__615206)))
#endif /* kcg_copy_struct__615206 */

#ifndef kcg_copy_struct__615214
#define kcg_copy_struct__615214(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__615214)))
#endif /* kcg_copy_struct__615214 */

#ifndef kcg_copy_struct__615227
#define kcg_copy_struct__615227(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__615227)))
#endif /* kcg_copy_struct__615227 */

#ifndef kcg_copy_struct__615237
#define kcg_copy_struct__615237(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__615237)))
#endif /* kcg_copy_struct__615237 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__614732
#define kcg_copy_array__614732(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__614732)))
#endif /* kcg_copy_array__614732 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_int_3_33
#define kcg_copy_array_int_3_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33)))
#endif /* kcg_copy_array_int_3_33 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__614837
#define kcg_copy_array__614837(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__614837)))
#endif /* kcg_copy_array__614837 */

#ifndef kcg_copy_array__614840
#define kcg_copy_array__614840(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__614840)))
#endif /* kcg_copy_array__614840 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array_int_2_33
#define kcg_copy_array_int_2_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_33)))
#endif /* kcg_copy_array_int_2_33 */

#ifndef kcg_copy_array_int_66
#define kcg_copy_array_int_66(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_66)))
#endif /* kcg_copy_array_int_66 */

#ifndef kcg_copy_array__614871
#define kcg_copy_array__614871(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__614871)))
#endif /* kcg_copy_array__614871 */

#ifndef kcg_copy_array__614874
#define kcg_copy_array__614874(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__614874)))
#endif /* kcg_copy_array__614874 */

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

#ifndef kcg_copy_array__615044
#define kcg_copy_array__615044(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__615044)))
#endif /* kcg_copy_array__615044 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array_int_7_33
#define kcg_copy_array_int_7_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33)))
#endif /* kcg_copy_array_int_7_33 */

#ifndef kcg_copy_array_int_231
#define kcg_copy_array_int_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231)))
#endif /* kcg_copy_array_int_231 */

#ifndef kcg_copy_array__615092
#define kcg_copy_array__615092(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__615092)))
#endif /* kcg_copy_array__615092 */

#ifndef kcg_copy_array__615095
#define kcg_copy_array__615095(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__615095)))
#endif /* kcg_copy_array__615095 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array__615123
#define kcg_copy_array__615123(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__615123)))
#endif /* kcg_copy_array__615123 */

#ifndef kcg_copy_array_int_2_32
#define kcg_copy_array_int_2_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32)))
#endif /* kcg_copy_array_int_2_32 */

#ifndef kcg_copy_array__615137
#define kcg_copy_array__615137(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__615137)))
#endif /* kcg_copy_array__615137 */

#ifndef kcg_copy_array__615140
#define kcg_copy_array__615140(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__615140)))
#endif /* kcg_copy_array__615140 */

#ifndef kcg_copy_array__615164
#define kcg_copy_array__615164(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__615164)))
#endif /* kcg_copy_array__615164 */

#ifndef kcg_copy_array__615167
#define kcg_copy_array__615167(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__615167)))
#endif /* kcg_copy_array__615167 */

#ifndef kcg_copy_array__615211
#define kcg_copy_array__615211(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__615211)))
#endif /* kcg_copy_array__615211 */

#ifndef kcg_copy_array_int_432
#define kcg_copy_array_int_432(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_432)))
#endif /* kcg_copy_array_int_432 */

#ifndef kcg_copy_array_int_351
#define kcg_copy_array_int_351(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_351)))
#endif /* kcg_copy_array_int_351 */

#ifndef kcg_copy_array_int_1
#define kcg_copy_array_int_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_1)))
#endif /* kcg_copy_array_int_1 */

#ifndef kcg_copy_array_int_491
#define kcg_copy_array_int_491(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_491)))
#endif /* kcg_copy_array_int_491 */

#ifndef kcg_copy_array_int_264
#define kcg_copy_array_int_264(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_264)))
#endif /* kcg_copy_array_int_264 */

#ifndef kcg_copy_array_int_396
#define kcg_copy_array_int_396(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_396)))
#endif /* kcg_copy_array_int_396 */

#ifndef kcg_copy_array_int_494
#define kcg_copy_array_int_494(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_494)))
#endif /* kcg_copy_array_int_494 */

#ifndef kcg_copy_array_int_428
#define kcg_copy_array_int_428(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_428)))
#endif /* kcg_copy_array_int_428 */

#ifndef kcg_copy_array_int_395
#define kcg_copy_array_int_395(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_395)))
#endif /* kcg_copy_array_int_395 */

#ifndef kcg_copy_array_int_430
#define kcg_copy_array_int_430(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_430)))
#endif /* kcg_copy_array_int_430 */

#ifndef kcg_copy_array_int_444
#define kcg_copy_array_int_444(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_444)))
#endif /* kcg_copy_array_int_444 */

#ifndef kcg_copy_array_int_492
#define kcg_copy_array_int_492(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_492)))
#endif /* kcg_copy_array_int_492 */

#ifndef kcg_copy_array_int_496
#define kcg_copy_array_int_496(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_496)))
#endif /* kcg_copy_array_int_496 */

#ifndef kcg_copy_array_int_499
#define kcg_copy_array_int_499(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_499)))
#endif /* kcg_copy_array_int_499 */

#ifndef kcg_comp_struct__614690
extern kcg_bool kcg_comp_struct__614690(
  struct__614690 *kcg_c1,
  struct__614690 *kcg_c2);
#endif /* kcg_comp_struct__614690 */

#ifndef kcg_comp_struct__614708
extern kcg_bool kcg_comp_struct__614708(
  struct__614708 *kcg_c1,
  struct__614708 *kcg_c2);
#endif /* kcg_comp_struct__614708 */

#ifndef kcg_comp_struct__614724
extern kcg_bool kcg_comp_struct__614724(
  struct__614724 *kcg_c1,
  struct__614724 *kcg_c2);
#endif /* kcg_comp_struct__614724 */

#ifndef kcg_comp_struct__614735
extern kcg_bool kcg_comp_struct__614735(
  struct__614735 *kcg_c1,
  struct__614735 *kcg_c2);
#endif /* kcg_comp_struct__614735 */

#ifndef kcg_comp_struct__614740
extern kcg_bool kcg_comp_struct__614740(
  struct__614740 *kcg_c1,
  struct__614740 *kcg_c2);
#endif /* kcg_comp_struct__614740 */

#ifndef kcg_comp_struct__614753
extern kcg_bool kcg_comp_struct__614753(
  struct__614753 *kcg_c1,
  struct__614753 *kcg_c2);
#endif /* kcg_comp_struct__614753 */

#ifndef kcg_comp_struct__614771
extern kcg_bool kcg_comp_struct__614771(
  struct__614771 *kcg_c1,
  struct__614771 *kcg_c2);
#endif /* kcg_comp_struct__614771 */

#ifndef kcg_comp_struct__614776
extern kcg_bool kcg_comp_struct__614776(
  struct__614776 *kcg_c1,
  struct__614776 *kcg_c2);
#endif /* kcg_comp_struct__614776 */

#ifndef kcg_comp_struct__614781
extern kcg_bool kcg_comp_struct__614781(
  struct__614781 *kcg_c1,
  struct__614781 *kcg_c2);
#endif /* kcg_comp_struct__614781 */

#ifndef kcg_comp_struct__614787
extern kcg_bool kcg_comp_struct__614787(
  struct__614787 *kcg_c1,
  struct__614787 *kcg_c2);
#endif /* kcg_comp_struct__614787 */

#ifndef kcg_comp_struct__614792
extern kcg_bool kcg_comp_struct__614792(
  struct__614792 *kcg_c1,
  struct__614792 *kcg_c2);
#endif /* kcg_comp_struct__614792 */

#ifndef kcg_comp_struct__614800
extern kcg_bool kcg_comp_struct__614800(
  struct__614800 *kcg_c1,
  struct__614800 *kcg_c2);
#endif /* kcg_comp_struct__614800 */

#ifndef kcg_comp_struct__614809
extern kcg_bool kcg_comp_struct__614809(
  struct__614809 *kcg_c1,
  struct__614809 *kcg_c2);
#endif /* kcg_comp_struct__614809 */

#ifndef kcg_comp_struct__614814
extern kcg_bool kcg_comp_struct__614814(
  struct__614814 *kcg_c1,
  struct__614814 *kcg_c2);
#endif /* kcg_comp_struct__614814 */

#ifndef kcg_comp_struct__614825
extern kcg_bool kcg_comp_struct__614825(
  struct__614825 *kcg_c1,
  struct__614825 *kcg_c2);
#endif /* kcg_comp_struct__614825 */

#ifndef kcg_comp_struct__614843
extern kcg_bool kcg_comp_struct__614843(
  struct__614843 *kcg_c1,
  struct__614843 *kcg_c2);
#endif /* kcg_comp_struct__614843 */

#ifndef kcg_comp_struct__614860
extern kcg_bool kcg_comp_struct__614860(
  struct__614860 *kcg_c1,
  struct__614860 *kcg_c2);
#endif /* kcg_comp_struct__614860 */

#ifndef kcg_comp_struct__614877
extern kcg_bool kcg_comp_struct__614877(
  struct__614877 *kcg_c1,
  struct__614877 *kcg_c2);
#endif /* kcg_comp_struct__614877 */

#ifndef kcg_comp_struct__614888
extern kcg_bool kcg_comp_struct__614888(
  struct__614888 *kcg_c1,
  struct__614888 *kcg_c2);
#endif /* kcg_comp_struct__614888 */

#ifndef kcg_comp_struct__614903
extern kcg_bool kcg_comp_struct__614903(
  struct__614903 *kcg_c1,
  struct__614903 *kcg_c2);
#endif /* kcg_comp_struct__614903 */

#ifndef kcg_comp_struct__614932
extern kcg_bool kcg_comp_struct__614932(
  struct__614932 *kcg_c1,
  struct__614932 *kcg_c2);
#endif /* kcg_comp_struct__614932 */

#ifndef kcg_comp_struct__614940
extern kcg_bool kcg_comp_struct__614940(
  struct__614940 *kcg_c1,
  struct__614940 *kcg_c2);
#endif /* kcg_comp_struct__614940 */

#ifndef kcg_comp_struct__614949
extern kcg_bool kcg_comp_struct__614949(
  struct__614949 *kcg_c1,
  struct__614949 *kcg_c2);
#endif /* kcg_comp_struct__614949 */

#ifndef kcg_comp_struct__614959
extern kcg_bool kcg_comp_struct__614959(
  struct__614959 *kcg_c1,
  struct__614959 *kcg_c2);
#endif /* kcg_comp_struct__614959 */

#ifndef kcg_comp_struct__614973
extern kcg_bool kcg_comp_struct__614973(
  struct__614973 *kcg_c1,
  struct__614973 *kcg_c2);
#endif /* kcg_comp_struct__614973 */

#ifndef kcg_comp_struct__614983
extern kcg_bool kcg_comp_struct__614983(
  struct__614983 *kcg_c1,
  struct__614983 *kcg_c2);
#endif /* kcg_comp_struct__614983 */

#ifndef kcg_comp_struct__614998
extern kcg_bool kcg_comp_struct__614998(
  struct__614998 *kcg_c1,
  struct__614998 *kcg_c2);
#endif /* kcg_comp_struct__614998 */

#ifndef kcg_comp_struct__615005
extern kcg_bool kcg_comp_struct__615005(
  struct__615005 *kcg_c1,
  struct__615005 *kcg_c2);
#endif /* kcg_comp_struct__615005 */

#ifndef kcg_comp_struct__615019
extern kcg_bool kcg_comp_struct__615019(
  struct__615019 *kcg_c1,
  struct__615019 *kcg_c2);
#endif /* kcg_comp_struct__615019 */

#ifndef kcg_comp_struct__615031
extern kcg_bool kcg_comp_struct__615031(
  struct__615031 *kcg_c1,
  struct__615031 *kcg_c2);
#endif /* kcg_comp_struct__615031 */

#ifndef kcg_comp_struct__615047
extern kcg_bool kcg_comp_struct__615047(
  struct__615047 *kcg_c1,
  struct__615047 *kcg_c2);
#endif /* kcg_comp_struct__615047 */

#ifndef kcg_comp_struct__615076
extern kcg_bool kcg_comp_struct__615076(
  struct__615076 *kcg_c1,
  struct__615076 *kcg_c2);
#endif /* kcg_comp_struct__615076 */

#ifndef kcg_comp_struct__615098
extern kcg_bool kcg_comp_struct__615098(
  struct__615098 *kcg_c1,
  struct__615098 *kcg_c2);
#endif /* kcg_comp_struct__615098 */

#ifndef kcg_comp_struct__615118
extern kcg_bool kcg_comp_struct__615118(
  struct__615118 *kcg_c1,
  struct__615118 *kcg_c2);
#endif /* kcg_comp_struct__615118 */

#ifndef kcg_comp_struct__615126
extern kcg_bool kcg_comp_struct__615126(
  struct__615126 *kcg_c1,
  struct__615126 *kcg_c2);
#endif /* kcg_comp_struct__615126 */

#ifndef kcg_comp_struct__615143
extern kcg_bool kcg_comp_struct__615143(
  struct__615143 *kcg_c1,
  struct__615143 *kcg_c2);
#endif /* kcg_comp_struct__615143 */

#ifndef kcg_comp_struct__615158
extern kcg_bool kcg_comp_struct__615158(
  struct__615158 *kcg_c1,
  struct__615158 *kcg_c2);
#endif /* kcg_comp_struct__615158 */

#ifndef kcg_comp_struct__615170
extern kcg_bool kcg_comp_struct__615170(
  struct__615170 *kcg_c1,
  struct__615170 *kcg_c2);
#endif /* kcg_comp_struct__615170 */

#ifndef kcg_comp_struct__615183
extern kcg_bool kcg_comp_struct__615183(
  struct__615183 *kcg_c1,
  struct__615183 *kcg_c2);
#endif /* kcg_comp_struct__615183 */

#ifndef kcg_comp_struct__615196
extern kcg_bool kcg_comp_struct__615196(
  struct__615196 *kcg_c1,
  struct__615196 *kcg_c2);
#endif /* kcg_comp_struct__615196 */

#ifndef kcg_comp_struct__615206
extern kcg_bool kcg_comp_struct__615206(
  struct__615206 *kcg_c1,
  struct__615206 *kcg_c2);
#endif /* kcg_comp_struct__615206 */

#ifndef kcg_comp_struct__615214
extern kcg_bool kcg_comp_struct__615214(
  struct__615214 *kcg_c1,
  struct__615214 *kcg_c2);
#endif /* kcg_comp_struct__615214 */

#ifndef kcg_comp_struct__615227
extern kcg_bool kcg_comp_struct__615227(
  struct__615227 *kcg_c1,
  struct__615227 *kcg_c2);
#endif /* kcg_comp_struct__615227 */

#ifndef kcg_comp_struct__615237
extern kcg_bool kcg_comp_struct__615237(
  struct__615237 *kcg_c1,
  struct__615237 *kcg_c2);
#endif /* kcg_comp_struct__615237 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__614732
extern kcg_bool kcg_comp_array__614732(
  array__614732 *kcg_c1,
  array__614732 *kcg_c2);
#endif /* kcg_comp_array__614732 */

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

#ifndef kcg_comp_array__614837
extern kcg_bool kcg_comp_array__614837(
  array__614837 *kcg_c1,
  array__614837 *kcg_c2);
#endif /* kcg_comp_array__614837 */

#ifndef kcg_comp_array__614840
extern kcg_bool kcg_comp_array__614840(
  array__614840 *kcg_c1,
  array__614840 *kcg_c2);
#endif /* kcg_comp_array__614840 */

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

#ifndef kcg_comp_array__614871
extern kcg_bool kcg_comp_array__614871(
  array__614871 *kcg_c1,
  array__614871 *kcg_c2);
#endif /* kcg_comp_array__614871 */

#ifndef kcg_comp_array__614874
extern kcg_bool kcg_comp_array__614874(
  array__614874 *kcg_c1,
  array__614874 *kcg_c2);
#endif /* kcg_comp_array__614874 */

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

#ifndef kcg_comp_array__615044
extern kcg_bool kcg_comp_array__615044(
  array__615044 *kcg_c1,
  array__615044 *kcg_c2);
#endif /* kcg_comp_array__615044 */

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

#ifndef kcg_comp_array__615092
extern kcg_bool kcg_comp_array__615092(
  array__615092 *kcg_c1,
  array__615092 *kcg_c2);
#endif /* kcg_comp_array__615092 */

#ifndef kcg_comp_array__615095
extern kcg_bool kcg_comp_array__615095(
  array__615095 *kcg_c1,
  array__615095 *kcg_c2);
#endif /* kcg_comp_array__615095 */

#ifndef kcg_comp_array_int_64
extern kcg_bool kcg_comp_array_int_64(
  array_int_64 *kcg_c1,
  array_int_64 *kcg_c2);
#endif /* kcg_comp_array_int_64 */

#ifndef kcg_comp_array__615123
extern kcg_bool kcg_comp_array__615123(
  array__615123 *kcg_c1,
  array__615123 *kcg_c2);
#endif /* kcg_comp_array__615123 */

#ifndef kcg_comp_array_int_2_32
extern kcg_bool kcg_comp_array_int_2_32(
  array_int_2_32 *kcg_c1,
  array_int_2_32 *kcg_c2);
#endif /* kcg_comp_array_int_2_32 */

#ifndef kcg_comp_array__615137
extern kcg_bool kcg_comp_array__615137(
  array__615137 *kcg_c1,
  array__615137 *kcg_c2);
#endif /* kcg_comp_array__615137 */

#ifndef kcg_comp_array__615140
extern kcg_bool kcg_comp_array__615140(
  array__615140 *kcg_c1,
  array__615140 *kcg_c2);
#endif /* kcg_comp_array__615140 */

#ifndef kcg_comp_array__615164
extern kcg_bool kcg_comp_array__615164(
  array__615164 *kcg_c1,
  array__615164 *kcg_c2);
#endif /* kcg_comp_array__615164 */

#ifndef kcg_comp_array__615167
extern kcg_bool kcg_comp_array__615167(
  array__615167 *kcg_c1,
  array__615167 *kcg_c2);
#endif /* kcg_comp_array__615167 */

#ifndef kcg_comp_array__615211
extern kcg_bool kcg_comp_array__615211(
  array__615211 *kcg_c1,
  array__615211 *kcg_c2);
#endif /* kcg_comp_array__615211 */

#ifndef kcg_comp_array_int_432
extern kcg_bool kcg_comp_array_int_432(
  array_int_432 *kcg_c1,
  array_int_432 *kcg_c2);
#endif /* kcg_comp_array_int_432 */

#ifndef kcg_comp_array_int_351
extern kcg_bool kcg_comp_array_int_351(
  array_int_351 *kcg_c1,
  array_int_351 *kcg_c2);
#endif /* kcg_comp_array_int_351 */

#ifndef kcg_comp_array_int_1
extern kcg_bool kcg_comp_array_int_1(array_int_1 *kcg_c1, array_int_1 *kcg_c2);
#endif /* kcg_comp_array_int_1 */

#ifndef kcg_comp_array_int_491
extern kcg_bool kcg_comp_array_int_491(
  array_int_491 *kcg_c1,
  array_int_491 *kcg_c2);
#endif /* kcg_comp_array_int_491 */

#ifndef kcg_comp_array_int_264
extern kcg_bool kcg_comp_array_int_264(
  array_int_264 *kcg_c1,
  array_int_264 *kcg_c2);
#endif /* kcg_comp_array_int_264 */

#ifndef kcg_comp_array_int_396
extern kcg_bool kcg_comp_array_int_396(
  array_int_396 *kcg_c1,
  array_int_396 *kcg_c2);
#endif /* kcg_comp_array_int_396 */

#ifndef kcg_comp_array_int_494
extern kcg_bool kcg_comp_array_int_494(
  array_int_494 *kcg_c1,
  array_int_494 *kcg_c2);
#endif /* kcg_comp_array_int_494 */

#ifndef kcg_comp_array_int_428
extern kcg_bool kcg_comp_array_int_428(
  array_int_428 *kcg_c1,
  array_int_428 *kcg_c2);
#endif /* kcg_comp_array_int_428 */

#ifndef kcg_comp_array_int_395
extern kcg_bool kcg_comp_array_int_395(
  array_int_395 *kcg_c1,
  array_int_395 *kcg_c2);
#endif /* kcg_comp_array_int_395 */

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

#ifndef kcg_comp_array_int_492
extern kcg_bool kcg_comp_array_int_492(
  array_int_492 *kcg_c1,
  array_int_492 *kcg_c2);
#endif /* kcg_comp_array_int_492 */

#ifndef kcg_comp_array_int_496
extern kcg_bool kcg_comp_array_int_496(
  array_int_496 *kcg_c1,
  array_int_496 *kcg_c2);
#endif /* kcg_comp_array_int_496 */

#ifndef kcg_comp_array_int_499
extern kcg_bool kcg_comp_array_int_499(
  array_int_499 *kcg_c1,
  array_int_499 *kcg_c2);
#endif /* kcg_comp_array_int_499 */

#define kcg_comp_BaliseGroupData_Basics kcg_comp_struct__614792

#define kcg_copy_BaliseGroupData_Basics kcg_copy_struct__614792

#define kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_comp_struct__614690

#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_copy_struct__614690

#define kcg_comp_M_003_T_TM_radio_messages kcg_comp_struct__614940

#define kcg_copy_M_003_T_TM_radio_messages kcg_copy_struct__614940

#define kcg_comp_M_008_T_TM_radio_messages kcg_comp_struct__614949

#define kcg_copy_M_008_T_TM_radio_messages kcg_copy_struct__614949

#define kcg_comp_M_015_T_TM_radio_messages kcg_comp_struct__614959

#define kcg_copy_M_015_T_TM_radio_messages kcg_copy_struct__614959

#define kcg_comp_M_024_T_TM_radio_messages kcg_comp_struct__614940

#define kcg_copy_M_024_T_TM_radio_messages kcg_copy_struct__614940

#define kcg_comp_M_032_T_TM_radio_messages kcg_comp_struct__614973

#define kcg_copy_M_032_T_TM_radio_messages kcg_copy_struct__614973

#define kcg_comp_M_015_int_T_TM_radio_messages kcg_comp_struct__615005

#define kcg_copy_M_015_int_T_TM_radio_messages kcg_copy_struct__615005

#define kcg_comp_M_003_int_T_TM_radio_messages kcg_comp_struct__615019

#define kcg_copy_M_003_int_T_TM_radio_messages kcg_copy_struct__615019

#define kcg_comp_R_data_internal_T_InfraLib kcg_comp_struct__614998

#define kcg_copy_R_data_internal_T_InfraLib kcg_copy_struct__614998

#define kcg_comp_M_024_int_T_TM_radio_messages kcg_comp_struct__615019

#define kcg_copy_M_024_int_T_TM_radio_messages kcg_copy_struct__615019

#define kcg_comp_TrainPosRaw_T_InfraLib kcg_comp_struct__614781

#define kcg_copy_TrainPosRaw_T_InfraLib kcg_copy_struct__614781

#define kcg_comp_M_008_int_T_TM_radio_messages kcg_comp_struct__615227

#define kcg_copy_M_008_int_T_TM_radio_messages kcg_copy_struct__615227

#define kcg_comp_TrackSectionData_T_InfraLib kcg_comp_struct__614787

#define kcg_copy_TrackSectionData_T_InfraLib kcg_copy_struct__614787

#define kcg_comp_M_TrackTrain_Radio_T_TM_radio_messages kcg_comp_struct__614983

#define kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages kcg_copy_struct__614983

#define kcg_comp_B_data_internal_T_InfraLib kcg_comp_struct__614800

#define kcg_copy_B_data_internal_T_InfraLib kcg_copy_struct__614800

#define kcg_comp_M_032_int_T_TM_radio_messages kcg_comp_struct__615237

#define kcg_copy_M_032_int_T_TM_radio_messages kcg_copy_struct__615237

#define kcg_comp_CompressedRadioMessage_TM kcg_comp_struct__614771

#define kcg_copy_CompressedRadioMessage_TM kcg_copy_struct__614771

#define kcg_comp_Radio_TrackTrain_Header_T_TM kcg_comp_struct__614753

#define kcg_copy_Radio_TrackTrain_Header_T_TM kcg_copy_struct__614753

#define kcg_comp_P015_OBU_sectionlist_int_T_TM kcg_comp_array__615044

#define kcg_copy_P015_OBU_sectionlist_int_T_TM kcg_copy_array__615044

#define kcg_comp_P015_section_array_T_TM kcg_comp_array_int_4

#define kcg_copy_P015_section_array_T_TM kcg_copy_array_int_4

#define kcg_comp_P015_OBU_sectionlist_array_T_TM kcg_comp_array_int_4_32

#define kcg_copy_P015_OBU_sectionlist_array_T_TM kcg_copy_array_int_4_32

#define kcg_comp_P015_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P015_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_P015_section_int_T_TM kcg_comp_struct__615031

#define kcg_copy_P015_section_int_T_TM kcg_copy_struct__615031

#define kcg_comp_P015_trackide_sectionlist_T_TM kcg_comp_array__615044

#define kcg_copy_P015_trackide_sectionlist_T_TM kcg_copy_array__615044

#define kcg_comp_P015_trackside_int_T_TM kcg_comp_struct__615047

#define kcg_copy_P015_trackside_int_T_TM kcg_copy_struct__615047

#define kcg_comp_P065_trackside_int_T_TM kcg_comp_struct__615183

#define kcg_copy_P065_trackside_int_T_TM kcg_copy_struct__615183

#define kcg_comp_P005_OBU_sectionlist_int_T_TM kcg_comp_array__615092

#define kcg_copy_P005_OBU_sectionlist_int_T_TM kcg_copy_array__615092

#define kcg_comp_P005_section_array_T_TM kcg_comp_array_int_7

#define kcg_copy_P005_section_array_T_TM kcg_copy_array_int_7

#define kcg_comp_P005_OBU_sectionlist_array_T_TM kcg_comp_array_int_7_33

#define kcg_copy_P005_OBU_sectionlist_array_T_TM kcg_copy_array_int_7_33

#define kcg_comp_P005_sections_array_flat_T_TM kcg_comp_array_int_231

#define kcg_copy_P005_sections_array_flat_T_TM kcg_copy_array_int_231

#define kcg_comp_P005_section_int_T_TM kcg_comp_struct__615076

#define kcg_copy_P005_section_int_T_TM kcg_copy_struct__615076

#define kcg_comp_P005_trackide_sectionlist_T_TM kcg_comp_array__615095

#define kcg_copy_P005_trackide_sectionlist_T_TM kcg_copy_array__615095

#define kcg_comp_P005_trackside_int_T_TM kcg_comp_struct__615098

#define kcg_copy_P005_trackside_int_T_TM kcg_copy_struct__615098

#define kcg_comp_P021_OBU_sectionlist_int_T_TM kcg_comp_array__615164

#define kcg_copy_P021_OBU_sectionlist_int_T_TM kcg_copy_array__615164

#define kcg_comp_P021_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P021_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P021_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P021_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P021_section_int_T_TM kcg_comp_struct__615158

#define kcg_copy_P021_section_int_T_TM kcg_copy_struct__615158

#define kcg_comp_P021_trackide_sectionlist_T_TM kcg_comp_array__615167

#define kcg_copy_P021_trackide_sectionlist_T_TM kcg_copy_array__615167

#define kcg_comp_P021_trackside_int_T_TM kcg_comp_struct__615170

#define kcg_copy_P021_trackside_int_T_TM kcg_copy_struct__615170

#define kcg_comp_P057_trackside_int_T_TM kcg_comp_struct__615196

#define kcg_copy_P057_trackside_int_T_TM kcg_copy_struct__615196

#define kcg_comp_P058_OBU_sectionlist_int_T_TM kcg_comp_array__615211

#define kcg_copy_P058_OBU_sectionlist_int_T_TM kcg_copy_array__615211

#define kcg_comp_P058_section_array_T_TM kcg_comp_array_int_2

#define kcg_copy_P058_section_array_T_TM kcg_copy_array_int_2

#define kcg_comp_P058_OBU_sectionlist_array_T_TM kcg_comp_array_int_2_32

#define kcg_copy_P058_OBU_sectionlist_array_T_TM kcg_copy_array_int_2_32

#define kcg_comp_P058_sections_array_flat_T_TM kcg_comp_array_int_64

#define kcg_copy_P058_sections_array_flat_T_TM kcg_copy_array_int_64

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_P058_section_int_T_TM kcg_comp_struct__615206

#define kcg_copy_P058_section_int_T_TM kcg_copy_struct__615206

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__614724

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__614724

#define kcg_comp_P058_trackide_sectionlist_T_TM kcg_comp_array__615211

#define kcg_copy_P058_trackide_sectionlist_T_TM kcg_copy_array__615211

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__614732

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__614732

#define kcg_comp_P058_trackside_int_T_TM kcg_comp_struct__615214

#define kcg_copy_P058_trackside_int_T_TM kcg_copy_struct__615214

#define kcg_comp_P137_trackside_int_T_TM kcg_comp_struct__614814

#define kcg_copy_P137_trackside_int_T_TM kcg_copy_struct__614814

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__614735

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__614735

#define kcg_comp_P041_OBU_sectionlist_int_T_TM kcg_comp_array__614837

#define kcg_copy_P041_OBU_sectionlist_int_T_TM kcg_copy_array__614837

#define kcg_comp_P041_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P041_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P041_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P041_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P041_section_int_T_TM kcg_comp_struct__614825

#define kcg_copy_P041_section_int_T_TM kcg_copy_struct__614825

#define kcg_comp_P041_trackide_sectionlist_T_TM kcg_comp_array__614840

#define kcg_copy_P041_trackide_sectionlist_T_TM kcg_copy_array__614840

#define kcg_comp_P041_trackside_int_T_TM kcg_comp_struct__614843

#define kcg_copy_P041_trackside_int_T_TM kcg_copy_struct__614843

#define kcg_comp_P046_OBU_sectionlist_int_T_TM kcg_comp_array__614871

#define kcg_copy_P046_OBU_sectionlist_int_T_TM kcg_copy_array__614871

#define kcg_comp_P046_section_array_T_TM kcg_comp_array_int_2

#define kcg_copy_P046_section_array_T_TM kcg_copy_array_int_2

#define kcg_comp_P046_OBU_sectionlist_array_T_TM kcg_comp_array_int_2_33

#define kcg_copy_P046_OBU_sectionlist_array_T_TM kcg_copy_array_int_2_33

#define kcg_comp_P046_sections_array_flat_T_TM kcg_comp_array_int_66

#define kcg_copy_P046_sections_array_flat_T_TM kcg_copy_array_int_66

#define kcg_comp_P046_section_int_T_TM kcg_comp_struct__614860

#define kcg_copy_P046_section_int_T_TM kcg_copy_struct__614860

#define kcg_comp_P046_trackide_sectionlist_T_TM kcg_comp_array__614874

#define kcg_copy_P046_trackide_sectionlist_T_TM kcg_copy_array__614874

#define kcg_comp_P046_trackside_int_T_TM kcg_comp_struct__614877

#define kcg_copy_P046_trackside_int_T_TM kcg_copy_struct__614877

#define kcg_comp_P042_trackside_int_T_TM kcg_comp_struct__614888

#define kcg_copy_P042_trackside_int_T_TM kcg_copy_struct__614888

#define kcg_comp_CompressedBaliseMessage_TM kcg_comp_struct__614776

#define kcg_copy_CompressedBaliseMessage_TM kcg_copy_struct__614776

#define kcg_comp_BaliseGroupData_TM kcg_comp_struct__614792

#define kcg_copy_BaliseGroupData_TM kcg_copy_struct__614792

#define kcg_comp_P045_trackside_int_T_TM kcg_comp_struct__614932

#define kcg_copy_P045_trackside_int_T_TM kcg_copy_struct__614932

#define kcg_comp_P255_trackside_int_T_TM kcg_comp_struct__614809

#define kcg_copy_P255_trackside_int_T_TM kcg_copy_struct__614809

#define kcg_comp_BaliseTelegramHeader_int_T_TM kcg_comp_struct__614740

#define kcg_copy_BaliseTelegramHeader_int_T_TM kcg_copy_struct__614740

#define kcg_comp_TelegramHeader_T_BG_Types_Pkg kcg_comp_struct__614708

#define kcg_copy_TelegramHeader_T_BG_Types_Pkg kcg_copy_struct__614708

#define kcg_comp_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_comp_array__615123

#define kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_copy_array__615123

#define kcg_comp_P027V1_section_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2

#define kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2

#define kcg_comp_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2_32

#define kcg_copy_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2_32

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array__615137

#define kcg_copy_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array__615137

#define kcg_comp_P027V1_section_int_T_TM_baseline2 kcg_comp_struct__615126

#define kcg_copy_P027V1_section_int_T_TM_baseline2 kcg_copy_struct__615126

#define kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_comp_array__615140

#define kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_copy_array__615140

#define kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2 kcg_comp_struct__615118

#define kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2 kcg_copy_struct__615118

#define kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_comp_array__615123

#define kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_copy_array__615123

#define kcg_comp_P027V1_trackside_int_T_TM_baseline2 kcg_comp_struct__615143

#define kcg_copy_P027V1_trackside_int_T_TM_baseline2 kcg_copy_struct__615143

#define kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P003V1_trackside_int_T_TM_baseline2 kcg_comp_struct__614903

#define kcg_copy_P003V1_trackside_int_T_TM_baseline2 kcg_copy_struct__614903

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-07-22T10:57:38
*************************************************************$ */


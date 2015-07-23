/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/AmstredamUtrechNoExp\kcg_s2c_config.txt
** Generation date: 2015-07-22T11:03:50
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
} struct__31335;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct__31335 Radio_TrackTrain_Header_T_Radio_Types_Pkg;

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
} struct__31353;

/* BG_Types_Pkg::TelegramHeader_T */
typedef struct__31353 TelegramHeader_T_BG_Types_Pkg;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__31369;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__31369 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__31377[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__31377 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__31380;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__31380 CompressedPackets_T_Common_Types_Pkg;

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
} struct__31385;

/* TM::BaliseTelegramHeader_int_T */
typedef struct__31385 BaliseTelegramHeader_int_T_TM;

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
} struct__31398;

/* TM::Radio_TrackTrain_Header_T */
typedef struct__31398 Radio_TrackTrain_Header_T_TM;

typedef struct {
  Radio_TrackTrain_Header_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__31416;

/* TM::CompressedRadioMessage */
typedef struct__31416 CompressedRadioMessage_TM;

typedef struct {
  BaliseTelegramHeader_int_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__31421;

/* TM::CompressedBaliseMessage */
typedef struct__31421 CompressedBaliseMessage_TM;

typedef struct {
  kcg_real TrainPos_in;
  kcg_int OffsetTotal;
  kcg_real TrainPosCalibrated;
} struct__31426;

/* InfraLib::TrainPosRaw_T */
typedef struct__31426 TrainPosRaw_T_InfraLib;

typedef struct {
  TrainPosRaw_T_InfraLib TrainPosRaw;
  CompressedBaliseMessage_TM BG_Message;
} struct__31432;

/* InfraLib::TrackSectionData_T */
typedef struct__31432 TrackSectionData_T_InfraLib;

typedef struct {
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Pos;
  OrBG_TM Or_BG;
  OrLine_TM Or_Line;
} struct__31437;

/* Basics::BaliseGroupData */
typedef struct__31437 BaliseGroupData_Basics;

/* TM::BaliseGroupData */
typedef struct__31437 BaliseGroupData_TM;

typedef struct {
  BaliseTelegramHeader_int_T_TM header;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int engineering_BG_location;
  kcg_real TrainPos;
  kcg_int pig_nom_0;
  kcg_bool balise_passed;
} struct__31445;

/* InfraLib::B_data_internal_T */
typedef struct__31445 B_data_internal_T_InfraLib;

typedef struct { kcg_bool valid; kcg_int NID_PACKET; } struct__31454;

/* TM::P255_trackside_int_T */
typedef struct__31454 P255_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SRSTOP;
} struct__31459;

/* TM::P137_trackside_int_T */
typedef struct__31459 P137_trackside_int_T_TM;

typedef kcg_int array_int_3[3];

/* TM::P041_section_array_T */
typedef array_int_3 P041_section_array_T_TM;

/* TM::P021_section_array_T */
typedef array_int_3 P021_section_array_T_TM;

typedef struct {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
} struct__31470;

/* TM::P041_section_int_T */
typedef struct__31470 P041_section_int_T_TM;

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

typedef P041_section_int_T_TM array__31482[33];

/* TM::P041_OBU_sectionlist_int_T */
typedef array__31482 P041_OBU_sectionlist_int_T_TM;

typedef P041_section_int_T_TM array__31485[32];

/* TM::P041_trackide_sectionlist_T */
typedef array__31485 P041_trackide_sectionlist_T_TM;

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
} struct__31488;

/* TM::P041_trackside_int_T */
typedef struct__31488 P041_trackside_int_T_TM;

typedef kcg_int array_int_2[2];

/* TM::P046_section_array_T */
typedef array_int_2 P046_section_array_T_TM;

/* TM::P058_section_array_T */
typedef array_int_2 P058_section_array_T_TM;

/* TM_baseline2::P027V1_section_array_qdiff_T */
typedef array_int_2 P027V1_section_array_qdiff_T_TM_baseline2;

typedef struct { kcg_int M_LEVELTR; kcg_int NID_NTC; } struct__31505;

/* TM::P046_section_int_T */
typedef struct__31505 P046_section_int_T_TM;

typedef P046_section_array_T_TM array_int_2_33[33];

/* TM::P046_OBU_sectionlist_array_T */
typedef array_int_2_33 P046_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_66[66];

/* TM::P046_sections_array_flat_T */
typedef array_int_66 P046_sections_array_flat_T_TM;

typedef P046_section_int_T_TM array__31516[33];

/* TM::P046_OBU_sectionlist_int_T */
typedef array__31516 P046_OBU_sectionlist_int_T_TM;

typedef P046_section_int_T_TM array__31519[32];

/* TM::P046_trackide_sectionlist_T */
typedef array__31519 P046_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int N_ITER;
  P046_trackide_sectionlist_T_TM SECTIONS;
} struct__31522;

/* TM::P046_trackside_int_T */
typedef struct__31522 P046_trackside_int_T_TM;

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
} struct__31533;

/* TM::P042_trackside_int_T */
typedef struct__31533 P042_trackside_int_T_TM;

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
} struct__31548;

/* TM_baseline2::P003V1_trackside_int_T */
typedef struct__31548 P003V1_trackside_int_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_MN;
} struct__31577;

/* TM::P045_trackside_int_T */
typedef struct__31577 P045_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
} struct__31585;

/* TM_radio_messages::M_024_T */
typedef struct__31585 M_024_T_TM_radio_messages;

/* TM_radio_messages::M_003_T */
typedef struct__31585 M_003_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_received;
} struct__31594;

/* TM_radio_messages::M_008_T */
typedef struct__31594 M_008_T_TM_radio_messages;

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
} struct__31604;

/* TM_radio_messages::M_015_T */
typedef struct__31604 M_015_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  M_VERSION m_version;
} struct__31618;

/* TM_radio_messages::M_032_T */
typedef struct__31618 M_032_T_TM_radio_messages;

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
} struct__31628;

/* TM_radio_messages::M_TrackTrain_Radio_T */
typedef struct__31628 M_TrackTrain_Radio_T_TM_radio_messages;

typedef struct {
  M_TrackTrain_Radio_T_TM_radio_messages message;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int trigger;
  kcg_bool message_sent;
} struct__31643;

/* InfraLib::R_data_internal_T */
typedef struct__31643 R_data_internal_T_InfraLib;

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
} struct__31650;

/* TM_radio_messages::M_015_int_T */
typedef struct__31650 M_015_int_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
} struct__31664;

/* TM_radio_messages::M_024_int_T */
typedef struct__31664 M_024_int_T_TM_radio_messages;

/* TM_radio_messages::M_003_int_T */
typedef struct__31664 M_003_int_T_TM_radio_messages;

typedef kcg_int array_int_4[4];

/* TM::P015_section_array_T */
typedef array_int_4 P015_section_array_T_TM;

typedef struct {
  kcg_int L_SECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
} struct__31676;

/* TM::P015_section_int_T */
typedef struct__31676 P015_section_int_T_TM;

typedef P015_section_array_T_TM array_int_4_32[32];

/* TM::P015_OBU_sectionlist_array_T */
typedef array_int_4_32 P015_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_128[128];

/* TM::P015_sections_array_flat_T */
typedef array_int_128 P015_sections_array_flat_T_TM;

typedef P015_section_int_T_TM array__31689[32];

/* TM::P015_trackide_sectionlist_T */
typedef array__31689 P015_trackide_sectionlist_T_TM;

/* TM::P015_OBU_sectionlist_int_T */
typedef array__31689 P015_OBU_sectionlist_int_T_TM;

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
} struct__31692;

/* TM::P015_trackside_int_T */
typedef struct__31692 P015_trackside_int_T_TM;

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
} struct__31721;

/* TM::P005_section_int_T */
typedef struct__31721 P005_section_int_T_TM;

typedef P005_section_array_T_TM array_int_7_33[33];

/* TM::P005_OBU_sectionlist_array_T */
typedef array_int_7_33 P005_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_231[231];

/* TM::P005_sections_array_flat_T */
typedef array_int_231 P005_sections_array_flat_T_TM;

typedef P005_section_int_T_TM array__31737[33];

/* TM::P005_OBU_sectionlist_int_T */
typedef array__31737 P005_OBU_sectionlist_int_T_TM;

typedef P005_section_int_T_TM array__31740[32];

/* TM::P005_trackide_sectionlist_T */
typedef array__31740 P005_trackide_sectionlist_T_TM;

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
} struct__31743;

/* TM::P005_trackside_int_T */
typedef struct__31743 P005_trackside_int_T_TM;

typedef kcg_int array_int_64[64];

/* TM::P058_sections_array_flat_T */
typedef array_int_64 P058_sections_array_flat_T_TM;

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef struct { kcg_int NC_DIFF; kcg_int V_DIFF; } struct__31763;

/* TM_baseline2::P027V1_section_int_qdiff_T */
typedef struct__31763 P027V1_section_int_qdiff_T_TM_baseline2;

typedef P027V1_section_int_qdiff_T_TM_baseline2 array__31768[32];

/* TM_baseline2::P027V1_trackside_qdifflist_T */
typedef array__31768 P027V1_trackside_qdifflist_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_int_qdiff_T */
typedef array__31768 P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2;

typedef struct {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
} struct__31771;

/* TM_baseline2::P027V1_section_int_T */
typedef struct__31771 P027V1_section_int_T_TM_baseline2;

typedef array_int_2 array_int_2_32[32];

/* TM::P058_OBU_sectionlist_array_T */
typedef array_int_2_32 P058_OBU_sectionlist_array_T_TM;

/* TM_baseline2::P027V1_OBU_sectionlist_array_qdiff_T */
typedef array_int_2_32 P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__31782[33];

/* TM_baseline2::P027V1_OBU_sectionlist_int_T */
typedef array__31782 P027V1_OBU_sectionlist_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__31785[32];

/* TM_baseline2::P027V1_trackside_sectionlist_T */
typedef array__31785 P027V1_trackside_sectionlist_T_TM_baseline2;

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
} struct__31788;

/* TM_baseline2::P027V1_trackside_int_T */
typedef struct__31788 P027V1_trackside_int_T_TM_baseline2;

typedef struct {
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
} struct__31803;

/* TM::P021_section_int_T */
typedef struct__31803 P021_section_int_T_TM;

typedef P021_section_int_T_TM array__31809[33];

/* TM::P021_OBU_sectionlist_int_T */
typedef array__31809 P021_OBU_sectionlist_int_T_TM;

typedef P021_section_int_T_TM array__31812[32];

/* TM::P021_trackide_sectionlist_T */
typedef array__31812 P021_trackide_sectionlist_T_TM;

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
} struct__31815;

/* TM::P021_trackside_int_T */
typedef struct__31815 P021_trackside_int_T_TM;

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
} struct__31828;

/* TM::P065_trackside_int_T */
typedef struct__31828 P065_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int T_MAR;
  kcg_int T_TIMEOUTRQST;
  kcg_int T_CYCRQST;
} struct__31841;

/* TM::P057_trackside_int_T */
typedef struct__31841 P057_trackside_int_T_TM;

typedef struct { kcg_int D_LOC; kcg_int Q_LGTLOC; } struct__31851;

/* TM::P058_section_int_T */
typedef struct__31851 P058_section_int_T_TM;

typedef P058_section_int_T_TM array__31856[32];

/* TM::P058_trackide_sectionlist_T */
typedef array__31856 P058_trackide_sectionlist_T_TM;

/* TM::P058_OBU_sectionlist_int_T */
typedef array__31856 P058_OBU_sectionlist_int_T_TM;

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
} struct__31859;

/* TM::P058_trackside_int_T */
typedef struct__31859 P058_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
  kcg_int t_train_received;
} struct__31872;

/* TM_radio_messages::M_008_int_T */
typedef struct__31872 M_008_int_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
  kcg_int m_version;
} struct__31882;

/* TM_radio_messages::M_032_int_T */
typedef struct__31882 M_032_int_T_TM_radio_messages;

typedef kcg_int array_int_430[430];

typedef kcg_int array_int_444[444];

typedef kcg_int array_int_395[395];

typedef kcg_int array_int_428[428];

typedef kcg_int array_int_396[396];

typedef kcg_int array_int_432[432];

typedef kcg_int array_int_264[264];

typedef kcg_int array_int_351[351];

#ifndef kcg_copy_struct__31335
#define kcg_copy_struct__31335(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31335)))
#endif /* kcg_copy_struct__31335 */

#ifndef kcg_copy_struct__31353
#define kcg_copy_struct__31353(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31353)))
#endif /* kcg_copy_struct__31353 */

#ifndef kcg_copy_struct__31369
#define kcg_copy_struct__31369(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31369)))
#endif /* kcg_copy_struct__31369 */

#ifndef kcg_copy_struct__31380
#define kcg_copy_struct__31380(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31380)))
#endif /* kcg_copy_struct__31380 */

#ifndef kcg_copy_struct__31385
#define kcg_copy_struct__31385(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31385)))
#endif /* kcg_copy_struct__31385 */

#ifndef kcg_copy_struct__31398
#define kcg_copy_struct__31398(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31398)))
#endif /* kcg_copy_struct__31398 */

#ifndef kcg_copy_struct__31416
#define kcg_copy_struct__31416(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31416)))
#endif /* kcg_copy_struct__31416 */

#ifndef kcg_copy_struct__31421
#define kcg_copy_struct__31421(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31421)))
#endif /* kcg_copy_struct__31421 */

#ifndef kcg_copy_struct__31426
#define kcg_copy_struct__31426(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31426)))
#endif /* kcg_copy_struct__31426 */

#ifndef kcg_copy_struct__31432
#define kcg_copy_struct__31432(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31432)))
#endif /* kcg_copy_struct__31432 */

#ifndef kcg_copy_struct__31437
#define kcg_copy_struct__31437(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31437)))
#endif /* kcg_copy_struct__31437 */

#ifndef kcg_copy_struct__31445
#define kcg_copy_struct__31445(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31445)))
#endif /* kcg_copy_struct__31445 */

#ifndef kcg_copy_struct__31454
#define kcg_copy_struct__31454(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31454)))
#endif /* kcg_copy_struct__31454 */

#ifndef kcg_copy_struct__31459
#define kcg_copy_struct__31459(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31459)))
#endif /* kcg_copy_struct__31459 */

#ifndef kcg_copy_struct__31470
#define kcg_copy_struct__31470(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31470)))
#endif /* kcg_copy_struct__31470 */

#ifndef kcg_copy_struct__31488
#define kcg_copy_struct__31488(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31488)))
#endif /* kcg_copy_struct__31488 */

#ifndef kcg_copy_struct__31505
#define kcg_copy_struct__31505(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31505)))
#endif /* kcg_copy_struct__31505 */

#ifndef kcg_copy_struct__31522
#define kcg_copy_struct__31522(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31522)))
#endif /* kcg_copy_struct__31522 */

#ifndef kcg_copy_struct__31533
#define kcg_copy_struct__31533(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31533)))
#endif /* kcg_copy_struct__31533 */

#ifndef kcg_copy_struct__31548
#define kcg_copy_struct__31548(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31548)))
#endif /* kcg_copy_struct__31548 */

#ifndef kcg_copy_struct__31577
#define kcg_copy_struct__31577(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31577)))
#endif /* kcg_copy_struct__31577 */

#ifndef kcg_copy_struct__31585
#define kcg_copy_struct__31585(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31585)))
#endif /* kcg_copy_struct__31585 */

#ifndef kcg_copy_struct__31594
#define kcg_copy_struct__31594(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31594)))
#endif /* kcg_copy_struct__31594 */

#ifndef kcg_copy_struct__31604
#define kcg_copy_struct__31604(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31604)))
#endif /* kcg_copy_struct__31604 */

#ifndef kcg_copy_struct__31618
#define kcg_copy_struct__31618(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31618)))
#endif /* kcg_copy_struct__31618 */

#ifndef kcg_copy_struct__31628
#define kcg_copy_struct__31628(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31628)))
#endif /* kcg_copy_struct__31628 */

#ifndef kcg_copy_struct__31643
#define kcg_copy_struct__31643(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31643)))
#endif /* kcg_copy_struct__31643 */

#ifndef kcg_copy_struct__31650
#define kcg_copy_struct__31650(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31650)))
#endif /* kcg_copy_struct__31650 */

#ifndef kcg_copy_struct__31664
#define kcg_copy_struct__31664(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31664)))
#endif /* kcg_copy_struct__31664 */

#ifndef kcg_copy_struct__31676
#define kcg_copy_struct__31676(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31676)))
#endif /* kcg_copy_struct__31676 */

#ifndef kcg_copy_struct__31692
#define kcg_copy_struct__31692(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31692)))
#endif /* kcg_copy_struct__31692 */

#ifndef kcg_copy_struct__31721
#define kcg_copy_struct__31721(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31721)))
#endif /* kcg_copy_struct__31721 */

#ifndef kcg_copy_struct__31743
#define kcg_copy_struct__31743(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31743)))
#endif /* kcg_copy_struct__31743 */

#ifndef kcg_copy_struct__31763
#define kcg_copy_struct__31763(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31763)))
#endif /* kcg_copy_struct__31763 */

#ifndef kcg_copy_struct__31771
#define kcg_copy_struct__31771(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31771)))
#endif /* kcg_copy_struct__31771 */

#ifndef kcg_copy_struct__31788
#define kcg_copy_struct__31788(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31788)))
#endif /* kcg_copy_struct__31788 */

#ifndef kcg_copy_struct__31803
#define kcg_copy_struct__31803(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31803)))
#endif /* kcg_copy_struct__31803 */

#ifndef kcg_copy_struct__31815
#define kcg_copy_struct__31815(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31815)))
#endif /* kcg_copy_struct__31815 */

#ifndef kcg_copy_struct__31828
#define kcg_copy_struct__31828(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31828)))
#endif /* kcg_copy_struct__31828 */

#ifndef kcg_copy_struct__31841
#define kcg_copy_struct__31841(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31841)))
#endif /* kcg_copy_struct__31841 */

#ifndef kcg_copy_struct__31851
#define kcg_copy_struct__31851(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31851)))
#endif /* kcg_copy_struct__31851 */

#ifndef kcg_copy_struct__31859
#define kcg_copy_struct__31859(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31859)))
#endif /* kcg_copy_struct__31859 */

#ifndef kcg_copy_struct__31872
#define kcg_copy_struct__31872(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31872)))
#endif /* kcg_copy_struct__31872 */

#ifndef kcg_copy_struct__31882
#define kcg_copy_struct__31882(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__31882)))
#endif /* kcg_copy_struct__31882 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__31377
#define kcg_copy_array__31377(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31377)))
#endif /* kcg_copy_array__31377 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_int_3_33
#define kcg_copy_array_int_3_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33)))
#endif /* kcg_copy_array_int_3_33 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__31482
#define kcg_copy_array__31482(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31482)))
#endif /* kcg_copy_array__31482 */

#ifndef kcg_copy_array__31485
#define kcg_copy_array__31485(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31485)))
#endif /* kcg_copy_array__31485 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array_int_2_33
#define kcg_copy_array_int_2_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_33)))
#endif /* kcg_copy_array_int_2_33 */

#ifndef kcg_copy_array_int_66
#define kcg_copy_array_int_66(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_66)))
#endif /* kcg_copy_array_int_66 */

#ifndef kcg_copy_array__31516
#define kcg_copy_array__31516(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31516)))
#endif /* kcg_copy_array__31516 */

#ifndef kcg_copy_array__31519
#define kcg_copy_array__31519(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31519)))
#endif /* kcg_copy_array__31519 */

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

#ifndef kcg_copy_array__31689
#define kcg_copy_array__31689(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31689)))
#endif /* kcg_copy_array__31689 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array_int_7_33
#define kcg_copy_array_int_7_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33)))
#endif /* kcg_copy_array_int_7_33 */

#ifndef kcg_copy_array_int_231
#define kcg_copy_array_int_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231)))
#endif /* kcg_copy_array_int_231 */

#ifndef kcg_copy_array__31737
#define kcg_copy_array__31737(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31737)))
#endif /* kcg_copy_array__31737 */

#ifndef kcg_copy_array__31740
#define kcg_copy_array__31740(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31740)))
#endif /* kcg_copy_array__31740 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array__31768
#define kcg_copy_array__31768(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31768)))
#endif /* kcg_copy_array__31768 */

#ifndef kcg_copy_array_int_2_32
#define kcg_copy_array_int_2_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32)))
#endif /* kcg_copy_array_int_2_32 */

#ifndef kcg_copy_array__31782
#define kcg_copy_array__31782(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31782)))
#endif /* kcg_copy_array__31782 */

#ifndef kcg_copy_array__31785
#define kcg_copy_array__31785(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31785)))
#endif /* kcg_copy_array__31785 */

#ifndef kcg_copy_array__31809
#define kcg_copy_array__31809(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31809)))
#endif /* kcg_copy_array__31809 */

#ifndef kcg_copy_array__31812
#define kcg_copy_array__31812(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31812)))
#endif /* kcg_copy_array__31812 */

#ifndef kcg_copy_array__31856
#define kcg_copy_array__31856(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__31856)))
#endif /* kcg_copy_array__31856 */

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

#ifndef kcg_comp_struct__31335
extern kcg_bool kcg_comp_struct__31335(
  struct__31335 *kcg_c1,
  struct__31335 *kcg_c2);
#endif /* kcg_comp_struct__31335 */

#ifndef kcg_comp_struct__31353
extern kcg_bool kcg_comp_struct__31353(
  struct__31353 *kcg_c1,
  struct__31353 *kcg_c2);
#endif /* kcg_comp_struct__31353 */

#ifndef kcg_comp_struct__31369
extern kcg_bool kcg_comp_struct__31369(
  struct__31369 *kcg_c1,
  struct__31369 *kcg_c2);
#endif /* kcg_comp_struct__31369 */

#ifndef kcg_comp_struct__31380
extern kcg_bool kcg_comp_struct__31380(
  struct__31380 *kcg_c1,
  struct__31380 *kcg_c2);
#endif /* kcg_comp_struct__31380 */

#ifndef kcg_comp_struct__31385
extern kcg_bool kcg_comp_struct__31385(
  struct__31385 *kcg_c1,
  struct__31385 *kcg_c2);
#endif /* kcg_comp_struct__31385 */

#ifndef kcg_comp_struct__31398
extern kcg_bool kcg_comp_struct__31398(
  struct__31398 *kcg_c1,
  struct__31398 *kcg_c2);
#endif /* kcg_comp_struct__31398 */

#ifndef kcg_comp_struct__31416
extern kcg_bool kcg_comp_struct__31416(
  struct__31416 *kcg_c1,
  struct__31416 *kcg_c2);
#endif /* kcg_comp_struct__31416 */

#ifndef kcg_comp_struct__31421
extern kcg_bool kcg_comp_struct__31421(
  struct__31421 *kcg_c1,
  struct__31421 *kcg_c2);
#endif /* kcg_comp_struct__31421 */

#ifndef kcg_comp_struct__31426
extern kcg_bool kcg_comp_struct__31426(
  struct__31426 *kcg_c1,
  struct__31426 *kcg_c2);
#endif /* kcg_comp_struct__31426 */

#ifndef kcg_comp_struct__31432
extern kcg_bool kcg_comp_struct__31432(
  struct__31432 *kcg_c1,
  struct__31432 *kcg_c2);
#endif /* kcg_comp_struct__31432 */

#ifndef kcg_comp_struct__31437
extern kcg_bool kcg_comp_struct__31437(
  struct__31437 *kcg_c1,
  struct__31437 *kcg_c2);
#endif /* kcg_comp_struct__31437 */

#ifndef kcg_comp_struct__31445
extern kcg_bool kcg_comp_struct__31445(
  struct__31445 *kcg_c1,
  struct__31445 *kcg_c2);
#endif /* kcg_comp_struct__31445 */

#ifndef kcg_comp_struct__31454
extern kcg_bool kcg_comp_struct__31454(
  struct__31454 *kcg_c1,
  struct__31454 *kcg_c2);
#endif /* kcg_comp_struct__31454 */

#ifndef kcg_comp_struct__31459
extern kcg_bool kcg_comp_struct__31459(
  struct__31459 *kcg_c1,
  struct__31459 *kcg_c2);
#endif /* kcg_comp_struct__31459 */

#ifndef kcg_comp_struct__31470
extern kcg_bool kcg_comp_struct__31470(
  struct__31470 *kcg_c1,
  struct__31470 *kcg_c2);
#endif /* kcg_comp_struct__31470 */

#ifndef kcg_comp_struct__31488
extern kcg_bool kcg_comp_struct__31488(
  struct__31488 *kcg_c1,
  struct__31488 *kcg_c2);
#endif /* kcg_comp_struct__31488 */

#ifndef kcg_comp_struct__31505
extern kcg_bool kcg_comp_struct__31505(
  struct__31505 *kcg_c1,
  struct__31505 *kcg_c2);
#endif /* kcg_comp_struct__31505 */

#ifndef kcg_comp_struct__31522
extern kcg_bool kcg_comp_struct__31522(
  struct__31522 *kcg_c1,
  struct__31522 *kcg_c2);
#endif /* kcg_comp_struct__31522 */

#ifndef kcg_comp_struct__31533
extern kcg_bool kcg_comp_struct__31533(
  struct__31533 *kcg_c1,
  struct__31533 *kcg_c2);
#endif /* kcg_comp_struct__31533 */

#ifndef kcg_comp_struct__31548
extern kcg_bool kcg_comp_struct__31548(
  struct__31548 *kcg_c1,
  struct__31548 *kcg_c2);
#endif /* kcg_comp_struct__31548 */

#ifndef kcg_comp_struct__31577
extern kcg_bool kcg_comp_struct__31577(
  struct__31577 *kcg_c1,
  struct__31577 *kcg_c2);
#endif /* kcg_comp_struct__31577 */

#ifndef kcg_comp_struct__31585
extern kcg_bool kcg_comp_struct__31585(
  struct__31585 *kcg_c1,
  struct__31585 *kcg_c2);
#endif /* kcg_comp_struct__31585 */

#ifndef kcg_comp_struct__31594
extern kcg_bool kcg_comp_struct__31594(
  struct__31594 *kcg_c1,
  struct__31594 *kcg_c2);
#endif /* kcg_comp_struct__31594 */

#ifndef kcg_comp_struct__31604
extern kcg_bool kcg_comp_struct__31604(
  struct__31604 *kcg_c1,
  struct__31604 *kcg_c2);
#endif /* kcg_comp_struct__31604 */

#ifndef kcg_comp_struct__31618
extern kcg_bool kcg_comp_struct__31618(
  struct__31618 *kcg_c1,
  struct__31618 *kcg_c2);
#endif /* kcg_comp_struct__31618 */

#ifndef kcg_comp_struct__31628
extern kcg_bool kcg_comp_struct__31628(
  struct__31628 *kcg_c1,
  struct__31628 *kcg_c2);
#endif /* kcg_comp_struct__31628 */

#ifndef kcg_comp_struct__31643
extern kcg_bool kcg_comp_struct__31643(
  struct__31643 *kcg_c1,
  struct__31643 *kcg_c2);
#endif /* kcg_comp_struct__31643 */

#ifndef kcg_comp_struct__31650
extern kcg_bool kcg_comp_struct__31650(
  struct__31650 *kcg_c1,
  struct__31650 *kcg_c2);
#endif /* kcg_comp_struct__31650 */

#ifndef kcg_comp_struct__31664
extern kcg_bool kcg_comp_struct__31664(
  struct__31664 *kcg_c1,
  struct__31664 *kcg_c2);
#endif /* kcg_comp_struct__31664 */

#ifndef kcg_comp_struct__31676
extern kcg_bool kcg_comp_struct__31676(
  struct__31676 *kcg_c1,
  struct__31676 *kcg_c2);
#endif /* kcg_comp_struct__31676 */

#ifndef kcg_comp_struct__31692
extern kcg_bool kcg_comp_struct__31692(
  struct__31692 *kcg_c1,
  struct__31692 *kcg_c2);
#endif /* kcg_comp_struct__31692 */

#ifndef kcg_comp_struct__31721
extern kcg_bool kcg_comp_struct__31721(
  struct__31721 *kcg_c1,
  struct__31721 *kcg_c2);
#endif /* kcg_comp_struct__31721 */

#ifndef kcg_comp_struct__31743
extern kcg_bool kcg_comp_struct__31743(
  struct__31743 *kcg_c1,
  struct__31743 *kcg_c2);
#endif /* kcg_comp_struct__31743 */

#ifndef kcg_comp_struct__31763
extern kcg_bool kcg_comp_struct__31763(
  struct__31763 *kcg_c1,
  struct__31763 *kcg_c2);
#endif /* kcg_comp_struct__31763 */

#ifndef kcg_comp_struct__31771
extern kcg_bool kcg_comp_struct__31771(
  struct__31771 *kcg_c1,
  struct__31771 *kcg_c2);
#endif /* kcg_comp_struct__31771 */

#ifndef kcg_comp_struct__31788
extern kcg_bool kcg_comp_struct__31788(
  struct__31788 *kcg_c1,
  struct__31788 *kcg_c2);
#endif /* kcg_comp_struct__31788 */

#ifndef kcg_comp_struct__31803
extern kcg_bool kcg_comp_struct__31803(
  struct__31803 *kcg_c1,
  struct__31803 *kcg_c2);
#endif /* kcg_comp_struct__31803 */

#ifndef kcg_comp_struct__31815
extern kcg_bool kcg_comp_struct__31815(
  struct__31815 *kcg_c1,
  struct__31815 *kcg_c2);
#endif /* kcg_comp_struct__31815 */

#ifndef kcg_comp_struct__31828
extern kcg_bool kcg_comp_struct__31828(
  struct__31828 *kcg_c1,
  struct__31828 *kcg_c2);
#endif /* kcg_comp_struct__31828 */

#ifndef kcg_comp_struct__31841
extern kcg_bool kcg_comp_struct__31841(
  struct__31841 *kcg_c1,
  struct__31841 *kcg_c2);
#endif /* kcg_comp_struct__31841 */

#ifndef kcg_comp_struct__31851
extern kcg_bool kcg_comp_struct__31851(
  struct__31851 *kcg_c1,
  struct__31851 *kcg_c2);
#endif /* kcg_comp_struct__31851 */

#ifndef kcg_comp_struct__31859
extern kcg_bool kcg_comp_struct__31859(
  struct__31859 *kcg_c1,
  struct__31859 *kcg_c2);
#endif /* kcg_comp_struct__31859 */

#ifndef kcg_comp_struct__31872
extern kcg_bool kcg_comp_struct__31872(
  struct__31872 *kcg_c1,
  struct__31872 *kcg_c2);
#endif /* kcg_comp_struct__31872 */

#ifndef kcg_comp_struct__31882
extern kcg_bool kcg_comp_struct__31882(
  struct__31882 *kcg_c1,
  struct__31882 *kcg_c2);
#endif /* kcg_comp_struct__31882 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__31377
extern kcg_bool kcg_comp_array__31377(
  array__31377 *kcg_c1,
  array__31377 *kcg_c2);
#endif /* kcg_comp_array__31377 */

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

#ifndef kcg_comp_array__31482
extern kcg_bool kcg_comp_array__31482(
  array__31482 *kcg_c1,
  array__31482 *kcg_c2);
#endif /* kcg_comp_array__31482 */

#ifndef kcg_comp_array__31485
extern kcg_bool kcg_comp_array__31485(
  array__31485 *kcg_c1,
  array__31485 *kcg_c2);
#endif /* kcg_comp_array__31485 */

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

#ifndef kcg_comp_array__31516
extern kcg_bool kcg_comp_array__31516(
  array__31516 *kcg_c1,
  array__31516 *kcg_c2);
#endif /* kcg_comp_array__31516 */

#ifndef kcg_comp_array__31519
extern kcg_bool kcg_comp_array__31519(
  array__31519 *kcg_c1,
  array__31519 *kcg_c2);
#endif /* kcg_comp_array__31519 */

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

#ifndef kcg_comp_array__31689
extern kcg_bool kcg_comp_array__31689(
  array__31689 *kcg_c1,
  array__31689 *kcg_c2);
#endif /* kcg_comp_array__31689 */

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

#ifndef kcg_comp_array__31737
extern kcg_bool kcg_comp_array__31737(
  array__31737 *kcg_c1,
  array__31737 *kcg_c2);
#endif /* kcg_comp_array__31737 */

#ifndef kcg_comp_array__31740
extern kcg_bool kcg_comp_array__31740(
  array__31740 *kcg_c1,
  array__31740 *kcg_c2);
#endif /* kcg_comp_array__31740 */

#ifndef kcg_comp_array_int_64
extern kcg_bool kcg_comp_array_int_64(
  array_int_64 *kcg_c1,
  array_int_64 *kcg_c2);
#endif /* kcg_comp_array_int_64 */

#ifndef kcg_comp_array__31768
extern kcg_bool kcg_comp_array__31768(
  array__31768 *kcg_c1,
  array__31768 *kcg_c2);
#endif /* kcg_comp_array__31768 */

#ifndef kcg_comp_array_int_2_32
extern kcg_bool kcg_comp_array_int_2_32(
  array_int_2_32 *kcg_c1,
  array_int_2_32 *kcg_c2);
#endif /* kcg_comp_array_int_2_32 */

#ifndef kcg_comp_array__31782
extern kcg_bool kcg_comp_array__31782(
  array__31782 *kcg_c1,
  array__31782 *kcg_c2);
#endif /* kcg_comp_array__31782 */

#ifndef kcg_comp_array__31785
extern kcg_bool kcg_comp_array__31785(
  array__31785 *kcg_c1,
  array__31785 *kcg_c2);
#endif /* kcg_comp_array__31785 */

#ifndef kcg_comp_array__31809
extern kcg_bool kcg_comp_array__31809(
  array__31809 *kcg_c1,
  array__31809 *kcg_c2);
#endif /* kcg_comp_array__31809 */

#ifndef kcg_comp_array__31812
extern kcg_bool kcg_comp_array__31812(
  array__31812 *kcg_c1,
  array__31812 *kcg_c2);
#endif /* kcg_comp_array__31812 */

#ifndef kcg_comp_array__31856
extern kcg_bool kcg_comp_array__31856(
  array__31856 *kcg_c1,
  array__31856 *kcg_c2);
#endif /* kcg_comp_array__31856 */

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

#define kcg_comp_BaliseGroupData_Basics kcg_comp_struct__31437

#define kcg_copy_BaliseGroupData_Basics kcg_copy_struct__31437

#define kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_comp_struct__31335

#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_copy_struct__31335

#define kcg_comp_M_003_T_TM_radio_messages kcg_comp_struct__31585

#define kcg_copy_M_003_T_TM_radio_messages kcg_copy_struct__31585

#define kcg_comp_M_008_T_TM_radio_messages kcg_comp_struct__31594

#define kcg_copy_M_008_T_TM_radio_messages kcg_copy_struct__31594

#define kcg_comp_M_015_T_TM_radio_messages kcg_comp_struct__31604

#define kcg_copy_M_015_T_TM_radio_messages kcg_copy_struct__31604

#define kcg_comp_M_024_T_TM_radio_messages kcg_comp_struct__31585

#define kcg_copy_M_024_T_TM_radio_messages kcg_copy_struct__31585

#define kcg_comp_M_032_T_TM_radio_messages kcg_comp_struct__31618

#define kcg_copy_M_032_T_TM_radio_messages kcg_copy_struct__31618

#define kcg_comp_M_015_int_T_TM_radio_messages kcg_comp_struct__31650

#define kcg_copy_M_015_int_T_TM_radio_messages kcg_copy_struct__31650

#define kcg_comp_M_003_int_T_TM_radio_messages kcg_comp_struct__31664

#define kcg_copy_M_003_int_T_TM_radio_messages kcg_copy_struct__31664

#define kcg_comp_R_data_internal_T_InfraLib kcg_comp_struct__31643

#define kcg_copy_R_data_internal_T_InfraLib kcg_copy_struct__31643

#define kcg_comp_M_024_int_T_TM_radio_messages kcg_comp_struct__31664

#define kcg_copy_M_024_int_T_TM_radio_messages kcg_copy_struct__31664

#define kcg_comp_TrainPosRaw_T_InfraLib kcg_comp_struct__31426

#define kcg_copy_TrainPosRaw_T_InfraLib kcg_copy_struct__31426

#define kcg_comp_M_008_int_T_TM_radio_messages kcg_comp_struct__31872

#define kcg_copy_M_008_int_T_TM_radio_messages kcg_copy_struct__31872

#define kcg_comp_TrackSectionData_T_InfraLib kcg_comp_struct__31432

#define kcg_copy_TrackSectionData_T_InfraLib kcg_copy_struct__31432

#define kcg_comp_M_TrackTrain_Radio_T_TM_radio_messages kcg_comp_struct__31628

#define kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages kcg_copy_struct__31628

#define kcg_comp_B_data_internal_T_InfraLib kcg_comp_struct__31445

#define kcg_copy_B_data_internal_T_InfraLib kcg_copy_struct__31445

#define kcg_comp_M_032_int_T_TM_radio_messages kcg_comp_struct__31882

#define kcg_copy_M_032_int_T_TM_radio_messages kcg_copy_struct__31882

#define kcg_comp_CompressedRadioMessage_TM kcg_comp_struct__31416

#define kcg_copy_CompressedRadioMessage_TM kcg_copy_struct__31416

#define kcg_comp_Radio_TrackTrain_Header_T_TM kcg_comp_struct__31398

#define kcg_copy_Radio_TrackTrain_Header_T_TM kcg_copy_struct__31398

#define kcg_comp_P015_OBU_sectionlist_int_T_TM kcg_comp_array__31689

#define kcg_copy_P015_OBU_sectionlist_int_T_TM kcg_copy_array__31689

#define kcg_comp_P015_section_array_T_TM kcg_comp_array_int_4

#define kcg_copy_P015_section_array_T_TM kcg_copy_array_int_4

#define kcg_comp_P015_OBU_sectionlist_array_T_TM kcg_comp_array_int_4_32

#define kcg_copy_P015_OBU_sectionlist_array_T_TM kcg_copy_array_int_4_32

#define kcg_comp_P015_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P015_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_P015_section_int_T_TM kcg_comp_struct__31676

#define kcg_copy_P015_section_int_T_TM kcg_copy_struct__31676

#define kcg_comp_P015_trackide_sectionlist_T_TM kcg_comp_array__31689

#define kcg_copy_P015_trackide_sectionlist_T_TM kcg_copy_array__31689

#define kcg_comp_P015_trackside_int_T_TM kcg_comp_struct__31692

#define kcg_copy_P015_trackside_int_T_TM kcg_copy_struct__31692

#define kcg_comp_P065_trackside_int_T_TM kcg_comp_struct__31828

#define kcg_copy_P065_trackside_int_T_TM kcg_copy_struct__31828

#define kcg_comp_P005_OBU_sectionlist_int_T_TM kcg_comp_array__31737

#define kcg_copy_P005_OBU_sectionlist_int_T_TM kcg_copy_array__31737

#define kcg_comp_P005_section_array_T_TM kcg_comp_array_int_7

#define kcg_copy_P005_section_array_T_TM kcg_copy_array_int_7

#define kcg_comp_P005_OBU_sectionlist_array_T_TM kcg_comp_array_int_7_33

#define kcg_copy_P005_OBU_sectionlist_array_T_TM kcg_copy_array_int_7_33

#define kcg_comp_P005_sections_array_flat_T_TM kcg_comp_array_int_231

#define kcg_copy_P005_sections_array_flat_T_TM kcg_copy_array_int_231

#define kcg_comp_P005_section_int_T_TM kcg_comp_struct__31721

#define kcg_copy_P005_section_int_T_TM kcg_copy_struct__31721

#define kcg_comp_P005_trackide_sectionlist_T_TM kcg_comp_array__31740

#define kcg_copy_P005_trackide_sectionlist_T_TM kcg_copy_array__31740

#define kcg_comp_P005_trackside_int_T_TM kcg_comp_struct__31743

#define kcg_copy_P005_trackside_int_T_TM kcg_copy_struct__31743

#define kcg_comp_P021_OBU_sectionlist_int_T_TM kcg_comp_array__31809

#define kcg_copy_P021_OBU_sectionlist_int_T_TM kcg_copy_array__31809

#define kcg_comp_P021_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P021_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P021_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P021_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P021_section_int_T_TM kcg_comp_struct__31803

#define kcg_copy_P021_section_int_T_TM kcg_copy_struct__31803

#define kcg_comp_P021_trackide_sectionlist_T_TM kcg_comp_array__31812

#define kcg_copy_P021_trackide_sectionlist_T_TM kcg_copy_array__31812

#define kcg_comp_P021_trackside_int_T_TM kcg_comp_struct__31815

#define kcg_copy_P021_trackside_int_T_TM kcg_copy_struct__31815

#define kcg_comp_P057_trackside_int_T_TM kcg_comp_struct__31841

#define kcg_copy_P057_trackside_int_T_TM kcg_copy_struct__31841

#define kcg_comp_P058_OBU_sectionlist_int_T_TM kcg_comp_array__31856

#define kcg_copy_P058_OBU_sectionlist_int_T_TM kcg_copy_array__31856

#define kcg_comp_P058_section_array_T_TM kcg_comp_array_int_2

#define kcg_copy_P058_section_array_T_TM kcg_copy_array_int_2

#define kcg_comp_P058_OBU_sectionlist_array_T_TM kcg_comp_array_int_2_32

#define kcg_copy_P058_OBU_sectionlist_array_T_TM kcg_copy_array_int_2_32

#define kcg_comp_P058_sections_array_flat_T_TM kcg_comp_array_int_64

#define kcg_copy_P058_sections_array_flat_T_TM kcg_copy_array_int_64

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_P058_section_int_T_TM kcg_comp_struct__31851

#define kcg_copy_P058_section_int_T_TM kcg_copy_struct__31851

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__31369

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__31369

#define kcg_comp_P058_trackide_sectionlist_T_TM kcg_comp_array__31856

#define kcg_copy_P058_trackide_sectionlist_T_TM kcg_copy_array__31856

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__31377

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__31377

#define kcg_comp_P058_trackside_int_T_TM kcg_comp_struct__31859

#define kcg_copy_P058_trackside_int_T_TM kcg_copy_struct__31859

#define kcg_comp_P137_trackside_int_T_TM kcg_comp_struct__31459

#define kcg_copy_P137_trackside_int_T_TM kcg_copy_struct__31459

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__31380

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__31380

#define kcg_comp_P041_OBU_sectionlist_int_T_TM kcg_comp_array__31482

#define kcg_copy_P041_OBU_sectionlist_int_T_TM kcg_copy_array__31482

#define kcg_comp_P041_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P041_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P041_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P041_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P041_section_int_T_TM kcg_comp_struct__31470

#define kcg_copy_P041_section_int_T_TM kcg_copy_struct__31470

#define kcg_comp_P041_trackide_sectionlist_T_TM kcg_comp_array__31485

#define kcg_copy_P041_trackide_sectionlist_T_TM kcg_copy_array__31485

#define kcg_comp_P041_trackside_int_T_TM kcg_comp_struct__31488

#define kcg_copy_P041_trackside_int_T_TM kcg_copy_struct__31488

#define kcg_comp_P046_OBU_sectionlist_int_T_TM kcg_comp_array__31516

#define kcg_copy_P046_OBU_sectionlist_int_T_TM kcg_copy_array__31516

#define kcg_comp_P046_section_array_T_TM kcg_comp_array_int_2

#define kcg_copy_P046_section_array_T_TM kcg_copy_array_int_2

#define kcg_comp_P046_OBU_sectionlist_array_T_TM kcg_comp_array_int_2_33

#define kcg_copy_P046_OBU_sectionlist_array_T_TM kcg_copy_array_int_2_33

#define kcg_comp_P046_sections_array_flat_T_TM kcg_comp_array_int_66

#define kcg_copy_P046_sections_array_flat_T_TM kcg_copy_array_int_66

#define kcg_comp_P046_section_int_T_TM kcg_comp_struct__31505

#define kcg_copy_P046_section_int_T_TM kcg_copy_struct__31505

#define kcg_comp_P046_trackide_sectionlist_T_TM kcg_comp_array__31519

#define kcg_copy_P046_trackide_sectionlist_T_TM kcg_copy_array__31519

#define kcg_comp_P046_trackside_int_T_TM kcg_comp_struct__31522

#define kcg_copy_P046_trackside_int_T_TM kcg_copy_struct__31522

#define kcg_comp_P042_trackside_int_T_TM kcg_comp_struct__31533

#define kcg_copy_P042_trackside_int_T_TM kcg_copy_struct__31533

#define kcg_comp_CompressedBaliseMessage_TM kcg_comp_struct__31421

#define kcg_copy_CompressedBaliseMessage_TM kcg_copy_struct__31421

#define kcg_comp_BaliseGroupData_TM kcg_comp_struct__31437

#define kcg_copy_BaliseGroupData_TM kcg_copy_struct__31437

#define kcg_comp_P045_trackside_int_T_TM kcg_comp_struct__31577

#define kcg_copy_P045_trackside_int_T_TM kcg_copy_struct__31577

#define kcg_comp_P255_trackside_int_T_TM kcg_comp_struct__31454

#define kcg_copy_P255_trackside_int_T_TM kcg_copy_struct__31454

#define kcg_comp_BaliseTelegramHeader_int_T_TM kcg_comp_struct__31385

#define kcg_copy_BaliseTelegramHeader_int_T_TM kcg_copy_struct__31385

#define kcg_comp_TelegramHeader_T_BG_Types_Pkg kcg_comp_struct__31353

#define kcg_copy_TelegramHeader_T_BG_Types_Pkg kcg_copy_struct__31353

#define kcg_comp_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_comp_array__31768

#define kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_copy_array__31768

#define kcg_comp_P027V1_section_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2

#define kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2

#define kcg_comp_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2_32

#define kcg_copy_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2_32

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array__31782

#define kcg_copy_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array__31782

#define kcg_comp_P027V1_section_int_T_TM_baseline2 kcg_comp_struct__31771

#define kcg_copy_P027V1_section_int_T_TM_baseline2 kcg_copy_struct__31771

#define kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_comp_array__31785

#define kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_copy_array__31785

#define kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2 kcg_comp_struct__31763

#define kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2 kcg_copy_struct__31763

#define kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_comp_array__31768

#define kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_copy_array__31768

#define kcg_comp_P027V1_trackside_int_T_TM_baseline2 kcg_comp_struct__31788

#define kcg_copy_P027V1_trackside_int_T_TM_baseline2 kcg_copy_struct__31788

#define kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P003V1_trackside_int_T_TM_baseline2 kcg_comp_struct__31548

#define kcg_copy_P003V1_trackside_int_T_TM_baseline2 kcg_copy_struct__31548

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-07-22T11:03:50
*************************************************************$ */


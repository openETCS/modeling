/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-07T00:28:47
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

/* L_MESSAGE */
typedef kcg_int L_MESSAGE;

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
} struct__9405;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct__9405 Radio_TrackTrain_Header_T_Radio_Types_Pkg;

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
} struct__9423;

/* BG_Types_Pkg::TelegramHeader_T */
typedef struct__9423 TelegramHeader_T_BG_Types_Pkg;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__9439;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__9439 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__9447[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__9447 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__9450;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__9450 CompressedPackets_T_Common_Types_Pkg;

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
} struct__9455;

/* TM::BaliseTelegramHeader_int_T */
typedef struct__9455 BaliseTelegramHeader_int_T_TM;

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
} struct__9468;

/* TM::Radio_TrackTrain_Header_T */
typedef struct__9468 _3_Radio_TrackTrain_Header_T_TM;

typedef struct {
  _3_Radio_TrackTrain_Header_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__9486;

/* TM::CompressedRadioMessage */
typedef struct__9486 CompressedRadioMessage_TM;

typedef struct {
  BaliseTelegramHeader_int_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__9491;

/* TM::CompressedBaliseMessage */
typedef struct__9491 CompressedBaliseMessage_TM;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  kcg_int field1;
  kcg_int field2;
  kcg_int field3;
  kcg_int field4;
  kcg_int field5;
  kcg_int field6;
  kcg_int field7;
  kcg_int field8;
} struct__9496;

/* TM_radio_messages::M_TrackTrain_Radio_T */
typedef struct__9496 M_TrackTrain_Radio_T_TM_radio_messages;

typedef struct {
  M_TrackTrain_Radio_T_TM_radio_messages message;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int trigger;
  kcg_bool message_sent;
} struct__9511;

/* InfraLib::R_data_internal_T */
typedef struct__9511 R_data_internal_T_InfraLib;

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
} struct__9518;

/* TM_radio_messages::M_015_int_T */
typedef struct__9518 M_015_int_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
} struct__9532;

/* TM_radio_messages::M_003_int_T */
typedef struct__9532 M_003_int_T_TM_radio_messages;

typedef kcg_int array_int_4[4];

/* TM::P015_section_array_T */
typedef array_int_4 P015_section_array_T_TM;

typedef struct {
  kcg_int L_SECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
} struct__9544;

/* TM::P015_section_int_T */
typedef struct__9544 P015_section_int_T_TM;

typedef P015_section_array_T_TM array_int_4_32[32];

/* TM::P015_OBU_sectionlist_array_T */
typedef array_int_4_32 P015_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_128[128];

/* TM::P015_sections_array_flat_T */
typedef array_int_128 P015_sections_array_flat_T_TM;

typedef P015_section_int_T_TM array__9557[32];

/* TM::P015_trackide_sectionlist_T */
typedef array__9557 P015_trackide_sectionlist_T_TM;

/* TM::P015_OBU_sectionlist_int_T */
typedef array__9557 P015_OBU_sectionlist_int_T_TM;

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
} struct__9560;

/* TM::P015_trackside_int_T */
typedef struct__9560 P015_trackside_int_T_TM;

typedef struct { kcg_bool valid; kcg_int NID_PACKET; } struct__9586;

/* TM::P255_trackside_int_T */
typedef struct__9586 P255_trackside_int_T_TM;

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
} struct__9591;

/* TM::P065_trackside_int_T */
typedef struct__9591 P065_trackside_int_T_TM;

typedef kcg_int array_int_64[64];

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef struct { kcg_int NC_DIFF; kcg_int V_DIFF; } struct__9607;

/* TM_baseline2::P027V1_section_int_qdiff_T */
typedef struct__9607 P027V1_section_int_qdiff_T_TM_baseline2;

typedef P027V1_section_int_qdiff_T_TM_baseline2 array__9612[32];

/* TM_baseline2::P027V1_trackside_qdifflist_T */
typedef array__9612 P027V1_trackside_qdifflist_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_int_qdiff_T */
typedef array__9612 P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2;

typedef struct {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
} struct__9615;

/* TM_baseline2::P027V1_section_int_T */
typedef struct__9615 P027V1_section_int_T_TM_baseline2;

typedef kcg_int array_int_2[2];

/* TM_baseline2::P027V1_section_array_qdiff_T */
typedef array_int_2 P027V1_section_array_qdiff_T_TM_baseline2;

typedef P027V1_section_array_qdiff_T_TM_baseline2 array_int_2_32[32];

/* TM_baseline2::P027V1_OBU_sectionlist_array_qdiff_T */
typedef array_int_2_32 _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__9629[33];

/* TM_baseline2::P027V1_OBU_sectionlist_int_T */
typedef array__9629 _2_P027V1_OBU_sectionlist_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__9632[32];

/* TM_baseline2::P027V1_trackside_sectionlist_T */
typedef array__9632 P027V1_trackside_sectionlist_T_TM_baseline2;

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
} struct__9635;

/* TM_baseline2::P027V1_trackside_int_T */
typedef struct__9635 P027V1_trackside_int_T_TM_baseline2;

typedef kcg_int array_int_3[3];

/* TM::P021_section_array_T */
typedef array_int_3 P021_section_array_T_TM;

/* TM::P041_section_array_T */
typedef array_int_3 P041_section_array_T_TM;

typedef struct {
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
} struct__9653;

/* TM::P021_section_int_T */
typedef struct__9653 P021_section_int_T_TM;

typedef array_int_3 array_int_3_33[33];

/* TM::P021_OBU_sectionlist_array_T */
typedef array_int_3_33 P021_OBU_sectionlist_array_T_TM;

/* TM::P041_OBU_sectionlist_array_T */
typedef array_int_3_33 P041_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_99[99];

/* TM::P021_sections_array_flat_T */
typedef array_int_99 P021_sections_array_flat_T_TM;

/* TM::P041_sections_array_flat_T */
typedef array_int_99 P041_sections_array_flat_T_TM;

typedef P021_section_int_T_TM array__9665[33];

/* TM::P021_OBU_sectionlist_int_T */
typedef array__9665 P021_OBU_sectionlist_int_T_TM;

typedef P021_section_int_T_TM array__9668[32];

/* TM::P021_trackide_sectionlist_T */
typedef array__9668 P021_trackide_sectionlist_T_TM;

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
} struct__9671;

/* TM::P021_trackside_int_T */
typedef struct__9671 P021_trackside_int_T_TM;

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
} struct__9687;

/* TM::P005_section_int_T */
typedef struct__9687 P005_section_int_T_TM;

typedef P005_section_array_T_TM array_int_7_33[33];

/* TM::P005_OBU_sectionlist_array_T */
typedef array_int_7_33 P005_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_231[231];

/* TM::P005_sections_array_flat_T */
typedef array_int_231 P005_sections_array_flat_T_TM;

typedef P005_section_int_T_TM array__9703[33];

/* TM::P005_OBU_sectionlist_int_T */
typedef array__9703 P005_OBU_sectionlist_int_T_TM;

typedef P005_section_int_T_TM array__9706[32];

/* TM::P005_trackide_sectionlist_T */
typedef array__9706 P005_trackide_sectionlist_T_TM;

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
} struct__9709;

/* TM::P005_trackside_int_T */
typedef struct__9709 P005_trackside_int_T_TM;

typedef struct {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
} struct__9726;

/* TM::P041_section_int_T */
typedef struct__9726 P041_section_int_T_TM;

typedef P041_section_int_T_TM array__9732[33];

/* TM::P041_OBU_sectionlist_int_T */
typedef array__9732 P041_OBU_sectionlist_int_T_TM;

typedef P041_section_int_T_TM array__9735[32];

/* TM::P041_trackide_sectionlist_T */
typedef array__9735 P041_trackide_sectionlist_T_TM;

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
} struct__9738;

/* TM::P041_trackside_int_T */
typedef struct__9738 P041_trackside_int_T_TM;

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
} struct__9755;

/* TM_baseline2::P003V1_trackside_int_T */
typedef struct__9755 P003V1_trackside_int_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
} struct__9784;

/* TM_radio_messages::M_024_T */
typedef struct__9784 M_024_T_TM_radio_messages;

/* TM_radio_messages::M_003_T */
typedef struct__9784 M_003_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_received;
} struct__9793;

/* TM_radio_messages::M_008_T */
typedef struct__9793 M_008_T_TM_radio_messages;

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
} struct__9803;

/* TM_radio_messages::M_015_T */
typedef struct__9803 M_015_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  M_VERSION m_version;
} struct__9817;

/* TM_radio_messages::M_032_T */
typedef struct__9817 M_032_T_TM_radio_messages;

typedef struct {
  BaliseTelegramHeader_int_T_TM header;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int engineering_BG_location;
  kcg_real TrainPos;
  kcg_int pig_nom_0;
  kcg_bool balise_passed;
} struct__9827;

/* InfraLib::B_data_internal_T */
typedef struct__9827 B_data_internal_T_InfraLib;

typedef struct {
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Pos;
  OrBG_TM Or_BG;
  OrLine_TM Or_Line;
} struct__9836;

/* Basics::BaliseGroupData */
typedef struct__9836 BaliseGroupData_Basics;

/* TM::BaliseGroupData */
typedef struct__9836 BaliseGroupData_TM;

typedef CompressedPacketData_T_Common_Types_Pkg array_int_500_500[500];

typedef array_int_7_33 array_int_7_33_231[231];

typedef kcg_int array_int_264[264];

typedef kcg_int array_int_1[1];

typedef kcg_int array_int_5[5];

typedef kcg_int array_int_236[236];

typedef P005_section_int_T_TM array__9862[1];

typedef array_int_3_33 array_int_3_33_231[231];

typedef kcg_int array_int_396[396];

typedef kcg_int array_int_104[104];

typedef P021_section_int_T_TM array__9874[1];

typedef kcg_int array_int_494[494];

typedef kcg_int array_int_6[6];

typedef P027V1_section_int_T_TM_baseline2 array__9883[1];

typedef array_int_2_32 array_int_2_32_32[32];

typedef kcg_int array_int_432[432];

typedef kcg_int array_int_68[68];

typedef kcg_int array_int_33[33];

typedef kcg_int array_int_444[444];

typedef kcg_int array_int_24[24];

typedef kcg_int array_int_56[56];

typedef kcg_int array_int_18[18];

typedef array_int_3_33 array_int_3_33_99[99];

typedef kcg_int array_int_395[395];

typedef kcg_int array_int_105[105];

typedef P041_section_int_T_TM array__9919[1];

typedef kcg_int array_int_491[491];

typedef kcg_int array_int_9[9];

typedef kcg_int array_int_499[499];

typedef array_int_4_32 array_int_4_32_128[128];

typedef kcg_int array_int_351[351];

typedef kcg_int array_int_20[20];

typedef kcg_int array_int_149[149];

typedef kcg_int array_int_14[14];

typedef kcg_int array_int_21[21];

#ifndef kcg_copy_struct__9405
#define kcg_copy_struct__9405(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9405)))
#endif /* kcg_copy_struct__9405 */

#ifndef kcg_copy_struct__9423
#define kcg_copy_struct__9423(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9423)))
#endif /* kcg_copy_struct__9423 */

#ifndef kcg_copy_struct__9439
#define kcg_copy_struct__9439(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9439)))
#endif /* kcg_copy_struct__9439 */

#ifndef kcg_copy_struct__9450
#define kcg_copy_struct__9450(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9450)))
#endif /* kcg_copy_struct__9450 */

#ifndef kcg_copy_struct__9455
#define kcg_copy_struct__9455(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9455)))
#endif /* kcg_copy_struct__9455 */

#ifndef kcg_copy_struct__9468
#define kcg_copy_struct__9468(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9468)))
#endif /* kcg_copy_struct__9468 */

#ifndef kcg_copy_struct__9486
#define kcg_copy_struct__9486(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9486)))
#endif /* kcg_copy_struct__9486 */

#ifndef kcg_copy_struct__9491
#define kcg_copy_struct__9491(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9491)))
#endif /* kcg_copy_struct__9491 */

#ifndef kcg_copy_struct__9496
#define kcg_copy_struct__9496(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9496)))
#endif /* kcg_copy_struct__9496 */

#ifndef kcg_copy_struct__9511
#define kcg_copy_struct__9511(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9511)))
#endif /* kcg_copy_struct__9511 */

#ifndef kcg_copy_struct__9518
#define kcg_copy_struct__9518(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9518)))
#endif /* kcg_copy_struct__9518 */

#ifndef kcg_copy_struct__9532
#define kcg_copy_struct__9532(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9532)))
#endif /* kcg_copy_struct__9532 */

#ifndef kcg_copy_struct__9544
#define kcg_copy_struct__9544(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9544)))
#endif /* kcg_copy_struct__9544 */

#ifndef kcg_copy_struct__9560
#define kcg_copy_struct__9560(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9560)))
#endif /* kcg_copy_struct__9560 */

#ifndef kcg_copy_struct__9586
#define kcg_copy_struct__9586(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9586)))
#endif /* kcg_copy_struct__9586 */

#ifndef kcg_copy_struct__9591
#define kcg_copy_struct__9591(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9591)))
#endif /* kcg_copy_struct__9591 */

#ifndef kcg_copy_struct__9607
#define kcg_copy_struct__9607(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9607)))
#endif /* kcg_copy_struct__9607 */

#ifndef kcg_copy_struct__9615
#define kcg_copy_struct__9615(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9615)))
#endif /* kcg_copy_struct__9615 */

#ifndef kcg_copy_struct__9635
#define kcg_copy_struct__9635(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9635)))
#endif /* kcg_copy_struct__9635 */

#ifndef kcg_copy_struct__9653
#define kcg_copy_struct__9653(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9653)))
#endif /* kcg_copy_struct__9653 */

#ifndef kcg_copy_struct__9671
#define kcg_copy_struct__9671(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9671)))
#endif /* kcg_copy_struct__9671 */

#ifndef kcg_copy_struct__9687
#define kcg_copy_struct__9687(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9687)))
#endif /* kcg_copy_struct__9687 */

#ifndef kcg_copy_struct__9709
#define kcg_copy_struct__9709(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9709)))
#endif /* kcg_copy_struct__9709 */

#ifndef kcg_copy_struct__9726
#define kcg_copy_struct__9726(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9726)))
#endif /* kcg_copy_struct__9726 */

#ifndef kcg_copy_struct__9738
#define kcg_copy_struct__9738(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9738)))
#endif /* kcg_copy_struct__9738 */

#ifndef kcg_copy_struct__9755
#define kcg_copy_struct__9755(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9755)))
#endif /* kcg_copy_struct__9755 */

#ifndef kcg_copy_struct__9784
#define kcg_copy_struct__9784(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9784)))
#endif /* kcg_copy_struct__9784 */

#ifndef kcg_copy_struct__9793
#define kcg_copy_struct__9793(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9793)))
#endif /* kcg_copy_struct__9793 */

#ifndef kcg_copy_struct__9803
#define kcg_copy_struct__9803(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9803)))
#endif /* kcg_copy_struct__9803 */

#ifndef kcg_copy_struct__9817
#define kcg_copy_struct__9817(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9817)))
#endif /* kcg_copy_struct__9817 */

#ifndef kcg_copy_struct__9827
#define kcg_copy_struct__9827(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9827)))
#endif /* kcg_copy_struct__9827 */

#ifndef kcg_copy_struct__9836
#define kcg_copy_struct__9836(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9836)))
#endif /* kcg_copy_struct__9836 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__9447
#define kcg_copy_array__9447(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__9447)))
#endif /* kcg_copy_array__9447 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_int_4_32
#define kcg_copy_array_int_4_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4_32)))
#endif /* kcg_copy_array_int_4_32 */

#ifndef kcg_copy_array_int_128
#define kcg_copy_array_int_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128)))
#endif /* kcg_copy_array_int_128 */

#ifndef kcg_copy_array__9557
#define kcg_copy_array__9557(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__9557)))
#endif /* kcg_copy_array__9557 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array__9612
#define kcg_copy_array__9612(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__9612)))
#endif /* kcg_copy_array__9612 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array_int_2_32
#define kcg_copy_array_int_2_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32)))
#endif /* kcg_copy_array_int_2_32 */

#ifndef kcg_copy_array__9629
#define kcg_copy_array__9629(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__9629)))
#endif /* kcg_copy_array__9629 */

#ifndef kcg_copy_array__9632
#define kcg_copy_array__9632(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__9632)))
#endif /* kcg_copy_array__9632 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_int_3_33
#define kcg_copy_array_int_3_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33)))
#endif /* kcg_copy_array_int_3_33 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__9665
#define kcg_copy_array__9665(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__9665)))
#endif /* kcg_copy_array__9665 */

#ifndef kcg_copy_array__9668
#define kcg_copy_array__9668(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__9668)))
#endif /* kcg_copy_array__9668 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array_int_7_33
#define kcg_copy_array_int_7_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33)))
#endif /* kcg_copy_array_int_7_33 */

#ifndef kcg_copy_array_int_231
#define kcg_copy_array_int_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231)))
#endif /* kcg_copy_array_int_231 */

#ifndef kcg_copy_array__9703
#define kcg_copy_array__9703(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__9703)))
#endif /* kcg_copy_array__9703 */

#ifndef kcg_copy_array__9706
#define kcg_copy_array__9706(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__9706)))
#endif /* kcg_copy_array__9706 */

#ifndef kcg_copy_array__9732
#define kcg_copy_array__9732(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__9732)))
#endif /* kcg_copy_array__9732 */

#ifndef kcg_copy_array__9735
#define kcg_copy_array__9735(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__9735)))
#endif /* kcg_copy_array__9735 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array_int_500_500
#define kcg_copy_array_int_500_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500_500)))
#endif /* kcg_copy_array_int_500_500 */

#ifndef kcg_copy_array_int_7_33_231
#define kcg_copy_array_int_7_33_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33_231)))
#endif /* kcg_copy_array_int_7_33_231 */

#ifndef kcg_copy_array_int_264
#define kcg_copy_array_int_264(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_264)))
#endif /* kcg_copy_array_int_264 */

#ifndef kcg_copy_array_int_1
#define kcg_copy_array_int_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_1)))
#endif /* kcg_copy_array_int_1 */

#ifndef kcg_copy_array_int_5
#define kcg_copy_array_int_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_5)))
#endif /* kcg_copy_array_int_5 */

#ifndef kcg_copy_array_int_236
#define kcg_copy_array_int_236(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_236)))
#endif /* kcg_copy_array_int_236 */

#ifndef kcg_copy_array__9862
#define kcg_copy_array__9862(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__9862)))
#endif /* kcg_copy_array__9862 */

#ifndef kcg_copy_array_int_3_33_231
#define kcg_copy_array_int_3_33_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33_231)))
#endif /* kcg_copy_array_int_3_33_231 */

#ifndef kcg_copy_array_int_396
#define kcg_copy_array_int_396(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_396)))
#endif /* kcg_copy_array_int_396 */

#ifndef kcg_copy_array_int_104
#define kcg_copy_array_int_104(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_104)))
#endif /* kcg_copy_array_int_104 */

#ifndef kcg_copy_array__9874
#define kcg_copy_array__9874(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__9874)))
#endif /* kcg_copy_array__9874 */

#ifndef kcg_copy_array_int_494
#define kcg_copy_array_int_494(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_494)))
#endif /* kcg_copy_array_int_494 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array__9883
#define kcg_copy_array__9883(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__9883)))
#endif /* kcg_copy_array__9883 */

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

#ifndef kcg_copy_array_int_444
#define kcg_copy_array_int_444(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_444)))
#endif /* kcg_copy_array_int_444 */

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

#ifndef kcg_copy_array_int_105
#define kcg_copy_array_int_105(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_105)))
#endif /* kcg_copy_array_int_105 */

#ifndef kcg_copy_array__9919
#define kcg_copy_array__9919(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__9919)))
#endif /* kcg_copy_array__9919 */

#ifndef kcg_copy_array_int_491
#define kcg_copy_array_int_491(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_491)))
#endif /* kcg_copy_array_int_491 */

#ifndef kcg_copy_array_int_9
#define kcg_copy_array_int_9(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_9)))
#endif /* kcg_copy_array_int_9 */

#ifndef kcg_copy_array_int_499
#define kcg_copy_array_int_499(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_499)))
#endif /* kcg_copy_array_int_499 */

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

#ifndef kcg_comp_struct__9405
extern kcg_bool kcg_comp_struct__9405(
  struct__9405 *kcg_c1,
  struct__9405 *kcg_c2);
#endif /* kcg_comp_struct__9405 */

#ifndef kcg_comp_struct__9423
extern kcg_bool kcg_comp_struct__9423(
  struct__9423 *kcg_c1,
  struct__9423 *kcg_c2);
#endif /* kcg_comp_struct__9423 */

#ifndef kcg_comp_struct__9439
extern kcg_bool kcg_comp_struct__9439(
  struct__9439 *kcg_c1,
  struct__9439 *kcg_c2);
#endif /* kcg_comp_struct__9439 */

#ifndef kcg_comp_struct__9450
extern kcg_bool kcg_comp_struct__9450(
  struct__9450 *kcg_c1,
  struct__9450 *kcg_c2);
#endif /* kcg_comp_struct__9450 */

#ifndef kcg_comp_struct__9455
extern kcg_bool kcg_comp_struct__9455(
  struct__9455 *kcg_c1,
  struct__9455 *kcg_c2);
#endif /* kcg_comp_struct__9455 */

#ifndef kcg_comp_struct__9468
extern kcg_bool kcg_comp_struct__9468(
  struct__9468 *kcg_c1,
  struct__9468 *kcg_c2);
#endif /* kcg_comp_struct__9468 */

#ifndef kcg_comp_struct__9486
extern kcg_bool kcg_comp_struct__9486(
  struct__9486 *kcg_c1,
  struct__9486 *kcg_c2);
#endif /* kcg_comp_struct__9486 */

#ifndef kcg_comp_struct__9491
extern kcg_bool kcg_comp_struct__9491(
  struct__9491 *kcg_c1,
  struct__9491 *kcg_c2);
#endif /* kcg_comp_struct__9491 */

#ifndef kcg_comp_struct__9496
extern kcg_bool kcg_comp_struct__9496(
  struct__9496 *kcg_c1,
  struct__9496 *kcg_c2);
#endif /* kcg_comp_struct__9496 */

#ifndef kcg_comp_struct__9511
extern kcg_bool kcg_comp_struct__9511(
  struct__9511 *kcg_c1,
  struct__9511 *kcg_c2);
#endif /* kcg_comp_struct__9511 */

#ifndef kcg_comp_struct__9518
extern kcg_bool kcg_comp_struct__9518(
  struct__9518 *kcg_c1,
  struct__9518 *kcg_c2);
#endif /* kcg_comp_struct__9518 */

#ifndef kcg_comp_struct__9532
extern kcg_bool kcg_comp_struct__9532(
  struct__9532 *kcg_c1,
  struct__9532 *kcg_c2);
#endif /* kcg_comp_struct__9532 */

#ifndef kcg_comp_struct__9544
extern kcg_bool kcg_comp_struct__9544(
  struct__9544 *kcg_c1,
  struct__9544 *kcg_c2);
#endif /* kcg_comp_struct__9544 */

#ifndef kcg_comp_struct__9560
extern kcg_bool kcg_comp_struct__9560(
  struct__9560 *kcg_c1,
  struct__9560 *kcg_c2);
#endif /* kcg_comp_struct__9560 */

#ifndef kcg_comp_struct__9586
extern kcg_bool kcg_comp_struct__9586(
  struct__9586 *kcg_c1,
  struct__9586 *kcg_c2);
#endif /* kcg_comp_struct__9586 */

#ifndef kcg_comp_struct__9591
extern kcg_bool kcg_comp_struct__9591(
  struct__9591 *kcg_c1,
  struct__9591 *kcg_c2);
#endif /* kcg_comp_struct__9591 */

#ifndef kcg_comp_struct__9607
extern kcg_bool kcg_comp_struct__9607(
  struct__9607 *kcg_c1,
  struct__9607 *kcg_c2);
#endif /* kcg_comp_struct__9607 */

#ifndef kcg_comp_struct__9615
extern kcg_bool kcg_comp_struct__9615(
  struct__9615 *kcg_c1,
  struct__9615 *kcg_c2);
#endif /* kcg_comp_struct__9615 */

#ifndef kcg_comp_struct__9635
extern kcg_bool kcg_comp_struct__9635(
  struct__9635 *kcg_c1,
  struct__9635 *kcg_c2);
#endif /* kcg_comp_struct__9635 */

#ifndef kcg_comp_struct__9653
extern kcg_bool kcg_comp_struct__9653(
  struct__9653 *kcg_c1,
  struct__9653 *kcg_c2);
#endif /* kcg_comp_struct__9653 */

#ifndef kcg_comp_struct__9671
extern kcg_bool kcg_comp_struct__9671(
  struct__9671 *kcg_c1,
  struct__9671 *kcg_c2);
#endif /* kcg_comp_struct__9671 */

#ifndef kcg_comp_struct__9687
extern kcg_bool kcg_comp_struct__9687(
  struct__9687 *kcg_c1,
  struct__9687 *kcg_c2);
#endif /* kcg_comp_struct__9687 */

#ifndef kcg_comp_struct__9709
extern kcg_bool kcg_comp_struct__9709(
  struct__9709 *kcg_c1,
  struct__9709 *kcg_c2);
#endif /* kcg_comp_struct__9709 */

#ifndef kcg_comp_struct__9726
extern kcg_bool kcg_comp_struct__9726(
  struct__9726 *kcg_c1,
  struct__9726 *kcg_c2);
#endif /* kcg_comp_struct__9726 */

#ifndef kcg_comp_struct__9738
extern kcg_bool kcg_comp_struct__9738(
  struct__9738 *kcg_c1,
  struct__9738 *kcg_c2);
#endif /* kcg_comp_struct__9738 */

#ifndef kcg_comp_struct__9755
extern kcg_bool kcg_comp_struct__9755(
  struct__9755 *kcg_c1,
  struct__9755 *kcg_c2);
#endif /* kcg_comp_struct__9755 */

#ifndef kcg_comp_struct__9784
extern kcg_bool kcg_comp_struct__9784(
  struct__9784 *kcg_c1,
  struct__9784 *kcg_c2);
#endif /* kcg_comp_struct__9784 */

#ifndef kcg_comp_struct__9793
extern kcg_bool kcg_comp_struct__9793(
  struct__9793 *kcg_c1,
  struct__9793 *kcg_c2);
#endif /* kcg_comp_struct__9793 */

#ifndef kcg_comp_struct__9803
extern kcg_bool kcg_comp_struct__9803(
  struct__9803 *kcg_c1,
  struct__9803 *kcg_c2);
#endif /* kcg_comp_struct__9803 */

#ifndef kcg_comp_struct__9817
extern kcg_bool kcg_comp_struct__9817(
  struct__9817 *kcg_c1,
  struct__9817 *kcg_c2);
#endif /* kcg_comp_struct__9817 */

#ifndef kcg_comp_struct__9827
extern kcg_bool kcg_comp_struct__9827(
  struct__9827 *kcg_c1,
  struct__9827 *kcg_c2);
#endif /* kcg_comp_struct__9827 */

#ifndef kcg_comp_struct__9836
extern kcg_bool kcg_comp_struct__9836(
  struct__9836 *kcg_c1,
  struct__9836 *kcg_c2);
#endif /* kcg_comp_struct__9836 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__9447
extern kcg_bool kcg_comp_array__9447(array__9447 *kcg_c1, array__9447 *kcg_c2);
#endif /* kcg_comp_array__9447 */

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

#ifndef kcg_comp_array__9557
extern kcg_bool kcg_comp_array__9557(array__9557 *kcg_c1, array__9557 *kcg_c2);
#endif /* kcg_comp_array__9557 */

#ifndef kcg_comp_array_int_64
extern kcg_bool kcg_comp_array_int_64(
  array_int_64 *kcg_c1,
  array_int_64 *kcg_c2);
#endif /* kcg_comp_array_int_64 */

#ifndef kcg_comp_array__9612
extern kcg_bool kcg_comp_array__9612(array__9612 *kcg_c1, array__9612 *kcg_c2);
#endif /* kcg_comp_array__9612 */

#ifndef kcg_comp_array_int_2
extern kcg_bool kcg_comp_array_int_2(array_int_2 *kcg_c1, array_int_2 *kcg_c2);
#endif /* kcg_comp_array_int_2 */

#ifndef kcg_comp_array_int_2_32
extern kcg_bool kcg_comp_array_int_2_32(
  array_int_2_32 *kcg_c1,
  array_int_2_32 *kcg_c2);
#endif /* kcg_comp_array_int_2_32 */

#ifndef kcg_comp_array__9629
extern kcg_bool kcg_comp_array__9629(array__9629 *kcg_c1, array__9629 *kcg_c2);
#endif /* kcg_comp_array__9629 */

#ifndef kcg_comp_array__9632
extern kcg_bool kcg_comp_array__9632(array__9632 *kcg_c1, array__9632 *kcg_c2);
#endif /* kcg_comp_array__9632 */

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

#ifndef kcg_comp_array__9665
extern kcg_bool kcg_comp_array__9665(array__9665 *kcg_c1, array__9665 *kcg_c2);
#endif /* kcg_comp_array__9665 */

#ifndef kcg_comp_array__9668
extern kcg_bool kcg_comp_array__9668(array__9668 *kcg_c1, array__9668 *kcg_c2);
#endif /* kcg_comp_array__9668 */

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

#ifndef kcg_comp_array__9703
extern kcg_bool kcg_comp_array__9703(array__9703 *kcg_c1, array__9703 *kcg_c2);
#endif /* kcg_comp_array__9703 */

#ifndef kcg_comp_array__9706
extern kcg_bool kcg_comp_array__9706(array__9706 *kcg_c1, array__9706 *kcg_c2);
#endif /* kcg_comp_array__9706 */

#ifndef kcg_comp_array__9732
extern kcg_bool kcg_comp_array__9732(array__9732 *kcg_c1, array__9732 *kcg_c2);
#endif /* kcg_comp_array__9732 */

#ifndef kcg_comp_array__9735
extern kcg_bool kcg_comp_array__9735(array__9735 *kcg_c1, array__9735 *kcg_c2);
#endif /* kcg_comp_array__9735 */

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

#ifndef kcg_comp_array__9862
extern kcg_bool kcg_comp_array__9862(array__9862 *kcg_c1, array__9862 *kcg_c2);
#endif /* kcg_comp_array__9862 */

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

#ifndef kcg_comp_array__9874
extern kcg_bool kcg_comp_array__9874(array__9874 *kcg_c1, array__9874 *kcg_c2);
#endif /* kcg_comp_array__9874 */

#ifndef kcg_comp_array_int_494
extern kcg_bool kcg_comp_array_int_494(
  array_int_494 *kcg_c1,
  array_int_494 *kcg_c2);
#endif /* kcg_comp_array_int_494 */

#ifndef kcg_comp_array_int_6
extern kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2);
#endif /* kcg_comp_array_int_6 */

#ifndef kcg_comp_array__9883
extern kcg_bool kcg_comp_array__9883(array__9883 *kcg_c1, array__9883 *kcg_c2);
#endif /* kcg_comp_array__9883 */

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

#ifndef kcg_comp_array_int_444
extern kcg_bool kcg_comp_array_int_444(
  array_int_444 *kcg_c1,
  array_int_444 *kcg_c2);
#endif /* kcg_comp_array_int_444 */

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

#ifndef kcg_comp_array_int_105
extern kcg_bool kcg_comp_array_int_105(
  array_int_105 *kcg_c1,
  array_int_105 *kcg_c2);
#endif /* kcg_comp_array_int_105 */

#ifndef kcg_comp_array__9919
extern kcg_bool kcg_comp_array__9919(array__9919 *kcg_c1, array__9919 *kcg_c2);
#endif /* kcg_comp_array__9919 */

#ifndef kcg_comp_array_int_491
extern kcg_bool kcg_comp_array_int_491(
  array_int_491 *kcg_c1,
  array_int_491 *kcg_c2);
#endif /* kcg_comp_array_int_491 */

#ifndef kcg_comp_array_int_9
extern kcg_bool kcg_comp_array_int_9(array_int_9 *kcg_c1, array_int_9 *kcg_c2);
#endif /* kcg_comp_array_int_9 */

#ifndef kcg_comp_array_int_499
extern kcg_bool kcg_comp_array_int_499(
  array_int_499 *kcg_c1,
  array_int_499 *kcg_c2);
#endif /* kcg_comp_array_int_499 */

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

#define kcg_comp_BaliseGroupData_Basics kcg_comp_struct__9836

#define kcg_copy_BaliseGroupData_Basics kcg_copy_struct__9836

#define kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_comp_struct__9405

#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_copy_struct__9405

#define kcg_comp_M_015_int_T_TM_radio_messages kcg_comp_struct__9518

#define kcg_copy_M_015_int_T_TM_radio_messages kcg_copy_struct__9518

#define kcg_comp_M_003_int_T_TM_radio_messages kcg_comp_struct__9532

#define kcg_copy_M_003_int_T_TM_radio_messages kcg_copy_struct__9532

#define kcg_comp_M_003_T_TM_radio_messages kcg_comp_struct__9784

#define kcg_copy_M_003_T_TM_radio_messages kcg_copy_struct__9784

#define kcg_comp_M_008_T_TM_radio_messages kcg_comp_struct__9793

#define kcg_copy_M_008_T_TM_radio_messages kcg_copy_struct__9793

#define kcg_comp_M_015_T_TM_radio_messages kcg_comp_struct__9803

#define kcg_copy_M_015_T_TM_radio_messages kcg_copy_struct__9803

#define kcg_comp_M_024_T_TM_radio_messages kcg_comp_struct__9784

#define kcg_copy_M_024_T_TM_radio_messages kcg_copy_struct__9784

#define kcg_comp_M_032_T_TM_radio_messages kcg_comp_struct__9817

#define kcg_copy_M_032_T_TM_radio_messages kcg_copy_struct__9817

#define kcg_comp_M_TrackTrain_Radio_T_TM_radio_messages kcg_comp_struct__9496

#define kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages kcg_copy_struct__9496

#define kcg_comp_TelegramHeader_T_BG_Types_Pkg kcg_comp_struct__9423

#define kcg_copy_TelegramHeader_T_BG_Types_Pkg kcg_copy_struct__9423

#define kcg_comp_R_data_internal_T_InfraLib kcg_comp_struct__9511

#define kcg_copy_R_data_internal_T_InfraLib kcg_copy_struct__9511

#define kcg_comp_B_data_internal_T_InfraLib kcg_comp_struct__9827

#define kcg_copy_B_data_internal_T_InfraLib kcg_copy_struct__9827

#define kcg_comp_P015_OBU_sectionlist_int_T_TM kcg_comp_array__9557

#define kcg_copy_P015_OBU_sectionlist_int_T_TM kcg_copy_array__9557

#define kcg_comp_P015_section_array_T_TM kcg_comp_array_int_4

#define kcg_copy_P015_section_array_T_TM kcg_copy_array_int_4

#define kcg_comp_P015_OBU_sectionlist_array_T_TM kcg_comp_array_int_4_32

#define kcg_copy_P015_OBU_sectionlist_array_T_TM kcg_copy_array_int_4_32

#define kcg_comp_P015_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P015_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_P015_section_int_T_TM kcg_comp_struct__9544

#define kcg_copy_P015_section_int_T_TM kcg_copy_struct__9544

#define kcg_comp_P015_trackide_sectionlist_T_TM kcg_comp_array__9557

#define kcg_copy_P015_trackide_sectionlist_T_TM kcg_copy_array__9557

#define kcg_comp_P015_trackside_int_T_TM kcg_comp_struct__9560

#define kcg_copy_P015_trackside_int_T_TM kcg_copy_struct__9560

#define kcg_comp_P255_trackside_int_T_TM kcg_comp_struct__9586

#define kcg_copy_P255_trackside_int_T_TM kcg_copy_struct__9586

#define kcg_comp_P065_trackside_int_T_TM kcg_comp_struct__9591

#define kcg_copy_P065_trackside_int_T_TM kcg_copy_struct__9591

#define kcg_comp_P041_OBU_sectionlist_int_T_TM kcg_comp_array__9732

#define kcg_copy_P041_OBU_sectionlist_int_T_TM kcg_copy_array__9732

#define kcg_comp_P041_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P041_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P041_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P041_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P041_section_int_T_TM kcg_comp_struct__9726

#define kcg_copy_P041_section_int_T_TM kcg_copy_struct__9726

#define kcg_comp_P041_trackide_sectionlist_T_TM kcg_comp_array__9735

#define kcg_copy_P041_trackide_sectionlist_T_TM kcg_copy_array__9735

#define kcg_comp_P041_trackside_int_T_TM kcg_comp_struct__9738

#define kcg_copy_P041_trackside_int_T_TM kcg_copy_struct__9738

#define kcg_comp_P021_OBU_sectionlist_int_T_TM kcg_comp_array__9665

#define kcg_copy_P021_OBU_sectionlist_int_T_TM kcg_copy_array__9665

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_P021_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P021_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__9439

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__9439

#define kcg_comp_P021_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P021_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__9447

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__9447

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__9450

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__9450

#define kcg_comp_P021_section_int_T_TM kcg_comp_struct__9653

#define kcg_copy_P021_section_int_T_TM kcg_copy_struct__9653

#define kcg_comp_P021_trackide_sectionlist_T_TM kcg_comp_array__9668

#define kcg_copy_P021_trackide_sectionlist_T_TM kcg_copy_array__9668

#define kcg_comp_P021_trackside_int_T_TM kcg_comp_struct__9671

#define kcg_copy_P021_trackside_int_T_TM kcg_copy_struct__9671

#define kcg_comp_CompressedRadioMessage_TM kcg_comp_struct__9486

#define kcg_copy_CompressedRadioMessage_TM kcg_copy_struct__9486

#define kcg_comp__3_Radio_TrackTrain_Header_T_TM kcg_comp_struct__9468

#define kcg_copy__3_Radio_TrackTrain_Header_T_TM kcg_copy_struct__9468

#define kcg_comp_CompressedBaliseMessage_TM kcg_comp_struct__9491

#define kcg_copy_CompressedBaliseMessage_TM kcg_copy_struct__9491

#define kcg_comp_BaliseGroupData_TM kcg_comp_struct__9836

#define kcg_copy_BaliseGroupData_TM kcg_copy_struct__9836

#define kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P005_OBU_sectionlist_int_T_TM kcg_comp_array__9703

#define kcg_copy_P005_OBU_sectionlist_int_T_TM kcg_copy_array__9703

#define kcg_comp_P003V1_trackside_int_T_TM_baseline2 kcg_comp_struct__9755

#define kcg_copy_P003V1_trackside_int_T_TM_baseline2 kcg_copy_struct__9755

#define kcg_comp_P005_section_array_T_TM kcg_comp_array_int_7

#define kcg_copy_P005_section_array_T_TM kcg_copy_array_int_7

#define kcg_comp_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_comp_array__9612

#define kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_copy_array__9612

#define kcg_comp_P005_OBU_sectionlist_array_T_TM kcg_comp_array_int_7_33

#define kcg_copy_P005_OBU_sectionlist_array_T_TM kcg_copy_array_int_7_33

#define kcg_comp_P027V1_section_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2

#define kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2

#define kcg_comp_P005_sections_array_flat_T_TM kcg_comp_array_int_231

#define kcg_copy_P005_sections_array_flat_T_TM kcg_copy_array_int_231

#define kcg_comp__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2_32

#define kcg_copy__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2_32

#define kcg_comp_P005_section_int_T_TM kcg_comp_struct__9687

#define kcg_copy_P005_section_int_T_TM kcg_copy_struct__9687

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp_P005_trackide_sectionlist_T_TM kcg_comp_array__9706

#define kcg_copy_P005_trackide_sectionlist_T_TM kcg_copy_array__9706

#define kcg_comp__2_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array__9629

#define kcg_copy__2_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array__9629

#define kcg_comp_P005_trackside_int_T_TM kcg_comp_struct__9709

#define kcg_copy_P005_trackside_int_T_TM kcg_copy_struct__9709

#define kcg_comp_P027V1_section_int_T_TM_baseline2 kcg_comp_struct__9615

#define kcg_copy_P027V1_section_int_T_TM_baseline2 kcg_copy_struct__9615

#define kcg_comp_BaliseTelegramHeader_int_T_TM kcg_comp_struct__9455

#define kcg_copy_BaliseTelegramHeader_int_T_TM kcg_copy_struct__9455

#define kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_comp_array__9632

#define kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_copy_array__9632

#define kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2 kcg_comp_struct__9607

#define kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2 kcg_copy_struct__9607

#define kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_comp_array__9612

#define kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_copy_array__9612

#define kcg_comp_P027V1_trackside_int_T_TM_baseline2 kcg_comp_struct__9635

#define kcg_copy_P027V1_trackside_int_T_TM_baseline2 kcg_copy_struct__9635

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */


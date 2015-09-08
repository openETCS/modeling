/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T16:21:02
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

/* Q_FRONT */
typedef enum {
  Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element = 0,
  Q_FRONT_No_train_length_delay_on_validity_end_point_of_profile_element = 1
} Q_FRONT;
/* Common_Types_Pkg::MsgSource_T */
typedef enum {
  msrc_undefined_Common_Types_Pkg,
  msrc_Euroradio_Common_Types_Pkg,
  msrc_Eurobalise_Common_Types_Pkg,
  msrc_RadioInfillUnit_Common_Types_Pkg,
  msrc_OBU_Common_Types_Pkg
} MsgSource_T_Common_Types_Pkg;
/* Q_DLRBG */
typedef enum {
  Q_DLRBG_Reverse = 0,
  Q_DLRBG_Nominal = 1,
  Q_DLRBG_Unknown = 2
} Q_DLRBG;
/* Q_UPDOWN */
typedef enum {
  Q_UPDOWN_Down_link_telegram = 0,
  Q_UPDOWN_Up_link_telegram = 1
} Q_UPDOWN;
/* Q_MEDIA */
typedef enum { Q_MEDIA_Balise = 0, Q_MEDIA_Loop = 1 } Q_MEDIA;
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
/* Q_LINK */
typedef enum { Q_LINK_Unlinked = 0, Q_LINK_Linked = 1 } Q_LINK;
/* Q_DIRLRBG */
typedef enum {
  Q_DIRLRBG_Reverse = 0,
  Q_DIRLRBG_Nominal = 1,
  Q_DIRLRBG_Unknown = 2
} Q_DIRLRBG;
/* Q_DIRTRAIN */
typedef enum {
  Q_DIRTRAIN_Reverse = 0,
  Q_DIRTRAIN_Nominal = 1,
  Q_DIRTRAIN_Unknown = 2
} Q_DIRTRAIN;
/* Obu_BasicTypes_Pkg::odoMotionState_T */
typedef enum {
  noMotion_Obu_BasicTypes_Pkg,
  Motion_Obu_BasicTypes_Pkg
} odoMotionState_T_Obu_BasicTypes_Pkg;
/* Obu_BasicTypes_Pkg::odoMotionDirection_T */
typedef enum {
  unknownDirection_Obu_BasicTypes_Pkg,
  cabAFirst_Obu_BasicTypes_Pkg,
  cabBFirst_Obu_BasicTypes_Pkg
} odoMotionDirection_T_Obu_BasicTypes_Pkg;
/* Q_NEWCOUNTRY */
typedef enum {
  Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows = 0,
  Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows = 1
} Q_NEWCOUNTRY;
/* Q_LINKORIENTATION */
typedef enum {
  Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction = 0,
  Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction = 1
} Q_LINKORIENTATION;
/* Q_LINKREACTION */
typedef enum {
  Q_LINKREACTION_Train_trip = 0,
  Q_LINKREACTION_Apply_service_brake = 1,
  Q_LINKREACTION_No_Reaction = 2
} Q_LINKREACTION;
/* Q_ORIENTATION */
typedef enum {
  Q_ORIENTATION_The_balise_group_has_been_passed_by_the_train_in_reverse_direction = 0,
  Q_ORIENTATION_The_balise_group_has_been_passed_by_the_train_in_nominal_direction = 1
} Q_ORIENTATION;
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
/* M_VERSION */
typedef enum {
  M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS = 0,
  M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0 = 16,
  M_VERSION_Version_1_1_introduced_in_SRS_3_3_0 = 17,
  M_VERSION_Version_2_0_introduced_in_SRS_3_3_0 = 32
} M_VERSION;
/* Q_DIR */
typedef enum {
  Q_DIR_Reverse = 0,
  Q_DIR_Nominal = 1,
  Q_DIR_Both_directions = 2
} Q_DIR;
/* T_TRAIN */
typedef kcg_real T_TRAIN;

/* NID_PACKET */
typedef kcg_int NID_PACKET;

/* D_STATIC */
typedef kcg_int D_STATIC;

/* V_STATIC */
typedef kcg_int V_STATIC;

/* N_ITER */
typedef kcg_int N_ITER;

/* NC_DIFF */
typedef kcg_int NC_DIFF;

/* V_DIFF */
typedef kcg_int V_DIFF;

/* M_MCOUNT */
typedef kcg_int M_MCOUNT;

/* NID_C */
typedef kcg_int NID_C;

/* NID_BG */
typedef kcg_int NID_BG;

/* Q_NVLOCACC */
typedef kcg_int Q_NVLOCACC;

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

/* NID_RBC */
typedef kcg_int NID_RBC;

/* D_LINK */
typedef kcg_int D_LINK;

/* Q_LOCACC */
typedef kcg_int Q_LOCACC;

/* L_MESSAGE */
typedef kcg_int L_MESSAGE;

/* D_TAFDISPLAY */
typedef kcg_int D_TAFDISPLAY;

/* L_TAFDISPLAY */
typedef kcg_int L_TAFDISPLAY;

/* TM::nid_packet_meta */
typedef kcg_int nid_packet_meta_TM;

/* Obu_BasicTypes_Pkg::T_internal_Type */
typedef kcg_int T_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::L_internal_Type */
typedef kcg_int L_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::Location_T */
typedef L_internal_Type_Obu_BasicTypes_Pkg Location_T_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::V_internal_Type */
typedef kcg_int V_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::A_internal_Type */
typedef kcg_int A_internal_Type_Obu_BasicTypes_Pkg;

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
} struct__10877;

/* TM_radio_messages::M_TrackTrain_Radio_T */
typedef struct__10877 M_TrackTrain_Radio_T_TM_radio_messages;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__10895;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__10895 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__10903[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__10903 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__10906;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__10906 CompressedPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_SH_request;
} struct__10911;

/* TM_radio_messages::M_027_T */
typedef struct__10911 M_027_T_TM_radio_messages;

/* TM_radio_messages::M_028_T */
typedef struct__10911 M_028_T_TM_radio_messages;

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
} struct__10921;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct__10921 Radio_TrackTrain_Header_T_Radio_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  M_VERSION m_version;
} struct__10939;

/* TM_radio_messages::M_032_T */
typedef struct__10939 M_032_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_REF d_ref;
} struct__10949;

/* TM_radio_messages::M_033_T */
typedef struct__10949 M_033_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_REF d_ref;
  Q_DIR q_dir;
  D_TAFDISPLAY d_tafdisplay;
  L_TAFDISPLAY l_tafdisplay;
} struct__10960;

/* TM_radio_messages::M_034_T */
typedef struct__10960 M_034_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
} struct__10974;

/* TM_radio_messages::M_024_T */
typedef struct__10974 M_024_T_TM_radio_messages;

/* TM_radio_messages::M_009_T */
typedef struct__10974 M_009_T_TM_radio_messages;

/* TM_radio_messages::M_006_T */
typedef struct__10974 M_006_T_TM_radio_messages;

/* TM_radio_messages::M_003_T */
typedef struct__10974 M_003_T_TM_radio_messages;

/* TM_radio_messages::M_043_T */
typedef struct__10974 M_043_T_TM_radio_messages;

/* TM_radio_messages::M_041_T */
typedef struct__10974 M_041_T_TM_radio_messages;

/* TM_radio_messages::M_040_T */
typedef struct__10974 M_040_T_TM_radio_messages;

/* TM_radio_messages::M_039_T */
typedef struct__10974 M_039_T_TM_radio_messages;

/* TM_radio_messages::M_038_T */
typedef struct__10974 M_038_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_ORIENTATION q_orientation;
} struct__10983;

/* TM_radio_messages::M_045_T */
typedef struct__10983 M_045_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_SR d_sr;
} struct__10993;

/* TM_radio_messages::M_002_T */
typedef struct__10993 M_002_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_received;
} struct__11004;

/* TM_radio_messages::M_008_T */
typedef struct__11004 M_008_T_TM_radio_messages;

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
} struct__11014;

/* TM_radio_messages::M_015_T */
typedef struct__11014 M_015_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  NID_EM nid_em;
} struct__11028;

/* TM_radio_messages::M_018_T */
typedef struct__11028 M_018_T_TM_radio_messages;

/* TM_radio_messages::M_016_T */
typedef struct__11028 M_016_T_TM_radio_messages;

typedef struct {
  M_TrackTrain_Radio_T_TM_radio_messages message;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int trigger;
  kcg_bool message_sent;
} struct__11038;

/* InfraLib::R_data_internal_T */
typedef struct__11038 R_data_internal_T_InfraLib;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
} struct__11045;

/* TM_radio_messages::M_003_int_T */
typedef struct__11045 M_003_int_T_TM_radio_messages;

typedef kcg_int array_int_128[128];

/* TM::P015_sections_array_flat_T */
typedef array_int_128 P015_sections_array_flat_T_TM;

typedef struct {
  kcg_int L_SECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
} struct__11057;

/* TM::P015_section_int_T */
typedef struct__11057 P015_section_int_T_TM;

typedef P015_section_int_T_TM array__11064[32];

/* TM::P015_trackide_sectionlist_T */
typedef array__11064 P015_trackide_sectionlist_T_TM;

/* TM::P015_OBU_sectionlist_int_T */
typedef array__11064 P015_OBU_sectionlist_int_T_TM;

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
  kcg_int T_SECTIONTIMER;
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
} struct__11067;

/* TM::P015_trackside_int_T */
typedef struct__11067 P015_trackside_int_T_TM;

typedef kcg_int array_int_4[4];

/* TM::P015_section_array_T */
typedef array_int_4 P015_section_array_T_TM;

typedef P015_section_array_T_TM array_int_4_32[32];

/* TM::P015_OBU_sectionlist_array_T */
typedef array_int_4_32 P015_OBU_sectionlist_array_T_TM;

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
} struct__11100;

/* TM::P065_trackside_int_T */
typedef struct__11100 P065_trackside_int_T_TM;

typedef kcg_int array_int_231[231];

/* TM::P005_sections_array_flat_T */
typedef array_int_231 P005_sections_array_flat_T_TM;

typedef struct {
  kcg_int D_LINK;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_LINKORIENTATION;
  kcg_int Q_LINKREACTION;
  kcg_int Q_LOCACC;
} struct__11116;

/* TM::P005_section_int_T */
typedef struct__11116 P005_section_int_T_TM;

typedef P005_section_int_T_TM array__11126[32];

/* TM::P005_trackide_sectionlist_T */
typedef array__11126 P005_trackide_sectionlist_T_TM;

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
} struct__11129;

/* TM::P005_trackside_int_T */
typedef struct__11129 P005_trackside_int_T_TM;

typedef P005_section_int_T_TM array__11146[33];

/* TM::P005_OBU_sectionlist_int_T */
typedef array__11146 P005_OBU_sectionlist_int_T_TM;

typedef kcg_int array_int_7[7];

/* TM::P005_section_array_T */
typedef array_int_7 P005_section_array_T_TM;

typedef P005_section_array_T_TM array_int_7_33[33];

/* TM::P005_OBU_sectionlist_array_T */
typedef array_int_7_33 P005_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_2[2];

/* TM_baseline2::P027V1_section_array_qdiff_T */
typedef array_int_2 P027V1_section_array_qdiff_T_TM_baseline2;

typedef struct { kcg_int NC_DIFF; kcg_int V_DIFF; } struct__11158;

/* TM_baseline2::P027V1_section_int_qdiff_T */
typedef struct__11158 P027V1_section_int_qdiff_T_TM_baseline2;

typedef P027V1_section_array_qdiff_T_TM_baseline2 array_int_2_32[32];

/* TM_baseline2::P027V1_OBU_sectionlist_array_qdiff_T */
typedef array_int_2_32 P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2;

typedef kcg_int array_int_64[64];

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef P027V1_section_int_qdiff_T_TM_baseline2 array__11169[32];

/* TM_baseline2::P027V1_trackside_qdifflist_T */
typedef array__11169 P027V1_trackside_qdifflist_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_int_qdiff_T */
typedef array__11169 P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2;

typedef struct {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
} struct__11172;

/* TM_baseline2::P027V1_section_int_T */
typedef struct__11172 P027V1_section_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__11180[33];

/* TM_baseline2::P027V1_OBU_sectionlist_int_T */
typedef array__11180 P027V1_OBU_sectionlist_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__11183[32];

/* TM_baseline2::P027V1_trackside_sectionlist_T */
typedef array__11183 P027V1_trackside_sectionlist_T_TM_baseline2;

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
} struct__11186;

/* TM_baseline2::P027V1_trackside_int_T */
typedef struct__11186 P027V1_trackside_int_T_TM_baseline2;

typedef kcg_int array_int_99[99];

/* TM::P021_sections_array_flat_T */
typedef array_int_99 P021_sections_array_flat_T_TM;

/* TM::P041_sections_array_flat_T */
typedef array_int_99 P041_sections_array_flat_T_TM;

typedef struct {
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
} struct__11204;

/* TM::P021_section_int_T */
typedef struct__11204 P021_section_int_T_TM;

typedef P021_section_int_T_TM array__11210[32];

/* TM::P021_trackide_sectionlist_T */
typedef array__11210 P021_trackide_sectionlist_T_TM;

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
} struct__11213;

/* TM::P021_trackside_int_T */
typedef struct__11213 P021_trackside_int_T_TM;

typedef P021_section_int_T_TM array__11226[33];

/* TM::P021_OBU_sectionlist_int_T */
typedef array__11226 P021_OBU_sectionlist_int_T_TM;

typedef kcg_int array_int_3[3];

/* TM::Array03 */
typedef array_int_3 Array03_TM;

/* TM::P021_section_array_T */
typedef array_int_3 P021_section_array_T_TM;

/* TM::P041_section_array_T */
typedef array_int_3 P041_section_array_T_TM;

typedef array_int_3 array_int_3_33[33];

/* TM::P021_OBU_sectionlist_array_T */
typedef array_int_3_33 P021_OBU_sectionlist_array_T_TM;

/* TM::P041_OBU_sectionlist_array_T */
typedef array_int_3_33 P041_OBU_sectionlist_array_T_TM;

typedef struct {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
} struct__11235;

/* TM::P041_section_int_T */
typedef struct__11235 P041_section_int_T_TM;

typedef P041_section_int_T_TM array__11241[32];

/* TM::P041_trackide_sectionlist_T */
typedef array__11241 P041_trackide_sectionlist_T_TM;

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
} struct__11244;

/* TM::P041_trackside_int_T */
typedef struct__11244 P041_trackside_int_T_TM;

typedef P041_section_int_T_TM array__11258[33];

/* TM::P041_OBU_sectionlist_int_T */
typedef array__11258 P041_OBU_sectionlist_int_T_TM;

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
} struct__11264;

/* TM_baseline2::P003V1_trackside_int_T */
typedef struct__11264 P003V1_trackside_int_T_TM_baseline2;

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
} struct__11293;

/* TM::Radio_TrackTrain_Header_T */
typedef struct__11293 Radio_TrackTrain_Header_T_TM;

typedef struct {
  Radio_TrackTrain_Header_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__11311;

/* TM::CompressedRadioMessage */
typedef struct__11311 CompressedRadioMessage_TM;

typedef struct {
  L_internal_Type_Obu_BasicTypes_Pkg nominal;
  L_internal_Type_Obu_BasicTypes_Pkg d_min;
  L_internal_Type_Obu_BasicTypes_Pkg d_max;
} struct__11316;

/* Obu_BasicTypes_Pkg::LocWithInAcc_T */
typedef struct__11316 LocWithInAcc_T_Obu_BasicTypes_Pkg;

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
} struct__11322;

/* BG_Types_Pkg::LinkedBG_T */
typedef struct__11322 LinkedBG_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_BG nid_bg_fromLinkingBG;
  NID_C nid_c_fromLinkingBG;
  LocWithInAcc_T_Obu_BasicTypes_Pkg expectedLocation;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_link;
  LinkedBG_T_BG_Types_Pkg linkingInfo;
} struct__11336;

/* TrainPosition_Types_Pck::infoFromLinking_T */
typedef struct__11336 infoFromLinking_T_TrainPosition_Types_Pck;

typedef LinkedBG_T_BG_Types_Pkg array__11345[4];

/* BG_Types_Pkg::LinkedBGs_T */
typedef array__11345 LinkedBGs_T_BG_Types_Pkg;

typedef struct {
  V_internal_Type_Obu_BasicTypes_Pkg v_safeNominal;
  V_internal_Type_Obu_BasicTypes_Pkg v_rawNominal;
  V_internal_Type_Obu_BasicTypes_Pkg v_lower;
  V_internal_Type_Obu_BasicTypes_Pkg v_upper;
} struct__11348;

/* Obu_BasicTypes_Pkg::OdometrySpeeds_T */
typedef struct__11348 OdometrySpeeds_T_Obu_BasicTypes_Pkg;

typedef struct {
  L_internal_Type_Obu_BasicTypes_Pkg o_nominal;
  L_internal_Type_Obu_BasicTypes_Pkg o_min;
  L_internal_Type_Obu_BasicTypes_Pkg o_max;
} struct__11355;

/* Obu_BasicTypes_Pkg::OdometryLocations_T */
typedef struct__11355 OdometryLocations_T_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg timestamp;
  OdometryLocations_T_Obu_BasicTypes_Pkg odo;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg speed;
  A_internal_Type_Obu_BasicTypes_Pkg acceleration;
  odoMotionState_T_Obu_BasicTypes_Pkg motionState;
  odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection;
} struct__11361;

/* Obu_BasicTypes_Pkg::odometry_T */
typedef struct__11361 odometry_T_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_bool valid;
  Q_UPDOWN q_updown;
  M_VERSION m_version;
  Q_MEDIA q_media;
  N_TOTAL n_total;
  M_MCOUNT m_mcount;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINK q_link;
  odometry_T_Obu_BasicTypes_Pkg bgPosition;
  LocWithInAcc_T_Obu_BasicTypes_Pkg BG_centerDetectionInaccuraccuracies;
  Q_NVLOCACC q_nvlocacc;
  kcg_bool noCoordinateSystemHasBeenAssigned;
  Q_DIRLRBG trainOrientationToBG;
  Q_DIRTRAIN trainRunningDirectionToBG;
} struct__11371;

/* BG_Types_Pkg::BG_Header_T */
typedef struct__11371 BG_Header_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  BG_Header_T_BG_Types_Pkg BG_Header;
  LinkedBGs_T_BG_Types_Pkg linkedBGs;
} struct__11389;

/* BG_Types_Pkg::passedBG_T */
typedef struct__11389 passedBG_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINK q_link;
  LocWithInAcc_T_Obu_BasicTypes_Pkg location;
  kcg_int seqNoOnTrack;
  infoFromLinking_T_TrainPosition_Types_Pck infoFromLinking;
  passedBG_T_BG_Types_Pkg infoFromPassing;
} struct__11395;

/* TrainPosition_Types_Pck::positionedBG_T */
typedef struct__11395 positionedBG_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg timestamp;
  kcg_bool trainPositionIsUnknown;
  kcg_bool noCoordinateSystemHasBeenAssigned;
  LocWithInAcc_T_Obu_BasicTypes_Pkg trainPosition;
  Location_T_Obu_BasicTypes_Pkg estimatedFrontEndPosition;
  Location_T_Obu_BasicTypes_Pkg minSafeFrontEndPosition;
  Location_T_Obu_BasicTypes_Pkg maxSafeFrontEndPostion;
  positionedBG_T_TrainPosition_Types_Pck LRBG;
  positionedBG_T_TrainPosition_Types_Pck prvLRBG;
  Q_DLRBG nominalOrReverseToLRBG;
  Q_DIRLRBG trainOrientationToLRBG;
  Q_DIRTRAIN trainRunningDirectionToLRBG;
  kcg_bool linkingIsUsedOnboard;
} struct__11406;

/* TrainPosition_Types_Pck::trainPosition_T */
typedef struct__11406 trainPosition_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg d_static_abs;
  L_internal_Type_Obu_BasicTypes_Pkg d_static_LRBG;
  kcg_bool q_train_length_corr;
  V_internal_Type_Obu_BasicTypes_Pkg v_static;
} struct__11423;

/* TrackAtlasTypes::StaticSpeedSection_t */
typedef struct__11423 StaticSpeedSection_t_TrackAtlasTypes;

typedef StaticSpeedSection_t_TrackAtlasTypes array__11431[50];

/* TrackAtlasTypes::StaticSpeedProfile_t */
typedef array__11431 StaticSpeedProfile_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  NID_C nid_c;
  NID_RBC rbc_id;
  kcg_int device_id;
} struct__11434;

/* Common_Types_Pkg::RBC_Id_T */
typedef struct__11434 RBC_Id_T_Common_Types_Pkg;

typedef struct {
  kcg_bool t_train_reference;
  kcg_bool nid_em;
  kcg_bool q_scale;
  kcg_bool d_sr;
  kcg_bool t_sh_rqst;
  kcg_bool d_ref;
  kcg_bool q_dir;
  kcg_bool d_emergencystop;
  kcg_bool m_version;
} struct__11441;

/* Common_Types_Pkg::RadioMetadata_T */
typedef struct__11441 RadioMetadata_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg source;
  RadioMetadata_T_Common_Types_Pkg radioMetadata;
  BG_Header_T_BG_Types_Pkg BG_Common_Header;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  CompressedPackets_T_Common_Types_Pkg packets;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} struct__11453;

/* Common_Types_Pkg::ReceivedMessage_T */
typedef struct__11453 ReceivedMessage_T_Common_Types_Pkg;

typedef kcg_int array_int_5[5];

/* TM::Array05 */
typedef array_int_5 Array05_TM;

typedef struct { kcg_bool valid; Q_DIR q_dir; Q_SCALE q_scale; } struct__11466;

/* TM_baseline2::P027V1_OBU_body_enum_T */
typedef struct__11466 P027V1_OBU_body_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  NC_DIFF nc_diff;
  V_DIFF v_diff;
} struct__11472;

/* TM_baseline2::P027V1_section_enum_qdiff_T */
typedef struct__11472 P027V1_section_enum_qdiff_T_TM_baseline2;

typedef P027V1_section_enum_qdiff_T_TM_baseline2 array__11478[32];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_qdiff_T */
typedef array__11478 P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  N_ITER n_iter;
  P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 SECTIONS_q_diff;
} struct__11481;

/* TM_baseline2::P027V1_section_enum_T */
typedef struct__11481 P027V1_section_enum_T_TM_baseline2;

typedef P027V1_section_enum_T_TM_baseline2 array__11490[33];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_T */
typedef array__11490 P027V1_OBU_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 sections;
} struct__11493;

/* TM_baseline2::P027V1_OBU_T */
typedef struct__11493 P027V1_OBU_T_TM_baseline2;

typedef kcg_int array_int_30[30];

typedef kcg_bool array_bool_30[30];

typedef CompressedPacketData_T_Common_Types_Pkg array_int_500_500[500];

typedef P027V1_sections_array_flat_qdiff_T_TM_baseline2 array_int_64_32[32];

typedef kcg_int array_int_33[33];

typedef CompressedPackets_T_Common_Types_Pkg array__11515[33];

typedef kcg_bool array_bool_50[50];

typedef kcg_int array_int_50[50];

typedef P027V1_OBU_sectionlist_enum_T_TM_baseline2 array__11524[50];

typedef Q_SCALE array__11527[50];

typedef StaticSpeedProfile_t_TrackAtlasTypes array__11530[50];

typedef array_int_3_33 array_int_3_33_231[231];

typedef kcg_int array_int_396[396];

typedef kcg_int array_int_1[1];

typedef kcg_int array_int_104[104];

typedef P021_section_int_T_TM array__11545[1];

typedef kcg_int array_int_494[494];

typedef kcg_int array_int_6[6];

typedef P027V1_section_int_T_TM_baseline2 array__11554[1];

typedef array_int_2_32 array_int_2_32_32[32];

typedef kcg_int array_int_432[432];

typedef kcg_int array_int_68[68];

typedef kcg_int array_int_444[444];

typedef kcg_int array_int_24[24];

typedef kcg_int array_int_56[56];

typedef kcg_int array_int_18[18];

typedef array_int_7_33 array_int_7_33_231[231];

typedef kcg_int array_int_264[264];

typedef kcg_int array_int_236[236];

typedef P005_section_int_T_TM array__11587[1];

typedef array_int_3_33 array_int_3_33_99[99];

typedef kcg_int array_int_395[395];

typedef kcg_int array_int_105[105];

typedef P041_section_int_T_TM array__11599[1];

typedef kcg_int array_int_491[491];

typedef kcg_int array_int_9[9];

typedef array_int_4_32 array_int_4_32_128[128];

typedef kcg_int array_int_350[350];

typedef kcg_int array_int_21[21];

typedef kcg_int array_int_150[150];

typedef kcg_int array_int_15[15];

typedef kcg_int array_int_22[22];

#ifndef kcg_copy_struct__10877
#define kcg_copy_struct__10877(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10877)))
#endif /* kcg_copy_struct__10877 */

#ifndef kcg_copy_struct__10895
#define kcg_copy_struct__10895(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10895)))
#endif /* kcg_copy_struct__10895 */

#ifndef kcg_copy_struct__10906
#define kcg_copy_struct__10906(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10906)))
#endif /* kcg_copy_struct__10906 */

#ifndef kcg_copy_struct__10911
#define kcg_copy_struct__10911(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10911)))
#endif /* kcg_copy_struct__10911 */

#ifndef kcg_copy_struct__10921
#define kcg_copy_struct__10921(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10921)))
#endif /* kcg_copy_struct__10921 */

#ifndef kcg_copy_struct__10939
#define kcg_copy_struct__10939(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10939)))
#endif /* kcg_copy_struct__10939 */

#ifndef kcg_copy_struct__10949
#define kcg_copy_struct__10949(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10949)))
#endif /* kcg_copy_struct__10949 */

#ifndef kcg_copy_struct__10960
#define kcg_copy_struct__10960(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10960)))
#endif /* kcg_copy_struct__10960 */

#ifndef kcg_copy_struct__10974
#define kcg_copy_struct__10974(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10974)))
#endif /* kcg_copy_struct__10974 */

#ifndef kcg_copy_struct__10983
#define kcg_copy_struct__10983(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10983)))
#endif /* kcg_copy_struct__10983 */

#ifndef kcg_copy_struct__10993
#define kcg_copy_struct__10993(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10993)))
#endif /* kcg_copy_struct__10993 */

#ifndef kcg_copy_struct__11004
#define kcg_copy_struct__11004(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11004)))
#endif /* kcg_copy_struct__11004 */

#ifndef kcg_copy_struct__11014
#define kcg_copy_struct__11014(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11014)))
#endif /* kcg_copy_struct__11014 */

#ifndef kcg_copy_struct__11028
#define kcg_copy_struct__11028(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11028)))
#endif /* kcg_copy_struct__11028 */

#ifndef kcg_copy_struct__11038
#define kcg_copy_struct__11038(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11038)))
#endif /* kcg_copy_struct__11038 */

#ifndef kcg_copy_struct__11045
#define kcg_copy_struct__11045(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11045)))
#endif /* kcg_copy_struct__11045 */

#ifndef kcg_copy_struct__11057
#define kcg_copy_struct__11057(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11057)))
#endif /* kcg_copy_struct__11057 */

#ifndef kcg_copy_struct__11067
#define kcg_copy_struct__11067(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11067)))
#endif /* kcg_copy_struct__11067 */

#ifndef kcg_copy_struct__11100
#define kcg_copy_struct__11100(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11100)))
#endif /* kcg_copy_struct__11100 */

#ifndef kcg_copy_struct__11116
#define kcg_copy_struct__11116(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11116)))
#endif /* kcg_copy_struct__11116 */

#ifndef kcg_copy_struct__11129
#define kcg_copy_struct__11129(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11129)))
#endif /* kcg_copy_struct__11129 */

#ifndef kcg_copy_struct__11158
#define kcg_copy_struct__11158(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11158)))
#endif /* kcg_copy_struct__11158 */

#ifndef kcg_copy_struct__11172
#define kcg_copy_struct__11172(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11172)))
#endif /* kcg_copy_struct__11172 */

#ifndef kcg_copy_struct__11186
#define kcg_copy_struct__11186(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11186)))
#endif /* kcg_copy_struct__11186 */

#ifndef kcg_copy_struct__11204
#define kcg_copy_struct__11204(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11204)))
#endif /* kcg_copy_struct__11204 */

#ifndef kcg_copy_struct__11213
#define kcg_copy_struct__11213(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11213)))
#endif /* kcg_copy_struct__11213 */

#ifndef kcg_copy_struct__11235
#define kcg_copy_struct__11235(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11235)))
#endif /* kcg_copy_struct__11235 */

#ifndef kcg_copy_struct__11244
#define kcg_copy_struct__11244(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11244)))
#endif /* kcg_copy_struct__11244 */

#ifndef kcg_copy_struct__11264
#define kcg_copy_struct__11264(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11264)))
#endif /* kcg_copy_struct__11264 */

#ifndef kcg_copy_struct__11293
#define kcg_copy_struct__11293(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11293)))
#endif /* kcg_copy_struct__11293 */

#ifndef kcg_copy_struct__11311
#define kcg_copy_struct__11311(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11311)))
#endif /* kcg_copy_struct__11311 */

#ifndef kcg_copy_struct__11316
#define kcg_copy_struct__11316(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11316)))
#endif /* kcg_copy_struct__11316 */

#ifndef kcg_copy_struct__11322
#define kcg_copy_struct__11322(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11322)))
#endif /* kcg_copy_struct__11322 */

#ifndef kcg_copy_struct__11336
#define kcg_copy_struct__11336(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11336)))
#endif /* kcg_copy_struct__11336 */

#ifndef kcg_copy_struct__11348
#define kcg_copy_struct__11348(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11348)))
#endif /* kcg_copy_struct__11348 */

#ifndef kcg_copy_struct__11355
#define kcg_copy_struct__11355(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11355)))
#endif /* kcg_copy_struct__11355 */

#ifndef kcg_copy_struct__11361
#define kcg_copy_struct__11361(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11361)))
#endif /* kcg_copy_struct__11361 */

#ifndef kcg_copy_struct__11371
#define kcg_copy_struct__11371(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11371)))
#endif /* kcg_copy_struct__11371 */

#ifndef kcg_copy_struct__11389
#define kcg_copy_struct__11389(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11389)))
#endif /* kcg_copy_struct__11389 */

#ifndef kcg_copy_struct__11395
#define kcg_copy_struct__11395(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11395)))
#endif /* kcg_copy_struct__11395 */

#ifndef kcg_copy_struct__11406
#define kcg_copy_struct__11406(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11406)))
#endif /* kcg_copy_struct__11406 */

#ifndef kcg_copy_struct__11423
#define kcg_copy_struct__11423(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11423)))
#endif /* kcg_copy_struct__11423 */

#ifndef kcg_copy_struct__11434
#define kcg_copy_struct__11434(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11434)))
#endif /* kcg_copy_struct__11434 */

#ifndef kcg_copy_struct__11441
#define kcg_copy_struct__11441(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11441)))
#endif /* kcg_copy_struct__11441 */

#ifndef kcg_copy_struct__11453
#define kcg_copy_struct__11453(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11453)))
#endif /* kcg_copy_struct__11453 */

#ifndef kcg_copy_struct__11466
#define kcg_copy_struct__11466(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11466)))
#endif /* kcg_copy_struct__11466 */

#ifndef kcg_copy_struct__11472
#define kcg_copy_struct__11472(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11472)))
#endif /* kcg_copy_struct__11472 */

#ifndef kcg_copy_struct__11481
#define kcg_copy_struct__11481(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11481)))
#endif /* kcg_copy_struct__11481 */

#ifndef kcg_copy_struct__11493
#define kcg_copy_struct__11493(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11493)))
#endif /* kcg_copy_struct__11493 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__10903
#define kcg_copy_array__10903(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10903)))
#endif /* kcg_copy_array__10903 */

#ifndef kcg_copy_array_int_128
#define kcg_copy_array_int_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128)))
#endif /* kcg_copy_array_int_128 */

#ifndef kcg_copy_array__11064
#define kcg_copy_array__11064(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11064)))
#endif /* kcg_copy_array__11064 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_int_4_32
#define kcg_copy_array_int_4_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4_32)))
#endif /* kcg_copy_array_int_4_32 */

#ifndef kcg_copy_array_int_231
#define kcg_copy_array_int_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231)))
#endif /* kcg_copy_array_int_231 */

#ifndef kcg_copy_array__11126
#define kcg_copy_array__11126(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11126)))
#endif /* kcg_copy_array__11126 */

#ifndef kcg_copy_array__11146
#define kcg_copy_array__11146(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11146)))
#endif /* kcg_copy_array__11146 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array_int_7_33
#define kcg_copy_array_int_7_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33)))
#endif /* kcg_copy_array_int_7_33 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array_int_2_32
#define kcg_copy_array_int_2_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32)))
#endif /* kcg_copy_array_int_2_32 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array__11169
#define kcg_copy_array__11169(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11169)))
#endif /* kcg_copy_array__11169 */

#ifndef kcg_copy_array__11180
#define kcg_copy_array__11180(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11180)))
#endif /* kcg_copy_array__11180 */

#ifndef kcg_copy_array__11183
#define kcg_copy_array__11183(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11183)))
#endif /* kcg_copy_array__11183 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__11210
#define kcg_copy_array__11210(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11210)))
#endif /* kcg_copy_array__11210 */

#ifndef kcg_copy_array__11226
#define kcg_copy_array__11226(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11226)))
#endif /* kcg_copy_array__11226 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_int_3_33
#define kcg_copy_array_int_3_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33)))
#endif /* kcg_copy_array_int_3_33 */

#ifndef kcg_copy_array__11241
#define kcg_copy_array__11241(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11241)))
#endif /* kcg_copy_array__11241 */

#ifndef kcg_copy_array__11258
#define kcg_copy_array__11258(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11258)))
#endif /* kcg_copy_array__11258 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array__11345
#define kcg_copy_array__11345(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11345)))
#endif /* kcg_copy_array__11345 */

#ifndef kcg_copy_array__11431
#define kcg_copy_array__11431(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11431)))
#endif /* kcg_copy_array__11431 */

#ifndef kcg_copy_array_int_5
#define kcg_copy_array_int_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_5)))
#endif /* kcg_copy_array_int_5 */

#ifndef kcg_copy_array__11478
#define kcg_copy_array__11478(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11478)))
#endif /* kcg_copy_array__11478 */

#ifndef kcg_copy_array__11490
#define kcg_copy_array__11490(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11490)))
#endif /* kcg_copy_array__11490 */

#ifndef kcg_copy_array_int_30
#define kcg_copy_array_int_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_30)))
#endif /* kcg_copy_array_int_30 */

#ifndef kcg_copy_array_bool_30
#define kcg_copy_array_bool_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_30)))
#endif /* kcg_copy_array_bool_30 */

#ifndef kcg_copy_array_int_500_500
#define kcg_copy_array_int_500_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500_500)))
#endif /* kcg_copy_array_int_500_500 */

#ifndef kcg_copy_array_int_64_32
#define kcg_copy_array_int_64_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64_32)))
#endif /* kcg_copy_array_int_64_32 */

#ifndef kcg_copy_array_int_33
#define kcg_copy_array_int_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33)))
#endif /* kcg_copy_array_int_33 */

#ifndef kcg_copy_array__11515
#define kcg_copy_array__11515(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11515)))
#endif /* kcg_copy_array__11515 */

#ifndef kcg_copy_array_bool_50
#define kcg_copy_array_bool_50(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_50)))
#endif /* kcg_copy_array_bool_50 */

#ifndef kcg_copy_array_int_50
#define kcg_copy_array_int_50(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_50)))
#endif /* kcg_copy_array_int_50 */

#ifndef kcg_copy_array__11524
#define kcg_copy_array__11524(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11524)))
#endif /* kcg_copy_array__11524 */

#ifndef kcg_copy_array__11527
#define kcg_copy_array__11527(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11527)))
#endif /* kcg_copy_array__11527 */

#ifndef kcg_copy_array__11530
#define kcg_copy_array__11530(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11530)))
#endif /* kcg_copy_array__11530 */

#ifndef kcg_copy_array_int_3_33_231
#define kcg_copy_array_int_3_33_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33_231)))
#endif /* kcg_copy_array_int_3_33_231 */

#ifndef kcg_copy_array_int_396
#define kcg_copy_array_int_396(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_396)))
#endif /* kcg_copy_array_int_396 */

#ifndef kcg_copy_array_int_1
#define kcg_copy_array_int_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_1)))
#endif /* kcg_copy_array_int_1 */

#ifndef kcg_copy_array_int_104
#define kcg_copy_array_int_104(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_104)))
#endif /* kcg_copy_array_int_104 */

#ifndef kcg_copy_array__11545
#define kcg_copy_array__11545(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11545)))
#endif /* kcg_copy_array__11545 */

#ifndef kcg_copy_array_int_494
#define kcg_copy_array_int_494(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_494)))
#endif /* kcg_copy_array_int_494 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array__11554
#define kcg_copy_array__11554(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11554)))
#endif /* kcg_copy_array__11554 */

#ifndef kcg_copy_array_int_2_32_32
#define kcg_copy_array_int_2_32_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32_32)))
#endif /* kcg_copy_array_int_2_32_32 */

#ifndef kcg_copy_array_int_432
#define kcg_copy_array_int_432(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_432)))
#endif /* kcg_copy_array_int_432 */

#ifndef kcg_copy_array_int_68
#define kcg_copy_array_int_68(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_68)))
#endif /* kcg_copy_array_int_68 */

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

#ifndef kcg_copy_array_int_7_33_231
#define kcg_copy_array_int_7_33_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33_231)))
#endif /* kcg_copy_array_int_7_33_231 */

#ifndef kcg_copy_array_int_264
#define kcg_copy_array_int_264(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_264)))
#endif /* kcg_copy_array_int_264 */

#ifndef kcg_copy_array_int_236
#define kcg_copy_array_int_236(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_236)))
#endif /* kcg_copy_array_int_236 */

#ifndef kcg_copy_array__11587
#define kcg_copy_array__11587(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11587)))
#endif /* kcg_copy_array__11587 */

#ifndef kcg_copy_array_int_3_33_99
#define kcg_copy_array_int_3_33_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33_99)))
#endif /* kcg_copy_array_int_3_33_99 */

#ifndef kcg_copy_array_int_395
#define kcg_copy_array_int_395(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_395)))
#endif /* kcg_copy_array_int_395 */

#ifndef kcg_copy_array_int_105
#define kcg_copy_array_int_105(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_105)))
#endif /* kcg_copy_array_int_105 */

#ifndef kcg_copy_array__11599
#define kcg_copy_array__11599(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11599)))
#endif /* kcg_copy_array__11599 */

#ifndef kcg_copy_array_int_491
#define kcg_copy_array_int_491(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_491)))
#endif /* kcg_copy_array_int_491 */

#ifndef kcg_copy_array_int_9
#define kcg_copy_array_int_9(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_9)))
#endif /* kcg_copy_array_int_9 */

#ifndef kcg_copy_array_int_4_32_128
#define kcg_copy_array_int_4_32_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4_32_128)))
#endif /* kcg_copy_array_int_4_32_128 */

#ifndef kcg_copy_array_int_350
#define kcg_copy_array_int_350(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_350)))
#endif /* kcg_copy_array_int_350 */

#ifndef kcg_copy_array_int_21
#define kcg_copy_array_int_21(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_21)))
#endif /* kcg_copy_array_int_21 */

#ifndef kcg_copy_array_int_150
#define kcg_copy_array_int_150(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_150)))
#endif /* kcg_copy_array_int_150 */

#ifndef kcg_copy_array_int_15
#define kcg_copy_array_int_15(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_15)))
#endif /* kcg_copy_array_int_15 */

#ifndef kcg_copy_array_int_22
#define kcg_copy_array_int_22(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_22)))
#endif /* kcg_copy_array_int_22 */

#ifndef kcg_comp_struct__10877
extern kcg_bool kcg_comp_struct__10877(
  struct__10877 *kcg_c1,
  struct__10877 *kcg_c2);
#endif /* kcg_comp_struct__10877 */

#ifndef kcg_comp_struct__10895
extern kcg_bool kcg_comp_struct__10895(
  struct__10895 *kcg_c1,
  struct__10895 *kcg_c2);
#endif /* kcg_comp_struct__10895 */

#ifndef kcg_comp_struct__10906
extern kcg_bool kcg_comp_struct__10906(
  struct__10906 *kcg_c1,
  struct__10906 *kcg_c2);
#endif /* kcg_comp_struct__10906 */

#ifndef kcg_comp_struct__10911
extern kcg_bool kcg_comp_struct__10911(
  struct__10911 *kcg_c1,
  struct__10911 *kcg_c2);
#endif /* kcg_comp_struct__10911 */

#ifndef kcg_comp_struct__10921
extern kcg_bool kcg_comp_struct__10921(
  struct__10921 *kcg_c1,
  struct__10921 *kcg_c2);
#endif /* kcg_comp_struct__10921 */

#ifndef kcg_comp_struct__10939
extern kcg_bool kcg_comp_struct__10939(
  struct__10939 *kcg_c1,
  struct__10939 *kcg_c2);
#endif /* kcg_comp_struct__10939 */

#ifndef kcg_comp_struct__10949
extern kcg_bool kcg_comp_struct__10949(
  struct__10949 *kcg_c1,
  struct__10949 *kcg_c2);
#endif /* kcg_comp_struct__10949 */

#ifndef kcg_comp_struct__10960
extern kcg_bool kcg_comp_struct__10960(
  struct__10960 *kcg_c1,
  struct__10960 *kcg_c2);
#endif /* kcg_comp_struct__10960 */

#ifndef kcg_comp_struct__10974
extern kcg_bool kcg_comp_struct__10974(
  struct__10974 *kcg_c1,
  struct__10974 *kcg_c2);
#endif /* kcg_comp_struct__10974 */

#ifndef kcg_comp_struct__10983
extern kcg_bool kcg_comp_struct__10983(
  struct__10983 *kcg_c1,
  struct__10983 *kcg_c2);
#endif /* kcg_comp_struct__10983 */

#ifndef kcg_comp_struct__10993
extern kcg_bool kcg_comp_struct__10993(
  struct__10993 *kcg_c1,
  struct__10993 *kcg_c2);
#endif /* kcg_comp_struct__10993 */

#ifndef kcg_comp_struct__11004
extern kcg_bool kcg_comp_struct__11004(
  struct__11004 *kcg_c1,
  struct__11004 *kcg_c2);
#endif /* kcg_comp_struct__11004 */

#ifndef kcg_comp_struct__11014
extern kcg_bool kcg_comp_struct__11014(
  struct__11014 *kcg_c1,
  struct__11014 *kcg_c2);
#endif /* kcg_comp_struct__11014 */

#ifndef kcg_comp_struct__11028
extern kcg_bool kcg_comp_struct__11028(
  struct__11028 *kcg_c1,
  struct__11028 *kcg_c2);
#endif /* kcg_comp_struct__11028 */

#ifndef kcg_comp_struct__11038
extern kcg_bool kcg_comp_struct__11038(
  struct__11038 *kcg_c1,
  struct__11038 *kcg_c2);
#endif /* kcg_comp_struct__11038 */

#ifndef kcg_comp_struct__11045
extern kcg_bool kcg_comp_struct__11045(
  struct__11045 *kcg_c1,
  struct__11045 *kcg_c2);
#endif /* kcg_comp_struct__11045 */

#ifndef kcg_comp_struct__11057
extern kcg_bool kcg_comp_struct__11057(
  struct__11057 *kcg_c1,
  struct__11057 *kcg_c2);
#endif /* kcg_comp_struct__11057 */

#ifndef kcg_comp_struct__11067
extern kcg_bool kcg_comp_struct__11067(
  struct__11067 *kcg_c1,
  struct__11067 *kcg_c2);
#endif /* kcg_comp_struct__11067 */

#ifndef kcg_comp_struct__11100
extern kcg_bool kcg_comp_struct__11100(
  struct__11100 *kcg_c1,
  struct__11100 *kcg_c2);
#endif /* kcg_comp_struct__11100 */

#ifndef kcg_comp_struct__11116
extern kcg_bool kcg_comp_struct__11116(
  struct__11116 *kcg_c1,
  struct__11116 *kcg_c2);
#endif /* kcg_comp_struct__11116 */

#ifndef kcg_comp_struct__11129
extern kcg_bool kcg_comp_struct__11129(
  struct__11129 *kcg_c1,
  struct__11129 *kcg_c2);
#endif /* kcg_comp_struct__11129 */

#ifndef kcg_comp_struct__11158
extern kcg_bool kcg_comp_struct__11158(
  struct__11158 *kcg_c1,
  struct__11158 *kcg_c2);
#endif /* kcg_comp_struct__11158 */

#ifndef kcg_comp_struct__11172
extern kcg_bool kcg_comp_struct__11172(
  struct__11172 *kcg_c1,
  struct__11172 *kcg_c2);
#endif /* kcg_comp_struct__11172 */

#ifndef kcg_comp_struct__11186
extern kcg_bool kcg_comp_struct__11186(
  struct__11186 *kcg_c1,
  struct__11186 *kcg_c2);
#endif /* kcg_comp_struct__11186 */

#ifndef kcg_comp_struct__11204
extern kcg_bool kcg_comp_struct__11204(
  struct__11204 *kcg_c1,
  struct__11204 *kcg_c2);
#endif /* kcg_comp_struct__11204 */

#ifndef kcg_comp_struct__11213
extern kcg_bool kcg_comp_struct__11213(
  struct__11213 *kcg_c1,
  struct__11213 *kcg_c2);
#endif /* kcg_comp_struct__11213 */

#ifndef kcg_comp_struct__11235
extern kcg_bool kcg_comp_struct__11235(
  struct__11235 *kcg_c1,
  struct__11235 *kcg_c2);
#endif /* kcg_comp_struct__11235 */

#ifndef kcg_comp_struct__11244
extern kcg_bool kcg_comp_struct__11244(
  struct__11244 *kcg_c1,
  struct__11244 *kcg_c2);
#endif /* kcg_comp_struct__11244 */

#ifndef kcg_comp_struct__11264
extern kcg_bool kcg_comp_struct__11264(
  struct__11264 *kcg_c1,
  struct__11264 *kcg_c2);
#endif /* kcg_comp_struct__11264 */

#ifndef kcg_comp_struct__11293
extern kcg_bool kcg_comp_struct__11293(
  struct__11293 *kcg_c1,
  struct__11293 *kcg_c2);
#endif /* kcg_comp_struct__11293 */

#ifndef kcg_comp_struct__11311
extern kcg_bool kcg_comp_struct__11311(
  struct__11311 *kcg_c1,
  struct__11311 *kcg_c2);
#endif /* kcg_comp_struct__11311 */

#ifndef kcg_comp_struct__11316
extern kcg_bool kcg_comp_struct__11316(
  struct__11316 *kcg_c1,
  struct__11316 *kcg_c2);
#endif /* kcg_comp_struct__11316 */

#ifndef kcg_comp_struct__11322
extern kcg_bool kcg_comp_struct__11322(
  struct__11322 *kcg_c1,
  struct__11322 *kcg_c2);
#endif /* kcg_comp_struct__11322 */

#ifndef kcg_comp_struct__11336
extern kcg_bool kcg_comp_struct__11336(
  struct__11336 *kcg_c1,
  struct__11336 *kcg_c2);
#endif /* kcg_comp_struct__11336 */

#ifndef kcg_comp_struct__11348
extern kcg_bool kcg_comp_struct__11348(
  struct__11348 *kcg_c1,
  struct__11348 *kcg_c2);
#endif /* kcg_comp_struct__11348 */

#ifndef kcg_comp_struct__11355
extern kcg_bool kcg_comp_struct__11355(
  struct__11355 *kcg_c1,
  struct__11355 *kcg_c2);
#endif /* kcg_comp_struct__11355 */

#ifndef kcg_comp_struct__11361
extern kcg_bool kcg_comp_struct__11361(
  struct__11361 *kcg_c1,
  struct__11361 *kcg_c2);
#endif /* kcg_comp_struct__11361 */

#ifndef kcg_comp_struct__11371
extern kcg_bool kcg_comp_struct__11371(
  struct__11371 *kcg_c1,
  struct__11371 *kcg_c2);
#endif /* kcg_comp_struct__11371 */

#ifndef kcg_comp_struct__11389
extern kcg_bool kcg_comp_struct__11389(
  struct__11389 *kcg_c1,
  struct__11389 *kcg_c2);
#endif /* kcg_comp_struct__11389 */

#ifndef kcg_comp_struct__11395
extern kcg_bool kcg_comp_struct__11395(
  struct__11395 *kcg_c1,
  struct__11395 *kcg_c2);
#endif /* kcg_comp_struct__11395 */

#ifndef kcg_comp_struct__11406
extern kcg_bool kcg_comp_struct__11406(
  struct__11406 *kcg_c1,
  struct__11406 *kcg_c2);
#endif /* kcg_comp_struct__11406 */

#ifndef kcg_comp_struct__11423
extern kcg_bool kcg_comp_struct__11423(
  struct__11423 *kcg_c1,
  struct__11423 *kcg_c2);
#endif /* kcg_comp_struct__11423 */

#ifndef kcg_comp_struct__11434
extern kcg_bool kcg_comp_struct__11434(
  struct__11434 *kcg_c1,
  struct__11434 *kcg_c2);
#endif /* kcg_comp_struct__11434 */

#ifndef kcg_comp_struct__11441
extern kcg_bool kcg_comp_struct__11441(
  struct__11441 *kcg_c1,
  struct__11441 *kcg_c2);
#endif /* kcg_comp_struct__11441 */

#ifndef kcg_comp_struct__11453
extern kcg_bool kcg_comp_struct__11453(
  struct__11453 *kcg_c1,
  struct__11453 *kcg_c2);
#endif /* kcg_comp_struct__11453 */

#ifndef kcg_comp_struct__11466
extern kcg_bool kcg_comp_struct__11466(
  struct__11466 *kcg_c1,
  struct__11466 *kcg_c2);
#endif /* kcg_comp_struct__11466 */

#ifndef kcg_comp_struct__11472
extern kcg_bool kcg_comp_struct__11472(
  struct__11472 *kcg_c1,
  struct__11472 *kcg_c2);
#endif /* kcg_comp_struct__11472 */

#ifndef kcg_comp_struct__11481
extern kcg_bool kcg_comp_struct__11481(
  struct__11481 *kcg_c1,
  struct__11481 *kcg_c2);
#endif /* kcg_comp_struct__11481 */

#ifndef kcg_comp_struct__11493
extern kcg_bool kcg_comp_struct__11493(
  struct__11493 *kcg_c1,
  struct__11493 *kcg_c2);
#endif /* kcg_comp_struct__11493 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__10903
extern kcg_bool kcg_comp_array__10903(
  array__10903 *kcg_c1,
  array__10903 *kcg_c2);
#endif /* kcg_comp_array__10903 */

#ifndef kcg_comp_array_int_128
extern kcg_bool kcg_comp_array_int_128(
  array_int_128 *kcg_c1,
  array_int_128 *kcg_c2);
#endif /* kcg_comp_array_int_128 */

#ifndef kcg_comp_array__11064
extern kcg_bool kcg_comp_array__11064(
  array__11064 *kcg_c1,
  array__11064 *kcg_c2);
#endif /* kcg_comp_array__11064 */

#ifndef kcg_comp_array_int_4
extern kcg_bool kcg_comp_array_int_4(array_int_4 *kcg_c1, array_int_4 *kcg_c2);
#endif /* kcg_comp_array_int_4 */

#ifndef kcg_comp_array_int_4_32
extern kcg_bool kcg_comp_array_int_4_32(
  array_int_4_32 *kcg_c1,
  array_int_4_32 *kcg_c2);
#endif /* kcg_comp_array_int_4_32 */

#ifndef kcg_comp_array_int_231
extern kcg_bool kcg_comp_array_int_231(
  array_int_231 *kcg_c1,
  array_int_231 *kcg_c2);
#endif /* kcg_comp_array_int_231 */

#ifndef kcg_comp_array__11126
extern kcg_bool kcg_comp_array__11126(
  array__11126 *kcg_c1,
  array__11126 *kcg_c2);
#endif /* kcg_comp_array__11126 */

#ifndef kcg_comp_array__11146
extern kcg_bool kcg_comp_array__11146(
  array__11146 *kcg_c1,
  array__11146 *kcg_c2);
#endif /* kcg_comp_array__11146 */

#ifndef kcg_comp_array_int_7
extern kcg_bool kcg_comp_array_int_7(array_int_7 *kcg_c1, array_int_7 *kcg_c2);
#endif /* kcg_comp_array_int_7 */

#ifndef kcg_comp_array_int_7_33
extern kcg_bool kcg_comp_array_int_7_33(
  array_int_7_33 *kcg_c1,
  array_int_7_33 *kcg_c2);
#endif /* kcg_comp_array_int_7_33 */

#ifndef kcg_comp_array_int_2
extern kcg_bool kcg_comp_array_int_2(array_int_2 *kcg_c1, array_int_2 *kcg_c2);
#endif /* kcg_comp_array_int_2 */

#ifndef kcg_comp_array_int_2_32
extern kcg_bool kcg_comp_array_int_2_32(
  array_int_2_32 *kcg_c1,
  array_int_2_32 *kcg_c2);
#endif /* kcg_comp_array_int_2_32 */

#ifndef kcg_comp_array_int_64
extern kcg_bool kcg_comp_array_int_64(
  array_int_64 *kcg_c1,
  array_int_64 *kcg_c2);
#endif /* kcg_comp_array_int_64 */

#ifndef kcg_comp_array__11169
extern kcg_bool kcg_comp_array__11169(
  array__11169 *kcg_c1,
  array__11169 *kcg_c2);
#endif /* kcg_comp_array__11169 */

#ifndef kcg_comp_array__11180
extern kcg_bool kcg_comp_array__11180(
  array__11180 *kcg_c1,
  array__11180 *kcg_c2);
#endif /* kcg_comp_array__11180 */

#ifndef kcg_comp_array__11183
extern kcg_bool kcg_comp_array__11183(
  array__11183 *kcg_c1,
  array__11183 *kcg_c2);
#endif /* kcg_comp_array__11183 */

#ifndef kcg_comp_array_int_99
extern kcg_bool kcg_comp_array_int_99(
  array_int_99 *kcg_c1,
  array_int_99 *kcg_c2);
#endif /* kcg_comp_array_int_99 */

#ifndef kcg_comp_array__11210
extern kcg_bool kcg_comp_array__11210(
  array__11210 *kcg_c1,
  array__11210 *kcg_c2);
#endif /* kcg_comp_array__11210 */

#ifndef kcg_comp_array__11226
extern kcg_bool kcg_comp_array__11226(
  array__11226 *kcg_c1,
  array__11226 *kcg_c2);
#endif /* kcg_comp_array__11226 */

#ifndef kcg_comp_array_int_3
extern kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2);
#endif /* kcg_comp_array_int_3 */

#ifndef kcg_comp_array_int_3_33
extern kcg_bool kcg_comp_array_int_3_33(
  array_int_3_33 *kcg_c1,
  array_int_3_33 *kcg_c2);
#endif /* kcg_comp_array_int_3_33 */

#ifndef kcg_comp_array__11241
extern kcg_bool kcg_comp_array__11241(
  array__11241 *kcg_c1,
  array__11241 *kcg_c2);
#endif /* kcg_comp_array__11241 */

#ifndef kcg_comp_array__11258
extern kcg_bool kcg_comp_array__11258(
  array__11258 *kcg_c1,
  array__11258 *kcg_c2);
#endif /* kcg_comp_array__11258 */

#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */

#ifndef kcg_comp_array__11345
extern kcg_bool kcg_comp_array__11345(
  array__11345 *kcg_c1,
  array__11345 *kcg_c2);
#endif /* kcg_comp_array__11345 */

#ifndef kcg_comp_array__11431
extern kcg_bool kcg_comp_array__11431(
  array__11431 *kcg_c1,
  array__11431 *kcg_c2);
#endif /* kcg_comp_array__11431 */

#ifndef kcg_comp_array_int_5
extern kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2);
#endif /* kcg_comp_array_int_5 */

#ifndef kcg_comp_array__11478
extern kcg_bool kcg_comp_array__11478(
  array__11478 *kcg_c1,
  array__11478 *kcg_c2);
#endif /* kcg_comp_array__11478 */

#ifndef kcg_comp_array__11490
extern kcg_bool kcg_comp_array__11490(
  array__11490 *kcg_c1,
  array__11490 *kcg_c2);
#endif /* kcg_comp_array__11490 */

#ifndef kcg_comp_array_int_30
extern kcg_bool kcg_comp_array_int_30(
  array_int_30 *kcg_c1,
  array_int_30 *kcg_c2);
#endif /* kcg_comp_array_int_30 */

#ifndef kcg_comp_array_bool_30
extern kcg_bool kcg_comp_array_bool_30(
  array_bool_30 *kcg_c1,
  array_bool_30 *kcg_c2);
#endif /* kcg_comp_array_bool_30 */

#ifndef kcg_comp_array_int_500_500
extern kcg_bool kcg_comp_array_int_500_500(
  array_int_500_500 *kcg_c1,
  array_int_500_500 *kcg_c2);
#endif /* kcg_comp_array_int_500_500 */

#ifndef kcg_comp_array_int_64_32
extern kcg_bool kcg_comp_array_int_64_32(
  array_int_64_32 *kcg_c1,
  array_int_64_32 *kcg_c2);
#endif /* kcg_comp_array_int_64_32 */

#ifndef kcg_comp_array_int_33
extern kcg_bool kcg_comp_array_int_33(
  array_int_33 *kcg_c1,
  array_int_33 *kcg_c2);
#endif /* kcg_comp_array_int_33 */

#ifndef kcg_comp_array__11515
extern kcg_bool kcg_comp_array__11515(
  array__11515 *kcg_c1,
  array__11515 *kcg_c2);
#endif /* kcg_comp_array__11515 */

#ifndef kcg_comp_array_bool_50
extern kcg_bool kcg_comp_array_bool_50(
  array_bool_50 *kcg_c1,
  array_bool_50 *kcg_c2);
#endif /* kcg_comp_array_bool_50 */

#ifndef kcg_comp_array_int_50
extern kcg_bool kcg_comp_array_int_50(
  array_int_50 *kcg_c1,
  array_int_50 *kcg_c2);
#endif /* kcg_comp_array_int_50 */

#ifndef kcg_comp_array__11524
extern kcg_bool kcg_comp_array__11524(
  array__11524 *kcg_c1,
  array__11524 *kcg_c2);
#endif /* kcg_comp_array__11524 */

#ifndef kcg_comp_array__11527
extern kcg_bool kcg_comp_array__11527(
  array__11527 *kcg_c1,
  array__11527 *kcg_c2);
#endif /* kcg_comp_array__11527 */

#ifndef kcg_comp_array__11530
extern kcg_bool kcg_comp_array__11530(
  array__11530 *kcg_c1,
  array__11530 *kcg_c2);
#endif /* kcg_comp_array__11530 */

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

#ifndef kcg_comp_array_int_1
extern kcg_bool kcg_comp_array_int_1(array_int_1 *kcg_c1, array_int_1 *kcg_c2);
#endif /* kcg_comp_array_int_1 */

#ifndef kcg_comp_array_int_104
extern kcg_bool kcg_comp_array_int_104(
  array_int_104 *kcg_c1,
  array_int_104 *kcg_c2);
#endif /* kcg_comp_array_int_104 */

#ifndef kcg_comp_array__11545
extern kcg_bool kcg_comp_array__11545(
  array__11545 *kcg_c1,
  array__11545 *kcg_c2);
#endif /* kcg_comp_array__11545 */

#ifndef kcg_comp_array_int_494
extern kcg_bool kcg_comp_array_int_494(
  array_int_494 *kcg_c1,
  array_int_494 *kcg_c2);
#endif /* kcg_comp_array_int_494 */

#ifndef kcg_comp_array_int_6
extern kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2);
#endif /* kcg_comp_array_int_6 */

#ifndef kcg_comp_array__11554
extern kcg_bool kcg_comp_array__11554(
  array__11554 *kcg_c1,
  array__11554 *kcg_c2);
#endif /* kcg_comp_array__11554 */

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

#ifndef kcg_comp_array__11587
extern kcg_bool kcg_comp_array__11587(
  array__11587 *kcg_c1,
  array__11587 *kcg_c2);
#endif /* kcg_comp_array__11587 */

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

#ifndef kcg_comp_array__11599
extern kcg_bool kcg_comp_array__11599(
  array__11599 *kcg_c1,
  array__11599 *kcg_c2);
#endif /* kcg_comp_array__11599 */

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

#ifndef kcg_comp_array_int_350
extern kcg_bool kcg_comp_array_int_350(
  array_int_350 *kcg_c1,
  array_int_350 *kcg_c2);
#endif /* kcg_comp_array_int_350 */

#ifndef kcg_comp_array_int_21
extern kcg_bool kcg_comp_array_int_21(
  array_int_21 *kcg_c1,
  array_int_21 *kcg_c2);
#endif /* kcg_comp_array_int_21 */

#ifndef kcg_comp_array_int_150
extern kcg_bool kcg_comp_array_int_150(
  array_int_150 *kcg_c1,
  array_int_150 *kcg_c2);
#endif /* kcg_comp_array_int_150 */

#ifndef kcg_comp_array_int_15
extern kcg_bool kcg_comp_array_int_15(
  array_int_15 *kcg_c1,
  array_int_15 *kcg_c2);
#endif /* kcg_comp_array_int_15 */

#ifndef kcg_comp_array_int_22
extern kcg_bool kcg_comp_array_int_22(
  array_int_22 *kcg_c1,
  array_int_22 *kcg_c2);
#endif /* kcg_comp_array_int_22 */

#define kcg_comp_M_016_T_TM_radio_messages kcg_comp_struct__11028

#define kcg_copy_M_016_T_TM_radio_messages kcg_copy_struct__11028

#define kcg_comp_M_018_T_TM_radio_messages kcg_comp_struct__11028

#define kcg_copy_M_018_T_TM_radio_messages kcg_copy_struct__11028

#define kcg_comp_M_024_T_TM_radio_messages kcg_comp_struct__10974

#define kcg_copy_M_024_T_TM_radio_messages kcg_copy_struct__10974

#define kcg_comp_M_027_T_TM_radio_messages kcg_comp_struct__10911

#define kcg_copy_M_027_T_TM_radio_messages kcg_copy_struct__10911

#define kcg_comp_M_TrackTrain_Radio_T_TM_radio_messages kcg_comp_struct__10877

#define kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages kcg_copy_struct__10877

#define kcg_comp_M_003_int_T_TM_radio_messages kcg_comp_struct__11045

#define kcg_copy_M_003_int_T_TM_radio_messages kcg_copy_struct__11045

#define kcg_comp_infoFromLinking_T_TrainPosition_Types_Pck kcg_comp_struct__11336

#define kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck kcg_copy_struct__11336

#define kcg_comp_positionedBG_T_TrainPosition_Types_Pck kcg_comp_struct__11395

#define kcg_copy_positionedBG_T_TrainPosition_Types_Pck kcg_copy_struct__11395

#define kcg_comp_trainPosition_T_TrainPosition_Types_Pck kcg_comp_struct__11406

#define kcg_copy_trainPosition_T_TrainPosition_Types_Pck kcg_copy_struct__11406

#define kcg_comp_StaticSpeedSection_t_TrackAtlasTypes kcg_comp_struct__11423

#define kcg_copy_StaticSpeedSection_t_TrackAtlasTypes kcg_copy_struct__11423

#define kcg_comp_StaticSpeedProfile_t_TrackAtlasTypes kcg_comp_array__11431

#define kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes kcg_copy_array__11431

#define kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_comp_struct__10921

#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_copy_struct__10921

#define kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_comp_struct__11316

#define kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_copy_struct__11316

#define kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg kcg_comp_struct__11348

#define kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg kcg_copy_struct__11348

#define kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg kcg_comp_struct__11355

#define kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg kcg_copy_struct__11355

#define kcg_comp_odometry_T_Obu_BasicTypes_Pkg kcg_comp_struct__11361

#define kcg_copy_odometry_T_Obu_BasicTypes_Pkg kcg_copy_struct__11361

#define kcg_comp_LinkedBGs_T_BG_Types_Pkg kcg_comp_array__11345

#define kcg_copy_LinkedBGs_T_BG_Types_Pkg kcg_copy_array__11345

#define kcg_comp_passedBG_T_BG_Types_Pkg kcg_comp_struct__11389

#define kcg_copy_passedBG_T_BG_Types_Pkg kcg_copy_struct__11389

#define kcg_comp_LinkedBG_T_BG_Types_Pkg kcg_comp_struct__11322

#define kcg_copy_LinkedBG_T_BG_Types_Pkg kcg_copy_struct__11322

#define kcg_comp_BG_Header_T_BG_Types_Pkg kcg_comp_struct__11371

#define kcg_copy_BG_Header_T_BG_Types_Pkg kcg_copy_struct__11371

#define kcg_comp_RBC_Id_T_Common_Types_Pkg kcg_comp_struct__11434

#define kcg_copy_RBC_Id_T_Common_Types_Pkg kcg_copy_struct__11434

#define kcg_comp_RadioMetadata_T_Common_Types_Pkg kcg_comp_struct__11441

#define kcg_copy_RadioMetadata_T_Common_Types_Pkg kcg_copy_struct__11441

#define kcg_comp_ReceivedMessage_T_Common_Types_Pkg kcg_comp_struct__11453

#define kcg_copy_ReceivedMessage_T_Common_Types_Pkg kcg_copy_struct__11453

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__10906

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__10906

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__10903

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__10903

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__10895

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__10895

#define kcg_comp_CompressedRadioMessage_TM kcg_comp_struct__11311

#define kcg_copy_CompressedRadioMessage_TM kcg_copy_struct__11311

#define kcg_comp_Radio_TrackTrain_Header_T_TM kcg_comp_struct__11293

#define kcg_copy_Radio_TrackTrain_Header_T_TM kcg_copy_struct__11293

#define kcg_comp_P015_OBU_sectionlist_int_T_TM kcg_comp_array__11064

#define kcg_copy_P015_OBU_sectionlist_int_T_TM kcg_copy_array__11064

#define kcg_comp_P015_section_array_T_TM kcg_comp_array_int_4

#define kcg_copy_P015_section_array_T_TM kcg_copy_array_int_4

#define kcg_comp_P015_OBU_sectionlist_array_T_TM kcg_comp_array_int_4_32

#define kcg_copy_P015_OBU_sectionlist_array_T_TM kcg_copy_array_int_4_32

#define kcg_comp_P015_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P015_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_P015_section_int_T_TM kcg_comp_struct__11057

#define kcg_copy_P015_section_int_T_TM kcg_copy_struct__11057

#define kcg_comp_P015_trackide_sectionlist_T_TM kcg_comp_array__11064

#define kcg_copy_P015_trackide_sectionlist_T_TM kcg_copy_array__11064

#define kcg_comp_P015_trackside_int_T_TM kcg_comp_struct__11067

#define kcg_copy_P015_trackside_int_T_TM kcg_copy_struct__11067

#define kcg_comp_P065_trackside_int_T_TM kcg_comp_struct__11100

#define kcg_copy_P065_trackside_int_T_TM kcg_copy_struct__11100

#define kcg_comp_P041_OBU_sectionlist_int_T_TM kcg_comp_array__11258

#define kcg_copy_P041_OBU_sectionlist_int_T_TM kcg_copy_array__11258

#define kcg_comp_P041_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P041_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P041_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P041_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P041_section_int_T_TM kcg_comp_struct__11235

#define kcg_copy_P041_section_int_T_TM kcg_copy_struct__11235

#define kcg_comp_P041_trackide_sectionlist_T_TM kcg_comp_array__11241

#define kcg_copy_P041_trackide_sectionlist_T_TM kcg_copy_array__11241

#define kcg_comp_P041_trackside_int_T_TM kcg_comp_struct__11244

#define kcg_copy_P041_trackside_int_T_TM kcg_copy_struct__11244

#define kcg_comp_P005_OBU_sectionlist_int_T_TM kcg_comp_array__11146

#define kcg_copy_P005_OBU_sectionlist_int_T_TM kcg_copy_array__11146

#define kcg_comp_P005_section_array_T_TM kcg_comp_array_int_7

#define kcg_copy_P005_section_array_T_TM kcg_copy_array_int_7

#define kcg_comp_P005_OBU_sectionlist_array_T_TM kcg_comp_array_int_7_33

#define kcg_copy_P005_OBU_sectionlist_array_T_TM kcg_copy_array_int_7_33

#define kcg_comp_P005_sections_array_flat_T_TM kcg_comp_array_int_231

#define kcg_copy_P005_sections_array_flat_T_TM kcg_copy_array_int_231

#define kcg_comp_P005_section_int_T_TM kcg_comp_struct__11116

#define kcg_copy_P005_section_int_T_TM kcg_copy_struct__11116

#define kcg_comp_P005_trackide_sectionlist_T_TM kcg_comp_array__11126

#define kcg_copy_P005_trackide_sectionlist_T_TM kcg_copy_array__11126

#define kcg_comp_P005_trackside_int_T_TM kcg_comp_struct__11129

#define kcg_copy_P005_trackside_int_T_TM kcg_copy_struct__11129

#define kcg_comp_P021_OBU_sectionlist_int_T_TM kcg_comp_array__11226

#define kcg_copy_P021_OBU_sectionlist_int_T_TM kcg_copy_array__11226

#define kcg_comp_P021_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P021_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P021_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P021_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P021_section_int_T_TM kcg_comp_struct__11204

#define kcg_copy_P021_section_int_T_TM kcg_copy_struct__11204

#define kcg_comp_P021_trackide_sectionlist_T_TM kcg_comp_array__11210

#define kcg_copy_P021_trackide_sectionlist_T_TM kcg_copy_array__11210

#define kcg_comp_P021_trackside_int_T_TM kcg_comp_struct__11213

#define kcg_copy_P021_trackside_int_T_TM kcg_copy_struct__11213

#define kcg_comp_Array03_TM kcg_comp_array_int_3

#define kcg_copy_Array03_TM kcg_copy_array_int_3

#define kcg_comp_Array05_TM kcg_comp_array_int_5

#define kcg_copy_Array05_TM kcg_copy_array_int_5

#define kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P003V1_trackside_int_T_TM_baseline2 kcg_comp_struct__11264

#define kcg_copy_P003V1_trackside_int_T_TM_baseline2 kcg_copy_struct__11264

#define kcg_comp_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_comp_array__11169

#define kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_copy_array__11169

#define kcg_comp_P027V1_section_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2

#define kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2

#define kcg_comp_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2_32

#define kcg_copy_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2_32

#define kcg_comp_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array__11180

#define kcg_copy_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array__11180

#define kcg_comp_R_data_internal_T_InfraLib kcg_comp_struct__11038

#define kcg_copy_R_data_internal_T_InfraLib kcg_copy_struct__11038

#define kcg_comp_P027V1_section_int_T_TM_baseline2 kcg_comp_struct__11172

#define kcg_copy_P027V1_section_int_T_TM_baseline2 kcg_copy_struct__11172

#define kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_comp_array__11183

#define kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_copy_array__11183

#define kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2 kcg_comp_struct__11158

#define kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2 kcg_copy_struct__11158

#define kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_comp_array__11169

#define kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_copy_array__11169

#define kcg_comp_P027V1_trackside_int_T_TM_baseline2 kcg_comp_struct__11186

#define kcg_copy_P027V1_trackside_int_T_TM_baseline2 kcg_copy_struct__11186

#define kcg_comp_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_comp_array__11490

#define kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_copy_array__11490

#define kcg_comp_P027V1_OBU_T_TM_baseline2 kcg_comp_struct__11493

#define kcg_copy_P027V1_OBU_T_TM_baseline2 kcg_copy_struct__11493

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_comp_struct__11472

#define kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_copy_struct__11472

#define kcg_comp_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_comp_array__11478

#define kcg_copy_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_copy_array__11478

#define kcg_comp_P027V1_section_enum_T_TM_baseline2 kcg_comp_struct__11481

#define kcg_copy_P027V1_section_enum_T_TM_baseline2 kcg_copy_struct__11481

#define kcg_comp_P027V1_OBU_body_enum_T_TM_baseline2 kcg_comp_struct__11466

#define kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2 kcg_copy_struct__11466

#define kcg_comp_M_028_T_TM_radio_messages kcg_comp_struct__10911

#define kcg_copy_M_028_T_TM_radio_messages kcg_copy_struct__10911

#define kcg_comp_M_032_T_TM_radio_messages kcg_comp_struct__10939

#define kcg_copy_M_032_T_TM_radio_messages kcg_copy_struct__10939

#define kcg_comp_M_033_T_TM_radio_messages kcg_comp_struct__10949

#define kcg_copy_M_033_T_TM_radio_messages kcg_copy_struct__10949

#define kcg_comp_M_034_T_TM_radio_messages kcg_comp_struct__10960

#define kcg_copy_M_034_T_TM_radio_messages kcg_copy_struct__10960

#define kcg_comp_M_038_T_TM_radio_messages kcg_comp_struct__10974

#define kcg_copy_M_038_T_TM_radio_messages kcg_copy_struct__10974

#define kcg_comp_M_039_T_TM_radio_messages kcg_comp_struct__10974

#define kcg_copy_M_039_T_TM_radio_messages kcg_copy_struct__10974

#define kcg_comp_M_040_T_TM_radio_messages kcg_comp_struct__10974

#define kcg_copy_M_040_T_TM_radio_messages kcg_copy_struct__10974

#define kcg_comp_M_041_T_TM_radio_messages kcg_comp_struct__10974

#define kcg_copy_M_041_T_TM_radio_messages kcg_copy_struct__10974

#define kcg_comp_M_043_T_TM_radio_messages kcg_comp_struct__10974

#define kcg_copy_M_043_T_TM_radio_messages kcg_copy_struct__10974

#define kcg_comp_M_045_T_TM_radio_messages kcg_comp_struct__10983

#define kcg_copy_M_045_T_TM_radio_messages kcg_copy_struct__10983

#define kcg_comp_M_002_T_TM_radio_messages kcg_comp_struct__10993

#define kcg_copy_M_002_T_TM_radio_messages kcg_copy_struct__10993

#define kcg_comp_M_003_T_TM_radio_messages kcg_comp_struct__10974

#define kcg_copy_M_003_T_TM_radio_messages kcg_copy_struct__10974

#define kcg_comp_M_006_T_TM_radio_messages kcg_comp_struct__10974

#define kcg_copy_M_006_T_TM_radio_messages kcg_copy_struct__10974

#define kcg_comp_M_008_T_TM_radio_messages kcg_comp_struct__11004

#define kcg_copy_M_008_T_TM_radio_messages kcg_copy_struct__11004

#define kcg_comp_M_009_T_TM_radio_messages kcg_comp_struct__10974

#define kcg_copy_M_009_T_TM_radio_messages kcg_copy_struct__10974

#define kcg_comp_M_015_T_TM_radio_messages kcg_comp_struct__11014

#define kcg_copy_M_015_T_TM_radio_messages kcg_copy_struct__11014

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-09-04T16:21:02
*************************************************************$ */


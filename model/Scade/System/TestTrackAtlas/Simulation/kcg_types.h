/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-28T11:32:44
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

/* Q_GDIR */
typedef enum { Q_GDIR_downhill = 0, Q_GDIR_uphill = 1 } Q_GDIR;
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
  _5_Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction = 0,
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
  _4_Q_ORIENTATION_The_balise_group_has_been_passed_by_the_train_in_reverse_direction = 0,
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

/* D_GRADIENT */
typedef kcg_int D_GRADIENT;

/* G_A */
typedef kcg_int G_A;

/* N_ITER */
typedef kcg_int N_ITER;

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

/* Obu_BasicTypes_Pkg::G_internal_Type */
typedef kcg_int G_internal_Type_Obu_BasicTypes_Pkg;

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
} struct__10151;

/* TM_radio_messages::M_TrackTrain_Radio_T */
typedef struct__10151 M_TrackTrain_Radio_T_TM_radio_messages;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__10169;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__10169 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__10177[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__10177 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__10180;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__10180 CompressedPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_SH_request;
} struct__10185;

/* TM_radio_messages::M_027_T */
typedef struct__10185 M_027_T_TM_radio_messages;

/* TM_radio_messages::M_028_T */
typedef struct__10185 M_028_T_TM_radio_messages;

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
} struct__10195;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct__10195 Radio_TrackTrain_Header_T_Radio_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  M_VERSION m_version;
} struct__10213;

/* TM_radio_messages::M_032_T */
typedef struct__10213 M_032_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_REF d_ref;
} struct__10223;

/* TM_radio_messages::M_033_T */
typedef struct__10223 M_033_T_TM_radio_messages;

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
} struct__10234;

/* TM_radio_messages::M_034_T */
typedef struct__10234 M_034_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
} struct__10248;

/* TM_radio_messages::M_024_T */
typedef struct__10248 M_024_T_TM_radio_messages;

/* TM_radio_messages::M_009_T */
typedef struct__10248 M_009_T_TM_radio_messages;

/* TM_radio_messages::M_006_T */
typedef struct__10248 M_006_T_TM_radio_messages;

/* TM_radio_messages::M_003_T */
typedef struct__10248 M_003_T_TM_radio_messages;

/* TM_radio_messages::M_043_T */
typedef struct__10248 M_043_T_TM_radio_messages;

/* TM_radio_messages::M_041_T */
typedef struct__10248 M_041_T_TM_radio_messages;

/* TM_radio_messages::M_040_T */
typedef struct__10248 M_040_T_TM_radio_messages;

/* TM_radio_messages::M_039_T */
typedef struct__10248 M_039_T_TM_radio_messages;

/* TM_radio_messages::M_038_T */
typedef struct__10248 M_038_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_ORIENTATION q_orientation;
} struct__10257;

/* TM_radio_messages::M_045_T */
typedef struct__10257 M_045_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_SR d_sr;
} struct__10267;

/* TM_radio_messages::M_002_T */
typedef struct__10267 M_002_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_received;
} struct__10278;

/* TM_radio_messages::M_008_T */
typedef struct__10278 M_008_T_TM_radio_messages;

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
} struct__10288;

/* TM_radio_messages::M_015_T */
typedef struct__10288 M_015_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  NID_EM nid_em;
} struct__10302;

/* TM_radio_messages::M_018_T */
typedef struct__10302 M_018_T_TM_radio_messages;

/* TM_radio_messages::M_016_T */
typedef struct__10302 M_016_T_TM_radio_messages;

typedef struct {
  M_TrackTrain_Radio_T_TM_radio_messages message;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int trigger;
  kcg_bool message_sent;
} struct__10312;

/* InfraLib::R_data_internal_T */
typedef struct__10312 R_data_internal_T_InfraLib;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
} struct__10319;

/* TM_radio_messages::M_003_int_T */
typedef struct__10319 M_003_int_T_TM_radio_messages;

typedef kcg_int array_int_4[4];

/* TM::P015_section_array_T */
typedef array_int_4 P015_section_array_T_TM;

typedef struct {
  kcg_int L_SECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
} struct__10331;

/* TM::P015_section_int_T */
typedef struct__10331 P015_section_int_T_TM;

typedef P015_section_array_T_TM array_int_4_32[32];

/* TM::P015_OBU_sectionlist_array_T */
typedef array_int_4_32 P015_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_128[128];

/* TM::P015_sections_array_flat_T */
typedef array_int_128 P015_sections_array_flat_T_TM;

typedef P015_section_int_T_TM array__10344[32];

/* TM::P015_trackide_sectionlist_T */
typedef array__10344 P015_trackide_sectionlist_T_TM;

/* TM::P015_OBU_sectionlist_int_T */
typedef array__10344 P015_OBU_sectionlist_int_T_TM;

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
} struct__10347;

/* TM::P015_trackside_int_T */
typedef struct__10347 P015_trackside_int_T_TM;

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
} struct__10374;

/* TM::P065_trackside_int_T */
typedef struct__10374 P065_trackside_int_T_TM;

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
} struct__10390;

/* TM::P005_section_int_T */
typedef struct__10390 P005_section_int_T_TM;

typedef P005_section_array_T_TM array_int_7_33[33];

/* TM::P005_OBU_sectionlist_array_T */
typedef array_int_7_33 P005_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_231[231];

/* TM::P005_sections_array_flat_T */
typedef array_int_231 P005_sections_array_flat_T_TM;

typedef P005_section_int_T_TM array__10406[33];

/* TM::P005_OBU_sectionlist_int_T */
typedef array__10406 P005_OBU_sectionlist_int_T_TM;

typedef P005_section_int_T_TM array__10409[32];

/* TM::P005_trackide_sectionlist_T */
typedef array__10409 P005_trackide_sectionlist_T_TM;

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
} struct__10412;

/* TM::P005_trackside_int_T */
typedef struct__10412 P005_trackside_int_T_TM;

typedef kcg_int array_int_64[64];

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef struct { kcg_int NC_DIFF; kcg_int V_DIFF; } struct__10432;

/* TM_baseline2::P027V1_section_int_qdiff_T */
typedef struct__10432 P027V1_section_int_qdiff_T_TM_baseline2;

typedef P027V1_section_int_qdiff_T_TM_baseline2 array__10437[32];

/* TM_baseline2::P027V1_trackside_qdifflist_T */
typedef array__10437 P027V1_trackside_qdifflist_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_int_qdiff_T */
typedef array__10437 P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2;

typedef struct {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
} struct__10440;

/* TM_baseline2::P027V1_section_int_T */
typedef struct__10440 P027V1_section_int_T_TM_baseline2;

typedef kcg_int array_int_2[2];

/* TM_baseline2::P027V1_section_array_qdiff_T */
typedef array_int_2 P027V1_section_array_qdiff_T_TM_baseline2;

typedef P027V1_section_array_qdiff_T_TM_baseline2 array_int_2_32[32];

/* TM_baseline2::P027V1_OBU_sectionlist_array_qdiff_T */
typedef array_int_2_32 _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__10454[33];

/* TM_baseline2::P027V1_OBU_sectionlist_int_T */
typedef array__10454 _2_P027V1_OBU_sectionlist_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__10457[32];

/* TM_baseline2::P027V1_trackside_sectionlist_T */
typedef array__10457 P027V1_trackside_sectionlist_T_TM_baseline2;

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
} struct__10460;

/* TM_baseline2::P027V1_trackside_int_T */
typedef struct__10460 P027V1_trackside_int_T_TM_baseline2;

typedef kcg_int array_int_3[3];

/* TM::P021_section_array_T */
typedef array_int_3 P021_section_array_T_TM;

/* TM::P041_section_array_T */
typedef array_int_3 P041_section_array_T_TM;

typedef struct {
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
} struct__10478;

/* TM::P021_section_int_T */
typedef struct__10478 P021_section_int_T_TM;

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

typedef P021_section_int_T_TM array__10490[33];

/* TM::P021_OBU_sectionlist_int_T */
typedef array__10490 P021_OBU_sectionlist_int_T_TM;

typedef P021_section_int_T_TM array__10493[32];

/* TM::P021_trackide_sectionlist_T */
typedef array__10493 P021_trackide_sectionlist_T_TM;

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
} struct__10496;

/* TM::P021_trackside_int_T */
typedef struct__10496 P021_trackside_int_T_TM;

typedef struct {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
} struct__10509;

/* TM::P041_section_int_T */
typedef struct__10509 P041_section_int_T_TM;

typedef P041_section_int_T_TM array__10515[33];

/* TM::P041_OBU_sectionlist_int_T */
typedef array__10515 P041_OBU_sectionlist_int_T_TM;

typedef P041_section_int_T_TM array__10518[32];

/* TM::P041_trackide_sectionlist_T */
typedef array__10518 P041_trackide_sectionlist_T_TM;

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
} struct__10521;

/* TM::P041_trackside_int_T */
typedef struct__10521 P041_trackside_int_T_TM;

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
} struct__10538;

/* TM_baseline2::P003V1_trackside_int_T */
typedef struct__10538 P003V1_trackside_int_T_TM_baseline2;

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
} struct__10567;

/* TM::Radio_TrackTrain_Header_T */
typedef struct__10567 _3_Radio_TrackTrain_Header_T_TM;

typedef struct {
  _3_Radio_TrackTrain_Header_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__10585;

/* TM::CompressedRadioMessage */
typedef struct__10585 CompressedRadioMessage_TM;

typedef struct {
  L_internal_Type_Obu_BasicTypes_Pkg nominal;
  L_internal_Type_Obu_BasicTypes_Pkg d_min;
  L_internal_Type_Obu_BasicTypes_Pkg d_max;
} struct__10590;

/* Obu_BasicTypes_Pkg::LocWithInAcc_T */
typedef struct__10590 LocWithInAcc_T_Obu_BasicTypes_Pkg;

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
} struct__10596;

/* BG_Types_Pkg::LinkedBG_T */
typedef struct__10596 LinkedBG_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_BG nid_bg_fromLinkingBG;
  NID_C nid_c_fromLinkingBG;
  LocWithInAcc_T_Obu_BasicTypes_Pkg expectedLocation;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_link;
  LinkedBG_T_BG_Types_Pkg linkingInfo;
} struct__10610;

/* TrainPosition_Types_Pck::infoFromLinking_T */
typedef struct__10610 infoFromLinking_T_TrainPosition_Types_Pck;

typedef LinkedBG_T_BG_Types_Pkg array__10619[4];

/* BG_Types_Pkg::LinkedBGs_T */
typedef array__10619 LinkedBGs_T_BG_Types_Pkg;

typedef struct {
  V_internal_Type_Obu_BasicTypes_Pkg v_safeNominal;
  V_internal_Type_Obu_BasicTypes_Pkg v_rawNominal;
  V_internal_Type_Obu_BasicTypes_Pkg v_lower;
  V_internal_Type_Obu_BasicTypes_Pkg v_upper;
} struct__10622;

/* Obu_BasicTypes_Pkg::OdometrySpeeds_T */
typedef struct__10622 OdometrySpeeds_T_Obu_BasicTypes_Pkg;

typedef struct {
  L_internal_Type_Obu_BasicTypes_Pkg o_nominal;
  L_internal_Type_Obu_BasicTypes_Pkg o_min;
  L_internal_Type_Obu_BasicTypes_Pkg o_max;
} struct__10629;

/* Obu_BasicTypes_Pkg::OdometryLocations_T */
typedef struct__10629 OdometryLocations_T_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg timestamp;
  OdometryLocations_T_Obu_BasicTypes_Pkg odo;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg speed;
  A_internal_Type_Obu_BasicTypes_Pkg acceleration;
  odoMotionState_T_Obu_BasicTypes_Pkg motionState;
  odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection;
} struct__10635;

/* Obu_BasicTypes_Pkg::odometry_T */
typedef struct__10635 odometry_T_Obu_BasicTypes_Pkg;

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
} struct__10645;

/* BG_Types_Pkg::BG_Header_T */
typedef struct__10645 BG_Header_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  BG_Header_T_BG_Types_Pkg BG_Header;
  LinkedBGs_T_BG_Types_Pkg linkedBGs;
} struct__10663;

/* BG_Types_Pkg::passedBG_T */
typedef struct__10663 passedBG_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINK q_link;
  LocWithInAcc_T_Obu_BasicTypes_Pkg location;
  kcg_int seqNoOnTrack;
  infoFromLinking_T_TrainPosition_Types_Pck infoFromLinking;
  passedBG_T_BG_Types_Pkg infoFromPassing;
} struct__10669;

/* TrainPosition_Types_Pck::positionedBG_T */
typedef struct__10669 positionedBG_T_TrainPosition_Types_Pck;

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
} struct__10680;

/* TrainPosition_Types_Pck::trainPosition_T */
typedef struct__10680 trainPosition_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_Absolute;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_LRBG;
  G_internal_Type_Obu_BasicTypes_Pkg Gradient;
  L_internal_Type_Obu_BasicTypes_Pkg L_Gradient;
} struct__10697;

/* TrackAtlasTypes::Gradient_section_t */
typedef struct__10697 Gradient_section_t_TrackAtlasTypes;

typedef Gradient_section_t_TrackAtlasTypes array__10705[50];

/* TrackAtlasTypes::GradientProfile_t */
typedef array__10705 GradientProfile_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  NID_C nid_c;
  NID_RBC rbc_id;
  kcg_int device_id;
} struct__10708;

/* Common_Types_Pkg::RBC_Id_T */
typedef struct__10708 RBC_Id_T_Common_Types_Pkg;

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
} struct__10715;

/* Common_Types_Pkg::RadioMetadata_T */
typedef struct__10715 RadioMetadata_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg source;
  RadioMetadata_T_Common_Types_Pkg radioMetadata;
  BG_Header_T_BG_Types_Pkg BG_Common_Header;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  CompressedPackets_T_Common_Types_Pkg packets;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} struct__10727;

/* Common_Types_Pkg::ReceivedMessage_T */
typedef struct__10727 ReceivedMessage_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} struct__10737;

/* TM::P021_section_enum_T */
typedef struct__10737 P021_section_enum_T_TM;

typedef P021_section_enum_T_TM array__10744[33];

/* TM::P021_OBU_sectionlist_enum_T */
typedef array__10744 P021_OBU_sectionlist_enum_T_TM;

typedef kcg_int array_int_5[5];

/* TM::Array05 */
typedef array_int_5 Array05_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P021_OBU_sectionlist_enum_T_TM sections;
} struct__10750;

/* TM::P021_OBU_T */
typedef struct__10750 P021_OBU_T_TM;

typedef kcg_int array_int_30[30];

typedef kcg_bool array_bool_30[30];

typedef CompressedPacketData_T_Common_Types_Pkg array_int_500_500[500];

typedef kcg_int array_int_33[33];

typedef P021_sections_array_flat_T_TM array_int_99_33[33];

typedef GradientProfile_t_TrackAtlasTypes array__10773[33];

typedef array__10744 array__10776[33];

typedef Q_SCALE array__10779[33];

typedef array_int_3_33 array_int_3_33_231[231];

typedef kcg_int array_int_396[396];

typedef kcg_int array_int_1[1];

typedef kcg_int array_int_104[104];

typedef P021_section_int_T_TM array__10794[1];

typedef kcg_int array_int_494[494];

typedef kcg_int array_int_6[6];

typedef P027V1_section_int_T_TM_baseline2 array__10803[1];

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

typedef P005_section_int_T_TM array__10836[1];

typedef array_int_3_33 array_int_3_33_99[99];

typedef kcg_int array_int_395[395];

typedef kcg_int array_int_105[105];

typedef P041_section_int_T_TM array__10848[1];

typedef kcg_int array_int_491[491];

typedef kcg_int array_int_9[9];

typedef array_int_4_32 array_int_4_32_128[128];

typedef kcg_int array_int_350[350];

typedef kcg_int array_int_21[21];

typedef kcg_int array_int_150[150];

typedef kcg_int array_int_15[15];

typedef kcg_int array_int_22[22];

#ifndef kcg_copy_struct__10151
#define kcg_copy_struct__10151(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10151)))
#endif /* kcg_copy_struct__10151 */

#ifndef kcg_copy_struct__10169
#define kcg_copy_struct__10169(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10169)))
#endif /* kcg_copy_struct__10169 */

#ifndef kcg_copy_struct__10180
#define kcg_copy_struct__10180(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10180)))
#endif /* kcg_copy_struct__10180 */

#ifndef kcg_copy_struct__10185
#define kcg_copy_struct__10185(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10185)))
#endif /* kcg_copy_struct__10185 */

#ifndef kcg_copy_struct__10195
#define kcg_copy_struct__10195(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10195)))
#endif /* kcg_copy_struct__10195 */

#ifndef kcg_copy_struct__10213
#define kcg_copy_struct__10213(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10213)))
#endif /* kcg_copy_struct__10213 */

#ifndef kcg_copy_struct__10223
#define kcg_copy_struct__10223(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10223)))
#endif /* kcg_copy_struct__10223 */

#ifndef kcg_copy_struct__10234
#define kcg_copy_struct__10234(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10234)))
#endif /* kcg_copy_struct__10234 */

#ifndef kcg_copy_struct__10248
#define kcg_copy_struct__10248(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10248)))
#endif /* kcg_copy_struct__10248 */

#ifndef kcg_copy_struct__10257
#define kcg_copy_struct__10257(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10257)))
#endif /* kcg_copy_struct__10257 */

#ifndef kcg_copy_struct__10267
#define kcg_copy_struct__10267(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10267)))
#endif /* kcg_copy_struct__10267 */

#ifndef kcg_copy_struct__10278
#define kcg_copy_struct__10278(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10278)))
#endif /* kcg_copy_struct__10278 */

#ifndef kcg_copy_struct__10288
#define kcg_copy_struct__10288(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10288)))
#endif /* kcg_copy_struct__10288 */

#ifndef kcg_copy_struct__10302
#define kcg_copy_struct__10302(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10302)))
#endif /* kcg_copy_struct__10302 */

#ifndef kcg_copy_struct__10312
#define kcg_copy_struct__10312(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10312)))
#endif /* kcg_copy_struct__10312 */

#ifndef kcg_copy_struct__10319
#define kcg_copy_struct__10319(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10319)))
#endif /* kcg_copy_struct__10319 */

#ifndef kcg_copy_struct__10331
#define kcg_copy_struct__10331(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10331)))
#endif /* kcg_copy_struct__10331 */

#ifndef kcg_copy_struct__10347
#define kcg_copy_struct__10347(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10347)))
#endif /* kcg_copy_struct__10347 */

#ifndef kcg_copy_struct__10374
#define kcg_copy_struct__10374(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10374)))
#endif /* kcg_copy_struct__10374 */

#ifndef kcg_copy_struct__10390
#define kcg_copy_struct__10390(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10390)))
#endif /* kcg_copy_struct__10390 */

#ifndef kcg_copy_struct__10412
#define kcg_copy_struct__10412(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10412)))
#endif /* kcg_copy_struct__10412 */

#ifndef kcg_copy_struct__10432
#define kcg_copy_struct__10432(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10432)))
#endif /* kcg_copy_struct__10432 */

#ifndef kcg_copy_struct__10440
#define kcg_copy_struct__10440(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10440)))
#endif /* kcg_copy_struct__10440 */

#ifndef kcg_copy_struct__10460
#define kcg_copy_struct__10460(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10460)))
#endif /* kcg_copy_struct__10460 */

#ifndef kcg_copy_struct__10478
#define kcg_copy_struct__10478(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10478)))
#endif /* kcg_copy_struct__10478 */

#ifndef kcg_copy_struct__10496
#define kcg_copy_struct__10496(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10496)))
#endif /* kcg_copy_struct__10496 */

#ifndef kcg_copy_struct__10509
#define kcg_copy_struct__10509(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10509)))
#endif /* kcg_copy_struct__10509 */

#ifndef kcg_copy_struct__10521
#define kcg_copy_struct__10521(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10521)))
#endif /* kcg_copy_struct__10521 */

#ifndef kcg_copy_struct__10538
#define kcg_copy_struct__10538(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10538)))
#endif /* kcg_copy_struct__10538 */

#ifndef kcg_copy_struct__10567
#define kcg_copy_struct__10567(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10567)))
#endif /* kcg_copy_struct__10567 */

#ifndef kcg_copy_struct__10585
#define kcg_copy_struct__10585(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10585)))
#endif /* kcg_copy_struct__10585 */

#ifndef kcg_copy_struct__10590
#define kcg_copy_struct__10590(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10590)))
#endif /* kcg_copy_struct__10590 */

#ifndef kcg_copy_struct__10596
#define kcg_copy_struct__10596(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10596)))
#endif /* kcg_copy_struct__10596 */

#ifndef kcg_copy_struct__10610
#define kcg_copy_struct__10610(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10610)))
#endif /* kcg_copy_struct__10610 */

#ifndef kcg_copy_struct__10622
#define kcg_copy_struct__10622(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10622)))
#endif /* kcg_copy_struct__10622 */

#ifndef kcg_copy_struct__10629
#define kcg_copy_struct__10629(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10629)))
#endif /* kcg_copy_struct__10629 */

#ifndef kcg_copy_struct__10635
#define kcg_copy_struct__10635(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10635)))
#endif /* kcg_copy_struct__10635 */

#ifndef kcg_copy_struct__10645
#define kcg_copy_struct__10645(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10645)))
#endif /* kcg_copy_struct__10645 */

#ifndef kcg_copy_struct__10663
#define kcg_copy_struct__10663(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10663)))
#endif /* kcg_copy_struct__10663 */

#ifndef kcg_copy_struct__10669
#define kcg_copy_struct__10669(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10669)))
#endif /* kcg_copy_struct__10669 */

#ifndef kcg_copy_struct__10680
#define kcg_copy_struct__10680(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10680)))
#endif /* kcg_copy_struct__10680 */

#ifndef kcg_copy_struct__10697
#define kcg_copy_struct__10697(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10697)))
#endif /* kcg_copy_struct__10697 */

#ifndef kcg_copy_struct__10708
#define kcg_copy_struct__10708(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10708)))
#endif /* kcg_copy_struct__10708 */

#ifndef kcg_copy_struct__10715
#define kcg_copy_struct__10715(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10715)))
#endif /* kcg_copy_struct__10715 */

#ifndef kcg_copy_struct__10727
#define kcg_copy_struct__10727(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10727)))
#endif /* kcg_copy_struct__10727 */

#ifndef kcg_copy_struct__10737
#define kcg_copy_struct__10737(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10737)))
#endif /* kcg_copy_struct__10737 */

#ifndef kcg_copy_struct__10750
#define kcg_copy_struct__10750(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10750)))
#endif /* kcg_copy_struct__10750 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__10177
#define kcg_copy_array__10177(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10177)))
#endif /* kcg_copy_array__10177 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_int_4_32
#define kcg_copy_array_int_4_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4_32)))
#endif /* kcg_copy_array_int_4_32 */

#ifndef kcg_copy_array_int_128
#define kcg_copy_array_int_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128)))
#endif /* kcg_copy_array_int_128 */

#ifndef kcg_copy_array__10344
#define kcg_copy_array__10344(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10344)))
#endif /* kcg_copy_array__10344 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array_int_7_33
#define kcg_copy_array_int_7_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33)))
#endif /* kcg_copy_array_int_7_33 */

#ifndef kcg_copy_array_int_231
#define kcg_copy_array_int_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231)))
#endif /* kcg_copy_array_int_231 */

#ifndef kcg_copy_array__10406
#define kcg_copy_array__10406(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10406)))
#endif /* kcg_copy_array__10406 */

#ifndef kcg_copy_array__10409
#define kcg_copy_array__10409(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10409)))
#endif /* kcg_copy_array__10409 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array__10437
#define kcg_copy_array__10437(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10437)))
#endif /* kcg_copy_array__10437 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array_int_2_32
#define kcg_copy_array_int_2_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32)))
#endif /* kcg_copy_array_int_2_32 */

#ifndef kcg_copy_array__10454
#define kcg_copy_array__10454(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10454)))
#endif /* kcg_copy_array__10454 */

#ifndef kcg_copy_array__10457
#define kcg_copy_array__10457(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10457)))
#endif /* kcg_copy_array__10457 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_int_3_33
#define kcg_copy_array_int_3_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33)))
#endif /* kcg_copy_array_int_3_33 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__10490
#define kcg_copy_array__10490(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10490)))
#endif /* kcg_copy_array__10490 */

#ifndef kcg_copy_array__10493
#define kcg_copy_array__10493(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10493)))
#endif /* kcg_copy_array__10493 */

#ifndef kcg_copy_array__10515
#define kcg_copy_array__10515(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10515)))
#endif /* kcg_copy_array__10515 */

#ifndef kcg_copy_array__10518
#define kcg_copy_array__10518(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10518)))
#endif /* kcg_copy_array__10518 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array__10619
#define kcg_copy_array__10619(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10619)))
#endif /* kcg_copy_array__10619 */

#ifndef kcg_copy_array__10705
#define kcg_copy_array__10705(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10705)))
#endif /* kcg_copy_array__10705 */

#ifndef kcg_copy_array__10744
#define kcg_copy_array__10744(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10744)))
#endif /* kcg_copy_array__10744 */

#ifndef kcg_copy_array_int_5
#define kcg_copy_array_int_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_5)))
#endif /* kcg_copy_array_int_5 */

#ifndef kcg_copy_array_int_30
#define kcg_copy_array_int_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_30)))
#endif /* kcg_copy_array_int_30 */

#ifndef kcg_copy_array_bool_30
#define kcg_copy_array_bool_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_30)))
#endif /* kcg_copy_array_bool_30 */

#ifndef kcg_copy_array_int_500_500
#define kcg_copy_array_int_500_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500_500)))
#endif /* kcg_copy_array_int_500_500 */

#ifndef kcg_copy_array_int_33
#define kcg_copy_array_int_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33)))
#endif /* kcg_copy_array_int_33 */

#ifndef kcg_copy_array_int_99_33
#define kcg_copy_array_int_99_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99_33)))
#endif /* kcg_copy_array_int_99_33 */

#ifndef kcg_copy_array__10773
#define kcg_copy_array__10773(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10773)))
#endif /* kcg_copy_array__10773 */

#ifndef kcg_copy_array__10776
#define kcg_copy_array__10776(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10776)))
#endif /* kcg_copy_array__10776 */

#ifndef kcg_copy_array__10779
#define kcg_copy_array__10779(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10779)))
#endif /* kcg_copy_array__10779 */

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

#ifndef kcg_copy_array__10794
#define kcg_copy_array__10794(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10794)))
#endif /* kcg_copy_array__10794 */

#ifndef kcg_copy_array_int_494
#define kcg_copy_array_int_494(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_494)))
#endif /* kcg_copy_array_int_494 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array__10803
#define kcg_copy_array__10803(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10803)))
#endif /* kcg_copy_array__10803 */

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

#ifndef kcg_copy_array__10836
#define kcg_copy_array__10836(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10836)))
#endif /* kcg_copy_array__10836 */

#ifndef kcg_copy_array_int_3_33_99
#define kcg_copy_array_int_3_33_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33_99)))
#endif /* kcg_copy_array_int_3_33_99 */

#ifndef kcg_copy_array_int_395
#define kcg_copy_array_int_395(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_395)))
#endif /* kcg_copy_array_int_395 */

#ifndef kcg_copy_array_int_105
#define kcg_copy_array_int_105(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_105)))
#endif /* kcg_copy_array_int_105 */

#ifndef kcg_copy_array__10848
#define kcg_copy_array__10848(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10848)))
#endif /* kcg_copy_array__10848 */

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

#ifndef kcg_comp_struct__10151
extern kcg_bool kcg_comp_struct__10151(
  struct__10151 *kcg_c1,
  struct__10151 *kcg_c2);
#endif /* kcg_comp_struct__10151 */

#ifndef kcg_comp_struct__10169
extern kcg_bool kcg_comp_struct__10169(
  struct__10169 *kcg_c1,
  struct__10169 *kcg_c2);
#endif /* kcg_comp_struct__10169 */

#ifndef kcg_comp_struct__10180
extern kcg_bool kcg_comp_struct__10180(
  struct__10180 *kcg_c1,
  struct__10180 *kcg_c2);
#endif /* kcg_comp_struct__10180 */

#ifndef kcg_comp_struct__10185
extern kcg_bool kcg_comp_struct__10185(
  struct__10185 *kcg_c1,
  struct__10185 *kcg_c2);
#endif /* kcg_comp_struct__10185 */

#ifndef kcg_comp_struct__10195
extern kcg_bool kcg_comp_struct__10195(
  struct__10195 *kcg_c1,
  struct__10195 *kcg_c2);
#endif /* kcg_comp_struct__10195 */

#ifndef kcg_comp_struct__10213
extern kcg_bool kcg_comp_struct__10213(
  struct__10213 *kcg_c1,
  struct__10213 *kcg_c2);
#endif /* kcg_comp_struct__10213 */

#ifndef kcg_comp_struct__10223
extern kcg_bool kcg_comp_struct__10223(
  struct__10223 *kcg_c1,
  struct__10223 *kcg_c2);
#endif /* kcg_comp_struct__10223 */

#ifndef kcg_comp_struct__10234
extern kcg_bool kcg_comp_struct__10234(
  struct__10234 *kcg_c1,
  struct__10234 *kcg_c2);
#endif /* kcg_comp_struct__10234 */

#ifndef kcg_comp_struct__10248
extern kcg_bool kcg_comp_struct__10248(
  struct__10248 *kcg_c1,
  struct__10248 *kcg_c2);
#endif /* kcg_comp_struct__10248 */

#ifndef kcg_comp_struct__10257
extern kcg_bool kcg_comp_struct__10257(
  struct__10257 *kcg_c1,
  struct__10257 *kcg_c2);
#endif /* kcg_comp_struct__10257 */

#ifndef kcg_comp_struct__10267
extern kcg_bool kcg_comp_struct__10267(
  struct__10267 *kcg_c1,
  struct__10267 *kcg_c2);
#endif /* kcg_comp_struct__10267 */

#ifndef kcg_comp_struct__10278
extern kcg_bool kcg_comp_struct__10278(
  struct__10278 *kcg_c1,
  struct__10278 *kcg_c2);
#endif /* kcg_comp_struct__10278 */

#ifndef kcg_comp_struct__10288
extern kcg_bool kcg_comp_struct__10288(
  struct__10288 *kcg_c1,
  struct__10288 *kcg_c2);
#endif /* kcg_comp_struct__10288 */

#ifndef kcg_comp_struct__10302
extern kcg_bool kcg_comp_struct__10302(
  struct__10302 *kcg_c1,
  struct__10302 *kcg_c2);
#endif /* kcg_comp_struct__10302 */

#ifndef kcg_comp_struct__10312
extern kcg_bool kcg_comp_struct__10312(
  struct__10312 *kcg_c1,
  struct__10312 *kcg_c2);
#endif /* kcg_comp_struct__10312 */

#ifndef kcg_comp_struct__10319
extern kcg_bool kcg_comp_struct__10319(
  struct__10319 *kcg_c1,
  struct__10319 *kcg_c2);
#endif /* kcg_comp_struct__10319 */

#ifndef kcg_comp_struct__10331
extern kcg_bool kcg_comp_struct__10331(
  struct__10331 *kcg_c1,
  struct__10331 *kcg_c2);
#endif /* kcg_comp_struct__10331 */

#ifndef kcg_comp_struct__10347
extern kcg_bool kcg_comp_struct__10347(
  struct__10347 *kcg_c1,
  struct__10347 *kcg_c2);
#endif /* kcg_comp_struct__10347 */

#ifndef kcg_comp_struct__10374
extern kcg_bool kcg_comp_struct__10374(
  struct__10374 *kcg_c1,
  struct__10374 *kcg_c2);
#endif /* kcg_comp_struct__10374 */

#ifndef kcg_comp_struct__10390
extern kcg_bool kcg_comp_struct__10390(
  struct__10390 *kcg_c1,
  struct__10390 *kcg_c2);
#endif /* kcg_comp_struct__10390 */

#ifndef kcg_comp_struct__10412
extern kcg_bool kcg_comp_struct__10412(
  struct__10412 *kcg_c1,
  struct__10412 *kcg_c2);
#endif /* kcg_comp_struct__10412 */

#ifndef kcg_comp_struct__10432
extern kcg_bool kcg_comp_struct__10432(
  struct__10432 *kcg_c1,
  struct__10432 *kcg_c2);
#endif /* kcg_comp_struct__10432 */

#ifndef kcg_comp_struct__10440
extern kcg_bool kcg_comp_struct__10440(
  struct__10440 *kcg_c1,
  struct__10440 *kcg_c2);
#endif /* kcg_comp_struct__10440 */

#ifndef kcg_comp_struct__10460
extern kcg_bool kcg_comp_struct__10460(
  struct__10460 *kcg_c1,
  struct__10460 *kcg_c2);
#endif /* kcg_comp_struct__10460 */

#ifndef kcg_comp_struct__10478
extern kcg_bool kcg_comp_struct__10478(
  struct__10478 *kcg_c1,
  struct__10478 *kcg_c2);
#endif /* kcg_comp_struct__10478 */

#ifndef kcg_comp_struct__10496
extern kcg_bool kcg_comp_struct__10496(
  struct__10496 *kcg_c1,
  struct__10496 *kcg_c2);
#endif /* kcg_comp_struct__10496 */

#ifndef kcg_comp_struct__10509
extern kcg_bool kcg_comp_struct__10509(
  struct__10509 *kcg_c1,
  struct__10509 *kcg_c2);
#endif /* kcg_comp_struct__10509 */

#ifndef kcg_comp_struct__10521
extern kcg_bool kcg_comp_struct__10521(
  struct__10521 *kcg_c1,
  struct__10521 *kcg_c2);
#endif /* kcg_comp_struct__10521 */

#ifndef kcg_comp_struct__10538
extern kcg_bool kcg_comp_struct__10538(
  struct__10538 *kcg_c1,
  struct__10538 *kcg_c2);
#endif /* kcg_comp_struct__10538 */

#ifndef kcg_comp_struct__10567
extern kcg_bool kcg_comp_struct__10567(
  struct__10567 *kcg_c1,
  struct__10567 *kcg_c2);
#endif /* kcg_comp_struct__10567 */

#ifndef kcg_comp_struct__10585
extern kcg_bool kcg_comp_struct__10585(
  struct__10585 *kcg_c1,
  struct__10585 *kcg_c2);
#endif /* kcg_comp_struct__10585 */

#ifndef kcg_comp_struct__10590
extern kcg_bool kcg_comp_struct__10590(
  struct__10590 *kcg_c1,
  struct__10590 *kcg_c2);
#endif /* kcg_comp_struct__10590 */

#ifndef kcg_comp_struct__10596
extern kcg_bool kcg_comp_struct__10596(
  struct__10596 *kcg_c1,
  struct__10596 *kcg_c2);
#endif /* kcg_comp_struct__10596 */

#ifndef kcg_comp_struct__10610
extern kcg_bool kcg_comp_struct__10610(
  struct__10610 *kcg_c1,
  struct__10610 *kcg_c2);
#endif /* kcg_comp_struct__10610 */

#ifndef kcg_comp_struct__10622
extern kcg_bool kcg_comp_struct__10622(
  struct__10622 *kcg_c1,
  struct__10622 *kcg_c2);
#endif /* kcg_comp_struct__10622 */

#ifndef kcg_comp_struct__10629
extern kcg_bool kcg_comp_struct__10629(
  struct__10629 *kcg_c1,
  struct__10629 *kcg_c2);
#endif /* kcg_comp_struct__10629 */

#ifndef kcg_comp_struct__10635
extern kcg_bool kcg_comp_struct__10635(
  struct__10635 *kcg_c1,
  struct__10635 *kcg_c2);
#endif /* kcg_comp_struct__10635 */

#ifndef kcg_comp_struct__10645
extern kcg_bool kcg_comp_struct__10645(
  struct__10645 *kcg_c1,
  struct__10645 *kcg_c2);
#endif /* kcg_comp_struct__10645 */

#ifndef kcg_comp_struct__10663
extern kcg_bool kcg_comp_struct__10663(
  struct__10663 *kcg_c1,
  struct__10663 *kcg_c2);
#endif /* kcg_comp_struct__10663 */

#ifndef kcg_comp_struct__10669
extern kcg_bool kcg_comp_struct__10669(
  struct__10669 *kcg_c1,
  struct__10669 *kcg_c2);
#endif /* kcg_comp_struct__10669 */

#ifndef kcg_comp_struct__10680
extern kcg_bool kcg_comp_struct__10680(
  struct__10680 *kcg_c1,
  struct__10680 *kcg_c2);
#endif /* kcg_comp_struct__10680 */

#ifndef kcg_comp_struct__10697
extern kcg_bool kcg_comp_struct__10697(
  struct__10697 *kcg_c1,
  struct__10697 *kcg_c2);
#endif /* kcg_comp_struct__10697 */

#ifndef kcg_comp_struct__10708
extern kcg_bool kcg_comp_struct__10708(
  struct__10708 *kcg_c1,
  struct__10708 *kcg_c2);
#endif /* kcg_comp_struct__10708 */

#ifndef kcg_comp_struct__10715
extern kcg_bool kcg_comp_struct__10715(
  struct__10715 *kcg_c1,
  struct__10715 *kcg_c2);
#endif /* kcg_comp_struct__10715 */

#ifndef kcg_comp_struct__10727
extern kcg_bool kcg_comp_struct__10727(
  struct__10727 *kcg_c1,
  struct__10727 *kcg_c2);
#endif /* kcg_comp_struct__10727 */

#ifndef kcg_comp_struct__10737
extern kcg_bool kcg_comp_struct__10737(
  struct__10737 *kcg_c1,
  struct__10737 *kcg_c2);
#endif /* kcg_comp_struct__10737 */

#ifndef kcg_comp_struct__10750
extern kcg_bool kcg_comp_struct__10750(
  struct__10750 *kcg_c1,
  struct__10750 *kcg_c2);
#endif /* kcg_comp_struct__10750 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__10177
extern kcg_bool kcg_comp_array__10177(
  array__10177 *kcg_c1,
  array__10177 *kcg_c2);
#endif /* kcg_comp_array__10177 */

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

#ifndef kcg_comp_array__10344
extern kcg_bool kcg_comp_array__10344(
  array__10344 *kcg_c1,
  array__10344 *kcg_c2);
#endif /* kcg_comp_array__10344 */

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

#ifndef kcg_comp_array__10406
extern kcg_bool kcg_comp_array__10406(
  array__10406 *kcg_c1,
  array__10406 *kcg_c2);
#endif /* kcg_comp_array__10406 */

#ifndef kcg_comp_array__10409
extern kcg_bool kcg_comp_array__10409(
  array__10409 *kcg_c1,
  array__10409 *kcg_c2);
#endif /* kcg_comp_array__10409 */

#ifndef kcg_comp_array_int_64
extern kcg_bool kcg_comp_array_int_64(
  array_int_64 *kcg_c1,
  array_int_64 *kcg_c2);
#endif /* kcg_comp_array_int_64 */

#ifndef kcg_comp_array__10437
extern kcg_bool kcg_comp_array__10437(
  array__10437 *kcg_c1,
  array__10437 *kcg_c2);
#endif /* kcg_comp_array__10437 */

#ifndef kcg_comp_array_int_2
extern kcg_bool kcg_comp_array_int_2(array_int_2 *kcg_c1, array_int_2 *kcg_c2);
#endif /* kcg_comp_array_int_2 */

#ifndef kcg_comp_array_int_2_32
extern kcg_bool kcg_comp_array_int_2_32(
  array_int_2_32 *kcg_c1,
  array_int_2_32 *kcg_c2);
#endif /* kcg_comp_array_int_2_32 */

#ifndef kcg_comp_array__10454
extern kcg_bool kcg_comp_array__10454(
  array__10454 *kcg_c1,
  array__10454 *kcg_c2);
#endif /* kcg_comp_array__10454 */

#ifndef kcg_comp_array__10457
extern kcg_bool kcg_comp_array__10457(
  array__10457 *kcg_c1,
  array__10457 *kcg_c2);
#endif /* kcg_comp_array__10457 */

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

#ifndef kcg_comp_array__10490
extern kcg_bool kcg_comp_array__10490(
  array__10490 *kcg_c1,
  array__10490 *kcg_c2);
#endif /* kcg_comp_array__10490 */

#ifndef kcg_comp_array__10493
extern kcg_bool kcg_comp_array__10493(
  array__10493 *kcg_c1,
  array__10493 *kcg_c2);
#endif /* kcg_comp_array__10493 */

#ifndef kcg_comp_array__10515
extern kcg_bool kcg_comp_array__10515(
  array__10515 *kcg_c1,
  array__10515 *kcg_c2);
#endif /* kcg_comp_array__10515 */

#ifndef kcg_comp_array__10518
extern kcg_bool kcg_comp_array__10518(
  array__10518 *kcg_c1,
  array__10518 *kcg_c2);
#endif /* kcg_comp_array__10518 */

#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */

#ifndef kcg_comp_array__10619
extern kcg_bool kcg_comp_array__10619(
  array__10619 *kcg_c1,
  array__10619 *kcg_c2);
#endif /* kcg_comp_array__10619 */

#ifndef kcg_comp_array__10705
extern kcg_bool kcg_comp_array__10705(
  array__10705 *kcg_c1,
  array__10705 *kcg_c2);
#endif /* kcg_comp_array__10705 */

#ifndef kcg_comp_array__10744
extern kcg_bool kcg_comp_array__10744(
  array__10744 *kcg_c1,
  array__10744 *kcg_c2);
#endif /* kcg_comp_array__10744 */

#ifndef kcg_comp_array_int_5
extern kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2);
#endif /* kcg_comp_array_int_5 */

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

#ifndef kcg_comp_array_int_33
extern kcg_bool kcg_comp_array_int_33(
  array_int_33 *kcg_c1,
  array_int_33 *kcg_c2);
#endif /* kcg_comp_array_int_33 */

#ifndef kcg_comp_array_int_99_33
extern kcg_bool kcg_comp_array_int_99_33(
  array_int_99_33 *kcg_c1,
  array_int_99_33 *kcg_c2);
#endif /* kcg_comp_array_int_99_33 */

#ifndef kcg_comp_array__10773
extern kcg_bool kcg_comp_array__10773(
  array__10773 *kcg_c1,
  array__10773 *kcg_c2);
#endif /* kcg_comp_array__10773 */

#ifndef kcg_comp_array__10776
extern kcg_bool kcg_comp_array__10776(
  array__10776 *kcg_c1,
  array__10776 *kcg_c2);
#endif /* kcg_comp_array__10776 */

#ifndef kcg_comp_array__10779
extern kcg_bool kcg_comp_array__10779(
  array__10779 *kcg_c1,
  array__10779 *kcg_c2);
#endif /* kcg_comp_array__10779 */

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

#ifndef kcg_comp_array__10794
extern kcg_bool kcg_comp_array__10794(
  array__10794 *kcg_c1,
  array__10794 *kcg_c2);
#endif /* kcg_comp_array__10794 */

#ifndef kcg_comp_array_int_494
extern kcg_bool kcg_comp_array_int_494(
  array_int_494 *kcg_c1,
  array_int_494 *kcg_c2);
#endif /* kcg_comp_array_int_494 */

#ifndef kcg_comp_array_int_6
extern kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2);
#endif /* kcg_comp_array_int_6 */

#ifndef kcg_comp_array__10803
extern kcg_bool kcg_comp_array__10803(
  array__10803 *kcg_c1,
  array__10803 *kcg_c2);
#endif /* kcg_comp_array__10803 */

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

#ifndef kcg_comp_array__10836
extern kcg_bool kcg_comp_array__10836(
  array__10836 *kcg_c1,
  array__10836 *kcg_c2);
#endif /* kcg_comp_array__10836 */

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

#ifndef kcg_comp_array__10848
extern kcg_bool kcg_comp_array__10848(
  array__10848 *kcg_c1,
  array__10848 *kcg_c2);
#endif /* kcg_comp_array__10848 */

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

#define kcg_comp_M_028_T_TM_radio_messages kcg_comp_struct__10185

#define kcg_copy_M_028_T_TM_radio_messages kcg_copy_struct__10185

#define kcg_comp_M_032_T_TM_radio_messages kcg_comp_struct__10213

#define kcg_copy_M_032_T_TM_radio_messages kcg_copy_struct__10213

#define kcg_comp_M_033_T_TM_radio_messages kcg_comp_struct__10223

#define kcg_copy_M_033_T_TM_radio_messages kcg_copy_struct__10223

#define kcg_comp_M_034_T_TM_radio_messages kcg_comp_struct__10234

#define kcg_copy_M_034_T_TM_radio_messages kcg_copy_struct__10234

#define kcg_comp_M_038_T_TM_radio_messages kcg_comp_struct__10248

#define kcg_copy_M_038_T_TM_radio_messages kcg_copy_struct__10248

#define kcg_comp_M_039_T_TM_radio_messages kcg_comp_struct__10248

#define kcg_copy_M_039_T_TM_radio_messages kcg_copy_struct__10248

#define kcg_comp_M_040_T_TM_radio_messages kcg_comp_struct__10248

#define kcg_copy_M_040_T_TM_radio_messages kcg_copy_struct__10248

#define kcg_comp_M_041_T_TM_radio_messages kcg_comp_struct__10248

#define kcg_copy_M_041_T_TM_radio_messages kcg_copy_struct__10248

#define kcg_comp_M_043_T_TM_radio_messages kcg_comp_struct__10248

#define kcg_copy_M_043_T_TM_radio_messages kcg_copy_struct__10248

#define kcg_comp_M_045_T_TM_radio_messages kcg_comp_struct__10257

#define kcg_copy_M_045_T_TM_radio_messages kcg_copy_struct__10257

#define kcg_comp_M_002_T_TM_radio_messages kcg_comp_struct__10267

#define kcg_copy_M_002_T_TM_radio_messages kcg_copy_struct__10267

#define kcg_comp_M_003_T_TM_radio_messages kcg_comp_struct__10248

#define kcg_copy_M_003_T_TM_radio_messages kcg_copy_struct__10248

#define kcg_comp_M_006_T_TM_radio_messages kcg_comp_struct__10248

#define kcg_copy_M_006_T_TM_radio_messages kcg_copy_struct__10248

#define kcg_comp_M_008_T_TM_radio_messages kcg_comp_struct__10278

#define kcg_copy_M_008_T_TM_radio_messages kcg_copy_struct__10278

#define kcg_comp_M_009_T_TM_radio_messages kcg_comp_struct__10248

#define kcg_copy_M_009_T_TM_radio_messages kcg_copy_struct__10248

#define kcg_comp_M_015_T_TM_radio_messages kcg_comp_struct__10288

#define kcg_copy_M_015_T_TM_radio_messages kcg_copy_struct__10288

#define kcg_comp_M_016_T_TM_radio_messages kcg_comp_struct__10302

#define kcg_copy_M_016_T_TM_radio_messages kcg_copy_struct__10302

#define kcg_comp_M_018_T_TM_radio_messages kcg_comp_struct__10302

#define kcg_copy_M_018_T_TM_radio_messages kcg_copy_struct__10302

#define kcg_comp_M_024_T_TM_radio_messages kcg_comp_struct__10248

#define kcg_copy_M_024_T_TM_radio_messages kcg_copy_struct__10248

#define kcg_comp_M_027_T_TM_radio_messages kcg_comp_struct__10185

#define kcg_copy_M_027_T_TM_radio_messages kcg_copy_struct__10185

#define kcg_comp_M_TrackTrain_Radio_T_TM_radio_messages kcg_comp_struct__10151

#define kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages kcg_copy_struct__10151

#define kcg_comp_M_003_int_T_TM_radio_messages kcg_comp_struct__10319

#define kcg_copy_M_003_int_T_TM_radio_messages kcg_copy_struct__10319

#define kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P003V1_trackside_int_T_TM_baseline2 kcg_comp_struct__10538

#define kcg_copy_P003V1_trackside_int_T_TM_baseline2 kcg_copy_struct__10538

#define kcg_comp_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_comp_array__10437

#define kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_copy_array__10437

#define kcg_comp_P027V1_section_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2

#define kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2

#define kcg_comp__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2_32

#define kcg_copy__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2_32

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp__2_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array__10454

#define kcg_copy__2_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array__10454

#define kcg_comp_P027V1_section_int_T_TM_baseline2 kcg_comp_struct__10440

#define kcg_copy_P027V1_section_int_T_TM_baseline2 kcg_copy_struct__10440

#define kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_comp_array__10457

#define kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_copy_array__10457

#define kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2 kcg_comp_struct__10432

#define kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2 kcg_copy_struct__10432

#define kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_comp_array__10437

#define kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_copy_array__10437

#define kcg_comp_P027V1_trackside_int_T_TM_baseline2 kcg_comp_struct__10460

#define kcg_copy_P027V1_trackside_int_T_TM_baseline2 kcg_copy_struct__10460

#define kcg_comp_infoFromLinking_T_TrainPosition_Types_Pck kcg_comp_struct__10610

#define kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck kcg_copy_struct__10610

#define kcg_comp_positionedBG_T_TrainPosition_Types_Pck kcg_comp_struct__10669

#define kcg_copy_positionedBG_T_TrainPosition_Types_Pck kcg_copy_struct__10669

#define kcg_comp_trainPosition_T_TrainPosition_Types_Pck kcg_comp_struct__10680

#define kcg_copy_trainPosition_T_TrainPosition_Types_Pck kcg_copy_struct__10680

#define kcg_comp_Gradient_section_t_TrackAtlasTypes kcg_comp_struct__10697

#define kcg_copy_Gradient_section_t_TrackAtlasTypes kcg_copy_struct__10697

#define kcg_comp_GradientProfile_t_TrackAtlasTypes kcg_comp_array__10705

#define kcg_copy_GradientProfile_t_TrackAtlasTypes kcg_copy_array__10705

#define kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_comp_struct__10195

#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_copy_struct__10195

#define kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_comp_struct__10590

#define kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_copy_struct__10590

#define kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg kcg_comp_struct__10622

#define kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg kcg_copy_struct__10622

#define kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg kcg_comp_struct__10629

#define kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg kcg_copy_struct__10629

#define kcg_comp_odometry_T_Obu_BasicTypes_Pkg kcg_comp_struct__10635

#define kcg_copy_odometry_T_Obu_BasicTypes_Pkg kcg_copy_struct__10635

#define kcg_comp_LinkedBGs_T_BG_Types_Pkg kcg_comp_array__10619

#define kcg_copy_LinkedBGs_T_BG_Types_Pkg kcg_copy_array__10619

#define kcg_comp_passedBG_T_BG_Types_Pkg kcg_comp_struct__10663

#define kcg_copy_passedBG_T_BG_Types_Pkg kcg_copy_struct__10663

#define kcg_comp_LinkedBG_T_BG_Types_Pkg kcg_comp_struct__10596

#define kcg_copy_LinkedBG_T_BG_Types_Pkg kcg_copy_struct__10596

#define kcg_comp_BG_Header_T_BG_Types_Pkg kcg_comp_struct__10645

#define kcg_copy_BG_Header_T_BG_Types_Pkg kcg_copy_struct__10645

#define kcg_comp_RBC_Id_T_Common_Types_Pkg kcg_comp_struct__10708

#define kcg_copy_RBC_Id_T_Common_Types_Pkg kcg_copy_struct__10708

#define kcg_comp_RadioMetadata_T_Common_Types_Pkg kcg_comp_struct__10715

#define kcg_copy_RadioMetadata_T_Common_Types_Pkg kcg_copy_struct__10715

#define kcg_comp_ReceivedMessage_T_Common_Types_Pkg kcg_comp_struct__10727

#define kcg_copy_ReceivedMessage_T_Common_Types_Pkg kcg_copy_struct__10727

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__10180

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__10180

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__10177

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__10177

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__10169

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__10169

#define kcg_comp_CompressedRadioMessage_TM kcg_comp_struct__10585

#define kcg_copy_CompressedRadioMessage_TM kcg_copy_struct__10585

#define kcg_comp__3_Radio_TrackTrain_Header_T_TM kcg_comp_struct__10567

#define kcg_copy__3_Radio_TrackTrain_Header_T_TM kcg_copy_struct__10567

#define kcg_comp_P015_OBU_sectionlist_int_T_TM kcg_comp_array__10344

#define kcg_copy_P015_OBU_sectionlist_int_T_TM kcg_copy_array__10344

#define kcg_comp_P015_section_array_T_TM kcg_comp_array_int_4

#define kcg_copy_P015_section_array_T_TM kcg_copy_array_int_4

#define kcg_comp_P015_OBU_sectionlist_array_T_TM kcg_comp_array_int_4_32

#define kcg_copy_P015_OBU_sectionlist_array_T_TM kcg_copy_array_int_4_32

#define kcg_comp_P015_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P015_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_P015_section_int_T_TM kcg_comp_struct__10331

#define kcg_copy_P015_section_int_T_TM kcg_copy_struct__10331

#define kcg_comp_P015_trackide_sectionlist_T_TM kcg_comp_array__10344

#define kcg_copy_P015_trackide_sectionlist_T_TM kcg_copy_array__10344

#define kcg_comp_P015_trackside_int_T_TM kcg_comp_struct__10347

#define kcg_copy_P015_trackside_int_T_TM kcg_copy_struct__10347

#define kcg_comp_P065_trackside_int_T_TM kcg_comp_struct__10374

#define kcg_copy_P065_trackside_int_T_TM kcg_copy_struct__10374

#define kcg_comp_P041_OBU_sectionlist_int_T_TM kcg_comp_array__10515

#define kcg_copy_P041_OBU_sectionlist_int_T_TM kcg_copy_array__10515

#define kcg_comp_P041_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P041_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P041_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P041_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P041_section_int_T_TM kcg_comp_struct__10509

#define kcg_copy_P041_section_int_T_TM kcg_copy_struct__10509

#define kcg_comp_P041_trackide_sectionlist_T_TM kcg_comp_array__10518

#define kcg_copy_P041_trackide_sectionlist_T_TM kcg_copy_array__10518

#define kcg_comp_P041_trackside_int_T_TM kcg_comp_struct__10521

#define kcg_copy_P041_trackside_int_T_TM kcg_copy_struct__10521

#define kcg_comp_P005_OBU_sectionlist_int_T_TM kcg_comp_array__10406

#define kcg_copy_P005_OBU_sectionlist_int_T_TM kcg_copy_array__10406

#define kcg_comp_P005_section_array_T_TM kcg_comp_array_int_7

#define kcg_copy_P005_section_array_T_TM kcg_copy_array_int_7

#define kcg_comp_P005_OBU_sectionlist_array_T_TM kcg_comp_array_int_7_33

#define kcg_copy_P005_OBU_sectionlist_array_T_TM kcg_copy_array_int_7_33

#define kcg_comp_P005_sections_array_flat_T_TM kcg_comp_array_int_231

#define kcg_copy_P005_sections_array_flat_T_TM kcg_copy_array_int_231

#define kcg_comp_P005_section_int_T_TM kcg_comp_struct__10390

#define kcg_copy_P005_section_int_T_TM kcg_copy_struct__10390

#define kcg_comp_P005_trackide_sectionlist_T_TM kcg_comp_array__10409

#define kcg_copy_P005_trackide_sectionlist_T_TM kcg_copy_array__10409

#define kcg_comp_P005_trackside_int_T_TM kcg_comp_struct__10412

#define kcg_copy_P005_trackside_int_T_TM kcg_copy_struct__10412

#define kcg_comp_P021_OBU_sectionlist_int_T_TM kcg_comp_array__10490

#define kcg_copy_P021_OBU_sectionlist_int_T_TM kcg_copy_array__10490

#define kcg_comp_P021_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P021_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P021_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P021_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P021_section_int_T_TM kcg_comp_struct__10478

#define kcg_copy_P021_section_int_T_TM kcg_copy_struct__10478

#define kcg_comp_P021_trackide_sectionlist_T_TM kcg_comp_array__10493

#define kcg_copy_P021_trackide_sectionlist_T_TM kcg_copy_array__10493

#define kcg_comp_P021_trackside_int_T_TM kcg_comp_struct__10496

#define kcg_copy_P021_trackside_int_T_TM kcg_copy_struct__10496

#define kcg_comp_Array05_TM kcg_comp_array_int_5

#define kcg_copy_Array05_TM kcg_copy_array_int_5

#define kcg_comp_P021_OBU_T_TM kcg_comp_struct__10750

#define kcg_copy_P021_OBU_T_TM kcg_copy_struct__10750

#define kcg_comp_P021_OBU_sectionlist_enum_T_TM kcg_comp_array__10744

#define kcg_copy_P021_OBU_sectionlist_enum_T_TM kcg_copy_array__10744

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P021_section_enum_T_TM kcg_comp_struct__10737

#define kcg_copy_P021_section_enum_T_TM kcg_copy_struct__10737

#define kcg_comp_R_data_internal_T_InfraLib kcg_comp_struct__10312

#define kcg_copy_R_data_internal_T_InfraLib kcg_copy_struct__10312

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */


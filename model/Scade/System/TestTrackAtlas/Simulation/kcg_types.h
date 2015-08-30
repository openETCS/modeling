/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T11:58:44
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
} struct__10258;

/* TM_radio_messages::M_TrackTrain_Radio_T */
typedef struct__10258 M_TrackTrain_Radio_T_TM_radio_messages;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__10276;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__10276 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__10284[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__10284 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__10287;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__10287 CompressedPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_SH_request;
} struct__10292;

/* TM_radio_messages::M_027_T */
typedef struct__10292 M_027_T_TM_radio_messages;

/* TM_radio_messages::M_028_T */
typedef struct__10292 M_028_T_TM_radio_messages;

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
} struct__10302;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct__10302 Radio_TrackTrain_Header_T_Radio_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  M_VERSION m_version;
} struct__10320;

/* TM_radio_messages::M_032_T */
typedef struct__10320 M_032_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_REF d_ref;
} struct__10330;

/* TM_radio_messages::M_033_T */
typedef struct__10330 M_033_T_TM_radio_messages;

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
} struct__10341;

/* TM_radio_messages::M_034_T */
typedef struct__10341 M_034_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
} struct__10355;

/* TM_radio_messages::M_024_T */
typedef struct__10355 M_024_T_TM_radio_messages;

/* TM_radio_messages::M_009_T */
typedef struct__10355 M_009_T_TM_radio_messages;

/* TM_radio_messages::M_006_T */
typedef struct__10355 M_006_T_TM_radio_messages;

/* TM_radio_messages::M_003_T */
typedef struct__10355 M_003_T_TM_radio_messages;

/* TM_radio_messages::M_043_T */
typedef struct__10355 M_043_T_TM_radio_messages;

/* TM_radio_messages::M_041_T */
typedef struct__10355 M_041_T_TM_radio_messages;

/* TM_radio_messages::M_040_T */
typedef struct__10355 M_040_T_TM_radio_messages;

/* TM_radio_messages::M_039_T */
typedef struct__10355 M_039_T_TM_radio_messages;

/* TM_radio_messages::M_038_T */
typedef struct__10355 M_038_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_ORIENTATION q_orientation;
} struct__10364;

/* TM_radio_messages::M_045_T */
typedef struct__10364 M_045_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_SR d_sr;
} struct__10374;

/* TM_radio_messages::M_002_T */
typedef struct__10374 M_002_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_received;
} struct__10385;

/* TM_radio_messages::M_008_T */
typedef struct__10385 M_008_T_TM_radio_messages;

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
} struct__10395;

/* TM_radio_messages::M_015_T */
typedef struct__10395 M_015_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  NID_EM nid_em;
} struct__10409;

/* TM_radio_messages::M_018_T */
typedef struct__10409 M_018_T_TM_radio_messages;

/* TM_radio_messages::M_016_T */
typedef struct__10409 M_016_T_TM_radio_messages;

typedef struct {
  M_TrackTrain_Radio_T_TM_radio_messages message;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int trigger;
  kcg_bool message_sent;
} struct__10419;

/* InfraLib::R_data_internal_T */
typedef struct__10419 R_data_internal_T_InfraLib;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
} struct__10426;

/* TM_radio_messages::M_003_int_T */
typedef struct__10426 M_003_int_T_TM_radio_messages;

typedef kcg_int array_int_4[4];

/* TM::P015_section_array_T */
typedef array_int_4 P015_section_array_T_TM;

typedef struct {
  kcg_int L_SECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
} struct__10438;

/* TM::P015_section_int_T */
typedef struct__10438 P015_section_int_T_TM;

typedef P015_section_array_T_TM array_int_4_32[32];

/* TM::P015_OBU_sectionlist_array_T */
typedef array_int_4_32 P015_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_128[128];

/* TM::P015_sections_array_flat_T */
typedef array_int_128 P015_sections_array_flat_T_TM;

typedef P015_section_int_T_TM array__10451[32];

/* TM::P015_trackide_sectionlist_T */
typedef array__10451 P015_trackide_sectionlist_T_TM;

/* TM::P015_OBU_sectionlist_int_T */
typedef array__10451 P015_OBU_sectionlist_int_T_TM;

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
} struct__10454;

/* TM::P015_trackside_int_T */
typedef struct__10454 P015_trackside_int_T_TM;

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
} struct__10481;

/* TM::P065_trackside_int_T */
typedef struct__10481 P065_trackside_int_T_TM;

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
} struct__10497;

/* TM::P005_section_int_T */
typedef struct__10497 P005_section_int_T_TM;

typedef P005_section_array_T_TM array_int_7_33[33];

/* TM::P005_OBU_sectionlist_array_T */
typedef array_int_7_33 P005_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_231[231];

/* TM::P005_sections_array_flat_T */
typedef array_int_231 P005_sections_array_flat_T_TM;

typedef P005_section_int_T_TM array__10513[33];

/* TM::P005_OBU_sectionlist_int_T */
typedef array__10513 P005_OBU_sectionlist_int_T_TM;

typedef P005_section_int_T_TM array__10516[32];

/* TM::P005_trackide_sectionlist_T */
typedef array__10516 P005_trackide_sectionlist_T_TM;

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
} struct__10519;

/* TM::P005_trackside_int_T */
typedef struct__10519 P005_trackside_int_T_TM;

typedef kcg_int array_int_64[64];

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef struct { kcg_int NC_DIFF; kcg_int V_DIFF; } struct__10539;

/* TM_baseline2::P027V1_section_int_qdiff_T */
typedef struct__10539 P027V1_section_int_qdiff_T_TM_baseline2;

typedef P027V1_section_int_qdiff_T_TM_baseline2 array__10544[32];

/* TM_baseline2::P027V1_trackside_qdifflist_T */
typedef array__10544 P027V1_trackside_qdifflist_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_int_qdiff_T */
typedef array__10544 P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2;

typedef struct {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
} struct__10547;

/* TM_baseline2::P027V1_section_int_T */
typedef struct__10547 P027V1_section_int_T_TM_baseline2;

typedef kcg_int array_int_2[2];

/* TM_baseline2::P027V1_section_array_qdiff_T */
typedef array_int_2 P027V1_section_array_qdiff_T_TM_baseline2;

typedef P027V1_section_array_qdiff_T_TM_baseline2 array_int_2_32[32];

/* TM_baseline2::P027V1_OBU_sectionlist_array_qdiff_T */
typedef array_int_2_32 _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__10561[33];

/* TM_baseline2::P027V1_OBU_sectionlist_int_T */
typedef array__10561 _2_P027V1_OBU_sectionlist_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__10564[32];

/* TM_baseline2::P027V1_trackside_sectionlist_T */
typedef array__10564 P027V1_trackside_sectionlist_T_TM_baseline2;

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
} struct__10567;

/* TM_baseline2::P027V1_trackside_int_T */
typedef struct__10567 P027V1_trackside_int_T_TM_baseline2;

typedef kcg_int array_int_3[3];

/* TM::P021_section_array_T */
typedef array_int_3 P021_section_array_T_TM;

/* TM::P041_section_array_T */
typedef array_int_3 P041_section_array_T_TM;

typedef struct {
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
} struct__10585;

/* TM::P021_section_int_T */
typedef struct__10585 P021_section_int_T_TM;

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

typedef P021_section_int_T_TM array__10597[33];

/* TM::P021_OBU_sectionlist_int_T */
typedef array__10597 P021_OBU_sectionlist_int_T_TM;

typedef P021_section_int_T_TM array__10600[32];

/* TM::P021_trackide_sectionlist_T */
typedef array__10600 P021_trackide_sectionlist_T_TM;

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
} struct__10603;

/* TM::P021_trackside_int_T */
typedef struct__10603 P021_trackside_int_T_TM;

typedef struct {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
} struct__10616;

/* TM::P041_section_int_T */
typedef struct__10616 P041_section_int_T_TM;

typedef P041_section_int_T_TM array__10622[33];

/* TM::P041_OBU_sectionlist_int_T */
typedef array__10622 P041_OBU_sectionlist_int_T_TM;

typedef P041_section_int_T_TM array__10625[32];

/* TM::P041_trackide_sectionlist_T */
typedef array__10625 P041_trackide_sectionlist_T_TM;

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
} struct__10628;

/* TM::P041_trackside_int_T */
typedef struct__10628 P041_trackside_int_T_TM;

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
} struct__10645;

/* TM_baseline2::P003V1_trackside_int_T */
typedef struct__10645 P003V1_trackside_int_T_TM_baseline2;

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
} struct__10674;

/* TM::Radio_TrackTrain_Header_T */
typedef struct__10674 _3_Radio_TrackTrain_Header_T_TM;

typedef struct {
  _3_Radio_TrackTrain_Header_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__10692;

/* TM::CompressedRadioMessage */
typedef struct__10692 CompressedRadioMessage_TM;

typedef struct {
  L_internal_Type_Obu_BasicTypes_Pkg nominal;
  L_internal_Type_Obu_BasicTypes_Pkg d_min;
  L_internal_Type_Obu_BasicTypes_Pkg d_max;
} struct__10697;

/* Obu_BasicTypes_Pkg::LocWithInAcc_T */
typedef struct__10697 LocWithInAcc_T_Obu_BasicTypes_Pkg;

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
} struct__10703;

/* BG_Types_Pkg::LinkedBG_T */
typedef struct__10703 LinkedBG_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_BG nid_bg_fromLinkingBG;
  NID_C nid_c_fromLinkingBG;
  LocWithInAcc_T_Obu_BasicTypes_Pkg expectedLocation;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_link;
  LinkedBG_T_BG_Types_Pkg linkingInfo;
} struct__10717;

/* TrainPosition_Types_Pck::infoFromLinking_T */
typedef struct__10717 infoFromLinking_T_TrainPosition_Types_Pck;

typedef LinkedBG_T_BG_Types_Pkg array__10726[4];

/* BG_Types_Pkg::LinkedBGs_T */
typedef array__10726 LinkedBGs_T_BG_Types_Pkg;

typedef struct {
  V_internal_Type_Obu_BasicTypes_Pkg v_safeNominal;
  V_internal_Type_Obu_BasicTypes_Pkg v_rawNominal;
  V_internal_Type_Obu_BasicTypes_Pkg v_lower;
  V_internal_Type_Obu_BasicTypes_Pkg v_upper;
} struct__10729;

/* Obu_BasicTypes_Pkg::OdometrySpeeds_T */
typedef struct__10729 OdometrySpeeds_T_Obu_BasicTypes_Pkg;

typedef struct {
  L_internal_Type_Obu_BasicTypes_Pkg o_nominal;
  L_internal_Type_Obu_BasicTypes_Pkg o_min;
  L_internal_Type_Obu_BasicTypes_Pkg o_max;
} struct__10736;

/* Obu_BasicTypes_Pkg::OdometryLocations_T */
typedef struct__10736 OdometryLocations_T_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg timestamp;
  OdometryLocations_T_Obu_BasicTypes_Pkg odo;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg speed;
  A_internal_Type_Obu_BasicTypes_Pkg acceleration;
  odoMotionState_T_Obu_BasicTypes_Pkg motionState;
  odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection;
} struct__10742;

/* Obu_BasicTypes_Pkg::odometry_T */
typedef struct__10742 odometry_T_Obu_BasicTypes_Pkg;

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
} struct__10752;

/* BG_Types_Pkg::BG_Header_T */
typedef struct__10752 BG_Header_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  BG_Header_T_BG_Types_Pkg BG_Header;
  LinkedBGs_T_BG_Types_Pkg linkedBGs;
} struct__10770;

/* BG_Types_Pkg::passedBG_T */
typedef struct__10770 passedBG_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINK q_link;
  LocWithInAcc_T_Obu_BasicTypes_Pkg location;
  kcg_int seqNoOnTrack;
  infoFromLinking_T_TrainPosition_Types_Pck infoFromLinking;
  passedBG_T_BG_Types_Pkg infoFromPassing;
} struct__10776;

/* TrainPosition_Types_Pck::positionedBG_T */
typedef struct__10776 positionedBG_T_TrainPosition_Types_Pck;

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
} struct__10787;

/* TrainPosition_Types_Pck::trainPosition_T */
typedef struct__10787 trainPosition_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_Absolute;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_LRBG;
  G_internal_Type_Obu_BasicTypes_Pkg Gradient;
  L_internal_Type_Obu_BasicTypes_Pkg L_Gradient;
} struct__10804;

/* TrackAtlasTypes::Gradient_section_t */
typedef struct__10804 Gradient_section_t_TrackAtlasTypes;

typedef Gradient_section_t_TrackAtlasTypes array__10812[50];

/* TrackAtlasTypes::GradientProfile_t */
typedef array__10812 GradientProfile_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  NID_C nid_c;
  NID_RBC rbc_id;
  kcg_int device_id;
} struct__10815;

/* Common_Types_Pkg::RBC_Id_T */
typedef struct__10815 RBC_Id_T_Common_Types_Pkg;

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
} struct__10822;

/* Common_Types_Pkg::RadioMetadata_T */
typedef struct__10822 RadioMetadata_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg source;
  RadioMetadata_T_Common_Types_Pkg radioMetadata;
  BG_Header_T_BG_Types_Pkg BG_Common_Header;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  CompressedPackets_T_Common_Types_Pkg packets;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} struct__10834;

/* Common_Types_Pkg::ReceivedMessage_T */
typedef struct__10834 ReceivedMessage_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} struct__10844;

/* TM::P021_section_enum_T */
typedef struct__10844 P021_section_enum_T_TM;

typedef P021_section_enum_T_TM array__10851[33];

/* TM::P021_OBU_sectionlist_enum_T */
typedef array__10851 P021_OBU_sectionlist_enum_T_TM;

typedef kcg_int array_int_5[5];

/* TM::Array05 */
typedef array_int_5 Array05_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P021_OBU_sectionlist_enum_T_TM sections;
} struct__10857;

/* TM::P021_OBU_T */
typedef struct__10857 P021_OBU_T_TM;

typedef kcg_int array_int_30[30];

typedef kcg_bool array_bool_30[30];

typedef CompressedPacketData_T_Common_Types_Pkg array_int_500_500[500];

typedef kcg_int array_int_33[33];

typedef P021_sections_array_flat_T_TM array_int_99_33[33];

typedef GradientProfile_t_TrackAtlasTypes array__10880[33];

typedef array__10851 array__10883[33];

typedef Q_SCALE array__10886[33];

typedef array_int_3_33 array_int_3_33_231[231];

typedef kcg_int array_int_396[396];

typedef kcg_int array_int_1[1];

typedef kcg_int array_int_104[104];

typedef P021_section_int_T_TM array__10901[1];

typedef kcg_int array_int_494[494];

typedef kcg_int array_int_6[6];

typedef P027V1_section_int_T_TM_baseline2 array__10910[1];

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

typedef P005_section_int_T_TM array__10943[1];

typedef array_int_3_33 array_int_3_33_99[99];

typedef kcg_int array_int_395[395];

typedef kcg_int array_int_105[105];

typedef P041_section_int_T_TM array__10955[1];

typedef kcg_int array_int_491[491];

typedef kcg_int array_int_9[9];

typedef array_int_4_32 array_int_4_32_128[128];

typedef kcg_int array_int_350[350];

typedef kcg_int array_int_21[21];

typedef kcg_int array_int_150[150];

typedef kcg_int array_int_15[15];

typedef kcg_int array_int_22[22];

#ifndef kcg_copy_struct__10258
#define kcg_copy_struct__10258(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10258)))
#endif /* kcg_copy_struct__10258 */

#ifndef kcg_copy_struct__10276
#define kcg_copy_struct__10276(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10276)))
#endif /* kcg_copy_struct__10276 */

#ifndef kcg_copy_struct__10287
#define kcg_copy_struct__10287(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10287)))
#endif /* kcg_copy_struct__10287 */

#ifndef kcg_copy_struct__10292
#define kcg_copy_struct__10292(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10292)))
#endif /* kcg_copy_struct__10292 */

#ifndef kcg_copy_struct__10302
#define kcg_copy_struct__10302(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10302)))
#endif /* kcg_copy_struct__10302 */

#ifndef kcg_copy_struct__10320
#define kcg_copy_struct__10320(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10320)))
#endif /* kcg_copy_struct__10320 */

#ifndef kcg_copy_struct__10330
#define kcg_copy_struct__10330(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10330)))
#endif /* kcg_copy_struct__10330 */

#ifndef kcg_copy_struct__10341
#define kcg_copy_struct__10341(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10341)))
#endif /* kcg_copy_struct__10341 */

#ifndef kcg_copy_struct__10355
#define kcg_copy_struct__10355(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10355)))
#endif /* kcg_copy_struct__10355 */

#ifndef kcg_copy_struct__10364
#define kcg_copy_struct__10364(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10364)))
#endif /* kcg_copy_struct__10364 */

#ifndef kcg_copy_struct__10374
#define kcg_copy_struct__10374(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10374)))
#endif /* kcg_copy_struct__10374 */

#ifndef kcg_copy_struct__10385
#define kcg_copy_struct__10385(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10385)))
#endif /* kcg_copy_struct__10385 */

#ifndef kcg_copy_struct__10395
#define kcg_copy_struct__10395(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10395)))
#endif /* kcg_copy_struct__10395 */

#ifndef kcg_copy_struct__10409
#define kcg_copy_struct__10409(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10409)))
#endif /* kcg_copy_struct__10409 */

#ifndef kcg_copy_struct__10419
#define kcg_copy_struct__10419(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10419)))
#endif /* kcg_copy_struct__10419 */

#ifndef kcg_copy_struct__10426
#define kcg_copy_struct__10426(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10426)))
#endif /* kcg_copy_struct__10426 */

#ifndef kcg_copy_struct__10438
#define kcg_copy_struct__10438(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10438)))
#endif /* kcg_copy_struct__10438 */

#ifndef kcg_copy_struct__10454
#define kcg_copy_struct__10454(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10454)))
#endif /* kcg_copy_struct__10454 */

#ifndef kcg_copy_struct__10481
#define kcg_copy_struct__10481(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10481)))
#endif /* kcg_copy_struct__10481 */

#ifndef kcg_copy_struct__10497
#define kcg_copy_struct__10497(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10497)))
#endif /* kcg_copy_struct__10497 */

#ifndef kcg_copy_struct__10519
#define kcg_copy_struct__10519(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10519)))
#endif /* kcg_copy_struct__10519 */

#ifndef kcg_copy_struct__10539
#define kcg_copy_struct__10539(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10539)))
#endif /* kcg_copy_struct__10539 */

#ifndef kcg_copy_struct__10547
#define kcg_copy_struct__10547(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10547)))
#endif /* kcg_copy_struct__10547 */

#ifndef kcg_copy_struct__10567
#define kcg_copy_struct__10567(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10567)))
#endif /* kcg_copy_struct__10567 */

#ifndef kcg_copy_struct__10585
#define kcg_copy_struct__10585(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10585)))
#endif /* kcg_copy_struct__10585 */

#ifndef kcg_copy_struct__10603
#define kcg_copy_struct__10603(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10603)))
#endif /* kcg_copy_struct__10603 */

#ifndef kcg_copy_struct__10616
#define kcg_copy_struct__10616(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10616)))
#endif /* kcg_copy_struct__10616 */

#ifndef kcg_copy_struct__10628
#define kcg_copy_struct__10628(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10628)))
#endif /* kcg_copy_struct__10628 */

#ifndef kcg_copy_struct__10645
#define kcg_copy_struct__10645(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10645)))
#endif /* kcg_copy_struct__10645 */

#ifndef kcg_copy_struct__10674
#define kcg_copy_struct__10674(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10674)))
#endif /* kcg_copy_struct__10674 */

#ifndef kcg_copy_struct__10692
#define kcg_copy_struct__10692(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10692)))
#endif /* kcg_copy_struct__10692 */

#ifndef kcg_copy_struct__10697
#define kcg_copy_struct__10697(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10697)))
#endif /* kcg_copy_struct__10697 */

#ifndef kcg_copy_struct__10703
#define kcg_copy_struct__10703(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10703)))
#endif /* kcg_copy_struct__10703 */

#ifndef kcg_copy_struct__10717
#define kcg_copy_struct__10717(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10717)))
#endif /* kcg_copy_struct__10717 */

#ifndef kcg_copy_struct__10729
#define kcg_copy_struct__10729(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10729)))
#endif /* kcg_copy_struct__10729 */

#ifndef kcg_copy_struct__10736
#define kcg_copy_struct__10736(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10736)))
#endif /* kcg_copy_struct__10736 */

#ifndef kcg_copy_struct__10742
#define kcg_copy_struct__10742(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10742)))
#endif /* kcg_copy_struct__10742 */

#ifndef kcg_copy_struct__10752
#define kcg_copy_struct__10752(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10752)))
#endif /* kcg_copy_struct__10752 */

#ifndef kcg_copy_struct__10770
#define kcg_copy_struct__10770(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10770)))
#endif /* kcg_copy_struct__10770 */

#ifndef kcg_copy_struct__10776
#define kcg_copy_struct__10776(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10776)))
#endif /* kcg_copy_struct__10776 */

#ifndef kcg_copy_struct__10787
#define kcg_copy_struct__10787(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10787)))
#endif /* kcg_copy_struct__10787 */

#ifndef kcg_copy_struct__10804
#define kcg_copy_struct__10804(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10804)))
#endif /* kcg_copy_struct__10804 */

#ifndef kcg_copy_struct__10815
#define kcg_copy_struct__10815(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10815)))
#endif /* kcg_copy_struct__10815 */

#ifndef kcg_copy_struct__10822
#define kcg_copy_struct__10822(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10822)))
#endif /* kcg_copy_struct__10822 */

#ifndef kcg_copy_struct__10834
#define kcg_copy_struct__10834(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10834)))
#endif /* kcg_copy_struct__10834 */

#ifndef kcg_copy_struct__10844
#define kcg_copy_struct__10844(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10844)))
#endif /* kcg_copy_struct__10844 */

#ifndef kcg_copy_struct__10857
#define kcg_copy_struct__10857(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10857)))
#endif /* kcg_copy_struct__10857 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__10284
#define kcg_copy_array__10284(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10284)))
#endif /* kcg_copy_array__10284 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_int_4_32
#define kcg_copy_array_int_4_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4_32)))
#endif /* kcg_copy_array_int_4_32 */

#ifndef kcg_copy_array_int_128
#define kcg_copy_array_int_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128)))
#endif /* kcg_copy_array_int_128 */

#ifndef kcg_copy_array__10451
#define kcg_copy_array__10451(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10451)))
#endif /* kcg_copy_array__10451 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array_int_7_33
#define kcg_copy_array_int_7_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33)))
#endif /* kcg_copy_array_int_7_33 */

#ifndef kcg_copy_array_int_231
#define kcg_copy_array_int_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231)))
#endif /* kcg_copy_array_int_231 */

#ifndef kcg_copy_array__10513
#define kcg_copy_array__10513(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10513)))
#endif /* kcg_copy_array__10513 */

#ifndef kcg_copy_array__10516
#define kcg_copy_array__10516(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10516)))
#endif /* kcg_copy_array__10516 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array__10544
#define kcg_copy_array__10544(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10544)))
#endif /* kcg_copy_array__10544 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array_int_2_32
#define kcg_copy_array_int_2_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32)))
#endif /* kcg_copy_array_int_2_32 */

#ifndef kcg_copy_array__10561
#define kcg_copy_array__10561(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10561)))
#endif /* kcg_copy_array__10561 */

#ifndef kcg_copy_array__10564
#define kcg_copy_array__10564(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10564)))
#endif /* kcg_copy_array__10564 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_int_3_33
#define kcg_copy_array_int_3_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33)))
#endif /* kcg_copy_array_int_3_33 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__10597
#define kcg_copy_array__10597(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10597)))
#endif /* kcg_copy_array__10597 */

#ifndef kcg_copy_array__10600
#define kcg_copy_array__10600(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10600)))
#endif /* kcg_copy_array__10600 */

#ifndef kcg_copy_array__10622
#define kcg_copy_array__10622(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10622)))
#endif /* kcg_copy_array__10622 */

#ifndef kcg_copy_array__10625
#define kcg_copy_array__10625(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10625)))
#endif /* kcg_copy_array__10625 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array__10726
#define kcg_copy_array__10726(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10726)))
#endif /* kcg_copy_array__10726 */

#ifndef kcg_copy_array__10812
#define kcg_copy_array__10812(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10812)))
#endif /* kcg_copy_array__10812 */

#ifndef kcg_copy_array__10851
#define kcg_copy_array__10851(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10851)))
#endif /* kcg_copy_array__10851 */

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

#ifndef kcg_copy_array__10880
#define kcg_copy_array__10880(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10880)))
#endif /* kcg_copy_array__10880 */

#ifndef kcg_copy_array__10883
#define kcg_copy_array__10883(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10883)))
#endif /* kcg_copy_array__10883 */

#ifndef kcg_copy_array__10886
#define kcg_copy_array__10886(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10886)))
#endif /* kcg_copy_array__10886 */

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

#ifndef kcg_copy_array__10901
#define kcg_copy_array__10901(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10901)))
#endif /* kcg_copy_array__10901 */

#ifndef kcg_copy_array_int_494
#define kcg_copy_array_int_494(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_494)))
#endif /* kcg_copy_array_int_494 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array__10910
#define kcg_copy_array__10910(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10910)))
#endif /* kcg_copy_array__10910 */

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

#ifndef kcg_copy_array__10943
#define kcg_copy_array__10943(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10943)))
#endif /* kcg_copy_array__10943 */

#ifndef kcg_copy_array_int_3_33_99
#define kcg_copy_array_int_3_33_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33_99)))
#endif /* kcg_copy_array_int_3_33_99 */

#ifndef kcg_copy_array_int_395
#define kcg_copy_array_int_395(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_395)))
#endif /* kcg_copy_array_int_395 */

#ifndef kcg_copy_array_int_105
#define kcg_copy_array_int_105(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_105)))
#endif /* kcg_copy_array_int_105 */

#ifndef kcg_copy_array__10955
#define kcg_copy_array__10955(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10955)))
#endif /* kcg_copy_array__10955 */

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

#ifndef kcg_comp_struct__10258
extern kcg_bool kcg_comp_struct__10258(
  struct__10258 *kcg_c1,
  struct__10258 *kcg_c2);
#endif /* kcg_comp_struct__10258 */

#ifndef kcg_comp_struct__10276
extern kcg_bool kcg_comp_struct__10276(
  struct__10276 *kcg_c1,
  struct__10276 *kcg_c2);
#endif /* kcg_comp_struct__10276 */

#ifndef kcg_comp_struct__10287
extern kcg_bool kcg_comp_struct__10287(
  struct__10287 *kcg_c1,
  struct__10287 *kcg_c2);
#endif /* kcg_comp_struct__10287 */

#ifndef kcg_comp_struct__10292
extern kcg_bool kcg_comp_struct__10292(
  struct__10292 *kcg_c1,
  struct__10292 *kcg_c2);
#endif /* kcg_comp_struct__10292 */

#ifndef kcg_comp_struct__10302
extern kcg_bool kcg_comp_struct__10302(
  struct__10302 *kcg_c1,
  struct__10302 *kcg_c2);
#endif /* kcg_comp_struct__10302 */

#ifndef kcg_comp_struct__10320
extern kcg_bool kcg_comp_struct__10320(
  struct__10320 *kcg_c1,
  struct__10320 *kcg_c2);
#endif /* kcg_comp_struct__10320 */

#ifndef kcg_comp_struct__10330
extern kcg_bool kcg_comp_struct__10330(
  struct__10330 *kcg_c1,
  struct__10330 *kcg_c2);
#endif /* kcg_comp_struct__10330 */

#ifndef kcg_comp_struct__10341
extern kcg_bool kcg_comp_struct__10341(
  struct__10341 *kcg_c1,
  struct__10341 *kcg_c2);
#endif /* kcg_comp_struct__10341 */

#ifndef kcg_comp_struct__10355
extern kcg_bool kcg_comp_struct__10355(
  struct__10355 *kcg_c1,
  struct__10355 *kcg_c2);
#endif /* kcg_comp_struct__10355 */

#ifndef kcg_comp_struct__10364
extern kcg_bool kcg_comp_struct__10364(
  struct__10364 *kcg_c1,
  struct__10364 *kcg_c2);
#endif /* kcg_comp_struct__10364 */

#ifndef kcg_comp_struct__10374
extern kcg_bool kcg_comp_struct__10374(
  struct__10374 *kcg_c1,
  struct__10374 *kcg_c2);
#endif /* kcg_comp_struct__10374 */

#ifndef kcg_comp_struct__10385
extern kcg_bool kcg_comp_struct__10385(
  struct__10385 *kcg_c1,
  struct__10385 *kcg_c2);
#endif /* kcg_comp_struct__10385 */

#ifndef kcg_comp_struct__10395
extern kcg_bool kcg_comp_struct__10395(
  struct__10395 *kcg_c1,
  struct__10395 *kcg_c2);
#endif /* kcg_comp_struct__10395 */

#ifndef kcg_comp_struct__10409
extern kcg_bool kcg_comp_struct__10409(
  struct__10409 *kcg_c1,
  struct__10409 *kcg_c2);
#endif /* kcg_comp_struct__10409 */

#ifndef kcg_comp_struct__10419
extern kcg_bool kcg_comp_struct__10419(
  struct__10419 *kcg_c1,
  struct__10419 *kcg_c2);
#endif /* kcg_comp_struct__10419 */

#ifndef kcg_comp_struct__10426
extern kcg_bool kcg_comp_struct__10426(
  struct__10426 *kcg_c1,
  struct__10426 *kcg_c2);
#endif /* kcg_comp_struct__10426 */

#ifndef kcg_comp_struct__10438
extern kcg_bool kcg_comp_struct__10438(
  struct__10438 *kcg_c1,
  struct__10438 *kcg_c2);
#endif /* kcg_comp_struct__10438 */

#ifndef kcg_comp_struct__10454
extern kcg_bool kcg_comp_struct__10454(
  struct__10454 *kcg_c1,
  struct__10454 *kcg_c2);
#endif /* kcg_comp_struct__10454 */

#ifndef kcg_comp_struct__10481
extern kcg_bool kcg_comp_struct__10481(
  struct__10481 *kcg_c1,
  struct__10481 *kcg_c2);
#endif /* kcg_comp_struct__10481 */

#ifndef kcg_comp_struct__10497
extern kcg_bool kcg_comp_struct__10497(
  struct__10497 *kcg_c1,
  struct__10497 *kcg_c2);
#endif /* kcg_comp_struct__10497 */

#ifndef kcg_comp_struct__10519
extern kcg_bool kcg_comp_struct__10519(
  struct__10519 *kcg_c1,
  struct__10519 *kcg_c2);
#endif /* kcg_comp_struct__10519 */

#ifndef kcg_comp_struct__10539
extern kcg_bool kcg_comp_struct__10539(
  struct__10539 *kcg_c1,
  struct__10539 *kcg_c2);
#endif /* kcg_comp_struct__10539 */

#ifndef kcg_comp_struct__10547
extern kcg_bool kcg_comp_struct__10547(
  struct__10547 *kcg_c1,
  struct__10547 *kcg_c2);
#endif /* kcg_comp_struct__10547 */

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

#ifndef kcg_comp_struct__10603
extern kcg_bool kcg_comp_struct__10603(
  struct__10603 *kcg_c1,
  struct__10603 *kcg_c2);
#endif /* kcg_comp_struct__10603 */

#ifndef kcg_comp_struct__10616
extern kcg_bool kcg_comp_struct__10616(
  struct__10616 *kcg_c1,
  struct__10616 *kcg_c2);
#endif /* kcg_comp_struct__10616 */

#ifndef kcg_comp_struct__10628
extern kcg_bool kcg_comp_struct__10628(
  struct__10628 *kcg_c1,
  struct__10628 *kcg_c2);
#endif /* kcg_comp_struct__10628 */

#ifndef kcg_comp_struct__10645
extern kcg_bool kcg_comp_struct__10645(
  struct__10645 *kcg_c1,
  struct__10645 *kcg_c2);
#endif /* kcg_comp_struct__10645 */

#ifndef kcg_comp_struct__10674
extern kcg_bool kcg_comp_struct__10674(
  struct__10674 *kcg_c1,
  struct__10674 *kcg_c2);
#endif /* kcg_comp_struct__10674 */

#ifndef kcg_comp_struct__10692
extern kcg_bool kcg_comp_struct__10692(
  struct__10692 *kcg_c1,
  struct__10692 *kcg_c2);
#endif /* kcg_comp_struct__10692 */

#ifndef kcg_comp_struct__10697
extern kcg_bool kcg_comp_struct__10697(
  struct__10697 *kcg_c1,
  struct__10697 *kcg_c2);
#endif /* kcg_comp_struct__10697 */

#ifndef kcg_comp_struct__10703
extern kcg_bool kcg_comp_struct__10703(
  struct__10703 *kcg_c1,
  struct__10703 *kcg_c2);
#endif /* kcg_comp_struct__10703 */

#ifndef kcg_comp_struct__10717
extern kcg_bool kcg_comp_struct__10717(
  struct__10717 *kcg_c1,
  struct__10717 *kcg_c2);
#endif /* kcg_comp_struct__10717 */

#ifndef kcg_comp_struct__10729
extern kcg_bool kcg_comp_struct__10729(
  struct__10729 *kcg_c1,
  struct__10729 *kcg_c2);
#endif /* kcg_comp_struct__10729 */

#ifndef kcg_comp_struct__10736
extern kcg_bool kcg_comp_struct__10736(
  struct__10736 *kcg_c1,
  struct__10736 *kcg_c2);
#endif /* kcg_comp_struct__10736 */

#ifndef kcg_comp_struct__10742
extern kcg_bool kcg_comp_struct__10742(
  struct__10742 *kcg_c1,
  struct__10742 *kcg_c2);
#endif /* kcg_comp_struct__10742 */

#ifndef kcg_comp_struct__10752
extern kcg_bool kcg_comp_struct__10752(
  struct__10752 *kcg_c1,
  struct__10752 *kcg_c2);
#endif /* kcg_comp_struct__10752 */

#ifndef kcg_comp_struct__10770
extern kcg_bool kcg_comp_struct__10770(
  struct__10770 *kcg_c1,
  struct__10770 *kcg_c2);
#endif /* kcg_comp_struct__10770 */

#ifndef kcg_comp_struct__10776
extern kcg_bool kcg_comp_struct__10776(
  struct__10776 *kcg_c1,
  struct__10776 *kcg_c2);
#endif /* kcg_comp_struct__10776 */

#ifndef kcg_comp_struct__10787
extern kcg_bool kcg_comp_struct__10787(
  struct__10787 *kcg_c1,
  struct__10787 *kcg_c2);
#endif /* kcg_comp_struct__10787 */

#ifndef kcg_comp_struct__10804
extern kcg_bool kcg_comp_struct__10804(
  struct__10804 *kcg_c1,
  struct__10804 *kcg_c2);
#endif /* kcg_comp_struct__10804 */

#ifndef kcg_comp_struct__10815
extern kcg_bool kcg_comp_struct__10815(
  struct__10815 *kcg_c1,
  struct__10815 *kcg_c2);
#endif /* kcg_comp_struct__10815 */

#ifndef kcg_comp_struct__10822
extern kcg_bool kcg_comp_struct__10822(
  struct__10822 *kcg_c1,
  struct__10822 *kcg_c2);
#endif /* kcg_comp_struct__10822 */

#ifndef kcg_comp_struct__10834
extern kcg_bool kcg_comp_struct__10834(
  struct__10834 *kcg_c1,
  struct__10834 *kcg_c2);
#endif /* kcg_comp_struct__10834 */

#ifndef kcg_comp_struct__10844
extern kcg_bool kcg_comp_struct__10844(
  struct__10844 *kcg_c1,
  struct__10844 *kcg_c2);
#endif /* kcg_comp_struct__10844 */

#ifndef kcg_comp_struct__10857
extern kcg_bool kcg_comp_struct__10857(
  struct__10857 *kcg_c1,
  struct__10857 *kcg_c2);
#endif /* kcg_comp_struct__10857 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__10284
extern kcg_bool kcg_comp_array__10284(
  array__10284 *kcg_c1,
  array__10284 *kcg_c2);
#endif /* kcg_comp_array__10284 */

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

#ifndef kcg_comp_array__10451
extern kcg_bool kcg_comp_array__10451(
  array__10451 *kcg_c1,
  array__10451 *kcg_c2);
#endif /* kcg_comp_array__10451 */

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

#ifndef kcg_comp_array__10513
extern kcg_bool kcg_comp_array__10513(
  array__10513 *kcg_c1,
  array__10513 *kcg_c2);
#endif /* kcg_comp_array__10513 */

#ifndef kcg_comp_array__10516
extern kcg_bool kcg_comp_array__10516(
  array__10516 *kcg_c1,
  array__10516 *kcg_c2);
#endif /* kcg_comp_array__10516 */

#ifndef kcg_comp_array_int_64
extern kcg_bool kcg_comp_array_int_64(
  array_int_64 *kcg_c1,
  array_int_64 *kcg_c2);
#endif /* kcg_comp_array_int_64 */

#ifndef kcg_comp_array__10544
extern kcg_bool kcg_comp_array__10544(
  array__10544 *kcg_c1,
  array__10544 *kcg_c2);
#endif /* kcg_comp_array__10544 */

#ifndef kcg_comp_array_int_2
extern kcg_bool kcg_comp_array_int_2(array_int_2 *kcg_c1, array_int_2 *kcg_c2);
#endif /* kcg_comp_array_int_2 */

#ifndef kcg_comp_array_int_2_32
extern kcg_bool kcg_comp_array_int_2_32(
  array_int_2_32 *kcg_c1,
  array_int_2_32 *kcg_c2);
#endif /* kcg_comp_array_int_2_32 */

#ifndef kcg_comp_array__10561
extern kcg_bool kcg_comp_array__10561(
  array__10561 *kcg_c1,
  array__10561 *kcg_c2);
#endif /* kcg_comp_array__10561 */

#ifndef kcg_comp_array__10564
extern kcg_bool kcg_comp_array__10564(
  array__10564 *kcg_c1,
  array__10564 *kcg_c2);
#endif /* kcg_comp_array__10564 */

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

#ifndef kcg_comp_array__10597
extern kcg_bool kcg_comp_array__10597(
  array__10597 *kcg_c1,
  array__10597 *kcg_c2);
#endif /* kcg_comp_array__10597 */

#ifndef kcg_comp_array__10600
extern kcg_bool kcg_comp_array__10600(
  array__10600 *kcg_c1,
  array__10600 *kcg_c2);
#endif /* kcg_comp_array__10600 */

#ifndef kcg_comp_array__10622
extern kcg_bool kcg_comp_array__10622(
  array__10622 *kcg_c1,
  array__10622 *kcg_c2);
#endif /* kcg_comp_array__10622 */

#ifndef kcg_comp_array__10625
extern kcg_bool kcg_comp_array__10625(
  array__10625 *kcg_c1,
  array__10625 *kcg_c2);
#endif /* kcg_comp_array__10625 */

#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */

#ifndef kcg_comp_array__10726
extern kcg_bool kcg_comp_array__10726(
  array__10726 *kcg_c1,
  array__10726 *kcg_c2);
#endif /* kcg_comp_array__10726 */

#ifndef kcg_comp_array__10812
extern kcg_bool kcg_comp_array__10812(
  array__10812 *kcg_c1,
  array__10812 *kcg_c2);
#endif /* kcg_comp_array__10812 */

#ifndef kcg_comp_array__10851
extern kcg_bool kcg_comp_array__10851(
  array__10851 *kcg_c1,
  array__10851 *kcg_c2);
#endif /* kcg_comp_array__10851 */

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

#ifndef kcg_comp_array__10880
extern kcg_bool kcg_comp_array__10880(
  array__10880 *kcg_c1,
  array__10880 *kcg_c2);
#endif /* kcg_comp_array__10880 */

#ifndef kcg_comp_array__10883
extern kcg_bool kcg_comp_array__10883(
  array__10883 *kcg_c1,
  array__10883 *kcg_c2);
#endif /* kcg_comp_array__10883 */

#ifndef kcg_comp_array__10886
extern kcg_bool kcg_comp_array__10886(
  array__10886 *kcg_c1,
  array__10886 *kcg_c2);
#endif /* kcg_comp_array__10886 */

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

#ifndef kcg_comp_array__10901
extern kcg_bool kcg_comp_array__10901(
  array__10901 *kcg_c1,
  array__10901 *kcg_c2);
#endif /* kcg_comp_array__10901 */

#ifndef kcg_comp_array_int_494
extern kcg_bool kcg_comp_array_int_494(
  array_int_494 *kcg_c1,
  array_int_494 *kcg_c2);
#endif /* kcg_comp_array_int_494 */

#ifndef kcg_comp_array_int_6
extern kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2);
#endif /* kcg_comp_array_int_6 */

#ifndef kcg_comp_array__10910
extern kcg_bool kcg_comp_array__10910(
  array__10910 *kcg_c1,
  array__10910 *kcg_c2);
#endif /* kcg_comp_array__10910 */

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

#ifndef kcg_comp_array__10943
extern kcg_bool kcg_comp_array__10943(
  array__10943 *kcg_c1,
  array__10943 *kcg_c2);
#endif /* kcg_comp_array__10943 */

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

#ifndef kcg_comp_array__10955
extern kcg_bool kcg_comp_array__10955(
  array__10955 *kcg_c1,
  array__10955 *kcg_c2);
#endif /* kcg_comp_array__10955 */

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

#define kcg_comp_M_028_T_TM_radio_messages kcg_comp_struct__10292

#define kcg_copy_M_028_T_TM_radio_messages kcg_copy_struct__10292

#define kcg_comp_M_032_T_TM_radio_messages kcg_comp_struct__10320

#define kcg_copy_M_032_T_TM_radio_messages kcg_copy_struct__10320

#define kcg_comp_M_033_T_TM_radio_messages kcg_comp_struct__10330

#define kcg_copy_M_033_T_TM_radio_messages kcg_copy_struct__10330

#define kcg_comp_M_034_T_TM_radio_messages kcg_comp_struct__10341

#define kcg_copy_M_034_T_TM_radio_messages kcg_copy_struct__10341

#define kcg_comp_M_038_T_TM_radio_messages kcg_comp_struct__10355

#define kcg_copy_M_038_T_TM_radio_messages kcg_copy_struct__10355

#define kcg_comp_M_039_T_TM_radio_messages kcg_comp_struct__10355

#define kcg_copy_M_039_T_TM_radio_messages kcg_copy_struct__10355

#define kcg_comp_M_040_T_TM_radio_messages kcg_comp_struct__10355

#define kcg_copy_M_040_T_TM_radio_messages kcg_copy_struct__10355

#define kcg_comp_M_041_T_TM_radio_messages kcg_comp_struct__10355

#define kcg_copy_M_041_T_TM_radio_messages kcg_copy_struct__10355

#define kcg_comp_M_043_T_TM_radio_messages kcg_comp_struct__10355

#define kcg_copy_M_043_T_TM_radio_messages kcg_copy_struct__10355

#define kcg_comp_M_045_T_TM_radio_messages kcg_comp_struct__10364

#define kcg_copy_M_045_T_TM_radio_messages kcg_copy_struct__10364

#define kcg_comp_M_002_T_TM_radio_messages kcg_comp_struct__10374

#define kcg_copy_M_002_T_TM_radio_messages kcg_copy_struct__10374

#define kcg_comp_M_003_T_TM_radio_messages kcg_comp_struct__10355

#define kcg_copy_M_003_T_TM_radio_messages kcg_copy_struct__10355

#define kcg_comp_M_006_T_TM_radio_messages kcg_comp_struct__10355

#define kcg_copy_M_006_T_TM_radio_messages kcg_copy_struct__10355

#define kcg_comp_M_008_T_TM_radio_messages kcg_comp_struct__10385

#define kcg_copy_M_008_T_TM_radio_messages kcg_copy_struct__10385

#define kcg_comp_M_009_T_TM_radio_messages kcg_comp_struct__10355

#define kcg_copy_M_009_T_TM_radio_messages kcg_copy_struct__10355

#define kcg_comp_M_015_T_TM_radio_messages kcg_comp_struct__10395

#define kcg_copy_M_015_T_TM_radio_messages kcg_copy_struct__10395

#define kcg_comp_M_016_T_TM_radio_messages kcg_comp_struct__10409

#define kcg_copy_M_016_T_TM_radio_messages kcg_copy_struct__10409

#define kcg_comp_M_018_T_TM_radio_messages kcg_comp_struct__10409

#define kcg_copy_M_018_T_TM_radio_messages kcg_copy_struct__10409

#define kcg_comp_M_024_T_TM_radio_messages kcg_comp_struct__10355

#define kcg_copy_M_024_T_TM_radio_messages kcg_copy_struct__10355

#define kcg_comp_M_027_T_TM_radio_messages kcg_comp_struct__10292

#define kcg_copy_M_027_T_TM_radio_messages kcg_copy_struct__10292

#define kcg_comp_M_TrackTrain_Radio_T_TM_radio_messages kcg_comp_struct__10258

#define kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages kcg_copy_struct__10258

#define kcg_comp_M_003_int_T_TM_radio_messages kcg_comp_struct__10426

#define kcg_copy_M_003_int_T_TM_radio_messages kcg_copy_struct__10426

#define kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P003V1_trackside_int_T_TM_baseline2 kcg_comp_struct__10645

#define kcg_copy_P003V1_trackside_int_T_TM_baseline2 kcg_copy_struct__10645

#define kcg_comp_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_comp_array__10544

#define kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_copy_array__10544

#define kcg_comp_P027V1_section_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2

#define kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2

#define kcg_comp__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2_32

#define kcg_copy__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2_32

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp__2_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array__10561

#define kcg_copy__2_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array__10561

#define kcg_comp_P027V1_section_int_T_TM_baseline2 kcg_comp_struct__10547

#define kcg_copy_P027V1_section_int_T_TM_baseline2 kcg_copy_struct__10547

#define kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_comp_array__10564

#define kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_copy_array__10564

#define kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2 kcg_comp_struct__10539

#define kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2 kcg_copy_struct__10539

#define kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_comp_array__10544

#define kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_copy_array__10544

#define kcg_comp_P027V1_trackside_int_T_TM_baseline2 kcg_comp_struct__10567

#define kcg_copy_P027V1_trackside_int_T_TM_baseline2 kcg_copy_struct__10567

#define kcg_comp_infoFromLinking_T_TrainPosition_Types_Pck kcg_comp_struct__10717

#define kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck kcg_copy_struct__10717

#define kcg_comp_positionedBG_T_TrainPosition_Types_Pck kcg_comp_struct__10776

#define kcg_copy_positionedBG_T_TrainPosition_Types_Pck kcg_copy_struct__10776

#define kcg_comp_trainPosition_T_TrainPosition_Types_Pck kcg_comp_struct__10787

#define kcg_copy_trainPosition_T_TrainPosition_Types_Pck kcg_copy_struct__10787

#define kcg_comp_Gradient_section_t_TrackAtlasTypes kcg_comp_struct__10804

#define kcg_copy_Gradient_section_t_TrackAtlasTypes kcg_copy_struct__10804

#define kcg_comp_GradientProfile_t_TrackAtlasTypes kcg_comp_array__10812

#define kcg_copy_GradientProfile_t_TrackAtlasTypes kcg_copy_array__10812

#define kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_comp_struct__10302

#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_copy_struct__10302

#define kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_comp_struct__10697

#define kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_copy_struct__10697

#define kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg kcg_comp_struct__10729

#define kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg kcg_copy_struct__10729

#define kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg kcg_comp_struct__10736

#define kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg kcg_copy_struct__10736

#define kcg_comp_odometry_T_Obu_BasicTypes_Pkg kcg_comp_struct__10742

#define kcg_copy_odometry_T_Obu_BasicTypes_Pkg kcg_copy_struct__10742

#define kcg_comp_LinkedBGs_T_BG_Types_Pkg kcg_comp_array__10726

#define kcg_copy_LinkedBGs_T_BG_Types_Pkg kcg_copy_array__10726

#define kcg_comp_passedBG_T_BG_Types_Pkg kcg_comp_struct__10770

#define kcg_copy_passedBG_T_BG_Types_Pkg kcg_copy_struct__10770

#define kcg_comp_LinkedBG_T_BG_Types_Pkg kcg_comp_struct__10703

#define kcg_copy_LinkedBG_T_BG_Types_Pkg kcg_copy_struct__10703

#define kcg_comp_BG_Header_T_BG_Types_Pkg kcg_comp_struct__10752

#define kcg_copy_BG_Header_T_BG_Types_Pkg kcg_copy_struct__10752

#define kcg_comp_RBC_Id_T_Common_Types_Pkg kcg_comp_struct__10815

#define kcg_copy_RBC_Id_T_Common_Types_Pkg kcg_copy_struct__10815

#define kcg_comp_RadioMetadata_T_Common_Types_Pkg kcg_comp_struct__10822

#define kcg_copy_RadioMetadata_T_Common_Types_Pkg kcg_copy_struct__10822

#define kcg_comp_ReceivedMessage_T_Common_Types_Pkg kcg_comp_struct__10834

#define kcg_copy_ReceivedMessage_T_Common_Types_Pkg kcg_copy_struct__10834

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__10287

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__10287

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__10284

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__10284

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__10276

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__10276

#define kcg_comp_CompressedRadioMessage_TM kcg_comp_struct__10692

#define kcg_copy_CompressedRadioMessage_TM kcg_copy_struct__10692

#define kcg_comp__3_Radio_TrackTrain_Header_T_TM kcg_comp_struct__10674

#define kcg_copy__3_Radio_TrackTrain_Header_T_TM kcg_copy_struct__10674

#define kcg_comp_P015_OBU_sectionlist_int_T_TM kcg_comp_array__10451

#define kcg_copy_P015_OBU_sectionlist_int_T_TM kcg_copy_array__10451

#define kcg_comp_P015_section_array_T_TM kcg_comp_array_int_4

#define kcg_copy_P015_section_array_T_TM kcg_copy_array_int_4

#define kcg_comp_P015_OBU_sectionlist_array_T_TM kcg_comp_array_int_4_32

#define kcg_copy_P015_OBU_sectionlist_array_T_TM kcg_copy_array_int_4_32

#define kcg_comp_P015_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P015_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_P015_section_int_T_TM kcg_comp_struct__10438

#define kcg_copy_P015_section_int_T_TM kcg_copy_struct__10438

#define kcg_comp_P015_trackide_sectionlist_T_TM kcg_comp_array__10451

#define kcg_copy_P015_trackide_sectionlist_T_TM kcg_copy_array__10451

#define kcg_comp_P015_trackside_int_T_TM kcg_comp_struct__10454

#define kcg_copy_P015_trackside_int_T_TM kcg_copy_struct__10454

#define kcg_comp_P065_trackside_int_T_TM kcg_comp_struct__10481

#define kcg_copy_P065_trackside_int_T_TM kcg_copy_struct__10481

#define kcg_comp_P041_OBU_sectionlist_int_T_TM kcg_comp_array__10622

#define kcg_copy_P041_OBU_sectionlist_int_T_TM kcg_copy_array__10622

#define kcg_comp_P041_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P041_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P041_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P041_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P041_section_int_T_TM kcg_comp_struct__10616

#define kcg_copy_P041_section_int_T_TM kcg_copy_struct__10616

#define kcg_comp_P041_trackide_sectionlist_T_TM kcg_comp_array__10625

#define kcg_copy_P041_trackide_sectionlist_T_TM kcg_copy_array__10625

#define kcg_comp_P041_trackside_int_T_TM kcg_comp_struct__10628

#define kcg_copy_P041_trackside_int_T_TM kcg_copy_struct__10628

#define kcg_comp_P005_OBU_sectionlist_int_T_TM kcg_comp_array__10513

#define kcg_copy_P005_OBU_sectionlist_int_T_TM kcg_copy_array__10513

#define kcg_comp_P005_section_array_T_TM kcg_comp_array_int_7

#define kcg_copy_P005_section_array_T_TM kcg_copy_array_int_7

#define kcg_comp_P005_OBU_sectionlist_array_T_TM kcg_comp_array_int_7_33

#define kcg_copy_P005_OBU_sectionlist_array_T_TM kcg_copy_array_int_7_33

#define kcg_comp_P005_sections_array_flat_T_TM kcg_comp_array_int_231

#define kcg_copy_P005_sections_array_flat_T_TM kcg_copy_array_int_231

#define kcg_comp_P005_section_int_T_TM kcg_comp_struct__10497

#define kcg_copy_P005_section_int_T_TM kcg_copy_struct__10497

#define kcg_comp_P005_trackide_sectionlist_T_TM kcg_comp_array__10516

#define kcg_copy_P005_trackide_sectionlist_T_TM kcg_copy_array__10516

#define kcg_comp_P005_trackside_int_T_TM kcg_comp_struct__10519

#define kcg_copy_P005_trackside_int_T_TM kcg_copy_struct__10519

#define kcg_comp_P021_OBU_sectionlist_int_T_TM kcg_comp_array__10597

#define kcg_copy_P021_OBU_sectionlist_int_T_TM kcg_copy_array__10597

#define kcg_comp_P021_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P021_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P021_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P021_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P021_section_int_T_TM kcg_comp_struct__10585

#define kcg_copy_P021_section_int_T_TM kcg_copy_struct__10585

#define kcg_comp_P021_trackide_sectionlist_T_TM kcg_comp_array__10600

#define kcg_copy_P021_trackide_sectionlist_T_TM kcg_copy_array__10600

#define kcg_comp_P021_trackside_int_T_TM kcg_comp_struct__10603

#define kcg_copy_P021_trackside_int_T_TM kcg_copy_struct__10603

#define kcg_comp_Array05_TM kcg_comp_array_int_5

#define kcg_copy_Array05_TM kcg_copy_array_int_5

#define kcg_comp_P021_OBU_T_TM kcg_comp_struct__10857

#define kcg_copy_P021_OBU_T_TM kcg_copy_struct__10857

#define kcg_comp_P021_OBU_sectionlist_enum_T_TM kcg_comp_array__10851

#define kcg_copy_P021_OBU_sectionlist_enum_T_TM kcg_copy_array__10851

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P021_section_enum_T_TM kcg_comp_struct__10844

#define kcg_copy_P021_section_enum_T_TM kcg_copy_struct__10844

#define kcg_comp_R_data_internal_T_InfraLib kcg_comp_struct__10419

#define kcg_copy_R_data_internal_T_InfraLib kcg_copy_struct__10419

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-08-30T11:58:44
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-02T17:34:33
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
  L_internal_Type_Obu_BasicTypes_Pkg begin_section;
  L_internal_Type_Obu_BasicTypes_Pkg end_section;
  G_internal_Type_Obu_BasicTypes_Pkg gradient;
} struct__10477;

/* TrackAtlasTypes::GradientProfile_for_DMI_section_t */
typedef struct__10477 GradientProfile_for_DMI_section_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_Absolute;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_LRBG;
  G_internal_Type_Obu_BasicTypes_Pkg Gradient;
  L_internal_Type_Obu_BasicTypes_Pkg L_Gradient;
} struct__10484;

/* TrackAtlasTypes::Gradient_section_t */
typedef struct__10484 Gradient_section_t_TrackAtlasTypes;

typedef GradientProfile_for_DMI_section_t_TrackAtlasTypes array__10492[50];

/* TrackAtlasTypes::GradientProfile_for_DMI_t */
typedef array__10492 GradientProfile_for_DMI_t_TrackAtlasTypes;

typedef Gradient_section_t_TrackAtlasTypes array__10495[50];

/* TrackAtlasTypes::GradientProfile_t */
typedef array__10495 GradientProfile_t_TrackAtlasTypes;

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
} struct__10498;

/* TM_radio_messages::M_TrackTrain_Radio_T */
typedef struct__10498 M_TrackTrain_Radio_T_TM_radio_messages;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__10516;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__10516 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__10524[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__10524 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__10527;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__10527 CompressedPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_SH_request;
} struct__10532;

/* TM_radio_messages::M_027_T */
typedef struct__10532 M_027_T_TM_radio_messages;

/* TM_radio_messages::M_028_T */
typedef struct__10532 M_028_T_TM_radio_messages;

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
} struct__10542;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct__10542 Radio_TrackTrain_Header_T_Radio_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  M_VERSION m_version;
} struct__10560;

/* TM_radio_messages::M_032_T */
typedef struct__10560 M_032_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_REF d_ref;
} struct__10570;

/* TM_radio_messages::M_033_T */
typedef struct__10570 M_033_T_TM_radio_messages;

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
} struct__10581;

/* TM_radio_messages::M_034_T */
typedef struct__10581 M_034_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
} struct__10595;

/* TM_radio_messages::M_024_T */
typedef struct__10595 M_024_T_TM_radio_messages;

/* TM_radio_messages::M_009_T */
typedef struct__10595 M_009_T_TM_radio_messages;

/* TM_radio_messages::M_006_T */
typedef struct__10595 M_006_T_TM_radio_messages;

/* TM_radio_messages::M_003_T */
typedef struct__10595 M_003_T_TM_radio_messages;

/* TM_radio_messages::M_043_T */
typedef struct__10595 M_043_T_TM_radio_messages;

/* TM_radio_messages::M_041_T */
typedef struct__10595 M_041_T_TM_radio_messages;

/* TM_radio_messages::M_040_T */
typedef struct__10595 M_040_T_TM_radio_messages;

/* TM_radio_messages::M_039_T */
typedef struct__10595 M_039_T_TM_radio_messages;

/* TM_radio_messages::M_038_T */
typedef struct__10595 M_038_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_ORIENTATION q_orientation;
} struct__10604;

/* TM_radio_messages::M_045_T */
typedef struct__10604 M_045_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_SR d_sr;
} struct__10614;

/* TM_radio_messages::M_002_T */
typedef struct__10614 M_002_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_received;
} struct__10625;

/* TM_radio_messages::M_008_T */
typedef struct__10625 M_008_T_TM_radio_messages;

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
} struct__10635;

/* TM_radio_messages::M_015_T */
typedef struct__10635 M_015_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  NID_EM nid_em;
} struct__10649;

/* TM_radio_messages::M_018_T */
typedef struct__10649 M_018_T_TM_radio_messages;

/* TM_radio_messages::M_016_T */
typedef struct__10649 M_016_T_TM_radio_messages;

typedef struct {
  M_TrackTrain_Radio_T_TM_radio_messages message;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int trigger;
  kcg_bool message_sent;
} struct__10659;

/* InfraLib::R_data_internal_T */
typedef struct__10659 R_data_internal_T_InfraLib;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
} struct__10666;

/* TM_radio_messages::M_003_int_T */
typedef struct__10666 M_003_int_T_TM_radio_messages;

typedef kcg_int array_int_4[4];

/* TM::P015_section_array_T */
typedef array_int_4 P015_section_array_T_TM;

typedef struct {
  kcg_int L_SECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
} struct__10678;

/* TM::P015_section_int_T */
typedef struct__10678 P015_section_int_T_TM;

typedef P015_section_array_T_TM array_int_4_32[32];

/* TM::P015_OBU_sectionlist_array_T */
typedef array_int_4_32 P015_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_128[128];

/* TM::P015_sections_array_flat_T */
typedef array_int_128 P015_sections_array_flat_T_TM;

typedef P015_section_int_T_TM array__10691[32];

/* TM::P015_trackide_sectionlist_T */
typedef array__10691 P015_trackide_sectionlist_T_TM;

/* TM::P015_OBU_sectionlist_int_T */
typedef array__10691 P015_OBU_sectionlist_int_T_TM;

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
} struct__10694;

/* TM::P015_trackside_int_T */
typedef struct__10694 P015_trackside_int_T_TM;

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
} struct__10721;

/* TM::P065_trackside_int_T */
typedef struct__10721 P065_trackside_int_T_TM;

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
} struct__10737;

/* TM::P005_section_int_T */
typedef struct__10737 P005_section_int_T_TM;

typedef P005_section_array_T_TM array_int_7_33[33];

/* TM::P005_OBU_sectionlist_array_T */
typedef array_int_7_33 P005_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_231[231];

/* TM::P005_sections_array_flat_T */
typedef array_int_231 P005_sections_array_flat_T_TM;

typedef P005_section_int_T_TM array__10753[33];

/* TM::P005_OBU_sectionlist_int_T */
typedef array__10753 P005_OBU_sectionlist_int_T_TM;

typedef P005_section_int_T_TM array__10756[32];

/* TM::P005_trackide_sectionlist_T */
typedef array__10756 P005_trackide_sectionlist_T_TM;

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
} struct__10759;

/* TM::P005_trackside_int_T */
typedef struct__10759 P005_trackside_int_T_TM;

typedef kcg_int array_int_64[64];

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef struct { kcg_int NC_DIFF; kcg_int V_DIFF; } struct__10779;

/* TM_baseline2::P027V1_section_int_qdiff_T */
typedef struct__10779 P027V1_section_int_qdiff_T_TM_baseline2;

typedef P027V1_section_int_qdiff_T_TM_baseline2 array__10784[32];

/* TM_baseline2::P027V1_trackside_qdifflist_T */
typedef array__10784 P027V1_trackside_qdifflist_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_int_qdiff_T */
typedef array__10784 P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2;

typedef struct {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
} struct__10787;

/* TM_baseline2::P027V1_section_int_T */
typedef struct__10787 P027V1_section_int_T_TM_baseline2;

typedef kcg_int array_int_2[2];

/* TM_baseline2::P027V1_section_array_qdiff_T */
typedef array_int_2 P027V1_section_array_qdiff_T_TM_baseline2;

typedef P027V1_section_array_qdiff_T_TM_baseline2 array_int_2_32[32];

/* TM_baseline2::P027V1_OBU_sectionlist_array_qdiff_T */
typedef array_int_2_32 P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__10801[33];

/* TM_baseline2::P027V1_OBU_sectionlist_int_T */
typedef array__10801 P027V1_OBU_sectionlist_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__10804[32];

/* TM_baseline2::P027V1_trackside_sectionlist_T */
typedef array__10804 P027V1_trackside_sectionlist_T_TM_baseline2;

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
} struct__10807;

/* TM_baseline2::P027V1_trackside_int_T */
typedef struct__10807 P027V1_trackside_int_T_TM_baseline2;

typedef kcg_int array_int_3[3];

/* TM::P021_section_array_T */
typedef array_int_3 P021_section_array_T_TM;

/* TM::P041_section_array_T */
typedef array_int_3 P041_section_array_T_TM;

typedef struct {
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
} struct__10825;

/* TM::P021_section_int_T */
typedef struct__10825 P021_section_int_T_TM;

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

typedef P021_section_int_T_TM array__10837[33];

/* TM::P021_OBU_sectionlist_int_T */
typedef array__10837 P021_OBU_sectionlist_int_T_TM;

typedef P021_section_int_T_TM array__10840[32];

/* TM::P021_trackide_sectionlist_T */
typedef array__10840 P021_trackide_sectionlist_T_TM;

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
} struct__10843;

/* TM::P021_trackside_int_T */
typedef struct__10843 P021_trackside_int_T_TM;

typedef struct {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
} struct__10856;

/* TM::P041_section_int_T */
typedef struct__10856 P041_section_int_T_TM;

typedef P041_section_int_T_TM array__10862[33];

/* TM::P041_OBU_sectionlist_int_T */
typedef array__10862 P041_OBU_sectionlist_int_T_TM;

typedef P041_section_int_T_TM array__10865[32];

/* TM::P041_trackide_sectionlist_T */
typedef array__10865 P041_trackide_sectionlist_T_TM;

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
} struct__10868;

/* TM::P041_trackside_int_T */
typedef struct__10868 P041_trackside_int_T_TM;

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
} struct__10885;

/* TM_baseline2::P003V1_trackside_int_T */
typedef struct__10885 P003V1_trackside_int_T_TM_baseline2;

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
} struct__10914;

/* TM::Radio_TrackTrain_Header_T */
typedef struct__10914 Radio_TrackTrain_Header_T_TM;

typedef struct {
  Radio_TrackTrain_Header_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__10932;

/* TM::CompressedRadioMessage */
typedef struct__10932 CompressedRadioMessage_TM;

typedef struct {
  L_internal_Type_Obu_BasicTypes_Pkg nominal;
  L_internal_Type_Obu_BasicTypes_Pkg d_min;
  L_internal_Type_Obu_BasicTypes_Pkg d_max;
} struct__10937;

/* Obu_BasicTypes_Pkg::LocWithInAcc_T */
typedef struct__10937 LocWithInAcc_T_Obu_BasicTypes_Pkg;

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
} struct__10943;

/* BG_Types_Pkg::LinkedBG_T */
typedef struct__10943 LinkedBG_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_BG nid_bg_fromLinkingBG;
  NID_C nid_c_fromLinkingBG;
  LocWithInAcc_T_Obu_BasicTypes_Pkg expectedLocation;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_link;
  LinkedBG_T_BG_Types_Pkg linkingInfo;
} struct__10957;

/* TrainPosition_Types_Pck::infoFromLinking_T */
typedef struct__10957 infoFromLinking_T_TrainPosition_Types_Pck;

typedef LinkedBG_T_BG_Types_Pkg array__10966[4];

/* BG_Types_Pkg::LinkedBGs_T */
typedef array__10966 LinkedBGs_T_BG_Types_Pkg;

typedef struct {
  V_internal_Type_Obu_BasicTypes_Pkg v_safeNominal;
  V_internal_Type_Obu_BasicTypes_Pkg v_rawNominal;
  V_internal_Type_Obu_BasicTypes_Pkg v_lower;
  V_internal_Type_Obu_BasicTypes_Pkg v_upper;
} struct__10969;

/* Obu_BasicTypes_Pkg::OdometrySpeeds_T */
typedef struct__10969 OdometrySpeeds_T_Obu_BasicTypes_Pkg;

typedef struct {
  L_internal_Type_Obu_BasicTypes_Pkg o_nominal;
  L_internal_Type_Obu_BasicTypes_Pkg o_min;
  L_internal_Type_Obu_BasicTypes_Pkg o_max;
} struct__10976;

/* Obu_BasicTypes_Pkg::OdometryLocations_T */
typedef struct__10976 OdometryLocations_T_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg timestamp;
  OdometryLocations_T_Obu_BasicTypes_Pkg odo;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg speed;
  A_internal_Type_Obu_BasicTypes_Pkg acceleration;
  odoMotionState_T_Obu_BasicTypes_Pkg motionState;
  odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection;
} struct__10982;

/* Obu_BasicTypes_Pkg::odometry_T */
typedef struct__10982 odometry_T_Obu_BasicTypes_Pkg;

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
} struct__10992;

/* BG_Types_Pkg::BG_Header_T */
typedef struct__10992 BG_Header_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  BG_Header_T_BG_Types_Pkg BG_Header;
  LinkedBGs_T_BG_Types_Pkg linkedBGs;
} struct__11010;

/* BG_Types_Pkg::passedBG_T */
typedef struct__11010 passedBG_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINK q_link;
  LocWithInAcc_T_Obu_BasicTypes_Pkg location;
  kcg_int seqNoOnTrack;
  infoFromLinking_T_TrainPosition_Types_Pck infoFromLinking;
  passedBG_T_BG_Types_Pkg infoFromPassing;
} struct__11016;

/* TrainPosition_Types_Pck::positionedBG_T */
typedef struct__11016 positionedBG_T_TrainPosition_Types_Pck;

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
} struct__11027;

/* TrainPosition_Types_Pck::trainPosition_T */
typedef struct__11027 trainPosition_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool valid;
  NID_C nid_c;
  NID_RBC rbc_id;
  kcg_int device_id;
} struct__11044;

/* Common_Types_Pkg::RBC_Id_T */
typedef struct__11044 RBC_Id_T_Common_Types_Pkg;

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
} struct__11051;

/* Common_Types_Pkg::RadioMetadata_T */
typedef struct__11051 RadioMetadata_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg source;
  RadioMetadata_T_Common_Types_Pkg radioMetadata;
  BG_Header_T_BG_Types_Pkg BG_Common_Header;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  CompressedPackets_T_Common_Types_Pkg packets;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} struct__11063;

/* Common_Types_Pkg::ReceivedMessage_T */
typedef struct__11063 ReceivedMessage_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} struct__11073;

/* TM::P021_section_enum_T */
typedef struct__11073 P021_section_enum_T_TM;

typedef P021_section_enum_T_TM array__11080[33];

/* TM::P021_OBU_sectionlist_enum_T */
typedef array__11080 P021_OBU_sectionlist_enum_T_TM;

typedef kcg_int array_int_5[5];

/* TM::Array05 */
typedef array_int_5 Array05_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P021_OBU_sectionlist_enum_T_TM sections;
} struct__11086;

/* TM::P021_OBU_T */
typedef struct__11086 P021_OBU_T_TM;

typedef kcg_int array_int_30[30];

typedef kcg_bool array_bool_30[30];

typedef CompressedPacketData_T_Common_Types_Pkg array_int_500_500[500];

typedef kcg_int array_int_33[33];

typedef P021_sections_array_flat_T_TM array_int_99_33[33];

typedef kcg_bool array_bool_50[50];

typedef kcg_int array_int_50[50];

typedef array__11080 array__11115[33];

typedef Q_SCALE array__11118[33];

typedef GradientProfile_t_TrackAtlasTypes array__11121[50];

typedef GradientProfile_t_TrackAtlasTypes array__11124[33];

typedef array_int_3_33 array_int_3_33_231[231];

typedef kcg_int array_int_396[396];

typedef kcg_int array_int_1[1];

typedef kcg_int array_int_104[104];

typedef P021_section_int_T_TM array__11139[1];

typedef kcg_int array_int_494[494];

typedef kcg_int array_int_6[6];

typedef P027V1_section_int_T_TM_baseline2 array__11148[1];

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

typedef P005_section_int_T_TM array__11181[1];

typedef array_int_3_33 array_int_3_33_99[99];

typedef kcg_int array_int_395[395];

typedef kcg_int array_int_105[105];

typedef P041_section_int_T_TM array__11193[1];

typedef kcg_int array_int_491[491];

typedef kcg_int array_int_9[9];

typedef array_int_4_32 array_int_4_32_128[128];

typedef kcg_int array_int_350[350];

typedef kcg_int array_int_21[21];

typedef kcg_int array_int_150[150];

typedef kcg_int array_int_15[15];

typedef kcg_int array_int_22[22];

#ifndef kcg_copy_struct__10477
#define kcg_copy_struct__10477(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10477)))
#endif /* kcg_copy_struct__10477 */

#ifndef kcg_copy_struct__10484
#define kcg_copy_struct__10484(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10484)))
#endif /* kcg_copy_struct__10484 */

#ifndef kcg_copy_struct__10498
#define kcg_copy_struct__10498(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10498)))
#endif /* kcg_copy_struct__10498 */

#ifndef kcg_copy_struct__10516
#define kcg_copy_struct__10516(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10516)))
#endif /* kcg_copy_struct__10516 */

#ifndef kcg_copy_struct__10527
#define kcg_copy_struct__10527(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10527)))
#endif /* kcg_copy_struct__10527 */

#ifndef kcg_copy_struct__10532
#define kcg_copy_struct__10532(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10532)))
#endif /* kcg_copy_struct__10532 */

#ifndef kcg_copy_struct__10542
#define kcg_copy_struct__10542(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10542)))
#endif /* kcg_copy_struct__10542 */

#ifndef kcg_copy_struct__10560
#define kcg_copy_struct__10560(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10560)))
#endif /* kcg_copy_struct__10560 */

#ifndef kcg_copy_struct__10570
#define kcg_copy_struct__10570(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10570)))
#endif /* kcg_copy_struct__10570 */

#ifndef kcg_copy_struct__10581
#define kcg_copy_struct__10581(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10581)))
#endif /* kcg_copy_struct__10581 */

#ifndef kcg_copy_struct__10595
#define kcg_copy_struct__10595(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10595)))
#endif /* kcg_copy_struct__10595 */

#ifndef kcg_copy_struct__10604
#define kcg_copy_struct__10604(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10604)))
#endif /* kcg_copy_struct__10604 */

#ifndef kcg_copy_struct__10614
#define kcg_copy_struct__10614(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10614)))
#endif /* kcg_copy_struct__10614 */

#ifndef kcg_copy_struct__10625
#define kcg_copy_struct__10625(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10625)))
#endif /* kcg_copy_struct__10625 */

#ifndef kcg_copy_struct__10635
#define kcg_copy_struct__10635(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10635)))
#endif /* kcg_copy_struct__10635 */

#ifndef kcg_copy_struct__10649
#define kcg_copy_struct__10649(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10649)))
#endif /* kcg_copy_struct__10649 */

#ifndef kcg_copy_struct__10659
#define kcg_copy_struct__10659(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10659)))
#endif /* kcg_copy_struct__10659 */

#ifndef kcg_copy_struct__10666
#define kcg_copy_struct__10666(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10666)))
#endif /* kcg_copy_struct__10666 */

#ifndef kcg_copy_struct__10678
#define kcg_copy_struct__10678(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10678)))
#endif /* kcg_copy_struct__10678 */

#ifndef kcg_copy_struct__10694
#define kcg_copy_struct__10694(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10694)))
#endif /* kcg_copy_struct__10694 */

#ifndef kcg_copy_struct__10721
#define kcg_copy_struct__10721(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10721)))
#endif /* kcg_copy_struct__10721 */

#ifndef kcg_copy_struct__10737
#define kcg_copy_struct__10737(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10737)))
#endif /* kcg_copy_struct__10737 */

#ifndef kcg_copy_struct__10759
#define kcg_copy_struct__10759(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10759)))
#endif /* kcg_copy_struct__10759 */

#ifndef kcg_copy_struct__10779
#define kcg_copy_struct__10779(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10779)))
#endif /* kcg_copy_struct__10779 */

#ifndef kcg_copy_struct__10787
#define kcg_copy_struct__10787(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10787)))
#endif /* kcg_copy_struct__10787 */

#ifndef kcg_copy_struct__10807
#define kcg_copy_struct__10807(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10807)))
#endif /* kcg_copy_struct__10807 */

#ifndef kcg_copy_struct__10825
#define kcg_copy_struct__10825(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10825)))
#endif /* kcg_copy_struct__10825 */

#ifndef kcg_copy_struct__10843
#define kcg_copy_struct__10843(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10843)))
#endif /* kcg_copy_struct__10843 */

#ifndef kcg_copy_struct__10856
#define kcg_copy_struct__10856(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10856)))
#endif /* kcg_copy_struct__10856 */

#ifndef kcg_copy_struct__10868
#define kcg_copy_struct__10868(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10868)))
#endif /* kcg_copy_struct__10868 */

#ifndef kcg_copy_struct__10885
#define kcg_copy_struct__10885(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10885)))
#endif /* kcg_copy_struct__10885 */

#ifndef kcg_copy_struct__10914
#define kcg_copy_struct__10914(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10914)))
#endif /* kcg_copy_struct__10914 */

#ifndef kcg_copy_struct__10932
#define kcg_copy_struct__10932(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10932)))
#endif /* kcg_copy_struct__10932 */

#ifndef kcg_copy_struct__10937
#define kcg_copy_struct__10937(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10937)))
#endif /* kcg_copy_struct__10937 */

#ifndef kcg_copy_struct__10943
#define kcg_copy_struct__10943(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10943)))
#endif /* kcg_copy_struct__10943 */

#ifndef kcg_copy_struct__10957
#define kcg_copy_struct__10957(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10957)))
#endif /* kcg_copy_struct__10957 */

#ifndef kcg_copy_struct__10969
#define kcg_copy_struct__10969(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10969)))
#endif /* kcg_copy_struct__10969 */

#ifndef kcg_copy_struct__10976
#define kcg_copy_struct__10976(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10976)))
#endif /* kcg_copy_struct__10976 */

#ifndef kcg_copy_struct__10982
#define kcg_copy_struct__10982(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10982)))
#endif /* kcg_copy_struct__10982 */

#ifndef kcg_copy_struct__10992
#define kcg_copy_struct__10992(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10992)))
#endif /* kcg_copy_struct__10992 */

#ifndef kcg_copy_struct__11010
#define kcg_copy_struct__11010(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11010)))
#endif /* kcg_copy_struct__11010 */

#ifndef kcg_copy_struct__11016
#define kcg_copy_struct__11016(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11016)))
#endif /* kcg_copy_struct__11016 */

#ifndef kcg_copy_struct__11027
#define kcg_copy_struct__11027(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11027)))
#endif /* kcg_copy_struct__11027 */

#ifndef kcg_copy_struct__11044
#define kcg_copy_struct__11044(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11044)))
#endif /* kcg_copy_struct__11044 */

#ifndef kcg_copy_struct__11051
#define kcg_copy_struct__11051(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11051)))
#endif /* kcg_copy_struct__11051 */

#ifndef kcg_copy_struct__11063
#define kcg_copy_struct__11063(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11063)))
#endif /* kcg_copy_struct__11063 */

#ifndef kcg_copy_struct__11073
#define kcg_copy_struct__11073(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11073)))
#endif /* kcg_copy_struct__11073 */

#ifndef kcg_copy_struct__11086
#define kcg_copy_struct__11086(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__11086)))
#endif /* kcg_copy_struct__11086 */

#ifndef kcg_copy_array__10492
#define kcg_copy_array__10492(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10492)))
#endif /* kcg_copy_array__10492 */

#ifndef kcg_copy_array__10495
#define kcg_copy_array__10495(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10495)))
#endif /* kcg_copy_array__10495 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__10524
#define kcg_copy_array__10524(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10524)))
#endif /* kcg_copy_array__10524 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_int_4_32
#define kcg_copy_array_int_4_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4_32)))
#endif /* kcg_copy_array_int_4_32 */

#ifndef kcg_copy_array_int_128
#define kcg_copy_array_int_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128)))
#endif /* kcg_copy_array_int_128 */

#ifndef kcg_copy_array__10691
#define kcg_copy_array__10691(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10691)))
#endif /* kcg_copy_array__10691 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array_int_7_33
#define kcg_copy_array_int_7_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33)))
#endif /* kcg_copy_array_int_7_33 */

#ifndef kcg_copy_array_int_231
#define kcg_copy_array_int_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231)))
#endif /* kcg_copy_array_int_231 */

#ifndef kcg_copy_array__10753
#define kcg_copy_array__10753(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10753)))
#endif /* kcg_copy_array__10753 */

#ifndef kcg_copy_array__10756
#define kcg_copy_array__10756(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10756)))
#endif /* kcg_copy_array__10756 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array__10784
#define kcg_copy_array__10784(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10784)))
#endif /* kcg_copy_array__10784 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array_int_2_32
#define kcg_copy_array_int_2_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32)))
#endif /* kcg_copy_array_int_2_32 */

#ifndef kcg_copy_array__10801
#define kcg_copy_array__10801(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10801)))
#endif /* kcg_copy_array__10801 */

#ifndef kcg_copy_array__10804
#define kcg_copy_array__10804(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10804)))
#endif /* kcg_copy_array__10804 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_int_3_33
#define kcg_copy_array_int_3_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33)))
#endif /* kcg_copy_array_int_3_33 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__10837
#define kcg_copy_array__10837(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10837)))
#endif /* kcg_copy_array__10837 */

#ifndef kcg_copy_array__10840
#define kcg_copy_array__10840(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10840)))
#endif /* kcg_copy_array__10840 */

#ifndef kcg_copy_array__10862
#define kcg_copy_array__10862(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10862)))
#endif /* kcg_copy_array__10862 */

#ifndef kcg_copy_array__10865
#define kcg_copy_array__10865(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10865)))
#endif /* kcg_copy_array__10865 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array__10966
#define kcg_copy_array__10966(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10966)))
#endif /* kcg_copy_array__10966 */

#ifndef kcg_copy_array__11080
#define kcg_copy_array__11080(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11080)))
#endif /* kcg_copy_array__11080 */

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

#ifndef kcg_copy_array_bool_50
#define kcg_copy_array_bool_50(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_50)))
#endif /* kcg_copy_array_bool_50 */

#ifndef kcg_copy_array_int_50
#define kcg_copy_array_int_50(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_50)))
#endif /* kcg_copy_array_int_50 */

#ifndef kcg_copy_array__11115
#define kcg_copy_array__11115(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11115)))
#endif /* kcg_copy_array__11115 */

#ifndef kcg_copy_array__11118
#define kcg_copy_array__11118(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11118)))
#endif /* kcg_copy_array__11118 */

#ifndef kcg_copy_array__11121
#define kcg_copy_array__11121(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11121)))
#endif /* kcg_copy_array__11121 */

#ifndef kcg_copy_array__11124
#define kcg_copy_array__11124(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11124)))
#endif /* kcg_copy_array__11124 */

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

#ifndef kcg_copy_array__11139
#define kcg_copy_array__11139(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11139)))
#endif /* kcg_copy_array__11139 */

#ifndef kcg_copy_array_int_494
#define kcg_copy_array_int_494(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_494)))
#endif /* kcg_copy_array_int_494 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array__11148
#define kcg_copy_array__11148(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11148)))
#endif /* kcg_copy_array__11148 */

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

#ifndef kcg_copy_array__11181
#define kcg_copy_array__11181(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11181)))
#endif /* kcg_copy_array__11181 */

#ifndef kcg_copy_array_int_3_33_99
#define kcg_copy_array_int_3_33_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33_99)))
#endif /* kcg_copy_array_int_3_33_99 */

#ifndef kcg_copy_array_int_395
#define kcg_copy_array_int_395(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_395)))
#endif /* kcg_copy_array_int_395 */

#ifndef kcg_copy_array_int_105
#define kcg_copy_array_int_105(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_105)))
#endif /* kcg_copy_array_int_105 */

#ifndef kcg_copy_array__11193
#define kcg_copy_array__11193(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__11193)))
#endif /* kcg_copy_array__11193 */

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

#ifndef kcg_comp_struct__10477
extern kcg_bool kcg_comp_struct__10477(
  struct__10477 *kcg_c1,
  struct__10477 *kcg_c2);
#endif /* kcg_comp_struct__10477 */

#ifndef kcg_comp_struct__10484
extern kcg_bool kcg_comp_struct__10484(
  struct__10484 *kcg_c1,
  struct__10484 *kcg_c2);
#endif /* kcg_comp_struct__10484 */

#ifndef kcg_comp_struct__10498
extern kcg_bool kcg_comp_struct__10498(
  struct__10498 *kcg_c1,
  struct__10498 *kcg_c2);
#endif /* kcg_comp_struct__10498 */

#ifndef kcg_comp_struct__10516
extern kcg_bool kcg_comp_struct__10516(
  struct__10516 *kcg_c1,
  struct__10516 *kcg_c2);
#endif /* kcg_comp_struct__10516 */

#ifndef kcg_comp_struct__10527
extern kcg_bool kcg_comp_struct__10527(
  struct__10527 *kcg_c1,
  struct__10527 *kcg_c2);
#endif /* kcg_comp_struct__10527 */

#ifndef kcg_comp_struct__10532
extern kcg_bool kcg_comp_struct__10532(
  struct__10532 *kcg_c1,
  struct__10532 *kcg_c2);
#endif /* kcg_comp_struct__10532 */

#ifndef kcg_comp_struct__10542
extern kcg_bool kcg_comp_struct__10542(
  struct__10542 *kcg_c1,
  struct__10542 *kcg_c2);
#endif /* kcg_comp_struct__10542 */

#ifndef kcg_comp_struct__10560
extern kcg_bool kcg_comp_struct__10560(
  struct__10560 *kcg_c1,
  struct__10560 *kcg_c2);
#endif /* kcg_comp_struct__10560 */

#ifndef kcg_comp_struct__10570
extern kcg_bool kcg_comp_struct__10570(
  struct__10570 *kcg_c1,
  struct__10570 *kcg_c2);
#endif /* kcg_comp_struct__10570 */

#ifndef kcg_comp_struct__10581
extern kcg_bool kcg_comp_struct__10581(
  struct__10581 *kcg_c1,
  struct__10581 *kcg_c2);
#endif /* kcg_comp_struct__10581 */

#ifndef kcg_comp_struct__10595
extern kcg_bool kcg_comp_struct__10595(
  struct__10595 *kcg_c1,
  struct__10595 *kcg_c2);
#endif /* kcg_comp_struct__10595 */

#ifndef kcg_comp_struct__10604
extern kcg_bool kcg_comp_struct__10604(
  struct__10604 *kcg_c1,
  struct__10604 *kcg_c2);
#endif /* kcg_comp_struct__10604 */

#ifndef kcg_comp_struct__10614
extern kcg_bool kcg_comp_struct__10614(
  struct__10614 *kcg_c1,
  struct__10614 *kcg_c2);
#endif /* kcg_comp_struct__10614 */

#ifndef kcg_comp_struct__10625
extern kcg_bool kcg_comp_struct__10625(
  struct__10625 *kcg_c1,
  struct__10625 *kcg_c2);
#endif /* kcg_comp_struct__10625 */

#ifndef kcg_comp_struct__10635
extern kcg_bool kcg_comp_struct__10635(
  struct__10635 *kcg_c1,
  struct__10635 *kcg_c2);
#endif /* kcg_comp_struct__10635 */

#ifndef kcg_comp_struct__10649
extern kcg_bool kcg_comp_struct__10649(
  struct__10649 *kcg_c1,
  struct__10649 *kcg_c2);
#endif /* kcg_comp_struct__10649 */

#ifndef kcg_comp_struct__10659
extern kcg_bool kcg_comp_struct__10659(
  struct__10659 *kcg_c1,
  struct__10659 *kcg_c2);
#endif /* kcg_comp_struct__10659 */

#ifndef kcg_comp_struct__10666
extern kcg_bool kcg_comp_struct__10666(
  struct__10666 *kcg_c1,
  struct__10666 *kcg_c2);
#endif /* kcg_comp_struct__10666 */

#ifndef kcg_comp_struct__10678
extern kcg_bool kcg_comp_struct__10678(
  struct__10678 *kcg_c1,
  struct__10678 *kcg_c2);
#endif /* kcg_comp_struct__10678 */

#ifndef kcg_comp_struct__10694
extern kcg_bool kcg_comp_struct__10694(
  struct__10694 *kcg_c1,
  struct__10694 *kcg_c2);
#endif /* kcg_comp_struct__10694 */

#ifndef kcg_comp_struct__10721
extern kcg_bool kcg_comp_struct__10721(
  struct__10721 *kcg_c1,
  struct__10721 *kcg_c2);
#endif /* kcg_comp_struct__10721 */

#ifndef kcg_comp_struct__10737
extern kcg_bool kcg_comp_struct__10737(
  struct__10737 *kcg_c1,
  struct__10737 *kcg_c2);
#endif /* kcg_comp_struct__10737 */

#ifndef kcg_comp_struct__10759
extern kcg_bool kcg_comp_struct__10759(
  struct__10759 *kcg_c1,
  struct__10759 *kcg_c2);
#endif /* kcg_comp_struct__10759 */

#ifndef kcg_comp_struct__10779
extern kcg_bool kcg_comp_struct__10779(
  struct__10779 *kcg_c1,
  struct__10779 *kcg_c2);
#endif /* kcg_comp_struct__10779 */

#ifndef kcg_comp_struct__10787
extern kcg_bool kcg_comp_struct__10787(
  struct__10787 *kcg_c1,
  struct__10787 *kcg_c2);
#endif /* kcg_comp_struct__10787 */

#ifndef kcg_comp_struct__10807
extern kcg_bool kcg_comp_struct__10807(
  struct__10807 *kcg_c1,
  struct__10807 *kcg_c2);
#endif /* kcg_comp_struct__10807 */

#ifndef kcg_comp_struct__10825
extern kcg_bool kcg_comp_struct__10825(
  struct__10825 *kcg_c1,
  struct__10825 *kcg_c2);
#endif /* kcg_comp_struct__10825 */

#ifndef kcg_comp_struct__10843
extern kcg_bool kcg_comp_struct__10843(
  struct__10843 *kcg_c1,
  struct__10843 *kcg_c2);
#endif /* kcg_comp_struct__10843 */

#ifndef kcg_comp_struct__10856
extern kcg_bool kcg_comp_struct__10856(
  struct__10856 *kcg_c1,
  struct__10856 *kcg_c2);
#endif /* kcg_comp_struct__10856 */

#ifndef kcg_comp_struct__10868
extern kcg_bool kcg_comp_struct__10868(
  struct__10868 *kcg_c1,
  struct__10868 *kcg_c2);
#endif /* kcg_comp_struct__10868 */

#ifndef kcg_comp_struct__10885
extern kcg_bool kcg_comp_struct__10885(
  struct__10885 *kcg_c1,
  struct__10885 *kcg_c2);
#endif /* kcg_comp_struct__10885 */

#ifndef kcg_comp_struct__10914
extern kcg_bool kcg_comp_struct__10914(
  struct__10914 *kcg_c1,
  struct__10914 *kcg_c2);
#endif /* kcg_comp_struct__10914 */

#ifndef kcg_comp_struct__10932
extern kcg_bool kcg_comp_struct__10932(
  struct__10932 *kcg_c1,
  struct__10932 *kcg_c2);
#endif /* kcg_comp_struct__10932 */

#ifndef kcg_comp_struct__10937
extern kcg_bool kcg_comp_struct__10937(
  struct__10937 *kcg_c1,
  struct__10937 *kcg_c2);
#endif /* kcg_comp_struct__10937 */

#ifndef kcg_comp_struct__10943
extern kcg_bool kcg_comp_struct__10943(
  struct__10943 *kcg_c1,
  struct__10943 *kcg_c2);
#endif /* kcg_comp_struct__10943 */

#ifndef kcg_comp_struct__10957
extern kcg_bool kcg_comp_struct__10957(
  struct__10957 *kcg_c1,
  struct__10957 *kcg_c2);
#endif /* kcg_comp_struct__10957 */

#ifndef kcg_comp_struct__10969
extern kcg_bool kcg_comp_struct__10969(
  struct__10969 *kcg_c1,
  struct__10969 *kcg_c2);
#endif /* kcg_comp_struct__10969 */

#ifndef kcg_comp_struct__10976
extern kcg_bool kcg_comp_struct__10976(
  struct__10976 *kcg_c1,
  struct__10976 *kcg_c2);
#endif /* kcg_comp_struct__10976 */

#ifndef kcg_comp_struct__10982
extern kcg_bool kcg_comp_struct__10982(
  struct__10982 *kcg_c1,
  struct__10982 *kcg_c2);
#endif /* kcg_comp_struct__10982 */

#ifndef kcg_comp_struct__10992
extern kcg_bool kcg_comp_struct__10992(
  struct__10992 *kcg_c1,
  struct__10992 *kcg_c2);
#endif /* kcg_comp_struct__10992 */

#ifndef kcg_comp_struct__11010
extern kcg_bool kcg_comp_struct__11010(
  struct__11010 *kcg_c1,
  struct__11010 *kcg_c2);
#endif /* kcg_comp_struct__11010 */

#ifndef kcg_comp_struct__11016
extern kcg_bool kcg_comp_struct__11016(
  struct__11016 *kcg_c1,
  struct__11016 *kcg_c2);
#endif /* kcg_comp_struct__11016 */

#ifndef kcg_comp_struct__11027
extern kcg_bool kcg_comp_struct__11027(
  struct__11027 *kcg_c1,
  struct__11027 *kcg_c2);
#endif /* kcg_comp_struct__11027 */

#ifndef kcg_comp_struct__11044
extern kcg_bool kcg_comp_struct__11044(
  struct__11044 *kcg_c1,
  struct__11044 *kcg_c2);
#endif /* kcg_comp_struct__11044 */

#ifndef kcg_comp_struct__11051
extern kcg_bool kcg_comp_struct__11051(
  struct__11051 *kcg_c1,
  struct__11051 *kcg_c2);
#endif /* kcg_comp_struct__11051 */

#ifndef kcg_comp_struct__11063
extern kcg_bool kcg_comp_struct__11063(
  struct__11063 *kcg_c1,
  struct__11063 *kcg_c2);
#endif /* kcg_comp_struct__11063 */

#ifndef kcg_comp_struct__11073
extern kcg_bool kcg_comp_struct__11073(
  struct__11073 *kcg_c1,
  struct__11073 *kcg_c2);
#endif /* kcg_comp_struct__11073 */

#ifndef kcg_comp_struct__11086
extern kcg_bool kcg_comp_struct__11086(
  struct__11086 *kcg_c1,
  struct__11086 *kcg_c2);
#endif /* kcg_comp_struct__11086 */

#ifndef kcg_comp_array__10492
extern kcg_bool kcg_comp_array__10492(
  array__10492 *kcg_c1,
  array__10492 *kcg_c2);
#endif /* kcg_comp_array__10492 */

#ifndef kcg_comp_array__10495
extern kcg_bool kcg_comp_array__10495(
  array__10495 *kcg_c1,
  array__10495 *kcg_c2);
#endif /* kcg_comp_array__10495 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__10524
extern kcg_bool kcg_comp_array__10524(
  array__10524 *kcg_c1,
  array__10524 *kcg_c2);
#endif /* kcg_comp_array__10524 */

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

#ifndef kcg_comp_array__10691
extern kcg_bool kcg_comp_array__10691(
  array__10691 *kcg_c1,
  array__10691 *kcg_c2);
#endif /* kcg_comp_array__10691 */

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

#ifndef kcg_comp_array__10753
extern kcg_bool kcg_comp_array__10753(
  array__10753 *kcg_c1,
  array__10753 *kcg_c2);
#endif /* kcg_comp_array__10753 */

#ifndef kcg_comp_array__10756
extern kcg_bool kcg_comp_array__10756(
  array__10756 *kcg_c1,
  array__10756 *kcg_c2);
#endif /* kcg_comp_array__10756 */

#ifndef kcg_comp_array_int_64
extern kcg_bool kcg_comp_array_int_64(
  array_int_64 *kcg_c1,
  array_int_64 *kcg_c2);
#endif /* kcg_comp_array_int_64 */

#ifndef kcg_comp_array__10784
extern kcg_bool kcg_comp_array__10784(
  array__10784 *kcg_c1,
  array__10784 *kcg_c2);
#endif /* kcg_comp_array__10784 */

#ifndef kcg_comp_array_int_2
extern kcg_bool kcg_comp_array_int_2(array_int_2 *kcg_c1, array_int_2 *kcg_c2);
#endif /* kcg_comp_array_int_2 */

#ifndef kcg_comp_array_int_2_32
extern kcg_bool kcg_comp_array_int_2_32(
  array_int_2_32 *kcg_c1,
  array_int_2_32 *kcg_c2);
#endif /* kcg_comp_array_int_2_32 */

#ifndef kcg_comp_array__10801
extern kcg_bool kcg_comp_array__10801(
  array__10801 *kcg_c1,
  array__10801 *kcg_c2);
#endif /* kcg_comp_array__10801 */

#ifndef kcg_comp_array__10804
extern kcg_bool kcg_comp_array__10804(
  array__10804 *kcg_c1,
  array__10804 *kcg_c2);
#endif /* kcg_comp_array__10804 */

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

#ifndef kcg_comp_array__10837
extern kcg_bool kcg_comp_array__10837(
  array__10837 *kcg_c1,
  array__10837 *kcg_c2);
#endif /* kcg_comp_array__10837 */

#ifndef kcg_comp_array__10840
extern kcg_bool kcg_comp_array__10840(
  array__10840 *kcg_c1,
  array__10840 *kcg_c2);
#endif /* kcg_comp_array__10840 */

#ifndef kcg_comp_array__10862
extern kcg_bool kcg_comp_array__10862(
  array__10862 *kcg_c1,
  array__10862 *kcg_c2);
#endif /* kcg_comp_array__10862 */

#ifndef kcg_comp_array__10865
extern kcg_bool kcg_comp_array__10865(
  array__10865 *kcg_c1,
  array__10865 *kcg_c2);
#endif /* kcg_comp_array__10865 */

#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */

#ifndef kcg_comp_array__10966
extern kcg_bool kcg_comp_array__10966(
  array__10966 *kcg_c1,
  array__10966 *kcg_c2);
#endif /* kcg_comp_array__10966 */

#ifndef kcg_comp_array__11080
extern kcg_bool kcg_comp_array__11080(
  array__11080 *kcg_c1,
  array__11080 *kcg_c2);
#endif /* kcg_comp_array__11080 */

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

#ifndef kcg_comp_array__11115
extern kcg_bool kcg_comp_array__11115(
  array__11115 *kcg_c1,
  array__11115 *kcg_c2);
#endif /* kcg_comp_array__11115 */

#ifndef kcg_comp_array__11118
extern kcg_bool kcg_comp_array__11118(
  array__11118 *kcg_c1,
  array__11118 *kcg_c2);
#endif /* kcg_comp_array__11118 */

#ifndef kcg_comp_array__11121
extern kcg_bool kcg_comp_array__11121(
  array__11121 *kcg_c1,
  array__11121 *kcg_c2);
#endif /* kcg_comp_array__11121 */

#ifndef kcg_comp_array__11124
extern kcg_bool kcg_comp_array__11124(
  array__11124 *kcg_c1,
  array__11124 *kcg_c2);
#endif /* kcg_comp_array__11124 */

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

#ifndef kcg_comp_array__11139
extern kcg_bool kcg_comp_array__11139(
  array__11139 *kcg_c1,
  array__11139 *kcg_c2);
#endif /* kcg_comp_array__11139 */

#ifndef kcg_comp_array_int_494
extern kcg_bool kcg_comp_array_int_494(
  array_int_494 *kcg_c1,
  array_int_494 *kcg_c2);
#endif /* kcg_comp_array_int_494 */

#ifndef kcg_comp_array_int_6
extern kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2);
#endif /* kcg_comp_array_int_6 */

#ifndef kcg_comp_array__11148
extern kcg_bool kcg_comp_array__11148(
  array__11148 *kcg_c1,
  array__11148 *kcg_c2);
#endif /* kcg_comp_array__11148 */

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

#ifndef kcg_comp_array__11181
extern kcg_bool kcg_comp_array__11181(
  array__11181 *kcg_c1,
  array__11181 *kcg_c2);
#endif /* kcg_comp_array__11181 */

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

#ifndef kcg_comp_array__11193
extern kcg_bool kcg_comp_array__11193(
  array__11193 *kcg_c1,
  array__11193 *kcg_c2);
#endif /* kcg_comp_array__11193 */

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

#define kcg_comp_M_040_T_TM_radio_messages kcg_comp_struct__10595

#define kcg_copy_M_040_T_TM_radio_messages kcg_copy_struct__10595

#define kcg_comp_M_041_T_TM_radio_messages kcg_comp_struct__10595

#define kcg_copy_M_041_T_TM_radio_messages kcg_copy_struct__10595

#define kcg_comp_M_043_T_TM_radio_messages kcg_comp_struct__10595

#define kcg_copy_M_043_T_TM_radio_messages kcg_copy_struct__10595

#define kcg_comp_M_045_T_TM_radio_messages kcg_comp_struct__10604

#define kcg_copy_M_045_T_TM_radio_messages kcg_copy_struct__10604

#define kcg_comp_M_002_T_TM_radio_messages kcg_comp_struct__10614

#define kcg_copy_M_002_T_TM_radio_messages kcg_copy_struct__10614

#define kcg_comp_M_003_T_TM_radio_messages kcg_comp_struct__10595

#define kcg_copy_M_003_T_TM_radio_messages kcg_copy_struct__10595

#define kcg_comp_M_006_T_TM_radio_messages kcg_comp_struct__10595

#define kcg_copy_M_006_T_TM_radio_messages kcg_copy_struct__10595

#define kcg_comp_M_008_T_TM_radio_messages kcg_comp_struct__10625

#define kcg_copy_M_008_T_TM_radio_messages kcg_copy_struct__10625

#define kcg_comp_M_009_T_TM_radio_messages kcg_comp_struct__10595

#define kcg_copy_M_009_T_TM_radio_messages kcg_copy_struct__10595

#define kcg_comp_M_015_T_TM_radio_messages kcg_comp_struct__10635

#define kcg_copy_M_015_T_TM_radio_messages kcg_copy_struct__10635

#define kcg_comp_M_016_T_TM_radio_messages kcg_comp_struct__10649

#define kcg_copy_M_016_T_TM_radio_messages kcg_copy_struct__10649

#define kcg_comp_M_018_T_TM_radio_messages kcg_comp_struct__10649

#define kcg_copy_M_018_T_TM_radio_messages kcg_copy_struct__10649

#define kcg_comp_M_024_T_TM_radio_messages kcg_comp_struct__10595

#define kcg_copy_M_024_T_TM_radio_messages kcg_copy_struct__10595

#define kcg_comp_M_027_T_TM_radio_messages kcg_comp_struct__10532

#define kcg_copy_M_027_T_TM_radio_messages kcg_copy_struct__10532

#define kcg_comp_M_TrackTrain_Radio_T_TM_radio_messages kcg_comp_struct__10498

#define kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages kcg_copy_struct__10498

#define kcg_comp_M_003_int_T_TM_radio_messages kcg_comp_struct__10666

#define kcg_copy_M_003_int_T_TM_radio_messages kcg_copy_struct__10666

#define kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P003V1_trackside_int_T_TM_baseline2 kcg_comp_struct__10885

#define kcg_copy_P003V1_trackside_int_T_TM_baseline2 kcg_copy_struct__10885

#define kcg_comp_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_comp_array__10784

#define kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_copy_array__10784

#define kcg_comp_P027V1_section_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2

#define kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2

#define kcg_comp_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2_32

#define kcg_copy_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2_32

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array__10801

#define kcg_copy_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array__10801

#define kcg_comp_P027V1_section_int_T_TM_baseline2 kcg_comp_struct__10787

#define kcg_copy_P027V1_section_int_T_TM_baseline2 kcg_copy_struct__10787

#define kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_comp_array__10804

#define kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_copy_array__10804

#define kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2 kcg_comp_struct__10779

#define kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2 kcg_copy_struct__10779

#define kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_comp_array__10784

#define kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_copy_array__10784

#define kcg_comp_P027V1_trackside_int_T_TM_baseline2 kcg_comp_struct__10807

#define kcg_copy_P027V1_trackside_int_T_TM_baseline2 kcg_copy_struct__10807

#define kcg_comp_infoFromLinking_T_TrainPosition_Types_Pck kcg_comp_struct__10957

#define kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck kcg_copy_struct__10957

#define kcg_comp_positionedBG_T_TrainPosition_Types_Pck kcg_comp_struct__11016

#define kcg_copy_positionedBG_T_TrainPosition_Types_Pck kcg_copy_struct__11016

#define kcg_comp_trainPosition_T_TrainPosition_Types_Pck kcg_comp_struct__11027

#define kcg_copy_trainPosition_T_TrainPosition_Types_Pck kcg_copy_struct__11027

#define kcg_comp_GradientProfile_for_DMI_t_TrackAtlasTypes kcg_comp_array__10492

#define kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes kcg_copy_array__10492

#define kcg_comp_GradientProfile_for_DMI_section_t_TrackAtlasTypes kcg_comp_struct__10477

#define kcg_copy_GradientProfile_for_DMI_section_t_TrackAtlasTypes kcg_copy_struct__10477

#define kcg_comp_Gradient_section_t_TrackAtlasTypes kcg_comp_struct__10484

#define kcg_copy_Gradient_section_t_TrackAtlasTypes kcg_copy_struct__10484

#define kcg_comp_GradientProfile_t_TrackAtlasTypes kcg_comp_array__10495

#define kcg_copy_GradientProfile_t_TrackAtlasTypes kcg_copy_array__10495

#define kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_comp_struct__10542

#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_copy_struct__10542

#define kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_comp_struct__10937

#define kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_copy_struct__10937

#define kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg kcg_comp_struct__10969

#define kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg kcg_copy_struct__10969

#define kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg kcg_comp_struct__10976

#define kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg kcg_copy_struct__10976

#define kcg_comp_odometry_T_Obu_BasicTypes_Pkg kcg_comp_struct__10982

#define kcg_copy_odometry_T_Obu_BasicTypes_Pkg kcg_copy_struct__10982

#define kcg_comp_LinkedBGs_T_BG_Types_Pkg kcg_comp_array__10966

#define kcg_copy_LinkedBGs_T_BG_Types_Pkg kcg_copy_array__10966

#define kcg_comp_passedBG_T_BG_Types_Pkg kcg_comp_struct__11010

#define kcg_copy_passedBG_T_BG_Types_Pkg kcg_copy_struct__11010

#define kcg_comp_LinkedBG_T_BG_Types_Pkg kcg_comp_struct__10943

#define kcg_copy_LinkedBG_T_BG_Types_Pkg kcg_copy_struct__10943

#define kcg_comp_BG_Header_T_BG_Types_Pkg kcg_comp_struct__10992

#define kcg_copy_BG_Header_T_BG_Types_Pkg kcg_copy_struct__10992

#define kcg_comp_RBC_Id_T_Common_Types_Pkg kcg_comp_struct__11044

#define kcg_copy_RBC_Id_T_Common_Types_Pkg kcg_copy_struct__11044

#define kcg_comp_RadioMetadata_T_Common_Types_Pkg kcg_comp_struct__11051

#define kcg_copy_RadioMetadata_T_Common_Types_Pkg kcg_copy_struct__11051

#define kcg_comp_ReceivedMessage_T_Common_Types_Pkg kcg_comp_struct__11063

#define kcg_copy_ReceivedMessage_T_Common_Types_Pkg kcg_copy_struct__11063

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__10527

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__10527

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__10524

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__10524

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__10516

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__10516

#define kcg_comp_CompressedRadioMessage_TM kcg_comp_struct__10932

#define kcg_copy_CompressedRadioMessage_TM kcg_copy_struct__10932

#define kcg_comp_Radio_TrackTrain_Header_T_TM kcg_comp_struct__10914

#define kcg_copy_Radio_TrackTrain_Header_T_TM kcg_copy_struct__10914

#define kcg_comp_P015_OBU_sectionlist_int_T_TM kcg_comp_array__10691

#define kcg_copy_P015_OBU_sectionlist_int_T_TM kcg_copy_array__10691

#define kcg_comp_P015_section_array_T_TM kcg_comp_array_int_4

#define kcg_copy_P015_section_array_T_TM kcg_copy_array_int_4

#define kcg_comp_P015_OBU_sectionlist_array_T_TM kcg_comp_array_int_4_32

#define kcg_copy_P015_OBU_sectionlist_array_T_TM kcg_copy_array_int_4_32

#define kcg_comp_P015_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P015_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_P015_section_int_T_TM kcg_comp_struct__10678

#define kcg_copy_P015_section_int_T_TM kcg_copy_struct__10678

#define kcg_comp_P015_trackide_sectionlist_T_TM kcg_comp_array__10691

#define kcg_copy_P015_trackide_sectionlist_T_TM kcg_copy_array__10691

#define kcg_comp_P015_trackside_int_T_TM kcg_comp_struct__10694

#define kcg_copy_P015_trackside_int_T_TM kcg_copy_struct__10694

#define kcg_comp_P065_trackside_int_T_TM kcg_comp_struct__10721

#define kcg_copy_P065_trackside_int_T_TM kcg_copy_struct__10721

#define kcg_comp_P041_OBU_sectionlist_int_T_TM kcg_comp_array__10862

#define kcg_copy_P041_OBU_sectionlist_int_T_TM kcg_copy_array__10862

#define kcg_comp_P041_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P041_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P041_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P041_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P041_section_int_T_TM kcg_comp_struct__10856

#define kcg_copy_P041_section_int_T_TM kcg_copy_struct__10856

#define kcg_comp_P041_trackide_sectionlist_T_TM kcg_comp_array__10865

#define kcg_copy_P041_trackide_sectionlist_T_TM kcg_copy_array__10865

#define kcg_comp_P041_trackside_int_T_TM kcg_comp_struct__10868

#define kcg_copy_P041_trackside_int_T_TM kcg_copy_struct__10868

#define kcg_comp_P005_OBU_sectionlist_int_T_TM kcg_comp_array__10753

#define kcg_copy_P005_OBU_sectionlist_int_T_TM kcg_copy_array__10753

#define kcg_comp_P005_section_array_T_TM kcg_comp_array_int_7

#define kcg_copy_P005_section_array_T_TM kcg_copy_array_int_7

#define kcg_comp_P005_OBU_sectionlist_array_T_TM kcg_comp_array_int_7_33

#define kcg_copy_P005_OBU_sectionlist_array_T_TM kcg_copy_array_int_7_33

#define kcg_comp_P005_sections_array_flat_T_TM kcg_comp_array_int_231

#define kcg_copy_P005_sections_array_flat_T_TM kcg_copy_array_int_231

#define kcg_comp_P005_section_int_T_TM kcg_comp_struct__10737

#define kcg_copy_P005_section_int_T_TM kcg_copy_struct__10737

#define kcg_comp_P005_trackide_sectionlist_T_TM kcg_comp_array__10756

#define kcg_copy_P005_trackide_sectionlist_T_TM kcg_copy_array__10756

#define kcg_comp_P005_trackside_int_T_TM kcg_comp_struct__10759

#define kcg_copy_P005_trackside_int_T_TM kcg_copy_struct__10759

#define kcg_comp_P021_OBU_sectionlist_int_T_TM kcg_comp_array__10837

#define kcg_copy_P021_OBU_sectionlist_int_T_TM kcg_copy_array__10837

#define kcg_comp_P021_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P021_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P021_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P021_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P021_section_int_T_TM kcg_comp_struct__10825

#define kcg_copy_P021_section_int_T_TM kcg_copy_struct__10825

#define kcg_comp_P021_trackide_sectionlist_T_TM kcg_comp_array__10840

#define kcg_copy_P021_trackide_sectionlist_T_TM kcg_copy_array__10840

#define kcg_comp_P021_trackside_int_T_TM kcg_comp_struct__10843

#define kcg_copy_P021_trackside_int_T_TM kcg_copy_struct__10843

#define kcg_comp_Array05_TM kcg_comp_array_int_5

#define kcg_copy_Array05_TM kcg_copy_array_int_5

#define kcg_comp_P021_OBU_T_TM kcg_comp_struct__11086

#define kcg_copy_P021_OBU_T_TM kcg_copy_struct__11086

#define kcg_comp_P021_OBU_sectionlist_enum_T_TM kcg_comp_array__11080

#define kcg_copy_P021_OBU_sectionlist_enum_T_TM kcg_copy_array__11080

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P021_section_enum_T_TM kcg_comp_struct__11073

#define kcg_copy_P021_section_enum_T_TM kcg_copy_struct__11073

#define kcg_comp_R_data_internal_T_InfraLib kcg_comp_struct__10659

#define kcg_copy_R_data_internal_T_InfraLib kcg_copy_struct__10659

#define kcg_comp_M_028_T_TM_radio_messages kcg_comp_struct__10532

#define kcg_copy_M_028_T_TM_radio_messages kcg_copy_struct__10532

#define kcg_comp_M_032_T_TM_radio_messages kcg_comp_struct__10560

#define kcg_copy_M_032_T_TM_radio_messages kcg_copy_struct__10560

#define kcg_comp_M_033_T_TM_radio_messages kcg_comp_struct__10570

#define kcg_copy_M_033_T_TM_radio_messages kcg_copy_struct__10570

#define kcg_comp_M_034_T_TM_radio_messages kcg_comp_struct__10581

#define kcg_copy_M_034_T_TM_radio_messages kcg_copy_struct__10581

#define kcg_comp_M_038_T_TM_radio_messages kcg_comp_struct__10595

#define kcg_copy_M_038_T_TM_radio_messages kcg_copy_struct__10595

#define kcg_comp_M_039_T_TM_radio_messages kcg_comp_struct__10595

#define kcg_copy_M_039_T_TM_radio_messages kcg_copy_struct__10595

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-09-02T17:34:33
*************************************************************$ */


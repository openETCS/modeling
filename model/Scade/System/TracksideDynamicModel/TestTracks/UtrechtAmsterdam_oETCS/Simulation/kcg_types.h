/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-03T12:45:00
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

/* Q_DIR */
typedef enum {
  Q_DIR_Reverse = 0,
  Q_DIR_Nominal = 1,
  Q_DIR_Both_directions = 2
} Q_DIR;
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
/* T_TRAIN */
typedef kcg_real T_TRAIN;

/* NID_PACKET */
typedef kcg_int NID_PACKET;

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
} struct__6048;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct__6048 Radio_TrackTrain_Header_T_Radio_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
} struct__6066;

/* TM_radio_messages::M_024_T */
typedef struct__6066 M_024_T_TM_radio_messages;

/* TM_radio_messages::M_003_T */
typedef struct__6066 M_003_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_received;
} struct__6075;

/* TM_radio_messages::M_008_T */
typedef struct__6075 M_008_T_TM_radio_messages;

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
} struct__6085;

/* TM_radio_messages::M_015_T */
typedef struct__6085 M_015_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  M_VERSION m_version;
} struct__6099;

/* TM_radio_messages::M_032_T */
typedef struct__6099 M_032_T_TM_radio_messages;

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
} struct__6109;

/* TM_radio_messages::M_TrackTrain_Radio_T */
typedef struct__6109 M_TrackTrain_Radio_T_TM_radio_messages;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__6127;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__6127 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__6135[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__6135 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__6138;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__6138 CompressedPackets_T_Common_Types_Pkg;

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
} struct__6143;

/* TM::Radio_TrackTrain_Header_T */
typedef struct__6143 _3_Radio_TrackTrain_Header_T_TM;

typedef struct {
  _3_Radio_TrackTrain_Header_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__6161;

/* TM::CompressedRadioMessage */
typedef struct__6161 CompressedRadioMessage_TM;

typedef struct {
  M_TrackTrain_Radio_T_TM_radio_messages message;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int trigger;
  kcg_bool message_sent;
} struct__6166;

/* InfraLib::R_data_internal_T */
typedef struct__6166 R_data_internal_T_InfraLib;

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
} struct__6173;

/* TM_radio_messages::M_015_int_T */
typedef struct__6173 M_015_int_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
} struct__6187;

/* TM_radio_messages::M_003_int_T */
typedef struct__6187 M_003_int_T_TM_radio_messages;

typedef kcg_int array_int_4[4];

/* TM::P015_section_array_T */
typedef array_int_4 P015_section_array_T_TM;

typedef struct {
  kcg_int L_SECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
} struct__6199;

/* TM::P015_section_int_T */
typedef struct__6199 P015_section_int_T_TM;

typedef P015_section_array_T_TM array_int_4_32[32];

/* TM::P015_OBU_sectionlist_array_T */
typedef array_int_4_32 P015_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_128[128];

/* TM::P015_sections_array_flat_T */
typedef array_int_128 P015_sections_array_flat_T_TM;

typedef P015_section_int_T_TM array__6212[32];

/* TM::P015_trackide_sectionlist_T */
typedef array__6212 P015_trackide_sectionlist_T_TM;

/* TM::P015_OBU_sectionlist_int_T */
typedef array__6212 P015_OBU_sectionlist_int_T_TM;

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
} struct__6215;

/* TM::P015_trackside_int_T */
typedef struct__6215 P015_trackside_int_T_TM;

typedef struct { kcg_bool valid; kcg_int NID_PACKET; } struct__6241;

/* TM::P255_trackside_int_T */
typedef struct__6241 P255_trackside_int_T_TM;

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
} struct__6246;

/* TM::P065_trackside_int_T */
typedef struct__6246 P065_trackside_int_T_TM;

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
} struct__6262;

/* TM::P005_section_int_T */
typedef struct__6262 P005_section_int_T_TM;

typedef P005_section_array_T_TM array_int_7_33[33];

/* TM::P005_OBU_sectionlist_array_T */
typedef array_int_7_33 P005_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_231[231];

/* TM::P005_sections_array_flat_T */
typedef array_int_231 P005_sections_array_flat_T_TM;

typedef P005_section_int_T_TM array__6278[33];

/* TM::P005_OBU_sectionlist_int_T */
typedef array__6278 P005_OBU_sectionlist_int_T_TM;

typedef P005_section_int_T_TM array__6281[32];

/* TM::P005_trackide_sectionlist_T */
typedef array__6281 P005_trackide_sectionlist_T_TM;

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
} struct__6284;

/* TM::P005_trackside_int_T */
typedef struct__6284 P005_trackside_int_T_TM;

typedef kcg_int array_int_64[64];

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef struct { kcg_int NC_DIFF; kcg_int V_DIFF; } struct__6304;

/* TM_baseline2::P027V1_section_int_qdiff_T */
typedef struct__6304 P027V1_section_int_qdiff_T_TM_baseline2;

typedef P027V1_section_int_qdiff_T_TM_baseline2 array__6309[32];

/* TM_baseline2::P027V1_trackside_qdifflist_T */
typedef array__6309 P027V1_trackside_qdifflist_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_int_qdiff_T */
typedef array__6309 P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2;

typedef struct {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
} struct__6312;

/* TM_baseline2::P027V1_section_int_T */
typedef struct__6312 P027V1_section_int_T_TM_baseline2;

typedef kcg_int array_int_2[2];

/* TM_baseline2::P027V1_section_array_qdiff_T */
typedef array_int_2 P027V1_section_array_qdiff_T_TM_baseline2;

typedef P027V1_section_array_qdiff_T_TM_baseline2 array_int_2_32[32];

/* TM_baseline2::P027V1_OBU_sectionlist_array_qdiff_T */
typedef array_int_2_32 _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__6326[33];

/* TM_baseline2::P027V1_OBU_sectionlist_int_T */
typedef array__6326 _2_P027V1_OBU_sectionlist_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__6329[32];

/* TM_baseline2::P027V1_trackside_sectionlist_T */
typedef array__6329 P027V1_trackside_sectionlist_T_TM_baseline2;

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
} struct__6332;

/* TM_baseline2::P027V1_trackside_int_T */
typedef struct__6332 P027V1_trackside_int_T_TM_baseline2;

typedef kcg_int array_int_3[3];

/* TM::P021_section_array_T */
typedef array_int_3 P021_section_array_T_TM;

/* TM::P041_section_array_T */
typedef array_int_3 P041_section_array_T_TM;

typedef struct {
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
} struct__6350;

/* TM::P021_section_int_T */
typedef struct__6350 P021_section_int_T_TM;

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

typedef P021_section_int_T_TM array__6362[33];

/* TM::P021_OBU_sectionlist_int_T */
typedef array__6362 P021_OBU_sectionlist_int_T_TM;

typedef P021_section_int_T_TM array__6365[32];

/* TM::P021_trackide_sectionlist_T */
typedef array__6365 P021_trackide_sectionlist_T_TM;

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
} struct__6368;

/* TM::P021_trackside_int_T */
typedef struct__6368 P021_trackside_int_T_TM;

typedef struct {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
} struct__6381;

/* TM::P041_section_int_T */
typedef struct__6381 P041_section_int_T_TM;

typedef P041_section_int_T_TM array__6387[33];

/* TM::P041_OBU_sectionlist_int_T */
typedef array__6387 P041_OBU_sectionlist_int_T_TM;

typedef P041_section_int_T_TM array__6390[32];

/* TM::P041_trackide_sectionlist_T */
typedef array__6390 P041_trackide_sectionlist_T_TM;

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
} struct__6393;

/* TM::P041_trackside_int_T */
typedef struct__6393 P041_trackside_int_T_TM;

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
} struct__6410;

/* TM_baseline2::P003V1_trackside_int_T */
typedef struct__6410 P003V1_trackside_int_T_TM_baseline2;

typedef CompressedPacketData_T_Common_Types_Pkg array_int_500_500[500];

typedef array_int_3_33 array_int_3_33_231[231];

typedef kcg_int array_int_396[396];

typedef kcg_int array_int_1[1];

typedef kcg_int array_int_5[5];

typedef kcg_int array_int_104[104];

typedef P021_section_int_T_TM array__6457[1];

typedef kcg_int array_int_494[494];

typedef kcg_int array_int_6[6];

typedef P027V1_section_int_T_TM_baseline2 array__6466[1];

typedef array_int_2_32 array_int_2_32_32[32];

typedef kcg_int array_int_432[432];

typedef kcg_int array_int_68[68];

typedef kcg_int array_int_33[33];

typedef kcg_int array_int_444[444];

typedef kcg_int array_int_24[24];

typedef kcg_int array_int_56[56];

typedef kcg_int array_int_18[18];

typedef array_int_7_33 array_int_7_33_231[231];

typedef kcg_int array_int_264[264];

typedef kcg_int array_int_236[236];

typedef P005_section_int_T_TM array__6502[1];

typedef array_int_3_33 array_int_3_33_99[99];

typedef kcg_int array_int_395[395];

typedef kcg_int array_int_105[105];

typedef P041_section_int_T_TM array__6514[1];

typedef kcg_int array_int_491[491];

typedef kcg_int array_int_9[9];

typedef kcg_int array_int_499[499];

typedef array_int_4_32 array_int_4_32_128[128];

typedef kcg_int array_int_351[351];

typedef kcg_int array_int_20[20];

typedef kcg_int array_int_149[149];

typedef kcg_int array_int_14[14];

typedef kcg_int array_int_21[21];

#ifndef kcg_copy_struct__6048
#define kcg_copy_struct__6048(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__6048)))
#endif /* kcg_copy_struct__6048 */

#ifndef kcg_copy_struct__6066
#define kcg_copy_struct__6066(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__6066)))
#endif /* kcg_copy_struct__6066 */

#ifndef kcg_copy_struct__6075
#define kcg_copy_struct__6075(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__6075)))
#endif /* kcg_copy_struct__6075 */

#ifndef kcg_copy_struct__6085
#define kcg_copy_struct__6085(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__6085)))
#endif /* kcg_copy_struct__6085 */

#ifndef kcg_copy_struct__6099
#define kcg_copy_struct__6099(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__6099)))
#endif /* kcg_copy_struct__6099 */

#ifndef kcg_copy_struct__6109
#define kcg_copy_struct__6109(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__6109)))
#endif /* kcg_copy_struct__6109 */

#ifndef kcg_copy_struct__6127
#define kcg_copy_struct__6127(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__6127)))
#endif /* kcg_copy_struct__6127 */

#ifndef kcg_copy_struct__6138
#define kcg_copy_struct__6138(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__6138)))
#endif /* kcg_copy_struct__6138 */

#ifndef kcg_copy_struct__6143
#define kcg_copy_struct__6143(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__6143)))
#endif /* kcg_copy_struct__6143 */

#ifndef kcg_copy_struct__6161
#define kcg_copy_struct__6161(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__6161)))
#endif /* kcg_copy_struct__6161 */

#ifndef kcg_copy_struct__6166
#define kcg_copy_struct__6166(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__6166)))
#endif /* kcg_copy_struct__6166 */

#ifndef kcg_copy_struct__6173
#define kcg_copy_struct__6173(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__6173)))
#endif /* kcg_copy_struct__6173 */

#ifndef kcg_copy_struct__6187
#define kcg_copy_struct__6187(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__6187)))
#endif /* kcg_copy_struct__6187 */

#ifndef kcg_copy_struct__6199
#define kcg_copy_struct__6199(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__6199)))
#endif /* kcg_copy_struct__6199 */

#ifndef kcg_copy_struct__6215
#define kcg_copy_struct__6215(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__6215)))
#endif /* kcg_copy_struct__6215 */

#ifndef kcg_copy_struct__6241
#define kcg_copy_struct__6241(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__6241)))
#endif /* kcg_copy_struct__6241 */

#ifndef kcg_copy_struct__6246
#define kcg_copy_struct__6246(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__6246)))
#endif /* kcg_copy_struct__6246 */

#ifndef kcg_copy_struct__6262
#define kcg_copy_struct__6262(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__6262)))
#endif /* kcg_copy_struct__6262 */

#ifndef kcg_copy_struct__6284
#define kcg_copy_struct__6284(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__6284)))
#endif /* kcg_copy_struct__6284 */

#ifndef kcg_copy_struct__6304
#define kcg_copy_struct__6304(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__6304)))
#endif /* kcg_copy_struct__6304 */

#ifndef kcg_copy_struct__6312
#define kcg_copy_struct__6312(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__6312)))
#endif /* kcg_copy_struct__6312 */

#ifndef kcg_copy_struct__6332
#define kcg_copy_struct__6332(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__6332)))
#endif /* kcg_copy_struct__6332 */

#ifndef kcg_copy_struct__6350
#define kcg_copy_struct__6350(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__6350)))
#endif /* kcg_copy_struct__6350 */

#ifndef kcg_copy_struct__6368
#define kcg_copy_struct__6368(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__6368)))
#endif /* kcg_copy_struct__6368 */

#ifndef kcg_copy_struct__6381
#define kcg_copy_struct__6381(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__6381)))
#endif /* kcg_copy_struct__6381 */

#ifndef kcg_copy_struct__6393
#define kcg_copy_struct__6393(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__6393)))
#endif /* kcg_copy_struct__6393 */

#ifndef kcg_copy_struct__6410
#define kcg_copy_struct__6410(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__6410)))
#endif /* kcg_copy_struct__6410 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__6135
#define kcg_copy_array__6135(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__6135)))
#endif /* kcg_copy_array__6135 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_int_4_32
#define kcg_copy_array_int_4_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4_32)))
#endif /* kcg_copy_array_int_4_32 */

#ifndef kcg_copy_array_int_128
#define kcg_copy_array_int_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128)))
#endif /* kcg_copy_array_int_128 */

#ifndef kcg_copy_array__6212
#define kcg_copy_array__6212(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__6212)))
#endif /* kcg_copy_array__6212 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array_int_7_33
#define kcg_copy_array_int_7_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33)))
#endif /* kcg_copy_array_int_7_33 */

#ifndef kcg_copy_array_int_231
#define kcg_copy_array_int_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231)))
#endif /* kcg_copy_array_int_231 */

#ifndef kcg_copy_array__6278
#define kcg_copy_array__6278(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__6278)))
#endif /* kcg_copy_array__6278 */

#ifndef kcg_copy_array__6281
#define kcg_copy_array__6281(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__6281)))
#endif /* kcg_copy_array__6281 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array__6309
#define kcg_copy_array__6309(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__6309)))
#endif /* kcg_copy_array__6309 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array_int_2_32
#define kcg_copy_array_int_2_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32)))
#endif /* kcg_copy_array_int_2_32 */

#ifndef kcg_copy_array__6326
#define kcg_copy_array__6326(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__6326)))
#endif /* kcg_copy_array__6326 */

#ifndef kcg_copy_array__6329
#define kcg_copy_array__6329(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__6329)))
#endif /* kcg_copy_array__6329 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_int_3_33
#define kcg_copy_array_int_3_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33)))
#endif /* kcg_copy_array_int_3_33 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__6362
#define kcg_copy_array__6362(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__6362)))
#endif /* kcg_copy_array__6362 */

#ifndef kcg_copy_array__6365
#define kcg_copy_array__6365(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__6365)))
#endif /* kcg_copy_array__6365 */

#ifndef kcg_copy_array__6387
#define kcg_copy_array__6387(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__6387)))
#endif /* kcg_copy_array__6387 */

#ifndef kcg_copy_array__6390
#define kcg_copy_array__6390(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__6390)))
#endif /* kcg_copy_array__6390 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array_int_500_500
#define kcg_copy_array_int_500_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500_500)))
#endif /* kcg_copy_array_int_500_500 */

#ifndef kcg_copy_array_int_3_33_231
#define kcg_copy_array_int_3_33_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33_231)))
#endif /* kcg_copy_array_int_3_33_231 */

#ifndef kcg_copy_array_int_396
#define kcg_copy_array_int_396(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_396)))
#endif /* kcg_copy_array_int_396 */

#ifndef kcg_copy_array_int_1
#define kcg_copy_array_int_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_1)))
#endif /* kcg_copy_array_int_1 */

#ifndef kcg_copy_array_int_5
#define kcg_copy_array_int_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_5)))
#endif /* kcg_copy_array_int_5 */

#ifndef kcg_copy_array_int_104
#define kcg_copy_array_int_104(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_104)))
#endif /* kcg_copy_array_int_104 */

#ifndef kcg_copy_array__6457
#define kcg_copy_array__6457(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__6457)))
#endif /* kcg_copy_array__6457 */

#ifndef kcg_copy_array_int_494
#define kcg_copy_array_int_494(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_494)))
#endif /* kcg_copy_array_int_494 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array__6466
#define kcg_copy_array__6466(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__6466)))
#endif /* kcg_copy_array__6466 */

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

#ifndef kcg_copy_array_int_7_33_231
#define kcg_copy_array_int_7_33_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33_231)))
#endif /* kcg_copy_array_int_7_33_231 */

#ifndef kcg_copy_array_int_264
#define kcg_copy_array_int_264(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_264)))
#endif /* kcg_copy_array_int_264 */

#ifndef kcg_copy_array_int_236
#define kcg_copy_array_int_236(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_236)))
#endif /* kcg_copy_array_int_236 */

#ifndef kcg_copy_array__6502
#define kcg_copy_array__6502(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__6502)))
#endif /* kcg_copy_array__6502 */

#ifndef kcg_copy_array_int_3_33_99
#define kcg_copy_array_int_3_33_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33_99)))
#endif /* kcg_copy_array_int_3_33_99 */

#ifndef kcg_copy_array_int_395
#define kcg_copy_array_int_395(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_395)))
#endif /* kcg_copy_array_int_395 */

#ifndef kcg_copy_array_int_105
#define kcg_copy_array_int_105(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_105)))
#endif /* kcg_copy_array_int_105 */

#ifndef kcg_copy_array__6514
#define kcg_copy_array__6514(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__6514)))
#endif /* kcg_copy_array__6514 */

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

#ifndef kcg_comp_struct__6048
extern kcg_bool kcg_comp_struct__6048(
  struct__6048 *kcg_c1,
  struct__6048 *kcg_c2);
#endif /* kcg_comp_struct__6048 */

#ifndef kcg_comp_struct__6066
extern kcg_bool kcg_comp_struct__6066(
  struct__6066 *kcg_c1,
  struct__6066 *kcg_c2);
#endif /* kcg_comp_struct__6066 */

#ifndef kcg_comp_struct__6075
extern kcg_bool kcg_comp_struct__6075(
  struct__6075 *kcg_c1,
  struct__6075 *kcg_c2);
#endif /* kcg_comp_struct__6075 */

#ifndef kcg_comp_struct__6085
extern kcg_bool kcg_comp_struct__6085(
  struct__6085 *kcg_c1,
  struct__6085 *kcg_c2);
#endif /* kcg_comp_struct__6085 */

#ifndef kcg_comp_struct__6099
extern kcg_bool kcg_comp_struct__6099(
  struct__6099 *kcg_c1,
  struct__6099 *kcg_c2);
#endif /* kcg_comp_struct__6099 */

#ifndef kcg_comp_struct__6109
extern kcg_bool kcg_comp_struct__6109(
  struct__6109 *kcg_c1,
  struct__6109 *kcg_c2);
#endif /* kcg_comp_struct__6109 */

#ifndef kcg_comp_struct__6127
extern kcg_bool kcg_comp_struct__6127(
  struct__6127 *kcg_c1,
  struct__6127 *kcg_c2);
#endif /* kcg_comp_struct__6127 */

#ifndef kcg_comp_struct__6138
extern kcg_bool kcg_comp_struct__6138(
  struct__6138 *kcg_c1,
  struct__6138 *kcg_c2);
#endif /* kcg_comp_struct__6138 */

#ifndef kcg_comp_struct__6143
extern kcg_bool kcg_comp_struct__6143(
  struct__6143 *kcg_c1,
  struct__6143 *kcg_c2);
#endif /* kcg_comp_struct__6143 */

#ifndef kcg_comp_struct__6161
extern kcg_bool kcg_comp_struct__6161(
  struct__6161 *kcg_c1,
  struct__6161 *kcg_c2);
#endif /* kcg_comp_struct__6161 */

#ifndef kcg_comp_struct__6166
extern kcg_bool kcg_comp_struct__6166(
  struct__6166 *kcg_c1,
  struct__6166 *kcg_c2);
#endif /* kcg_comp_struct__6166 */

#ifndef kcg_comp_struct__6173
extern kcg_bool kcg_comp_struct__6173(
  struct__6173 *kcg_c1,
  struct__6173 *kcg_c2);
#endif /* kcg_comp_struct__6173 */

#ifndef kcg_comp_struct__6187
extern kcg_bool kcg_comp_struct__6187(
  struct__6187 *kcg_c1,
  struct__6187 *kcg_c2);
#endif /* kcg_comp_struct__6187 */

#ifndef kcg_comp_struct__6199
extern kcg_bool kcg_comp_struct__6199(
  struct__6199 *kcg_c1,
  struct__6199 *kcg_c2);
#endif /* kcg_comp_struct__6199 */

#ifndef kcg_comp_struct__6215
extern kcg_bool kcg_comp_struct__6215(
  struct__6215 *kcg_c1,
  struct__6215 *kcg_c2);
#endif /* kcg_comp_struct__6215 */

#ifndef kcg_comp_struct__6241
extern kcg_bool kcg_comp_struct__6241(
  struct__6241 *kcg_c1,
  struct__6241 *kcg_c2);
#endif /* kcg_comp_struct__6241 */

#ifndef kcg_comp_struct__6246
extern kcg_bool kcg_comp_struct__6246(
  struct__6246 *kcg_c1,
  struct__6246 *kcg_c2);
#endif /* kcg_comp_struct__6246 */

#ifndef kcg_comp_struct__6262
extern kcg_bool kcg_comp_struct__6262(
  struct__6262 *kcg_c1,
  struct__6262 *kcg_c2);
#endif /* kcg_comp_struct__6262 */

#ifndef kcg_comp_struct__6284
extern kcg_bool kcg_comp_struct__6284(
  struct__6284 *kcg_c1,
  struct__6284 *kcg_c2);
#endif /* kcg_comp_struct__6284 */

#ifndef kcg_comp_struct__6304
extern kcg_bool kcg_comp_struct__6304(
  struct__6304 *kcg_c1,
  struct__6304 *kcg_c2);
#endif /* kcg_comp_struct__6304 */

#ifndef kcg_comp_struct__6312
extern kcg_bool kcg_comp_struct__6312(
  struct__6312 *kcg_c1,
  struct__6312 *kcg_c2);
#endif /* kcg_comp_struct__6312 */

#ifndef kcg_comp_struct__6332
extern kcg_bool kcg_comp_struct__6332(
  struct__6332 *kcg_c1,
  struct__6332 *kcg_c2);
#endif /* kcg_comp_struct__6332 */

#ifndef kcg_comp_struct__6350
extern kcg_bool kcg_comp_struct__6350(
  struct__6350 *kcg_c1,
  struct__6350 *kcg_c2);
#endif /* kcg_comp_struct__6350 */

#ifndef kcg_comp_struct__6368
extern kcg_bool kcg_comp_struct__6368(
  struct__6368 *kcg_c1,
  struct__6368 *kcg_c2);
#endif /* kcg_comp_struct__6368 */

#ifndef kcg_comp_struct__6381
extern kcg_bool kcg_comp_struct__6381(
  struct__6381 *kcg_c1,
  struct__6381 *kcg_c2);
#endif /* kcg_comp_struct__6381 */

#ifndef kcg_comp_struct__6393
extern kcg_bool kcg_comp_struct__6393(
  struct__6393 *kcg_c1,
  struct__6393 *kcg_c2);
#endif /* kcg_comp_struct__6393 */

#ifndef kcg_comp_struct__6410
extern kcg_bool kcg_comp_struct__6410(
  struct__6410 *kcg_c1,
  struct__6410 *kcg_c2);
#endif /* kcg_comp_struct__6410 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__6135
extern kcg_bool kcg_comp_array__6135(array__6135 *kcg_c1, array__6135 *kcg_c2);
#endif /* kcg_comp_array__6135 */

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

#ifndef kcg_comp_array__6212
extern kcg_bool kcg_comp_array__6212(array__6212 *kcg_c1, array__6212 *kcg_c2);
#endif /* kcg_comp_array__6212 */

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

#ifndef kcg_comp_array__6278
extern kcg_bool kcg_comp_array__6278(array__6278 *kcg_c1, array__6278 *kcg_c2);
#endif /* kcg_comp_array__6278 */

#ifndef kcg_comp_array__6281
extern kcg_bool kcg_comp_array__6281(array__6281 *kcg_c1, array__6281 *kcg_c2);
#endif /* kcg_comp_array__6281 */

#ifndef kcg_comp_array_int_64
extern kcg_bool kcg_comp_array_int_64(
  array_int_64 *kcg_c1,
  array_int_64 *kcg_c2);
#endif /* kcg_comp_array_int_64 */

#ifndef kcg_comp_array__6309
extern kcg_bool kcg_comp_array__6309(array__6309 *kcg_c1, array__6309 *kcg_c2);
#endif /* kcg_comp_array__6309 */

#ifndef kcg_comp_array_int_2
extern kcg_bool kcg_comp_array_int_2(array_int_2 *kcg_c1, array_int_2 *kcg_c2);
#endif /* kcg_comp_array_int_2 */

#ifndef kcg_comp_array_int_2_32
extern kcg_bool kcg_comp_array_int_2_32(
  array_int_2_32 *kcg_c1,
  array_int_2_32 *kcg_c2);
#endif /* kcg_comp_array_int_2_32 */

#ifndef kcg_comp_array__6326
extern kcg_bool kcg_comp_array__6326(array__6326 *kcg_c1, array__6326 *kcg_c2);
#endif /* kcg_comp_array__6326 */

#ifndef kcg_comp_array__6329
extern kcg_bool kcg_comp_array__6329(array__6329 *kcg_c1, array__6329 *kcg_c2);
#endif /* kcg_comp_array__6329 */

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

#ifndef kcg_comp_array__6362
extern kcg_bool kcg_comp_array__6362(array__6362 *kcg_c1, array__6362 *kcg_c2);
#endif /* kcg_comp_array__6362 */

#ifndef kcg_comp_array__6365
extern kcg_bool kcg_comp_array__6365(array__6365 *kcg_c1, array__6365 *kcg_c2);
#endif /* kcg_comp_array__6365 */

#ifndef kcg_comp_array__6387
extern kcg_bool kcg_comp_array__6387(array__6387 *kcg_c1, array__6387 *kcg_c2);
#endif /* kcg_comp_array__6387 */

#ifndef kcg_comp_array__6390
extern kcg_bool kcg_comp_array__6390(array__6390 *kcg_c1, array__6390 *kcg_c2);
#endif /* kcg_comp_array__6390 */

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

#ifndef kcg_comp_array_int_5
extern kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2);
#endif /* kcg_comp_array_int_5 */

#ifndef kcg_comp_array_int_104
extern kcg_bool kcg_comp_array_int_104(
  array_int_104 *kcg_c1,
  array_int_104 *kcg_c2);
#endif /* kcg_comp_array_int_104 */

#ifndef kcg_comp_array__6457
extern kcg_bool kcg_comp_array__6457(array__6457 *kcg_c1, array__6457 *kcg_c2);
#endif /* kcg_comp_array__6457 */

#ifndef kcg_comp_array_int_494
extern kcg_bool kcg_comp_array_int_494(
  array_int_494 *kcg_c1,
  array_int_494 *kcg_c2);
#endif /* kcg_comp_array_int_494 */

#ifndef kcg_comp_array_int_6
extern kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2);
#endif /* kcg_comp_array_int_6 */

#ifndef kcg_comp_array__6466
extern kcg_bool kcg_comp_array__6466(array__6466 *kcg_c1, array__6466 *kcg_c2);
#endif /* kcg_comp_array__6466 */

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

#ifndef kcg_comp_array__6502
extern kcg_bool kcg_comp_array__6502(array__6502 *kcg_c1, array__6502 *kcg_c2);
#endif /* kcg_comp_array__6502 */

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

#ifndef kcg_comp_array__6514
extern kcg_bool kcg_comp_array__6514(array__6514 *kcg_c1, array__6514 *kcg_c2);
#endif /* kcg_comp_array__6514 */

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

#define kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P003V1_trackside_int_T_TM_baseline2 kcg_comp_struct__6410

#define kcg_copy_P003V1_trackside_int_T_TM_baseline2 kcg_copy_struct__6410

#define kcg_comp_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_comp_array__6309

#define kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_copy_array__6309

#define kcg_comp_P027V1_section_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2

#define kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2

#define kcg_comp__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2_32

#define kcg_copy__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2_32

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp__2_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array__6326

#define kcg_copy__2_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array__6326

#define kcg_comp_P027V1_section_int_T_TM_baseline2 kcg_comp_struct__6312

#define kcg_copy_P027V1_section_int_T_TM_baseline2 kcg_copy_struct__6312

#define kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_comp_array__6329

#define kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_copy_array__6329

#define kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2 kcg_comp_struct__6304

#define kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2 kcg_copy_struct__6304

#define kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_comp_array__6309

#define kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_copy_array__6309

#define kcg_comp_P027V1_trackside_int_T_TM_baseline2 kcg_comp_struct__6332

#define kcg_copy_P027V1_trackside_int_T_TM_baseline2 kcg_copy_struct__6332

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__6138

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__6138

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__6127

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__6127

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__6135

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__6135

#define kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_comp_struct__6048

#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_copy_struct__6048

#define kcg_comp_CompressedRadioMessage_TM kcg_comp_struct__6161

#define kcg_copy_CompressedRadioMessage_TM kcg_copy_struct__6161

#define kcg_comp__3_Radio_TrackTrain_Header_T_TM kcg_comp_struct__6143

#define kcg_copy__3_Radio_TrackTrain_Header_T_TM kcg_copy_struct__6143

#define kcg_comp_P015_OBU_sectionlist_int_T_TM kcg_comp_array__6212

#define kcg_copy_P015_OBU_sectionlist_int_T_TM kcg_copy_array__6212

#define kcg_comp_P015_section_array_T_TM kcg_comp_array_int_4

#define kcg_copy_P015_section_array_T_TM kcg_copy_array_int_4

#define kcg_comp_P015_OBU_sectionlist_array_T_TM kcg_comp_array_int_4_32

#define kcg_copy_P015_OBU_sectionlist_array_T_TM kcg_copy_array_int_4_32

#define kcg_comp_P015_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P015_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_P015_section_int_T_TM kcg_comp_struct__6199

#define kcg_copy_P015_section_int_T_TM kcg_copy_struct__6199

#define kcg_comp_P015_trackide_sectionlist_T_TM kcg_comp_array__6212

#define kcg_copy_P015_trackide_sectionlist_T_TM kcg_copy_array__6212

#define kcg_comp_P015_trackside_int_T_TM kcg_comp_struct__6215

#define kcg_copy_P015_trackside_int_T_TM kcg_copy_struct__6215

#define kcg_comp_P255_trackside_int_T_TM kcg_comp_struct__6241

#define kcg_copy_P255_trackside_int_T_TM kcg_copy_struct__6241

#define kcg_comp_P065_trackside_int_T_TM kcg_comp_struct__6246

#define kcg_copy_P065_trackside_int_T_TM kcg_copy_struct__6246

#define kcg_comp_P041_OBU_sectionlist_int_T_TM kcg_comp_array__6387

#define kcg_copy_P041_OBU_sectionlist_int_T_TM kcg_copy_array__6387

#define kcg_comp_P041_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P041_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P041_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P041_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P041_section_int_T_TM kcg_comp_struct__6381

#define kcg_copy_P041_section_int_T_TM kcg_copy_struct__6381

#define kcg_comp_P041_trackide_sectionlist_T_TM kcg_comp_array__6390

#define kcg_copy_P041_trackide_sectionlist_T_TM kcg_copy_array__6390

#define kcg_comp_P041_trackside_int_T_TM kcg_comp_struct__6393

#define kcg_copy_P041_trackside_int_T_TM kcg_copy_struct__6393

#define kcg_comp_P005_OBU_sectionlist_int_T_TM kcg_comp_array__6278

#define kcg_copy_P005_OBU_sectionlist_int_T_TM kcg_copy_array__6278

#define kcg_comp_P005_section_array_T_TM kcg_comp_array_int_7

#define kcg_copy_P005_section_array_T_TM kcg_copy_array_int_7

#define kcg_comp_P005_OBU_sectionlist_array_T_TM kcg_comp_array_int_7_33

#define kcg_copy_P005_OBU_sectionlist_array_T_TM kcg_copy_array_int_7_33

#define kcg_comp_P005_sections_array_flat_T_TM kcg_comp_array_int_231

#define kcg_copy_P005_sections_array_flat_T_TM kcg_copy_array_int_231

#define kcg_comp_P005_section_int_T_TM kcg_comp_struct__6262

#define kcg_copy_P005_section_int_T_TM kcg_copy_struct__6262

#define kcg_comp_P005_trackide_sectionlist_T_TM kcg_comp_array__6281

#define kcg_copy_P005_trackide_sectionlist_T_TM kcg_copy_array__6281

#define kcg_comp_R_data_internal_T_InfraLib kcg_comp_struct__6166

#define kcg_copy_R_data_internal_T_InfraLib kcg_copy_struct__6166

#define kcg_comp_P005_trackside_int_T_TM kcg_comp_struct__6284

#define kcg_copy_P005_trackside_int_T_TM kcg_copy_struct__6284

#define kcg_comp_P021_OBU_sectionlist_int_T_TM kcg_comp_array__6362

#define kcg_copy_P021_OBU_sectionlist_int_T_TM kcg_copy_array__6362

#define kcg_comp_P021_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P021_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P021_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P021_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P021_section_int_T_TM kcg_comp_struct__6350

#define kcg_copy_P021_section_int_T_TM kcg_copy_struct__6350

#define kcg_comp_P021_trackide_sectionlist_T_TM kcg_comp_array__6365

#define kcg_copy_P021_trackide_sectionlist_T_TM kcg_copy_array__6365

#define kcg_comp_P021_trackside_int_T_TM kcg_comp_struct__6368

#define kcg_copy_P021_trackside_int_T_TM kcg_copy_struct__6368

#define kcg_comp_M_003_T_TM_radio_messages kcg_comp_struct__6066

#define kcg_copy_M_003_T_TM_radio_messages kcg_copy_struct__6066

#define kcg_comp_M_008_T_TM_radio_messages kcg_comp_struct__6075

#define kcg_copy_M_008_T_TM_radio_messages kcg_copy_struct__6075

#define kcg_comp_M_015_T_TM_radio_messages kcg_comp_struct__6085

#define kcg_copy_M_015_T_TM_radio_messages kcg_copy_struct__6085

#define kcg_comp_M_024_T_TM_radio_messages kcg_comp_struct__6066

#define kcg_copy_M_024_T_TM_radio_messages kcg_copy_struct__6066

#define kcg_comp_M_032_T_TM_radio_messages kcg_comp_struct__6099

#define kcg_copy_M_032_T_TM_radio_messages kcg_copy_struct__6099

#define kcg_comp_M_015_int_T_TM_radio_messages kcg_comp_struct__6173

#define kcg_copy_M_015_int_T_TM_radio_messages kcg_copy_struct__6173

#define kcg_comp_M_TrackTrain_Radio_T_TM_radio_messages kcg_comp_struct__6109

#define kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages kcg_copy_struct__6109

#define kcg_comp_M_003_int_T_TM_radio_messages kcg_comp_struct__6187

#define kcg_copy_M_003_int_T_TM_radio_messages kcg_copy_struct__6187

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-07-03T12:45:00
*************************************************************$ */


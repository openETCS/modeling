/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-20T18:20:31
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
/* Q_DIR */
typedef enum {
  Q_DIR_Reverse = 0,
  Q_DIR_Nominal = 1,
  Q_DIR_Both_directions = 2
} Q_DIR;
/* NID_BG */
typedef kcg_int NID_BG;

/* NID_PACKET */
typedef kcg_int NID_PACKET;

/* TM::nid_packet_meta */
typedef kcg_int nid_packet_meta_TM;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__20922;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__20922 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__20930[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__20930 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__20933;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__20933 CompressedPackets_T_Common_Types_Pkg;

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
} struct__20938;

/* TM::BaliseTelegramHeader_int_T */
typedef struct__20938 BaliseTelegramHeader_int_T_TM;

typedef struct {
  BaliseTelegramHeader_int_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__20951;

/* TM::CompressedBaliseMessage */
typedef struct__20951 CompressedBaliseMessage_TM;

typedef struct {
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Pos;
  OrBG_TM Or_BG;
  OrLine_TM Or_Line;
} struct__20956;

/* Basics::BaliseGroupData */
typedef struct__20956 BaliseGroupData_Basics;

/* TM::BaliseGroupData */
typedef struct__20956 BaliseGroupData_TM;

typedef struct {
  BaliseTelegramHeader_int_T_TM header;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int engineering_BG_location;
  kcg_real TrainPos;
  kcg_int pig_nom_0;
  kcg_bool balise_passed;
} struct__20964;

/* InfraLib::B_data_internal_T */
typedef struct__20964 B_data_internal_T_InfraLib;

typedef struct {
  kcg_real TrainPos_in;
  kcg_int OffsetTotal;
  kcg_real TrainPosCalibrated;
} struct__20973;

/* InfraLib::TrainPosRaw_T */
typedef struct__20973 TrainPosRaw_T_InfraLib;

typedef struct {
  TrainPosRaw_T_InfraLib TrainPosRaw;
  CompressedBaliseMessage_TM BG_Message;
} struct__20979;

/* InfraLib::TrackSectionData_T */
typedef struct__20979 TrackSectionData_T_InfraLib;

typedef struct { kcg_bool valid; kcg_int NID_PACKET; } struct__20984;

/* TM::P255_trackside_int_T */
typedef struct__20984 P255_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SRSTOP;
} struct__20989;

/* TM::P137_trackside_int_T */
typedef struct__20989 P137_trackside_int_T_TM;

typedef kcg_int array_int_3[3];

/* TM::P041_section_array_T */
typedef array_int_3 P041_section_array_T_TM;

typedef struct {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
} struct__21000;

/* TM::P041_section_int_T */
typedef struct__21000 P041_section_int_T_TM;

typedef P041_section_array_T_TM array_int_3_33[33];

/* TM::P041_OBU_sectionlist_array_T */
typedef array_int_3_33 P041_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_99[99];

/* TM::P041_sections_array_flat_T */
typedef array_int_99 P041_sections_array_flat_T_TM;

typedef P041_section_int_T_TM array__21012[33];

/* TM::P041_OBU_sectionlist_int_T */
typedef array__21012 P041_OBU_sectionlist_int_T_TM;

typedef P041_section_int_T_TM array__21015[32];

/* TM::P041_trackide_sectionlist_T */
typedef array__21015 P041_trackide_sectionlist_T_TM;

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
} struct__21018;

/* TM::P041_trackside_int_T */
typedef struct__21018 P041_trackside_int_T_TM;

typedef kcg_int array_int_2[2];

/* TM::P046_section_array_T */
typedef array_int_2 P046_section_array_T_TM;

typedef struct { kcg_int M_LEVELTR; kcg_int NID_NTC; } struct__21035;

/* TM::P046_section_int_T */
typedef struct__21035 P046_section_int_T_TM;

typedef P046_section_array_T_TM array_int_2_33[33];

/* TM::P046_OBU_sectionlist_array_T */
typedef array_int_2_33 P046_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_66[66];

/* TM::P046_sections_array_flat_T */
typedef array_int_66 P046_sections_array_flat_T_TM;

typedef P046_section_int_T_TM array__21046[33];

/* TM::P046_OBU_sectionlist_int_T */
typedef array__21046 P046_OBU_sectionlist_int_T_TM;

typedef P046_section_int_T_TM array__21049[32];

/* TM::P046_trackide_sectionlist_T */
typedef array__21049 P046_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int N_ITER;
  P046_trackide_sectionlist_T_TM SECTIONS;
} struct__21052;

/* TM::P046_trackside_int_T */
typedef struct__21052 P046_trackside_int_T_TM;

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
} struct__21063;

/* TM::P042_trackside_int_T */
typedef struct__21063 P042_trackside_int_T_TM;

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
} struct__21078;

/* TM_baseline2::P003V1_trackside_int_T */
typedef struct__21078 P003V1_trackside_int_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_MN;
} struct__21107;

/* TM::P045_trackside_int_T */
typedef struct__21107 P045_trackside_int_T_TM;

typedef struct { kcg_int NID_BG; kcg_real TrainPos; } struct__21115;

/* Internal_Tests::BPos_Single */
typedef struct__21115 BPos_Single_Internal_Tests;

typedef BPos_Single_Internal_Tests array__21120[100];

/* Internal_Tests::BPos */
typedef array__21120 BPos_Internal_Tests;

typedef kcg_int array_int_100[100];

typedef CompressedPacketData_T_Common_Types_Pkg array_int_500_500[500];

typedef kcg_int array_int_499[499];

typedef kcg_int array_int_1[1];

typedef kcg_int array_int_496[496];

typedef kcg_int array_int_4[4];

typedef kcg_int array_int_492[492];

typedef kcg_int array_int_8[8];

typedef array_int_2_33 array_int_2_33_99[99];

typedef kcg_int array_int_430[430];

typedef kcg_int array_int_70[70];

typedef P046_section_int_T_TM array__21156[1];

typedef kcg_int array_int_444[444];

typedef kcg_int array_int_6[6];

typedef kcg_int array_int_24[24];

typedef kcg_int array_int_56[56];

typedef kcg_int array_int_18[18];

typedef array_int_3_33 array_int_3_33_99[99];

typedef kcg_int array_int_395[395];

typedef kcg_int array_int_5[5];

typedef kcg_int array_int_105[105];

typedef P041_section_int_T_TM array__21186[1];

#ifndef kcg_copy_struct__20922
#define kcg_copy_struct__20922(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__20922)))
#endif /* kcg_copy_struct__20922 */

#ifndef kcg_copy_struct__20933
#define kcg_copy_struct__20933(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__20933)))
#endif /* kcg_copy_struct__20933 */

#ifndef kcg_copy_struct__20938
#define kcg_copy_struct__20938(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__20938)))
#endif /* kcg_copy_struct__20938 */

#ifndef kcg_copy_struct__20951
#define kcg_copy_struct__20951(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__20951)))
#endif /* kcg_copy_struct__20951 */

#ifndef kcg_copy_struct__20956
#define kcg_copy_struct__20956(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__20956)))
#endif /* kcg_copy_struct__20956 */

#ifndef kcg_copy_struct__20964
#define kcg_copy_struct__20964(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__20964)))
#endif /* kcg_copy_struct__20964 */

#ifndef kcg_copy_struct__20973
#define kcg_copy_struct__20973(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__20973)))
#endif /* kcg_copy_struct__20973 */

#ifndef kcg_copy_struct__20979
#define kcg_copy_struct__20979(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__20979)))
#endif /* kcg_copy_struct__20979 */

#ifndef kcg_copy_struct__20984
#define kcg_copy_struct__20984(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__20984)))
#endif /* kcg_copy_struct__20984 */

#ifndef kcg_copy_struct__20989
#define kcg_copy_struct__20989(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__20989)))
#endif /* kcg_copy_struct__20989 */

#ifndef kcg_copy_struct__21000
#define kcg_copy_struct__21000(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__21000)))
#endif /* kcg_copy_struct__21000 */

#ifndef kcg_copy_struct__21018
#define kcg_copy_struct__21018(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__21018)))
#endif /* kcg_copy_struct__21018 */

#ifndef kcg_copy_struct__21035
#define kcg_copy_struct__21035(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__21035)))
#endif /* kcg_copy_struct__21035 */

#ifndef kcg_copy_struct__21052
#define kcg_copy_struct__21052(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__21052)))
#endif /* kcg_copy_struct__21052 */

#ifndef kcg_copy_struct__21063
#define kcg_copy_struct__21063(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__21063)))
#endif /* kcg_copy_struct__21063 */

#ifndef kcg_copy_struct__21078
#define kcg_copy_struct__21078(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__21078)))
#endif /* kcg_copy_struct__21078 */

#ifndef kcg_copy_struct__21107
#define kcg_copy_struct__21107(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__21107)))
#endif /* kcg_copy_struct__21107 */

#ifndef kcg_copy_struct__21115
#define kcg_copy_struct__21115(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__21115)))
#endif /* kcg_copy_struct__21115 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__20930
#define kcg_copy_array__20930(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__20930)))
#endif /* kcg_copy_array__20930 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_int_3_33
#define kcg_copy_array_int_3_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33)))
#endif /* kcg_copy_array_int_3_33 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__21012
#define kcg_copy_array__21012(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__21012)))
#endif /* kcg_copy_array__21012 */

#ifndef kcg_copy_array__21015
#define kcg_copy_array__21015(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__21015)))
#endif /* kcg_copy_array__21015 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array_int_2_33
#define kcg_copy_array_int_2_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_33)))
#endif /* kcg_copy_array_int_2_33 */

#ifndef kcg_copy_array_int_66
#define kcg_copy_array_int_66(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_66)))
#endif /* kcg_copy_array_int_66 */

#ifndef kcg_copy_array__21046
#define kcg_copy_array__21046(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__21046)))
#endif /* kcg_copy_array__21046 */

#ifndef kcg_copy_array__21049
#define kcg_copy_array__21049(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__21049)))
#endif /* kcg_copy_array__21049 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array__21120
#define kcg_copy_array__21120(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__21120)))
#endif /* kcg_copy_array__21120 */

#ifndef kcg_copy_array_int_100
#define kcg_copy_array_int_100(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_100)))
#endif /* kcg_copy_array_int_100 */

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

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

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

#ifndef kcg_copy_array__21156
#define kcg_copy_array__21156(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__21156)))
#endif /* kcg_copy_array__21156 */

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

#ifndef kcg_copy_array__21186
#define kcg_copy_array__21186(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__21186)))
#endif /* kcg_copy_array__21186 */

#ifndef kcg_comp_struct__20922
extern kcg_bool kcg_comp_struct__20922(
  struct__20922 *kcg_c1,
  struct__20922 *kcg_c2);
#endif /* kcg_comp_struct__20922 */

#ifndef kcg_comp_struct__20933
extern kcg_bool kcg_comp_struct__20933(
  struct__20933 *kcg_c1,
  struct__20933 *kcg_c2);
#endif /* kcg_comp_struct__20933 */

#ifndef kcg_comp_struct__20938
extern kcg_bool kcg_comp_struct__20938(
  struct__20938 *kcg_c1,
  struct__20938 *kcg_c2);
#endif /* kcg_comp_struct__20938 */

#ifndef kcg_comp_struct__20951
extern kcg_bool kcg_comp_struct__20951(
  struct__20951 *kcg_c1,
  struct__20951 *kcg_c2);
#endif /* kcg_comp_struct__20951 */

#ifndef kcg_comp_struct__20956
extern kcg_bool kcg_comp_struct__20956(
  struct__20956 *kcg_c1,
  struct__20956 *kcg_c2);
#endif /* kcg_comp_struct__20956 */

#ifndef kcg_comp_struct__20964
extern kcg_bool kcg_comp_struct__20964(
  struct__20964 *kcg_c1,
  struct__20964 *kcg_c2);
#endif /* kcg_comp_struct__20964 */

#ifndef kcg_comp_struct__20973
extern kcg_bool kcg_comp_struct__20973(
  struct__20973 *kcg_c1,
  struct__20973 *kcg_c2);
#endif /* kcg_comp_struct__20973 */

#ifndef kcg_comp_struct__20979
extern kcg_bool kcg_comp_struct__20979(
  struct__20979 *kcg_c1,
  struct__20979 *kcg_c2);
#endif /* kcg_comp_struct__20979 */

#ifndef kcg_comp_struct__20984
extern kcg_bool kcg_comp_struct__20984(
  struct__20984 *kcg_c1,
  struct__20984 *kcg_c2);
#endif /* kcg_comp_struct__20984 */

#ifndef kcg_comp_struct__20989
extern kcg_bool kcg_comp_struct__20989(
  struct__20989 *kcg_c1,
  struct__20989 *kcg_c2);
#endif /* kcg_comp_struct__20989 */

#ifndef kcg_comp_struct__21000
extern kcg_bool kcg_comp_struct__21000(
  struct__21000 *kcg_c1,
  struct__21000 *kcg_c2);
#endif /* kcg_comp_struct__21000 */

#ifndef kcg_comp_struct__21018
extern kcg_bool kcg_comp_struct__21018(
  struct__21018 *kcg_c1,
  struct__21018 *kcg_c2);
#endif /* kcg_comp_struct__21018 */

#ifndef kcg_comp_struct__21035
extern kcg_bool kcg_comp_struct__21035(
  struct__21035 *kcg_c1,
  struct__21035 *kcg_c2);
#endif /* kcg_comp_struct__21035 */

#ifndef kcg_comp_struct__21052
extern kcg_bool kcg_comp_struct__21052(
  struct__21052 *kcg_c1,
  struct__21052 *kcg_c2);
#endif /* kcg_comp_struct__21052 */

#ifndef kcg_comp_struct__21063
extern kcg_bool kcg_comp_struct__21063(
  struct__21063 *kcg_c1,
  struct__21063 *kcg_c2);
#endif /* kcg_comp_struct__21063 */

#ifndef kcg_comp_struct__21078
extern kcg_bool kcg_comp_struct__21078(
  struct__21078 *kcg_c1,
  struct__21078 *kcg_c2);
#endif /* kcg_comp_struct__21078 */

#ifndef kcg_comp_struct__21107
extern kcg_bool kcg_comp_struct__21107(
  struct__21107 *kcg_c1,
  struct__21107 *kcg_c2);
#endif /* kcg_comp_struct__21107 */

#ifndef kcg_comp_struct__21115
extern kcg_bool kcg_comp_struct__21115(
  struct__21115 *kcg_c1,
  struct__21115 *kcg_c2);
#endif /* kcg_comp_struct__21115 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__20930
extern kcg_bool kcg_comp_array__20930(
  array__20930 *kcg_c1,
  array__20930 *kcg_c2);
#endif /* kcg_comp_array__20930 */

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

#ifndef kcg_comp_array__21012
extern kcg_bool kcg_comp_array__21012(
  array__21012 *kcg_c1,
  array__21012 *kcg_c2);
#endif /* kcg_comp_array__21012 */

#ifndef kcg_comp_array__21015
extern kcg_bool kcg_comp_array__21015(
  array__21015 *kcg_c1,
  array__21015 *kcg_c2);
#endif /* kcg_comp_array__21015 */

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

#ifndef kcg_comp_array__21046
extern kcg_bool kcg_comp_array__21046(
  array__21046 *kcg_c1,
  array__21046 *kcg_c2);
#endif /* kcg_comp_array__21046 */

#ifndef kcg_comp_array__21049
extern kcg_bool kcg_comp_array__21049(
  array__21049 *kcg_c1,
  array__21049 *kcg_c2);
#endif /* kcg_comp_array__21049 */

#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */

#ifndef kcg_comp_array__21120
extern kcg_bool kcg_comp_array__21120(
  array__21120 *kcg_c1,
  array__21120 *kcg_c2);
#endif /* kcg_comp_array__21120 */

#ifndef kcg_comp_array_int_100
extern kcg_bool kcg_comp_array_int_100(
  array_int_100 *kcg_c1,
  array_int_100 *kcg_c2);
#endif /* kcg_comp_array_int_100 */

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

#ifndef kcg_comp_array_int_4
extern kcg_bool kcg_comp_array_int_4(array_int_4 *kcg_c1, array_int_4 *kcg_c2);
#endif /* kcg_comp_array_int_4 */

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

#ifndef kcg_comp_array__21156
extern kcg_bool kcg_comp_array__21156(
  array__21156 *kcg_c1,
  array__21156 *kcg_c2);
#endif /* kcg_comp_array__21156 */

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

#ifndef kcg_comp_array__21186
extern kcg_bool kcg_comp_array__21186(
  array__21186 *kcg_c1,
  array__21186 *kcg_c2);
#endif /* kcg_comp_array__21186 */

#define kcg_comp_BPos_Single_Internal_Tests kcg_comp_struct__21115

#define kcg_copy_BPos_Single_Internal_Tests kcg_copy_struct__21115

#define kcg_comp_BPos_Internal_Tests kcg_comp_array__21120

#define kcg_copy_BPos_Internal_Tests kcg_copy_array__21120

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__20922

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__20922

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__20930

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__20930

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__20933

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__20933

#define kcg_comp_P137_trackside_int_T_TM kcg_comp_struct__20989

#define kcg_copy_P137_trackside_int_T_TM kcg_copy_struct__20989

#define kcg_comp_P041_OBU_sectionlist_int_T_TM kcg_comp_array__21012

#define kcg_copy_P041_OBU_sectionlist_int_T_TM kcg_copy_array__21012

#define kcg_comp_P041_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P041_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P041_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P041_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P041_section_int_T_TM kcg_comp_struct__21000

#define kcg_copy_P041_section_int_T_TM kcg_copy_struct__21000

#define kcg_comp_P041_trackide_sectionlist_T_TM kcg_comp_array__21015

#define kcg_copy_P041_trackide_sectionlist_T_TM kcg_copy_array__21015

#define kcg_comp_P041_trackside_int_T_TM kcg_comp_struct__21018

#define kcg_copy_P041_trackside_int_T_TM kcg_copy_struct__21018

#define kcg_comp_P046_OBU_sectionlist_int_T_TM kcg_comp_array__21046

#define kcg_copy_P046_OBU_sectionlist_int_T_TM kcg_copy_array__21046

#define kcg_comp_P046_section_array_T_TM kcg_comp_array_int_2

#define kcg_copy_P046_section_array_T_TM kcg_copy_array_int_2

#define kcg_comp_P046_OBU_sectionlist_array_T_TM kcg_comp_array_int_2_33

#define kcg_copy_P046_OBU_sectionlist_array_T_TM kcg_copy_array_int_2_33

#define kcg_comp_P046_sections_array_flat_T_TM kcg_comp_array_int_66

#define kcg_copy_P046_sections_array_flat_T_TM kcg_copy_array_int_66

#define kcg_comp_P046_section_int_T_TM kcg_comp_struct__21035

#define kcg_copy_P046_section_int_T_TM kcg_copy_struct__21035

#define kcg_comp_P046_trackide_sectionlist_T_TM kcg_comp_array__21049

#define kcg_copy_P046_trackide_sectionlist_T_TM kcg_copy_array__21049

#define kcg_comp_P046_trackside_int_T_TM kcg_comp_struct__21052

#define kcg_copy_P046_trackside_int_T_TM kcg_copy_struct__21052

#define kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P042_trackside_int_T_TM kcg_comp_struct__21063

#define kcg_copy_P042_trackside_int_T_TM kcg_copy_struct__21063

#define kcg_comp_P003V1_trackside_int_T_TM_baseline2 kcg_comp_struct__21078

#define kcg_copy_P003V1_trackside_int_T_TM_baseline2 kcg_copy_struct__21078

#define kcg_comp_CompressedBaliseMessage_TM kcg_comp_struct__20951

#define kcg_copy_CompressedBaliseMessage_TM kcg_copy_struct__20951

#define kcg_comp_BaliseGroupData_TM kcg_comp_struct__20956

#define kcg_copy_BaliseGroupData_TM kcg_copy_struct__20956

#define kcg_comp_P045_trackside_int_T_TM kcg_comp_struct__21107

#define kcg_copy_P045_trackside_int_T_TM kcg_copy_struct__21107

#define kcg_comp_P255_trackside_int_T_TM kcg_comp_struct__20984

#define kcg_copy_P255_trackside_int_T_TM kcg_copy_struct__20984

#define kcg_comp_BaliseTelegramHeader_int_T_TM kcg_comp_struct__20938

#define kcg_copy_BaliseTelegramHeader_int_T_TM kcg_copy_struct__20938

#define kcg_comp_TrainPosRaw_T_InfraLib kcg_comp_struct__20973

#define kcg_copy_TrainPosRaw_T_InfraLib kcg_copy_struct__20973

#define kcg_comp_TrackSectionData_T_InfraLib kcg_comp_struct__20979

#define kcg_copy_TrackSectionData_T_InfraLib kcg_copy_struct__20979

#define kcg_comp_B_data_internal_T_InfraLib kcg_comp_struct__20964

#define kcg_copy_B_data_internal_T_InfraLib kcg_copy_struct__20964

#define kcg_comp_BaliseGroupData_Basics kcg_comp_struct__20956

#define kcg_copy_BaliseGroupData_Basics kcg_copy_struct__20956

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-08-20T18:20:31
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/KCG\kcg_s2c_config.txt
** Generation date: 2015-08-20T18:24:03
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
} struct__463419;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__463419 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__463427[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__463427 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__463430;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__463430 CompressedPackets_T_Common_Types_Pkg;

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
} struct__463435;

/* TM::BaliseTelegramHeader_int_T */
typedef struct__463435 BaliseTelegramHeader_int_T_TM;

typedef struct {
  BaliseTelegramHeader_int_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__463448;

/* TM::CompressedBaliseMessage */
typedef struct__463448 CompressedBaliseMessage_TM;

typedef struct {
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Pos;
  OrBG_TM Or_BG;
  OrLine_TM Or_Line;
} struct__463453;

/* Basics::BaliseGroupData */
typedef struct__463453 BaliseGroupData_Basics;

/* TM::BaliseGroupData */
typedef struct__463453 BaliseGroupData_TM;

typedef struct {
  BaliseTelegramHeader_int_T_TM header;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int engineering_BG_location;
  kcg_real TrainPos;
  kcg_int pig_nom_0;
  kcg_bool balise_passed;
} struct__463461;

/* InfraLib::B_data_internal_T */
typedef struct__463461 B_data_internal_T_InfraLib;

typedef struct {
  kcg_real TrainPos_in;
  kcg_int OffsetTotal;
  kcg_real TrainPosCalibrated;
} struct__463470;

/* InfraLib::TrainPosRaw_T */
typedef struct__463470 TrainPosRaw_T_InfraLib;

typedef struct {
  TrainPosRaw_T_InfraLib TrainPosRaw;
  CompressedBaliseMessage_TM BG_Message;
} struct__463476;

/* InfraLib::TrackSectionData_T */
typedef struct__463476 TrackSectionData_T_InfraLib;

typedef struct { kcg_bool valid; kcg_int NID_PACKET; } struct__463481;

/* TM::P255_trackside_int_T */
typedef struct__463481 P255_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SRSTOP;
} struct__463486;

/* TM::P137_trackside_int_T */
typedef struct__463486 P137_trackside_int_T_TM;

typedef kcg_int array_int_3[3];

/* TM::P041_section_array_T */
typedef array_int_3 P041_section_array_T_TM;

typedef struct {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
} struct__463497;

/* TM::P041_section_int_T */
typedef struct__463497 P041_section_int_T_TM;

typedef P041_section_array_T_TM array_int_3_33[33];

/* TM::P041_OBU_sectionlist_array_T */
typedef array_int_3_33 P041_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_99[99];

/* TM::P041_sections_array_flat_T */
typedef array_int_99 P041_sections_array_flat_T_TM;

typedef P041_section_int_T_TM array__463509[33];

/* TM::P041_OBU_sectionlist_int_T */
typedef array__463509 P041_OBU_sectionlist_int_T_TM;

typedef P041_section_int_T_TM array__463512[32];

/* TM::P041_trackide_sectionlist_T */
typedef array__463512 P041_trackide_sectionlist_T_TM;

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
} struct__463515;

/* TM::P041_trackside_int_T */
typedef struct__463515 P041_trackside_int_T_TM;

typedef kcg_int array_int_2[2];

/* TM::P046_section_array_T */
typedef array_int_2 P046_section_array_T_TM;

typedef struct { kcg_int M_LEVELTR; kcg_int NID_NTC; } struct__463532;

/* TM::P046_section_int_T */
typedef struct__463532 P046_section_int_T_TM;

typedef P046_section_array_T_TM array_int_2_33[33];

/* TM::P046_OBU_sectionlist_array_T */
typedef array_int_2_33 P046_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_66[66];

/* TM::P046_sections_array_flat_T */
typedef array_int_66 P046_sections_array_flat_T_TM;

typedef P046_section_int_T_TM array__463543[33];

/* TM::P046_OBU_sectionlist_int_T */
typedef array__463543 P046_OBU_sectionlist_int_T_TM;

typedef P046_section_int_T_TM array__463546[32];

/* TM::P046_trackide_sectionlist_T */
typedef array__463546 P046_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int N_ITER;
  P046_trackide_sectionlist_T_TM SECTIONS;
} struct__463549;

/* TM::P046_trackside_int_T */
typedef struct__463549 P046_trackside_int_T_TM;

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
} struct__463560;

/* TM::P042_trackside_int_T */
typedef struct__463560 P042_trackside_int_T_TM;

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
} struct__463575;

/* TM_baseline2::P003V1_trackside_int_T */
typedef struct__463575 P003V1_trackside_int_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_MN;
} struct__463604;

/* TM::P045_trackside_int_T */
typedef struct__463604 P045_trackside_int_T_TM;

typedef struct { kcg_int NID_BG; kcg_real TrainPos; } struct__463612;

/* Internal_Tests::BPos_Single */
typedef struct__463612 BPos_Single_Internal_Tests;

typedef BPos_Single_Internal_Tests array__463617[100];

/* Internal_Tests::BPos */
typedef array__463617 BPos_Internal_Tests;

typedef kcg_int array_int_395[395];

typedef kcg_int array_int_1[1];

typedef kcg_int array_int_430[430];

typedef kcg_int array_int_444[444];

typedef kcg_int array_int_492[492];

typedef kcg_int array_int_496[496];

typedef kcg_int array_int_499[499];

#ifndef kcg_copy_struct__463419
#define kcg_copy_struct__463419(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__463419)))
#endif /* kcg_copy_struct__463419 */

#ifndef kcg_copy_struct__463430
#define kcg_copy_struct__463430(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__463430)))
#endif /* kcg_copy_struct__463430 */

#ifndef kcg_copy_struct__463435
#define kcg_copy_struct__463435(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__463435)))
#endif /* kcg_copy_struct__463435 */

#ifndef kcg_copy_struct__463448
#define kcg_copy_struct__463448(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__463448)))
#endif /* kcg_copy_struct__463448 */

#ifndef kcg_copy_struct__463453
#define kcg_copy_struct__463453(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__463453)))
#endif /* kcg_copy_struct__463453 */

#ifndef kcg_copy_struct__463461
#define kcg_copy_struct__463461(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__463461)))
#endif /* kcg_copy_struct__463461 */

#ifndef kcg_copy_struct__463470
#define kcg_copy_struct__463470(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__463470)))
#endif /* kcg_copy_struct__463470 */

#ifndef kcg_copy_struct__463476
#define kcg_copy_struct__463476(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__463476)))
#endif /* kcg_copy_struct__463476 */

#ifndef kcg_copy_struct__463481
#define kcg_copy_struct__463481(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__463481)))
#endif /* kcg_copy_struct__463481 */

#ifndef kcg_copy_struct__463486
#define kcg_copy_struct__463486(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__463486)))
#endif /* kcg_copy_struct__463486 */

#ifndef kcg_copy_struct__463497
#define kcg_copy_struct__463497(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__463497)))
#endif /* kcg_copy_struct__463497 */

#ifndef kcg_copy_struct__463515
#define kcg_copy_struct__463515(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__463515)))
#endif /* kcg_copy_struct__463515 */

#ifndef kcg_copy_struct__463532
#define kcg_copy_struct__463532(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__463532)))
#endif /* kcg_copy_struct__463532 */

#ifndef kcg_copy_struct__463549
#define kcg_copy_struct__463549(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__463549)))
#endif /* kcg_copy_struct__463549 */

#ifndef kcg_copy_struct__463560
#define kcg_copy_struct__463560(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__463560)))
#endif /* kcg_copy_struct__463560 */

#ifndef kcg_copy_struct__463575
#define kcg_copy_struct__463575(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__463575)))
#endif /* kcg_copy_struct__463575 */

#ifndef kcg_copy_struct__463604
#define kcg_copy_struct__463604(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__463604)))
#endif /* kcg_copy_struct__463604 */

#ifndef kcg_copy_struct__463612
#define kcg_copy_struct__463612(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__463612)))
#endif /* kcg_copy_struct__463612 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__463427
#define kcg_copy_array__463427(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__463427)))
#endif /* kcg_copy_array__463427 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_int_3_33
#define kcg_copy_array_int_3_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33)))
#endif /* kcg_copy_array_int_3_33 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__463509
#define kcg_copy_array__463509(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__463509)))
#endif /* kcg_copy_array__463509 */

#ifndef kcg_copy_array__463512
#define kcg_copy_array__463512(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__463512)))
#endif /* kcg_copy_array__463512 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array_int_2_33
#define kcg_copy_array_int_2_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_33)))
#endif /* kcg_copy_array_int_2_33 */

#ifndef kcg_copy_array_int_66
#define kcg_copy_array_int_66(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_66)))
#endif /* kcg_copy_array_int_66 */

#ifndef kcg_copy_array__463543
#define kcg_copy_array__463543(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__463543)))
#endif /* kcg_copy_array__463543 */

#ifndef kcg_copy_array__463546
#define kcg_copy_array__463546(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__463546)))
#endif /* kcg_copy_array__463546 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array__463617
#define kcg_copy_array__463617(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__463617)))
#endif /* kcg_copy_array__463617 */

#ifndef kcg_copy_array_int_395
#define kcg_copy_array_int_395(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_395)))
#endif /* kcg_copy_array_int_395 */

#ifndef kcg_copy_array_int_1
#define kcg_copy_array_int_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_1)))
#endif /* kcg_copy_array_int_1 */

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

#ifndef kcg_comp_struct__463419
extern kcg_bool kcg_comp_struct__463419(
  struct__463419 *kcg_c1,
  struct__463419 *kcg_c2);
#endif /* kcg_comp_struct__463419 */

#ifndef kcg_comp_struct__463430
extern kcg_bool kcg_comp_struct__463430(
  struct__463430 *kcg_c1,
  struct__463430 *kcg_c2);
#endif /* kcg_comp_struct__463430 */

#ifndef kcg_comp_struct__463435
extern kcg_bool kcg_comp_struct__463435(
  struct__463435 *kcg_c1,
  struct__463435 *kcg_c2);
#endif /* kcg_comp_struct__463435 */

#ifndef kcg_comp_struct__463448
extern kcg_bool kcg_comp_struct__463448(
  struct__463448 *kcg_c1,
  struct__463448 *kcg_c2);
#endif /* kcg_comp_struct__463448 */

#ifndef kcg_comp_struct__463453
extern kcg_bool kcg_comp_struct__463453(
  struct__463453 *kcg_c1,
  struct__463453 *kcg_c2);
#endif /* kcg_comp_struct__463453 */

#ifndef kcg_comp_struct__463461
extern kcg_bool kcg_comp_struct__463461(
  struct__463461 *kcg_c1,
  struct__463461 *kcg_c2);
#endif /* kcg_comp_struct__463461 */

#ifndef kcg_comp_struct__463470
extern kcg_bool kcg_comp_struct__463470(
  struct__463470 *kcg_c1,
  struct__463470 *kcg_c2);
#endif /* kcg_comp_struct__463470 */

#ifndef kcg_comp_struct__463476
extern kcg_bool kcg_comp_struct__463476(
  struct__463476 *kcg_c1,
  struct__463476 *kcg_c2);
#endif /* kcg_comp_struct__463476 */

#ifndef kcg_comp_struct__463481
extern kcg_bool kcg_comp_struct__463481(
  struct__463481 *kcg_c1,
  struct__463481 *kcg_c2);
#endif /* kcg_comp_struct__463481 */

#ifndef kcg_comp_struct__463486
extern kcg_bool kcg_comp_struct__463486(
  struct__463486 *kcg_c1,
  struct__463486 *kcg_c2);
#endif /* kcg_comp_struct__463486 */

#ifndef kcg_comp_struct__463497
extern kcg_bool kcg_comp_struct__463497(
  struct__463497 *kcg_c1,
  struct__463497 *kcg_c2);
#endif /* kcg_comp_struct__463497 */

#ifndef kcg_comp_struct__463515
extern kcg_bool kcg_comp_struct__463515(
  struct__463515 *kcg_c1,
  struct__463515 *kcg_c2);
#endif /* kcg_comp_struct__463515 */

#ifndef kcg_comp_struct__463532
extern kcg_bool kcg_comp_struct__463532(
  struct__463532 *kcg_c1,
  struct__463532 *kcg_c2);
#endif /* kcg_comp_struct__463532 */

#ifndef kcg_comp_struct__463549
extern kcg_bool kcg_comp_struct__463549(
  struct__463549 *kcg_c1,
  struct__463549 *kcg_c2);
#endif /* kcg_comp_struct__463549 */

#ifndef kcg_comp_struct__463560
extern kcg_bool kcg_comp_struct__463560(
  struct__463560 *kcg_c1,
  struct__463560 *kcg_c2);
#endif /* kcg_comp_struct__463560 */

#ifndef kcg_comp_struct__463575
extern kcg_bool kcg_comp_struct__463575(
  struct__463575 *kcg_c1,
  struct__463575 *kcg_c2);
#endif /* kcg_comp_struct__463575 */

#ifndef kcg_comp_struct__463604
extern kcg_bool kcg_comp_struct__463604(
  struct__463604 *kcg_c1,
  struct__463604 *kcg_c2);
#endif /* kcg_comp_struct__463604 */

#ifndef kcg_comp_struct__463612
extern kcg_bool kcg_comp_struct__463612(
  struct__463612 *kcg_c1,
  struct__463612 *kcg_c2);
#endif /* kcg_comp_struct__463612 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__463427
extern kcg_bool kcg_comp_array__463427(
  array__463427 *kcg_c1,
  array__463427 *kcg_c2);
#endif /* kcg_comp_array__463427 */

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

#ifndef kcg_comp_array__463509
extern kcg_bool kcg_comp_array__463509(
  array__463509 *kcg_c1,
  array__463509 *kcg_c2);
#endif /* kcg_comp_array__463509 */

#ifndef kcg_comp_array__463512
extern kcg_bool kcg_comp_array__463512(
  array__463512 *kcg_c1,
  array__463512 *kcg_c2);
#endif /* kcg_comp_array__463512 */

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

#ifndef kcg_comp_array__463543
extern kcg_bool kcg_comp_array__463543(
  array__463543 *kcg_c1,
  array__463543 *kcg_c2);
#endif /* kcg_comp_array__463543 */

#ifndef kcg_comp_array__463546
extern kcg_bool kcg_comp_array__463546(
  array__463546 *kcg_c1,
  array__463546 *kcg_c2);
#endif /* kcg_comp_array__463546 */

#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */

#ifndef kcg_comp_array__463617
extern kcg_bool kcg_comp_array__463617(
  array__463617 *kcg_c1,
  array__463617 *kcg_c2);
#endif /* kcg_comp_array__463617 */

#ifndef kcg_comp_array_int_395
extern kcg_bool kcg_comp_array_int_395(
  array_int_395 *kcg_c1,
  array_int_395 *kcg_c2);
#endif /* kcg_comp_array_int_395 */

#ifndef kcg_comp_array_int_1
extern kcg_bool kcg_comp_array_int_1(array_int_1 *kcg_c1, array_int_1 *kcg_c2);
#endif /* kcg_comp_array_int_1 */

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

#define kcg_comp_BPos_Single_Internal_Tests kcg_comp_struct__463612

#define kcg_copy_BPos_Single_Internal_Tests kcg_copy_struct__463612

#define kcg_comp_BPos_Internal_Tests kcg_comp_array__463617

#define kcg_copy_BPos_Internal_Tests kcg_copy_array__463617

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__463419

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__463419

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__463427

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__463427

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__463430

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__463430

#define kcg_comp_P137_trackside_int_T_TM kcg_comp_struct__463486

#define kcg_copy_P137_trackside_int_T_TM kcg_copy_struct__463486

#define kcg_comp_P041_OBU_sectionlist_int_T_TM kcg_comp_array__463509

#define kcg_copy_P041_OBU_sectionlist_int_T_TM kcg_copy_array__463509

#define kcg_comp_P041_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P041_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P041_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P041_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P041_section_int_T_TM kcg_comp_struct__463497

#define kcg_copy_P041_section_int_T_TM kcg_copy_struct__463497

#define kcg_comp_P041_trackide_sectionlist_T_TM kcg_comp_array__463512

#define kcg_copy_P041_trackide_sectionlist_T_TM kcg_copy_array__463512

#define kcg_comp_P041_trackside_int_T_TM kcg_comp_struct__463515

#define kcg_copy_P041_trackside_int_T_TM kcg_copy_struct__463515

#define kcg_comp_P046_OBU_sectionlist_int_T_TM kcg_comp_array__463543

#define kcg_copy_P046_OBU_sectionlist_int_T_TM kcg_copy_array__463543

#define kcg_comp_P046_section_array_T_TM kcg_comp_array_int_2

#define kcg_copy_P046_section_array_T_TM kcg_copy_array_int_2

#define kcg_comp_P046_OBU_sectionlist_array_T_TM kcg_comp_array_int_2_33

#define kcg_copy_P046_OBU_sectionlist_array_T_TM kcg_copy_array_int_2_33

#define kcg_comp_P046_sections_array_flat_T_TM kcg_comp_array_int_66

#define kcg_copy_P046_sections_array_flat_T_TM kcg_copy_array_int_66

#define kcg_comp_P046_section_int_T_TM kcg_comp_struct__463532

#define kcg_copy_P046_section_int_T_TM kcg_copy_struct__463532

#define kcg_comp_P046_trackide_sectionlist_T_TM kcg_comp_array__463546

#define kcg_copy_P046_trackide_sectionlist_T_TM kcg_copy_array__463546

#define kcg_comp_P046_trackside_int_T_TM kcg_comp_struct__463549

#define kcg_copy_P046_trackside_int_T_TM kcg_copy_struct__463549

#define kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P042_trackside_int_T_TM kcg_comp_struct__463560

#define kcg_copy_P042_trackside_int_T_TM kcg_copy_struct__463560

#define kcg_comp_P003V1_trackside_int_T_TM_baseline2 kcg_comp_struct__463575

#define kcg_copy_P003V1_trackside_int_T_TM_baseline2 kcg_copy_struct__463575

#define kcg_comp_CompressedBaliseMessage_TM kcg_comp_struct__463448

#define kcg_copy_CompressedBaliseMessage_TM kcg_copy_struct__463448

#define kcg_comp_BaliseGroupData_TM kcg_comp_struct__463453

#define kcg_copy_BaliseGroupData_TM kcg_copy_struct__463453

#define kcg_comp_P045_trackside_int_T_TM kcg_comp_struct__463604

#define kcg_copy_P045_trackside_int_T_TM kcg_copy_struct__463604

#define kcg_comp_P255_trackside_int_T_TM kcg_comp_struct__463481

#define kcg_copy_P255_trackside_int_T_TM kcg_copy_struct__463481

#define kcg_comp_BaliseTelegramHeader_int_T_TM kcg_comp_struct__463435

#define kcg_copy_BaliseTelegramHeader_int_T_TM kcg_copy_struct__463435

#define kcg_comp_TrainPosRaw_T_InfraLib kcg_comp_struct__463470

#define kcg_copy_TrainPosRaw_T_InfraLib kcg_copy_struct__463470

#define kcg_comp_TrackSectionData_T_InfraLib kcg_comp_struct__463476

#define kcg_copy_TrackSectionData_T_InfraLib kcg_copy_struct__463476

#define kcg_comp_B_data_internal_T_InfraLib kcg_comp_struct__463461

#define kcg_copy_B_data_internal_T_InfraLib kcg_copy_struct__463461

#define kcg_comp_BaliseGroupData_Basics kcg_comp_struct__463453

#define kcg_copy_BaliseGroupData_Basics kcg_copy_struct__463453

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-08-20T18:24:03
*************************************************************$ */


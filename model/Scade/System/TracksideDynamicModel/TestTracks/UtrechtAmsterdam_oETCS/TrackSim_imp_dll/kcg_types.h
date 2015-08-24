/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-20T20:42:30
*************************************************************$ */
#ifndef _UAB_KCG_TYPES_H_
#define _UAB_KCG_TYPES_H_

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
typedef enum { UAB_Amsterdam_TM, UAB_Utrecht_TM } UAB_OrBG_TM;
/* TM::OrLine */
typedef enum { UAB_N_TM, UAB_Z_TM } UAB_OrLine_TM;
/* Q_DIR */
typedef enum {
  UAB_Q_DIR_Reverse = 0,
  UAB_Q_DIR_Nominal = 1,
  UAB_Q_DIR_Both_directions = 2
} UAB_Q_DIR;
/* NID_PACKET */
typedef kcg_int UAB_NID_PACKET;

/* TM::nid_packet_meta */
typedef kcg_int UAB_nid_packet_meta_TM;

typedef struct {
  kcg_real TrainPos_in;
  kcg_int OffsetTotal;
  kcg_real TrainPosCalibrated;
} UAB_struct__21238;

/* InfraLib::TrainPosRaw_T */
typedef UAB_struct__21238 UAB_TrainPosRaw_T_InfraLib;

typedef kcg_int UAB_array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef UAB_array_int_500 UAB_CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  UAB_NID_PACKET nid_packet;
  UAB_Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} UAB_struct__21247;

/* Common_Types_Pkg::MetadataElement_T */
typedef UAB_struct__21247 UAB_MetadataElement_T_Common_Types_Pkg;

typedef UAB_MetadataElement_T_Common_Types_Pkg UAB_array__21255[30];

/* Common_Types_Pkg::Metadata_T */
typedef UAB_array__21255 UAB_Metadata_T_Common_Types_Pkg;

typedef struct {
  UAB_Metadata_T_Common_Types_Pkg PacketHeaders;
  UAB_CompressedPacketData_T_Common_Types_Pkg PacketData;
} UAB_struct__21258;

/* Common_Types_Pkg::CompressedPackets_T */
typedef UAB_struct__21258 UAB_CompressedPackets_T_Common_Types_Pkg;

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
} UAB_struct__21263;

/* TM::BaliseTelegramHeader_int_T */
typedef UAB_struct__21263 UAB_BaliseTelegramHeader_int_T_TM;

typedef struct {
  UAB_BaliseTelegramHeader_int_T_TM Header;
  UAB_CompressedPackets_T_Common_Types_Pkg Messages;
} UAB_struct__21276;

/* TM::CompressedBaliseMessage */
typedef UAB_struct__21276 UAB_CompressedBaliseMessage_TM;

typedef struct {
  UAB_TrainPosRaw_T_InfraLib TrainPosRaw;
  UAB_CompressedBaliseMessage_TM BG_Message;
} UAB_struct__21281;

/* InfraLib::TrackSectionData_T */
typedef UAB_struct__21281 UAB_TrackSectionData_T_InfraLib;

typedef struct {
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Pos;
  UAB_OrBG_TM Or_BG;
  UAB_OrLine_TM Or_Line;
} UAB_struct__21286;

/* Basics::BaliseGroupData */
typedef UAB_struct__21286 UAB_BaliseGroupData_Basics;

/* TM::BaliseGroupData */
typedef UAB_struct__21286 UAB_BaliseGroupData_TM;

typedef struct {
  UAB_BaliseTelegramHeader_int_T_TM header;
  UAB_CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int engineering_BG_location;
  kcg_real TrainPos;
  kcg_int pig_nom_0;
  kcg_bool balise_passed;
} UAB_struct__21294;

/* InfraLib::B_data_internal_T */
typedef UAB_struct__21294 UAB_B_data_internal_T_InfraLib;

typedef struct { kcg_bool valid; kcg_int NID_PACKET; } UAB_struct__21303;

/* TM::P255_trackside_int_T */
typedef UAB_struct__21303 UAB_P255_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SRSTOP;
} UAB_struct__21308;

/* TM::P137_trackside_int_T */
typedef UAB_struct__21308 UAB_P137_trackside_int_T_TM;

typedef kcg_int UAB_array_int_3[3];

/* TM::P041_section_array_T */
typedef UAB_array_int_3 UAB_P041_section_array_T_TM;

typedef struct {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
} UAB_struct__21319;

/* TM::P041_section_int_T */
typedef UAB_struct__21319 UAB_P041_section_int_T_TM;

typedef UAB_P041_section_array_T_TM UAB_array_int_3_33[33];

/* TM::P041_OBU_sectionlist_array_T */
typedef UAB_array_int_3_33 UAB_P041_OBU_sectionlist_array_T_TM;

typedef kcg_int UAB_array_int_99[99];

/* TM::P041_sections_array_flat_T */
typedef UAB_array_int_99 UAB_P041_sections_array_flat_T_TM;

typedef UAB_P041_section_int_T_TM UAB_array__21331[33];

/* TM::P041_OBU_sectionlist_int_T */
typedef UAB_array__21331 UAB_P041_OBU_sectionlist_int_T_TM;

typedef UAB_P041_section_int_T_TM UAB_array__21334[32];

/* TM::P041_trackide_sectionlist_T */
typedef UAB_array__21334 UAB_P041_trackide_sectionlist_T_TM;

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
  UAB_P041_trackide_sectionlist_T_TM SECTIONS;
} UAB_struct__21337;

/* TM::P041_trackside_int_T */
typedef UAB_struct__21337 UAB_P041_trackside_int_T_TM;

typedef kcg_int UAB_array_int_2[2];

/* TM::P046_section_array_T */
typedef UAB_array_int_2 UAB_P046_section_array_T_TM;

typedef struct { kcg_int M_LEVELTR; kcg_int NID_NTC; } UAB_struct__21354;

/* TM::P046_section_int_T */
typedef UAB_struct__21354 UAB_P046_section_int_T_TM;

typedef UAB_P046_section_array_T_TM UAB_array_int_2_33[33];

/* TM::P046_OBU_sectionlist_array_T */
typedef UAB_array_int_2_33 UAB_P046_OBU_sectionlist_array_T_TM;

typedef kcg_int UAB_array_int_66[66];

/* TM::P046_sections_array_flat_T */
typedef UAB_array_int_66 UAB_P046_sections_array_flat_T_TM;

typedef UAB_P046_section_int_T_TM UAB_array__21365[33];

/* TM::P046_OBU_sectionlist_int_T */
typedef UAB_array__21365 UAB_P046_OBU_sectionlist_int_T_TM;

typedef UAB_P046_section_int_T_TM UAB_array__21368[32];

/* TM::P046_trackide_sectionlist_T */
typedef UAB_array__21368 UAB_P046_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int N_ITER;
  UAB_P046_trackide_sectionlist_T_TM SECTIONS;
} UAB_struct__21371;

/* TM::P046_trackside_int_T */
typedef UAB_struct__21371 UAB_P046_trackside_int_T_TM;

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
} UAB_struct__21382;

/* TM::P042_trackside_int_T */
typedef UAB_struct__21382 UAB_P042_trackside_int_T_TM;

typedef kcg_int UAB_array_int_32[32];

/* TM_baseline2::P003V1_trackide_sectionlist_T */
typedef UAB_array_int_32 UAB_P003V1_trackide_sectionlist_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_VALIDNV;
  kcg_int N_ITER;
  UAB_P003V1_trackide_sectionlist_T_TM_baseline2 SECTIONS;
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
} UAB_struct__21397;

/* TM_baseline2::P003V1_trackside_int_T */
typedef UAB_struct__21397 UAB_P003V1_trackside_int_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_MN;
} UAB_struct__21426;

/* TM::P045_trackside_int_T */
typedef UAB_struct__21426 UAB_P045_trackside_int_T_TM;

typedef kcg_int UAB_array_int_430[430];

typedef kcg_int UAB_array_int_444[444];

typedef kcg_int UAB_array_int_395[395];

#ifndef UAB_kcg_copy_struct__21238
#define UAB_kcg_copy_struct__21238(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (UAB_struct__21238)))
#endif /* UAB_kcg_copy_struct__21238 */

#ifndef UAB_kcg_copy_struct__21247
#define UAB_kcg_copy_struct__21247(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (UAB_struct__21247)))
#endif /* UAB_kcg_copy_struct__21247 */

#ifndef UAB_kcg_copy_struct__21258
#define UAB_kcg_copy_struct__21258(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (UAB_struct__21258)))
#endif /* UAB_kcg_copy_struct__21258 */

#ifndef UAB_kcg_copy_struct__21263
#define UAB_kcg_copy_struct__21263(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (UAB_struct__21263)))
#endif /* UAB_kcg_copy_struct__21263 */

#ifndef UAB_kcg_copy_struct__21276
#define UAB_kcg_copy_struct__21276(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (UAB_struct__21276)))
#endif /* UAB_kcg_copy_struct__21276 */

#ifndef UAB_kcg_copy_struct__21281
#define UAB_kcg_copy_struct__21281(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (UAB_struct__21281)))
#endif /* UAB_kcg_copy_struct__21281 */

#ifndef UAB_kcg_copy_struct__21286
#define UAB_kcg_copy_struct__21286(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (UAB_struct__21286)))
#endif /* UAB_kcg_copy_struct__21286 */

#ifndef UAB_kcg_copy_struct__21294
#define UAB_kcg_copy_struct__21294(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (UAB_struct__21294)))
#endif /* UAB_kcg_copy_struct__21294 */

#ifndef UAB_kcg_copy_struct__21303
#define UAB_kcg_copy_struct__21303(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (UAB_struct__21303)))
#endif /* UAB_kcg_copy_struct__21303 */

#ifndef UAB_kcg_copy_struct__21308
#define UAB_kcg_copy_struct__21308(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (UAB_struct__21308)))
#endif /* UAB_kcg_copy_struct__21308 */

#ifndef UAB_kcg_copy_struct__21319
#define UAB_kcg_copy_struct__21319(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (UAB_struct__21319)))
#endif /* UAB_kcg_copy_struct__21319 */

#ifndef UAB_kcg_copy_struct__21337
#define UAB_kcg_copy_struct__21337(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (UAB_struct__21337)))
#endif /* UAB_kcg_copy_struct__21337 */

#ifndef UAB_kcg_copy_struct__21354
#define UAB_kcg_copy_struct__21354(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (UAB_struct__21354)))
#endif /* UAB_kcg_copy_struct__21354 */

#ifndef UAB_kcg_copy_struct__21371
#define UAB_kcg_copy_struct__21371(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (UAB_struct__21371)))
#endif /* UAB_kcg_copy_struct__21371 */

#ifndef UAB_kcg_copy_struct__21382
#define UAB_kcg_copy_struct__21382(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (UAB_struct__21382)))
#endif /* UAB_kcg_copy_struct__21382 */

#ifndef UAB_kcg_copy_struct__21397
#define UAB_kcg_copy_struct__21397(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (UAB_struct__21397)))
#endif /* UAB_kcg_copy_struct__21397 */

#ifndef UAB_kcg_copy_struct__21426
#define UAB_kcg_copy_struct__21426(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (UAB_struct__21426)))
#endif /* UAB_kcg_copy_struct__21426 */

#ifndef UAB_kcg_copy_array_int_500
#define UAB_kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (UAB_array_int_500)))
#endif /* UAB_kcg_copy_array_int_500 */

#ifndef UAB_kcg_copy_array__21255
#define UAB_kcg_copy_array__21255(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (UAB_array__21255)))
#endif /* UAB_kcg_copy_array__21255 */

#ifndef UAB_kcg_copy_array_int_3
#define UAB_kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (UAB_array_int_3)))
#endif /* UAB_kcg_copy_array_int_3 */

#ifndef UAB_kcg_copy_array_int_3_33
#define UAB_kcg_copy_array_int_3_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (UAB_array_int_3_33)))
#endif /* UAB_kcg_copy_array_int_3_33 */

#ifndef UAB_kcg_copy_array_int_99
#define UAB_kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (UAB_array_int_99)))
#endif /* UAB_kcg_copy_array_int_99 */

#ifndef UAB_kcg_copy_array__21331
#define UAB_kcg_copy_array__21331(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (UAB_array__21331)))
#endif /* UAB_kcg_copy_array__21331 */

#ifndef UAB_kcg_copy_array__21334
#define UAB_kcg_copy_array__21334(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (UAB_array__21334)))
#endif /* UAB_kcg_copy_array__21334 */

#ifndef UAB_kcg_copy_array_int_2
#define UAB_kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (UAB_array_int_2)))
#endif /* UAB_kcg_copy_array_int_2 */

#ifndef UAB_kcg_copy_array_int_2_33
#define UAB_kcg_copy_array_int_2_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (UAB_array_int_2_33)))
#endif /* UAB_kcg_copy_array_int_2_33 */

#ifndef UAB_kcg_copy_array_int_66
#define UAB_kcg_copy_array_int_66(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (UAB_array_int_66)))
#endif /* UAB_kcg_copy_array_int_66 */

#ifndef UAB_kcg_copy_array__21365
#define UAB_kcg_copy_array__21365(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (UAB_array__21365)))
#endif /* UAB_kcg_copy_array__21365 */

#ifndef UAB_kcg_copy_array__21368
#define UAB_kcg_copy_array__21368(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (UAB_array__21368)))
#endif /* UAB_kcg_copy_array__21368 */

#ifndef UAB_kcg_copy_array_int_32
#define UAB_kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (UAB_array_int_32)))
#endif /* UAB_kcg_copy_array_int_32 */

#ifndef UAB_kcg_copy_array_int_430
#define UAB_kcg_copy_array_int_430(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (UAB_array_int_430)))
#endif /* UAB_kcg_copy_array_int_430 */

#ifndef UAB_kcg_copy_array_int_444
#define UAB_kcg_copy_array_int_444(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (UAB_array_int_444)))
#endif /* UAB_kcg_copy_array_int_444 */

#ifndef UAB_kcg_copy_array_int_395
#define UAB_kcg_copy_array_int_395(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (UAB_array_int_395)))
#endif /* UAB_kcg_copy_array_int_395 */

#ifndef UAB_kcg_comp_struct__21238
extern kcg_bool UAB_kcg_comp_struct__21238(
  UAB_struct__21238 *kcg_c1,
  UAB_struct__21238 *kcg_c2);
#endif /* UAB_kcg_comp_struct__21238 */

#ifndef UAB_kcg_comp_struct__21247
extern kcg_bool UAB_kcg_comp_struct__21247(
  UAB_struct__21247 *kcg_c1,
  UAB_struct__21247 *kcg_c2);
#endif /* UAB_kcg_comp_struct__21247 */

#ifndef UAB_kcg_comp_struct__21258
extern kcg_bool UAB_kcg_comp_struct__21258(
  UAB_struct__21258 *kcg_c1,
  UAB_struct__21258 *kcg_c2);
#endif /* UAB_kcg_comp_struct__21258 */

#ifndef UAB_kcg_comp_struct__21263
extern kcg_bool UAB_kcg_comp_struct__21263(
  UAB_struct__21263 *kcg_c1,
  UAB_struct__21263 *kcg_c2);
#endif /* UAB_kcg_comp_struct__21263 */

#ifndef UAB_kcg_comp_struct__21276
extern kcg_bool UAB_kcg_comp_struct__21276(
  UAB_struct__21276 *kcg_c1,
  UAB_struct__21276 *kcg_c2);
#endif /* UAB_kcg_comp_struct__21276 */

#ifndef UAB_kcg_comp_struct__21281
extern kcg_bool UAB_kcg_comp_struct__21281(
  UAB_struct__21281 *kcg_c1,
  UAB_struct__21281 *kcg_c2);
#endif /* UAB_kcg_comp_struct__21281 */

#ifndef UAB_kcg_comp_struct__21286
extern kcg_bool UAB_kcg_comp_struct__21286(
  UAB_struct__21286 *kcg_c1,
  UAB_struct__21286 *kcg_c2);
#endif /* UAB_kcg_comp_struct__21286 */

#ifndef UAB_kcg_comp_struct__21294
extern kcg_bool UAB_kcg_comp_struct__21294(
  UAB_struct__21294 *kcg_c1,
  UAB_struct__21294 *kcg_c2);
#endif /* UAB_kcg_comp_struct__21294 */

#ifndef UAB_kcg_comp_struct__21303
extern kcg_bool UAB_kcg_comp_struct__21303(
  UAB_struct__21303 *kcg_c1,
  UAB_struct__21303 *kcg_c2);
#endif /* UAB_kcg_comp_struct__21303 */

#ifndef UAB_kcg_comp_struct__21308
extern kcg_bool UAB_kcg_comp_struct__21308(
  UAB_struct__21308 *kcg_c1,
  UAB_struct__21308 *kcg_c2);
#endif /* UAB_kcg_comp_struct__21308 */

#ifndef UAB_kcg_comp_struct__21319
extern kcg_bool UAB_kcg_comp_struct__21319(
  UAB_struct__21319 *kcg_c1,
  UAB_struct__21319 *kcg_c2);
#endif /* UAB_kcg_comp_struct__21319 */

#ifndef UAB_kcg_comp_struct__21337
extern kcg_bool UAB_kcg_comp_struct__21337(
  UAB_struct__21337 *kcg_c1,
  UAB_struct__21337 *kcg_c2);
#endif /* UAB_kcg_comp_struct__21337 */

#ifndef UAB_kcg_comp_struct__21354
extern kcg_bool UAB_kcg_comp_struct__21354(
  UAB_struct__21354 *kcg_c1,
  UAB_struct__21354 *kcg_c2);
#endif /* UAB_kcg_comp_struct__21354 */

#ifndef UAB_kcg_comp_struct__21371
extern kcg_bool UAB_kcg_comp_struct__21371(
  UAB_struct__21371 *kcg_c1,
  UAB_struct__21371 *kcg_c2);
#endif /* UAB_kcg_comp_struct__21371 */

#ifndef UAB_kcg_comp_struct__21382
extern kcg_bool UAB_kcg_comp_struct__21382(
  UAB_struct__21382 *kcg_c1,
  UAB_struct__21382 *kcg_c2);
#endif /* UAB_kcg_comp_struct__21382 */

#ifndef UAB_kcg_comp_struct__21397
extern kcg_bool UAB_kcg_comp_struct__21397(
  UAB_struct__21397 *kcg_c1,
  UAB_struct__21397 *kcg_c2);
#endif /* UAB_kcg_comp_struct__21397 */

#ifndef UAB_kcg_comp_struct__21426
extern kcg_bool UAB_kcg_comp_struct__21426(
  UAB_struct__21426 *kcg_c1,
  UAB_struct__21426 *kcg_c2);
#endif /* UAB_kcg_comp_struct__21426 */

#ifndef UAB_kcg_comp_array_int_500
extern kcg_bool UAB_kcg_comp_array_int_500(
  UAB_array_int_500 *kcg_c1,
  UAB_array_int_500 *kcg_c2);
#endif /* UAB_kcg_comp_array_int_500 */

#ifndef UAB_kcg_comp_array__21255
extern kcg_bool UAB_kcg_comp_array__21255(
  UAB_array__21255 *kcg_c1,
  UAB_array__21255 *kcg_c2);
#endif /* UAB_kcg_comp_array__21255 */

#ifndef UAB_kcg_comp_array_int_3
extern kcg_bool UAB_kcg_comp_array_int_3(
  UAB_array_int_3 *kcg_c1,
  UAB_array_int_3 *kcg_c2);
#endif /* UAB_kcg_comp_array_int_3 */

#ifndef UAB_kcg_comp_array_int_3_33
extern kcg_bool UAB_kcg_comp_array_int_3_33(
  UAB_array_int_3_33 *kcg_c1,
  UAB_array_int_3_33 *kcg_c2);
#endif /* UAB_kcg_comp_array_int_3_33 */

#ifndef UAB_kcg_comp_array_int_99
extern kcg_bool UAB_kcg_comp_array_int_99(
  UAB_array_int_99 *kcg_c1,
  UAB_array_int_99 *kcg_c2);
#endif /* UAB_kcg_comp_array_int_99 */

#ifndef UAB_kcg_comp_array__21331
extern kcg_bool UAB_kcg_comp_array__21331(
  UAB_array__21331 *kcg_c1,
  UAB_array__21331 *kcg_c2);
#endif /* UAB_kcg_comp_array__21331 */

#ifndef UAB_kcg_comp_array__21334
extern kcg_bool UAB_kcg_comp_array__21334(
  UAB_array__21334 *kcg_c1,
  UAB_array__21334 *kcg_c2);
#endif /* UAB_kcg_comp_array__21334 */

#ifndef UAB_kcg_comp_array_int_2
extern kcg_bool UAB_kcg_comp_array_int_2(
  UAB_array_int_2 *kcg_c1,
  UAB_array_int_2 *kcg_c2);
#endif /* UAB_kcg_comp_array_int_2 */

#ifndef UAB_kcg_comp_array_int_2_33
extern kcg_bool UAB_kcg_comp_array_int_2_33(
  UAB_array_int_2_33 *kcg_c1,
  UAB_array_int_2_33 *kcg_c2);
#endif /* UAB_kcg_comp_array_int_2_33 */

#ifndef UAB_kcg_comp_array_int_66
extern kcg_bool UAB_kcg_comp_array_int_66(
  UAB_array_int_66 *kcg_c1,
  UAB_array_int_66 *kcg_c2);
#endif /* UAB_kcg_comp_array_int_66 */

#ifndef UAB_kcg_comp_array__21365
extern kcg_bool UAB_kcg_comp_array__21365(
  UAB_array__21365 *kcg_c1,
  UAB_array__21365 *kcg_c2);
#endif /* UAB_kcg_comp_array__21365 */

#ifndef UAB_kcg_comp_array__21368
extern kcg_bool UAB_kcg_comp_array__21368(
  UAB_array__21368 *kcg_c1,
  UAB_array__21368 *kcg_c2);
#endif /* UAB_kcg_comp_array__21368 */

#ifndef UAB_kcg_comp_array_int_32
extern kcg_bool UAB_kcg_comp_array_int_32(
  UAB_array_int_32 *kcg_c1,
  UAB_array_int_32 *kcg_c2);
#endif /* UAB_kcg_comp_array_int_32 */

#ifndef UAB_kcg_comp_array_int_430
extern kcg_bool UAB_kcg_comp_array_int_430(
  UAB_array_int_430 *kcg_c1,
  UAB_array_int_430 *kcg_c2);
#endif /* UAB_kcg_comp_array_int_430 */

#ifndef UAB_kcg_comp_array_int_444
extern kcg_bool UAB_kcg_comp_array_int_444(
  UAB_array_int_444 *kcg_c1,
  UAB_array_int_444 *kcg_c2);
#endif /* UAB_kcg_comp_array_int_444 */

#ifndef UAB_kcg_comp_array_int_395
extern kcg_bool UAB_kcg_comp_array_int_395(
  UAB_array_int_395 *kcg_c1,
  UAB_array_int_395 *kcg_c2);
#endif /* UAB_kcg_comp_array_int_395 */

#define UAB_kcg_comp_P045_trackside_int_T_TM UAB_kcg_comp_struct__21426

#define UAB_kcg_copy_P045_trackside_int_T_TM UAB_kcg_copy_struct__21426

#define UAB_kcg_comp_P255_trackside_int_T_TM UAB_kcg_comp_struct__21303

#define UAB_kcg_copy_P255_trackside_int_T_TM UAB_kcg_copy_struct__21303

#define UAB_kcg_comp_BaliseTelegramHeader_int_T_TM UAB_kcg_comp_struct__21263

#define UAB_kcg_copy_BaliseTelegramHeader_int_T_TM UAB_kcg_copy_struct__21263

#define UAB_kcg_comp_CompressedPacketData_T_Common_Types_Pkg UAB_kcg_comp_array_int_500

#define UAB_kcg_copy_CompressedPacketData_T_Common_Types_Pkg UAB_kcg_copy_array_int_500

#define UAB_kcg_comp_MetadataElement_T_Common_Types_Pkg UAB_kcg_comp_struct__21247

#define UAB_kcg_copy_MetadataElement_T_Common_Types_Pkg UAB_kcg_copy_struct__21247

#define UAB_kcg_comp_BaliseGroupData_Basics UAB_kcg_comp_struct__21286

#define UAB_kcg_copy_BaliseGroupData_Basics UAB_kcg_copy_struct__21286

#define UAB_kcg_comp_Metadata_T_Common_Types_Pkg UAB_kcg_comp_array__21255

#define UAB_kcg_copy_Metadata_T_Common_Types_Pkg UAB_kcg_copy_array__21255

#define UAB_kcg_comp_CompressedPackets_T_Common_Types_Pkg UAB_kcg_comp_struct__21258

#define UAB_kcg_copy_CompressedPackets_T_Common_Types_Pkg UAB_kcg_copy_struct__21258

#define UAB_kcg_comp_TrainPosRaw_T_InfraLib UAB_kcg_comp_struct__21238

#define UAB_kcg_copy_TrainPosRaw_T_InfraLib UAB_kcg_copy_struct__21238

#define UAB_kcg_comp_TrackSectionData_T_InfraLib UAB_kcg_comp_struct__21281

#define UAB_kcg_copy_TrackSectionData_T_InfraLib UAB_kcg_copy_struct__21281

#define UAB_kcg_comp_B_data_internal_T_InfraLib UAB_kcg_comp_struct__21294

#define UAB_kcg_copy_B_data_internal_T_InfraLib UAB_kcg_copy_struct__21294

#define UAB_kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2 UAB_kcg_comp_array_int_32

#define UAB_kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2 UAB_kcg_copy_array_int_32

#define UAB_kcg_comp_P003V1_trackside_int_T_TM_baseline2 UAB_kcg_comp_struct__21397

#define UAB_kcg_copy_P003V1_trackside_int_T_TM_baseline2 UAB_kcg_copy_struct__21397

#define UAB_kcg_comp_P137_trackside_int_T_TM UAB_kcg_comp_struct__21308

#define UAB_kcg_copy_P137_trackside_int_T_TM UAB_kcg_copy_struct__21308

#define UAB_kcg_comp_P041_OBU_sectionlist_int_T_TM UAB_kcg_comp_array__21331

#define UAB_kcg_copy_P041_OBU_sectionlist_int_T_TM UAB_kcg_copy_array__21331

#define UAB_kcg_comp_P041_section_array_T_TM UAB_kcg_comp_array_int_3

#define UAB_kcg_copy_P041_section_array_T_TM UAB_kcg_copy_array_int_3

#define UAB_kcg_comp_P041_OBU_sectionlist_array_T_TM UAB_kcg_comp_array_int_3_33

#define UAB_kcg_copy_P041_OBU_sectionlist_array_T_TM UAB_kcg_copy_array_int_3_33

#define UAB_kcg_comp_P041_sections_array_flat_T_TM UAB_kcg_comp_array_int_99

#define UAB_kcg_copy_P041_sections_array_flat_T_TM UAB_kcg_copy_array_int_99

#define UAB_kcg_comp_P041_section_int_T_TM UAB_kcg_comp_struct__21319

#define UAB_kcg_copy_P041_section_int_T_TM UAB_kcg_copy_struct__21319

#define UAB_kcg_comp_P041_trackide_sectionlist_T_TM UAB_kcg_comp_array__21334

#define UAB_kcg_copy_P041_trackide_sectionlist_T_TM UAB_kcg_copy_array__21334

#define UAB_kcg_comp_P041_trackside_int_T_TM UAB_kcg_comp_struct__21337

#define UAB_kcg_copy_P041_trackside_int_T_TM UAB_kcg_copy_struct__21337

#define UAB_kcg_comp_P046_OBU_sectionlist_int_T_TM UAB_kcg_comp_array__21365

#define UAB_kcg_copy_P046_OBU_sectionlist_int_T_TM UAB_kcg_copy_array__21365

#define UAB_kcg_comp_P046_section_array_T_TM UAB_kcg_comp_array_int_2

#define UAB_kcg_copy_P046_section_array_T_TM UAB_kcg_copy_array_int_2

#define UAB_kcg_comp_P046_OBU_sectionlist_array_T_TM UAB_kcg_comp_array_int_2_33

#define UAB_kcg_copy_P046_OBU_sectionlist_array_T_TM UAB_kcg_copy_array_int_2_33

#define UAB_kcg_comp_P046_sections_array_flat_T_TM UAB_kcg_comp_array_int_66

#define UAB_kcg_copy_P046_sections_array_flat_T_TM UAB_kcg_copy_array_int_66

#define UAB_kcg_comp_P046_section_int_T_TM UAB_kcg_comp_struct__21354

#define UAB_kcg_copy_P046_section_int_T_TM UAB_kcg_copy_struct__21354

#define UAB_kcg_comp_P046_trackide_sectionlist_T_TM UAB_kcg_comp_array__21368

#define UAB_kcg_copy_P046_trackide_sectionlist_T_TM UAB_kcg_copy_array__21368

#define UAB_kcg_comp_P046_trackside_int_T_TM UAB_kcg_comp_struct__21371

#define UAB_kcg_copy_P046_trackside_int_T_TM UAB_kcg_copy_struct__21371

#define UAB_kcg_comp_P042_trackside_int_T_TM UAB_kcg_comp_struct__21382

#define UAB_kcg_copy_P042_trackside_int_T_TM UAB_kcg_copy_struct__21382

#define UAB_kcg_comp_CompressedBaliseMessage_TM UAB_kcg_comp_struct__21276

#define UAB_kcg_copy_CompressedBaliseMessage_TM UAB_kcg_copy_struct__21276

#define UAB_kcg_comp_BaliseGroupData_TM UAB_kcg_comp_struct__21286

#define UAB_kcg_copy_BaliseGroupData_TM UAB_kcg_copy_struct__21286

#endif /* _UAB_KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-08-20T20:42:30
*************************************************************$ */


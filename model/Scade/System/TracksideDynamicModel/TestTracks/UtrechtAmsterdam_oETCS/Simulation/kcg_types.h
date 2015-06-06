/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-06T10:22:38
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
/* NID_PACKET */
typedef kcg_int NID_PACKET;

typedef struct {
  kcg_real TrainPos_in;
  kcg_int OffsetTotal;
  kcg_real TrainPosCalibrated;
} struct__1341;

/* InfraLib::TrainPosRaw_T */
typedef struct__1341 TrainPosRaw_T_InfraLib;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__1350;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__1350 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__1358[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__1358 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__1361;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__1361 CompressedPackets_T_Common_Types_Pkg;

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
} struct__1366;

/* TM::BaliseTelegramHeader_int_T */
typedef struct__1366 BaliseTelegramHeader_int_T_TM;

typedef struct {
  BaliseTelegramHeader_int_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__1379;

/* TM::CompressedBaliseMessage */
typedef struct__1379 CompressedBaliseMessage_TM;

typedef struct {
  TrainPosRaw_T_InfraLib TrainPosRaw;
  CompressedBaliseMessage_TM BG_Message;
} struct__1384;

/* InfraLib::TrackSectionData_T */
typedef struct__1384 TrackSectionData_T_InfraLib;

typedef struct {
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Pos;
  OrBG_TM Or_BG;
  OrLine_TM Or_Line;
} struct__1389;

/* TM::BaliseGroupData */
typedef struct__1389 BaliseGroupData_TM;

/* Basics::BaliseGroupData */
typedef struct__1389 BaliseGroupData_Basics;

typedef struct {
  BaliseTelegramHeader_int_T_TM header;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int engineering_BG_location;
  kcg_real TrainPos;
  kcg_int pig_nom_0;
  kcg_bool balise_passed;
} struct__1397;

/* InfraLib::B_data_internal_T */
typedef struct__1397 B_data_internal_T_InfraLib;

#ifndef kcg_copy_struct__1341
#define kcg_copy_struct__1341(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1341)))
#endif /* kcg_copy_struct__1341 */

#ifndef kcg_copy_struct__1350
#define kcg_copy_struct__1350(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1350)))
#endif /* kcg_copy_struct__1350 */

#ifndef kcg_copy_struct__1361
#define kcg_copy_struct__1361(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1361)))
#endif /* kcg_copy_struct__1361 */

#ifndef kcg_copy_struct__1366
#define kcg_copy_struct__1366(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1366)))
#endif /* kcg_copy_struct__1366 */

#ifndef kcg_copy_struct__1379
#define kcg_copy_struct__1379(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1379)))
#endif /* kcg_copy_struct__1379 */

#ifndef kcg_copy_struct__1384
#define kcg_copy_struct__1384(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1384)))
#endif /* kcg_copy_struct__1384 */

#ifndef kcg_copy_struct__1389
#define kcg_copy_struct__1389(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1389)))
#endif /* kcg_copy_struct__1389 */

#ifndef kcg_copy_struct__1397
#define kcg_copy_struct__1397(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1397)))
#endif /* kcg_copy_struct__1397 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__1358
#define kcg_copy_array__1358(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__1358)))
#endif /* kcg_copy_array__1358 */

#ifndef kcg_comp_struct__1341
extern kcg_bool kcg_comp_struct__1341(
  struct__1341 *kcg_c1,
  struct__1341 *kcg_c2);
#endif /* kcg_comp_struct__1341 */

#ifndef kcg_comp_struct__1350
extern kcg_bool kcg_comp_struct__1350(
  struct__1350 *kcg_c1,
  struct__1350 *kcg_c2);
#endif /* kcg_comp_struct__1350 */

#ifndef kcg_comp_struct__1361
extern kcg_bool kcg_comp_struct__1361(
  struct__1361 *kcg_c1,
  struct__1361 *kcg_c2);
#endif /* kcg_comp_struct__1361 */

#ifndef kcg_comp_struct__1366
extern kcg_bool kcg_comp_struct__1366(
  struct__1366 *kcg_c1,
  struct__1366 *kcg_c2);
#endif /* kcg_comp_struct__1366 */

#ifndef kcg_comp_struct__1379
extern kcg_bool kcg_comp_struct__1379(
  struct__1379 *kcg_c1,
  struct__1379 *kcg_c2);
#endif /* kcg_comp_struct__1379 */

#ifndef kcg_comp_struct__1384
extern kcg_bool kcg_comp_struct__1384(
  struct__1384 *kcg_c1,
  struct__1384 *kcg_c2);
#endif /* kcg_comp_struct__1384 */

#ifndef kcg_comp_struct__1389
extern kcg_bool kcg_comp_struct__1389(
  struct__1389 *kcg_c1,
  struct__1389 *kcg_c2);
#endif /* kcg_comp_struct__1389 */

#ifndef kcg_comp_struct__1397
extern kcg_bool kcg_comp_struct__1397(
  struct__1397 *kcg_c1,
  struct__1397 *kcg_c2);
#endif /* kcg_comp_struct__1397 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__1358
extern kcg_bool kcg_comp_array__1358(array__1358 *kcg_c1, array__1358 *kcg_c2);
#endif /* kcg_comp_array__1358 */

#define kcg_comp_BaliseGroupData_Basics kcg_comp_struct__1389

#define kcg_copy_BaliseGroupData_Basics kcg_copy_struct__1389

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__1350

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__1350

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__1358

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__1358

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__1361

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__1361

#define kcg_comp_BaliseGroupData_TM kcg_comp_struct__1389

#define kcg_copy_BaliseGroupData_TM kcg_copy_struct__1389

#define kcg_comp_BaliseTelegramHeader_int_T_TM kcg_comp_struct__1366

#define kcg_copy_BaliseTelegramHeader_int_T_TM kcg_copy_struct__1366

#define kcg_comp_CompressedBaliseMessage_TM kcg_comp_struct__1379

#define kcg_copy_CompressedBaliseMessage_TM kcg_copy_struct__1379

#define kcg_comp_B_data_internal_T_InfraLib kcg_comp_struct__1397

#define kcg_copy_B_data_internal_T_InfraLib kcg_copy_struct__1397

#define kcg_comp_TrainPosRaw_T_InfraLib kcg_comp_struct__1341

#define kcg_copy_TrainPosRaw_T_InfraLib kcg_copy_struct__1341

#define kcg_comp_TrackSectionData_T_InfraLib kcg_comp_struct__1384

#define kcg_copy_TrackSectionData_T_InfraLib kcg_copy_struct__1384

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-06-06T10:22:38
*************************************************************$ */


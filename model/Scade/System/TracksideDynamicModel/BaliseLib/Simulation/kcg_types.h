/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/BaliseLib/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-27T21:06:24
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
/* NID_PACKET */
typedef kcg_int NID_PACKET;

typedef struct {
  kcg_real TrainPos_in;
  kcg_int OffsetTotal;
  kcg_real TrainPosCalibrated;
} struct__297;

/* InfraLib::TrainPosRaw_T */
typedef struct__297 TrainPosRaw_T_InfraLib;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__306;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__306 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__314[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__314 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__317;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__317 CompressedPackets_T_Common_Types_Pkg;

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
} struct__322;

/* TM_BaliseTelegramHeader_int_T */
typedef struct__322 TM_BaliseTelegramHeader_int_T;

typedef struct {
  TM_BaliseTelegramHeader_int_T Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__335;

/* TM_CompressedBaliseMessage */
typedef struct__335 TM_CompressedBaliseMessage;

typedef struct {
  TrainPosRaw_T_InfraLib TrainPosRaw;
  TM_CompressedBaliseMessage BG_Message;
} struct__340;

/* InfraLib::TrackSectionData_T */
typedef struct__340 TrackSectionData_T_InfraLib;

#ifndef kcg_copy_struct__297
#define kcg_copy_struct__297(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__297)))
#endif /* kcg_copy_struct__297 */

#ifndef kcg_copy_struct__306
#define kcg_copy_struct__306(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__306)))
#endif /* kcg_copy_struct__306 */

#ifndef kcg_copy_struct__317
#define kcg_copy_struct__317(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__317)))
#endif /* kcg_copy_struct__317 */

#ifndef kcg_copy_struct__322
#define kcg_copy_struct__322(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__322)))
#endif /* kcg_copy_struct__322 */

#ifndef kcg_copy_struct__335
#define kcg_copy_struct__335(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__335)))
#endif /* kcg_copy_struct__335 */

#ifndef kcg_copy_struct__340
#define kcg_copy_struct__340(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__340)))
#endif /* kcg_copy_struct__340 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__314
#define kcg_copy_array__314(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__314)))
#endif /* kcg_copy_array__314 */

#ifndef kcg_comp_struct__297
extern kcg_bool kcg_comp_struct__297(struct__297 *kcg_c1, struct__297 *kcg_c2);
#endif /* kcg_comp_struct__297 */

#ifndef kcg_comp_struct__306
extern kcg_bool kcg_comp_struct__306(struct__306 *kcg_c1, struct__306 *kcg_c2);
#endif /* kcg_comp_struct__306 */

#ifndef kcg_comp_struct__317
extern kcg_bool kcg_comp_struct__317(struct__317 *kcg_c1, struct__317 *kcg_c2);
#endif /* kcg_comp_struct__317 */

#ifndef kcg_comp_struct__322
extern kcg_bool kcg_comp_struct__322(struct__322 *kcg_c1, struct__322 *kcg_c2);
#endif /* kcg_comp_struct__322 */

#ifndef kcg_comp_struct__335
extern kcg_bool kcg_comp_struct__335(struct__335 *kcg_c1, struct__335 *kcg_c2);
#endif /* kcg_comp_struct__335 */

#ifndef kcg_comp_struct__340
extern kcg_bool kcg_comp_struct__340(struct__340 *kcg_c1, struct__340 *kcg_c2);
#endif /* kcg_comp_struct__340 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__314
extern kcg_bool kcg_comp_array__314(array__314 *kcg_c1, array__314 *kcg_c2);
#endif /* kcg_comp_array__314 */

#define kcg_comp_TrainPosRaw_T_InfraLib kcg_comp_struct__297

#define kcg_copy_TrainPosRaw_T_InfraLib kcg_copy_struct__297

#define kcg_comp_TrackSectionData_T_InfraLib kcg_comp_struct__340

#define kcg_copy_TrackSectionData_T_InfraLib kcg_copy_struct__340

#define kcg_comp_TM_BaliseTelegramHeader_int_T kcg_comp_struct__322

#define kcg_copy_TM_BaliseTelegramHeader_int_T kcg_copy_struct__322

#define kcg_comp_TM_CompressedBaliseMessage kcg_comp_struct__335

#define kcg_copy_TM_CompressedBaliseMessage kcg_copy_struct__335

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__306

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__306

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__314

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__314

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__317

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__317

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-04-27T21:06:24
*************************************************************$ */


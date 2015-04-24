/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/BaliseLib/Simulation\kcg_s2c_config.txt
** Generation date: 2015-04-23T17:13:00
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

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__308;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__308 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__316[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__316 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__319;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__319 CompressedPackets_T_Common_Types_Pkg;

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
} struct__324;

/* TM_BaliseTelegramHeader_int_T */
typedef struct__324 TM_BaliseTelegramHeader_int_T;

typedef struct {
  TM_BaliseTelegramHeader_int_T header;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int engineering_BG_location;
  kcg_real TrainPos;
  kcg_int pig_nom_0;
} struct__337;

/* InfraLib::B_data_internal */
typedef struct__337 B_data_internal_InfraLib;

#ifndef kcg_copy_struct__308
#define kcg_copy_struct__308(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__308)))
#endif /* kcg_copy_struct__308 */

#ifndef kcg_copy_struct__319
#define kcg_copy_struct__319(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__319)))
#endif /* kcg_copy_struct__319 */

#ifndef kcg_copy_struct__324
#define kcg_copy_struct__324(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__324)))
#endif /* kcg_copy_struct__324 */

#ifndef kcg_copy_struct__337
#define kcg_copy_struct__337(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__337)))
#endif /* kcg_copy_struct__337 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__316
#define kcg_copy_array__316(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__316)))
#endif /* kcg_copy_array__316 */

#ifndef kcg_comp_struct__308
extern kcg_bool kcg_comp_struct__308(struct__308 *kcg_c1, struct__308 *kcg_c2);
#endif /* kcg_comp_struct__308 */

#ifndef kcg_comp_struct__319
extern kcg_bool kcg_comp_struct__319(struct__319 *kcg_c1, struct__319 *kcg_c2);
#endif /* kcg_comp_struct__319 */

#ifndef kcg_comp_struct__324
extern kcg_bool kcg_comp_struct__324(struct__324 *kcg_c1, struct__324 *kcg_c2);
#endif /* kcg_comp_struct__324 */

#ifndef kcg_comp_struct__337
extern kcg_bool kcg_comp_struct__337(struct__337 *kcg_c1, struct__337 *kcg_c2);
#endif /* kcg_comp_struct__337 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__316
extern kcg_bool kcg_comp_array__316(array__316 *kcg_c1, array__316 *kcg_c2);
#endif /* kcg_comp_array__316 */

#define kcg_comp_B_data_internal_InfraLib kcg_comp_struct__337

#define kcg_copy_B_data_internal_InfraLib kcg_copy_struct__337

#define kcg_comp_TM_BaliseTelegramHeader_int_T kcg_comp_struct__324

#define kcg_copy_TM_BaliseTelegramHeader_int_T kcg_copy_struct__324

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__308

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__308

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__316

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__316

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__319

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__319

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-04-23T17:13:00
*************************************************************$ */


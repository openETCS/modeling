/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-03T00:35:43
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

/* Q_SRSTOP */
typedef enum {
  Q_SRSTOP_Stop_if_in_SR_mode = 0,
  Q_SRSTOP_Go_if_in_SR_mode = 1
} Q_SRSTOP;
/* Q_DIR */
typedef enum {
  Q_DIR_Reverse = 0,
  Q_DIR_Nominal = 1,
  Q_DIR_Both_directions = 2
} Q_DIR;
/* NID_PACKET */
typedef kcg_int NID_PACKET;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SRSTOP;
} struct__952;

/* TM::P137_trackside_int_T */
typedef struct__952 P137_trackside_int_T_TM;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__963;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__963 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__971[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__971 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__974;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__974 CompressedPackets_T_Common_Types_Pkg;

typedef struct { kcg_bool valid; Q_DIR q_dir; Q_SRSTOP q_srstop; } struct__979;

/* Packet_Types_Pkg::P137_StopIfInStaffResponsible_T */
typedef struct__979 P137_StopIfInStaffResponsible_T_Packet_Types_Pkg;

typedef kcg_int array_int_30[30];

typedef CompressedPacketData_T_Common_Types_Pkg array_int_500_500[500];

typedef kcg_int array_int_496[496];

typedef kcg_int array_int_4[4];

#ifndef kcg_copy_struct__952
#define kcg_copy_struct__952(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__952)))
#endif /* kcg_copy_struct__952 */

#ifndef kcg_copy_struct__963
#define kcg_copy_struct__963(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__963)))
#endif /* kcg_copy_struct__963 */

#ifndef kcg_copy_struct__974
#define kcg_copy_struct__974(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__974)))
#endif /* kcg_copy_struct__974 */

#ifndef kcg_copy_struct__979
#define kcg_copy_struct__979(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__979)))
#endif /* kcg_copy_struct__979 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__971
#define kcg_copy_array__971(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__971)))
#endif /* kcg_copy_array__971 */

#ifndef kcg_copy_array_int_30
#define kcg_copy_array_int_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_30)))
#endif /* kcg_copy_array_int_30 */

#ifndef kcg_copy_array_int_500_500
#define kcg_copy_array_int_500_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500_500)))
#endif /* kcg_copy_array_int_500_500 */

#ifndef kcg_copy_array_int_496
#define kcg_copy_array_int_496(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_496)))
#endif /* kcg_copy_array_int_496 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_comp_struct__952
extern kcg_bool kcg_comp_struct__952(struct__952 *kcg_c1, struct__952 *kcg_c2);
#endif /* kcg_comp_struct__952 */

#ifndef kcg_comp_struct__963
extern kcg_bool kcg_comp_struct__963(struct__963 *kcg_c1, struct__963 *kcg_c2);
#endif /* kcg_comp_struct__963 */

#ifndef kcg_comp_struct__974
extern kcg_bool kcg_comp_struct__974(struct__974 *kcg_c1, struct__974 *kcg_c2);
#endif /* kcg_comp_struct__974 */

#ifndef kcg_comp_struct__979
extern kcg_bool kcg_comp_struct__979(struct__979 *kcg_c1, struct__979 *kcg_c2);
#endif /* kcg_comp_struct__979 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__971
extern kcg_bool kcg_comp_array__971(array__971 *kcg_c1, array__971 *kcg_c2);
#endif /* kcg_comp_array__971 */

#ifndef kcg_comp_array_int_30
extern kcg_bool kcg_comp_array_int_30(
  array_int_30 *kcg_c1,
  array_int_30 *kcg_c2);
#endif /* kcg_comp_array_int_30 */

#ifndef kcg_comp_array_int_500_500
extern kcg_bool kcg_comp_array_int_500_500(
  array_int_500_500 *kcg_c1,
  array_int_500_500 *kcg_c2);
#endif /* kcg_comp_array_int_500_500 */

#ifndef kcg_comp_array_int_496
extern kcg_bool kcg_comp_array_int_496(
  array_int_496 *kcg_c1,
  array_int_496 *kcg_c2);
#endif /* kcg_comp_array_int_496 */

#ifndef kcg_comp_array_int_4
extern kcg_bool kcg_comp_array_int_4(array_int_4 *kcg_c1, array_int_4 *kcg_c2);
#endif /* kcg_comp_array_int_4 */

#define kcg_comp_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg kcg_comp_struct__979

#define kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg kcg_copy_struct__979

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__974

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__974

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__971

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__971

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__963

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__963

#define kcg_comp_P137_trackside_int_T_TM kcg_comp_struct__952

#define kcg_copy_P137_trackside_int_T_TM kcg_copy_struct__952

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-07-03T00:35:43
*************************************************************$ */


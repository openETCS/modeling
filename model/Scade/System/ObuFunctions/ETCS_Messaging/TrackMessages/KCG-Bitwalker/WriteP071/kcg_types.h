/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-Bitwalker/WriteP071\kcg_s2c_config.txt
** Generation date: 2015-08-21T16:11:03
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
} struct__650;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__650 MetadataElement_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_ADHESION;
  kcg_int L_ADHESION;
  kcg_int M_ADHESION;
} struct__658;

/* TM::P071_trackside_int_T */
typedef struct__658 P071_trackside_int_T_TM;

typedef MetadataElement_T_Common_Types_Pkg array__669[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__669 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__672;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__672 CompressedPackets_T_Common_Types_Pkg;

#ifndef kcg_copy_struct__650
#define kcg_copy_struct__650(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__650)))
#endif /* kcg_copy_struct__650 */

#ifndef kcg_copy_struct__658
#define kcg_copy_struct__658(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__658)))
#endif /* kcg_copy_struct__658 */

#ifndef kcg_copy_struct__672
#define kcg_copy_struct__672(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__672)))
#endif /* kcg_copy_struct__672 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__669
#define kcg_copy_array__669(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__669)))
#endif /* kcg_copy_array__669 */

#ifndef kcg_comp_struct__650
extern kcg_bool kcg_comp_struct__650(struct__650 *kcg_c1, struct__650 *kcg_c2);
#endif /* kcg_comp_struct__650 */

#ifndef kcg_comp_struct__658
extern kcg_bool kcg_comp_struct__658(struct__658 *kcg_c1, struct__658 *kcg_c2);
#endif /* kcg_comp_struct__658 */

#ifndef kcg_comp_struct__672
extern kcg_bool kcg_comp_struct__672(struct__672 *kcg_c1, struct__672 *kcg_c2);
#endif /* kcg_comp_struct__672 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__669
extern kcg_bool kcg_comp_array__669(array__669 *kcg_c1, array__669 *kcg_c2);
#endif /* kcg_comp_array__669 */

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__672

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__672

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__650

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__650

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__669

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__669

#define kcg_comp_P071_trackside_int_T_TM kcg_comp_struct__658

#define kcg_copy_P071_trackside_int_T_TM kcg_copy_struct__658

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-08-21T16:11:03
*************************************************************$ */


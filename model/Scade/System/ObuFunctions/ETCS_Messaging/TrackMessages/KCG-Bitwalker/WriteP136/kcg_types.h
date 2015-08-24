/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-Bitwalker/WriteP136\kcg_s2c_config.txt
** Generation date: 2015-08-21T16:10:26
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
} struct__647;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__647 MetadataElement_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
} struct__655;

/* TM::P136_trackside_int_T */
typedef struct__655 P136_trackside_int_T_TM;

typedef MetadataElement_T_Common_Types_Pkg array__665[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__665 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__668;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__668 CompressedPackets_T_Common_Types_Pkg;

#ifndef kcg_copy_struct__647
#define kcg_copy_struct__647(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__647)))
#endif /* kcg_copy_struct__647 */

#ifndef kcg_copy_struct__655
#define kcg_copy_struct__655(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__655)))
#endif /* kcg_copy_struct__655 */

#ifndef kcg_copy_struct__668
#define kcg_copy_struct__668(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__668)))
#endif /* kcg_copy_struct__668 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__665
#define kcg_copy_array__665(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__665)))
#endif /* kcg_copy_array__665 */

#ifndef kcg_comp_struct__647
extern kcg_bool kcg_comp_struct__647(struct__647 *kcg_c1, struct__647 *kcg_c2);
#endif /* kcg_comp_struct__647 */

#ifndef kcg_comp_struct__655
extern kcg_bool kcg_comp_struct__655(struct__655 *kcg_c1, struct__655 *kcg_c2);
#endif /* kcg_comp_struct__655 */

#ifndef kcg_comp_struct__668
extern kcg_bool kcg_comp_struct__668(struct__668 *kcg_c1, struct__668 *kcg_c2);
#endif /* kcg_comp_struct__668 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__665
extern kcg_bool kcg_comp_array__665(array__665 *kcg_c1, array__665 *kcg_c2);
#endif /* kcg_comp_array__665 */

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__668

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__668

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__647

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__647

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__665

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__665

#define kcg_comp_P136_trackside_int_T_TM kcg_comp_struct__655

#define kcg_copy_P136_trackside_int_T_TM kcg_copy_struct__655

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-08-21T16:10:26
*************************************************************$ */


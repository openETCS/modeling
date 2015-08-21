/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/KCG-Bitwalker/ReadP071\kcg_s2c_config.txt
** Generation date: 2015-08-21T16:11:55
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

/* Q_SCALE */
typedef enum {
  Q_SCALE_10_cm_scale = 0,
  Q_SCALE_1_m_scale = 1,
  Q_SCALE_10_m_scale = 2
} Q_SCALE;
/* Q_DIR */
typedef enum {
  Q_DIR_Reverse = 0,
  Q_DIR_Nominal = 1,
  Q_DIR_Both_directions = 2
} Q_DIR;
/* M_ADHESION */
typedef enum {
  M_ADHESION_Slippery_rail = 0,
  M_ADHESION_Non_slippery_rail = 1
} M_ADHESION;
/* NID_PACKET */
typedef kcg_int NID_PACKET;

/* D_ADHESION */
typedef kcg_int D_ADHESION;

/* L_ADHESION */
typedef kcg_int L_ADHESION;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__1035;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__1035 MetadataElement_T_Common_Types_Pkg;

typedef kcg_int array_int_7[7];

/* TM::Array07 */
typedef array_int_7 Array07_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_ADHESION d_adhesion;
  L_ADHESION l_adhesion;
  M_ADHESION m_adhesion;
} struct__1046;

/* TM::P071_OBU_T */
typedef struct__1046 P071_OBU_T_TM;

typedef MetadataElement_T_Common_Types_Pkg array__1055[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__1055 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__1058;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__1058 CompressedPackets_T_Common_Types_Pkg;

#ifndef kcg_copy_struct__1035
#define kcg_copy_struct__1035(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1035)))
#endif /* kcg_copy_struct__1035 */

#ifndef kcg_copy_struct__1046
#define kcg_copy_struct__1046(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1046)))
#endif /* kcg_copy_struct__1046 */

#ifndef kcg_copy_struct__1058
#define kcg_copy_struct__1058(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1058)))
#endif /* kcg_copy_struct__1058 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array__1055
#define kcg_copy_array__1055(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__1055)))
#endif /* kcg_copy_array__1055 */

#ifndef kcg_comp_struct__1035
extern kcg_bool kcg_comp_struct__1035(
  struct__1035 *kcg_c1,
  struct__1035 *kcg_c2);
#endif /* kcg_comp_struct__1035 */

#ifndef kcg_comp_struct__1046
extern kcg_bool kcg_comp_struct__1046(
  struct__1046 *kcg_c1,
  struct__1046 *kcg_c2);
#endif /* kcg_comp_struct__1046 */

#ifndef kcg_comp_struct__1058
extern kcg_bool kcg_comp_struct__1058(
  struct__1058 *kcg_c1,
  struct__1058 *kcg_c2);
#endif /* kcg_comp_struct__1058 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array_int_7
extern kcg_bool kcg_comp_array_int_7(array_int_7 *kcg_c1, array_int_7 *kcg_c2);
#endif /* kcg_comp_array_int_7 */

#ifndef kcg_comp_array__1055
extern kcg_bool kcg_comp_array__1055(array__1055 *kcg_c1, array__1055 *kcg_c2);
#endif /* kcg_comp_array__1055 */

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__1058

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__1058

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__1055

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__1055

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__1035

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__1035

#define kcg_comp_Array07_TM kcg_comp_array_int_7

#define kcg_copy_Array07_TM kcg_copy_array_int_7

#define kcg_comp_P071_OBU_T_TM kcg_comp_struct__1046

#define kcg_copy_P071_OBU_T_TM kcg_copy_struct__1046

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-08-21T16:11:55
*************************************************************$ */


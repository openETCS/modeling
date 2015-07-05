/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-05T15:50:16
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

/* Q_FRONT */
typedef enum {
  Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element = 0,
  Q_FRONT_No_train_length_delay_on_validity_end_point_of_profile_element = 1
} Q_FRONT;
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
/* NID_PACKET */
typedef kcg_int NID_PACKET;

/* NID_MN */
typedef kcg_int NID_MN;

/* NID_TSR */
typedef kcg_int NID_TSR;

/* D_TSR */
typedef kcg_int D_TSR;

/* L_TSR */
typedef kcg_int L_TSR;

/* V_TSR */
typedef kcg_int V_TSR;

/* TM::nid_packet_meta */
typedef kcg_int nid_packet_meta_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int NID_TSR;
  kcg_int D_TSR;
  kcg_int L_TSR;
  kcg_int Q_FRONT;
  kcg_int V_TSR;
} struct__1453;

/* TM::P065_trackside_int_T */
typedef struct__1453 P065_trackside_int_T_TM;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__1469;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__1469 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__1477[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__1477 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__1480;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__1480 CompressedPackets_T_Common_Types_Pkg;

typedef kcg_int array_int_9[9];

/* TM::Array09 */
typedef array_int_9 Array09_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  NID_TSR nid_tsr;
  D_TSR d_tsr;
  L_TSR l_tsr;
  Q_FRONT q_front;
  V_TSR v_tsr;
} struct__1488;

/* TM::P065_OBU_T */
typedef struct__1488 P065_OBU_T_TM;

typedef kcg_int array_int_30[30];

typedef kcg_bool array_bool_30[30];

typedef CompressedPacketData_T_Common_Types_Pkg array_int_500_500[500];

typedef kcg_int array_int_491[491];

#ifndef kcg_copy_struct__1453
#define kcg_copy_struct__1453(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1453)))
#endif /* kcg_copy_struct__1453 */

#ifndef kcg_copy_struct__1469
#define kcg_copy_struct__1469(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1469)))
#endif /* kcg_copy_struct__1469 */

#ifndef kcg_copy_struct__1480
#define kcg_copy_struct__1480(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1480)))
#endif /* kcg_copy_struct__1480 */

#ifndef kcg_copy_struct__1488
#define kcg_copy_struct__1488(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1488)))
#endif /* kcg_copy_struct__1488 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__1477
#define kcg_copy_array__1477(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__1477)))
#endif /* kcg_copy_array__1477 */

#ifndef kcg_copy_array_int_9
#define kcg_copy_array_int_9(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_9)))
#endif /* kcg_copy_array_int_9 */

#ifndef kcg_copy_array_int_30
#define kcg_copy_array_int_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_30)))
#endif /* kcg_copy_array_int_30 */

#ifndef kcg_copy_array_bool_30
#define kcg_copy_array_bool_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_30)))
#endif /* kcg_copy_array_bool_30 */

#ifndef kcg_copy_array_int_500_500
#define kcg_copy_array_int_500_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500_500)))
#endif /* kcg_copy_array_int_500_500 */

#ifndef kcg_copy_array_int_491
#define kcg_copy_array_int_491(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_491)))
#endif /* kcg_copy_array_int_491 */

#ifndef kcg_comp_struct__1453
extern kcg_bool kcg_comp_struct__1453(
  struct__1453 *kcg_c1,
  struct__1453 *kcg_c2);
#endif /* kcg_comp_struct__1453 */

#ifndef kcg_comp_struct__1469
extern kcg_bool kcg_comp_struct__1469(
  struct__1469 *kcg_c1,
  struct__1469 *kcg_c2);
#endif /* kcg_comp_struct__1469 */

#ifndef kcg_comp_struct__1480
extern kcg_bool kcg_comp_struct__1480(
  struct__1480 *kcg_c1,
  struct__1480 *kcg_c2);
#endif /* kcg_comp_struct__1480 */

#ifndef kcg_comp_struct__1488
extern kcg_bool kcg_comp_struct__1488(
  struct__1488 *kcg_c1,
  struct__1488 *kcg_c2);
#endif /* kcg_comp_struct__1488 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__1477
extern kcg_bool kcg_comp_array__1477(array__1477 *kcg_c1, array__1477 *kcg_c2);
#endif /* kcg_comp_array__1477 */

#ifndef kcg_comp_array_int_9
extern kcg_bool kcg_comp_array_int_9(array_int_9 *kcg_c1, array_int_9 *kcg_c2);
#endif /* kcg_comp_array_int_9 */

#ifndef kcg_comp_array_int_30
extern kcg_bool kcg_comp_array_int_30(
  array_int_30 *kcg_c1,
  array_int_30 *kcg_c2);
#endif /* kcg_comp_array_int_30 */

#ifndef kcg_comp_array_bool_30
extern kcg_bool kcg_comp_array_bool_30(
  array_bool_30 *kcg_c1,
  array_bool_30 *kcg_c2);
#endif /* kcg_comp_array_bool_30 */

#ifndef kcg_comp_array_int_500_500
extern kcg_bool kcg_comp_array_int_500_500(
  array_int_500_500 *kcg_c1,
  array_int_500_500 *kcg_c2);
#endif /* kcg_comp_array_int_500_500 */

#ifndef kcg_comp_array_int_491
extern kcg_bool kcg_comp_array_int_491(
  array_int_491 *kcg_c1,
  array_int_491 *kcg_c2);
#endif /* kcg_comp_array_int_491 */

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__1480

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__1480

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__1477

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__1477

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__1469

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__1469

#define kcg_comp_P065_trackside_int_T_TM kcg_comp_struct__1453

#define kcg_copy_P065_trackside_int_T_TM kcg_copy_struct__1453

#define kcg_comp_Array09_TM kcg_comp_array_int_9

#define kcg_copy_Array09_TM kcg_copy_array_int_9

#define kcg_comp_P065_OBU_T_TM kcg_comp_struct__1488

#define kcg_copy_P065_OBU_T_TM kcg_copy_struct__1488

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-07-05T15:50:16
*************************************************************$ */


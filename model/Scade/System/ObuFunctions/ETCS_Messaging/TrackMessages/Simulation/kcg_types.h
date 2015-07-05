/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-04T22:01:33
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

typedef struct { kcg_int NC_DIFF; kcg_int V_DIFF; } struct__443;

/* TM_baseline2::P027V1_section_int_qdiff_T */
typedef struct__443 P027V1_section_int_qdiff_T_TM_baseline2;

typedef P027V1_section_int_qdiff_T_TM_baseline2 array__448[32];

/* TM_baseline2::P027V1_trackside_qdifflist_T */
typedef array__448 P027V1_trackside_qdifflist_T_TM_baseline2;

typedef struct {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
} struct__451;

/* TM_baseline2::P027V1_section_int_T */
typedef struct__451 P027V1_section_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__459[33];

/* TM_baseline2::P027V1_OBU_sectionlist_int_T */
typedef array__459 P027V1_OBU_sectionlist_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__462[32];

/* TM_baseline2::P027V1_trackside_sectionlist_T */
typedef array__462 P027V1_trackside_sectionlist_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER_n;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
  kcg_int N_ITER_k;
  P027V1_trackside_sectionlist_T_TM_baseline2 SECTIONS_SSP;
} struct__465;

/* TM_baseline2::P027V1_trackside_int_T */
typedef struct__465 P027V1_trackside_int_T_TM_baseline2;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__483;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__483 MetadataElement_T_Common_Types_Pkg;

typedef kcg_int array_int_494[494];

typedef kcg_int array_int_6[6];

typedef P027V1_section_int_T_TM_baseline2 array__497[1];

#ifndef kcg_copy_struct__443
#define kcg_copy_struct__443(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__443)))
#endif /* kcg_copy_struct__443 */

#ifndef kcg_copy_struct__451
#define kcg_copy_struct__451(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__451)))
#endif /* kcg_copy_struct__451 */

#ifndef kcg_copy_struct__465
#define kcg_copy_struct__465(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__465)))
#endif /* kcg_copy_struct__465 */

#ifndef kcg_copy_struct__483
#define kcg_copy_struct__483(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__483)))
#endif /* kcg_copy_struct__483 */

#ifndef kcg_copy_array__448
#define kcg_copy_array__448(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__448)))
#endif /* kcg_copy_array__448 */

#ifndef kcg_copy_array__459
#define kcg_copy_array__459(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__459)))
#endif /* kcg_copy_array__459 */

#ifndef kcg_copy_array__462
#define kcg_copy_array__462(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__462)))
#endif /* kcg_copy_array__462 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array_int_494
#define kcg_copy_array_int_494(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_494)))
#endif /* kcg_copy_array_int_494 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array__497
#define kcg_copy_array__497(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__497)))
#endif /* kcg_copy_array__497 */

#ifndef kcg_comp_struct__443
extern kcg_bool kcg_comp_struct__443(struct__443 *kcg_c1, struct__443 *kcg_c2);
#endif /* kcg_comp_struct__443 */

#ifndef kcg_comp_struct__451
extern kcg_bool kcg_comp_struct__451(struct__451 *kcg_c1, struct__451 *kcg_c2);
#endif /* kcg_comp_struct__451 */

#ifndef kcg_comp_struct__465
extern kcg_bool kcg_comp_struct__465(struct__465 *kcg_c1, struct__465 *kcg_c2);
#endif /* kcg_comp_struct__465 */

#ifndef kcg_comp_struct__483
extern kcg_bool kcg_comp_struct__483(struct__483 *kcg_c1, struct__483 *kcg_c2);
#endif /* kcg_comp_struct__483 */

#ifndef kcg_comp_array__448
extern kcg_bool kcg_comp_array__448(array__448 *kcg_c1, array__448 *kcg_c2);
#endif /* kcg_comp_array__448 */

#ifndef kcg_comp_array__459
extern kcg_bool kcg_comp_array__459(array__459 *kcg_c1, array__459 *kcg_c2);
#endif /* kcg_comp_array__459 */

#ifndef kcg_comp_array__462
extern kcg_bool kcg_comp_array__462(array__462 *kcg_c1, array__462 *kcg_c2);
#endif /* kcg_comp_array__462 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array_int_494
extern kcg_bool kcg_comp_array_int_494(
  array_int_494 *kcg_c1,
  array_int_494 *kcg_c2);
#endif /* kcg_comp_array_int_494 */

#ifndef kcg_comp_array_int_6
extern kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2);
#endif /* kcg_comp_array_int_6 */

#ifndef kcg_comp_array__497
extern kcg_bool kcg_comp_array__497(array__497 *kcg_c1, array__497 *kcg_c2);
#endif /* kcg_comp_array__497 */

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__483

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__483

#define kcg_comp_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array__459

#define kcg_copy_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array__459

#define kcg_comp_P027V1_section_int_T_TM_baseline2 kcg_comp_struct__451

#define kcg_copy_P027V1_section_int_T_TM_baseline2 kcg_copy_struct__451

#define kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_comp_array__462

#define kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_copy_array__462

#define kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2 kcg_comp_struct__443

#define kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2 kcg_copy_struct__443

#define kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_comp_array__448

#define kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_copy_array__448

#define kcg_comp_P027V1_trackside_int_T_TM_baseline2 kcg_comp_struct__465

#define kcg_copy_P027V1_trackside_int_T_TM_baseline2 kcg_copy_struct__465

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-07-04T22:01:33
*************************************************************$ */


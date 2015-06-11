/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-11T11:38:20
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

typedef struct { kcg_int NC_DIFF; kcg_int V_DIFF; } struct__413;

/* TM::P027V1_section_int_qdiff_T */
typedef struct__413 P027V1_section_int_qdiff_T_TM;

typedef P027V1_section_int_qdiff_T_TM array__418[32];

/* TM::P027V1_trackide_qdifflist_T */
typedef array__418 P027V1_trackide_qdifflist_T_TM;

typedef struct {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackide_qdifflist_T_TM SECTIONS_q_diff;
} struct__421;

/* TM::P027V1_section_int_T */
typedef struct__421 P027V1_section_int_T_TM;

typedef P027V1_section_int_T_TM array__429[33];

/* TM::P027V1_OBU_sectionlist_int_T */
typedef array__429 P027V1_OBU_sectionlist_int_T_TM;

typedef P027V1_section_int_T_TM array__432[32];

/* TM::P027V1_trackide_sectionlist_T */
typedef array__432 P027V1_trackide_sectionlist_T_TM;

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
  P027V1_trackide_qdifflist_T_TM SECTIONS_q_diff;
  kcg_int N_ITER_k;
  P027V1_trackide_sectionlist_T_TM SECTIONS_SSP;
} struct__435;

/* TM::P027V1_trackside_int_T */
typedef struct__435 P027V1_trackside_int_T_TM;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__453;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__453 MetadataElement_T_Common_Types_Pkg;

typedef kcg_int array_int_494[494];

typedef kcg_int array_int_6[6];

typedef P027V1_section_int_T_TM array__467[1];

#ifndef kcg_copy_struct__413
#define kcg_copy_struct__413(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__413)))
#endif /* kcg_copy_struct__413 */

#ifndef kcg_copy_struct__421
#define kcg_copy_struct__421(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__421)))
#endif /* kcg_copy_struct__421 */

#ifndef kcg_copy_struct__435
#define kcg_copy_struct__435(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__435)))
#endif /* kcg_copy_struct__435 */

#ifndef kcg_copy_struct__453
#define kcg_copy_struct__453(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__453)))
#endif /* kcg_copy_struct__453 */

#ifndef kcg_copy_array__418
#define kcg_copy_array__418(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__418)))
#endif /* kcg_copy_array__418 */

#ifndef kcg_copy_array__429
#define kcg_copy_array__429(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__429)))
#endif /* kcg_copy_array__429 */

#ifndef kcg_copy_array__432
#define kcg_copy_array__432(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__432)))
#endif /* kcg_copy_array__432 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array_int_494
#define kcg_copy_array_int_494(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_494)))
#endif /* kcg_copy_array_int_494 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array__467
#define kcg_copy_array__467(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__467)))
#endif /* kcg_copy_array__467 */

#ifndef kcg_comp_struct__413
extern kcg_bool kcg_comp_struct__413(struct__413 *kcg_c1, struct__413 *kcg_c2);
#endif /* kcg_comp_struct__413 */

#ifndef kcg_comp_struct__421
extern kcg_bool kcg_comp_struct__421(struct__421 *kcg_c1, struct__421 *kcg_c2);
#endif /* kcg_comp_struct__421 */

#ifndef kcg_comp_struct__435
extern kcg_bool kcg_comp_struct__435(struct__435 *kcg_c1, struct__435 *kcg_c2);
#endif /* kcg_comp_struct__435 */

#ifndef kcg_comp_struct__453
extern kcg_bool kcg_comp_struct__453(struct__453 *kcg_c1, struct__453 *kcg_c2);
#endif /* kcg_comp_struct__453 */

#ifndef kcg_comp_array__418
extern kcg_bool kcg_comp_array__418(array__418 *kcg_c1, array__418 *kcg_c2);
#endif /* kcg_comp_array__418 */

#ifndef kcg_comp_array__429
extern kcg_bool kcg_comp_array__429(array__429 *kcg_c1, array__429 *kcg_c2);
#endif /* kcg_comp_array__429 */

#ifndef kcg_comp_array__432
extern kcg_bool kcg_comp_array__432(array__432 *kcg_c1, array__432 *kcg_c2);
#endif /* kcg_comp_array__432 */

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

#ifndef kcg_comp_array__467
extern kcg_bool kcg_comp_array__467(array__467 *kcg_c1, array__467 *kcg_c2);
#endif /* kcg_comp_array__467 */

#define kcg_comp_P027V1_OBU_sectionlist_int_T_TM kcg_comp_array__429

#define kcg_copy_P027V1_OBU_sectionlist_int_T_TM kcg_copy_array__429

#define kcg_comp_P027V1_section_int_T_TM kcg_comp_struct__421

#define kcg_copy_P027V1_section_int_T_TM kcg_copy_struct__421

#define kcg_comp_P027V1_trackide_sectionlist_T_TM kcg_comp_array__432

#define kcg_copy_P027V1_trackide_sectionlist_T_TM kcg_copy_array__432

#define kcg_comp_P027V1_section_int_qdiff_T_TM kcg_comp_struct__413

#define kcg_copy_P027V1_section_int_qdiff_T_TM kcg_copy_struct__413

#define kcg_comp_P027V1_trackide_qdifflist_T_TM kcg_comp_array__418

#define kcg_copy_P027V1_trackide_qdifflist_T_TM kcg_copy_array__418

#define kcg_comp_P027V1_trackside_int_T_TM kcg_comp_struct__435

#define kcg_copy_P027V1_trackside_int_T_TM kcg_copy_struct__435

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__453

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__453

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-06-11T11:38:20
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-09T19:50:49
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
} struct__862;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__862 MetadataElement_T_Common_Types_Pkg;

typedef kcg_int array_int_64[64];

/* TM::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM;

typedef struct { kcg_int NC_DIFF; kcg_int V_DIFF; } struct__873;

/* TM::P027V1_section_int_qdiff_T */
typedef struct__873 P027V1_section_int_qdiff_T_TM;

typedef P027V1_section_int_qdiff_T_TM array__878[32];

/* TM::P027V1_trackide_qdifflist_T */
typedef array__878 P027V1_trackide_qdifflist_T_TM;

/* TM::P027V1_OBU_sectionlist_int_qdiff_T */
typedef array__878 P027V1_OBU_sectionlist_int_qdiff_T_TM;

typedef struct {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackide_qdifflist_T_TM SECTIONS_q_diff;
} struct__881;

/* TM::P027V1_section_int_T */
typedef struct__881 P027V1_section_int_T_TM;

typedef kcg_int array_int_2[2];

/* TM::P027V1_section_array_qdiff_T */
typedef array_int_2 P027V1_section_array_qdiff_T_TM;

typedef P027V1_section_array_qdiff_T_TM array_int_2_32[32];

/* TM::P027V1_OBU_sectionlist_array_qdiff_T */
typedef array_int_2_32 _1_P027V1_OBU_sectionlist_array_qdiff_T_TM;

typedef MetadataElement_T_Common_Types_Pkg array__895[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__895 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__898;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__898 CompressedPackets_T_Common_Types_Pkg;

typedef P027V1_section_int_T_TM array__903[33];

/* TM::P027V1_OBU_sectionlist_int_T */
typedef array__903 _2_P027V1_OBU_sectionlist_int_T_TM;

typedef P027V1_section_int_T_TM array__906[32];

/* TM::P027V1_trackide_sectionlist_T */
typedef array__906 P027V1_trackide_sectionlist_T_TM;

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
} struct__909;

/* TM::P027V1_trackside_int_T */
typedef struct__909 P027V1_trackside_int_T_TM;

typedef CompressedPacketData_T_Common_Types_Pkg array_int_500_500[500];

typedef kcg_int array_int_494[494];

typedef kcg_int array_int_6[6];

typedef P027V1_section_int_T_TM array__933[1];

typedef array_int_2_32 array_int_2_32_32[32];

typedef kcg_int array_int_432[432];

typedef kcg_int array_int_4[4];

typedef kcg_int array_int_68[68];

typedef kcg_int array_int_33[33];

#ifndef kcg_copy_struct__862
#define kcg_copy_struct__862(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__862)))
#endif /* kcg_copy_struct__862 */

#ifndef kcg_copy_struct__873
#define kcg_copy_struct__873(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__873)))
#endif /* kcg_copy_struct__873 */

#ifndef kcg_copy_struct__881
#define kcg_copy_struct__881(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__881)))
#endif /* kcg_copy_struct__881 */

#ifndef kcg_copy_struct__898
#define kcg_copy_struct__898(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__898)))
#endif /* kcg_copy_struct__898 */

#ifndef kcg_copy_struct__909
#define kcg_copy_struct__909(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__909)))
#endif /* kcg_copy_struct__909 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array__878
#define kcg_copy_array__878(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__878)))
#endif /* kcg_copy_array__878 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array_int_2_32
#define kcg_copy_array_int_2_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32)))
#endif /* kcg_copy_array_int_2_32 */

#ifndef kcg_copy_array__895
#define kcg_copy_array__895(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__895)))
#endif /* kcg_copy_array__895 */

#ifndef kcg_copy_array__903
#define kcg_copy_array__903(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__903)))
#endif /* kcg_copy_array__903 */

#ifndef kcg_copy_array__906
#define kcg_copy_array__906(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__906)))
#endif /* kcg_copy_array__906 */

#ifndef kcg_copy_array_int_500_500
#define kcg_copy_array_int_500_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500_500)))
#endif /* kcg_copy_array_int_500_500 */

#ifndef kcg_copy_array_int_494
#define kcg_copy_array_int_494(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_494)))
#endif /* kcg_copy_array_int_494 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array__933
#define kcg_copy_array__933(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__933)))
#endif /* kcg_copy_array__933 */

#ifndef kcg_copy_array_int_2_32_32
#define kcg_copy_array_int_2_32_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32_32)))
#endif /* kcg_copy_array_int_2_32_32 */

#ifndef kcg_copy_array_int_432
#define kcg_copy_array_int_432(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_432)))
#endif /* kcg_copy_array_int_432 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_int_68
#define kcg_copy_array_int_68(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_68)))
#endif /* kcg_copy_array_int_68 */

#ifndef kcg_copy_array_int_33
#define kcg_copy_array_int_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33)))
#endif /* kcg_copy_array_int_33 */

#ifndef kcg_comp_struct__862
extern kcg_bool kcg_comp_struct__862(struct__862 *kcg_c1, struct__862 *kcg_c2);
#endif /* kcg_comp_struct__862 */

#ifndef kcg_comp_struct__873
extern kcg_bool kcg_comp_struct__873(struct__873 *kcg_c1, struct__873 *kcg_c2);
#endif /* kcg_comp_struct__873 */

#ifndef kcg_comp_struct__881
extern kcg_bool kcg_comp_struct__881(struct__881 *kcg_c1, struct__881 *kcg_c2);
#endif /* kcg_comp_struct__881 */

#ifndef kcg_comp_struct__898
extern kcg_bool kcg_comp_struct__898(struct__898 *kcg_c1, struct__898 *kcg_c2);
#endif /* kcg_comp_struct__898 */

#ifndef kcg_comp_struct__909
extern kcg_bool kcg_comp_struct__909(struct__909 *kcg_c1, struct__909 *kcg_c2);
#endif /* kcg_comp_struct__909 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array_int_64
extern kcg_bool kcg_comp_array_int_64(
  array_int_64 *kcg_c1,
  array_int_64 *kcg_c2);
#endif /* kcg_comp_array_int_64 */

#ifndef kcg_comp_array__878
extern kcg_bool kcg_comp_array__878(array__878 *kcg_c1, array__878 *kcg_c2);
#endif /* kcg_comp_array__878 */

#ifndef kcg_comp_array_int_2
extern kcg_bool kcg_comp_array_int_2(array_int_2 *kcg_c1, array_int_2 *kcg_c2);
#endif /* kcg_comp_array_int_2 */

#ifndef kcg_comp_array_int_2_32
extern kcg_bool kcg_comp_array_int_2_32(
  array_int_2_32 *kcg_c1,
  array_int_2_32 *kcg_c2);
#endif /* kcg_comp_array_int_2_32 */

#ifndef kcg_comp_array__895
extern kcg_bool kcg_comp_array__895(array__895 *kcg_c1, array__895 *kcg_c2);
#endif /* kcg_comp_array__895 */

#ifndef kcg_comp_array__903
extern kcg_bool kcg_comp_array__903(array__903 *kcg_c1, array__903 *kcg_c2);
#endif /* kcg_comp_array__903 */

#ifndef kcg_comp_array__906
extern kcg_bool kcg_comp_array__906(array__906 *kcg_c1, array__906 *kcg_c2);
#endif /* kcg_comp_array__906 */

#ifndef kcg_comp_array_int_500_500
extern kcg_bool kcg_comp_array_int_500_500(
  array_int_500_500 *kcg_c1,
  array_int_500_500 *kcg_c2);
#endif /* kcg_comp_array_int_500_500 */

#ifndef kcg_comp_array_int_494
extern kcg_bool kcg_comp_array_int_494(
  array_int_494 *kcg_c1,
  array_int_494 *kcg_c2);
#endif /* kcg_comp_array_int_494 */

#ifndef kcg_comp_array_int_6
extern kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2);
#endif /* kcg_comp_array_int_6 */

#ifndef kcg_comp_array__933
extern kcg_bool kcg_comp_array__933(array__933 *kcg_c1, array__933 *kcg_c2);
#endif /* kcg_comp_array__933 */

#ifndef kcg_comp_array_int_2_32_32
extern kcg_bool kcg_comp_array_int_2_32_32(
  array_int_2_32_32 *kcg_c1,
  array_int_2_32_32 *kcg_c2);
#endif /* kcg_comp_array_int_2_32_32 */

#ifndef kcg_comp_array_int_432
extern kcg_bool kcg_comp_array_int_432(
  array_int_432 *kcg_c1,
  array_int_432 *kcg_c2);
#endif /* kcg_comp_array_int_432 */

#ifndef kcg_comp_array_int_4
extern kcg_bool kcg_comp_array_int_4(array_int_4 *kcg_c1, array_int_4 *kcg_c2);
#endif /* kcg_comp_array_int_4 */

#ifndef kcg_comp_array_int_68
extern kcg_bool kcg_comp_array_int_68(
  array_int_68 *kcg_c1,
  array_int_68 *kcg_c2);
#endif /* kcg_comp_array_int_68 */

#ifndef kcg_comp_array_int_33
extern kcg_bool kcg_comp_array_int_33(
  array_int_33 *kcg_c1,
  array_int_33 *kcg_c2);
#endif /* kcg_comp_array_int_33 */

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__898

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__898

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__862

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__862

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__895

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__895

#define kcg_comp_P027V1_OBU_sectionlist_int_qdiff_T_TM kcg_comp_array__878

#define kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM kcg_copy_array__878

#define kcg_comp_P027V1_section_array_qdiff_T_TM kcg_comp_array_int_2

#define kcg_copy_P027V1_section_array_qdiff_T_TM kcg_copy_array_int_2

#define kcg_comp__1_P027V1_OBU_sectionlist_array_qdiff_T_TM kcg_comp_array_int_2_32

#define kcg_copy__1_P027V1_OBU_sectionlist_array_qdiff_T_TM kcg_copy_array_int_2_32

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM kcg_copy_array_int_64

#define kcg_comp__2_P027V1_OBU_sectionlist_int_T_TM kcg_comp_array__903

#define kcg_copy__2_P027V1_OBU_sectionlist_int_T_TM kcg_copy_array__903

#define kcg_comp_P027V1_section_int_T_TM kcg_comp_struct__881

#define kcg_copy_P027V1_section_int_T_TM kcg_copy_struct__881

#define kcg_comp_P027V1_trackide_sectionlist_T_TM kcg_comp_array__906

#define kcg_copy_P027V1_trackide_sectionlist_T_TM kcg_copy_array__906

#define kcg_comp_P027V1_section_int_qdiff_T_TM kcg_comp_struct__873

#define kcg_copy_P027V1_section_int_qdiff_T_TM kcg_copy_struct__873

#define kcg_comp_P027V1_trackide_qdifflist_T_TM kcg_comp_array__878

#define kcg_copy_P027V1_trackide_qdifflist_T_TM kcg_copy_array__878

#define kcg_comp_P027V1_trackside_int_T_TM kcg_comp_struct__909

#define kcg_copy_P027V1_trackside_int_T_TM kcg_copy_struct__909

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-06-09T19:50:49
*************************************************************$ */


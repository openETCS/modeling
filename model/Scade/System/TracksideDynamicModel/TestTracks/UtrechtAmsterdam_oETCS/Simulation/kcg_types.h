/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-27T16:09:02
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

/* D_STATIC */
typedef kcg_int D_STATIC;

/* V_STATIC */
typedef kcg_int V_STATIC;

/* N_ITER */
typedef kcg_int N_ITER;

/* NC_DIFF */
typedef kcg_int NC_DIFF;

/* V_DIFF */
typedef kcg_int V_DIFF;

/* TM::nid_packet_meta */
typedef kcg_int nid_packet_meta_TM;

typedef struct { kcg_int NC_DIFF; kcg_int V_DIFF; } struct__2306;

/* TM_baseline2::P027V1_section_int_qdiff_T */
typedef struct__2306 P027V1_section_int_qdiff_T_TM_baseline2;

typedef P027V1_section_int_qdiff_T_TM_baseline2 array__2311[32];

/* TM_baseline2::P027V1_trackside_qdifflist_T */
typedef array__2311 P027V1_trackside_qdifflist_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_int_qdiff_T */
typedef array__2311 P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2;

typedef struct {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
} struct__2314;

/* TM_baseline2::P027V1_section_int_T */
typedef struct__2314 P027V1_section_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__2322[32];

/* TM_baseline2::P027V1_trackside_sectionlist_T */
typedef array__2322 P027V1_trackside_sectionlist_T_TM_baseline2;

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
} struct__2325;

/* TM_baseline2::P027V1_trackside_int_T */
typedef struct__2325 P027V1_trackside_int_T_TM_baseline2;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__2343;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__2343 MetadataElement_T_Common_Types_Pkg;

typedef kcg_int array_int_2[2];

/* TM_baseline2::P027V1_section_array_qdiff_T */
typedef array_int_2 P027V1_section_array_qdiff_T_TM_baseline2;

typedef P027V1_section_array_qdiff_T_TM_baseline2 array_int_2_32[32];

/* TM_baseline2::P027V1_OBU_sectionlist_array_qdiff_T */
typedef array_int_2_32 _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2;

typedef kcg_int array_int_64[64];

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef MetadataElement_T_Common_Types_Pkg array__2360[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__2360 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__2363;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__2363 CompressedPackets_T_Common_Types_Pkg;

typedef P027V1_section_int_T_TM_baseline2 array__2368[33];

/* TM_baseline2::P027V1_OBU_sectionlist_int_T */
typedef array__2368 _2_P027V1_OBU_sectionlist_int_T_TM_baseline2;

typedef kcg_int array_int_5[5];

/* TM::Array05 */
typedef array_int_5 Array05_TM;

typedef struct { kcg_bool valid; Q_DIR q_dir; Q_SCALE q_scale; } struct__2374;

/* TM_baseline2::P027V1_OBU_body_enum_T */
typedef struct__2374 P027V1_OBU_body_enum_T_TM_baseline2;

typedef struct { kcg_bool valid; NC_DIFF nc_diff; V_DIFF v_diff; } struct__2380;

/* TM_baseline2::P027V1_section_enum_qdiff_T */
typedef struct__2380 P027V1_section_enum_qdiff_T_TM_baseline2;

typedef P027V1_section_enum_qdiff_T_TM_baseline2 array__2386[32];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_qdiff_T */
typedef array__2386 _4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  N_ITER n_iter;
  _4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 SECTIONS_q_diff;
} struct__2389;

/* TM_baseline2::P027V1_section_enum_T */
typedef struct__2389 P027V1_section_enum_T_TM_baseline2;

typedef P027V1_section_enum_T_TM_baseline2 array__2398[33];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_T */
typedef array__2398 _3_P027V1_OBU_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  _3_P027V1_OBU_sectionlist_enum_T_TM_baseline2 sections;
} struct__2401;

/* TM_baseline2::P027V1_OBU_T */
typedef struct__2401 P027V1_OBU_T_TM_baseline2;

typedef kcg_int array_int_3[3];

/* TM::Array03 */
typedef array_int_3 Array03_TM;

typedef kcg_int array_int_30[30];

typedef kcg_bool array_bool_30[30];

typedef CompressedPacketData_T_Common_Types_Pkg array_int_500_500[500];

typedef kcg_int array_int_32[32];

typedef P027V1_sections_array_flat_qdiff_T_TM_baseline2 array_int_64_32[32];

typedef kcg_int array_int_33[33];

typedef CompressedPackets_T_Common_Types_Pkg array__2429[33];

typedef kcg_int array_int_494[494];

typedef kcg_int array_int_6[6];

typedef P027V1_section_int_T_TM_baseline2 array__2438[1];

typedef array_int_2_32 array_int_2_32_32[32];

typedef kcg_int array_int_432[432];

typedef kcg_int array_int_4[4];

typedef kcg_int array_int_68[68];

#ifndef kcg_copy_struct__2306
#define kcg_copy_struct__2306(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2306)))
#endif /* kcg_copy_struct__2306 */

#ifndef kcg_copy_struct__2314
#define kcg_copy_struct__2314(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2314)))
#endif /* kcg_copy_struct__2314 */

#ifndef kcg_copy_struct__2325
#define kcg_copy_struct__2325(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2325)))
#endif /* kcg_copy_struct__2325 */

#ifndef kcg_copy_struct__2343
#define kcg_copy_struct__2343(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2343)))
#endif /* kcg_copy_struct__2343 */

#ifndef kcg_copy_struct__2363
#define kcg_copy_struct__2363(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2363)))
#endif /* kcg_copy_struct__2363 */

#ifndef kcg_copy_struct__2374
#define kcg_copy_struct__2374(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2374)))
#endif /* kcg_copy_struct__2374 */

#ifndef kcg_copy_struct__2380
#define kcg_copy_struct__2380(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2380)))
#endif /* kcg_copy_struct__2380 */

#ifndef kcg_copy_struct__2389
#define kcg_copy_struct__2389(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2389)))
#endif /* kcg_copy_struct__2389 */

#ifndef kcg_copy_struct__2401
#define kcg_copy_struct__2401(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2401)))
#endif /* kcg_copy_struct__2401 */

#ifndef kcg_copy_array__2311
#define kcg_copy_array__2311(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2311)))
#endif /* kcg_copy_array__2311 */

#ifndef kcg_copy_array__2322
#define kcg_copy_array__2322(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2322)))
#endif /* kcg_copy_array__2322 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array_int_2_32
#define kcg_copy_array_int_2_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32)))
#endif /* kcg_copy_array_int_2_32 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array__2360
#define kcg_copy_array__2360(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2360)))
#endif /* kcg_copy_array__2360 */

#ifndef kcg_copy_array__2368
#define kcg_copy_array__2368(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2368)))
#endif /* kcg_copy_array__2368 */

#ifndef kcg_copy_array_int_5
#define kcg_copy_array_int_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_5)))
#endif /* kcg_copy_array_int_5 */

#ifndef kcg_copy_array__2386
#define kcg_copy_array__2386(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2386)))
#endif /* kcg_copy_array__2386 */

#ifndef kcg_copy_array__2398
#define kcg_copy_array__2398(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2398)))
#endif /* kcg_copy_array__2398 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_int_30
#define kcg_copy_array_int_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_30)))
#endif /* kcg_copy_array_int_30 */

#ifndef kcg_copy_array_bool_30
#define kcg_copy_array_bool_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_30)))
#endif /* kcg_copy_array_bool_30 */

#ifndef kcg_copy_array_int_500_500
#define kcg_copy_array_int_500_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500_500)))
#endif /* kcg_copy_array_int_500_500 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array_int_64_32
#define kcg_copy_array_int_64_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64_32)))
#endif /* kcg_copy_array_int_64_32 */

#ifndef kcg_copy_array_int_33
#define kcg_copy_array_int_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33)))
#endif /* kcg_copy_array_int_33 */

#ifndef kcg_copy_array__2429
#define kcg_copy_array__2429(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2429)))
#endif /* kcg_copy_array__2429 */

#ifndef kcg_copy_array_int_494
#define kcg_copy_array_int_494(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_494)))
#endif /* kcg_copy_array_int_494 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array__2438
#define kcg_copy_array__2438(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2438)))
#endif /* kcg_copy_array__2438 */

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

#ifndef kcg_comp_struct__2306
extern kcg_bool kcg_comp_struct__2306(
  struct__2306 *kcg_c1,
  struct__2306 *kcg_c2);
#endif /* kcg_comp_struct__2306 */

#ifndef kcg_comp_struct__2314
extern kcg_bool kcg_comp_struct__2314(
  struct__2314 *kcg_c1,
  struct__2314 *kcg_c2);
#endif /* kcg_comp_struct__2314 */

#ifndef kcg_comp_struct__2325
extern kcg_bool kcg_comp_struct__2325(
  struct__2325 *kcg_c1,
  struct__2325 *kcg_c2);
#endif /* kcg_comp_struct__2325 */

#ifndef kcg_comp_struct__2343
extern kcg_bool kcg_comp_struct__2343(
  struct__2343 *kcg_c1,
  struct__2343 *kcg_c2);
#endif /* kcg_comp_struct__2343 */

#ifndef kcg_comp_struct__2363
extern kcg_bool kcg_comp_struct__2363(
  struct__2363 *kcg_c1,
  struct__2363 *kcg_c2);
#endif /* kcg_comp_struct__2363 */

#ifndef kcg_comp_struct__2374
extern kcg_bool kcg_comp_struct__2374(
  struct__2374 *kcg_c1,
  struct__2374 *kcg_c2);
#endif /* kcg_comp_struct__2374 */

#ifndef kcg_comp_struct__2380
extern kcg_bool kcg_comp_struct__2380(
  struct__2380 *kcg_c1,
  struct__2380 *kcg_c2);
#endif /* kcg_comp_struct__2380 */

#ifndef kcg_comp_struct__2389
extern kcg_bool kcg_comp_struct__2389(
  struct__2389 *kcg_c1,
  struct__2389 *kcg_c2);
#endif /* kcg_comp_struct__2389 */

#ifndef kcg_comp_struct__2401
extern kcg_bool kcg_comp_struct__2401(
  struct__2401 *kcg_c1,
  struct__2401 *kcg_c2);
#endif /* kcg_comp_struct__2401 */

#ifndef kcg_comp_array__2311
extern kcg_bool kcg_comp_array__2311(array__2311 *kcg_c1, array__2311 *kcg_c2);
#endif /* kcg_comp_array__2311 */

#ifndef kcg_comp_array__2322
extern kcg_bool kcg_comp_array__2322(array__2322 *kcg_c1, array__2322 *kcg_c2);
#endif /* kcg_comp_array__2322 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array_int_2
extern kcg_bool kcg_comp_array_int_2(array_int_2 *kcg_c1, array_int_2 *kcg_c2);
#endif /* kcg_comp_array_int_2 */

#ifndef kcg_comp_array_int_2_32
extern kcg_bool kcg_comp_array_int_2_32(
  array_int_2_32 *kcg_c1,
  array_int_2_32 *kcg_c2);
#endif /* kcg_comp_array_int_2_32 */

#ifndef kcg_comp_array_int_64
extern kcg_bool kcg_comp_array_int_64(
  array_int_64 *kcg_c1,
  array_int_64 *kcg_c2);
#endif /* kcg_comp_array_int_64 */

#ifndef kcg_comp_array__2360
extern kcg_bool kcg_comp_array__2360(array__2360 *kcg_c1, array__2360 *kcg_c2);
#endif /* kcg_comp_array__2360 */

#ifndef kcg_comp_array__2368
extern kcg_bool kcg_comp_array__2368(array__2368 *kcg_c1, array__2368 *kcg_c2);
#endif /* kcg_comp_array__2368 */

#ifndef kcg_comp_array_int_5
extern kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2);
#endif /* kcg_comp_array_int_5 */

#ifndef kcg_comp_array__2386
extern kcg_bool kcg_comp_array__2386(array__2386 *kcg_c1, array__2386 *kcg_c2);
#endif /* kcg_comp_array__2386 */

#ifndef kcg_comp_array__2398
extern kcg_bool kcg_comp_array__2398(array__2398 *kcg_c1, array__2398 *kcg_c2);
#endif /* kcg_comp_array__2398 */

#ifndef kcg_comp_array_int_3
extern kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2);
#endif /* kcg_comp_array_int_3 */

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

#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */

#ifndef kcg_comp_array_int_64_32
extern kcg_bool kcg_comp_array_int_64_32(
  array_int_64_32 *kcg_c1,
  array_int_64_32 *kcg_c2);
#endif /* kcg_comp_array_int_64_32 */

#ifndef kcg_comp_array_int_33
extern kcg_bool kcg_comp_array_int_33(
  array_int_33 *kcg_c1,
  array_int_33 *kcg_c2);
#endif /* kcg_comp_array_int_33 */

#ifndef kcg_comp_array__2429
extern kcg_bool kcg_comp_array__2429(array__2429 *kcg_c1, array__2429 *kcg_c2);
#endif /* kcg_comp_array__2429 */

#ifndef kcg_comp_array_int_494
extern kcg_bool kcg_comp_array_int_494(
  array_int_494 *kcg_c1,
  array_int_494 *kcg_c2);
#endif /* kcg_comp_array_int_494 */

#ifndef kcg_comp_array_int_6
extern kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2);
#endif /* kcg_comp_array_int_6 */

#ifndef kcg_comp_array__2438
extern kcg_bool kcg_comp_array__2438(array__2438 *kcg_c1, array__2438 *kcg_c2);
#endif /* kcg_comp_array__2438 */

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

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__2363

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__2363

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__2360

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__2360

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__2343

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__2343

#define kcg_comp_Array03_TM kcg_comp_array_int_3

#define kcg_copy_Array03_TM kcg_copy_array_int_3

#define kcg_comp_Array05_TM kcg_comp_array_int_5

#define kcg_copy_Array05_TM kcg_copy_array_int_5

#define kcg_comp_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_comp_array__2311

#define kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_copy_array__2311

#define kcg_comp_P027V1_section_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2

#define kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2

#define kcg_comp__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2_32

#define kcg_copy__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2_32

#define kcg_comp__2_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array__2368

#define kcg_copy__2_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array__2368

#define kcg_comp_P027V1_section_int_T_TM_baseline2 kcg_comp_struct__2314

#define kcg_copy_P027V1_section_int_T_TM_baseline2 kcg_copy_struct__2314

#define kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_comp_array__2322

#define kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_copy_array__2322

#define kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2 kcg_comp_struct__2306

#define kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2 kcg_copy_struct__2306

#define kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_comp_array__2311

#define kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_copy_array__2311

#define kcg_comp_P027V1_trackside_int_T_TM_baseline2 kcg_comp_struct__2325

#define kcg_copy_P027V1_trackside_int_T_TM_baseline2 kcg_copy_struct__2325

#define kcg_comp__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_comp_array__2398

#define kcg_copy__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_copy_array__2398

#define kcg_comp_P027V1_OBU_T_TM_baseline2 kcg_comp_struct__2401

#define kcg_copy_P027V1_OBU_T_TM_baseline2 kcg_copy_struct__2401

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_comp_struct__2380

#define kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_copy_struct__2380

#define kcg_comp__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_comp_array__2386

#define kcg_copy__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_copy_array__2386

#define kcg_comp_P027V1_section_enum_T_TM_baseline2 kcg_comp_struct__2389

#define kcg_copy_P027V1_section_enum_T_TM_baseline2 kcg_copy_struct__2389

#define kcg_comp_P027V1_OBU_body_enum_T_TM_baseline2 kcg_comp_struct__2374

#define kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2 kcg_copy_struct__2374

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-08-27T16:09:02
*************************************************************$ */


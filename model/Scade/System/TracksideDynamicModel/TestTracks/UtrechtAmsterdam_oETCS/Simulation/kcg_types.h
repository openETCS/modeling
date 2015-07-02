/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-03T00:04:39
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

typedef struct { kcg_int NC_DIFF; kcg_int V_DIFF; } struct__2131;

/* TM_baseline2::P027V1_section_int_qdiff_T */
typedef struct__2131 P027V1_section_int_qdiff_T_TM_baseline2;

typedef P027V1_section_int_qdiff_T_TM_baseline2 array__2136[32];

/* TM_baseline2::P027V1_trackside_qdifflist_T */
typedef array__2136 P027V1_trackside_qdifflist_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_int_qdiff_T */
typedef array__2136 P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2;

typedef struct {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
} struct__2139;

/* TM_baseline2::P027V1_section_int_T */
typedef struct__2139 P027V1_section_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__2147[32];

/* TM_baseline2::P027V1_trackside_sectionlist_T */
typedef array__2147 P027V1_trackside_sectionlist_T_TM_baseline2;

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
} struct__2150;

/* TM_baseline2::P027V1_trackside_int_T */
typedef struct__2150 P027V1_trackside_int_T_TM_baseline2;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__2168;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__2168 MetadataElement_T_Common_Types_Pkg;

typedef kcg_int array_int_2[2];

/* TM_baseline2::P027V1_section_array_qdiff_T */
typedef array_int_2 P027V1_section_array_qdiff_T_TM_baseline2;

typedef P027V1_section_array_qdiff_T_TM_baseline2 array_int_2_32[32];

/* TM_baseline2::P027V1_OBU_sectionlist_array_qdiff_T */
typedef array_int_2_32 _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2;

typedef kcg_int array_int_64[64];

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef MetadataElement_T_Common_Types_Pkg array__2185[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__2185 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__2188;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__2188 CompressedPackets_T_Common_Types_Pkg;

typedef P027V1_section_int_T_TM_baseline2 array__2193[33];

/* TM_baseline2::P027V1_OBU_sectionlist_int_T */
typedef array__2193 _2_P027V1_OBU_sectionlist_int_T_TM_baseline2;

typedef kcg_int array_int_5[5];

/* TM::Array05 */
typedef array_int_5 Array05_TM;

typedef struct { kcg_bool valid; Q_DIR q_dir; Q_SCALE q_scale; } struct__2199;

/* TM_baseline2::P027V1_OBU_body_enum_T */
typedef struct__2199 P027V1_OBU_body_enum_T_TM_baseline2;

typedef struct { kcg_bool valid; NC_DIFF nc_diff; V_DIFF v_diff; } struct__2205;

/* TM_baseline2::P027V1_section_enum_qdiff_T */
typedef struct__2205 P027V1_section_enum_qdiff_T_TM_baseline2;

typedef P027V1_section_enum_qdiff_T_TM_baseline2 array__2211[32];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_qdiff_T */
typedef array__2211 _4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  N_ITER n_iter;
  _4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 SECTIONS_q_diff;
} struct__2214;

/* TM_baseline2::P027V1_section_enum_T */
typedef struct__2214 P027V1_section_enum_T_TM_baseline2;

typedef P027V1_section_enum_T_TM_baseline2 array__2223[33];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_T */
typedef array__2223 _3_P027V1_OBU_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  _3_P027V1_OBU_sectionlist_enum_T_TM_baseline2 sections;
} struct__2226;

/* TM_baseline2::P027V1_OBU_T */
typedef struct__2226 P027V1_OBU_T_TM_baseline2;

typedef kcg_int array_int_3[3];

/* TM::Array03 */
typedef array_int_3 Array03_TM;

typedef kcg_int array_int_30[30];

typedef CompressedPacketData_T_Common_Types_Pkg array_int_500_500[500];

typedef kcg_int array_int_32[32];

typedef P027V1_sections_array_flat_qdiff_T_TM_baseline2 array_int_64_32[32];

typedef kcg_int array_int_33[33];

typedef CompressedPackets_T_Common_Types_Pkg array__2251[33];

typedef kcg_int array_int_494[494];

typedef kcg_int array_int_6[6];

typedef P027V1_section_int_T_TM_baseline2 array__2260[1];

typedef array_int_2_32 array_int_2_32_32[32];

typedef kcg_int array_int_432[432];

typedef kcg_int array_int_4[4];

typedef kcg_int array_int_68[68];

#ifndef kcg_copy_struct__2131
#define kcg_copy_struct__2131(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2131)))
#endif /* kcg_copy_struct__2131 */

#ifndef kcg_copy_struct__2139
#define kcg_copy_struct__2139(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2139)))
#endif /* kcg_copy_struct__2139 */

#ifndef kcg_copy_struct__2150
#define kcg_copy_struct__2150(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2150)))
#endif /* kcg_copy_struct__2150 */

#ifndef kcg_copy_struct__2168
#define kcg_copy_struct__2168(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2168)))
#endif /* kcg_copy_struct__2168 */

#ifndef kcg_copy_struct__2188
#define kcg_copy_struct__2188(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2188)))
#endif /* kcg_copy_struct__2188 */

#ifndef kcg_copy_struct__2199
#define kcg_copy_struct__2199(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2199)))
#endif /* kcg_copy_struct__2199 */

#ifndef kcg_copy_struct__2205
#define kcg_copy_struct__2205(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2205)))
#endif /* kcg_copy_struct__2205 */

#ifndef kcg_copy_struct__2214
#define kcg_copy_struct__2214(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2214)))
#endif /* kcg_copy_struct__2214 */

#ifndef kcg_copy_struct__2226
#define kcg_copy_struct__2226(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2226)))
#endif /* kcg_copy_struct__2226 */

#ifndef kcg_copy_array__2136
#define kcg_copy_array__2136(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2136)))
#endif /* kcg_copy_array__2136 */

#ifndef kcg_copy_array__2147
#define kcg_copy_array__2147(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2147)))
#endif /* kcg_copy_array__2147 */

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

#ifndef kcg_copy_array__2185
#define kcg_copy_array__2185(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2185)))
#endif /* kcg_copy_array__2185 */

#ifndef kcg_copy_array__2193
#define kcg_copy_array__2193(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2193)))
#endif /* kcg_copy_array__2193 */

#ifndef kcg_copy_array_int_5
#define kcg_copy_array_int_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_5)))
#endif /* kcg_copy_array_int_5 */

#ifndef kcg_copy_array__2211
#define kcg_copy_array__2211(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2211)))
#endif /* kcg_copy_array__2211 */

#ifndef kcg_copy_array__2223
#define kcg_copy_array__2223(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2223)))
#endif /* kcg_copy_array__2223 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_int_30
#define kcg_copy_array_int_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_30)))
#endif /* kcg_copy_array_int_30 */

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

#ifndef kcg_copy_array__2251
#define kcg_copy_array__2251(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2251)))
#endif /* kcg_copy_array__2251 */

#ifndef kcg_copy_array_int_494
#define kcg_copy_array_int_494(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_494)))
#endif /* kcg_copy_array_int_494 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array__2260
#define kcg_copy_array__2260(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2260)))
#endif /* kcg_copy_array__2260 */

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

#ifndef kcg_comp_struct__2131
extern kcg_bool kcg_comp_struct__2131(
  struct__2131 *kcg_c1,
  struct__2131 *kcg_c2);
#endif /* kcg_comp_struct__2131 */

#ifndef kcg_comp_struct__2139
extern kcg_bool kcg_comp_struct__2139(
  struct__2139 *kcg_c1,
  struct__2139 *kcg_c2);
#endif /* kcg_comp_struct__2139 */

#ifndef kcg_comp_struct__2150
extern kcg_bool kcg_comp_struct__2150(
  struct__2150 *kcg_c1,
  struct__2150 *kcg_c2);
#endif /* kcg_comp_struct__2150 */

#ifndef kcg_comp_struct__2168
extern kcg_bool kcg_comp_struct__2168(
  struct__2168 *kcg_c1,
  struct__2168 *kcg_c2);
#endif /* kcg_comp_struct__2168 */

#ifndef kcg_comp_struct__2188
extern kcg_bool kcg_comp_struct__2188(
  struct__2188 *kcg_c1,
  struct__2188 *kcg_c2);
#endif /* kcg_comp_struct__2188 */

#ifndef kcg_comp_struct__2199
extern kcg_bool kcg_comp_struct__2199(
  struct__2199 *kcg_c1,
  struct__2199 *kcg_c2);
#endif /* kcg_comp_struct__2199 */

#ifndef kcg_comp_struct__2205
extern kcg_bool kcg_comp_struct__2205(
  struct__2205 *kcg_c1,
  struct__2205 *kcg_c2);
#endif /* kcg_comp_struct__2205 */

#ifndef kcg_comp_struct__2214
extern kcg_bool kcg_comp_struct__2214(
  struct__2214 *kcg_c1,
  struct__2214 *kcg_c2);
#endif /* kcg_comp_struct__2214 */

#ifndef kcg_comp_struct__2226
extern kcg_bool kcg_comp_struct__2226(
  struct__2226 *kcg_c1,
  struct__2226 *kcg_c2);
#endif /* kcg_comp_struct__2226 */

#ifndef kcg_comp_array__2136
extern kcg_bool kcg_comp_array__2136(array__2136 *kcg_c1, array__2136 *kcg_c2);
#endif /* kcg_comp_array__2136 */

#ifndef kcg_comp_array__2147
extern kcg_bool kcg_comp_array__2147(array__2147 *kcg_c1, array__2147 *kcg_c2);
#endif /* kcg_comp_array__2147 */

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

#ifndef kcg_comp_array__2185
extern kcg_bool kcg_comp_array__2185(array__2185 *kcg_c1, array__2185 *kcg_c2);
#endif /* kcg_comp_array__2185 */

#ifndef kcg_comp_array__2193
extern kcg_bool kcg_comp_array__2193(array__2193 *kcg_c1, array__2193 *kcg_c2);
#endif /* kcg_comp_array__2193 */

#ifndef kcg_comp_array_int_5
extern kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2);
#endif /* kcg_comp_array_int_5 */

#ifndef kcg_comp_array__2211
extern kcg_bool kcg_comp_array__2211(array__2211 *kcg_c1, array__2211 *kcg_c2);
#endif /* kcg_comp_array__2211 */

#ifndef kcg_comp_array__2223
extern kcg_bool kcg_comp_array__2223(array__2223 *kcg_c1, array__2223 *kcg_c2);
#endif /* kcg_comp_array__2223 */

#ifndef kcg_comp_array_int_3
extern kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2);
#endif /* kcg_comp_array_int_3 */

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

#ifndef kcg_comp_array__2251
extern kcg_bool kcg_comp_array__2251(array__2251 *kcg_c1, array__2251 *kcg_c2);
#endif /* kcg_comp_array__2251 */

#ifndef kcg_comp_array_int_494
extern kcg_bool kcg_comp_array_int_494(
  array_int_494 *kcg_c1,
  array_int_494 *kcg_c2);
#endif /* kcg_comp_array_int_494 */

#ifndef kcg_comp_array_int_6
extern kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2);
#endif /* kcg_comp_array_int_6 */

#ifndef kcg_comp_array__2260
extern kcg_bool kcg_comp_array__2260(array__2260 *kcg_c1, array__2260 *kcg_c2);
#endif /* kcg_comp_array__2260 */

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

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__2188

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__2188

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__2185

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__2185

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__2168

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__2168

#define kcg_comp_Array03_TM kcg_comp_array_int_3

#define kcg_copy_Array03_TM kcg_copy_array_int_3

#define kcg_comp_Array05_TM kcg_comp_array_int_5

#define kcg_copy_Array05_TM kcg_copy_array_int_5

#define kcg_comp_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_comp_array__2136

#define kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_copy_array__2136

#define kcg_comp_P027V1_section_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2

#define kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2

#define kcg_comp__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2_32

#define kcg_copy__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2_32

#define kcg_comp__2_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array__2193

#define kcg_copy__2_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array__2193

#define kcg_comp_P027V1_section_int_T_TM_baseline2 kcg_comp_struct__2139

#define kcg_copy_P027V1_section_int_T_TM_baseline2 kcg_copy_struct__2139

#define kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_comp_array__2147

#define kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_copy_array__2147

#define kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2 kcg_comp_struct__2131

#define kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2 kcg_copy_struct__2131

#define kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_comp_array__2136

#define kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_copy_array__2136

#define kcg_comp_P027V1_trackside_int_T_TM_baseline2 kcg_comp_struct__2150

#define kcg_copy_P027V1_trackside_int_T_TM_baseline2 kcg_copy_struct__2150

#define kcg_comp__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_comp_array__2223

#define kcg_copy__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_copy_array__2223

#define kcg_comp_P027V1_OBU_T_TM_baseline2 kcg_comp_struct__2226

#define kcg_copy_P027V1_OBU_T_TM_baseline2 kcg_copy_struct__2226

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_comp_struct__2205

#define kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_copy_struct__2205

#define kcg_comp__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_comp_array__2211

#define kcg_copy__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_copy_array__2211

#define kcg_comp_P027V1_section_enum_T_TM_baseline2 kcg_comp_struct__2214

#define kcg_copy_P027V1_section_enum_T_TM_baseline2 kcg_copy_struct__2214

#define kcg_comp_P027V1_OBU_body_enum_T_TM_baseline2 kcg_comp_struct__2199

#define kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2 kcg_copy_struct__2199

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-07-03T00:04:39
*************************************************************$ */


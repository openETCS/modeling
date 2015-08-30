/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T09:15:47
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
/* Q_SCALE */
typedef enum {
  Q_SCALE_10_cm_scale = 0,
  Q_SCALE_1_m_scale = 1,
  Q_SCALE_10_m_scale = 2
} Q_SCALE;
/* Q_FRONT */
typedef enum {
  Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element = 0,
  Q_FRONT_No_train_length_delay_on_validity_end_point_of_profile_element = 1
} Q_FRONT;
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

/* TA_MRSP::SSP_t_section_t */
typedef kcg_int SSP_t_section_t_TA_MRSP;

/* TA_MRSP::SSP_s_section_t */
typedef kcg_int SSP_s_section_t_TA_MRSP;

/* Obu_BasicTypes_Pkg::V_internal_Type */
typedef kcg_int V_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::L_internal_Type */
typedef kcg_int L_internal_Type_Obu_BasicTypes_Pkg;

typedef struct {
  SSP_t_section_t_TA_MRSP target;
  SSP_s_section_t_TA_MRSP speed;
} struct__2674;

/* TA_MRSP::SSP_section_t */
typedef struct__2674 SSP_section_t_TA_MRSP;

typedef SSP_section_t_TA_MRSP array__2679[33];

/* TA_MRSP::SSP_cat_t */
typedef array__2679 SSP_cat_t_TA_MRSP;

typedef struct { kcg_bool valid; NC_DIFF nc_diff; V_DIFF v_diff; } struct__2682;

/* TM_baseline2::P027V1_section_enum_qdiff_T */
typedef struct__2682 P027V1_section_enum_qdiff_T_TM_baseline2;

typedef P027V1_section_enum_qdiff_T_TM_baseline2 array__2688[32];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_qdiff_T */
typedef array__2688 _4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  N_ITER n_iter;
  _4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 SECTIONS_q_diff;
} struct__2691;

/* TM_baseline2::P027V1_section_enum_T */
typedef struct__2691 P027V1_section_enum_T_TM_baseline2;

typedef P027V1_section_enum_T_TM_baseline2 array__2700[33];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_T */
typedef array__2700 _3_P027V1_OBU_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  _3_P027V1_OBU_sectionlist_enum_T_TM_baseline2 sections;
} struct__2703;

/* TM_baseline2::P027V1_OBU_T */
typedef struct__2703 P027V1_OBU_T_TM_baseline2;

typedef struct { kcg_int NC_DIFF; kcg_int V_DIFF; } struct__2710;

/* TM_baseline2::P027V1_section_int_qdiff_T */
typedef struct__2710 P027V1_section_int_qdiff_T_TM_baseline2;

typedef P027V1_section_int_qdiff_T_TM_baseline2 array__2715[32];

/* TM_baseline2::P027V1_trackside_qdifflist_T */
typedef array__2715 P027V1_trackside_qdifflist_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_int_qdiff_T */
typedef array__2715 P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2;

typedef struct {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
} struct__2718;

/* TM_baseline2::P027V1_section_int_T */
typedef struct__2718 P027V1_section_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__2726[32];

/* TM_baseline2::P027V1_trackside_sectionlist_T */
typedef array__2726 P027V1_trackside_sectionlist_T_TM_baseline2;

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
} struct__2729;

/* TM_baseline2::P027V1_trackside_int_T */
typedef struct__2729 P027V1_trackside_int_T_TM_baseline2;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__2747;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__2747 MetadataElement_T_Common_Types_Pkg;

typedef kcg_int array_int_2[2];

/* TM_baseline2::P027V1_section_array_qdiff_T */
typedef array_int_2 P027V1_section_array_qdiff_T_TM_baseline2;

typedef P027V1_section_array_qdiff_T_TM_baseline2 array_int_2_32[32];

/* TM_baseline2::P027V1_OBU_sectionlist_array_qdiff_T */
typedef array_int_2_32 _1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2;

typedef kcg_int array_int_64[64];

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef MetadataElement_T_Common_Types_Pkg array__2764[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__2764 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__2767;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__2767 CompressedPackets_T_Common_Types_Pkg;

typedef P027V1_section_int_T_TM_baseline2 array__2772[33];

/* TM_baseline2::P027V1_OBU_sectionlist_int_T */
typedef array__2772 _2_P027V1_OBU_sectionlist_int_T_TM_baseline2;

typedef kcg_int array_int_5[5];

/* TM::Array05 */
typedef array_int_5 Array05_TM;

typedef struct { kcg_bool valid; Q_DIR q_dir; Q_SCALE q_scale; } struct__2778;

/* TM_baseline2::P027V1_OBU_body_enum_T */
typedef struct__2778 P027V1_OBU_body_enum_T_TM_baseline2;

typedef kcg_int array_int_3[3];

/* TM::Array03 */
typedef array_int_3 Array03_TM;

typedef kcg_int array_int_30[30];

typedef kcg_bool array_bool_30[30];

typedef CompressedPacketData_T_Common_Types_Pkg array_int_500_500[500];

typedef kcg_int array_int_32[32];

typedef P027V1_sections_array_flat_qdiff_T_TM_baseline2 array_int_64_32[32];

typedef kcg_int array_int_33[33];

typedef CompressedPackets_T_Common_Types_Pkg array__2805[33];

typedef kcg_int array_int_494[494];

typedef kcg_int array_int_6[6];

typedef P027V1_section_int_T_TM_baseline2 array__2814[1];

typedef array_int_2_32 array_int_2_32_32[32];

typedef kcg_int array_int_432[432];

typedef kcg_int array_int_4[4];

typedef kcg_int array_int_68[68];

typedef P027V1_section_enum_T_TM_baseline2 array__2829[32];

typedef array__2700 array__2832[33];

typedef Q_SCALE array__2835[33];

typedef P027V1_section_enum_T_TM_baseline2 array__2838[1];

#ifndef kcg_copy_struct__2674
#define kcg_copy_struct__2674(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2674)))
#endif /* kcg_copy_struct__2674 */

#ifndef kcg_copy_struct__2682
#define kcg_copy_struct__2682(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2682)))
#endif /* kcg_copy_struct__2682 */

#ifndef kcg_copy_struct__2691
#define kcg_copy_struct__2691(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2691)))
#endif /* kcg_copy_struct__2691 */

#ifndef kcg_copy_struct__2703
#define kcg_copy_struct__2703(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2703)))
#endif /* kcg_copy_struct__2703 */

#ifndef kcg_copy_struct__2710
#define kcg_copy_struct__2710(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2710)))
#endif /* kcg_copy_struct__2710 */

#ifndef kcg_copy_struct__2718
#define kcg_copy_struct__2718(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2718)))
#endif /* kcg_copy_struct__2718 */

#ifndef kcg_copy_struct__2729
#define kcg_copy_struct__2729(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2729)))
#endif /* kcg_copy_struct__2729 */

#ifndef kcg_copy_struct__2747
#define kcg_copy_struct__2747(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2747)))
#endif /* kcg_copy_struct__2747 */

#ifndef kcg_copy_struct__2767
#define kcg_copy_struct__2767(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2767)))
#endif /* kcg_copy_struct__2767 */

#ifndef kcg_copy_struct__2778
#define kcg_copy_struct__2778(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__2778)))
#endif /* kcg_copy_struct__2778 */

#ifndef kcg_copy_array__2679
#define kcg_copy_array__2679(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2679)))
#endif /* kcg_copy_array__2679 */

#ifndef kcg_copy_array__2688
#define kcg_copy_array__2688(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2688)))
#endif /* kcg_copy_array__2688 */

#ifndef kcg_copy_array__2700
#define kcg_copy_array__2700(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2700)))
#endif /* kcg_copy_array__2700 */

#ifndef kcg_copy_array__2715
#define kcg_copy_array__2715(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2715)))
#endif /* kcg_copy_array__2715 */

#ifndef kcg_copy_array__2726
#define kcg_copy_array__2726(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2726)))
#endif /* kcg_copy_array__2726 */

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

#ifndef kcg_copy_array__2764
#define kcg_copy_array__2764(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2764)))
#endif /* kcg_copy_array__2764 */

#ifndef kcg_copy_array__2772
#define kcg_copy_array__2772(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2772)))
#endif /* kcg_copy_array__2772 */

#ifndef kcg_copy_array_int_5
#define kcg_copy_array_int_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_5)))
#endif /* kcg_copy_array_int_5 */

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

#ifndef kcg_copy_array__2805
#define kcg_copy_array__2805(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2805)))
#endif /* kcg_copy_array__2805 */

#ifndef kcg_copy_array_int_494
#define kcg_copy_array_int_494(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_494)))
#endif /* kcg_copy_array_int_494 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array__2814
#define kcg_copy_array__2814(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2814)))
#endif /* kcg_copy_array__2814 */

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

#ifndef kcg_copy_array__2829
#define kcg_copy_array__2829(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2829)))
#endif /* kcg_copy_array__2829 */

#ifndef kcg_copy_array__2832
#define kcg_copy_array__2832(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2832)))
#endif /* kcg_copy_array__2832 */

#ifndef kcg_copy_array__2835
#define kcg_copy_array__2835(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2835)))
#endif /* kcg_copy_array__2835 */

#ifndef kcg_copy_array__2838
#define kcg_copy_array__2838(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2838)))
#endif /* kcg_copy_array__2838 */

#ifndef kcg_comp_struct__2674
extern kcg_bool kcg_comp_struct__2674(
  struct__2674 *kcg_c1,
  struct__2674 *kcg_c2);
#endif /* kcg_comp_struct__2674 */

#ifndef kcg_comp_struct__2682
extern kcg_bool kcg_comp_struct__2682(
  struct__2682 *kcg_c1,
  struct__2682 *kcg_c2);
#endif /* kcg_comp_struct__2682 */

#ifndef kcg_comp_struct__2691
extern kcg_bool kcg_comp_struct__2691(
  struct__2691 *kcg_c1,
  struct__2691 *kcg_c2);
#endif /* kcg_comp_struct__2691 */

#ifndef kcg_comp_struct__2703
extern kcg_bool kcg_comp_struct__2703(
  struct__2703 *kcg_c1,
  struct__2703 *kcg_c2);
#endif /* kcg_comp_struct__2703 */

#ifndef kcg_comp_struct__2710
extern kcg_bool kcg_comp_struct__2710(
  struct__2710 *kcg_c1,
  struct__2710 *kcg_c2);
#endif /* kcg_comp_struct__2710 */

#ifndef kcg_comp_struct__2718
extern kcg_bool kcg_comp_struct__2718(
  struct__2718 *kcg_c1,
  struct__2718 *kcg_c2);
#endif /* kcg_comp_struct__2718 */

#ifndef kcg_comp_struct__2729
extern kcg_bool kcg_comp_struct__2729(
  struct__2729 *kcg_c1,
  struct__2729 *kcg_c2);
#endif /* kcg_comp_struct__2729 */

#ifndef kcg_comp_struct__2747
extern kcg_bool kcg_comp_struct__2747(
  struct__2747 *kcg_c1,
  struct__2747 *kcg_c2);
#endif /* kcg_comp_struct__2747 */

#ifndef kcg_comp_struct__2767
extern kcg_bool kcg_comp_struct__2767(
  struct__2767 *kcg_c1,
  struct__2767 *kcg_c2);
#endif /* kcg_comp_struct__2767 */

#ifndef kcg_comp_struct__2778
extern kcg_bool kcg_comp_struct__2778(
  struct__2778 *kcg_c1,
  struct__2778 *kcg_c2);
#endif /* kcg_comp_struct__2778 */

#ifndef kcg_comp_array__2679
extern kcg_bool kcg_comp_array__2679(array__2679 *kcg_c1, array__2679 *kcg_c2);
#endif /* kcg_comp_array__2679 */

#ifndef kcg_comp_array__2688
extern kcg_bool kcg_comp_array__2688(array__2688 *kcg_c1, array__2688 *kcg_c2);
#endif /* kcg_comp_array__2688 */

#ifndef kcg_comp_array__2700
extern kcg_bool kcg_comp_array__2700(array__2700 *kcg_c1, array__2700 *kcg_c2);
#endif /* kcg_comp_array__2700 */

#ifndef kcg_comp_array__2715
extern kcg_bool kcg_comp_array__2715(array__2715 *kcg_c1, array__2715 *kcg_c2);
#endif /* kcg_comp_array__2715 */

#ifndef kcg_comp_array__2726
extern kcg_bool kcg_comp_array__2726(array__2726 *kcg_c1, array__2726 *kcg_c2);
#endif /* kcg_comp_array__2726 */

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

#ifndef kcg_comp_array__2764
extern kcg_bool kcg_comp_array__2764(array__2764 *kcg_c1, array__2764 *kcg_c2);
#endif /* kcg_comp_array__2764 */

#ifndef kcg_comp_array__2772
extern kcg_bool kcg_comp_array__2772(array__2772 *kcg_c1, array__2772 *kcg_c2);
#endif /* kcg_comp_array__2772 */

#ifndef kcg_comp_array_int_5
extern kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2);
#endif /* kcg_comp_array_int_5 */

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

#ifndef kcg_comp_array__2805
extern kcg_bool kcg_comp_array__2805(array__2805 *kcg_c1, array__2805 *kcg_c2);
#endif /* kcg_comp_array__2805 */

#ifndef kcg_comp_array_int_494
extern kcg_bool kcg_comp_array_int_494(
  array_int_494 *kcg_c1,
  array_int_494 *kcg_c2);
#endif /* kcg_comp_array_int_494 */

#ifndef kcg_comp_array_int_6
extern kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2);
#endif /* kcg_comp_array_int_6 */

#ifndef kcg_comp_array__2814
extern kcg_bool kcg_comp_array__2814(array__2814 *kcg_c1, array__2814 *kcg_c2);
#endif /* kcg_comp_array__2814 */

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

#ifndef kcg_comp_array__2829
extern kcg_bool kcg_comp_array__2829(array__2829 *kcg_c1, array__2829 *kcg_c2);
#endif /* kcg_comp_array__2829 */

#ifndef kcg_comp_array__2832
extern kcg_bool kcg_comp_array__2832(array__2832 *kcg_c1, array__2832 *kcg_c2);
#endif /* kcg_comp_array__2832 */

#ifndef kcg_comp_array__2835
extern kcg_bool kcg_comp_array__2835(array__2835 *kcg_c1, array__2835 *kcg_c2);
#endif /* kcg_comp_array__2835 */

#ifndef kcg_comp_array__2838
extern kcg_bool kcg_comp_array__2838(array__2838 *kcg_c1, array__2838 *kcg_c2);
#endif /* kcg_comp_array__2838 */

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__2767

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__2767

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__2764

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__2764

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__2747

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__2747

#define kcg_comp_Array03_TM kcg_comp_array_int_3

#define kcg_copy_Array03_TM kcg_copy_array_int_3

#define kcg_comp_Array05_TM kcg_comp_array_int_5

#define kcg_copy_Array05_TM kcg_copy_array_int_5

#define kcg_comp_SSP_cat_t_TA_MRSP kcg_comp_array__2679

#define kcg_copy_SSP_cat_t_TA_MRSP kcg_copy_array__2679

#define kcg_comp_SSP_section_t_TA_MRSP kcg_comp_struct__2674

#define kcg_copy_SSP_section_t_TA_MRSP kcg_copy_struct__2674

#define kcg_comp_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_comp_array__2715

#define kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_copy_array__2715

#define kcg_comp_P027V1_section_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2

#define kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2

#define kcg_comp__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2_32

#define kcg_copy__1_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2_32

#define kcg_comp__2_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array__2772

#define kcg_copy__2_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array__2772

#define kcg_comp_P027V1_section_int_T_TM_baseline2 kcg_comp_struct__2718

#define kcg_copy_P027V1_section_int_T_TM_baseline2 kcg_copy_struct__2718

#define kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_comp_array__2726

#define kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_copy_array__2726

#define kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2 kcg_comp_struct__2710

#define kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2 kcg_copy_struct__2710

#define kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_comp_array__2715

#define kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_copy_array__2715

#define kcg_comp_P027V1_trackside_int_T_TM_baseline2 kcg_comp_struct__2729

#define kcg_copy_P027V1_trackside_int_T_TM_baseline2 kcg_copy_struct__2729

#define kcg_comp__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_comp_array__2700

#define kcg_copy__3_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_copy_array__2700

#define kcg_comp_P027V1_OBU_T_TM_baseline2 kcg_comp_struct__2703

#define kcg_copy_P027V1_OBU_T_TM_baseline2 kcg_copy_struct__2703

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_comp_struct__2682

#define kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_copy_struct__2682

#define kcg_comp__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_comp_array__2688

#define kcg_copy__4_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_copy_array__2688

#define kcg_comp_P027V1_section_enum_T_TM_baseline2 kcg_comp_struct__2691

#define kcg_copy_P027V1_section_enum_T_TM_baseline2 kcg_copy_struct__2691

#define kcg_comp_P027V1_OBU_body_enum_T_TM_baseline2 kcg_comp_struct__2778

#define kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2 kcg_copy_struct__2778

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-08-30T09:15:47
*************************************************************$ */


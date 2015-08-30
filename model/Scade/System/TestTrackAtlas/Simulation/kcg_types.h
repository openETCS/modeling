/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-30T07:55:34
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
/* Q_GDIR */
typedef enum { Q_GDIR_downhill = 0, Q_GDIR_uphill = 1 } Q_GDIR;
/* NID_PACKET */
typedef kcg_int NID_PACKET;

/* D_GRADIENT */
typedef kcg_int D_GRADIENT;

/* G_A */
typedef kcg_int G_A;

/* N_ITER */
typedef kcg_int N_ITER;

/* TM::nid_packet_meta */
typedef kcg_int nid_packet_meta_TM;

/* Obu_BasicTypes_Pkg::L_internal_Type */
typedef kcg_int L_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::G_internal_Type */
typedef kcg_int G_internal_Type_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_Absolute;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_LRBG;
  G_internal_Type_Obu_BasicTypes_Pkg Gradient;
  L_internal_Type_Obu_BasicTypes_Pkg L_Gradient;
} struct__1921;

/* TrackAtlasTypes::Gradient_section_t */
typedef struct__1921 Gradient_section_t_TrackAtlasTypes;

typedef Gradient_section_t_TrackAtlasTypes array__1929[50];

/* TrackAtlasTypes::GradientProfile_t */
typedef array__1929 GradientProfile_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} struct__1932;

/* TM::P021_section_enum_T */
typedef struct__1932 P021_section_enum_T_TM;

typedef P021_section_enum_T_TM array__1939[33];

/* TM::P021_OBU_sectionlist_enum_T */
typedef array__1939 P021_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P021_OBU_sectionlist_enum_T_TM sections;
} struct__1942;

/* TM::P021_OBU_T */
typedef struct__1942 P021_OBU_T_TM;

typedef struct {
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
} struct__1950;

/* TM::P021_section_int_T */
typedef struct__1950 P021_section_int_T_TM;

typedef P021_section_int_T_TM array__1956[32];

/* TM::P021_trackide_sectionlist_T */
typedef array__1956 P021_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
  kcg_int N_ITER;
  P021_trackide_sectionlist_T_TM SECTIONS;
} struct__1959;

/* TM::P021_trackside_int_T */
typedef struct__1959 P021_trackside_int_T_TM;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__1975;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__1975 MetadataElement_T_Common_Types_Pkg;

typedef kcg_int array_int_3[3];

/* TM::P021_section_array_T */
typedef array_int_3 P021_section_array_T_TM;

typedef P021_section_array_T_TM array_int_3_33[33];

/* TM::P021_OBU_sectionlist_array_T */
typedef array_int_3_33 P021_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_99[99];

/* TM::P021_sections_array_flat_T */
typedef array_int_99 P021_sections_array_flat_T_TM;

typedef P021_section_int_T_TM array__1992[33];

/* TM::P021_OBU_sectionlist_int_T */
typedef array__1992 P021_OBU_sectionlist_int_T_TM;

typedef MetadataElement_T_Common_Types_Pkg array__1995[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__1995 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__1998;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__1998 CompressedPackets_T_Common_Types_Pkg;

typedef kcg_int array_int_5[5];

/* TM::Array05 */
typedef array_int_5 Array05_TM;

typedef kcg_int array_int_30[30];

typedef kcg_bool array_bool_30[30];

typedef CompressedPacketData_T_Common_Types_Pkg array_int_500_500[500];

typedef kcg_int array_int_33[33];

typedef P021_sections_array_flat_T_TM array_int_99_33[33];

typedef array_int_3_33 array_int_3_33_231[231];

typedef kcg_int array_int_396[396];

typedef kcg_int array_int_4[4];

typedef kcg_int array_int_1[1];

typedef kcg_int array_int_104[104];

typedef P021_section_int_T_TM array__2036[1];

typedef array__1939 array__2039[33];

typedef Q_SCALE array__2042[33];

#ifndef kcg_copy_struct__1921
#define kcg_copy_struct__1921(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1921)))
#endif /* kcg_copy_struct__1921 */

#ifndef kcg_copy_struct__1932
#define kcg_copy_struct__1932(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1932)))
#endif /* kcg_copy_struct__1932 */

#ifndef kcg_copy_struct__1942
#define kcg_copy_struct__1942(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1942)))
#endif /* kcg_copy_struct__1942 */

#ifndef kcg_copy_struct__1950
#define kcg_copy_struct__1950(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1950)))
#endif /* kcg_copy_struct__1950 */

#ifndef kcg_copy_struct__1959
#define kcg_copy_struct__1959(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1959)))
#endif /* kcg_copy_struct__1959 */

#ifndef kcg_copy_struct__1975
#define kcg_copy_struct__1975(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1975)))
#endif /* kcg_copy_struct__1975 */

#ifndef kcg_copy_struct__1998
#define kcg_copy_struct__1998(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1998)))
#endif /* kcg_copy_struct__1998 */

#ifndef kcg_copy_array__1929
#define kcg_copy_array__1929(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__1929)))
#endif /* kcg_copy_array__1929 */

#ifndef kcg_copy_array__1939
#define kcg_copy_array__1939(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__1939)))
#endif /* kcg_copy_array__1939 */

#ifndef kcg_copy_array__1956
#define kcg_copy_array__1956(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__1956)))
#endif /* kcg_copy_array__1956 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_int_3_33
#define kcg_copy_array_int_3_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33)))
#endif /* kcg_copy_array_int_3_33 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__1992
#define kcg_copy_array__1992(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__1992)))
#endif /* kcg_copy_array__1992 */

#ifndef kcg_copy_array__1995
#define kcg_copy_array__1995(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__1995)))
#endif /* kcg_copy_array__1995 */

#ifndef kcg_copy_array_int_5
#define kcg_copy_array_int_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_5)))
#endif /* kcg_copy_array_int_5 */

#ifndef kcg_copy_array_int_30
#define kcg_copy_array_int_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_30)))
#endif /* kcg_copy_array_int_30 */

#ifndef kcg_copy_array_bool_30
#define kcg_copy_array_bool_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_30)))
#endif /* kcg_copy_array_bool_30 */

#ifndef kcg_copy_array_int_500_500
#define kcg_copy_array_int_500_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500_500)))
#endif /* kcg_copy_array_int_500_500 */

#ifndef kcg_copy_array_int_33
#define kcg_copy_array_int_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33)))
#endif /* kcg_copy_array_int_33 */

#ifndef kcg_copy_array_int_99_33
#define kcg_copy_array_int_99_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99_33)))
#endif /* kcg_copy_array_int_99_33 */

#ifndef kcg_copy_array_int_3_33_231
#define kcg_copy_array_int_3_33_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33_231)))
#endif /* kcg_copy_array_int_3_33_231 */

#ifndef kcg_copy_array_int_396
#define kcg_copy_array_int_396(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_396)))
#endif /* kcg_copy_array_int_396 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_int_1
#define kcg_copy_array_int_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_1)))
#endif /* kcg_copy_array_int_1 */

#ifndef kcg_copy_array_int_104
#define kcg_copy_array_int_104(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_104)))
#endif /* kcg_copy_array_int_104 */

#ifndef kcg_copy_array__2036
#define kcg_copy_array__2036(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2036)))
#endif /* kcg_copy_array__2036 */

#ifndef kcg_copy_array__2039
#define kcg_copy_array__2039(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2039)))
#endif /* kcg_copy_array__2039 */

#ifndef kcg_copy_array__2042
#define kcg_copy_array__2042(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__2042)))
#endif /* kcg_copy_array__2042 */

#ifndef kcg_comp_struct__1921
extern kcg_bool kcg_comp_struct__1921(
  struct__1921 *kcg_c1,
  struct__1921 *kcg_c2);
#endif /* kcg_comp_struct__1921 */

#ifndef kcg_comp_struct__1932
extern kcg_bool kcg_comp_struct__1932(
  struct__1932 *kcg_c1,
  struct__1932 *kcg_c2);
#endif /* kcg_comp_struct__1932 */

#ifndef kcg_comp_struct__1942
extern kcg_bool kcg_comp_struct__1942(
  struct__1942 *kcg_c1,
  struct__1942 *kcg_c2);
#endif /* kcg_comp_struct__1942 */

#ifndef kcg_comp_struct__1950
extern kcg_bool kcg_comp_struct__1950(
  struct__1950 *kcg_c1,
  struct__1950 *kcg_c2);
#endif /* kcg_comp_struct__1950 */

#ifndef kcg_comp_struct__1959
extern kcg_bool kcg_comp_struct__1959(
  struct__1959 *kcg_c1,
  struct__1959 *kcg_c2);
#endif /* kcg_comp_struct__1959 */

#ifndef kcg_comp_struct__1975
extern kcg_bool kcg_comp_struct__1975(
  struct__1975 *kcg_c1,
  struct__1975 *kcg_c2);
#endif /* kcg_comp_struct__1975 */

#ifndef kcg_comp_struct__1998
extern kcg_bool kcg_comp_struct__1998(
  struct__1998 *kcg_c1,
  struct__1998 *kcg_c2);
#endif /* kcg_comp_struct__1998 */

#ifndef kcg_comp_array__1929
extern kcg_bool kcg_comp_array__1929(array__1929 *kcg_c1, array__1929 *kcg_c2);
#endif /* kcg_comp_array__1929 */

#ifndef kcg_comp_array__1939
extern kcg_bool kcg_comp_array__1939(array__1939 *kcg_c1, array__1939 *kcg_c2);
#endif /* kcg_comp_array__1939 */

#ifndef kcg_comp_array__1956
extern kcg_bool kcg_comp_array__1956(array__1956 *kcg_c1, array__1956 *kcg_c2);
#endif /* kcg_comp_array__1956 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array_int_3
extern kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2);
#endif /* kcg_comp_array_int_3 */

#ifndef kcg_comp_array_int_3_33
extern kcg_bool kcg_comp_array_int_3_33(
  array_int_3_33 *kcg_c1,
  array_int_3_33 *kcg_c2);
#endif /* kcg_comp_array_int_3_33 */

#ifndef kcg_comp_array_int_99
extern kcg_bool kcg_comp_array_int_99(
  array_int_99 *kcg_c1,
  array_int_99 *kcg_c2);
#endif /* kcg_comp_array_int_99 */

#ifndef kcg_comp_array__1992
extern kcg_bool kcg_comp_array__1992(array__1992 *kcg_c1, array__1992 *kcg_c2);
#endif /* kcg_comp_array__1992 */

#ifndef kcg_comp_array__1995
extern kcg_bool kcg_comp_array__1995(array__1995 *kcg_c1, array__1995 *kcg_c2);
#endif /* kcg_comp_array__1995 */

#ifndef kcg_comp_array_int_5
extern kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2);
#endif /* kcg_comp_array_int_5 */

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

#ifndef kcg_comp_array_int_33
extern kcg_bool kcg_comp_array_int_33(
  array_int_33 *kcg_c1,
  array_int_33 *kcg_c2);
#endif /* kcg_comp_array_int_33 */

#ifndef kcg_comp_array_int_99_33
extern kcg_bool kcg_comp_array_int_99_33(
  array_int_99_33 *kcg_c1,
  array_int_99_33 *kcg_c2);
#endif /* kcg_comp_array_int_99_33 */

#ifndef kcg_comp_array_int_3_33_231
extern kcg_bool kcg_comp_array_int_3_33_231(
  array_int_3_33_231 *kcg_c1,
  array_int_3_33_231 *kcg_c2);
#endif /* kcg_comp_array_int_3_33_231 */

#ifndef kcg_comp_array_int_396
extern kcg_bool kcg_comp_array_int_396(
  array_int_396 *kcg_c1,
  array_int_396 *kcg_c2);
#endif /* kcg_comp_array_int_396 */

#ifndef kcg_comp_array_int_4
extern kcg_bool kcg_comp_array_int_4(array_int_4 *kcg_c1, array_int_4 *kcg_c2);
#endif /* kcg_comp_array_int_4 */

#ifndef kcg_comp_array_int_1
extern kcg_bool kcg_comp_array_int_1(array_int_1 *kcg_c1, array_int_1 *kcg_c2);
#endif /* kcg_comp_array_int_1 */

#ifndef kcg_comp_array_int_104
extern kcg_bool kcg_comp_array_int_104(
  array_int_104 *kcg_c1,
  array_int_104 *kcg_c2);
#endif /* kcg_comp_array_int_104 */

#ifndef kcg_comp_array__2036
extern kcg_bool kcg_comp_array__2036(array__2036 *kcg_c1, array__2036 *kcg_c2);
#endif /* kcg_comp_array__2036 */

#ifndef kcg_comp_array__2039
extern kcg_bool kcg_comp_array__2039(array__2039 *kcg_c1, array__2039 *kcg_c2);
#endif /* kcg_comp_array__2039 */

#ifndef kcg_comp_array__2042
extern kcg_bool kcg_comp_array__2042(array__2042 *kcg_c1, array__2042 *kcg_c2);
#endif /* kcg_comp_array__2042 */

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__1998

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__1998

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__1995

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__1995

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__1975

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__1975

#define kcg_comp_P021_OBU_sectionlist_int_T_TM kcg_comp_array__1992

#define kcg_copy_P021_OBU_sectionlist_int_T_TM kcg_copy_array__1992

#define kcg_comp_P021_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P021_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P021_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P021_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P021_section_int_T_TM kcg_comp_struct__1950

#define kcg_copy_P021_section_int_T_TM kcg_copy_struct__1950

#define kcg_comp_GradientProfile_t_TrackAtlasTypes kcg_comp_array__1929

#define kcg_copy_GradientProfile_t_TrackAtlasTypes kcg_copy_array__1929

#define kcg_comp_P021_trackide_sectionlist_T_TM kcg_comp_array__1956

#define kcg_copy_P021_trackide_sectionlist_T_TM kcg_copy_array__1956

#define kcg_comp_Gradient_section_t_TrackAtlasTypes kcg_comp_struct__1921

#define kcg_copy_Gradient_section_t_TrackAtlasTypes kcg_copy_struct__1921

#define kcg_comp_P021_trackside_int_T_TM kcg_comp_struct__1959

#define kcg_copy_P021_trackside_int_T_TM kcg_copy_struct__1959

#define kcg_comp_Array05_TM kcg_comp_array_int_5

#define kcg_copy_Array05_TM kcg_copy_array_int_5

#define kcg_comp_P021_OBU_T_TM kcg_comp_struct__1942

#define kcg_copy_P021_OBU_T_TM kcg_copy_struct__1942

#define kcg_comp_P021_OBU_sectionlist_enum_T_TM kcg_comp_array__1939

#define kcg_copy_P021_OBU_sectionlist_enum_T_TM kcg_copy_array__1939

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P021_section_enum_T_TM kcg_comp_struct__1932

#define kcg_copy_P021_section_enum_T_TM kcg_copy_struct__1932

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-08-30T07:55:34
*************************************************************$ */


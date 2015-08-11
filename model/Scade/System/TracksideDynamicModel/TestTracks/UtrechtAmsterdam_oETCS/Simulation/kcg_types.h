/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-11T09:13:49
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

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} struct__1774;

/* Packet_Types_Pkg::P21_GradientProfile_T */
typedef struct__1774 P21_GradientProfile_T_Packet_Types_Pkg;

typedef P21_GradientProfile_T_Packet_Types_Pkg array__1783[7];

/* Packet_Types_Pkg::P21_GradientProfiles_T */
typedef array__1783 P21_GradientProfiles_T_Packet_Types_Pkg;

typedef struct {
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
} struct__1786;

/* TM::P021_section_int_T */
typedef struct__1786 P021_section_int_T_TM;

typedef P021_section_int_T_TM array__1792[32];

/* TM::P021_trackide_sectionlist_T */
typedef array__1792 P021_trackide_sectionlist_T_TM;

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
} struct__1795;

/* TM::P021_trackside_int_T */
typedef struct__1795 P021_trackside_int_T_TM;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__1811;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__1811 MetadataElement_T_Common_Types_Pkg;

typedef kcg_int array_int_3[3];

/* TM::P021_section_array_T */
typedef array_int_3 P021_section_array_T_TM;

typedef P021_section_array_T_TM array_int_3_33[33];

/* TM::P021_OBU_sectionlist_array_T */
typedef array_int_3_33 P021_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_99[99];

/* TM::P021_sections_array_flat_T */
typedef array_int_99 P021_sections_array_flat_T_TM;

typedef P021_section_int_T_TM array__1828[33];

/* TM::P021_OBU_sectionlist_int_T */
typedef array__1828 P021_OBU_sectionlist_int_T_TM;

typedef MetadataElement_T_Common_Types_Pkg array__1831[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__1831 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__1834;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__1834 CompressedPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} struct__1839;

/* TM::P021_section_enum_T */
typedef struct__1839 P021_section_enum_T_TM;

typedef P021_section_enum_T_TM array__1846[33];

/* TM::P021_OBU_sectionlist_enum_T */
typedef array__1846 P021_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P021_OBU_sectionlist_enum_T_TM sections;
} struct__1849;

/* TM::P021_OBU_T */
typedef struct__1849 P021_OBU_T_TM;

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

typedef P021_section_int_T_TM array__1890[1];

typedef P021_OBU_sectionlist_enum_T_TM array__1893[7];

typedef P021_OBU_T_TM array__1896[7];

#ifndef kcg_copy_struct__1774
#define kcg_copy_struct__1774(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1774)))
#endif /* kcg_copy_struct__1774 */

#ifndef kcg_copy_struct__1786
#define kcg_copy_struct__1786(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1786)))
#endif /* kcg_copy_struct__1786 */

#ifndef kcg_copy_struct__1795
#define kcg_copy_struct__1795(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1795)))
#endif /* kcg_copy_struct__1795 */

#ifndef kcg_copy_struct__1811
#define kcg_copy_struct__1811(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1811)))
#endif /* kcg_copy_struct__1811 */

#ifndef kcg_copy_struct__1834
#define kcg_copy_struct__1834(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1834)))
#endif /* kcg_copy_struct__1834 */

#ifndef kcg_copy_struct__1839
#define kcg_copy_struct__1839(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1839)))
#endif /* kcg_copy_struct__1839 */

#ifndef kcg_copy_struct__1849
#define kcg_copy_struct__1849(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1849)))
#endif /* kcg_copy_struct__1849 */

#ifndef kcg_copy_array__1783
#define kcg_copy_array__1783(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__1783)))
#endif /* kcg_copy_array__1783 */

#ifndef kcg_copy_array__1792
#define kcg_copy_array__1792(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__1792)))
#endif /* kcg_copy_array__1792 */

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

#ifndef kcg_copy_array__1828
#define kcg_copy_array__1828(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__1828)))
#endif /* kcg_copy_array__1828 */

#ifndef kcg_copy_array__1831
#define kcg_copy_array__1831(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__1831)))
#endif /* kcg_copy_array__1831 */

#ifndef kcg_copy_array__1846
#define kcg_copy_array__1846(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__1846)))
#endif /* kcg_copy_array__1846 */

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

#ifndef kcg_copy_array__1890
#define kcg_copy_array__1890(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__1890)))
#endif /* kcg_copy_array__1890 */

#ifndef kcg_copy_array__1893
#define kcg_copy_array__1893(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__1893)))
#endif /* kcg_copy_array__1893 */

#ifndef kcg_copy_array__1896
#define kcg_copy_array__1896(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__1896)))
#endif /* kcg_copy_array__1896 */

#ifndef kcg_comp_struct__1774
extern kcg_bool kcg_comp_struct__1774(
  struct__1774 *kcg_c1,
  struct__1774 *kcg_c2);
#endif /* kcg_comp_struct__1774 */

#ifndef kcg_comp_struct__1786
extern kcg_bool kcg_comp_struct__1786(
  struct__1786 *kcg_c1,
  struct__1786 *kcg_c2);
#endif /* kcg_comp_struct__1786 */

#ifndef kcg_comp_struct__1795
extern kcg_bool kcg_comp_struct__1795(
  struct__1795 *kcg_c1,
  struct__1795 *kcg_c2);
#endif /* kcg_comp_struct__1795 */

#ifndef kcg_comp_struct__1811
extern kcg_bool kcg_comp_struct__1811(
  struct__1811 *kcg_c1,
  struct__1811 *kcg_c2);
#endif /* kcg_comp_struct__1811 */

#ifndef kcg_comp_struct__1834
extern kcg_bool kcg_comp_struct__1834(
  struct__1834 *kcg_c1,
  struct__1834 *kcg_c2);
#endif /* kcg_comp_struct__1834 */

#ifndef kcg_comp_struct__1839
extern kcg_bool kcg_comp_struct__1839(
  struct__1839 *kcg_c1,
  struct__1839 *kcg_c2);
#endif /* kcg_comp_struct__1839 */

#ifndef kcg_comp_struct__1849
extern kcg_bool kcg_comp_struct__1849(
  struct__1849 *kcg_c1,
  struct__1849 *kcg_c2);
#endif /* kcg_comp_struct__1849 */

#ifndef kcg_comp_array__1783
extern kcg_bool kcg_comp_array__1783(array__1783 *kcg_c1, array__1783 *kcg_c2);
#endif /* kcg_comp_array__1783 */

#ifndef kcg_comp_array__1792
extern kcg_bool kcg_comp_array__1792(array__1792 *kcg_c1, array__1792 *kcg_c2);
#endif /* kcg_comp_array__1792 */

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

#ifndef kcg_comp_array__1828
extern kcg_bool kcg_comp_array__1828(array__1828 *kcg_c1, array__1828 *kcg_c2);
#endif /* kcg_comp_array__1828 */

#ifndef kcg_comp_array__1831
extern kcg_bool kcg_comp_array__1831(array__1831 *kcg_c1, array__1831 *kcg_c2);
#endif /* kcg_comp_array__1831 */

#ifndef kcg_comp_array__1846
extern kcg_bool kcg_comp_array__1846(array__1846 *kcg_c1, array__1846 *kcg_c2);
#endif /* kcg_comp_array__1846 */

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

#ifndef kcg_comp_array__1890
extern kcg_bool kcg_comp_array__1890(array__1890 *kcg_c1, array__1890 *kcg_c2);
#endif /* kcg_comp_array__1890 */

#ifndef kcg_comp_array__1893
extern kcg_bool kcg_comp_array__1893(array__1893 *kcg_c1, array__1893 *kcg_c2);
#endif /* kcg_comp_array__1893 */

#ifndef kcg_comp_array__1896
extern kcg_bool kcg_comp_array__1896(array__1896 *kcg_c1, array__1896 *kcg_c2);
#endif /* kcg_comp_array__1896 */

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__1834

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__1834

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__1831

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__1831

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__1811

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__1811

#define kcg_comp_P021_OBU_sectionlist_int_T_TM kcg_comp_array__1828

#define kcg_copy_P021_OBU_sectionlist_int_T_TM kcg_copy_array__1828

#define kcg_comp_P021_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P021_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P021_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P021_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P021_section_int_T_TM kcg_comp_struct__1786

#define kcg_copy_P021_section_int_T_TM kcg_copy_struct__1786

#define kcg_comp_P021_trackide_sectionlist_T_TM kcg_comp_array__1792

#define kcg_copy_P021_trackide_sectionlist_T_TM kcg_copy_array__1792

#define kcg_comp_P021_trackside_int_T_TM kcg_comp_struct__1795

#define kcg_copy_P021_trackside_int_T_TM kcg_copy_struct__1795

#define kcg_comp_Array05_TM kcg_comp_array_int_5

#define kcg_copy_Array05_TM kcg_copy_array_int_5

#define kcg_comp_P021_OBU_T_TM kcg_comp_struct__1849

#define kcg_copy_P021_OBU_T_TM kcg_copy_struct__1849

#define kcg_comp_P021_OBU_sectionlist_enum_T_TM kcg_comp_array__1846

#define kcg_copy_P021_OBU_sectionlist_enum_T_TM kcg_copy_array__1846

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P021_section_enum_T_TM kcg_comp_struct__1839

#define kcg_copy_P021_section_enum_T_TM kcg_copy_struct__1839

#define kcg_comp_P21_GradientProfile_T_Packet_Types_Pkg kcg_comp_struct__1774

#define kcg_copy_P21_GradientProfile_T_Packet_Types_Pkg kcg_copy_struct__1774

#define kcg_comp_P21_GradientProfiles_T_Packet_Types_Pkg kcg_comp_array__1783

#define kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg kcg_copy_array__1783

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-08-11T09:13:49
*************************************************************$ */


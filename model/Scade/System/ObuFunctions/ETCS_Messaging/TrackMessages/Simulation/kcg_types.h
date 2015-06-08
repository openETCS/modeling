/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/ETCS_Messaging/TrackMessages/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-05T13:35:13
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

typedef kcg_int array_int_7[7];

/* TM::P005_section_array_T */
typedef array_int_7 P005_section_array_T_TM;

typedef struct {
  kcg_int D_LINK;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_LINKORIENTATION;
  kcg_int Q_LINKREACTION;
  kcg_int Q_LOCACC;
} struct__714;

/* TM::P005_section_int_T */
typedef struct__714 P005_section_int_T_TM;

typedef P005_section_array_T_TM array_int_7_33[33];

/* TM::P005_OBU_sectionlist_array_T */
typedef array_int_7_33 P005_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_224[224];

/* TM::P005_sections_array_flat_T */
typedef array_int_224 P005_sections_array_flat_T_TM;

typedef P005_section_int_T_TM array__730[33];

/* TM::P005_OBU_sectionlist_int_T */
typedef array__730 P005_OBU_sectionlist_int_T_TM;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__736;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__736 MetadataElement_T_Common_Types_Pkg;

typedef P005_section_int_T_TM array__744[32];

/* TM::P005_trackide_sectionlist_T */
typedef array__744 P005_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_LINK;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_LINKORIENTATION;
  kcg_int Q_LINKREACTION;
  kcg_int Q_LOCACC;
  kcg_int N_ITER;
  P005_trackide_sectionlist_T_TM SECTIONS;
} struct__747;

/* TM::P005_trackside_int_T */
typedef struct__747 P005_trackside_int_T_TM;

typedef MetadataElement_T_Common_Types_Pkg array__764[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__764 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__767;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__767 CompressedPackets_T_Common_Types_Pkg;

typedef CompressedPacketData_T_Common_Types_Pkg array_int_500_500[500];

typedef array_int_7_33 array_int_7_33_231[231];

typedef kcg_int array_int_271[271];

typedef kcg_int array_int_4[4];

typedef kcg_int array_int_1[1];

typedef kcg_int array_int_5[5];

typedef kcg_int array_int_229[229];

typedef P005_section_int_T_TM array__793[1];

#ifndef kcg_copy_struct__714
#define kcg_copy_struct__714(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__714)))
#endif /* kcg_copy_struct__714 */

#ifndef kcg_copy_struct__736
#define kcg_copy_struct__736(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__736)))
#endif /* kcg_copy_struct__736 */

#ifndef kcg_copy_struct__747
#define kcg_copy_struct__747(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__747)))
#endif /* kcg_copy_struct__747 */

#ifndef kcg_copy_struct__767
#define kcg_copy_struct__767(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__767)))
#endif /* kcg_copy_struct__767 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array_int_7_33
#define kcg_copy_array_int_7_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33)))
#endif /* kcg_copy_array_int_7_33 */

#ifndef kcg_copy_array_int_224
#define kcg_copy_array_int_224(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_224)))
#endif /* kcg_copy_array_int_224 */

#ifndef kcg_copy_array__730
#define kcg_copy_array__730(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__730)))
#endif /* kcg_copy_array__730 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__744
#define kcg_copy_array__744(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__744)))
#endif /* kcg_copy_array__744 */

#ifndef kcg_copy_array__764
#define kcg_copy_array__764(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__764)))
#endif /* kcg_copy_array__764 */

#ifndef kcg_copy_array_int_500_500
#define kcg_copy_array_int_500_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500_500)))
#endif /* kcg_copy_array_int_500_500 */

#ifndef kcg_copy_array_int_7_33_231
#define kcg_copy_array_int_7_33_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33_231)))
#endif /* kcg_copy_array_int_7_33_231 */

#ifndef kcg_copy_array_int_271
#define kcg_copy_array_int_271(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_271)))
#endif /* kcg_copy_array_int_271 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_int_1
#define kcg_copy_array_int_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_1)))
#endif /* kcg_copy_array_int_1 */

#ifndef kcg_copy_array_int_5
#define kcg_copy_array_int_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_5)))
#endif /* kcg_copy_array_int_5 */

#ifndef kcg_copy_array_int_229
#define kcg_copy_array_int_229(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_229)))
#endif /* kcg_copy_array_int_229 */

#ifndef kcg_copy_array__793
#define kcg_copy_array__793(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__793)))
#endif /* kcg_copy_array__793 */

#ifndef kcg_comp_struct__714
extern kcg_bool kcg_comp_struct__714(struct__714 *kcg_c1, struct__714 *kcg_c2);
#endif /* kcg_comp_struct__714 */

#ifndef kcg_comp_struct__736
extern kcg_bool kcg_comp_struct__736(struct__736 *kcg_c1, struct__736 *kcg_c2);
#endif /* kcg_comp_struct__736 */

#ifndef kcg_comp_struct__747
extern kcg_bool kcg_comp_struct__747(struct__747 *kcg_c1, struct__747 *kcg_c2);
#endif /* kcg_comp_struct__747 */

#ifndef kcg_comp_struct__767
extern kcg_bool kcg_comp_struct__767(struct__767 *kcg_c1, struct__767 *kcg_c2);
#endif /* kcg_comp_struct__767 */

#ifndef kcg_comp_array_int_7
extern kcg_bool kcg_comp_array_int_7(array_int_7 *kcg_c1, array_int_7 *kcg_c2);
#endif /* kcg_comp_array_int_7 */

#ifndef kcg_comp_array_int_7_33
extern kcg_bool kcg_comp_array_int_7_33(
  array_int_7_33 *kcg_c1,
  array_int_7_33 *kcg_c2);
#endif /* kcg_comp_array_int_7_33 */

#ifndef kcg_comp_array_int_224
extern kcg_bool kcg_comp_array_int_224(
  array_int_224 *kcg_c1,
  array_int_224 *kcg_c2);
#endif /* kcg_comp_array_int_224 */

#ifndef kcg_comp_array__730
extern kcg_bool kcg_comp_array__730(array__730 *kcg_c1, array__730 *kcg_c2);
#endif /* kcg_comp_array__730 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__744
extern kcg_bool kcg_comp_array__744(array__744 *kcg_c1, array__744 *kcg_c2);
#endif /* kcg_comp_array__744 */

#ifndef kcg_comp_array__764
extern kcg_bool kcg_comp_array__764(array__764 *kcg_c1, array__764 *kcg_c2);
#endif /* kcg_comp_array__764 */

#ifndef kcg_comp_array_int_500_500
extern kcg_bool kcg_comp_array_int_500_500(
  array_int_500_500 *kcg_c1,
  array_int_500_500 *kcg_c2);
#endif /* kcg_comp_array_int_500_500 */

#ifndef kcg_comp_array_int_7_33_231
extern kcg_bool kcg_comp_array_int_7_33_231(
  array_int_7_33_231 *kcg_c1,
  array_int_7_33_231 *kcg_c2);
#endif /* kcg_comp_array_int_7_33_231 */

#ifndef kcg_comp_array_int_271
extern kcg_bool kcg_comp_array_int_271(
  array_int_271 *kcg_c1,
  array_int_271 *kcg_c2);
#endif /* kcg_comp_array_int_271 */

#ifndef kcg_comp_array_int_4
extern kcg_bool kcg_comp_array_int_4(array_int_4 *kcg_c1, array_int_4 *kcg_c2);
#endif /* kcg_comp_array_int_4 */

#ifndef kcg_comp_array_int_1
extern kcg_bool kcg_comp_array_int_1(array_int_1 *kcg_c1, array_int_1 *kcg_c2);
#endif /* kcg_comp_array_int_1 */

#ifndef kcg_comp_array_int_5
extern kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2);
#endif /* kcg_comp_array_int_5 */

#ifndef kcg_comp_array_int_229
extern kcg_bool kcg_comp_array_int_229(
  array_int_229 *kcg_c1,
  array_int_229 *kcg_c2);
#endif /* kcg_comp_array_int_229 */

#ifndef kcg_comp_array__793
extern kcg_bool kcg_comp_array__793(array__793 *kcg_c1, array__793 *kcg_c2);
#endif /* kcg_comp_array__793 */

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__767

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__767

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__736

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__736

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__764

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__764

#define kcg_comp_P005_OBU_sectionlist_int_T_TM kcg_comp_array__730

#define kcg_copy_P005_OBU_sectionlist_int_T_TM kcg_copy_array__730

#define kcg_comp_P005_section_array_T_TM kcg_comp_array_int_7

#define kcg_copy_P005_section_array_T_TM kcg_copy_array_int_7

#define kcg_comp_P005_OBU_sectionlist_array_T_TM kcg_comp_array_int_7_33

#define kcg_copy_P005_OBU_sectionlist_array_T_TM kcg_copy_array_int_7_33

#define kcg_comp_P005_sections_array_flat_T_TM kcg_comp_array_int_224

#define kcg_copy_P005_sections_array_flat_T_TM kcg_copy_array_int_224

#define kcg_comp_P005_section_int_T_TM kcg_comp_struct__714

#define kcg_copy_P005_section_int_T_TM kcg_copy_struct__714

#define kcg_comp_P005_trackide_sectionlist_T_TM kcg_comp_array__744

#define kcg_copy_P005_trackide_sectionlist_T_TM kcg_copy_array__744

#define kcg_comp_P005_trackside_int_T_TM kcg_comp_struct__747

#define kcg_copy_P005_trackside_int_T_TM kcg_copy_struct__747

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-06-05T13:35:13
*************************************************************$ */


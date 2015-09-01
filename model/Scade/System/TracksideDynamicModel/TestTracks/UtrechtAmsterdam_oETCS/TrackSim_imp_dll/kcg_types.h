/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */
#ifndef _UAB_KCG_TYPES_H_
#define _UAB_KCG_TYPES_H_

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

/* Q_SECTIONTIMER */
typedef enum {
  UAB_Q_SECTIONTIMER_No_Section_Timer_information = 0,
  UAB_Q_SECTIONTIMER_Section_Timer_information_to_follow = 1
} UAB_Q_SECTIONTIMER;
/* Q_OVERLAP */
typedef enum {
  UAB_Q_OVERLAP_No_overlap_information = 0,
  UAB_Q_OVERLAP_Overlap_information_to_follow = 1
} UAB_Q_OVERLAP;
/* Q_DANGERPOINT */
typedef enum {
  UAB_Q_DANGERPOINT_No_danger_point_information = 0,
  UAB_Q_DANGERPOINT_Danger_point_information_to_follow = 1
} UAB_Q_DANGERPOINT;
/* Q_ENDTIMER */
typedef enum {
  UAB_Q_ENDTIMER_No_End_section_timer_information = 0,
  UAB_Q_ENDTIMER_End_section_timer_information_to_follow = 1
} UAB_Q_ENDTIMER;
/* Q_SCALE */
typedef enum {
  UAB_Q_SCALE_10_cm_scale = 0,
  UAB_Q_SCALE_1_m_scale = 1,
  UAB_Q_SCALE_10_m_scale = 2
} UAB_Q_SCALE;
/* Q_DIR */
typedef enum {
  UAB_Q_DIR_Reverse = 0,
  UAB_Q_DIR_Nominal = 1,
  UAB_Q_DIR_Both_directions = 2
} UAB_Q_DIR;
/* NID_PACKET */
typedef kcg_int UAB_NID_PACKET;

/* D_DP */
typedef kcg_int UAB_D_DP;

/* D_OL */
typedef kcg_int UAB_D_OL;

/* V_LOA */
typedef kcg_int UAB_V_LOA;

/* T_ENDTIMER */
typedef kcg_int UAB_T_ENDTIMER;

/* L_SECTION */
typedef kcg_int UAB_L_SECTION;

/* T_SECTIONTIMER */
typedef kcg_int UAB_T_SECTIONTIMER;

/* D_SECTIONTIMERSTOPLOC */
typedef kcg_int UAB_D_SECTIONTIMERSTOPLOC;

/* T_LOA */
typedef kcg_int UAB_T_LOA;

/* N_ITER */
typedef kcg_int UAB_N_ITER;

/* L_ENDSECTION */
typedef kcg_int UAB_L_ENDSECTION;

/* D_ENDTIMERSTARTLOC */
typedef kcg_int UAB_D_ENDTIMERSTARTLOC;

/* V_RELEASEDP */
typedef kcg_int UAB_V_RELEASEDP;

/* D_STARTOL */
typedef kcg_int UAB_D_STARTOL;

/* T_OL */
typedef kcg_int UAB_T_OL;

/* V_RELEASEOL */
typedef kcg_int UAB_V_RELEASEOL;

/* TM::nid_packet_meta */
typedef kcg_int UAB_nid_packet_meta_TM;

typedef struct {
  kcg_int L_SECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
} UAB_struct__2619;

/* TM::P015_section_int_T */
typedef UAB_struct__2619 UAB_P015_section_int_T_TM;

typedef UAB_P015_section_int_T_TM UAB_array__2626[32];

/* TM::P015_trackide_sectionlist_T */
typedef UAB_array__2626 UAB_P015_trackide_sectionlist_T_TM;

/* TM::P015_OBU_sectionlist_int_T */
typedef UAB_array__2626 UAB_P015_OBU_sectionlist_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int V_LOA;
  kcg_int T_LOA;
  kcg_int N_ITER;
  UAB_P015_trackide_sectionlist_T_TM SECTIONS;
  kcg_int L_ENDSECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
  kcg_int Q_ENDTIMER;
  kcg_int T_ENDTIMER;
  kcg_int D_ENDTIMERSTARTLOC;
  kcg_int Q_DANGERPOINT;
  kcg_int D_DP;
  kcg_int V_RELEASEDP;
  kcg_int Q_OVERLAP;
  kcg_int D_STARTOL;
  kcg_int T_OL;
  kcg_int D_OL;
  kcg_int V_RELEASEOL;
} UAB_struct__2629;

/* TM::P015_trackside_int_T */
typedef UAB_struct__2629 UAB_P015_trackside_int_T_TM;

typedef kcg_int UAB_array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef UAB_array_int_500 UAB_CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  UAB_NID_PACKET nid_packet;
  UAB_Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} UAB_struct__2659;

/* Common_Types_Pkg::MetadataElement_T */
typedef UAB_struct__2659 UAB_MetadataElement_T_Common_Types_Pkg;

typedef kcg_int UAB_array_int_4[4];

/* TM::P015_section_array_T */
typedef UAB_array_int_4 UAB_P015_section_array_T_TM;

typedef UAB_P015_section_array_T_TM UAB_array_int_4_32[32];

/* TM::P015_OBU_sectionlist_array_T */
typedef UAB_array_int_4_32 UAB_P015_OBU_sectionlist_array_T_TM;

typedef kcg_int UAB_array_int_128[128];

/* TM::P015_sections_array_flat_T */
typedef UAB_array_int_128 UAB_P015_sections_array_flat_T_TM;

typedef UAB_MetadataElement_T_Common_Types_Pkg UAB_array__2676[30];

/* Common_Types_Pkg::Metadata_T */
typedef UAB_array__2676 UAB_Metadata_T_Common_Types_Pkg;

typedef struct {
  UAB_Metadata_T_Common_Types_Pkg PacketHeaders;
  UAB_CompressedPacketData_T_Common_Types_Pkg PacketData;
} UAB_struct__2679;

/* Common_Types_Pkg::CompressedPackets_T */
typedef UAB_struct__2679 UAB_CompressedPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  UAB_L_SECTION l_section;
  UAB_Q_SECTIONTIMER q_sectiontimer;
  UAB_T_SECTIONTIMER t_sectiontimer;
  UAB_D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc;
} UAB_struct__2684;

/* TM::P015_section_enum_T */
typedef UAB_struct__2684 UAB_P015_section_enum_T_TM;

typedef UAB_P015_section_enum_T_TM UAB_array__2692[32];

/* TM::P015_OBU_sectionlist_enum_T */
typedef UAB_array__2692 UAB_P015_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  UAB_Q_DIR q_dir;
  UAB_Q_SCALE q_scale;
  UAB_V_LOA v_loa;
  UAB_T_LOA t_loa;
  UAB_N_ITER n_iter;
  UAB_P015_OBU_sectionlist_enum_T_TM sections;
  UAB_L_ENDSECTION l_endsection;
  UAB_Q_SECTIONTIMER q_sectiontimer;
  UAB_T_SECTIONTIMER t_sectiontimer;
  UAB_D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc;
  UAB_Q_ENDTIMER q_endtimer;
  UAB_T_ENDTIMER t_endtimer;
  UAB_D_ENDTIMERSTARTLOC d_endtimerstartloc;
  UAB_Q_DANGERPOINT q_dangerpoint;
  UAB_D_DP d_dp;
  UAB_V_RELEASEDP v_releasedp;
  UAB_Q_OVERLAP q_overlap;
  UAB_D_STARTOL d_startol;
  UAB_T_OL t_ol;
  UAB_D_OL d_ol;
  UAB_V_RELEASEOL v_releaseol;
} UAB_struct__2695;

/* TM::P015_OBU_T */
typedef UAB_struct__2695 UAB_P015_OBU_T_TM;

typedef kcg_int UAB_array_int_15[15];

/* TM::Array15 */
typedef UAB_array_int_15 UAB_Array15_TM;

typedef kcg_int UAB_array_int_6[6];

/* TM::Array06 */
typedef UAB_array_int_6 UAB_Array06_TM;

typedef kcg_int UAB_array_int_350[350];

#ifndef UAB_kcg_copy_struct__2619
#define UAB_kcg_copy_struct__2619(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (UAB_struct__2619)))
#endif /* UAB_kcg_copy_struct__2619 */

#ifndef UAB_kcg_copy_struct__2629
#define UAB_kcg_copy_struct__2629(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (UAB_struct__2629)))
#endif /* UAB_kcg_copy_struct__2629 */

#ifndef UAB_kcg_copy_struct__2659
#define UAB_kcg_copy_struct__2659(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (UAB_struct__2659)))
#endif /* UAB_kcg_copy_struct__2659 */

#ifndef UAB_kcg_copy_struct__2679
#define UAB_kcg_copy_struct__2679(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (UAB_struct__2679)))
#endif /* UAB_kcg_copy_struct__2679 */

#ifndef UAB_kcg_copy_struct__2684
#define UAB_kcg_copy_struct__2684(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (UAB_struct__2684)))
#endif /* UAB_kcg_copy_struct__2684 */

#ifndef UAB_kcg_copy_struct__2695
#define UAB_kcg_copy_struct__2695(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (UAB_struct__2695)))
#endif /* UAB_kcg_copy_struct__2695 */

#ifndef UAB_kcg_copy_array__2626
#define UAB_kcg_copy_array__2626(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (UAB_array__2626)))
#endif /* UAB_kcg_copy_array__2626 */

#ifndef UAB_kcg_copy_array_int_500
#define UAB_kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (UAB_array_int_500)))
#endif /* UAB_kcg_copy_array_int_500 */

#ifndef UAB_kcg_copy_array_int_4
#define UAB_kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (UAB_array_int_4)))
#endif /* UAB_kcg_copy_array_int_4 */

#ifndef UAB_kcg_copy_array_int_4_32
#define UAB_kcg_copy_array_int_4_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (UAB_array_int_4_32)))
#endif /* UAB_kcg_copy_array_int_4_32 */

#ifndef UAB_kcg_copy_array_int_128
#define UAB_kcg_copy_array_int_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (UAB_array_int_128)))
#endif /* UAB_kcg_copy_array_int_128 */

#ifndef UAB_kcg_copy_array__2676
#define UAB_kcg_copy_array__2676(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (UAB_array__2676)))
#endif /* UAB_kcg_copy_array__2676 */

#ifndef UAB_kcg_copy_array__2692
#define UAB_kcg_copy_array__2692(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (UAB_array__2692)))
#endif /* UAB_kcg_copy_array__2692 */

#ifndef UAB_kcg_copy_array_int_15
#define UAB_kcg_copy_array_int_15(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (UAB_array_int_15)))
#endif /* UAB_kcg_copy_array_int_15 */

#ifndef UAB_kcg_copy_array_int_6
#define UAB_kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (UAB_array_int_6)))
#endif /* UAB_kcg_copy_array_int_6 */

#ifndef UAB_kcg_copy_array_int_350
#define UAB_kcg_copy_array_int_350(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (UAB_array_int_350)))
#endif /* UAB_kcg_copy_array_int_350 */

#ifndef UAB_kcg_comp_struct__2619
extern kcg_bool UAB_kcg_comp_struct__2619(
  UAB_struct__2619 *kcg_c1,
  UAB_struct__2619 *kcg_c2);
#endif /* UAB_kcg_comp_struct__2619 */

#ifndef UAB_kcg_comp_struct__2629
extern kcg_bool UAB_kcg_comp_struct__2629(
  UAB_struct__2629 *kcg_c1,
  UAB_struct__2629 *kcg_c2);
#endif /* UAB_kcg_comp_struct__2629 */

#ifndef UAB_kcg_comp_struct__2659
extern kcg_bool UAB_kcg_comp_struct__2659(
  UAB_struct__2659 *kcg_c1,
  UAB_struct__2659 *kcg_c2);
#endif /* UAB_kcg_comp_struct__2659 */

#ifndef UAB_kcg_comp_struct__2679
extern kcg_bool UAB_kcg_comp_struct__2679(
  UAB_struct__2679 *kcg_c1,
  UAB_struct__2679 *kcg_c2);
#endif /* UAB_kcg_comp_struct__2679 */

#ifndef UAB_kcg_comp_struct__2684
extern kcg_bool UAB_kcg_comp_struct__2684(
  UAB_struct__2684 *kcg_c1,
  UAB_struct__2684 *kcg_c2);
#endif /* UAB_kcg_comp_struct__2684 */

#ifndef UAB_kcg_comp_struct__2695
extern kcg_bool UAB_kcg_comp_struct__2695(
  UAB_struct__2695 *kcg_c1,
  UAB_struct__2695 *kcg_c2);
#endif /* UAB_kcg_comp_struct__2695 */

#ifndef UAB_kcg_comp_array__2626
extern kcg_bool UAB_kcg_comp_array__2626(
  UAB_array__2626 *kcg_c1,
  UAB_array__2626 *kcg_c2);
#endif /* UAB_kcg_comp_array__2626 */

#ifndef UAB_kcg_comp_array_int_500
extern kcg_bool UAB_kcg_comp_array_int_500(
  UAB_array_int_500 *kcg_c1,
  UAB_array_int_500 *kcg_c2);
#endif /* UAB_kcg_comp_array_int_500 */

#ifndef UAB_kcg_comp_array_int_4
extern kcg_bool UAB_kcg_comp_array_int_4(
  UAB_array_int_4 *kcg_c1,
  UAB_array_int_4 *kcg_c2);
#endif /* UAB_kcg_comp_array_int_4 */

#ifndef UAB_kcg_comp_array_int_4_32
extern kcg_bool UAB_kcg_comp_array_int_4_32(
  UAB_array_int_4_32 *kcg_c1,
  UAB_array_int_4_32 *kcg_c2);
#endif /* UAB_kcg_comp_array_int_4_32 */

#ifndef UAB_kcg_comp_array_int_128
extern kcg_bool UAB_kcg_comp_array_int_128(
  UAB_array_int_128 *kcg_c1,
  UAB_array_int_128 *kcg_c2);
#endif /* UAB_kcg_comp_array_int_128 */

#ifndef UAB_kcg_comp_array__2676
extern kcg_bool UAB_kcg_comp_array__2676(
  UAB_array__2676 *kcg_c1,
  UAB_array__2676 *kcg_c2);
#endif /* UAB_kcg_comp_array__2676 */

#ifndef UAB_kcg_comp_array__2692
extern kcg_bool UAB_kcg_comp_array__2692(
  UAB_array__2692 *kcg_c1,
  UAB_array__2692 *kcg_c2);
#endif /* UAB_kcg_comp_array__2692 */

#ifndef UAB_kcg_comp_array_int_15
extern kcg_bool UAB_kcg_comp_array_int_15(
  UAB_array_int_15 *kcg_c1,
  UAB_array_int_15 *kcg_c2);
#endif /* UAB_kcg_comp_array_int_15 */

#ifndef UAB_kcg_comp_array_int_6
extern kcg_bool UAB_kcg_comp_array_int_6(
  UAB_array_int_6 *kcg_c1,
  UAB_array_int_6 *kcg_c2);
#endif /* UAB_kcg_comp_array_int_6 */

#ifndef UAB_kcg_comp_array_int_350
extern kcg_bool UAB_kcg_comp_array_int_350(
  UAB_array_int_350 *kcg_c1,
  UAB_array_int_350 *kcg_c2);
#endif /* UAB_kcg_comp_array_int_350 */

#define UAB_kcg_comp_CompressedPackets_T_Common_Types_Pkg UAB_kcg_comp_struct__2679

#define UAB_kcg_copy_CompressedPackets_T_Common_Types_Pkg UAB_kcg_copy_struct__2679

#define UAB_kcg_comp_CompressedPacketData_T_Common_Types_Pkg UAB_kcg_comp_array_int_500

#define UAB_kcg_copy_CompressedPacketData_T_Common_Types_Pkg UAB_kcg_copy_array_int_500

#define UAB_kcg_comp_Metadata_T_Common_Types_Pkg UAB_kcg_comp_array__2676

#define UAB_kcg_copy_Metadata_T_Common_Types_Pkg UAB_kcg_copy_array__2676

#define UAB_kcg_comp_MetadataElement_T_Common_Types_Pkg UAB_kcg_comp_struct__2659

#define UAB_kcg_copy_MetadataElement_T_Common_Types_Pkg UAB_kcg_copy_struct__2659

#define UAB_kcg_comp_P015_OBU_sectionlist_int_T_TM UAB_kcg_comp_array__2626

#define UAB_kcg_copy_P015_OBU_sectionlist_int_T_TM UAB_kcg_copy_array__2626

#define UAB_kcg_comp_P015_section_array_T_TM UAB_kcg_comp_array_int_4

#define UAB_kcg_copy_P015_section_array_T_TM UAB_kcg_copy_array_int_4

#define UAB_kcg_comp_P015_OBU_sectionlist_array_T_TM UAB_kcg_comp_array_int_4_32

#define UAB_kcg_copy_P015_OBU_sectionlist_array_T_TM UAB_kcg_copy_array_int_4_32

#define UAB_kcg_comp_P015_section_int_T_TM UAB_kcg_comp_struct__2619

#define UAB_kcg_copy_P015_section_int_T_TM UAB_kcg_copy_struct__2619

#define UAB_kcg_comp_P015_trackide_sectionlist_T_TM UAB_kcg_comp_array__2626

#define UAB_kcg_copy_P015_trackide_sectionlist_T_TM UAB_kcg_copy_array__2626

#define UAB_kcg_comp_P015_trackside_int_T_TM UAB_kcg_comp_struct__2629

#define UAB_kcg_copy_P015_trackside_int_T_TM UAB_kcg_copy_struct__2629

#define UAB_kcg_comp_P015_OBU_T_TM UAB_kcg_comp_struct__2695

#define UAB_kcg_copy_P015_OBU_T_TM UAB_kcg_copy_struct__2695

#define UAB_kcg_comp_Array15_TM UAB_kcg_comp_array_int_15

#define UAB_kcg_copy_Array15_TM UAB_kcg_copy_array_int_15

#define UAB_kcg_comp_P015_OBU_sectionlist_enum_T_TM UAB_kcg_comp_array__2692

#define UAB_kcg_copy_P015_OBU_sectionlist_enum_T_TM UAB_kcg_copy_array__2692

#define UAB_kcg_comp_P015_sections_array_flat_T_TM UAB_kcg_comp_array_int_128

#define UAB_kcg_copy_P015_sections_array_flat_T_TM UAB_kcg_copy_array_int_128

#define UAB_kcg_comp_P015_section_enum_T_TM UAB_kcg_comp_struct__2684

#define UAB_kcg_copy_P015_section_enum_T_TM UAB_kcg_copy_struct__2684

#define UAB_kcg_comp_Array06_TM UAB_kcg_comp_array_int_6

#define UAB_kcg_copy_Array06_TM UAB_kcg_copy_array_int_6

#endif /* _UAB_KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */


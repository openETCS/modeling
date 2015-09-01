/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/TrackSim_imp_dll\kcg_s2c_config.txt
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */
#ifndef _UAB_KCG_CONSTS_H_
#define _UAB_KCG_CONSTS_H_

#include "kcg_types.h"

/* Internal_Tests::DEFAULT_CompressedPackets */
extern const UAB_CompressedPackets_T_Common_Types_Pkg UAB_DEFAULT_CompressedPackets_Internal_Tests;

/* TM::DEFAULT_CompressedPackets */
extern const UAB_CompressedPacketData_T_Common_Types_Pkg UAB_DEFAULT_CompressedPackets_TM;

/* TM::DEFAULT_PHeader */
extern const UAB_MetadataElement_T_Common_Types_Pkg UAB_DEFAULT_PHeader_TM;

/* TM::DEFAULT_P015_OBU_section */
extern const UAB_P015_section_enum_T_TM UAB_DEFAULT_P015_OBU_section_TM;

/* TM_lib_internal::DIM_P015_n_sections */
#define UAB_DIM_P015_n_sections_TM_lib_internal 4

/* TM_conversions::INT_Q_SECTIONTIMER_sectiontimer */
#define UAB_INT_Q_SECTIONTIMER_sectiontimer_TM_conversions 1

/* TM_conversions::INT_Q_SECTIONTIMER_no_sectiontimer */
#define UAB_INT_Q_SECTIONTIMER_no_sectiontimer_TM_conversions 0

/* TM_conversions::ENUM_Q_SECTIONTIMER_sectiontimer */
#define UAB_ENUM_Q_SECTIONTIMER_sectiontimer_TM_conversions UAB_Q_SECTIONTIMER_Section_Timer_information_to_follow

/* TM_conversions::ENUM_Q_SECTIONTIMER_no_sectiontimer */
#define UAB_ENUM_Q_SECTIONTIMER_no_sectiontimer_TM_conversions UAB_Q_SECTIONTIMER_No_Section_Timer_information

/* TM_conversions::INT_Q_OVERLAP_overlap_info */
#define UAB_INT_Q_OVERLAP_overlap_info_TM_conversions 1

/* TM_conversions::INT_Q_OVERLAP_no_overlap_info */
#define UAB_INT_Q_OVERLAP_no_overlap_info_TM_conversions 0

/* TM_conversions::ENUM_Q_OVERLAP_overlap_info */
#define UAB_ENUM_Q_OVERLAP_overlap_info_TM_conversions UAB_Q_OVERLAP_Overlap_information_to_follow

/* TM_conversions::ENUM_Q_OVERLAP_no_overlap_info */
#define UAB_ENUM_Q_OVERLAP_no_overlap_info_TM_conversions UAB_Q_OVERLAP_No_overlap_information

/* TM_conversions::INT_Q_DANGERPOINT_no_dangerpoint_info */
#define UAB_INT_Q_DANGERPOINT_no_dangerpoint_info_TM_conversions 0

/* TM_conversions::INT_Q_DANGERPOINT_dangerpoint_info */
#define UAB_INT_Q_DANGERPOINT_dangerpoint_info_TM_conversions 1

/* TM_conversions::ENUM_Q_DANGERPOINT_dangerpoint_info */
#define UAB_ENUM_Q_DANGERPOINT_dangerpoint_info_TM_conversions UAB_Q_DANGERPOINT_No_danger_point_information

/* TM_conversions::ENUM_Q_DANGERPOINT_no_dangerpoint_info */
#define UAB_ENUM_Q_DANGERPOINT_no_dangerpoint_info_TM_conversions UAB_Q_DANGERPOINT_Danger_point_information_to_follow

/* TM_conversions::INT_Q_ENDTIMER_no_endsection_timer_info */
#define UAB_INT_Q_ENDTIMER_no_endsection_timer_info_TM_conversions 0

/* TM_conversions::INT_Q_ENDTIMER_endsection_timer_info_follows */
#define UAB_INT_Q_ENDTIMER_endsection_timer_info_follows_TM_conversions 1

/* TM_conversions::ENUM_Q_ENDTIMER_endsection_timer_info_follows */
#define UAB_ENUM_Q_ENDTIMER_endsection_timer_info_follows_TM_conversions UAB_Q_ENDTIMER_End_section_timer_information_to_follow

/* TM_conversions::ENUM_Q_ENDTIMER_no_endsection_timer_info */
#define UAB_ENUM_Q_ENDTIMER_no_endsection_timer_info_TM_conversions UAB_Q_ENDTIMER_No_End_section_timer_information

/* TM_conversions::DIM_L_max */
#define UAB_DIM_L_max_TM_conversions 32767

/* TM_conversions::DIM_L_min */
#define UAB_DIM_L_min_TM_conversions 0

/* TM_conversions::INT_Q_SCALE_10cm */
#define UAB_INT_Q_SCALE_10cm_TM_conversions 0

/* TM_conversions::INT_Q_SCALE_1m */
#define UAB_INT_Q_SCALE_1m_TM_conversions 1

/* TM_conversions::INT_Q_SCALE_10m */
#define UAB_INT_Q_SCALE_10m_TM_conversions 2

/* TM_conversions::ENUM_Q_SCALE_10cm */
#define UAB_ENUM_Q_SCALE_10cm_TM_conversions UAB_Q_SCALE_10_cm_scale

/* TM_conversions::ENUM_Q_SCALE_10m */
#define UAB_ENUM_Q_SCALE_10m_TM_conversions UAB_Q_SCALE_10_m_scale

/* TM_conversions::ENUM_Q_SCALE_1m */
#define UAB_ENUM_Q_SCALE_1m_TM_conversions UAB_Q_SCALE_1_m_scale

/* TM_conversions::DIM_D_min */
#define UAB_DIM_D_min_TM_conversions 0

/* TM_conversions::DIM_D_max */
#define UAB_DIM_D_max_TM_conversions 32767

/* TM::DIM_MaxRMessages */
#define UAB_DIM_MaxRMessages_TM 30

/* TM::DEFAULT_Headers */
extern const UAB_Metadata_T_Common_Types_Pkg UAB_DEFAULT_Headers_TM;

/* Common_Types_Pkg::cMetadataArraySize */
#define UAB_cMetadataArraySize_Common_Types_Pkg UAB_cDIM_MaxRMessages_Common_Types_Pkg

/* Common_Types_Pkg::cDIM_MaxRMessages */
#define UAB_cDIM_MaxRMessages_Common_Types_Pkg 30

/* TM::DIM_MaxElementsPacket015 */
#define UAB_DIM_MaxElementsPacket015_TM (UAB_DIM_N_ITER_TM * 4 + 15 + 1 + 6)

/* TM::INT_M_VERSION_2_0 */
#define UAB_INT_M_VERSION_2_0_TM 32

/* TM::DEFAULT_P015_sections_array_flat */
extern const UAB_P015_sections_array_flat_T_TM UAB_DEFAULT_P015_sections_array_flat_TM;

/* TM::ERROR_nid_packet */
#define UAB_ERROR_nid_packet_TM (- 1)

/* TM_lib_internal::DIM_offset_metadata_nid_packet */
#define UAB_DIM_offset_metadata_nid_packet_TM_lib_internal 1000000

/* TM_lib_internal::DIM_offset_metadata_q_dir */
#define UAB_DIM_offset_metadata_q_dir_TM_lib_internal 100000

/* TM_lib_internal::DIM_offset_metadata_m_version */
#define UAB_DIM_offset_metadata_m_version_TM_lib_internal 1000

/* TM_lib_internal::DIM_offset_metadata_id */
#define UAB_DIM_offset_metadata_id_TM_lib_internal 1

/* Common_Types_Pkg::cDIM_MaxDataElementsInRMessage */
#define UAB_cDIM_MaxDataElementsInRMessage_Common_Types_Pkg 500

/* TM_conversions::INT_Q_DIR_nomiinal */
#define UAB_INT_Q_DIR_nomiinal_TM_conversions 1

/* TM_conversions::INT_Q_DIR_reverse */
#define UAB_INT_Q_DIR_reverse_TM_conversions 0

/* TM_conversions::INT_Q_DIR_both */
#define UAB_INT_Q_DIR_both_TM_conversions 2

/* TM_conversions::ENUM_Q_DIR_both */
#define UAB_ENUM_Q_DIR_both_TM_conversions UAB_Q_DIR_Both_directions

/* TM_conversions::ENUM_Q_DIR_reverse */
#define UAB_ENUM_Q_DIR_reverse_TM_conversions UAB_Q_DIR_Reverse

/* TM_conversions::ENUM_Q_DIR_nominal */
#define UAB_ENUM_Q_DIR_nominal_TM_conversions UAB_Q_DIR_Nominal

/* Packets426::LRBG354_P015_1 */
extern const UAB_P015_trackside_int_T_TM UAB_LRBG354_P015_1_Packets426;

/* TM::DIM_N_ITER */
#define UAB_DIM_N_ITER_TM 32

#endif /* _UAB_KCG_CONSTS_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_consts.h
** Generation date: 2015-08-27T15:14:25
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */
#ifndef _KCG_CONSTS_H_
#define _KCG_CONSTS_H_

#include "kcg_types.h"

/* TrackAtlasTypes::DEFAULT_GradientSection */
extern const Gradient_section_t_TrackAtlasTypes DEFAULT_GradientSection_TrackAtlasTypes;

/* TM::DIM_MaxElementsPacket021 */
#define DIM_MaxElementsPacket021_TM ((DIM_N_ITER_TM + 1) * 3 + 4 + 1)

/* TM::DEFAULT_P021_OBU_section */
extern const P021_section_enum_T_TM DEFAULT_P021_OBU_section_TM;

/* TM_lib_internal::DIM_P021_n_sections */
#define DIM_P021_n_sections_TM_lib_internal 3

/* TM_conversions::DIM_G_max */
#define DIM_G_max_TM_conversions 255

/* TM_conversions::DIM_G_min */
#define DIM_G_min_TM_conversions 0

/* TM_conversions::INT_Q_GDIR_downhill */
#define INT_Q_GDIR_downhill_TM_conversions 0

/* TM_conversions::INT_Q_GDIR_uphill */
#define INT_Q_GDIR_uphill_TM_conversions 1

/* TM_conversions::ENUM_Q_GDIR_downhill */
#define ENUM_Q_GDIR_downhill_TM_conversions Q_GDIR_downhill

/* TM_conversions::ENUM_Q_GDIR_uphill */
#define ENUM_Q_GDIR_uphill_TM_conversions Q_GDIR_uphill

/* TrackAtlasTypes::DEFAULT_GradientProfile */
extern const GradientProfile_t_TrackAtlasTypes DEFAULT_GradientProfile_TrackAtlasTypes;

/* TA_MRSP::DEFAULT_MRSP_Profile */
extern const MRSP_Profile_t_TrackAtlasTypes DEFAULT_MRSP_Profile_TA_MRSP;

/* TrackAtlasTypes::MRSPMaxSections */
#define MRSPMaxSections_TrackAtlasTypes 200

/* TA_MRSP::DEFAULT_MRSP_section */
extern const MRSP_section_t_TrackAtlasTypes DEFAULT_MRSP_section_TA_MRSP;

/* TA_MRSP::DEFAULT_SSP_targets */
extern const SSP_t_list_t_TA_MRSP DEFAULT_SSP_targets_TA_MRSP;

/* TA_MRSP::DEFAULT_indexed_target */
extern const SSP_t_indexed_matrix_element_TA_MRSP DEFAULT_indexed_target_TA_MRSP;

/* TA_MRSP::DEFAULT_relevant_target */
extern const SSP_relevant_target_t_TA_MRSP DEFAULT_relevant_target_TA_MRSP;

/* TA_MRSP::DEFAULT_SSP_Init_ValidSSPsection */
extern const SSP_Mark_ValidSSPsection_TA_MRSP DEFAULT_SSP_Init_ValidSSPsection_TA_MRSP;

/* TA_MRSP::DIM_SSP */
#define DIM_SSP_TA_MRSP (DIM_n_categories_TA_MRSP * DIM_maxSSP_individual_sections_TA_MRSP)

/* TA_MRSP::DIM_n_categories */
#define DIM_n_categories_TA_MRSP 11

/* TA_MRSP::int_ZERO */
#define int_ZERO_TA_MRSP 0

/* TA_Lib_internal::ENUM_MsgSource_Balise */
#define ENUM_MsgSource_Balise_TA_Lib_internal msrc_Eurobalise_Common_Types_Pkg

/* TA_Lib_internal::ENUM_MsgSource_Euroradio */
#define ENUM_MsgSource_Euroradio_TA_Lib_internal msrc_Euroradio_Common_Types_Pkg

/* TM_baseline2::NID_META_P027V1_body */
#define NID_META_P027V1_body_TM_baseline2 27016000

/* TM::DIM_MaxElementsPacket027v1_section */
#define DIM_MaxElementsPacket027v1_section_TM (DIM_N_ITER_TM * 2 + 4)

/* TM_lib_internal::DIM_P027V1_n_sections_qdiff */
#define DIM_P027V1_n_sections_qdiff_TM_lib_internal 7

/* TM_baseline2::DEFAULT_P027v1_OBU_section_qdiff */
extern const P027V1_section_enum_qdiff_T_TM_baseline2 DEFAULT_P027v1_OBU_section_qdiff_TM_baseline2;

/* TM_conversions::INT_Q_FRONT_train_length_delay */
#define INT_Q_FRONT_train_length_delay_TM_conversions 0

/* TM_conversions::INT_Q_FRONT_no_train_length_delay */
#define INT_Q_FRONT_no_train_length_delay_TM_conversions 1

/* TM_conversions::ENUM_Q_FRONT_no_train_length_delay */
#define ENUM_Q_FRONT_no_train_length_delay_TM_conversions Q_FRONT_No_train_length_delay_on_validity_end_point_of_profile_element

/* TA_MRSP::DEFAULT_SSP_cat */
extern const SSP_cat_t_TA_MRSP DEFAULT_SSP_cat_TA_MRSP;

/* TM_baseline2::DEFAULT_P027v1_OBU_section */
extern const P027V1_section_enum_T_TM_baseline2 DEFAULT_P027v1_OBU_section_TM_baseline2;

/* TM_baseline2::DEFAULT_P027V1_section_enum */
extern const P027V1_section_enum_T_TM_baseline2 DEFAULT_P027V1_section_enum_TM_baseline2;

/* TM_conversions::ENUM_Q_FRONT_train_length_delay */
#define ENUM_Q_FRONT_train_length_delay_TM_conversions Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element

/* TA_MRSP::DEFAULT_SSP_section */
extern const SSP_section_t_TA_MRSP DEFAULT_SSP_section_TA_MRSP;

/* TA_MRSP::TOP_SSP_cat */
extern const SSP_cat_t_TA_MRSP TOP_SSP_cat_TA_MRSP;

/* TA_MRSP::DIM_maxSSP_individual_sections */
#define DIM_maxSSP_individual_sections_TA_MRSP 33

/* TrackAtlasTypes::DEFAULT_MA_level_23 */
#define DEFAULT_MA_level_23_TrackAtlasTypes MA_L23_TrackAtlasTypes

/* TrackAtlasTypes::DEFAULT_Endtimer */
extern const Endtimer_t_TrackAtlasTypes DEFAULT_Endtimer_TrackAtlasTypes;

/* TrackAtlasTypes::DEFAULT_MA_sectionlist */
extern const _4_MovementAuthoritySectionlist_t_TrackAtlasTypes DEFAULT_MA_sectionlist_TrackAtlasTypes;

/* TM::ENUM_Q_SCALE_10cm_QSCALE */
#define ENUM_Q_SCALE_10cm_QSCALE_TM Q_SCALE_10_cm_scale

/* TM::ENUM_Q_SCALE_10m_QSCALE */
#define ENUM_Q_SCALE_10m_QSCALE_TM Q_SCALE_10_m_scale

/* TA_MA::DefaultMA_section */
extern const MovementAuthoritySection_t_TrackAtlasTypes DefaultMA_section_TA_MA;

/* TA_MA::INIT_P15_OBU */
extern const P015_OBU_T_TM INIT_P15_OBU_TA_MA;

/* TM_baseline2::DEFAULT_P003V1_OBU_section */
extern const P003V1_section_enum_T_TM_baseline2 DEFAULT_P003V1_OBU_section_TM_baseline2;

/* TM_conversions::INT_Q_NVSBTSMPERM_Yes */
#define INT_Q_NVSBTSMPERM_Yes_TM_conversions 1

/* TM_conversions::INT_Q_NVSBTSMPERM_No */
#define INT_Q_NVSBTSMPERM_No_TM_conversions 0

/* TM_conversions::ENUM_Q_NVSBTSMPERM_No */
#define ENUM_Q_NVSBTSMPERM_No_TM_conversions Q_NVSBTSMPERM_No

/* TM_conversions::ENUM_Q_NVSBTSMPERM_Yes */
#define ENUM_Q_NVSBTSMPERM_Yes_TM_conversions Q_NVSBTSMPERM_Yes

/* TM_conversions::INT_Q_NVEMRRLS_revoke_at_standstill */
#define INT_Q_NVEMRRLS_revoke_at_standstill_TM_conversions 0

/* TM_conversions::INT_Q_NVEMRRLS_revoke_when_no_speed_exceeded */
#define INT_Q_NVEMRRLS_revoke_when_no_speed_exceeded_TM_conversions 1

/* TM_conversions::ENUM_Q_NVEMRRLS_revoke_at_standstill */
#define ENUM_Q_NVEMRRLS_revoke_at_standstill_TM_conversions _14_Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill

/* TM_conversions::ENUM_Q_NVEMRRLS_revoke_when_no_speed_exceeded */
#define ENUM_Q_NVEMRRLS_revoke_when_no_speed_exceeded_TM_conversions Q_NVEMRRLS_Revoke_emergency_brake_command_when_permitted_speed_supervision_limit_is_no_longer_exceeded

/* TM_conversions::INT_M_NVCONTACT_Apply_service_brake */
#define INT_M_NVCONTACT_Apply_service_brake_TM_conversions 1

/* TM_conversions::INT_M_NVCONTACT_No_Reaction */
#define INT_M_NVCONTACT_No_Reaction_TM_conversions 2

/* TM_conversions::INT_M_NVCONTACT_Train_trip */
#define INT_M_NVCONTACT_Train_trip_TM_conversions 0

/* TM_conversions::ENUM_M_NVCONTACT_Train_trip */
#define ENUM_M_NVCONTACT_Train_trip_TM_conversions M_NVCONTACT_Train_trip

/* TM_conversions::ENUM_M_NVCONTACT_Apply_service_brake */
#define ENUM_M_NVCONTACT_Apply_service_brake_TM_conversions M_NVCONTACT_Apply_service_brake

/* TM_conversions::ENUM_M_NVCONTACT_No_Reaction */
#define ENUM_M_NVCONTACT_No_Reaction_TM_conversions M_NVCONTACT_No_Reaction

/* TM_conversions::INT_M_NVDERUN_no */
#define INT_M_NVDERUN_no_TM_conversions 0

/* TM_conversions::INT_M_NVDERUN_yes */
#define INT_M_NVDERUN_yes_TM_conversions 1

/* TM_conversions::ENUM_M_NVDERUN_yes */
#define ENUM_M_NVDERUN_yes_TM_conversions M_NVDERUN_Yes

/* TM_conversions::ENUM_M_NVDERUN_no */
#define ENUM_M_NVDERUN_no_TM_conversions M_NVDERUN_No

/* TM_conversions::INT_Q_NVDRIVER_ADHES_Allowed */
#define INT_Q_NVDRIVER_ADHES_Allowed_TM_conversions 1

/* TM_conversions::INT_Q_NVDRIVER_ADHES_NotAllowed */
#define INT_Q_NVDRIVER_ADHES_NotAllowed_TM_conversions 0

/* TM_conversions::ENUM_Q_NVDRIVER_ADHES_NotAllowed */
#define ENUM_Q_NVDRIVER_ADHES_NotAllowed_TM_conversions Q_NVDRIVER_ADHES_Not_allowed

/* TM_conversions::ENUM_Q_NVDRIVER_ADHES_Allowed */
#define ENUM_Q_NVDRIVER_ADHES_Allowed_TM_conversions Q_NVDRIVER_ADHES_Allowed

/* TM_baseline2::DIM_MaxElementsPacket003V1 */
#define DIM_MaxElementsPacket003V1_TM_baseline2 (DIM_N_ITER_TM * 1 + 6 + 18)

/* TA_Storage::INIT_P3V1 */
extern const P003V1_OBU_T_TM_baseline2 INIT_P3V1_TA_Storage;

/* TrackAtlasTypes::GradientMaxSections */
#define GradientMaxSections_TrackAtlasTypes 50

/* TA_Export::DEFAULT_to_ML */
extern const DataForModeAndLevel_t_TrackAtlasTypes DEFAULT_to_ML_TA_Export;

/* MA_Request::cPacket132 */
extern const Radio_TrainTrack_Message_T_Radio_Types_Pkg cPacket132_MA_Request;

/* TM::DIM_MaxElementsPacket015 */
#define DIM_MaxElementsPacket015_TM (DIM_N_ITER_TM * 4 + 15 + 1 + 6)

/* TM::DEFAULT_P015_OBU_section */
extern const P015_section_enum_T_TM DEFAULT_P015_OBU_section_TM;

/* TM_lib_internal::DIM_P015_n_sections */
#define DIM_P015_n_sections_TM_lib_internal 4

/* TM::DIM_N_ITER */
#define DIM_N_ITER_TM 32

/* TM_conversions::INT_Q_SCALE_10cm */
#define INT_Q_SCALE_10cm_TM_conversions 0

/* TM_conversions::INT_Q_SCALE_1m */
#define INT_Q_SCALE_1m_TM_conversions 1

/* TM_conversions::INT_Q_SCALE_10m */
#define INT_Q_SCALE_10m_TM_conversions 2

/* TM_conversions::ENUM_Q_SCALE_10cm */
#define ENUM_Q_SCALE_10cm_TM_conversions Q_SCALE_10_cm_scale

/* TM_conversions::ENUM_Q_SCALE_10m */
#define ENUM_Q_SCALE_10m_TM_conversions Q_SCALE_10_m_scale

/* TM_conversions::ENUM_Q_SCALE_1m */
#define ENUM_Q_SCALE_1m_TM_conversions Q_SCALE_1_m_scale

/* TM_conversions::INT_Q_SECTIONTIMER_sectiontimer */
#define INT_Q_SECTIONTIMER_sectiontimer_TM_conversions 1

/* TM_conversions::INT_Q_SECTIONTIMER_no_sectiontimer */
#define INT_Q_SECTIONTIMER_no_sectiontimer_TM_conversions 0

/* TM_conversions::ENUM_Q_SECTIONTIMER_sectiontimer */
#define ENUM_Q_SECTIONTIMER_sectiontimer_TM_conversions Q_SECTIONTIMER_Section_Timer_information_to_follow

/* TM_conversions::ENUM_Q_SECTIONTIMER_no_sectiontimer */
#define ENUM_Q_SECTIONTIMER_no_sectiontimer_TM_conversions Q_SECTIONTIMER_No_Section_Timer_information

/* TM_conversions::ENUM_Q_OVERLAP_overlap_info */
#define ENUM_Q_OVERLAP_overlap_info_TM_conversions Q_OVERLAP_Overlap_information_to_follow

/* TM_conversions::INT_Q_OVERLAP_overlap_info */
#define INT_Q_OVERLAP_overlap_info_TM_conversions 1

/* TM_conversions::INT_Q_OVERLAP_no_overlap_info */
#define INT_Q_OVERLAP_no_overlap_info_TM_conversions 0

/* TM_conversions::ENUM_Q_OVERLAP_no_overlap_info */
#define ENUM_Q_OVERLAP_no_overlap_info_TM_conversions Q_OVERLAP_No_overlap_information

/* TM_conversions::ENUM_Q_DANGERPOINT_dangerpoint_info */
#define ENUM_Q_DANGERPOINT_dangerpoint_info_TM_conversions Q_DANGERPOINT_No_danger_point_information

/* TM_conversions::INT_Q_DANGERPOINT_no_dangerpoint_info */
#define INT_Q_DANGERPOINT_no_dangerpoint_info_TM_conversions 0

/* TM_conversions::INT_Q_DANGERPOINT_dangerpoint_info */
#define INT_Q_DANGERPOINT_dangerpoint_info_TM_conversions 1

/* TM_conversions::ENUM_Q_DANGERPOINT_no_dangerpoint_info */
#define ENUM_Q_DANGERPOINT_no_dangerpoint_info_TM_conversions Q_DANGERPOINT_Danger_point_information_to_follow

/* TM_conversions::INT_Q_ENDTIMER_no_endsection_timer_info */
#define INT_Q_ENDTIMER_no_endsection_timer_info_TM_conversions 0

/* TM_conversions::INT_Q_ENDTIMER_endsection_timer_info_follows */
#define INT_Q_ENDTIMER_endsection_timer_info_follows_TM_conversions 1

/* TM_conversions::ENUM_Q_ENDTIMER_endsection_timer_info_follows */
#define ENUM_Q_ENDTIMER_endsection_timer_info_follows_TM_conversions Q_ENDTIMER_End_section_timer_information_to_follow

/* TM_conversions::ENUM_Q_ENDTIMER_no_endsection_timer_info */
#define ENUM_Q_ENDTIMER_no_endsection_timer_info_TM_conversions Q_ENDTIMER_No_End_section_timer_information

/* TM_conversions::DIM_L_max */
#define DIM_L_max_TM_conversions 32767

/* TM_conversions::DIM_L_min */
#define DIM_L_min_TM_conversions 0

/* TM_conversions::DIM_D_max */
#define DIM_D_max_TM_conversions 32767

/* TM_conversions::DIM_D_min */
#define DIM_D_min_TM_conversions 0

/* TM::DEFAULT_CompressedPackets */
extern const CompressedPacketData_T_Common_Types_Pkg DEFAULT_CompressedPackets_TM;

/* TM::DIM_MaxRMessages */
#define DIM_MaxRMessages_TM 30

/* TM::DEFAULT_PHeader */
extern const MetadataElement_T_Common_Types_Pkg DEFAULT_PHeader_TM;

/* TM_lib_internal::DIM_offset_metadata_nid_packet */
#define DIM_offset_metadata_nid_packet_TM_lib_internal 1000000

/* TM_lib_internal::DIM_offset_metadata_q_dir */
#define DIM_offset_metadata_q_dir_TM_lib_internal 100000

/* TM_lib_internal::DIM_offset_metadata_m_version */
#define DIM_offset_metadata_m_version_TM_lib_internal 1000

/* TM_lib_internal::DIM_offset_metadata_id */
#define DIM_offset_metadata_id_TM_lib_internal 1

/* TM_conversions::INT_Q_DIR_nomiinal */
#define INT_Q_DIR_nomiinal_TM_conversions 1

/* TM_conversions::INT_Q_DIR_reverse */
#define INT_Q_DIR_reverse_TM_conversions 0

/* TM_conversions::INT_Q_DIR_both */
#define INT_Q_DIR_both_TM_conversions 2

/* TM_conversions::ENUM_Q_DIR_both */
#define ENUM_Q_DIR_both_TM_conversions Q_DIR_Both_directions

/* TM_conversions::ENUM_Q_DIR_reverse */
#define ENUM_Q_DIR_reverse_TM_conversions Q_DIR_Reverse

/* TM_conversions::ENUM_Q_DIR_nominal */
#define ENUM_Q_DIR_nominal_TM_conversions Q_DIR_Nominal

/* Common_Types_Pkg::cMetadataArraySize */
#define cMetadataArraySize_Common_Types_Pkg cDIM_MaxRMessages_Common_Types_Pkg

/* Common_Types_Pkg::cDIM_MaxRMessages */
#define cDIM_MaxRMessages_Common_Types_Pkg 30

/* Common_Types_Pkg::cDIM_MaxDataElementsInRMessage */
#define cDIM_MaxDataElementsInRMessage_Common_Types_Pkg 500

/* MA_Request::cMA_RequestParam */
extern const P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg cMA_RequestParam_MA_Request;

/* MA_Request::cNid_em */
#define cNid_em_MA_Request 0

/* MA_Request::cQemergencyStop */
#define cQemergencyStop_MA_Request _8_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA

/* MA_Request::cNidTextMessage */
#define cNidTextMessage_MA_Request 0

/* MA_Request::cPT11_ValidateTrainData */
extern const PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg cPT11_ValidateTrainData_MA_Request;

/* MA_Request::cPT3_OBUTelephoneNumber */
extern const PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg cPT3_OBUTelephoneNumber_MA_Request;

/* MA_Request::cPT4_ErrorReporting */
extern const PT4_ErrorReporting_T_Packet_TrainTypes_Pkg cPT4_ErrorReporting_MA_Request;

/* MA_Request::cPT5_TrainRunningNumber */
extern const PT5_TrainRunningNumber_Packet_TrainTypes_Pkg cPT5_TrainRunningNumber_MA_Request;

/* MA_Request::cPT9_Level23 */
extern const PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg cPT9_Level23_MA_Request;

/* BG_Types_Pkg::cMaxNoOfLinkedBGs */
#define cMaxNoOfLinkedBGs_BG_Types_Pkg 4

/* TrackAtlasTypes::MAsMaxSections */
#define MAsMaxSections_TrackAtlasTypes 10

/* Packet_TrainTypes_Pkg::cmaxNumberTelephoneNumbers */
#define cmaxNumberTelephoneNumbers_Packet_TrainTypes_Pkg 1

/* Packet_TrainTypes_Pkg::cDigitsInTelephoneNumber */
#define cDigitsInTelephoneNumber_Packet_TrainTypes_Pkg 15

/* Packet_TrainTypes_Pkg::cMaxTractionIdentity */
#define cMaxTractionIdentity_Packet_TrainTypes_Pkg 3

/* Packet_TrainTypes_Pkg::cMaxNationalSystem */
#define cMaxNationalSystem_Packet_TrainTypes_Pkg 3

#endif /* _KCG_CONSTS_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_consts.h
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */
#ifndef _KCG_CONSTS_H_
#define _KCG_CONSTS_H_

#include "kcg_types.h"

/* TTrackAtlas_SystemTime */
#define TTrackAtlas_SystemTime 0

/* TTrackAtlas_PreindicationLocation */
#define TTrackAtlas_PreindicationLocation 0

/* TTrackAtlas_Odometry */
extern const odometry_T_Obu_BasicTypes_Pkg TTrackAtlas_Odometry;

/* TTrackAtlas_fromDriverToMA_R */
extern const Driver2MAR_T_MA_Request TTrackAtlas_fromDriverToMA_R;

/* TTrackAtlas_TrainProps */
extern const trainProperties_T_TrainPosition_Types_Pck TTrackAtlas_TrainProps;

/* TTrackAtlas_packet0 */
extern const PT0_PositionReport_T_Packet_TrainTypes_Pkg TTrackAtlas_packet0;

/* TTrackAtlas_packet1 */
extern const PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg TTrackAtlas_packet1;

/* TTrackAtlas_t_train */
#define TTrackAtlas_t_train 0.0

/* TTrackAtlas_P203V1_onboard */
extern const P203V1_OBU_T_TM_baseline2 TTrackAtlas_P203V1_onboard;

/* TTrackAtlas_PermanentDataP003 */
extern const P003_permanent_data_T_TM_baseline2 TTrackAtlas_PermanentDataP003;

/* TTrackAtlas_TrainData */
#define TTrackAtlas_TrainData kcg_false

/* TTrackAtlas_ModeAndLevel_in */
extern const T_Mode_Level_Level_And_Mode_Types_Pkg TTrackAtlas_ModeAndLevel_in;

/* cBGHeader */
extern const BG_Header_T_BG_Types_Pkg cBGHeader;

/* cRadioMetadata */
extern const RadioMetadata_T_Common_Types_Pkg cRadioMetadata;

/* cSource */
#define cSource msrc_Euroradio_Common_Types_Pkg

/* cSendingRBC */
extern const RBC_Id_T_Common_Types_Pkg cSendingRBC;

/* TrainPos0 */
extern const trainPosition_T_TrainPosition_Types_Pck TrainPos0;

/* TrainPos4 */
extern const trainPosition_T_TrainPosition_Types_Pck TrainPos4;

/* TrainPos3 */
extern const trainPosition_T_TrainPosition_Types_Pck TrainPos3;

/* TrainPos2 */
extern const trainPosition_T_TrainPosition_Types_Pck TrainPos2;

/* TrainPos1 */
extern const trainPosition_T_TrainPosition_Types_Pck TrainPos1;

/* TrackAtlas::Mode_NTC */
#define Mode_NTC_TrackAtlas M_MODE_National_System

/* TM::ENUM_Q_SCALE_10cm_QSCALE */
#define ENUM_Q_SCALE_10cm_QSCALE_TM Q_SCALE_10_cm_scale

/* TM::ENUM_Q_SCALE_10m_QSCALE */
#define ENUM_Q_SCALE_10m_QSCALE_TM Q_SCALE_10_m_scale

/* TrackAtlasTypes::DEFAULT_MA_level_23 */
#define DEFAULT_MA_level_23_TrackAtlasTypes MA_L23_TrackAtlasTypes

/* TrackAtlasTypes::DEFAULT_Endtimer */
extern const Endtimer_t_TrackAtlasTypes DEFAULT_Endtimer_TrackAtlasTypes;

/* TrackAtlasTypes::DEFAULT_MA_sectionlist */
extern const MovementAuthoritySectionlist_t_TrackAtlasTypes DEFAULT_MA_sectionlist_TrackAtlasTypes;

/* TA_MA::INIT_P15_OBU */
extern const P015_OBU_T_TM INIT_P15_OBU_TA_MA;

/* TA_MRSP::DEFAULT_MRSP_Profile */
extern const MRSP_Profile_t_TrackAtlasTypes DEFAULT_MRSP_Profile_TA_MRSP;

/* TA_MRSP::XSSPold */
extern const SSP_cat_t_TA_MRSP XSSPold_TA_MRSP;

/* TA_MRSP::DEFAULT_MRSP_section */
extern const MRSP_section_t_TrackAtlasTypes DEFAULT_MRSP_section_TA_MRSP;

/* TA_MRSP::DEFAULT_SSP_targets */
extern const SSP_t_list_t_TA_MRSP DEFAULT_SSP_targets_TA_MRSP;

/* TA_MRSP::DEFAULT_indexed_target */
extern const SSP_t_indexed_matrix_element_TA_MRSP DEFAULT_indexed_target_TA_MRSP;

/* TA_MRSP::DEFAULT_relevant_target */
extern const SSP_relevant_target_t_TA_MRSP DEFAULT_relevant_target_TA_MRSP;

/* TA_MRSP::DEFAULT_SSP_section */
extern const SSP_section_t_TA_MRSP DEFAULT_SSP_section_TA_MRSP;

/* TA_MRSP::DEFAULT_SSP_Init_ValidSSPsection */
extern const SSP_Mark_ValidSSPsection_TA_MRSP DEFAULT_SSP_Init_ValidSSPsection_TA_MRSP;

/* TA_MRSP::DIM_SSP */
#define DIM_SSP_TA_MRSP (DIM_n_categories_TA_MRSP * DIM_maxSSP_individual_sections_TA_MRSP)

/* TA_MRSP::DIM_n_categories */
#define DIM_n_categories_TA_MRSP 11

/* TA_MRSP::int_ZERO */
#define int_ZERO_TA_MRSP 0

/* TA_MRSP::SP_NTC */
extern const SSP_cat_t_TA_MRSP SP_NTC_TA_MRSP;

/* TA_MRSP::TOP_SSP_cat */
extern const SSP_cat_t_TA_MRSP TOP_SSP_cat_TA_MRSP;

/* TM_baseline2::DEFAULT_P027v1_OBU_section */
extern const P027V1_section_enum_T_TM_baseline2 DEFAULT_P027v1_OBU_section_TM_baseline2;

/* TA_SSP::DEFAULT_SSP_section */
extern const StaticSpeedSection_t_TrackAtlasTypes DEFAULT_SSP_section_TA_SSP;

/* TrackAtlasTypes::DEFAULT_StaticSpeedProfile */
extern const StaticSpeedProfile_t_TrackAtlasTypes DEFAULT_StaticSpeedProfile_TrackAtlasTypes;

/* TrackAtlasTypes::DIM_SSP */
#define DIM_SSP_TrackAtlasTypes 50

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
#define ENUM_Q_NVEMRRLS_revoke_at_standstill_TM_conversions Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill

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

/* TM_baseline2::DEFAULT_P003V1_OBU_section */
extern const P003V1_section_enum_T_TM_baseline2 DEFAULT_P003V1_OBU_section_TM_baseline2;

/* TA_Storage::INIT_P3V1 */
extern const P003V1_OBU_T_TM_baseline2 INIT_P3V1_TA_Storage;

/* TA_Export::DEFAULT_MRSP_section */
extern const MRSP_section_t_TrackAtlasTypes DEFAULT_MRSP_section_TA_Export;

/* TA_Export::DEFAULT_section_to_DMI */
extern const GradientProfile_for_DMI_section_t_TrackAtlasTypes DEFAULT_section_to_DMI_TA_Export;

/* TM::DIM_MaxElementsPacket135 */
#define DIM_MaxElementsPacket135_TM 3

/* TM::DIM_MaxElementsPacket012 */
#define DIM_MaxElementsPacket012_TM (DIM_N_ITER_TM * 4 + 15 + 1 + 7)

/* TM_lib_internal::DIM_P012_n_sections */
#define DIM_P012_n_sections_TM_lib_internal 4

/* TA_Export::Default_P80_legacy */
extern const P80_ModeProfiles_T_Packet_Types_Pkg Default_P80_legacy_TA_Export;

/* TM_radio_messages::nid_message_TrackTrain_015 */
#define nid_message_TrackTrain_015_TM_radio_messages 15

/* TM_radio_messages::nid_message_TrackTrain_016 */
#define nid_message_TrackTrain_016_TM_radio_messages 16

/* TM_radio_messages::nid_message_TrackTrain_002 */
#define nid_message_TrackTrain_002_TM_radio_messages 2

/* TM_radio_messages::nid_message_TrackTrain_027 */
#define nid_message_TrackTrain_027_TM_radio_messages 27

/* TM_radio_messages::nid_message_TrackTrain_028 */
#define nid_message_TrackTrain_028_TM_radio_messages 28

/* TM_radio_messages::nid_message_TrackTrain_006 */
#define nid_message_TrackTrain_006_TM_radio_messages 6

/* TM_conversions::INT_Q_SRSTOP_go */
#define INT_Q_SRSTOP_go_TM_conversions 1

/* TM_conversions::INT_Q_SRSTOP_stop */
#define INT_Q_SRSTOP_stop_TM_conversions 0

/* TM_conversions::ENUM_Q_SRSTOP_stop */
#define ENUM_Q_SRSTOP_stop_TM_conversions Q_SRSTOP_Stop_if_in_SR_mode

/* TM_conversions::ENUM_Q_SRSTOP_go */
#define ENUM_Q_SRSTOP_go_TM_conversions Q_SRSTOP_Go_if_in_SR_mode

/* TM::DEFAULT_P138_legacy */
extern const P138_ReversingAreaInformation_T_Packet_Types_Pkg DEFAULT_P138_legacy_TM;

/* TM::DIM_MaxElementsPacket138 */
#define DIM_MaxElementsPacket138_TM 6

/* TM::DEFAULT_P139_legacy */
extern const P139_ReversingSupervisionInformation_T_Packet_Types_Pkg DEFAULT_P139_legacy_TM;

/* TM::DIM_MaxElementsPacket136 */
#define DIM_MaxElementsPacket136_TM 6

/* TM::DIM_MaxElementsPacket139 */
#define DIM_MaxElementsPacket139_TM 6

/* TM_specific::DEFAULT_P015_legacy */
extern const P15_Level23MovementAuthorities_T_Packet_Types_Pkg DEFAULT_P015_legacy_TM_specific;

/* TM_specific::DEFAULT_P021_legacy */
extern const P21_GradientProfiles_T_Packet_Types_Pkg DEFAULT_P021_legacy_TM_specific;

/* TM_baseline2::NID_META_P027V1_body */
#define NID_META_P027V1_body_TM_baseline2 27016000

/* TM_baseline2::DEFAULT_P027V1_section_enum */
extern const P027V1_section_enum_T_TM_baseline2 DEFAULT_P027V1_section_enum_TM_baseline2;

/* TM_conversions::INT_Q_FRONT_train_length_delay */
#define INT_Q_FRONT_train_length_delay_TM_conversions 0

/* TM_conversions::INT_Q_FRONT_no_train_length_delay */
#define INT_Q_FRONT_no_train_length_delay_TM_conversions 1

/* TM_conversions::ENUM_Q_FRONT_train_length_delay */
#define ENUM_Q_FRONT_train_length_delay_TM_conversions Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element

/* TM_conversions::ENUM_Q_FRONT_no_train_length_delay */
#define ENUM_Q_FRONT_no_train_length_delay_TM_conversions Q_FRONT_No_train_length_delay_on_validity_end_point_of_profile_element

/* TM_baseline2::DEFAULT_P027v1_OBU_section_qdiff */
extern const P027V1_section_enum_qdiff_T_TM_baseline2 DEFAULT_P027v1_OBU_section_qdiff_TM_baseline2;

/* TM_lib_internal::DIM_P027V1_n_sections_qdiff */
#define DIM_P027V1_n_sections_qdiff_TM_lib_internal 7

/* TM_baseline2::DEFAULT_P027V1_legacy */
extern const P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg DEFAULT_P027V1_legacy_TM_baseline2;

/* TM_lib_internal::DEFAULT_P041_OBU_section */
extern const P041_section_enum_T_TM DEFAULT_P041_OBU_section_TM_lib_internal;

/* TM_lib_internal::DIM_P041_n_sections */
#define DIM_P041_n_sections_TM_lib_internal 3

/* TM::DEFAULT_P041_OBU_section */
extern const P041_section_enum_T_TM DEFAULT_P041_OBU_section_TM;

/* TM_specific::DEFAULT_P041_legacy */
extern const P41_LevelTransistionOrders_T_Packet_Types_Pkg DEFAULT_P041_legacy_TM_specific;

/* TM::DIM_MaxElementsPacket046 */
#define DIM_MaxElementsPacket046_TM ((DIM_N_ITER_TM + 1) * 2 + 4)

/* TM_conversions::INT_M_LEVELTR_Level_0 */
#define INT_M_LEVELTR_Level_0_TM_conversions 0

/* TM_conversions::INT_M_LEVELTR_Level_1 */
#define INT_M_LEVELTR_Level_1_TM_conversions 2

/* TM_conversions::INT_M_LEVELTR_Level_2 */
#define INT_M_LEVELTR_Level_2_TM_conversions 3

/* TM_conversions::INT_M_LEVELTR_Level_3 */
#define INT_M_LEVELTR_Level_3_TM_conversions 4

/* TM_conversions::INT_M_LEVELTR_Level_NTC */
#define INT_M_LEVELTR_Level_NTC_TM_conversions 1

/* TM_conversions::ENUM_M_LEVELTR_Level_NTC */
#define ENUM_M_LEVELTR_Level_NTC_TM_conversions M_LEVELTR_Level_NTC_specified_by_NID_NTC

/* TM_conversions::ENUM_M_LEVELTR_Level_3 */
#define ENUM_M_LEVELTR_Level_3_TM_conversions M_LEVELTR_Level_3

/* TM_conversions::ENUM_M_LEVELTR_Level_2 */
#define ENUM_M_LEVELTR_Level_2_TM_conversions M_LEVELTR_Level_2

/* TM_conversions::ENUM_M_LEVELTR_Level_1 */
#define ENUM_M_LEVELTR_Level_1_TM_conversions M_LEVELTR_Level_1

/* TM_conversions::ENUM_M_LEVELTR_Level_0 */
#define ENUM_M_LEVELTR_Level_0_TM_conversions M_LEVELTR_Level_0

/* TM_lib_internal::DIM_P046_n_sections */
#define DIM_P046_n_sections_TM_lib_internal 2

/* TM::DEFAULT_P046_OBU_section */
extern const P046_section_enum_T_TM DEFAULT_P046_OBU_section_TM;

/* TM_specific::DEFAULT_P046_legacy */
extern const P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg DEFAULT_P046_legacy_TM_specific;

/* TrackAtlasTypes::DEFAULT_StaticSpeedSection */
extern const StaticSpeedSection_t_TrackAtlasTypes DEFAULT_StaticSpeedSection_TrackAtlasTypes;

/* MA_Request::cPacket132 */
extern const Radio_TrainTrack_Message_T_Radio_Types_Pkg cPacket132_MA_Request;

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

/* TM::DEFAULT_P015_OBU_section */
extern const P015_section_enum_T_TM DEFAULT_P015_OBU_section_TM;

/* TM_conversions::INT_Q_SECTIONTIMER_sectiontimer */
#define INT_Q_SECTIONTIMER_sectiontimer_TM_conversions 1

/* TM_conversions::INT_Q_SECTIONTIMER_no_sectiontimer */
#define INT_Q_SECTIONTIMER_no_sectiontimer_TM_conversions 0

/* TM_conversions::ENUM_Q_SECTIONTIMER_sectiontimer */
#define ENUM_Q_SECTIONTIMER_sectiontimer_TM_conversions Q_SECTIONTIMER_Section_Timer_information_to_follow

/* TM_conversions::ENUM_Q_SECTIONTIMER_no_sectiontimer */
#define ENUM_Q_SECTIONTIMER_no_sectiontimer_TM_conversions Q_SECTIONTIMER_No_Section_Timer_information

/* TM_lib_internal::DIM_P015_n_sections */
#define DIM_P015_n_sections_TM_lib_internal 4

/* MA_Request::cMA_RequestParam */
extern const P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg cMA_RequestParam_MA_Request;

/* MA_Request::cNid_em */
#define cNid_em_MA_Request 0

/* MA_Request::cQemergencyStop */
#define cQemergencyStop_MA_Request Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA

/* MA_Request::cNidTextMessage */
#define cNidTextMessage_MA_Request 0

/* XCP_numeric::ZERO_real */
#define ZERO_real_XCP_numeric 0.0

/* XCP_numeric::ZERO_int */
#define ZERO_int_XCP_numeric 0

/* TA_EmergencyStop::cMSG147_NONE */
extern const Radio_TrainTrack_Message_T_Radio_Types_Pkg cMSG147_NONE_TA_EmergencyStop;

/* Id_Pkg::cm16_Unconditional_Emergency_Stop */
#define cm16_Unconditional_Emergency_Stop_Id_Pkg 16

/* Id_Pkg::cm18_Revocation_of_Emergency_Stop */
#define cm18_Revocation_of_Emergency_Stop_Id_Pkg 18

/* Id_Pkg::cm15_Conditional_Emergency_Stop */
#define cm15_Conditional_Emergency_Stop_Id_Pkg 15

/* TA_EmergencyStop::cNID_EM_NONE */
#define cNID_EM_NONE_TA_EmergencyStop 0

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

/* TA_EmergencyStop::cQ_MARQSREASON_NONE */
#define cQ_MARQSREASON_NONE_TA_EmergencyStop Q_MARQSTREASON_Start_selected_by_driver

/* TA_EmergencyStop::cNID_TEXTMESSAGE_NONE */
#define cNID_TEXTMESSAGE_NONE_TA_EmergencyStop 0

/* TA_EmergencyStop::cEOA_NONE */
#define cEOA_NONE_TA_EmergencyStop 0

/* TA_EmergencyStop::NID_EM_Store::cNID_EM_STORE_EMPTY */
extern const NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store cNID_EM_STORE_EMPTY_TA_EmergencyStop_NID_EM_Store;

/* TA_EmergencyStop::NID_EM_Store::cNID_EM_STORE_SIZE */
#define cNID_EM_STORE_SIZE_TA_EmergencyStop_NID_EM_Store 8

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

/* TM_lib_internal::DIM_P021_n_sections */
#define DIM_P021_n_sections_TM_lib_internal 3

/* TM::DEFAULT_CompressedPackets */
extern const CompressedPacketData_T_Common_Types_Pkg DEFAULT_CompressedPackets_TM;

/* TM::DEFAULT_PHeader */
extern const MetadataElement_T_Common_Types_Pkg DEFAULT_PHeader_TM;

/* TA_Lib_internal::ENUM_MsgSource_Balise */
#define ENUM_MsgSource_Balise_TA_Lib_internal msrc_Eurobalise_Common_Types_Pkg

/* TA_Lib_internal::ENUM_MsgSource_Euroradio */
#define ENUM_MsgSource_Euroradio_TA_Lib_internal msrc_Euroradio_Common_Types_Pkg

/* TA_MRSP::DIM_maxSSP_individual_sections */
#define DIM_maxSSP_individual_sections_TA_MRSP 33

/* TM::DEFAULT_P021_OBU_section */
extern const P021_section_enum_T_TM DEFAULT_P021_OBU_section_TM;

/* TM_conversions::ENUM_Q_GDIR_uphill */
#define ENUM_Q_GDIR_uphill_TM_conversions Q_GDIR_uphill

/* TrackAtlasTypes::DEFAULT_GradientSection */
extern const Gradient_section_t_TrackAtlasTypes DEFAULT_GradientSection_TrackAtlasTypes;

/* TrackAtlasTypes::DEFAULT_GradientProfile */
extern const GradientProfile_t_TrackAtlasTypes DEFAULT_GradientProfile_TrackAtlasTypes;

/* TA_Gradient::DEFAULT_GP_Section */
extern const Gradient_section_t_TrackAtlasTypes DEFAULT_GP_Section_TA_Gradient;

/* TrackAtlasTypes::DEFAULT_to_Supervision_NTC */
extern const MRSP_Profile_t_TrackAtlasTypes DEFAULT_to_Supervision_NTC_TrackAtlasTypes;

/* TrackAtlasTypes::DEFAULT_P003 */
extern const P003_OBU_T_TM DEFAULT_P003_TrackAtlasTypes;

/* TrackAtlasTypes::DEFAULT_to_Mode_and_Level */
extern const DataForModeAndLevel_t_TrackAtlasTypes DEFAULT_to_Mode_and_Level_TrackAtlasTypes;

/* TrackAtlasTypes::DEFAULT_to_DMI */
extern const DataForDMI_t_TrackAtlasTypes DEFAULT_to_DMI_TrackAtlasTypes;

/* TrackAtlasTypes::DEFAULT_MovementAuthority */
extern const MovementAuthority_t_TrackAtlasTypes DEFAULT_MovementAuthority_TrackAtlasTypes;

/* TrackAtlasTypes::DEFAULT_TrainTrack */
extern const Radio_TrainTrack_Message_T_Radio_Types_Pkg DEFAULT_TrainTrack_TrackAtlasTypes;

/* TrackAtlasTypes::DEFAULT_to_Supervision */
extern const DataForSupervision_nextGen_t_TrackAtlasTypes DEFAULT_to_Supervision_TrackAtlasTypes;

/* TrackAtlasTypes::MAsMaxSections */
#define MAsMaxSections_TrackAtlasTypes 10

/* TrackAtlasTypes::MRSPMaxSections */
#define MRSPMaxSections_TrackAtlasTypes 200

/* TrackAtlasTypes::GradientMaxSections */
#define GradientMaxSections_TrackAtlasTypes DIM_GP_TrackAtlasTypes

/* TrackAtlasTypes::DIM_GP */
#define DIM_GP_TrackAtlasTypes 50

/* Packet_Types_Pkg::cNIterMaxMA */
#define cNIterMaxMA_Packet_Types_Pkg 5

/* Packet_Types_Pkg::cNIterMax */
#define cNIterMax_Packet_Types_Pkg 7

/* Packet_Types_Pkg::cNIterMaxModeProfiles */
#define cNIterMaxModeProfiles_Packet_Types_Pkg 3

/* Packet_TrainTypes_Pkg::cmaxNumberTelephoneNumbers */
#define cmaxNumberTelephoneNumbers_Packet_TrainTypes_Pkg 1

/* Packet_TrainTypes_Pkg::cDigitsInTelephoneNumber */
#define cDigitsInTelephoneNumber_Packet_TrainTypes_Pkg 15

/* Packet_TrainTypes_Pkg::cMaxTractionIdentity */
#define cMaxTractionIdentity_Packet_TrainTypes_Pkg 3

/* Packet_TrainTypes_Pkg::cMaxNationalSystem */
#define cMaxNationalSystem_Packet_TrainTypes_Pkg 3

/* BG_Types_Pkg::cMaxNoOfLinkedBGs */
#define cMaxNoOfLinkedBGs_BG_Types_Pkg 4

/* Packets426::LRBG354_P021_1 */
extern const P021_trackside_int_T_TM LRBG354_P021_1_Packets426;

/* Packets426::LRBG354_P027_1 */
extern const P027V1_trackside_int_T_TM_baseline2 LRBG354_P027_1_Packets426;

/* Packets426::LRBG354_P003_1 */
extern const P003V1_trackside_int_T_TM_baseline2 LRBG354_P003_1_Packets426;

/* Packets426::LRBG354_P005_1 */
extern const P005_trackside_int_T_TM LRBG354_P005_1_Packets426;

/* Packets426::LRBG354_P041_1 */
extern const P041_trackside_int_T_TM LRBG354_P041_1_Packets426;

/* Packets426::LRBG354_P065_1 */
extern const P065_trackside_int_T_TM LRBG354_P065_1_Packets426;

/* Packets426::LRBG354_P015_1 */
extern const P015_trackside_int_T_TM LRBG354_P015_1_Packets426;

/* Messages_426::LRBG_354_D_00275_3_M003 */
extern const M_003_int_T_TM_radio_messages LRBG_354_D_00275_3_M003_Messages_426;

/* Packets426::LRBG354_P021_2 */
extern const P021_trackside_int_T_TM LRBG354_P021_2_Packets426;

/* Packets426::LRBG354_P027_2 */
extern const P027V1_trackside_int_T_TM_baseline2 LRBG354_P027_2_Packets426;

/* Packets426::LRBG354_P003_2 */
extern const P003V1_trackside_int_T_TM_baseline2 LRBG354_P003_2_Packets426;

/* Packets426::LRBG354_P005_2 */
extern const P005_trackside_int_T_TM LRBG354_P005_2_Packets426;

/* Packets426::LRBG354_P041_2 */
extern const P041_trackside_int_T_TM LRBG354_P041_2_Packets426;

/* Packets426::LRBG354_P065_2 */
extern const P065_trackside_int_T_TM LRBG354_P065_2_Packets426;

/* Packets426::LRBG354_P015_2 */
extern const P015_trackside_int_T_TM LRBG354_P015_2_Packets426;

/* TM_baseline2::DIM_MaxElementsPacket003V1 */
#define DIM_MaxElementsPacket003V1_TM_baseline2 (DIM_N_ITER_TM * 1 + 6 + 18)

/* TM::DIM_MaxElementsPacket041 */
#define DIM_MaxElementsPacket041_TM ((DIM_N_ITER_TM + 1) * 3 + 6)

/* TM::DEFAULT_P041_sections_array_flat */
extern const P041_sections_array_flat_T_TM DEFAULT_P041_sections_array_flat_TM;

/* Messages_426::LRBG_351_D_00054_9_M003 */
extern const M_003_int_T_TM_radio_messages LRBG_351_D_00054_9_M003_Messages_426;

/* Packets426::LRBG362_P021_2 */
extern const P021_trackside_int_T_TM LRBG362_P021_2_Packets426;

/* Packets426::LRBG362_P027_2 */
extern const P027V1_trackside_int_T_TM_baseline2 LRBG362_P027_2_Packets426;

/* Packets426::LRBG362_P005_2 */
extern const P005_trackside_int_T_TM LRBG362_P005_2_Packets426;

/* Packets426::LRBG362_P065_2_R1 */
extern const P065_trackside_int_T_TM LRBG362_P065_2_R1_Packets426;

/* Packets426::LRBG362_P015_2 */
extern const P015_trackside_int_T_TM LRBG362_P015_2_Packets426;

/* Packets426::LRBG362_P065_2_R2 */
extern const P065_trackside_int_T_TM LRBG362_P065_2_R2_Packets426;

/* Messages_426::LRBG_362_D_00238_9_M003 */
extern const M_003_int_T_TM_radio_messages LRBG_362_D_00238_9_M003_Messages_426;

/* Packets426::LRBG364_P021 */
extern const P021_trackside_int_T_TM LRBG364_P021_Packets426;

/* Packets426::LRBG364_P027 */
extern const P027V1_trackside_int_T_TM_baseline2 LRBG364_P027_Packets426;

/* Packets426::LRBG364_P005 */
extern const P005_trackside_int_T_TM LRBG364_P005_Packets426;

/* Packets426::LRBG364_P065 */
extern const P065_trackside_int_T_TM LRBG364_P065_Packets426;

/* Packets426::LRBG364_P015 */
extern const P015_trackside_int_T_TM LRBG364_P015_Packets426;

/* TM::DIM_MaxElementsPacket021 */
#define DIM_MaxElementsPacket021_TM ((DIM_N_ITER_TM + 1) * 3 + 4 + 1)

/* TM::DEFAULT_P021_sections_array_flat */
extern const P021_sections_array_flat_T_TM DEFAULT_P021_sections_array_flat_TM;

/* TM::DIM_MaxElementsPacket027v1_body */
#define DIM_MaxElementsPacket027v1_body_TM 6

/* TM::INT_M_VERSION_1_0 */
#define INT_M_VERSION_1_0_TM 16

/* TM::DIM_MaxElementsPacket027v1_section */
#define DIM_MaxElementsPacket027v1_section_TM (DIM_N_ITER_TM * 2 + 4)

/* TM::ENUM_Q_DIR_both_QDIR */
#define ENUM_Q_DIR_both_QDIR_TM Q_DIR_Reverse

/* TM_baseline2::DEFAULT_P027V1_sections_array_qdiff_flat */
extern const P027V1_sections_array_flat_qdiff_T_TM_baseline2 DEFAULT_P027V1_sections_array_qdiff_flat_TM_baseline2;

/* TM::DIM_MaxElementsPacket005 */
#define DIM_MaxElementsPacket005_TM ((DIM_N_ITER_TM + 1) * 7 + 5)

/* TM::DEFAULT_P005_sections_array_flat */
extern const P005_sections_array_flat_T_TM DEFAULT_P005_sections_array_flat_TM;

/* TM::DIM_MaxElementsPacket065 */
#define DIM_MaxElementsPacket065_TM 9

/* TM::DIM_MaxElementsPacket015 */
#define DIM_MaxElementsPacket015_TM (DIM_N_ITER_TM * 4 + 15 + 1 + 6)

/* TM::INT_M_VERSION_2_0 */
#define INT_M_VERSION_2_0_TM 32

/* TM::ERROR_nid_packet */
#define ERROR_nid_packet_TM (- 1)

/* TM_lib_internal::DIM_offset_metadata_nid_packet */
#define DIM_offset_metadata_nid_packet_TM_lib_internal 1000000

/* TM_lib_internal::DIM_offset_metadata_q_dir */
#define DIM_offset_metadata_q_dir_TM_lib_internal 100000

/* TM_lib_internal::DIM_offset_metadata_m_version */
#define DIM_offset_metadata_m_version_TM_lib_internal 1000

/* TM_lib_internal::DIM_offset_metadata_id */
#define DIM_offset_metadata_id_TM_lib_internal 1

/* TM::DEFAULT_P015_sections_array_flat */
extern const P015_sections_array_flat_T_TM DEFAULT_P015_sections_array_flat_TM;

/* TM::DIM_N_ITER */
#define DIM_N_ITER_TM 32

/* TM::DIM_MaxRMessages */
#define DIM_MaxRMessages_TM 30

/* TM::DEFAULT_Headers */
extern const Metadata_T_Common_Types_Pkg DEFAULT_Headers_TM;

/* Messages_426::LRBG_364_D_00091_1_M003 */
extern const M_003_int_T_TM_radio_messages LRBG_364_D_00091_1_M003_Messages_426;

/* TM_conversions::INT_Q_ORIENTATION_reverse */
#define INT_Q_ORIENTATION_reverse_TM_conversions 0

/* TM_conversions::INT_Q_ORIENTATION_nominal */
#define INT_Q_ORIENTATION_nominal_TM_conversions 1

/* TM_conversions::ENUM_Q_ORIENTATION_reverse */
#define ENUM_Q_ORIENTATION_reverse_TM_conversions Q_ORIENTATION_The_balise_group_has_been_passed_by_the_train_in_reverse_direction

/* TM_conversions::ENUM_Q_ORIENTATION_nominal */
#define ENUM_Q_ORIENTATION_nominal_TM_conversions Q_ORIENTATION_The_balise_group_has_been_passed_by_the_train_in_nominal_direction

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

/* TM_conversions::DIM_L_max */
#define DIM_L_max_TM_conversions 32767

/* TM_conversions::DIM_L_min */
#define DIM_L_min_TM_conversions 0

/* TM_conversions::DIM_D_min */
#define DIM_D_min_TM_conversions 0

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

/* TM_conversions::DIM_D_max */
#define DIM_D_max_TM_conversions 32767

/* TM_conversions::DIM_D_max_neg */
#define DIM_D_max_neg_TM_conversions (- 32768)

/* TM_conversions::ENUM_M_VERSION_Previous_versions */
#define ENUM_M_VERSION_Previous_versions_TM_conversions M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS

/* TM_conversions::ENUM_M_VERSION_Version_1_0 */
#define ENUM_M_VERSION_Version_1_0_TM_conversions M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0

/* TM_conversions::ENUM_M_VERSION_Version_1_1 */
#define ENUM_M_VERSION_Version_1_1_TM_conversions M_VERSION_Version_1_1_introduced_in_SRS_3_3_0

/* TM_conversions::ENUM_M_VERSION_Version_2_0 */
#define ENUM_M_VERSION_Version_2_0_TM_conversions M_VERSION_Version_2_0_introduced_in_SRS_3_3_0

/* TM_conversions::INT_M_VERSION_previous_M */
#define INT_M_VERSION_previous_M_TM_conversions 15

/* TM_conversions::INT_M_VERSION_2_0 */
#define INT_M_VERSION_2_0_TM_conversions 32

/* TM_conversions::INT_M_VERSION_1_1 */
#define INT_M_VERSION_1_1_TM_conversions 17

/* TM_conversions::INT_M_VERSION_1_0 */
#define INT_M_VERSION_1_0_TM_conversions 16

/* TM_conversions::ENUM_M_ACK_acknowledgement */
#define ENUM_M_ACK_acknowledgement_TM_conversions M_ACK_Acknowledgement_required

/* TM_conversions::ENUM_M_ACK_no_acknowledgement */
#define ENUM_M_ACK_no_acknowledgement_TM_conversions M_ACK_No_acknowledgement_required

/* TM_conversions::INT_M_ACK_acknowledgement */
#define INT_M_ACK_acknowledgement_TM_conversions 1

/* TM_conversions::INT_M_ACK_no_acknowledgement */
#define INT_M_ACK_no_acknowledgement_TM_conversions 0

/* TM_RBC_conversions_legacy::default_header */
extern const Radio_TrackTrain_Header_T_Radio_Types_Pkg default_header_TM_RBC_conversions_legacy;

/* TM_RBC_conversions_legacy::default_t_sh_rqst */
#define default_t_sh_rqst_TM_RBC_conversions_legacy 0.0

/* TM_RBC_conversions_legacy::default_t_train_reference */
#define default_t_train_reference_TM_RBC_conversions_legacy 0.0

/* TM_RBC_conversions_legacy::default_nid_em */
#define default_nid_em_TM_RBC_conversions_legacy 0

/* TM_RBC_conversions_legacy::default_q_scale */
#define default_q_scale_TM_RBC_conversions_legacy Q_SCALE_1_m_scale

/* TM_RBC_conversions_legacy::default_d_sr */
#define default_d_sr_TM_RBC_conversions_legacy 0

/* TM_RBC_conversions_legacy::default_d_ref */
#define default_d_ref_TM_RBC_conversions_legacy 0

/* TM_RBC_conversions_legacy::default_q_dir */
#define default_q_dir_TM_RBC_conversions_legacy Q_DIR_Reverse

/* TM_RBC_conversions_legacy::default_d_emergencystop */
#define default_d_emergencystop_TM_RBC_conversions_legacy 0

/* TM_RBC_conversions_legacy::default_m_version */
#define default_m_version_TM_RBC_conversions_legacy M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS

/* TM_RBC_conversions_legacy::default_radioDevice */
#define default_radioDevice_TM_RBC_conversions_legacy 0

/* TM_RBC_conversions_legacy::default_receivedSystemTime */
#define default_receivedSystemTime_TM_RBC_conversions_legacy 0

/* US_Integration_June::no_packets */
extern const CompressedPackets_T_Common_Types_Pkg no_packets_US_Integration_June;

/* Common_Types_Pkg::cMetadataArraySize */
#define cMetadataArraySize_Common_Types_Pkg cDIM_MaxRMessages_Common_Types_Pkg

/* Common_Types_Pkg::cDIM_MaxRMessages */
#define cDIM_MaxRMessages_Common_Types_Pkg 30

/* Common_Types_Pkg::cDIM_MaxDataElementsInRMessage */
#define cDIM_MaxDataElementsInRMessage_Common_Types_Pkg 500

/* US_Integration_June::no_message */
extern const M_TrackTrain_Radio_T_TM_radio_messages no_message_US_Integration_June;

#endif /* _KCG_CONSTS_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_consts.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */
#ifndef _KCG_CONSTS_H_
#define _KCG_CONSTS_H_

#include "kcg_types.h"

/* Balises426::BG364 */
extern const BaliseGroupData_Basics BG364_Balises426;

/* Balises426::BG367 */
extern const BaliseGroupData_Basics BG367_Balises426;

/* Balises426::BG368 */
extern const BaliseGroupData_Basics BG368_Balises426;

/* Balises426::BG366 */
extern const BaliseGroupData_Basics BG366_Balises426;

/* Balises426::BG369 */
extern const BaliseGroupData_Basics BG369_Balises426;

/* Balises426::BG365 */
extern const BaliseGroupData_Basics BG365_Balises426;

/* Balises426::BG341 */
extern const BaliseGroupData_Basics BG341_Balises426;

/* TM::DEFAULT_BTMMessage */
extern const CompressedBaliseMessage_TM DEFAULT_BTMMessage_TM;

/* Balises426::BG364_header_B1 */
extern const BaliseTelegramHeader_int_T_TM BG364_header_B1_Balises426;

/* Balises426::BG364_header_B0 */
extern const BaliseTelegramHeader_int_T_TM BG364_header_B0_Balises426;

/* Packets426::BG364_P005_00A_L1 */
extern const P005_trackside_int_T_TM BG364_P005_00A_L1_Packets426;

/* Balises426::BG367_header_B0 */
extern const BaliseTelegramHeader_int_T_TM BG367_header_B0_Balises426;

/* Balises426::BG367_header_B1 */
extern const BaliseTelegramHeader_int_T_TM BG367_header_B1_Balises426;

/* Balises426::BG368_header_B1 */
extern const BaliseTelegramHeader_int_T_TM BG368_header_B1_Balises426;

/* Balises426::BG368_header_B0 */
extern const BaliseTelegramHeader_int_T_TM BG368_header_B0_Balises426;

/* Balises426::BG366_header_B1 */
extern const BaliseTelegramHeader_int_T_TM BG366_header_B1_Balises426;

/* Balises426::BG369_header_B1 */
extern const BaliseTelegramHeader_int_T_TM BG369_header_B1_Balises426;

/* Balises426::BG369_header_B0 */
extern const BaliseTelegramHeader_int_T_TM BG369_header_B0_Balises426;

/* Balises426::BG365_header_B0 */
extern const BaliseTelegramHeader_int_T_TM BG365_header_B0_Balises426;

/* Balises426::BG365_header_B1 */
extern const BaliseTelegramHeader_int_T_TM BG365_header_B1_Balises426;

/* Balises426::BG341_header_B0 */
extern const BaliseTelegramHeader_int_T_TM BG341_header_B0_Balises426;

/* Balises426::BG341_header_B1 */
extern const BaliseTelegramHeader_int_T_TM BG341_header_B1_Balises426;

/* InfraLib::Half_Distance_Balises_in_BG */
#define Half_Distance_Balises_in_BG_InfraLib (Distance_Balises_in_BG_InfraLib / 2.0)

/* InfraLib::ReleaseDelta */
#define ReleaseDelta_InfraLib 1.5

/* InfraLib::Distance_Balises_in_BG */
#define Distance_Balises_in_BG_InfraLib 3.0

/* TM::DIM_scale_eng_location */
#define DIM_scale_eng_location_TM 1.0

/* InfraLib::DEFAULT_BaliseTelegramHd */
extern const BaliseTelegramHeader_int_T_TM DEFAULT_BaliseTelegramHd_InfraLib;

/* TM::DEFAULT_TM_BaliseHeaderInt */
extern const BaliseTelegramHeader_int_T_TM DEFAULT_TM_BaliseHeaderInt_TM;

/* TM::DEFAULT_Packets */
extern const CompressedPackets_T_Common_Types_Pkg DEFAULT_Packets_TM;

/* US_Integration_June::no_packets */
extern const CompressedPackets_T_Common_Types_Pkg no_packets_US_Integration_June;

/* US_Integration_June::no_message */
extern const M_TrackTrain_Radio_T_TM_radio_messages no_message_US_Integration_June;

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

/* TM_conversions::DIM_D_max_neg */
#define DIM_D_max_neg_TM_conversions (- 32768)

/* TM_conversions::DIM_D_max */
#define DIM_D_max_TM_conversions 32767

/* TM_conversions::DIM_D_min */
#define DIM_D_min_TM_conversions 0

/* TM_conversions::INT_M_ACK_acknowledgement */
#define INT_M_ACK_acknowledgement_TM_conversions 1

/* TM_conversions::INT_M_ACK_no_acknowledgement */
#define INT_M_ACK_no_acknowledgement_TM_conversions 0

/* TM_conversions::ENUM_M_ACK_acknowledgement */
#define ENUM_M_ACK_acknowledgement_TM_conversions M_ACK_Acknowledgement_required

/* TM_conversions::ENUM_M_ACK_no_acknowledgement */
#define ENUM_M_ACK_no_acknowledgement_TM_conversions M_ACK_No_acknowledgement_required

/* TM_RBC_conversions::default_header */
extern const Radio_TrackTrain_Header_T_Radio_Types_Pkg default_header_TM_RBC_conversions;

/* TM_RBC_conversions::default_t_train_reference */
#define default_t_train_reference_TM_RBC_conversions 0.0

/* TM_RBC_conversions::default_nid_em */
#define default_nid_em_TM_RBC_conversions 0

/* TM_RBC_conversions::default_q_scale */
#define default_q_scale_TM_RBC_conversions Q_SCALE_1_m_scale

/* TM_RBC_conversions::default_d_sr */
#define default_d_sr_TM_RBC_conversions 0

/* TM_RBC_conversions::default_t_sh_rqst */
#define default_t_sh_rqst_TM_RBC_conversions 0.0

/* TM_RBC_conversions::default_d_ref */
#define default_d_ref_TM_RBC_conversions 0

/* TM_RBC_conversions::default_q_dir */
#define default_q_dir_TM_RBC_conversions Q_DIR_Reverse

/* TM_RBC_conversions::default_d_emergencystop */
#define default_d_emergencystop_TM_RBC_conversions 0

/* TM_RBC_conversions::default_radioDevice */
#define default_radioDevice_TM_RBC_conversions 0

/* TM_RBC_conversions::default_receivedSystemTime */
#define default_receivedSystemTime_TM_RBC_conversions 0

/* TM_RBC_conversions::default_m_version */
#define default_m_version_TM_RBC_conversions M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS

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

/* Messages_426::LRBG_355_D_00089_4_M015 */
extern const M_015_int_T_TM_radio_messages LRBG_355_D_00089_4_M015_Messages_426;

/* Messages_426::LRBG_356_D_00048_5_M015 */
extern const M_015_int_T_TM_radio_messages LRBG_356_D_00048_5_M015_Messages_426;

/* Messages_426::LRBG_358_D_00123_1_M015 */
extern const M_015_int_T_TM_radio_messages LRBG_358_D_00123_1_M015_Messages_426;

/* Messages_426::LRBG_360_D_00249_2_M015 */
extern const M_015_int_T_TM_radio_messages LRBG_360_D_00249_2_M015_Messages_426;

/* Messages_426::LRBG_362_D_00124_9_M015 */
extern const M_015_int_T_TM_radio_messages LRBG_362_D_00124_9_M015_Messages_426;

/* Packets426::LRBG362_P021_1 */
extern const P021_trackside_int_T_TM LRBG362_P021_1_Packets426;

/* Packets426::LRBG362_P027_1 */
extern const P027V1_trackside_int_T_TM_baseline2 LRBG362_P027_1_Packets426;

/* Packets426::LRBG362_P005_1 */
extern const P005_trackside_int_T_TM LRBG362_P005_1_Packets426;

/* Packets426::LRBG362_P065_1 */
extern const P065_trackside_int_T_TM LRBG362_P065_1_Packets426;

/* Packets426::LRBG362_P015_1 */
extern const P015_trackside_int_T_TM LRBG362_P015_1_Packets426;

/* Messages_426::LRBG_362_D_00230_7_M003 */
extern const M_003_int_T_TM_radio_messages LRBG_362_D_00230_7_M003_Messages_426;

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

/* Packets426::BGXXX_P255 */
extern const P255_trackside_int_T_TM BGXXX_P255_Packets426;

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

/* TM::DIM_MaxElementsPacket005 */
#define DIM_MaxElementsPacket005_TM ((DIM_N_ITER_TM + 1) * 7 + 5)

/* TM::DEFAULT_P005_sections_array_flat */
extern const P005_sections_array_flat_T_TM DEFAULT_P005_sections_array_flat_TM;

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

/* TM::DIM_MaxElementsPacket065 */
#define DIM_MaxElementsPacket065_TM 9

/* TM::DIM_MaxElementsPacket255 */
#define DIM_MaxElementsPacket255_TM 1

/* TM::INT_Q_DIR_both */
#define INT_Q_DIR_both_TM 2

/* TM::INT_M_VERSION_2_0 */
#define INT_M_VERSION_2_0_TM 32

/* TM::DIM_MaxElementsPacket015 */
#define DIM_MaxElementsPacket015_TM (DIM_N_ITER_TM * 4 + 14 + 1 + 6)

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

/* TM::ERROR_nid_packet */
#define ERROR_nid_packet_TM (- 1)

/* TM_lib_internal::DIM_offset_metadata_nid_packet */
#define DIM_offset_metadata_nid_packet_TM_lib_internal 1000000

/* TM_lib_internal::DIM_offset_metadata_m_version */
#define DIM_offset_metadata_m_version_TM_lib_internal 1000

/* TM_lib_internal::DIM_offset_metadata_id */
#define DIM_offset_metadata_id_TM_lib_internal 1

/* TM_lib_internal::DIM_offset_metadata_q_dir */
#define DIM_offset_metadata_q_dir_TM_lib_internal 100000

/* TM::DEFAULT_P015_sections_array_flat */
extern const P015_sections_array_flat_T_TM DEFAULT_P015_sections_array_flat_TM;

/* TM::DIM_N_ITER */
#define DIM_N_ITER_TM 32

/* TM::DEFAULT_Headers */
extern const Metadata_T_Common_Types_Pkg DEFAULT_Headers_TM;

/* TM::DIM_MaxRMessages */
#define DIM_MaxRMessages_TM 30

/* Messages_426::LRBG_364_D_00091_1_M003 */
extern const M_003_int_T_TM_radio_messages LRBG_364_D_00091_1_M003_Messages_426;

/* Messages_426::LRBG_369_D_00231_3_M015 */
extern const M_015_int_T_TM_radio_messages LRBG_369_D_00231_3_M015_Messages_426;

/* Messages_426::LRBG_341_D_00134_4_M015 */
extern const M_015_int_T_TM_radio_messages LRBG_341_D_00134_4_M015_Messages_426;

/* TM_conversions::INT_Q_UPDOWN_downlink */
#define INT_Q_UPDOWN_downlink_TM_conversions 0

/* TM_conversions::INT_Q_UPDOWN_uplink */
#define INT_Q_UPDOWN_uplink_TM_conversions 1

/* TM_conversions::ENUM_Q_UPDOWN_downlink */
#define ENUM_Q_UPDOWN_downlink_TM_conversions Q_UPDOWN_Down_link_telegram

/* TM_conversions::ENUM_Q_UPDOWN_uplink */
#define ENUM_Q_UPDOWN_uplink_TM_conversions Q_UPDOWN_Up_link_telegram

/* TM_conversions::INT_M_VERSION_previous_M */
#define INT_M_VERSION_previous_M_TM_conversions 15

/* TM_conversions::INT_M_VERSION_1_0 */
#define INT_M_VERSION_1_0_TM_conversions 16

/* TM_conversions::INT_M_VERSION_1_1 */
#define INT_M_VERSION_1_1_TM_conversions 17

/* TM_conversions::INT_M_VERSION_2_0 */
#define INT_M_VERSION_2_0_TM_conversions 32

/* TM_conversions::ENUM_M_VERSION_Previous_versions */
#define ENUM_M_VERSION_Previous_versions_TM_conversions M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS

/* TM_conversions::ENUM_M_VERSION_Version_2_0 */
#define ENUM_M_VERSION_Version_2_0_TM_conversions M_VERSION_Version_2_0_introduced_in_SRS_3_3_0

/* TM_conversions::ENUM_M_VERSION_Version_1_1 */
#define ENUM_M_VERSION_Version_1_1_TM_conversions M_VERSION_Version_1_1_introduced_in_SRS_3_3_0

/* TM_conversions::ENUM_M_VERSION_Version_1_0 */
#define ENUM_M_VERSION_Version_1_0_TM_conversions M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0

/* TM_conversions::INT_Q_MEDIA_Balise */
#define INT_Q_MEDIA_Balise_TM_conversions 0

/* TM_conversions::INT_Q_MEDIA_Loop */
#define INT_Q_MEDIA_Loop_TM_conversions 1

/* TM_conversions::ENUM_Q_MEDIA_Balise */
#define ENUM_Q_MEDIA_Balise_TM_conversions Q_MEDIA_Balise

/* TM_conversions::ENUM_Q_MEDIA_Loop */
#define ENUM_Q_MEDIA_Loop_TM_conversions Q_MEDIA_Loop

/* TM_conversions::INT_N_PIG_1st */
#define INT_N_PIG_1st_TM_conversions 0

/* TM_conversions::INT_N_PIG_2nd */
#define INT_N_PIG_2nd_TM_conversions 1

/* TM_conversions::INT_N_PIG_3rd */
#define INT_N_PIG_3rd_TM_conversions 2

/* TM_conversions::INT_N_PIG_4th */
#define INT_N_PIG_4th_TM_conversions 3

/* TM_conversions::INT_N_PIG_5th */
#define INT_N_PIG_5th_TM_conversions 4

/* TM_conversions::INT_N_PIG_6th */
#define INT_N_PIG_6th_TM_conversions 5

/* TM_conversions::INT_N_PIG_7th */
#define INT_N_PIG_7th_TM_conversions 6

/* TM_conversions::INT_N_PIG_8th */
#define INT_N_PIG_8th_TM_conversions 7

/* TM_conversions::ENUM_N_PIG_8th */
#define ENUM_N_PIG_8th_TM_conversions N_PIG_I_am_the_8th

/* TM_conversions::ENUM_N_PIG_7th */
#define ENUM_N_PIG_7th_TM_conversions N_PIG_I_am_the_7th

/* TM_conversions::ENUM_N_PIG_6th */
#define ENUM_N_PIG_6th_TM_conversions N_PIG_I_am_the_6th

/* TM_conversions::ENUM_N_PIG_5th */
#define ENUM_N_PIG_5th_TM_conversions N_PIG_I_am_the_5th

/* TM_conversions::ENUM_N_PIG_4th */
#define ENUM_N_PIG_4th_TM_conversions N_PIG_I_am_the_4th

/* TM_conversions::ENUM_N_PIG_3rd */
#define ENUM_N_PIG_3rd_TM_conversions N_PIG_I_am_the_3rd

/* TM_conversions::ENUM_N_PIG_2nd */
#define ENUM_N_PIG_2nd_TM_conversions N_PIG_I_am_the_2nd

/* TM_conversions::ENUM_N_PIG_1st */
#define ENUM_N_PIG_1st_TM_conversions N_PIG_I_am_the_1st

/* TM_conversions::INT_N_TOTAL_1 */
#define INT_N_TOTAL_1_TM_conversions 0

/* TM_conversions::INT_N_TOTAL_2 */
#define INT_N_TOTAL_2_TM_conversions 1

/* TM_conversions::INT_N_TOTAL_3 */
#define INT_N_TOTAL_3_TM_conversions 2

/* TM_conversions::INT_N_TOTAL_4 */
#define INT_N_TOTAL_4_TM_conversions 3

/* TM_conversions::INT_N_TOTAL_5 */
#define INT_N_TOTAL_5_TM_conversions 4

/* TM_conversions::INT_N_TOTAL_6 */
#define INT_N_TOTAL_6_TM_conversions 5

/* TM_conversions::INT_N_TOTAL_7 */
#define INT_N_TOTAL_7_TM_conversions 6

/* TM_conversions::INT_N_TOTAL_8 */
#define INT_N_TOTAL_8_TM_conversions 7

/* TM_conversions::ENUM_N_TOTAL_8 */
#define ENUM_N_TOTAL_8_TM_conversions N_TOTAL_8_balises_in_the_group

/* TM_conversions::ENUM_N_TOTAL_7 */
#define ENUM_N_TOTAL_7_TM_conversions N_TOTAL_7_balises_in_the_group

/* TM_conversions::ENUM_N_TOTAL_6 */
#define ENUM_N_TOTAL_6_TM_conversions N_TOTAL_6_balises_in_the_group

/* TM_conversions::ENUM_N_TOTAL_5 */
#define ENUM_N_TOTAL_5_TM_conversions N_TOTAL_5_balises_in_the_group

/* TM_conversions::ENUM_N_TOTAL_4 */
#define ENUM_N_TOTAL_4_TM_conversions N_TOTAL_4_balises_in_the_group

/* TM_conversions::ENUM_N_TOTAL_3 */
#define ENUM_N_TOTAL_3_TM_conversions N_TOTAL_3_balises_in_the_group

/* TM_conversions::ENUM_N_TOTAL_2 */
#define ENUM_N_TOTAL_2_TM_conversions N_TOTAL_2_balises_in_the_group

/* TM_conversions::ENUM_N_TOTAL_1 */
#define ENUM_N_TOTAL_1_TM_conversions N_TOTAL_1_balise_in_the_group

/* TM_conversions::INT_M_DUP_duplicate_of_next */
#define INT_M_DUP_duplicate_of_next_TM_conversions 1

/* TM_conversions::INT_M_DUP_duplicate_of_previous */
#define INT_M_DUP_duplicate_of_previous_TM_conversions 2

/* TM_conversions::INT_M_DUP_no_duplicates */
#define INT_M_DUP_no_duplicates_TM_conversions 0

/* TM_conversions::ENUM_M_DUP_duplicate_of_next */
#define ENUM_M_DUP_duplicate_of_next_TM_conversions _4_M_DUP_This_balise_is_a_duplicate_of_the_next_balise

/* TM_conversions::ENUM_M_DUP_no_duplicates */
#define ENUM_M_DUP_no_duplicates_TM_conversions M_DUP_No_duplicates

/* TM_conversions::ENUM_M_DUP_duplicate_of_previous */
#define ENUM_M_DUP_duplicate_of_previous_TM_conversions M_DUP_This_balise_is_a_duplicate_of_the_previous_balise

/* TM_conversions::INT_Q_LINK_linked */
#define INT_Q_LINK_linked_TM_conversions 1

/* TM_conversions::INT_Q_LINK_unlinked */
#define INT_Q_LINK_unlinked_TM_conversions 0

/* TM_conversions::ENUM_Q_LINK_linked */
#define ENUM_Q_LINK_linked_TM_conversions Q_LINK_Linked

/* TM_conversions::ENUM_Q_LINK_unlinked */
#define ENUM_Q_LINK_unlinked_TM_conversions Q_LINK_Unlinked

/* Common_Types_Pkg::cMetadataArraySize */
#define cMetadataArraySize_Common_Types_Pkg cDIM_MaxRMessages_Common_Types_Pkg

/* Common_Types_Pkg::cDIM_MaxRMessages */
#define cDIM_MaxRMessages_Common_Types_Pkg 30

/* Common_Types_Pkg::cDIM_MaxDataElementsInRMessage */
#define cDIM_MaxDataElementsInRMessage_Common_Types_Pkg 500

#endif /* _KCG_CONSTS_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_consts.h
** Generation date: 2015-07-07T00:28:47
*************************************************************$ */


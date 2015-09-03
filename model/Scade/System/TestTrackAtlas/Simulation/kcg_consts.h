/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */
#ifndef _KCG_CONSTS_H_
#define _KCG_CONSTS_H_

#include "kcg_types.h"

/* cBGHeader */
extern const BG_Header_T_BG_Types_Pkg cBGHeader;

/* cRadioMetadata */
extern const RadioMetadata_T_Common_Types_Pkg cRadioMetadata;

/* cSource */
#define cSource msrc_Euroradio_Common_Types_Pkg

/* cSendingRBC */
extern const RBC_Id_T_Common_Types_Pkg cSendingRBC;

/* TrackAtlasTypes::DEFAULT_GradientSection */
extern const Gradient_section_t_TrackAtlasTypes DEFAULT_GradientSection_TrackAtlasTypes;

/* TA_MRSP::DIM_maxSSP_individual_sections */
#define DIM_maxSSP_individual_sections_TA_MRSP 33

/* TM::DEFAULT_CompressedPackets */
extern const CompressedPacketData_T_Common_Types_Pkg DEFAULT_CompressedPackets_TM;

/* TM::DEFAULT_PHeader */
extern const MetadataElement_T_Common_Types_Pkg DEFAULT_PHeader_TM;

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

/* TA_Lib_internal::ENUM_MsgSource_Balise */
#define ENUM_MsgSource_Balise_TA_Lib_internal msrc_Eurobalise_Common_Types_Pkg

/* TA_Lib_internal::ENUM_MsgSource_Euroradio */
#define ENUM_MsgSource_Euroradio_TA_Lib_internal msrc_Euroradio_Common_Types_Pkg

/* TrackAtlasTypes::DEFAULT_GradientProfile */
extern const GradientProfile_t_TrackAtlasTypes DEFAULT_GradientProfile_TrackAtlasTypes;

/* TrackAtlasTypes::GradientMaxSections */
#define GradientMaxSections_TrackAtlasTypes 50

/* BG_Types_Pkg::cMaxNoOfLinkedBGs */
#define cMaxNoOfLinkedBGs_BG_Types_Pkg 4

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

/* Messages_426::LRBG_351_D_00054_9_M003 */
extern const M_003_int_T_TM_radio_messages LRBG_351_D_00054_9_M003_Messages_426;

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

/* TM_baseline2::DIM_MaxElementsPacket003V1 */
#define DIM_MaxElementsPacket003V1_TM_baseline2 (DIM_N_ITER_TM * 1 + 6 + 18)

/* TM::DIM_MaxElementsPacket041 */
#define DIM_MaxElementsPacket041_TM ((DIM_N_ITER_TM + 1) * 3 + 6)

/* TM::DEFAULT_P041_sections_array_flat */
extern const P041_sections_array_flat_T_TM DEFAULT_P041_sections_array_flat_TM;

/* Messages_426::LRBG_354_D_00275_3_M003 */
extern const M_003_int_T_TM_radio_messages LRBG_354_D_00275_3_M003_Messages_426;

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

/* TM::DIM_MaxRMessages */
#define DIM_MaxRMessages_TM 30

/* TM::DEFAULT_Headers */
extern const Metadata_T_Common_Types_Pkg DEFAULT_Headers_TM;

/* TM::INT_M_VERSION_2_0 */
#define INT_M_VERSION_2_0_TM 32

/* TM::DIM_MaxElementsPacket015 */
#define DIM_MaxElementsPacket015_TM (DIM_N_ITER_TM * 4 + 15 + 1 + 6)

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

/* Messages_426::LRBG_364_D_00091_1_M003 */
extern const M_003_int_T_TM_radio_messages LRBG_364_D_00091_1_M003_Messages_426;

/* TM_conversions::INT_Q_ORIENTATION_reverse */
#define INT_Q_ORIENTATION_reverse_TM_conversions 0

/* TM_conversions::INT_Q_ORIENTATION_nominal */
#define INT_Q_ORIENTATION_nominal_TM_conversions 1

/* TM_conversions::ENUM_Q_ORIENTATION_reverse */
#define ENUM_Q_ORIENTATION_reverse_TM_conversions _4_Q_ORIENTATION_The_balise_group_has_been_passed_by_the_train_in_reverse_direction

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
** Generation date: 2015-08-28T11:32:44
*************************************************************$ */


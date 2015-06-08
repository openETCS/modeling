/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TracksideDynamicModel/TestTracks/UtrechtAmsterdam_oETCS/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-08T18:54:31
*************************************************************$ */
#ifndef _KCG_CONSTS_H_
#define _KCG_CONSTS_H_

#include "kcg_types.h"

/* TM::DEFAULT_BTMMessage */
extern const CompressedBaliseMessage_TM DEFAULT_BTMMessage_TM;

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

/* Balises426::BG364_header_B1 */
extern const BaliseTelegramHeader_int_T_TM BG364_header_B1_Balises426;

/* Balises426::BG364_header_B0 */
extern const BaliseTelegramHeader_int_T_TM BG364_header_B0_Balises426;

/* TM::DEFAULT_P005_sections_array_flat */
extern const P005_sections_array_flat_T_TM DEFAULT_P005_sections_array_flat_TM;

/* TM::DEFAULT_Headers */
extern const Metadata_T_Common_Types_Pkg DEFAULT_Headers_TM;

/* Packets426::BG364_P005 */
extern const P005_trackside_int_T_TM BG364_P005_Packets426;

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
#define ENUM_M_DUP_duplicate_of_next_TM_conversions _2_M_DUP_This_balise_is_a_duplicate_of_the_next_balise

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

/* TM::DIM_MaxElementsPacket005 */
#define DIM_MaxElementsPacket005_TM ((DIM_N_ITER_TM + 1) * 7 + 5)

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

/* TM_lib_internal::DEFAULT_P005_OBU_section */
extern const P005_section_enum_T_TM DEFAULT_P005_OBU_section_TM_lib_internal;

/* TM_conversions::DIM_D_min */
#define DIM_D_min_TM_conversions 0

/* TM_conversions::DIM_D_max */
#define DIM_D_max_TM_conversions 32767

/* TM_conversions::INT_Q_NEWCOUNTRY_same */
#define INT_Q_NEWCOUNTRY_same_TM_conversions 0

/* TM_conversions::INT_Q_NEWCOUNTRY_not_same */
#define INT_Q_NEWCOUNTRY_not_same_TM_conversions 1

/* TM_conversions::ENUM_Q_NEWCOUNTRY_not_same */
#define ENUM_Q_NEWCOUNTRY_not_same_TM_conversions Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows

/* TM_conversions::ENUM_Q_NEWCOUNTRY_same */
#define ENUM_Q_NEWCOUNTRY_same_TM_conversions Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows

/* TM_conversions::INT_Q_LINKREACTION_Train_trip */
#define INT_Q_LINKREACTION_Train_trip_TM_conversions 0

/* TM_conversions::INT_Q_LINKREACTION_Apply_servicebrake */
#define INT_Q_LINKREACTION_Apply_servicebrake_TM_conversions 1

/* TM_conversions::INT_Q_LINKREACTION_No_Reaction */
#define INT_Q_LINKREACTION_No_Reaction_TM_conversions 2

/* TM_conversions::ENUM_Q_LINKREACTION_Train_trip */
#define ENUM_Q_LINKREACTION_Train_trip_TM_conversions Q_LINKREACTION_Train_trip

/* TM_conversions::ENUM_Q_LINKREACTION_No_Reaction */
#define ENUM_Q_LINKREACTION_No_Reaction_TM_conversions Q_LINKREACTION_No_Reaction

/* TM_conversions::ENUM_Q_LINKREACTION_Apply_servicebrake */
#define ENUM_Q_LINKREACTION_Apply_servicebrake_TM_conversions Q_LINKREACTION_Apply_service_brake

/* TM_conversions::INT_Q_LINKORIENTATION_nominal */
#define INT_Q_LINKORIENTATION_nominal_TM_conversions 1

/* TM_conversions::INT_Q_LINKORIENTATION_reverse */
#define INT_Q_LINKORIENTATION_reverse_TM_conversions 0

/* TM_conversions::ENUM_Q_LINKORIENTATION_reverse */
#define ENUM_Q_LINKORIENTATION_reverse_TM_conversions _1_Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction

/* TM_conversions::ENUM_Q_LINKORIENTATION_nominal */
#define ENUM_Q_LINKORIENTATION_nominal_TM_conversions Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction

/* TM_lib_internal::DIM_P005_n_sections */
#define DIM_P005_n_sections_TM_lib_internal 7

/* TM::DEFAULT_CompressedPackets */
extern const CompressedPacketData_T_Common_Types_Pkg DEFAULT_CompressedPackets_TM;

/* TM::DIM_MaxRMessages */
#define DIM_MaxRMessages_TM 30

/* TM::DEFAULT_PHeader */
extern const MetadataElement_T_Common_Types_Pkg DEFAULT_PHeader_TM;

/* TM::DIM_N_ITER */
#define DIM_N_ITER_TM 32

/* Common_Types_Pkg::cMetadataArraySize */
#define cMetadataArraySize_Common_Types_Pkg cDIM_MaxRMessages_Common_Types_Pkg

/* Common_Types_Pkg::cDIM_MaxRMessages */
#define cDIM_MaxRMessages_Common_Types_Pkg 30

/* Common_Types_Pkg::cDIM_MaxDataElementsInRMessage */
#define cDIM_MaxDataElementsInRMessage_Common_Types_Pkg 500

/* BG_Types_Pkg::cMaxNoOfLinkedBGs */
#define cMaxNoOfLinkedBGs_BG_Types_Pkg 4

#endif /* _KCG_CONSTS_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_consts.h
** Generation date: 2015-06-08T18:54:31
*************************************************************$ */


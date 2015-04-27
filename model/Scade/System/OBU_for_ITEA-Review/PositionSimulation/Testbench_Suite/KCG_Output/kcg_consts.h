/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */
#ifndef _KCG_CONSTS_H_
#define _KCG_CONSTS_H_

#include "kcg_types.h"

/* cEmptyP3NationalValues */
extern const P3_NationalValues_T_Packet_Types_Pkg cEmptyP3NationalValues;

/* cEmptyLocationBasedEvents */
extern const LocationBasedEvents_T_ProvidePositionReport_Pkg cEmptyLocationBasedEvents;

/* cEmptyRadioNetworkIds */
extern const radioNetWorkIDs_T_MoRC_Pck cEmptyRadioNetworkIds;

/* cOnboardTelephoneNumbers */
extern const PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg cOnboardTelephoneNumbers;

/* cTrainProperties */
extern const trainProperties_T_TrainPosition_Types_Pck cTrainProperties;

/* cEmtpyIsolationStatus */
extern const Isolation_Status_T_TIU_Types_Pkg cEmtpyIsolationStatus;

/* cEmptyBrakeCommand */
extern const Brake_command_T_TIU_Types_Pkg cEmptyBrakeCommand;

/* cEmptyBrakeInhibitionCommand */
extern const Brake_inhibition_command_T_TIU_Types_Pkg cEmptyBrakeInhibitionCommand;

/* cEmptyChangeTractionSystem */
extern const Change_traction_system_T_TIU_Types_Pkg cEmptyChangeTractionSystem;

/* cPassengerDoorControlInfo */
extern const Passenger_door_control_info_T_TIU_Types_Pkg cPassengerDoorControlInfo;

/* cEmptyChangeOfAllowedCurrentConsumption */
extern const Change_of_allowed_current_consumption_T_TIU_Types_Pkg cEmptyChangeOfAllowedCurrentConsumption;

/* cEmptyDMIMessage */
extern const EVC_to_DMI_Message_T_API_DMI_Pkg cEmptyDMIMessage;

/* cEmptyDMIAdhesionFactorData */
extern const DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg cEmptyDMIAdhesionFactorData;

/* cEmptyDMITrainRunningNumber */
extern const DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg cEmptyDMITrainRunningNumber;

/* cEmptyDMIDriverIdentifier */
extern const DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg cEmptyDMIDriverIdentifier;

/* cEmptyDMIRadioNet */
extern const DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg cEmptyDMIRadioNet;

/* cEmptyDMI_EVCLevelData */
extern const DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg cEmptyDMI_EVCLevelData;

/* cEmptyDMIDisplayControl */
extern const DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg cEmptyDMIDisplayControl;

/* cEmptyDMISystemVersion */
extern const DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg cEmptyDMISystemVersion;

/* cDMIIdentifierRequest */
extern const DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg cDMIIdentifierRequest;

/* cEmptyDMITrackDescription */
extern const DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg cEmptyDMITrackDescription;

/* cEmptyDMITextMessage */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cEmptyDMITextMessage;

/* cEmptyDMITrainData */
extern const DMI_Train_Data_T_DMI_Messages_Bothways_Pkg cEmptyDMITrainData;

/* cEmptyDMIRadioNetData */
extern const DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg cEmptyDMIRadioNetData;

/* cEmptyDMIIconAck */
extern const DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg cEmptyDMIIconAck;

/* cEmptyTrainTrackMessage */
extern const Radio_TrainTrack_Message_T_Radio_Types_Pkg cEmptyTrainTrackMessage;

/* cEmptyDMIEVCcodedTrainData */
extern const DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg cEmptyDMIEVCcodedTrainData;

/* cEmptySafeRadioConnectionStatus */
#define cEmptySafeRadioConnectionStatus srcs_ConnectionLost_SetupFailed_MoRC_Pck

/* cEmptyDMIMA */
extern const movementAuthorityForDMI_T_DMI_Types_Pkg cEmptyDMIMA;

/* cEmptyLevelTr */
#define cEmptyLevelTr M_LEVELTR_Level_2

/* cEmptyDMI_toModeAndLevel */
extern const DMI_To_Modes_T_DMI_Types_Pkg cEmptyDMI_toModeAndLevel;

/* cEmptyDMIMorePositions */
extern const morePositions_T_DMI_Types_Pkg cEmptyDMIMorePositions;

/* cP3NationalValuesUtrechtAmsterdam */
extern const P3_NationalValues_T_Packet_Types_Pkg cP3NationalValuesUtrechtAmsterdam;

/* cTractionNotCutOff */
extern const Type_I_train_commands_T_TIU_Types_Pkg cTractionNotCutOff;

/* cTractionCutOff */
extern const Type_I_train_commands_T_TIU_Types_Pkg cTractionCutOff;

/* cSDMTestMRSP */
extern const MRSP_Profile_t cSDMTestMRSP;

/* cSDMTestMA */
extern const MAs_t cSDMTestMA;

/* cEnableModeManagement */
#define cEnableModeManagement kcg_true

/* cEmptyRadioCmd */
extern const radioManagementMessage_T_Common_Types_Pkg cEmptyRadioCmd;

/* cEmptyDMIStatus */
extern const DMI_EVC_status_T_DMI_Types_Pkg cEmptyDMIStatus;

/* cEmptyRadioCommunicationMessage */
extern const API_EuroRadioOutput_T_API_RadioCommunication_Pkg cEmptyRadioCommunicationMessage;

/* cInitialOdometrieValue */
extern const odometry_T_Obu_BasicTypes_Pkg cInitialOdometrieValue;

/* cDeltaSimulationTime */
#define cDeltaSimulationTime 200

/* cOdometryFactors */
extern const odometryFactors_T cOdometryFactors;

/* cRBCMessage32 */
extern const API_TrackSideInput_T_API_Msg_Pkg cRBCMessage32;

/* cAPITrackSideMessage */
extern const API_TrackSideInput_T_API_Msg_Pkg cAPITrackSideMessage;

/* MoRC_Pck::cMobileHWStatus_Registered */
extern const mobileHWStatus_Type_MoRC_Pck cMobileHWStatus_Registered_MoRC_Pck;

/* MoRC_Pck::cMobileHWStatus_notRegistered */
extern const mobileHWStatus_Type_MoRC_Pck cMobileHWStatus_notRegistered_MoRC_Pck;

/* MoRC_Pck::cMobileHWStatus_Connected */
extern const mobileHWStatus_Type_MoRC_Pck cMobileHWStatus_Connected_MoRC_Pck;

/* MoRC_Pck::cMobileHWStatus_Disconnected */
extern const mobileHWStatus_Type_MoRC_Pck cMobileHWStatus_Disconnected_MoRC_Pck;

/* cICE3TrainData */
extern const trainData_T_TIU_Types_Pkg cICE3TrainData;

/* cEmtpyDataEntryType */
#define cEmtpyDataEntryType fixed_entry_type_TIU_Types_Pkg

/* cEmptyBrakeStatus */
extern const Brake_status_T_TIU_Types_Pkg cEmptyBrakeStatus;

/* cEmptyType_I_train_and_brake_inhibition_with_distance_T */
extern const Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg cEmptyType_I_train_and_brake_inhibition_with_distance_T;

/* cEmptyBrakeSignalCommand */
#define cEmptyBrakeSignalCommand brake_signal_command_not_defined_TIU_Types_Pkg

/* DEFAULT_Linked_BGs */
extern const LinkedBGs_T_BG_Types_Pkg DEFAULT_Linked_BGs;

/* INT_Q_UPDOWN_uplink */
#define INT_Q_UPDOWN_uplink 1

/* ENUM_Q_UPDOWN_uplink_Q_UPDOWN */
#define ENUM_Q_UPDOWN_uplink_Q_UPDOWN Q_UPDOWN_Up_link_telegram

/* ENUM_Q_UPDOWN_downlink_Q_UPDOWN */
#define ENUM_Q_UPDOWN_downlink_Q_UPDOWN Q_UPDOWN_Down_link_telegram

/* INT_M_VERSION_previous_M */
#define INT_M_VERSION_previous_M 15

/* ENUM_M_VERSION_previous_M_VERSION */
#define ENUM_M_VERSION_previous_M_VERSION M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS

/* INT_M_VERSION_1_0 */
#define INT_M_VERSION_1_0 16

/* ENUM_M_VERSION_1_0_M_VERSION */
#define ENUM_M_VERSION_1_0_M_VERSION M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0

/* INT_M_VERSION_2_0 */
#define INT_M_VERSION_2_0 32

/* ENUM_M_VERSION_2_0_M_VERSION */
#define ENUM_M_VERSION_2_0_M_VERSION M_VERSION_Version_2_0_introduced_in_SRS_3_3_0

/* ENUM_M_VERSION_1_1_M_VERSION */
#define ENUM_M_VERSION_1_1_M_VERSION M_VERSION_Version_1_1_introduced_in_SRS_3_3_0

/* INT_Q_MEDIA_Balise */
#define INT_Q_MEDIA_Balise 0

/* ENUM_Q_MEDIA_Balise_Q_MEDIA */
#define ENUM_Q_MEDIA_Balise_Q_MEDIA Q_MEDIA_Balise

/* ENUM_Q_MEDIA_Loop_Q_MEDIA */
#define ENUM_Q_MEDIA_Loop_Q_MEDIA Q_MEDIA_Loop

/* ENUM_N_PIG_8th_N_PIG */
#define ENUM_N_PIG_8th_N_PIG N_PIG_I_am_the_8th

/* ENUM_N_PIG_7th_N_PIG */
#define ENUM_N_PIG_7th_N_PIG N_PIG_I_am_the_7th

/* ENUM_N_PIG_6th_N_PIG */
#define ENUM_N_PIG_6th_N_PIG N_PIG_I_am_the_6th

/* ENUM_N_PIG_5th_N_PIG */
#define ENUM_N_PIG_5th_N_PIG N_PIG_I_am_the_5th

/* ENUM_N_PIG_4th_N_PIG */
#define ENUM_N_PIG_4th_N_PIG N_PIG_I_am_the_4th

/* ENUM_N_PIG_3rd_N_PIG */
#define ENUM_N_PIG_3rd_N_PIG N_PIG_I_am_the_3rd

/* ENUM_N_PIG_2nd_N_PIG */
#define ENUM_N_PIG_2nd_N_PIG N_PIG_I_am_the_2nd

/* ENUM_N_PIG_1st_N_PIG */
#define ENUM_N_PIG_1st_N_PIG N_PIG_I_am_the_1st

/* ENUM_N_TOTAL_6_N_TOTAL */
#define ENUM_N_TOTAL_6_N_TOTAL N_TOTAL_6_balises_in_the_group

/* ENUM_N_TOTAL_7_N_TOTAL */
#define ENUM_N_TOTAL_7_N_TOTAL N_TOTAL_7_balises_in_the_group

/* ENUM_N_TOTAL_5_N_TOTAL */
#define ENUM_N_TOTAL_5_N_TOTAL N_TOTAL_5_balises_in_the_group

/* ENUM_N_TOTAL_4_N_TOTAL */
#define ENUM_N_TOTAL_4_N_TOTAL N_TOTAL_4_balises_in_the_group

/* ENUM_N_TOTAL_3_N_TOTAL */
#define ENUM_N_TOTAL_3_N_TOTAL N_TOTAL_3_balises_in_the_group

/* ENUM_N_TOTAL_2_N_TOTAL */
#define ENUM_N_TOTAL_2_N_TOTAL N_TOTAL_2_balises_in_the_group

/* ENUM_N_TOTAL_1_N_TOTAL */
#define ENUM_N_TOTAL_1_N_TOTAL N_TOTAL_1_balise_in_the_group

/* INT_M_DUP_duplicate_of_next */
#define INT_M_DUP_duplicate_of_next 1

/* INT_M_DUP_duplicate_of_previous */
#define INT_M_DUP_duplicate_of_previous 2

/* INT_M_DUP_no_duplicates */
#define INT_M_DUP_no_duplicates 0

/* ENUM_M_DUP_duplicate_of_next */
#define ENUM_M_DUP_duplicate_of_next M_DUP_This_balise_is_a_duplicate_of_the_next_balise

/* ENUM_M_DUP_no_duplicates */
#define ENUM_M_DUP_no_duplicates M_DUP_No_duplicates

/* ENUM_M_DUP_duplicate_of_previous */
#define ENUM_M_DUP_duplicate_of_previous M_DUP_This_balise_is_a_duplicate_of_the_previous_balise

/* INT_Q_LINK_linked */
#define INT_Q_LINK_linked 1

/* ENUM_Q_LINK_linked_Q_LINK */
#define ENUM_Q_LINK_linked_Q_LINK Q_LINK_Linked

/* ENUM_Q_LINK_unlinked_Q_LINK */
#define ENUM_Q_LINK_unlinked_Q_LINK Q_LINK_Unlinked

/* DEFAULT_P003 */
extern const TM_P003_T DEFAULT_P003;

/* DEFAULT_P041 */
extern const TM_P041_T DEFAULT_P041;

/* DEFAULT_P042 */
extern const TM_P042_T DEFAULT_P042;

/* DEFAULT_P045 */
extern const TM_P045 DEFAULT_P045;

/* DEFAULT_P046 */
extern const TM_P046_T DEFAULT_P046;

/* DEFAULT_P072 */
#define DEFAULT_P072 0

/* DEFAULT_P137 */
extern const TM_P137_T DEFAULT_P137;

/* DEFAULT_P255 */
extern const TM_P255_T DEFAULT_P255;

/* DEFAULT_BTMMessage */
extern const TM_CompressedBaliseMessage DEFAULT_BTMMessage;

/* DEFAULT_BaliseMessages */
extern const CompressedPackets_T_Common_Types_Pkg DEFAULT_BaliseMessages;

/* DIM_MaxElementsPacket041 */
#define DIM_MaxElementsPacket041 8

/* DIM_MaxElementsPacket046 */
#define DIM_MaxElementsPacket046 6

/* DIM_MaxElementsPacket042 */
#define DIM_MaxElementsPacket042 7

/* DEFAULT_Headers */
extern const Metadata_T_Common_Types_Pkg DEFAULT_Headers;

/* DIM_MaxElementsPacket255 */
#define DIM_MaxElementsPacket255 2

/* DEFINE_Distance2Balises */
#define DEFINE_Distance2Balises 3.0

/* Balises426::BG352 */
extern const BaliseGroupData_Basics BG352_Balises426;

/* Balises426::BG352_H1 */
extern const TM_BaliseTelegramHeader_int_T BG352_H1_Balises426;

/* Balises426::BG352_H2 */
extern const TM_BaliseTelegramHeader_int_T BG352_H2_Balises426;

/* Balises426::BG353 */
extern const BaliseGroupData_Basics BG353_Balises426;

/* Balises426::BG353_H1 */
extern const TM_BaliseTelegramHeader_int_T BG353_H1_Balises426;

/* Balises426::BG353_H2 */
extern const TM_BaliseTelegramHeader_int_T BG353_H2_Balises426;

/* Balises426::BG354 */
extern const BaliseGroupData_Basics BG354_Balises426;

/* Balises426::BG354_H1 */
extern const TM_BaliseTelegramHeader_int_T BG354_H1_Balises426;

/* Balises426::BG354_H2 */
extern const TM_BaliseTelegramHeader_int_T BG354_H2_Balises426;

/* Balises426::BG351 */
extern const BaliseGroupData_Basics BG351_Balises426;

/* Balises426::BG351_H1 */
extern const TM_BaliseTelegramHeader_int_T BG351_H1_Balises426;

/* Balises426::BG351_H2 */
extern const TM_BaliseTelegramHeader_int_T BG351_H2_Balises426;

/* Balises426::BG355 */
extern const BaliseGroupData_Basics BG355_Balises426;

/* Balises426::BG355_H1 */
extern const TM_BaliseTelegramHeader_int_T BG355_H1_Balises426;

/* Balises426::BG355_H2 */
extern const TM_BaliseTelegramHeader_int_T BG355_H2_Balises426;

/* trackElements_Pkg::cEmptyRadioMsgHeader */
extern const API_RadioMsgHeader_T_API_Msg_Pkg cEmptyRadioMsgHeader_trackElements_Pkg;

/* BRL_Pkg::cpassedBGInit */
extern const passedBG_T_BG_Types_Pkg cpassedBGInit_BRL_Pkg;

/* BG_Types_Pkg::cEmptyBG_Header */
extern const BG_Header_T_BG_Types_Pkg cEmptyBG_Header_BG_Types_Pkg;

/* cPermittedRadioPackets */
extern const MetadataTruthtable_T cPermittedRadioPackets;

/* cTTrainUnknown */
#define cTTrainUnknown 4294967295.0

/* cRadioSessionConnecting */
#define cRadioSessionConnecting morc_st_establishing_Radio_Types_Pkg

/* Receive_TrackSide_Msg_Pkg::cEmptyStore */
extern const TelegramStore_T_Receive_TrackSide_Msg_Pkg cEmptyStore_Receive_TrackSide_Msg_Pkg;

/* BG_Types_Pkg::cMaxDistanceBalisesInGroup */
extern const OdometryLocations_T_Obu_BasicTypes_Pkg cMaxDistanceBalisesInGroup_BG_Types_Pkg;

/* Receive_TrackSide_Msg_Pkg::cEmptyCollector */
extern const BGCollector_T_Receive_TrackSide_Msg_Pkg cEmptyCollector_Receive_TrackSide_Msg_Pkg;

/* BG_Types_Pkg::cemptyPosition */
extern const centerOfBalisePosition_T_BG_Types_Pkg cemptyPosition_BG_Types_Pkg;

/* BG_Types_Pkg::cEmpty_BaliseTlg */
extern const Telegram_T_BG_Types_Pkg cEmpty_BaliseTlg_BG_Types_Pkg;

/* bigConstants_Pkg::cEmptyHeaderArray */
extern const TelegramArray_T_BG_Types_Pkg cEmptyHeaderArray_bigConstants_Pkg;

/* Radio_Types_Pkg::cEmptyRadioMsg */
extern const RadioMessage_T_Radio_Types_Pkg cEmptyRadioMsg_Radio_Types_Pkg;

/* bigConstants_Pkg::cEmptyBGMsg */
extern const BG_Message_T_BG_Types_Pkg cEmptyBGMsg_bigConstants_Pkg;

/* CheckBGConsistency_Pkg::cRecivedMesg_PlaceHolder */
extern const ReceivedMessage_T_Common_Types_Pkg cRecivedMesg_PlaceHolder_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::cInConsistentTelegram */
extern const Telegram_T_BG_Types_Pkg cInConsistentTelegram_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::cTheTelegramFitsWithAll */
#define cTheTelegramFitsWithAll_CheckBGConsistency_Pkg 255

/* CheckBGConsistency_Pkg::cTheTelegramNeverFitsAnyMessage */
#define cTheTelegramNeverFitsAnyMessage_CheckBGConsistency_Pkg 254

/* CheckBGConsistency_Pkg::cEurobalise */
#define cEurobalise_CheckBGConsistency_Pkg msrc_Eurobalise_Common_Types_Pkg

/* CheckBGConsistency_Pkg::cRadioMetadata */
extern const RadioMetadata_T_Common_Types_Pkg cRadioMetadata_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::cNoRadioHeader */
extern const Radio_TrackTrain_Header_T_Radio_Types_Pkg cNoRadioHeader_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::cQDirLRBGunknown */
#define cQDirLRBGunknown_CheckBGConsistency_Pkg Q_DIRLRBG_Unknown

/* CheckBGConsistency_Pkg::cQqDirTrain */
#define cQqDirTrain_CheckBGConsistency_Pkg Q_DIRTRAIN_Unknown

/* BG_Types_Pkg::cMaxNoBalises */
#define cMaxNoBalises_BG_Types_Pkg 4

/* CheckBGConsistency_Pkg::cMetaDataElement */
extern const MetadataElement_T_Common_Types_Pkg cMetaDataElement_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::cMetaData */
extern const Metadata_T_Common_Types_Pkg cMetaData_CheckBGConsistency_Pkg;

/* CheckBGConsistency_Pkg::cQDirLrbgNominal */
#define cQDirLrbgNominal_CheckBGConsistency_Pkg Q_DIRLRBG_Nominal

/* CheckBGConsistency_Pkg::cQqDirTrainNominal */
#define cQqDirTrainNominal_CheckBGConsistency_Pkg Q_DIRTRAIN_Nominal

/* CheckBGConsistency_Pkg::cQqDirTrainRevers */
#define cQqDirTrainRevers_CheckBGConsistency_Pkg Q_DIRTRAIN_Reverse

/* CheckBGConsistency_Pkg::cQDirLrbgRevers */
#define cQDirLrbgRevers_CheckBGConsistency_Pkg Q_DIRLRBG_Reverse

/* CheckBGConsistency_Pkg::cNoStoredBG */
extern const positionedBG_T_TrainPosition_Types_Pck cNoStoredBG_CheckBGConsistency_Pkg;

/* ValidateDataDirection_Pkg::cEmptyLRBG */
extern const positionedBG_T_TrainPosition_Types_Pck cEmptyLRBG_ValidateDataDirection_Pkg;

/* packagesSupport_Pkg::cEmptyP58 */
extern const P58_PositionReportParameters_T_Packet_Types_Pkg cEmptyP58_packagesSupport_Pkg;

/* Id_Pkg::cp058_Position_Report_Parameters */
#define cp058_Position_Report_Parameters_Id_Pkg 58

/* packagesSupport_Pkg::cEmptyP42 */
extern const P42_SessionManagement_T_Packet_Types_Pkg cEmptyP42_packagesSupport_Pkg;

/* packagesSupport_Pkg::cEmptyP45 */
extern const P45_RadioNetworkRegistration_T_Packet_Types_Pkg cEmptyP45_packagesSupport_Pkg;

/* Id_Pkg::cm32_RBC_RIU_System_Version */
#define cm32_RBC_RIU_System_Version_Id_Pkg 32

/* DataDictionary_Pkg::LevelDecisionTableFromBalise */
extern const LevelDecisionTableType_DataDictionary_Pkg LevelDecisionTableFromBalise_DataDictionary_Pkg;

/* DataDictionary_Pkg::LevelDecisionTableFromRBC */
extern const LevelDecisionTableType_DataDictionary_Pkg LevelDecisionTableFromRBC_DataDictionary_Pkg;

/* Common_Types_Pkg::cDefaultRM */
extern const ReceivedMessage_T_Common_Types_Pkg cDefaultRM_Common_Types_Pkg;

/* Config_Pkg::INIT_BUFFER */
extern const Buffer_DataDictionary_Pkg INIT_BUFFER_Config_Pkg;

/* Config_Pkg::MAX_TRANSITION_BUFFFER_SIZE */
#define MAX_TRANSITION_BUFFFER_SIZE_Config_Pkg 3

/* DataDictionary_Pkg::ModeDecisionTable */
extern const ModeDecisionTableType_DataDictionary_Pkg ModeDecisionTable_DataDictionary_Pkg;

/* Config_Pkg::MAX_PACKAGES */
#define MAX_PACKAGES_Config_Pkg 30

/* CalculateTrainPosition_Pkg::cTrainPosition_0 */
extern const trainPosition_T_TrainPosition_Types_Pck cTrainPosition_0_CalculateTrainPosition_Pkg;

/* CalculateTrainPosition_Pkg::cNoPositionErrors */
extern const positionErrors_T_TrainPosition_Types_Pck cNoPositionErrors_CalculateTrainPosition_Pkg;

/* BG_Types_Pkg::cNID_LRBG_unknown */
#define cNID_LRBG_unknown_BG_Types_Pkg 16777215

/* BG_Types_Pkg::cNID_LRBG_14Bits_Multiplicator */
#define cNID_LRBG_14Bits_Multiplicator_BG_Types_Pkg 16384

/* BG_Types_Pkg::cNID_BG_unknown */
#define cNID_BG_unknown_BG_Types_Pkg 16383

/* CalculateTrainPosition_Pkg::cNoPositionedBGs */
extern const positionedBGs_T_TrainPosition_Types_Pck cNoPositionedBGs_CalculateTrainPosition_Pkg;

/* Obu_BasicTypes_Pkg::cOdometryInitialValue */
extern const OdometryLocations_T_Obu_BasicTypes_Pkg cOdometryInitialValue_Obu_BasicTypes_Pkg;

/* CalculateTrainPosition_Pkg::cNoPassedBG */
extern const passedBG_T_BG_Types_Pkg cNoPassedBG_CalculateTrainPosition_Pkg;

/* CalculateTrainPosition_Pkg::cNoInfoFromLinking */
extern const infoFromLinking_T_TrainPosition_Types_Pck cNoInfoFromLinking_CalculateTrainPosition_Pkg;

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::cNoRefPrevBGs */
extern const refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg cNoRefPrevBGs_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

/* TrainPosition_Types_Pck::cQ_SCALE_10_cm_resolution */
#define cQ_SCALE_10_cm_resolution_TrainPosition_Types_Pck 10

/* TrainPosition_Types_Pck::cQ_SCALE_10_m_resolution */
#define cQ_SCALE_10_m_resolution_TrainPosition_Types_Pck 1000

/* TrainPosition_Types_Pck::cQ_SCALE_1_m_resolution */
#define cQ_SCALE_1_m_resolution_TrainPosition_Types_Pck 100

/* TrainPosition_Types_Pck::cQLOCACC_resolution */
#define cQLOCACC_resolution_TrainPosition_Types_Pck 100

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::cNoLinkedBG_index */
extern const linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg cNoLinkedBG_index_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

/* CalculateTrainPosition_Pkg::gp_functions_Pkg::noValidIndex */
#define noValidIndex_CalculateTrainPosition_Pkg_gp_functions_Pkg (- 1)

/* CalculateTrainPosition_Pkg::cNoOfAtLeast_x_unlinkedBGs */
#define cNoOfAtLeast_x_unlinkedBGs_CalculateTrainPosition_Pkg 2

/* CalculateTrainPosition_Pkg::cNoOfAtLeast_8_LRBGs */
#define cNoOfAtLeast_8_LRBGs_CalculateTrainPosition_Pkg 3

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::cBGCounters_0 */
extern const BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg cBGCounters_0_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::cBG_find_0 */
extern const BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg cBG_find_0_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::cEmptyPositionedBG */
extern const positionedBG_T_TrainPosition_Types_Pck cEmptyPositionedBG_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* Obu_BasicTypes_Pkg::cLocWithInAcc_0 */
extern const LocWithInAcc_T_Obu_BasicTypes_Pkg cLocWithInAcc_0_Obu_BasicTypes_Pkg;

/* CalculateTrainPosition_Pkg::cNoValidIndex */
#define cNoValidIndex_CalculateTrainPosition_Pkg (- 1)

/* CalculateTrainPosition_Pkg::cNoPositionedBG */
extern const positionedBG_T_TrainPosition_Types_Pck cNoPositionedBG_CalculateTrainPosition_Pkg;

/* DEFAULT_RadioData */
extern const CompressedPacketData_T_Common_Types_Pkg DEFAULT_RadioData;

/* DIM_MaxRMessages */
#define DIM_MaxRMessages 30

/* DEFAULT_PHeader */
extern const MetadataElement_T_Common_Types_Pkg DEFAULT_PHeader;

/* DIM_MaxElementsPacket005 */
#define DIM_MaxElementsPacket005 39

/* INT_Q_LINKREACTION_Apply_servicebrake */
#define INT_Q_LINKREACTION_Apply_servicebrake 1

/* ENUM_Q_LINKREACTION_Apply_servicebrake_Q_LINKREACTION */
#define ENUM_Q_LINKREACTION_Apply_servicebrake_Q_LINKREACTION Q_LINKREACTION_Apply_service_brake

/* INT_Q_LINKREACTION_Train_trip */
#define INT_Q_LINKREACTION_Train_trip 0

/* ENUM_Q_LINKREACTION_Train_trip_Q_LINKREACTION */
#define ENUM_Q_LINKREACTION_Train_trip_Q_LINKREACTION Q_LINKREACTION_Train_trip

/* ENUM_Q_LINKREACTION_No_Reaction_Q_LINKREACTION */
#define ENUM_Q_LINKREACTION_No_Reaction_Q_LINKREACTION Q_LINKREACTION_No_Reaction

/* INT_Q_LINKORIENTATION_nominal */
#define INT_Q_LINKORIENTATION_nominal 1

/* ENUM_Q_LINKORIENTATION_nominal_Q_LINKORIENTATION */
#define ENUM_Q_LINKORIENTATION_nominal_Q_LINKORIENTATION Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction

/* ENUM_Q_LINKORIENTATION_reverse_Q_LINKORIENTATION */
#define ENUM_Q_LINKORIENTATION_reverse_Q_LINKORIENTATION Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction

/* INT_Q_NEWCOUNTRY_same */
#define INT_Q_NEWCOUNTRY_same 0

/* ENUM_Q_NEWCOUNTRY_same_Q_NEWCOUNTRY */
#define ENUM_Q_NEWCOUNTRY_same_Q_NEWCOUNTRY Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows

/* ENUM_Q_NEWCOUNTRY_not_same_Q_NEWCOUNTRY */
#define ENUM_Q_NEWCOUNTRY_not_same_Q_NEWCOUNTRY Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows

/* INT_Q_DIR_nomiinal */
#define INT_Q_DIR_nomiinal 1

/* ENUM_Q_DIR_nomiinal_QDIR */
#define ENUM_Q_DIR_nomiinal_QDIR Q_DIR_Nominal

/* INT_Q_DIR_both */
#define INT_Q_DIR_both 2

/* ENUM_Q_DIR_both_QDIR */
#define ENUM_Q_DIR_both_QDIR Q_DIR_Reverse

/* ENUM_Q_DIR_reverse_QDIR */
#define ENUM_Q_DIR_reverse_QDIR Q_DIR_Reverse

/* INT_Q_SCALE_10m */
#define INT_Q_SCALE_10m 2

/* INT_Q_SCALE_1m */
#define INT_Q_SCALE_1m 1

/* ENUM_Q_SCALE_1m_QSCALE */
#define ENUM_Q_SCALE_1m_QSCALE Q_SCALE_1_m_scale

/* ENUM_Q_SCALE_10m_QSCALE */
#define ENUM_Q_SCALE_10m_QSCALE Q_SCALE_10_m_scale

/* ENUM_Q_SCALE_10cm_QSCALE */
#define ENUM_Q_SCALE_10cm_QSCALE Q_SCALE_10_cm_scale

/* CalculateTrainPosition_Pkg::msgAdapter_Pkg::cTM_Radio_TrackTrain_Header_Default */
extern const TM_Radio_TrackTrain_Header_T cTM_Radio_TrackTrain_Header_Default_CalculateTrainPosition_Pkg_msgAdapter_Pkg;

/* ProvidePositionReport_Pkg::cT_TRAIN */
#define cT_TRAIN_ProvidePositionReport_Pkg 0.0

/* ProvidePositionReport_Pkg::cxT_TRAIN */
#define cxT_TRAIN_ProvidePositionReport_Pkg 0.0

/* ProvidePositionReport_Pkg::cxQ_MARQSTREASON */
#define cxQ_MARQSTREASON_ProvidePositionReport_Pkg Q_MARQSTREASON_Start_selected_by_driver

/* ProvidePositionReport_Pkg::cTrigger */
#define cTrigger_ProvidePositionReport_Pkg kcg_false

/* ProvidePositionReport_Pkg::cQ_SCALE */
#define cQ_SCALE_ProvidePositionReport_Pkg Q_SCALE_10_cm_scale

/* ProvidePositionReport_Pkg::cInitPT3 */
extern const PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg cInitPT3_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cInitPT11 */
extern const PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg cInitPT11_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cMinSafeRearEnd */
#define cMinSafeRearEnd_ProvidePositionReport_Pkg 0

/* ProvidePositionReport_Pkg::cOdomerty */
extern const odometry_T_Obu_BasicTypes_Pkg cOdomerty_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cModeAndLevelStatus */
extern const ModeAndLevelStatus_T_BG_Types_Pkg cModeAndLevelStatus_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cPassedBG */
extern const positionedBG_T_TrainPosition_Types_Pck cPassedBG_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cPresentxM_LOC */
extern const PresentxMLOC_T_ProvidePositionReport_Pkg cPresentxM_LOC_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cNITER_List */
extern const IterPacket58List_T_Packet_Types_Pkg cNITER_List_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::cNITER_Pair */
extern const IterPacket58_T_Packet_Types_Pkg cNITER_Pair_ProvidePositionReport_Pkg;

/* Packet_Types_Pkg::cIterPacket58 */
#define cIterPacket58_Packet_Types_Pkg 2

/* ProvidePositionReport_Pkg::cErrorMessage */
extern const ErrorMessage_T_ProvidePositionReport_Pkg cErrorMessage_ProvidePositionReport_Pkg;

/* Id_Pkg::cm38_Initiation_of_a_Communication_Session */
#define cm38_Initiation_of_a_Communication_Session_Id_Pkg 38

/* Id_Pkg::cm39_Acknowledgement_of_termination_of_a_communication_session */
#define cm39_Acknowledgement_of_termination_of_a_communication_session_Id_Pkg 39

/* Id_Pkg::co154_No_Compatible_Version_Support */
#define co154_No_Compatible_Version_Support_Id_Pkg 154

/* Id_Pkg::co159_Session_established */
#define co159_Session_established_Id_Pkg 159

/* Id_Pkg::co156_Termination_of_a_communication_session */
#define co156_Termination_of_a_communication_session_Id_Pkg 156

/* Id_Pkg::co155_Initiation_of_a_communication_session */
#define co155_Initiation_of_a_communication_session_Id_Pkg 155

/* MoRC_Pck::cNID_MESSAGE_RBC_RIU_SystemVersion */
#define cNID_MESSAGE_RBC_RIU_SystemVersion_MoRC_Pck 32

/* MoRC_Pck::cNoMessageToRBC */
extern const Radio_TrainTrack_Message_T_Radio_Types_Pkg cNoMessageToRBC_MoRC_Pck;

/* MoRC_Pck::cTerminateSafeRadioConnectionCmd */
extern const mobileSWCmd_Type_MoRC_Pck cTerminateSafeRadioConnectionCmd_MoRC_Pck;

/* MoRC_Pck::cRegisterSafeRadioConnectionCmd */
extern const mobileSWCmd_Type_MoRC_Pck cRegisterSafeRadioConnectionCmd_MoRC_Pck;

/* MoRC_Pck::cMaxNoOfConnectionRetries */
#define cMaxNoOfConnectionRetries_MoRC_Pck 3

/* MoRC_Pck::cRadioConnectionReestablishingTimeout */
#define cRadioConnectionReestablishingTimeout_MoRC_Pck 10000

/* MoRC_Pck::cTerminationOfCommunicationSession_MaxNoOfRepetitions */
#define cTerminationOfCommunicationSession_MaxNoOfRepetitions_MoRC_Pck 5

/* MoRC_Pck::cTerminationOfCommunicationSessionRepetitionInterval */
#define cTerminationOfCommunicationSessionRepetitionInterval_MoRC_Pck 1000

/* MoRC_Pck::cInvalidRadioNetworkID */
extern const P45_RadioNetworkRegistration_T_Packet_Types_Pkg cInvalidRadioNetworkID_MoRC_Pck;

/* MoRC_Pck::cInvalidMobileSWStatus */
extern const mobileSWStatus_Type_MoRC_Pck cInvalidMobileSWStatus_MoRC_Pck;

/* MoRC_Pck::cInvalidMobileSWCmd */
extern const mobileSWCmd_Type_MoRC_Pck cInvalidMobileSWCmd_MoRC_Pck;

/* MoRC_Pck::cInvalidMobileHWStatus */
extern const mobileHWStatus_Type_MoRC_Pck cInvalidMobileHWStatus_MoRC_Pck;

/* MoRC_Pck::cMobileSWStatus_noHW */
extern const mobileSWStatus_Type_MoRC_Pck cMobileSWStatus_noHW_MoRC_Pck;

/* MoRC_Pck::cInvalidRadioNetworkID_value */
#define cInvalidRadioNetworkID_value_MoRC_Pck 0

/* MoRC_Pck::cInvalidmobileHWCmd */
extern const mobileHWCmd_Type_MoRC_Pck cInvalidmobileHWCmd_MoRC_Pck;

/* MoRC_Pck::cPositionReportRepetitionInterval */
#define cPositionReportRepetitionInterval_MoRC_Pck 10000

/* MoRC_Pck::cPositionReoport_MaxNoOfRepetitions */
#define cPositionReoport_MaxNoOfRepetitions_MoRC_Pck 5

/* MoRC_Pck::Coder_Pkg::cInvalidOrder */
extern const p42e_SessionManagement_T_MoRC_Pck_Coder_Pkg cInvalidOrder_MoRC_Pck_Coder_Pkg;

/* MoRC_Pck::Coder_Pkg::cNID_RBC_contactLastKnownRBC */
#define cNID_RBC_contactLastKnownRBC_MoRC_Pck_Coder_Pkg 16383

/* MoRC_Pck::Coder_Pkg::cNID_RADIO_useTheShortNumberStoredOnboard */
#define cNID_RADIO_useTheShortNumberStoredOnboard_MoRC_Pck_Coder_Pkg 0xFFFFFFFF

/* MoRC_Pck::Coder_Pkg::cEmptyOutPackets */
extern const outPackets_T_Common_Types_Pkg cEmptyOutPackets_MoRC_Pck_Coder_Pkg;

/* Common_Types_Pkg::cMetadataArraySize */
#define cMetadataArraySize_Common_Types_Pkg cDIM_MaxRMessages_Common_Types_Pkg

/* Common_Types_Pkg::cDIM_MaxRMessages */
#define cDIM_MaxRMessages_Common_Types_Pkg 30

/* Common_Types_Pkg::cDIM_MaxDataElementsInRMessage */
#define cDIM_MaxDataElementsInRMessage_Common_Types_Pkg 500

/* TrainPosition_Types_Pck::cMaxNoOfStoredBGs */
#define cMaxNoOfStoredBGs_TrainPosition_Types_Pck (2 * cMaxNoOfLinkedBGs_BG_Types_Pkg)

/* TIU_Types_Pkg::emptyTIUInfo */
extern const Message_Train_Interface_to_EVC_T_TIU_Types_Pkg emptyTIUInfo_TIU_Types_Pkg;

/* cEmptyBrakeCmd */
extern const Brake_command_T_TIU_Types_Pkg cEmptyBrakeCmd;

/* manage_DMI_Output_Pkg::cDefaultTrainData */
extern const DMI_Train_Data_T_DMI_Messages_Bothways_Pkg cDefaultTrainData_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cDefaultDynamic */
extern const DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg cDefaultDynamic_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::ctimeInterval */
#define ctimeInterval_manage_DMI_Output_Pkg 300

/* manage_DMI_Output_Pkg::cnoSTM */
#define cnoSTM_manage_DMI_Output_Pkg 0

/* manage_DMI_Output_Pkg::cOutputStatus */
extern const dmiOutputs_T_manage_DMI_Output_Pkg cOutputStatus_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cEmptyInitRequest */
extern const DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg cEmptyInitRequest_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cSendInitRequest */
extern const DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg cSendInitRequest_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cNoMenu */
extern const DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg cNoMenu_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cMenuTrainData */
extern const DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg cMenuTrainData_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cMenuStart */
extern const DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg cMenuStart_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cTextSpecial_BG */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cTextSpecial_BG_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cDefaultText */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cDefaultText_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cEmptyIconRequest */
extern const DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg cEmptyIconRequest_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cIconClearEB */
extern const DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg cIconClearEB_manage_DMI_Output_Pkg;

/* manage_DMI_Output_Pkg::cIconRequestEB */
extern const DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg cIconRequestEB_manage_DMI_Output_Pkg;

/* DMI_Types_Pkg::cDMI_maxSpeedProfile */
#define cDMI_maxSpeedProfile_DMI_Types_Pkg 4

/* DMI_Types_Pkg::cDMI_maxLevels */
#define cDMI_maxLevels_DMI_Types_Pkg 4

/* DMI_Control_Pkg::CloseButtonIndex */
#define CloseButtonIndex_DMI_Control_Pkg 26

/* DMI_Control_Pkg::ASCII_Backsp */
#define ASCII_Backsp_DMI_Control_Pkg 8

/* DMI_Control_Pkg::closeButtonActiveSymbol */
#define closeButtonActiveSymbol_DMI_Control_Pkg 25

/* DMI_Control_Pkg::DMI_train_data_ack_positive */
extern const DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg DMI_train_data_ack_positive_DMI_Control_Pkg;

/* DMI_Control_Pkg::DMI_train_data_ack_negative */
extern const DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg DMI_train_data_ack_negative_DMI_Control_Pkg;

/* DMI_Control_Pkg::DMI_SoM_req */
extern const DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg DMI_SoM_req_DMI_Control_Pkg;

/* DMI_Control_Pkg::AllMenuButtonsDisabled */
extern const array_int_30 AllMenuButtonsDisabled_DMI_Control_Pkg;

/* DMI_Control_Pkg::DMI_train_data_constant */
extern const DMI_Train_Data_T_DMI_Messages_Bothways_Pkg DMI_train_data_constant_DMI_Control_Pkg;

/* DMI_Control_Pkg::ArrayOfIndex_YellowLevelSymbols */
extern const array_int_5 ArrayOfIndex_YellowLevelSymbols_DMI_Control_Pkg;

/* DMI_Control_Pkg::ArrayOfIndex_YellowModeSymbols */
extern const array_int_8 ArrayOfIndex_YellowModeSymbols_DMI_Control_Pkg;

/* DMI_Control_Pkg::cStatusSymbol_IconGroup */
#define cStatusSymbol_IconGroup_DMI_Control_Pkg 3

/* DMI_Control_Pkg::cSTATUS_Emergency_brake */
#define cSTATUS_Emergency_brake_DMI_Control_Pkg 1

/* DMI_Control_Pkg::cClearBrakeStatusSymbol */
extern const DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg cClearBrakeStatusSymbol_DMI_Control_Pkg;

/* DMI_Control_Pkg::cClearC1AreaSymbol */
extern const DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg cClearC1AreaSymbol_DMI_Control_Pkg;

/* DMI_Control_Pkg::cModeSymbol_IconGroup */
#define cModeSymbol_IconGroup_DMI_Control_Pkg 2

/* DMI_Control_Pkg::cLevelSymbol_IconGroup */
#define cLevelSymbol_IconGroup_DMI_Control_Pkg 1

/* DMI_Control_Pkg::Num_Q_TextMsg */
#define Num_Q_TextMsg_DMI_Control_Pkg 27

/* DMI_Control_Pkg::ArrayEnum_Q_text */
extern const Array_DMI_Q_Text ArrayEnum_Q_text_DMI_Control_Pkg;

/* DMI_Control_Pkg::cIntervalFlashingTimeMsg */
#define cIntervalFlashingTimeMsg_DMI_Control_Pkg 10

/* DMI_Control_Pkg::GRADIENTSSTART1 */
extern const array_real_12 GRADIENTSSTART1_DMI_Control_Pkg;

/* DMI_Control_Pkg::GRADIENTSEND1 */
extern const array_real_12 GRADIENTSEND1_DMI_Control_Pkg;

/* DMI_Control_Pkg::GRADIENTSVALUE1 */
extern const array_real_12 GRADIENTSVALUE1_DMI_Control_Pkg;

/* DMI_Control_Pkg::cCOLOR_GREY */
#define cCOLOR_GREY_DMI_Control_Pkg 3

/* DMI_Control_Pkg::cCOLOR_RED */
#define cCOLOR_RED_DMI_Control_Pkg 10

/* DMI_Control_Pkg::cCOLOR_ORANGE */
#define cCOLOR_ORANGE_DMI_Control_Pkg 9

/* DMI_Control_Pkg::ccOLOR_WHITE */
#define ccOLOR_WHITE_DMI_Control_Pkg 1

/* DMI_Control_Pkg::cCOLOR_YELLOW */
#define cCOLOR_YELLOW_DMI_Control_Pkg 8

/* DMI_Control_Pkg::cCOLOR_DARK_GREY */
#define cCOLOR_DARK_GREY_DMI_Control_Pkg 5

/* DMI_Control_Pkg::cCOLOR_MEDIUM_GREY */
#define cCOLOR_MEDIUM_GREY_DMI_Control_Pkg 4

/* DMI_Control_Pkg::DMI_name */
extern const array_char_12 DMI_name_DMI_Control_Pkg;

/* DMI_Control_Pkg::InitText1 */
extern const array_int_9 InitText1_DMI_Control_Pkg;

/* DMI_Control_Pkg::MaxNumDisplayMsg */
#define MaxNumDisplayMsg_DMI_Control_Pkg 5

/* DMI_Control_Pkg::cDMI_Icons_Ack */
extern const DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg cDMI_Icons_Ack_DMI_Control_Pkg;

/* DMI_Control_Pkg::DMI_dinamic_startvalues */
extern const DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg DMI_dinamic_startvalues_DMI_Control_Pkg;

/* DMI_Control_Pkg::cMODE_Full_Supervision */
#define cMODE_Full_Supervision_DMI_Control_Pkg 11

/* DMI_Control_Pkg::cMODE_Limited_Supervision */
#define cMODE_Limited_Supervision_DMI_Control_Pkg 21

/* DMI_Control_Pkg::cMODE_Non_leading */
#define cMODE_Non_leading_DMI_Control_Pkg 12

/* DMI_Control_Pkg::cMODE_On_Sight */
#define cMODE_On_Sight_DMI_Control_Pkg 7

/* DMI_Control_Pkg::cMODE_Post_trip */
#define cMODE_Post_trip_DMI_Control_Pkg 6

/* DMI_Control_Pkg::cMODE_Reversing */
#define cMODE_Reversing_DMI_Control_Pkg 14

/* DMI_Control_Pkg::cMODE_Staff_Responsible */
#define cMODE_Staff_Responsible_DMI_Control_Pkg 9

/* DMI_Control_Pkg::cMODE_System_Faliure */
#define cMODE_System_Faliure_DMI_Control_Pkg 18

/* DMI_Control_Pkg::cMODE_Trip */
#define cMODE_Trip_DMI_Control_Pkg 4

/* DMI_Control_Pkg::cMODE_Unfitted */
#define cMODE_Unfitted_DMI_Control_Pkg 16

/* DMI_Control_Pkg::cMODE_Stand_By */
#define cMODE_Stand_By_DMI_Control_Pkg 13

/* DMI_Control_Pkg::cMODE_Shunting */
#define cMODE_Shunting_DMI_Control_Pkg 1

/* DMI_Control_Pkg::cStatusIntervalTime */
#define cStatusIntervalTime_DMI_Control_Pkg 10

/* DMI_Control_Pkg::Dim_DMI_name */
#define Dim_DMI_name_DMI_Control_Pkg 12

/* DMI_Control_Pkg::DMI_identifier_const */
extern const DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg DMI_identifier_const_DMI_Control_Pkg;

/* DMI_Control_Pkg::ASCII_0 */
#define ASCII_0_DMI_Control_Pkg 48

/* DMI_Control_Pkg::ASCII_offset_Backsp */
#define ASCII_offset_Backsp_DMI_Control_Pkg (- 40)

/* DMI_Control_Pkg::ASCII_offset_0 */
#define ASCII_offset_0_DMI_Control_Pkg 0

/* DMI_Control_Pkg::MAXTextLength */
#define MAXTextLength_DMI_Control_Pkg cDiverIdentifierLength_DMI_Messages_Bothways_Pkg

/* DMI_Control_Pkg::ASCII_space */
#define ASCII_space_DMI_Control_Pkg 32

/* DMI_Control_Pkg::DriverID_window_mask */
extern const array_bool_15 DriverID_window_mask_DMI_Control_Pkg;

/* DMI_Control_Pkg::TrainRN_window_mask */
extern const array_bool_15 TrainRN_window_mask_DMI_Control_Pkg;

/* DMI_Control_Pkg::Mainmenu_window_mask */
extern const array_bool_15 Mainmenu_window_mask_DMI_Control_Pkg;

/* DMI_Control_Pkg::HideMainmenu_window_mask */
extern const array_bool_15 HideMainmenu_window_mask_DMI_Control_Pkg;

/* DMI_Control_Pkg::ValidateTraindata_window_mask */
extern const array_bool_15 ValidateTraindata_window_mask_DMI_Control_Pkg;

/* DMI_Control_Pkg::cDMI_List_Entry_Request */
extern const Array_DMI_List_Entry_Request cDMI_List_Entry_Request_DMI_Control_Pkg;

/* DMI_Control_Pkg::DimButtonEnabler */
#define DimButtonEnabler_DMI_Control_Pkg 30

/* DMI_Control_Pkg::Px100To1001 */
#define Px100To1001_DMI_Control_Pkg 153.0

/* DMI_Control_Pkg::Y100I1 */
#define Y100I1_DMI_Control_Pkg (- 56.5)

/* DMI_Control_Pkg::DimFIFO_queue */
#define DimFIFO_queue_DMI_Control_Pkg 5

/* ManageProcedure_Pkg::cNID_BG_Radio_Header */
extern const Radio_TrackTrain_Header_T_Radio_Types_Pkg cNID_BG_Radio_Header_ManageProcedure_Pkg;

/* ManageProcedure_Pkg::cpacket42_to_MoRC */
extern const P42_SessionManagement_T_Packet_Types_Pkg cpacket42_to_MoRC_ManageProcedure_Pkg;

/* ManageProcedure_Pkg::cpacket45_nid_mn_to_MoRC */
#define cpacket45_nid_mn_to_MoRC_ManageProcedure_Pkg 1234

/* ManageProcedure_Pkg::cpacket45_to_MoRC */
extern const P45_RadioNetworkRegistration_T_Packet_Types_Pkg cpacket45_to_MoRC_ManageProcedure_Pkg;

/* ManageProcedure_Pkg::cpacket42_q_rbc_ni_rbc_nid_radio_q_sleepsession_to_MoRC */
extern const P42_SessionManagement_T_Packet_Types_Pkg cpacket42_q_rbc_ni_rbc_nid_radio_q_sleepsession_to_MoRC_ManageProcedure_Pkg;

/* ManageProcedure_Pkg::cdefault_manageT */
extern const radioManagementMessage_T_Common_Types_Pkg cdefault_manageT_ManageProcedure_Pkg;

/* manage_DMI_Input_Pkg::cDMI_EVC_Status_Default */
extern const DMI_EVC_status_T_DMI_Types_Pkg cDMI_EVC_Status_Default_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cDMIStatusDefault */
extern const DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg cDMIStatusDefault_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cDMIIdentifierDefault */
extern const DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg cDMIIdentifierDefault_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cDMIDriverRequestDefault */
extern const DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg cDMIDriverRequestDefault_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cDMIDriverIdentifierDefault */
extern const DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg cDMIDriverIdentifierDefault_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cDMITrainRunningNumberDefault */
extern const DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg cDMITrainRunningNumberDefault_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cDMIRadioNetDataDefault */
extern const DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg cDMIRadioNetDataDefault_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cDMITextMessageAckDefault */
extern const DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg cDMITextMessageAckDefault_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cDMIIconAckDefault */
extern const DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg cDMIIconAckDefault_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cEVCTrainData */
extern const trainData_T_TIU_Types_Pkg cEVCTrainData_manage_DMI_Input_Pkg;

/* manage_DMI_Input_Pkg::cDMIAdhesionFactorDefault */
extern const DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg cDMIAdhesionFactorDefault_manage_DMI_Input_Pkg;

/* DMI_Messages_Bothways_Pkg::cDiverIdentifierLength */
#define cDiverIdentifierLength_DMI_Messages_Bothways_Pkg 9

/* DMI_Types_Pkg::cDMI_charsInText */
#define cDMI_charsInText_DMI_Types_Pkg 255

/* manage_DMI_Input_Pkg::cAckModesAndLevels */
extern const DMI_To_Modes_T_DMI_Types_Pkg cAckModesAndLevels_manage_DMI_Input_Pkg;

/* API_RadioCommunication_Pkg::cInitOutputToRadioAPI */
extern const Radio_TrainTrack_Message_T_Radio_Types_Pkg cInitOutputToRadioAPI_API_RadioCommunication_Pkg;

/* Packet_TrainTypes_Pkg::cmaxNumberTelephoneNumbers */
#define cmaxNumberTelephoneNumbers_Packet_TrainTypes_Pkg 1

/* Packet_TrainTypes_Pkg::cDigitsInTelephoneNumber */
#define cDigitsInTelephoneNumber_Packet_TrainTypes_Pkg 15

/* Packet_TrainTypes_Pkg::cMaxTractionIdentity */
#define cMaxTractionIdentity_Packet_TrainTypes_Pkg 3

/* Packet_TrainTypes_Pkg::cMaxNationalSystem */
#define cMaxNationalSystem_Packet_TrainTypes_Pkg 3

/* SDM_Commands_Pkg::cSupervisionStatus */
#define cSupervisionStatus_SDM_Commands_Pkg Undefined_Supervision_SDM_Types_Pkg

/* SDM_Commands_Pkg::cSDM_Types */
#define cSDM_Types_SDM_Commands_Pkg No_SDM_Type_SDM_Types_Pkg

/* SDM_Types_Pkg::V_sbi_min */
#define V_sbi_min_SDM_Types_Pkg 30.555555556

/* SDM_Types_Pkg::dV_sbi_min */
#define dV_sbi_min_SDM_Types_Pkg 1.527777778

/* SDM_Types_Pkg::dV_sbi_max */
#define dV_sbi_max_SDM_Types_Pkg 2.777777778

/* SDM_Types_Pkg::V_sbi_max */
#define V_sbi_max_SDM_Types_Pkg 58.333333333

/* SDM_Types_Pkg::V_warning_min */
#define V_warning_min_SDM_Types_Pkg 30.555555556

/* SDM_Types_Pkg::dV_warning_min */
#define dV_warning_min_SDM_Types_Pkg 1.111111111

/* SDM_Types_Pkg::dV_warning_max */
#define dV_warning_max_SDM_Types_Pkg 1.388888889

/* SDM_Types_Pkg::V_warning_max */
#define V_warning_max_SDM_Types_Pkg 38.888888889

/* DMI_Types_Pkg::cDMIUnknownSpeed */
#define cDMIUnknownSpeed_DMI_Types_Pkg (- 1)

/* BG_Types_Pkg::cMaxNoOfLinkedBGs */
#define cMaxNoOfLinkedBGs_BG_Types_Pkg 4

/* Packet_Types_Pkg::cNIterMax */
#define cNIterMax_Packet_Types_Pkg 7

/* CalcBrakingCurves_Pkg::TestcaseA_safe */
extern const ASafe_T_CalcBrakingCurves_types TestcaseA_safe_CalcBrakingCurves_Pkg;

/* CalcBrakingCurves_Pkg::TestcaseA_safe_data */
extern const ASafe_Data_T_CalcBrakingCurves_types TestcaseA_safe_data_CalcBrakingCurves_Pkg;

/* CalcBrakingCurves_Pkg::emptyParabolaCurve */
extern const ParabolaCurve_T_CalcBrakingCurves_types emptyParabolaCurve_CalcBrakingCurves_Pkg;

/* CalcBrakingCurves_Pkg::TestcaseBrakeService */
extern const ASafe_T_CalcBrakingCurves_types TestcaseBrakeService_CalcBrakingCurves_Pkg;

/* CalcBrakingCurves_Pkg::TestcaseA_safe_dist */
extern const ASafeDistanceDefinition_T_CalcBrakingCurves_types TestcaseA_safe_dist_CalcBrakingCurves_Pkg;

/* CalcBrakingCurves_Pkg::TestcaseA_safe_speed */
extern const ASafeSpeedDefinition_T_CalcBrakingCurves_types TestcaseA_safe_speed_CalcBrakingCurves_Pkg;

/* CalcBrakingCurves_Pkg::TestcaseA_BreakServiceData */
extern const ASafe_Data_T_CalcBrakingCurves_types TestcaseA_BreakServiceData_CalcBrakingCurves_Pkg;

/* SDM_Types_Pkg::V_ebi_min */
#define V_ebi_min_SDM_Types_Pkg 30.555555556

/* SDM_Types_Pkg::dV_ebi_min */
#define dV_ebi_min_SDM_Types_Pkg 2.083333333

/* SDM_Types_Pkg::dV_ebi_max */
#define dV_ebi_max_SDM_Types_Pkg 4.166666667

/* SDM_Types_Pkg::V_ebi_max */
#define V_ebi_max_SDM_Types_Pkg 58.333333333

/* CalcBrakingCurves_types::cEmptyParabolaCurve */
extern const ParabolaCurve_T_CalcBrakingCurves_types cEmptyParabolaCurve_CalcBrakingCurves_types;

/* TargetManagement_pkg::emptyTargetSvL */
extern const Target_real_T_TargetManagement_types emptyTargetSvL_TargetManagement_pkg;

/* TargetManagement_pkg::emptyMRSPSection */
extern const MRSP_internal_section_T_TargetManagement_types emptyMRSPSection_TargetManagement_pkg;

/* TargetManagement_pkg::emptyTargetLOA */
extern const Target_real_T_TargetManagement_types emptyTargetLOA_TargetManagement_pkg;

/* TargetManagement_pkg::emptyMASection */
extern const MA_section_real_T_TargetManagement_types emptyMASection_TargetManagement_pkg;

/* TargetManagement_pkg::emptyTargetMRSP */
extern const Target_real_T_TargetManagement_types emptyTargetMRSP_TargetManagement_pkg;

/* TargetManagement_pkg::emptyTargetEOA */
extern const Target_real_T_TargetManagement_types emptyTargetEOA_TargetManagement_pkg;

/* SDM_Types_Pkg::T_warning */
#define T_warning_SDM_Types_Pkg 2.0

/* SDM_Types_Pkg::T_preindication */
#define T_preindication_SDM_Types_Pkg 7.0

/* MRSPMaxSections */
#define MRSPMaxSections 200

/* MAsMaxSections */
#define MAsMaxSections 10

/* SDM_Types_Pkg::T_driver */
#define T_driver_SDM_Types_Pkg 4.0

/* CalcBrakingCurves_types::cMAX_BC_ARCS */
#define cMAX_BC_ARCS_CalcBrakingCurves_types (cMAX_DISTANCE_STEPS_CalcBrakingCurves_types + cMAX_SPEED_VALUE_STEP_CalcBrakingCurves_types)

/* CalcBrakingCurves_types::cMAX_DISTANCE_STEPS */
#define cMAX_DISTANCE_STEPS_CalcBrakingCurves_types 15

/* CalcBrakingCurves_types::cMAX_SPEED_VALUE_STEP */
#define cMAX_SPEED_VALUE_STEP_CalcBrakingCurves_types 10

#endif /* _KCG_CONSTS_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** kcg_consts.h
** Generation date: 2015-04-24T11:00:58
*************************************************************$ */


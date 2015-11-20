/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/SimuIntegrationBH/config.txt
** Generation date: 2015-11-20T14:27:47
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
typedef char kcg_char;
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

/* Level_And_Mode_Types_Pkg::T_Mode */
typedef enum kcg_tag_T_Mode_Level_And_Mode_Types_Pkg {
  NP_Level_And_Mode_Types_Pkg,
  SB_Level_And_Mode_Types_Pkg,
  PS_Level_And_Mode_Types_Pkg,
  SH_Level_And_Mode_Types_Pkg,
  FS_Level_And_Mode_Types_Pkg,
  LS_Level_And_Mode_Types_Pkg,
  SR_Level_And_Mode_Types_Pkg,
  OS_Level_And_Mode_Types_Pkg,
  SL_Level_And_Mode_Types_Pkg,
  NL_Level_And_Mode_Types_Pkg,
  UN_Level_And_Mode_Types_Pkg,
  TR_Level_And_Mode_Types_Pkg,
  PT_Level_And_Mode_Types_Pkg,
  SF_Level_And_Mode_Types_Pkg,
  IS_Level_And_Mode_Types_Pkg,
  SN_Level_And_Mode_Types_Pkg,
  RV_Level_And_Mode_Types_Pkg
} T_Mode_Level_And_Mode_Types_Pkg;
/* Level_And_Mode_Types_Pkg::T_MA */
typedef enum kcg_tag_T_MA_Level_And_Mode_Types_Pkg {
  Profile_OS_Level_And_Mode_Types_Pkg,
  Profile_LS_Level_And_Mode_Types_Pkg,
  Profile_SH_Level_And_Mode_Types_Pkg,
  No_Profile_Level_And_Mode_Types_Pkg
} T_MA_Level_And_Mode_Types_Pkg;
/* SDM_Types_Pkg::SupervisionStatus_T */
typedef enum kcg_tag_SupervisionStatus_T_SDM_Types_Pkg {
  Normal_Supervision_SDM_Types_Pkg,
  Indication_Supervision_SDM_Types_Pkg,
  Overspeed_Supervision_SDM_Types_Pkg,
  Warning_Supervision_SDM_Types_Pkg,
  Intervention_Supervision_SDM_Types_Pkg,
  Undefined_Supervision_SDM_Types_Pkg
} SupervisionStatus_T_SDM_Types_Pkg;
/* SDM_Types_Pkg::SDM_Types_T */
typedef enum kcg_tag_SDM_Types_T_SDM_Types_Pkg {
  CSM_SDM_Types_Pkg,
  TSM_SDM_Types_Pkg,
  RSM_SDM_Types_Pkg,
  No_SDM_Type_SDM_Types_Pkg
} SDM_Types_T_SDM_Types_Pkg;
/* TargetManagement_types::TargetType_T */
typedef enum kcg_tag_TargetType_T_TargetManagement_types {
  EoA_TargetManagement_types,
  SvL_TargetManagement_types,
  MRSP_TargetManagement_types,
  invalid_TargetManagement_types,
  LoA_TargetManagement_types
} TargetType_T_TargetManagement_types;
/* Q_TEXTREPORT */
typedef enum kcg_tag_Q_TEXTREPORT {
  Q_TEXTREPORT_No_driver_acknowledgement_report_required = 0,
  Q_TEXTREPORT_Driver_acknowledgement_report_required = 1
} Q_TEXTREPORT;
/* DMI_Types_Pkg::DMI_context_TXT_MSG_T */
typedef enum kcg_tag_DMI_context_TXT_MSG_T_DMI_Types_Pkg {
  con_undefined_DMI_Types_Pkg,
  con_levelMgmt_DMI_Types_Pkg,
  con_modeChange_DMI_Types_Pkg,
  con_trackRequest_DMI_Types_Pkg
} DMI_context_TXT_MSG_T_DMI_Types_Pkg;
/* Level_And_Mode_Types_Pkg::T_TransitionType */
typedef enum kcg_tag_T_TransitionType_Level_And_Mode_Types_Pkg {
  M_TransitionType_Conditional_Level_And_Mode_Types_Pkg,
  M_TransitionType_DriverInit_Level_And_Mode_Types_Pkg,
  M_TransitionType_Normal_Level_And_Mode_Types_Pkg
} T_TransitionType_Level_And_Mode_Types_Pkg;
/* DataDictionary_Pkg::LevelDecisionTableActionKind */
typedef enum kcg_tag_LevelDecisionTableActionKind_DataDictionary_Pkg {
  LD_Invalid_DataDictionary_Pkg,
  LD_Accept_DataDictionary_Pkg,
  LD_Reject_DataDictionary_Pkg,
  LD_NotRelevant_DataDictionary_Pkg,
  LD_01StoreIfPendingL1Transition_DataDictionary_Pkg,
  LD_02StoreIfPendingL2L3Transition_DataDictionary_Pkg,
  LD_03RejectIfPendingAckOfTrainData_DataDictionary_Pkg,
  LD_04RejectIfSPPAndGradientOnBoardOrMACoverNotFullLength_DataDictionary_Pkg,
  LD_05RejectIfEmergencyBrakeActive_DataDictionary_Pkg,
  LD_06StoreIfPendingNTCTransition_DataDictionary_Pkg,
  LD_07RejectIfNoPendingNTCTransition_DataDictionary_Pkg,
  LD_08InhibitionOfRevocableTSR_DataDictionary_Pkg,
  LD_09RejectIfNoL2L3TransitionStored_DataDictionary_Pkg,
  LD_10ReferredLRBGWithDifferentPreviousLRBG_DataDictionary_Pkg,
  LD_11LevelTransitionOrderInSameMessage_DataDictionary_Pkg,
  LD_12RejectIfSameMessageWithDriverAck_DataDictionary_Pkg,
  LD_13RejectIfNotTogetherWithImmediateLevelTransitionOrder_DataDictionary_Pkg,
  LD_0102StoreIfPendingLevelTransition_DataDictionary_Pkg,
  LD_030405Reject_DataDictionary_Pkg
} LevelDecisionTableActionKind_DataDictionary_Pkg;
/* DataDictionary_Pkg::ModeDecisionTableActionKind */
typedef enum kcg_tag_ModeDecisionTableActionKind_DataDictionary_Pkg {
  MD_Invalid_DataDictionary_Pkg,
  MD_Accept_DataDictionary_Pkg,
  MD_Reject_DataDictionary_Pkg,
  MD_NotRelevant_DataDictionary_Pkg,
  MD_01IfFollowingExitTRMode_DataDictionary_Pkg,
  MD_02IfCabActive_DataDictionary_Pkg,
  MD_03StoreRBCIDAndPhone_DataDictionary_Pkg,
  MD_04IfValidTrainDataStored_DataDictionary_Pkg,
  MD_05OnlyLevelTransitionAnnouncements_DataDictionary_Pkg,
  MD_06RejectIfOverrideActive_DataDictionary_Pkg,
  MD_07AcceptImmediateAndConditionalLevelTransitionOrder_DataDictionary_Pkg,
  MD_08NullDistanceRBCTransition_DataDictionary_Pkg,
  MD_09MaxSafeFrontWithinSupervision_DataDictionary_Pkg,
  MD_0204Accept_DataDictionary_Pkg,
  MD_0105Accept_DataDictionary_Pkg
} ModeDecisionTableActionKind_DataDictionary_Pkg;
/* TA_MA::ActionType */
typedef enum kcg_tag_ActionType_TA_MA {
  replace_TA_MA,
  hold_TA_MA,
  delete_TA_MA
} ActionType_TA_MA;
/* M_LEVELTR */
typedef enum kcg_tag_M_LEVELTR {
  M_LEVELTR_Level_0 = 0,
  M_LEVELTR_Level_NTC_specified_by_NID_NTC = 1,
  M_LEVELTR_Level_1 = 2,
  M_LEVELTR_Level_2 = 3,
  M_LEVELTR_Level_3 = 4
} M_LEVELTR;
/* Q_DIFF */
typedef enum kcg_tag_Q_DIFF {
  Q_DIFF_Cant_Deficiency_specific_category = 0,
  Q_DIFF_Other_specific_category_replaces_the_Cant_Deficiency_SSP = 1,
  Q_DIFF_Other_specific_category_does_not_replace_the_Cant_Deficiency_SSP = 2
} Q_DIFF;
/* NC_CDDIFF */
typedef enum kcg_tag_NC_CDDIFF {
  NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm = 0,
  NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_100_mm = 1,
  NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_130_mm = 2,
  NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_150_mm = 3,
  NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_165_mm = 4,
  NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_180_mm = 5,
  NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_210_mm = 6,
  NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_225_mm = 7,
  NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_245_mm = 8,
  NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_275_mm = 9,
  NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_300_mm = 10
} NC_CDDIFF;
/* Q_FRONT */
typedef enum kcg_tag_Q_FRONT {
  Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element = 0,
  Q_FRONT_No_train_length_delay_on_validity_end_point_of_profile_element = 1
} Q_FRONT;
/* Q_SRSTOP */
typedef enum kcg_tag_Q_SRSTOP {
  Q_SRSTOP_Stop_if_in_SR_mode = 0,
  Q_SRSTOP_Go_if_in_SR_mode = 1
} Q_SRSTOP;
/* M_MAMODE */
typedef enum kcg_tag_M_MAMODE {
  M_MAMODE_On_Sight = 0,
  M_MAMODE_Shunting = 1,
  M_MAMODE_Limited_Supervision = 2
} M_MAMODE;
/* Q_MAMODE */
typedef enum kcg_tag_Q_MAMODE {
  Q_MAMODE_as_the_EOA = 0,
  Q_MAMODE_as_both_the_EOA_and_SvL = 1
} Q_MAMODE;
/* Q_GDIR */
typedef enum kcg_tag_Q_GDIR { Q_GDIR_downhill = 0, Q_GDIR_uphill = 1 } Q_GDIR;
/* Q_OVERLAP */
typedef enum kcg_tag_Q_OVERLAP {
  Q_OVERLAP_No_overlap_information = 0,
  Q_OVERLAP_Overlap_information_to_follow = 1
} Q_OVERLAP;
/* Q_DANGERPOINT */
typedef enum kcg_tag_Q_DANGERPOINT {
  Q_DANGERPOINT_No_danger_point_information = 0,
  Q_DANGERPOINT_Danger_point_information_to_follow = 1
} Q_DANGERPOINT;
/* Q_ENDTIMER */
typedef enum kcg_tag_Q_ENDTIMER {
  Q_ENDTIMER_No_End_section_timer_information = 0,
  Q_ENDTIMER_End_section_timer_information_to_follow = 1
} Q_ENDTIMER;
/* Q_SECTIONTIMER */
typedef enum kcg_tag_Q_SECTIONTIMER {
  Q_SECTIONTIMER_No_Section_Timer_information = 0,
  Q_SECTIONTIMER_Section_Timer_information_to_follow = 1
} Q_SECTIONTIMER;
/* TrackAtlasTypes::MA_Level_t */
typedef enum kcg_tag_MA_Level_t_TrackAtlasTypes {
  MA_L1_TrackAtlasTypes,
  MA_L23_TrackAtlasTypes
} MA_Level_t_TrackAtlasTypes;
/* Q_NVEMRRLS */
typedef enum kcg_tag_Q_NVEMRRLS {
  Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill = 0,
  Q_NVEMRRLS_Revoke_emergency_brake_command_when_permitted_speed_supervision_limit_is_no_longer_exceed = 1
} Q_NVEMRRLS;
/* Q_NVSBTSMPERM */
typedef enum kcg_tag_Q_NVSBTSMPERM {
  Q_NVSBTSMPERM_No = 0,
  Q_NVSBTSMPERM_Yes = 1
} Q_NVSBTSMPERM;
/* M_NVCONTACT */
typedef enum kcg_tag_M_NVCONTACT {
  M_NVCONTACT_Train_trip = 0,
  M_NVCONTACT_Apply_service_brake = 1,
  M_NVCONTACT_No_Reaction = 2
} M_NVCONTACT;
/* M_NVDERUN */
typedef enum kcg_tag_M_NVDERUN {
  M_NVDERUN_No = 0,
  M_NVDERUN_Yes = 1
} M_NVDERUN;
/* Q_NVDRIVER_ADHES */
typedef enum kcg_tag_Q_NVDRIVER_ADHES {
  Q_NVDRIVER_ADHES_Not_allowed = 0,
  Q_NVDRIVER_ADHES_Allowed = 1
} Q_NVDRIVER_ADHES;
/* Q_NVGUIPERM */
typedef enum kcg_tag_Q_NVGUIPERM {
  Q_NVGUIPERM_No = 0,
  Q_NVGUIPERM_Yes = 1
} Q_NVGUIPERM;
/* Q_NVSBFBPERM */
typedef enum kcg_tag_Q_NVSBFBPERM {
  Q_NVSBFBPERM_No = 0,
  Q_NVSBFBPERM_Yes = 1
} Q_NVSBFBPERM;
/* Q_NVINHSMICPERM */
typedef enum kcg_tag_Q_NVINHSMICPERM {
  Q_NVINHSMICPERM_No = 0,
  Q_NVINHSMICPERM_Yes = 1
} Q_NVINHSMICPERM;
/* M_NVEBCL */
typedef enum kcg_tag_M_NVEBCL {
  M_NVEBCL_Confidence_level_50 = 0,
  M_NVEBCL_Confidence_level_90 = 1,
  M_NVEBCL_Confidence_level_99 = 2,
  M_NVEBCL_Confidence_level_99_9 = 3,
  M_NVEBCL_Confidence_level_99_99 = 4,
  M_NVEBCL_Confidence_level_99_999 = 5,
  M_NVEBCL_Confidence_level_99_9999 = 6,
  M_NVEBCL_Confidence_level_99_99999 = 7,
  M_NVEBCL_Confidence_level_99_999999 = 8,
  M_NVEBCL_Confidence_level_99_9999999 = 9
} M_NVEBCL;
/* Q_NVKINT */
typedef enum kcg_tag_Q_NVKINT {
  Q_NVKINT_No_integrated_correction_factors_follow = 0,
  Q_NVKINT_Integrated_correction_factors_follow = 1
} Q_NVKINT;
/* Q_NVKVINTSET */
typedef enum kcg_tag_Q_NVKVINTSET {
  Q_NVKVINTSET_Freight_trains = 0,
  Q_NVKVINTSET_Conventional_passenger_trains = 1
} Q_NVKVINTSET;
/* L_NVKRINT */
typedef enum kcg_tag_L_NVKRINT {
  L_NVKRINT_0m = 0,
  L_NVKRINT_25m = 1,
  L_NVKRINT_50m = 2,
  L_NVKRINT_75m = 3,
  L_NVKRINT_100m = 4,
  L_NVKRINT_150m = 5,
  L_NVKRINT_200m = 6,
  L_NVKRINT_300m = 7,
  L_NVKRINT_400m = 8,
  L_NVKRINT_500m = 9,
  L_NVKRINT_600m = 10,
  L_NVKRINT_700m = 11,
  L_NVKRINT_800m = 12,
  L_NVKRINT_900m = 13,
  L_NVKRINT_1000m = 14,
  L_NVKRINT_1100m = 15,
  L_NVKRINT_1200m = 16,
  L_NVKRINT_1300m = 17,
  L_NVKRINT_1400m = 18,
  L_NVKRINT_1500m = 19,
  L_NVKRINT_1600m = 20,
  L_NVKRINT_1700m = 21,
  L_NVKRINT_1800m = 22,
  L_NVKRINT_1900m = 23,
  L_NVKRINT_2000m = 24,
  L_NVKRINT_2100m = 25,
  L_NVKRINT_2200m = 26,
  L_NVKRINT_2300m = 27,
  L_NVKRINT_2400m = 28,
  L_NVKRINT_2500m = 29,
  L_NVKRINT_2600m = 30,
  L_NVKRINT_2700m = 31
} L_NVKRINT;
/* Q_NEWCOUNTRY */
typedef enum kcg_tag_Q_NEWCOUNTRY {
  Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows = 0,
  Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows = 1
} Q_NEWCOUNTRY;
/* Q_LINKORIENTATION */
typedef enum kcg_tag_Q_LINKORIENTATION {
  Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction = 0,
  Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction = 1
} Q_LINKORIENTATION;
/* Q_LINKREACTION */
typedef enum kcg_tag_Q_LINKREACTION {
  Q_LINKREACTION_Train_trip = 0,
  Q_LINKREACTION_Apply_service_brake = 1,
  Q_LINKREACTION_No_Reaction = 2
} Q_LINKREACTION;
/* Handover_Pkg::abilityToHandleCommunicationSessions */
typedef enum kcg_tag_abilityToHandleCommunicationSessions_Handover_Pkg {
  isAbleToManageOneSession_Handover_Pkg,
  isAbleToManageTwoSessions_Handover_Pkg
} abilityToHandleCommunicationSessions_Handover_Pkg;
/* RCM_Types_Pkg::mobileHealthStatus_T */
typedef enum kcg_tag_mobileHealthStatus_T_RCM_Types_Pkg {
  mhs_nok_RCM_Types_Pkg,
  mhs_ok_RCM_Types_Pkg
} mobileHealthStatus_T_RCM_Types_Pkg;
/* RCM_Types_Pkg::mobileRegistrationStatus_T */
typedef enum kcg_tag_mobileRegistrationStatus_T_RCM_Types_Pkg {
  mrs_unregistered_RCM_Types_Pkg,
  mrs_registering_RCM_Types_Pkg,
  mrs_registered_RCM_Types_Pkg
} mobileRegistrationStatus_T_RCM_Types_Pkg;
/* RCM_Types_Pkg::mobileRegistrationAction_T */
typedef enum kcg_tag_mobileRegistrationAction_T_RCM_Types_Pkg {
  mra_nop_RCM_Types_Pkg,
  mra_register_RCM_Types_Pkg,
  mra_unregister_RCM_Types_Pkg
} mobileRegistrationAction_T_RCM_Types_Pkg;
/* RCM_Session_Types_Pkg::sessionPhase_T */
typedef enum kcg_tag_sessionPhase_T_RCM_Session_Types_Pkg {
  sp_terminated_RCM_Session_Types_Pkg,
  sp_establishing_RCM_Session_Types_Pkg,
  sp_maintaining_RCM_Session_Types_Pkg,
  sp_terminating_RCM_Session_Types_Pkg
} sessionPhase_T_RCM_Session_Types_Pkg;
/* RCM_Types_Pkg::mobileConnectionStatus_T */
typedef enum kcg_tag_mobileConnectionStatus_T_RCM_Types_Pkg {
  mcs_disconnected_RCM_Types_Pkg,
  mcs_connecting_RCM_Types_Pkg,
  mcs_connected_RCM_Types_Pkg
} mobileConnectionStatus_T_RCM_Types_Pkg;
/* RCM_Types_Pkg::mobileConnetionAction_T */
typedef enum kcg_tag_mobileConnetionAction_T_RCM_Types_Pkg {
  mca_nop_RCM_Types_Pkg,
  mca_connect_RCM_Types_Pkg,
  mca_disconnect_RCM_Types_Pkg,
  mca_expectRadioHole_RCM_Types_Pkg,
  mca_unexpectRadioHole_RCM_Types_Pkg
} mobileConnetionAction_T_RCM_Types_Pkg;
/* RCM_Session_Types_Pkg::safeRadioConnnectionIndicator_T */
typedef enum kcg_tag_safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg {
  srci_noConnection_RCM_Session_Types_Pkg,
  srci_connectionLost_setupFailed_RCM_Session_Types_Pkg,
  srci_connectionUp_RCM_Session_Types_Pkg
} safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg;
/* Q_RBC */
typedef enum kcg_tag_Q_RBC {
  Q_RBC_Terminate_communication_session = 0,
  Q_RBC_Establish_communication_session = 1
} Q_RBC;
/* Q_SLEEPSESSION */
typedef enum kcg_tag_Q_SLEEPSESSION {
  Q_SLEEPSESSION_Ignore_session_establishment_order = 0,
  Q_SLEEPSESSION_Execute_session_establishment_order = 1
} Q_SLEEPSESSION;
/* TIU_Types_Pkg::M_Isolation_status_T */
typedef enum kcg_tag_M_Isolation_status_T_TIU_Types_Pkg {
  on_board_equipment_is_isolated_TIU_Types_Pkg,
  on_board_equipement_is_not_isolated_TIU_Types_Pkg,
  isolation_status_not_defined_TIU_Types_Pkg
} M_Isolation_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_brake_inhibit_command_T */
typedef enum kcg_tag_M_brake_inhibit_command_T_TIU_Types_Pkg {
  brake_inhibit_not_defined_TIU_Types_Pkg,
  inhibit_brake_TIU_Types_Pkg,
  do_not_inhibit_brake_TIU_Types_Pkg
} M_brake_inhibit_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_eddy_current_brake_inhibition_T */
typedef enum kcg_tag_M_eddy_current_brake_inhibition_T_TIU_Types_Pkg {
  eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg,
  inhibit_for_service_brake_TIU_Types_Pkg,
  inhibit_for_emergency_brake_TIU_Types_Pkg,
  inhibit_for_both_service_emergency_brake_TIU_Types_Pkg,
  do_not_inhibit_for_service_brake_TIU_Types_Pkg,
  do_not_inhibit_for_emergency_brake_TIU_Types_Pkg,
  do_not_inhibit_for_both_service_emergency_brake_TIU_Types_Pkg
} M_eddy_current_brake_inhibition_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_pantograph_command_T */
typedef enum kcg_tag_M_pantograph_command_T_TIU_Types_Pkg {
  pantograph_command_not_defined_TIU_Types_Pkg,
  lower_pantograph_TIU_Types_Pkg,
  raise_pantograph_TIU_Types_Pkg
} M_pantograph_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_airtightness_command_T */
typedef enum kcg_tag_M_airtightness_command_T_TIU_Types_Pkg {
  airtightness_command_not_defined_TIU_Types_Pkg,
  tunnel_condition_active_TIU_Types_Pkg,
  tunnel_condition_not_active_TIU_Types_Pkg
} M_airtightness_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_mainpowerswitch_command_T */
typedef enum kcg_tag_M_mainpowerswitch_command_T_TIU_Types_Pkg {
  open_main_power_swicth_TIU_Types_Pkg,
  close_main_power_switch_TIU_Types_Pkg
} M_mainpowerswitch_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_voltage_types_T */
typedef enum kcg_tag_M_voltage_types_T_TIU_Types_Pkg {
  line_not_fitted_with_any_traction_system_TIU_Types_Pkg,
  ac_25kV_50Hz_TIU_Types_Pkg,
  ac_15kV_16_7Hz_TIU_Types_Pkg,
  dc_3kV_TIU_Types_Pkg,
  dc_1_5kV_TIU_Types_Pkg,
  dc_600_750kV_TIU_Types_Pkg
} M_voltage_types_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_traction_cutoff_command_T */
typedef enum kcg_tag_M_traction_cutoff_command_T_TIU_Types_Pkg {
  traction_cutoff_command_not_defined_TIU_Types_Pkg,
  apply_traction_cutoff_TIU_Types_Pkg,
  release_traction_cutoff_TIU_Types_Pkg
} M_traction_cutoff_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_brake_signal_command_T */
typedef enum kcg_tag_M_brake_signal_command_T_TIU_Types_Pkg {
  brake_signal_command_not_defined_TIU_Types_Pkg,
  apply_brake_TIU_Types_Pkg,
  release_brake_TIU_Types_Pkg
} M_brake_signal_command_T_TIU_Types_Pkg;
/* API_RadioCommunication_Pkg::cmdRadioUnit_T */
typedef enum kcg_tag_cmdRadioUnit_T_API_RadioCommunication_Pkg {
  cmdr_not_relevant_API_RadioCommunication_Pkg,
  cmdr_connection_request_API_RadioCommunication_Pkg,
  cmdr_disconnection_request_API_RadioCommunication_Pkg,
  cmdr_reset_connection_API_RadioCommunication_Pkg,
  cmdr_networkUnregister_API_RadioCommunication_Pkg,
  cmdr_networkRegister_API_RadioCommunication_Pkg
} cmdRadioUnit_T_API_RadioCommunication_Pkg;
/* MoRC_Pck::mobileHWConnectionStatus_Type */
typedef enum kcg_tag_mobileHWConnectionStatus_Type_MoRC_Pck {
  mhwc_notRegistered_MoRC_Pck,
  mhwc_registered_MoRC_Pck,
  mhwc_connecting_MoRC_Pck,
  mhwc_connected_MoRC_Pck,
  mhwc_registering_MoRC_Pck
} mobileHWConnectionStatus_Type_MoRC_Pck;
/* Common_Types_Pkg::MsgSource_T */
typedef enum kcg_tag_MsgSource_T_Common_Types_Pkg {
  msrc_undefined_Common_Types_Pkg,
  msrc_Euroradio_Common_Types_Pkg,
  msrc_Eurobalise_Common_Types_Pkg,
  msrc_RadioInfillUnit_Common_Types_Pkg,
  msrc_OBU_Common_Types_Pkg
} MsgSource_T_Common_Types_Pkg;
/* Obu_BasicTypes_Pkg::odoMotionState_T */
typedef enum kcg_tag_odoMotionState_T_Obu_BasicTypes_Pkg {
  noMotion_Obu_BasicTypes_Pkg,
  Motion_Obu_BasicTypes_Pkg
} odoMotionState_T_Obu_BasicTypes_Pkg;
/* Obu_BasicTypes_Pkg::odoMotionDirection_T */
typedef enum kcg_tag_odoMotionDirection_T_Obu_BasicTypes_Pkg {
  unknownDirection_Obu_BasicTypes_Pkg,
  cabAFirst_Obu_BasicTypes_Pkg,
  cabBFirst_Obu_BasicTypes_Pkg
} odoMotionDirection_T_Obu_BasicTypes_Pkg;
/* M_ERROR */
typedef enum kcg_tag_M_ERROR {
  M_ERROR_Balise_group_linking_consistency_error = 0,
  M_ERROR_Linked_balise_group_message_consistency_erro = 1,
  M_ERROR_Unlinked_balise_group_message_consistency_error = 2,
  M_ERROR_Radio_message_consistency_error = 3,
  M_ERROR_Radio_sequence_error = 4,
  M_ERROR_Radio_safe_radio_connection_error = 5,
  M_ERROR_Safety_critical_failure = 6,
  M_ERROR_Double_linking_error = 7,
  M_ERROR_Double_repositioning_error = 8
} M_ERROR;
/* Q_MARQSTREASON */
typedef enum kcg_tag_Q_MARQSTREASON {
  Q_MARQSTREASON_Start_selected_by_driver = 1,
  Q_MARQSTREASON_Time_before_reaching_preindication_location_for_the_EOA_or_LOA_reached = 2,
  Q_MARQSTREASON_Time_before_a_section_timer_or_LOA_speed_timer_expires_reached = 4,
  Q_MARQSTREASON_Track_description_deleted = 8,
  Q_MARQSTREASON_TAF_up_to_level_2_or_3_transition_location = 16
} Q_MARQSTREASON;
/* Q_EMERGENCYSTOP */
typedef enum kcg_tag_Q_EMERGENCYSTOP {
  Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA = 0,
  Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_no_update_of_EOA = 1,
  Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted = 2,
  Q_EMERGENCYSTOP_Emergency_stop = 3
} Q_EMERGENCYSTOP;
/* Q_DIRLRBG */
typedef enum kcg_tag_Q_DIRLRBG {
  Q_DIRLRBG_Reverse = 0,
  Q_DIRLRBG_Nominal = 1,
  Q_DIRLRBG_Unknown = 2
} Q_DIRLRBG;
/* Q_DIRTRAIN */
typedef enum kcg_tag_Q_DIRTRAIN {
  Q_DIRTRAIN_Reverse = 0,
  Q_DIRTRAIN_Nominal = 1,
  Q_DIRTRAIN_Unknown = 2
} Q_DIRTRAIN;
/* Q_DLRBG */
typedef enum kcg_tag_Q_DLRBG {
  Q_DLRBG_Reverse = 0,
  Q_DLRBG_Nominal = 1,
  Q_DLRBG_Unknown = 2
} Q_DLRBG;
/* Q_LENGTH */
typedef enum kcg_tag_Q_LENGTH {
  Q_LENGTH_No_train_integrity_information_available = 0,
  Q_LENGTH_Train_integrity_confirmed_by_integrity_monitoring_device = 1,
  Q_LENGTH_Train_integrity_confirmed_by_driver = 2,
  Q_LENGTH_Train_integrity_lost = 3
} Q_LENGTH;
/* M_LOC */
typedef enum kcg_tag_M_LOC {
  M_LOC_Now = 0,
  M_LOC_Every_LRBG_compliant_balise_group = 1,
  M_LOC_Do_not_send_position_report_on_passage_of_LRBG_compliant_balise_group = 2
} M_LOC;
/* Q_LGTLOC */
typedef enum kcg_tag_Q_LGTLOC {
  Q_LGTLOC_Min_safe_rear_end = 0,
  Q_LGTLOC_Max_safe_front_end = 1
} Q_LGTLOC;
/* RBC_Diagnostic_Pkg::DiagMsgType_E */
typedef enum kcg_tag_DiagMsgType_E_RBC_Diagnostic_Pkg {
  DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg,
  DIAG_MSG_TYPE_information_RBC_Diagnostic_Pkg,
  DIAG_MSG_TYPE_warning_RBC_Diagnostic_Pkg,
  DIAG_MSG_TYPE_error_RBC_Diagnostic_Pkg
} DiagMsgType_E_RBC_Diagnostic_Pkg;
/* RBC_Diagnostic_Pkg::DiagMsgSrc_E */
typedef enum kcg_tag_DiagMsgSrc_E_RBC_Diagnostic_Pkg {
  DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg,
  DIAG_MSG_SRC_Process_Unconditional_Emergency_Message_RBC_Diagnostic_Pkg
} DiagMsgSrc_E_RBC_Diagnostic_Pkg;
/* RBC_Diagnostic_Pkg::DiagMsgText_E */
typedef enum kcg_tag_DiagMsgText_E_RBC_Diagnostic_Pkg {
  DIAG_MSG_Empty_RBC_Diagnostic_Pkg,
  DIAG_MSG_Failure_during_session_establishment_RBC_Diagnostic_Pkg
} DiagMsgText_E_RBC_Diagnostic_Pkg;
/* Q_UPDOWN */
typedef enum kcg_tag_Q_UPDOWN {
  Q_UPDOWN_Down_link_telegram = 0,
  Q_UPDOWN_Up_link_telegram = 1
} Q_UPDOWN;
/* Q_MEDIA */
typedef enum kcg_tag_Q_MEDIA { Q_MEDIA_Balise = 0, Q_MEDIA_Loop = 1 } Q_MEDIA;
/* N_PIG */
typedef enum kcg_tag_N_PIG {
  N_PIG_I_am_the_1st = 0,
  N_PIG_I_am_the_2nd = 1,
  N_PIG_I_am_the_3rd = 2,
  N_PIG_I_am_the_4th = 3,
  N_PIG_I_am_the_5th = 4,
  N_PIG_I_am_the_6th = 5,
  N_PIG_I_am_the_7th = 6,
  N_PIG_I_am_the_8th = 7
} N_PIG;
/* N_TOTAL */
typedef enum kcg_tag_N_TOTAL {
  N_TOTAL_1_balise_in_the_group = 0,
  N_TOTAL_2_balises_in_the_group = 1,
  N_TOTAL_3_balises_in_the_group = 2,
  N_TOTAL_4_balises_in_the_group = 3,
  N_TOTAL_5_balises_in_the_group = 4,
  N_TOTAL_6_balises_in_the_group = 5,
  N_TOTAL_7_balises_in_the_group = 6,
  N_TOTAL_8_balises_in_the_group = 7
} N_TOTAL;
/* M_DUP */
typedef enum kcg_tag_M_DUP {
  M_DUP_No_duplicates = 0,
  M_DUP_This_balise_is_a_duplicate_of_the_next_balise = 1,
  M_DUP_This_balise_is_a_duplicate_of_the_previous_balise = 2
} M_DUP;
/* Q_LINK */
typedef enum kcg_tag_Q_LINK { Q_LINK_Unlinked = 0, Q_LINK_Linked = 1 } Q_LINK;
/* US_Integration_November::TrackType */
typedef enum kcg_tag_TrackType_US_Integration_November {
  US_01_to_12_US_Integration_November,
  US_13_to_16_US_Integration_November,
  Sheet14_only_US_Integration_November
} TrackType_US_Integration_November;
/* Q_ORIENTATION */
typedef enum kcg_tag_Q_ORIENTATION {
  Q_ORIENTATION_The_balise_group_has_been_passed_by_the_train_in_reverse_direction = 0,
  Q_ORIENTATION_The_balise_group_has_been_passed_by_the_train_in_nominal_direction = 1
} Q_ORIENTATION;
/* M_ACK */
typedef enum kcg_tag_M_ACK {
  M_ACK_No_acknowledgement_required = 0,
  M_ACK_Acknowledgement_required = 1
} M_ACK;
/* Q_SCALE */
typedef enum kcg_tag_Q_SCALE {
  Q_SCALE_10_cm_scale = 0,
  Q_SCALE_1_m_scale = 1,
  Q_SCALE_10_m_scale = 2
} Q_SCALE;
/* TM::OrBG */
typedef enum kcg_tag_OrBG_TM { Amsterdam_TM, Utrecht_TM } OrBG_TM;
/* TM::OrLine */
typedef enum kcg_tag_OrLine_TM { N_TM, Z_TM } OrLine_TM;
/* Q_DIR */
typedef enum kcg_tag_Q_DIR {
  Q_DIR_Reverse = 0,
  Q_DIR_Nominal = 1,
  Q_DIR_Both_directions = 2
} Q_DIR;
/* TIU_Types_Pkg::M_cab_signal_status_T */
typedef enum kcg_tag_M_cab_signal_status_T_TIU_Types_Pkg {
  cab_signal_status_not_defined_TIU_Types_Pkg,
  both_desks_are_closed_TIU_Types_Pkg,
  desk_A_is_open_TIU_Types_Pkg,
  desk_B_is_open_TIU_Types_Pkg,
  both_desks_are_open_TIU_Types_Pkg
} M_cab_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_sleeping_signal_status_T */
typedef enum kcg_tag_M_sleeping_signal_status_T_TIU_Types_Pkg {
  signal_active_TIU_Types_Pkg,
  signal_not_active_TIU_Types_Pkg
} M_sleeping_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_passiveshunting_signal_status_T */
typedef enum kcg_tag_M_passiveshunting_signal_status_T_TIU_Types_Pkg {
  passive_shunting_permitted_TIU_Types_Pkg,
  passive_shunting_not_permitted_TIU_Types_Pkg
} M_passiveshunting_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_nonleading_signal_status_T */
typedef enum kcg_tag_M_nonleading_signal_status_T_TIU_Types_Pkg {
  non_leading_signall_status_not_defined_TIU_Types_Pkg,
  non_leading_permitted_TIU_Types_Pkg,
  non_leading_not_permitted_TIU_Types_Pkg
} M_nonleading_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_directioncontroller_signal_status_T */
typedef enum kcg_tag_M_directioncontroller_signal_status_T_TIU_Types_Pkg {
  direction_controller_in_neutral_TIU_Types_Pkg,
  direction_controller_in_forward_TIU_Types_Pkg,
  direction_controller_in_backward_TIU_Types_Pkg
} M_directioncontroller_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_trainintegrity_signal_status_T */
typedef enum kcg_tag_M_trainintegrity_signal_status_T_TIU_Types_Pkg {
  train_is_not_integer_TIU_Types_Pkg,
  train_is_integer_TIU_Types_Pkg
} M_trainintegrity_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_traction_signal_status_T */
typedef enum kcg_tag_M_traction_signal_status_T_TIU_Types_Pkg {
  traction_on_TIU_Types_Pkg,
  traction_off_TIU_Types_Pkg
} M_traction_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_brake_status_T */
typedef enum kcg_tag_M_brake_status_T_TIU_Types_Pkg {
  brake_status_not_defined_TIU_Types_Pkg,
  is_active_TIU_Types_Pkg,
  is_not_active_TIU_Types_Pkg
} M_brake_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_train_data_entry_type_T */
typedef enum kcg_tag_M_train_data_entry_type_T_TIU_Types_Pkg {
  fixed_entry_type_TIU_Types_Pkg,
  flexible_entry_type_TIU_Types_Pkg,
  switchable_entry_type_TIU_Types_Pkg,
  no_entry_type_TIU_Types_Pkg
} M_train_data_entry_type_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_trackcond_T */
typedef enum kcg_tag_M_trackcond_T_TIU_Types_Pkg {
  non_stopping_area_TIU_Types_Pkg,
  tunnel_stopping_area_TIU_Types_Pkg,
  sound_horn_TIU_Types_Pkg,
  powerless_section_lower_pantograph_TIU_Types_Pkg,
  radio_hole_TIU_Types_Pkg,
  air_tightness_TIU_Types_Pkg,
  switch_off_regenerative_brake_TIU_Types_Pkg,
  switch_off_eddy_current_brake_for_service_brake_TIU_Types_Pkg,
  switch_off_magnetic_shoe_brake_TIU_Types_Pkg,
  powerless_section_switch_off_main_power_switch_TIU_Types_Pkg,
  switch_off_eddy_current_brake_for_emergency_brake_TIU_Types_Pkg
} M_trackcond_T_TIU_Types_Pkg;
/* NC_CDTRAIN */
typedef enum kcg_tag_NC_CDTRAIN {
  NC_CDTRAIN_Cant_Deficiency_80_mm = 0,
  NC_CDTRAIN_Cant_Deficiency_100_mm = 1,
  NC_CDTRAIN_Cant_Deficiency_130_mm = 2,
  NC_CDTRAIN_Cant_Deficiency_150_mm = 3,
  NC_CDTRAIN_Cant_Deficiency_165_mm = 4,
  NC_CDTRAIN_Cant_Deficiency_180_mm = 5,
  NC_CDTRAIN_Cant_Deficiency_210_mm = 6,
  NC_CDTRAIN_Cant_Deficiency_225_mm = 7,
  NC_CDTRAIN_Cant_Deficiency_245_mm = 8,
  NC_CDTRAIN_Cant_Deficiency_275_mm = 9,
  NC_CDTRAIN_Cant_Deficiency_300_mm = 10
} NC_CDTRAIN;
/* M_VOLTAGE */
typedef enum kcg_tag_M_VOLTAGE {
  M_VOLTAGE_Line_not_fitted_with_any_traction_system = 0,
  M_VOLTAGE_AC_25_kV_50_Hz = 1,
  M_VOLTAGE_AC_15_kV_16_7_Hz = 2,
  M_VOLTAGE_DC_3_kV = 3,
  M_VOLTAGE_DC_1_5_kV = 4,
  M_VOLTAGE_DC_600_or_750_V = 5
} M_VOLTAGE;
/* M_TRACKCOND */
typedef enum kcg_tag_M_TRACKCOND {
  M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted = 0,
  M_TRACKCOND_Tunnel_stopping_area_Initial_state_is_no_tunnel_stopping_area = 1,
  M_TRACKCOND_Sound_horn_Initial_state_is_is_no_request_for_sound_horn = 2,
  M_TRACKCOND_Powerless_section_Lower_pantograph_Initial_state_is_not_powerless_section = 3,
  M_TRACKCOND_Radio_hole_stop_supervising_T_NVCONTACT_Initial_state_is_supervise_T_NVCONTACT = 4,
  M_TRACKCOND_Air_tightness_Initial_state_is_no_request_for_air_tightness = 5,
  M_TRACKCOND_Switch_off_regenerative_brake_Initial_state_is_regenerative_brake_on = 6,
  M_TRACKCOND_Switch_off_eddy_current_brake_for_service_brake_Initial_state_is_eddy_current_brake_for_ = 7,
  M_TRACKCOND_Switch_off_magnetic_shoe_brake_Initial_state_is_magnetic_shoe_brake_on = 8,
  M_TRACKCOND_Powerless_section_switch_off_the_main_power_switch_Initial_state_is_not_powerless_sectio = 9,
  M_TRACKCOND_Switch_off_eddy_current_brake_for_emergency_brake_Initial_state_is_eddy_current_brake_fo = 10
} M_TRACKCOND;
/* DMI_Types_Pkg::Icon_control_flag_T */
typedef enum kcg_tag_Icon_control_flag_T_DMI_Types_Pkg {
  show_icon_in_area_DMI_Types_Pkg,
  clear_area_DMI_Types_Pkg,
  show_icon_flashing_in_area_DMI_Types_Pkg,
  show_icon_with_yellow_flashing_frame_in_area_DMI_Types_Pkg
} Icon_control_flag_T_DMI_Types_Pkg;
/* DMI_Types_Pkg::Icon_group_T */
typedef enum kcg_tag_Icon_group_T_DMI_Types_Pkg {
  level_symbol_DMI_Types_Pkg,
  mode_symbols_DMI_Types_Pkg,
  status_symbols_DMI_Types_Pkg,
  order_an_announcements_symbols_DMI_Types_Pkg,
  planning_information_symbols_DMI_Types_Pkg,
  navigation_symbols_DMI_Types_Pkg,
  settings_symbols_DMI_Types_Pkg
} Icon_group_T_DMI_Types_Pkg;
/* DMI_Types_Pkg::Area_group_T */
typedef enum kcg_tag_Area_group_T_DMI_Types_Pkg {
  A_DMI_Types_Pkg,
  B_DMI_Types_Pkg,
  C_DMI_Types_Pkg,
  D_DMI_Types_Pkg,
  E_DMI_Types_Pkg,
  F_DMI_Types_Pkg,
  G_DMI_Types_Pkg,
  H_DMI_Types_Pkg
} Area_group_T_DMI_Types_Pkg;
/* M_ADHESION */
typedef enum kcg_tag_M_ADHESION {
  M_ADHESION_Slippery_rail = 0,
  M_ADHESION_Non_slippery_rail = 1
} M_ADHESION;
/* DMI_Types_Pkg::DMI_Request_T */
typedef enum kcg_tag_DMI_Request_T_DMI_Types_Pkg {
  Start_of_mission_DMI_Types_Pkg,
  Shunting_entry_DMI_Types_Pkg,
  Shunting_exit_DMI_Types_Pkg,
  Non_leading_DMI_Types_Pkg,
  Non_leading_exit_DMI_Types_Pkg,
  Maintain_shunting_DMI_Types_Pkg,
  Level_entry_request_DMI_Types_Pkg,
  Override_EOA_DMI_Types_Pkg,
  Override_route_unsuitability_DMI_Types_Pkg,
  Request_for_radio_network_entry_DMI_Types_Pkg,
  Request_for_train_data_DMI_Types_Pkg,
  Request_for_Adhesion_factor_data_DMI_Types_Pkg,
  Request_for_SR_data_DMI_Types_Pkg,
  Request_for_system_version_DMI_Types_Pkg,
  Request_for_switching_train_data_entry_DMI_Types_Pkg,
  Request_for_train_data_view_DMI_Types_Pkg,
  Request_to_show_geographical_position_DMI_Types_Pkg,
  Language_changed_DMI_Types_Pkg,
  Train_data_entry_aborted_DMI_Types_Pkg,
  Train_running_number_entry_aborted_DMI_Types_Pkg,
  SR_data_entry_aborted_DMI_Types_Pkg,
  Radio_network_entry_aborted_DMI_Types_Pkg,
  Request_to_hide_geographical_information_DMI_Types_Pkg,
  Request_to_show_supervision_data_DMI_Types_Pkg,
  Request_to_hide_supervision_data_DMI_Types_Pkg,
  Scroll_text_up_DMI_Types_Pkg,
  Scroll_text_down_DMI_Types_Pkg,
  Request_to_contact_last_known_RBC_DMI_Types_Pkg,
  Request_to_use_short_number_DMI_Types_Pkg,
  Request_isolation_DMI_Types_Pkg,
  Track_Ahead_Free_is_validated_DMI_Types_Pkg,
  The_Train_Integrity_request_DMI_Types_Pkg,
  Set_VBC_request_DMI_Types_Pkg,
  Remove_VBC_request_DMI_Types_Pkg,
  Show_tunnel_stopping_information_DMI_Types_Pkg,
  Hide_tunnel_stopping_information_DMI_Types_Pkg,
  NTC_data_entry_request_DMI_Types_Pkg,
  End_of_NTC_data_entry_DMI_Types_Pkg
} DMI_Request_T_DMI_Types_Pkg;
/* DMI_Types_Pkg::DMI_StatusSet_T */
typedef enum kcg_tag_DMI_StatusSet_T_DMI_Types_Pkg {
  Running_state_DMI_Types_Pkg,
  Starting_state_DMI_Types_Pkg,
  Failure_state_DMI_Types_Pkg,
  Running_not_active_state_DMI_Types_Pkg,
  Train_Speed_Overflow_DMI_Types_Pkg,
  Invalid_track_condition_DMI_Types_Pkg,
  Invalid_predefined_text_message_DMI_Types_Pkg,
  Invalid_text_message_DMI_Types_Pkg,
  HW_warning_temp_reached_DMI_Types_Pkg,
  TFT_OFF_temp_reached_DMI_Types_Pkg,
  Device_OFF_temp_reached_DMI_Types_Pkg,
  Over_temperature_DMI_Types_Pkg,
  Backlight_on_off_DMI_Types_Pkg,
  FAN_blocked_DMI_Types_Pkg,
  Power_supply_key_switch_off_DMI_Types_Pkg,
  Watchdog_not_running_DMI_Types_Pkg
} DMI_StatusSet_T_DMI_Types_Pkg;
/* M_VERSION */
typedef enum kcg_tag_M_VERSION {
  M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS = 0,
  M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0 = 16,
  M_VERSION_Version_1_1_introduced_in_SRS_3_3_0 = 17,
  M_VERSION_Version_2_0_introduced_in_SRS_3_3_0 = 32
} M_VERSION;
/* DMI_Types_Pkg::DMI_DMI_Identifier_T */
typedef enum kcg_tag_DMI_DMI_Identifier_T_DMI_Types_Pkg {
  DMI_1_DMI_Types_Pkg,
  DMI_2_DMI_Types_Pkg
} DMI_DMI_Identifier_T_DMI_Types_Pkg;
/* DMI_Types_Pkg::DMI_Cabin_Identifier_T */
typedef enum kcg_tag_DMI_Cabin_Identifier_T_DMI_Types_Pkg {
  cabin_A_DMI_Types_Pkg,
  cabin_B_DMI_Types_Pkg
} DMI_Cabin_Identifier_T_DMI_Types_Pkg;
/* TIU_Types_Pkg::cab_ID_T */
typedef enum kcg_tag_cab_ID_T_TIU_Types_Pkg {
  CabUndefined_TIU_Types_Pkg,
  CabA_TIU_Types_Pkg,
  CabB_TIU_Types_Pkg
} cab_ID_T_TIU_Types_Pkg;
/* DMI_Types_Pkg::DMI_List_Entry_Request_T */
typedef enum kcg_tag_DMI_List_Entry_Request_T_DMI_Types_Pkg {
  Enter_revalidate_driver_identifier_DMI_Types_Pkg,
  Enter_revalidate_train_running_number_DMI_Types_Pkg,
  Enter_revalidate_ETCS_level_DMI_Types_Pkg,
  Enter_RBC_contact_menu_DMI_Types_Pkg,
  Validate_train_data_DMI_Types_Pkg,
  Enter_NTC_data_DMI_Types_Pkg,
  Spare_DMI_Types_Pkg,
  Enable_the_track_ahead_free_by_the_driver_DMI_Types_Pkg,
  Disable_the_Track_Ahead_free_page_DMI_Types_Pkg,
  Show_main_window_DMI_Types_Pkg,
  Hide_main_window_DMI_Types_Pkg,
  Hide_adhesion_factor_entry_window_DMI_Types_Pkg,
  Hide_staff_responsible_entry_window_DMI_Types_Pkg,
  Show_Set_VBC_validation_window_DMI_Types_Pkg,
  Show_Remove_VBC_validation_window_DMI_Types_Pkg
} DMI_List_Entry_Request_T_DMI_Types_Pkg;
/* NC_TRAIN */
typedef enum kcg_tag_NC_TRAIN {
  NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category = 0,
  NC_TRAIN_Freight_train_braked_in_P_position = 1,
  NC_TRAIN_Freight_train_braked_in_G_position = 2,
  NC_TRAIN_Passenger_train = 4
} NC_TRAIN;
/* M_AXLELOADCAT */
typedef enum kcg_tag_M_AXLELOADCAT {
  M_AXLELOADCAT_A = 0,
  M_AXLELOADCAT_HS17 = 1,
  M_AXLELOADCAT_B1 = 2,
  M_AXLELOADCAT_B2 = 3,
  M_AXLELOADCAT_C2 = 4,
  M_AXLELOADCAT_C3 = 5,
  M_AXLELOADCAT_C4 = 6,
  M_AXLELOADCAT_D2 = 7,
  M_AXLELOADCAT_D3 = 8,
  M_AXLELOADCAT_D4 = 9,
  M_AXLELOADCAT_D4XL = 10,
  M_AXLELOADCAT_E4 = 11,
  M_AXLELOADCAT_E5 = 12
} M_AXLELOADCAT;
/* M_LOADINGGAUGE */
typedef enum kcg_tag_M_LOADINGGAUGE {
  M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles = 0,
  M_LOADINGGAUGE_G1 = 1,
  M_LOADINGGAUGE_GA = 2,
  M_LOADINGGAUGE_GB = 3,
  M_LOADINGGAUGE_GC = 4
} M_LOADINGGAUGE;
/* M_AIRTIGHT */
typedef enum kcg_tag_M_AIRTIGHT {
  M_AIRTIGHT_Not_fitted = 0,
  M_AIRTIGHT_Fitted = 1
} M_AIRTIGHT;
/* M_MODE */
typedef enum kcg_tag_M_MODE {
  M_MODE_Full_Supervision = 0,
  M_MODE_On_Sight = 1,
  M_MODE_Staff_Responsible = 2,
  M_MODE_Shunting = 3,
  M_MODE_Unfitted = 4,
  M_MODE_Sleeping = 5,
  M_MODE_Stand_By = 6,
  M_MODE_Trip = 7,
  M_MODE_Post_Trip = 8,
  M_MODE_System_Failure = 9,
  M_MODE_Isolation = 10,
  M_MODE_Non_Leading = 11,
  M_MODE_Limited_Supervision = 12,
  M_MODE_National_System = 13,
  M_MODE_Reversing = 14,
  M_MODE_Passive_Shunting = 15,
  M_MODE_No_Power = 16
} M_MODE;
/* API_RadioCommunication_Pkg::connectionStatusRadioUnit_T */
typedef enum kcg_tag_connectionStatusRadioUnit_T_API_RadioCommunication_Pkg {
  conn_unknown_API_RadioCommunication_Pkg,
  conn_no_connection_API_RadioCommunication_Pkg,
  conn_ConnectionUp_API_RadioCommunication_Pkg,
  conn_SetupFailed_API_RadioCommunication_Pkg
} connectionStatusRadioUnit_T_API_RadioCommunication_Pkg;
/* DMI_Types_Pkg::M_SupervisionDisplay_T */
typedef enum kcg_tag_M_SupervisionDisplay_T_DMI_Types_Pkg {
  supDis_normal_DMI_Types_Pkg,
  supDis_indication_DMI_Types_Pkg,
  supDis_overspeed_DMI_Types_Pkg,
  supDis_warning_DMI_Types_Pkg,
  supDis_intervention_DMI_Types_Pkg
} M_SupervisionDisplay_T_DMI_Types_Pkg;
/* DMI_Types_Pkg::M_SUPERVISION_STATUS */
typedef enum kcg_tag_M_SUPERVISION_STATUS_DMI_Types_Pkg {
  CSM_DMI_Types_Pkg,
  PIM_DMI_Types_Pkg,
  TSM_DMI_Types_Pkg,
  RSM_DMI_Types_Pkg,
  supervision_status_unknown_DMI_Types_Pkg
} M_SUPERVISION_STATUS_DMI_Types_Pkg;
/* Q_TEXTCLASS */
typedef enum kcg_tag_Q_TEXTCLASS {
  Q_TEXTCLASS_Auxiliary_Information = 0,
  Q_TEXTCLASS_Important_Information = 1
} Q_TEXTCLASS;
/* Q_TEXTCONFIRM */
typedef enum kcg_tag_Q_TEXTCONFIRM {
  Q_TEXTCONFIRM_No_confirmation_required = 0,
  Q_TEXTCONFIRM_Confirmation_required = 1,
  Q_TEXTCONFIRM_Confirmation_required_command_application_of_the_service_brake_when_display_end_condit = 2,
  Q_TEXTCONFIRM_Confirmation_required_command_application_of_the_emergency_brake_when_display_end_cond = 3
} Q_TEXTCONFIRM;
/* DMI_Types_Pkg::DMI_Q_TEXT */
typedef enum kcg_tag_DMI_Q_TEXT_DMI_Types_Pkg {
  balise_read_error_DMI_Types_Pkg,
  communication_error_DMI_Types_Pkg,
  entering_FS_DMI_Types_Pkg,
  entering_OS_DMI_Types_Pkg,
  no_track_condition_will_be_received_DMI_Types_Pkg,
  runaway_movement_DMI_Types_Pkg,
  SH_refused_DMI_Types_Pkg,
  trackside_not_compatible_DMI_Types_Pkg,
  train_data_changed_DMI_Types_Pkg,
  train_is_rejected_DMI_Types_Pkg,
  unauthorized_passing_of_EOA_LOA_DMI_Types_Pkg,
  no_MA_received_at_level_transition_DMI_Types_Pkg,
  SR_distance_exceeded_DMI_Types_Pkg,
  SH_stop_order_DMI_Types_Pkg,
  SR_stop_order_DMI_Types_Pkg,
  emergency_stop_DMI_Types_Pkg,
  trackside_malfunction_DMI_Types_Pkg,
  SH_request_failed_DMI_Types_Pkg,
  RV_distance_esceeded_DMI_Types_Pkg,
  no_track_description_DMI_Types_Pkg,
  STM_brake_Deman_DMI_Types_Pkg,
  route_unsuitable_axle_load_category_DMI_Types_Pkg,
  route_unsuitable_loading_gauge_DMI_Types_Pkg,
  route_unsuitable_traction_system_DMI_Types_Pkg,
  radio_network_registration_failed_DMI_Types_Pkg,
  level_crossing_not_protected_DMI_Types_Pkg,
  acknowledgment_DMI_Types_Pkg
} DMI_Q_TEXT_DMI_Types_Pkg;
/* M_LEVEL */
typedef enum kcg_tag_M_LEVEL {
  M_LEVEL_Level_0 = 0,
  M_LEVEL_Level_NTC_specified_by_NID_NTC = 1,
  M_LEVEL_Level_1 = 2,
  M_LEVEL_Level_2 = 3,
  M_LEVEL_Level_3 = 4
} M_LEVEL;
/* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
typedef enum kcg_tag__68_SSM_TR_SM1 {
  _67_SSM_TR_no_trans_SM1,
  _66_SSM_TR_State1_1_SM1,
  SSM_TR_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_1_SM1,
  SSM_TR_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_1_SM1
} _68_SSM_TR_SM1;
/* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
typedef enum kcg_tag__65_SSM_ST_SM1 {
  _64_SSM_st_State1_SM1,
  SSM_st_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1,
  SSM_st_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1,
  SSM_st_FS_Mode_SM1
} _65_SSM_ST_SM1;
/* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
typedef enum kcg_tag_SSM_TR_Level_NTC_and_Mode_SN {
  SSM_TR_no_trans_Level_NTC_and_Mode_SN,
  SSM_TR_State1_1_Level_NTC_and_Mode_SN,
  SSM_TR_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_1_Level_NTC_and_Mode_SN
} SSM_TR_Level_NTC_and_Mode_SN;
/* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
typedef enum kcg_tag_SSM_ST_Level_NTC_and_Mode_SN {
  SSM_st_State1_Level_NTC_and_Mode_SN,
  SSM_st_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN,
  SSM_st_Level_NTC_andMode_SN_Level_NTC_and_Mode_SN
} SSM_ST_Level_NTC_and_Mode_SN;
/* ManageProcedure_Pkg::Master_Procedure::SM1 */
typedef enum kcg_tag__63_SSM_TR_SM1 {
  _62_SSM_TR_no_trans_SM1,
  SSM_TR_NP_1_SM1,
  SSM_TR_Awakness_of_Train_1_SM1,
  SSM_TR_Awakness_of_Train_2_SM1,
  SSM_TR_Awakness_of_Train_3_SM1
} _63_SSM_TR_SM1;
/* ManageProcedure_Pkg::Master_Procedure::SM1 */
typedef enum kcg_tag__61_SSM_ST_SM1 {
  SSM_st_NP_SM1,
  SSM_st_Awakness_of_Train_SM1,
  SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1,
  SSM_st_SoM_NTC_SN_SM1
} _61_SSM_ST_SM1;
/* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
typedef enum kcg_tag_SSM_TR_SM3_SM1_Awakness_of_Train {
  SSM_TR_no_trans_SM3_SM1_Awakness_of_Train,
  SSM_TR_Waition_for_Driver_ID_1_SM3_SM1_Awakness_of_Train,
  SSM_TR_first_Validation_for_Train_Number_1_SM3_SM1_Awakness_of_Train,
  SSM_TR_first_Validation_for_Train_Number_2_SM3_SM1_Awakness_of_Train,
  SSM_TR_first_Validation_for_Train_Number_3_SM3_SM1_Awakness_of_Train,
  SSM_TR_request_Level_1_SM3_SM1_Awakness_of_Train,
  SSM_TR_Waiting_for_RBC_Establishment_1_SM3_SM1_Awakness_of_Train,
  SSM_TR_Acknowlege_of_Position_from_RBC_1_SM3_SM1_Awakness_of_Train,
  SSM_TR_Validation_of_Train_Data_from_Driver_1_SM3_SM1_Awakness_of_Train,
  SSM_TR_Second_Validation_of_Train_Number_from_Driver_1_SM3_SM1_Awakness_of_Train,
  SSM_TR_Second_Validation_of_Train_Number_from_Driver_2_SM3_SM1_Awakness_of_Train,
  SSM_TR_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_1_SM3_SM1_Awakness_of_Train,
  SSM_TR_SB_1_SM3_SM1_Awakness_of_Train,
  SSM_TR_Waiting_for_Mobile_terminal_registration_1_SM3_SM1_Awakness_of_Train,
  SSM_TR_Waiting_for_driver_selection_E10_E11_or_E12_1_SM3_SM1_Awakness_of_Train
} SSM_TR_SM3_SM1_Awakness_of_Train;
/* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
typedef enum kcg_tag_SSM_ST_SM3_SM1_Awakness_of_Train {
  SSM_st_Waition_for_Driver_ID_SM1_Awakness_of_Train_SM3,
  SSM_st_first_Validation_for_Train_Number_SM1_Awakness_of_Train_SM3,
  SSM_st_request_Level_SM1_Awakness_of_Train_SM3,
  SSM_st_Waiting_for_RBC_Establishment_SM1_Awakness_of_Train_SM3,
  SSM_st_Acknowlege_of_Position_from_RBC_SM1_Awakness_of_Train_SM3,
  SSM_st_Validation_of_Train_Data_from_Driver_SM1_Awakness_of_Train_SM3,
  SSM_st_Second_Validation_of_Train_Number_from_Driver_SM1_Awakness_of_Train_SM3,
  SSM_st_Waiting_for_Acknowledgement_of_Train_Data_from_RBC_SM1_Awakness_of_Train_SM3,
  SSM_st_Waiting_of_Start_from_Driver_SM1_Awakness_of_Train_SM3,
  SSM_st_SB_SM1_Awakness_of_Train_SM3,
  SSM_st_Waiting_for_Mobile_terminal_registration_SM1_Awakness_of_Train_SM3,
  SSM_st_Waiting_for_driver_selection_E10_E11_or_E12_SM1_Awakness_of_Train_SM3
} SSM_ST_SM3_SM1_Awakness_of_Train;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
typedef enum kcg_tag_SSM_TR_modeInterplay {
  SSM_TR_no_trans_modeInterplay,
  SSM_TR_CSM_1_modeInterplay,
  SSM_TR_CSM_2_modeInterplay,
  SSM_TR_TSM_1_modeInterplay,
  SSM_TR_TSM_2_modeInterplay,
  SSM_TR_RSM_1_modeInterplay,
  SSM_TR_RSM_2_modeInterplay
} SSM_TR_modeInterplay;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
typedef enum kcg_tag_SSM_ST_modeInterplay {
  SSM_st_CSM_modeInterplay,
  SSM_st_TSM_modeInterplay,
  SSM_st_RSM_modeInterplay
} SSM_ST_modeInterplay;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
typedef enum kcg_tag_SSM_TR_CSM_modeInterplay_CSM {
  SSM_TR_no_trans_CSM_modeInterplay_CSM,
  SSM_TR_Init_1_CSM_modeInterplay_CSM,
  SSM_TR_Init_2_CSM_modeInterplay_CSM,
  SSM_TR_Init_3_CSM_modeInterplay_CSM,
  SSM_TR_Init_4_CSM_modeInterplay_CSM,
  SSM_TR_Init_5_CSM_modeInterplay_CSM,
  SSM_TR_Init_6_CSM_modeInterplay_CSM,
  SSM_TR_Init_7_CSM_modeInterplay_CSM,
  SSM_TR_Init_8_CSM_modeInterplay_CSM,
  SSM_TR_Init_9_CSM_modeInterplay_CSM,
  SSM_TR_NormalStatus_1_CSM_modeInterplay_CSM,
  SSM_TR_NormalStatus_2_CSM_modeInterplay_CSM,
  SSM_TR_NormalStatus_3_CSM_modeInterplay_CSM,
  SSM_TR_OverspeedStatus_1_CSM_modeInterplay_CSM,
  SSM_TR_OverspeedStatus_2_CSM_modeInterplay_CSM,
  SSM_TR_OverspeedStatus_3_CSM_modeInterplay_CSM,
  SSM_TR_WarningStatus_1_CSM_modeInterplay_CSM,
  SSM_TR_WarningStatus_2_CSM_modeInterplay_CSM,
  SSM_TR_InterventionStatus_1_CSM_modeInterplay_CSM,
  SSM_TR_InterventionStatus_2_CSM_modeInterplay_CSM
} SSM_TR_CSM_modeInterplay_CSM;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
typedef enum kcg_tag_SSM_ST_CSM_modeInterplay_CSM {
  SSM_st_Init_modeInterplay_CSM_CSM,
  SSM_st_NormalStatus_modeInterplay_CSM_CSM,
  SSM_st_OverspeedStatus_modeInterplay_CSM_CSM,
  SSM_st_WarningStatus_modeInterplay_CSM_CSM,
  SSM_st_InterventionStatus_modeInterplay_CSM_CSM
} SSM_ST_CSM_modeInterplay_CSM;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
typedef enum kcg_tag_SSM_TR_SM4_modeInterplay_TSM {
  SSM_TR_no_trans_SM4_modeInterplay_TSM,
  SSM_TR_init_1_SM4_modeInterplay_TSM,
  SSM_TR_init_2_SM4_modeInterplay_TSM,
  SSM_TR_init_3_SM4_modeInterplay_TSM,
  SSM_TR_init_4_SM4_modeInterplay_TSM,
  SSM_TR_init_5_SM4_modeInterplay_TSM,
  SSM_TR_init_6_SM4_modeInterplay_TSM,
  SSM_TR_Normal_1_SM4_modeInterplay_TSM,
  SSM_TR_Normal_2_SM4_modeInterplay_TSM,
  SSM_TR_Normal_3_SM4_modeInterplay_TSM,
  SSM_TR_Normal_4_SM4_modeInterplay_TSM,
  SSM_TR_Normal_5_SM4_modeInterplay_TSM,
  SSM_TR_Indication_1_SM4_modeInterplay_TSM,
  SSM_TR_Indication_2_SM4_modeInterplay_TSM,
  SSM_TR_Indication_3_SM4_modeInterplay_TSM,
  SSM_TR_Indication_4_SM4_modeInterplay_TSM,
  SSM_TR_Indication_5_SM4_modeInterplay_TSM,
  SSM_TR_Overspeed_1_SM4_modeInterplay_TSM,
  SSM_TR_Overspeed_2_SM4_modeInterplay_TSM,
  SSM_TR_Overspeed_3_SM4_modeInterplay_TSM,
  SSM_TR_Overspeed_4_SM4_modeInterplay_TSM,
  SSM_TR_Overspeed_5_SM4_modeInterplay_TSM,
  SSM_TR_Warning_1_SM4_modeInterplay_TSM,
  SSM_TR_Warning_2_SM4_modeInterplay_TSM,
  SSM_TR_Warning_3_SM4_modeInterplay_TSM,
  SSM_TR_Warning_4_SM4_modeInterplay_TSM,
  SSM_TR_Intervention_1_SM4_modeInterplay_TSM,
  SSM_TR_Intervention_2_SM4_modeInterplay_TSM,
  SSM_TR_Intervention_3_SM4_modeInterplay_TSM
} SSM_TR_SM4_modeInterplay_TSM;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
typedef enum kcg_tag_SSM_ST_SM4_modeInterplay_TSM {
  SSM_st_init_modeInterplay_TSM_SM4,
  SSM_st_Normal_modeInterplay_TSM_SM4,
  SSM_st_Indication_modeInterplay_TSM_SM4,
  SSM_st_Overspeed_modeInterplay_TSM_SM4,
  SSM_st_Warning_modeInterplay_TSM_SM4,
  SSM_st_Intervention_modeInterplay_TSM_SM4
} SSM_ST_SM4_modeInterplay_TSM;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
typedef enum kcg_tag_SSM_TR_RSM_modeInterplay_RSM {
  SSM_TR_no_trans_RSM_modeInterplay_RSM,
  SSM_TR_Init_1_RSM_modeInterplay_RSM,
  SSM_TR_Init_2_RSM_modeInterplay_RSM,
  SSM_TR_Init_3_RSM_modeInterplay_RSM,
  SSM_TR_Init_4_RSM_modeInterplay_RSM,
  SSM_TR_Init_5_RSM_modeInterplay_RSM,
  SSM_TR_IndicationStatus_1_RSM_modeInterplay_RSM,
  SSM_TR_InterventionStatus_1_RSM_modeInterplay_RSM
} SSM_TR_RSM_modeInterplay_RSM;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
typedef enum kcg_tag_SSM_ST_RSM_modeInterplay_RSM {
  SSM_st_Init_modeInterplay_RSM_RSM,
  SSM_st_IndicationStatus_modeInterplay_RSM_RSM,
  SSM_st_InterventionStatus_modeInterplay_RSM_RSM
} SSM_ST_RSM_modeInterplay_RSM;
/* InformationFilter_Pkg::InformationFilter::SM1 */
typedef enum kcg_tag__60_SSM_TR_SM1 {
  _59_SSM_TR_no_trans_SM1,
  SSM_TR_State1_1_SM1,
  _58_SSM_TR_State2_1_SM1,
  _57_SSM_TR_State3_1_SM1
} _60_SSM_TR_SM1;
/* InformationFilter_Pkg::InformationFilter::SM1 */
typedef enum kcg_tag__56_SSM_ST_SM1 {
  SSM_st_State1_SM1,
  _55_SSM_st_State2_SM1,
  _54_SSM_st_State3_SM1
} _56_SSM_ST_SM1;
/* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
typedef enum kcg_tag_SSM_TR_SM_SH_Initiated_By_Driver {
  SSM_TR_no_trans_SM_SH_Initiated_By_Driver,
  SSM_TR_SH_procedure_possible_1_1_SM_SH_Initiated_By_Driver,
  SSM_TR_SH_procedure_possible_1_2_SM_SH_Initiated_By_Driver,
  SSM_TR_Issue_SH_Request_L2_L3_1_SM_SH_Initiated_By_Driver,
  SSM_TR_Issue_SH_Request_L2_L3_2_SM_SH_Initiated_By_Driver
} SSM_TR_SM_SH_Initiated_By_Driver;
/* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
typedef enum kcg_tag_SSM_ST_SM_SH_Initiated_By_Driver {
  SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver,
  SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver,
  SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver,
  SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver
} SSM_ST_SM_SH_Initiated_By_Driver;
/* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
typedef enum kcg_tag_SSM_TR_SH_Initiated_By_Driver {
  SSM_TR_no_trans_SH_Initiated_By_Driver,
  SSM_TR_SH_initiated_by_driver_procedure_off_1_SH_Initiated_By_Driver,
  SSM_TR_S0_SH_initiated_by_driver_procedure_on_1_SH_Initiated_By_Driver
} SSM_TR_SH_Initiated_By_Driver;
/* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
typedef enum kcg_tag_SSM_ST_SH_Initiated_By_Driver {
  SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver,
  SSM_st_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver
} SSM_ST_SH_Initiated_By_Driver;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
typedef enum kcg_tag_SSM_TR_SM_Mode_Profile_By_Trackside {
  SSM_TR_no_trans_SM_Mode_Profile_By_Trackside,
  SSM_TR_Procedure_Off_1_1_SM_Mode_Profile_By_Trackside,
  SSM_TR_Procedure_Off_1_2_SM_Mode_Profile_By_Trackside,
  SSM_TR_Futher_location_1_SM_Mode_Profile_By_Trackside,
  SSM_TR_Futher_location_2_SM_Mode_Profile_By_Trackside,
  SSM_TR_Current_Location_1_SM_Mode_Profile_By_Trackside
} SSM_TR_SM_Mode_Profile_By_Trackside;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
typedef enum kcg_tag_SSM_ST_SM_Mode_Profile_By_Trackside {
  SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside,
  SSM_st_Futher_location_SM_Mode_Profile_By_Trackside,
  SSM_st_Current_Location_SM_Mode_Profile_By_Trackside
} SSM_ST_SM_Mode_Profile_By_Trackside;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
typedef enum kcg_tag_SSM_TR_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location {
  SSM_TR_no_trans_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location,
  SSM_TR_Req_Futher_Location_1_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location,
  SSM_TR_Start_Supervision_1_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location,
  SSM_TR_Waiting_Ack_1_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location
} SSM_TR_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
typedef enum kcg_tag_SSM_ST_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location {
  SSM_st_Req_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location,
  SSM_st_Start_Supervision_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location,
  SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location,
  SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location
} SSM_ST_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
typedef enum kcg_tag_SSM_TR_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location {
  SSM_TR_no_trans_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location,
  SSM_TR_Req_Current_Location_1_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location,
  SSM_TR_Req_Current_Location_2_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location,
  SSM_TR_Switch_Autorized_Waiting_Ack_1_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Locat,
  SSM_TR_Switch_Autorized_Waiting_Ack_2_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Locat,
  SSM_TR_Waiting_Ack_1_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location,
  SSM_TR_Ack_Not_Received_1_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location
} SSM_TR_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
typedef enum kcg_tag_SSM_ST_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location {
  SSM_st_Req_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location,
  SSM_st_Switch_Autorized_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Locatio,
  SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location,
  SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location,
  SSM_st_Ack_Not_Received_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location
} SSM_ST_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location;
/* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
typedef enum kcg_tag_SSM_TR_SM_Start_L1_L2_L3 {
  SSM_TR_no_trans_SM_Start_L1_L2_L3,
  SSM_TR_Waiting_Driver_Starting_Command_1_1_SM_Start_L1_L2_L3,
  SSM_TR_Waiting_Driver_Starting_Command_1_2_SM_Start_L1_L2_L3,
  SSM_TR_Level_1_1_SM_Start_L1_L2_L3,
  SSM_TR_Level_2_3_1_SM_Start_L1_L2_L3,
  SSM_TR_Level_2_3_2_SM_Start_L1_L2_L3,
  SSM_TR_Level_2_3_3_SM_Start_L1_L2_L3,
  SSM_TR_Level_2_3_4_SM_Start_L1_L2_L3,
  SSM_TR_Level_2_3_5_SM_Start_L1_L2_L3,
  SSM_TR_Wait_For_OS_1_SM_Start_L1_L2_L3,
  SSM_TR_Wait_For_SH_1_SM_Start_L1_L2_L3,
  SSM_TR_Wait_For_LS_1_SM_Start_L1_L2_L3
} SSM_TR_SM_Start_L1_L2_L3;
/* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
typedef enum kcg_tag_SSM_ST_SM_Start_L1_L2_L3 {
  SSM_st_Waiting_Driver_Starting_Command_SM_Start_L1_L2_L3,
  SSM_st_Level_1_SM_Start_L1_L2_L3,
  SSM_st_Level_2_3_SM_Start_L1_L2_L3,
  SSM_st_SR_Mode_SM_Start_L1_L2_L3,
  SSM_st_FS_Mode_SM_Start_L1_L2_L3,
  SSM_st_OS_Mode_SM_Start_L1_L2_L3,
  SSM_st_SH_Mode_SM_Start_L1_L2_L3,
  SSM_st_LS_Mode_SM_Start_L1_L2_L3,
  SSM_st_Wait_For_OS_SM_Start_L1_L2_L3,
  SSM_st_Wait_For_SH_SM_Start_L1_L2_L3,
  SSM_st_Wait_For_LS_SM_Start_L1_L2_L3
} SSM_ST_SM_Start_L1_L2_L3;
/* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
typedef enum kcg_tag_SSM_TR_SM_StartOfMissionProcedure {
  SSM_TR_no_trans_SM_StartOfMissionProcedure,
  SSM_TR_Procedure_Off_1_SM_StartOfMissionProcedure,
  SSM_TR_Procedure_On_1_SM_StartOfMissionProcedure,
  SSM_TR_Procedure_On_2_SM_StartOfMissionProcedure,
  SSM_TR_EB_Requested_1_SM_StartOfMissionProcedure
} SSM_TR_SM_StartOfMissionProcedure;
/* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
typedef enum kcg_tag_SSM_ST_SM_StartOfMissionProcedure {
  SSM_st_Procedure_Off_SM_StartOfMissionProcedure,
  SSM_st_Procedure_On_SM_StartOfMissionProcedure,
  SSM_st_EB_Requested_SM_StartOfMissionProcedure
} SSM_ST_SM_StartOfMissionProcedure;
/* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
typedef enum kcg_tag_SSM_TR_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On {
  SSM_TR_no_trans_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On,
  SSM_TR_Waiting_Driver_Command_1_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On,
  SSM_TR_Waiting_Driver_Command_2_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On,
  SSM_TR_Waiting_Driver_Command_3_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On,
  SSM_TR_Waiting_Driver_Strating_Command_1_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On,
  SSM_TR_Waiting_Driver_Strating_Command_2_1_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On,
  SSM_TR_Waiting_Driver_Strating_Command_2_2_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On,
  SSM_TR_Level_0_1_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On,
  SSM_TR_Level_NTC_1_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On
} SSM_TR_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On;
/* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
typedef enum kcg_tag_SSM_ST_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On {
  SSM_st_Waiting_Driver_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On,
  SSM_st_NL_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On,
  SSM_st_Procedure_SH_Initiated_By_Driver_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On,
  SSM_st_Waiting_Driver_Strating_Command_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On,
  SSM_st_Level_0_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On,
  SSM_st_Level_NTC_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On,
  SSM_st_SN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On,
  SSM_st_UN_Mode_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On,
  SSM_st_Waiting_Driver_Selection_SM_StartOfMissionProcedure_Procedure_On_SM_SoM_On
} SSM_ST_SM_SoM_On_SM_StartOfMissionProcedure_Procedure_On;
/* Procedures::Procedure_Train_Trip::SM_Train_Trip */
typedef enum kcg_tag_SSM_TR_SM_Train_Trip {
  SSM_TR_no_trans_SM_Train_Trip,
  SSM_TR_Train_Trip_procedure_off_1_SM_Train_Trip,
  SSM_TR_Trip_Mode_1_SM_Train_Trip,
  SSM_TR_Trip_Mode_Waiting_Ack_1_1_SM_Train_Trip,
  SSM_TR_Trip_Mode_Waiting_Ack_1_2_SM_Train_Trip,
  SSM_TR_Trip_Mode_Waiting_Ack_1_3_1_SM_Train_Trip,
  SSM_TR_Trip_Mode_Waiting_Ack_1_3_2_SM_Train_Trip,
  SSM_TR_Post_Trip_Mode_1_SM_Train_Trip,
  SSM_TR_Post_Trip_Mode_2_SM_Train_Trip,
  SSM_TR_Post_Trip_Mode_3_SM_Train_Trip,
  SSM_TR_Waiting_Driver_Selection_1_SM_Train_Trip,
  SSM_TR_Wait_RBC_Ack_1_SM_Train_Trip
} SSM_TR_SM_Train_Trip;
/* Procedures::Procedure_Train_Trip::SM_Train_Trip */
typedef enum kcg_tag_SSM_ST_SM_Train_Trip {
  SSM_st_Train_Trip_procedure_off_SM_Train_Trip,
  SSM_st_Trip_Mode_SM_Train_Trip,
  SSM_st_Trip_Mode_Waiting_Ack_SM_Train_Trip,
  SSM_st_Post_Trip_Mode_SM_Train_Trip,
  SSM_st_SH_Mode_SM_Train_Trip,
  SSM_st_UN_Mode_SM_Train_Trip,
  SSM_st_SN_Mode_SM_Train_Trip,
  SSM_st_Waiting_Driver_Selection_SM_Train_Trip,
  SSM_st_Wait_RBC_Ack_SM_Train_Trip,
  SSM_st_Procedure_SH_Initiated_By_Driver_SM_Train_Trip
} SSM_ST_SM_Train_Trip;
/* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
typedef enum kcg_tag_SSM_TR_SM_Train_Reversing {
  SSM_TR_no_trans_SM_Train_Reversing,
  SSM_TR_Reversing_Procedure_Off_1_SM_Train_Reversing,
  SSM_TR_Reversing_Condition_1_SM_Train_Reversing,
  SSM_TR_Reversing_Condition_2_SM_Train_Reversing,
  SSM_TR_Reversing_Condition_3_SM_Train_Reversing,
  SSM_TR_Reversing_Data_Available_1_SM_Train_Reversing,
  SSM_TR_Reversing_Data_Available_2_SM_Train_Reversing
} SSM_TR_SM_Train_Reversing;
/* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
typedef enum kcg_tag_SSM_ST_SM_Train_Reversing {
  SSM_st_Reversing_Procedure_Off_SM_Train_Reversing,
  SSM_st_Reversing_Condition_SM_Train_Reversing,
  SSM_st_RV_Mode_SM_Train_Reversing,
  SSM_st_Reversing_Data_Available_SM_Train_Reversing
} SSM_ST_SM_Train_Reversing;
/* OutputToRBC::ExitLevel2or3::SM1 */
typedef enum kcg_tag__53_SSM_TR_SM1 {
  _52_SSM_TR_no_trans_SM1,
  SSM_TR_BeforeChange_1_SM1,
  _51_SSM_TR_State2_1_SM1
} _53_SSM_TR_SM1;
/* OutputToRBC::ExitLevel2or3::SM1 */
typedef enum kcg_tag__50_SSM_ST_SM1 {
  SSM_st_BeforeChange_SM1,
  _49_SSM_st_State2_SM1
} _50_SSM_ST_SM1;
/* Acknowledgement::RequestAck::SM1 */
typedef enum kcg_tag__48_SSM_TR_SM1 {
  _47_SSM_TR_no_trans_SM1,
  SSM_TR_Waiting_1_SM1,
  SSM_TR_LaunchRequest_1_SM1,
  SSM_TR_LaunchRequest_2_SM1,
  SSM_TR_AckReceived_1_SM1
} _48_SSM_TR_SM1;
/* Acknowledgement::RequestAck::SM1 */
typedef enum kcg_tag__46_SSM_ST_SM1 {
  SSM_st_Waiting_SM1,
  SSM_st_LaunchRequest_SM1,
  SSM_st_AckReceived_SM1
} _46_SSM_ST_SM1;
/* TA_MA_Request::MA_Request_Supervision::SM1 */
typedef enum kcg_tag__45_SSM_TR_SM1 {
  _44_SSM_TR_no_trans_SM1,
  SSM_TR_init_1_SM1,
  SSM_TR_NoReqPending_1_SM1,
  SSM_TR_ReqPending_1_SM1
} _45_SSM_TR_SM1;
/* TA_MA_Request::MA_Request_Supervision::SM1 */
typedef enum kcg_tag__43_SSM_ST_SM1 {
  SSM_st_init_SM1,
  SSM_st_NoReqPending_SM1,
  SSM_st_ReqPending_SM1
} _43_SSM_ST_SM1;
/* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
typedef enum kcg_tag_SSM_TR_TimerStatus_SM {
  SSM_TR_no_trans_TimerStatus_SM,
  SSM_TR_Stopped_1_TimerStatus_SM,
  SSM_TR_Stopped_2_TimerStatus_SM,
  SSM_TR_Counting_1_TimerStatus_SM,
  SSM_TR_Counting_2_TimerStatus_SM,
  SSM_TR_Counting_3_TimerStatus_SM,
  SSM_TR_Counting_4_TimerStatus_SM,
  SSM_TR_Expired_1_TimerStatus_SM,
  SSM_TR_Expired_2_TimerStatus_SM
} SSM_TR_TimerStatus_SM;
/* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
typedef enum kcg_tag_SSM_ST_TimerStatus_SM {
  SSM_st_Stopped_TimerStatus_SM,
  SSM_st_Counting_TimerStatus_SM,
  SSM_st_Expired_TimerStatus_SM
} SSM_ST_TimerStatus_SM;
/* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
typedef enum kcg_tag_SSM_TR_repeat_SM {
  SSM_TR_no_trans_repeat_SM,
  SSM_TR_rep_inactive_1_repeat_SM,
  SSM_TR_rep_inactive_2_repeat_SM,
  SSM_TR_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_1_repeat_SM,
  SSM_TR_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_2_repeat_SM,
  SSM_TR_rep_repeatUntilStopConditionMet_1_repeat_SM,
  SSM_TR_rep_repeatUntilStopConditionMet_2_repeat_SM
} SSM_TR_repeat_SM;
/* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
typedef enum kcg_tag_SSM_ST_repeat_SM {
  SSM_st_rep_inactive_repeat_SM,
  SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM,
  SSM_st_rep_repeatUntilStopConditionMet_repeat_SM
} SSM_ST_repeat_SM;
/* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
typedef enum kcg_tag_SSM_TR_Register_SM {
  SSM_TR_no_trans_Register_SM,
  SSM_TR_Unregistered_1_Register_SM,
  SSM_TR_Unregistered_2_Register_SM,
  SSM_TR_Unregistered_3_Register_SM,
  SSM_TR_Registering_1_Register_SM,
  SSM_TR_Registering_2_Register_SM,
  SSM_TR_Registered_1_Register_SM,
  SSM_TR_Registered_2_Register_SM,
  SSM_TR_Registered_3_Register_SM,
  SSM_TR_Reregistering_1_Register_SM
} SSM_TR_Register_SM;
/* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
typedef enum kcg_tag_SSM_ST_Register_SM {
  SSM_st_Unregistered_Register_SM,
  SSM_st_Registering_Register_SM,
  SSM_st_Registered_Register_SM,
  SSM_st_Reregistering_Register_SM
} SSM_ST_Register_SM;
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
typedef enum kcg_tag__42_SSM_TR_SM1 {
  _41_SSM_TR_no_trans_SM1,
  _40_SSM_TR_idle_1_SM1,
  SSM_TR_waitForSafeRadioConnectionSetUp_1_SM1,
  SSM_TR_waitForSafeRadioConnectionSetUp_2_SM1,
  SSM_TR_waitForSystemVersion_1_SM1,
  SSM_TR_waitForSystemVersion_2_SM1,
  SSM_TR_waitForSystemVersion_3_SM1,
  _39_SSM_TR_sessionEstablished_1_SM1
} _42_SSM_TR_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
typedef enum kcg_tag__38_SSM_ST_SM1 {
  _37_SSM_st_idle_SM1,
  SSM_st_waitForSafeRadioConnectionSetUp_SM1,
  SSM_st_waitForSystemVersion_SM1,
  _36_SSM_st_sessionEstablished_SM1
} _38_SSM_ST_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */
typedef enum kcg_tag__35_SSM_TR_SM1 {
  _34_SSM_TR_no_trans_SM1,
  _33_SSM_TR_idle_1_SM1,
  SSM_TR_sessionEstablished_1_SM1
} _35_SSM_TR_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */
typedef enum kcg_tag__32_SSM_ST_SM1 {
  _31_SSM_st_idle_SM1,
  SSM_st_sessionEstablished_SM1
} _32_SSM_ST_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
typedef enum kcg_tag__30_SSM_TR_SM1 {
  _29_SSM_TR_no_trans_SM1,
  _28_SSM_TR_idle_1_SM1,
  SSM_TR_idle_2_SM1,
  SSM_TR_establishingByOBU_1_SM1,
  SSM_TR_establishingByRBC_1_SM1
} _30_SSM_TR_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
typedef enum kcg_tag__27_SSM_ST_SM1 {
  _26_SSM_st_idle_SM1,
  SSM_st_establishingByOBU_SM1,
  SSM_st_establishingByRBC_SM1
} _27_SSM_ST_SM1;
/* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
typedef enum kcg_tag__25_SSM_TR_SM1 {
  _24_SSM_TR_no_trans_SM1,
  SSM_TR_idle_1_SM1,
  SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_1_SM1,
  SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_2_SM1,
  SSM_TR_terminated_1_SM1
} _25_SSM_TR_SM1;
/* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
typedef enum kcg_tag__23_SSM_ST_SM1 {
  SSM_st_idle_SM1,
  SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1,
  SSM_st_terminated_SM1
} _23_SSM_ST_SM1;
/* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
typedef enum kcg_tag_SSM_TR_Session_SM {
  SSM_TR_no_trans_Session_SM,
  SSM_TR_sessionTerminated_1_Session_SM,
  SSM_TR_establishingSession_1_Session_SM,
  SSM_TR_establishingSession_2_Session_SM,
  SSM_TR_maintainingSession_1_Session_SM,
  SSM_TR_terminatingSession_1_Session_SM
} SSM_TR_Session_SM;
/* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
typedef enum kcg_tag_SSM_ST_Session_SM {
  SSM_st_sessionTerminated_Session_SM,
  SSM_st_establishingSession_Session_SM,
  SSM_st_maintainingSession_Session_SM,
  SSM_st_terminatingSession_Session_SM
} SSM_ST_Session_SM;
/* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
typedef enum kcg_tag_SSM_TR_TrainExitedFromRBCArea_SM {
  SSM_TR_no_trans_TrainExitedFromRBCArea_SM,
  SSM_TR_Idle_1_TrainExitedFromRBCArea_SM,
  SSM_TR_Idle_2_TrainExitedFromRBCArea_SM,
  SSM_TR_WaitForOrderToTerminateTheSession_1_TrainExitedFromRBCArea_SM,
  SSM_TR_WaitForOrderToTerminateTheSession_2_TrainExitedFromRBCArea_SM
} SSM_TR_TrainExitedFromRBCArea_SM;
/* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
typedef enum kcg_tag_SSM_ST_TrainExitedFromRBCArea_SM {
  SSM_st_Idle_TrainExitedFromRBCArea_SM,
  SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM
} SSM_ST_TrainExitedFromRBCArea_SM;
/* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
typedef enum kcg_tag_SSM_TR_connectionStatus_SM {
  SSM_TR_no_trans_connectionStatus_SM,
  SSM_TR_NoConnection_1_connectionStatus_SM,
  SSM_TR_NoConnection_2_connectionStatus_SM,
  SSM_TR_ConnectionLost_SetupFailed_1_connectionStatus_SM,
  SSM_TR_ConnectionLost_SetupFailed_2_connectionStatus_SM,
  SSM_TR_ConnectionUp_1_connectionStatus_SM,
  SSM_TR_ConnectionUp_2_connectionStatus_SM
} SSM_TR_connectionStatus_SM;
/* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
typedef enum kcg_tag_SSM_ST_connectionStatus_SM {
  SSM_st_NoConnection_connectionStatus_SM,
  SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM,
  SSM_st_ConnectionUp_connectionStatus_SM
} SSM_ST_connectionStatus_SM;
/* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
typedef enum kcg_tag_SSM_TR_handOver_with_1_Session_SM_IfBlock1 {
  SSM_TR_no_trans_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_WaitForTransitionOrder_1_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_WaitForMaxSafeFrontEndPassing_1_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_WaitForMaxSafeFrontEndPassing_2_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_WaitForMinSafeRearEndPassing_1_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_WaitForMinSafeRearEndPassing_2_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_WaitForSessionWithAcceptingRBCEstablished_1_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_WaitForSessionWithAcceptingRBCEstablished_2_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_WaitForTerminationOrderFromHandingOverRBC_1_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_WaitForTerminationOrderFromHandingOverRBC_2_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_WaitForHandingOverRBCTerminated_1_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_WaitForHandingOverRBCTerminated_2_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_RegisterAcceptingRBC_1_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_RegisterAcceptingRBC_2_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_WaitForHandingOverRBCRegistered_1_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_WaitForHandingOverRBCRegistered_2_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_EstablishSessionWithAcceptingRBC_1_handOver_with_1_Session_SM_IfBlock1,
  SSM_TR_EstablishSessionWithAcceptingRBC_2_handOver_with_1_Session_SM_IfBlock1
} SSM_TR_handOver_with_1_Session_SM_IfBlock1;
/* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
typedef enum kcg_tag_SSM_ST_handOver_with_1_Session_SM_IfBlock1 {
  SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_1_Session_SM,
  SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_1_Session_SM,
  SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_1_Session_SM,
  SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_1_Session_SM,
  SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_1_Session_SM,
  SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_1_Session_SM,
  SSM_st_RegisterAcceptingRBC_IfBlock1_handOver_with_1_Session_SM,
  SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_1_Session_SM,
  SSM_st_EstablishSessionWithAcceptingRBC_IfBlock1_handOver_with_1_Session_SM
} SSM_ST_handOver_with_1_Session_SM_IfBlock1;
/* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
typedef enum kcg_tag_SSM_TR_handOver_with_2_Sessions_SM_IfBlock1 {
  SSM_TR_no_trans_handOver_with_2_Sessions_SM_IfBlock1,
  SSM_TR_WaitForTransitionOrder_1_handOver_with_2_Sessions_SM_IfBlock1,
  SSM_TR_WaitForMaxSafeFrontEndPassing_1_handOver_with_2_Sessions_SM_IfBlock1,
  SSM_TR_WaitForMaxSafeFrontEndPassing_2_handOver_with_2_Sessions_SM_IfBlock1,
  SSM_TR_WaitForMinSafeRearEndPassing_1_handOver_with_2_Sessions_SM_IfBlock1,
  SSM_TR_WaitForMinSafeRearEndPassing_2_handOver_with_2_Sessions_SM_IfBlock1,
  SSM_TR_WaitForSessionWithAcceptingRBCEstablished_1_handOver_with_2_Sessions_SM_IfBlock1,
  SSM_TR_WaitForTerminationOrderFromHandingOverRBC_1_handOver_with_2_Sessions_SM_IfBlock1,
  SSM_TR_WaitForTerminationOrderFromHandingOverRBC_2_handOver_with_2_Sessions_SM_IfBlock1,
  SSM_TR_WaitForHandingOverRBCTerminated_1_handOver_with_2_Sessions_SM_IfBlock1,
  SSM_TR_WaitForHandingOverRBCTerminated_2_handOver_with_2_Sessions_SM_IfBlock1,
  SSM_TR_ReregisterHandingOverRBC_1_handOver_with_2_Sessions_SM_IfBlock1,
  SSM_TR_ReregisterHandingOverRBC_2_handOver_with_2_Sessions_SM_IfBlock1,
  SSM_TR_WaitForHandingOverRBCRegistered_1_handOver_with_2_Sessions_SM_IfBlock1,
  SSM_TR_WaitForHandingOverRBCRegistered_2_handOver_with_2_Sessions_SM_IfBlock1
} SSM_TR_handOver_with_2_Sessions_SM_IfBlock1;
/* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::then::handOver_with_2_Sessions_SM */
typedef enum kcg_tag_SSM_ST_handOver_with_2_Sessions_SM_IfBlock1 {
  SSM_st_WaitForTransitionOrder_IfBlock1_handOver_with_2_Sessions_SM,
  SSM_st_WaitForMaxSafeFrontEndPassing_IfBlock1_handOver_with_2_Sessions_SM,
  SSM_st_WaitForMinSafeRearEndPassing_IfBlock1_handOver_with_2_Sessions_SM,
  SSM_st_WaitForSessionWithAcceptingRBCEstablished_IfBlock1_handOver_with_2_Sessions_SM,
  SSM_st_WaitForTerminationOrderFromHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM,
  SSM_st_WaitForHandingOverRBCTerminated_IfBlock1_handOver_with_2_Sessions_SM,
  SSM_st_ReregisterHandingOverRBC_IfBlock1_handOver_with_2_Sessions_SM,
  SSM_st_WaitForHandingOverRBCRegistered_IfBlock1_handOver_with_2_Sessions_SM
} SSM_ST_handOver_with_2_Sessions_SM_IfBlock1;
/* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */
typedef enum kcg_tag__22_SSM_TR_SM1 {
  _21_SSM_TR_no_trans_SM1,
  SSM_TR_mobile_1_1_SM1,
  SSM_TR_mobile_2_1_SM1
} _22_SSM_TR_SM1;
/* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */
typedef enum kcg_tag__20_SSM_ST_SM1 {
  SSM_st_mobile_1_SM1,
  SSM_st_mobile_2_SM1
} _20_SSM_ST_SM1;
/* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
typedef enum kcg_tag__19_SSM_TR_SM1 {
  _18_SSM_TR_no_trans_SM1,
  SSM_TR_notRequested_1_SM1,
  SSM_TR_notRequested_2_SM1,
  SSM_TR_requested_1_SM1
} _19_SSM_TR_SM1;
/* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
typedef enum kcg_tag__17_SSM_ST_SM1 {
  SSM_st_notRequested_SM1,
  SSM_st_requested_SM1
} _17_SSM_ST_SM1;
/* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
typedef enum kcg_tag_SSM_TR_GSM_R_MobileManagement {
  SSM_TR_no_trans_GSM_R_MobileManagement,
  SSM_TR_Not_registered_1_GSM_R_MobileManagement,
  SSM_TR_Registering_1_GSM_R_MobileManagement,
  SSM_TR_Registering_2_GSM_R_MobileManagement,
  SSM_TR_Registered_1_GSM_R_MobileManagement,
  SSM_TR_Registered_2_GSM_R_MobileManagement,
  SSM_TR_Connecting_1_GSM_R_MobileManagement,
  SSM_TR_Connecting_2_GSM_R_MobileManagement,
  SSM_TR_Connected_1_GSM_R_MobileManagement,
  SSM_TR_Connected_2_GSM_R_MobileManagement
} SSM_TR_GSM_R_MobileManagement;
/* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
typedef enum kcg_tag_SSM_ST_GSM_R_MobileManagement {
  SSM_st_Not_registered_GSM_R_MobileManagement,
  SSM_st_Registering_GSM_R_MobileManagement,
  SSM_st_Registered_GSM_R_MobileManagement,
  SSM_st_Connecting_GSM_R_MobileManagement,
  SSM_st_Connected_GSM_R_MobileManagement
} SSM_ST_GSM_R_MobileManagement;
/* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */
typedef enum kcg_tag_SSM_TR_POSITION_REPORT_SM {
  SSM_TR_no_trans_POSITION_REPORT_SM,
  SSM_TR_IDLE_1_POSITION_REPORT_SM,
  SSM_TR_PROCESS_POSITION_REPORT_1_POSITION_REPORT_SM,
  SSM_TR_PROCESS_POSITION_REPORT_2_POSITION_REPORT_SM
} SSM_TR_POSITION_REPORT_SM;
/* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */
typedef enum kcg_tag_SSM_ST_POSITION_REPORT_SM {
  SSM_st_IDLE_POSITION_REPORT_SM,
  SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM
} SSM_ST_POSITION_REPORT_SM;
/* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
typedef enum kcg_tag_SSM_TR_MOVEMENT_AUTHORITY_SM {
  SSM_TR_no_trans_MOVEMENT_AUTHORITY_SM,
  SSM_TR_IDLE_1_MOVEMENT_AUTHORITY_SM,
  SSM_TR_IDLE_2_MOVEMENT_AUTHORITY_SM,
  SSM_TR_SEND_MA_1_MOVEMENT_AUTHORITY_SM,
  SSM_TR_SEND_MA_2_MOVEMENT_AUTHORITY_SM,
  SSM_TR_AWAIT_ACKNOWLEDGEMENT_1_MOVEMENT_AUTHORITY_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_1_MOVEMENT_AUTHORITY_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_2_MOVEMENT_AUTHORITY_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_3_MOVEMENT_AUTHORITY_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_4_MOVEMENT_AUTHORITY_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_5_MOVEMENT_AUTHORITY_SM,
  SSM_TR_AWAIT_MA_1_MOVEMENT_AUTHORITY_SM,
  SSM_TR_UPDATE_POSITION_1_MOVEMENT_AUTHORITY_SM,
  SSM_TR_UPDATE_POSITION_2_MOVEMENT_AUTHORITY_SM
} SSM_TR_MOVEMENT_AUTHORITY_SM;
/* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
typedef enum kcg_tag_SSM_ST_MOVEMENT_AUTHORITY_SM {
  SSM_st_IDLE_MOVEMENT_AUTHORITY_SM,
  SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM,
  SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
  SSM_st_AWAIT_MA_MOVEMENT_AUTHORITY_SM,
  SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM
} SSM_ST_MOVEMENT_AUTHORITY_SM;
/* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
typedef enum kcg_tag_SSM_TR_CONDITIONAL_EMERGENCY_STOP_SM {
  SSM_TR_no_trans_CONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_IDLE_1_CONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_SEND_CONDITIONAL_EMERGENCY_STOP_1_CONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_SEND_CONDITIONAL_EMERGENCY_STOP_2_CONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_AWAIT_ACKNOWLEDGEMENT_1_CONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_1_CONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_2_CONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_3_CONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_4_CONDITIONAL_EMERGENCY_STOP_SM
} SSM_TR_CONDITIONAL_EMERGENCY_STOP_SM;
/* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
typedef enum kcg_tag_SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM {
  SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM,
  SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM,
  SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM
} SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM;
/* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
typedef enum kcg_tag_SSM_TR_UNCONDITIONAL_EMERGENCY_STOP_SM {
  SSM_TR_no_trans_UNCONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_IDLE_1_UNCONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_SEND_UNCONDITIONAL_EMERGENCY_STOP_1_UNCONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_SEND_UNCONDITIONAL_EMERGENCY_STOP_2_UNCONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_AWAIT_ACKNOWLEDGEMENT_1_UNCONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_1_UNCONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_2_UNCONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_3_UNCONDITIONAL_EMERGENCY_STOP_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_4_UNCONDITIONAL_EMERGENCY_STOP_SM
} SSM_TR_UNCONDITIONAL_EMERGENCY_STOP_SM;
/* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
typedef enum kcg_tag_SSM_ST_UNCONDITIONAL_EMERGENCY_STOP_SM {
  SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM,
  SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM,
  SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM
} SSM_ST_UNCONDITIONAL_EMERGENCY_STOP_SM;
/* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
typedef enum kcg_tag_SSM_TR_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM {
  SSM_TR_no_trans_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_TR_IDLE_1_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_TR_SEND_REVOCATION_OF_ES_MESSAGE_1_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_TR_SEND_REVOCATION_OF_ES_MESSAGE_2_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_TR_SEND_REVOCATION_OF_ES_MESSAGE_3_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_TR_AWAIT_ACKNOWLEDGEMENT_1_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_1_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_2_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_3_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_4_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM
} SSM_TR_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
/* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
typedef enum kcg_tag_SSM_ST_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM {
  SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_st_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_st_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM
} SSM_ST_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
/* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
typedef enum kcg_tag_SSM_TR_GENERAL_MESSAGE_SM {
  SSM_TR_no_trans_GENERAL_MESSAGE_SM,
  SSM_TR_IDLE_1_GENERAL_MESSAGE_SM,
  SSM_TR_SEND_GENERAL_MESSAGE_1_GENERAL_MESSAGE_SM,
  SSM_TR_SEND_GENERAL_MESSAGE_2_GENERAL_MESSAGE_SM,
  SSM_TR_SEND_GENERAL_MESSAGE_3_GENERAL_MESSAGE_SM,
  SSM_TR_AWAIT_ACKNOWLEDGEMENT_1_GENERAL_MESSAGE_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_1_GENERAL_MESSAGE_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_2_GENERAL_MESSAGE_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_3_GENERAL_MESSAGE_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_4_GENERAL_MESSAGE_SM
} SSM_TR_GENERAL_MESSAGE_SM;
/* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
typedef enum kcg_tag_SSM_ST_GENERAL_MESSAGE_SM {
  SSM_st_IDLE_GENERAL_MESSAGE_SM,
  SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM,
  SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM,
  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM
} SSM_ST_GENERAL_MESSAGE_SM;
/* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
typedef enum kcg_tag_SSM_TR_TRIP_AND_POST_TRIP_SM {
  SSM_TR_no_trans_TRIP_AND_POST_TRIP_SM,
  SSM_TR_IDLE_1_TRIP_AND_POST_TRIP_SM,
  SSM_TR_MODE_TRIP_1_TRIP_AND_POST_TRIP_SM,
  SSM_TR_MODE_POST_TRIP_1_TRIP_AND_POST_TRIP_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_1_TRIP_AND_POST_TRIP_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_2_TRIP_AND_POST_TRIP_SM,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_3_TRIP_AND_POST_TRIP_SM,
  SSM_TR_SEND_MSG_06_1_TRIP_AND_POST_TRIP_SM
} SSM_TR_TRIP_AND_POST_TRIP_SM;
/* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
typedef enum kcg_tag_SSM_ST_TRIP_AND_POST_TRIP_SM {
  SSM_st_IDLE_TRIP_AND_POST_TRIP_SM,
  SSM_st_MODE_TRIP_TRIP_AND_POST_TRIP_SM,
  SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM,
  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM,
  SSM_st_SEND_MSG_06_TRIP_AND_POST_TRIP_SM
} SSM_ST_TRIP_AND_POST_TRIP_SM;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
typedef enum kcg_tag_SSM_TR_CONTROLLER_SM {
  SSM_TR_no_trans_CONTROLLER_SM,
  SSM_TR_SESSION_TERMINATED_1_CONTROLLER_SM,
  SSM_TR_SEND_RBC_VERSION_1_CONTROLLER_SM,
  SSM_TR_SEND_RBC_VERSION_2_CONTROLLER_SM,
  SSM_TR_AWAIT_SESSION_ESTABLISHED_REPORT_1_CONTROLLER_SM,
  SSM_TR_SESSION_ESTABLISHED_1_CONTROLLER_SM,
  SSM_TR_SESSION_TERMINATION_REQUEST_1_CONTROLLER_SM,
  SSM_TR_SESSION_TERMINATION_REQUEST_2_CONTROLLER_SM
} SSM_TR_CONTROLLER_SM;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
typedef enum kcg_tag_SSM_ST_CONTROLLER_SM {
  SSM_st_SESSION_TERMINATED_CONTROLLER_SM,
  SSM_st_SEND_RBC_VERSION_CONTROLLER_SM,
  SSM_st_AWAIT_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM,
  SSM_st_SESSION_ESTABLISHED_CONTROLLER_SM,
  SSM_st_SESSION_TERMINATION_REQUEST_CONTROLLER_SM
} SSM_ST_CONTROLLER_SM;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
typedef enum kcg_tag_SSM_TR_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED {
  SSM_TR_no_trans_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED,
  SSM_TR_PROCESS_SESSION_ESTABLISHED_REPORT_1_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED,
  SSM_TR_PROCESS_SESSION_ESTABLISHED_REPORT_2_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED,
  SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_1_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED,
  SSM_TR_RECEIVE_AND_TRIGGER_1_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED,
  SSM_TR_START_1_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED,
  SSM_TR_START_2_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED,
  SSM_TR_AWAIT_VALIDATED_TRAIN_DATA_1_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED,
  SSM_TR_SEND_MA_AND_POS_REP_PARAMS_1_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED,
  SSM_TR_RBC_REQUEST_SESSION_TERMINATION_1_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED
} SSM_TR_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
typedef enum kcg_tag_SSM_ST_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED {
  SSM_st_PROCESS_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM,
  SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM,
  SSM_st_RECEIVE_AND_TRIGGER_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM,
  SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM,
  SSM_st_AWAIT_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM,
  SSM_st_AWAIT_SESSION_TERMINATION_REQUEST_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM,
  SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM,
  SSM_st_RBC_REQUEST_SESSION_TERMINATION_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM
} SSM_ST_SESSION_ESTABLISHED_SM_CONTROLLER_SM_SESSION_ESTABLISHED;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
typedef enum kcg_tag_SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED {
  SSM_TR_no_trans_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHE,
  SSM_TR_START_1_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_1_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISH,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_2_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISH,
  SSM_TR_AWAIT_ACKNOWLEDGEMENT_1_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SES,
  SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_1_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLIS,
  SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_2_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLIS
} SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
typedef enum kcg_tag_SSM_ST_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED {
  SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_P,
  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_,
  SSM_st_AWAIT_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDA,
  SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS
} SSM_ST_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
typedef enum kcg_tag_SSM_TR_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_S {
  SSM_TR_no_trans_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_,
  SSM_TR_START_1_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_S,
  SSM_TR_SEND_MA_AND_POS_REP_PARAMS_1_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_,
  SSM_TR_SEND_MA_AND_POS_REP_PARAMS_2_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_,
  SSM_TR_AWAIT_ACKNOWLEDGMENT_1_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSIO,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGMENT_1_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGMENT_2_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_
} SSM_TR_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_M;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
typedef enum kcg_tag_SSM_ST_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_S {
  SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEN,
  SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_A,
  SSM_st_AWAIT_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS,
  SSM_st_TRY_PROCESS_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_A
} SSM_ST_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_M;
/* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
typedef enum kcg_tag__16_SSM_TR_SM1 {
  _15_SSM_TR_no_trans_SM1,
  SSM_TR_Reset_1_SM1,
  SSM_TR_Driving_1_SM1
} _16_SSM_TR_SM1;
/* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
typedef enum kcg_tag__14_SSM_ST_SM1 {
  SSM_st_Reset_SM1,
  SSM_st_Driving_SM1
} _14_SSM_ST_SM1;
/* DMI_Control_Pkg::Utils::FlashingOperator::SM1 */
typedef enum kcg_tag__13_SSM_TR_SM1 {
  _12_SSM_TR_no_trans_SM1,
  _11_SSM_TR_stop_1_SM1,
  _10_SSM_TR_start_1_SM1
} _13_SSM_TR_SM1;
/* DMI_Control_Pkg::Utils::FlashingOperator::SM1 */
typedef enum kcg_tag__9_SSM_ST_SM1 {
  _8_SSM_st_stop_SM1,
  _7_SSM_st_start_SM1
} _9_SSM_ST_SM1;
/* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus */
typedef enum kcg_tag_SSM_TR_PlanningAreaStatus {
  SSM_TR_no_trans_PlanningAreaStatus,
  SSM_TR_NotVisible_1_PlanningAreaStatus,
  SSM_TR_Visible_1_PlanningAreaStatus
} SSM_TR_PlanningAreaStatus;
/* DMI_Control_Pkg::Sub_func::StatusPlanningArea::PlanningAreaStatus */
typedef enum kcg_tag_SSM_ST_PlanningAreaStatus {
  SSM_st_NotVisible_PlanningAreaStatus,
  SSM_st_Visible_PlanningAreaStatus
} SSM_ST_PlanningAreaStatus;
/* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1 */
typedef enum kcg_tag__6_SSM_TR_SM1 {
  _5_SSM_TR_no_trans_SM1,
  SSM_TR_stop_1_SM1,
  SSM_TR_start_1_SM1
} _6_SSM_TR_SM1;
/* DMI_Control_Pkg::Sub_func::TextMessages::FlashingOperator::SM1 */
typedef enum kcg_tag__4_SSM_ST_SM1 {
  SSM_st_stop_SM1,
  SSM_st_start_SM1
} _4_SSM_ST_SM1;
/* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
typedef enum kcg_tag__3_SSM_TR_SM1 {
  _2_SSM_TR_no_trans_SM1,
  SSM_TR_insert1_1_SM1,
  SSM_TR_State2_1_SM1,
  SSM_TR_insert2_1_SM1,
  SSM_TR_State4_1_SM1,
  SSM_TR_insert3_1_SM1,
  SSM_TR_State6_1_SM1,
  SSM_TR_insert4_1_SM1,
  SSM_TR_State8_1_SM1,
  SSM_TR_State0_1_SM1,
  SSM_TR_insertAck2_1_SM1,
  SSM_TR_insertAck1_1_SM1,
  SSM_TR_State5_1_SM1,
  SSM_TR_State3_1_SM1,
  SSM_TR_insert5_1_SM1,
  SSM_TR_State7_1_SM1,
  SSM_TR_insert6_1_SM1
} _3_SSM_TR_SM1;
/* DMI_Control_Pkg::Sub_func::TextMessages::TxtMsgSimulator::SM1 */
typedef enum kcg_tag__1_SSM_ST_SM1 {
  SSM_st_insert1_SM1,
  SSM_st_State2_SM1,
  SSM_st_insert2_SM1,
  SSM_st_State4_SM1,
  SSM_st_insert3_SM1,
  SSM_st_State6_SM1,
  SSM_st_insert4_SM1,
  SSM_st_State8_SM1,
  SSM_st_State0_SM1,
  SSM_st_insertAck2_SM1,
  SSM_st_insertAck1_SM1,
  SSM_st_State5_SM1,
  SSM_st_State3_SM1,
  SSM_st_insert5_SM1,
  SSM_st_State7_SM1,
  SSM_st_insert6_SM1,
  SSM_st_State9_SM1
} _1_SSM_ST_SM1;
/* ZoomLevel::SM1 */
typedef enum kcg_tag_SSM_TR_SM1 {
  SSM_TR_no_trans_SM1,
  SSM_TR_Zoom1_1_SM1,
  SSM_TR_Zoom2_1_SM1,
  SSM_TR_Zoom2_2_SM1,
  SSM_TR_Zoom4_1_SM1,
  SSM_TR_Zoom4_2_SM1,
  SSM_TR_Zoom3_1_SM1,
  SSM_TR_Zoom3_2_SM1,
  SSM_TR_Zoom6_1_SM1,
  SSM_TR_Zoom5_1_SM1,
  SSM_TR_Zoom5_2_SM1
} SSM_TR_SM1;
/* ZoomLevel::SM1 */
typedef enum kcg_tag_SSM_ST_SM1 {
  SSM_st_Zoom1_SM1,
  SSM_st_Zoom2_SM1,
  SSM_st_Zoom4_SM1,
  SSM_st_Zoom3_SM1,
  SSM_st_Zoom6_SM1,
  SSM_st_Zoom5_SM1
} SSM_ST_SM1;
/* DMI_Control_Pkg::DMI_Controller::CabinSM */
typedef enum kcg_tag_SSM_TR_CabinSM {
  SSM_TR_no_trans_CabinSM,
  SSM_TR_DeskIsOpen_1_CabinSM,
  SSM_TR_DeskIsClose_1_CabinSM
} SSM_TR_CabinSM;
/* DMI_Control_Pkg::DMI_Controller::CabinSM */
typedef enum kcg_tag_SSM_ST_CabinSM {
  SSM_st_DeskIsOpen_CabinSM,
  SSM_st_DeskIsClose_CabinSM
} SSM_ST_CabinSM;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM */
typedef enum kcg_tag_SSM_TR_HandshakeSM_CabinSM_DeskIsOpen {
  SSM_TR_no_trans_HandshakeSM_CabinSM_DeskIsOpen,
  SSM_TR_WaitingForIdentifierRequest_1_HandshakeSM_CabinSM_DeskIsOpen
} SSM_TR_HandshakeSM_CabinSM_DeskIsOpen;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM */
typedef enum kcg_tag_SSM_ST_HandshakeSM_CabinSM_DeskIsOpen {
  SSM_st_CommunicationActive_CabinSM_DeskIsOpen_HandshakeSM,
  SSM_st_WaitingForIdentifierRequest_CabinSM_DeskIsOpen_HandshakeSM
} SSM_ST_HandshakeSM_CabinSM_DeskIsOpen;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM3 */
typedef enum kcg_tag_SSM_TR_SM3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive {
  SSM_TR_no_trans_SM3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_AckOff_1_SM3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_AckOn_1_SM3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive
} SSM_TR_SM3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM3 */
typedef enum kcg_tag_SSM_ST_SM3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive {
  SSM_st_AckOff_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM3,
  SSM_st_AckOn_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM3
} SSM_ST_SM3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM */
typedef enum kcg_tag_SSM_TR_SpeedSupervisionSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive {
  SSM_TR_no_trans_SpeedSupervisionSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_ReadSpeedSupervisionInfo_1_SpeedSupervisionSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationAct,
  SSM_TR_idle_1_SpeedSupervisionSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive
} SSM_TR_SpeedSupervisionSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM */
typedef enum kcg_tag_SSM_ST_SpeedSupervisionSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive {
  SSM_st_ReadSpeedSupervisionInfo_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionS,
  SSM_st_idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SpeedSupervisionSM
} SSM_ST_SpeedSupervisionSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::HourGlassSM */
typedef enum kcg_tag_SSM_TR_HourGlassSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive {
  SSM_TR_no_trans_HourGlassSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_HideHourglass_1_HourGlassSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_ShowHourGlass_1_HourGlassSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive
} SSM_TR_HourGlassSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::HourGlassSM */
typedef enum kcg_tag_SSM_ST_HourGlassSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive {
  SSM_st_HideHourglass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM,
  SSM_st_ShowHourGlass_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_HourGlassSM
} SSM_ST_HourGlassSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM17 */
typedef enum kcg_tag_SSM_TR_SM17_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive {
  SSM_TR_no_trans_SM17_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_Idle_1_SM17_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_Idle_2_SM17_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_SendC9Ack_1_SM17_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_SendC1Ack_1_SM17_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive
} SSM_TR_SM17_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM17 */
typedef enum kcg_tag_SSM_ST_SM17_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive {
  SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17,
  SSM_st_SendC9Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17,
  SSM_st_SendC1Ack_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SM17
} SSM_ST_SM17_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SymbolsAcknowledgmentSM */
typedef enum kcg_tag_SSM_TR_SymbolsAcknowledgmentSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive {
  SSM_TR_no_trans_SymbolsAcknowledgmentSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_radyToBeAck_1_SymbolsAcknowledgmentSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_radyToBeAck_2_SymbolsAcknowledgmentSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_brakeSymbolAcked_1_SymbolsAcknowledgmentSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_Idle_1_SymbolsAcknowledgmentSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_C1AreaAcked_1_SymbolsAcknowledgmentSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive
} SSM_TR_SymbolsAcknowledgmentSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SymbolsAcknowledgmentSM */
typedef enum kcg_tag_SSM_ST_SymbolsAcknowledgmentSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive {
  SSM_st_radyToBeAck_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM,
  SSM_st_brakeSymbolAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM,
  SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM,
  SSM_st_C1AreaAcked_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_SymbolsAcknowledgmentSM
} SSM_ST_SymbolsAcknowledgmentSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM */
typedef enum kcg_tag_SSM_TR_IconSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive {
  SSM_TR_no_trans_IconSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_IconPacketValid_1_IconSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_Idle_1_IconSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive
} SSM_TR_IconSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM */
typedef enum kcg_tag_SSM_ST_IconSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive {
  SSM_st_IconPacketValid_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM,
  SSM_st_Idle_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IconSM
} SSM_ST_IconSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::YesNoTrainDataValidationSM */
typedef enum kcg_tag_SSM_TR_YesNoTrainDataValidationSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive {
  SSM_TR_no_trans_YesNoTrainDataValidationSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_NO_1_YesNoTrainDataValidationSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_YES_1_YesNoTrainDataValidationSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive
} SSM_TR_YesNoTrainDataValidationSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::YesNoTrainDataValidationSM */
typedef enum kcg_tag_SSM_ST_YesNoTrainDataValidationSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive {
  SSM_st_NO_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM,
  SSM_st_YES_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_YesNoTrainDataValidationSM
} SSM_ST_YesNoTrainDataValidationSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::TrainDataSM */
typedef enum kcg_tag_SSM_TR_TrainDataSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive {
  SSM_TR_no_trans_TrainDataSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_InternalDMI_TrainDataValues_1_TrainDataSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive
} SSM_TR_TrainDataSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::TrainDataSM */
typedef enum kcg_tag_SSM_ST_TrainDataSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive {
  SSM_st_InternalDMI_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM,
  SSM_st_Incoming_TrainDataValues_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM
} SSM_ST_TrainDataSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM */
typedef enum kcg_tag_SSM_TR_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive {
  SSM_TR_no_trans_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_Insert_DriverID_1_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_WaitingForReq_1_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_WaitingForReq_2_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_WaitingForReq_3_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_WaitingForReq_4_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_Insert_TrainRN_1_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_MainMenu_1_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_MainMenu_2_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_MainMenu_3_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_MainMenu_4_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive,
  SSM_TR_LevelWindow_1_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive
} SSM_TR_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM */
typedef enum kcg_tag_SSM_ST_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive {
  SSM_st_Insert_DriverID_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM,
  SSM_st_WaitingForReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM,
  SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM,
  SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM,
  SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM
} SSM_ST_RequestSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM */
typedef enum kcg_tag_SSM_TR_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu {
  SSM_TR_no_trans_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
  SSM_TR_MainMenu_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
  SSM_TR_MainMenu_2_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
  SSM_TR_MainMenu_3_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
  SSM_TR_MainMenu_4_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
  SSM_TR_MainMenu_5_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
  SSM_TR_DriverID_DMI_controlled_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_Reques,
  SSM_TR_DriverID_DMI_controlled_2_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_Reques,
  SSM_TR_TrainDataWindow_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Main,
  SSM_TR_TrainDataWindow_2_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_Main,
  SSM_TR_TrainDataValidationWindow_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_Requ,
  SSM_TR_TrainDataValidationWindow_2_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_Requ,
  SSM_TR_TrainDataValidationWindow_3_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_Requ,
  SSM_TR_TrainDataValidationWindow_4_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_Requ,
  SSM_TR_Insert_TrainRN_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainM,
  SSM_TR_Insert_TrainRN_2_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainM,
  SSM_TR_WaitingLevelInformation_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_Reques,
  SSM_TR_LevelWindow_1_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
  SSM_TR_LevelWindow_2_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu
} SSM_TR_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
/* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::RequestSM::MainMenu::WindowsSM */
typedef enum kcg_tag_SSM_ST_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu {
  SSM_st_MainMenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM,
  SSM_st_DriverID_DMI_controlled_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
  SSM_st_TrainDataWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_Windows,
  SSM_st_TrainDataValidationWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMe,
  SSM_st_Insert_TrainRN_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsS,
  SSM_st_WaitingLevelInformation_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu,
  SSM_st_LevelWindow_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu_WindowsSM
} SSM_ST_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_RequestSM_MainMenu;
/* Array_DMI_List_Entry_Request */
typedef DMI_List_Entry_Request_T_DMI_Types_Pkg Array_DMI_List_Entry_Request[15];

/* Array_DMI_Q_Text */
typedef DMI_Q_TEXT_DMI_Types_Pkg Array_DMI_Q_Text[27];

/* ProvidePositionReport_Pkg::BG_Orientation_T */
typedef Q_DIRLRBG BG_Orientation_T_ProvidePositionReport_Pkg;

/* A_NVMAXREDADH1 */
typedef kcg_real A_NVMAXREDADH1;

/* A_NVMAXREDADH2 */
typedef kcg_real A_NVMAXREDADH2;

/* A_NVMAXREDADH3 */
typedef kcg_real A_NVMAXREDADH3;

/* M_NVAVADH */
typedef kcg_real M_NVAVADH;

/* A_NVP12 */
typedef kcg_real A_NVP12;

/* A_NVP23 */
typedef kcg_real A_NVP23;

/* M_NVKVINT */
typedef kcg_real M_NVKVINT;

/* M_NVKRINT */
typedef kcg_real M_NVKRINT;

/* M_NVKTINT */
typedef kcg_real M_NVKTINT;

/* float32 */
typedef kcg_real float32;

/* tScale */
typedef kcg_real tScale[9];

/* SDM_Types_Pkg::L_internal_real_Type */
typedef kcg_real L_internal_real_Type_SDM_Types_Pkg;

/* SDM_Types_Pkg::V_internal_real_Type */
typedef kcg_real V_internal_real_Type_SDM_Types_Pkg;

/* TargetManagement_types::Target_real_T */
typedef struct kcg_tag_Target_real_T_TargetManagement_types {
  TargetType_T_TargetManagement_types targetType;
  L_internal_real_Type_SDM_Types_Pkg distance;
  V_internal_real_Type_SDM_Types_Pkg speed;
} Target_real_T_TargetManagement_types;

/* TargetManagement_types::Target_list_MRSP_real_T */
typedef Target_real_T_TargetManagement_types Target_list_MRSP_real_T_TargetManagement_types[110];

/* TargetManagement_types::EOA_real_T */
typedef struct kcg_tag_EOA_real_T_TargetManagement_types {
  L_internal_real_Type_SDM_Types_Pkg Location;
  V_internal_real_Type_SDM_Types_Pkg TargetSpeed;
} EOA_real_T_TargetManagement_types;

/* CalcBrakingCurves_types::ASafeSpeedDefinition_T */
typedef V_internal_real_Type_SDM_Types_Pkg ASafeSpeedDefinition_T_CalcBrakingCurves_types[14];

/* TargetLimits_Pkg::bec_t */
typedef struct kcg_tag_bec_t_TargetLimits_Pkg {
  V_internal_real_Type_SDM_Types_Pkg v;
  L_internal_real_Type_SDM_Types_Pkg d;
} bec_t_TargetLimits_Pkg;

/* SDM_Types_Pkg::A_internal_real_Type */
typedef kcg_real A_internal_real_Type_SDM_Types_Pkg;

/* CalcBrakingCurves_types::ParabolaArc_T */
typedef struct kcg_tag_ParabolaArc_T_CalcBrakingCurves_types {
  L_internal_real_Type_SDM_Types_Pkg distance;
  V_internal_real_Type_SDM_Types_Pkg speed;
  A_internal_real_Type_SDM_Types_Pkg acceleration;
} ParabolaArc_T_CalcBrakingCurves_types;

/* SDM_Types_Pkg::T_internal_real_Type */
typedef kcg_real T_internal_real_Type_SDM_Types_Pkg;

/* SDMModelPkg::t_BrakeVt_t */
typedef T_internal_real_Type_SDM_Types_Pkg t_BrakeVt_t_SDMModelPkg[2];

/* SDMModelPkg::t_Brake_t */
typedef struct kcg_tag_t_Brake_t_SDMModelPkg {
  t_BrakeVt_t_SDMModelPkg emergency;
  t_BrakeVt_t_SDMModelPkg service;
} t_Brake_t_SDMModelPkg;

/* SDM_GradientAcceleration_types::Gradient_real_t */
typedef kcg_real Gradient_real_t_SDM_GradientAcceleration_types;

/* Toolbox::odometryFactors_T */
typedef struct kcg_tag_odometryFactors_T_Toolbox {
  kcg_real o_nominal;
  kcg_real o_min;
  kcg_real o_max;
} odometryFactors_T_Toolbox;

/* TIU_Types_Pkg::Isolation_Status_T */
typedef struct kcg_tag_Isolation_Status_T_TIU_Types_Pkg {
  kcg_bool valid;
  M_Isolation_status_T_TIU_Types_Pkg isolation_status;
} Isolation_Status_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Brake_command_T */
typedef struct kcg_tag_Brake_command_T_TIU_Types_Pkg {
  kcg_bool valid;
  M_brake_signal_command_T_TIU_Types_Pkg m_servicebrake_cm;
  M_brake_signal_command_T_TIU_Types_Pkg m_emergencybrake_cm;
} Brake_command_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Brake_inhibition_command_T */
typedef struct kcg_tag_Brake_inhibition_command_T_TIU_Types_Pkg {
  kcg_bool valid;
  M_brake_inhibit_command_T_TIU_Types_Pkg m_regenerativebrake_cm;
  M_eddy_current_brake_inhibition_T_TIU_Types_Pkg m_eddycurrentbrake_cm;
  M_brake_inhibit_command_T_TIU_Types_Pkg m_magneticshoebrake_cm;
} Brake_inhibition_command_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Type_I_train_commands_T */
typedef struct kcg_tag_Type_I_train_commands_T_TIU_Types_Pkg {
  kcg_bool valid;
  M_pantograph_command_T_TIU_Types_Pkg m_pantograph_cm;
  M_airtightness_command_T_TIU_Types_Pkg m_airtightness_cm;
  M_mainpowerswitch_command_T_TIU_Types_Pkg m_mainpowerswitch_cm;
  M_traction_cutoff_command_T_TIU_Types_Pkg m_traction_cutoff_cm;
} Type_I_train_commands_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::TIU_commandStatus_T */
typedef struct kcg_tag_TIU_commandStatus_T_TIU_Types_Pkg {
  kcg_bool valid;
  kcg_bool emergencyBrakeActive;
  kcg_bool isolationStatus;
} TIU_commandStatus_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::TIU_trainStatus_T */
typedef struct kcg_tag_TIU_trainStatus_T_TIU_Types_Pkg {
  kcg_bool valid;
  kcg_bool deskOpen;
  cab_ID_T_TIU_Types_Pkg ownCab;
  cab_ID_T_TIU_Types_Pkg activeCab;
} TIU_trainStatus_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Mode_control_and_train_status_T */
typedef struct kcg_tag_Mode_control_and_train_status_T_TIU_Types_Pkg {
  kcg_bool valid;
  M_sleeping_signal_status_T_TIU_Types_Pkg m_sleeping_st;
  M_passiveshunting_signal_status_T_TIU_Types_Pkg m_passiveshunting_st;
  M_nonleading_signal_status_T_TIU_Types_Pkg m_nonleading_st;
  M_cab_signal_status_T_TIU_Types_Pkg m_cab_st;
  M_directioncontroller_signal_status_T_TIU_Types_Pkg m_directioncontroller_st;
  M_trainintegrity_signal_status_T_TIU_Types_Pkg m_trainintegrity_st;
  M_traction_signal_status_T_TIU_Types_Pkg m_traction_st;
} Mode_control_and_train_status_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Brake_status_T */
typedef struct kcg_tag_Brake_status_T_TIU_Types_Pkg {
  kcg_bool valid;
  M_brake_status_T_TIU_Types_Pkg m_regenerativebrake_st;
  M_brake_status_T_TIU_Types_Pkg m_eddycurrentbrake_st;
  M_brake_status_T_TIU_Types_Pkg m_magneticshoebrake_st;
  M_brake_status_T_TIU_Types_Pkg m_electropneumaticbrake_st;
  M_brake_status_T_TIU_Types_Pkg m_additionalbrake_st;
} Brake_status_T_TIU_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Mode_Level */
typedef struct kcg_tag_T_Mode_Level_Level_And_Mode_Types_Pkg {
  kcg_bool compatibleModeAndLevel;
  M_LEVEL level;
  kcg_bool newLevel;
  M_MODE Mode;
  kcg_bool newMode;
} T_Mode_Level_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_AcknoledgementRequest */
typedef struct kcg_tag_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg {
  kcg_bool valid;
  M_MODE whichMode;
  kcg_bool SH_Req_RefusedByRBC;
  kcg_bool LevelNeedsAck;
} T_AcknoledgementRequest_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_MASSPGradient_Available */
typedef struct kcg_tag_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg {
  kcg_bool P12_received;
  kcg_bool P15_received;
  kcg_bool P21_received;
  kcg_bool P27_received;
} T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Data_From_Speed_Supervision */
typedef struct kcg_tag_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg {
  kcg_bool Estim_front_End_overpass_SR_Dist;
  kcg_bool Estim_Front_End_Rear_SSP;
  kcg_bool Override_Function_Active;
  kcg_bool EOA_Antenna_Overpass;
  kcg_bool EOA_Front_End;
  kcg_bool Train_Speed_Under_Overide_Limit;
} T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Data_To_DMI */
typedef struct kcg_tag_T_Data_To_DMI_Level_And_Mode_Types_Pkg {
  kcg_bool Ack_LS;
  kcg_bool Ack_OS;
  kcg_bool Ack_RV;
  kcg_bool Ack_SH;
  kcg_bool Ack_SN;
  kcg_bool Ack_SR;
  kcg_bool Ack_TR;
  kcg_bool Ack_UN;
  kcg_bool SH_Refused_By_RBC;
} T_Data_To_DMI_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Data_To_BG_Management */
typedef struct kcg_tag_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg {
  kcg_bool EoM_Procedure_req;
  kcg_bool Clean_BG_List_SH_Area;
  kcg_bool MA_Req;
  kcg_bool Req_for_SH_from_Driver;
  kcg_bool Connection_to_RBC_req;
  kcg_bool Position_Repport_Needed;
} T_Data_To_BG_Management_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Data_From_DMI */
typedef struct kcg_tag_T_Data_From_DMI_Level_And_Mode_Types_Pkg {
  kcg_bool Ack_LS;
  kcg_bool Ack_OS;
  kcg_bool Ack_RV;
  kcg_bool Ack_SH;
  kcg_bool Ack_SN;
  kcg_bool Ack_SR;
  kcg_bool Ack_TR;
  kcg_bool Ack_UN;
  kcg_bool Req_Exit_SH;
  kcg_bool Req_NL;
  kcg_bool Req_Override;
  kcg_bool Req_SH;
  kcg_bool Req_Start;
  kcg_bool ETCS_Isolated;
} T_Data_From_DMI_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Data_From_STM */
typedef struct kcg_tag_T_Data_From_STM_Level_And_Mode_Types_Pkg {
  kcg_bool Interface_To_National_System;
  kcg_bool National_trip_Order;
} T_Data_From_STM_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_ERTMS_capabilities */
typedef struct kcg_tag_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg {
  kcg_bool NTC;
  kcg_bool L0;
  kcg_bool L1;
  kcg_bool L2;
  kcg_bool L3;
} T_ERTMS_capabilities_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_Mess */
typedef struct kcg_tag_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg {
  kcg_bool Mess_15;
  kcg_bool Mess_16;
  kcg_bool Mess_2;
  kcg_bool Mess_27;
  kcg_bool Mess_28;
  kcg_bool Mess_6;
} T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg;

/* manage_DMI_Output_Pkg::dmiOutputs_T */
typedef struct kcg_tag_dmiOutputs_T_manage_DMI_Output_Pkg {
  kcg_bool NO_initrequestSent;
  kcg_bool secondValidationRequested;
} dmiOutputs_T_manage_DMI_Output_Pkg;

/* DMI_Types_Pkg::DMI_Available_Menu_T */
typedef struct kcg_tag_DMI_Available_Menu_T_DMI_Types_Pkg {
  kcg_bool Menu_button_start_of_mission;
  kcg_bool Menu_button_shunting;
  kcg_bool Menu_button_shunting_exit;
  kcg_bool Menu_button_non_leading;
  kcg_bool Menu_button_exit_non_leading;
  kcg_bool Menu_button_maintain_shunting;
  kcg_bool Menu_button_driver_ID;
  kcg_bool Menu_button_train_running_number;
  kcg_bool Menu_button_ETCS_level;
  kcg_bool Menu_button_train_data_modification;
  kcg_bool Menu_button_train_data_view;
  kcg_bool Menu_button_staff_responsible_data;
  kcg_bool Menu_button_language_selection;
  kcg_bool Menu_button_override_EOA;
  kcg_bool Menu_button_override_route_suitability;
  kcg_bool Menu_button_adhesion_factor;
  kcg_bool Menu_button_system_version;
  kcg_bool Menu_button_volume;
  kcg_bool Menu_button_luminance;
  kcg_bool Menu_button_train_integrity;
  kcg_bool Menu_button_isolation;
  kcg_bool Show_hourglass;
  kcg_bool Menu_button_use_short_number;
  kcg_bool Menu_button_enter_RBC_data;
  kcg_bool Menu_button_radio_network_ID;
  kcg_bool Menu_button_contact_last_RBC;
  kcg_bool Button_switch_for_train_data;
  kcg_bool Fix_train_data_entry;
  kcg_bool Menu_button_Set_VBC;
  kcg_bool Menu_button_Remove_VBC;
} DMI_Available_Menu_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_DriverAck_T */
typedef struct kcg_tag_DMI_DriverAck_T_DMI_Types_Pkg {
  kcg_bool valid;
  M_MODE whichMode;
  kcg_bool acknowledgement;
} DMI_DriverAck_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_DriverRequest_T */
typedef struct kcg_tag_DMI_DriverRequest_T_DMI_Types_Pkg {
  kcg_bool valid;
  kcg_bool Req_Exit_SH;
  kcg_bool Req_NL;
  kcg_bool Req_Override;
  kcg_bool Req_SH;
  kcg_bool Req_Start;
  kcg_bool ETCS_Isolated;
} DMI_DriverRequest_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_To_Modes_T */
typedef struct kcg_tag_DMI_To_Modes_T_DMI_Types_Pkg {
  kcg_bool valid;
  DMI_DriverAck_T_DMI_Types_Pkg DriverAck;
  DMI_DriverRequest_T_DMI_Types_Pkg DriverRequest;
  kcg_bool LevelAck;
} DMI_To_Modes_T_DMI_Types_Pkg;

/* RCM_Session_Types_Pkg::obuEventsAndPhases_T */
typedef struct kcg_tag_obuEventsAndPhases_T_RCM_Session_Types_Pkg {
  kcg_bool atPowerUp;
  kcg_bool atPowerDown;
  kcg_bool atStartOfMission;
  kcg_bool modeChangeHasToBeReportedToRBC;
  kcg_bool driverHasManuallyChangedLevel_to_2_or_3;
  kcg_bool trainFrontPassesStartOfAnnouncedRadioHole;
  kcg_bool trainFrontReachesEndOfAnnouncedRadioHole;
  kcg_bool trainFrontInsideInAnAnnouncedRadioHole;
  kcg_bool trainFrontPassesALevelTransitionBorder;
  kcg_bool trainFrontPassesA_RBC_RBC_border;
  kcg_bool startOfMissionProcedureCompleted_in_level_2_or_3;
  kcg_bool isPartOfAnOngoingStartOfMissionProcedure;
  kcg_bool startOfMissionProcedureIsGoingOn;
  kcg_bool endOfMissionIsExecuted;
  kcg_bool triggerDecisionThatNoRadioNetworkIDAvailable;
  kcg_bool errorConditionRequiringTerminationDetected;
  kcg_bool trainIsRejectedByRBC_duringStartOfMission;
  kcg_bool driverClosesTheDeskduringStartOfMission;
  kcg_bool trainExitedFromAnRBCArea;
  kcg_bool isInCommunicationSessionWithAnRIU;
  kcg_bool level_1_isLeft;
} obuEventsAndPhases_T_RCM_Session_Types_Pkg;

/* RCM_Session_Types_Pkg::safeRadioConnectionIndication_T */
typedef struct kcg_tag_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg {
  kcg_bool valid;
  safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg indicator;
} safeRadioConnectionIndication_T_RCM_Session_Types_Pkg;

/* Packet_TrainTypes_Pkg::PT4_ErrorReporting_T */
typedef struct kcg_tag_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  M_ERROR m_error;
} PT4_ErrorReporting_T_Packet_TrainTypes_Pkg;

/* TrackAtlasTypes::FromTIU_t */
typedef kcg_bool FromTIU_t_TrackAtlasTypes;

/* DATA::DMI_Available_Menu_int_T */
typedef kcg_bool DMI_Available_Menu_int_T_DATA[30];

/* Common_Types_Pkg::RadioMetadata_T */
typedef struct kcg_tag_RadioMetadata_T_Common_Types_Pkg {
  kcg_bool t_train_reference;
  kcg_bool nid_em;
  kcg_bool q_scale;
  kcg_bool d_sr;
  kcg_bool t_sh_rqst;
  kcg_bool d_ref;
  kcg_bool q_dir;
  kcg_bool d_emergencystop;
  kcg_bool m_version;
} RadioMetadata_T_Common_Types_Pkg;

/* Packet_Types_Pkg::nvkrint_T */
typedef struct kcg_tag_nvkrint_T_Packet_Types_Pkg {
  kcg_bool valid;
  L_NVKRINT l_nvkrint;
  M_NVKRINT m_nvkrint;
} nvkrint_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::nvkrintArray_T */
typedef nvkrint_T_Packet_Types_Pkg nvkrintArray_T_Packet_Types_Pkg[7];

/* Packet_Types_Pkg::P137_StopIfInStaffResponsible_T */
typedef struct kcg_tag_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SRSTOP q_srstop;
} P137_StopIfInStaffResponsible_T_Packet_Types_Pkg;

/* SDM_Commands_Pkg::TSM_revokeCond_T */
typedef struct kcg_tag_TSM_revokeCond_T_SDM_Commands_Pkg {
  kcg_bool r0;
  kcg_bool r1;
  kcg_bool r2;
  kcg_bool r3;
} TSM_revokeCond_T_SDM_Commands_Pkg;

/* SDM_Commands_Pkg::TSM_triggerCond_T */
typedef struct kcg_tag_TSM_triggerCond_T_SDM_Commands_Pkg {
  kcg_bool t1;
  kcg_bool t2;
  kcg_bool t3;
  kcg_bool t4;
  kcg_bool t5;
  kcg_bool t6;
  kcg_bool t7;
  kcg_bool t8;
  kcg_bool t9;
  kcg_bool t10;
  kcg_bool t11;
  kcg_bool t12;
  kcg_bool t13;
  kcg_bool t14;
} TSM_triggerCond_T_SDM_Commands_Pkg;

/* SDM_Commands_Pkg::MyArray */
typedef kcg_bool MyArray_SDM_Commands_Pkg[14];

/* SDM_Commands_Pkg::EB_command_T */
typedef kcg_bool EB_command_T_SDM_Commands_Pkg;

/* SDM_Types_Pkg::TrainLocations_real_T */
typedef struct kcg_tag_TrainLocations_real_T_SDM_Types_Pkg {
  kcg_bool trainPositionIsValid;
  L_internal_real_Type_SDM_Types_Pkg d_est_frontendPos;
  L_internal_real_Type_SDM_Types_Pkg d_minSafeFrontEndPos;
  L_internal_real_Type_SDM_Types_Pkg d_maxSafeFrontEndPos;
  L_internal_real_Type_SDM_Types_Pkg d_LRBG;
  L_internal_real_Type_SDM_Types_Pkg d_accLRBG;
} TrainLocations_real_T_SDM_Types_Pkg;

/* TargetManagement_types::TargetCollection_T */
typedef struct kcg_tag_TargetCollection_T_TargetManagement_types {
  kcg_bool updatedTargetList;
  Target_list_MRSP_real_T_TargetManagement_types MRSP_targetList;
  Target_real_T_TargetManagement_types EOA_target;
  Target_real_T_TargetManagement_types SvL_LoA_target;
} TargetCollection_T_TargetManagement_types;

/* TargetManagement_types::MRSP_internal_section_T */
typedef struct kcg_tag_MRSP_internal_section_T_TargetManagement_types {
  L_internal_real_Type_SDM_Types_Pkg Loc_Abs;
  V_internal_real_Type_SDM_Types_Pkg MRS;
  kcg_bool valid;
} MRSP_internal_section_T_TargetManagement_types;

/* TargetManagement_types::MRSP_internal_T */
typedef MRSP_internal_section_T_TargetManagement_types MRSP_internal_T_TargetManagement_types[110];

/* TargetManagement_types::MA_section_real_T */
typedef struct kcg_tag_MA_section_real_T_TargetManagement_types {
  kcg_bool valid;
  V_internal_real_Type_SDM_Types_Pkg v_main;
  EOA_real_T_TargetManagement_types EOA;
  kcg_bool DP_valid;
  L_internal_real_Type_SDM_Types_Pkg DangerPoint;
  kcg_bool OL_valid;
  L_internal_real_Type_SDM_Types_Pkg Overlap;
  kcg_bool q_calculate_release;
  V_internal_real_Type_SDM_Types_Pkg ReleaseSpeed;
  MA_Level_t_TrackAtlasTypes level;
} MA_section_real_T_TargetManagement_types;

/* SDM_GradientAcceleration_types::Gradient_section_real_t */
typedef struct kcg_tag_Gradient_section_real_t_SDM_GradientAcceleration_types {
  L_internal_real_Type_SDM_Types_Pkg location;
  Gradient_real_t_SDM_GradientAcceleration_types gradient;
  kcg_bool valid;
} Gradient_section_real_t_SDM_GradientAcceleration_types;

/* SDM_GradientAcceleration_types::GradientProfile_real_t */
typedef Gradient_section_real_t_SDM_GradientAcceleration_types GradientProfile_real_t_SDM_GradientAcceleration_types[50];

/* SDM_GradientAcceleration_types::GradientProfile_real_compensated_t */
typedef Gradient_section_real_t_SDM_GradientAcceleration_types GradientProfile_real_compensated_t_SDM_GradientAcceleration_types[100];

/* SDM_GradientAcceleration_types::A_gradient_element_t */
typedef struct kcg_tag_A_gradient_element_t_SDM_GradientAcceleration_types {
  L_internal_real_Type_SDM_Types_Pkg position;
  A_internal_real_Type_SDM_Types_Pkg gradient_acceleration;
  kcg_bool valid;
} A_gradient_element_t_SDM_GradientAcceleration_types;

/* SDM_GradientAcceleration_types::A_gradient_t */
typedef A_gradient_element_t_SDM_GradientAcceleration_types A_gradient_t_SDM_GradientAcceleration_types[100];

/* CalcBrakingCurves_types::ParabolaCurveValid_T */
typedef kcg_bool ParabolaCurveValid_T_CalcBrakingCurves_types[114];

/* TargetLimits_Pkg::T_trac_t */
typedef struct kcg_tag_T_trac_t_TargetLimits_Pkg {
  T_internal_real_Type_SDM_Types_Pkg Traction;
  T_internal_real_Type_SDM_Types_Pkg berem;
  T_internal_real_Type_SDM_Types_Pkg bs;
  T_internal_real_Type_SDM_Types_Pkg bs1;
  T_internal_real_Type_SDM_Types_Pkg bs2;
  kcg_bool inhComp;
  T_internal_real_Type_SDM_Types_Pkg indication;
} T_trac_t_TargetLimits_Pkg;

/* TM_baseline2::P027V1_OBU_body_enum_T */
typedef struct kcg_tag_P027V1_OBU_body_enum_T_TM_baseline2 {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
} P027V1_OBU_body_enum_T_TM_baseline2;

/* ProvidePositionReport_Pkg::ErrorMessage_T */
typedef struct kcg_tag_ErrorMessage_T_ProvidePositionReport_Pkg {
  kcg_bool present;
  M_ERROR errorType;
} ErrorMessage_T_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::ModeLevel2PositionReport_T */
typedef struct kcg_tag_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg {
  M_MODE currMode;
  M_LEVEL currLevel;
  kcg_bool levelTransitionBorderPassed;
} ModeLevel2PositionReport_T_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::LocationBasedEvents_T */
typedef struct kcg_tag_LocationBasedEvents_T_ProvidePositionReport_Pkg {
  kcg_bool minSafeRearEndPassed;
  kcg_bool maxSafeFrontEndPassed;
} LocationBasedEvents_T_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::RBC_Communication_T */
typedef struct kcg_tag_RBC_Communication_T_ProvidePositionReport_Pkg {
  kcg_bool newSessionEstablished;
} RBC_Communication_T_ProvidePositionReport_Pkg;

/* trainData_Types_pkg::trainData_Trigger_T */
typedef struct kcg_tag_trainData_Trigger_T_trainData_Types_pkg {
  kcg_bool brakeTrigger;
  kcg_bool driverRequestModify;
  kcg_bool shortenLocationBasedInformation;
  kcg_bool deleteMA;
  kcg_bool trainLengthIncreased;
} trainData_Trigger_T_trainData_Types_pkg;

/* trainData_Types_pkg::trainData_Events_T */
typedef struct kcg_tag_trainData_Events_T_trainData_Types_pkg {
  kcg_bool trainStandStill;
  kcg_bool driverRequestModify;
  kcg_bool communicationSessionEstablished;
  kcg_bool safeRadioConnectionLost;
  kcg_bool approachingRBCarea;
  kcg_bool MoRCreadyFlag;
} trainData_Events_T_trainData_Types_pkg;

/* MoRC_Pck::mobileHWStatus_Type */
typedef struct kcg_tag_mobileHWStatus_Type_MoRC_Pck {
  kcg_bool valid;
  mobileHWConnectionStatus_Type_MoRC_Pck connectionStatus;
  kcg_bool settingUpConnectionHasFailed;
  kcg_bool connectionLost;
} mobileHWStatus_Type_MoRC_Pck;

/* RCM_MsgTypes_Pkg::msgToTrackTriggers_T */
typedef struct kcg_tag_msgToTrackTriggers_T_RCM_MsgTypes_Pkg {
  kcg_bool m155_initiationOfACommunicationSession;
  kcg_bool m156_terminationOfACommunicationSession;
  kcg_bool m159_sessionEstablished;
  kcg_bool m154_noCompatibleVersionSupported;
} msgToTrackTriggers_T_RCM_MsgTypes_Pkg;

/* DMI_Types_Pkg::DMI_TEXT */
typedef kcg_char DMI_TEXT_DMI_Types_Pkg[255];

/* DMI_Messages_Bothways_Pkg::driverIdentifier_T */
typedef kcg_char driverIdentifier_T_DMI_Messages_Bothways_Pkg[9];

/* NID_MN */
typedef kcg_int NID_MN;

/* API_RadioCommunication_Pkg::RadioManagement_T */
typedef struct kcg_tag_RadioManagement_T_API_RadioCommunication_Pkg {
  kcg_bool valid;
  cmdRadioUnit_T_API_RadioCommunication_Pkg cmd;
  NID_MN networkID;
} RadioManagement_T_API_RadioCommunication_Pkg;

/* Packet_Types_Pkg::P45_RadioNetworkRegistration_T */
typedef struct kcg_tag_P45_RadioNetworkRegistration_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  NID_MN nid_mn;
} P45_RadioNetworkRegistration_T_Packet_Types_Pkg;

/* MoRC_Pck::radioNetWorkIDs_T */
typedef struct kcg_tag_radioNetWorkIDs_T_MoRC_Pck {
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg defaultID;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg memorizedID;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg ID_fromDriver;
} radioNetWorkIDs_T_MoRC_Pck;

/* L_TEXT */
typedef kcg_int L_TEXT;

/* NID_C */
typedef kcg_int NID_C;

/* DMI_Types_Pkg::nationValuesForDMI_T */
typedef struct kcg_tag_nationValuesForDMI_T_DMI_Types_Pkg {
  kcg_bool valid;
  NID_C nid_c;
  kcg_bool nid_c_valid;
} nationValuesForDMI_T_DMI_Types_Pkg;

/* NID_RADIO */
typedef kcg_int NID_RADIO;

/* NID_RBC */
typedef kcg_int NID_RBC;

/* RCM_Session_Types_Pkg::sessionStatus_T */
typedef struct kcg_tag_sessionStatus_T_RCM_Session_Types_Pkg {
  kcg_bool valid;
  sessionPhase_T_RCM_Session_Types_Pkg phase;
  NID_C nid_c;
  NID_RBC nid_rbc;
  NID_RADIO nid_radio;
} sessionStatus_T_RCM_Session_Types_Pkg;

/* Packet_Types_Pkg::P42_SessionManagement_T */
typedef struct kcg_tag_P42_SessionManagement_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_RBC q_rbc;
  NID_C nid_c;
  NID_RBC nid_rbc;
  NID_RADIO nid_radio;
  Q_SLEEPSESSION q_sleepsession;
} P42_SessionManagement_T_Packet_Types_Pkg;

/* NID_BG */
typedef kcg_int NID_BG;

/* Packet_Types_Pkg::P63_BaliseInSRAuthority_T */
typedef struct kcg_tag_P63_BaliseInSRAuthority_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_NEWCOUNTRY q_newcountry;
  NID_C nid_c;
  NID_BG nid_bg;
} P63_BaliseInSRAuthority_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::P63_ListofBalisesinSRAuthority_T */
typedef P63_BaliseInSRAuthority_T_Packet_Types_Pkg P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg[7];

/* NID_LRBG */
typedef kcg_int NID_LRBG;

/* D_LINK */
typedef kcg_int D_LINK;

/* Q_LOCACC */
typedef kcg_int Q_LOCACC;

/* BG_Types_Pkg::LinkedBG_T */
typedef struct kcg_tag_LinkedBG_T_BG_Types_Pkg {
  kcg_bool valid;
  NID_LRBG nid_LRBG;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_LINK d_link;
  Q_NEWCOUNTRY q_newcountry;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINKORIENTATION q_linkorientation;
  Q_LINKREACTION q_linkreaction;
  Q_LOCACC q_locacc;
} LinkedBG_T_BG_Types_Pkg;

/* BG_Types_Pkg::LinkedBGs_T */
typedef LinkedBG_T_BG_Types_Pkg LinkedBGs_T_BG_Types_Pkg[33];

/* TM::P005_section_enum_T */
typedef struct kcg_tag_P005_section_enum_T_TM {
  kcg_bool valid;
  D_LINK d_link;
  Q_NEWCOUNTRY q_newcountry;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINKORIENTATION q_linkorientation;
  Q_LINKREACTION q_linkreaction;
  Q_LOCACC q_locacc;
} P005_section_enum_T_TM;

/* TM::P005_OBU_sectionlist_enum_T */
typedef P005_section_enum_T_TM P005_OBU_sectionlist_enum_T_TM[33];

/* M_MCOUNT */
typedef kcg_int M_MCOUNT;

/* BG_Types_Pkg::TelegramHeader_T */
typedef struct kcg_tag_TelegramHeader_T_BG_Types_Pkg {
  Q_UPDOWN q_updown;
  M_VERSION m_version;
  Q_MEDIA q_media;
  N_PIG n_pig;
  N_TOTAL n_total;
  M_DUP m_dup;
  M_MCOUNT m_mcount;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINK q_link;
} TelegramHeader_T_BG_Types_Pkg;

/* Q_NVLOCACC */
typedef kcg_int Q_NVLOCACC;

/* NID_NTC */
typedef kcg_int NID_NTC;

/* BG_Types_Pkg::TrainToTrackStatus_T */
typedef struct kcg_tag_TrainToTrackStatus_T_BG_Types_Pkg {
  NID_NTC nid_ntc;
  Q_LENGTH q_length;
} TrainToTrackStatus_T_BG_Types_Pkg;

/* Packet_Types_Pkg::P46_ConditionalLevelTransitionOrder_T */
typedef struct kcg_tag_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
} P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::P46_ConditionalLevelTransitionOrders_T */
typedef P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg[7];

/* TM::P046_section_enum_T */
typedef struct kcg_tag_P046_section_enum_T_TM {
  kcg_bool valid;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
} P046_section_enum_T_TM;

/* TM::P046_OBU_sectionlist_enum_T */
typedef P046_section_enum_T_TM P046_OBU_sectionlist_enum_T_TM[33];

/* D_TRACKCOND */
typedef kcg_int D_TRACKCOND;

/* DMI_Types_Pkg::DMI_trackConditionElement_T */
typedef struct kcg_tag_DMI_trackConditionElement_T_DMI_Types_Pkg {
  D_TRACKCOND d_trackcond;
  M_TRACKCOND m_trackcond;
} DMI_trackConditionElement_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_trackConditionArray_T */
typedef DMI_trackConditionElement_T_DMI_Types_Pkg DMI_trackConditionArray_T_DMI_Types_Pkg[32];

/* NID_OPERATIONAL */
typedef kcg_int NID_OPERATIONAL;

/* Packet_TrainTypes_Pkg::PT5_TrainRunningNumber */
typedef struct kcg_tag_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  NID_OPERATIONAL TrainRunningNumber;
} PT5_TrainRunningNumber_Packet_TrainTypes_Pkg;

/* NID_CTRACTION */
typedef kcg_int NID_CTRACTION;

/* NID_TEXTMESSAGE */
typedef kcg_int NID_TEXTMESSAGE;

/* M_POSITION */
typedef kcg_int M_POSITION;

/* DMI_Track_Description_int_array_T */
typedef kcg_int DMI_Track_Description_int_array_T[325];

/* NID_MESSAGE */
typedef kcg_int NID_MESSAGE;

/* T_TRAIN */
typedef kcg_int T_TRAIN;

/* Clock_T */
typedef struct kcg_tag_Clock_T { T_TRAIN m_Value; } Clock_T;

/* trainData_Types_pkg::trainDataStatus_T */
typedef struct kcg_tag_trainDataStatus_T_trainData_Types_pkg {
  kcg_bool valid;
  kcg_bool validatedByDriver;
  kcg_bool RBCsystemVersionOnboard;
  kcg_bool validatedbyRBC;
  kcg_bool waitingForRBCResponse;
  kcg_bool driverIsModificationTrainData;
  T_TRAIN timeStampValidateToRBC;
} trainDataStatus_T_trainData_Types_pkg;

/* NID_EM */
typedef kcg_int NID_EM;

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Item_T */
typedef struct kcg_tag_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store {
  NID_EM nid_em;
  kcg_bool valid;
} NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store;

/* D_SR */
typedef kcg_int D_SR;

/* D_REF */
typedef kcg_int D_REF;

/* D_EMERGENCYSTOP */
typedef kcg_int D_EMERGENCYSTOP;

/* D_VALIDNV */
typedef kcg_int D_VALIDNV;

/* V_NVSHUNT */
typedef kcg_int V_NVSHUNT;

/* V_NVSTFF */
typedef kcg_int V_NVSTFF;

/* V_NVONSIGHT */
typedef kcg_int V_NVONSIGHT;

/* V_NVLIMSUPERV */
typedef kcg_int V_NVLIMSUPERV;

/* TM_baseline2::P003_permanent_data_T */
typedef struct kcg_tag_P003_permanent_data_T_TM_baseline2 {
  Q_NVLOCACC q_nvlocacc;
  V_NVLIMSUPERV v_nvlimsuperv;
} P003_permanent_data_T_TM_baseline2;

/* V_NVUNFIT */
typedef kcg_int V_NVUNFIT;

/* V_NVREL */
typedef kcg_int V_NVREL;

/* D_NVROLL */
typedef kcg_int D_NVROLL;

/* V_NVALLOWOVTRP */
typedef kcg_int V_NVALLOWOVTRP;

/* V_NVSUPOVTRP */
typedef kcg_int V_NVSUPOVTRP;

/* D_NVOVTRP */
typedef kcg_int D_NVOVTRP;

/* T_NVOVTRP */
typedef kcg_int T_NVOVTRP;

/* D_NVPOTRP */
typedef kcg_int D_NVPOTRP;

/* T_NVCONTACT */
typedef kcg_int T_NVCONTACT;

/* NationalParams_T */
typedef struct kcg_tag_NationalParams_T {
  NID_C nid_c;
  V_NVSHUNT v_nvshunt;
  V_NVSTFF v_nvstff;
  V_NVONSIGHT v_nvonsight;
  V_NVUNFIT v_nvunfit;
  V_NVREL v_nvrel;
  T_NVCONTACT t_nvcontact;
} NationalParams_T;

/* D_NVSTFF */
typedef kcg_int D_NVSTFF;

/* V_NVKVINT */
typedef kcg_int V_NVKVINT;

/* Packet_Types_Pkg::nvkvint_T */
typedef struct kcg_tag_nvkvint_T_Packet_Types_Pkg {
  kcg_bool valid;
  V_NVKVINT v_nvkvint;
  M_NVKVINT m_nvkvint12;
  M_NVKVINT m_nvkvint23;
} nvkvint_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::nvkvintArray_T */
typedef nvkvint_T_Packet_Types_Pkg nvkvintArray_T_Packet_Types_Pkg[7];

/* Packet_Types_Pkg::nvkvintset_T */
typedef struct kcg_tag_nvkvintset_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_NVKVINTSET q_nvkvintset;
  A_NVP12 a_nvp12;
  A_NVP23 a_nvp23;
  nvkvintArray_T_Packet_Types_Pkg nvkintArray;
} nvkvintset_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::nvkvintsetArray_T */
typedef nvkvintset_T_Packet_Types_Pkg nvkvintsetArray_T_Packet_Types_Pkg[7];

/* N_ITER */
typedef kcg_int N_ITER;

/* TM::P046_OBU_T */
typedef struct kcg_tag_P046_OBU_T_TM {
  kcg_bool valid;
  Q_DIR q_dir;
  N_ITER n_iter;
  P046_OBU_sectionlist_enum_T_TM sections;
} P046_OBU_T_TM;

/* NID_ENGINE */
typedef kcg_int NID_ENGINE;

/* L_TRAIN */
typedef kcg_int L_TRAIN;

/* NID_PACKET */
typedef kcg_int NID_PACKET;

/* D_LEVELTR */
typedef kcg_int D_LEVELTR;

/* L_ACKLEVELTR */
typedef kcg_int L_ACKLEVELTR;

/* Packet_Types_Pkg::P41_LevelTransitionOrder_T */
typedef struct kcg_tag_P41_LevelTransitionOrder_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_LEVELTR d_leveltr;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
  L_ACKLEVELTR l_ackleveltr;
} P41_LevelTransitionOrder_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::P41_LevelTransistionOrders_T */
typedef P41_LevelTransitionOrder_T_Packet_Types_Pkg P41_LevelTransistionOrders_T_Packet_Types_Pkg[7];

/* TM::P041_section_enum_T */
typedef struct kcg_tag_P041_section_enum_T_TM {
  kcg_bool valid;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
  L_ACKLEVELTR l_ackleveltr;
} P041_section_enum_T_TM;

/* TM::P041_OBU_sectionlist_enum_T */
typedef P041_section_enum_T_TM P041_OBU_sectionlist_enum_T_TM[33];

/* TM::P041_OBU_T */
typedef struct kcg_tag_P041_OBU_T_TM {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_LEVELTR d_leveltr;
  N_ITER n_iter;
  P041_OBU_sectionlist_enum_T_TM sections;
} P041_OBU_T_TM;

/* D_DP */
typedef kcg_int D_DP;

/* D_OL */
typedef kcg_int D_OL;

/* V_LOA */
typedef kcg_int V_LOA;

/* T_ENDTIMER */
typedef kcg_int T_ENDTIMER;

/* L_SECTION */
typedef kcg_int L_SECTION;

/* T_SECTIONTIMER */
typedef kcg_int T_SECTIONTIMER;

/* D_SECTIONTIMERSTOPLOC */
typedef kcg_int D_SECTIONTIMERSTOPLOC;

/* T_LOA */
typedef kcg_int T_LOA;

/* L_ENDSECTION */
typedef kcg_int L_ENDSECTION;

/* D_ENDTIMERSTARTLOC */
typedef kcg_int D_ENDTIMERSTARTLOC;

/* V_RELEASEDP */
typedef kcg_int V_RELEASEDP;

/* D_STARTOL */
typedef kcg_int D_STARTOL;

/* T_OL */
typedef kcg_int T_OL;

/* V_RELEASEOL */
typedef kcg_int V_RELEASEOL;

/* Packet_Types_Pkg::P15_Level23MovementAuthority_T */
typedef struct kcg_tag_P15_Level23MovementAuthority_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  V_LOA v_loa;
  T_LOA t_loa;
  L_SECTION l_section;
  Q_SECTIONTIMER q_sectiontimer_k;
  T_SECTIONTIMER t_sectiontimer_k;
  D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc_k;
  L_ENDSECTION l_endsection;
  Q_SECTIONTIMER q_sectiontimer;
  T_SECTIONTIMER t_sectiontimer;
  D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc;
  Q_ENDTIMER q_endtimer;
  T_ENDTIMER t_endtimer;
  D_ENDTIMERSTARTLOC d_endtimerstartloc;
  Q_DANGERPOINT q_dangerpoint;
  D_DP d_dp;
  V_RELEASEDP v_releasedp;
  Q_OVERLAP q_overlap;
  D_STARTOL d_startol;
  T_OL t_ol;
  D_OL d_ol;
  V_RELEASEOL v_releaseol;
} P15_Level23MovementAuthority_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::P15_Level23MovementAuthorities_T */
typedef P15_Level23MovementAuthority_T_Packet_Types_Pkg P15_Level23MovementAuthorities_T_Packet_Types_Pkg[5];

/* D_GRADIENT */
typedef kcg_int D_GRADIENT;

/* G_A */
typedef kcg_int G_A;

/* Packet_Types_Pkg::P21_GradientProfile_T */
typedef struct kcg_tag_P21_GradientProfile_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} P21_GradientProfile_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::P21_GradientProfiles_T */
typedef P21_GradientProfile_T_Packet_Types_Pkg P21_GradientProfiles_T_Packet_Types_Pkg[7];

/* TM::P021_section_enum_T */
typedef struct kcg_tag_P021_section_enum_T_TM {
  kcg_bool valid;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} P021_section_enum_T_TM;

/* TM::P021_OBU_sectionlist_enum_T */
typedef P021_section_enum_T_TM P021_OBU_sectionlist_enum_T_TM[33];

/* TM::P021_OBU_T */
typedef struct kcg_tag_P021_OBU_T_TM {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P021_OBU_sectionlist_enum_T_TM sections;
} P021_OBU_T_TM;

/* D_STATIC */
typedef kcg_int D_STATIC;

/* V_STATIC */
typedef kcg_int V_STATIC;

/* NC_DIFF */
typedef kcg_int NC_DIFF;

/* V_DIFF */
typedef kcg_int V_DIFF;

/* Packet_Types_Pkg::Diff_T */
typedef struct kcg_tag_Diff_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIFF q_diff;
  NC_CDDIFF nc_cddiff;
  NC_DIFF nc_diff;
  V_DIFF v_diff;
} Diff_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::DiffArray_T */
typedef Diff_T_Packet_Types_Pkg DiffArray_T_Packet_Types_Pkg[7];

/* Packet_Types_Pkg::SSP_T */
typedef struct kcg_tag_SSP_T_Packet_Types_Pkg {
  kcg_bool valid;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  DiffArray_T_Packet_Types_Pkg diffArray;
} SSP_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::SSPArray_T */
typedef SSP_T_Packet_Types_Pkg SSPArray_T_Packet_Types_Pkg[7];

/* Packet_Types_Pkg::P27_InternationalStaticSpeedProfile_T */
typedef struct kcg_tag_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  DiffArray_T_Packet_Types_Pkg diffArray;
  SSPArray_T_Packet_Types_Pkg SSPArray;
} P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg;

/* TM_baseline2::P027V1_section_enum_qdiff_T */
typedef struct kcg_tag_P027V1_section_enum_qdiff_T_TM_baseline2 {
  kcg_bool valid;
  NC_DIFF nc_diff;
  V_DIFF v_diff;
} P027V1_section_enum_qdiff_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_enum_qdiff_T */
typedef P027V1_section_enum_qdiff_T_TM_baseline2 P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2[32];

/* TM_baseline2::P027V1_section_enum_T */
typedef struct kcg_tag_P027V1_section_enum_T_TM_baseline2 {
  kcg_bool valid;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  N_ITER n_iter;
  P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 SECTIONS_q_diff;
} P027V1_section_enum_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_enum_T */
typedef P027V1_section_enum_T_TM_baseline2 P027V1_OBU_sectionlist_enum_T_TM_baseline2[33];

/* TM_baseline2::P027V1_OBU_T */
typedef struct kcg_tag_P027V1_OBU_T_TM_baseline2 {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 sections;
} P027V1_OBU_T_TM_baseline2;

/* V_MAIN */
typedef kcg_int V_MAIN;

/* Packet_Types_Pkg::P12_Level1MovementAuthority_T */
typedef struct kcg_tag_P12_Level1MovementAuthority_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  V_MAIN v_main;
  V_LOA v_loa;
  T_LOA t_loa;
  L_SECTION l_section;
  Q_SECTIONTIMER q_sectiontimer_k;
  T_SECTIONTIMER t_sectiontimer_k;
  D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc_k;
  L_ENDSECTION l_endsection;
  Q_SECTIONTIMER q_sectiontimer;
  T_SECTIONTIMER t_sectiontimer;
  D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc;
  Q_ENDTIMER q_endtimer;
  T_ENDTIMER t_endtimer;
  D_ENDTIMERSTARTLOC d_endtimerstartloc;
  Q_DANGERPOINT q_dangerpoint;
  D_DP d_dp;
  V_RELEASEDP v_releasedp;
  Q_OVERLAP q_overlap;
  D_STARTOL d_startol;
  T_OL t_ol;
  D_OL d_ol;
  V_RELEASEOL v_releaseol;
} P12_Level1MovementAuthority_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::P12_Level1MovementAuthorities_T */
typedef P12_Level1MovementAuthority_T_Packet_Types_Pkg P12_Level1MovementAuthorities_T_Packet_Types_Pkg[5];

/* D_MAMODE */
typedef kcg_int D_MAMODE;

/* V_MAMODE */
typedef kcg_int V_MAMODE;

/* L_MAMODE */
typedef kcg_int L_MAMODE;

/* L_ACKMAMODE */
typedef kcg_int L_ACKMAMODE;

/* Packet_Types_Pkg::P80_ModeProfile_T */
typedef struct kcg_tag_P80_ModeProfile_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_MAMODE d_mamode;
  M_MAMODE m_mamode;
  V_MAMODE v_mamode;
  L_MAMODE l_mamode;
  L_ACKMAMODE l_ackmamode;
  Q_MAMODE q_mamode;
} P80_ModeProfile_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::P80_ModeProfiles_T */
typedef P80_ModeProfile_T_Packet_Types_Pkg P80_ModeProfiles_T_Packet_Types_Pkg[3];

/* D_STARTREVERSE */
typedef kcg_int D_STARTREVERSE;

/* L_REVERSEAREA */
typedef kcg_int L_REVERSEAREA;

/* D_REVERSE */
typedef kcg_int D_REVERSE;

/* V_REVERSE */
typedef kcg_int V_REVERSE;

/* L_PACKET */
typedef kcg_int L_PACKET;

/* TM::P005_OBU_T */
typedef struct kcg_tag_P005_OBU_T_TM {
  kcg_bool valid;
  Q_DIR q_dir;
  L_PACKET l_packet;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P005_OBU_sectionlist_enum_T_TM sections;
} P005_OBU_T_TM;

/* TM_TrainToTrack::P004 */
typedef struct kcg_tag_P004_TM_TrainToTrack {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  M_ERROR m_error;
} P004_TM_TrainToTrack;

/* TM_TrainToTrack::P005 */
typedef struct kcg_tag_P005_TM_TrainToTrack {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NID_OPERATIONAL nid_opeartional;
} P005_TM_TrainToTrack;

/* T_CYCLOC */
typedef kcg_int T_CYCLOC;

/* D_CYCLOC */
typedef kcg_int D_CYCLOC;

/* D_LOC */
typedef kcg_int D_LOC;

/* Packet_Types_Pkg::IterPacket58_T */
typedef struct kcg_tag_IterPacket58_T_Packet_Types_Pkg {
  D_LOC d_loc;
  Q_LGTLOC q_lgtloc;
} IterPacket58_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::IterPacket58List_T */
typedef IterPacket58_T_Packet_Types_Pkg IterPacket58List_T_Packet_Types_Pkg[2];

/* Packet_Types_Pkg::P58_PositionReportParameters_T */
typedef struct kcg_tag_P58_PositionReportParameters_T_Packet_Types_Pkg {
  kcg_bool valid;
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  L_PACKET l_packet;
  Q_SCALE q_scale;
  T_CYCLOC t_cycloc;
  D_CYCLOC d_cycloc;
  M_LOC m_loc;
  N_ITER n_iter;
  IterPacket58List_T_Packet_Types_Pkg iterPacket58List;
} P58_PositionReportParameters_T_Packet_Types_Pkg;

/* TM::P058_section_enum_T */
typedef struct kcg_tag_P058_section_enum_T_TM {
  kcg_bool valid;
  D_LOC d_loc;
  Q_LGTLOC q_lgtloc;
} P058_section_enum_T_TM;

/* TM::P058_OBU_sectionlist_enum_T */
typedef P058_section_enum_T_TM P058_OBU_sectionlist_enum_T_TM[32];

/* TM::P058_OBU_T */
typedef struct kcg_tag_P058_OBU_T_TM {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  T_CYCLOC t_cycloc;
  D_CYCLOC d_cycloc;
  M_LOC m_loc;
  N_ITER n_iter;
  P058_OBU_sectionlist_enum_T_TM sections;
} P058_OBU_T_TM;

/* NID_LTRBG */
typedef kcg_int NID_LTRBG;

/* Packet_TrainTypes_Pkg::PT9_Level23_TransitionInformation_T */
typedef struct kcg_tag_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  NID_LTRBG transitionInformation;
} PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg;

/* TM_TrainToTrack::P009 */
typedef struct kcg_tag_P009_TM_TrainToTrack {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NID_LTRBG nid_ltrbg;
} P009_TM_TrainToTrack;

/* N_AXLE */
typedef kcg_int N_AXLE;

/* L_DOUBTOVER */
typedef kcg_int L_DOUBTOVER;

/* L_TRAININT */
typedef kcg_int L_TRAININT;

/* L_DOUBTUNDER */
typedef kcg_int L_DOUBTUNDER;

/* NID_XUSER */
typedef kcg_int NID_XUSER;

/* NID_PRVLRBG */
typedef kcg_int NID_PRVLRBG;

/* D_LRBG */
typedef kcg_int D_LRBG;

/* V_TRAIN */
typedef kcg_int V_TRAIN;

/* PosData_T */
typedef struct kcg_tag_PosData_T {
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_LRBG d_lrbg;
  Q_DIRLRBG q_dirlrbg;
  Q_DLRBG q_dlrbg;
  L_DOUBTOVER l_doubtover;
  L_DOUBTUNDER l_doubtunder;
  Q_LENGTH q_length;
  L_TRAININT l_trainint;
  V_TRAIN v_train;
  Q_DIRTRAIN q_dirtrain;
  M_MODE m_mode;
  M_LEVEL m_level;
  NID_NTC nid_ntc;
  NID_PRVLRBG nid_prvlrbg;
} PosData_T;

/* TM_TrainToTrack::P001 */
typedef struct kcg_tag_P001_TM_TrainToTrack {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  Q_SCALE q_scale;
  NID_LRBG nid_lrbg;
  NID_PRVLRBG nid_prvlrbg;
  D_LRBG d_lrbg;
  Q_DIRLRBG q_dirlrbg;
  Q_DLRBG q_dlrbg;
  L_DOUBTOVER l_doubtover;
  L_DOUBTUNDER l_doubtunder;
  Q_LENGTH q_length;
  L_TRAININT l_trainint;
  V_TRAIN v_train;
  Q_DIRTRAIN q_dirtrain;
  M_MODE m_mode;
  M_LEVEL m_level;
  NID_NTC nid_ntc;
} P001_TM_TrainToTrack;

/* TM_TrainToTrack::P000 */
typedef struct kcg_tag_P000_TM_TrainToTrack {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  Q_SCALE q_scale;
  NID_LRBG nid_lrbg;
  D_LRBG d_lrbg;
  Q_DIRLRBG q_dirlrbg;
  Q_DLRBG q_dlrbg;
  L_DOUBTOVER l_doubtover;
  L_DOUBTUNDER l_doubtunder;
  Q_LENGTH q_length;
  L_TRAININT l_trainint;
  V_TRAIN v_train;
  Q_DIRTRAIN q_dirtrain;
  M_MODE m_mode;
  M_LEVEL m_level;
  NID_NTC nid_ntc;
} P000_TM_TrainToTrack;

/* L_MESSAGE */
typedef kcg_int L_MESSAGE;

/* TM_radio_messages::M_146_T */
typedef struct kcg_tag_M_146_T_TM_radio_messages {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  NID_ENGINE nid_engine;
  T_TRAIN t_train_req;
} M_146_T_TM_radio_messages;

/* TM_radio_messages::M_147_T */
typedef struct kcg_tag_M_147_T_TM_radio_messages {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  NID_ENGINE nid_engine;
  NID_EM nid_em;
  Q_EMERGENCYSTOP q_emergencystop;
} M_147_T_TM_radio_messages;

/* TM_radio_messages::M_132_T */
typedef struct kcg_tag_M_132_T_TM_radio_messages {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  NID_ENGINE nid_engine;
  Q_MARQSTREASON q_marqstreason;
} M_132_T_TM_radio_messages;

/* TM_radio_messages::M_015_T */
typedef struct kcg_tag_M_015_T_TM_radio_messages {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  NID_EM nid_em;
  Q_SCALE q_scale;
  D_REF d_ref;
  Q_DIR q_dir;
  D_EMERGENCYSTOP d_emergencystop;
} M_015_T_TM_radio_messages;

/* TM_radio_messages::M_008_T */
typedef struct kcg_tag_M_008_T_TM_radio_messages {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_received;
} M_008_T_TM_radio_messages;

/* TM_radio_messages::M_002_T */
typedef struct kcg_tag_M_002_T_TM_radio_messages {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_SR d_sr;
} M_002_T_TM_radio_messages;

/* TM_radio_messages::M_045_T */
typedef struct kcg_tag_M_045_T_TM_radio_messages {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_ORIENTATION q_orientation;
} M_045_T_TM_radio_messages;

/* TM_radio_messages::M_033_T */
typedef struct kcg_tag_M_033_T_TM_radio_messages {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_REF d_ref;
} M_033_T_TM_radio_messages;

/* TM_radio_messages::M_032_T */
typedef struct kcg_tag_M_032_T_TM_radio_messages {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  M_VERSION m_version;
} M_032_T_TM_radio_messages;

/* V_MAXTRAIN */
typedef kcg_int V_MAXTRAIN;

/* T_MAR */
typedef kcg_int T_MAR;

/* T_TIMEOUTRQST */
typedef kcg_int T_TIMEOUTRQST;

/* T_CYCRQST */
typedef kcg_int T_CYCRQST;

/* MAReqParams_T */
typedef struct kcg_tag_MAReqParams_T {
  Q_DIR q_dir;
  T_MAR t_mar;
  T_TIMEOUTRQST t_timeoutrqst;
  T_CYCRQST t_cycrqst;
} MAReqParams_T;

/* Packet_Types_Pkg::P57_MovementAuthorityRequestParameters_T */
typedef struct kcg_tag_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  T_MAR t_mar;
  T_TIMEOUTRQST t_timeoutrqst;
  T_CYCRQST t_cycrqst;
} P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg;

/* D_RBCTR */
typedef kcg_int D_RBCTR;

/* D_TAFDISPLAY */
typedef kcg_int D_TAFDISPLAY;

/* L_TAFDISPLAY */
typedef kcg_int L_TAFDISPLAY;

/* TM_radio_messages::M_034_T */
typedef struct kcg_tag_M_034_T_TM_radio_messages {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_REF d_ref;
  Q_DIR q_dir;
  D_TAFDISPLAY d_tafdisplay;
  L_TAFDISPLAY l_tafdisplay;
} M_034_T_TM_radio_messages;

/* int32 */
typedef kcg_int int32;

/* TM_radio_messages::M_TrainTrack_MessageHd_T */
typedef struct kcg_tag_M_TrainTrack_MessageHd_T_TM_radio_messages {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int nid_engine;
  kcg_int field1;
  kcg_int field2;
  kcg_int field3;
} M_TrainTrack_MessageHd_T_TM_radio_messages;

/* TM_radio_messages::M_TrainTrack_compressed_packets_T */
typedef kcg_int M_TrainTrack_compressed_packets_T_TM_radio_messages[50];

/* TM_radio_messages::M_TrainTrack_Message_T */
typedef struct kcg_tag_M_TrainTrack_Message_T_TM_radio_messages {
  M_TrainTrack_MessageHd_T_TM_radio_messages Message;
  M_TrainTrack_compressed_packets_T_TM_radio_messages OptionalPackets;
} M_TrainTrack_Message_T_TM_radio_messages;

/* TM_lib_internal::M_TrainTrackRadioOutputBuffer_t */
typedef M_TrainTrack_Message_T_TM_radio_messages M_TrainTrackRadioOutputBuffer_t_TM_lib_internal[100];

/* TM_radio_messages::M_TrackTrain_Radio_T */
typedef struct kcg_tag_M_TrackTrain_Radio_T_TM_radio_messages {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int field1;
  kcg_int field2;
  kcg_int field3;
  kcg_int field4;
  kcg_int field5;
  kcg_int field6;
  kcg_int field7;
  kcg_int field8;
} M_TrackTrain_Radio_T_TM_radio_messages;

/* TM_radio_messages::M_015_int_T */
typedef struct kcg_tag_M_015_int_T_TM_radio_messages {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
  kcg_int nid_em;
  kcg_int q_scale;
  kcg_int d_ref;
  kcg_int q_dir;
  kcg_int d_emergencystop;
} M_015_int_T_TM_radio_messages;

/* TM_radio_messages::M_032_int_T */
typedef struct kcg_tag_M_032_int_T_TM_radio_messages {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
  kcg_int m_version;
} M_032_int_T_TM_radio_messages;

/* TM_radio_messages::M_008_int_T */
typedef struct kcg_tag_M_008_int_T_TM_radio_messages {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
  kcg_int t_train_received;
} M_008_int_T_TM_radio_messages;

/* API_DMI_Pkg::EVC_to_DMI_Message_int_T */
typedef kcg_int EVC_to_DMI_Message_int_T_API_DMI_Pkg[999];

/* API_DMI_Pkg::DMI_to_EVC_Message_int_T */
typedef kcg_int DMI_to_EVC_Message_int_T_API_DMI_Pkg[311];

/* TIU_Types_Pkg::NID_ctraction_T */
typedef kcg_int NID_ctraction_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::M_voltage_T */
typedef struct kcg_tag_M_voltage_T_TIU_Types_Pkg {
  M_voltage_types_T_TIU_Types_Pkg voltage_type;
  NID_ctraction_T_TIU_Types_Pkg NID_ctraction;
} M_voltage_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Passenger_door_control_info_T */
typedef struct kcg_tag_Passenger_door_control_info_T_TIU_Types_Pkg {
  kcg_bool valid;
  kcg_int door_control_info;
} Passenger_door_control_info_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::M_current_T */
typedef struct kcg_tag_M_current_T_TIU_Types_Pkg {
  kcg_bool no_restriction;
  kcg_int restriction;
} M_current_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Brake_pressure_value_T */
typedef struct kcg_tag_Brake_pressure_value_T_TIU_Types_Pkg {
  kcg_bool valid;
  kcg_int pressure;
} Brake_pressure_value_T_TIU_Types_Pkg;

/* Obu_BasicTypes_Pkg::T_internal_Type */
typedef kcg_int T_internal_Type_Obu_BasicTypes_Pkg;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Identifier_T */
typedef struct kcg_tag_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_DMI_Identifier_T_DMI_Types_Pkg DMI_Identifier;
  DMI_Cabin_Identifier_T_DMI_Types_Pkg Cabin_Identifier;
  L_TEXT l_name;
  DMI_TEXT_DMI_Types_Pkg DMI_name;
  M_VERSION m_version;
} DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg;

/* DMI_Types_Pkg::DMI_EVC_status_T */
typedef struct kcg_tag_DMI_EVC_status_T_DMI_Types_Pkg {
  kcg_bool DMI_Active;
  kcg_bool DMI_Error;
  kcg_bool DMI_DriverIdValidated;
  kcg_bool DMI_LevelSelectedByDirver;
  kcg_bool DMI_TrainRunningNumberFirstValidation;
  kcg_bool DMI_TrainRunningNumberValidated;
  kcg_bool DMI_TrainDataValidated;
  kcg_bool DMI_StartReceived;
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg DMI_Identifier;
} DMI_EVC_status_T_DMI_Types_Pkg;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Driver_Request_T */
typedef struct kcg_tag_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_Request_T_DMI_Types_Pkg m_request;
} DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Radio_Net_Data_T */
typedef struct kcg_tag_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
} DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Train_Data_Ack_T */
typedef struct kcg_tag_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  kcg_bool acknowledged;
} DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Menu_Request_T */
typedef struct kcg_tag_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_Available_Menu_T_DMI_Types_Pkg available_menu;
} DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Entry_Request_T */
typedef struct kcg_tag_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_List_Entry_Request_T_DMI_Types_Pkg entry_request;
} DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Identifier_Request_T */
typedef struct kcg_tag_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  M_VERSION ERTMS_Version;
  M_VERSION EVC_Version;
  L_TEXT l_name;
  DMI_TEXT_DMI_Types_Pkg x_name;
  L_TEXT l_extra;
} DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_System_Version_T */
typedef struct kcg_tag_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  M_VERSION system_version;
} DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Display_Control_T */
typedef struct kcg_tag_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  kcg_bool cab_is_active;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
} DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Radio_Net_Data_T */
typedef struct kcg_tag_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  NID_MN nid_mn;
} DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg;

/* DMI_Messages_Bothways_Pkg::DMI_Driver_Identifier_T */
typedef struct kcg_tag_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  driverIdentifier_T_DMI_Messages_Bothways_Pkg driverIdentifier;
} DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg;

/* DMI_Messages_Bothways_Pkg::DMI_Train_Running_Number_T */
typedef struct kcg_tag_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  NID_OPERATIONAL trainRunningNumber;
} DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg;

/* DMI_Messages_Bothways_Pkg::DMI_Adhesion_Factor_Data_T */
typedef struct kcg_tag_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  M_ADHESION adhesionFactor;
} DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg;

/* Obu_BasicTypes_Pkg::V_internal_Type */
typedef kcg_int V_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::L_internal_Type */
typedef kcg_int L_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::LocWithInAcc_T */
typedef struct kcg_tag_LocWithInAcc_T_Obu_BasicTypes_Pkg {
  L_internal_Type_Obu_BasicTypes_Pkg nominal;
  L_internal_Type_Obu_BasicTypes_Pkg d_min;
  L_internal_Type_Obu_BasicTypes_Pkg d_max;
} LocWithInAcc_T_Obu_BasicTypes_Pkg;

/* TrainPosition_Types_Pck::infoFromLinking_T */
typedef struct kcg_tag_infoFromLinking_T_TrainPosition_Types_Pck {
  kcg_bool valid;
  NID_BG nid_bg_fromLinkingBG;
  NID_C nid_c_fromLinkingBG;
  LocWithInAcc_T_Obu_BasicTypes_Pkg expectedLocation;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_link;
  LinkedBG_T_BG_Types_Pkg linkingInfo;
} infoFromLinking_T_TrainPosition_Types_Pck;

/* TrainPosition_Types_Pck::trainProperties_T */
typedef struct kcg_tag_trainProperties_T_TrainPosition_Types_Pck {
  NID_ENGINE nid_engine;
  NID_OPERATIONAL nid_operational;
  L_TRAIN l_train;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_baliseAntenna_2_frontend;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_frontend_2_rearend;
  LocWithInAcc_T_Obu_BasicTypes_Pkg locationAccuracy_DefaultValue;
  LocWithInAcc_T_Obu_BasicTypes_Pkg centerDetectionAcc_DefaultValue;
} trainProperties_T_TrainPosition_Types_Pck;

/* ProvidePositionReport_Pkg::ReportedBG_T */
typedef struct kcg_tag_ReportedBG_T_ProvidePositionReport_Pkg {
  kcg_bool valid;
  NID_BG nidBG;
  LocWithInAcc_T_Obu_BasicTypes_Pkg location;
} ReportedBG_T_ProvidePositionReport_Pkg;

/* ProvidePositionReport_Pkg::ReportedBGList_T */
typedef ReportedBG_T_ProvidePositionReport_Pkg ReportedBGList_T_ProvidePositionReport_Pkg[8];

/* Obu_BasicTypes_Pkg::OdometryLocations_T */
typedef struct kcg_tag_OdometryLocations_T_Obu_BasicTypes_Pkg {
  L_internal_Type_Obu_BasicTypes_Pkg o_nominal;
  L_internal_Type_Obu_BasicTypes_Pkg o_min;
  L_internal_Type_Obu_BasicTypes_Pkg o_max;
} OdometryLocations_T_Obu_BasicTypes_Pkg;

/* DMI_Types_Pkg::speedSupervisionForDMI_T */
typedef struct kcg_tag_speedSupervisionForDMI_T_DMI_Types_Pkg {
  kcg_bool valid;
  V_internal_Type_Obu_BasicTypes_Pkg targetSpeed;
  V_internal_Type_Obu_BasicTypes_Pkg permittedSpeed;
  V_internal_Type_Obu_BasicTypes_Pkg releaseSpeed;
  L_internal_Type_Obu_BasicTypes_Pkg locationBrakeTarget;
  L_internal_Type_Obu_BasicTypes_Pkg location_brake_curve_starting_point;
  V_internal_Type_Obu_BasicTypes_Pkg interventionSpeed;
  M_SUPERVISION_STATUS_DMI_Types_Pkg sup_status;
  M_SupervisionDisplay_T_DMI_Types_Pkg supervisionDisplay;
  L_internal_Type_Obu_BasicTypes_Pkg distanceIndicationPoint;
} speedSupervisionForDMI_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::movementAuthorityForDMI_T */
typedef struct kcg_tag_movementAuthorityForDMI_T_DMI_Types_Pkg {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg location_LOA;
  V_internal_Type_Obu_BasicTypes_Pkg v_LOA;
} movementAuthorityForDMI_T_DMI_Types_Pkg;

/* TrackAtlasTypes::MovementAuthoritySection_t */
typedef struct kcg_tag_MovementAuthoritySection_t_TrackAtlasTypes {
  kcg_bool valid;
  kcg_bool q_endsection;
  L_internal_Type_Obu_BasicTypes_Pkg l_section;
  kcg_bool q_sectiontimer;
  T_internal_Type_Obu_BasicTypes_Pkg t_sectiontimer;
  L_internal_Type_Obu_BasicTypes_Pkg d_sectiontimerstoploc;
} MovementAuthoritySection_t_TrackAtlasTypes;

/* TrackAtlasTypes::MovementAuthoritySectionlist_t */
typedef MovementAuthoritySection_t_TrackAtlasTypes MovementAuthoritySectionlist_t_TrackAtlasTypes[10];

/* TrackAtlasTypes::DP_or_OL_t */
typedef struct kcg_tag_DP_or_OL_t_TrackAtlasTypes {
  L_internal_Type_Obu_BasicTypes_Pkg d_DP_or_OL;
  V_internal_Type_Obu_BasicTypes_Pkg v_release;
  kcg_bool calc_v_release_onboard;
} DP_or_OL_t_TrackAtlasTypes;

/* TrackAtlasTypes::Endtimer_t */
typedef struct kcg_tag_Endtimer_t_TrackAtlasTypes {
  T_internal_Type_Obu_BasicTypes_Pkg t_endtimer;
  L_internal_Type_Obu_BasicTypes_Pkg d_endtimerstoploc;
} Endtimer_t_TrackAtlasTypes;

/* TrackAtlasTypes::MovementAuthority_t */
typedef struct kcg_tag_MovementAuthority_t_TrackAtlasTypes {
  kcg_bool valid;
  MA_Level_t_TrackAtlasTypes Level;
  Q_DIR q_dir;
  V_internal_Type_Obu_BasicTypes_Pkg v_main;
  V_internal_Type_Obu_BasicTypes_Pkg v_loa;
  kcg_bool t_loa_unlimited;
  T_internal_Type_Obu_BasicTypes_Pkg t_loa;
  N_ITER n_iter;
  MovementAuthoritySectionlist_t_TrackAtlasTypes sections;
  kcg_bool q_dangerpoint;
  DP_or_OL_t_TrackAtlasTypes dangerpoint;
  kcg_bool q_overlap;
  DP_or_OL_t_TrackAtlasTypes overlap;
  kcg_bool q_endtimer;
  Endtimer_t_TrackAtlasTypes endtimer_t;
} MovementAuthority_t_TrackAtlasTypes;

/* TrackAtlasTypes::StaticSpeedSection_t */
typedef struct kcg_tag_StaticSpeedSection_t_TrackAtlasTypes {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg d_static_abs;
  L_internal_Type_Obu_BasicTypes_Pkg d_static_LRBG;
  kcg_bool q_train_length_corr;
  V_internal_Type_Obu_BasicTypes_Pkg v_static;
} StaticSpeedSection_t_TrackAtlasTypes;

/* TrackAtlasTypes::StaticSpeedProfile_t */
typedef StaticSpeedSection_t_TrackAtlasTypes StaticSpeedProfile_t_TrackAtlasTypes[50];

/* SDM_Types_Pkg::SDM_Locations_T */
typedef struct kcg_tag_SDM_Locations_T_SDM_Types_Pkg {
  L_internal_Type_Obu_BasicTypes_Pkg SBD_preindication_location;
  L_internal_Type_Obu_BasicTypes_Pkg EBD_preindication_location;
  L_internal_Type_Obu_BasicTypes_Pkg EBD_RSM_start_location;
  L_internal_Type_Obu_BasicTypes_Pkg SBD_RSM_start_location;
  L_internal_Type_Obu_BasicTypes_Pkg d_I_of_V_est;
  L_internal_Type_Obu_BasicTypes_Pkg d_I_of_V_MRSP;
  L_internal_Type_Obu_BasicTypes_Pkg d_P_of_V_est;
  L_internal_Type_Obu_BasicTypes_Pkg d_W_of_V_est;
  L_internal_Type_Obu_BasicTypes_Pkg d_FLOI_of_V_est;
  L_internal_Type_Obu_BasicTypes_Pkg d_EBI_of_V_est;
  L_internal_Type_Obu_BasicTypes_Pkg FLOI_of_V_est;
  L_internal_Type_Obu_BasicTypes_Pkg SBI1_of_V_est;
  L_internal_Type_Obu_BasicTypes_Pkg SBI2_of_V_est;
  L_internal_Type_Obu_BasicTypes_Pkg d_target;
  L_internal_Type_Obu_BasicTypes_Pkg d_eoa;
  L_internal_Type_Obu_BasicTypes_Pkg d_svl;
  kcg_bool Preindication_EBD_location_valid;
  kcg_bool Preindication_SBD_location_valid;
  kcg_bool RSM_start_location_EBD_valid;
  kcg_bool RSM_start_location_SBD_valid;
} SDM_Locations_T_SDM_Types_Pkg;

/* SDM_Types_Pkg::trainData_internal_t */
typedef struct kcg_tag_trainData_internal_t_SDM_Types_Pkg {
  kcg_bool isSB_FBAvailable;
  kcg_bool isSB_CmdAvailable;
  kcg_bool isTCOAvailable;
  T_internal_Type_Obu_BasicTypes_Pkg T_traction_cut_off;
  L_internal_Type_Obu_BasicTypes_Pkg offsetAntennaL1;
} trainData_internal_t_SDM_Types_Pkg;

/* TargetManagement_types::Target_T */
typedef struct kcg_tag_Target_T_TargetManagement_types {
  TargetType_T_TargetManagement_types targetType;
  L_internal_Type_Obu_BasicTypes_Pkg distance;
  V_internal_Type_Obu_BasicTypes_Pkg speed;
  kcg_bool valid;
} Target_T_TargetManagement_types;

/* xdebugSupport_Pkg::dataCollectionForLevelTransition_T */
typedef struct kcg_tag_dataCollectionForLevelTransition_T_xdebugSupport_Pkg {
  P41_LevelTransistionOrders_T_Packet_Types_Pkg p41;
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg p46;
  kcg_bool p12_received;
  kcg_bool p15_received;
  kcg_bool p21_received;
  kcg_bool p27_received;
  NID_LRBG LRBG;
  L_internal_Type_Obu_BasicTypes_Pkg referenceLocation;
} dataCollectionForLevelTransition_T_xdebugSupport_Pkg;

/* TA_MA::AccuDistanceProfileMA */
typedef struct kcg_tag_AccuDistanceProfileMA_TA_MA {
  MovementAuthoritySectionlist_t_TrackAtlasTypes sections;
  L_internal_Type_Obu_BasicTypes_Pkg d_endsection;
} AccuDistanceProfileMA_TA_MA;

/* Obu_BasicTypes_Pkg::Location_T */
typedef kcg_int Location_T_Obu_BasicTypes_Pkg;

/* Level_And_Mode_Types_Pkg::T_LevelTansitionInfo */
typedef struct kcg_tag_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg {
  M_LEVEL level;
  M_POSITION position;
  T_TransitionType_Level_And_Mode_Types_Pkg transitionType;
  kcg_bool immediateAck;
  Location_T_Obu_BasicTypes_Pkg AckLength;
} T_LevelTansitionInfo_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_LevelTransition */
typedef struct kcg_tag_T_LevelTransition_Level_And_Mode_Types_Pkg {
  kcg_bool is_set;
  T_LevelTansitionInfo_Level_And_Mode_Types_Pkg transition;
  NID_LRBG LRBG;
  L_internal_Type_Obu_BasicTypes_Pkg referenceLocation;
} T_LevelTransition_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_AnnouncedLevel */
typedef struct kcg_tag_T_AnnouncedLevel_Level_And_Mode_Types_Pkg {
  T_LevelTransition_Level_And_Mode_Types_Pkg LevelTransition;
  kcg_bool IsAvailableForUse;
} T_AnnouncedLevel_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_LevelTransition_PriorityTable */
typedef T_LevelTransition_Level_And_Mode_Types_Pkg T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg[7];

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_To_Level */
typedef struct kcg_tag_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg {
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg level_transition_priority_table;
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg conditionnalTransition;
  kcg_bool receivedL2L3MA_track;
  kcg_bool receivedL1MA_track;
} T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg;

/* Obu_BasicTypes_Pkg::V_odometry_Type */
typedef kcg_int V_odometry_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::OdometrySpeeds_T */
typedef struct kcg_tag_OdometrySpeeds_T_Obu_BasicTypes_Pkg {
  V_odometry_Type_Obu_BasicTypes_Pkg v_safeNominal;
  V_odometry_Type_Obu_BasicTypes_Pkg v_rawNominal;
  V_odometry_Type_Obu_BasicTypes_Pkg v_lower;
  V_odometry_Type_Obu_BasicTypes_Pkg v_upper;
} OdometrySpeeds_T_Obu_BasicTypes_Pkg;

/* SDM_Types_Pkg::Speeds_T */
typedef struct kcg_tag_Speeds_T_SDM_Types_Pkg {
  V_odometry_Type_Obu_BasicTypes_Pkg V_est;
  V_odometry_Type_Obu_BasicTypes_Pkg V_MRSP;
  V_odometry_Type_Obu_BasicTypes_Pkg V_release;
  V_odometry_Type_Obu_BasicTypes_Pkg V_target;
  V_odometry_Type_Obu_BasicTypes_Pkg v_p_mrdt;
  V_odometry_Type_Obu_BasicTypes_Pkg v_p_dmi;
  V_odometry_Type_Obu_BasicTypes_Pkg v_sbi_mrdt;
  V_odometry_Type_Obu_BasicTypes_Pkg v_FLOI_dmi;
  V_odometry_Type_Obu_BasicTypes_Pkg dV_warning_V_MRSP;
  V_odometry_Type_Obu_BasicTypes_Pkg dV_warning_V_target;
  V_odometry_Type_Obu_BasicTypes_Pkg dV_sbi_V_MRSP;
  V_odometry_Type_Obu_BasicTypes_Pkg dV_sbi_V_target;
  V_odometry_Type_Obu_BasicTypes_Pkg dV_ebi_V_MRSP;
  V_odometry_Type_Obu_BasicTypes_Pkg dV_ebi_V_target;
  kcg_bool OdoStandStill;
} Speeds_T_SDM_Types_Pkg;

/* SDM_Types_Pkg::SDM_Commands_T */
typedef struct kcg_tag_SDM_Commands_T_SDM_Types_Pkg {
  kcg_bool valid;
  V_odometry_Type_Obu_BasicTypes_Pkg estimatedSpeed;
  kcg_bool valid_v_est;
  V_odometry_Type_Obu_BasicTypes_Pkg permittedSpeed;
  kcg_bool valid_v_permitted;
  V_odometry_Type_Obu_BasicTypes_Pkg releaseSpeed;
  kcg_bool valid_v_release;
  V_odometry_Type_Obu_BasicTypes_Pkg mrdtSpeed;
  kcg_bool valid_v_mrdt;
  V_odometry_Type_Obu_BasicTypes_Pkg sbiSpeed;
  kcg_bool valid_v_sbi;
  L_internal_Type_Obu_BasicTypes_Pkg targetDistance;
  kcg_bool valid_targetDistance;
  SupervisionStatus_T_SDM_Types_Pkg supervisionStatus;
  SDM_Types_T_SDM_Types_Pkg sdmType;
  SupervisionStatus_T_SDM_Types_Pkg revokedSupervisionStatus;
  SupervisionStatus_T_SDM_Types_Pkg triggeredSupervisionStatus;
  kcg_bool revokedSB;
  kcg_bool triggeredSB;
  kcg_bool revokedEB;
  kcg_bool triggeredEB;
  kcg_bool revokedTCO;
  kcg_bool triggeredTCO;
  kcg_bool ebCmd;
} SDM_Commands_T_SDM_Types_Pkg;

/* Obu_BasicTypes_Pkg::A_internal_Type */
typedef kcg_int A_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::odometry_T */
typedef struct kcg_tag_odometry_T_Obu_BasicTypes_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg timestamp;
  OdometryLocations_T_Obu_BasicTypes_Pkg odo;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg speed;
  A_internal_Type_Obu_BasicTypes_Pkg acceleration;
  odoMotionState_T_Obu_BasicTypes_Pkg motionState;
  odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection;
} odometry_T_Obu_BasicTypes_Pkg;

/* BG_Types_Pkg::BG_Header_T */
typedef struct kcg_tag_BG_Header_T_BG_Types_Pkg {
  kcg_bool valid;
  Q_UPDOWN q_updown;
  M_VERSION m_version;
  Q_MEDIA q_media;
  N_TOTAL n_total;
  M_MCOUNT m_mcount;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINK q_link;
  odometry_T_Obu_BasicTypes_Pkg bgPosition;
  LocWithInAcc_T_Obu_BasicTypes_Pkg BG_centerDetectionInaccuraccuracies;
  Q_NVLOCACC q_nvlocacc;
  kcg_bool noCoordinateSystemHasBeenAssigned;
  Q_DIRLRBG trainOrientationToBG;
  Q_DIRTRAIN trainRunningDirectionToBG;
} BG_Header_T_BG_Types_Pkg;

/* BG_Types_Pkg::passedBG_T */
typedef struct kcg_tag_passedBG_T_BG_Types_Pkg {
  kcg_bool valid;
  BG_Header_T_BG_Types_Pkg BG_Header;
  LinkedBGs_T_BG_Types_Pkg linkedBGs;
} passedBG_T_BG_Types_Pkg;

/* BG_Types_Pkg::centerOfBalisePosition_T */
typedef struct kcg_tag_centerOfBalisePosition_T_BG_Types_Pkg {
  odometry_T_Obu_BasicTypes_Pkg odometerOfBaliseDetection;
  LocWithInAcc_T_Obu_BasicTypes_Pkg BG_centerDetectionInaccuraccuracies;
} centerOfBalisePosition_T_BG_Types_Pkg;

/* API_Msg_Pkg::API_TelegramHeader_T */
typedef struct kcg_tag_API_TelegramHeader_T_API_Msg_Pkg {
  kcg_bool present;
  kcg_bool checkResult;
  kcg_bool api_bad_balise_received;
  TelegramHeader_T_BG_Types_Pkg api_header;
  centerOfBalisePosition_T_BG_Types_Pkg centerOfBalisePosition;
} API_TelegramHeader_T_API_Msg_Pkg;

/* Obu_BasicTypes_Pkg::G_internal_Type */
typedef kcg_int G_internal_Type_Obu_BasicTypes_Pkg;

/* TrackAtlasTypes::Gradient_section_t */
typedef struct kcg_tag_Gradient_section_t_TrackAtlasTypes {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_Absolute;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_LRBG;
  G_internal_Type_Obu_BasicTypes_Pkg Gradient;
  L_internal_Type_Obu_BasicTypes_Pkg L_Gradient;
} Gradient_section_t_TrackAtlasTypes;

/* TrackAtlasTypes::GradientProfile_t */
typedef Gradient_section_t_TrackAtlasTypes GradientProfile_t_TrackAtlasTypes[50];

/* Obu_BasicTypes_Pkg::BCD_T */
typedef kcg_int BCD_T_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::Speed_T */
typedef kcg_int Speed_T_Obu_BasicTypes_Pkg;

/* Level_And_Mode_Types_Pkg::T_Mode_Profile */
typedef struct kcg_tag_T_Mode_Profile_Level_And_Mode_Types_Pkg {
  Location_T_Obu_BasicTypes_Pkg Distance;
  T_MA_Level_And_Mode_Types_Pkg Mode;
  Speed_T_Obu_BasicTypes_Pkg Speed;
  Location_T_Obu_BasicTypes_Pkg Length;
  Location_T_Obu_BasicTypes_Pkg Length_Ack;
} T_Mode_Profile_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Mode_Profile_Table */
typedef T_Mode_Profile_Level_And_Mode_Types_Pkg T_Mode_Profile_Table_Level_And_Mode_Types_Pkg[3];

/* Level_And_Mode_Types_Pkg::T_Reversing_Data */
typedef struct kcg_tag_T_Reversing_Data_Level_And_Mode_Types_Pkg {
  kcg_bool Available;
  Location_T_Obu_BasicTypes_Pkg Dist_Start;
  Location_T_Obu_BasicTypes_Pkg Length;
  Location_T_Obu_BasicTypes_Pkg Dist_Run;
  Speed_T_Obu_BasicTypes_Pkg Speed;
} T_Reversing_Data_Level_And_Mode_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_To_Mode */
typedef struct kcg_tag_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg {
  kcg_bool MA_SSP_Gradient_Available;
  T_Mode_Profile_Table_Level_And_Mode_Types_Pkg Mode_Profile_On_Board;
  kcg_bool Shunting_granted_By_RBC;
  kcg_bool Trip_Order_Given_By_Balise;
  kcg_bool List_Bg_Related_To_SR_Empty;
  kcg_bool Stop_If_In_shunting;
  kcg_bool Stop_If_In_SR;
  kcg_bool RBC_Ack_TR_EB_Revocked;
  kcg_bool RBC_Authorized_SR;
  T_Reversing_Data_Level_And_Mode_Types_Pkg Reversing_Data;
  kcg_bool Emergency_Stop_Message_Received;
} T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg;

/* DMI_Types_Pkg::NID_STM */
typedef kcg_int NID_STM_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_level_T */
typedef struct kcg_tag_DMI_level_T_DMI_Types_Pkg {
  M_LEVEL level;
  NID_STM_DMI_Types_Pkg nid_stm;
} DMI_level_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_level_array_T */
typedef DMI_level_T_DMI_Types_Pkg DMI_level_array_T_DMI_Types_Pkg[32];

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Dynamic_T */
typedef struct kcg_tag_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  V_internal_Type_Obu_BasicTypes_Pkg v_train;
  L_internal_Type_Obu_BasicTypes_Pkg location_front_train;
  L_internal_Type_Obu_BasicTypes_Pkg location_brake_target;
  V_internal_Type_Obu_BasicTypes_Pkg v_target;
  V_internal_Type_Obu_BasicTypes_Pkg v_permitted;
  V_internal_Type_Obu_BasicTypes_Pkg v_release;
  L_internal_Type_Obu_BasicTypes_Pkg location_brake_curve_starting_point;
  V_internal_Type_Obu_BasicTypes_Pkg v_intervention;
  M_MODE mode;
  DMI_level_T_DMI_Types_Pkg level;
  NID_C nid_c;
  kcg_bool nid_c_valid;
  M_SupervisionDisplay_T_DMI_Types_Pkg m_warning;
  M_SUPERVISION_STATUS_DMI_Types_Pkg sup_status;
  L_internal_Type_Obu_BasicTypes_Pkg location_LOA;
  V_internal_Type_Obu_BasicTypes_Pkg v_LOA;
  L_internal_Type_Obu_BasicTypes_Pkg location_KP_Balise_Track;
  L_internal_Type_Obu_BasicTypes_Pkg distance_KP_Balise;
  L_internal_Type_Obu_BasicTypes_Pkg distance_to_TSA;
  connectionStatusRadioUnit_T_API_RadioCommunication_Pkg radioConnectionStatus;
  L_internal_Type_Obu_BasicTypes_Pkg distanceIndicationPoint;
} DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg;

/* DMI_Messages_Bothways_Pkg::DMI_Level_Data_T */
typedef struct kcg_tag_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_level_T_DMI_Types_Pkg level;
} DMI_Level_Data_T_DMI_Messages_Bothways_Pkg;

/* DMI_Types_Pkg::BCD */
typedef kcg_int BCD_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_train_id_T */
typedef struct kcg_tag_DMI_train_id_T_DMI_Types_Pkg {
  kcg_int number;
  BCD_DMI_Types_Pkg dig1;
  BCD_DMI_Types_Pkg dig2;
  BCD_DMI_Types_Pkg dig3;
  BCD_DMI_Types_Pkg dig4;
  BCD_DMI_Types_Pkg dig5;
} DMI_train_id_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_train_length_T */
typedef struct kcg_tag_DMI_train_length_T_DMI_Types_Pkg {
  kcg_int number;
  BCD_DMI_Types_Pkg dig1;
  BCD_DMI_Types_Pkg dig2;
  BCD_DMI_Types_Pkg dig3;
  BCD_DMI_Types_Pkg dig4;
} DMI_train_length_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_TextMessage_ID_T */
typedef kcg_int DMI_TextMessage_ID_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_TXT_MSG_status_T */
typedef struct kcg_tag_DMI_TXT_MSG_status_T_DMI_Types_Pkg {
  kcg_bool valid;
  DMI_TextMessage_ID_T_DMI_Types_Pkg dmi_textMessageID;
  T_internal_Type_Obu_BasicTypes_Pkg timeStamp;
  Q_TEXTREPORT textReport;
  DMI_context_TXT_MSG_T_DMI_Types_Pkg context;
  NID_TEXTMESSAGE nid_textmessage;
  M_LEVEL whichLevel;
  M_MODE whichMode;
} DMI_TXT_MSG_status_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_TXT_MSGList_status_T */
typedef DMI_TXT_MSG_status_T_DMI_Types_Pkg DMI_TXT_MSGList_status_T_DMI_Types_Pkg[31];

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Text_Message_Ack_T */
typedef struct kcg_tag_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_TextMessage_ID_T_DMI_Types_Pkg textMessage_ID;
  kcg_bool acknowledged;
} DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Text_Message_T */
typedef struct kcg_tag_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_TextMessage_ID_T_DMI_Types_Pkg textMessage_ID;
  DMI_Q_TEXT_DMI_Types_Pkg q_text;
  L_TEXT l_text;
  DMI_TEXT_DMI_Types_Pkg x_text;
  Q_TEXTCLASS q_textClass;
  Q_TEXTCONFIRM q_textConfirm;
} DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg;

/* MsgStructure */
typedef struct kcg_tag_MsgStructure {
  kcg_bool present;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg dmi_msg;
} MsgStructure;

/* DMI_Types_Pkg::DMI_trackCondition_T */
typedef struct kcg_tag_DMI_trackCondition_T_DMI_Types_Pkg {
  kcg_int nIter;
  DMI_trackConditionArray_T_DMI_Types_Pkg trackCondition;
} DMI_trackCondition_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_LevelList_T */
typedef struct kcg_tag_DMI_LevelList_T_DMI_Types_Pkg {
  kcg_int number;
  DMI_level_array_T_DMI_Types_Pkg levelList;
} DMI_LevelList_T_DMI_Types_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Level_Data_T */
typedef struct kcg_tag_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_LevelList_T_DMI_Types_Pkg levelList;
} DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg;

/* API_PersistanceStorage_Pkg::ps_dataForStartOfMission_T */
typedef struct kcg_tag_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg {
  kcg_bool valid;
  M_LEVEL lastActiveLevel;
  NID_NTC lastActiveNTC;
  DMI_LevelList_T_DMI_Types_Pkg availableLevelsList;
} ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg;

/* DMI_Types_Pkg::M_BRAKEPERCT */
typedef kcg_int M_BRAKEPERCT_DMI_Types_Pkg;

/* DMI_Messages_Bothways_Pkg::DMI_Train_Data_T */
typedef struct kcg_tag_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  NC_TRAIN trainCategory;
  L_internal_Type_Obu_BasicTypes_Pkg l_train;
  M_BRAKEPERCT_DMI_Types_Pkg m_brakeperct;
  V_internal_Type_Obu_BasicTypes_Pkg v_maxTrain;
  M_AXLELOADCAT m_axleLoad;
  M_AIRTIGHT m_airTight;
  M_LOADINGGAUGE m_loadingGauge;
} DMI_Train_Data_T_DMI_Messages_Bothways_Pkg;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Icon_Ack_T */
typedef struct kcg_tag_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  kcg_int DMI_nid_icon_identifier;
} DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Status_T */
typedef struct kcg_tag_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_StatusSet_T_DMI_Types_Pkg statusSet;
  kcg_int nAlive;
} DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg;

/* API_DMI_Pkg::DMI_to_EVC_Message_T */
typedef struct kcg_tag_DMI_to_EVC_Message_T_API_DMI_Pkg {
  kcg_bool present;
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg status;
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg identifier;
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg driverRequest;
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg driverIdentifier;
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg trainRunningNumber;
  DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg radioNetData;
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg textMessageAck;
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg trainDataAck;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg trainData;
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg adhesionFactor;
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg iconAck;
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg selectedLevel;
} DMI_to_EVC_Message_T_API_DMI_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Icons_T */
typedef struct kcg_tag_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  Icon_control_flag_T_DMI_Types_Pkg DMI_m_icon_control_flag;
  kcg_real DMI_m_icon_flashing_freq;
  Icon_group_T_DMI_Types_Pkg DMI_nid_icon_group;
  kcg_int DMI_nid_icon_rank;
  Area_group_T_DMI_Types_Pkg DMI_nid_area_group;
  kcg_int DMI_nid_area_rank;
  kcg_int DMI_nid_icon_identifier;
} DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg;

/* RCM_Types_Pkg::mobileRegistrationContext_T */
typedef struct kcg_tag_mobileRegistrationContext_T_RCM_Types_Pkg {
  kcg_bool valid;
  kcg_int mobileDeviceNo;
  mobileHealthStatus_T_RCM_Types_Pkg healthStatus;
  mobileRegistrationStatus_T_RCM_Types_Pkg status;
  NID_MN nid_mn;
} mobileRegistrationContext_T_RCM_Types_Pkg;

/* RCM_Types_Pkg::mobileConnectionContext_T */
typedef struct kcg_tag_mobileConnectionContext_T_RCM_Types_Pkg {
  kcg_bool valid;
  kcg_int mobileDeviceNo;
  mobileConnectionStatus_T_RCM_Types_Pkg status;
  NID_RADIO nid_radio;
  kcg_bool settingUpConnectionHasFailed;
  kcg_bool connectionLost;
  kcg_bool isInRadioHole;
} mobileConnectionContext_T_RCM_Types_Pkg;

/* RCM_Session_Types_Pkg::morcStatus_T */
typedef struct kcg_tag_morcStatus_T_RCM_Session_Types_Pkg {
  mobileRegistrationContext_T_RCM_Types_Pkg registration;
  mobileConnectionContext_T_RCM_Types_Pkg connection;
  sessionStatus_T_RCM_Session_Types_Pkg session;
} morcStatus_T_RCM_Session_Types_Pkg;

/* RCM_Types_Pkg::mobileConnectionCmd_T */
typedef struct kcg_tag_mobileConnectionCmd_T_RCM_Types_Pkg {
  kcg_bool valid;
  kcg_int mobileDeviceNo;
  mobileConnetionAction_T_RCM_Types_Pkg action;
  NID_RADIO nid_radio;
} mobileConnectionCmd_T_RCM_Types_Pkg;

/* RCM_Types_Pkg::mobileRegistrationCmd_T */
typedef struct kcg_tag_mobileRegistrationCmd_T_RCM_Types_Pkg {
  kcg_bool valid;
  kcg_int mobileDeviceNo;
  mobileRegistrationAction_T_RCM_Types_Pkg action;
  NID_MN network_id;
} mobileRegistrationCmd_T_RCM_Types_Pkg;

/* TrainPosition_Types_Pck::positionedBG_T */
typedef struct kcg_tag_positionedBG_T_TrainPosition_Types_Pck {
  kcg_bool valid;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINK q_link;
  LocWithInAcc_T_Obu_BasicTypes_Pkg location;
  kcg_int seqNoOnTrack;
  infoFromLinking_T_TrainPosition_Types_Pck infoFromLinking;
  passedBG_T_BG_Types_Pkg infoFromPassing;
  kcg_bool missed;
} positionedBG_T_TrainPosition_Types_Pck;

/* TrainPosition_Types_Pck::trainPosition_T */
typedef struct kcg_tag_trainPosition_T_TrainPosition_Types_Pck {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg timestamp;
  kcg_bool trainPositionIsUnknown;
  kcg_bool noCoordinateSystemHasBeenAssigned;
  LocWithInAcc_T_Obu_BasicTypes_Pkg trainPosition;
  Location_T_Obu_BasicTypes_Pkg estimatedFrontEndPosition;
  Location_T_Obu_BasicTypes_Pkg minSafeFrontEndPosition;
  Location_T_Obu_BasicTypes_Pkg maxSafeFrontEndPostion;
  positionedBG_T_TrainPosition_Types_Pck LRBG;
  positionedBG_T_TrainPosition_Types_Pck prvLRBG;
  Q_DLRBG nominalOrReverseToLRBG;
  Q_DIRLRBG trainOrientationToLRBG;
  Q_DIRTRAIN trainRunningDirectionToLRBG;
  kcg_bool linkingIsUsedOnboard;
  Location_T_Obu_BasicTypes_Pkg estimatedRearEndPosition;
  Location_T_Obu_BasicTypes_Pkg minSafeRearEndPosition;
  Location_T_Obu_BasicTypes_Pkg maxSafeRearEndPosition;
} trainPosition_T_TrainPosition_Types_Pck;

/* TrainPosition_Types_Pck::positionedBGs_T */
typedef positionedBG_T_TrainPosition_Types_Pck positionedBGs_T_TrainPosition_Types_Pck[41];

/* CalculateTrainPosition_Pkg::positionedBGs_w_overrun_T */
typedef struct kcg_tag_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg {
  positionedBGs_T_TrainPosition_Types_Pck BGs;
  kcg_bool overrun;
} positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg;

/* TrainPosition_Types_Pck::positionErrors_T */
typedef struct kcg_tag_positionErrors_T_TrainPosition_Types_Pck {
  kcg_bool outOfMemSpace;
  kcg_bool passedBG_foundNotWhereExpected;
  kcg_bool positionCalculation_inconsistent;
  kcg_bool linkedBGMissed;
  kcg_bool BGpassedInUnexpectedDirection;
  kcg_bool BG_LinkingConsistencyError;
  kcg_bool twoConsecutiveLinkedBGs_missed;
  kcg_bool doubleRepositioningError;
  positionedBG_T_TrainPosition_Types_Pck bg;
} positionErrors_T_TrainPosition_Types_Pck;

/* Level_And_Mode_Types_Pkg::T_Data_From_Localisation */
typedef struct kcg_tag_T_Data_From_Localisation_Level_And_Mode_Types_Pkg {
  kcg_bool BG_In_List_Expected_BG_In_SR;
  kcg_bool BG_In_List_Expected_BG_In_SH;
  positionErrors_T_TrainPosition_Types_Pck PositionErrors;
  trainPosition_T_TrainPosition_Types_Pck Train_Position;
  Speed_T_Obu_BasicTypes_Pkg Train_Speed;
  kcg_bool Train_Standstill;
} T_Data_From_Localisation_Level_And_Mode_Types_Pkg;

/* TrainPosition_Types_Pck::trainPositionInfo_T */
typedef struct kcg_tag_trainPositionInfo_T_TrainPosition_Types_Pck {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg timestamp;
  LocWithInAcc_T_Obu_BasicTypes_Pkg trainPosition;
  LocWithInAcc_T_Obu_BasicTypes_Pkg trainPositionDerivedFromLastLinkedBG;
  LocWithInAcc_T_Obu_BasicTypes_Pkg trainPositionDerivedFromLastUnlinkedBG;
  positionedBG_T_TrainPosition_Types_Pck prevPassedLinkedBG;
  positionedBG_T_TrainPosition_Types_Pck lastPassedLinkedBG;
  positionedBG_T_TrainPosition_Types_Pck lastPassedUnlinkedBG;
  Speed_T_Obu_BasicTypes_Pkg speed;
  kcg_bool linkingIsUsedOnboard;
} trainPositionInfo_T_TrainPosition_Types_Pck;

/* TrainPosition_Types_Pck::linkedBGs_asPositionedBGs_T */
typedef positionedBG_T_TrainPosition_Types_Pck linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck[33];

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::refBGs_T */
typedef struct kcg_tag_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg {
  positionedBG_T_TrainPosition_Types_Pck refBG;
  positionedBG_T_TrainPosition_Types_Pck prevLinkedBG;
  positionedBG_T_TrainPosition_Types_Pck prevUnlinkedBG;
  kcg_bool recalculate;
  LocWithInAcc_T_Obu_BasicTypes_Pkg sumOfBestDistances;
} refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

/* BG_Types_Pkg::NID_ERRORBG */
typedef kcg_int NID_ERRORBG_BG_Types_Pkg;

/* Common_Types_Pkg::MSG_Errors_T */
typedef struct kcg_tag_MSG_Errors_T_Common_Types_Pkg {
  kcg_bool linkedBGError;
  kcg_bool unlinkedBGError;
  kcg_bool BG_versionIncompatible;
  kcg_bool radioSequenceError;
  kcg_bool tNvContactError;
  kcg_bool otherTimingError;
  kcg_bool radioMessageConsistencyError;
  NID_C nid_c;
  NID_ERRORBG_BG_Types_Pkg nid_errorbg;
} MSG_Errors_T_Common_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Data_From_F2_functions */
typedef struct kcg_tag_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg {
  MSG_Errors_T_Common_Types_Pkg Common_Errors;
  kcg_bool Failure_Occured;
  kcg_bool Continue_Shunting_Active;
  kcg_bool Stop_Shunting_Stored;
} T_Data_From_F2_functions_Level_And_Mode_Types_Pkg;

/* xdebugSupport_Pkg::probesBalises_T */
typedef struct kcg_tag_probesBalises_T_xdebugSupport_Pkg {
  kcg_bool isChanged;
  NID_BG bg_id;
  NID_C nid_c;
  MSG_Errors_T_Common_Types_Pkg errors;
} probesBalises_T_xdebugSupport_Pkg;

/* DATA::M_SupervisionDisplay_INT_T */
typedef kcg_int M_SupervisionDisplay_INT_T_DATA;

/* DATA::M_SUPERVISION_STATUS_INT_T */
typedef kcg_int M_SUPERVISION_STATUS_INT_T_DATA;

/* DATA::connectionStatusRadioUnit_INT_T */
typedef kcg_int connectionStatusRadioUnit_INT_T_DATA;

/* DATA::DMI_Available_Menu_INT_T */
typedef kcg_int DMI_Available_Menu_INT_T_DATA;

/* DATA::DMI_List_Entry_Request_INT_T */
typedef kcg_int DMI_List_Entry_Request_INT_T_DATA;

/* DATA::DMI_train_id_INT_T */
typedef kcg_int DMI_train_id_INT_T_DATA;

/* DATA::DMI_train_length_INT_T */
typedef kcg_int DMI_train_length_INT_T_DATA;

/* DATA::DMI_brakeModel_id_INT_T */
typedef kcg_int DMI_brakeModel_id_INT_T_DATA;

/* DATA::DMI_vMax_id_INT_T */
typedef kcg_int DMI_vMax_id_INT_T_DATA;

/* DATA::DMI_airtightSystem_INT_T */
typedef kcg_int DMI_airtightSystem_INT_T_DATA;

/* DATA::DMI_loadingGauge_INT_T */
typedef kcg_int DMI_loadingGauge_INT_T_DATA;

/* DATA::DMI_TEXT_INT_Array_T */
typedef kcg_int DMI_TEXT_INT_Array_T_DATA[255];

/* DATA::DMI_Text_Message_int_array_T */
typedef kcg_int DMI_Text_Message_int_array_T_DATA[262];

/* DATA::DMI_EVC_Level_Data_int_array_T */
typedef kcg_int DMI_EVC_Level_Data_int_array_T_DATA[67];

/* DATA::Icon_control_flag_INT_T */
typedef kcg_int Icon_control_flag_INT_T_DATA;

/* DATA::DMI_m_icon_flashing_freq_INT_T */
typedef kcg_int DMI_m_icon_flashing_freq_INT_T_DATA;

/* DATA::Icon_group_INT_T */
typedef kcg_int Icon_group_INT_T_DATA;

/* DATA::Area_group_INT_T */
typedef kcg_int Area_group_INT_T_DATA;

/* Common_Types_Pkg::RBC_Id_T */
typedef struct kcg_tag_RBC_Id_T_Common_Types_Pkg {
  kcg_bool valid;
  NID_C nid_c;
  NID_RBC rbc_id;
  kcg_int device_id;
} RBC_Id_T_Common_Types_Pkg;

/* RCM_MsgTypes_Pkg::p42_sessionManagement_T */
typedef struct kcg_tag_p42_sessionManagement_T_RCM_MsgTypes_Pkg {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg msgSrc;
  Q_DIR q_dir;
  Q_RBC q_rbc;
  NID_C nid_c;
  NID_RBC nid_RBC;
  NID_RADIO nid_radio;
  Q_SLEEPSESSION q_sleepsession;
  RBC_Id_T_Common_Types_Pkg origin;
} p42_sessionManagement_T_RCM_MsgTypes_Pkg;

/* RCM_MsgTypes_Pkg::m38_initiationOfACommunicationSession_T */
typedef struct kcg_tag_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg msgSrc;
  RBC_Id_T_Common_Types_Pkg origin;
} m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg;

/* RCM_Session_Types_Pkg::sessionCmd_T */
typedef struct kcg_tag_sessionCmd_T_RCM_Session_Types_Pkg {
  kcg_bool valid;
  kcg_bool initiatedByOBU;
  kcg_bool initiatedByRBC;
  Q_RBC q_rbc;
  NID_C nid_c;
  NID_RBC nid_rbc;
  NID_RADIO nid_radio;
  RBC_Id_T_Common_Types_Pkg origin;
  m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg m38;
  p42_sessionManagement_T_RCM_MsgTypes_Pkg p42;
} sessionCmd_T_RCM_Session_Types_Pkg;

/* RCM_MsgTypes_Pkg::m32_RBC_RIU_SystemVersion_T */
typedef struct kcg_tag_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg msgSrc;
  kcg_bool versionSupported;
  RBC_Id_T_Common_Types_Pkg origin;
  M_VERSION m_version;
} m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg;

/* RCM_MsgTypes_Pkg::m39_AckOfTerminationOfACommunicationSession_T */
typedef struct kcg_tag_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg msgSrc;
  RBC_Id_T_Common_Types_Pkg origin;
  NID_LRBG lrbg;
} m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg;

/* RCM_MsgTypes_Pkg::p45_radioNetworkRegistration_T */
typedef struct kcg_tag_p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg msgSrc;
  Q_DIR q_dir;
  NID_MN nid_mn;
  RBC_Id_T_Common_Types_Pkg origin;
} p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct kcg_tag_MetadataElement_T_Common_Types_Pkg {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} MetadataElement_T_Common_Types_Pkg;

/* Common_Types_Pkg::Metadata_T */
typedef MetadataElement_T_Common_Types_Pkg Metadata_T_Common_Types_Pkg[30];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef kcg_int CompressedPacketData_T_Common_Types_Pkg[500];

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct kcg_tag_CompressedPackets_T_Common_Types_Pkg {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} CompressedPackets_T_Common_Types_Pkg;

/* BG_Types_Pkg::Telegram_T */
typedef struct kcg_tag_Telegram_T_BG_Types_Pkg {
  kcg_bool valid;
  kcg_bool checkResult;
  TelegramHeader_T_BG_Types_Pkg telegramheader;
  CompressedPackets_T_Common_Types_Pkg packets;
} Telegram_T_BG_Types_Pkg;

/* BG_Types_Pkg::TelegramArray_T */
typedef Telegram_T_BG_Types_Pkg TelegramArray_T_BG_Types_Pkg[8];

/* BG_Types_Pkg::BG_Message_T */
typedef struct kcg_tag_BG_Message_T_BG_Types_Pkg {
  kcg_bool present;
  TelegramArray_T_BG_Types_Pkg Telegrams;
  kcg_int numberBalises;
  centerOfBalisePosition_T_BG_Types_Pkg centerOfBalisePosition;
} BG_Message_T_BG_Types_Pkg;

/* Receive_TrackSide_Msg_Pkg::TelegramStore_T */
typedef struct kcg_tag_TelegramStore_T_Receive_TrackSide_Msg_Pkg {
  kcg_bool valid;
  Telegram_T_BG_Types_Pkg telegram;
  centerOfBalisePosition_T_BG_Types_Pkg position;
} TelegramStore_T_Receive_TrackSide_Msg_Pkg;

/* Common_Types_Pkg::filterRelatedEvents_T */
typedef struct kcg_tag_filterRelatedEvents_T_Common_Types_Pkg {
  kcg_bool pendingL1Transition;
  kcg_bool pendingL12L3Transition;
  kcg_bool pendingAckOfTrainDataFromRBC;
  kcg_bool emergencyStopAccepted;
  kcg_int lastAckTextMessageId;
  kcg_bool pendingNTCTransition;
  kcg_bool SPPAndGradientOnBoard;
  kcg_bool MACoverNotFullLength;
} filterRelatedEvents_T_Common_Types_Pkg;

/* SDM_Types_Pkg::Percentage_T */
typedef kcg_int Percentage_T_SDM_Types_Pkg;

/* TargetManagement_pkg::extractTargetsMRSPACC */
typedef struct kcg_tag_extractTargetsMRSPACC_TargetManagement_pkg {
  Target_list_MRSP_real_T_TargetManagement_types targetList;
  kcg_int lastInsertedTargetIndex;
} extractTargetsMRSPACC_TargetManagement_pkg;

/* TargetLimits_Pkg::TargetIteratorAkku */
typedef struct kcg_tag_TargetIteratorAkku_TargetLimits_Pkg {
  L_internal_real_Type_SDM_Types_Pkg SBI2;
  kcg_int index;
  TargetType_T_TargetManagement_types ttype;
  bec_t_TargetLimits_Pkg bec;
  V_internal_real_Type_SDM_Types_Pkg V_est;
  T_trac_t_TargetLimits_Pkg T;
  V_internal_real_Type_SDM_Types_Pkg V_ura;
  V_internal_real_Type_SDM_Types_Pkg V_P_MRDT_ebd;
  kcg_int V_P_MRDT_index;
} TargetIteratorAkku_TargetLimits_Pkg;

/* SDM_GradientAcceleration_Pkg::ACC */
typedef struct kcg_tag_ACC_SDM_GradientAcceleration_Pkg {
  L_internal_real_Type_SDM_Types_Pkg frontPos;
  kcg_int frontIndex;
  L_internal_real_Type_SDM_Types_Pkg rearPos;
  kcg_int rearIndex;
  GradientProfile_real_compensated_t_SDM_GradientAcceleration_types compensatedGradientProfile;
} ACC_SDM_GradientAcceleration_Pkg;

/* Receive_TrackSide_Msg_Pkg::BGCollector_T */
typedef struct kcg_tag_BGCollector_T_Receive_TrackSide_Msg_Pkg {
  kcg_bool badBaliseFlag;
  kcg_bool BGMessageSent;
  NID_C C_ID;
  NID_BG BG_ID;
  centerOfBalisePosition_T_BG_Types_Pkg balisePosition;
  centerOfBalisePosition_T_BG_Types_Pkg positionFirstContact;
  kcg_int collectedTelegrams;
  kcg_int totalTelegrams;
} BGCollector_T_Receive_TrackSide_Msg_Pkg;

/* TM::P046_sections_array_flat_T */
typedef kcg_int P046_sections_array_flat_T_TM[66];

/* TM::P005_sections_array_flat_T */
typedef kcg_int P005_sections_array_flat_T_TM[231];

/* TM::P042_trackside_int_T */
typedef struct kcg_tag_P042_trackside_int_T_TM {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_RBC;
  kcg_int NID_C;
  kcg_int NID_RBC;
  kcg_int NID_RADIO;
  kcg_int Q_SLEEPSESSION;
} P042_trackside_int_T_TM;

/* TM::nid_packet_meta */
typedef kcg_int nid_packet_meta_TM;

/* TM::Radio_TrackTrain_Header_T */
typedef struct kcg_tag_Radio_TrackTrain_Header_T_TM {
  kcg_int radioDevice;
  kcg_int receivedSystemTime;
  kcg_int nid_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
  kcg_int t_train_reference;
  kcg_int nid_em;
  kcg_int q_scale;
  kcg_int d_sr;
  kcg_int t_sh_rqst;
  kcg_int d_ref;
  kcg_int q_dir;
  kcg_int d_emergencystop;
  kcg_int m_version;
} Radio_TrackTrain_Header_T_TM;

/* TM::CompressedRadioMessage */
typedef struct kcg_tag_CompressedRadioMessage_TM {
  Radio_TrackTrain_Header_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} CompressedRadioMessage_TM;

/* RadioTrackTrainMessageQueueEntry_T */
typedef struct kcg_tag_RadioTrackTrainMessageQueueEntry_T {
  kcg_bool m_IsValid;
  CompressedRadioMessage_TM m_Entry;
} RadioTrackTrainMessageQueueEntry_T;

/* RadioTrackTrainMessageQueueEntries_T */
typedef RadioTrackTrainMessageQueueEntry_T RadioTrackTrainMessageQueueEntries_T[8];

/* RadioTrackTrainMessageQueue_T */
typedef struct kcg_tag_RadioTrackTrainMessageQueue_T {
  RadioTrackTrainMessageQueueEntries_T m_Entries;
} RadioTrackTrainMessageQueue_T;

/* TM::P057_trackside_int_T */
typedef struct kcg_tag_P057_trackside_int_T_TM {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int T_MAR;
  kcg_int T_TIMEOUTRQST;
  kcg_int T_CYCRQST;
} P057_trackside_int_T_TM;

/* TM::P058_section_int_T */
typedef struct kcg_tag_P058_section_int_T_TM {
  kcg_int D_LOC;
  kcg_int Q_LGTLOC;
} P058_section_int_T_TM;

/* TM::P021_section_int_T */
typedef struct kcg_tag_P021_section_int_T_TM {
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
} P021_section_int_T_TM;

/* TM::P021_trackide_sectionlist_T */
typedef P021_section_int_T_TM P021_trackide_sectionlist_T_TM[32];

/* TM::P021_trackside_int_T */
typedef struct kcg_tag_P021_trackside_int_T_TM {
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
} P021_trackside_int_T_TM;

/* TM::P021_OBU_sectionlist_int_T */
typedef P021_section_int_T_TM P021_OBU_sectionlist_int_T_TM[33];

/* TM::P005_section_int_T */
typedef struct kcg_tag_P005_section_int_T_TM {
  kcg_int D_LINK;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_LINKORIENTATION;
  kcg_int Q_LINKREACTION;
  kcg_int Q_LOCACC;
} P005_section_int_T_TM;

/* TM::P005_trackide_sectionlist_T */
typedef P005_section_int_T_TM P005_trackide_sectionlist_T_TM[32];

/* TM::P005_trackside_int_T */
typedef struct kcg_tag_P005_trackside_int_T_TM {
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
} P005_trackside_int_T_TM;

/* TM::P005_OBU_sectionlist_int_T */
typedef P005_section_int_T_TM P005_OBU_sectionlist_int_T_TM[33];

/* TM::P015_section_int_T */
typedef struct kcg_tag_P015_section_int_T_TM {
  kcg_int L_SECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
} P015_section_int_T_TM;

/* TM::BaliseTelegramHeader_int_T */
typedef struct kcg_tag_BaliseTelegramHeader_int_T_TM {
  kcg_int q_updown;
  kcg_int m_version;
  kcg_int q_media;
  kcg_int n_pig;
  kcg_int n_total;
  kcg_int m_dup;
  kcg_int m_mcount;
  kcg_int nid_c;
  kcg_int nid_bg;
  kcg_int q_link;
} BaliseTelegramHeader_int_T_TM;

/* TM::CompressedBaliseMessage */
typedef struct kcg_tag_CompressedBaliseMessage_TM {
  BaliseTelegramHeader_int_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} CompressedBaliseMessage_TM;

/* TM::P255_trackside_int_T */
typedef struct kcg_tag_P255_trackside_int_T_TM {
  kcg_bool valid;
  kcg_int NID_PACKET;
} P255_trackside_int_T_TM;

/* TM::P041_section_int_T */
typedef struct kcg_tag_P041_section_int_T_TM {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
} P041_section_int_T_TM;

/* TM::P041_trackide_sectionlist_T */
typedef P041_section_int_T_TM P041_trackide_sectionlist_T_TM[32];

/* TM::P041_trackside_int_T */
typedef struct kcg_tag_P041_trackside_int_T_TM {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_LEVELTR;
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
  kcg_int N_ITER;
  P041_trackide_sectionlist_T_TM SECTIONS;
} P041_trackside_int_T_TM;

/* TM::P041_OBU_sectionlist_int_T */
typedef P041_section_int_T_TM P041_OBU_sectionlist_int_T_TM[33];

/* TM::P045_trackside_int_T */
typedef struct kcg_tag_P045_trackside_int_T_TM {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_MN;
} P045_trackside_int_T_TM;

/* TM::P046_section_int_T */
typedef struct kcg_tag_P046_section_int_T_TM {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
} P046_section_int_T_TM;

/* TM::P046_trackide_sectionlist_T */
typedef P046_section_int_T_TM P046_trackide_sectionlist_T_TM[32];

/* TM::P046_trackside_int_T */
typedef struct kcg_tag_P046_trackside_int_T_TM {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int N_ITER;
  P046_trackide_sectionlist_T_TM SECTIONS;
} P046_trackside_int_T_TM;

/* TM::P046_OBU_sectionlist_int_T */
typedef P046_section_int_T_TM P046_OBU_sectionlist_int_T_TM[33];

/* TM::P137_trackside_int_T */
typedef struct kcg_tag_P137_trackside_int_T_TM {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SRSTOP;
} P137_trackside_int_T_TM;

/* TM::P065_trackside_int_T */
typedef struct kcg_tag_P065_trackside_int_T_TM {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int NID_TSR;
  kcg_int D_TSR;
  kcg_int L_TSR;
  kcg_int Q_FRONT;
  kcg_int V_TSR;
} P065_trackside_int_T_TM;

/* TM_baseline2::P027V1_section_int_qdiff_T */
typedef struct kcg_tag_P027V1_section_int_qdiff_T_TM_baseline2 {
  kcg_int NC_DIFF;
  kcg_int V_DIFF;
} P027V1_section_int_qdiff_T_TM_baseline2;

/* Handover_Pkg::connection_ids_T */
typedef struct kcg_tag_connection_ids_T_Handover_Pkg {
  kcg_bool valid;
  kcg_int mobileDeviceNo;
  NID_C nid_c;
  NID_RBC nid_RBC;
  NID_RADIO nid_radio;
  NID_MN nid_mn;
} connection_ids_T_Handover_Pkg;

/* ProvidePositionReport_Pkg::SystemTime_T */
typedef kcg_int SystemTime_T_ProvidePositionReport_Pkg;

/* TrainToTrack::Position_Report */
typedef struct kcg_tag_Position_Report_TrainToTrack {
  kcg_int NID_PACKET;
  kcg_int L_PACKET;
  Q_SCALE qscale;
  kcg_int NID_LRBG;
  kcg_int D_LRBG;
  Q_DIRLRBG dirlrbg;
  Q_DLRBG dlrbg;
  kcg_int L_DOUBTOVER;
  kcg_int L_DOUBTUNDER;
  Q_LENGTH length;
  kcg_int L_TRAININT;
  kcg_int V_TRAIN;
  Q_DIRTRAIN dirtrain;
  M_MODE mode;
  M_LEVEL level;
  kcg_int NID_NTC;
} Position_Report_TrainToTrack;

/* Packet_TrainTypes_Pkg::PT0_PositionReport_T */
typedef struct kcg_tag_PT0_PositionReport_T_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  Position_Report_TrainToTrack packet0;
} PT0_PositionReport_T_Packet_TrainTypes_Pkg;

/* TrainToTrack::Position_Report_based_on_two_balise_groups */
typedef struct kcg_tag_Position_Report_based_on_two_balise_groups_TrainToTrack {
  kcg_int NID_PACKET;
  kcg_int L_PACKET;
  Q_SCALE qscale;
  kcg_int NID_LRBG;
  kcg_int NID_PRVLRBG;
  kcg_int D_LRBG;
  Q_DIRLRBG dirlrbg;
  Q_DLRBG dlrbg;
  kcg_int L_DOUBTOVER;
  kcg_int L_DOUBTUNDER;
  Q_LENGTH length;
  kcg_int L_TRAININT;
  kcg_int V_TRAIN;
  Q_DIRTRAIN dirtrain;
  M_MODE mode;
  M_LEVEL level;
  kcg_int NID_NTC;
} Position_Report_based_on_two_balise_groups_TrainToTrack;

/* Packet_TrainTypes_Pkg::PT1_PositionReport_2BG_T */
typedef struct kcg_tag_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  Position_Report_based_on_two_balise_groups_TrainToTrack packet1;
} PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg;

/* TM_TrainToTrack::P044_other_data */
typedef kcg_int P044_other_data_TM_TrainToTrack[1];

/* TM_TrainToTrack::P044 */
typedef struct kcg_tag_P044_TM_TrainToTrack {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NID_XUSER nid_xuser;
  P044_other_data_TM_TrainToTrack external_data;
} P044_TM_TrainToTrack;

/* TA_MRSP::SSP_t_section_t */
typedef kcg_int SSP_t_section_t_TA_MRSP;

/* TA_MRSP::SSP_s_section_t */
typedef kcg_int SSP_s_section_t_TA_MRSP;

/* TA_MRSP::SSP_section_t */
typedef struct kcg_tag_SSP_section_t_TA_MRSP {
  SSP_t_section_t_TA_MRSP target;
  SSP_s_section_t_TA_MRSP speed;
} SSP_section_t_TA_MRSP;

/* TA_MRSP::SSP_cat_t */
typedef SSP_section_t_TA_MRSP SSP_cat_t_TA_MRSP[33];

/* TA_MRSP::SSP_matrix_t */
typedef SSP_cat_t_TA_MRSP SSP_matrix_t_TA_MRSP[11];

/* TA_EmergencyStop::NID_EM_Store::NID_EM_STORE_Acc_T */
typedef struct kcg_tag_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store {
  kcg_bool handled;
  NID_EM nid_em;
  kcg_int nfree;
} NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::BG_counters_T */
typedef struct kcg_tag_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg {
  kcg_int unlinkedBGsCount;
  kcg_int linkedBGsCount;
  kcg_int totalBGsCount;
  kcg_int passedUnlinkedBGsCount;
  kcg_int passedLinkedBGsCount;
  kcg_int passedTotalBGsCount;
} BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::BG_find_T */
typedef struct kcg_tag_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg {
  kcg_int index;
  kcg_int noOfFoundBGs;
  kcg_bool BGFound;
} BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::linkedBG_index_T */
typedef struct kcg_tag_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg {
  kcg_int previousLinkedBG_idx;
  kcg_int currentIndex;
  kcg_int subsequentLinkedBG_idx;
} linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::linkedBGs_indices_T */
typedef linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg[41];

/* MoRC_Pck::time_Type */
typedef kcg_int time_Type_MoRC_Pck;

/* Toolbox::OdometrySpeed_T */
typedef kcg_int OdometrySpeed_T_Toolbox;

/* RBC_Diagnostic_Pkg::DiagMsg_T */
typedef struct kcg_tag_DiagMsg_T_RBC_Diagnostic_Pkg {
  kcg_bool valid;
  kcg_int count;
  T_TRAIN timestamp;
  DiagMsgType_E_RBC_Diagnostic_Pkg diagType;
  DiagMsgSrc_E_RBC_Diagnostic_Pkg diagSrc;
  DiagMsgText_E_RBC_Diagnostic_Pkg diagText;
} DiagMsg_T_RBC_Diagnostic_Pkg;

/* InfraLib::R_data_internal_T */
typedef struct kcg_tag_R_data_internal_T_InfraLib {
  M_TrackTrain_Radio_T_TM_radio_messages message;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int trigger;
  kcg_bool message_sent;
} R_data_internal_T_InfraLib;

/* InfraLib::B_data_internal_T */
typedef struct kcg_tag_B_data_internal_T_InfraLib {
  BaliseTelegramHeader_int_T_TM header;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int engineering_BG_location;
  kcg_real TrainPos;
  kcg_int pig_nom_0;
  kcg_bool balise_passed;
} B_data_internal_T_InfraLib;

/* InfraLib::TrainPosRaw_T */
typedef struct kcg_tag_TrainPosRaw_T_InfraLib {
  kcg_real TrainPos_in;
  kcg_int OffsetTotal;
  kcg_real TrainPosCalibrated;
} TrainPosRaw_T_InfraLib;

/* InfraLib::TrackSectionData_T */
typedef struct kcg_tag_TrackSectionData_T_InfraLib {
  TrainPosRaw_T_InfraLib TrainPosRaw;
  CompressedBaliseMessage_TM BG_Message;
} TrackSectionData_T_InfraLib;

typedef kcg_bool array_bool_4[4];

typedef kcg_int array_int_4[4];

/* DATA::DMI_Status_int_array_T */
typedef array_int_4 DMI_Status_int_array_T_DATA;

/* DATA::DMI_Text_Message_Ack_int_array_T */
typedef array_int_4 DMI_Text_Message_Ack_int_array_T_DATA;

/* DATA::DMI_Level_Data_int_array_T */
typedef array_int_4 DMI_Level_Data_int_array_T_DATA;

/* TM::Array04 */
typedef array_int_4 Array04_TM;

/* TM::P015_section_array_T */
typedef array_int_4 P015_section_array_T_TM;

/* TM::P015_OBU_sectionlist_array_T */
typedef P015_section_array_T_TM P015_OBU_sectionlist_array_T_TM[32];

typedef kcg_int array_int_289[289];

typedef kcg_real array_real_4[4];

/* tPASPOutput_Array */
typedef array_real_4 tPASPOutput_Array;

typedef kcg_int array_int_492[492];

typedef MovementAuthoritySectionlist_t_TrackAtlasTypes array_168400[10];

typedef kcg_int array_int_285[285];

typedef MetadataElement_T_Common_Types_Pkg array_168486[29];

typedef MsgStructure array_168496[1];

typedef RadioTrackTrainMessageQueueEntry_T array_168500[1];

typedef M_TrainTrack_Message_T_TM_radio_messages array_168524[2];

typedef N_PIG array_168531[8];

typedef Target_real_T_TargetManagement_types array_168535[1];

typedef kcg_int array_int_894[894];

typedef struct kcg_tag_struct_168546 {
  kcg_bool trackAheadFree;
  kcg_bool driverSelectsStart;
} struct_168546;

/* MA_Request::Driver2MAR_T */
typedef struct_168546 Driver2MAR_T_MA_Request;

/* TA_MA_Request::Driver2MAR_T */
typedef struct_168546 Driver2MAR_T_TA_MA_Request;

typedef trainProperties_T_TrainPosition_Types_Pck array_168567[33];

typedef M_TrainTrack_Message_T_TM_radio_messages array_168602[98];

typedef kcg_bool array_bool_113[113];

typedef P058_OBU_sectionlist_enum_T_TM array_168667[2];

typedef kcg_real array_real_113[113];

typedef kcg_int array_int_31[31];

typedef kcg_int array_int_70[70];

typedef OdometryLocations_T_Obu_BasicTypes_Pkg array_168713[8];

typedef kcg_int array_int_964[964];

typedef kcg_int array_int_269[269];

typedef kcg_int array_int_105[105];

typedef P041_section_int_T_TM array_168759[1];

typedef kcg_int array_int_23[23];

typedef P046_sections_array_flat_T_TM array_int_66_33[33];

typedef Metadata_T_Common_Types_Pkg array_168778[30];

typedef P058_section_int_T_TM array_168785[32];

/* TM::P058_trackide_sectionlist_T */
typedef array_168785 P058_trackide_sectionlist_T_TM;

/* TM::P058_trackside_int_T */
typedef struct kcg_tag_P058_trackside_int_T_TM {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int T_CYCLOC;
  kcg_int D_CYCLOC;
  kcg_int M_LOC;
  kcg_int N_ITER;
  P058_trackide_sectionlist_T_TM SECTIONS;
} P058_trackside_int_T_TM;

/* TM::P058_OBU_sectionlist_int_T */
typedef array_168785 P058_OBU_sectionlist_int_T_TM;

typedef MsgStructure array_168789[9];

typedef struct kcg_tag_struct_168859 {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  M_ACK m_ack;
  kcg_int nid_lrbg;
  kcg_int nid_em;
} struct_168859;

/* TM_radio_messages::M_018_T */
typedef struct_168859 M_018_T_TM_radio_messages;

/* TM_radio_messages::M_016_T */
typedef struct_168859 M_016_T_TM_radio_messages;

typedef struct kcg_tag_struct_168880 {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  M_ACK m_ack;
  kcg_int nid_lrbg;
  kcg_int t_train_SH_request;
} struct_168880;

/* TM_radio_messages::M_027_T */
typedef struct_168880 M_027_T_TM_radio_messages;

/* TM_radio_messages::M_028_T */
typedef struct_168880 M_028_T_TM_radio_messages;

typedef MRSP_internal_T_TargetManagement_types array_168941[110];

typedef kcg_int array_int_304[304];

typedef trainProperties_T_TrainPosition_Types_Pck array_168973[41];

typedef P021_OBU_sectionlist_enum_T_TM array_168986[33];

typedef ErrorMessage_T_ProvidePositionReport_Pkg array_168990[9];

typedef M_TrainTrack_Message_T_TM_radio_messages array_169000[3];

typedef kcg_int array_int_261[261];

/* DATA::DMI_Identifier_Request_int_array_T */
typedef array_int_261 DMI_Identifier_Request_int_array_T_DATA;

/* DATA::DMI_Identifier_int_array_T */
typedef array_int_261 DMI_Identifier_int_array_T_DATA;

typedef M_LEVEL array_169014[7];

typedef struct kcg_tag_struct_169021 {
  kcg_bool valid;
  L_NVKRINT l_nvkrint_l;
  kcg_real m_nvkrint_l;
} struct_169021;

/* TM::P003_OBU_l_section_enum_T */
typedef struct_169021 P003_OBU_l_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_l_section_enum_T */
typedef struct_169021 P203V1_OBU_l_section_enum_T_TM_baseline2;

typedef kcg_int array_int_97[97];

typedef kcg_bool array_bool_15[15];

typedef kcg_int array_int_15[15];

/* Packet_TrainTypes_Pkg::telephoneNumber_T */
typedef array_int_15 telephoneNumber_T_Packet_TrainTypes_Pkg;

/* Packet_TrainTypes_Pkg::sNID_RADIO_T */
typedef struct kcg_tag_sNID_RADIO_T_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  telephoneNumber_T_Packet_TrainTypes_Pkg telephoneNumber;
} sNID_RADIO_T_Packet_TrainTypes_Pkg;

/* Packet_TrainTypes_Pkg::aNID_RADIO_T */
typedef sNID_RADIO_T_Packet_TrainTypes_Pkg aNID_RADIO_T_Packet_TrainTypes_Pkg[1];

/* Packet_TrainTypes_Pkg::PT3_OnboardTelephoneNumbers_T */
typedef struct kcg_tag_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  kcg_int number;
  aNID_RADIO_T_Packet_TrainTypes_Pkg aNID_RADIO;
} PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg;

/* RCM_Session_Types_Pkg::morc_configData_T */
typedef struct kcg_tag_morc_configData_T_RCM_Session_Types_Pkg {
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg radioNetworkID_Default;
  NID_RADIO nid_radio_shortNumberStoredOnboard;
  kcg_int noOfRetriesOfSendingTerminationMessage;
  T_internal_Type_Obu_BasicTypes_Pkg maxWaitingTimeForAckMessageReceived;
  T_internal_Type_Obu_BasicTypes_Pkg maxWaitingTimeUntilTerminationOrderReceived;
  kcg_int noOfRetriesUntilTerminationOrderIsReceived;
  T_internal_Type_Obu_BasicTypes_Pkg connectionStatusTimerInterval;
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg onboardPhoneNumbers;
  NID_ENGINE nid_engine;
  T_internal_Type_Obu_BasicTypes_Pkg maxTimeToMaintainCommSession;
  kcg_int noOfTriesToEstablishASafeRadioConnection;
} morc_configData_T_RCM_Session_Types_Pkg;

/* TM::Array15 */
typedef array_int_15 Array15_TM;

typedef positionedBGs_T_TrainPosition_Types_Pck array_169086[41];

typedef odometry_T_Obu_BasicTypes_Pkg array_169095[110];

typedef T_trac_t_TargetLimits_Pkg array_169099[110];

typedef DiagMsg_T_RBC_Diagnostic_Pkg array_169103[16];

typedef M_TrainTrack_Message_T_TM_radio_messages array_169119[99];

typedef Target_real_T_TargetManagement_types array_169123[109];

typedef M_MODE array_169127[30];

typedef P046_OBU_sectionlist_enum_T_TM array_169131[7];

typedef kcg_int array_int_11[11];

/* DATA::DMI_Driver_Identifier_int_array_T */
typedef array_int_11 DMI_Driver_Identifier_int_array_T_DATA;

/* TM_TrainToTrack::Array11 */
typedef array_int_11 Array11_TM_TrainToTrack;

typedef kcg_int array_int_499[499];

typedef kcg_bool array_bool_50[50];

typedef L_internal_real_Type_SDM_Types_Pkg array_real_50[50];

typedef kcg_int array_int_987[987];

typedef kcg_bool array_bool_7[7];

typedef Q_DIR array_169246[7];

typedef kcg_int array_int_7[7];

/* SDMConversionModelPkg::m_KvSteps_t */
typedef array_int_7 m_KvSteps_t_SDMConversionModelPkg;

/* SDMConversionModelPkg::v_KvSteps_t */
typedef array_int_7 v_KvSteps_t_SDMConversionModelPkg;

/* SDMConversionModelPkg::mv_Map_t */
typedef struct kcg_tag_mv_Map_t_SDMConversionModelPkg {
  m_KvSteps_t_SDMConversionModelPkg m;
  v_KvSteps_t_SDMConversionModelPkg v;
} mv_Map_t_SDMConversionModelPkg;

/* TM::Array07 */
typedef array_int_7 Array07_TM;

/* TM::P005_section_array_T */
typedef array_int_7 P005_section_array_T_TM;

/* TM::P005_OBU_sectionlist_array_T */
typedef P005_section_array_T_TM P005_OBU_sectionlist_array_T_TM[33];

typedef kcg_int array_int_292[292];

typedef P015_OBU_sectionlist_array_T_TM array_int_4_32_128[128];

typedef kcg_int array_int_128[128];

/* TM::P015_sections_array_flat_T */
typedef array_int_128 P015_sections_array_flat_T_TM;

/* TM::P012_sections_array_flat_T */
typedef array_int_128 P012_sections_array_flat_T_TM;

typedef Q_SCALE array_169285[7];

typedef M_LEVEL array_169300[30];

typedef kcg_int array_int_3[3];

/* DATA::DMI_Menu_Request_int_array_T */
typedef array_int_3 DMI_Menu_Request_int_array_T_DATA;

/* DATA::DMI_Entry_Request_int_array_T */
typedef array_int_3 DMI_Entry_Request_int_array_T_DATA;

/* DATA::DMI_System_Version_int_array_T */
typedef array_int_3 DMI_System_Version_int_array_T_DATA;

/* DATA::DMI_Display_Control_int_array_T */
typedef array_int_3 DMI_Display_Control_int_array_T_DATA;

/* DATA::DMI_EVC_Radio_Net_Data_int_array_T */
typedef array_int_3 DMI_EVC_Radio_Net_Data_int_array_T_DATA;

/* DATA::DMI_Train_Running_Number_int_array_T */
typedef array_int_3 DMI_Train_Running_Number_int_array_T_DATA;

/* DATA::DMI_Adhesion_Factor_Data_int_array_T */
typedef array_int_3 DMI_Adhesion_Factor_Data_int_array_T_DATA;

/* DATA::DMI_Driver_Request_int_array_T */
typedef array_int_3 DMI_Driver_Request_int_array_T_DATA;

/* DATA::DMI_Train_Data_Ack_int_array_T */
typedef array_int_3 DMI_Train_Data_Ack_int_array_T_DATA;

/* DATA::DMI_Icon_Ack_int_array_T */
typedef array_int_3 DMI_Icon_Ack_int_array_T_DATA;

/* TM::Array03 */
typedef array_int_3 Array03_TM;

/* TM::P021_section_array_T */
typedef array_int_3 P021_section_array_T_TM;

/* TM::P041_section_array_T */
typedef array_int_3 P041_section_array_T_TM;

/* TM_TrainToTrack::P004_TrainTrack_int */
typedef array_int_3 P004_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P005_TrainTrack_int */
typedef array_int_3 P005_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P009_TrainTrack_int */
typedef array_int_3 P009_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::Array03 */
typedef array_int_3 Array03_TM_TrainToTrack;

typedef kcg_real array_real_3[3];

/* TargetLimits_Pkg::TractionDeltaTriple */
typedef array_real_3 TractionDeltaTriple_TargetLimits_Pkg;

/* SDMConversionModelPkg::coeff_BrakeBasic_t */
typedef array_real_3 coeff_BrakeBasic_t_SDMConversionModelPkg;

typedef GradientProfile_t_TrackAtlasTypes array_169371[50];

typedef StaticSpeedProfile_t_TrackAtlasTypes array_169375[50];

typedef kcg_int array_int_491[491];

typedef kcg_int array_int_42[42];

typedef struct kcg_tag_struct_169401 {
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Pos;
  OrBG_TM Or_BG;
  OrLine_TM Or_Line;
} struct_169401;

/* TM::BaliseGroupData */
typedef struct_169401 BaliseGroupData_TM;

/* Basics::BaliseGroupData */
typedef struct_169401 BaliseGroupData_Basics;

typedef array_int_3 array_int_3_33[33];

/* TM::P021_OBU_sectionlist_array_T */
typedef array_int_3_33 P021_OBU_sectionlist_array_T_TM;

/* TM::P041_OBU_sectionlist_array_T */
typedef array_int_3_33 P041_OBU_sectionlist_array_T_TM;

typedef positionedBG_T_TrainPosition_Types_Pck array_169420[40];

typedef CompressedPacketData_T_Common_Types_Pkg array_int_500_500[500];

typedef DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg array_169437[5];

typedef MsgStructure array_169451[10];

typedef array_169451 array_168969[10];

typedef struct kcg_tag_struct_169455 {
  kcg_bool valid;
  kcg_int l_section;
  Q_SECTIONTIMER q_sectiontimer;
  kcg_int t_sectiontimer;
  kcg_int d_sectiontimerstoploc;
} struct_169455;

/* TM::P015_section_enum_T */
typedef struct_169455 P015_section_enum_T_TM;

/* TM::P015_OBU_sectionlist_enum_T */
typedef P015_section_enum_T_TM P015_OBU_sectionlist_enum_T_TM[32];

/* TM::P015_OBU_T */
typedef struct kcg_tag_P015_OBU_T_TM {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  V_LOA v_loa;
  T_LOA t_loa;
  N_ITER n_iter;
  P015_OBU_sectionlist_enum_T_TM sections;
  L_ENDSECTION l_endsection;
  Q_SECTIONTIMER q_sectiontimer;
  T_SECTIONTIMER t_sectiontimer;
  D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc;
  Q_ENDTIMER q_endtimer;
  T_ENDTIMER t_endtimer;
  D_ENDTIMERSTARTLOC d_endtimerstartloc;
  Q_DANGERPOINT q_dangerpoint;
  D_DP d_dp;
  V_RELEASEDP v_releasedp;
  Q_OVERLAP q_overlap;
  D_STARTOL d_startol;
  T_OL t_ol;
  D_OL d_ol;
  V_RELEASEOL v_releaseol;
} P015_OBU_T_TM;

typedef P015_OBU_T_TM array_169441[5];

/* TM::P012_OBU_T */
typedef struct kcg_tag_P012_OBU_T_TM {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  V_MAIN v_main;
  V_LOA v_loa;
  T_LOA t_loa;
  N_ITER n_iter;
  P015_OBU_sectionlist_enum_T_TM sections;
  L_ENDSECTION l_endsection;
  Q_SECTIONTIMER q_sectiontimer;
  T_SECTIONTIMER t_sectiontimer;
  D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc;
  Q_ENDTIMER q_endtimer;
  T_ENDTIMER t_endtimer;
  D_ENDTIMERSTARTLOC d_endtimerstartloc;
  Q_DANGERPOINT q_dangerpoint;
  D_DP d_dp;
  V_RELEASEDP v_releasedp;
  Q_OVERLAP q_overlap;
  D_STARTOL d_startol;
  T_OL t_ol;
  D_OL d_ol;
  V_RELEASEOL v_releaseol;
} P012_OBU_T_TM;

typedef P015_OBU_sectionlist_enum_T_TM array_168410[10];

/* TM::P012_section_enum_T */
typedef struct_169455 P012_section_enum_T_TM;

typedef P015_OBU_sectionlist_enum_T_TM array_169464[5];

typedef kcg_int array_int_975[975];

typedef struct kcg_tag_struct_169478 {
  kcg_bool valid;
  kcg_int Loc_Abs;
  kcg_int Loc_LRBG;
  kcg_int MRS;
} struct_169478;

/* DMI_Types_Pkg::DMI_speedProfileElement_T */
typedef struct_169478 DMI_speedProfileElement_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_SpeedProfileArray_T */
typedef DMI_speedProfileElement_T_DMI_Types_Pkg DMI_SpeedProfileArray_T_DMI_Types_Pkg[32];

/* DMI_Types_Pkg::DMI_speedProfile_T */
typedef struct kcg_tag_DMI_speedProfile_T_DMI_Types_Pkg {
  kcg_bool profileChanged;
  DMI_SpeedProfileArray_T_DMI_Types_Pkg speedProfiles;
} DMI_speedProfile_T_DMI_Types_Pkg;

/* TrackAtlasTypes::MRSP_section_t */
typedef struct_169478 MRSP_section_t_TrackAtlasTypes;

/* TrackAtlasTypes::MRSP_Profile_t */
typedef MRSP_section_t_TrackAtlasTypes MRSP_Profile_t_TrackAtlasTypes[110];

/* TrackAtlasTypes::DataForSupervision_nextGen_t */
typedef struct kcg_tag_DataForSupervision_nextGen_t_TrackAtlasTypes {
  kcg_bool freshMA;
  MovementAuthority_t_TrackAtlasTypes MA;
  kcg_bool freshGradientProfile;
  GradientProfile_t_TrackAtlasTypes GradientProfile;
  kcg_bool freshMRSP;
  MRSP_Profile_t_TrackAtlasTypes MRSP;
} DataForSupervision_nextGen_t_TrackAtlasTypes;

/* TA_Export::MRSP_reduction_acc */
typedef struct kcg_tag_MRSP_reduction_acc_TA_Export {
  kcg_int write_index;
  MRSP_Profile_t_TrackAtlasTypes MRSP;
} MRSP_reduction_acc_TA_Export;

typedef kcg_int array_int_444[444];

typedef kcg_int array_int_280[280];

typedef M_TrainTrack_Message_T_TM_radio_messages array_169506[4];

typedef struct kcg_tag_struct_169584 {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  kcg_int d_startreverse;
  kcg_int l_reversearea;
} struct_169584;

/* Packet_Types_Pkg::P138_ReversingAreaInformation_T */
typedef struct_169584 P138_ReversingAreaInformation_T_Packet_Types_Pkg;

/* TM::P138_OBU_T */
typedef struct_169584 P138_OBU_T_TM;

typedef struct kcg_tag_struct_169597 {
  kcg_int number;
  kcg_int dig1;
  kcg_int dig2;
  kcg_int dig3;
} struct_169597;

/* DMI_Types_Pkg::DMI_brakeModel_id_T */
typedef struct_169597 DMI_brakeModel_id_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_vMax_id_T */
typedef struct_169597 DMI_vMax_id_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_airtightSystem_T */
typedef struct_169597 DMI_airtightSystem_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_loadingGauge_T */
typedef struct_169597 DMI_loadingGauge_T_DMI_Types_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Coded_Train_Data_T */
typedef struct kcg_tag_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_train_id_T_DMI_Types_Pkg trainID;
  DMI_train_length_T_DMI_Types_Pkg trainLength;
  DMI_brakeModel_id_T_DMI_Types_Pkg brakeModel;
  DMI_vMax_id_T_DMI_Types_Pkg vmax;
  M_AXLELOADCAT mAxleLoad;
  DMI_airtightSystem_T_DMI_Types_Pkg airTightSystem;
  DMI_loadingGauge_T_DMI_Types_Pkg mLoadingGauge;
} DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef kcg_int array_int_30[30];

typedef kcg_char array_char_30[30];

typedef struct_169021 array_169645[32];

/* TM::P003_OBU_l_sectionlist_enum_T */
typedef array_169645 P003_OBU_l_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_l_sectionlist_enum_T */
typedef array_169645 P203V1_OBU_l_sectionlist_enum_T_TM_baseline2;

typedef struct kcg_tag_struct_169664 {
  kcg_int idx;
  array_bool_4 items;
} struct_169664;

typedef kcg_int array_int_432[432];

typedef kcg_int array_int_65[65];

/* DMI_trackCondition_int_array_T */
typedef array_int_65 DMI_trackCondition_int_array_T;

/* DATA::DMI_LevelList_int_array_T */
typedef array_int_65 DMI_LevelList_int_array_T_DATA;

typedef kcg_int array_int_350[350];

typedef kcg_int array_int_104[104];

typedef kcg_int array_int_22[22];

typedef kcg_int array_int_307[307];

typedef mv_Map_t_SDMConversionModelPkg array_169712[13];

typedef kcg_int array_int_428[428];

typedef kcg_int array_int_264[264];

typedef IterPacket58_T_Packet_Types_Pkg array_169739[32];

/* PosRepParams_T */
typedef struct kcg_tag_PosRepParams_T {
  Q_DIR q_dir;
  Q_SCALE q_scale;
  T_CYCLOC t_cycloc;
  D_CYCLOC d_cycloc;
  M_LOC m_loc;
  N_ITER m_NumberOfIncrementalDistancesAndQualifiers;
  array_169739 m_IncrementalDistancesAndQualifiers;
} PosRepParams_T;

/* DynamicConfig_T */
typedef struct kcg_tag_DynamicConfig_T {
  M_VERSION m_version;
  NationalParams_T m_NationalParams;
  MAReqParams_T m_MAReqParams;
  PosRepParams_T m_PosRepParams;
} DynamicConfig_T;

typedef kcg_int array_int_18[18];

typedef Q_DIRTRAIN array_169747[30];

typedef kcg_real array_real_100[100];

/* CalcBrakingCurves_types::ASafeDistanceDefinition_T */
typedef array_real_100 ASafeDistanceDefinition_T_CalcBrakingCurves_types;

/* CalcBrakingCurves_types::ASafeRow_T */
typedef array_real_100 ASafeRow_T_CalcBrakingCurves_types;

/* CalcBrakingCurves_types::ASafe_Data_T */
typedef ASafeRow_T_CalcBrakingCurves_types ASafe_Data_T_CalcBrakingCurves_types[14];

/* CalcBrakingCurves_types::ASafe_T */
typedef struct kcg_tag_ASafe_T_CalcBrakingCurves_types {
  ASafeDistanceDefinition_T_CalcBrakingCurves_types distance_definition;
  ASafeSpeedDefinition_T_CalcBrakingCurves_types speed_definition;
  ASafe_Data_T_CalcBrakingCurves_types data;
} ASafe_T_CalcBrakingCurves_types;

typedef ASafe_T_CalcBrakingCurves_types array_168822[113];

typedef ASafeRow_T_CalcBrakingCurves_types array_real_100_13[13];

typedef ASafeRow_T_CalcBrakingCurves_types array_real_100_6[6];

typedef array_real_100 array_real_100_8[8];

typedef array_real_100 array_real_100_1[1];

typedef kcg_int array_int_221[221];

typedef trainPosition_T_TrainPosition_Types_Pck array_169776[30];

typedef kcg_int array_int_627[627];

typedef kcg_int array_int_260[260];

typedef A_internal_Type_Obu_BasicTypes_Pkg array_int_14[14];

typedef M_TrainTrack_Message_T_TM_radio_messages array_169813[5];

/* TM_lib_internal::M_TrainTrackMessage_buffer_t */
typedef array_169813 M_TrainTrackMessage_buffer_t_TM_lib_internal;

/* TM_TrainTrack_Bus::M_TrainTrackMessageBus_t */
typedef array_169813 M_TrainTrackMessageBus_t_TM_TrainTrack_Bus;

typedef M_TrainTrackMessageBus_t_TM_TrainTrack_Bus array_169242[5];

typedef P021_OBU_sectionlist_enum_T_TM array_169831[7];

typedef P041_OBU_sectionlist_enum_T_TM array_169835[7];

typedef kcg_bool array_bool_256[256];

/* CheckEuroradioMessage::MetadataTruthtable_T1 */
typedef array_bool_256 MetadataTruthtable_T1_CheckEuroradioMessage[46];

typedef kcg_int array_int_990[990];

typedef struct kcg_tag_struct_169865 {
  kcg_bool valid;
  kcg_int v_nvkvint_k_m;
  kcg_real m_nvkvint_km_12;
  kcg_real m_nvkvint_km_23;
} struct_169865;

/* TM::P003_OBU_k_m_section_enum_T */
typedef struct_169865 P003_OBU_k_m_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_m_section_enum_T */
typedef struct_169865 P203V1_OBU_k_m_section_enum_T_TM_baseline2;

typedef kcg_bool array_bool_10[10];

typedef kcg_int array_int_10[10];

typedef MsgStructure array_169894[4];

typedef NC_TRAIN array_169898[7];

typedef kcg_real array_real_10[10];

/* tPASP_Array */
typedef array_real_10 tPASP_Array;

/* tSpeedPoints */
typedef array_real_10 tSpeedPoints[2];

typedef array_real_10 array_real_10_10[10];

typedef kcg_int array_int_131[131];

typedef CompressedPackets_T_Common_Types_Pkg array_169945[33];

typedef kcg_int array_int_6[6];

/* SDMConversionModelPkg::a_BrakeSteps_t */
typedef array_int_6 a_BrakeSteps_t_SDMConversionModelPkg;

/* SDMConversionModelPkg::v_BrakeSteps_t */
typedef array_int_6 v_BrakeSteps_t_SDMConversionModelPkg;

/* SDMConversionModelPkg::av_Map_t */
typedef struct kcg_tag_av_Map_t_SDMConversionModelPkg {
  a_BrakeSteps_t_SDMConversionModelPkg a;
  v_BrakeSteps_t_SDMConversionModelPkg v;
} av_Map_t_SDMConversionModelPkg;

/* SDMConversionModelPkg::a_Brake_t */
typedef struct kcg_tag_a_Brake_t_SDMConversionModelPkg {
  av_Map_t_SDMConversionModelPkg emergency;
  av_Map_t_SDMConversionModelPkg service;
} a_Brake_t_SDMConversionModelPkg;

typedef av_Map_t_SDMConversionModelPkg array_169698[13];

/* TM::Array06 */
typedef array_int_6 Array06_TM;

typedef kcg_real array_real_6[6];

typedef kcg_int array_int_494[494];

typedef struct kcg_tag_struct_169965 {
  M_VOLTAGE m_voltage;
  kcg_int nid_ctraction;
} struct_169965;

/* Packet_TrainTypes_Pkg::sTractionIdentity_T */
typedef struct_169965 sTractionIdentity_T_Packet_TrainTypes_Pkg;

/* TM_TrainToTrack::P011_voltage */
typedef struct_169965 P011_voltage_TM_TrainToTrack;

typedef struct_169965 array_169735[4];

/* Packet_TrainTypes_Pkg::aTractionIdentity_T */
typedef array_169735 aTractionIdentity_T_Packet_TrainTypes_Pkg;

/* TM_TrainToTrack::P011_voltage_list */
typedef array_169735 P011_voltage_list_TM_TrainToTrack;

typedef struct kcg_tag_struct_169971 {
  kcg_int now;
  kcg_int distance;
} struct_169971;

/* TIU_Types_Pkg::D_test_traction_T */
typedef struct_169971 D_test_traction_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Change_traction_system_T */
typedef struct kcg_tag_Change_traction_system_T_TIU_Types_Pkg {
  kcg_bool valid;
  D_test_traction_T_TIU_Types_Pkg d_test_traction;
  M_voltage_T_TIU_Types_Pkg m_voltage;
} Change_traction_system_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::D_test_distance_T */
typedef struct_169971 D_test_distance_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::D_test_current_T */
typedef struct_169971 D_test_current_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Change_of_allowed_current_consumption_T */
typedef struct kcg_tag_Change_of_allowed_current_consumption_T_TIU_Types_Pkg {
  kcg_bool valid;
  D_test_current_T_TIU_Types_Pkg d_test_current;
  M_current_T_TIU_Types_Pkg m_current;
} Change_of_allowed_current_consumption_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Message_EVC_to_Train_Interface_T */
typedef struct kcg_tag_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg {
  Isolation_Status_T_TIU_Types_Pkg isolation_status;
  Brake_command_T_TIU_Types_Pkg brake_command;
  Brake_inhibition_command_T_TIU_Types_Pkg brake_inhibition;
  Type_I_train_commands_T_TIU_Types_Pkg type_I_train_commands;
  Change_traction_system_T_TIU_Types_Pkg change_traction_system;
  Passenger_door_control_info_T_TIU_Types_Pkg passenger_door_control_info;
  Change_of_allowed_current_consumption_T_TIU_Types_Pkg change_of_allowed_current_consumption;
} Message_EVC_to_Train_Interface_T_TIU_Types_Pkg;

/* API_TIU_Pkg::TIU_Output_msg */
typedef struct kcg_tag_TIU_Output_msg_API_TIU_Pkg {
  kcg_bool valid;
  Message_EVC_to_Train_Interface_T_TIU_Types_Pkg info;
} TIU_Output_msg_API_TIU_Pkg;

/* TIU_Types_Pkg::D_test_trackcond_T */
typedef struct_169971 D_test_trackcond_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::L_test_trackcond_T */
typedef struct_169971 L_test_trackcond_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::nothing_to_resume_profile_follow_T */
typedef struct kcg_tag_nothing_to_resume_profile_follow_T_TIU_Types_Pkg {
  D_test_trackcond_T_TIU_Types_Pkg d_test_trackcond;
  L_test_trackcond_T_TIU_Types_Pkg l_test_trackcond;
  M_trackcond_T_TIU_Types_Pkg m_trackcond;
} nothing_to_resume_profile_follow_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::D_test_trackinit_T */
typedef struct_169971 D_test_trackinit_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Type_I_train_and_brake_inhibition_with_distance_commands_T */
typedef struct kcg_tag_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg {
  kcg_bool valid;
  nothing_to_resume_profile_follow_T_TIU_Types_Pkg nothing_to_resume_profile_follow;
  D_test_trackinit_T_TIU_Types_Pkg empty_profile_initial_state_to_be_resumed;
} Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg;

typedef struct kcg_tag_struct_170025 {
  kcg_bool valid;
  kcg_int begin_section;
  kcg_int end_section;
  kcg_int gradient;
} struct_170025;

/* DMI_Types_Pkg::DMI_gradientProfileElement_T */
typedef struct_170025 DMI_gradientProfileElement_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_gradientProfileArray_T */
typedef DMI_gradientProfileElement_T_DMI_Types_Pkg DMI_gradientProfileArray_T_DMI_Types_Pkg[32];

/* DMI_Types_Pkg::DMI_gradientProfile_T */
typedef struct kcg_tag_DMI_gradientProfile_T_DMI_Types_Pkg {
  kcg_bool profileChanged;
  DMI_gradientProfileArray_T_DMI_Types_Pkg gradientProfiles;
} DMI_gradientProfile_T_DMI_Types_Pkg;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Track_Description_T */
typedef struct kcg_tag_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_speedProfile_T_DMI_Types_Pkg speedProfiles;
  DMI_gradientProfile_T_DMI_Types_Pkg gradientProfiles;
  DMI_trackCondition_T_DMI_Types_Pkg trackConditions;
} DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg;

/* API_DMI_Pkg::EVC_to_DMI_Message_T */
typedef struct kcg_tag_EVC_to_DMI_Message_T_API_DMI_Pkg {
  kcg_bool present;
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg dynamic;
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg menu_request;
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg entry_request;
  DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg evc_coded_train_data;
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg textMessage;
  DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg trackDescription;
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg identifierRequest;
  DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg systemVersion;
  DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg displayControl;
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg EVC_levelData;
  DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg EVC_radioNetData;
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg driverIdentifier;
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg trainRunningNumber;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg trainData;
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg adhesionFactor;
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg iconRequest;
} EVC_to_DMI_Message_T_API_DMI_Pkg;

/* TrackAtlasTypes::GradientProfile_for_DMI_section_t */
typedef struct_170025 GradientProfile_for_DMI_section_t_TrackAtlasTypes;

/* TrackAtlasTypes::GradientProfile_for_DMI_t */
typedef GradientProfile_for_DMI_section_t_TrackAtlasTypes GradientProfile_for_DMI_t_TrackAtlasTypes[50];

/* TrackAtlasTypes::DataForDMI_t */
typedef struct kcg_tag_DataForDMI_t_TrackAtlasTypes {
  GradientProfile_for_DMI_t_TrackAtlasTypes GradientProfile;
  kcg_bool Gradient_profile_updated;
  MRSP_Profile_t_TrackAtlasTypes MRSP;
  kcg_bool MRSP_updated;
} DataForDMI_t_TrackAtlasTypes;

typedef kcg_int array_int_2[2];

/* DATA::DMI_Radio_Net_Data_int_array_T */
typedef array_int_2 DMI_Radio_Net_Data_int_array_T_DATA;

/* TM::P058_section_array_T */
typedef array_int_2 P058_section_array_T_TM;

/* TM::P046_section_array_T */
typedef array_int_2 P046_section_array_T_TM;

/* TM::P046_OBU_sectionlist_array_T */
typedef P046_section_array_T_TM P046_OBU_sectionlist_array_T_TM[33];

/* TM_baseline2::P027V1_section_array_qdiff_T */
typedef array_int_2 P027V1_section_array_qdiff_T_TM_baseline2;

/* TM_TrainToTrack::P011_voltage_section_array_T */
typedef array_int_2 P011_voltage_section_array_T_TM_TrainToTrack;

/* TM_TrainToTrack::P011_voltage_sectionlist_array_T */
typedef P011_voltage_section_array_T_TM_TrainToTrack P011_voltage_sectionlist_array_T_TM_TrainToTrack[4];

typedef P011_voltage_sectionlist_array_T_TM_TrainToTrack array_int_2_4_8[8];

typedef array_int_2 array_int_2_32[32];

/* TM::P058_OBU_sectionlist_array_T */
typedef array_int_2_32 P058_OBU_sectionlist_array_T_TM;

/* TM_baseline2::P027V1_OBU_sectionlist_array_qdiff_T */
typedef array_int_2_32 P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2;

typedef kcg_bool array_bool_41[41];

typedef kcg_int array_int_41[41];

typedef array_int_6 array_int_6_221[221];

typedef kcg_int array_int_978[978];

typedef kcg_int array_int_283[283];

typedef array_int_2_32 array_int_2_32_32[32];

typedef struct kcg_tag_struct_170132 {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int nid_engine;
} struct_170132;

/* TM_radio_messages::M_136_T */
typedef struct_170132 M_136_T_TM_radio_messages;

/* TM_radio_messages::M_129_T */
typedef struct_170132 M_129_T_TM_radio_messages;

/* TM_radio_messages::M_154_T */
typedef struct_170132 M_154_T_TM_radio_messages;

/* TM_radio_messages::M_159_T */
typedef struct_170132 M_159_T_TM_radio_messages;

/* TM_radio_messages::M_156_T */
typedef struct_170132 M_156_T_TM_radio_messages;

/* TM_radio_messages::M_155_T */
typedef struct_170132 M_155_T_TM_radio_messages;

typedef P021_section_int_T_TM array_170141[1];

typedef P015_section_int_T_TM array_170158[32];

/* TM::P015_trackide_sectionlist_T */
typedef array_170158 P015_trackide_sectionlist_T_TM;

/* TM::P015_trackside_int_T */
typedef struct kcg_tag_P015_trackside_int_T_TM {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int V_LOA;
  kcg_int T_LOA;
  kcg_int N_ITER;
  P015_trackide_sectionlist_T_TM SECTIONS;
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
} P015_trackside_int_T_TM;

/* TM::P015_OBU_sectionlist_int_T */
typedef array_170158 P015_OBU_sectionlist_int_T_TM;

typedef GradientProfile_real_t_SDM_GradientAcceleration_types array_170168[100];

typedef struct kcg_tag_struct_170172 {
  kcg_bool valid;
  kcg_int nid_c;
} struct_170172;

/* Packet_Types_Pkg::nidC_T */
typedef struct_170172 nidC_T_Packet_Types_Pkg;

/* Packet_Types_Pkg::nidCArray_T */
typedef nidC_T_Packet_Types_Pkg nidCArray_T_Packet_Types_Pkg[7];

/* Packet_Types_Pkg::P3_NationalValues_T */
typedef struct kcg_tag_P3_NationalValues_T_Packet_Types_Pkg {
  kcg_bool valid;
  Q_DIR q_dir;
  D_VALIDNV d_validnv;
  nidCArray_T_Packet_Types_Pkg nid_cArray;
  V_NVSHUNT v_nvshunt;
  V_NVSTFF v_nvstff;
  V_NVONSIGHT v_nvonsight;
  V_NVLIMSUPERV v_nvlimsuperv;
  V_NVUNFIT v_nvunfit;
  V_NVREL v_nvrel;
  D_NVROLL d_nvroll;
  Q_NVSBTSMPERM q_nvsbtsmperm;
  Q_NVEMRRLS q_nvemrrls;
  Q_NVGUIPERM q_nvguiperm;
  Q_NVSBFBPERM q_nvsbfbperm;
  Q_NVINHSMICPERM q_nvinhsmicperm;
  V_NVALLOWOVTRP v_nvallowovtrp;
  V_NVSUPOVTRP v_nvsupovtrp;
  D_NVOVTRP d_nvovtrp;
  T_NVOVTRP t_nvovtrp;
  D_NVPOTRP d_nvpotrp;
  M_NVCONTACT m_nvcontact;
  T_NVCONTACT t_nvcontact;
  M_NVDERUN m_nvderun;
  D_NVSTFF d_nvstff;
  Q_NVDRIVER_ADHES q_nvdriver_adhes;
  A_NVMAXREDADH1 a_nvmaxredadh1;
  A_NVMAXREDADH2 a_nvmaxredadh2;
  A_NVMAXREDADH3 a_nvmaxredadh3;
  Q_NVLOCACC q_nvlocacc;
  M_NVAVADH m_nvavadh;
  M_NVEBCL m_nvebcl;
  Q_NVKINT q_nvkint;
  nvkvintsetArray_T_Packet_Types_Pkg nvkvintsetArray;
  nvkrintArray_T_Packet_Types_Pkg nvkrintArray;
  M_NVKTINT m_nvktint;
} P3_NationalValues_T_Packet_Types_Pkg;

/* TM::P003_OBU_nid_c_section_enum_T */
typedef struct_170172 P003_OBU_nid_c_section_enum_T_TM;

/* TM_baseline2::P003V1_section_enum_T */
typedef struct_170172 P003V1_section_enum_T_TM_baseline2;

typedef P003V1_section_enum_T_TM_baseline2 array_169076[31];

typedef P003V1_section_enum_T_TM_baseline2 array_169171[1];

typedef struct_170172 array_168647[32];

/* TM::P003_OBU_nid_c_sectionlist_enum_T */
typedef array_168647 P003_OBU_nid_c_sectionlist_enum_T_TM;

/* TM_baseline2::P003V1_sectionlist_enum_T */
typedef array_168647 P003V1_sectionlist_enum_T_TM_baseline2;

/* TM_baseline2::P003V1_OBU_T */
typedef struct kcg_tag_P003V1_OBU_T_TM_baseline2 {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_VALIDNV d_validnv;
  N_ITER n_iter;
  P003V1_sectionlist_enum_T_TM_baseline2 SECTIONS;
  V_NVSHUNT v_nvshunt;
  V_NVSTFF v_nvstff;
  V_NVONSIGHT v_nvonsight;
  V_NVUNFIT v_nvunfit;
  V_NVREL v_nvrel;
  D_NVROLL d_nvroll;
  Q_NVSBTSMPERM q_nvsbtsmperm;
  Q_NVEMRRLS q_nvemrrls;
  V_NVALLOWOVTRP v_nvallowovtrp;
  V_NVSUPOVTRP v_nvsopovtrp;
  D_NVOVTRP d_nvovtrp;
  T_NVOVTRP t_nvovtrp;
  D_NVPOTRP d_nvpotrp;
  M_NVCONTACT m_nvcontact;
  T_NVCONTACT t_nvcontact;
  M_NVDERUN m_nvderun;
  D_NVSTFF d_nvstff;
  Q_NVDRIVER_ADHES q_nvdriver_adhes;
} P003V1_OBU_T_TM_baseline2;

typedef struct_169865 array_170182[32];

/* TM::P003_OBU_k_m_sectionlist_enum_T */
typedef array_170182 P003_OBU_k_m_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_m_sectionlist_enum_T */
typedef array_170182 P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2;

typedef trainData_internal_t_SDM_Types_Pkg array_170186[110];

typedef A_gradient_t_SDM_GradientAcceleration_types array_170198[14];

typedef struct kcg_tag_struct_170221 {
  kcg_bool valid;
  kcg_int v_nvkvint_n;
  kcg_real m_nvkvint_n_12;
  kcg_real m_nvkvint_n_23;
} struct_170221;

/* TM::P003_OBU_n_section_enum_T */
typedef struct_170221 P003_OBU_n_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_n_section_enum_T */
typedef struct_170221 P203V1_OBU_n_section_enum_T_TM_baseline2;

typedef struct_170221 array_170178[32];

/* TM::P003_OBU_n_sectionlist_enum_T */
typedef array_170178 P003_OBU_n_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_n_sectionlist_enum_T */
typedef array_170178 P203V1_OBU_n_sectionlist_enum_T_TM_baseline2;

typedef MsgStructure array_170229[5];

typedef kcg_int array_int_33[33];

typedef t_Brake_t_SDMModelPkg array_170237[110];

typedef kcg_int array_int_236[236];

typedef P027V1_OBU_sectionlist_enum_T_TM_baseline2 array_170250[50];

typedef kcg_int array_int_888[888];

typedef ModeDecisionTableActionKind_DataDictionary_Pkg array_170263[17];

/* DataDictionary_Pkg::ModeDecisionTableType */
typedef array_170263 ModeDecisionTableType_DataDictionary_Pkg[256];

typedef kcg_int array_int_72[72];

typedef kcg_int array_int_396[396];

typedef kcg_int array_int_150[150];

typedef kcg_int array_int_68[68];

typedef NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store array_170353[8];

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_T */
typedef struct kcg_tag_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store {
  kcg_int nfree;
  array_170353 items;
} NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store;

typedef array_int_3_33 array_int_3_33_99[99];

typedef array_int_2_32 array_int_2_32_64[64];

typedef kcg_int array_int_25[25];

/* TM_TrainToTrack::P044_TrainTrack_int */
typedef array_int_25 P044_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P011_TrainTrack_int */
typedef array_int_25 P011_TrainTrack_int_TM_TrainToTrack;

typedef MRSP_Profile_t_TrackAtlasTypes array_170382[110];

typedef kcg_int array_int_64[64];

/* TM::P058_sections_array_flat_T */
typedef array_int_64 P058_sections_array_flat_T_TM;

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef array_int_64 array_int_64_32[32];

typedef Q_SCALE array_170418[10];

typedef kcg_int array_int_21[21];

typedef M_TrainTrack_Message_T_TM_radio_messages array_170449[95];

typedef kcg_int array_int_99[99];

/* TM::P041_sections_array_flat_T */
typedef array_int_99 P041_sections_array_flat_T_TM;

/* TM::P021_sections_array_flat_T */
typedef array_int_99 P021_sections_array_flat_T_TM;

typedef kcg_int array_int_17[17];

/* TM_TrainToTrack::P001_TrainTrack_int */
typedef array_int_17 P001_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P000_TrainTrack_int */
typedef array_int_17 P000_TrainTrack_int_TM_TrainToTrack;

typedef kcg_int array_int_302[302];

typedef kcg_int array_int_56[56];

typedef tScale array_real_9_6[6];

typedef array_int_99 array_int_99_33[33];

typedef kcg_int array_int_13[13];

/* SDMConversionModelPkg::a_MergedSteps_t */
typedef array_int_13 a_MergedSteps_t_SDMConversionModelPkg;

/* SDMConversionModelPkg::v_MergedSteps_t */
typedef array_int_13 v_MergedSteps_t_SDMConversionModelPkg;

/* SDMConversionModelPkg::av_MergedMap_t */
typedef struct kcg_tag_av_MergedMap_t_SDMConversionModelPkg {
  a_MergedSteps_t_SDMConversionModelPkg a;
  v_MergedSteps_t_SDMConversionModelPkg v;
} av_MergedMap_t_SDMConversionModelPkg;

typedef struct kcg_tag_struct_170518 {
  kcg_bool valid;
  Q_DIR q_dir;
} struct_170518;

/* Packet_Types_Pkg::P135_StopShuntingOnDeskOpening_T */
typedef struct_170518 P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg;

/* TM::P135_OBU_T */
typedef struct_170518 P135_OBU_T_TM;

typedef V_internal_real_Type_SDM_Types_Pkg array_real_13[13];

typedef LocWithInAcc_T_Obu_BasicTypes_Pkg array_170535[41];

typedef MetadataTruthtable_T1_CheckEuroradioMessage array_bool_256_46_30[30];

typedef Q_DIR array_170543[33];

typedef Q_SCALE array_170575[33];

typedef struct kcg_tag_struct_170588 {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  kcg_int d_reverse;
  kcg_int v_reverse;
} struct_170588;

/* Packet_Types_Pkg::P139_ReversingSupervisionInformation_T */
typedef struct_170588 P139_ReversingSupervisionInformation_T_Packet_Types_Pkg;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_Packet */
typedef struct kcg_tag_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg {
  P12_Level1MovementAuthorities_T_Packet_Types_Pkg P_12;
  P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg P_135;
  P137_StopIfInStaffResponsible_T_Packet_Types_Pkg P_137;
  P138_ReversingAreaInformation_T_Packet_Types_Pkg P_138;
  P139_ReversingSupervisionInformation_T_Packet_Types_Pkg P_139;
  P15_Level23MovementAuthorities_T_Packet_Types_Pkg P_15;
  P21_GradientProfiles_T_Packet_Types_Pkg P_21;
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg P_27;
  P41_LevelTransistionOrders_T_Packet_Types_Pkg P_41;
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg P_46;
  P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg P_63;
  P80_ModeProfiles_T_Packet_Types_Pkg P_80;
  NID_LRBG LRBG;
  Location_T_Obu_BasicTypes_Pkg referenceLocation;
} T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg;

/* TrackAtlasTypes::DataForModeAndLevel_t */
typedef struct kcg_tag_DataForModeAndLevel_t_TrackAtlasTypes {
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg train_packets;
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg train_messages;
  kcg_bool p12;
  kcg_bool p15;
  kcg_bool p21;
  kcg_bool p27;
} DataForModeAndLevel_t_TrackAtlasTypes;

/* TM::P139_OBU_T */
typedef struct_170588 P139_OBU_T_TM;

typedef DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg array_170597[10];

typedef T_trac_t_TargetLimits_Pkg array_170601[10];

typedef ASafe_T_CalcBrakingCurves_types array_170605[110];

typedef kcg_int array_int_9[9];

/* DATA::DMI_EVC_Coded_Train_Data_int_array_T */
typedef array_int_9 DMI_EVC_Coded_Train_Data_int_array_T_DATA;

/* DATA::DMI_Train_Data_int_array_T */
typedef array_int_9 DMI_Train_Data_int_array_T_DATA;

/* DATA::DMI_Icons_int_array_T */
typedef array_int_9 DMI_Icons_int_array_T_DATA;

/* DATA::DriverIdentifier_INT_T */
typedef array_int_9 DriverIdentifier_INT_T_DATA;

/* TM::Array09 */
typedef array_int_9 Array09_TM;

typedef kcg_int array_int_48[48];

typedef P005_section_int_T_TM array_170644[1];

typedef positionedBG_T_TrainPosition_Types_Pck array_170648[1];

typedef kcg_bool array_bool_5[5];

typedef struct kcg_tag_struct_169236 {
  kcg_int idx;
  array_bool_5 items;
} struct_169236;

typedef kcg_int array_int_5[5];

/* V5 */
typedef array_int_5 V5;

/* Packet_TrainTypes_Pkg::aNID_NTC_T */
typedef array_int_5 aNID_NTC_T_Packet_TrainTypes_Pkg;

/* TrainData_T */
typedef struct kcg_tag_TrainData_T {
  NID_ENGINE nid_engine;
  kcg_int m_NumberOfOnboardPhoneNumbers;
  aNID_RADIO_T_Packet_TrainTypes_Pkg m_OnboardPhoneNumbers;
  T_TRAIN t_train_ref;
  NC_CDTRAIN nc_cdtrain;
  NC_TRAIN nc_train;
  L_TRAIN l_train;
  V_MAXTRAIN v_maxtrain;
  M_LOADINGGAUGE m_loadinggauge;
  M_AXLELOADCAT m_axleloadcat;
  M_AIRTIGHT m_airtight;
  N_AXLE n_axle;
  aTractionIdentity_T_Packet_TrainTypes_Pkg m_TractionIdentities;
  aNID_NTC_T_Packet_TrainTypes_Pkg m_NationalSystemIdentities;
  NID_OPERATIONAL nid_operational;
} TrainData_T;

/* SessionManagement_T */
typedef struct kcg_tag_SessionManagement_T {
  TrainData_T m_TrainData;
  PosData_T m_PosData;
} SessionManagement_T;

/* RBC_DataBus_Pkg::RBC_Data_T */
typedef struct kcg_tag_RBC_Data_T_RBC_DataBus_Pkg {
  SessionManagement_T session;
  DynamicConfig_T config;
  array_169103 diagnostic;
  RadioTrackTrainMessageQueue_T messageQueue;
  Clock_T clockk;
  CompressedRadioMessage_TM lastSentTrackTrainMessage;
} RBC_Data_T_RBC_DataBus_Pkg;

/* TIU_Types_Pkg::trainData_T */
typedef struct kcg_tag_trainData_T_TIU_Types_Pkg {
  kcg_bool valid;
  kcg_bool acknowledgedByDriver;
  NC_TRAIN trainCategory;
  NC_CDTRAIN cantDeficientcy;
  L_internal_Type_Obu_BasicTypes_Pkg trainLength;
  kcg_int brakePerctage;
  V_internal_Type_Obu_BasicTypes_Pkg maxTrainSpeed;
  M_LOADINGGAUGE loadingGauge;
  M_AXLELOADCAT axleLoadCategory;
  M_AIRTIGHT airtightSystem;
  kcg_int axleNumber;
  kcg_int numberNationalSystems;
  aNID_NTC_T_Packet_TrainTypes_Pkg nationSystems;
  kcg_int numberTractionSystems;
  aTractionIdentity_T_Packet_TrainTypes_Pkg tractionSystem;
} trainData_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::Message_Train_Interface_to_EVC_T */
typedef struct kcg_tag_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg {
  Mode_control_and_train_status_T_TIU_Types_Pkg train_status;
  Brake_status_T_TIU_Types_Pkg brake_status;
  Brake_pressure_value_T_TIU_Types_Pkg brake_pressure;
  M_train_data_entry_type_T_TIU_Types_Pkg train_data_entry_type;
  trainData_T_TIU_Types_Pkg train_data_info;
  Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg type_I_train_and_brake_inhibition;
} Message_Train_Interface_to_EVC_T_TIU_Types_Pkg;

/* API_TIU_Pkg::TIU_Input_msg */
typedef struct kcg_tag_TIU_Input_msg_API_TIU_Pkg {
  kcg_bool valid;
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg info;
} TIU_Input_msg_API_TIU_Pkg;

typedef trainData_T_TIU_Types_Pkg array_169593[100];

/* Packet_TrainTypes_Pkg::PT11_ValidatedTrainData_T */
typedef struct kcg_tag_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg {
  kcg_bool valid;
  NC_CDTRAIN nc_cdtrain;
  NC_TRAIN nc_train;
  L_internal_Type_Obu_BasicTypes_Pkg l_train;
  V_internal_Type_Obu_BasicTypes_Pkg v_maxtrain;
  M_LOADINGGAUGE m_loadinggoage;
  M_AXLELOADCAT m_axleloadcat;
  M_AIRTIGHT m_airtight;
  N_AXLE n_axle;
  kcg_int nIter_tractionIdentity;
  aTractionIdentity_T_Packet_TrainTypes_Pkg tractionIdentity;
  kcg_int nIter_ntc;
  aNID_NTC_T_Packet_TrainTypes_Pkg nid_ntc;
} PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg;

/* Common_Types_Pkg::outPackets_T */
typedef struct kcg_tag_outPackets_T_Common_Types_Pkg {
  PT0_PositionReport_T_Packet_TrainTypes_Pkg p0;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg p1;
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg p3;
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg p4;
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg p5;
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg p9;
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg p11;
} outPackets_T_Common_Types_Pkg;

/* TM::Array05 */
typedef array_int_5 Array05_TM;

/* TM_TrainToTrack::P011_ntc_list */
typedef array_int_5 P011_ntc_list_TM_TrainToTrack;

/* TM_TrainToTrack::P011 */
typedef struct kcg_tag_P011_TM_TrainToTrack {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NC_CDTRAIN nc_cdtrain;
  NC_TRAIN nc_train;
  L_TRAIN l_train;
  V_MAXTRAIN v_maxtrain;
  M_LOADINGGAUGE m_loadinggauge;
  M_AXLELOADCAT m_axleloadcat;
  M_AIRTIGHT m_airtight;
  N_AXLE n_axle;
  N_ITER n_iter_voltage;
  P011_voltage_list_TM_TrainToTrack voltage_list;
  N_ITER n_iter_nid_ntc;
  P011_ntc_list_TM_TrainToTrack nid_ntc_list;
} P011_TM_TrainToTrack;

/* TM_TrainToTrack::P011_ntc_list_array_T */
typedef array_int_5 P011_ntc_list_array_T_TM_TrainToTrack;

/* TM_TrainToTrack::P003_nid_radio_list_t */
typedef array_int_5 P003_nid_radio_list_t_TM_TrainToTrack;

/* TM_TrainToTrack::P003 */
typedef struct kcg_tag_P003_TM_TrainToTrack {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  N_ITER n_iter;
  P003_nid_radio_list_t_TM_TrainToTrack nid_radio;
} P003_TM_TrainToTrack;

/* TM_TrainToTrack::P003_nid_radio_list_int_t */
typedef array_int_5 P003_nid_radio_list_int_t_TM_TrainToTrack;

typedef kcg_real array_real_5[5];

typedef array_real_5 array_real_5_5[5];

typedef GradientProfile_real_t_SDM_GradientAcceleration_types array_170701[50];

typedef kcg_bool array_bool_1[1];

typedef kcg_real array_real_1[1];

typedef kcg_int array_int_40[40];

typedef kcg_char array_char_243[243];

typedef M_TrainTrack_Message_T_TM_radio_messages array_170759[96];

typedef struct kcg_tag_struct_170763 {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  M_ACK m_ack;
  kcg_int nid_lrbg;
} struct_170763;

/* TM_radio_messages::M_024_T */
typedef struct_170763 M_024_T_TM_radio_messages;

/* TM_radio_messages::M_009_T */
typedef struct_170763 M_009_T_TM_radio_messages;

/* TM_radio_messages::M_006_T */
typedef struct_170763 M_006_T_TM_radio_messages;

/* TM_radio_messages::M_003_T */
typedef struct_170763 M_003_T_TM_radio_messages;

/* TM_radio_messages::M_043_T */
typedef struct_170763 M_043_T_TM_radio_messages;

/* TM_radio_messages::M_041_T */
typedef struct_170763 M_041_T_TM_radio_messages;

/* TM_radio_messages::M_040_T */
typedef struct_170763 M_040_T_TM_radio_messages;

/* TM_radio_messages::M_039_T */
typedef struct_170763 M_039_T_TM_radio_messages;

/* TM_radio_messages::M_038_T */
typedef struct_170763 M_038_T_TM_radio_messages;

typedef struct kcg_tag_struct_170773 {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
} struct_170773;

/* TM_radio_messages::M_003_int_T */
typedef struct_170773 M_003_int_T_TM_radio_messages;

/* TM_radio_messages::M_024_int_T */
typedef struct_170773 M_024_int_T_TM_radio_messages;

typedef StaticSpeedProfile_t_TrackAtlasTypes array_170789[110];

typedef kcg_int array_int_891[891];

typedef P027V1_section_int_qdiff_T_TM_baseline2 array_170826[32];

/* TM_baseline2::P027V1_trackside_qdifflist_T */
typedef array_170826 P027V1_trackside_qdifflist_T_TM_baseline2;

/* TM_baseline2::P027V1_section_int_T */
typedef struct kcg_tag_P027V1_section_int_T_TM_baseline2 {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
} P027V1_section_int_T_TM_baseline2;

/* TM_baseline2::P027V1_trackside_sectionlist_T */
typedef P027V1_section_int_T_TM_baseline2 P027V1_trackside_sectionlist_T_TM_baseline2[32];

/* TM_baseline2::P027V1_trackside_int_T */
typedef struct kcg_tag_P027V1_trackside_int_T_TM_baseline2 {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER_n;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
  kcg_int N_ITER_k;
  P027V1_trackside_sectionlist_T_TM_baseline2 SECTIONS_SSP;
} P027V1_trackside_int_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_int_T */
typedef P027V1_section_int_T_TM_baseline2 P027V1_OBU_sectionlist_int_T_TM_baseline2[33];

typedef P027V1_section_int_T_TM_baseline2 array_168614[1];

/* TM_baseline2::P027V1_OBU_sectionlist_int_qdiff_T */
typedef array_170826 P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2;

typedef kcg_bool array_bool_32[32];

typedef kcg_real array_real_114[114];

/* CalcBrakingCurves_types::ParabolaCurveDistances_T */
typedef array_real_114 ParabolaCurveDistances_T_CalcBrakingCurves_types;

/* CalcBrakingCurves_types::ParabolaCurveSpeeds_T */
typedef array_real_114 ParabolaCurveSpeeds_T_CalcBrakingCurves_types;

/* CalcBrakingCurves_types::ParabolaCurveAccelerations_T */
typedef array_real_114 ParabolaCurveAccelerations_T_CalcBrakingCurves_types;

/* CalcBrakingCurves_types::ParabolaCurve_T */
typedef struct kcg_tag_ParabolaCurve_T_CalcBrakingCurves_types {
  ParabolaCurveDistances_T_CalcBrakingCurves_types distances;
  ParabolaCurveSpeeds_T_CalcBrakingCurves_types speeds;
  ParabolaCurveAccelerations_T_CalcBrakingCurves_types accelerations;
  ParabolaCurveValid_T_CalcBrakingCurves_types valid;
} ParabolaCurve_T_CalcBrakingCurves_types;

/* CalcBrakingCurves_Pkg::BCAccumulator_type */
typedef struct kcg_tag_BCAccumulator_type_CalcBrakingCurves_Pkg {
  L_internal_real_Type_SDM_Types_Pkg distance;
  V_internal_real_Type_SDM_Types_Pkg speed;
  kcg_int distanceIndex;
  kcg_int speedIndex;
  ParabolaCurve_T_CalcBrakingCurves_types BC;
} BCAccumulator_type_CalcBrakingCurves_Pkg;

/* CalcBrakingCurves_types::ParabolaCurve_list_MRSP_T */
typedef ParabolaCurve_T_CalcBrakingCurves_types ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types[110];

/* CalcBrakingCurves_types::CurveCollection_T */
typedef struct kcg_tag_CurveCollection_T_CalcBrakingCurves_types {
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types MRSP_EBD_curves;
  ParabolaCurve_T_CalcBrakingCurves_types EOA_SBD_curve;
  ParabolaCurve_T_CalcBrakingCurves_types SvL_LoA_EBD_curve;
  ParabolaCurve_T_CalcBrakingCurves_types GUI_curve;
  kcg_bool GUI_curve_enabled;
} CurveCollection_T_CalcBrakingCurves_types;

typedef ParabolaCurve_T_CalcBrakingCurves_types array_169580[10];

typedef kcg_int array_int_32[32];

/* SDMConversionModelPkg::LKrIntLookUp_t */
typedef array_int_32 LKrIntLookUp_t_SDMConversionModelPkg;

/* TM_baseline2::P003V1_OBU_sectionlist_int_T */
typedef array_int_32 P003V1_OBU_sectionlist_int_T_TM_baseline2;

typedef P003V1_OBU_sectionlist_int_T_TM_baseline2 array_int_32_32[32];

/* TM_baseline2::P003V1_trackide_sectionlist_T */
typedef array_int_32 P003V1_trackide_sectionlist_T_TM_baseline2;

/* TM_baseline2::P003V1_trackside_int_T */
typedef struct kcg_tag_P003V1_trackside_int_T_TM_baseline2 {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_VALIDNV;
  kcg_int N_ITER;
  P003V1_trackide_sectionlist_T_TM_baseline2 SECTIONS;
  kcg_int V_NVSHUNT;
  kcg_int V_NVSTFF;
  kcg_int V_NVONSIGHT;
  kcg_int V_NVUNFIT;
  kcg_int V_NVREL;
  kcg_int D_NVROLL;
  kcg_int Q_NVSRBKTRG;
  kcg_int Q_NVEMRRLS;
  kcg_int V_NVALLOWOVTRP;
  kcg_int V_NVSUPOVTRP;
  kcg_int D_NVOVTRP;
  kcg_int T_NVOVTRP;
  kcg_int D_NVPOTRP;
  kcg_int M_NVCONTACT;
  kcg_int T_NVCONTACT;
  kcg_int M_NVDERUN;
  kcg_int D_NVSTFF;
  kcg_int Q_NVDRIVER_ADHES;
} P003V1_trackside_int_T_TM_baseline2;

typedef kcg_real array_real_32[32];

typedef P005_OBU_sectionlist_array_T_TM array_int_7_33_231[231];

typedef kcg_bool array_bool_110[110];

typedef L_internal_Type_Obu_BasicTypes_Pkg array_int_110[110];

typedef kcg_int array_int_395[395];

typedef kcg_real array_real_110[110];

typedef kcg_int array_int_28[28];

typedef P046_section_int_T_TM array_170971[1];

typedef RadioTrackTrainMessageQueueEntry_T array_170975[7];

typedef array_int_128 array_int_128_32[32];

typedef struct kcg_tag_struct_171773 {
  kcg_int radioDevice;
  kcg_int receivedSystemTime;
  kcg_int nid_message;
  kcg_int t_train;
  M_ACK m_ack;
  kcg_int nid_lrbg;
  kcg_int t_train_reference;
  kcg_int nid_em;
  Q_SCALE q_scale;
  kcg_int d_sr;
  kcg_int t_sh_rqst;
  kcg_int d_ref;
  Q_DIR q_dir;
  kcg_int d_emergencystop;
  M_VERSION m_version;
} struct_171773;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct_171773 Radio_TrackTrain_Header_T_Radio_Types_Pkg;

/* Common_Types_Pkg::radioManagementMessage_T */
typedef struct kcg_tag_radioManagementMessage_T_Common_Types_Pkg {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg messageSource;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  P42_SessionManagement_T_Packet_Types_Pkg p42;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg p45;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} radioManagementMessage_T_Common_Types_Pkg;

/* Radio_Types_Pkg::RadioMessage_T */
typedef struct kcg_tag_RadioMessage_T_Radio_Types_Pkg {
  kcg_bool present;
  kcg_bool consistencyError;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg header;
  RadioMetadata_T_Common_Types_Pkg radioMetadata;
  CompressedPackets_T_Common_Types_Pkg packets;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} RadioMessage_T_Radio_Types_Pkg;

/* Common_Types_Pkg::TrackSide_ForCheck_T */
typedef struct kcg_tag_TrackSide_ForCheck_T_Common_Types_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  MsgSource_T_Common_Types_Pkg msg_type;
  BG_Message_T_BG_Types_Pkg telegramHeaders;
  RadioMessage_T_Radio_Types_Pkg radio_Msg;
} TrackSide_ForCheck_T_Common_Types_Pkg;

/* API_Msg_Pkg::API_RadioMsgHeader_T */
typedef struct kcg_tag_API_RadioMsgHeader_T_API_Msg_Pkg {
  kcg_bool present;
  kcg_bool apiConsistencyError;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  RadioMetadata_T_Common_Types_Pkg Radio_MetaData;
  RBC_Id_T_Common_Types_Pkg sendingRBC_Id;
} API_RadioMsgHeader_T_API_Msg_Pkg;

/* API_Msg_Pkg::API_TrackSideInput_T */
typedef struct kcg_tag_API_TrackSideInput_T_API_Msg_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTimeMsgReceived;
  MsgSource_T_Common_Types_Pkg msg_type;
  API_TelegramHeader_T_API_Msg_Pkg btm_msg;
  API_RadioMsgHeader_T_API_Msg_Pkg rtm_msg;
  CompressedPackets_T_Common_Types_Pkg packets;
} API_TrackSideInput_T_API_Msg_Pkg;

typedef API_TrackSideInput_T_API_Msg_Pkg array_170320[5];

/* TM_transitional::Radio_TrackTrain_Header_T */
typedef struct_171773 Radio_TrackTrain_Header_T_TM_transitional;

typedef P046_OBU_sectionlist_array_T_TM array_int_2_33_99[99];

typedef struct kcg_tag_struct_172264 {
  kcg_bool valid;
  Q_NVKVINTSET q_nvkvintset_k;
  kcg_real a_nvp12_k;
  kcg_real a_nvp23_k;
  kcg_int v_nvkvint_k;
  kcg_real m_nvkvint_k_12;
  kcg_real m_nvkvint_k_23;
  kcg_int n_iter_k_m;
  array_170182 n_iter_k_m_list;
} struct_172264;

/* TM::P003_OBU_k_section_enum_T */
typedef struct_172264 P003_OBU_k_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_section_enum_T */
typedef struct_172264 P203V1_OBU_k_section_enum_T_TM_baseline2;

typedef struct_172264 array_169066[32];

/* TM::P003_OBU_k_sectionlist_enum_T */
typedef array_169066 P003_OBU_k_sectionlist_enum_T_TM;

/* TM::P003_OBU_T */
typedef struct kcg_tag_P003_OBU_T_TM {
  kcg_bool valid;
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_VALIDNV d_validnv;
  NID_C nid_c;
  N_ITER n_iter_nid_c;
  P003_OBU_nid_c_sectionlist_enum_T_TM nid_c_list;
  V_NVSHUNT v_nvshunt;
  V_NVSTFF v_nvstff;
  V_NVONSIGHT v_nvonsight;
  V_NVLIMSUPERV v_nvlimsuperv;
  V_NVUNFIT v_nvunfit;
  V_NVREL v_nvrel;
  D_NVROLL d_nvroll;
  Q_NVSBTSMPERM q_nvsbtsmperm;
  Q_NVEMRRLS q_nvemrrls;
  Q_NVGUIPERM q_nvguiperm;
  Q_NVSBFBPERM q_nvsbfbperm;
  Q_NVINHSMICPERM q_nvinhsnicperm;
  V_NVALLOWOVTRP v_nvallowovtrp;
  V_NVSUPOVTRP v_nvsupovtrp;
  D_NVOVTRP d_nvovtrp;
  T_NVOVTRP t_nvovtrp;
  D_NVPOTRP d_nvpotrp;
  M_NVCONTACT m_nvcontact;
  T_NVCONTACT t_nvcontact;
  M_NVDERUN m_nvderun;
  D_NVSTFF d_nvstff;
  Q_NVDRIVER_ADHES q_nvdriver_adhes;
  A_NVMAXREDADH1 a_nvmaxredadh1;
  A_NVMAXREDADH2 a_nvmaxredadh2;
  A_NVMAXREDADH3 a_nvmaxredadh3;
  Q_NVLOCACC q_nvlocacc;
  M_NVAVADH m_nvavadh;
  M_NVEBCL m_nvebcl;
  Q_NVKINT q_nvkint;
  Q_NVKVINTSET q_nvkvintset;
  A_NVP12 a_nvp12;
  A_NVP23 a_nvp23;
  V_NVKVINT v_nvkvint;
  M_NVKVINT m_nvkvint_12;
  M_NVKVINT m_nvkvint_23;
  N_ITER n_iter_n;
  P003_OBU_n_sectionlist_enum_T_TM n_iter_n_list;
  N_ITER n_iter_k;
  P003_OBU_k_sectionlist_enum_T_TM n_iter_k_list;
  L_NVKRINT l_nvkrint;
  M_NVKRINT m_nvkrint;
  N_ITER n_iter_l;
  P003_OBU_l_sectionlist_enum_T_TM n_iter_l_list;
  M_NVKTINT m_nvktint;
} P003_OBU_T_TM;

/* TM_baseline2::P203V1_OBU_k_sectionlist_enum_T */
typedef array_169066 P203V1_OBU_k_sectionlist_enum_T_TM_baseline2;

/* TM_baseline2::P203V1_OBU_T */
typedef struct kcg_tag_P203V1_OBU_T_TM_baseline2 {
  kcg_bool valid;
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  Q_NVGUIPERM q_nvguiperm;
  Q_NVSBFBPERM q_nvsbfbperm;
  Q_NVINHSMICPERM q_nvinhsnicperm;
  A_NVMAXREDADH1 a_nvmaxredadh1;
  A_NVMAXREDADH2 a_nvmaxredadh2;
  A_NVMAXREDADH3 a_nvmaxredadh3;
  M_NVAVADH m_nvavadh;
  M_NVEBCL m_nvebcl;
  Q_NVKINT q_nvkint;
  Q_NVKVINTSET q_nvkvintset;
  A_NVP12 a_nvp12;
  A_NVP23 a_nvp23;
  V_NVKVINT v_nvkvint;
  M_NVKVINT m_nvkvint_12;
  M_NVKVINT m_nvkvint_23;
  N_ITER n_iter_n;
  P203V1_OBU_n_sectionlist_enum_T_TM_baseline2 n_iter_n_list;
  N_ITER n_iter_k;
  P203V1_OBU_k_sectionlist_enum_T_TM_baseline2 n_iter_k_list;
  L_NVKRINT l_nvkrint;
  M_NVKRINT m_nvkrint;
  N_ITER n_iter_l;
  P203V1_OBU_l_sectionlist_enum_T_TM_baseline2 n_iter_l_list;
  M_NVKTINT m_nvktint;
} P203V1_OBU_T_TM_baseline2;

typedef struct kcg_tag_struct_172277 {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  kcg_int d_rbctr;
  kcg_int nid_c;
  kcg_int nid_rbc;
  kcg_int nid_radio;
  Q_SLEEPSESSION q_sleepsession;
} struct_172277;

/* Packet_Types_Pkg::P131_RBCTransitionOrder_T */
typedef struct_172277 P131_RBCTransitionOrder_T_Packet_Types_Pkg;

/* Handover_Pkg::p131_q_rbcTransitionOrder_T */
typedef struct kcg_tag_p131_q_rbcTransitionOrder_T_Handover_Pkg {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg source;
  NID_LRBG nid_lrbg;
  LocWithInAcc_T_Obu_BasicTypes_Pkg location;
  kcg_bool contactLastKnownRBC;
  kcg_bool useTheShortNumberStoredOnboard;
  P131_RBCTransitionOrder_T_Packet_Types_Pkg order;
} p131_q_rbcTransitionOrder_T_Handover_Pkg;

/* TM::P131_OBU_T */
typedef struct_172277 P131_OBU_T_TM;

typedef struct kcg_tag_struct_172356 {
  kcg_bool present;
  kcg_int nid_message;
  kcg_int t_train;
  kcg_int nid_engine;
  Q_MARQSTREASON xQ_MARQSTREASON;
  kcg_int xT_TRAIN;
  kcg_int xNID_EM;
  Q_EMERGENCYSTOP xQ_EMERGENCYSTOP;
  kcg_int xNID_TEXTMESSAGE;
} struct_172356;

/* Radio_Types_Pkg::Radio_TrainTrack_Header_T */
typedef struct_172356 Radio_TrainTrack_Header_T_Radio_Types_Pkg;

/* TM_transitional::Radio_TrainTrack_Header_T */
typedef struct_172356 Radio_TrainTrack_Header_T_TM_transitional;

typedef struct kcg_tag_struct_168630 {
  kcg_bool present;
  struct_172356 header;
  outPackets_T_Common_Types_Pkg packets;
} struct_168630;

/* Radio_Types_Pkg::Radio_TrainTrack_Message_T */
typedef struct_168630 Radio_TrainTrack_Message_T_Radio_Types_Pkg;

/* TM_transitional::Radio_TrainTrack_Message_T */
typedef struct_168630 Radio_TrainTrack_Message_T_TM_transitional;

/* RCM_MsgTypes_Pkg::msgToTrack_T */
typedef struct_168630 msgToTrack_T_RCM_MsgTypes_Pkg;

typedef array_int_3_33 array_int_3_33_231[231];

typedef struct kcg_tag_struct_172526 {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg source;
  RadioMetadata_T_Common_Types_Pkg radioMetadata;
  BG_Header_T_BG_Types_Pkg BG_Common_Header;
  struct_171773 Radio_Common_Header;
  CompressedPackets_T_Common_Types_Pkg packets;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} struct_172526;

/* Common_Types_Pkg::ReceivedMessage_T */
typedef struct_172526 ReceivedMessage_T_Common_Types_Pkg;

/* InformationFilter_Pkg::TransitionBuffer_T */
typedef ReceivedMessage_T_Common_Types_Pkg TransitionBuffer_T_InformationFilter_Pkg[3];

typedef ReceivedMessage_T_Common_Types_Pkg array_170437[2];

typedef ReceivedMessage_T_Common_Types_Pkg array_170652[1];

/* RCM_MsgTypes_Pkg::msgFromTrack_T */
typedef struct_172526 msgFromTrack_T_RCM_MsgTypes_Pkg;

typedef P005_sections_array_flat_T_TM array_int_231_33[33];

typedef kcg_int array_int_24[24];

/* DATA::DMI_Dynamic_int_array_T */
typedef array_int_24 DMI_Dynamic_int_array_T_DATA;

/* TM::Array24 */
typedef array_int_24 Array24_TM;

typedef kcg_int array_int_961[961];

typedef kcg_int array_int_430[430];

typedef T_ERTMS_capabilities_Level_And_Mode_Types_Pkg array_172617[7];

typedef P021_OBU_T_TM array_172621[7];

typedef kcg_int array_int_266[266];

typedef Telegram_T_BG_Types_Pkg array_172650[7];

typedef kcg_int array_int_20[20];

typedef array_char_30 array_char_30_5[5];

typedef array_char_30_5 array_char_30_5_5[5];

typedef M_TrainTrack_Message_T_TM_radio_messages array_172678[1];

typedef LevelDecisionTableActionKind_DataDictionary_Pkg array_172689[5];

/* DataDictionary_Pkg::LevelDecisionTableType */
typedef array_172689 LevelDecisionTableType_DataDictionary_Pkg[256];

typedef kcg_int array_int_301[301];

typedef M_TrainTrack_Message_T_TM_radio_messages array_172706[97];

typedef MsgSource_T_Common_Types_Pkg array_172744[30];

typedef kcg_bool array_bool_12[12];

typedef kcg_int array_int_12[12];

typedef kcg_real array_real_12[12];

typedef kcg_char array_char_12[12];

typedef positionedBG_T_TrainPosition_Types_Pck array_172785[8];

typedef kcg_bool array_bool_8[8];

typedef kcg_int array_int_8[8];

/* TM::Array08 */
typedef array_int_8 Array08_TM;

/* TM_TrainToTrack::P011_voltage_sections_array_flat_t */
typedef array_int_8 P011_voltage_sections_array_flat_t_TM_TrainToTrack;

typedef P011_voltage_sections_array_flat_t_TM_TrainToTrack array_int_8_4[4];

/* TM_TrainToTrack::P003_TrainTrack_int */
typedef array_int_8 P003_TrainTrack_int_TM_TrainToTrack;

typedef kcg_real array_real_8[8];

typedef kcg_int array_int_496[496];

typedef Q_SCALE array_172875[50];

typedef kcg_int array_int_129[129];

/* DMI_gradientProfile_int_arrayT */
typedef array_int_129 DMI_gradientProfile_int_arrayT;

/* DATA::DMI_speedProfile_int_array_T */
typedef array_int_129 DMI_speedProfile_int_array_T_DATA;

#ifndef kcg_copy_P21_GradientProfile_T_Packet_Types_Pkg
#define kcg_copy_P21_GradientProfile_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P21_GradientProfile_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P21_GradientProfile_T_Packet_Types_Pkg */

#ifndef kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg
#define kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg)))
#endif /* kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg */

#ifndef kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
#define kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg)))
#endif /* kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifndef kcg_copy_DMI_DriverAck_T_DMI_Types_Pkg
#define kcg_copy_DMI_DriverAck_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_DriverAck_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_DriverAck_T_DMI_Types_Pkg */

#ifndef kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg
#define kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes
#define kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DataForSupervision_nextGen_t_TrackAtlasTypes)))
#endif /* kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes */

#ifndef kcg_copy_P041_OBU_T_TM
#define kcg_copy_P041_OBU_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P041_OBU_T_TM)))
#endif /* kcg_copy_P041_OBU_T_TM */

#ifndef kcg_copy_P027V1_section_enum_T_TM_baseline2
#define kcg_copy_P027V1_section_enum_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P027V1_section_enum_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_section_enum_T_TM_baseline2 */

#ifndef kcg_copy_P005_OBU_T_TM
#define kcg_copy_P005_OBU_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P005_OBU_T_TM)))
#endif /* kcg_copy_P005_OBU_T_TM */

#ifndef kcg_copy_nothing_to_resume_profile_follow_T_TIU_Types_Pkg
#define kcg_copy_nothing_to_resume_profile_follow_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (nothing_to_resume_profile_follow_T_TIU_Types_Pkg)))
#endif /* kcg_copy_nothing_to_resume_profile_follow_T_TIU_Types_Pkg */

#ifndef kcg_copy_P045_trackside_int_T_TM
#define kcg_copy_P045_trackside_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P045_trackside_int_T_TM)))
#endif /* kcg_copy_P045_trackside_int_T_TM */

#ifndef kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2
#define kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P027V1_section_enum_qdiff_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2 */

#ifndef kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg
#define kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg)))
#endif /* kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg */

#ifndef kcg_copy_Endtimer_t_TrackAtlasTypes
#define kcg_copy_Endtimer_t_TrackAtlasTypes(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Endtimer_t_TrackAtlasTypes)))
#endif /* kcg_copy_Endtimer_t_TrackAtlasTypes */

#ifndef kcg_copy_A_gradient_element_t_SDM_GradientAcceleration_types
#define kcg_copy_A_gradient_element_t_SDM_GradientAcceleration_types(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (A_gradient_element_t_SDM_GradientAcceleration_types)))
#endif /* kcg_copy_A_gradient_element_t_SDM_GradientAcceleration_types */

#ifndef kcg_copy_struct_168546
#define kcg_copy_struct_168546(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_168546)))
#endif /* kcg_copy_struct_168546 */

#ifndef kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg
#define kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (centerOfBalisePosition_T_BG_Types_Pkg)))
#endif /* kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg */

#ifndef kcg_copy_RadioTrackTrainMessageQueueEntry_T
#define kcg_copy_RadioTrackTrainMessageQueueEntry_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RadioTrackTrainMessageQueueEntry_T)))
#endif /* kcg_copy_RadioTrackTrainMessageQueueEntry_T */

#ifndef kcg_copy_TrackSectionData_T_InfraLib
#define kcg_copy_TrackSectionData_T_InfraLib(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TrackSectionData_T_InfraLib)))
#endif /* kcg_copy_TrackSectionData_T_InfraLib */

#ifndef kcg_copy_a_Brake_t_SDMConversionModelPkg
#define kcg_copy_a_Brake_t_SDMConversionModelPkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (a_Brake_t_SDMConversionModelPkg)))
#endif /* kcg_copy_a_Brake_t_SDMConversionModelPkg */

#ifndef kcg_copy_RadioTrackTrainMessageQueue_T
#define kcg_copy_RadioTrackTrainMessageQueue_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RadioTrackTrainMessageQueue_T)))
#endif /* kcg_copy_RadioTrackTrainMessageQueue_T */

#ifndef kcg_copy_CompressedRadioMessage_TM
#define kcg_copy_CompressedRadioMessage_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (CompressedRadioMessage_TM)))
#endif /* kcg_copy_CompressedRadioMessage_TM */

#ifndef kcg_copy_CompressedBaliseMessage_TM
#define kcg_copy_CompressedBaliseMessage_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (CompressedBaliseMessage_TM)))
#endif /* kcg_copy_CompressedBaliseMessage_TM */

#ifndef kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg
#define kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (mobileRegistrationContext_T_RCM_Types_Pkg)))
#endif /* kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg */

#ifndef kcg_copy_morcStatus_T_RCM_Session_Types_Pkg
#define kcg_copy_morcStatus_T_RCM_Session_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (morcStatus_T_RCM_Session_Types_Pkg)))
#endif /* kcg_copy_morcStatus_T_RCM_Session_Types_Pkg */

#ifndef kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg
#define kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg)))
#endif /* kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg */

#ifndef kcg_copy_struct_168630
#define kcg_copy_struct_168630(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_168630)))
#endif /* kcg_copy_struct_168630 */

#ifndef kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_TrainLocations_real_T_SDM_Types_Pkg
#define kcg_copy_TrainLocations_real_T_SDM_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TrainLocations_real_T_SDM_Types_Pkg)))
#endif /* kcg_copy_TrainLocations_real_T_SDM_Types_Pkg */

#ifndef kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg
#define kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg)))
#endif /* kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg */

#ifndef kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg
#define kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P137_StopIfInStaffResponsible_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg */

#ifndef kcg_copy_mv_Map_t_SDMConversionModelPkg
#define kcg_copy_mv_Map_t_SDMConversionModelPkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (mv_Map_t_SDMConversionModelPkg)))
#endif /* kcg_copy_mv_Map_t_SDMConversionModelPkg */

#ifndef kcg_copy_DMI_level_T_DMI_Types_Pkg
#define kcg_copy_DMI_level_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_level_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_level_T_DMI_Types_Pkg */

#ifndef kcg_copy_sNID_RADIO_T_Packet_TrainTypes_Pkg
#define kcg_copy_sNID_RADIO_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (sNID_RADIO_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_sNID_RADIO_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_MetadataElement_T_Common_Types_Pkg
#define kcg_copy_MetadataElement_T_Common_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MetadataElement_T_Common_Types_Pkg)))
#endif /* kcg_copy_MetadataElement_T_Common_Types_Pkg */

#ifndef kcg_copy_DiagMsg_T_RBC_Diagnostic_Pkg
#define kcg_copy_DiagMsg_T_RBC_Diagnostic_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DiagMsg_T_RBC_Diagnostic_Pkg)))
#endif /* kcg_copy_DiagMsg_T_RBC_Diagnostic_Pkg */

#ifndef kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2
#define kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P027V1_OBU_body_enum_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2 */

#ifndef kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_From_Localisation_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg
#define kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_DriverRequest_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg */

#ifndef kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg
#define kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (mobileConnectionContext_T_RCM_Types_Pkg)))
#endif /* kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg */

#ifndef kcg_copy_trainDataStatus_T_trainData_Types_pkg
#define kcg_copy_trainDataStatus_T_trainData_Types_pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (trainDataStatus_T_trainData_Types_pkg)))
#endif /* kcg_copy_trainDataStatus_T_trainData_Types_pkg */

#ifndef kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg
#define kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P41_LevelTransitionOrder_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg */

#ifndef kcg_copy_NationalParams_T
#define kcg_copy_NationalParams_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (NationalParams_T)))
#endif /* kcg_copy_NationalParams_T */

#ifndef kcg_copy_struct_168859
#define kcg_copy_struct_168859(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_168859)))
#endif /* kcg_copy_struct_168859 */

#ifndef kcg_copy_M_008_T_TM_radio_messages
#define kcg_copy_M_008_T_TM_radio_messages(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_008_T_TM_radio_messages)))
#endif /* kcg_copy_M_008_T_TM_radio_messages */

#ifndef kcg_copy_struct_168880
#define kcg_copy_struct_168880(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_168880)))
#endif /* kcg_copy_struct_168880 */

#ifndef kcg_copy_M_032_int_T_TM_radio_messages
#define kcg_copy_M_032_int_T_TM_radio_messages(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_032_int_T_TM_radio_messages)))
#endif /* kcg_copy_M_032_int_T_TM_radio_messages */

#ifndef kcg_copy_M_008_int_T_TM_radio_messages
#define kcg_copy_M_008_int_T_TM_radio_messages(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_008_int_T_TM_radio_messages)))
#endif /* kcg_copy_M_008_int_T_TM_radio_messages */

#ifndef kcg_copy_P057_trackside_int_T_TM
#define kcg_copy_P057_trackside_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P057_trackside_int_T_TM)))
#endif /* kcg_copy_P057_trackside_int_T_TM */

#ifndef kcg_copy_P005_section_int_T_TM
#define kcg_copy_P005_section_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P005_section_int_T_TM)))
#endif /* kcg_copy_P005_section_int_T_TM */

#ifndef kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_T_trac_t_TargetLimits_Pkg
#define kcg_copy_T_trac_t_TargetLimits_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_trac_t_TargetLimits_Pkg)))
#endif /* kcg_copy_T_trac_t_TargetLimits_Pkg */

#ifndef kcg_copy_MAReqParams_T
#define kcg_copy_MAReqParams_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MAReqParams_T)))
#endif /* kcg_copy_MAReqParams_T */

#ifndef kcg_copy_TIU_commandStatus_T_TIU_Types_Pkg
#define kcg_copy_TIU_commandStatus_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TIU_commandStatus_T_TIU_Types_Pkg)))
#endif /* kcg_copy_TIU_commandStatus_T_TIU_Types_Pkg */

#ifndef kcg_copy_struct_169021
#define kcg_copy_struct_169021(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_169021)))
#endif /* kcg_copy_struct_169021 */

#ifndef kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg
#define kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_To_Modes_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg */

#ifndef kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store
#define kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store)))
#endif /* kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store */

#ifndef kcg_copy_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg
#define kcg_copy_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg)))
#endif /* kcg_copy_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg */

#ifndef kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_Target_real_T_TargetManagement_types
#define kcg_copy_Target_real_T_TargetManagement_types(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Target_real_T_TargetManagement_types)))
#endif /* kcg_copy_Target_real_T_TargetManagement_types */

#ifndef kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg
#define kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (safeRadioConnectionIndication_T_RCM_Session_Types_Pkg)))
#endif /* kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg */

#ifndef kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
#define kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg)))
#endif /* kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifndef kcg_copy_P041_section_int_T_TM
#define kcg_copy_P041_section_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P041_section_int_T_TM)))
#endif /* kcg_copy_P041_section_int_T_TM */

#ifndef kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_M_132_T_TM_radio_messages
#define kcg_copy_M_132_T_TM_radio_messages(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_132_T_TM_radio_messages)))
#endif /* kcg_copy_M_132_T_TM_radio_messages */

#ifndef kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_To_BG_Management_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg
#define kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (extractTargetsMRSPACC_TargetManagement_pkg)))
#endif /* kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg */

#ifndef kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg
#define kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_LevelTansitionInfo_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_BG_Message_T_BG_Types_Pkg
#define kcg_copy_BG_Message_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (BG_Message_T_BG_Types_Pkg)))
#endif /* kcg_copy_BG_Message_T_BG_Types_Pkg */

#ifndef kcg_copy_Telegram_T_BG_Types_Pkg
#define kcg_copy_Telegram_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Telegram_T_BG_Types_Pkg)))
#endif /* kcg_copy_Telegram_T_BG_Types_Pkg */

#ifndef kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg
#define kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg)))
#endif /* kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg */

#ifndef kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg
#define kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg)))
#endif /* kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifndef kcg_copy_struct_169236
#define kcg_copy_struct_169236(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_169236)))
#endif /* kcg_copy_struct_169236 */

#ifndef kcg_copy_ParabolaArc_T_CalcBrakingCurves_types
#define kcg_copy_ParabolaArc_T_CalcBrakingCurves_types(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (ParabolaArc_T_CalcBrakingCurves_types)))
#endif /* kcg_copy_ParabolaArc_T_CalcBrakingCurves_types */

#ifndef kcg_copy_DMI_train_length_T_DMI_Types_Pkg
#define kcg_copy_DMI_train_length_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_train_length_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_train_length_T_DMI_Types_Pkg */

#ifndef kcg_copy_IterPacket58_T_Packet_Types_Pkg
#define kcg_copy_IterPacket58_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (IterPacket58_T_Packet_Types_Pkg)))
#endif /* kcg_copy_IterPacket58_T_Packet_Types_Pkg */

#ifndef kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg
#define kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg)))
#endif /* kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg */

#ifndef kcg_copy_P046_section_int_T_TM
#define kcg_copy_P046_section_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P046_section_int_T_TM)))
#endif /* kcg_copy_P046_section_int_T_TM */

#ifndef kcg_copy_TargetCollection_T_TargetManagement_types
#define kcg_copy_TargetCollection_T_TargetManagement_types(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TargetCollection_T_TargetManagement_types)))
#endif /* kcg_copy_TargetCollection_T_TargetManagement_types */

#ifndef kcg_copy_probesBalises_T_xdebugSupport_Pkg
#define kcg_copy_probesBalises_T_xdebugSupport_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (probesBalises_T_xdebugSupport_Pkg)))
#endif /* kcg_copy_probesBalises_T_xdebugSupport_Pkg */

#ifndef kcg_copy_DynamicConfig_T
#define kcg_copy_DynamicConfig_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DynamicConfig_T)))
#endif /* kcg_copy_DynamicConfig_T */

#ifndef kcg_copy_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_nationValuesForDMI_T_DMI_Types_Pkg
#define kcg_copy_nationValuesForDMI_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (nationValuesForDMI_T_DMI_Types_Pkg)))
#endif /* kcg_copy_nationValuesForDMI_T_DMI_Types_Pkg */

#ifndef kcg_copy_Target_T_TargetManagement_types
#define kcg_copy_Target_T_TargetManagement_types(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Target_T_TargetManagement_types)))
#endif /* kcg_copy_Target_T_TargetManagement_types */

#ifndef kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
#define kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg)))
#endif /* kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifndef kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg
#define kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg)))
#endif /* kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifndef kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg
#define kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_AcknoledgementRequest_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_struct_169401
#define kcg_copy_struct_169401(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_169401)))
#endif /* kcg_copy_struct_169401 */

#ifndef kcg_copy_passedBG_T_BG_Types_Pkg
#define kcg_copy_passedBG_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (passedBG_T_BG_Types_Pkg)))
#endif /* kcg_copy_passedBG_T_BG_Types_Pkg */

#ifndef kcg_copy_trainData_Events_T_trainData_Types_pkg
#define kcg_copy_trainData_Events_T_trainData_Types_pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (trainData_Events_T_trainData_Types_pkg)))
#endif /* kcg_copy_trainData_Events_T_trainData_Types_pkg */

#ifndef kcg_copy_struct_169455
#define kcg_copy_struct_169455(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_169455)))
#endif /* kcg_copy_struct_169455 */

#ifndef kcg_copy_P046_section_enum_T_TM
#define kcg_copy_P046_section_enum_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P046_section_enum_T_TM)))
#endif /* kcg_copy_P046_section_enum_T_TM */

#ifndef kcg_copy_struct_169478
#define kcg_copy_struct_169478(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_169478)))
#endif /* kcg_copy_struct_169478 */

#ifndef kcg_copy_MRSP_reduction_acc_TA_Export
#define kcg_copy_MRSP_reduction_acc_TA_Export(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MRSP_reduction_acc_TA_Export)))
#endif /* kcg_copy_MRSP_reduction_acc_TA_Export */

#ifndef kcg_copy_DP_or_OL_t_TrackAtlasTypes
#define kcg_copy_DP_or_OL_t_TrackAtlasTypes(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DP_or_OL_t_TrackAtlasTypes)))
#endif /* kcg_copy_DP_or_OL_t_TrackAtlasTypes */

#ifndef kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg
#define kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RadioManagement_T_API_RadioCommunication_Pkg)))
#endif /* kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg */

#ifndef kcg_copy_av_MergedMap_t_SDMConversionModelPkg
#define kcg_copy_av_MergedMap_t_SDMConversionModelPkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (av_MergedMap_t_SDMConversionModelPkg)))
#endif /* kcg_copy_av_MergedMap_t_SDMConversionModelPkg */

#ifndef kcg_copy_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg
#define kcg_copy_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg */

#ifndef kcg_copy_Diff_T_Packet_Types_Pkg
#define kcg_copy_Diff_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Diff_T_Packet_Types_Pkg)))
#endif /* kcg_copy_Diff_T_Packet_Types_Pkg */

#ifndef kcg_copy_CompressedPackets_T_Common_Types_Pkg
#define kcg_copy_CompressedPackets_T_Common_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (CompressedPackets_T_Common_Types_Pkg)))
#endif /* kcg_copy_CompressedPackets_T_Common_Types_Pkg */

#ifndef kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg
#define kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (msgToTrackTriggers_T_RCM_MsgTypes_Pkg)))
#endif /* kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg */

#ifndef kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types
#define kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Gradient_section_real_t_SDM_GradientAcceleration_types)))
#endif /* kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types */

#ifndef kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg
#define kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PT4_ErrorReporting_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_DMI_trackConditionElement_T_DMI_Types_Pkg
#define kcg_copy_DMI_trackConditionElement_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_trackConditionElement_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_trackConditionElement_T_DMI_Types_Pkg */

#ifndef kcg_copy_struct_169584
#define kcg_copy_struct_169584(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_169584)))
#endif /* kcg_copy_struct_169584 */

#ifndef kcg_copy_struct_169597
#define kcg_copy_struct_169597(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_169597)))
#endif /* kcg_copy_struct_169597 */

#ifndef kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg
#define kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Type_I_train_commands_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg */

#ifndef kcg_copy_connection_ids_T_Handover_Pkg
#define kcg_copy_connection_ids_T_Handover_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (connection_ids_T_Handover_Pkg)))
#endif /* kcg_copy_connection_ids_T_Handover_Pkg */

#ifndef kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
#define kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg)))
#endif /* kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */

#ifndef kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2
#define kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P027V1_section_int_qdiff_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2 */

#ifndef kcg_copy_struct_169664
#define kcg_copy_struct_169664(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_169664)))
#endif /* kcg_copy_struct_169664 */

#ifndef kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg
#define kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg)))
#endif /* kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg */

#ifndef kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_CurveCollection_T_CalcBrakingCurves_types
#define kcg_copy_CurveCollection_T_CalcBrakingCurves_types(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (CurveCollection_T_CalcBrakingCurves_types)))
#endif /* kcg_copy_CurveCollection_T_CalcBrakingCurves_types */

#ifndef kcg_copy_SSP_section_t_TA_MRSP
#define kcg_copy_SSP_section_t_TA_MRSP(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SSP_section_t_TA_MRSP)))
#endif /* kcg_copy_SSP_section_t_TA_MRSP */

#ifndef kcg_copy_P021_section_int_T_TM
#define kcg_copy_P021_section_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P021_section_int_T_TM)))
#endif /* kcg_copy_P021_section_int_T_TM */

#ifndef kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg
#define kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (mobileRegistrationCmd_T_RCM_Types_Pkg)))
#endif /* kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg */

#ifndef kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg
#define kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_AnnouncedLevel_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_T_Data_From_STM_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_From_STM_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_From_STM_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_From_STM_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_AccuDistanceProfileMA_TA_MA
#define kcg_copy_AccuDistanceProfileMA_TA_MA(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (AccuDistanceProfileMA_TA_MA)))
#endif /* kcg_copy_AccuDistanceProfileMA_TA_MA */

#ifndef kcg_copy_P041_section_enum_T_TM
#define kcg_copy_P041_section_enum_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P041_section_enum_T_TM)))
#endif /* kcg_copy_P041_section_enum_T_TM */

#ifndef kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg
#define kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg */

#ifndef kcg_copy_struct_169865
#define kcg_copy_struct_169865(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_169865)))
#endif /* kcg_copy_struct_169865 */

#ifndef kcg_copy_nvkvint_T_Packet_Types_Pkg
#define kcg_copy_nvkvint_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (nvkvint_T_Packet_Types_Pkg)))
#endif /* kcg_copy_nvkvint_T_Packet_Types_Pkg */

#ifndef kcg_copy_P046_OBU_T_TM
#define kcg_copy_P046_OBU_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P046_OBU_T_TM)))
#endif /* kcg_copy_P046_OBU_T_TM */

#ifndef kcg_copy_P027V1_OBU_T_TM_baseline2
#define kcg_copy_P027V1_OBU_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P027V1_OBU_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_OBU_T_TM_baseline2 */

#ifndef kcg_copy_bec_t_TargetLimits_Pkg
#define kcg_copy_bec_t_TargetLimits_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (bec_t_TargetLimits_Pkg)))
#endif /* kcg_copy_bec_t_TargetLimits_Pkg */

#ifndef kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg
#define kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg)))
#endif /* kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg */

#ifndef kcg_copy_mobileHWStatus_Type_MoRC_Pck
#define kcg_copy_mobileHWStatus_Type_MoRC_Pck(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (mobileHWStatus_Type_MoRC_Pck)))
#endif /* kcg_copy_mobileHWStatus_Type_MoRC_Pck */

#ifndef kcg_copy_struct_169965
#define kcg_copy_struct_169965(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_169965)))
#endif /* kcg_copy_struct_169965 */

#ifndef kcg_copy_struct_169971
#define kcg_copy_struct_169971(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_169971)))
#endif /* kcg_copy_struct_169971 */

#ifndef kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg
#define kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TelegramStore_T_Receive_TrackSide_Msg_Pkg)))
#endif /* kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg */

#ifndef kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg
#define kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (ReportedBG_T_ProvidePositionReport_Pkg)))
#endif /* kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg */

#ifndef kcg_copy_radioNetWorkIDs_T_MoRC_Pck
#define kcg_copy_radioNetWorkIDs_T_MoRC_Pck(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (radioNetWorkIDs_T_MoRC_Pck)))
#endif /* kcg_copy_radioNetWorkIDs_T_MoRC_Pck */

#ifndef kcg_copy_Change_traction_system_T_TIU_Types_Pkg
#define kcg_copy_Change_traction_system_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Change_traction_system_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Change_traction_system_T_TIU_Types_Pkg */

#ifndef kcg_copy_Change_of_allowed_current_consumption_T_TIU_Types_Pkg
#define kcg_copy_Change_of_allowed_current_consumption_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Change_of_allowed_current_consumption_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Change_of_allowed_current_consumption_T_TIU_Types_Pkg */

#ifndef kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg
#define kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg */

#ifndef kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg
#define kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Level_Data_T_DMI_Messages_Bothways_Pkg)))
#endif /* kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg */

#ifndef kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_struct_170025
#define kcg_copy_struct_170025(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_170025)))
#endif /* kcg_copy_struct_170025 */

#ifndef kcg_copy_P005_TM_TrainToTrack
#define kcg_copy_P005_TM_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P005_TM_TrainToTrack)))
#endif /* kcg_copy_P005_TM_TrainToTrack */

#ifndef kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg
#define kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TIU_trainStatus_T_TIU_Types_Pkg)))
#endif /* kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg */

#ifndef kcg_copy_P058_section_enum_T_TM
#define kcg_copy_P058_section_enum_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P058_section_enum_T_TM)))
#endif /* kcg_copy_P058_section_enum_T_TM */

#ifndef kcg_copy_DMI_gradientProfile_T_DMI_Types_Pkg
#define kcg_copy_DMI_gradientProfile_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_gradientProfile_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_gradientProfile_T_DMI_Types_Pkg */

#ifndef kcg_copy_DMI_trackCondition_T_DMI_Types_Pkg
#define kcg_copy_DMI_trackCondition_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_trackCondition_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_trackCondition_T_DMI_Types_Pkg */

#ifndef kcg_copy_DMI_speedProfile_T_DMI_Types_Pkg
#define kcg_copy_DMI_speedProfile_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_speedProfile_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_speedProfile_T_DMI_Types_Pkg */

#ifndef kcg_copy_DMI_LevelList_T_DMI_Types_Pkg
#define kcg_copy_DMI_LevelList_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_LevelList_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_LevelList_T_DMI_Types_Pkg */

#ifndef kcg_copy_MRSP_internal_section_T_TargetManagement_types
#define kcg_copy_MRSP_internal_section_T_TargetManagement_types(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MRSP_internal_section_T_TargetManagement_types)))
#endif /* kcg_copy_MRSP_internal_section_T_TargetManagement_types */

#ifndef kcg_copy_R_data_internal_T_InfraLib
#define kcg_copy_R_data_internal_T_InfraLib(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (R_data_internal_T_InfraLib)))
#endif /* kcg_copy_R_data_internal_T_InfraLib */

#ifndef kcg_copy_struct_170132
#define kcg_copy_struct_170132(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_170132)))
#endif /* kcg_copy_struct_170132 */

#ifndef kcg_copy_P044_TM_TrainToTrack
#define kcg_copy_P044_TM_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P044_TM_TrainToTrack)))
#endif /* kcg_copy_P044_TM_TrainToTrack */

#ifndef kcg_copy_av_Map_t_SDMConversionModelPkg
#define kcg_copy_av_Map_t_SDMConversionModelPkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (av_Map_t_SDMConversionModelPkg)))
#endif /* kcg_copy_av_Map_t_SDMConversionModelPkg */

#ifndef kcg_copy_struct_170172
#define kcg_copy_struct_170172(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_170172)))
#endif /* kcg_copy_struct_170172 */

#ifndef kcg_copy_P003_TM_TrainToTrack
#define kcg_copy_P003_TM_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P003_TM_TrainToTrack)))
#endif /* kcg_copy_P003_TM_TrainToTrack */

#ifndef kcg_copy_SSP_T_Packet_Types_Pkg
#define kcg_copy_SSP_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SSP_T_Packet_Types_Pkg)))
#endif /* kcg_copy_SSP_T_Packet_Types_Pkg */

#ifndef kcg_copy_nvkvintset_T_Packet_Types_Pkg
#define kcg_copy_nvkvintset_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (nvkvintset_T_Packet_Types_Pkg)))
#endif /* kcg_copy_nvkvintset_T_Packet_Types_Pkg */

#ifndef kcg_copy_struct_170221
#define kcg_copy_struct_170221(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_170221)))
#endif /* kcg_copy_struct_170221 */

#ifndef kcg_copy_t_Brake_t_SDMModelPkg
#define kcg_copy_t_Brake_t_SDMModelPkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (t_Brake_t_SDMModelPkg)))
#endif /* kcg_copy_t_Brake_t_SDMModelPkg */

#ifndef kcg_copy_M_current_T_TIU_Types_Pkg
#define kcg_copy_M_current_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_current_T_TIU_Types_Pkg)))
#endif /* kcg_copy_M_current_T_TIU_Types_Pkg */

#ifndef kcg_copy_P009_TM_TrainToTrack
#define kcg_copy_P009_TM_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P009_TM_TrainToTrack)))
#endif /* kcg_copy_P009_TM_TrainToTrack */

#ifndef kcg_copy_TIU_Output_msg_API_TIU_Pkg
#define kcg_copy_TIU_Output_msg_API_TIU_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TIU_Output_msg_API_TIU_Pkg)))
#endif /* kcg_copy_TIU_Output_msg_API_TIU_Pkg */

#ifndef kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg
#define kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PT0_PositionReport_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg
#define kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_SessionManagement_T
#define kcg_copy_SessionManagement_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SessionManagement_T)))
#endif /* kcg_copy_SessionManagement_T */

#ifndef kcg_copy_TIU_Input_msg_API_TIU_Pkg
#define kcg_copy_TIU_Input_msg_API_TIU_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TIU_Input_msg_API_TIU_Pkg)))
#endif /* kcg_copy_TIU_Input_msg_API_TIU_Pkg */

#ifndef kcg_copy_MsgStructure
#define kcg_copy_MsgStructure(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MsgStructure)))
#endif /* kcg_copy_MsgStructure */

#ifndef kcg_copy_Passenger_door_control_info_T_TIU_Types_Pkg
#define kcg_copy_Passenger_door_control_info_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Passenger_door_control_info_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Passenger_door_control_info_T_TIU_Types_Pkg */

#ifndef kcg_copy_Brake_command_T_TIU_Types_Pkg
#define kcg_copy_Brake_command_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Brake_command_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Brake_command_T_TIU_Types_Pkg */

#ifndef kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_P004_TM_TrainToTrack
#define kcg_copy_P004_TM_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P004_TM_TrainToTrack)))
#endif /* kcg_copy_P004_TM_TrainToTrack */

#ifndef kcg_copy_ASafe_T_CalcBrakingCurves_types
#define kcg_copy_ASafe_T_CalcBrakingCurves_types(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (ASafe_T_CalcBrakingCurves_types)))
#endif /* kcg_copy_ASafe_T_CalcBrakingCurves_types */

#ifndef kcg_copy_P027V1_section_int_T_TM_baseline2
#define kcg_copy_P027V1_section_int_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P027V1_section_int_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_section_int_T_TM_baseline2 */

#ifndef kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg
#define kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (ModeLevel2PositionReport_T_ProvidePositionReport_Pkg)))
#endif /* kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg */

#ifndef kcg_copy_P021_OBU_T_TM
#define kcg_copy_P021_OBU_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P021_OBU_T_TM)))
#endif /* kcg_copy_P021_OBU_T_TM */

#ifndef kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg
#define kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PT5_TrainRunningNumber_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_M_TrainTrack_Message_T_TM_radio_messages
#define kcg_copy_M_TrainTrack_Message_T_TM_radio_messages(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_TrainTrack_Message_T_TM_radio_messages)))
#endif /* kcg_copy_M_TrainTrack_Message_T_TM_radio_messages */

#ifndef kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Reversing_Data_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg
#define kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (ErrorMessage_T_ProvidePositionReport_Pkg)))
#endif /* kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg */

#ifndef kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg
#define kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TrainToTrackStatus_T_BG_Types_Pkg)))
#endif /* kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg */

#ifndef kcg_copy_P021_section_enum_T_TM
#define kcg_copy_P021_section_enum_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P021_section_enum_T_TM)))
#endif /* kcg_copy_P021_section_enum_T_TM */

#ifndef kcg_copy_B_data_internal_T_InfraLib
#define kcg_copy_B_data_internal_T_InfraLib(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (B_data_internal_T_InfraLib)))
#endif /* kcg_copy_B_data_internal_T_InfraLib */

#ifndef kcg_copy_struct_170518
#define kcg_copy_struct_170518(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_170518)))
#endif /* kcg_copy_struct_170518 */

#ifndef kcg_copy_TSM_revokeCond_T_SDM_Commands_Pkg
#define kcg_copy_TSM_revokeCond_T_SDM_Commands_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TSM_revokeCond_T_SDM_Commands_Pkg)))
#endif /* kcg_copy_TSM_revokeCond_T_SDM_Commands_Pkg */

#ifndef kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types
#define kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (ParabolaCurve_T_CalcBrakingCurves_types)))
#endif /* kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types */

#ifndef kcg_copy_movementAuthorityForDMI_T_DMI_Types_Pkg
#define kcg_copy_movementAuthorityForDMI_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (movementAuthorityForDMI_T_DMI_Types_Pkg)))
#endif /* kcg_copy_movementAuthorityForDMI_T_DMI_Types_Pkg */

#ifndef kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes
#define kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DataForModeAndLevel_t_TrackAtlasTypes)))
#endif /* kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes */

#ifndef kcg_copy_M_146_T_TM_radio_messages
#define kcg_copy_M_146_T_TM_radio_messages(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_146_T_TM_radio_messages)))
#endif /* kcg_copy_M_146_T_TM_radio_messages */

#ifndef kcg_copy_struct_170588
#define kcg_copy_struct_170588(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_170588)))
#endif /* kcg_copy_struct_170588 */

#ifndef kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes
#define kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MovementAuthoritySection_t_TrackAtlasTypes)))
#endif /* kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes */

#ifndef kcg_copy_nvkrint_T_Packet_Types_Pkg
#define kcg_copy_nvkrint_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (nvkrint_T_Packet_Types_Pkg)))
#endif /* kcg_copy_nvkrint_T_Packet_Types_Pkg */

#ifndef kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Mode_Level_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_P137_trackside_int_T_TM
#define kcg_copy_P137_trackside_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P137_trackside_int_T_TM)))
#endif /* kcg_copy_P137_trackside_int_T_TM */

#ifndef kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Mode_Profile_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_trainData_internal_t_SDM_Types_Pkg
#define kcg_copy_trainData_internal_t_SDM_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (trainData_internal_t_SDM_Types_Pkg)))
#endif /* kcg_copy_trainData_internal_t_SDM_Types_Pkg */

#ifndef kcg_copy_EOA_real_T_TargetManagement_types
#define kcg_copy_EOA_real_T_TargetManagement_types(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (EOA_real_T_TargetManagement_types)))
#endif /* kcg_copy_EOA_real_T_TargetManagement_types */

#ifndef kcg_copy_P058_section_int_T_TM
#define kcg_copy_P058_section_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P058_section_int_T_TM)))
#endif /* kcg_copy_P058_section_int_T_TM */

#ifndef kcg_copy_M_voltage_T_TIU_Types_Pkg
#define kcg_copy_M_voltage_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_voltage_T_TIU_Types_Pkg)))
#endif /* kcg_copy_M_voltage_T_TIU_Types_Pkg */

#ifndef kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg
#define kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_struct_170763
#define kcg_copy_struct_170763(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_170763)))
#endif /* kcg_copy_struct_170763 */

#ifndef kcg_copy_struct_170773
#define kcg_copy_struct_170773(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_170773)))
#endif /* kcg_copy_struct_170773 */

#ifndef kcg_copy_trainData_Trigger_T_trainData_Types_pkg
#define kcg_copy_trainData_Trigger_T_trainData_Types_pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (trainData_Trigger_T_trainData_Types_pkg)))
#endif /* kcg_copy_trainData_Trigger_T_trainData_Types_pkg */

#ifndef kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_Isolation_Status_T_TIU_Types_Pkg
#define kcg_copy_Isolation_Status_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Isolation_Status_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Isolation_Status_T_TIU_Types_Pkg */

#ifndef kcg_copy_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_From_F2_functions_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_ACC_SDM_GradientAcceleration_Pkg
#define kcg_copy_ACC_SDM_GradientAcceleration_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (ACC_SDM_GradientAcceleration_Pkg)))
#endif /* kcg_copy_ACC_SDM_GradientAcceleration_Pkg */

#ifndef kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg
#define kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (sessionStatus_T_RCM_Session_Types_Pkg)))
#endif /* kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg */

#ifndef kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg
#define kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (BCAccumulator_type_CalcBrakingCurves_Pkg)))
#endif /* kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg */

#ifndef kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg
#define kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TrackSide_ForCheck_T_Common_Types_Pkg)))
#endif /* kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg */

#ifndef kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
#define kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg)))
#endif /* kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */

#ifndef kcg_copy_p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg
#define kcg_copy_p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg)))
#endif /* kcg_copy_p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg */

#ifndef kcg_copy_API_TelegramHeader_T_API_Msg_Pkg
#define kcg_copy_API_TelegramHeader_T_API_Msg_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (API_TelegramHeader_T_API_Msg_Pkg)))
#endif /* kcg_copy_API_TelegramHeader_T_API_Msg_Pkg */

#ifndef kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg
#define kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (API_RadioMsgHeader_T_API_Msg_Pkg)))
#endif /* kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg */

#ifndef kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg
#define kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (OdometrySpeeds_T_Obu_BasicTypes_Pkg)))
#endif /* kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg */

#ifndef kcg_copy_Gradient_section_t_TrackAtlasTypes
#define kcg_copy_Gradient_section_t_TrackAtlasTypes(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Gradient_section_t_TrackAtlasTypes)))
#endif /* kcg_copy_Gradient_section_t_TrackAtlasTypes */

#ifndef kcg_copy_dmiOutputs_T_manage_DMI_Output_Pkg
#define kcg_copy_dmiOutputs_T_manage_DMI_Output_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (dmiOutputs_T_manage_DMI_Output_Pkg)))
#endif /* kcg_copy_dmiOutputs_T_manage_DMI_Output_Pkg */

#ifndef kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg
#define kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (OdometryLocations_T_Obu_BasicTypes_Pkg)))
#endif /* kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg */

#ifndef kcg_copy_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_T_Data_From_DMI_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_From_DMI_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_From_DMI_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_From_DMI_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_TSM_triggerCond_T_SDM_Commands_Pkg
#define kcg_copy_TSM_triggerCond_T_SDM_Commands_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TSM_triggerCond_T_SDM_Commands_Pkg)))
#endif /* kcg_copy_TSM_triggerCond_T_SDM_Commands_Pkg */

#ifndef kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg
#define kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (speedSupervisionForDMI_T_DMI_Types_Pkg)))
#endif /* kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg */

#ifndef kcg_copy_Speeds_T_SDM_Types_Pkg
#define kcg_copy_Speeds_T_SDM_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Speeds_T_SDM_Types_Pkg)))
#endif /* kcg_copy_Speeds_T_SDM_Types_Pkg */

#ifndef kcg_copy_SDM_Locations_T_SDM_Types_Pkg
#define kcg_copy_SDM_Locations_T_SDM_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SDM_Locations_T_SDM_Types_Pkg)))
#endif /* kcg_copy_SDM_Locations_T_SDM_Types_Pkg */

#ifndef kcg_copy_MA_section_real_T_TargetManagement_types
#define kcg_copy_MA_section_real_T_TargetManagement_types(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MA_section_real_T_TargetManagement_types)))
#endif /* kcg_copy_MA_section_real_T_TargetManagement_types */

#ifndef kcg_copy_SDM_Commands_T_SDM_Types_Pkg
#define kcg_copy_SDM_Commands_T_SDM_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SDM_Commands_T_SDM_Types_Pkg)))
#endif /* kcg_copy_SDM_Commands_T_SDM_Types_Pkg */

#ifndef kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg
#define kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P58_PositionReportParameters_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg */

#ifndef kcg_copy_P003_OBU_T_TM
#define kcg_copy_P003_OBU_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P003_OBU_T_TM)))
#endif /* kcg_copy_P003_OBU_T_TM */

#ifndef kcg_copy_P003V1_OBU_T_TM_baseline2
#define kcg_copy_P003V1_OBU_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P003V1_OBU_T_TM_baseline2)))
#endif /* kcg_copy_P003V1_OBU_T_TM_baseline2 */

#ifndef kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_P012_OBU_T_TM
#define kcg_copy_P012_OBU_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P012_OBU_T_TM)))
#endif /* kcg_copy_P012_OBU_T_TM */

#ifndef kcg_copy_P15_Level23MovementAuthority_T_Packet_Types_Pkg
#define kcg_copy_P15_Level23MovementAuthority_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P15_Level23MovementAuthority_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P15_Level23MovementAuthority_T_Packet_Types_Pkg */

#ifndef kcg_copy_P12_Level1MovementAuthority_T_Packet_Types_Pkg
#define kcg_copy_P12_Level1MovementAuthority_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P12_Level1MovementAuthority_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P12_Level1MovementAuthority_T_Packet_Types_Pkg */

#ifndef kcg_copy_P015_OBU_T_TM
#define kcg_copy_P015_OBU_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P015_OBU_T_TM)))
#endif /* kcg_copy_P015_OBU_T_TM */

#ifndef kcg_copy_MovementAuthority_t_TrackAtlasTypes
#define kcg_copy_MovementAuthority_t_TrackAtlasTypes(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MovementAuthority_t_TrackAtlasTypes)))
#endif /* kcg_copy_MovementAuthority_t_TrackAtlasTypes */

#ifndef kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck
#define kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (trainPositionInfo_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_P3_NationalValues_T_Packet_Types_Pkg
#define kcg_copy_P3_NationalValues_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P3_NationalValues_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P3_NationalValues_T_Packet_Types_Pkg */

#ifndef kcg_copy_P203V1_OBU_T_TM_baseline2
#define kcg_copy_P203V1_OBU_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P203V1_OBU_T_TM_baseline2)))
#endif /* kcg_copy_P203V1_OBU_T_TM_baseline2 */

#ifndef kcg_copy_trainPosition_T_TrainPosition_Types_Pck
#define kcg_copy_trainPosition_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (trainPosition_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_trainPosition_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_LinkedBG_T_BG_Types_Pkg
#define kcg_copy_LinkedBG_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (LinkedBG_T_BG_Types_Pkg)))
#endif /* kcg_copy_LinkedBG_T_BG_Types_Pkg */

#ifndef kcg_copy_morc_configData_T_RCM_Session_Types_Pkg
#define kcg_copy_morc_configData_T_RCM_Session_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (morc_configData_T_RCM_Session_Types_Pkg)))
#endif /* kcg_copy_morc_configData_T_RCM_Session_Types_Pkg */

#ifndef kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg
#define kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (sessionCmd_T_RCM_Session_Types_Pkg)))
#endif /* kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg */

#ifndef kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg
#define kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (obuEventsAndPhases_T_RCM_Session_Types_Pkg)))
#endif /* kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg */

#ifndef kcg_copy_BG_Header_T_BG_Types_Pkg
#define kcg_copy_BG_Header_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (BG_Header_T_BG_Types_Pkg)))
#endif /* kcg_copy_BG_Header_T_BG_Types_Pkg */

#ifndef kcg_copy_P000_TM_TrainToTrack
#define kcg_copy_P000_TM_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P000_TM_TrainToTrack)))
#endif /* kcg_copy_P000_TM_TrainToTrack */

#ifndef kcg_copy_P001_TM_TrainToTrack
#define kcg_copy_P001_TM_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P001_TM_TrainToTrack)))
#endif /* kcg_copy_P001_TM_TrainToTrack */

#ifndef kcg_copy_P011_TM_TrainToTrack
#define kcg_copy_P011_TM_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P011_TM_TrainToTrack)))
#endif /* kcg_copy_P011_TM_TrainToTrack */

#ifndef kcg_copy_Position_Report_TrainToTrack
#define kcg_copy_Position_Report_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Position_Report_TrainToTrack)))
#endif /* kcg_copy_Position_Report_TrainToTrack */

#ifndef kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack
#define kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Position_Report_based_on_two_balise_groups_TrainToTrack)))
#endif /* kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack */

#ifndef kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg
#define kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_TrainData_T
#define kcg_copy_TrainData_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TrainData_T)))
#endif /* kcg_copy_TrainData_T */

#ifndef kcg_copy_PosData_T
#define kcg_copy_PosData_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PosData_T)))
#endif /* kcg_copy_PosData_T */

#ifndef kcg_copy_TelegramHeader_T_BG_Types_Pkg
#define kcg_copy_TelegramHeader_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TelegramHeader_T_BG_Types_Pkg)))
#endif /* kcg_copy_TelegramHeader_T_BG_Types_Pkg */

#ifndef kcg_copy_Radio_TrackTrain_Header_T_TM
#define kcg_copy_Radio_TrackTrain_Header_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Radio_TrackTrain_Header_T_TM)))
#endif /* kcg_copy_Radio_TrackTrain_Header_T_TM */

#ifndef kcg_copy_M_015_int_T_TM_radio_messages
#define kcg_copy_M_015_int_T_TM_radio_messages(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_015_int_T_TM_radio_messages)))
#endif /* kcg_copy_M_015_int_T_TM_radio_messages */

#ifndef kcg_copy_M_015_T_TM_radio_messages
#define kcg_copy_M_015_T_TM_radio_messages(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_015_T_TM_radio_messages)))
#endif /* kcg_copy_M_015_T_TM_radio_messages */

#ifndef kcg_copy_M_034_T_TM_radio_messages
#define kcg_copy_M_034_T_TM_radio_messages(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_034_T_TM_radio_messages)))
#endif /* kcg_copy_M_034_T_TM_radio_messages */

#ifndef kcg_copy_struct_171773
#define kcg_copy_struct_171773(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_171773)))
#endif /* kcg_copy_struct_171773 */

#ifndef kcg_copy_P058_trackside_int_T_TM
#define kcg_copy_P058_trackside_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P058_trackside_int_T_TM)))
#endif /* kcg_copy_P058_trackside_int_T_TM */

#ifndef kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages
#define kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_TrackTrain_Radio_T_TM_radio_messages)))
#endif /* kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages */

#ifndef kcg_copy_P065_trackside_int_T_TM
#define kcg_copy_P065_trackside_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P065_trackside_int_T_TM)))
#endif /* kcg_copy_P065_trackside_int_T_TM */

#ifndef kcg_copy_P021_trackside_int_T_TM
#define kcg_copy_P021_trackside_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P021_trackside_int_T_TM)))
#endif /* kcg_copy_P021_trackside_int_T_TM */

#ifndef kcg_copy_P027V1_trackside_int_T_TM_baseline2
#define kcg_copy_P027V1_trackside_int_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P027V1_trackside_int_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_trackside_int_T_TM_baseline2 */

#ifndef kcg_copy_P005_trackside_int_T_TM
#define kcg_copy_P005_trackside_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P005_trackside_int_T_TM)))
#endif /* kcg_copy_P005_trackside_int_T_TM */

#ifndef kcg_copy_P015_trackside_int_T_TM
#define kcg_copy_P015_trackside_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P015_trackside_int_T_TM)))
#endif /* kcg_copy_P015_trackside_int_T_TM */

#ifndef kcg_copy_P003V1_trackside_int_T_TM_baseline2
#define kcg_copy_P003V1_trackside_int_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P003V1_trackside_int_T_TM_baseline2)))
#endif /* kcg_copy_P003V1_trackside_int_T_TM_baseline2 */

#ifndef kcg_copy_P041_trackside_int_T_TM
#define kcg_copy_P041_trackside_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P041_trackside_int_T_TM)))
#endif /* kcg_copy_P041_trackside_int_T_TM */

#ifndef kcg_copy_BaliseTelegramHeader_int_T_TM
#define kcg_copy_BaliseTelegramHeader_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (BaliseTelegramHeader_int_T_TM)))
#endif /* kcg_copy_BaliseTelegramHeader_int_T_TM */

#ifndef kcg_copy_trainData_T_TIU_Types_Pkg
#define kcg_copy_trainData_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (trainData_T_TIU_Types_Pkg)))
#endif /* kcg_copy_trainData_T_TIU_Types_Pkg */

#ifndef kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg
#define kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (EVC_to_DMI_Message_T_API_DMI_Pkg)))
#endif /* kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg */

#ifndef kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg
#define kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_to_EVC_Message_T_API_DMI_Pkg)))
#endif /* kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg */

#ifndef kcg_copy_DMI_Available_Menu_T_DMI_Types_Pkg
#define kcg_copy_DMI_Available_Menu_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Available_Menu_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_Available_Menu_T_DMI_Types_Pkg */

#ifndef kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_Brake_inhibition_command_T_TIU_Types_Pkg
#define kcg_copy_Brake_inhibition_command_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Brake_inhibition_command_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Brake_inhibition_command_T_TIU_Types_Pkg */

#ifndef kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg
#define kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RBC_Communication_T_ProvidePositionReport_Pkg)))
#endif /* kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg */

#ifndef kcg_copy_T_Data_To_DMI_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Data_To_DMI_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_Data_To_DMI_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Data_To_DMI_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_TargetIteratorAkku_TargetLimits_Pkg
#define kcg_copy_TargetIteratorAkku_TargetLimits_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TargetIteratorAkku_TargetLimits_Pkg)))
#endif /* kcg_copy_TargetIteratorAkku_TargetLimits_Pkg */

#ifndef kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg
#define kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_EVC_status_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg */

#ifndef kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg
#define kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_TXT_MSG_status_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg */

#ifndef kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg
#define kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (BGCollector_T_Receive_TrackSide_Msg_Pkg)))
#endif /* kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg */

#ifndef kcg_copy_filterRelatedEvents_T_Common_Types_Pkg
#define kcg_copy_filterRelatedEvents_T_Common_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (filterRelatedEvents_T_Common_Types_Pkg)))
#endif /* kcg_copy_filterRelatedEvents_T_Common_Types_Pkg */

#ifndef kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg
#define kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (dataCollectionForLevelTransition_T_xdebugSupport_Pkg)))
#endif /* kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg */

#ifndef kcg_copy_MSG_Errors_T_Common_Types_Pkg
#define kcg_copy_MSG_Errors_T_Common_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MSG_Errors_T_Common_Types_Pkg)))
#endif /* kcg_copy_MSG_Errors_T_Common_Types_Pkg */

#ifndef kcg_copy_P058_OBU_T_TM
#define kcg_copy_P058_OBU_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P058_OBU_T_TM)))
#endif /* kcg_copy_P058_OBU_T_TM */

#ifndef kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg
#define kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (mobileConnectionCmd_T_RCM_Types_Pkg)))
#endif /* kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg */

#ifndef kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg
#define kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg */

#ifndef kcg_copy_P80_ModeProfile_T_Packet_Types_Pkg
#define kcg_copy_P80_ModeProfile_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P80_ModeProfile_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P80_ModeProfile_T_Packet_Types_Pkg */

#ifndef kcg_copy_M_147_T_TM_radio_messages
#define kcg_copy_M_147_T_TM_radio_messages(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_147_T_TM_radio_messages)))
#endif /* kcg_copy_M_147_T_TM_radio_messages */

#ifndef kcg_copy_positionErrors_T_TrainPosition_Types_Pck
#define kcg_copy_positionErrors_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (positionErrors_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_positionErrors_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_P005_section_enum_T_TM
#define kcg_copy_P005_section_enum_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P005_section_enum_T_TM)))
#endif /* kcg_copy_P005_section_enum_T_TM */

#ifndef kcg_copy_struct_172264
#define kcg_copy_struct_172264(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_172264)))
#endif /* kcg_copy_struct_172264 */

#ifndef kcg_copy_struct_172277
#define kcg_copy_struct_172277(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_172277)))
#endif /* kcg_copy_struct_172277 */

#ifndef kcg_copy_positionedBG_T_TrainPosition_Types_Pck
#define kcg_copy_positionedBG_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (positionedBG_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_positionedBG_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg
#define kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P42_SessionManagement_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg */

#ifndef kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg
#define kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (p42_sessionManagement_T_RCM_MsgTypes_Pkg)))
#endif /* kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg */

#ifndef kcg_copy_RadioMetadata_T_Common_Types_Pkg
#define kcg_copy_RadioMetadata_T_Common_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RadioMetadata_T_Common_Types_Pkg)))
#endif /* kcg_copy_RadioMetadata_T_Common_Types_Pkg */

#ifndef kcg_copy_odometry_T_Obu_BasicTypes_Pkg
#define kcg_copy_odometry_T_Obu_BasicTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (odometry_T_Obu_BasicTypes_Pkg)))
#endif /* kcg_copy_odometry_T_Obu_BasicTypes_Pkg */

#ifndef kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages
#define kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_TrainTrack_MessageHd_T_TM_radio_messages)))
#endif /* kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages */

#ifndef kcg_copy_struct_172356
#define kcg_copy_struct_172356(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_172356)))
#endif /* kcg_copy_struct_172356 */

#ifndef kcg_copy_M_002_T_TM_radio_messages
#define kcg_copy_M_002_T_TM_radio_messages(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_002_T_TM_radio_messages)))
#endif /* kcg_copy_M_002_T_TM_radio_messages */

#ifndef kcg_copy_M_045_T_TM_radio_messages
#define kcg_copy_M_045_T_TM_radio_messages(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_045_T_TM_radio_messages)))
#endif /* kcg_copy_M_045_T_TM_radio_messages */

#ifndef kcg_copy_M_033_T_TM_radio_messages
#define kcg_copy_M_033_T_TM_radio_messages(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_033_T_TM_radio_messages)))
#endif /* kcg_copy_M_033_T_TM_radio_messages */

#ifndef kcg_copy_M_032_T_TM_radio_messages
#define kcg_copy_M_032_T_TM_radio_messages(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (M_032_T_TM_radio_messages)))
#endif /* kcg_copy_M_032_T_TM_radio_messages */

#ifndef kcg_copy_P042_trackside_int_T_TM
#define kcg_copy_P042_trackside_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P042_trackside_int_T_TM)))
#endif /* kcg_copy_P042_trackside_int_T_TM */

#ifndef kcg_copy_P046_trackside_int_T_TM
#define kcg_copy_P046_trackside_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P046_trackside_int_T_TM)))
#endif /* kcg_copy_P046_trackside_int_T_TM */

#ifndef kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg
#define kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Mode_control_and_train_status_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg */

#ifndef kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg
#define kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg)))
#endif /* kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifndef kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg
#define kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Train_Data_T_DMI_Messages_Bothways_Pkg)))
#endif /* kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg */

#ifndef kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg
#define kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg)))
#endif /* kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_copy_trainProperties_T_TrainPosition_Types_Pck
#define kcg_copy_trainProperties_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (trainProperties_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_trainProperties_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg
#define kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (p131_q_rbcTransitionOrder_T_Handover_Pkg)))
#endif /* kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg */

#ifndef kcg_copy_struct_172526
#define kcg_copy_struct_172526(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_172526)))
#endif /* kcg_copy_struct_172526 */

#ifndef kcg_copy_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg
#define kcg_copy_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Message_EVC_to_Train_Interface_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg */

#ifndef kcg_copy_outPackets_T_Common_Types_Pkg
#define kcg_copy_outPackets_T_Common_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (outPackets_T_Common_Types_Pkg)))
#endif /* kcg_copy_outPackets_T_Common_Types_Pkg */

#ifndef kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg
#define kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg)))
#endif /* kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifndef kcg_copy_PosRepParams_T
#define kcg_copy_PosRepParams_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (PosRepParams_T)))
#endif /* kcg_copy_PosRepParams_T */

#ifndef kcg_copy_P255_trackside_int_T_TM
#define kcg_copy_P255_trackside_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P255_trackside_int_T_TM)))
#endif /* kcg_copy_P255_trackside_int_T_TM */

#ifndef kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg
#define kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Brake_pressure_value_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg */

#ifndef kcg_copy_P63_BaliseInSRAuthority_T_Packet_Types_Pkg
#define kcg_copy_P63_BaliseInSRAuthority_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P63_BaliseInSRAuthority_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P63_BaliseInSRAuthority_T_Packet_Types_Pkg */

#ifndef kcg_copy_Clock_T
#define kcg_copy_Clock_T(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Clock_T)))
#endif /* kcg_copy_Clock_T */

#ifndef kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg
#define kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (LocWithInAcc_T_Obu_BasicTypes_Pkg)))
#endif /* kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg */

#ifndef kcg_copy_TrainPosRaw_T_InfraLib
#define kcg_copy_TrainPosRaw_T_InfraLib(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TrainPosRaw_T_InfraLib)))
#endif /* kcg_copy_TrainPosRaw_T_InfraLib */

#ifndef kcg_copy_DataForDMI_t_TrackAtlasTypes
#define kcg_copy_DataForDMI_t_TrackAtlasTypes(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DataForDMI_t_TrackAtlasTypes)))
#endif /* kcg_copy_DataForDMI_t_TrackAtlasTypes */

#ifndef kcg_copy_Brake_status_T_TIU_Types_Pkg
#define kcg_copy_Brake_status_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Brake_status_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Brake_status_T_TIU_Types_Pkg */

#ifndef kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg
#define kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_LevelTransition_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store
#define kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store)))
#endif /* kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store */

#ifndef kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg
#define kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (LocationBasedEvents_T_ProvidePositionReport_Pkg)))
#endif /* kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg */

#ifndef kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg
#define kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (T_ERTMS_capabilities_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg
#define kcg_copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg)))
#endif /* kcg_copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg */

#ifndef kcg_copy_odometryFactors_T_Toolbox
#define kcg_copy_odometryFactors_T_Toolbox(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (odometryFactors_T_Toolbox)))
#endif /* kcg_copy_odometryFactors_T_Toolbox */

#ifndef kcg_copy_StaticSpeedSection_t_TrackAtlasTypes
#define kcg_copy_StaticSpeedSection_t_TrackAtlasTypes(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (StaticSpeedSection_t_TrackAtlasTypes)))
#endif /* kcg_copy_StaticSpeedSection_t_TrackAtlasTypes */

#ifndef kcg_copy_P003_permanent_data_T_TM_baseline2
#define kcg_copy_P003_permanent_data_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P003_permanent_data_T_TM_baseline2)))
#endif /* kcg_copy_P003_permanent_data_T_TM_baseline2 */

#ifndef kcg_copy_P015_section_int_T_TM
#define kcg_copy_P015_section_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P015_section_int_T_TM)))
#endif /* kcg_copy_P015_section_int_T_TM */

#ifndef kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg
#define kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (P45_RadioNetworkRegistration_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg */

#ifndef kcg_copy_DMI_train_id_T_DMI_Types_Pkg
#define kcg_copy_DMI_train_id_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (DMI_train_id_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_train_id_T_DMI_Types_Pkg */

#ifndef kcg_copy_radioManagementMessage_T_Common_Types_Pkg
#define kcg_copy_radioManagementMessage_T_Common_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (radioManagementMessage_T_Common_Types_Pkg)))
#endif /* kcg_copy_radioManagementMessage_T_Common_Types_Pkg */

#ifndef kcg_copy_RadioMessage_T_Radio_Types_Pkg
#define kcg_copy_RadioMessage_T_Radio_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RadioMessage_T_Radio_Types_Pkg)))
#endif /* kcg_copy_RadioMessage_T_Radio_Types_Pkg */

#ifndef kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck
#define kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (infoFromLinking_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_API_TrackSideInput_T_API_Msg_Pkg
#define kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (API_TrackSideInput_T_API_Msg_Pkg)))
#endif /* kcg_copy_API_TrackSideInput_T_API_Msg_Pkg */

#ifndef kcg_copy_RBC_Data_T_RBC_DataBus_Pkg
#define kcg_copy_RBC_Data_T_RBC_DataBus_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RBC_Data_T_RBC_DataBus_Pkg)))
#endif /* kcg_copy_RBC_Data_T_RBC_DataBus_Pkg */

#ifndef kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg
#define kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Message_Train_Interface_to_EVC_T_TIU_Types_Pkg)))
#endif /* kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg */

#ifndef kcg_copy_RBC_Id_T_Common_Types_Pkg
#define kcg_copy_RBC_Id_T_Common_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RBC_Id_T_Common_Types_Pkg)))
#endif /* kcg_copy_RBC_Id_T_Common_Types_Pkg */

#ifndef kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store
#define kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store)))
#endif /* kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store */

#ifndef kcg_copy_array_bool_4
#define kcg_copy_array_bool_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_4)))
#endif /* kcg_copy_array_bool_4 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
#define kcg_copy_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg)))
#endif /* kcg_copy_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */

#ifndef kcg_copy_array_int_289
#define kcg_copy_array_int_289(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_289)))
#endif /* kcg_copy_array_int_289 */

#ifndef kcg_copy_array_real_4
#define kcg_copy_array_real_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_4)))
#endif /* kcg_copy_array_real_4 */

#ifndef kcg_copy_RadioTrackTrainMessageQueueEntries_T
#define kcg_copy_RadioTrackTrainMessageQueueEntries_T(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (RadioTrackTrainMessageQueueEntries_T)))
#endif /* kcg_copy_RadioTrackTrainMessageQueueEntries_T */

#ifndef kcg_copy_array_int_2_4_8
#define kcg_copy_array_int_2_4_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_4_8)))
#endif /* kcg_copy_array_int_2_4_8 */

#ifndef kcg_copy_array_int_492
#define kcg_copy_array_int_492(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_492)))
#endif /* kcg_copy_array_int_492 */

#ifndef kcg_copy_array_168400
#define kcg_copy_array_168400(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_168400)))
#endif /* kcg_copy_array_168400 */

#ifndef kcg_copy_array_168410
#define kcg_copy_array_168410(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_168410)))
#endif /* kcg_copy_array_168410 */

#ifndef kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes
#define kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (StaticSpeedProfile_t_TrackAtlasTypes)))
#endif /* kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes */

#ifndef kcg_copy_GradientProfile_t_TrackAtlasTypes
#define kcg_copy_GradientProfile_t_TrackAtlasTypes(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (GradientProfile_t_TrackAtlasTypes)))
#endif /* kcg_copy_GradientProfile_t_TrackAtlasTypes */

#ifndef kcg_copy_array_int_285
#define kcg_copy_array_int_285(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_285)))
#endif /* kcg_copy_array_int_285 */

#ifndef kcg_copy_array_168486
#define kcg_copy_array_168486(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_168486)))
#endif /* kcg_copy_array_168486 */

#ifndef kcg_copy_array_168496
#define kcg_copy_array_168496(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_168496)))
#endif /* kcg_copy_array_168496 */

#ifndef kcg_copy_array_168500
#define kcg_copy_array_168500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_168500)))
#endif /* kcg_copy_array_168500 */

#ifndef kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes
#define kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (GradientProfile_for_DMI_t_TrackAtlasTypes)))
#endif /* kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes */

#ifndef kcg_copy_array_168524
#define kcg_copy_array_168524(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_168524)))
#endif /* kcg_copy_array_168524 */

#ifndef kcg_copy_TelegramArray_T_BG_Types_Pkg
#define kcg_copy_TelegramArray_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (TelegramArray_T_BG_Types_Pkg)))
#endif /* kcg_copy_TelegramArray_T_BG_Types_Pkg */

#ifndef kcg_copy_array_168531
#define kcg_copy_array_168531(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_168531)))
#endif /* kcg_copy_array_168531 */

#ifndef kcg_copy_array_168535
#define kcg_copy_array_168535(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_168535)))
#endif /* kcg_copy_array_168535 */

#ifndef kcg_copy_array_int_894
#define kcg_copy_array_int_894(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_894)))
#endif /* kcg_copy_array_int_894 */

#ifndef kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg
#define kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P41_LevelTransistionOrders_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg */

#ifndef kcg_copy_array_168567
#define kcg_copy_array_168567(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_168567)))
#endif /* kcg_copy_array_168567 */

#ifndef kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck
#define kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_P005_OBU_sectionlist_enum_T_TM
#define kcg_copy_P005_OBU_sectionlist_enum_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P005_OBU_sectionlist_enum_T_TM)))
#endif /* kcg_copy_P005_OBU_sectionlist_enum_T_TM */

#ifndef kcg_copy_LinkedBGs_T_BG_Types_Pkg
#define kcg_copy_LinkedBGs_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (LinkedBGs_T_BG_Types_Pkg)))
#endif /* kcg_copy_LinkedBGs_T_BG_Types_Pkg */

#ifndef kcg_copy_P005_OBU_sectionlist_int_T_TM
#define kcg_copy_P005_OBU_sectionlist_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P005_OBU_sectionlist_int_T_TM)))
#endif /* kcg_copy_P005_OBU_sectionlist_int_T_TM */

#ifndef kcg_copy_array_168602
#define kcg_copy_array_168602(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_168602)))
#endif /* kcg_copy_array_168602 */

#ifndef kcg_copy_array_168614
#define kcg_copy_array_168614(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_168614)))
#endif /* kcg_copy_array_168614 */

#ifndef kcg_copy_array_real_10_10
#define kcg_copy_array_real_10_10(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_10_10)))
#endif /* kcg_copy_array_real_10_10 */

#ifndef kcg_copy_array_168647
#define kcg_copy_array_168647(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_168647)))
#endif /* kcg_copy_array_168647 */

#ifndef kcg_copy_array_bool_113
#define kcg_copy_array_bool_113(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_113)))
#endif /* kcg_copy_array_bool_113 */

#ifndef kcg_copy_Target_list_MRSP_real_T_TargetManagement_types
#define kcg_copy_Target_list_MRSP_real_T_TargetManagement_types(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (Target_list_MRSP_real_T_TargetManagement_types)))
#endif /* kcg_copy_Target_list_MRSP_real_T_TargetManagement_types */

#ifndef kcg_copy_array_168667
#define kcg_copy_array_168667(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_168667)))
#endif /* kcg_copy_array_168667 */

#ifndef kcg_copy_array_real_113
#define kcg_copy_array_real_113(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_113)))
#endif /* kcg_copy_array_real_113 */

#ifndef kcg_copy_array_int_31
#define kcg_copy_array_int_31(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_31)))
#endif /* kcg_copy_array_int_31 */

#ifndef kcg_copy_DMI_level_array_T_DMI_Types_Pkg
#define kcg_copy_DMI_level_array_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_level_array_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_level_array_T_DMI_Types_Pkg */

#ifndef kcg_copy_array_int_70
#define kcg_copy_array_int_70(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_70)))
#endif /* kcg_copy_array_int_70 */

#ifndef kcg_copy_array_168713
#define kcg_copy_array_168713(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_168713)))
#endif /* kcg_copy_array_168713 */

#ifndef kcg_copy_array_int_964
#define kcg_copy_array_int_964(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_964)))
#endif /* kcg_copy_array_int_964 */

#ifndef kcg_copy_P046_sections_array_flat_T_TM
#define kcg_copy_P046_sections_array_flat_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P046_sections_array_flat_T_TM)))
#endif /* kcg_copy_P046_sections_array_flat_T_TM */

#ifndef kcg_copy_array_int_269
#define kcg_copy_array_int_269(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_269)))
#endif /* kcg_copy_array_int_269 */

#ifndef kcg_copy_array_int_105
#define kcg_copy_array_int_105(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_105)))
#endif /* kcg_copy_array_int_105 */

#ifndef kcg_copy_array_int_2_32
#define kcg_copy_array_int_2_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32)))
#endif /* kcg_copy_array_int_2_32 */

#ifndef kcg_copy_array_168759
#define kcg_copy_array_168759(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_168759)))
#endif /* kcg_copy_array_168759 */

#ifndef kcg_copy_array_int_8_4
#define kcg_copy_array_int_8_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_8_4)))
#endif /* kcg_copy_array_int_8_4 */

#ifndef kcg_copy_array_int_23
#define kcg_copy_array_int_23(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_23)))
#endif /* kcg_copy_array_int_23 */

#ifndef kcg_copy_LevelDecisionTableType_DataDictionary_Pkg
#define kcg_copy_LevelDecisionTableType_DataDictionary_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (LevelDecisionTableType_DataDictionary_Pkg)))
#endif /* kcg_copy_LevelDecisionTableType_DataDictionary_Pkg */

#ifndef kcg_copy_array_int_66_33
#define kcg_copy_array_int_66_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_66_33)))
#endif /* kcg_copy_array_int_66_33 */

#ifndef kcg_copy_array_168778
#define kcg_copy_array_168778(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_168778)))
#endif /* kcg_copy_array_168778 */

#ifndef kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg
#define kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (ReportedBGList_T_ProvidePositionReport_Pkg)))
#endif /* kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg */

#ifndef kcg_copy_array_168785
#define kcg_copy_array_168785(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_168785)))
#endif /* kcg_copy_array_168785 */

#ifndef kcg_copy_array_168789
#define kcg_copy_array_168789(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_168789)))
#endif /* kcg_copy_array_168789 */

#ifndef kcg_copy_array_168822
#define kcg_copy_array_168822(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_168822)))
#endif /* kcg_copy_array_168822 */

#ifndef kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg
#define kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (EVC_to_DMI_Message_int_T_API_DMI_Pkg)))
#endif /* kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg */

#ifndef kcg_copy_array_168941
#define kcg_copy_array_168941(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_168941)))
#endif /* kcg_copy_array_168941 */

#ifndef kcg_copy_P046_trackide_sectionlist_T_TM
#define kcg_copy_P046_trackide_sectionlist_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P046_trackide_sectionlist_T_TM)))
#endif /* kcg_copy_P046_trackide_sectionlist_T_TM */

#ifndef kcg_copy_array_int_304
#define kcg_copy_array_int_304(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_304)))
#endif /* kcg_copy_array_int_304 */

#ifndef kcg_copy_array_168969
#define kcg_copy_array_168969(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_168969)))
#endif /* kcg_copy_array_168969 */

#ifndef kcg_copy_array_168973
#define kcg_copy_array_168973(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_168973)))
#endif /* kcg_copy_array_168973 */

#ifndef kcg_copy_positionedBGs_T_TrainPosition_Types_Pck
#define kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (positionedBGs_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_positionedBGs_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_array_168986
#define kcg_copy_array_168986(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_168986)))
#endif /* kcg_copy_array_168986 */

#ifndef kcg_copy_array_168990
#define kcg_copy_array_168990(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_168990)))
#endif /* kcg_copy_array_168990 */

#ifndef kcg_copy_Metadata_T_Common_Types_Pkg
#define kcg_copy_Metadata_T_Common_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (Metadata_T_Common_Types_Pkg)))
#endif /* kcg_copy_Metadata_T_Common_Types_Pkg */

#ifndef kcg_copy_MRSP_Profile_t_TrackAtlasTypes
#define kcg_copy_MRSP_Profile_t_TrackAtlasTypes(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MRSP_Profile_t_TrackAtlasTypes)))
#endif /* kcg_copy_MRSP_Profile_t_TrackAtlasTypes */

#ifndef kcg_copy_array_169000
#define kcg_copy_array_169000(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169000)))
#endif /* kcg_copy_array_169000 */

#ifndef kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg
#define kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_array_int_261
#define kcg_copy_array_int_261(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_261)))
#endif /* kcg_copy_array_int_261 */

#ifndef kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg
#define kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg */

#ifndef kcg_copy_array_169014
#define kcg_copy_array_169014(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169014)))
#endif /* kcg_copy_array_169014 */

#ifndef kcg_copy_nvkvintArray_T_Packet_Types_Pkg
#define kcg_copy_nvkvintArray_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (nvkvintArray_T_Packet_Types_Pkg)))
#endif /* kcg_copy_nvkvintArray_T_Packet_Types_Pkg */

#ifndef kcg_copy_array_int_97
#define kcg_copy_array_int_97(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_97)))
#endif /* kcg_copy_array_int_97 */

#ifndef kcg_copy_array_bool_15
#define kcg_copy_array_bool_15(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_15)))
#endif /* kcg_copy_array_bool_15 */

#ifndef kcg_copy_array_int_15
#define kcg_copy_array_int_15(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_15)))
#endif /* kcg_copy_array_int_15 */

#ifndef kcg_copy_array_169066
#define kcg_copy_array_169066(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169066)))
#endif /* kcg_copy_array_169066 */

#ifndef kcg_copy_P005_trackide_sectionlist_T_TM
#define kcg_copy_P005_trackide_sectionlist_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P005_trackide_sectionlist_T_TM)))
#endif /* kcg_copy_P005_trackide_sectionlist_T_TM */

#ifndef kcg_copy_Array_DMI_Q_Text
#define kcg_copy_Array_DMI_Q_Text(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (Array_DMI_Q_Text)))
#endif /* kcg_copy_Array_DMI_Q_Text */

#ifndef kcg_copy_array_169076
#define kcg_copy_array_169076(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169076)))
#endif /* kcg_copy_array_169076 */

#ifndef kcg_copy_array_169086
#define kcg_copy_array_169086(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169086)))
#endif /* kcg_copy_array_169086 */

#ifndef kcg_copy_array_169095
#define kcg_copy_array_169095(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169095)))
#endif /* kcg_copy_array_169095 */

#ifndef kcg_copy_array_169099
#define kcg_copy_array_169099(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169099)))
#endif /* kcg_copy_array_169099 */

#ifndef kcg_copy_array_169103
#define kcg_copy_array_169103(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169103)))
#endif /* kcg_copy_array_169103 */

#ifndef kcg_copy_array_169119
#define kcg_copy_array_169119(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169119)))
#endif /* kcg_copy_array_169119 */

#ifndef kcg_copy_array_169123
#define kcg_copy_array_169123(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169123)))
#endif /* kcg_copy_array_169123 */

#ifndef kcg_copy_array_169127
#define kcg_copy_array_169127(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169127)))
#endif /* kcg_copy_array_169127 */

#ifndef kcg_copy_array_169131
#define kcg_copy_array_169131(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169131)))
#endif /* kcg_copy_array_169131 */

#ifndef kcg_copy_array_int_11
#define kcg_copy_array_int_11(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_11)))
#endif /* kcg_copy_array_int_11 */

#ifndef kcg_copy_array_169171
#define kcg_copy_array_169171(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169171)))
#endif /* kcg_copy_array_169171 */

#ifndef kcg_copy_array_int_499
#define kcg_copy_array_int_499(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_499)))
#endif /* kcg_copy_array_int_499 */

#ifndef kcg_copy_array_bool_50
#define kcg_copy_array_bool_50(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_50)))
#endif /* kcg_copy_array_bool_50 */

#ifndef kcg_copy_array_real_100_8
#define kcg_copy_array_real_100_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_100_8)))
#endif /* kcg_copy_array_real_100_8 */

#ifndef kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages
#define kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (M_TrainTrack_compressed_packets_T_TM_radio_messages)))
#endif /* kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages */

#ifndef kcg_copy_array_real_50
#define kcg_copy_array_real_50(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_50)))
#endif /* kcg_copy_array_real_50 */

#ifndef kcg_copy_array_int_987
#define kcg_copy_array_int_987(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_987)))
#endif /* kcg_copy_array_int_987 */

#ifndef kcg_copy_array_bool_7
#define kcg_copy_array_bool_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_7)))
#endif /* kcg_copy_array_bool_7 */

#ifndef kcg_copy_array_169242
#define kcg_copy_array_169242(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169242)))
#endif /* kcg_copy_array_169242 */

#ifndef kcg_copy_array_169246
#define kcg_copy_array_169246(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169246)))
#endif /* kcg_copy_array_169246 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array_int_292
#define kcg_copy_array_int_292(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_292)))
#endif /* kcg_copy_array_int_292 */

#ifndef kcg_copy_array_int_4_32_128
#define kcg_copy_array_int_4_32_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4_32_128)))
#endif /* kcg_copy_array_int_4_32_128 */

#ifndef kcg_copy_array_int_128
#define kcg_copy_array_int_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128)))
#endif /* kcg_copy_array_int_128 */

#ifndef kcg_copy_array_169285
#define kcg_copy_array_169285(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169285)))
#endif /* kcg_copy_array_169285 */

#ifndef kcg_copy_array_169300
#define kcg_copy_array_169300(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169300)))
#endif /* kcg_copy_array_169300 */

#ifndef kcg_copy_array_int_64_32
#define kcg_copy_array_int_64_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64_32)))
#endif /* kcg_copy_array_int_64_32 */

#ifndef kcg_copy_P005_OBU_sectionlist_array_T_TM
#define kcg_copy_P005_OBU_sectionlist_array_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P005_OBU_sectionlist_array_T_TM)))
#endif /* kcg_copy_P005_OBU_sectionlist_array_T_TM */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_real_100_13
#define kcg_copy_array_real_100_13(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_100_13)))
#endif /* kcg_copy_array_real_100_13 */

#ifndef kcg_copy_array_real_3
#define kcg_copy_array_real_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_3)))
#endif /* kcg_copy_array_real_3 */

#ifndef kcg_copy_array_169371
#define kcg_copy_array_169371(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169371)))
#endif /* kcg_copy_array_169371 */

#ifndef kcg_copy_array_169375
#define kcg_copy_array_169375(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169375)))
#endif /* kcg_copy_array_169375 */

#ifndef kcg_copy_array_int_491
#define kcg_copy_array_int_491(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_491)))
#endif /* kcg_copy_array_int_491 */

#ifndef kcg_copy_array_int_42
#define kcg_copy_array_int_42(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_42)))
#endif /* kcg_copy_array_int_42 */

#ifndef kcg_copy_array_int_3_33
#define kcg_copy_array_int_3_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33)))
#endif /* kcg_copy_array_int_3_33 */

#ifndef kcg_copy_array_169420
#define kcg_copy_array_169420(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169420)))
#endif /* kcg_copy_array_169420 */

#ifndef kcg_copy_array_int_500_500
#define kcg_copy_array_int_500_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500_500)))
#endif /* kcg_copy_array_int_500_500 */

#ifndef kcg_copy_array_169437
#define kcg_copy_array_169437(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169437)))
#endif /* kcg_copy_array_169437 */

#ifndef kcg_copy_array_169441
#define kcg_copy_array_169441(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169441)))
#endif /* kcg_copy_array_169441 */

#ifndef kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg
#define kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P15_Level23MovementAuthorities_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg */

#ifndef kcg_copy_P12_Level1MovementAuthorities_T_Packet_Types_Pkg
#define kcg_copy_P12_Level1MovementAuthorities_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P12_Level1MovementAuthorities_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P12_Level1MovementAuthorities_T_Packet_Types_Pkg */

#ifndef kcg_copy_array_169451
#define kcg_copy_array_169451(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169451)))
#endif /* kcg_copy_array_169451 */

#ifndef kcg_copy_array_169464
#define kcg_copy_array_169464(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169464)))
#endif /* kcg_copy_array_169464 */

#ifndef kcg_copy_array_int_975
#define kcg_copy_array_int_975(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_975)))
#endif /* kcg_copy_array_int_975 */

#ifndef kcg_copy_array_int_444
#define kcg_copy_array_int_444(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_444)))
#endif /* kcg_copy_array_int_444 */

#ifndef kcg_copy_array_real_5_5
#define kcg_copy_array_real_5_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_5_5)))
#endif /* kcg_copy_array_real_5_5 */

#ifndef kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg
#define kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_TXT_MSGList_status_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg */

#ifndef kcg_copy_array_int_280
#define kcg_copy_array_int_280(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_280)))
#endif /* kcg_copy_array_int_280 */

#ifndef kcg_copy_array_169506
#define kcg_copy_array_169506(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169506)))
#endif /* kcg_copy_array_169506 */

#ifndef kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes
#define kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MovementAuthoritySectionlist_t_TrackAtlasTypes)))
#endif /* kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes */

#ifndef kcg_copy_array_real_100_1
#define kcg_copy_array_real_100_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_100_1)))
#endif /* kcg_copy_array_real_100_1 */

#ifndef kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal
#define kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (M_TrainTrackRadioOutputBuffer_t_TM_lib_internal)))
#endif /* kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal */

#ifndef kcg_copy_array_169580
#define kcg_copy_array_169580(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169580)))
#endif /* kcg_copy_array_169580 */

#ifndef kcg_copy_array_169593
#define kcg_copy_array_169593(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169593)))
#endif /* kcg_copy_array_169593 */

#ifndef kcg_copy_DMI_Available_Menu_int_T_DATA
#define kcg_copy_DMI_Available_Menu_int_T_DATA(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_Available_Menu_int_T_DATA)))
#endif /* kcg_copy_DMI_Available_Menu_int_T_DATA */

#ifndef kcg_copy_array_int_30
#define kcg_copy_array_int_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_30)))
#endif /* kcg_copy_array_int_30 */

#ifndef kcg_copy_array_char_30
#define kcg_copy_array_char_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_char_30)))
#endif /* kcg_copy_array_char_30 */

#ifndef kcg_copy_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg
#define kcg_copy_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (T_Mode_Profile_Table_Level_And_Mode_Types_Pkg)))
#endif /* kcg_copy_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg */

#ifndef kcg_copy_P046_OBU_sectionlist_enum_T_TM
#define kcg_copy_P046_OBU_sectionlist_enum_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P046_OBU_sectionlist_enum_T_TM)))
#endif /* kcg_copy_P046_OBU_sectionlist_enum_T_TM */

#ifndef kcg_copy_array_169645
#define kcg_copy_array_169645(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169645)))
#endif /* kcg_copy_array_169645 */

#ifndef kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg
#define kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_to_EVC_Message_int_T_API_DMI_Pkg)))
#endif /* kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg */

#ifndef kcg_copy_P041_trackide_sectionlist_T_TM
#define kcg_copy_P041_trackide_sectionlist_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P041_trackide_sectionlist_T_TM)))
#endif /* kcg_copy_P041_trackide_sectionlist_T_TM */

#ifndef kcg_copy_array_real_100_6
#define kcg_copy_array_real_100_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_100_6)))
#endif /* kcg_copy_array_real_100_6 */

#ifndef kcg_copy_array_int_432
#define kcg_copy_array_int_432(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_432)))
#endif /* kcg_copy_array_int_432 */

#ifndef kcg_copy_array_int_65
#define kcg_copy_array_int_65(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_65)))
#endif /* kcg_copy_array_int_65 */

#ifndef kcg_copy_array_int_350
#define kcg_copy_array_int_350(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_350)))
#endif /* kcg_copy_array_int_350 */

#ifndef kcg_copy_array_int_104
#define kcg_copy_array_int_104(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_104)))
#endif /* kcg_copy_array_int_104 */

#ifndef kcg_copy_array_int_22
#define kcg_copy_array_int_22(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_22)))
#endif /* kcg_copy_array_int_22 */

#ifndef kcg_copy_array_169698
#define kcg_copy_array_169698(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169698)))
#endif /* kcg_copy_array_169698 */

#ifndef kcg_copy_array_int_307
#define kcg_copy_array_int_307(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_307)))
#endif /* kcg_copy_array_int_307 */

#ifndef kcg_copy_array_169712
#define kcg_copy_array_169712(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169712)))
#endif /* kcg_copy_array_169712 */

#ifndef kcg_copy_array_int_428
#define kcg_copy_array_int_428(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_428)))
#endif /* kcg_copy_array_int_428 */

#ifndef kcg_copy_MRSP_internal_T_TargetManagement_types
#define kcg_copy_MRSP_internal_T_TargetManagement_types(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MRSP_internal_T_TargetManagement_types)))
#endif /* kcg_copy_MRSP_internal_T_TargetManagement_types */

#ifndef kcg_copy_array_int_264
#define kcg_copy_array_int_264(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_264)))
#endif /* kcg_copy_array_int_264 */

#ifndef kcg_copy_array_169735
#define kcg_copy_array_169735(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169735)))
#endif /* kcg_copy_array_169735 */

#ifndef kcg_copy_array_169739
#define kcg_copy_array_169739(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169739)))
#endif /* kcg_copy_array_169739 */

#ifndef kcg_copy_array_int_18
#define kcg_copy_array_int_18(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_18)))
#endif /* kcg_copy_array_int_18 */

#ifndef kcg_copy_array_169747
#define kcg_copy_array_169747(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169747)))
#endif /* kcg_copy_array_169747 */

#ifndef kcg_copy_array_real_100
#define kcg_copy_array_real_100(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_100)))
#endif /* kcg_copy_array_real_100 */

#ifndef kcg_copy_array_int_221
#define kcg_copy_array_int_221(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_221)))
#endif /* kcg_copy_array_int_221 */

#ifndef kcg_copy_A_gradient_t_SDM_GradientAcceleration_types
#define kcg_copy_A_gradient_t_SDM_GradientAcceleration_types(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (A_gradient_t_SDM_GradientAcceleration_types)))
#endif /* kcg_copy_A_gradient_t_SDM_GradientAcceleration_types */

#ifndef kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types
#define kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (GradientProfile_real_compensated_t_SDM_GradientAcceleration_types)))
#endif /* kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types */

#ifndef kcg_copy_array_169776
#define kcg_copy_array_169776(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169776)))
#endif /* kcg_copy_array_169776 */

#ifndef kcg_copy_array_int_627
#define kcg_copy_array_int_627(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_627)))
#endif /* kcg_copy_array_int_627 */

#ifndef kcg_copy_array_int_260
#define kcg_copy_array_int_260(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_260)))
#endif /* kcg_copy_array_int_260 */

#ifndef kcg_copy_MyArray_SDM_Commands_Pkg
#define kcg_copy_MyArray_SDM_Commands_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MyArray_SDM_Commands_Pkg)))
#endif /* kcg_copy_MyArray_SDM_Commands_Pkg */

#ifndef kcg_copy_array_int_14
#define kcg_copy_array_int_14(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_14)))
#endif /* kcg_copy_array_int_14 */

#ifndef kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types
#define kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (ASafeSpeedDefinition_T_CalcBrakingCurves_types)))
#endif /* kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types */

#ifndef kcg_copy_P041_OBU_sectionlist_int_T_TM
#define kcg_copy_P041_OBU_sectionlist_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P041_OBU_sectionlist_int_T_TM)))
#endif /* kcg_copy_P041_OBU_sectionlist_int_T_TM */

#ifndef kcg_copy_array_169813
#define kcg_copy_array_169813(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169813)))
#endif /* kcg_copy_array_169813 */

#ifndef kcg_copy_array_int_32_32
#define kcg_copy_array_int_32_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32_32)))
#endif /* kcg_copy_array_int_32_32 */

#ifndef kcg_copy_array_169831
#define kcg_copy_array_169831(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169831)))
#endif /* kcg_copy_array_169831 */

#ifndef kcg_copy_array_169835
#define kcg_copy_array_169835(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169835)))
#endif /* kcg_copy_array_169835 */

#ifndef kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types
#define kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (GradientProfile_real_t_SDM_GradientAcceleration_types)))
#endif /* kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types */

#ifndef kcg_copy_array_bool_256
#define kcg_copy_array_bool_256(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_256)))
#endif /* kcg_copy_array_bool_256 */

#ifndef kcg_copy_array_int_990
#define kcg_copy_array_int_990(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_990)))
#endif /* kcg_copy_array_int_990 */

#ifndef kcg_copy_array_bool_10
#define kcg_copy_array_bool_10(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_10)))
#endif /* kcg_copy_array_bool_10 */

#ifndef kcg_copy_P015_OBU_sectionlist_enum_T_TM
#define kcg_copy_P015_OBU_sectionlist_enum_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P015_OBU_sectionlist_enum_T_TM)))
#endif /* kcg_copy_P015_OBU_sectionlist_enum_T_TM */

#ifndef kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2
#define kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P027V1_trackside_sectionlist_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2 */

#ifndef kcg_copy_array_int_10
#define kcg_copy_array_int_10(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_10)))
#endif /* kcg_copy_array_int_10 */

#ifndef kcg_copy_array_169894
#define kcg_copy_array_169894(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169894)))
#endif /* kcg_copy_array_169894 */

#ifndef kcg_copy_array_169898
#define kcg_copy_array_169898(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169898)))
#endif /* kcg_copy_array_169898 */

#ifndef kcg_copy_array_real_10
#define kcg_copy_array_real_10(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_10)))
#endif /* kcg_copy_array_real_10 */

#ifndef kcg_copy_array_int_131
#define kcg_copy_array_int_131(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_131)))
#endif /* kcg_copy_array_int_131 */

#ifndef kcg_copy_array_169945
#define kcg_copy_array_169945(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_169945)))
#endif /* kcg_copy_array_169945 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array_real_6
#define kcg_copy_array_real_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_6)))
#endif /* kcg_copy_array_real_6 */

#ifndef kcg_copy_array_char_30_5_5
#define kcg_copy_array_char_30_5_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_char_30_5_5)))
#endif /* kcg_copy_array_char_30_5_5 */

#ifndef kcg_copy_array_int_494
#define kcg_copy_array_int_494(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_494)))
#endif /* kcg_copy_array_int_494 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_t_BrakeVt_t_SDMModelPkg
#define kcg_copy_t_BrakeVt_t_SDMModelPkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (t_BrakeVt_t_SDMModelPkg)))
#endif /* kcg_copy_t_BrakeVt_t_SDMModelPkg */

#ifndef kcg_copy_Array_DMI_List_Entry_Request
#define kcg_copy_Array_DMI_List_Entry_Request(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (Array_DMI_List_Entry_Request)))
#endif /* kcg_copy_Array_DMI_List_Entry_Request */

#ifndef kcg_copy_array_bool_41
#define kcg_copy_array_bool_41(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_41)))
#endif /* kcg_copy_array_bool_41 */

#ifndef kcg_copy_array_int_41
#define kcg_copy_array_int_41(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_41)))
#endif /* kcg_copy_array_int_41 */

#ifndef kcg_copy_array_int_6_221
#define kcg_copy_array_int_6_221(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6_221)))
#endif /* kcg_copy_array_int_6_221 */

#ifndef kcg_copy_array_int_978
#define kcg_copy_array_int_978(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_978)))
#endif /* kcg_copy_array_int_978 */

#ifndef kcg_copy_P046_OBU_sectionlist_array_T_TM
#define kcg_copy_P046_OBU_sectionlist_array_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P046_OBU_sectionlist_array_T_TM)))
#endif /* kcg_copy_P046_OBU_sectionlist_array_T_TM */

#ifndef kcg_copy_TransitionBuffer_T_InformationFilter_Pkg
#define kcg_copy_TransitionBuffer_T_InformationFilter_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (TransitionBuffer_T_InformationFilter_Pkg)))
#endif /* kcg_copy_TransitionBuffer_T_InformationFilter_Pkg */

#ifndef kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg
#define kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P80_ModeProfiles_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg */

#ifndef kcg_copy_array_int_283
#define kcg_copy_array_int_283(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_283)))
#endif /* kcg_copy_array_int_283 */

#ifndef kcg_copy_array_int_2_32_32
#define kcg_copy_array_int_2_32_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32_32)))
#endif /* kcg_copy_array_int_2_32_32 */

#ifndef kcg_copy_DMI_trackConditionArray_T_DMI_Types_Pkg
#define kcg_copy_DMI_trackConditionArray_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_trackConditionArray_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_trackConditionArray_T_DMI_Types_Pkg */

#ifndef kcg_copy_array_170141
#define kcg_copy_array_170141(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170141)))
#endif /* kcg_copy_array_170141 */

#ifndef kcg_copy_array_170158
#define kcg_copy_array_170158(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170158)))
#endif /* kcg_copy_array_170158 */

#ifndef kcg_copy_DMI_gradientProfileArray_T_DMI_Types_Pkg
#define kcg_copy_DMI_gradientProfileArray_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_gradientProfileArray_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_gradientProfileArray_T_DMI_Types_Pkg */

#ifndef kcg_copy_DMI_SpeedProfileArray_T_DMI_Types_Pkg
#define kcg_copy_DMI_SpeedProfileArray_T_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_SpeedProfileArray_T_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_SpeedProfileArray_T_DMI_Types_Pkg */

#ifndef kcg_copy_array_170168
#define kcg_copy_array_170168(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170168)))
#endif /* kcg_copy_array_170168 */

#ifndef kcg_copy_array_170178
#define kcg_copy_array_170178(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170178)))
#endif /* kcg_copy_array_170178 */

#ifndef kcg_copy_array_170182
#define kcg_copy_array_170182(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170182)))
#endif /* kcg_copy_array_170182 */

#ifndef kcg_copy_array_170186
#define kcg_copy_array_170186(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170186)))
#endif /* kcg_copy_array_170186 */

#ifndef kcg_copy_array_170198
#define kcg_copy_array_170198(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170198)))
#endif /* kcg_copy_array_170198 */

#ifndef kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types
#define kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types)))
#endif /* kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types */

#ifndef kcg_copy_array_170229
#define kcg_copy_array_170229(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170229)))
#endif /* kcg_copy_array_170229 */

#ifndef kcg_copy_array_int_33
#define kcg_copy_array_int_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33)))
#endif /* kcg_copy_array_int_33 */

#ifndef kcg_copy_array_170237
#define kcg_copy_array_170237(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170237)))
#endif /* kcg_copy_array_170237 */

#ifndef kcg_copy_array_int_236
#define kcg_copy_array_int_236(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_236)))
#endif /* kcg_copy_array_int_236 */

#ifndef kcg_copy_array_170250
#define kcg_copy_array_170250(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170250)))
#endif /* kcg_copy_array_170250 */

#ifndef kcg_copy_array_int_888
#define kcg_copy_array_int_888(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_888)))
#endif /* kcg_copy_array_int_888 */

#ifndef kcg_copy_array_170263
#define kcg_copy_array_170263(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170263)))
#endif /* kcg_copy_array_170263 */

#ifndef kcg_copy_array_int_72
#define kcg_copy_array_int_72(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_72)))
#endif /* kcg_copy_array_int_72 */

#ifndef kcg_copy_array_int_396
#define kcg_copy_array_int_396(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_396)))
#endif /* kcg_copy_array_int_396 */

#ifndef kcg_copy_P058_OBU_sectionlist_enum_T_TM
#define kcg_copy_P058_OBU_sectionlist_enum_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P058_OBU_sectionlist_enum_T_TM)))
#endif /* kcg_copy_P058_OBU_sectionlist_enum_T_TM */

#ifndef kcg_copy_array_170320
#define kcg_copy_array_170320(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170320)))
#endif /* kcg_copy_array_170320 */

#ifndef kcg_copy_array_int_150
#define kcg_copy_array_int_150(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_150)))
#endif /* kcg_copy_array_int_150 */

#ifndef kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2
#define kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P027V1_OBU_sectionlist_enum_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2 */

#ifndef kcg_copy_P027V1_OBU_sectionlist_int_T_TM_baseline2
#define kcg_copy_P027V1_OBU_sectionlist_int_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P027V1_OBU_sectionlist_int_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_OBU_sectionlist_int_T_TM_baseline2 */

#ifndef kcg_copy_nidCArray_T_Packet_Types_Pkg
#define kcg_copy_nidCArray_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (nidCArray_T_Packet_Types_Pkg)))
#endif /* kcg_copy_nidCArray_T_Packet_Types_Pkg */

#ifndef kcg_copy_array_int_68
#define kcg_copy_array_int_68(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_68)))
#endif /* kcg_copy_array_int_68 */

#ifndef kcg_copy_array_170353
#define kcg_copy_array_170353(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170353)))
#endif /* kcg_copy_array_170353 */

#ifndef kcg_copy_array_int_3_33_99
#define kcg_copy_array_int_3_33_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33_99)))
#endif /* kcg_copy_array_int_3_33_99 */

#ifndef kcg_copy_array_int_2_32_64
#define kcg_copy_array_int_2_32_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32_64)))
#endif /* kcg_copy_array_int_2_32_64 */

#ifndef kcg_copy_P021_trackide_sectionlist_T_TM
#define kcg_copy_P021_trackide_sectionlist_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P021_trackide_sectionlist_T_TM)))
#endif /* kcg_copy_P021_trackide_sectionlist_T_TM */

#ifndef kcg_copy_P015_OBU_sectionlist_array_T_TM
#define kcg_copy_P015_OBU_sectionlist_array_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P015_OBU_sectionlist_array_T_TM)))
#endif /* kcg_copy_P015_OBU_sectionlist_array_T_TM */

#ifndef kcg_copy_array_int_25
#define kcg_copy_array_int_25(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_25)))
#endif /* kcg_copy_array_int_25 */

#ifndef kcg_copy_array_170382
#define kcg_copy_array_170382(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170382)))
#endif /* kcg_copy_array_170382 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array_170418
#define kcg_copy_array_170418(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170418)))
#endif /* kcg_copy_array_170418 */

#ifndef kcg_copy_array_int_21
#define kcg_copy_array_int_21(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_21)))
#endif /* kcg_copy_array_int_21 */

#ifndef kcg_copy_SSP_cat_t_TA_MRSP
#define kcg_copy_SSP_cat_t_TA_MRSP(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (SSP_cat_t_TA_MRSP)))
#endif /* kcg_copy_SSP_cat_t_TA_MRSP */

#ifndef kcg_copy_nvkrintArray_T_Packet_Types_Pkg
#define kcg_copy_nvkrintArray_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (nvkrintArray_T_Packet_Types_Pkg)))
#endif /* kcg_copy_nvkrintArray_T_Packet_Types_Pkg */

#ifndef kcg_copy_array_170437
#define kcg_copy_array_170437(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170437)))
#endif /* kcg_copy_array_170437 */

#ifndef kcg_copy_ASafe_Data_T_CalcBrakingCurves_types
#define kcg_copy_ASafe_Data_T_CalcBrakingCurves_types(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (ASafe_Data_T_CalcBrakingCurves_types)))
#endif /* kcg_copy_ASafe_Data_T_CalcBrakingCurves_types */

#ifndef kcg_copy_array_170449
#define kcg_copy_array_170449(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170449)))
#endif /* kcg_copy_array_170449 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_P011_voltage_sectionlist_array_T_TM_TrainToTrack
#define kcg_copy_P011_voltage_sectionlist_array_T_TM_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P011_voltage_sectionlist_array_T_TM_TrainToTrack)))
#endif /* kcg_copy_P011_voltage_sectionlist_array_T_TM_TrainToTrack */

#ifndef kcg_copy_array_int_17
#define kcg_copy_array_int_17(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_17)))
#endif /* kcg_copy_array_int_17 */

#ifndef kcg_copy_array_int_302
#define kcg_copy_array_int_302(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_302)))
#endif /* kcg_copy_array_int_302 */

#ifndef kcg_copy_array_int_56
#define kcg_copy_array_int_56(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_56)))
#endif /* kcg_copy_array_int_56 */

#ifndef kcg_copy_array_real_9_6
#define kcg_copy_array_real_9_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_9_6)))
#endif /* kcg_copy_array_real_9_6 */

#ifndef kcg_copy_array_int_99_33
#define kcg_copy_array_int_99_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99_33)))
#endif /* kcg_copy_array_int_99_33 */

#ifndef kcg_copy_array_int_13
#define kcg_copy_array_int_13(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_13)))
#endif /* kcg_copy_array_int_13 */

#ifndef kcg_copy_array_real_13
#define kcg_copy_array_real_13(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_13)))
#endif /* kcg_copy_array_real_13 */

#ifndef kcg_copy_array_170535
#define kcg_copy_array_170535(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170535)))
#endif /* kcg_copy_array_170535 */

#ifndef kcg_copy_array_bool_256_46_30
#define kcg_copy_array_bool_256_46_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_256_46_30)))
#endif /* kcg_copy_array_bool_256_46_30 */

#ifndef kcg_copy_array_170543
#define kcg_copy_array_170543(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170543)))
#endif /* kcg_copy_array_170543 */

#ifndef kcg_copy_P021_OBU_sectionlist_int_T_TM
#define kcg_copy_P021_OBU_sectionlist_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P021_OBU_sectionlist_int_T_TM)))
#endif /* kcg_copy_P021_OBU_sectionlist_int_T_TM */

#ifndef kcg_copy_DMI_TEXT_INT_Array_T_DATA
#define kcg_copy_DMI_TEXT_INT_Array_T_DATA(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_TEXT_INT_Array_T_DATA)))
#endif /* kcg_copy_DMI_TEXT_INT_Array_T_DATA */

#ifndef kcg_copy_array_170575
#define kcg_copy_array_170575(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170575)))
#endif /* kcg_copy_array_170575 */

#ifndef kcg_copy_array_170597
#define kcg_copy_array_170597(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170597)))
#endif /* kcg_copy_array_170597 */

#ifndef kcg_copy_array_170601
#define kcg_copy_array_170601(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170601)))
#endif /* kcg_copy_array_170601 */

#ifndef kcg_copy_array_170605
#define kcg_copy_array_170605(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170605)))
#endif /* kcg_copy_array_170605 */

#ifndef kcg_copy_DMI_TEXT_DMI_Types_Pkg
#define kcg_copy_DMI_TEXT_DMI_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_TEXT_DMI_Types_Pkg)))
#endif /* kcg_copy_DMI_TEXT_DMI_Types_Pkg */

#ifndef kcg_copy_array_int_9
#define kcg_copy_array_int_9(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_9)))
#endif /* kcg_copy_array_int_9 */

#ifndef kcg_copy_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2
#define kcg_copy_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2)))
#endif /* kcg_copy_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 */

#ifndef kcg_copy_tScale
#define kcg_copy_tScale(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (tScale)))
#endif /* kcg_copy_tScale */

#ifndef kcg_copy_driverIdentifier_T_DMI_Messages_Bothways_Pkg
#define kcg_copy_driverIdentifier_T_DMI_Messages_Bothways_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (driverIdentifier_T_DMI_Messages_Bothways_Pkg)))
#endif /* kcg_copy_driverIdentifier_T_DMI_Messages_Bothways_Pkg */

#ifndef kcg_copy_P041_OBU_sectionlist_enum_T_TM
#define kcg_copy_P041_OBU_sectionlist_enum_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P041_OBU_sectionlist_enum_T_TM)))
#endif /* kcg_copy_P041_OBU_sectionlist_enum_T_TM */

#ifndef kcg_copy_P021_OBU_sectionlist_enum_T_TM
#define kcg_copy_P021_OBU_sectionlist_enum_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P021_OBU_sectionlist_enum_T_TM)))
#endif /* kcg_copy_P021_OBU_sectionlist_enum_T_TM */

#ifndef kcg_copy_array_int_48
#define kcg_copy_array_int_48(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_48)))
#endif /* kcg_copy_array_int_48 */

#ifndef kcg_copy_array_170644
#define kcg_copy_array_170644(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170644)))
#endif /* kcg_copy_array_170644 */

#ifndef kcg_copy_array_170648
#define kcg_copy_array_170648(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170648)))
#endif /* kcg_copy_array_170648 */

#ifndef kcg_copy_array_170652
#define kcg_copy_array_170652(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170652)))
#endif /* kcg_copy_array_170652 */

#ifndef kcg_copy_SSP_matrix_t_TA_MRSP
#define kcg_copy_SSP_matrix_t_TA_MRSP(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (SSP_matrix_t_TA_MRSP)))
#endif /* kcg_copy_SSP_matrix_t_TA_MRSP */

#ifndef kcg_copy_array_bool_5
#define kcg_copy_array_bool_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_5)))
#endif /* kcg_copy_array_bool_5 */

#ifndef kcg_copy_array_int_5
#define kcg_copy_array_int_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_5)))
#endif /* kcg_copy_array_int_5 */

#ifndef kcg_copy_array_real_5
#define kcg_copy_array_real_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_5)))
#endif /* kcg_copy_array_real_5 */

#ifndef kcg_copy_array_170701
#define kcg_copy_array_170701(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170701)))
#endif /* kcg_copy_array_170701 */

#ifndef kcg_copy_array_bool_1
#define kcg_copy_array_bool_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_1)))
#endif /* kcg_copy_array_bool_1 */

#ifndef kcg_copy_P044_other_data_TM_TrainToTrack
#define kcg_copy_P044_other_data_TM_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P044_other_data_TM_TrainToTrack)))
#endif /* kcg_copy_P044_other_data_TM_TrainToTrack */

#ifndef kcg_copy_array_real_1
#define kcg_copy_array_real_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_1)))
#endif /* kcg_copy_array_real_1 */

#ifndef kcg_copy_array_int_40
#define kcg_copy_array_int_40(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_40)))
#endif /* kcg_copy_array_int_40 */

#ifndef kcg_copy_DMI_Track_Description_int_array_T
#define kcg_copy_DMI_Track_Description_int_array_T(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_Track_Description_int_array_T)))
#endif /* kcg_copy_DMI_Track_Description_int_array_T */

#ifndef kcg_copy_tSpeedPoints
#define kcg_copy_tSpeedPoints(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (tSpeedPoints)))
#endif /* kcg_copy_tSpeedPoints */

#ifndef kcg_copy_array_char_243
#define kcg_copy_array_char_243(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_char_243)))
#endif /* kcg_copy_array_char_243 */

#ifndef kcg_copy_array_170759
#define kcg_copy_array_170759(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170759)))
#endif /* kcg_copy_array_170759 */

#ifndef kcg_copy_ModeDecisionTableType_DataDictionary_Pkg
#define kcg_copy_ModeDecisionTableType_DataDictionary_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (ModeDecisionTableType_DataDictionary_Pkg)))
#endif /* kcg_copy_ModeDecisionTableType_DataDictionary_Pkg */

#ifndef kcg_copy_MetadataTruthtable_T1_CheckEuroradioMessage
#define kcg_copy_MetadataTruthtable_T1_CheckEuroradioMessage(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MetadataTruthtable_T1_CheckEuroradioMessage)))
#endif /* kcg_copy_MetadataTruthtable_T1_CheckEuroradioMessage */

#ifndef kcg_copy_array_170789
#define kcg_copy_array_170789(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170789)))
#endif /* kcg_copy_array_170789 */

#ifndef kcg_copy_array_int_891
#define kcg_copy_array_int_891(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_891)))
#endif /* kcg_copy_array_int_891 */

#ifndef kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg
#define kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (aNID_RADIO_T_Packet_TrainTypes_Pkg)))
#endif /* kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg */

#ifndef kcg_copy_array_170826
#define kcg_copy_array_170826(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170826)))
#endif /* kcg_copy_array_170826 */

#ifndef kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types
#define kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (ParabolaCurveValid_T_CalcBrakingCurves_types)))
#endif /* kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types */

#ifndef kcg_copy_array_bool_32
#define kcg_copy_array_bool_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_32)))
#endif /* kcg_copy_array_bool_32 */

#ifndef kcg_copy_array_real_114
#define kcg_copy_array_real_114(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_114)))
#endif /* kcg_copy_array_real_114 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array_real_32
#define kcg_copy_array_real_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_32)))
#endif /* kcg_copy_array_real_32 */

#ifndef kcg_copy_array_int_7_33_231
#define kcg_copy_array_int_7_33_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33_231)))
#endif /* kcg_copy_array_int_7_33_231 */

#ifndef kcg_copy_array_bool_110
#define kcg_copy_array_bool_110(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_110)))
#endif /* kcg_copy_array_bool_110 */

#ifndef kcg_copy_array_int_110
#define kcg_copy_array_int_110(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_110)))
#endif /* kcg_copy_array_int_110 */

#ifndef kcg_copy_array_int_395
#define kcg_copy_array_int_395(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_395)))
#endif /* kcg_copy_array_int_395 */

#ifndef kcg_copy_array_real_110
#define kcg_copy_array_real_110(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_110)))
#endif /* kcg_copy_array_real_110 */

#ifndef kcg_copy_array_int_28
#define kcg_copy_array_int_28(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_28)))
#endif /* kcg_copy_array_int_28 */

#ifndef kcg_copy_array_170971
#define kcg_copy_array_170971(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170971)))
#endif /* kcg_copy_array_170971 */

#ifndef kcg_copy_array_170975
#define kcg_copy_array_170975(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_170975)))
#endif /* kcg_copy_array_170975 */

#ifndef kcg_copy_array_int_128_32
#define kcg_copy_array_int_128_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128_32)))
#endif /* kcg_copy_array_int_128_32 */

#ifndef kcg_copy_P005_sections_array_flat_T_TM
#define kcg_copy_P005_sections_array_flat_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P005_sections_array_flat_T_TM)))
#endif /* kcg_copy_P005_sections_array_flat_T_TM */

#ifndef kcg_copy_DMI_EVC_Level_Data_int_array_T_DATA
#define kcg_copy_DMI_EVC_Level_Data_int_array_T_DATA(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_EVC_Level_Data_int_array_T_DATA)))
#endif /* kcg_copy_DMI_EVC_Level_Data_int_array_T_DATA */

#ifndef kcg_copy_array_int_2_33_99
#define kcg_copy_array_int_2_33_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_33_99)))
#endif /* kcg_copy_array_int_2_33_99 */

#ifndef kcg_copy_P046_OBU_sectionlist_int_T_TM
#define kcg_copy_P046_OBU_sectionlist_int_T_TM(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P046_OBU_sectionlist_int_T_TM)))
#endif /* kcg_copy_P046_OBU_sectionlist_int_T_TM */

#ifndef kcg_copy_IterPacket58List_T_Packet_Types_Pkg
#define kcg_copy_IterPacket58List_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (IterPacket58List_T_Packet_Types_Pkg)))
#endif /* kcg_copy_IterPacket58List_T_Packet_Types_Pkg */

#ifndef kcg_copy_array_int_3_33_231
#define kcg_copy_array_int_3_33_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33_231)))
#endif /* kcg_copy_array_int_3_33_231 */

#ifndef kcg_copy_array_int_231_33
#define kcg_copy_array_int_231_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231_33)))
#endif /* kcg_copy_array_int_231_33 */

#ifndef kcg_copy_array_int_24
#define kcg_copy_array_int_24(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_24)))
#endif /* kcg_copy_array_int_24 */

#ifndef kcg_copy_array_int_961
#define kcg_copy_array_int_961(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_961)))
#endif /* kcg_copy_array_int_961 */

#ifndef kcg_copy_array_int_430
#define kcg_copy_array_int_430(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_430)))
#endif /* kcg_copy_array_int_430 */

#ifndef kcg_copy_array_172617
#define kcg_copy_array_172617(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_172617)))
#endif /* kcg_copy_array_172617 */

#ifndef kcg_copy_array_172621
#define kcg_copy_array_172621(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_172621)))
#endif /* kcg_copy_array_172621 */

#ifndef kcg_copy_SSPArray_T_Packet_Types_Pkg
#define kcg_copy_SSPArray_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (SSPArray_T_Packet_Types_Pkg)))
#endif /* kcg_copy_SSPArray_T_Packet_Types_Pkg */

#ifndef kcg_copy_DiffArray_T_Packet_Types_Pkg
#define kcg_copy_DiffArray_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DiffArray_T_Packet_Types_Pkg)))
#endif /* kcg_copy_DiffArray_T_Packet_Types_Pkg */

#ifndef kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg
#define kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P21_GradientProfiles_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg */

#ifndef kcg_copy_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg
#define kcg_copy_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg)))
#endif /* kcg_copy_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg */

#ifndef kcg_copy_nvkvintsetArray_T_Packet_Types_Pkg
#define kcg_copy_nvkvintsetArray_T_Packet_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (nvkvintsetArray_T_Packet_Types_Pkg)))
#endif /* kcg_copy_nvkvintsetArray_T_Packet_Types_Pkg */

#ifndef kcg_copy_array_int_266
#define kcg_copy_array_int_266(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_266)))
#endif /* kcg_copy_array_int_266 */

#ifndef kcg_copy_array_172650
#define kcg_copy_array_172650(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_172650)))
#endif /* kcg_copy_array_172650 */

#ifndef kcg_copy_array_int_20
#define kcg_copy_array_int_20(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_20)))
#endif /* kcg_copy_array_int_20 */

#ifndef kcg_copy_array_char_30_5
#define kcg_copy_array_char_30_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_char_30_5)))
#endif /* kcg_copy_array_char_30_5 */

#ifndef kcg_copy_array_172678
#define kcg_copy_array_172678(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_172678)))
#endif /* kcg_copy_array_172678 */

#ifndef kcg_copy_array_172689
#define kcg_copy_array_172689(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_172689)))
#endif /* kcg_copy_array_172689 */

#ifndef kcg_copy_DMI_Text_Message_int_array_T_DATA
#define kcg_copy_DMI_Text_Message_int_array_T_DATA(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (DMI_Text_Message_int_array_T_DATA)))
#endif /* kcg_copy_DMI_Text_Message_int_array_T_DATA */

#ifndef kcg_copy_array_int_301
#define kcg_copy_array_int_301(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_301)))
#endif /* kcg_copy_array_int_301 */

#ifndef kcg_copy_array_172706
#define kcg_copy_array_172706(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_172706)))
#endif /* kcg_copy_array_172706 */

#ifndef kcg_copy_array_172744
#define kcg_copy_array_172744(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_172744)))
#endif /* kcg_copy_array_172744 */

#ifndef kcg_copy_array_bool_12
#define kcg_copy_array_bool_12(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_12)))
#endif /* kcg_copy_array_bool_12 */

#ifndef kcg_copy_array_int_12
#define kcg_copy_array_int_12(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_12)))
#endif /* kcg_copy_array_int_12 */

#ifndef kcg_copy_array_real_12
#define kcg_copy_array_real_12(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_12)))
#endif /* kcg_copy_array_real_12 */

#ifndef kcg_copy_array_char_12
#define kcg_copy_array_char_12(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_char_12)))
#endif /* kcg_copy_array_char_12 */

#ifndef kcg_copy_CompressedPacketData_T_Common_Types_Pkg
#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (CompressedPacketData_T_Common_Types_Pkg)))
#endif /* kcg_copy_CompressedPacketData_T_Common_Types_Pkg */

#ifndef kcg_copy_array_172785
#define kcg_copy_array_172785(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_172785)))
#endif /* kcg_copy_array_172785 */

#ifndef kcg_copy_array_bool_8
#define kcg_copy_array_bool_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_8)))
#endif /* kcg_copy_array_bool_8 */

#ifndef kcg_copy_array_int_8
#define kcg_copy_array_int_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_8)))
#endif /* kcg_copy_array_int_8 */

#ifndef kcg_copy_array_real_8
#define kcg_copy_array_real_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_8)))
#endif /* kcg_copy_array_real_8 */

#ifndef kcg_copy_array_int_496
#define kcg_copy_array_int_496(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_496)))
#endif /* kcg_copy_array_int_496 */

#ifndef kcg_copy_array_172875
#define kcg_copy_array_172875(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_172875)))
#endif /* kcg_copy_array_172875 */

#ifndef kcg_copy_array_int_129
#define kcg_copy_array_int_129(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_129)))
#endif /* kcg_copy_array_int_129 */

#ifdef kcg_use_P21_GradientProfile_T_Packet_Types_Pkg
#ifndef kcg_comp_P21_GradientProfile_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P21_GradientProfile_T_Packet_Types_Pkg(
  P21_GradientProfile_T_Packet_Types_Pkg *kcg_c1,
  P21_GradientProfile_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P21_GradientProfile_T_Packet_Types_Pkg */
#endif /* kcg_use_P21_GradientProfile_T_Packet_Types_Pkg */

#ifdef kcg_use_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg
#ifndef kcg_comp_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg
extern kcg_bool kcg_comp_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg(
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *kcg_c1,
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg */
#endif /* kcg_use_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg */

#ifdef kcg_use_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
#ifndef kcg_comp_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
extern kcg_bool kcg_comp_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */
#endif /* kcg_use_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_DMI_DriverAck_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_DriverAck_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_DriverAck_T_DMI_Types_Pkg(
  DMI_DriverAck_T_DMI_Types_Pkg *kcg_c1,
  DMI_DriverAck_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_DriverAck_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_DriverAck_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg(
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg(
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_DataForSupervision_nextGen_t_TrackAtlasTypes
#ifndef kcg_comp_DataForSupervision_nextGen_t_TrackAtlasTypes
extern kcg_bool kcg_comp_DataForSupervision_nextGen_t_TrackAtlasTypes(
  DataForSupervision_nextGen_t_TrackAtlasTypes *kcg_c1,
  DataForSupervision_nextGen_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_DataForSupervision_nextGen_t_TrackAtlasTypes */
#endif /* kcg_use_DataForSupervision_nextGen_t_TrackAtlasTypes */

#ifdef kcg_use_P041_OBU_T_TM
#ifndef kcg_comp_P041_OBU_T_TM
extern kcg_bool kcg_comp_P041_OBU_T_TM(
  P041_OBU_T_TM *kcg_c1,
  P041_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P041_OBU_T_TM */
#endif /* kcg_use_P041_OBU_T_TM */

#ifdef kcg_use_P027V1_section_enum_T_TM_baseline2
#ifndef kcg_comp_P027V1_section_enum_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_section_enum_T_TM_baseline2(
  P027V1_section_enum_T_TM_baseline2 *kcg_c1,
  P027V1_section_enum_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_section_enum_T_TM_baseline2 */
#endif /* kcg_use_P027V1_section_enum_T_TM_baseline2 */

#ifdef kcg_use_P005_OBU_T_TM
#ifndef kcg_comp_P005_OBU_T_TM
extern kcg_bool kcg_comp_P005_OBU_T_TM(
  P005_OBU_T_TM *kcg_c1,
  P005_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P005_OBU_T_TM */
#endif /* kcg_use_P005_OBU_T_TM */

#ifdef kcg_use_nothing_to_resume_profile_follow_T_TIU_Types_Pkg
#ifndef kcg_comp_nothing_to_resume_profile_follow_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_nothing_to_resume_profile_follow_T_TIU_Types_Pkg(
  nothing_to_resume_profile_follow_T_TIU_Types_Pkg *kcg_c1,
  nothing_to_resume_profile_follow_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nothing_to_resume_profile_follow_T_TIU_Types_Pkg */
#endif /* kcg_use_nothing_to_resume_profile_follow_T_TIU_Types_Pkg */

#ifdef kcg_use_P045_trackside_int_T_TM
#ifndef kcg_comp_P045_trackside_int_T_TM
extern kcg_bool kcg_comp_P045_trackside_int_T_TM(
  P045_trackside_int_T_TM *kcg_c1,
  P045_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P045_trackside_int_T_TM */
#endif /* kcg_use_P045_trackside_int_T_TM */

#ifdef kcg_use_P027V1_section_enum_qdiff_T_TM_baseline2
#ifndef kcg_comp_P027V1_section_enum_qdiff_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_section_enum_qdiff_T_TM_baseline2(
  P027V1_section_enum_qdiff_T_TM_baseline2 *kcg_c1,
  P027V1_section_enum_qdiff_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_section_enum_qdiff_T_TM_baseline2 */
#endif /* kcg_use_P027V1_section_enum_qdiff_T_TM_baseline2 */

#ifdef kcg_use_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg
#ifndef kcg_comp_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg
extern kcg_bool kcg_comp_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *kcg_c1,
  BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *kcg_c2);
#endif /* kcg_comp_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg */
#endif /* kcg_use_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg */

#ifdef kcg_use_Endtimer_t_TrackAtlasTypes
#ifndef kcg_comp_Endtimer_t_TrackAtlasTypes
extern kcg_bool kcg_comp_Endtimer_t_TrackAtlasTypes(
  Endtimer_t_TrackAtlasTypes *kcg_c1,
  Endtimer_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_Endtimer_t_TrackAtlasTypes */
#endif /* kcg_use_Endtimer_t_TrackAtlasTypes */

#ifdef kcg_use_A_gradient_element_t_SDM_GradientAcceleration_types
#ifndef kcg_comp_A_gradient_element_t_SDM_GradientAcceleration_types
extern kcg_bool kcg_comp_A_gradient_element_t_SDM_GradientAcceleration_types(
  A_gradient_element_t_SDM_GradientAcceleration_types *kcg_c1,
  A_gradient_element_t_SDM_GradientAcceleration_types *kcg_c2);
#endif /* kcg_comp_A_gradient_element_t_SDM_GradientAcceleration_types */
#endif /* kcg_use_A_gradient_element_t_SDM_GradientAcceleration_types */

#ifdef kcg_use_struct_168546
#ifndef kcg_comp_struct_168546
extern kcg_bool kcg_comp_struct_168546(
  struct_168546 *kcg_c1,
  struct_168546 *kcg_c2);
#endif /* kcg_comp_struct_168546 */
#endif /* kcg_use_struct_168546 */

#ifdef kcg_use_centerOfBalisePosition_T_BG_Types_Pkg
#ifndef kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg
extern kcg_bool kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg(
  centerOfBalisePosition_T_BG_Types_Pkg *kcg_c1,
  centerOfBalisePosition_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg */
#endif /* kcg_use_centerOfBalisePosition_T_BG_Types_Pkg */

#ifdef kcg_use_RadioTrackTrainMessageQueueEntry_T
#ifndef kcg_comp_RadioTrackTrainMessageQueueEntry_T
extern kcg_bool kcg_comp_RadioTrackTrainMessageQueueEntry_T(
  RadioTrackTrainMessageQueueEntry_T *kcg_c1,
  RadioTrackTrainMessageQueueEntry_T *kcg_c2);
#endif /* kcg_comp_RadioTrackTrainMessageQueueEntry_T */
#endif /* kcg_use_RadioTrackTrainMessageQueueEntry_T */

#ifdef kcg_use_TrackSectionData_T_InfraLib
#ifndef kcg_comp_TrackSectionData_T_InfraLib
extern kcg_bool kcg_comp_TrackSectionData_T_InfraLib(
  TrackSectionData_T_InfraLib *kcg_c1,
  TrackSectionData_T_InfraLib *kcg_c2);
#endif /* kcg_comp_TrackSectionData_T_InfraLib */
#endif /* kcg_use_TrackSectionData_T_InfraLib */

#ifdef kcg_use_a_Brake_t_SDMConversionModelPkg
#ifndef kcg_comp_a_Brake_t_SDMConversionModelPkg
extern kcg_bool kcg_comp_a_Brake_t_SDMConversionModelPkg(
  a_Brake_t_SDMConversionModelPkg *kcg_c1,
  a_Brake_t_SDMConversionModelPkg *kcg_c2);
#endif /* kcg_comp_a_Brake_t_SDMConversionModelPkg */
#endif /* kcg_use_a_Brake_t_SDMConversionModelPkg */

#ifdef kcg_use_RadioTrackTrainMessageQueue_T
#ifndef kcg_comp_RadioTrackTrainMessageQueue_T
extern kcg_bool kcg_comp_RadioTrackTrainMessageQueue_T(
  RadioTrackTrainMessageQueue_T *kcg_c1,
  RadioTrackTrainMessageQueue_T *kcg_c2);
#endif /* kcg_comp_RadioTrackTrainMessageQueue_T */
#endif /* kcg_use_RadioTrackTrainMessageQueue_T */

#ifdef kcg_use_CompressedRadioMessage_TM
#ifndef kcg_comp_CompressedRadioMessage_TM
extern kcg_bool kcg_comp_CompressedRadioMessage_TM(
  CompressedRadioMessage_TM *kcg_c1,
  CompressedRadioMessage_TM *kcg_c2);
#endif /* kcg_comp_CompressedRadioMessage_TM */
#endif /* kcg_use_CompressedRadioMessage_TM */

#ifdef kcg_use_CompressedBaliseMessage_TM
#ifndef kcg_comp_CompressedBaliseMessage_TM
extern kcg_bool kcg_comp_CompressedBaliseMessage_TM(
  CompressedBaliseMessage_TM *kcg_c1,
  CompressedBaliseMessage_TM *kcg_c2);
#endif /* kcg_comp_CompressedBaliseMessage_TM */
#endif /* kcg_use_CompressedBaliseMessage_TM */

#ifndef kcg_comp_mobileRegistrationContext_T_RCM_Types_Pkg
extern kcg_bool kcg_comp_mobileRegistrationContext_T_RCM_Types_Pkg(
  mobileRegistrationContext_T_RCM_Types_Pkg *kcg_c1,
  mobileRegistrationContext_T_RCM_Types_Pkg *kcg_c2);
#define kcg_use_mobileRegistrationContext_T_RCM_Types_Pkg
#endif /* kcg_comp_mobileRegistrationContext_T_RCM_Types_Pkg */

#ifdef kcg_use_morcStatus_T_RCM_Session_Types_Pkg
#ifndef kcg_comp_morcStatus_T_RCM_Session_Types_Pkg
extern kcg_bool kcg_comp_morcStatus_T_RCM_Session_Types_Pkg(
  morcStatus_T_RCM_Session_Types_Pkg *kcg_c1,
  morcStatus_T_RCM_Session_Types_Pkg *kcg_c2);
#endif /* kcg_comp_morcStatus_T_RCM_Session_Types_Pkg */
#endif /* kcg_use_morcStatus_T_RCM_Session_Types_Pkg */

#ifdef kcg_use_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg
#ifndef kcg_comp_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg
extern kcg_bool kcg_comp_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
  m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg *kcg_c1,
  m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg *kcg_c2);
#endif /* kcg_comp_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg */
#endif /* kcg_use_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg */

#ifdef kcg_use_struct_168630
#ifndef kcg_comp_struct_168630
extern kcg_bool kcg_comp_struct_168630(
  struct_168630 *kcg_c1,
  struct_168630 *kcg_c2);
#endif /* kcg_comp_struct_168630 */
#endif /* kcg_use_struct_168630 */

#ifdef kcg_use_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_TrainLocations_real_T_SDM_Types_Pkg
#ifndef kcg_comp_TrainLocations_real_T_SDM_Types_Pkg
extern kcg_bool kcg_comp_TrainLocations_real_T_SDM_Types_Pkg(
  TrainLocations_real_T_SDM_Types_Pkg *kcg_c1,
  TrainLocations_real_T_SDM_Types_Pkg *kcg_c2);
#endif /* kcg_comp_TrainLocations_real_T_SDM_Types_Pkg */
#endif /* kcg_use_TrainLocations_real_T_SDM_Types_Pkg */

#ifdef kcg_use_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg
#ifndef kcg_comp_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg
extern kcg_bool kcg_comp_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg(
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *kcg_c1,
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg */
#endif /* kcg_use_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg */

#ifdef kcg_use_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg
#ifndef kcg_comp_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg(
  P137_StopIfInStaffResponsible_T_Packet_Types_Pkg *kcg_c1,
  P137_StopIfInStaffResponsible_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg */
#endif /* kcg_use_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg */

#ifdef kcg_use_mv_Map_t_SDMConversionModelPkg
#ifndef kcg_comp_mv_Map_t_SDMConversionModelPkg
extern kcg_bool kcg_comp_mv_Map_t_SDMConversionModelPkg(
  mv_Map_t_SDMConversionModelPkg *kcg_c1,
  mv_Map_t_SDMConversionModelPkg *kcg_c2);
#endif /* kcg_comp_mv_Map_t_SDMConversionModelPkg */
#endif /* kcg_use_mv_Map_t_SDMConversionModelPkg */

#ifdef kcg_use_DMI_level_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_level_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_level_T_DMI_Types_Pkg(
  DMI_level_T_DMI_Types_Pkg *kcg_c1,
  DMI_level_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_level_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_level_T_DMI_Types_Pkg */

#ifdef kcg_use_sNID_RADIO_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg(
  sNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c1,
  sNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_sNID_RADIO_T_Packet_TrainTypes_Pkg */

#ifndef kcg_comp_MetadataElement_T_Common_Types_Pkg
extern kcg_bool kcg_comp_MetadataElement_T_Common_Types_Pkg(
  MetadataElement_T_Common_Types_Pkg *kcg_c1,
  MetadataElement_T_Common_Types_Pkg *kcg_c2);
#define kcg_use_MetadataElement_T_Common_Types_Pkg
#endif /* kcg_comp_MetadataElement_T_Common_Types_Pkg */

#ifdef kcg_use_DiagMsg_T_RBC_Diagnostic_Pkg
#ifndef kcg_comp_DiagMsg_T_RBC_Diagnostic_Pkg
extern kcg_bool kcg_comp_DiagMsg_T_RBC_Diagnostic_Pkg(
  DiagMsg_T_RBC_Diagnostic_Pkg *kcg_c1,
  DiagMsg_T_RBC_Diagnostic_Pkg *kcg_c2);
#endif /* kcg_comp_DiagMsg_T_RBC_Diagnostic_Pkg */
#endif /* kcg_use_DiagMsg_T_RBC_Diagnostic_Pkg */

#ifdef kcg_use_P027V1_OBU_body_enum_T_TM_baseline2
#ifndef kcg_comp_P027V1_OBU_body_enum_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_OBU_body_enum_T_TM_baseline2(
  P027V1_OBU_body_enum_T_TM_baseline2 *kcg_c1,
  P027V1_OBU_body_enum_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_OBU_body_enum_T_TM_baseline2 */
#endif /* kcg_use_P027V1_OBU_body_enum_T_TM_baseline2 */

#ifdef kcg_use_T_Data_From_Localisation_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_From_Localisation_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_From_Localisation_Level_And_Mode_Types_Pkg(
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_Localisation_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_From_Localisation_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_From_Localisation_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_DMI_DriverRequest_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_DriverRequest_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_DriverRequest_T_DMI_Types_Pkg(
  DMI_DriverRequest_T_DMI_Types_Pkg *kcg_c1,
  DMI_DriverRequest_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_DriverRequest_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_DriverRequest_T_DMI_Types_Pkg */

#ifndef kcg_comp_mobileConnectionContext_T_RCM_Types_Pkg
extern kcg_bool kcg_comp_mobileConnectionContext_T_RCM_Types_Pkg(
  mobileConnectionContext_T_RCM_Types_Pkg *kcg_c1,
  mobileConnectionContext_T_RCM_Types_Pkg *kcg_c2);
#define kcg_use_mobileConnectionContext_T_RCM_Types_Pkg
#endif /* kcg_comp_mobileConnectionContext_T_RCM_Types_Pkg */

#ifdef kcg_use_trainDataStatus_T_trainData_Types_pkg
#ifndef kcg_comp_trainDataStatus_T_trainData_Types_pkg
extern kcg_bool kcg_comp_trainDataStatus_T_trainData_Types_pkg(
  trainDataStatus_T_trainData_Types_pkg *kcg_c1,
  trainDataStatus_T_trainData_Types_pkg *kcg_c2);
#endif /* kcg_comp_trainDataStatus_T_trainData_Types_pkg */
#endif /* kcg_use_trainDataStatus_T_trainData_Types_pkg */

#ifdef kcg_use_P41_LevelTransitionOrder_T_Packet_Types_Pkg
#ifndef kcg_comp_P41_LevelTransitionOrder_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P41_LevelTransitionOrder_T_Packet_Types_Pkg(
  P41_LevelTransitionOrder_T_Packet_Types_Pkg *kcg_c1,
  P41_LevelTransitionOrder_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P41_LevelTransitionOrder_T_Packet_Types_Pkg */
#endif /* kcg_use_P41_LevelTransitionOrder_T_Packet_Types_Pkg */

#ifdef kcg_use_NationalParams_T
#ifndef kcg_comp_NationalParams_T
extern kcg_bool kcg_comp_NationalParams_T(
  NationalParams_T *kcg_c1,
  NationalParams_T *kcg_c2);
#endif /* kcg_comp_NationalParams_T */
#endif /* kcg_use_NationalParams_T */

#ifdef kcg_use_struct_168859
#ifndef kcg_comp_struct_168859
extern kcg_bool kcg_comp_struct_168859(
  struct_168859 *kcg_c1,
  struct_168859 *kcg_c2);
#endif /* kcg_comp_struct_168859 */
#endif /* kcg_use_struct_168859 */

#ifdef kcg_use_M_008_T_TM_radio_messages
#ifndef kcg_comp_M_008_T_TM_radio_messages
extern kcg_bool kcg_comp_M_008_T_TM_radio_messages(
  M_008_T_TM_radio_messages *kcg_c1,
  M_008_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_008_T_TM_radio_messages */
#endif /* kcg_use_M_008_T_TM_radio_messages */

#ifdef kcg_use_struct_168880
#ifndef kcg_comp_struct_168880
extern kcg_bool kcg_comp_struct_168880(
  struct_168880 *kcg_c1,
  struct_168880 *kcg_c2);
#endif /* kcg_comp_struct_168880 */
#endif /* kcg_use_struct_168880 */

#ifdef kcg_use_M_032_int_T_TM_radio_messages
#ifndef kcg_comp_M_032_int_T_TM_radio_messages
extern kcg_bool kcg_comp_M_032_int_T_TM_radio_messages(
  M_032_int_T_TM_radio_messages *kcg_c1,
  M_032_int_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_032_int_T_TM_radio_messages */
#endif /* kcg_use_M_032_int_T_TM_radio_messages */

#ifdef kcg_use_M_008_int_T_TM_radio_messages
#ifndef kcg_comp_M_008_int_T_TM_radio_messages
extern kcg_bool kcg_comp_M_008_int_T_TM_radio_messages(
  M_008_int_T_TM_radio_messages *kcg_c1,
  M_008_int_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_008_int_T_TM_radio_messages */
#endif /* kcg_use_M_008_int_T_TM_radio_messages */

#ifdef kcg_use_P057_trackside_int_T_TM
#ifndef kcg_comp_P057_trackside_int_T_TM
extern kcg_bool kcg_comp_P057_trackside_int_T_TM(
  P057_trackside_int_T_TM *kcg_c1,
  P057_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P057_trackside_int_T_TM */
#endif /* kcg_use_P057_trackside_int_T_TM */

#ifdef kcg_use_P005_section_int_T_TM
#ifndef kcg_comp_P005_section_int_T_TM
extern kcg_bool kcg_comp_P005_section_int_T_TM(
  P005_section_int_T_TM *kcg_c1,
  P005_section_int_T_TM *kcg_c2);
#endif /* kcg_comp_P005_section_int_T_TM */
#endif /* kcg_use_P005_section_int_T_TM */

#ifdef kcg_use_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_T_trac_t_TargetLimits_Pkg
#ifndef kcg_comp_T_trac_t_TargetLimits_Pkg
extern kcg_bool kcg_comp_T_trac_t_TargetLimits_Pkg(
  T_trac_t_TargetLimits_Pkg *kcg_c1,
  T_trac_t_TargetLimits_Pkg *kcg_c2);
#endif /* kcg_comp_T_trac_t_TargetLimits_Pkg */
#endif /* kcg_use_T_trac_t_TargetLimits_Pkg */

#ifdef kcg_use_MAReqParams_T
#ifndef kcg_comp_MAReqParams_T
extern kcg_bool kcg_comp_MAReqParams_T(
  MAReqParams_T *kcg_c1,
  MAReqParams_T *kcg_c2);
#endif /* kcg_comp_MAReqParams_T */
#endif /* kcg_use_MAReqParams_T */

#ifdef kcg_use_TIU_commandStatus_T_TIU_Types_Pkg
#ifndef kcg_comp_TIU_commandStatus_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_TIU_commandStatus_T_TIU_Types_Pkg(
  TIU_commandStatus_T_TIU_Types_Pkg *kcg_c1,
  TIU_commandStatus_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_TIU_commandStatus_T_TIU_Types_Pkg */
#endif /* kcg_use_TIU_commandStatus_T_TIU_Types_Pkg */

#ifdef kcg_use_struct_169021
#ifndef kcg_comp_struct_169021
extern kcg_bool kcg_comp_struct_169021(
  struct_169021 *kcg_c1,
  struct_169021 *kcg_c2);
#endif /* kcg_comp_struct_169021 */
#endif /* kcg_use_struct_169021 */

#ifdef kcg_use_DMI_To_Modes_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_To_Modes_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_To_Modes_T_DMI_Types_Pkg(
  DMI_To_Modes_T_DMI_Types_Pkg *kcg_c1,
  DMI_To_Modes_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_To_Modes_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_To_Modes_T_DMI_Types_Pkg */

#ifdef kcg_use_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store
#ifndef kcg_comp_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store
extern kcg_bool kcg_comp_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store(
  NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store *kcg_c1,
  NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store *kcg_c2);
#endif /* kcg_comp_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store */
#endif /* kcg_use_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store */

#ifdef kcg_use_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg
#ifndef kcg_comp_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg
extern kcg_bool kcg_comp_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg(
  positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg *kcg_c1,
  positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg *kcg_c2);
#endif /* kcg_comp_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg */
#endif /* kcg_use_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg */

#ifdef kcg_use_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg(
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_Target_real_T_TargetManagement_types
#ifndef kcg_comp_Target_real_T_TargetManagement_types
extern kcg_bool kcg_comp_Target_real_T_TargetManagement_types(
  Target_real_T_TargetManagement_types *kcg_c1,
  Target_real_T_TargetManagement_types *kcg_c2);
#endif /* kcg_comp_Target_real_T_TargetManagement_types */
#endif /* kcg_use_Target_real_T_TargetManagement_types */

#ifdef kcg_use_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg
#ifndef kcg_comp_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg
extern kcg_bool kcg_comp_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg(
  safeRadioConnectionIndication_T_RCM_Session_Types_Pkg *kcg_c1,
  safeRadioConnectionIndication_T_RCM_Session_Types_Pkg *kcg_c2);
#endif /* kcg_comp_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg */
#endif /* kcg_use_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg */

#ifdef kcg_use_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
#ifndef kcg_comp_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
extern kcg_bool kcg_comp_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */
#endif /* kcg_use_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_P041_section_int_T_TM
#ifndef kcg_comp_P041_section_int_T_TM
extern kcg_bool kcg_comp_P041_section_int_T_TM(
  P041_section_int_T_TM *kcg_c1,
  P041_section_int_T_TM *kcg_c2);
#endif /* kcg_comp_P041_section_int_T_TM */
#endif /* kcg_use_P041_section_int_T_TM */

#ifdef kcg_use_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg(
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_M_132_T_TM_radio_messages
#ifndef kcg_comp_M_132_T_TM_radio_messages
extern kcg_bool kcg_comp_M_132_T_TM_radio_messages(
  M_132_T_TM_radio_messages *kcg_c1,
  M_132_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_132_T_TM_radio_messages */
#endif /* kcg_use_M_132_T_TM_radio_messages */

#ifdef kcg_use_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg(
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_To_BG_Management_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_extractTargetsMRSPACC_TargetManagement_pkg
#ifndef kcg_comp_extractTargetsMRSPACC_TargetManagement_pkg
extern kcg_bool kcg_comp_extractTargetsMRSPACC_TargetManagement_pkg(
  extractTargetsMRSPACC_TargetManagement_pkg *kcg_c1,
  extractTargetsMRSPACC_TargetManagement_pkg *kcg_c2);
#endif /* kcg_comp_extractTargetsMRSPACC_TargetManagement_pkg */
#endif /* kcg_use_extractTargetsMRSPACC_TargetManagement_pkg */

#ifdef kcg_use_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg(
  T_LevelTansitionInfo_Level_And_Mode_Types_Pkg *kcg_c1,
  T_LevelTansitionInfo_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_BG_Message_T_BG_Types_Pkg
#ifndef kcg_comp_BG_Message_T_BG_Types_Pkg
extern kcg_bool kcg_comp_BG_Message_T_BG_Types_Pkg(
  BG_Message_T_BG_Types_Pkg *kcg_c1,
  BG_Message_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_BG_Message_T_BG_Types_Pkg */
#endif /* kcg_use_BG_Message_T_BG_Types_Pkg */

#ifdef kcg_use_Telegram_T_BG_Types_Pkg
#ifndef kcg_comp_Telegram_T_BG_Types_Pkg
extern kcg_bool kcg_comp_Telegram_T_BG_Types_Pkg(
  Telegram_T_BG_Types_Pkg *kcg_c1,
  Telegram_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Telegram_T_BG_Types_Pkg */
#endif /* kcg_use_Telegram_T_BG_Types_Pkg */

#ifdef kcg_use_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg
#ifndef kcg_comp_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg
extern kcg_bool kcg_comp_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg(
  ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg *kcg_c1,
  ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg *kcg_c2);
#endif /* kcg_comp_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg */
#endif /* kcg_use_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg */

#ifdef kcg_use_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg
#ifndef kcg_comp_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg
extern kcg_bool kcg_comp_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg */
#endif /* kcg_use_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_struct_169236
#ifndef kcg_comp_struct_169236
extern kcg_bool kcg_comp_struct_169236(
  struct_169236 *kcg_c1,
  struct_169236 *kcg_c2);
#endif /* kcg_comp_struct_169236 */
#endif /* kcg_use_struct_169236 */

#ifdef kcg_use_ParabolaArc_T_CalcBrakingCurves_types
#ifndef kcg_comp_ParabolaArc_T_CalcBrakingCurves_types
extern kcg_bool kcg_comp_ParabolaArc_T_CalcBrakingCurves_types(
  ParabolaArc_T_CalcBrakingCurves_types *kcg_c1,
  ParabolaArc_T_CalcBrakingCurves_types *kcg_c2);
#endif /* kcg_comp_ParabolaArc_T_CalcBrakingCurves_types */
#endif /* kcg_use_ParabolaArc_T_CalcBrakingCurves_types */

#ifdef kcg_use_DMI_train_length_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_train_length_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_train_length_T_DMI_Types_Pkg(
  DMI_train_length_T_DMI_Types_Pkg *kcg_c1,
  DMI_train_length_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_train_length_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_train_length_T_DMI_Types_Pkg */

#ifdef kcg_use_IterPacket58_T_Packet_Types_Pkg
#ifndef kcg_comp_IterPacket58_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_IterPacket58_T_Packet_Types_Pkg(
  IterPacket58_T_Packet_Types_Pkg *kcg_c1,
  IterPacket58_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_IterPacket58_T_Packet_Types_Pkg */
#endif /* kcg_use_IterPacket58_T_Packet_Types_Pkg */

#ifdef kcg_use_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg
#ifndef kcg_comp_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg
extern kcg_bool kcg_comp_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg(
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *kcg_c1,
  DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg */
#endif /* kcg_use_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg */

#ifdef kcg_use_P046_section_int_T_TM
#ifndef kcg_comp_P046_section_int_T_TM
extern kcg_bool kcg_comp_P046_section_int_T_TM(
  P046_section_int_T_TM *kcg_c1,
  P046_section_int_T_TM *kcg_c2);
#endif /* kcg_comp_P046_section_int_T_TM */
#endif /* kcg_use_P046_section_int_T_TM */

#ifdef kcg_use_TargetCollection_T_TargetManagement_types
#ifndef kcg_comp_TargetCollection_T_TargetManagement_types
extern kcg_bool kcg_comp_TargetCollection_T_TargetManagement_types(
  TargetCollection_T_TargetManagement_types *kcg_c1,
  TargetCollection_T_TargetManagement_types *kcg_c2);
#endif /* kcg_comp_TargetCollection_T_TargetManagement_types */
#endif /* kcg_use_TargetCollection_T_TargetManagement_types */

#ifdef kcg_use_probesBalises_T_xdebugSupport_Pkg
#ifndef kcg_comp_probesBalises_T_xdebugSupport_Pkg
extern kcg_bool kcg_comp_probesBalises_T_xdebugSupport_Pkg(
  probesBalises_T_xdebugSupport_Pkg *kcg_c1,
  probesBalises_T_xdebugSupport_Pkg *kcg_c2);
#endif /* kcg_comp_probesBalises_T_xdebugSupport_Pkg */
#endif /* kcg_use_probesBalises_T_xdebugSupport_Pkg */

#ifdef kcg_use_DynamicConfig_T
#ifndef kcg_comp_DynamicConfig_T
extern kcg_bool kcg_comp_DynamicConfig_T(
  DynamicConfig_T *kcg_c1,
  DynamicConfig_T *kcg_c2);
#endif /* kcg_comp_DynamicConfig_T */
#endif /* kcg_use_DynamicConfig_T */

#ifdef kcg_use_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg(
  T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_nationValuesForDMI_T_DMI_Types_Pkg
#ifndef kcg_comp_nationValuesForDMI_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_nationValuesForDMI_T_DMI_Types_Pkg(
  nationValuesForDMI_T_DMI_Types_Pkg *kcg_c1,
  nationValuesForDMI_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nationValuesForDMI_T_DMI_Types_Pkg */
#endif /* kcg_use_nationValuesForDMI_T_DMI_Types_Pkg */

#ifdef kcg_use_Target_T_TargetManagement_types
#ifndef kcg_comp_Target_T_TargetManagement_types
extern kcg_bool kcg_comp_Target_T_TargetManagement_types(
  Target_T_TargetManagement_types *kcg_c1,
  Target_T_TargetManagement_types *kcg_c2);
#endif /* kcg_comp_Target_T_TargetManagement_types */
#endif /* kcg_use_Target_T_TargetManagement_types */

#ifdef kcg_use_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
#ifndef kcg_comp_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg
extern kcg_bool kcg_comp_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */
#endif /* kcg_use_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg
#ifndef kcg_comp_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg
extern kcg_bool kcg_comp_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg */
#endif /* kcg_use_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg(
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg *kcg_c1,
  T_AcknoledgementRequest_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_struct_169401
#ifndef kcg_comp_struct_169401
extern kcg_bool kcg_comp_struct_169401(
  struct_169401 *kcg_c1,
  struct_169401 *kcg_c2);
#endif /* kcg_comp_struct_169401 */
#endif /* kcg_use_struct_169401 */

#ifndef kcg_comp_passedBG_T_BG_Types_Pkg
extern kcg_bool kcg_comp_passedBG_T_BG_Types_Pkg(
  passedBG_T_BG_Types_Pkg *kcg_c1,
  passedBG_T_BG_Types_Pkg *kcg_c2);
#define kcg_use_passedBG_T_BG_Types_Pkg
#endif /* kcg_comp_passedBG_T_BG_Types_Pkg */

#ifdef kcg_use_trainData_Events_T_trainData_Types_pkg
#ifndef kcg_comp_trainData_Events_T_trainData_Types_pkg
extern kcg_bool kcg_comp_trainData_Events_T_trainData_Types_pkg(
  trainData_Events_T_trainData_Types_pkg *kcg_c1,
  trainData_Events_T_trainData_Types_pkg *kcg_c2);
#endif /* kcg_comp_trainData_Events_T_trainData_Types_pkg */
#endif /* kcg_use_trainData_Events_T_trainData_Types_pkg */

#ifdef kcg_use_struct_169455
#ifndef kcg_comp_struct_169455
extern kcg_bool kcg_comp_struct_169455(
  struct_169455 *kcg_c1,
  struct_169455 *kcg_c2);
#endif /* kcg_comp_struct_169455 */
#endif /* kcg_use_struct_169455 */

#ifdef kcg_use_P046_section_enum_T_TM
#ifndef kcg_comp_P046_section_enum_T_TM
extern kcg_bool kcg_comp_P046_section_enum_T_TM(
  P046_section_enum_T_TM *kcg_c1,
  P046_section_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P046_section_enum_T_TM */
#endif /* kcg_use_P046_section_enum_T_TM */

#ifdef kcg_use_struct_169478
#ifndef kcg_comp_struct_169478
extern kcg_bool kcg_comp_struct_169478(
  struct_169478 *kcg_c1,
  struct_169478 *kcg_c2);
#endif /* kcg_comp_struct_169478 */
#endif /* kcg_use_struct_169478 */

#ifdef kcg_use_MRSP_reduction_acc_TA_Export
#ifndef kcg_comp_MRSP_reduction_acc_TA_Export
extern kcg_bool kcg_comp_MRSP_reduction_acc_TA_Export(
  MRSP_reduction_acc_TA_Export *kcg_c1,
  MRSP_reduction_acc_TA_Export *kcg_c2);
#endif /* kcg_comp_MRSP_reduction_acc_TA_Export */
#endif /* kcg_use_MRSP_reduction_acc_TA_Export */

#ifdef kcg_use_DP_or_OL_t_TrackAtlasTypes
#ifndef kcg_comp_DP_or_OL_t_TrackAtlasTypes
extern kcg_bool kcg_comp_DP_or_OL_t_TrackAtlasTypes(
  DP_or_OL_t_TrackAtlasTypes *kcg_c1,
  DP_or_OL_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_DP_or_OL_t_TrackAtlasTypes */
#endif /* kcg_use_DP_or_OL_t_TrackAtlasTypes */

#ifdef kcg_use_RadioManagement_T_API_RadioCommunication_Pkg
#ifndef kcg_comp_RadioManagement_T_API_RadioCommunication_Pkg
extern kcg_bool kcg_comp_RadioManagement_T_API_RadioCommunication_Pkg(
  RadioManagement_T_API_RadioCommunication_Pkg *kcg_c1,
  RadioManagement_T_API_RadioCommunication_Pkg *kcg_c2);
#endif /* kcg_comp_RadioManagement_T_API_RadioCommunication_Pkg */
#endif /* kcg_use_RadioManagement_T_API_RadioCommunication_Pkg */

#ifdef kcg_use_av_MergedMap_t_SDMConversionModelPkg
#ifndef kcg_comp_av_MergedMap_t_SDMConversionModelPkg
extern kcg_bool kcg_comp_av_MergedMap_t_SDMConversionModelPkg(
  av_MergedMap_t_SDMConversionModelPkg *kcg_c1,
  av_MergedMap_t_SDMConversionModelPkg *kcg_c2);
#endif /* kcg_comp_av_MergedMap_t_SDMConversionModelPkg */
#endif /* kcg_use_av_MergedMap_t_SDMConversionModelPkg */

#ifdef kcg_use_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg
#ifndef kcg_comp_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg(
  P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg *kcg_c1,
  P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg */
#endif /* kcg_use_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg */

#ifdef kcg_use_Diff_T_Packet_Types_Pkg
#ifndef kcg_comp_Diff_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_Diff_T_Packet_Types_Pkg(
  Diff_T_Packet_Types_Pkg *kcg_c1,
  Diff_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Diff_T_Packet_Types_Pkg */
#endif /* kcg_use_Diff_T_Packet_Types_Pkg */

#ifndef kcg_comp_CompressedPackets_T_Common_Types_Pkg
extern kcg_bool kcg_comp_CompressedPackets_T_Common_Types_Pkg(
  CompressedPackets_T_Common_Types_Pkg *kcg_c1,
  CompressedPackets_T_Common_Types_Pkg *kcg_c2);
#define kcg_use_CompressedPackets_T_Common_Types_Pkg
#endif /* kcg_comp_CompressedPackets_T_Common_Types_Pkg */

#ifdef kcg_use_msgToTrackTriggers_T_RCM_MsgTypes_Pkg
#ifndef kcg_comp_msgToTrackTriggers_T_RCM_MsgTypes_Pkg
extern kcg_bool kcg_comp_msgToTrackTriggers_T_RCM_MsgTypes_Pkg(
  msgToTrackTriggers_T_RCM_MsgTypes_Pkg *kcg_c1,
  msgToTrackTriggers_T_RCM_MsgTypes_Pkg *kcg_c2);
#endif /* kcg_comp_msgToTrackTriggers_T_RCM_MsgTypes_Pkg */
#endif /* kcg_use_msgToTrackTriggers_T_RCM_MsgTypes_Pkg */

#ifdef kcg_use_Gradient_section_real_t_SDM_GradientAcceleration_types
#ifndef kcg_comp_Gradient_section_real_t_SDM_GradientAcceleration_types
extern kcg_bool kcg_comp_Gradient_section_real_t_SDM_GradientAcceleration_types(
  Gradient_section_real_t_SDM_GradientAcceleration_types *kcg_c1,
  Gradient_section_real_t_SDM_GradientAcceleration_types *kcg_c2);
#endif /* kcg_comp_Gradient_section_real_t_SDM_GradientAcceleration_types */
#endif /* kcg_use_Gradient_section_real_t_SDM_GradientAcceleration_types */

#ifdef kcg_use_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg(
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_DMI_trackConditionElement_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_trackConditionElement_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_trackConditionElement_T_DMI_Types_Pkg(
  DMI_trackConditionElement_T_DMI_Types_Pkg *kcg_c1,
  DMI_trackConditionElement_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_trackConditionElement_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_trackConditionElement_T_DMI_Types_Pkg */

#ifdef kcg_use_struct_169584
#ifndef kcg_comp_struct_169584
extern kcg_bool kcg_comp_struct_169584(
  struct_169584 *kcg_c1,
  struct_169584 *kcg_c2);
#endif /* kcg_comp_struct_169584 */
#endif /* kcg_use_struct_169584 */

#ifdef kcg_use_struct_169597
#ifndef kcg_comp_struct_169597
extern kcg_bool kcg_comp_struct_169597(
  struct_169597 *kcg_c1,
  struct_169597 *kcg_c2);
#endif /* kcg_comp_struct_169597 */
#endif /* kcg_use_struct_169597 */

#ifdef kcg_use_Type_I_train_commands_T_TIU_Types_Pkg
#ifndef kcg_comp_Type_I_train_commands_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Type_I_train_commands_T_TIU_Types_Pkg(
  Type_I_train_commands_T_TIU_Types_Pkg *kcg_c1,
  Type_I_train_commands_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Type_I_train_commands_T_TIU_Types_Pkg */
#endif /* kcg_use_Type_I_train_commands_T_TIU_Types_Pkg */

#ifdef kcg_use_connection_ids_T_Handover_Pkg
#ifndef kcg_comp_connection_ids_T_Handover_Pkg
extern kcg_bool kcg_comp_connection_ids_T_Handover_Pkg(
  connection_ids_T_Handover_Pkg *kcg_c1,
  connection_ids_T_Handover_Pkg *kcg_c2);
#endif /* kcg_comp_connection_ids_T_Handover_Pkg */
#endif /* kcg_use_connection_ids_T_Handover_Pkg */

#ifdef kcg_use_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
#ifndef kcg_comp_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
extern kcg_bool kcg_comp_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *kcg_c1,
  linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *kcg_c2);
#endif /* kcg_comp_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */
#endif /* kcg_use_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */

#ifdef kcg_use_P027V1_section_int_qdiff_T_TM_baseline2
#ifndef kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2(
  P027V1_section_int_qdiff_T_TM_baseline2 *kcg_c1,
  P027V1_section_int_qdiff_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2 */
#endif /* kcg_use_P027V1_section_int_qdiff_T_TM_baseline2 */

#ifdef kcg_use_struct_169664
#ifndef kcg_comp_struct_169664
extern kcg_bool kcg_comp_struct_169664(
  struct_169664 *kcg_c1,
  struct_169664 *kcg_c2);
#endif /* kcg_comp_struct_169664 */
#endif /* kcg_use_struct_169664 */

#ifdef kcg_use_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg
#ifndef kcg_comp_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg
extern kcg_bool kcg_comp_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg(
  m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg *kcg_c1,
  m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg *kcg_c2);
#endif /* kcg_comp_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg */
#endif /* kcg_use_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg */

#ifdef kcg_use_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_CurveCollection_T_CalcBrakingCurves_types
#ifndef kcg_comp_CurveCollection_T_CalcBrakingCurves_types
extern kcg_bool kcg_comp_CurveCollection_T_CalcBrakingCurves_types(
  CurveCollection_T_CalcBrakingCurves_types *kcg_c1,
  CurveCollection_T_CalcBrakingCurves_types *kcg_c2);
#endif /* kcg_comp_CurveCollection_T_CalcBrakingCurves_types */
#endif /* kcg_use_CurveCollection_T_CalcBrakingCurves_types */

#ifdef kcg_use_SSP_section_t_TA_MRSP
#ifndef kcg_comp_SSP_section_t_TA_MRSP
extern kcg_bool kcg_comp_SSP_section_t_TA_MRSP(
  SSP_section_t_TA_MRSP *kcg_c1,
  SSP_section_t_TA_MRSP *kcg_c2);
#endif /* kcg_comp_SSP_section_t_TA_MRSP */
#endif /* kcg_use_SSP_section_t_TA_MRSP */

#ifdef kcg_use_P021_section_int_T_TM
#ifndef kcg_comp_P021_section_int_T_TM
extern kcg_bool kcg_comp_P021_section_int_T_TM(
  P021_section_int_T_TM *kcg_c1,
  P021_section_int_T_TM *kcg_c2);
#endif /* kcg_comp_P021_section_int_T_TM */
#endif /* kcg_use_P021_section_int_T_TM */

#ifdef kcg_use_mobileRegistrationCmd_T_RCM_Types_Pkg
#ifndef kcg_comp_mobileRegistrationCmd_T_RCM_Types_Pkg
extern kcg_bool kcg_comp_mobileRegistrationCmd_T_RCM_Types_Pkg(
  mobileRegistrationCmd_T_RCM_Types_Pkg *kcg_c1,
  mobileRegistrationCmd_T_RCM_Types_Pkg *kcg_c2);
#endif /* kcg_comp_mobileRegistrationCmd_T_RCM_Types_Pkg */
#endif /* kcg_use_mobileRegistrationCmd_T_RCM_Types_Pkg */

#ifdef kcg_use_T_AnnouncedLevel_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_AnnouncedLevel_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_AnnouncedLevel_Level_And_Mode_Types_Pkg(
  T_AnnouncedLevel_Level_And_Mode_Types_Pkg *kcg_c1,
  T_AnnouncedLevel_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_AnnouncedLevel_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_AnnouncedLevel_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_T_Data_From_STM_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_From_STM_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_From_STM_Level_And_Mode_Types_Pkg(
  T_Data_From_STM_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_STM_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_From_STM_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_From_STM_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_AccuDistanceProfileMA_TA_MA
#ifndef kcg_comp_AccuDistanceProfileMA_TA_MA
extern kcg_bool kcg_comp_AccuDistanceProfileMA_TA_MA(
  AccuDistanceProfileMA_TA_MA *kcg_c1,
  AccuDistanceProfileMA_TA_MA *kcg_c2);
#endif /* kcg_comp_AccuDistanceProfileMA_TA_MA */
#endif /* kcg_use_AccuDistanceProfileMA_TA_MA */

#ifdef kcg_use_P041_section_enum_T_TM
#ifndef kcg_comp_P041_section_enum_T_TM
extern kcg_bool kcg_comp_P041_section_enum_T_TM(
  P041_section_enum_T_TM *kcg_c1,
  P041_section_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P041_section_enum_T_TM */
#endif /* kcg_use_P041_section_enum_T_TM */

#ifdef kcg_use_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg
#ifndef kcg_comp_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg(
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg *kcg_c1,
  P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg */
#endif /* kcg_use_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg */

#ifdef kcg_use_struct_169865
#ifndef kcg_comp_struct_169865
extern kcg_bool kcg_comp_struct_169865(
  struct_169865 *kcg_c1,
  struct_169865 *kcg_c2);
#endif /* kcg_comp_struct_169865 */
#endif /* kcg_use_struct_169865 */

#ifdef kcg_use_nvkvint_T_Packet_Types_Pkg
#ifndef kcg_comp_nvkvint_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_nvkvint_T_Packet_Types_Pkg(
  nvkvint_T_Packet_Types_Pkg *kcg_c1,
  nvkvint_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nvkvint_T_Packet_Types_Pkg */
#endif /* kcg_use_nvkvint_T_Packet_Types_Pkg */

#ifdef kcg_use_P046_OBU_T_TM
#ifndef kcg_comp_P046_OBU_T_TM
extern kcg_bool kcg_comp_P046_OBU_T_TM(
  P046_OBU_T_TM *kcg_c1,
  P046_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P046_OBU_T_TM */
#endif /* kcg_use_P046_OBU_T_TM */

#ifdef kcg_use_P027V1_OBU_T_TM_baseline2
#ifndef kcg_comp_P027V1_OBU_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_OBU_T_TM_baseline2(
  P027V1_OBU_T_TM_baseline2 *kcg_c1,
  P027V1_OBU_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_OBU_T_TM_baseline2 */
#endif /* kcg_use_P027V1_OBU_T_TM_baseline2 */

#ifdef kcg_use_bec_t_TargetLimits_Pkg
#ifndef kcg_comp_bec_t_TargetLimits_Pkg
extern kcg_bool kcg_comp_bec_t_TargetLimits_Pkg(
  bec_t_TargetLimits_Pkg *kcg_c1,
  bec_t_TargetLimits_Pkg *kcg_c2);
#endif /* kcg_comp_bec_t_TargetLimits_Pkg */
#endif /* kcg_use_bec_t_TargetLimits_Pkg */

#ifdef kcg_use_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg
#ifndef kcg_comp_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg
extern kcg_bool kcg_comp_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg(
  BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *kcg_c1,
  BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg *kcg_c2);
#endif /* kcg_comp_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg */
#endif /* kcg_use_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg */

#ifdef kcg_use_mobileHWStatus_Type_MoRC_Pck
#ifndef kcg_comp_mobileHWStatus_Type_MoRC_Pck
extern kcg_bool kcg_comp_mobileHWStatus_Type_MoRC_Pck(
  mobileHWStatus_Type_MoRC_Pck *kcg_c1,
  mobileHWStatus_Type_MoRC_Pck *kcg_c2);
#endif /* kcg_comp_mobileHWStatus_Type_MoRC_Pck */
#endif /* kcg_use_mobileHWStatus_Type_MoRC_Pck */

#ifdef kcg_use_struct_169965
#ifndef kcg_comp_struct_169965
extern kcg_bool kcg_comp_struct_169965(
  struct_169965 *kcg_c1,
  struct_169965 *kcg_c2);
#endif /* kcg_comp_struct_169965 */
#endif /* kcg_use_struct_169965 */

#ifdef kcg_use_struct_169971
#ifndef kcg_comp_struct_169971
extern kcg_bool kcg_comp_struct_169971(
  struct_169971 *kcg_c1,
  struct_169971 *kcg_c2);
#endif /* kcg_comp_struct_169971 */
#endif /* kcg_use_struct_169971 */

#ifdef kcg_use_TelegramStore_T_Receive_TrackSide_Msg_Pkg
#ifndef kcg_comp_TelegramStore_T_Receive_TrackSide_Msg_Pkg
extern kcg_bool kcg_comp_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
  TelegramStore_T_Receive_TrackSide_Msg_Pkg *kcg_c1,
  TelegramStore_T_Receive_TrackSide_Msg_Pkg *kcg_c2);
#endif /* kcg_comp_TelegramStore_T_Receive_TrackSide_Msg_Pkg */
#endif /* kcg_use_TelegramStore_T_Receive_TrackSide_Msg_Pkg */

#ifdef kcg_use_ReportedBG_T_ProvidePositionReport_Pkg
#ifndef kcg_comp_ReportedBG_T_ProvidePositionReport_Pkg
extern kcg_bool kcg_comp_ReportedBG_T_ProvidePositionReport_Pkg(
  ReportedBG_T_ProvidePositionReport_Pkg *kcg_c1,
  ReportedBG_T_ProvidePositionReport_Pkg *kcg_c2);
#endif /* kcg_comp_ReportedBG_T_ProvidePositionReport_Pkg */
#endif /* kcg_use_ReportedBG_T_ProvidePositionReport_Pkg */

#ifdef kcg_use_radioNetWorkIDs_T_MoRC_Pck
#ifndef kcg_comp_radioNetWorkIDs_T_MoRC_Pck
extern kcg_bool kcg_comp_radioNetWorkIDs_T_MoRC_Pck(
  radioNetWorkIDs_T_MoRC_Pck *kcg_c1,
  radioNetWorkIDs_T_MoRC_Pck *kcg_c2);
#endif /* kcg_comp_radioNetWorkIDs_T_MoRC_Pck */
#endif /* kcg_use_radioNetWorkIDs_T_MoRC_Pck */

#ifdef kcg_use_Change_traction_system_T_TIU_Types_Pkg
#ifndef kcg_comp_Change_traction_system_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Change_traction_system_T_TIU_Types_Pkg(
  Change_traction_system_T_TIU_Types_Pkg *kcg_c1,
  Change_traction_system_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Change_traction_system_T_TIU_Types_Pkg */
#endif /* kcg_use_Change_traction_system_T_TIU_Types_Pkg */

#ifdef kcg_use_Change_of_allowed_current_consumption_T_TIU_Types_Pkg
#ifndef kcg_comp_Change_of_allowed_current_consumption_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Change_of_allowed_current_consumption_T_TIU_Types_Pkg(
  Change_of_allowed_current_consumption_T_TIU_Types_Pkg *kcg_c1,
  Change_of_allowed_current_consumption_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Change_of_allowed_current_consumption_T_TIU_Types_Pkg */
#endif /* kcg_use_Change_of_allowed_current_consumption_T_TIU_Types_Pkg */

#ifdef kcg_use_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg
#ifndef kcg_comp_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg(
  Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg *kcg_c1,
  Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg */
#endif /* kcg_use_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg */

#ifdef kcg_use_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg
#ifndef kcg_comp_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg
extern kcg_bool kcg_comp_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg(
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg *kcg_c1,
  DMI_Level_Data_T_DMI_Messages_Bothways_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg */
#endif /* kcg_use_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg */

#ifdef kcg_use_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_struct_170025
#ifndef kcg_comp_struct_170025
extern kcg_bool kcg_comp_struct_170025(
  struct_170025 *kcg_c1,
  struct_170025 *kcg_c2);
#endif /* kcg_comp_struct_170025 */
#endif /* kcg_use_struct_170025 */

#ifdef kcg_use_P005_TM_TrainToTrack
#ifndef kcg_comp_P005_TM_TrainToTrack
extern kcg_bool kcg_comp_P005_TM_TrainToTrack(
  P005_TM_TrainToTrack *kcg_c1,
  P005_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P005_TM_TrainToTrack */
#endif /* kcg_use_P005_TM_TrainToTrack */

#ifdef kcg_use_TIU_trainStatus_T_TIU_Types_Pkg
#ifndef kcg_comp_TIU_trainStatus_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_TIU_trainStatus_T_TIU_Types_Pkg(
  TIU_trainStatus_T_TIU_Types_Pkg *kcg_c1,
  TIU_trainStatus_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_TIU_trainStatus_T_TIU_Types_Pkg */
#endif /* kcg_use_TIU_trainStatus_T_TIU_Types_Pkg */

#ifdef kcg_use_P058_section_enum_T_TM
#ifndef kcg_comp_P058_section_enum_T_TM
extern kcg_bool kcg_comp_P058_section_enum_T_TM(
  P058_section_enum_T_TM *kcg_c1,
  P058_section_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P058_section_enum_T_TM */
#endif /* kcg_use_P058_section_enum_T_TM */

#ifdef kcg_use_DMI_gradientProfile_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_gradientProfile_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_gradientProfile_T_DMI_Types_Pkg(
  DMI_gradientProfile_T_DMI_Types_Pkg *kcg_c1,
  DMI_gradientProfile_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_gradientProfile_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_gradientProfile_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_trackCondition_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_trackCondition_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_trackCondition_T_DMI_Types_Pkg(
  DMI_trackCondition_T_DMI_Types_Pkg *kcg_c1,
  DMI_trackCondition_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_trackCondition_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_trackCondition_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_speedProfile_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_speedProfile_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_speedProfile_T_DMI_Types_Pkg(
  DMI_speedProfile_T_DMI_Types_Pkg *kcg_c1,
  DMI_speedProfile_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_speedProfile_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_speedProfile_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_LevelList_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_LevelList_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_LevelList_T_DMI_Types_Pkg(
  DMI_LevelList_T_DMI_Types_Pkg *kcg_c1,
  DMI_LevelList_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_LevelList_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_LevelList_T_DMI_Types_Pkg */

#ifdef kcg_use_MRSP_internal_section_T_TargetManagement_types
#ifndef kcg_comp_MRSP_internal_section_T_TargetManagement_types
extern kcg_bool kcg_comp_MRSP_internal_section_T_TargetManagement_types(
  MRSP_internal_section_T_TargetManagement_types *kcg_c1,
  MRSP_internal_section_T_TargetManagement_types *kcg_c2);
#endif /* kcg_comp_MRSP_internal_section_T_TargetManagement_types */
#endif /* kcg_use_MRSP_internal_section_T_TargetManagement_types */

#ifdef kcg_use_R_data_internal_T_InfraLib
#ifndef kcg_comp_R_data_internal_T_InfraLib
extern kcg_bool kcg_comp_R_data_internal_T_InfraLib(
  R_data_internal_T_InfraLib *kcg_c1,
  R_data_internal_T_InfraLib *kcg_c2);
#endif /* kcg_comp_R_data_internal_T_InfraLib */
#endif /* kcg_use_R_data_internal_T_InfraLib */

#ifdef kcg_use_struct_170132
#ifndef kcg_comp_struct_170132
extern kcg_bool kcg_comp_struct_170132(
  struct_170132 *kcg_c1,
  struct_170132 *kcg_c2);
#endif /* kcg_comp_struct_170132 */
#endif /* kcg_use_struct_170132 */

#ifdef kcg_use_P044_TM_TrainToTrack
#ifndef kcg_comp_P044_TM_TrainToTrack
extern kcg_bool kcg_comp_P044_TM_TrainToTrack(
  P044_TM_TrainToTrack *kcg_c1,
  P044_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P044_TM_TrainToTrack */
#endif /* kcg_use_P044_TM_TrainToTrack */

#ifdef kcg_use_av_Map_t_SDMConversionModelPkg
#ifndef kcg_comp_av_Map_t_SDMConversionModelPkg
extern kcg_bool kcg_comp_av_Map_t_SDMConversionModelPkg(
  av_Map_t_SDMConversionModelPkg *kcg_c1,
  av_Map_t_SDMConversionModelPkg *kcg_c2);
#endif /* kcg_comp_av_Map_t_SDMConversionModelPkg */
#endif /* kcg_use_av_Map_t_SDMConversionModelPkg */

#ifdef kcg_use_struct_170172
#ifndef kcg_comp_struct_170172
extern kcg_bool kcg_comp_struct_170172(
  struct_170172 *kcg_c1,
  struct_170172 *kcg_c2);
#endif /* kcg_comp_struct_170172 */
#endif /* kcg_use_struct_170172 */

#ifdef kcg_use_P003_TM_TrainToTrack
#ifndef kcg_comp_P003_TM_TrainToTrack
extern kcg_bool kcg_comp_P003_TM_TrainToTrack(
  P003_TM_TrainToTrack *kcg_c1,
  P003_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P003_TM_TrainToTrack */
#endif /* kcg_use_P003_TM_TrainToTrack */

#ifdef kcg_use_SSP_T_Packet_Types_Pkg
#ifndef kcg_comp_SSP_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_SSP_T_Packet_Types_Pkg(
  SSP_T_Packet_Types_Pkg *kcg_c1,
  SSP_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_SSP_T_Packet_Types_Pkg */
#endif /* kcg_use_SSP_T_Packet_Types_Pkg */

#ifdef kcg_use_nvkvintset_T_Packet_Types_Pkg
#ifndef kcg_comp_nvkvintset_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_nvkvintset_T_Packet_Types_Pkg(
  nvkvintset_T_Packet_Types_Pkg *kcg_c1,
  nvkvintset_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nvkvintset_T_Packet_Types_Pkg */
#endif /* kcg_use_nvkvintset_T_Packet_Types_Pkg */

#ifdef kcg_use_struct_170221
#ifndef kcg_comp_struct_170221
extern kcg_bool kcg_comp_struct_170221(
  struct_170221 *kcg_c1,
  struct_170221 *kcg_c2);
#endif /* kcg_comp_struct_170221 */
#endif /* kcg_use_struct_170221 */

#ifdef kcg_use_t_Brake_t_SDMModelPkg
#ifndef kcg_comp_t_Brake_t_SDMModelPkg
extern kcg_bool kcg_comp_t_Brake_t_SDMModelPkg(
  t_Brake_t_SDMModelPkg *kcg_c1,
  t_Brake_t_SDMModelPkg *kcg_c2);
#endif /* kcg_comp_t_Brake_t_SDMModelPkg */
#endif /* kcg_use_t_Brake_t_SDMModelPkg */

#ifdef kcg_use_M_current_T_TIU_Types_Pkg
#ifndef kcg_comp_M_current_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_M_current_T_TIU_Types_Pkg(
  M_current_T_TIU_Types_Pkg *kcg_c1,
  M_current_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_M_current_T_TIU_Types_Pkg */
#endif /* kcg_use_M_current_T_TIU_Types_Pkg */

#ifdef kcg_use_P009_TM_TrainToTrack
#ifndef kcg_comp_P009_TM_TrainToTrack
extern kcg_bool kcg_comp_P009_TM_TrainToTrack(
  P009_TM_TrainToTrack *kcg_c1,
  P009_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P009_TM_TrainToTrack */
#endif /* kcg_use_P009_TM_TrainToTrack */

#ifdef kcg_use_TIU_Output_msg_API_TIU_Pkg
#ifndef kcg_comp_TIU_Output_msg_API_TIU_Pkg
extern kcg_bool kcg_comp_TIU_Output_msg_API_TIU_Pkg(
  TIU_Output_msg_API_TIU_Pkg *kcg_c1,
  TIU_Output_msg_API_TIU_Pkg *kcg_c2);
#endif /* kcg_comp_TIU_Output_msg_API_TIU_Pkg */
#endif /* kcg_use_TIU_Output_msg_API_TIU_Pkg */

#ifdef kcg_use_PT0_PositionReport_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_PT0_PositionReport_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_PT0_PositionReport_T_Packet_TrainTypes_Pkg(
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT0_PositionReport_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_PT0_PositionReport_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_PT0_PositionReport_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg(
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_SessionManagement_T
#ifndef kcg_comp_SessionManagement_T
extern kcg_bool kcg_comp_SessionManagement_T(
  SessionManagement_T *kcg_c1,
  SessionManagement_T *kcg_c2);
#endif /* kcg_comp_SessionManagement_T */
#endif /* kcg_use_SessionManagement_T */

#ifdef kcg_use_TIU_Input_msg_API_TIU_Pkg
#ifndef kcg_comp_TIU_Input_msg_API_TIU_Pkg
extern kcg_bool kcg_comp_TIU_Input_msg_API_TIU_Pkg(
  TIU_Input_msg_API_TIU_Pkg *kcg_c1,
  TIU_Input_msg_API_TIU_Pkg *kcg_c2);
#endif /* kcg_comp_TIU_Input_msg_API_TIU_Pkg */
#endif /* kcg_use_TIU_Input_msg_API_TIU_Pkg */

#ifndef kcg_comp_MsgStructure
extern kcg_bool kcg_comp_MsgStructure(
  MsgStructure *kcg_c1,
  MsgStructure *kcg_c2);
#define kcg_use_MsgStructure
#endif /* kcg_comp_MsgStructure */

#ifdef kcg_use_Passenger_door_control_info_T_TIU_Types_Pkg
#ifndef kcg_comp_Passenger_door_control_info_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Passenger_door_control_info_T_TIU_Types_Pkg(
  Passenger_door_control_info_T_TIU_Types_Pkg *kcg_c1,
  Passenger_door_control_info_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Passenger_door_control_info_T_TIU_Types_Pkg */
#endif /* kcg_use_Passenger_door_control_info_T_TIU_Types_Pkg */

#ifndef kcg_comp_Brake_command_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Brake_command_T_TIU_Types_Pkg(
  Brake_command_T_TIU_Types_Pkg *kcg_c1,
  Brake_command_T_TIU_Types_Pkg *kcg_c2);
#define kcg_use_Brake_command_T_TIU_Types_Pkg
#endif /* kcg_comp_Brake_command_T_TIU_Types_Pkg */

#ifdef kcg_use_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_P004_TM_TrainToTrack
#ifndef kcg_comp_P004_TM_TrainToTrack
extern kcg_bool kcg_comp_P004_TM_TrainToTrack(
  P004_TM_TrainToTrack *kcg_c1,
  P004_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P004_TM_TrainToTrack */
#endif /* kcg_use_P004_TM_TrainToTrack */

#ifdef kcg_use_ASafe_T_CalcBrakingCurves_types
#ifndef kcg_comp_ASafe_T_CalcBrakingCurves_types
extern kcg_bool kcg_comp_ASafe_T_CalcBrakingCurves_types(
  ASafe_T_CalcBrakingCurves_types *kcg_c1,
  ASafe_T_CalcBrakingCurves_types *kcg_c2);
#endif /* kcg_comp_ASafe_T_CalcBrakingCurves_types */
#endif /* kcg_use_ASafe_T_CalcBrakingCurves_types */

#ifdef kcg_use_P027V1_section_int_T_TM_baseline2
#ifndef kcg_comp_P027V1_section_int_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_section_int_T_TM_baseline2(
  P027V1_section_int_T_TM_baseline2 *kcg_c1,
  P027V1_section_int_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_section_int_T_TM_baseline2 */
#endif /* kcg_use_P027V1_section_int_T_TM_baseline2 */

#ifdef kcg_use_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg
#ifndef kcg_comp_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg
extern kcg_bool kcg_comp_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg(
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *kcg_c1,
  ModeLevel2PositionReport_T_ProvidePositionReport_Pkg *kcg_c2);
#endif /* kcg_comp_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg */
#endif /* kcg_use_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg */

#ifdef kcg_use_P021_OBU_T_TM
#ifndef kcg_comp_P021_OBU_T_TM
extern kcg_bool kcg_comp_P021_OBU_T_TM(
  P021_OBU_T_TM *kcg_c1,
  P021_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P021_OBU_T_TM */
#endif /* kcg_use_P021_OBU_T_TM */

#ifdef kcg_use_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg
#ifndef kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg(
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *kcg_c1,
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg */
#endif /* kcg_use_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg */

#ifdef kcg_use_M_TrainTrack_Message_T_TM_radio_messages
#ifndef kcg_comp_M_TrainTrack_Message_T_TM_radio_messages
extern kcg_bool kcg_comp_M_TrainTrack_Message_T_TM_radio_messages(
  M_TrainTrack_Message_T_TM_radio_messages *kcg_c1,
  M_TrainTrack_Message_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_TrainTrack_Message_T_TM_radio_messages */
#endif /* kcg_use_M_TrainTrack_Message_T_TM_radio_messages */

#ifdef kcg_use_T_Reversing_Data_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Reversing_Data_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Reversing_Data_Level_And_Mode_Types_Pkg(
  T_Reversing_Data_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Reversing_Data_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Reversing_Data_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Reversing_Data_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_ErrorMessage_T_ProvidePositionReport_Pkg
#ifndef kcg_comp_ErrorMessage_T_ProvidePositionReport_Pkg
extern kcg_bool kcg_comp_ErrorMessage_T_ProvidePositionReport_Pkg(
  ErrorMessage_T_ProvidePositionReport_Pkg *kcg_c1,
  ErrorMessage_T_ProvidePositionReport_Pkg *kcg_c2);
#endif /* kcg_comp_ErrorMessage_T_ProvidePositionReport_Pkg */
#endif /* kcg_use_ErrorMessage_T_ProvidePositionReport_Pkg */

#ifdef kcg_use_TrainToTrackStatus_T_BG_Types_Pkg
#ifndef kcg_comp_TrainToTrackStatus_T_BG_Types_Pkg
extern kcg_bool kcg_comp_TrainToTrackStatus_T_BG_Types_Pkg(
  TrainToTrackStatus_T_BG_Types_Pkg *kcg_c1,
  TrainToTrackStatus_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_TrainToTrackStatus_T_BG_Types_Pkg */
#endif /* kcg_use_TrainToTrackStatus_T_BG_Types_Pkg */

#ifdef kcg_use_P021_section_enum_T_TM
#ifndef kcg_comp_P021_section_enum_T_TM
extern kcg_bool kcg_comp_P021_section_enum_T_TM(
  P021_section_enum_T_TM *kcg_c1,
  P021_section_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P021_section_enum_T_TM */
#endif /* kcg_use_P021_section_enum_T_TM */

#ifdef kcg_use_B_data_internal_T_InfraLib
#ifndef kcg_comp_B_data_internal_T_InfraLib
extern kcg_bool kcg_comp_B_data_internal_T_InfraLib(
  B_data_internal_T_InfraLib *kcg_c1,
  B_data_internal_T_InfraLib *kcg_c2);
#endif /* kcg_comp_B_data_internal_T_InfraLib */
#endif /* kcg_use_B_data_internal_T_InfraLib */

#ifdef kcg_use_struct_170518
#ifndef kcg_comp_struct_170518
extern kcg_bool kcg_comp_struct_170518(
  struct_170518 *kcg_c1,
  struct_170518 *kcg_c2);
#endif /* kcg_comp_struct_170518 */
#endif /* kcg_use_struct_170518 */

#ifdef kcg_use_TSM_revokeCond_T_SDM_Commands_Pkg
#ifndef kcg_comp_TSM_revokeCond_T_SDM_Commands_Pkg
extern kcg_bool kcg_comp_TSM_revokeCond_T_SDM_Commands_Pkg(
  TSM_revokeCond_T_SDM_Commands_Pkg *kcg_c1,
  TSM_revokeCond_T_SDM_Commands_Pkg *kcg_c2);
#endif /* kcg_comp_TSM_revokeCond_T_SDM_Commands_Pkg */
#endif /* kcg_use_TSM_revokeCond_T_SDM_Commands_Pkg */

#ifdef kcg_use_ParabolaCurve_T_CalcBrakingCurves_types
#ifndef kcg_comp_ParabolaCurve_T_CalcBrakingCurves_types
extern kcg_bool kcg_comp_ParabolaCurve_T_CalcBrakingCurves_types(
  ParabolaCurve_T_CalcBrakingCurves_types *kcg_c1,
  ParabolaCurve_T_CalcBrakingCurves_types *kcg_c2);
#endif /* kcg_comp_ParabolaCurve_T_CalcBrakingCurves_types */
#endif /* kcg_use_ParabolaCurve_T_CalcBrakingCurves_types */

#ifdef kcg_use_movementAuthorityForDMI_T_DMI_Types_Pkg
#ifndef kcg_comp_movementAuthorityForDMI_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_movementAuthorityForDMI_T_DMI_Types_Pkg(
  movementAuthorityForDMI_T_DMI_Types_Pkg *kcg_c1,
  movementAuthorityForDMI_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_movementAuthorityForDMI_T_DMI_Types_Pkg */
#endif /* kcg_use_movementAuthorityForDMI_T_DMI_Types_Pkg */

#ifdef kcg_use_DataForModeAndLevel_t_TrackAtlasTypes
#ifndef kcg_comp_DataForModeAndLevel_t_TrackAtlasTypes
extern kcg_bool kcg_comp_DataForModeAndLevel_t_TrackAtlasTypes(
  DataForModeAndLevel_t_TrackAtlasTypes *kcg_c1,
  DataForModeAndLevel_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_DataForModeAndLevel_t_TrackAtlasTypes */
#endif /* kcg_use_DataForModeAndLevel_t_TrackAtlasTypes */

#ifdef kcg_use_M_146_T_TM_radio_messages
#ifndef kcg_comp_M_146_T_TM_radio_messages
extern kcg_bool kcg_comp_M_146_T_TM_radio_messages(
  M_146_T_TM_radio_messages *kcg_c1,
  M_146_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_146_T_TM_radio_messages */
#endif /* kcg_use_M_146_T_TM_radio_messages */

#ifdef kcg_use_struct_170588
#ifndef kcg_comp_struct_170588
extern kcg_bool kcg_comp_struct_170588(
  struct_170588 *kcg_c1,
  struct_170588 *kcg_c2);
#endif /* kcg_comp_struct_170588 */
#endif /* kcg_use_struct_170588 */

#ifdef kcg_use_MovementAuthoritySection_t_TrackAtlasTypes
#ifndef kcg_comp_MovementAuthoritySection_t_TrackAtlasTypes
extern kcg_bool kcg_comp_MovementAuthoritySection_t_TrackAtlasTypes(
  MovementAuthoritySection_t_TrackAtlasTypes *kcg_c1,
  MovementAuthoritySection_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_MovementAuthoritySection_t_TrackAtlasTypes */
#endif /* kcg_use_MovementAuthoritySection_t_TrackAtlasTypes */

#ifdef kcg_use_nvkrint_T_Packet_Types_Pkg
#ifndef kcg_comp_nvkrint_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_nvkrint_T_Packet_Types_Pkg(
  nvkrint_T_Packet_Types_Pkg *kcg_c1,
  nvkrint_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nvkrint_T_Packet_Types_Pkg */
#endif /* kcg_use_nvkrint_T_Packet_Types_Pkg */

#ifdef kcg_use_T_Mode_Level_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Mode_Level_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Mode_Level_Level_And_Mode_Types_Pkg(
  T_Mode_Level_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Mode_Level_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Mode_Level_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Mode_Level_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_P137_trackside_int_T_TM
#ifndef kcg_comp_P137_trackside_int_T_TM
extern kcg_bool kcg_comp_P137_trackside_int_T_TM(
  P137_trackside_int_T_TM *kcg_c1,
  P137_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P137_trackside_int_T_TM */
#endif /* kcg_use_P137_trackside_int_T_TM */

#ifdef kcg_use_T_Mode_Profile_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Mode_Profile_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Mode_Profile_Level_And_Mode_Types_Pkg(
  T_Mode_Profile_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Mode_Profile_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Mode_Profile_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Mode_Profile_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_trainData_internal_t_SDM_Types_Pkg
#ifndef kcg_comp_trainData_internal_t_SDM_Types_Pkg
extern kcg_bool kcg_comp_trainData_internal_t_SDM_Types_Pkg(
  trainData_internal_t_SDM_Types_Pkg *kcg_c1,
  trainData_internal_t_SDM_Types_Pkg *kcg_c2);
#endif /* kcg_comp_trainData_internal_t_SDM_Types_Pkg */
#endif /* kcg_use_trainData_internal_t_SDM_Types_Pkg */

#ifdef kcg_use_EOA_real_T_TargetManagement_types
#ifndef kcg_comp_EOA_real_T_TargetManagement_types
extern kcg_bool kcg_comp_EOA_real_T_TargetManagement_types(
  EOA_real_T_TargetManagement_types *kcg_c1,
  EOA_real_T_TargetManagement_types *kcg_c2);
#endif /* kcg_comp_EOA_real_T_TargetManagement_types */
#endif /* kcg_use_EOA_real_T_TargetManagement_types */

#ifdef kcg_use_P058_section_int_T_TM
#ifndef kcg_comp_P058_section_int_T_TM
extern kcg_bool kcg_comp_P058_section_int_T_TM(
  P058_section_int_T_TM *kcg_c1,
  P058_section_int_T_TM *kcg_c2);
#endif /* kcg_comp_P058_section_int_T_TM */
#endif /* kcg_use_P058_section_int_T_TM */

#ifdef kcg_use_M_voltage_T_TIU_Types_Pkg
#ifndef kcg_comp_M_voltage_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_M_voltage_T_TIU_Types_Pkg(
  M_voltage_T_TIU_Types_Pkg *kcg_c1,
  M_voltage_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_M_voltage_T_TIU_Types_Pkg */
#endif /* kcg_use_M_voltage_T_TIU_Types_Pkg */

#ifdef kcg_use_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg(
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_struct_170763
#ifndef kcg_comp_struct_170763
extern kcg_bool kcg_comp_struct_170763(
  struct_170763 *kcg_c1,
  struct_170763 *kcg_c2);
#endif /* kcg_comp_struct_170763 */
#endif /* kcg_use_struct_170763 */

#ifdef kcg_use_struct_170773
#ifndef kcg_comp_struct_170773
extern kcg_bool kcg_comp_struct_170773(
  struct_170773 *kcg_c1,
  struct_170773 *kcg_c2);
#endif /* kcg_comp_struct_170773 */
#endif /* kcg_use_struct_170773 */

#ifdef kcg_use_trainData_Trigger_T_trainData_Types_pkg
#ifndef kcg_comp_trainData_Trigger_T_trainData_Types_pkg
extern kcg_bool kcg_comp_trainData_Trigger_T_trainData_Types_pkg(
  trainData_Trigger_T_trainData_Types_pkg *kcg_c1,
  trainData_Trigger_T_trainData_Types_pkg *kcg_c2);
#endif /* kcg_comp_trainData_Trigger_T_trainData_Types_pkg */
#endif /* kcg_use_trainData_Trigger_T_trainData_Types_pkg */

#ifdef kcg_use_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_Isolation_Status_T_TIU_Types_Pkg
#ifndef kcg_comp_Isolation_Status_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Isolation_Status_T_TIU_Types_Pkg(
  Isolation_Status_T_TIU_Types_Pkg *kcg_c1,
  Isolation_Status_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Isolation_Status_T_TIU_Types_Pkg */
#endif /* kcg_use_Isolation_Status_T_TIU_Types_Pkg */

#ifdef kcg_use_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg(
  T_Data_From_F2_functions_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_F2_functions_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_ACC_SDM_GradientAcceleration_Pkg
#ifndef kcg_comp_ACC_SDM_GradientAcceleration_Pkg
extern kcg_bool kcg_comp_ACC_SDM_GradientAcceleration_Pkg(
  ACC_SDM_GradientAcceleration_Pkg *kcg_c1,
  ACC_SDM_GradientAcceleration_Pkg *kcg_c2);
#endif /* kcg_comp_ACC_SDM_GradientAcceleration_Pkg */
#endif /* kcg_use_ACC_SDM_GradientAcceleration_Pkg */

#ifndef kcg_comp_sessionStatus_T_RCM_Session_Types_Pkg
extern kcg_bool kcg_comp_sessionStatus_T_RCM_Session_Types_Pkg(
  sessionStatus_T_RCM_Session_Types_Pkg *kcg_c1,
  sessionStatus_T_RCM_Session_Types_Pkg *kcg_c2);
#define kcg_use_sessionStatus_T_RCM_Session_Types_Pkg
#endif /* kcg_comp_sessionStatus_T_RCM_Session_Types_Pkg */

#ifdef kcg_use_BCAccumulator_type_CalcBrakingCurves_Pkg
#ifndef kcg_comp_BCAccumulator_type_CalcBrakingCurves_Pkg
extern kcg_bool kcg_comp_BCAccumulator_type_CalcBrakingCurves_Pkg(
  BCAccumulator_type_CalcBrakingCurves_Pkg *kcg_c1,
  BCAccumulator_type_CalcBrakingCurves_Pkg *kcg_c2);
#endif /* kcg_comp_BCAccumulator_type_CalcBrakingCurves_Pkg */
#endif /* kcg_use_BCAccumulator_type_CalcBrakingCurves_Pkg */

#ifdef kcg_use_TrackSide_ForCheck_T_Common_Types_Pkg
#ifndef kcg_comp_TrackSide_ForCheck_T_Common_Types_Pkg
extern kcg_bool kcg_comp_TrackSide_ForCheck_T_Common_Types_Pkg(
  TrackSide_ForCheck_T_Common_Types_Pkg *kcg_c1,
  TrackSide_ForCheck_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_TrackSide_ForCheck_T_Common_Types_Pkg */
#endif /* kcg_use_TrackSide_ForCheck_T_Common_Types_Pkg */

#ifdef kcg_use_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
#ifndef kcg_comp_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
extern kcg_bool kcg_comp_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *kcg_c1,
  refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *kcg_c2);
#endif /* kcg_comp_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */
#endif /* kcg_use_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */

#ifdef kcg_use_p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg
#ifndef kcg_comp_p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg
extern kcg_bool kcg_comp_p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg(
  p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg *kcg_c1,
  p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg *kcg_c2);
#endif /* kcg_comp_p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg */
#endif /* kcg_use_p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg */

#ifdef kcg_use_API_TelegramHeader_T_API_Msg_Pkg
#ifndef kcg_comp_API_TelegramHeader_T_API_Msg_Pkg
extern kcg_bool kcg_comp_API_TelegramHeader_T_API_Msg_Pkg(
  API_TelegramHeader_T_API_Msg_Pkg *kcg_c1,
  API_TelegramHeader_T_API_Msg_Pkg *kcg_c2);
#endif /* kcg_comp_API_TelegramHeader_T_API_Msg_Pkg */
#endif /* kcg_use_API_TelegramHeader_T_API_Msg_Pkg */

#ifdef kcg_use_API_RadioMsgHeader_T_API_Msg_Pkg
#ifndef kcg_comp_API_RadioMsgHeader_T_API_Msg_Pkg
extern kcg_bool kcg_comp_API_RadioMsgHeader_T_API_Msg_Pkg(
  API_RadioMsgHeader_T_API_Msg_Pkg *kcg_c1,
  API_RadioMsgHeader_T_API_Msg_Pkg *kcg_c2);
#endif /* kcg_comp_API_RadioMsgHeader_T_API_Msg_Pkg */
#endif /* kcg_use_API_RadioMsgHeader_T_API_Msg_Pkg */

#ifdef kcg_use_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifndef kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg
extern kcg_bool kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg(
  OdometrySpeeds_T_Obu_BasicTypes_Pkg *kcg_c1,
  OdometrySpeeds_T_Obu_BasicTypes_Pkg *kcg_c2);
#define kcg_use_OdometrySpeeds_T_Obu_BasicTypes_Pkg
#endif /* kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_Gradient_section_t_TrackAtlasTypes
#ifndef kcg_comp_Gradient_section_t_TrackAtlasTypes
extern kcg_bool kcg_comp_Gradient_section_t_TrackAtlasTypes(
  Gradient_section_t_TrackAtlasTypes *kcg_c1,
  Gradient_section_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_Gradient_section_t_TrackAtlasTypes */
#endif /* kcg_use_Gradient_section_t_TrackAtlasTypes */

#ifdef kcg_use_dmiOutputs_T_manage_DMI_Output_Pkg
#ifndef kcg_comp_dmiOutputs_T_manage_DMI_Output_Pkg
extern kcg_bool kcg_comp_dmiOutputs_T_manage_DMI_Output_Pkg(
  dmiOutputs_T_manage_DMI_Output_Pkg *kcg_c1,
  dmiOutputs_T_manage_DMI_Output_Pkg *kcg_c2);
#endif /* kcg_comp_dmiOutputs_T_manage_DMI_Output_Pkg */
#endif /* kcg_use_dmiOutputs_T_manage_DMI_Output_Pkg */

#ifndef kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg
extern kcg_bool kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg(
  OdometryLocations_T_Obu_BasicTypes_Pkg *kcg_c1,
  OdometryLocations_T_Obu_BasicTypes_Pkg *kcg_c2);
#define kcg_use_OdometryLocations_T_Obu_BasicTypes_Pkg
#endif /* kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg(
  T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_T_Data_From_DMI_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_From_DMI_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_From_DMI_Level_And_Mode_Types_Pkg(
  T_Data_From_DMI_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_DMI_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_From_DMI_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_From_DMI_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_TSM_triggerCond_T_SDM_Commands_Pkg
#ifndef kcg_comp_TSM_triggerCond_T_SDM_Commands_Pkg
extern kcg_bool kcg_comp_TSM_triggerCond_T_SDM_Commands_Pkg(
  TSM_triggerCond_T_SDM_Commands_Pkg *kcg_c1,
  TSM_triggerCond_T_SDM_Commands_Pkg *kcg_c2);
#endif /* kcg_comp_TSM_triggerCond_T_SDM_Commands_Pkg */
#endif /* kcg_use_TSM_triggerCond_T_SDM_Commands_Pkg */

#ifdef kcg_use_speedSupervisionForDMI_T_DMI_Types_Pkg
#ifndef kcg_comp_speedSupervisionForDMI_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_speedSupervisionForDMI_T_DMI_Types_Pkg(
  speedSupervisionForDMI_T_DMI_Types_Pkg *kcg_c1,
  speedSupervisionForDMI_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_speedSupervisionForDMI_T_DMI_Types_Pkg */
#endif /* kcg_use_speedSupervisionForDMI_T_DMI_Types_Pkg */

#ifdef kcg_use_Speeds_T_SDM_Types_Pkg
#ifndef kcg_comp_Speeds_T_SDM_Types_Pkg
extern kcg_bool kcg_comp_Speeds_T_SDM_Types_Pkg(
  Speeds_T_SDM_Types_Pkg *kcg_c1,
  Speeds_T_SDM_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Speeds_T_SDM_Types_Pkg */
#endif /* kcg_use_Speeds_T_SDM_Types_Pkg */

#ifdef kcg_use_SDM_Locations_T_SDM_Types_Pkg
#ifndef kcg_comp_SDM_Locations_T_SDM_Types_Pkg
extern kcg_bool kcg_comp_SDM_Locations_T_SDM_Types_Pkg(
  SDM_Locations_T_SDM_Types_Pkg *kcg_c1,
  SDM_Locations_T_SDM_Types_Pkg *kcg_c2);
#endif /* kcg_comp_SDM_Locations_T_SDM_Types_Pkg */
#endif /* kcg_use_SDM_Locations_T_SDM_Types_Pkg */

#ifdef kcg_use_MA_section_real_T_TargetManagement_types
#ifndef kcg_comp_MA_section_real_T_TargetManagement_types
extern kcg_bool kcg_comp_MA_section_real_T_TargetManagement_types(
  MA_section_real_T_TargetManagement_types *kcg_c1,
  MA_section_real_T_TargetManagement_types *kcg_c2);
#endif /* kcg_comp_MA_section_real_T_TargetManagement_types */
#endif /* kcg_use_MA_section_real_T_TargetManagement_types */

#ifdef kcg_use_SDM_Commands_T_SDM_Types_Pkg
#ifndef kcg_comp_SDM_Commands_T_SDM_Types_Pkg
extern kcg_bool kcg_comp_SDM_Commands_T_SDM_Types_Pkg(
  SDM_Commands_T_SDM_Types_Pkg *kcg_c1,
  SDM_Commands_T_SDM_Types_Pkg *kcg_c2);
#endif /* kcg_comp_SDM_Commands_T_SDM_Types_Pkg */
#endif /* kcg_use_SDM_Commands_T_SDM_Types_Pkg */

#ifdef kcg_use_P58_PositionReportParameters_T_Packet_Types_Pkg
#ifndef kcg_comp_P58_PositionReportParameters_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P58_PositionReportParameters_T_Packet_Types_Pkg(
  P58_PositionReportParameters_T_Packet_Types_Pkg *kcg_c1,
  P58_PositionReportParameters_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P58_PositionReportParameters_T_Packet_Types_Pkg */
#endif /* kcg_use_P58_PositionReportParameters_T_Packet_Types_Pkg */

#ifdef kcg_use_P003_OBU_T_TM
#ifndef kcg_comp_P003_OBU_T_TM
extern kcg_bool kcg_comp_P003_OBU_T_TM(
  P003_OBU_T_TM *kcg_c1,
  P003_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P003_OBU_T_TM */
#endif /* kcg_use_P003_OBU_T_TM */

#ifdef kcg_use_P003V1_OBU_T_TM_baseline2
#ifndef kcg_comp_P003V1_OBU_T_TM_baseline2
extern kcg_bool kcg_comp_P003V1_OBU_T_TM_baseline2(
  P003V1_OBU_T_TM_baseline2 *kcg_c1,
  P003V1_OBU_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P003V1_OBU_T_TM_baseline2 */
#endif /* kcg_use_P003V1_OBU_T_TM_baseline2 */

#ifdef kcg_use_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg(
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_P012_OBU_T_TM
#ifndef kcg_comp_P012_OBU_T_TM
extern kcg_bool kcg_comp_P012_OBU_T_TM(
  P012_OBU_T_TM *kcg_c1,
  P012_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P012_OBU_T_TM */
#endif /* kcg_use_P012_OBU_T_TM */

#ifdef kcg_use_P15_Level23MovementAuthority_T_Packet_Types_Pkg
#ifndef kcg_comp_P15_Level23MovementAuthority_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P15_Level23MovementAuthority_T_Packet_Types_Pkg(
  P15_Level23MovementAuthority_T_Packet_Types_Pkg *kcg_c1,
  P15_Level23MovementAuthority_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P15_Level23MovementAuthority_T_Packet_Types_Pkg */
#endif /* kcg_use_P15_Level23MovementAuthority_T_Packet_Types_Pkg */

#ifdef kcg_use_P12_Level1MovementAuthority_T_Packet_Types_Pkg
#ifndef kcg_comp_P12_Level1MovementAuthority_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P12_Level1MovementAuthority_T_Packet_Types_Pkg(
  P12_Level1MovementAuthority_T_Packet_Types_Pkg *kcg_c1,
  P12_Level1MovementAuthority_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P12_Level1MovementAuthority_T_Packet_Types_Pkg */
#endif /* kcg_use_P12_Level1MovementAuthority_T_Packet_Types_Pkg */

#ifdef kcg_use_P015_OBU_T_TM
#ifndef kcg_comp_P015_OBU_T_TM
extern kcg_bool kcg_comp_P015_OBU_T_TM(
  P015_OBU_T_TM *kcg_c1,
  P015_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P015_OBU_T_TM */
#endif /* kcg_use_P015_OBU_T_TM */

#ifdef kcg_use_MovementAuthority_t_TrackAtlasTypes
#ifndef kcg_comp_MovementAuthority_t_TrackAtlasTypes
extern kcg_bool kcg_comp_MovementAuthority_t_TrackAtlasTypes(
  MovementAuthority_t_TrackAtlasTypes *kcg_c1,
  MovementAuthority_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_MovementAuthority_t_TrackAtlasTypes */
#endif /* kcg_use_MovementAuthority_t_TrackAtlasTypes */

#ifdef kcg_use_trainPositionInfo_T_TrainPosition_Types_Pck
#ifndef kcg_comp_trainPositionInfo_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_trainPositionInfo_T_TrainPosition_Types_Pck(
  trainPositionInfo_T_TrainPosition_Types_Pck *kcg_c1,
  trainPositionInfo_T_TrainPosition_Types_Pck *kcg_c2);
#endif /* kcg_comp_trainPositionInfo_T_TrainPosition_Types_Pck */
#endif /* kcg_use_trainPositionInfo_T_TrainPosition_Types_Pck */

#ifdef kcg_use_P3_NationalValues_T_Packet_Types_Pkg
#ifndef kcg_comp_P3_NationalValues_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P3_NationalValues_T_Packet_Types_Pkg(
  P3_NationalValues_T_Packet_Types_Pkg *kcg_c1,
  P3_NationalValues_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P3_NationalValues_T_Packet_Types_Pkg */
#endif /* kcg_use_P3_NationalValues_T_Packet_Types_Pkg */

#ifdef kcg_use_P203V1_OBU_T_TM_baseline2
#ifndef kcg_comp_P203V1_OBU_T_TM_baseline2
extern kcg_bool kcg_comp_P203V1_OBU_T_TM_baseline2(
  P203V1_OBU_T_TM_baseline2 *kcg_c1,
  P203V1_OBU_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P203V1_OBU_T_TM_baseline2 */
#endif /* kcg_use_P203V1_OBU_T_TM_baseline2 */

#ifdef kcg_use_trainPosition_T_TrainPosition_Types_Pck
#ifndef kcg_comp_trainPosition_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_trainPosition_T_TrainPosition_Types_Pck(
  trainPosition_T_TrainPosition_Types_Pck *kcg_c1,
  trainPosition_T_TrainPosition_Types_Pck *kcg_c2);
#endif /* kcg_comp_trainPosition_T_TrainPosition_Types_Pck */
#endif /* kcg_use_trainPosition_T_TrainPosition_Types_Pck */

#ifndef kcg_comp_LinkedBG_T_BG_Types_Pkg
extern kcg_bool kcg_comp_LinkedBG_T_BG_Types_Pkg(
  LinkedBG_T_BG_Types_Pkg *kcg_c1,
  LinkedBG_T_BG_Types_Pkg *kcg_c2);
#define kcg_use_LinkedBG_T_BG_Types_Pkg
#endif /* kcg_comp_LinkedBG_T_BG_Types_Pkg */

#ifdef kcg_use_morc_configData_T_RCM_Session_Types_Pkg
#ifndef kcg_comp_morc_configData_T_RCM_Session_Types_Pkg
extern kcg_bool kcg_comp_morc_configData_T_RCM_Session_Types_Pkg(
  morc_configData_T_RCM_Session_Types_Pkg *kcg_c1,
  morc_configData_T_RCM_Session_Types_Pkg *kcg_c2);
#endif /* kcg_comp_morc_configData_T_RCM_Session_Types_Pkg */
#endif /* kcg_use_morc_configData_T_RCM_Session_Types_Pkg */

#ifdef kcg_use_sessionCmd_T_RCM_Session_Types_Pkg
#ifndef kcg_comp_sessionCmd_T_RCM_Session_Types_Pkg
extern kcg_bool kcg_comp_sessionCmd_T_RCM_Session_Types_Pkg(
  sessionCmd_T_RCM_Session_Types_Pkg *kcg_c1,
  sessionCmd_T_RCM_Session_Types_Pkg *kcg_c2);
#endif /* kcg_comp_sessionCmd_T_RCM_Session_Types_Pkg */
#endif /* kcg_use_sessionCmd_T_RCM_Session_Types_Pkg */

#ifdef kcg_use_obuEventsAndPhases_T_RCM_Session_Types_Pkg
#ifndef kcg_comp_obuEventsAndPhases_T_RCM_Session_Types_Pkg
extern kcg_bool kcg_comp_obuEventsAndPhases_T_RCM_Session_Types_Pkg(
  obuEventsAndPhases_T_RCM_Session_Types_Pkg *kcg_c1,
  obuEventsAndPhases_T_RCM_Session_Types_Pkg *kcg_c2);
#endif /* kcg_comp_obuEventsAndPhases_T_RCM_Session_Types_Pkg */
#endif /* kcg_use_obuEventsAndPhases_T_RCM_Session_Types_Pkg */

#ifndef kcg_comp_BG_Header_T_BG_Types_Pkg
extern kcg_bool kcg_comp_BG_Header_T_BG_Types_Pkg(
  BG_Header_T_BG_Types_Pkg *kcg_c1,
  BG_Header_T_BG_Types_Pkg *kcg_c2);
#define kcg_use_BG_Header_T_BG_Types_Pkg
#endif /* kcg_comp_BG_Header_T_BG_Types_Pkg */

#ifdef kcg_use_P000_TM_TrainToTrack
#ifndef kcg_comp_P000_TM_TrainToTrack
extern kcg_bool kcg_comp_P000_TM_TrainToTrack(
  P000_TM_TrainToTrack *kcg_c1,
  P000_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P000_TM_TrainToTrack */
#endif /* kcg_use_P000_TM_TrainToTrack */

#ifdef kcg_use_P001_TM_TrainToTrack
#ifndef kcg_comp_P001_TM_TrainToTrack
extern kcg_bool kcg_comp_P001_TM_TrainToTrack(
  P001_TM_TrainToTrack *kcg_c1,
  P001_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P001_TM_TrainToTrack */
#endif /* kcg_use_P001_TM_TrainToTrack */

#ifdef kcg_use_P011_TM_TrainToTrack
#ifndef kcg_comp_P011_TM_TrainToTrack
extern kcg_bool kcg_comp_P011_TM_TrainToTrack(
  P011_TM_TrainToTrack *kcg_c1,
  P011_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P011_TM_TrainToTrack */
#endif /* kcg_use_P011_TM_TrainToTrack */

#ifdef kcg_use_Position_Report_TrainToTrack
#ifndef kcg_comp_Position_Report_TrainToTrack
extern kcg_bool kcg_comp_Position_Report_TrainToTrack(
  Position_Report_TrainToTrack *kcg_c1,
  Position_Report_TrainToTrack *kcg_c2);
#endif /* kcg_comp_Position_Report_TrainToTrack */
#endif /* kcg_use_Position_Report_TrainToTrack */

#ifdef kcg_use_Position_Report_based_on_two_balise_groups_TrainToTrack
#ifndef kcg_comp_Position_Report_based_on_two_balise_groups_TrainToTrack
extern kcg_bool kcg_comp_Position_Report_based_on_two_balise_groups_TrainToTrack(
  Position_Report_based_on_two_balise_groups_TrainToTrack *kcg_c1,
  Position_Report_based_on_two_balise_groups_TrainToTrack *kcg_c2);
#endif /* kcg_comp_Position_Report_based_on_two_balise_groups_TrainToTrack */
#endif /* kcg_use_Position_Report_based_on_two_balise_groups_TrainToTrack */

#ifdef kcg_use_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg(
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *kcg_c1,
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_TrainData_T
#ifndef kcg_comp_TrainData_T
extern kcg_bool kcg_comp_TrainData_T(TrainData_T *kcg_c1, TrainData_T *kcg_c2);
#endif /* kcg_comp_TrainData_T */
#endif /* kcg_use_TrainData_T */

#ifdef kcg_use_PosData_T
#ifndef kcg_comp_PosData_T
extern kcg_bool kcg_comp_PosData_T(PosData_T *kcg_c1, PosData_T *kcg_c2);
#endif /* kcg_comp_PosData_T */
#endif /* kcg_use_PosData_T */

#ifndef kcg_comp_TelegramHeader_T_BG_Types_Pkg
extern kcg_bool kcg_comp_TelegramHeader_T_BG_Types_Pkg(
  TelegramHeader_T_BG_Types_Pkg *kcg_c1,
  TelegramHeader_T_BG_Types_Pkg *kcg_c2);
#define kcg_use_TelegramHeader_T_BG_Types_Pkg
#endif /* kcg_comp_TelegramHeader_T_BG_Types_Pkg */

#ifdef kcg_use_Radio_TrackTrain_Header_T_TM
#ifndef kcg_comp_Radio_TrackTrain_Header_T_TM
extern kcg_bool kcg_comp_Radio_TrackTrain_Header_T_TM(
  Radio_TrackTrain_Header_T_TM *kcg_c1,
  Radio_TrackTrain_Header_T_TM *kcg_c2);
#endif /* kcg_comp_Radio_TrackTrain_Header_T_TM */
#endif /* kcg_use_Radio_TrackTrain_Header_T_TM */

#ifdef kcg_use_M_015_int_T_TM_radio_messages
#ifndef kcg_comp_M_015_int_T_TM_radio_messages
extern kcg_bool kcg_comp_M_015_int_T_TM_radio_messages(
  M_015_int_T_TM_radio_messages *kcg_c1,
  M_015_int_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_015_int_T_TM_radio_messages */
#endif /* kcg_use_M_015_int_T_TM_radio_messages */

#ifdef kcg_use_M_015_T_TM_radio_messages
#ifndef kcg_comp_M_015_T_TM_radio_messages
extern kcg_bool kcg_comp_M_015_T_TM_radio_messages(
  M_015_T_TM_radio_messages *kcg_c1,
  M_015_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_015_T_TM_radio_messages */
#endif /* kcg_use_M_015_T_TM_radio_messages */

#ifdef kcg_use_M_034_T_TM_radio_messages
#ifndef kcg_comp_M_034_T_TM_radio_messages
extern kcg_bool kcg_comp_M_034_T_TM_radio_messages(
  M_034_T_TM_radio_messages *kcg_c1,
  M_034_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_034_T_TM_radio_messages */
#endif /* kcg_use_M_034_T_TM_radio_messages */

#ifndef kcg_comp_struct_171773
extern kcg_bool kcg_comp_struct_171773(
  struct_171773 *kcg_c1,
  struct_171773 *kcg_c2);
#define kcg_use_struct_171773
#endif /* kcg_comp_struct_171773 */

#ifdef kcg_use_P058_trackside_int_T_TM
#ifndef kcg_comp_P058_trackside_int_T_TM
extern kcg_bool kcg_comp_P058_trackside_int_T_TM(
  P058_trackside_int_T_TM *kcg_c1,
  P058_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P058_trackside_int_T_TM */
#endif /* kcg_use_P058_trackside_int_T_TM */

#ifdef kcg_use_M_TrackTrain_Radio_T_TM_radio_messages
#ifndef kcg_comp_M_TrackTrain_Radio_T_TM_radio_messages
extern kcg_bool kcg_comp_M_TrackTrain_Radio_T_TM_radio_messages(
  M_TrackTrain_Radio_T_TM_radio_messages *kcg_c1,
  M_TrackTrain_Radio_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_TrackTrain_Radio_T_TM_radio_messages */
#endif /* kcg_use_M_TrackTrain_Radio_T_TM_radio_messages */

#ifdef kcg_use_P065_trackside_int_T_TM
#ifndef kcg_comp_P065_trackside_int_T_TM
extern kcg_bool kcg_comp_P065_trackside_int_T_TM(
  P065_trackside_int_T_TM *kcg_c1,
  P065_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P065_trackside_int_T_TM */
#endif /* kcg_use_P065_trackside_int_T_TM */

#ifdef kcg_use_P021_trackside_int_T_TM
#ifndef kcg_comp_P021_trackside_int_T_TM
extern kcg_bool kcg_comp_P021_trackside_int_T_TM(
  P021_trackside_int_T_TM *kcg_c1,
  P021_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P021_trackside_int_T_TM */
#endif /* kcg_use_P021_trackside_int_T_TM */

#ifdef kcg_use_P027V1_trackside_int_T_TM_baseline2
#ifndef kcg_comp_P027V1_trackside_int_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_trackside_int_T_TM_baseline2(
  P027V1_trackside_int_T_TM_baseline2 *kcg_c1,
  P027V1_trackside_int_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_trackside_int_T_TM_baseline2 */
#endif /* kcg_use_P027V1_trackside_int_T_TM_baseline2 */

#ifdef kcg_use_P005_trackside_int_T_TM
#ifndef kcg_comp_P005_trackside_int_T_TM
extern kcg_bool kcg_comp_P005_trackside_int_T_TM(
  P005_trackside_int_T_TM *kcg_c1,
  P005_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P005_trackside_int_T_TM */
#endif /* kcg_use_P005_trackside_int_T_TM */

#ifdef kcg_use_P015_trackside_int_T_TM
#ifndef kcg_comp_P015_trackside_int_T_TM
extern kcg_bool kcg_comp_P015_trackside_int_T_TM(
  P015_trackside_int_T_TM *kcg_c1,
  P015_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P015_trackside_int_T_TM */
#endif /* kcg_use_P015_trackside_int_T_TM */

#ifdef kcg_use_P003V1_trackside_int_T_TM_baseline2
#ifndef kcg_comp_P003V1_trackside_int_T_TM_baseline2
extern kcg_bool kcg_comp_P003V1_trackside_int_T_TM_baseline2(
  P003V1_trackside_int_T_TM_baseline2 *kcg_c1,
  P003V1_trackside_int_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P003V1_trackside_int_T_TM_baseline2 */
#endif /* kcg_use_P003V1_trackside_int_T_TM_baseline2 */

#ifdef kcg_use_P041_trackside_int_T_TM
#ifndef kcg_comp_P041_trackside_int_T_TM
extern kcg_bool kcg_comp_P041_trackside_int_T_TM(
  P041_trackside_int_T_TM *kcg_c1,
  P041_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P041_trackside_int_T_TM */
#endif /* kcg_use_P041_trackside_int_T_TM */

#ifdef kcg_use_BaliseTelegramHeader_int_T_TM
#ifndef kcg_comp_BaliseTelegramHeader_int_T_TM
extern kcg_bool kcg_comp_BaliseTelegramHeader_int_T_TM(
  BaliseTelegramHeader_int_T_TM *kcg_c1,
  BaliseTelegramHeader_int_T_TM *kcg_c2);
#endif /* kcg_comp_BaliseTelegramHeader_int_T_TM */
#endif /* kcg_use_BaliseTelegramHeader_int_T_TM */

#ifdef kcg_use_trainData_T_TIU_Types_Pkg
#ifndef kcg_comp_trainData_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_trainData_T_TIU_Types_Pkg(
  trainData_T_TIU_Types_Pkg *kcg_c1,
  trainData_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_trainData_T_TIU_Types_Pkg */
#endif /* kcg_use_trainData_T_TIU_Types_Pkg */

#ifdef kcg_use_EVC_to_DMI_Message_T_API_DMI_Pkg
#ifndef kcg_comp_EVC_to_DMI_Message_T_API_DMI_Pkg
extern kcg_bool kcg_comp_EVC_to_DMI_Message_T_API_DMI_Pkg(
  EVC_to_DMI_Message_T_API_DMI_Pkg *kcg_c1,
  EVC_to_DMI_Message_T_API_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_EVC_to_DMI_Message_T_API_DMI_Pkg */
#endif /* kcg_use_EVC_to_DMI_Message_T_API_DMI_Pkg */

#ifdef kcg_use_DMI_to_EVC_Message_T_API_DMI_Pkg
#ifndef kcg_comp_DMI_to_EVC_Message_T_API_DMI_Pkg
extern kcg_bool kcg_comp_DMI_to_EVC_Message_T_API_DMI_Pkg(
  DMI_to_EVC_Message_T_API_DMI_Pkg *kcg_c1,
  DMI_to_EVC_Message_T_API_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_to_EVC_Message_T_API_DMI_Pkg */
#endif /* kcg_use_DMI_to_EVC_Message_T_API_DMI_Pkg */

#ifdef kcg_use_DMI_Available_Menu_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_Available_Menu_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_Available_Menu_T_DMI_Types_Pkg(
  DMI_Available_Menu_T_DMI_Types_Pkg *kcg_c1,
  DMI_Available_Menu_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Available_Menu_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_Available_Menu_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_Brake_inhibition_command_T_TIU_Types_Pkg
#ifndef kcg_comp_Brake_inhibition_command_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Brake_inhibition_command_T_TIU_Types_Pkg(
  Brake_inhibition_command_T_TIU_Types_Pkg *kcg_c1,
  Brake_inhibition_command_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Brake_inhibition_command_T_TIU_Types_Pkg */
#endif /* kcg_use_Brake_inhibition_command_T_TIU_Types_Pkg */

#ifdef kcg_use_RBC_Communication_T_ProvidePositionReport_Pkg
#ifndef kcg_comp_RBC_Communication_T_ProvidePositionReport_Pkg
extern kcg_bool kcg_comp_RBC_Communication_T_ProvidePositionReport_Pkg(
  RBC_Communication_T_ProvidePositionReport_Pkg *kcg_c1,
  RBC_Communication_T_ProvidePositionReport_Pkg *kcg_c2);
#endif /* kcg_comp_RBC_Communication_T_ProvidePositionReport_Pkg */
#endif /* kcg_use_RBC_Communication_T_ProvidePositionReport_Pkg */

#ifdef kcg_use_T_Data_To_DMI_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Data_To_DMI_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Data_To_DMI_Level_And_Mode_Types_Pkg(
  T_Data_To_DMI_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Data_To_DMI_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Data_To_DMI_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Data_To_DMI_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_TargetIteratorAkku_TargetLimits_Pkg
#ifndef kcg_comp_TargetIteratorAkku_TargetLimits_Pkg
extern kcg_bool kcg_comp_TargetIteratorAkku_TargetLimits_Pkg(
  TargetIteratorAkku_TargetLimits_Pkg *kcg_c1,
  TargetIteratorAkku_TargetLimits_Pkg *kcg_c2);
#endif /* kcg_comp_TargetIteratorAkku_TargetLimits_Pkg */
#endif /* kcg_use_TargetIteratorAkku_TargetLimits_Pkg */

#ifdef kcg_use_DMI_EVC_status_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_EVC_status_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_EVC_status_T_DMI_Types_Pkg(
  DMI_EVC_status_T_DMI_Types_Pkg *kcg_c1,
  DMI_EVC_status_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_EVC_status_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_EVC_status_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_TXT_MSG_status_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_TXT_MSG_status_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_TXT_MSG_status_T_DMI_Types_Pkg(
  DMI_TXT_MSG_status_T_DMI_Types_Pkg *kcg_c1,
  DMI_TXT_MSG_status_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_TXT_MSG_status_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_TXT_MSG_status_T_DMI_Types_Pkg */

#ifdef kcg_use_BGCollector_T_Receive_TrackSide_Msg_Pkg
#ifndef kcg_comp_BGCollector_T_Receive_TrackSide_Msg_Pkg
extern kcg_bool kcg_comp_BGCollector_T_Receive_TrackSide_Msg_Pkg(
  BGCollector_T_Receive_TrackSide_Msg_Pkg *kcg_c1,
  BGCollector_T_Receive_TrackSide_Msg_Pkg *kcg_c2);
#endif /* kcg_comp_BGCollector_T_Receive_TrackSide_Msg_Pkg */
#endif /* kcg_use_BGCollector_T_Receive_TrackSide_Msg_Pkg */

#ifdef kcg_use_filterRelatedEvents_T_Common_Types_Pkg
#ifndef kcg_comp_filterRelatedEvents_T_Common_Types_Pkg
extern kcg_bool kcg_comp_filterRelatedEvents_T_Common_Types_Pkg(
  filterRelatedEvents_T_Common_Types_Pkg *kcg_c1,
  filterRelatedEvents_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_filterRelatedEvents_T_Common_Types_Pkg */
#endif /* kcg_use_filterRelatedEvents_T_Common_Types_Pkg */

#ifdef kcg_use_dataCollectionForLevelTransition_T_xdebugSupport_Pkg
#ifndef kcg_comp_dataCollectionForLevelTransition_T_xdebugSupport_Pkg
extern kcg_bool kcg_comp_dataCollectionForLevelTransition_T_xdebugSupport_Pkg(
  dataCollectionForLevelTransition_T_xdebugSupport_Pkg *kcg_c1,
  dataCollectionForLevelTransition_T_xdebugSupport_Pkg *kcg_c2);
#endif /* kcg_comp_dataCollectionForLevelTransition_T_xdebugSupport_Pkg */
#endif /* kcg_use_dataCollectionForLevelTransition_T_xdebugSupport_Pkg */

#ifdef kcg_use_MSG_Errors_T_Common_Types_Pkg
#ifndef kcg_comp_MSG_Errors_T_Common_Types_Pkg
extern kcg_bool kcg_comp_MSG_Errors_T_Common_Types_Pkg(
  MSG_Errors_T_Common_Types_Pkg *kcg_c1,
  MSG_Errors_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_MSG_Errors_T_Common_Types_Pkg */
#endif /* kcg_use_MSG_Errors_T_Common_Types_Pkg */

#ifdef kcg_use_P058_OBU_T_TM
#ifndef kcg_comp_P058_OBU_T_TM
extern kcg_bool kcg_comp_P058_OBU_T_TM(
  P058_OBU_T_TM *kcg_c1,
  P058_OBU_T_TM *kcg_c2);
#endif /* kcg_comp_P058_OBU_T_TM */
#endif /* kcg_use_P058_OBU_T_TM */

#ifdef kcg_use_mobileConnectionCmd_T_RCM_Types_Pkg
#ifndef kcg_comp_mobileConnectionCmd_T_RCM_Types_Pkg
extern kcg_bool kcg_comp_mobileConnectionCmd_T_RCM_Types_Pkg(
  mobileConnectionCmd_T_RCM_Types_Pkg *kcg_c1,
  mobileConnectionCmd_T_RCM_Types_Pkg *kcg_c2);
#endif /* kcg_comp_mobileConnectionCmd_T_RCM_Types_Pkg */
#endif /* kcg_use_mobileConnectionCmd_T_RCM_Types_Pkg */

#ifdef kcg_use_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg
#ifndef kcg_comp_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg(
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg *kcg_c1,
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg */
#endif /* kcg_use_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg */

#ifdef kcg_use_P80_ModeProfile_T_Packet_Types_Pkg
#ifndef kcg_comp_P80_ModeProfile_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P80_ModeProfile_T_Packet_Types_Pkg(
  P80_ModeProfile_T_Packet_Types_Pkg *kcg_c1,
  P80_ModeProfile_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P80_ModeProfile_T_Packet_Types_Pkg */
#endif /* kcg_use_P80_ModeProfile_T_Packet_Types_Pkg */

#ifdef kcg_use_M_147_T_TM_radio_messages
#ifndef kcg_comp_M_147_T_TM_radio_messages
extern kcg_bool kcg_comp_M_147_T_TM_radio_messages(
  M_147_T_TM_radio_messages *kcg_c1,
  M_147_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_147_T_TM_radio_messages */
#endif /* kcg_use_M_147_T_TM_radio_messages */

#ifdef kcg_use_positionErrors_T_TrainPosition_Types_Pck
#ifndef kcg_comp_positionErrors_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_positionErrors_T_TrainPosition_Types_Pck(
  positionErrors_T_TrainPosition_Types_Pck *kcg_c1,
  positionErrors_T_TrainPosition_Types_Pck *kcg_c2);
#endif /* kcg_comp_positionErrors_T_TrainPosition_Types_Pck */
#endif /* kcg_use_positionErrors_T_TrainPosition_Types_Pck */

#ifdef kcg_use_P005_section_enum_T_TM
#ifndef kcg_comp_P005_section_enum_T_TM
extern kcg_bool kcg_comp_P005_section_enum_T_TM(
  P005_section_enum_T_TM *kcg_c1,
  P005_section_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P005_section_enum_T_TM */
#endif /* kcg_use_P005_section_enum_T_TM */

#ifdef kcg_use_struct_172264
#ifndef kcg_comp_struct_172264
extern kcg_bool kcg_comp_struct_172264(
  struct_172264 *kcg_c1,
  struct_172264 *kcg_c2);
#endif /* kcg_comp_struct_172264 */
#endif /* kcg_use_struct_172264 */

#ifdef kcg_use_struct_172277
#ifndef kcg_comp_struct_172277
extern kcg_bool kcg_comp_struct_172277(
  struct_172277 *kcg_c1,
  struct_172277 *kcg_c2);
#endif /* kcg_comp_struct_172277 */
#endif /* kcg_use_struct_172277 */

#ifndef kcg_comp_positionedBG_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
  positionedBG_T_TrainPosition_Types_Pck *kcg_c1,
  positionedBG_T_TrainPosition_Types_Pck *kcg_c2);
#define kcg_use_positionedBG_T_TrainPosition_Types_Pck
#endif /* kcg_comp_positionedBG_T_TrainPosition_Types_Pck */

#ifdef kcg_use_P42_SessionManagement_T_Packet_Types_Pkg
#ifndef kcg_comp_P42_SessionManagement_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P42_SessionManagement_T_Packet_Types_Pkg(
  P42_SessionManagement_T_Packet_Types_Pkg *kcg_c1,
  P42_SessionManagement_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P42_SessionManagement_T_Packet_Types_Pkg */
#endif /* kcg_use_P42_SessionManagement_T_Packet_Types_Pkg */

#ifdef kcg_use_p42_sessionManagement_T_RCM_MsgTypes_Pkg
#ifndef kcg_comp_p42_sessionManagement_T_RCM_MsgTypes_Pkg
extern kcg_bool kcg_comp_p42_sessionManagement_T_RCM_MsgTypes_Pkg(
  p42_sessionManagement_T_RCM_MsgTypes_Pkg *kcg_c1,
  p42_sessionManagement_T_RCM_MsgTypes_Pkg *kcg_c2);
#endif /* kcg_comp_p42_sessionManagement_T_RCM_MsgTypes_Pkg */
#endif /* kcg_use_p42_sessionManagement_T_RCM_MsgTypes_Pkg */

#ifndef kcg_comp_RadioMetadata_T_Common_Types_Pkg
extern kcg_bool kcg_comp_RadioMetadata_T_Common_Types_Pkg(
  RadioMetadata_T_Common_Types_Pkg *kcg_c1,
  RadioMetadata_T_Common_Types_Pkg *kcg_c2);
#define kcg_use_RadioMetadata_T_Common_Types_Pkg
#endif /* kcg_comp_RadioMetadata_T_Common_Types_Pkg */

#ifndef kcg_comp_odometry_T_Obu_BasicTypes_Pkg
extern kcg_bool kcg_comp_odometry_T_Obu_BasicTypes_Pkg(
  odometry_T_Obu_BasicTypes_Pkg *kcg_c1,
  odometry_T_Obu_BasicTypes_Pkg *kcg_c2);
#define kcg_use_odometry_T_Obu_BasicTypes_Pkg
#endif /* kcg_comp_odometry_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_M_TrainTrack_MessageHd_T_TM_radio_messages
#ifndef kcg_comp_M_TrainTrack_MessageHd_T_TM_radio_messages
extern kcg_bool kcg_comp_M_TrainTrack_MessageHd_T_TM_radio_messages(
  M_TrainTrack_MessageHd_T_TM_radio_messages *kcg_c1,
  M_TrainTrack_MessageHd_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_TrainTrack_MessageHd_T_TM_radio_messages */
#endif /* kcg_use_M_TrainTrack_MessageHd_T_TM_radio_messages */

#ifdef kcg_use_struct_172356
#ifndef kcg_comp_struct_172356
extern kcg_bool kcg_comp_struct_172356(
  struct_172356 *kcg_c1,
  struct_172356 *kcg_c2);
#endif /* kcg_comp_struct_172356 */
#endif /* kcg_use_struct_172356 */

#ifdef kcg_use_M_002_T_TM_radio_messages
#ifndef kcg_comp_M_002_T_TM_radio_messages
extern kcg_bool kcg_comp_M_002_T_TM_radio_messages(
  M_002_T_TM_radio_messages *kcg_c1,
  M_002_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_002_T_TM_radio_messages */
#endif /* kcg_use_M_002_T_TM_radio_messages */

#ifdef kcg_use_M_045_T_TM_radio_messages
#ifndef kcg_comp_M_045_T_TM_radio_messages
extern kcg_bool kcg_comp_M_045_T_TM_radio_messages(
  M_045_T_TM_radio_messages *kcg_c1,
  M_045_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_045_T_TM_radio_messages */
#endif /* kcg_use_M_045_T_TM_radio_messages */

#ifdef kcg_use_M_033_T_TM_radio_messages
#ifndef kcg_comp_M_033_T_TM_radio_messages
extern kcg_bool kcg_comp_M_033_T_TM_radio_messages(
  M_033_T_TM_radio_messages *kcg_c1,
  M_033_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_033_T_TM_radio_messages */
#endif /* kcg_use_M_033_T_TM_radio_messages */

#ifdef kcg_use_M_032_T_TM_radio_messages
#ifndef kcg_comp_M_032_T_TM_radio_messages
extern kcg_bool kcg_comp_M_032_T_TM_radio_messages(
  M_032_T_TM_radio_messages *kcg_c1,
  M_032_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_032_T_TM_radio_messages */
#endif /* kcg_use_M_032_T_TM_radio_messages */

#ifdef kcg_use_P042_trackside_int_T_TM
#ifndef kcg_comp_P042_trackside_int_T_TM
extern kcg_bool kcg_comp_P042_trackside_int_T_TM(
  P042_trackside_int_T_TM *kcg_c1,
  P042_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P042_trackside_int_T_TM */
#endif /* kcg_use_P042_trackside_int_T_TM */

#ifdef kcg_use_P046_trackside_int_T_TM
#ifndef kcg_comp_P046_trackside_int_T_TM
extern kcg_bool kcg_comp_P046_trackside_int_T_TM(
  P046_trackside_int_T_TM *kcg_c1,
  P046_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P046_trackside_int_T_TM */
#endif /* kcg_use_P046_trackside_int_T_TM */

#ifdef kcg_use_Mode_control_and_train_status_T_TIU_Types_Pkg
#ifndef kcg_comp_Mode_control_and_train_status_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Mode_control_and_train_status_T_TIU_Types_Pkg(
  Mode_control_and_train_status_T_TIU_Types_Pkg *kcg_c1,
  Mode_control_and_train_status_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Mode_control_and_train_status_T_TIU_Types_Pkg */
#endif /* kcg_use_Mode_control_and_train_status_T_TIU_Types_Pkg */

#ifdef kcg_use_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg
#ifndef kcg_comp_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg */
#endif /* kcg_use_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg
#ifndef kcg_comp_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg
extern kcg_bool kcg_comp_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg */
#endif /* kcg_use_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg
#ifndef kcg_comp_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg
extern kcg_bool kcg_comp_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg(
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *kcg_c1,
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg */
#endif /* kcg_use_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg */

#ifndef kcg_comp_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg
extern kcg_bool kcg_comp_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg(
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c1,
  DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *kcg_c2);
#define kcg_use_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg
#endif /* kcg_comp_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg */

#ifdef kcg_use_trainProperties_T_TrainPosition_Types_Pck
#ifndef kcg_comp_trainProperties_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_trainProperties_T_TrainPosition_Types_Pck(
  trainProperties_T_TrainPosition_Types_Pck *kcg_c1,
  trainProperties_T_TrainPosition_Types_Pck *kcg_c2);
#endif /* kcg_comp_trainProperties_T_TrainPosition_Types_Pck */
#endif /* kcg_use_trainProperties_T_TrainPosition_Types_Pck */

#ifdef kcg_use_p131_q_rbcTransitionOrder_T_Handover_Pkg
#ifndef kcg_comp_p131_q_rbcTransitionOrder_T_Handover_Pkg
extern kcg_bool kcg_comp_p131_q_rbcTransitionOrder_T_Handover_Pkg(
  p131_q_rbcTransitionOrder_T_Handover_Pkg *kcg_c1,
  p131_q_rbcTransitionOrder_T_Handover_Pkg *kcg_c2);
#endif /* kcg_comp_p131_q_rbcTransitionOrder_T_Handover_Pkg */
#endif /* kcg_use_p131_q_rbcTransitionOrder_T_Handover_Pkg */

#ifndef kcg_comp_struct_172526
extern kcg_bool kcg_comp_struct_172526(
  struct_172526 *kcg_c1,
  struct_172526 *kcg_c2);
#define kcg_use_struct_172526
#endif /* kcg_comp_struct_172526 */

#ifdef kcg_use_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg
#ifndef kcg_comp_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg(
  Message_EVC_to_Train_Interface_T_TIU_Types_Pkg *kcg_c1,
  Message_EVC_to_Train_Interface_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg */
#endif /* kcg_use_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg */

#ifdef kcg_use_outPackets_T_Common_Types_Pkg
#ifndef kcg_comp_outPackets_T_Common_Types_Pkg
extern kcg_bool kcg_comp_outPackets_T_Common_Types_Pkg(
  outPackets_T_Common_Types_Pkg *kcg_c1,
  outPackets_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_outPackets_T_Common_Types_Pkg */
#endif /* kcg_use_outPackets_T_Common_Types_Pkg */

#ifdef kcg_use_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg
#ifndef kcg_comp_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg
extern kcg_bool kcg_comp_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg(
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c1,
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg */
#endif /* kcg_use_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg */

#ifdef kcg_use_PosRepParams_T
#ifndef kcg_comp_PosRepParams_T
extern kcg_bool kcg_comp_PosRepParams_T(
  PosRepParams_T *kcg_c1,
  PosRepParams_T *kcg_c2);
#endif /* kcg_comp_PosRepParams_T */
#endif /* kcg_use_PosRepParams_T */

#ifdef kcg_use_P255_trackside_int_T_TM
#ifndef kcg_comp_P255_trackside_int_T_TM
extern kcg_bool kcg_comp_P255_trackside_int_T_TM(
  P255_trackside_int_T_TM *kcg_c1,
  P255_trackside_int_T_TM *kcg_c2);
#endif /* kcg_comp_P255_trackside_int_T_TM */
#endif /* kcg_use_P255_trackside_int_T_TM */

#ifdef kcg_use_Brake_pressure_value_T_TIU_Types_Pkg
#ifndef kcg_comp_Brake_pressure_value_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Brake_pressure_value_T_TIU_Types_Pkg(
  Brake_pressure_value_T_TIU_Types_Pkg *kcg_c1,
  Brake_pressure_value_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Brake_pressure_value_T_TIU_Types_Pkg */
#endif /* kcg_use_Brake_pressure_value_T_TIU_Types_Pkg */

#ifdef kcg_use_P63_BaliseInSRAuthority_T_Packet_Types_Pkg
#ifndef kcg_comp_P63_BaliseInSRAuthority_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P63_BaliseInSRAuthority_T_Packet_Types_Pkg(
  P63_BaliseInSRAuthority_T_Packet_Types_Pkg *kcg_c1,
  P63_BaliseInSRAuthority_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P63_BaliseInSRAuthority_T_Packet_Types_Pkg */
#endif /* kcg_use_P63_BaliseInSRAuthority_T_Packet_Types_Pkg */

#ifdef kcg_use_Clock_T
#ifndef kcg_comp_Clock_T
extern kcg_bool kcg_comp_Clock_T(Clock_T *kcg_c1, Clock_T *kcg_c2);
#endif /* kcg_comp_Clock_T */
#endif /* kcg_use_Clock_T */

#ifndef kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg
extern kcg_bool kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
  LocWithInAcc_T_Obu_BasicTypes_Pkg *kcg_c1,
  LocWithInAcc_T_Obu_BasicTypes_Pkg *kcg_c2);
#define kcg_use_LocWithInAcc_T_Obu_BasicTypes_Pkg
#endif /* kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_TrainPosRaw_T_InfraLib
#ifndef kcg_comp_TrainPosRaw_T_InfraLib
extern kcg_bool kcg_comp_TrainPosRaw_T_InfraLib(
  TrainPosRaw_T_InfraLib *kcg_c1,
  TrainPosRaw_T_InfraLib *kcg_c2);
#endif /* kcg_comp_TrainPosRaw_T_InfraLib */
#endif /* kcg_use_TrainPosRaw_T_InfraLib */

#ifdef kcg_use_DataForDMI_t_TrackAtlasTypes
#ifndef kcg_comp_DataForDMI_t_TrackAtlasTypes
extern kcg_bool kcg_comp_DataForDMI_t_TrackAtlasTypes(
  DataForDMI_t_TrackAtlasTypes *kcg_c1,
  DataForDMI_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_DataForDMI_t_TrackAtlasTypes */
#endif /* kcg_use_DataForDMI_t_TrackAtlasTypes */

#ifdef kcg_use_Brake_status_T_TIU_Types_Pkg
#ifndef kcg_comp_Brake_status_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Brake_status_T_TIU_Types_Pkg(
  Brake_status_T_TIU_Types_Pkg *kcg_c1,
  Brake_status_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Brake_status_T_TIU_Types_Pkg */
#endif /* kcg_use_Brake_status_T_TIU_Types_Pkg */

#ifdef kcg_use_T_LevelTransition_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_LevelTransition_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_LevelTransition_Level_And_Mode_Types_Pkg(
  T_LevelTransition_Level_And_Mode_Types_Pkg *kcg_c1,
  T_LevelTransition_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_LevelTransition_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_LevelTransition_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store
#ifndef kcg_comp_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store
extern kcg_bool kcg_comp_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store(
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *kcg_c1,
  NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store *kcg_c2);
#endif /* kcg_comp_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store */
#endif /* kcg_use_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store */

#ifdef kcg_use_LocationBasedEvents_T_ProvidePositionReport_Pkg
#ifndef kcg_comp_LocationBasedEvents_T_ProvidePositionReport_Pkg
extern kcg_bool kcg_comp_LocationBasedEvents_T_ProvidePositionReport_Pkg(
  LocationBasedEvents_T_ProvidePositionReport_Pkg *kcg_c1,
  LocationBasedEvents_T_ProvidePositionReport_Pkg *kcg_c2);
#endif /* kcg_comp_LocationBasedEvents_T_ProvidePositionReport_Pkg */
#endif /* kcg_use_LocationBasedEvents_T_ProvidePositionReport_Pkg */

#ifdef kcg_use_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg(
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *kcg_c1,
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg
#ifndef kcg_comp_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg
extern kcg_bool kcg_comp_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg(
  m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg *kcg_c1,
  m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg *kcg_c2);
#endif /* kcg_comp_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg */
#endif /* kcg_use_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg */

#ifdef kcg_use_odometryFactors_T_Toolbox
#ifndef kcg_comp_odometryFactors_T_Toolbox
extern kcg_bool kcg_comp_odometryFactors_T_Toolbox(
  odometryFactors_T_Toolbox *kcg_c1,
  odometryFactors_T_Toolbox *kcg_c2);
#endif /* kcg_comp_odometryFactors_T_Toolbox */
#endif /* kcg_use_odometryFactors_T_Toolbox */

#ifdef kcg_use_StaticSpeedSection_t_TrackAtlasTypes
#ifndef kcg_comp_StaticSpeedSection_t_TrackAtlasTypes
extern kcg_bool kcg_comp_StaticSpeedSection_t_TrackAtlasTypes(
  StaticSpeedSection_t_TrackAtlasTypes *kcg_c1,
  StaticSpeedSection_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_StaticSpeedSection_t_TrackAtlasTypes */
#endif /* kcg_use_StaticSpeedSection_t_TrackAtlasTypes */

#ifdef kcg_use_P003_permanent_data_T_TM_baseline2
#ifndef kcg_comp_P003_permanent_data_T_TM_baseline2
extern kcg_bool kcg_comp_P003_permanent_data_T_TM_baseline2(
  P003_permanent_data_T_TM_baseline2 *kcg_c1,
  P003_permanent_data_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P003_permanent_data_T_TM_baseline2 */
#endif /* kcg_use_P003_permanent_data_T_TM_baseline2 */

#ifdef kcg_use_P015_section_int_T_TM
#ifndef kcg_comp_P015_section_int_T_TM
extern kcg_bool kcg_comp_P015_section_int_T_TM(
  P015_section_int_T_TM *kcg_c1,
  P015_section_int_T_TM *kcg_c2);
#endif /* kcg_comp_P015_section_int_T_TM */
#endif /* kcg_use_P015_section_int_T_TM */

#ifdef kcg_use_P45_RadioNetworkRegistration_T_Packet_Types_Pkg
#ifndef kcg_comp_P45_RadioNetworkRegistration_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg *kcg_c1,
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P45_RadioNetworkRegistration_T_Packet_Types_Pkg */
#endif /* kcg_use_P45_RadioNetworkRegistration_T_Packet_Types_Pkg */

#ifdef kcg_use_DMI_train_id_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_train_id_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_train_id_T_DMI_Types_Pkg(
  DMI_train_id_T_DMI_Types_Pkg *kcg_c1,
  DMI_train_id_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_train_id_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_train_id_T_DMI_Types_Pkg */

#ifdef kcg_use_radioManagementMessage_T_Common_Types_Pkg
#ifndef kcg_comp_radioManagementMessage_T_Common_Types_Pkg
extern kcg_bool kcg_comp_radioManagementMessage_T_Common_Types_Pkg(
  radioManagementMessage_T_Common_Types_Pkg *kcg_c1,
  radioManagementMessage_T_Common_Types_Pkg *kcg_c2);
#endif /* kcg_comp_radioManagementMessage_T_Common_Types_Pkg */
#endif /* kcg_use_radioManagementMessage_T_Common_Types_Pkg */

#ifdef kcg_use_RadioMessage_T_Radio_Types_Pkg
#ifndef kcg_comp_RadioMessage_T_Radio_Types_Pkg
extern kcg_bool kcg_comp_RadioMessage_T_Radio_Types_Pkg(
  RadioMessage_T_Radio_Types_Pkg *kcg_c1,
  RadioMessage_T_Radio_Types_Pkg *kcg_c2);
#endif /* kcg_comp_RadioMessage_T_Radio_Types_Pkg */
#endif /* kcg_use_RadioMessage_T_Radio_Types_Pkg */

#ifndef kcg_comp_infoFromLinking_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_infoFromLinking_T_TrainPosition_Types_Pck(
  infoFromLinking_T_TrainPosition_Types_Pck *kcg_c1,
  infoFromLinking_T_TrainPosition_Types_Pck *kcg_c2);
#define kcg_use_infoFromLinking_T_TrainPosition_Types_Pck
#endif /* kcg_comp_infoFromLinking_T_TrainPosition_Types_Pck */

#ifdef kcg_use_API_TrackSideInput_T_API_Msg_Pkg
#ifndef kcg_comp_API_TrackSideInput_T_API_Msg_Pkg
extern kcg_bool kcg_comp_API_TrackSideInput_T_API_Msg_Pkg(
  API_TrackSideInput_T_API_Msg_Pkg *kcg_c1,
  API_TrackSideInput_T_API_Msg_Pkg *kcg_c2);
#endif /* kcg_comp_API_TrackSideInput_T_API_Msg_Pkg */
#endif /* kcg_use_API_TrackSideInput_T_API_Msg_Pkg */

#ifdef kcg_use_RBC_Data_T_RBC_DataBus_Pkg
#ifndef kcg_comp_RBC_Data_T_RBC_DataBus_Pkg
extern kcg_bool kcg_comp_RBC_Data_T_RBC_DataBus_Pkg(
  RBC_Data_T_RBC_DataBus_Pkg *kcg_c1,
  RBC_Data_T_RBC_DataBus_Pkg *kcg_c2);
#endif /* kcg_comp_RBC_Data_T_RBC_DataBus_Pkg */
#endif /* kcg_use_RBC_Data_T_RBC_DataBus_Pkg */

#ifdef kcg_use_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg
#ifndef kcg_comp_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg
extern kcg_bool kcg_comp_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg(
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *kcg_c1,
  Message_Train_Interface_to_EVC_T_TIU_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg */
#endif /* kcg_use_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg */

#ifndef kcg_comp_RBC_Id_T_Common_Types_Pkg
extern kcg_bool kcg_comp_RBC_Id_T_Common_Types_Pkg(
  RBC_Id_T_Common_Types_Pkg *kcg_c1,
  RBC_Id_T_Common_Types_Pkg *kcg_c2);
#define kcg_use_RBC_Id_T_Common_Types_Pkg
#endif /* kcg_comp_RBC_Id_T_Common_Types_Pkg */

#ifdef kcg_use_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store
#ifndef kcg_comp_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store
extern kcg_bool kcg_comp_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store(
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store *kcg_c1,
  NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store *kcg_c2);
#endif /* kcg_comp_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store */
#endif /* kcg_use_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store */

#ifdef kcg_use_array_bool_4
#ifndef kcg_comp_array_bool_4
extern kcg_bool kcg_comp_array_bool_4(
  array_bool_4 *kcg_c1,
  array_bool_4 *kcg_c2);
#endif /* kcg_comp_array_bool_4 */
#endif /* kcg_use_array_bool_4 */

#ifdef kcg_use_array_int_4
#ifndef kcg_comp_array_int_4
extern kcg_bool kcg_comp_array_int_4(array_int_4 *kcg_c1, array_int_4 *kcg_c2);
#endif /* kcg_comp_array_int_4 */
#endif /* kcg_use_array_int_4 */

#ifdef kcg_use_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
#ifndef kcg_comp_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg
extern kcg_bool kcg_comp_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg(
  linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *kcg_c1,
  linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg *kcg_c2);
#endif /* kcg_comp_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */
#endif /* kcg_use_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg */

#ifdef kcg_use_array_int_289
#ifndef kcg_comp_array_int_289
extern kcg_bool kcg_comp_array_int_289(
  array_int_289 *kcg_c1,
  array_int_289 *kcg_c2);
#endif /* kcg_comp_array_int_289 */
#endif /* kcg_use_array_int_289 */

#ifdef kcg_use_array_real_4
#ifndef kcg_comp_array_real_4
extern kcg_bool kcg_comp_array_real_4(
  array_real_4 *kcg_c1,
  array_real_4 *kcg_c2);
#endif /* kcg_comp_array_real_4 */
#endif /* kcg_use_array_real_4 */

#ifdef kcg_use_RadioTrackTrainMessageQueueEntries_T
#ifndef kcg_comp_RadioTrackTrainMessageQueueEntries_T
extern kcg_bool kcg_comp_RadioTrackTrainMessageQueueEntries_T(
  RadioTrackTrainMessageQueueEntries_T *kcg_c1,
  RadioTrackTrainMessageQueueEntries_T *kcg_c2);
#endif /* kcg_comp_RadioTrackTrainMessageQueueEntries_T */
#endif /* kcg_use_RadioTrackTrainMessageQueueEntries_T */

#ifdef kcg_use_array_int_2_4_8
#ifndef kcg_comp_array_int_2_4_8
extern kcg_bool kcg_comp_array_int_2_4_8(
  array_int_2_4_8 *kcg_c1,
  array_int_2_4_8 *kcg_c2);
#endif /* kcg_comp_array_int_2_4_8 */
#endif /* kcg_use_array_int_2_4_8 */

#ifdef kcg_use_array_int_492
#ifndef kcg_comp_array_int_492
extern kcg_bool kcg_comp_array_int_492(
  array_int_492 *kcg_c1,
  array_int_492 *kcg_c2);
#endif /* kcg_comp_array_int_492 */
#endif /* kcg_use_array_int_492 */

#ifdef kcg_use_array_168400
#ifndef kcg_comp_array_168400
extern kcg_bool kcg_comp_array_168400(
  array_168400 *kcg_c1,
  array_168400 *kcg_c2);
#endif /* kcg_comp_array_168400 */
#endif /* kcg_use_array_168400 */

#ifdef kcg_use_array_168410
#ifndef kcg_comp_array_168410
extern kcg_bool kcg_comp_array_168410(
  array_168410 *kcg_c1,
  array_168410 *kcg_c2);
#endif /* kcg_comp_array_168410 */
#endif /* kcg_use_array_168410 */

#ifdef kcg_use_StaticSpeedProfile_t_TrackAtlasTypes
#ifndef kcg_comp_StaticSpeedProfile_t_TrackAtlasTypes
extern kcg_bool kcg_comp_StaticSpeedProfile_t_TrackAtlasTypes(
  StaticSpeedProfile_t_TrackAtlasTypes *kcg_c1,
  StaticSpeedProfile_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_StaticSpeedProfile_t_TrackAtlasTypes */
#endif /* kcg_use_StaticSpeedProfile_t_TrackAtlasTypes */

#ifdef kcg_use_GradientProfile_t_TrackAtlasTypes
#ifndef kcg_comp_GradientProfile_t_TrackAtlasTypes
extern kcg_bool kcg_comp_GradientProfile_t_TrackAtlasTypes(
  GradientProfile_t_TrackAtlasTypes *kcg_c1,
  GradientProfile_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_GradientProfile_t_TrackAtlasTypes */
#endif /* kcg_use_GradientProfile_t_TrackAtlasTypes */

#ifdef kcg_use_array_int_285
#ifndef kcg_comp_array_int_285
extern kcg_bool kcg_comp_array_int_285(
  array_int_285 *kcg_c1,
  array_int_285 *kcg_c2);
#endif /* kcg_comp_array_int_285 */
#endif /* kcg_use_array_int_285 */

#ifdef kcg_use_array_168486
#ifndef kcg_comp_array_168486
extern kcg_bool kcg_comp_array_168486(
  array_168486 *kcg_c1,
  array_168486 *kcg_c2);
#endif /* kcg_comp_array_168486 */
#endif /* kcg_use_array_168486 */

#ifdef kcg_use_array_168496
#ifndef kcg_comp_array_168496
extern kcg_bool kcg_comp_array_168496(
  array_168496 *kcg_c1,
  array_168496 *kcg_c2);
#endif /* kcg_comp_array_168496 */
#endif /* kcg_use_array_168496 */

#ifdef kcg_use_array_168500
#ifndef kcg_comp_array_168500
extern kcg_bool kcg_comp_array_168500(
  array_168500 *kcg_c1,
  array_168500 *kcg_c2);
#endif /* kcg_comp_array_168500 */
#endif /* kcg_use_array_168500 */

#ifdef kcg_use_GradientProfile_for_DMI_t_TrackAtlasTypes
#ifndef kcg_comp_GradientProfile_for_DMI_t_TrackAtlasTypes
extern kcg_bool kcg_comp_GradientProfile_for_DMI_t_TrackAtlasTypes(
  GradientProfile_for_DMI_t_TrackAtlasTypes *kcg_c1,
  GradientProfile_for_DMI_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_GradientProfile_for_DMI_t_TrackAtlasTypes */
#endif /* kcg_use_GradientProfile_for_DMI_t_TrackAtlasTypes */

#ifdef kcg_use_array_168524
#ifndef kcg_comp_array_168524
extern kcg_bool kcg_comp_array_168524(
  array_168524 *kcg_c1,
  array_168524 *kcg_c2);
#endif /* kcg_comp_array_168524 */
#endif /* kcg_use_array_168524 */

#ifdef kcg_use_TelegramArray_T_BG_Types_Pkg
#ifndef kcg_comp_TelegramArray_T_BG_Types_Pkg
extern kcg_bool kcg_comp_TelegramArray_T_BG_Types_Pkg(
  TelegramArray_T_BG_Types_Pkg *kcg_c1,
  TelegramArray_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_TelegramArray_T_BG_Types_Pkg */
#endif /* kcg_use_TelegramArray_T_BG_Types_Pkg */

#ifdef kcg_use_array_168531
#ifndef kcg_comp_array_168531
extern kcg_bool kcg_comp_array_168531(
  array_168531 *kcg_c1,
  array_168531 *kcg_c2);
#endif /* kcg_comp_array_168531 */
#endif /* kcg_use_array_168531 */

#ifdef kcg_use_array_168535
#ifndef kcg_comp_array_168535
extern kcg_bool kcg_comp_array_168535(
  array_168535 *kcg_c1,
  array_168535 *kcg_c2);
#endif /* kcg_comp_array_168535 */
#endif /* kcg_use_array_168535 */

#ifdef kcg_use_array_int_894
#ifndef kcg_comp_array_int_894
extern kcg_bool kcg_comp_array_int_894(
  array_int_894 *kcg_c1,
  array_int_894 *kcg_c2);
#endif /* kcg_comp_array_int_894 */
#endif /* kcg_use_array_int_894 */

#ifdef kcg_use_P41_LevelTransistionOrders_T_Packet_Types_Pkg
#ifndef kcg_comp_P41_LevelTransistionOrders_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P41_LevelTransistionOrders_T_Packet_Types_Pkg(
  P41_LevelTransistionOrders_T_Packet_Types_Pkg *kcg_c1,
  P41_LevelTransistionOrders_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P41_LevelTransistionOrders_T_Packet_Types_Pkg */
#endif /* kcg_use_P41_LevelTransistionOrders_T_Packet_Types_Pkg */

#ifdef kcg_use_array_168567
#ifndef kcg_comp_array_168567
extern kcg_bool kcg_comp_array_168567(
  array_168567 *kcg_c1,
  array_168567 *kcg_c2);
#endif /* kcg_comp_array_168567 */
#endif /* kcg_use_array_168567 */

#ifdef kcg_use_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck
#ifndef kcg_comp_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(
  linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck *kcg_c1,
  linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck *kcg_c2);
#endif /* kcg_comp_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck */
#endif /* kcg_use_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck */

#ifdef kcg_use_P005_OBU_sectionlist_enum_T_TM
#ifndef kcg_comp_P005_OBU_sectionlist_enum_T_TM
extern kcg_bool kcg_comp_P005_OBU_sectionlist_enum_T_TM(
  P005_OBU_sectionlist_enum_T_TM *kcg_c1,
  P005_OBU_sectionlist_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P005_OBU_sectionlist_enum_T_TM */
#endif /* kcg_use_P005_OBU_sectionlist_enum_T_TM */

#ifndef kcg_comp_LinkedBGs_T_BG_Types_Pkg
extern kcg_bool kcg_comp_LinkedBGs_T_BG_Types_Pkg(
  LinkedBGs_T_BG_Types_Pkg *kcg_c1,
  LinkedBGs_T_BG_Types_Pkg *kcg_c2);
#define kcg_use_LinkedBGs_T_BG_Types_Pkg
#endif /* kcg_comp_LinkedBGs_T_BG_Types_Pkg */

#ifdef kcg_use_P005_OBU_sectionlist_int_T_TM
#ifndef kcg_comp_P005_OBU_sectionlist_int_T_TM
extern kcg_bool kcg_comp_P005_OBU_sectionlist_int_T_TM(
  P005_OBU_sectionlist_int_T_TM *kcg_c1,
  P005_OBU_sectionlist_int_T_TM *kcg_c2);
#endif /* kcg_comp_P005_OBU_sectionlist_int_T_TM */
#endif /* kcg_use_P005_OBU_sectionlist_int_T_TM */

#ifdef kcg_use_array_168602
#ifndef kcg_comp_array_168602
extern kcg_bool kcg_comp_array_168602(
  array_168602 *kcg_c1,
  array_168602 *kcg_c2);
#endif /* kcg_comp_array_168602 */
#endif /* kcg_use_array_168602 */

#ifdef kcg_use_array_168614
#ifndef kcg_comp_array_168614
extern kcg_bool kcg_comp_array_168614(
  array_168614 *kcg_c1,
  array_168614 *kcg_c2);
#endif /* kcg_comp_array_168614 */
#endif /* kcg_use_array_168614 */

#ifdef kcg_use_array_real_10_10
#ifndef kcg_comp_array_real_10_10
extern kcg_bool kcg_comp_array_real_10_10(
  array_real_10_10 *kcg_c1,
  array_real_10_10 *kcg_c2);
#endif /* kcg_comp_array_real_10_10 */
#endif /* kcg_use_array_real_10_10 */

#ifdef kcg_use_array_168647
#ifndef kcg_comp_array_168647
extern kcg_bool kcg_comp_array_168647(
  array_168647 *kcg_c1,
  array_168647 *kcg_c2);
#endif /* kcg_comp_array_168647 */
#endif /* kcg_use_array_168647 */

#ifdef kcg_use_array_bool_113
#ifndef kcg_comp_array_bool_113
extern kcg_bool kcg_comp_array_bool_113(
  array_bool_113 *kcg_c1,
  array_bool_113 *kcg_c2);
#endif /* kcg_comp_array_bool_113 */
#endif /* kcg_use_array_bool_113 */

#ifdef kcg_use_Target_list_MRSP_real_T_TargetManagement_types
#ifndef kcg_comp_Target_list_MRSP_real_T_TargetManagement_types
extern kcg_bool kcg_comp_Target_list_MRSP_real_T_TargetManagement_types(
  Target_list_MRSP_real_T_TargetManagement_types *kcg_c1,
  Target_list_MRSP_real_T_TargetManagement_types *kcg_c2);
#endif /* kcg_comp_Target_list_MRSP_real_T_TargetManagement_types */
#endif /* kcg_use_Target_list_MRSP_real_T_TargetManagement_types */

#ifdef kcg_use_array_168667
#ifndef kcg_comp_array_168667
extern kcg_bool kcg_comp_array_168667(
  array_168667 *kcg_c1,
  array_168667 *kcg_c2);
#endif /* kcg_comp_array_168667 */
#endif /* kcg_use_array_168667 */

#ifdef kcg_use_array_real_113
#ifndef kcg_comp_array_real_113
extern kcg_bool kcg_comp_array_real_113(
  array_real_113 *kcg_c1,
  array_real_113 *kcg_c2);
#endif /* kcg_comp_array_real_113 */
#endif /* kcg_use_array_real_113 */

#ifdef kcg_use_array_int_31
#ifndef kcg_comp_array_int_31
extern kcg_bool kcg_comp_array_int_31(
  array_int_31 *kcg_c1,
  array_int_31 *kcg_c2);
#endif /* kcg_comp_array_int_31 */
#endif /* kcg_use_array_int_31 */

#ifdef kcg_use_DMI_level_array_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_level_array_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_level_array_T_DMI_Types_Pkg(
  DMI_level_array_T_DMI_Types_Pkg *kcg_c1,
  DMI_level_array_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_level_array_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_level_array_T_DMI_Types_Pkg */

#ifdef kcg_use_array_int_70
#ifndef kcg_comp_array_int_70
extern kcg_bool kcg_comp_array_int_70(
  array_int_70 *kcg_c1,
  array_int_70 *kcg_c2);
#endif /* kcg_comp_array_int_70 */
#endif /* kcg_use_array_int_70 */

#ifdef kcg_use_array_168713
#ifndef kcg_comp_array_168713
extern kcg_bool kcg_comp_array_168713(
  array_168713 *kcg_c1,
  array_168713 *kcg_c2);
#endif /* kcg_comp_array_168713 */
#endif /* kcg_use_array_168713 */

#ifdef kcg_use_array_int_964
#ifndef kcg_comp_array_int_964
extern kcg_bool kcg_comp_array_int_964(
  array_int_964 *kcg_c1,
  array_int_964 *kcg_c2);
#endif /* kcg_comp_array_int_964 */
#endif /* kcg_use_array_int_964 */

#ifdef kcg_use_P046_sections_array_flat_T_TM
#ifndef kcg_comp_P046_sections_array_flat_T_TM
extern kcg_bool kcg_comp_P046_sections_array_flat_T_TM(
  P046_sections_array_flat_T_TM *kcg_c1,
  P046_sections_array_flat_T_TM *kcg_c2);
#endif /* kcg_comp_P046_sections_array_flat_T_TM */
#endif /* kcg_use_P046_sections_array_flat_T_TM */

#ifdef kcg_use_array_int_269
#ifndef kcg_comp_array_int_269
extern kcg_bool kcg_comp_array_int_269(
  array_int_269 *kcg_c1,
  array_int_269 *kcg_c2);
#endif /* kcg_comp_array_int_269 */
#endif /* kcg_use_array_int_269 */

#ifdef kcg_use_array_int_105
#ifndef kcg_comp_array_int_105
extern kcg_bool kcg_comp_array_int_105(
  array_int_105 *kcg_c1,
  array_int_105 *kcg_c2);
#endif /* kcg_comp_array_int_105 */
#endif /* kcg_use_array_int_105 */

#ifdef kcg_use_array_int_2_32
#ifndef kcg_comp_array_int_2_32
extern kcg_bool kcg_comp_array_int_2_32(
  array_int_2_32 *kcg_c1,
  array_int_2_32 *kcg_c2);
#endif /* kcg_comp_array_int_2_32 */
#endif /* kcg_use_array_int_2_32 */

#ifdef kcg_use_array_168759
#ifndef kcg_comp_array_168759
extern kcg_bool kcg_comp_array_168759(
  array_168759 *kcg_c1,
  array_168759 *kcg_c2);
#endif /* kcg_comp_array_168759 */
#endif /* kcg_use_array_168759 */

#ifdef kcg_use_array_int_8_4
#ifndef kcg_comp_array_int_8_4
extern kcg_bool kcg_comp_array_int_8_4(
  array_int_8_4 *kcg_c1,
  array_int_8_4 *kcg_c2);
#endif /* kcg_comp_array_int_8_4 */
#endif /* kcg_use_array_int_8_4 */

#ifdef kcg_use_array_int_23
#ifndef kcg_comp_array_int_23
extern kcg_bool kcg_comp_array_int_23(
  array_int_23 *kcg_c1,
  array_int_23 *kcg_c2);
#endif /* kcg_comp_array_int_23 */
#endif /* kcg_use_array_int_23 */

#ifdef kcg_use_LevelDecisionTableType_DataDictionary_Pkg
#ifndef kcg_comp_LevelDecisionTableType_DataDictionary_Pkg
extern kcg_bool kcg_comp_LevelDecisionTableType_DataDictionary_Pkg(
  LevelDecisionTableType_DataDictionary_Pkg *kcg_c1,
  LevelDecisionTableType_DataDictionary_Pkg *kcg_c2);
#endif /* kcg_comp_LevelDecisionTableType_DataDictionary_Pkg */
#endif /* kcg_use_LevelDecisionTableType_DataDictionary_Pkg */

#ifdef kcg_use_array_int_66_33
#ifndef kcg_comp_array_int_66_33
extern kcg_bool kcg_comp_array_int_66_33(
  array_int_66_33 *kcg_c1,
  array_int_66_33 *kcg_c2);
#endif /* kcg_comp_array_int_66_33 */
#endif /* kcg_use_array_int_66_33 */

#ifdef kcg_use_array_168778
#ifndef kcg_comp_array_168778
extern kcg_bool kcg_comp_array_168778(
  array_168778 *kcg_c1,
  array_168778 *kcg_c2);
#endif /* kcg_comp_array_168778 */
#endif /* kcg_use_array_168778 */

#ifdef kcg_use_ReportedBGList_T_ProvidePositionReport_Pkg
#ifndef kcg_comp_ReportedBGList_T_ProvidePositionReport_Pkg
extern kcg_bool kcg_comp_ReportedBGList_T_ProvidePositionReport_Pkg(
  ReportedBGList_T_ProvidePositionReport_Pkg *kcg_c1,
  ReportedBGList_T_ProvidePositionReport_Pkg *kcg_c2);
#endif /* kcg_comp_ReportedBGList_T_ProvidePositionReport_Pkg */
#endif /* kcg_use_ReportedBGList_T_ProvidePositionReport_Pkg */

#ifdef kcg_use_array_168785
#ifndef kcg_comp_array_168785
extern kcg_bool kcg_comp_array_168785(
  array_168785 *kcg_c1,
  array_168785 *kcg_c2);
#endif /* kcg_comp_array_168785 */
#endif /* kcg_use_array_168785 */

#ifdef kcg_use_array_168789
#ifndef kcg_comp_array_168789
extern kcg_bool kcg_comp_array_168789(
  array_168789 *kcg_c1,
  array_168789 *kcg_c2);
#endif /* kcg_comp_array_168789 */
#endif /* kcg_use_array_168789 */

#ifdef kcg_use_array_168822
#ifndef kcg_comp_array_168822
extern kcg_bool kcg_comp_array_168822(
  array_168822 *kcg_c1,
  array_168822 *kcg_c2);
#endif /* kcg_comp_array_168822 */
#endif /* kcg_use_array_168822 */

#ifdef kcg_use_EVC_to_DMI_Message_int_T_API_DMI_Pkg
#ifndef kcg_comp_EVC_to_DMI_Message_int_T_API_DMI_Pkg
extern kcg_bool kcg_comp_EVC_to_DMI_Message_int_T_API_DMI_Pkg(
  EVC_to_DMI_Message_int_T_API_DMI_Pkg *kcg_c1,
  EVC_to_DMI_Message_int_T_API_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_EVC_to_DMI_Message_int_T_API_DMI_Pkg */
#endif /* kcg_use_EVC_to_DMI_Message_int_T_API_DMI_Pkg */

#ifdef kcg_use_array_168941
#ifndef kcg_comp_array_168941
extern kcg_bool kcg_comp_array_168941(
  array_168941 *kcg_c1,
  array_168941 *kcg_c2);
#endif /* kcg_comp_array_168941 */
#endif /* kcg_use_array_168941 */

#ifdef kcg_use_P046_trackide_sectionlist_T_TM
#ifndef kcg_comp_P046_trackide_sectionlist_T_TM
extern kcg_bool kcg_comp_P046_trackide_sectionlist_T_TM(
  P046_trackide_sectionlist_T_TM *kcg_c1,
  P046_trackide_sectionlist_T_TM *kcg_c2);
#endif /* kcg_comp_P046_trackide_sectionlist_T_TM */
#endif /* kcg_use_P046_trackide_sectionlist_T_TM */

#ifdef kcg_use_array_int_304
#ifndef kcg_comp_array_int_304
extern kcg_bool kcg_comp_array_int_304(
  array_int_304 *kcg_c1,
  array_int_304 *kcg_c2);
#endif /* kcg_comp_array_int_304 */
#endif /* kcg_use_array_int_304 */

#ifdef kcg_use_array_168969
#ifndef kcg_comp_array_168969
extern kcg_bool kcg_comp_array_168969(
  array_168969 *kcg_c1,
  array_168969 *kcg_c2);
#endif /* kcg_comp_array_168969 */
#endif /* kcg_use_array_168969 */

#ifdef kcg_use_array_168973
#ifndef kcg_comp_array_168973
extern kcg_bool kcg_comp_array_168973(
  array_168973 *kcg_c1,
  array_168973 *kcg_c2);
#endif /* kcg_comp_array_168973 */
#endif /* kcg_use_array_168973 */

#ifdef kcg_use_positionedBGs_T_TrainPosition_Types_Pck
#ifndef kcg_comp_positionedBGs_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_positionedBGs_T_TrainPosition_Types_Pck(
  positionedBGs_T_TrainPosition_Types_Pck *kcg_c1,
  positionedBGs_T_TrainPosition_Types_Pck *kcg_c2);
#endif /* kcg_comp_positionedBGs_T_TrainPosition_Types_Pck */
#endif /* kcg_use_positionedBGs_T_TrainPosition_Types_Pck */

#ifdef kcg_use_array_168986
#ifndef kcg_comp_array_168986
extern kcg_bool kcg_comp_array_168986(
  array_168986 *kcg_c1,
  array_168986 *kcg_c2);
#endif /* kcg_comp_array_168986 */
#endif /* kcg_use_array_168986 */

#ifdef kcg_use_array_168990
#ifndef kcg_comp_array_168990
extern kcg_bool kcg_comp_array_168990(
  array_168990 *kcg_c1,
  array_168990 *kcg_c2);
#endif /* kcg_comp_array_168990 */
#endif /* kcg_use_array_168990 */

#ifndef kcg_comp_Metadata_T_Common_Types_Pkg
extern kcg_bool kcg_comp_Metadata_T_Common_Types_Pkg(
  Metadata_T_Common_Types_Pkg *kcg_c1,
  Metadata_T_Common_Types_Pkg *kcg_c2);
#define kcg_use_Metadata_T_Common_Types_Pkg
#endif /* kcg_comp_Metadata_T_Common_Types_Pkg */

#ifdef kcg_use_MRSP_Profile_t_TrackAtlasTypes
#ifndef kcg_comp_MRSP_Profile_t_TrackAtlasTypes
extern kcg_bool kcg_comp_MRSP_Profile_t_TrackAtlasTypes(
  MRSP_Profile_t_TrackAtlasTypes *kcg_c1,
  MRSP_Profile_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_MRSP_Profile_t_TrackAtlasTypes */
#endif /* kcg_use_MRSP_Profile_t_TrackAtlasTypes */

#ifdef kcg_use_array_169000
#ifndef kcg_comp_array_169000
extern kcg_bool kcg_comp_array_169000(
  array_169000 *kcg_c1,
  array_169000 *kcg_c2);
#endif /* kcg_comp_array_169000 */
#endif /* kcg_use_array_169000 */

#ifdef kcg_use_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg(
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *kcg_c1,
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_array_int_261
#ifndef kcg_comp_array_int_261
extern kcg_bool kcg_comp_array_int_261(
  array_int_261 *kcg_c1,
  array_int_261 *kcg_c2);
#endif /* kcg_comp_array_int_261 */
#endif /* kcg_use_array_int_261 */

#ifdef kcg_use_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg
#ifndef kcg_comp_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg(
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg *kcg_c1,
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg */
#endif /* kcg_use_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg */

#ifdef kcg_use_array_169014
#ifndef kcg_comp_array_169014
extern kcg_bool kcg_comp_array_169014(
  array_169014 *kcg_c1,
  array_169014 *kcg_c2);
#endif /* kcg_comp_array_169014 */
#endif /* kcg_use_array_169014 */

#ifdef kcg_use_nvkvintArray_T_Packet_Types_Pkg
#ifndef kcg_comp_nvkvintArray_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_nvkvintArray_T_Packet_Types_Pkg(
  nvkvintArray_T_Packet_Types_Pkg *kcg_c1,
  nvkvintArray_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nvkvintArray_T_Packet_Types_Pkg */
#endif /* kcg_use_nvkvintArray_T_Packet_Types_Pkg */

#ifdef kcg_use_array_int_97
#ifndef kcg_comp_array_int_97
extern kcg_bool kcg_comp_array_int_97(
  array_int_97 *kcg_c1,
  array_int_97 *kcg_c2);
#endif /* kcg_comp_array_int_97 */
#endif /* kcg_use_array_int_97 */

#ifndef kcg_comp_array_bool_15
extern kcg_bool kcg_comp_array_bool_15(
  array_bool_15 *kcg_c1,
  array_bool_15 *kcg_c2);
#define kcg_use_array_bool_15
#endif /* kcg_comp_array_bool_15 */

#ifdef kcg_use_array_int_15
#ifndef kcg_comp_array_int_15
extern kcg_bool kcg_comp_array_int_15(
  array_int_15 *kcg_c1,
  array_int_15 *kcg_c2);
#endif /* kcg_comp_array_int_15 */
#endif /* kcg_use_array_int_15 */

#ifdef kcg_use_array_169066
#ifndef kcg_comp_array_169066
extern kcg_bool kcg_comp_array_169066(
  array_169066 *kcg_c1,
  array_169066 *kcg_c2);
#endif /* kcg_comp_array_169066 */
#endif /* kcg_use_array_169066 */

#ifdef kcg_use_P005_trackide_sectionlist_T_TM
#ifndef kcg_comp_P005_trackide_sectionlist_T_TM
extern kcg_bool kcg_comp_P005_trackide_sectionlist_T_TM(
  P005_trackide_sectionlist_T_TM *kcg_c1,
  P005_trackide_sectionlist_T_TM *kcg_c2);
#endif /* kcg_comp_P005_trackide_sectionlist_T_TM */
#endif /* kcg_use_P005_trackide_sectionlist_T_TM */

#ifdef kcg_use_Array_DMI_Q_Text
#ifndef kcg_comp_Array_DMI_Q_Text
extern kcg_bool kcg_comp_Array_DMI_Q_Text(
  Array_DMI_Q_Text *kcg_c1,
  Array_DMI_Q_Text *kcg_c2);
#endif /* kcg_comp_Array_DMI_Q_Text */
#endif /* kcg_use_Array_DMI_Q_Text */

#ifdef kcg_use_array_169076
#ifndef kcg_comp_array_169076
extern kcg_bool kcg_comp_array_169076(
  array_169076 *kcg_c1,
  array_169076 *kcg_c2);
#endif /* kcg_comp_array_169076 */
#endif /* kcg_use_array_169076 */

#ifdef kcg_use_array_169086
#ifndef kcg_comp_array_169086
extern kcg_bool kcg_comp_array_169086(
  array_169086 *kcg_c1,
  array_169086 *kcg_c2);
#endif /* kcg_comp_array_169086 */
#endif /* kcg_use_array_169086 */

#ifdef kcg_use_array_169095
#ifndef kcg_comp_array_169095
extern kcg_bool kcg_comp_array_169095(
  array_169095 *kcg_c1,
  array_169095 *kcg_c2);
#endif /* kcg_comp_array_169095 */
#endif /* kcg_use_array_169095 */

#ifdef kcg_use_array_169099
#ifndef kcg_comp_array_169099
extern kcg_bool kcg_comp_array_169099(
  array_169099 *kcg_c1,
  array_169099 *kcg_c2);
#endif /* kcg_comp_array_169099 */
#endif /* kcg_use_array_169099 */

#ifdef kcg_use_array_169103
#ifndef kcg_comp_array_169103
extern kcg_bool kcg_comp_array_169103(
  array_169103 *kcg_c1,
  array_169103 *kcg_c2);
#endif /* kcg_comp_array_169103 */
#endif /* kcg_use_array_169103 */

#ifdef kcg_use_array_169119
#ifndef kcg_comp_array_169119
extern kcg_bool kcg_comp_array_169119(
  array_169119 *kcg_c1,
  array_169119 *kcg_c2);
#endif /* kcg_comp_array_169119 */
#endif /* kcg_use_array_169119 */

#ifdef kcg_use_array_169123
#ifndef kcg_comp_array_169123
extern kcg_bool kcg_comp_array_169123(
  array_169123 *kcg_c1,
  array_169123 *kcg_c2);
#endif /* kcg_comp_array_169123 */
#endif /* kcg_use_array_169123 */

#ifdef kcg_use_array_169127
#ifndef kcg_comp_array_169127
extern kcg_bool kcg_comp_array_169127(
  array_169127 *kcg_c1,
  array_169127 *kcg_c2);
#endif /* kcg_comp_array_169127 */
#endif /* kcg_use_array_169127 */

#ifdef kcg_use_array_169131
#ifndef kcg_comp_array_169131
extern kcg_bool kcg_comp_array_169131(
  array_169131 *kcg_c1,
  array_169131 *kcg_c2);
#endif /* kcg_comp_array_169131 */
#endif /* kcg_use_array_169131 */

#ifdef kcg_use_array_int_11
#ifndef kcg_comp_array_int_11
extern kcg_bool kcg_comp_array_int_11(
  array_int_11 *kcg_c1,
  array_int_11 *kcg_c2);
#endif /* kcg_comp_array_int_11 */
#endif /* kcg_use_array_int_11 */

#ifdef kcg_use_array_169171
#ifndef kcg_comp_array_169171
extern kcg_bool kcg_comp_array_169171(
  array_169171 *kcg_c1,
  array_169171 *kcg_c2);
#endif /* kcg_comp_array_169171 */
#endif /* kcg_use_array_169171 */

#ifdef kcg_use_array_int_499
#ifndef kcg_comp_array_int_499
extern kcg_bool kcg_comp_array_int_499(
  array_int_499 *kcg_c1,
  array_int_499 *kcg_c2);
#endif /* kcg_comp_array_int_499 */
#endif /* kcg_use_array_int_499 */

#ifdef kcg_use_array_bool_50
#ifndef kcg_comp_array_bool_50
extern kcg_bool kcg_comp_array_bool_50(
  array_bool_50 *kcg_c1,
  array_bool_50 *kcg_c2);
#endif /* kcg_comp_array_bool_50 */
#endif /* kcg_use_array_bool_50 */

#ifdef kcg_use_array_real_100_8
#ifndef kcg_comp_array_real_100_8
extern kcg_bool kcg_comp_array_real_100_8(
  array_real_100_8 *kcg_c1,
  array_real_100_8 *kcg_c2);
#endif /* kcg_comp_array_real_100_8 */
#endif /* kcg_use_array_real_100_8 */

#ifdef kcg_use_M_TrainTrack_compressed_packets_T_TM_radio_messages
#ifndef kcg_comp_M_TrainTrack_compressed_packets_T_TM_radio_messages
extern kcg_bool kcg_comp_M_TrainTrack_compressed_packets_T_TM_radio_messages(
  M_TrainTrack_compressed_packets_T_TM_radio_messages *kcg_c1,
  M_TrainTrack_compressed_packets_T_TM_radio_messages *kcg_c2);
#endif /* kcg_comp_M_TrainTrack_compressed_packets_T_TM_radio_messages */
#endif /* kcg_use_M_TrainTrack_compressed_packets_T_TM_radio_messages */

#ifdef kcg_use_array_real_50
#ifndef kcg_comp_array_real_50
extern kcg_bool kcg_comp_array_real_50(
  array_real_50 *kcg_c1,
  array_real_50 *kcg_c2);
#endif /* kcg_comp_array_real_50 */
#endif /* kcg_use_array_real_50 */

#ifdef kcg_use_array_int_987
#ifndef kcg_comp_array_int_987
extern kcg_bool kcg_comp_array_int_987(
  array_int_987 *kcg_c1,
  array_int_987 *kcg_c2);
#endif /* kcg_comp_array_int_987 */
#endif /* kcg_use_array_int_987 */

#ifdef kcg_use_array_bool_7
#ifndef kcg_comp_array_bool_7
extern kcg_bool kcg_comp_array_bool_7(
  array_bool_7 *kcg_c1,
  array_bool_7 *kcg_c2);
#endif /* kcg_comp_array_bool_7 */
#endif /* kcg_use_array_bool_7 */

#ifdef kcg_use_array_169242
#ifndef kcg_comp_array_169242
extern kcg_bool kcg_comp_array_169242(
  array_169242 *kcg_c1,
  array_169242 *kcg_c2);
#endif /* kcg_comp_array_169242 */
#endif /* kcg_use_array_169242 */

#ifdef kcg_use_array_169246
#ifndef kcg_comp_array_169246
extern kcg_bool kcg_comp_array_169246(
  array_169246 *kcg_c1,
  array_169246 *kcg_c2);
#endif /* kcg_comp_array_169246 */
#endif /* kcg_use_array_169246 */

#ifdef kcg_use_array_int_7
#ifndef kcg_comp_array_int_7
extern kcg_bool kcg_comp_array_int_7(array_int_7 *kcg_c1, array_int_7 *kcg_c2);
#endif /* kcg_comp_array_int_7 */
#endif /* kcg_use_array_int_7 */

#ifdef kcg_use_array_int_292
#ifndef kcg_comp_array_int_292
extern kcg_bool kcg_comp_array_int_292(
  array_int_292 *kcg_c1,
  array_int_292 *kcg_c2);
#endif /* kcg_comp_array_int_292 */
#endif /* kcg_use_array_int_292 */

#ifdef kcg_use_array_int_4_32_128
#ifndef kcg_comp_array_int_4_32_128
extern kcg_bool kcg_comp_array_int_4_32_128(
  array_int_4_32_128 *kcg_c1,
  array_int_4_32_128 *kcg_c2);
#endif /* kcg_comp_array_int_4_32_128 */
#endif /* kcg_use_array_int_4_32_128 */

#ifdef kcg_use_array_int_128
#ifndef kcg_comp_array_int_128
extern kcg_bool kcg_comp_array_int_128(
  array_int_128 *kcg_c1,
  array_int_128 *kcg_c2);
#endif /* kcg_comp_array_int_128 */
#endif /* kcg_use_array_int_128 */

#ifdef kcg_use_array_169285
#ifndef kcg_comp_array_169285
extern kcg_bool kcg_comp_array_169285(
  array_169285 *kcg_c1,
  array_169285 *kcg_c2);
#endif /* kcg_comp_array_169285 */
#endif /* kcg_use_array_169285 */

#ifdef kcg_use_array_169300
#ifndef kcg_comp_array_169300
extern kcg_bool kcg_comp_array_169300(
  array_169300 *kcg_c1,
  array_169300 *kcg_c2);
#endif /* kcg_comp_array_169300 */
#endif /* kcg_use_array_169300 */

#ifdef kcg_use_array_int_64_32
#ifndef kcg_comp_array_int_64_32
extern kcg_bool kcg_comp_array_int_64_32(
  array_int_64_32 *kcg_c1,
  array_int_64_32 *kcg_c2);
#endif /* kcg_comp_array_int_64_32 */
#endif /* kcg_use_array_int_64_32 */

#ifdef kcg_use_P005_OBU_sectionlist_array_T_TM
#ifndef kcg_comp_P005_OBU_sectionlist_array_T_TM
extern kcg_bool kcg_comp_P005_OBU_sectionlist_array_T_TM(
  P005_OBU_sectionlist_array_T_TM *kcg_c1,
  P005_OBU_sectionlist_array_T_TM *kcg_c2);
#endif /* kcg_comp_P005_OBU_sectionlist_array_T_TM */
#endif /* kcg_use_P005_OBU_sectionlist_array_T_TM */

#ifdef kcg_use_array_int_3
#ifndef kcg_comp_array_int_3
extern kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2);
#endif /* kcg_comp_array_int_3 */
#endif /* kcg_use_array_int_3 */

#ifdef kcg_use_array_real_100_13
#ifndef kcg_comp_array_real_100_13
extern kcg_bool kcg_comp_array_real_100_13(
  array_real_100_13 *kcg_c1,
  array_real_100_13 *kcg_c2);
#endif /* kcg_comp_array_real_100_13 */
#endif /* kcg_use_array_real_100_13 */

#ifdef kcg_use_array_real_3
#ifndef kcg_comp_array_real_3
extern kcg_bool kcg_comp_array_real_3(
  array_real_3 *kcg_c1,
  array_real_3 *kcg_c2);
#endif /* kcg_comp_array_real_3 */
#endif /* kcg_use_array_real_3 */

#ifdef kcg_use_array_169371
#ifndef kcg_comp_array_169371
extern kcg_bool kcg_comp_array_169371(
  array_169371 *kcg_c1,
  array_169371 *kcg_c2);
#endif /* kcg_comp_array_169371 */
#endif /* kcg_use_array_169371 */

#ifdef kcg_use_array_169375
#ifndef kcg_comp_array_169375
extern kcg_bool kcg_comp_array_169375(
  array_169375 *kcg_c1,
  array_169375 *kcg_c2);
#endif /* kcg_comp_array_169375 */
#endif /* kcg_use_array_169375 */

#ifdef kcg_use_array_int_491
#ifndef kcg_comp_array_int_491
extern kcg_bool kcg_comp_array_int_491(
  array_int_491 *kcg_c1,
  array_int_491 *kcg_c2);
#endif /* kcg_comp_array_int_491 */
#endif /* kcg_use_array_int_491 */

#ifdef kcg_use_array_int_42
#ifndef kcg_comp_array_int_42
extern kcg_bool kcg_comp_array_int_42(
  array_int_42 *kcg_c1,
  array_int_42 *kcg_c2);
#endif /* kcg_comp_array_int_42 */
#endif /* kcg_use_array_int_42 */

#ifdef kcg_use_array_int_3_33
#ifndef kcg_comp_array_int_3_33
extern kcg_bool kcg_comp_array_int_3_33(
  array_int_3_33 *kcg_c1,
  array_int_3_33 *kcg_c2);
#endif /* kcg_comp_array_int_3_33 */
#endif /* kcg_use_array_int_3_33 */

#ifdef kcg_use_array_169420
#ifndef kcg_comp_array_169420
extern kcg_bool kcg_comp_array_169420(
  array_169420 *kcg_c1,
  array_169420 *kcg_c2);
#endif /* kcg_comp_array_169420 */
#endif /* kcg_use_array_169420 */

#ifdef kcg_use_array_int_500_500
#ifndef kcg_comp_array_int_500_500
extern kcg_bool kcg_comp_array_int_500_500(
  array_int_500_500 *kcg_c1,
  array_int_500_500 *kcg_c2);
#endif /* kcg_comp_array_int_500_500 */
#endif /* kcg_use_array_int_500_500 */

#ifdef kcg_use_array_169437
#ifndef kcg_comp_array_169437
extern kcg_bool kcg_comp_array_169437(
  array_169437 *kcg_c1,
  array_169437 *kcg_c2);
#endif /* kcg_comp_array_169437 */
#endif /* kcg_use_array_169437 */

#ifdef kcg_use_array_169441
#ifndef kcg_comp_array_169441
extern kcg_bool kcg_comp_array_169441(
  array_169441 *kcg_c1,
  array_169441 *kcg_c2);
#endif /* kcg_comp_array_169441 */
#endif /* kcg_use_array_169441 */

#ifdef kcg_use_P15_Level23MovementAuthorities_T_Packet_Types_Pkg
#ifndef kcg_comp_P15_Level23MovementAuthorities_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P15_Level23MovementAuthorities_T_Packet_Types_Pkg(
  P15_Level23MovementAuthorities_T_Packet_Types_Pkg *kcg_c1,
  P15_Level23MovementAuthorities_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P15_Level23MovementAuthorities_T_Packet_Types_Pkg */
#endif /* kcg_use_P15_Level23MovementAuthorities_T_Packet_Types_Pkg */

#ifdef kcg_use_P12_Level1MovementAuthorities_T_Packet_Types_Pkg
#ifndef kcg_comp_P12_Level1MovementAuthorities_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P12_Level1MovementAuthorities_T_Packet_Types_Pkg(
  P12_Level1MovementAuthorities_T_Packet_Types_Pkg *kcg_c1,
  P12_Level1MovementAuthorities_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P12_Level1MovementAuthorities_T_Packet_Types_Pkg */
#endif /* kcg_use_P12_Level1MovementAuthorities_T_Packet_Types_Pkg */

#ifdef kcg_use_array_169451
#ifndef kcg_comp_array_169451
extern kcg_bool kcg_comp_array_169451(
  array_169451 *kcg_c1,
  array_169451 *kcg_c2);
#endif /* kcg_comp_array_169451 */
#endif /* kcg_use_array_169451 */

#ifdef kcg_use_array_169464
#ifndef kcg_comp_array_169464
extern kcg_bool kcg_comp_array_169464(
  array_169464 *kcg_c1,
  array_169464 *kcg_c2);
#endif /* kcg_comp_array_169464 */
#endif /* kcg_use_array_169464 */

#ifdef kcg_use_array_int_975
#ifndef kcg_comp_array_int_975
extern kcg_bool kcg_comp_array_int_975(
  array_int_975 *kcg_c1,
  array_int_975 *kcg_c2);
#endif /* kcg_comp_array_int_975 */
#endif /* kcg_use_array_int_975 */

#ifdef kcg_use_array_int_444
#ifndef kcg_comp_array_int_444
extern kcg_bool kcg_comp_array_int_444(
  array_int_444 *kcg_c1,
  array_int_444 *kcg_c2);
#endif /* kcg_comp_array_int_444 */
#endif /* kcg_use_array_int_444 */

#ifdef kcg_use_array_real_5_5
#ifndef kcg_comp_array_real_5_5
extern kcg_bool kcg_comp_array_real_5_5(
  array_real_5_5 *kcg_c1,
  array_real_5_5 *kcg_c2);
#endif /* kcg_comp_array_real_5_5 */
#endif /* kcg_use_array_real_5_5 */

#ifdef kcg_use_DMI_TXT_MSGList_status_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_TXT_MSGList_status_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_TXT_MSGList_status_T_DMI_Types_Pkg(
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg *kcg_c1,
  DMI_TXT_MSGList_status_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_TXT_MSGList_status_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_TXT_MSGList_status_T_DMI_Types_Pkg */

#ifdef kcg_use_array_int_280
#ifndef kcg_comp_array_int_280
extern kcg_bool kcg_comp_array_int_280(
  array_int_280 *kcg_c1,
  array_int_280 *kcg_c2);
#endif /* kcg_comp_array_int_280 */
#endif /* kcg_use_array_int_280 */

#ifdef kcg_use_array_169506
#ifndef kcg_comp_array_169506
extern kcg_bool kcg_comp_array_169506(
  array_169506 *kcg_c1,
  array_169506 *kcg_c2);
#endif /* kcg_comp_array_169506 */
#endif /* kcg_use_array_169506 */

#ifdef kcg_use_MovementAuthoritySectionlist_t_TrackAtlasTypes
#ifndef kcg_comp_MovementAuthoritySectionlist_t_TrackAtlasTypes
extern kcg_bool kcg_comp_MovementAuthoritySectionlist_t_TrackAtlasTypes(
  MovementAuthoritySectionlist_t_TrackAtlasTypes *kcg_c1,
  MovementAuthoritySectionlist_t_TrackAtlasTypes *kcg_c2);
#endif /* kcg_comp_MovementAuthoritySectionlist_t_TrackAtlasTypes */
#endif /* kcg_use_MovementAuthoritySectionlist_t_TrackAtlasTypes */

#ifdef kcg_use_array_real_100_1
#ifndef kcg_comp_array_real_100_1
extern kcg_bool kcg_comp_array_real_100_1(
  array_real_100_1 *kcg_c1,
  array_real_100_1 *kcg_c2);
#endif /* kcg_comp_array_real_100_1 */
#endif /* kcg_use_array_real_100_1 */

#ifdef kcg_use_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal
#ifndef kcg_comp_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal
extern kcg_bool kcg_comp_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal(
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *kcg_c1,
  M_TrainTrackRadioOutputBuffer_t_TM_lib_internal *kcg_c2);
#endif /* kcg_comp_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal */
#endif /* kcg_use_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal */

#ifdef kcg_use_array_169580
#ifndef kcg_comp_array_169580
extern kcg_bool kcg_comp_array_169580(
  array_169580 *kcg_c1,
  array_169580 *kcg_c2);
#endif /* kcg_comp_array_169580 */
#endif /* kcg_use_array_169580 */

#ifdef kcg_use_array_169593
#ifndef kcg_comp_array_169593
extern kcg_bool kcg_comp_array_169593(
  array_169593 *kcg_c1,
  array_169593 *kcg_c2);
#endif /* kcg_comp_array_169593 */
#endif /* kcg_use_array_169593 */

#ifdef kcg_use_DMI_Available_Menu_int_T_DATA
#ifndef kcg_comp_DMI_Available_Menu_int_T_DATA
extern kcg_bool kcg_comp_DMI_Available_Menu_int_T_DATA(
  DMI_Available_Menu_int_T_DATA *kcg_c1,
  DMI_Available_Menu_int_T_DATA *kcg_c2);
#endif /* kcg_comp_DMI_Available_Menu_int_T_DATA */
#endif /* kcg_use_DMI_Available_Menu_int_T_DATA */

#ifdef kcg_use_array_int_30
#ifndef kcg_comp_array_int_30
extern kcg_bool kcg_comp_array_int_30(
  array_int_30 *kcg_c1,
  array_int_30 *kcg_c2);
#endif /* kcg_comp_array_int_30 */
#endif /* kcg_use_array_int_30 */

#ifndef kcg_comp_array_char_30
extern kcg_bool kcg_comp_array_char_30(
  array_char_30 *kcg_c1,
  array_char_30 *kcg_c2);
#define kcg_use_array_char_30
#endif /* kcg_comp_array_char_30 */

#ifdef kcg_use_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg
#ifndef kcg_comp_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg
extern kcg_bool kcg_comp_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg(
  T_Mode_Profile_Table_Level_And_Mode_Types_Pkg *kcg_c1,
  T_Mode_Profile_Table_Level_And_Mode_Types_Pkg *kcg_c2);
#endif /* kcg_comp_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg */
#endif /* kcg_use_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg */

#ifdef kcg_use_P046_OBU_sectionlist_enum_T_TM
#ifndef kcg_comp_P046_OBU_sectionlist_enum_T_TM
extern kcg_bool kcg_comp_P046_OBU_sectionlist_enum_T_TM(
  P046_OBU_sectionlist_enum_T_TM *kcg_c1,
  P046_OBU_sectionlist_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P046_OBU_sectionlist_enum_T_TM */
#endif /* kcg_use_P046_OBU_sectionlist_enum_T_TM */

#ifdef kcg_use_array_169645
#ifndef kcg_comp_array_169645
extern kcg_bool kcg_comp_array_169645(
  array_169645 *kcg_c1,
  array_169645 *kcg_c2);
#endif /* kcg_comp_array_169645 */
#endif /* kcg_use_array_169645 */

#ifdef kcg_use_DMI_to_EVC_Message_int_T_API_DMI_Pkg
#ifndef kcg_comp_DMI_to_EVC_Message_int_T_API_DMI_Pkg
extern kcg_bool kcg_comp_DMI_to_EVC_Message_int_T_API_DMI_Pkg(
  DMI_to_EVC_Message_int_T_API_DMI_Pkg *kcg_c1,
  DMI_to_EVC_Message_int_T_API_DMI_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_to_EVC_Message_int_T_API_DMI_Pkg */
#endif /* kcg_use_DMI_to_EVC_Message_int_T_API_DMI_Pkg */

#ifdef kcg_use_P041_trackide_sectionlist_T_TM
#ifndef kcg_comp_P041_trackide_sectionlist_T_TM
extern kcg_bool kcg_comp_P041_trackide_sectionlist_T_TM(
  P041_trackide_sectionlist_T_TM *kcg_c1,
  P041_trackide_sectionlist_T_TM *kcg_c2);
#endif /* kcg_comp_P041_trackide_sectionlist_T_TM */
#endif /* kcg_use_P041_trackide_sectionlist_T_TM */

#ifdef kcg_use_array_real_100_6
#ifndef kcg_comp_array_real_100_6
extern kcg_bool kcg_comp_array_real_100_6(
  array_real_100_6 *kcg_c1,
  array_real_100_6 *kcg_c2);
#endif /* kcg_comp_array_real_100_6 */
#endif /* kcg_use_array_real_100_6 */

#ifdef kcg_use_array_int_432
#ifndef kcg_comp_array_int_432
extern kcg_bool kcg_comp_array_int_432(
  array_int_432 *kcg_c1,
  array_int_432 *kcg_c2);
#endif /* kcg_comp_array_int_432 */
#endif /* kcg_use_array_int_432 */

#ifdef kcg_use_array_int_65
#ifndef kcg_comp_array_int_65
extern kcg_bool kcg_comp_array_int_65(
  array_int_65 *kcg_c1,
  array_int_65 *kcg_c2);
#endif /* kcg_comp_array_int_65 */
#endif /* kcg_use_array_int_65 */

#ifdef kcg_use_array_int_350
#ifndef kcg_comp_array_int_350
extern kcg_bool kcg_comp_array_int_350(
  array_int_350 *kcg_c1,
  array_int_350 *kcg_c2);
#endif /* kcg_comp_array_int_350 */
#endif /* kcg_use_array_int_350 */

#ifdef kcg_use_array_int_104
#ifndef kcg_comp_array_int_104
extern kcg_bool kcg_comp_array_int_104(
  array_int_104 *kcg_c1,
  array_int_104 *kcg_c2);
#endif /* kcg_comp_array_int_104 */
#endif /* kcg_use_array_int_104 */

#ifdef kcg_use_array_int_22
#ifndef kcg_comp_array_int_22
extern kcg_bool kcg_comp_array_int_22(
  array_int_22 *kcg_c1,
  array_int_22 *kcg_c2);
#endif /* kcg_comp_array_int_22 */
#endif /* kcg_use_array_int_22 */

#ifdef kcg_use_array_169698
#ifndef kcg_comp_array_169698
extern kcg_bool kcg_comp_array_169698(
  array_169698 *kcg_c1,
  array_169698 *kcg_c2);
#endif /* kcg_comp_array_169698 */
#endif /* kcg_use_array_169698 */

#ifdef kcg_use_array_int_307
#ifndef kcg_comp_array_int_307
extern kcg_bool kcg_comp_array_int_307(
  array_int_307 *kcg_c1,
  array_int_307 *kcg_c2);
#endif /* kcg_comp_array_int_307 */
#endif /* kcg_use_array_int_307 */

#ifdef kcg_use_array_169712
#ifndef kcg_comp_array_169712
extern kcg_bool kcg_comp_array_169712(
  array_169712 *kcg_c1,
  array_169712 *kcg_c2);
#endif /* kcg_comp_array_169712 */
#endif /* kcg_use_array_169712 */

#ifdef kcg_use_array_int_428
#ifndef kcg_comp_array_int_428
extern kcg_bool kcg_comp_array_int_428(
  array_int_428 *kcg_c1,
  array_int_428 *kcg_c2);
#endif /* kcg_comp_array_int_428 */
#endif /* kcg_use_array_int_428 */

#ifdef kcg_use_MRSP_internal_T_TargetManagement_types
#ifndef kcg_comp_MRSP_internal_T_TargetManagement_types
extern kcg_bool kcg_comp_MRSP_internal_T_TargetManagement_types(
  MRSP_internal_T_TargetManagement_types *kcg_c1,
  MRSP_internal_T_TargetManagement_types *kcg_c2);
#endif /* kcg_comp_MRSP_internal_T_TargetManagement_types */
#endif /* kcg_use_MRSP_internal_T_TargetManagement_types */

#ifdef kcg_use_array_int_264
#ifndef kcg_comp_array_int_264
extern kcg_bool kcg_comp_array_int_264(
  array_int_264 *kcg_c1,
  array_int_264 *kcg_c2);
#endif /* kcg_comp_array_int_264 */
#endif /* kcg_use_array_int_264 */

#ifdef kcg_use_array_169735
#ifndef kcg_comp_array_169735
extern kcg_bool kcg_comp_array_169735(
  array_169735 *kcg_c1,
  array_169735 *kcg_c2);
#endif /* kcg_comp_array_169735 */
#endif /* kcg_use_array_169735 */

#ifdef kcg_use_array_169739
#ifndef kcg_comp_array_169739
extern kcg_bool kcg_comp_array_169739(
  array_169739 *kcg_c1,
  array_169739 *kcg_c2);
#endif /* kcg_comp_array_169739 */
#endif /* kcg_use_array_169739 */

#ifdef kcg_use_array_int_18
#ifndef kcg_comp_array_int_18
extern kcg_bool kcg_comp_array_int_18(
  array_int_18 *kcg_c1,
  array_int_18 *kcg_c2);
#endif /* kcg_comp_array_int_18 */
#endif /* kcg_use_array_int_18 */

#ifdef kcg_use_array_169747
#ifndef kcg_comp_array_169747
extern kcg_bool kcg_comp_array_169747(
  array_169747 *kcg_c1,
  array_169747 *kcg_c2);
#endif /* kcg_comp_array_169747 */
#endif /* kcg_use_array_169747 */

#ifdef kcg_use_array_real_100
#ifndef kcg_comp_array_real_100
extern kcg_bool kcg_comp_array_real_100(
  array_real_100 *kcg_c1,
  array_real_100 *kcg_c2);
#endif /* kcg_comp_array_real_100 */
#endif /* kcg_use_array_real_100 */

#ifdef kcg_use_array_int_221
#ifndef kcg_comp_array_int_221
extern kcg_bool kcg_comp_array_int_221(
  array_int_221 *kcg_c1,
  array_int_221 *kcg_c2);
#endif /* kcg_comp_array_int_221 */
#endif /* kcg_use_array_int_221 */

#ifdef kcg_use_A_gradient_t_SDM_GradientAcceleration_types
#ifndef kcg_comp_A_gradient_t_SDM_GradientAcceleration_types
extern kcg_bool kcg_comp_A_gradient_t_SDM_GradientAcceleration_types(
  A_gradient_t_SDM_GradientAcceleration_types *kcg_c1,
  A_gradient_t_SDM_GradientAcceleration_types *kcg_c2);
#endif /* kcg_comp_A_gradient_t_SDM_GradientAcceleration_types */
#endif /* kcg_use_A_gradient_t_SDM_GradientAcceleration_types */

#ifdef kcg_use_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types
#ifndef kcg_comp_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types
extern kcg_bool kcg_comp_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types(
  GradientProfile_real_compensated_t_SDM_GradientAcceleration_types *kcg_c1,
  GradientProfile_real_compensated_t_SDM_GradientAcceleration_types *kcg_c2);
#endif /* kcg_comp_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types */
#endif /* kcg_use_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types */

#ifdef kcg_use_array_169776
#ifndef kcg_comp_array_169776
extern kcg_bool kcg_comp_array_169776(
  array_169776 *kcg_c1,
  array_169776 *kcg_c2);
#endif /* kcg_comp_array_169776 */
#endif /* kcg_use_array_169776 */

#ifdef kcg_use_array_int_627
#ifndef kcg_comp_array_int_627
extern kcg_bool kcg_comp_array_int_627(
  array_int_627 *kcg_c1,
  array_int_627 *kcg_c2);
#endif /* kcg_comp_array_int_627 */
#endif /* kcg_use_array_int_627 */

#ifdef kcg_use_array_int_260
#ifndef kcg_comp_array_int_260
extern kcg_bool kcg_comp_array_int_260(
  array_int_260 *kcg_c1,
  array_int_260 *kcg_c2);
#endif /* kcg_comp_array_int_260 */
#endif /* kcg_use_array_int_260 */

#ifdef kcg_use_MyArray_SDM_Commands_Pkg
#ifndef kcg_comp_MyArray_SDM_Commands_Pkg
extern kcg_bool kcg_comp_MyArray_SDM_Commands_Pkg(
  MyArray_SDM_Commands_Pkg *kcg_c1,
  MyArray_SDM_Commands_Pkg *kcg_c2);
#endif /* kcg_comp_MyArray_SDM_Commands_Pkg */
#endif /* kcg_use_MyArray_SDM_Commands_Pkg */

#ifdef kcg_use_array_int_14
#ifndef kcg_comp_array_int_14
extern kcg_bool kcg_comp_array_int_14(
  array_int_14 *kcg_c1,
  array_int_14 *kcg_c2);
#endif /* kcg_comp_array_int_14 */
#endif /* kcg_use_array_int_14 */

#ifdef kcg_use_ASafeSpeedDefinition_T_CalcBrakingCurves_types
#ifndef kcg_comp_ASafeSpeedDefinition_T_CalcBrakingCurves_types
extern kcg_bool kcg_comp_ASafeSpeedDefinition_T_CalcBrakingCurves_types(
  ASafeSpeedDefinition_T_CalcBrakingCurves_types *kcg_c1,
  ASafeSpeedDefinition_T_CalcBrakingCurves_types *kcg_c2);
#endif /* kcg_comp_ASafeSpeedDefinition_T_CalcBrakingCurves_types */
#endif /* kcg_use_ASafeSpeedDefinition_T_CalcBrakingCurves_types */

#ifdef kcg_use_P041_OBU_sectionlist_int_T_TM
#ifndef kcg_comp_P041_OBU_sectionlist_int_T_TM
extern kcg_bool kcg_comp_P041_OBU_sectionlist_int_T_TM(
  P041_OBU_sectionlist_int_T_TM *kcg_c1,
  P041_OBU_sectionlist_int_T_TM *kcg_c2);
#endif /* kcg_comp_P041_OBU_sectionlist_int_T_TM */
#endif /* kcg_use_P041_OBU_sectionlist_int_T_TM */

#ifdef kcg_use_array_169813
#ifndef kcg_comp_array_169813
extern kcg_bool kcg_comp_array_169813(
  array_169813 *kcg_c1,
  array_169813 *kcg_c2);
#endif /* kcg_comp_array_169813 */
#endif /* kcg_use_array_169813 */

#ifdef kcg_use_array_int_32_32
#ifndef kcg_comp_array_int_32_32
extern kcg_bool kcg_comp_array_int_32_32(
  array_int_32_32 *kcg_c1,
  array_int_32_32 *kcg_c2);
#endif /* kcg_comp_array_int_32_32 */
#endif /* kcg_use_array_int_32_32 */

#ifdef kcg_use_array_169831
#ifndef kcg_comp_array_169831
extern kcg_bool kcg_comp_array_169831(
  array_169831 *kcg_c1,
  array_169831 *kcg_c2);
#endif /* kcg_comp_array_169831 */
#endif /* kcg_use_array_169831 */

#ifdef kcg_use_array_169835
#ifndef kcg_comp_array_169835
extern kcg_bool kcg_comp_array_169835(
  array_169835 *kcg_c1,
  array_169835 *kcg_c2);
#endif /* kcg_comp_array_169835 */
#endif /* kcg_use_array_169835 */

#ifdef kcg_use_GradientProfile_real_t_SDM_GradientAcceleration_types
#ifndef kcg_comp_GradientProfile_real_t_SDM_GradientAcceleration_types
extern kcg_bool kcg_comp_GradientProfile_real_t_SDM_GradientAcceleration_types(
  GradientProfile_real_t_SDM_GradientAcceleration_types *kcg_c1,
  GradientProfile_real_t_SDM_GradientAcceleration_types *kcg_c2);
#endif /* kcg_comp_GradientProfile_real_t_SDM_GradientAcceleration_types */
#endif /* kcg_use_GradientProfile_real_t_SDM_GradientAcceleration_types */

#ifdef kcg_use_array_bool_256
#ifndef kcg_comp_array_bool_256
extern kcg_bool kcg_comp_array_bool_256(
  array_bool_256 *kcg_c1,
  array_bool_256 *kcg_c2);
#endif /* kcg_comp_array_bool_256 */
#endif /* kcg_use_array_bool_256 */

#ifdef kcg_use_array_int_990
#ifndef kcg_comp_array_int_990
extern kcg_bool kcg_comp_array_int_990(
  array_int_990 *kcg_c1,
  array_int_990 *kcg_c2);
#endif /* kcg_comp_array_int_990 */
#endif /* kcg_use_array_int_990 */

#ifdef kcg_use_array_bool_10
#ifndef kcg_comp_array_bool_10
extern kcg_bool kcg_comp_array_bool_10(
  array_bool_10 *kcg_c1,
  array_bool_10 *kcg_c2);
#endif /* kcg_comp_array_bool_10 */
#endif /* kcg_use_array_bool_10 */

#ifdef kcg_use_P015_OBU_sectionlist_enum_T_TM
#ifndef kcg_comp_P015_OBU_sectionlist_enum_T_TM
extern kcg_bool kcg_comp_P015_OBU_sectionlist_enum_T_TM(
  P015_OBU_sectionlist_enum_T_TM *kcg_c1,
  P015_OBU_sectionlist_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P015_OBU_sectionlist_enum_T_TM */
#endif /* kcg_use_P015_OBU_sectionlist_enum_T_TM */

#ifdef kcg_use_P027V1_trackside_sectionlist_T_TM_baseline2
#ifndef kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2(
  P027V1_trackside_sectionlist_T_TM_baseline2 *kcg_c1,
  P027V1_trackside_sectionlist_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2 */
#endif /* kcg_use_P027V1_trackside_sectionlist_T_TM_baseline2 */

#ifdef kcg_use_array_int_10
#ifndef kcg_comp_array_int_10
extern kcg_bool kcg_comp_array_int_10(
  array_int_10 *kcg_c1,
  array_int_10 *kcg_c2);
#endif /* kcg_comp_array_int_10 */
#endif /* kcg_use_array_int_10 */

#ifdef kcg_use_array_169894
#ifndef kcg_comp_array_169894
extern kcg_bool kcg_comp_array_169894(
  array_169894 *kcg_c1,
  array_169894 *kcg_c2);
#endif /* kcg_comp_array_169894 */
#endif /* kcg_use_array_169894 */

#ifdef kcg_use_array_169898
#ifndef kcg_comp_array_169898
extern kcg_bool kcg_comp_array_169898(
  array_169898 *kcg_c1,
  array_169898 *kcg_c2);
#endif /* kcg_comp_array_169898 */
#endif /* kcg_use_array_169898 */

#ifdef kcg_use_array_real_10
#ifndef kcg_comp_array_real_10
extern kcg_bool kcg_comp_array_real_10(
  array_real_10 *kcg_c1,
  array_real_10 *kcg_c2);
#endif /* kcg_comp_array_real_10 */
#endif /* kcg_use_array_real_10 */

#ifdef kcg_use_array_int_131
#ifndef kcg_comp_array_int_131
extern kcg_bool kcg_comp_array_int_131(
  array_int_131 *kcg_c1,
  array_int_131 *kcg_c2);
#endif /* kcg_comp_array_int_131 */
#endif /* kcg_use_array_int_131 */

#ifdef kcg_use_array_169945
#ifndef kcg_comp_array_169945
extern kcg_bool kcg_comp_array_169945(
  array_169945 *kcg_c1,
  array_169945 *kcg_c2);
#endif /* kcg_comp_array_169945 */
#endif /* kcg_use_array_169945 */

#ifdef kcg_use_array_int_6
#ifndef kcg_comp_array_int_6
extern kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2);
#endif /* kcg_comp_array_int_6 */
#endif /* kcg_use_array_int_6 */

#ifdef kcg_use_array_real_6
#ifndef kcg_comp_array_real_6
extern kcg_bool kcg_comp_array_real_6(
  array_real_6 *kcg_c1,
  array_real_6 *kcg_c2);
#endif /* kcg_comp_array_real_6 */
#endif /* kcg_use_array_real_6 */

#ifdef kcg_use_array_char_30_5_5
#ifndef kcg_comp_array_char_30_5_5
extern kcg_bool kcg_comp_array_char_30_5_5(
  array_char_30_5_5 *kcg_c1,
  array_char_30_5_5 *kcg_c2);
#endif /* kcg_comp_array_char_30_5_5 */
#endif /* kcg_use_array_char_30_5_5 */

#ifdef kcg_use_array_int_494
#ifndef kcg_comp_array_int_494
extern kcg_bool kcg_comp_array_int_494(
  array_int_494 *kcg_c1,
  array_int_494 *kcg_c2);
#endif /* kcg_comp_array_int_494 */
#endif /* kcg_use_array_int_494 */

#ifdef kcg_use_array_int_2
#ifndef kcg_comp_array_int_2
extern kcg_bool kcg_comp_array_int_2(array_int_2 *kcg_c1, array_int_2 *kcg_c2);
#endif /* kcg_comp_array_int_2 */
#endif /* kcg_use_array_int_2 */

#ifdef kcg_use_t_BrakeVt_t_SDMModelPkg
#ifndef kcg_comp_t_BrakeVt_t_SDMModelPkg
extern kcg_bool kcg_comp_t_BrakeVt_t_SDMModelPkg(
  t_BrakeVt_t_SDMModelPkg *kcg_c1,
  t_BrakeVt_t_SDMModelPkg *kcg_c2);
#endif /* kcg_comp_t_BrakeVt_t_SDMModelPkg */
#endif /* kcg_use_t_BrakeVt_t_SDMModelPkg */

#ifdef kcg_use_Array_DMI_List_Entry_Request
#ifndef kcg_comp_Array_DMI_List_Entry_Request
extern kcg_bool kcg_comp_Array_DMI_List_Entry_Request(
  Array_DMI_List_Entry_Request *kcg_c1,
  Array_DMI_List_Entry_Request *kcg_c2);
#endif /* kcg_comp_Array_DMI_List_Entry_Request */
#endif /* kcg_use_Array_DMI_List_Entry_Request */

#ifdef kcg_use_array_bool_41
#ifndef kcg_comp_array_bool_41
extern kcg_bool kcg_comp_array_bool_41(
  array_bool_41 *kcg_c1,
  array_bool_41 *kcg_c2);
#endif /* kcg_comp_array_bool_41 */
#endif /* kcg_use_array_bool_41 */

#ifdef kcg_use_array_int_41
#ifndef kcg_comp_array_int_41
extern kcg_bool kcg_comp_array_int_41(
  array_int_41 *kcg_c1,
  array_int_41 *kcg_c2);
#endif /* kcg_comp_array_int_41 */
#endif /* kcg_use_array_int_41 */

#ifdef kcg_use_array_int_6_221
#ifndef kcg_comp_array_int_6_221
extern kcg_bool kcg_comp_array_int_6_221(
  array_int_6_221 *kcg_c1,
  array_int_6_221 *kcg_c2);
#endif /* kcg_comp_array_int_6_221 */
#endif /* kcg_use_array_int_6_221 */

#ifdef kcg_use_array_int_978
#ifndef kcg_comp_array_int_978
extern kcg_bool kcg_comp_array_int_978(
  array_int_978 *kcg_c1,
  array_int_978 *kcg_c2);
#endif /* kcg_comp_array_int_978 */
#endif /* kcg_use_array_int_978 */

#ifdef kcg_use_P046_OBU_sectionlist_array_T_TM
#ifndef kcg_comp_P046_OBU_sectionlist_array_T_TM
extern kcg_bool kcg_comp_P046_OBU_sectionlist_array_T_TM(
  P046_OBU_sectionlist_array_T_TM *kcg_c1,
  P046_OBU_sectionlist_array_T_TM *kcg_c2);
#endif /* kcg_comp_P046_OBU_sectionlist_array_T_TM */
#endif /* kcg_use_P046_OBU_sectionlist_array_T_TM */

#ifdef kcg_use_TransitionBuffer_T_InformationFilter_Pkg
#ifndef kcg_comp_TransitionBuffer_T_InformationFilter_Pkg
extern kcg_bool kcg_comp_TransitionBuffer_T_InformationFilter_Pkg(
  TransitionBuffer_T_InformationFilter_Pkg *kcg_c1,
  TransitionBuffer_T_InformationFilter_Pkg *kcg_c2);
#endif /* kcg_comp_TransitionBuffer_T_InformationFilter_Pkg */
#endif /* kcg_use_TransitionBuffer_T_InformationFilter_Pkg */

#ifdef kcg_use_P80_ModeProfiles_T_Packet_Types_Pkg
#ifndef kcg_comp_P80_ModeProfiles_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P80_ModeProfiles_T_Packet_Types_Pkg(
  P80_ModeProfiles_T_Packet_Types_Pkg *kcg_c1,
  P80_ModeProfiles_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P80_ModeProfiles_T_Packet_Types_Pkg */
#endif /* kcg_use_P80_ModeProfiles_T_Packet_Types_Pkg */

#ifdef kcg_use_array_int_283
#ifndef kcg_comp_array_int_283
extern kcg_bool kcg_comp_array_int_283(
  array_int_283 *kcg_c1,
  array_int_283 *kcg_c2);
#endif /* kcg_comp_array_int_283 */
#endif /* kcg_use_array_int_283 */

#ifdef kcg_use_array_int_2_32_32
#ifndef kcg_comp_array_int_2_32_32
extern kcg_bool kcg_comp_array_int_2_32_32(
  array_int_2_32_32 *kcg_c1,
  array_int_2_32_32 *kcg_c2);
#endif /* kcg_comp_array_int_2_32_32 */
#endif /* kcg_use_array_int_2_32_32 */

#ifdef kcg_use_DMI_trackConditionArray_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_trackConditionArray_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_trackConditionArray_T_DMI_Types_Pkg(
  DMI_trackConditionArray_T_DMI_Types_Pkg *kcg_c1,
  DMI_trackConditionArray_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_trackConditionArray_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_trackConditionArray_T_DMI_Types_Pkg */

#ifdef kcg_use_array_170141
#ifndef kcg_comp_array_170141
extern kcg_bool kcg_comp_array_170141(
  array_170141 *kcg_c1,
  array_170141 *kcg_c2);
#endif /* kcg_comp_array_170141 */
#endif /* kcg_use_array_170141 */

#ifdef kcg_use_array_170158
#ifndef kcg_comp_array_170158
extern kcg_bool kcg_comp_array_170158(
  array_170158 *kcg_c1,
  array_170158 *kcg_c2);
#endif /* kcg_comp_array_170158 */
#endif /* kcg_use_array_170158 */

#ifdef kcg_use_DMI_gradientProfileArray_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_gradientProfileArray_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_gradientProfileArray_T_DMI_Types_Pkg(
  DMI_gradientProfileArray_T_DMI_Types_Pkg *kcg_c1,
  DMI_gradientProfileArray_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_gradientProfileArray_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_gradientProfileArray_T_DMI_Types_Pkg */

#ifdef kcg_use_DMI_SpeedProfileArray_T_DMI_Types_Pkg
#ifndef kcg_comp_DMI_SpeedProfileArray_T_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_SpeedProfileArray_T_DMI_Types_Pkg(
  DMI_SpeedProfileArray_T_DMI_Types_Pkg *kcg_c1,
  DMI_SpeedProfileArray_T_DMI_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DMI_SpeedProfileArray_T_DMI_Types_Pkg */
#endif /* kcg_use_DMI_SpeedProfileArray_T_DMI_Types_Pkg */

#ifdef kcg_use_array_170168
#ifndef kcg_comp_array_170168
extern kcg_bool kcg_comp_array_170168(
  array_170168 *kcg_c1,
  array_170168 *kcg_c2);
#endif /* kcg_comp_array_170168 */
#endif /* kcg_use_array_170168 */

#ifdef kcg_use_array_170178
#ifndef kcg_comp_array_170178
extern kcg_bool kcg_comp_array_170178(
  array_170178 *kcg_c1,
  array_170178 *kcg_c2);
#endif /* kcg_comp_array_170178 */
#endif /* kcg_use_array_170178 */

#ifdef kcg_use_array_170182
#ifndef kcg_comp_array_170182
extern kcg_bool kcg_comp_array_170182(
  array_170182 *kcg_c1,
  array_170182 *kcg_c2);
#endif /* kcg_comp_array_170182 */
#endif /* kcg_use_array_170182 */

#ifdef kcg_use_array_170186
#ifndef kcg_comp_array_170186
extern kcg_bool kcg_comp_array_170186(
  array_170186 *kcg_c1,
  array_170186 *kcg_c2);
#endif /* kcg_comp_array_170186 */
#endif /* kcg_use_array_170186 */

#ifdef kcg_use_array_170198
#ifndef kcg_comp_array_170198
extern kcg_bool kcg_comp_array_170198(
  array_170198 *kcg_c1,
  array_170198 *kcg_c2);
#endif /* kcg_comp_array_170198 */
#endif /* kcg_use_array_170198 */

#ifdef kcg_use_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types
#ifndef kcg_comp_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types
extern kcg_bool kcg_comp_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types(
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types *kcg_c1,
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types *kcg_c2);
#endif /* kcg_comp_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types */
#endif /* kcg_use_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types */

#ifdef kcg_use_array_170229
#ifndef kcg_comp_array_170229
extern kcg_bool kcg_comp_array_170229(
  array_170229 *kcg_c1,
  array_170229 *kcg_c2);
#endif /* kcg_comp_array_170229 */
#endif /* kcg_use_array_170229 */

#ifdef kcg_use_array_int_33
#ifndef kcg_comp_array_int_33
extern kcg_bool kcg_comp_array_int_33(
  array_int_33 *kcg_c1,
  array_int_33 *kcg_c2);
#endif /* kcg_comp_array_int_33 */
#endif /* kcg_use_array_int_33 */

#ifdef kcg_use_array_170237
#ifndef kcg_comp_array_170237
extern kcg_bool kcg_comp_array_170237(
  array_170237 *kcg_c1,
  array_170237 *kcg_c2);
#endif /* kcg_comp_array_170237 */
#endif /* kcg_use_array_170237 */

#ifdef kcg_use_array_int_236
#ifndef kcg_comp_array_int_236
extern kcg_bool kcg_comp_array_int_236(
  array_int_236 *kcg_c1,
  array_int_236 *kcg_c2);
#endif /* kcg_comp_array_int_236 */
#endif /* kcg_use_array_int_236 */

#ifdef kcg_use_array_170250
#ifndef kcg_comp_array_170250
extern kcg_bool kcg_comp_array_170250(
  array_170250 *kcg_c1,
  array_170250 *kcg_c2);
#endif /* kcg_comp_array_170250 */
#endif /* kcg_use_array_170250 */

#ifdef kcg_use_array_int_888
#ifndef kcg_comp_array_int_888
extern kcg_bool kcg_comp_array_int_888(
  array_int_888 *kcg_c1,
  array_int_888 *kcg_c2);
#endif /* kcg_comp_array_int_888 */
#endif /* kcg_use_array_int_888 */

#ifdef kcg_use_array_170263
#ifndef kcg_comp_array_170263
extern kcg_bool kcg_comp_array_170263(
  array_170263 *kcg_c1,
  array_170263 *kcg_c2);
#endif /* kcg_comp_array_170263 */
#endif /* kcg_use_array_170263 */

#ifdef kcg_use_array_int_72
#ifndef kcg_comp_array_int_72
extern kcg_bool kcg_comp_array_int_72(
  array_int_72 *kcg_c1,
  array_int_72 *kcg_c2);
#endif /* kcg_comp_array_int_72 */
#endif /* kcg_use_array_int_72 */

#ifdef kcg_use_array_int_396
#ifndef kcg_comp_array_int_396
extern kcg_bool kcg_comp_array_int_396(
  array_int_396 *kcg_c1,
  array_int_396 *kcg_c2);
#endif /* kcg_comp_array_int_396 */
#endif /* kcg_use_array_int_396 */

#ifdef kcg_use_P058_OBU_sectionlist_enum_T_TM
#ifndef kcg_comp_P058_OBU_sectionlist_enum_T_TM
extern kcg_bool kcg_comp_P058_OBU_sectionlist_enum_T_TM(
  P058_OBU_sectionlist_enum_T_TM *kcg_c1,
  P058_OBU_sectionlist_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P058_OBU_sectionlist_enum_T_TM */
#endif /* kcg_use_P058_OBU_sectionlist_enum_T_TM */

#ifdef kcg_use_array_170320
#ifndef kcg_comp_array_170320
extern kcg_bool kcg_comp_array_170320(
  array_170320 *kcg_c1,
  array_170320 *kcg_c2);
#endif /* kcg_comp_array_170320 */
#endif /* kcg_use_array_170320 */

#ifdef kcg_use_array_int_150
#ifndef kcg_comp_array_int_150
extern kcg_bool kcg_comp_array_int_150(
  array_int_150 *kcg_c1,
  array_int_150 *kcg_c2);
#endif /* kcg_comp_array_int_150 */
#endif /* kcg_use_array_int_150 */

#ifdef kcg_use_P027V1_OBU_sectionlist_enum_T_TM_baseline2
#ifndef kcg_comp_P027V1_OBU_sectionlist_enum_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_OBU_sectionlist_enum_T_TM_baseline2(
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 *kcg_c1,
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_OBU_sectionlist_enum_T_TM_baseline2 */
#endif /* kcg_use_P027V1_OBU_sectionlist_enum_T_TM_baseline2 */

#ifdef kcg_use_P027V1_OBU_sectionlist_int_T_TM_baseline2
#ifndef kcg_comp_P027V1_OBU_sectionlist_int_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_OBU_sectionlist_int_T_TM_baseline2(
  P027V1_OBU_sectionlist_int_T_TM_baseline2 *kcg_c1,
  P027V1_OBU_sectionlist_int_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_OBU_sectionlist_int_T_TM_baseline2 */
#endif /* kcg_use_P027V1_OBU_sectionlist_int_T_TM_baseline2 */

#ifdef kcg_use_nidCArray_T_Packet_Types_Pkg
#ifndef kcg_comp_nidCArray_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_nidCArray_T_Packet_Types_Pkg(
  nidCArray_T_Packet_Types_Pkg *kcg_c1,
  nidCArray_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nidCArray_T_Packet_Types_Pkg */
#endif /* kcg_use_nidCArray_T_Packet_Types_Pkg */

#ifdef kcg_use_array_int_68
#ifndef kcg_comp_array_int_68
extern kcg_bool kcg_comp_array_int_68(
  array_int_68 *kcg_c1,
  array_int_68 *kcg_c2);
#endif /* kcg_comp_array_int_68 */
#endif /* kcg_use_array_int_68 */

#ifdef kcg_use_array_170353
#ifndef kcg_comp_array_170353
extern kcg_bool kcg_comp_array_170353(
  array_170353 *kcg_c1,
  array_170353 *kcg_c2);
#endif /* kcg_comp_array_170353 */
#endif /* kcg_use_array_170353 */

#ifdef kcg_use_array_int_3_33_99
#ifndef kcg_comp_array_int_3_33_99
extern kcg_bool kcg_comp_array_int_3_33_99(
  array_int_3_33_99 *kcg_c1,
  array_int_3_33_99 *kcg_c2);
#endif /* kcg_comp_array_int_3_33_99 */
#endif /* kcg_use_array_int_3_33_99 */

#ifdef kcg_use_array_int_2_32_64
#ifndef kcg_comp_array_int_2_32_64
extern kcg_bool kcg_comp_array_int_2_32_64(
  array_int_2_32_64 *kcg_c1,
  array_int_2_32_64 *kcg_c2);
#endif /* kcg_comp_array_int_2_32_64 */
#endif /* kcg_use_array_int_2_32_64 */

#ifdef kcg_use_P021_trackide_sectionlist_T_TM
#ifndef kcg_comp_P021_trackide_sectionlist_T_TM
extern kcg_bool kcg_comp_P021_trackide_sectionlist_T_TM(
  P021_trackide_sectionlist_T_TM *kcg_c1,
  P021_trackide_sectionlist_T_TM *kcg_c2);
#endif /* kcg_comp_P021_trackide_sectionlist_T_TM */
#endif /* kcg_use_P021_trackide_sectionlist_T_TM */

#ifdef kcg_use_P015_OBU_sectionlist_array_T_TM
#ifndef kcg_comp_P015_OBU_sectionlist_array_T_TM
extern kcg_bool kcg_comp_P015_OBU_sectionlist_array_T_TM(
  P015_OBU_sectionlist_array_T_TM *kcg_c1,
  P015_OBU_sectionlist_array_T_TM *kcg_c2);
#endif /* kcg_comp_P015_OBU_sectionlist_array_T_TM */
#endif /* kcg_use_P015_OBU_sectionlist_array_T_TM */

#ifdef kcg_use_array_int_25
#ifndef kcg_comp_array_int_25
extern kcg_bool kcg_comp_array_int_25(
  array_int_25 *kcg_c1,
  array_int_25 *kcg_c2);
#endif /* kcg_comp_array_int_25 */
#endif /* kcg_use_array_int_25 */

#ifdef kcg_use_array_170382
#ifndef kcg_comp_array_170382
extern kcg_bool kcg_comp_array_170382(
  array_170382 *kcg_c1,
  array_170382 *kcg_c2);
#endif /* kcg_comp_array_170382 */
#endif /* kcg_use_array_170382 */

#ifdef kcg_use_array_int_64
#ifndef kcg_comp_array_int_64
extern kcg_bool kcg_comp_array_int_64(
  array_int_64 *kcg_c1,
  array_int_64 *kcg_c2);
#endif /* kcg_comp_array_int_64 */
#endif /* kcg_use_array_int_64 */

#ifdef kcg_use_array_170418
#ifndef kcg_comp_array_170418
extern kcg_bool kcg_comp_array_170418(
  array_170418 *kcg_c1,
  array_170418 *kcg_c2);
#endif /* kcg_comp_array_170418 */
#endif /* kcg_use_array_170418 */

#ifdef kcg_use_array_int_21
#ifndef kcg_comp_array_int_21
extern kcg_bool kcg_comp_array_int_21(
  array_int_21 *kcg_c1,
  array_int_21 *kcg_c2);
#endif /* kcg_comp_array_int_21 */
#endif /* kcg_use_array_int_21 */

#ifdef kcg_use_SSP_cat_t_TA_MRSP
#ifndef kcg_comp_SSP_cat_t_TA_MRSP
extern kcg_bool kcg_comp_SSP_cat_t_TA_MRSP(
  SSP_cat_t_TA_MRSP *kcg_c1,
  SSP_cat_t_TA_MRSP *kcg_c2);
#endif /* kcg_comp_SSP_cat_t_TA_MRSP */
#endif /* kcg_use_SSP_cat_t_TA_MRSP */

#ifdef kcg_use_nvkrintArray_T_Packet_Types_Pkg
#ifndef kcg_comp_nvkrintArray_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_nvkrintArray_T_Packet_Types_Pkg(
  nvkrintArray_T_Packet_Types_Pkg *kcg_c1,
  nvkrintArray_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nvkrintArray_T_Packet_Types_Pkg */
#endif /* kcg_use_nvkrintArray_T_Packet_Types_Pkg */

#ifdef kcg_use_array_170437
#ifndef kcg_comp_array_170437
extern kcg_bool kcg_comp_array_170437(
  array_170437 *kcg_c1,
  array_170437 *kcg_c2);
#endif /* kcg_comp_array_170437 */
#endif /* kcg_use_array_170437 */

#ifdef kcg_use_ASafe_Data_T_CalcBrakingCurves_types
#ifndef kcg_comp_ASafe_Data_T_CalcBrakingCurves_types
extern kcg_bool kcg_comp_ASafe_Data_T_CalcBrakingCurves_types(
  ASafe_Data_T_CalcBrakingCurves_types *kcg_c1,
  ASafe_Data_T_CalcBrakingCurves_types *kcg_c2);
#endif /* kcg_comp_ASafe_Data_T_CalcBrakingCurves_types */
#endif /* kcg_use_ASafe_Data_T_CalcBrakingCurves_types */

#ifdef kcg_use_array_170449
#ifndef kcg_comp_array_170449
extern kcg_bool kcg_comp_array_170449(
  array_170449 *kcg_c1,
  array_170449 *kcg_c2);
#endif /* kcg_comp_array_170449 */
#endif /* kcg_use_array_170449 */

#ifdef kcg_use_array_int_99
#ifndef kcg_comp_array_int_99
extern kcg_bool kcg_comp_array_int_99(
  array_int_99 *kcg_c1,
  array_int_99 *kcg_c2);
#endif /* kcg_comp_array_int_99 */
#endif /* kcg_use_array_int_99 */

#ifdef kcg_use_P011_voltage_sectionlist_array_T_TM_TrainToTrack
#ifndef kcg_comp_P011_voltage_sectionlist_array_T_TM_TrainToTrack
extern kcg_bool kcg_comp_P011_voltage_sectionlist_array_T_TM_TrainToTrack(
  P011_voltage_sectionlist_array_T_TM_TrainToTrack *kcg_c1,
  P011_voltage_sectionlist_array_T_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P011_voltage_sectionlist_array_T_TM_TrainToTrack */
#endif /* kcg_use_P011_voltage_sectionlist_array_T_TM_TrainToTrack */

#ifdef kcg_use_array_int_17
#ifndef kcg_comp_array_int_17
extern kcg_bool kcg_comp_array_int_17(
  array_int_17 *kcg_c1,
  array_int_17 *kcg_c2);
#endif /* kcg_comp_array_int_17 */
#endif /* kcg_use_array_int_17 */

#ifdef kcg_use_array_int_302
#ifndef kcg_comp_array_int_302
extern kcg_bool kcg_comp_array_int_302(
  array_int_302 *kcg_c1,
  array_int_302 *kcg_c2);
#endif /* kcg_comp_array_int_302 */
#endif /* kcg_use_array_int_302 */

#ifdef kcg_use_array_int_56
#ifndef kcg_comp_array_int_56
extern kcg_bool kcg_comp_array_int_56(
  array_int_56 *kcg_c1,
  array_int_56 *kcg_c2);
#endif /* kcg_comp_array_int_56 */
#endif /* kcg_use_array_int_56 */

#ifdef kcg_use_array_real_9_6
#ifndef kcg_comp_array_real_9_6
extern kcg_bool kcg_comp_array_real_9_6(
  array_real_9_6 *kcg_c1,
  array_real_9_6 *kcg_c2);
#endif /* kcg_comp_array_real_9_6 */
#endif /* kcg_use_array_real_9_6 */

#ifdef kcg_use_array_int_99_33
#ifndef kcg_comp_array_int_99_33
extern kcg_bool kcg_comp_array_int_99_33(
  array_int_99_33 *kcg_c1,
  array_int_99_33 *kcg_c2);
#endif /* kcg_comp_array_int_99_33 */
#endif /* kcg_use_array_int_99_33 */

#ifdef kcg_use_array_int_13
#ifndef kcg_comp_array_int_13
extern kcg_bool kcg_comp_array_int_13(
  array_int_13 *kcg_c1,
  array_int_13 *kcg_c2);
#endif /* kcg_comp_array_int_13 */
#endif /* kcg_use_array_int_13 */

#ifdef kcg_use_array_real_13
#ifndef kcg_comp_array_real_13
extern kcg_bool kcg_comp_array_real_13(
  array_real_13 *kcg_c1,
  array_real_13 *kcg_c2);
#endif /* kcg_comp_array_real_13 */
#endif /* kcg_use_array_real_13 */

#ifdef kcg_use_array_170535
#ifndef kcg_comp_array_170535
extern kcg_bool kcg_comp_array_170535(
  array_170535 *kcg_c1,
  array_170535 *kcg_c2);
#endif /* kcg_comp_array_170535 */
#endif /* kcg_use_array_170535 */

#ifdef kcg_use_array_bool_256_46_30
#ifndef kcg_comp_array_bool_256_46_30
extern kcg_bool kcg_comp_array_bool_256_46_30(
  array_bool_256_46_30 *kcg_c1,
  array_bool_256_46_30 *kcg_c2);
#endif /* kcg_comp_array_bool_256_46_30 */
#endif /* kcg_use_array_bool_256_46_30 */

#ifdef kcg_use_array_170543
#ifndef kcg_comp_array_170543
extern kcg_bool kcg_comp_array_170543(
  array_170543 *kcg_c1,
  array_170543 *kcg_c2);
#endif /* kcg_comp_array_170543 */
#endif /* kcg_use_array_170543 */

#ifdef kcg_use_P021_OBU_sectionlist_int_T_TM
#ifndef kcg_comp_P021_OBU_sectionlist_int_T_TM
extern kcg_bool kcg_comp_P021_OBU_sectionlist_int_T_TM(
  P021_OBU_sectionlist_int_T_TM *kcg_c1,
  P021_OBU_sectionlist_int_T_TM *kcg_c2);
#endif /* kcg_comp_P021_OBU_sectionlist_int_T_TM */
#endif /* kcg_use_P021_OBU_sectionlist_int_T_TM */

#ifdef kcg_use_DMI_TEXT_INT_Array_T_DATA
#ifndef kcg_comp_DMI_TEXT_INT_Array_T_DATA
extern kcg_bool kcg_comp_DMI_TEXT_INT_Array_T_DATA(
  DMI_TEXT_INT_Array_T_DATA *kcg_c1,
  DMI_TEXT_INT_Array_T_DATA *kcg_c2);
#endif /* kcg_comp_DMI_TEXT_INT_Array_T_DATA */
#endif /* kcg_use_DMI_TEXT_INT_Array_T_DATA */

#ifdef kcg_use_array_170575
#ifndef kcg_comp_array_170575
extern kcg_bool kcg_comp_array_170575(
  array_170575 *kcg_c1,
  array_170575 *kcg_c2);
#endif /* kcg_comp_array_170575 */
#endif /* kcg_use_array_170575 */

#ifdef kcg_use_array_170597
#ifndef kcg_comp_array_170597
extern kcg_bool kcg_comp_array_170597(
  array_170597 *kcg_c1,
  array_170597 *kcg_c2);
#endif /* kcg_comp_array_170597 */
#endif /* kcg_use_array_170597 */

#ifdef kcg_use_array_170601
#ifndef kcg_comp_array_170601
extern kcg_bool kcg_comp_array_170601(
  array_170601 *kcg_c1,
  array_170601 *kcg_c2);
#endif /* kcg_comp_array_170601 */
#endif /* kcg_use_array_170601 */

#ifdef kcg_use_array_170605
#ifndef kcg_comp_array_170605
extern kcg_bool kcg_comp_array_170605(
  array_170605 *kcg_c1,
  array_170605 *kcg_c2);
#endif /* kcg_comp_array_170605 */
#endif /* kcg_use_array_170605 */

#ifndef kcg_comp_DMI_TEXT_DMI_Types_Pkg
extern kcg_bool kcg_comp_DMI_TEXT_DMI_Types_Pkg(
  DMI_TEXT_DMI_Types_Pkg *kcg_c1,
  DMI_TEXT_DMI_Types_Pkg *kcg_c2);
#define kcg_use_DMI_TEXT_DMI_Types_Pkg
#endif /* kcg_comp_DMI_TEXT_DMI_Types_Pkg */

#ifdef kcg_use_array_int_9
#ifndef kcg_comp_array_int_9
extern kcg_bool kcg_comp_array_int_9(array_int_9 *kcg_c1, array_int_9 *kcg_c2);
#endif /* kcg_comp_array_int_9 */
#endif /* kcg_use_array_int_9 */

#ifdef kcg_use_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2
#ifndef kcg_comp_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2
extern kcg_bool kcg_comp_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2(
  P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 *kcg_c1,
  P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 *kcg_c2);
#endif /* kcg_comp_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 */
#endif /* kcg_use_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 */

#ifdef kcg_use_tScale
#ifndef kcg_comp_tScale
extern kcg_bool kcg_comp_tScale(tScale *kcg_c1, tScale *kcg_c2);
#endif /* kcg_comp_tScale */
#endif /* kcg_use_tScale */

#ifdef kcg_use_driverIdentifier_T_DMI_Messages_Bothways_Pkg
#ifndef kcg_comp_driverIdentifier_T_DMI_Messages_Bothways_Pkg
extern kcg_bool kcg_comp_driverIdentifier_T_DMI_Messages_Bothways_Pkg(
  driverIdentifier_T_DMI_Messages_Bothways_Pkg *kcg_c1,
  driverIdentifier_T_DMI_Messages_Bothways_Pkg *kcg_c2);
#endif /* kcg_comp_driverIdentifier_T_DMI_Messages_Bothways_Pkg */
#endif /* kcg_use_driverIdentifier_T_DMI_Messages_Bothways_Pkg */

#ifdef kcg_use_P041_OBU_sectionlist_enum_T_TM
#ifndef kcg_comp_P041_OBU_sectionlist_enum_T_TM
extern kcg_bool kcg_comp_P041_OBU_sectionlist_enum_T_TM(
  P041_OBU_sectionlist_enum_T_TM *kcg_c1,
  P041_OBU_sectionlist_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P041_OBU_sectionlist_enum_T_TM */
#endif /* kcg_use_P041_OBU_sectionlist_enum_T_TM */

#ifdef kcg_use_P021_OBU_sectionlist_enum_T_TM
#ifndef kcg_comp_P021_OBU_sectionlist_enum_T_TM
extern kcg_bool kcg_comp_P021_OBU_sectionlist_enum_T_TM(
  P021_OBU_sectionlist_enum_T_TM *kcg_c1,
  P021_OBU_sectionlist_enum_T_TM *kcg_c2);
#endif /* kcg_comp_P021_OBU_sectionlist_enum_T_TM */
#endif /* kcg_use_P021_OBU_sectionlist_enum_T_TM */

#ifdef kcg_use_array_int_48
#ifndef kcg_comp_array_int_48
extern kcg_bool kcg_comp_array_int_48(
  array_int_48 *kcg_c1,
  array_int_48 *kcg_c2);
#endif /* kcg_comp_array_int_48 */
#endif /* kcg_use_array_int_48 */

#ifdef kcg_use_array_170644
#ifndef kcg_comp_array_170644
extern kcg_bool kcg_comp_array_170644(
  array_170644 *kcg_c1,
  array_170644 *kcg_c2);
#endif /* kcg_comp_array_170644 */
#endif /* kcg_use_array_170644 */

#ifdef kcg_use_array_170648
#ifndef kcg_comp_array_170648
extern kcg_bool kcg_comp_array_170648(
  array_170648 *kcg_c1,
  array_170648 *kcg_c2);
#endif /* kcg_comp_array_170648 */
#endif /* kcg_use_array_170648 */

#ifdef kcg_use_array_170652
#ifndef kcg_comp_array_170652
extern kcg_bool kcg_comp_array_170652(
  array_170652 *kcg_c1,
  array_170652 *kcg_c2);
#endif /* kcg_comp_array_170652 */
#endif /* kcg_use_array_170652 */

#ifdef kcg_use_SSP_matrix_t_TA_MRSP
#ifndef kcg_comp_SSP_matrix_t_TA_MRSP
extern kcg_bool kcg_comp_SSP_matrix_t_TA_MRSP(
  SSP_matrix_t_TA_MRSP *kcg_c1,
  SSP_matrix_t_TA_MRSP *kcg_c2);
#endif /* kcg_comp_SSP_matrix_t_TA_MRSP */
#endif /* kcg_use_SSP_matrix_t_TA_MRSP */

#ifdef kcg_use_array_bool_5
#ifndef kcg_comp_array_bool_5
extern kcg_bool kcg_comp_array_bool_5(
  array_bool_5 *kcg_c1,
  array_bool_5 *kcg_c2);
#endif /* kcg_comp_array_bool_5 */
#endif /* kcg_use_array_bool_5 */

#ifdef kcg_use_array_int_5
#ifndef kcg_comp_array_int_5
extern kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2);
#endif /* kcg_comp_array_int_5 */
#endif /* kcg_use_array_int_5 */

#ifdef kcg_use_array_real_5
#ifndef kcg_comp_array_real_5
extern kcg_bool kcg_comp_array_real_5(
  array_real_5 *kcg_c1,
  array_real_5 *kcg_c2);
#endif /* kcg_comp_array_real_5 */
#endif /* kcg_use_array_real_5 */

#ifdef kcg_use_array_170701
#ifndef kcg_comp_array_170701
extern kcg_bool kcg_comp_array_170701(
  array_170701 *kcg_c1,
  array_170701 *kcg_c2);
#endif /* kcg_comp_array_170701 */
#endif /* kcg_use_array_170701 */

#ifdef kcg_use_array_bool_1
#ifndef kcg_comp_array_bool_1
extern kcg_bool kcg_comp_array_bool_1(
  array_bool_1 *kcg_c1,
  array_bool_1 *kcg_c2);
#endif /* kcg_comp_array_bool_1 */
#endif /* kcg_use_array_bool_1 */

#ifdef kcg_use_P044_other_data_TM_TrainToTrack
#ifndef kcg_comp_P044_other_data_TM_TrainToTrack
extern kcg_bool kcg_comp_P044_other_data_TM_TrainToTrack(
  P044_other_data_TM_TrainToTrack *kcg_c1,
  P044_other_data_TM_TrainToTrack *kcg_c2);
#endif /* kcg_comp_P044_other_data_TM_TrainToTrack */
#endif /* kcg_use_P044_other_data_TM_TrainToTrack */

#ifdef kcg_use_array_real_1
#ifndef kcg_comp_array_real_1
extern kcg_bool kcg_comp_array_real_1(
  array_real_1 *kcg_c1,
  array_real_1 *kcg_c2);
#endif /* kcg_comp_array_real_1 */
#endif /* kcg_use_array_real_1 */

#ifdef kcg_use_array_int_40
#ifndef kcg_comp_array_int_40
extern kcg_bool kcg_comp_array_int_40(
  array_int_40 *kcg_c1,
  array_int_40 *kcg_c2);
#endif /* kcg_comp_array_int_40 */
#endif /* kcg_use_array_int_40 */

#ifdef kcg_use_DMI_Track_Description_int_array_T
#ifndef kcg_comp_DMI_Track_Description_int_array_T
extern kcg_bool kcg_comp_DMI_Track_Description_int_array_T(
  DMI_Track_Description_int_array_T *kcg_c1,
  DMI_Track_Description_int_array_T *kcg_c2);
#endif /* kcg_comp_DMI_Track_Description_int_array_T */
#endif /* kcg_use_DMI_Track_Description_int_array_T */

#ifdef kcg_use_tSpeedPoints
#ifndef kcg_comp_tSpeedPoints
extern kcg_bool kcg_comp_tSpeedPoints(
  tSpeedPoints *kcg_c1,
  tSpeedPoints *kcg_c2);
#endif /* kcg_comp_tSpeedPoints */
#endif /* kcg_use_tSpeedPoints */

#ifdef kcg_use_array_char_243
#ifndef kcg_comp_array_char_243
extern kcg_bool kcg_comp_array_char_243(
  array_char_243 *kcg_c1,
  array_char_243 *kcg_c2);
#endif /* kcg_comp_array_char_243 */
#endif /* kcg_use_array_char_243 */

#ifdef kcg_use_array_170759
#ifndef kcg_comp_array_170759
extern kcg_bool kcg_comp_array_170759(
  array_170759 *kcg_c1,
  array_170759 *kcg_c2);
#endif /* kcg_comp_array_170759 */
#endif /* kcg_use_array_170759 */

#ifdef kcg_use_ModeDecisionTableType_DataDictionary_Pkg
#ifndef kcg_comp_ModeDecisionTableType_DataDictionary_Pkg
extern kcg_bool kcg_comp_ModeDecisionTableType_DataDictionary_Pkg(
  ModeDecisionTableType_DataDictionary_Pkg *kcg_c1,
  ModeDecisionTableType_DataDictionary_Pkg *kcg_c2);
#endif /* kcg_comp_ModeDecisionTableType_DataDictionary_Pkg */
#endif /* kcg_use_ModeDecisionTableType_DataDictionary_Pkg */

#ifdef kcg_use_MetadataTruthtable_T1_CheckEuroradioMessage
#ifndef kcg_comp_MetadataTruthtable_T1_CheckEuroradioMessage
extern kcg_bool kcg_comp_MetadataTruthtable_T1_CheckEuroradioMessage(
  MetadataTruthtable_T1_CheckEuroradioMessage *kcg_c1,
  MetadataTruthtable_T1_CheckEuroradioMessage *kcg_c2);
#endif /* kcg_comp_MetadataTruthtable_T1_CheckEuroradioMessage */
#endif /* kcg_use_MetadataTruthtable_T1_CheckEuroradioMessage */

#ifdef kcg_use_array_170789
#ifndef kcg_comp_array_170789
extern kcg_bool kcg_comp_array_170789(
  array_170789 *kcg_c1,
  array_170789 *kcg_c2);
#endif /* kcg_comp_array_170789 */
#endif /* kcg_use_array_170789 */

#ifdef kcg_use_array_int_891
#ifndef kcg_comp_array_int_891
extern kcg_bool kcg_comp_array_int_891(
  array_int_891 *kcg_c1,
  array_int_891 *kcg_c2);
#endif /* kcg_comp_array_int_891 */
#endif /* kcg_use_array_int_891 */

#ifdef kcg_use_aNID_RADIO_T_Packet_TrainTypes_Pkg
#ifndef kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg
extern kcg_bool kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg(
  aNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c1,
  aNID_RADIO_T_Packet_TrainTypes_Pkg *kcg_c2);
#endif /* kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg */
#endif /* kcg_use_aNID_RADIO_T_Packet_TrainTypes_Pkg */

#ifdef kcg_use_array_170826
#ifndef kcg_comp_array_170826
extern kcg_bool kcg_comp_array_170826(
  array_170826 *kcg_c1,
  array_170826 *kcg_c2);
#endif /* kcg_comp_array_170826 */
#endif /* kcg_use_array_170826 */

#ifdef kcg_use_ParabolaCurveValid_T_CalcBrakingCurves_types
#ifndef kcg_comp_ParabolaCurveValid_T_CalcBrakingCurves_types
extern kcg_bool kcg_comp_ParabolaCurveValid_T_CalcBrakingCurves_types(
  ParabolaCurveValid_T_CalcBrakingCurves_types *kcg_c1,
  ParabolaCurveValid_T_CalcBrakingCurves_types *kcg_c2);
#endif /* kcg_comp_ParabolaCurveValid_T_CalcBrakingCurves_types */
#endif /* kcg_use_ParabolaCurveValid_T_CalcBrakingCurves_types */

#ifdef kcg_use_array_bool_32
#ifndef kcg_comp_array_bool_32
extern kcg_bool kcg_comp_array_bool_32(
  array_bool_32 *kcg_c1,
  array_bool_32 *kcg_c2);
#endif /* kcg_comp_array_bool_32 */
#endif /* kcg_use_array_bool_32 */

#ifdef kcg_use_array_real_114
#ifndef kcg_comp_array_real_114
extern kcg_bool kcg_comp_array_real_114(
  array_real_114 *kcg_c1,
  array_real_114 *kcg_c2);
#endif /* kcg_comp_array_real_114 */
#endif /* kcg_use_array_real_114 */

#ifdef kcg_use_array_int_32
#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */
#endif /* kcg_use_array_int_32 */

#ifdef kcg_use_array_real_32
#ifndef kcg_comp_array_real_32
extern kcg_bool kcg_comp_array_real_32(
  array_real_32 *kcg_c1,
  array_real_32 *kcg_c2);
#endif /* kcg_comp_array_real_32 */
#endif /* kcg_use_array_real_32 */

#ifdef kcg_use_array_int_7_33_231
#ifndef kcg_comp_array_int_7_33_231
extern kcg_bool kcg_comp_array_int_7_33_231(
  array_int_7_33_231 *kcg_c1,
  array_int_7_33_231 *kcg_c2);
#endif /* kcg_comp_array_int_7_33_231 */
#endif /* kcg_use_array_int_7_33_231 */

#ifdef kcg_use_array_bool_110
#ifndef kcg_comp_array_bool_110
extern kcg_bool kcg_comp_array_bool_110(
  array_bool_110 *kcg_c1,
  array_bool_110 *kcg_c2);
#endif /* kcg_comp_array_bool_110 */
#endif /* kcg_use_array_bool_110 */

#ifdef kcg_use_array_int_110
#ifndef kcg_comp_array_int_110
extern kcg_bool kcg_comp_array_int_110(
  array_int_110 *kcg_c1,
  array_int_110 *kcg_c2);
#endif /* kcg_comp_array_int_110 */
#endif /* kcg_use_array_int_110 */

#ifdef kcg_use_array_int_395
#ifndef kcg_comp_array_int_395
extern kcg_bool kcg_comp_array_int_395(
  array_int_395 *kcg_c1,
  array_int_395 *kcg_c2);
#endif /* kcg_comp_array_int_395 */
#endif /* kcg_use_array_int_395 */

#ifdef kcg_use_array_real_110
#ifndef kcg_comp_array_real_110
extern kcg_bool kcg_comp_array_real_110(
  array_real_110 *kcg_c1,
  array_real_110 *kcg_c2);
#endif /* kcg_comp_array_real_110 */
#endif /* kcg_use_array_real_110 */

#ifdef kcg_use_array_int_28
#ifndef kcg_comp_array_int_28
extern kcg_bool kcg_comp_array_int_28(
  array_int_28 *kcg_c1,
  array_int_28 *kcg_c2);
#endif /* kcg_comp_array_int_28 */
#endif /* kcg_use_array_int_28 */

#ifdef kcg_use_array_170971
#ifndef kcg_comp_array_170971
extern kcg_bool kcg_comp_array_170971(
  array_170971 *kcg_c1,
  array_170971 *kcg_c2);
#endif /* kcg_comp_array_170971 */
#endif /* kcg_use_array_170971 */

#ifdef kcg_use_array_170975
#ifndef kcg_comp_array_170975
extern kcg_bool kcg_comp_array_170975(
  array_170975 *kcg_c1,
  array_170975 *kcg_c2);
#endif /* kcg_comp_array_170975 */
#endif /* kcg_use_array_170975 */

#ifdef kcg_use_array_int_128_32
#ifndef kcg_comp_array_int_128_32
extern kcg_bool kcg_comp_array_int_128_32(
  array_int_128_32 *kcg_c1,
  array_int_128_32 *kcg_c2);
#endif /* kcg_comp_array_int_128_32 */
#endif /* kcg_use_array_int_128_32 */

#ifdef kcg_use_P005_sections_array_flat_T_TM
#ifndef kcg_comp_P005_sections_array_flat_T_TM
extern kcg_bool kcg_comp_P005_sections_array_flat_T_TM(
  P005_sections_array_flat_T_TM *kcg_c1,
  P005_sections_array_flat_T_TM *kcg_c2);
#endif /* kcg_comp_P005_sections_array_flat_T_TM */
#endif /* kcg_use_P005_sections_array_flat_T_TM */

#ifdef kcg_use_DMI_EVC_Level_Data_int_array_T_DATA
#ifndef kcg_comp_DMI_EVC_Level_Data_int_array_T_DATA
extern kcg_bool kcg_comp_DMI_EVC_Level_Data_int_array_T_DATA(
  DMI_EVC_Level_Data_int_array_T_DATA *kcg_c1,
  DMI_EVC_Level_Data_int_array_T_DATA *kcg_c2);
#endif /* kcg_comp_DMI_EVC_Level_Data_int_array_T_DATA */
#endif /* kcg_use_DMI_EVC_Level_Data_int_array_T_DATA */

#ifdef kcg_use_array_int_2_33_99
#ifndef kcg_comp_array_int_2_33_99
extern kcg_bool kcg_comp_array_int_2_33_99(
  array_int_2_33_99 *kcg_c1,
  array_int_2_33_99 *kcg_c2);
#endif /* kcg_comp_array_int_2_33_99 */
#endif /* kcg_use_array_int_2_33_99 */

#ifdef kcg_use_P046_OBU_sectionlist_int_T_TM
#ifndef kcg_comp_P046_OBU_sectionlist_int_T_TM
extern kcg_bool kcg_comp_P046_OBU_sectionlist_int_T_TM(
  P046_OBU_sectionlist_int_T_TM *kcg_c1,
  P046_OBU_sectionlist_int_T_TM *kcg_c2);
#endif /* kcg_comp_P046_OBU_sectionlist_int_T_TM */
#endif /* kcg_use_P046_OBU_sectionlist_int_T_TM */

#ifdef kcg_use_IterPacket58List_T_Packet_Types_Pkg
#ifndef kcg_comp_IterPacket58List_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_IterPacket58List_T_Packet_Types_Pkg(
  IterPacket58List_T_Packet_Types_Pkg *kcg_c1,
  IterPacket58List_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_IterPacket58List_T_Packet_Types_Pkg */
#endif /* kcg_use_IterPacket58List_T_Packet_Types_Pkg */

#ifdef kcg_use_array_int_3_33_231
#ifndef kcg_comp_array_int_3_33_231
extern kcg_bool kcg_comp_array_int_3_33_231(
  array_int_3_33_231 *kcg_c1,
  array_int_3_33_231 *kcg_c2);
#endif /* kcg_comp_array_int_3_33_231 */
#endif /* kcg_use_array_int_3_33_231 */

#ifdef kcg_use_array_int_231_33
#ifndef kcg_comp_array_int_231_33
extern kcg_bool kcg_comp_array_int_231_33(
  array_int_231_33 *kcg_c1,
  array_int_231_33 *kcg_c2);
#endif /* kcg_comp_array_int_231_33 */
#endif /* kcg_use_array_int_231_33 */

#ifdef kcg_use_array_int_24
#ifndef kcg_comp_array_int_24
extern kcg_bool kcg_comp_array_int_24(
  array_int_24 *kcg_c1,
  array_int_24 *kcg_c2);
#endif /* kcg_comp_array_int_24 */
#endif /* kcg_use_array_int_24 */

#ifdef kcg_use_array_int_961
#ifndef kcg_comp_array_int_961
extern kcg_bool kcg_comp_array_int_961(
  array_int_961 *kcg_c1,
  array_int_961 *kcg_c2);
#endif /* kcg_comp_array_int_961 */
#endif /* kcg_use_array_int_961 */

#ifdef kcg_use_array_int_430
#ifndef kcg_comp_array_int_430
extern kcg_bool kcg_comp_array_int_430(
  array_int_430 *kcg_c1,
  array_int_430 *kcg_c2);
#endif /* kcg_comp_array_int_430 */
#endif /* kcg_use_array_int_430 */

#ifdef kcg_use_array_172617
#ifndef kcg_comp_array_172617
extern kcg_bool kcg_comp_array_172617(
  array_172617 *kcg_c1,
  array_172617 *kcg_c2);
#endif /* kcg_comp_array_172617 */
#endif /* kcg_use_array_172617 */

#ifdef kcg_use_array_172621
#ifndef kcg_comp_array_172621
extern kcg_bool kcg_comp_array_172621(
  array_172621 *kcg_c1,
  array_172621 *kcg_c2);
#endif /* kcg_comp_array_172621 */
#endif /* kcg_use_array_172621 */

#ifdef kcg_use_SSPArray_T_Packet_Types_Pkg
#ifndef kcg_comp_SSPArray_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_SSPArray_T_Packet_Types_Pkg(
  SSPArray_T_Packet_Types_Pkg *kcg_c1,
  SSPArray_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_SSPArray_T_Packet_Types_Pkg */
#endif /* kcg_use_SSPArray_T_Packet_Types_Pkg */

#ifdef kcg_use_DiffArray_T_Packet_Types_Pkg
#ifndef kcg_comp_DiffArray_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_DiffArray_T_Packet_Types_Pkg(
  DiffArray_T_Packet_Types_Pkg *kcg_c1,
  DiffArray_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_DiffArray_T_Packet_Types_Pkg */
#endif /* kcg_use_DiffArray_T_Packet_Types_Pkg */

#ifdef kcg_use_P21_GradientProfiles_T_Packet_Types_Pkg
#ifndef kcg_comp_P21_GradientProfiles_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P21_GradientProfiles_T_Packet_Types_Pkg(
  P21_GradientProfiles_T_Packet_Types_Pkg *kcg_c1,
  P21_GradientProfiles_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P21_GradientProfiles_T_Packet_Types_Pkg */
#endif /* kcg_use_P21_GradientProfiles_T_Packet_Types_Pkg */

#ifdef kcg_use_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg
#ifndef kcg_comp_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg(
  P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg *kcg_c1,
  P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg */
#endif /* kcg_use_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg */

#ifdef kcg_use_nvkvintsetArray_T_Packet_Types_Pkg
#ifndef kcg_comp_nvkvintsetArray_T_Packet_Types_Pkg
extern kcg_bool kcg_comp_nvkvintsetArray_T_Packet_Types_Pkg(
  nvkvintsetArray_T_Packet_Types_Pkg *kcg_c1,
  nvkvintsetArray_T_Packet_Types_Pkg *kcg_c2);
#endif /* kcg_comp_nvkvintsetArray_T_Packet_Types_Pkg */
#endif /* kcg_use_nvkvintsetArray_T_Packet_Types_Pkg */

#ifdef kcg_use_array_int_266
#ifndef kcg_comp_array_int_266
extern kcg_bool kcg_comp_array_int_266(
  array_int_266 *kcg_c1,
  array_int_266 *kcg_c2);
#endif /* kcg_comp_array_int_266 */
#endif /* kcg_use_array_int_266 */

#ifdef kcg_use_array_172650
#ifndef kcg_comp_array_172650
extern kcg_bool kcg_comp_array_172650(
  array_172650 *kcg_c1,
  array_172650 *kcg_c2);
#endif /* kcg_comp_array_172650 */
#endif /* kcg_use_array_172650 */

#ifdef kcg_use_array_int_20
#ifndef kcg_comp_array_int_20
extern kcg_bool kcg_comp_array_int_20(
  array_int_20 *kcg_c1,
  array_int_20 *kcg_c2);
#endif /* kcg_comp_array_int_20 */
#endif /* kcg_use_array_int_20 */

#ifdef kcg_use_array_char_30_5
#ifndef kcg_comp_array_char_30_5
extern kcg_bool kcg_comp_array_char_30_5(
  array_char_30_5 *kcg_c1,
  array_char_30_5 *kcg_c2);
#endif /* kcg_comp_array_char_30_5 */
#endif /* kcg_use_array_char_30_5 */

#ifdef kcg_use_array_172678
#ifndef kcg_comp_array_172678
extern kcg_bool kcg_comp_array_172678(
  array_172678 *kcg_c1,
  array_172678 *kcg_c2);
#endif /* kcg_comp_array_172678 */
#endif /* kcg_use_array_172678 */

#ifdef kcg_use_array_172689
#ifndef kcg_comp_array_172689
extern kcg_bool kcg_comp_array_172689(
  array_172689 *kcg_c1,
  array_172689 *kcg_c2);
#endif /* kcg_comp_array_172689 */
#endif /* kcg_use_array_172689 */

#ifdef kcg_use_DMI_Text_Message_int_array_T_DATA
#ifndef kcg_comp_DMI_Text_Message_int_array_T_DATA
extern kcg_bool kcg_comp_DMI_Text_Message_int_array_T_DATA(
  DMI_Text_Message_int_array_T_DATA *kcg_c1,
  DMI_Text_Message_int_array_T_DATA *kcg_c2);
#endif /* kcg_comp_DMI_Text_Message_int_array_T_DATA */
#endif /* kcg_use_DMI_Text_Message_int_array_T_DATA */

#ifdef kcg_use_array_int_301
#ifndef kcg_comp_array_int_301
extern kcg_bool kcg_comp_array_int_301(
  array_int_301 *kcg_c1,
  array_int_301 *kcg_c2);
#endif /* kcg_comp_array_int_301 */
#endif /* kcg_use_array_int_301 */

#ifdef kcg_use_array_172706
#ifndef kcg_comp_array_172706
extern kcg_bool kcg_comp_array_172706(
  array_172706 *kcg_c1,
  array_172706 *kcg_c2);
#endif /* kcg_comp_array_172706 */
#endif /* kcg_use_array_172706 */

#ifdef kcg_use_array_172744
#ifndef kcg_comp_array_172744
extern kcg_bool kcg_comp_array_172744(
  array_172744 *kcg_c1,
  array_172744 *kcg_c2);
#endif /* kcg_comp_array_172744 */
#endif /* kcg_use_array_172744 */

#ifdef kcg_use_array_bool_12
#ifndef kcg_comp_array_bool_12
extern kcg_bool kcg_comp_array_bool_12(
  array_bool_12 *kcg_c1,
  array_bool_12 *kcg_c2);
#endif /* kcg_comp_array_bool_12 */
#endif /* kcg_use_array_bool_12 */

#ifdef kcg_use_array_int_12
#ifndef kcg_comp_array_int_12
extern kcg_bool kcg_comp_array_int_12(
  array_int_12 *kcg_c1,
  array_int_12 *kcg_c2);
#endif /* kcg_comp_array_int_12 */
#endif /* kcg_use_array_int_12 */

#ifdef kcg_use_array_real_12
#ifndef kcg_comp_array_real_12
extern kcg_bool kcg_comp_array_real_12(
  array_real_12 *kcg_c1,
  array_real_12 *kcg_c2);
#endif /* kcg_comp_array_real_12 */
#endif /* kcg_use_array_real_12 */

#ifdef kcg_use_array_char_12
#ifndef kcg_comp_array_char_12
extern kcg_bool kcg_comp_array_char_12(
  array_char_12 *kcg_c1,
  array_char_12 *kcg_c2);
#endif /* kcg_comp_array_char_12 */
#endif /* kcg_use_array_char_12 */

#ifndef kcg_comp_CompressedPacketData_T_Common_Types_Pkg
extern kcg_bool kcg_comp_CompressedPacketData_T_Common_Types_Pkg(
  CompressedPacketData_T_Common_Types_Pkg *kcg_c1,
  CompressedPacketData_T_Common_Types_Pkg *kcg_c2);
#define kcg_use_CompressedPacketData_T_Common_Types_Pkg
#endif /* kcg_comp_CompressedPacketData_T_Common_Types_Pkg */

#ifdef kcg_use_array_172785
#ifndef kcg_comp_array_172785
extern kcg_bool kcg_comp_array_172785(
  array_172785 *kcg_c1,
  array_172785 *kcg_c2);
#endif /* kcg_comp_array_172785 */
#endif /* kcg_use_array_172785 */

#ifdef kcg_use_array_bool_8
#ifndef kcg_comp_array_bool_8
extern kcg_bool kcg_comp_array_bool_8(
  array_bool_8 *kcg_c1,
  array_bool_8 *kcg_c2);
#endif /* kcg_comp_array_bool_8 */
#endif /* kcg_use_array_bool_8 */

#ifdef kcg_use_array_int_8
#ifndef kcg_comp_array_int_8
extern kcg_bool kcg_comp_array_int_8(array_int_8 *kcg_c1, array_int_8 *kcg_c2);
#endif /* kcg_comp_array_int_8 */
#endif /* kcg_use_array_int_8 */

#ifdef kcg_use_array_real_8
#ifndef kcg_comp_array_real_8
extern kcg_bool kcg_comp_array_real_8(
  array_real_8 *kcg_c1,
  array_real_8 *kcg_c2);
#endif /* kcg_comp_array_real_8 */
#endif /* kcg_use_array_real_8 */

#ifdef kcg_use_array_int_496
#ifndef kcg_comp_array_int_496
extern kcg_bool kcg_comp_array_int_496(
  array_int_496 *kcg_c1,
  array_int_496 *kcg_c2);
#endif /* kcg_comp_array_int_496 */
#endif /* kcg_use_array_int_496 */

#ifdef kcg_use_array_172875
#ifndef kcg_comp_array_172875
extern kcg_bool kcg_comp_array_172875(
  array_172875 *kcg_c1,
  array_172875 *kcg_c2);
#endif /* kcg_comp_array_172875 */
#endif /* kcg_use_array_172875 */

#ifdef kcg_use_array_int_129
#ifndef kcg_comp_array_int_129
extern kcg_bool kcg_comp_array_int_129(
  array_int_129 *kcg_c1,
  array_int_129 *kcg_c2);
#endif /* kcg_comp_array_int_129 */
#endif /* kcg_use_array_int_129 */

#define kcg_comp_DMI_speedProfileElement_T_DMI_Types_Pkg kcg_comp_struct_169478

#define kcg_copy_DMI_speedProfileElement_T_DMI_Types_Pkg kcg_copy_struct_169478

#define kcg_comp_DMI_gradientProfileElement_T_DMI_Types_Pkg kcg_comp_struct_170025

#define kcg_copy_DMI_gradientProfileElement_T_DMI_Types_Pkg kcg_copy_struct_170025

#define kcg_comp_DMI_Icon_Ack_int_array_T_DATA kcg_comp_array_int_3

#define kcg_copy_DMI_Icon_Ack_int_array_T_DATA kcg_copy_array_int_3

#define kcg_comp_DMI_Train_Data_Ack_int_array_T_DATA kcg_comp_array_int_3

#define kcg_copy_DMI_Train_Data_Ack_int_array_T_DATA kcg_copy_array_int_3

#define kcg_comp_DMI_Text_Message_Ack_int_array_T_DATA kcg_comp_array_int_4

#define kcg_copy_DMI_Text_Message_Ack_int_array_T_DATA kcg_copy_array_int_4

#define kcg_comp_DMI_Radio_Net_Data_int_array_T_DATA kcg_comp_array_int_2

#define kcg_copy_DMI_Radio_Net_Data_int_array_T_DATA kcg_copy_array_int_2

#define kcg_comp_DMI_Driver_Request_int_array_T_DATA kcg_comp_array_int_3

#define kcg_copy_DMI_Driver_Request_int_array_T_DATA kcg_copy_array_int_3

#define kcg_comp_DMI_Identifier_int_array_T_DATA kcg_comp_array_int_261

#define kcg_copy_DMI_Identifier_int_array_T_DATA kcg_copy_array_int_261

#define kcg_comp_DMI_Status_int_array_T_DATA kcg_comp_array_int_4

#define kcg_copy_DMI_Status_int_array_T_DATA kcg_copy_array_int_4

#define kcg_comp_DMI_Level_Data_int_array_T_DATA kcg_comp_array_int_4

#define kcg_copy_DMI_Level_Data_int_array_T_DATA kcg_copy_array_int_4

#define kcg_comp_DriverIdentifier_INT_T_DATA kcg_comp_array_int_9

#define kcg_copy_DriverIdentifier_INT_T_DATA kcg_copy_array_int_9

#define kcg_comp_DMI_Driver_Identifier_int_array_T_DATA kcg_comp_array_int_11

#define kcg_copy_DMI_Driver_Identifier_int_array_T_DATA kcg_copy_array_int_11

#define kcg_comp_DMI_Adhesion_Factor_Data_int_array_T_DATA kcg_comp_array_int_3

#define kcg_copy_DMI_Adhesion_Factor_Data_int_array_T_DATA kcg_copy_array_int_3

#define kcg_comp_DMI_Train_Data_int_array_T_DATA kcg_comp_array_int_9

#define kcg_copy_DMI_Train_Data_int_array_T_DATA kcg_copy_array_int_9

#define kcg_comp_DMI_Train_Running_Number_int_array_T_DATA kcg_comp_array_int_3

#define kcg_copy_DMI_Train_Running_Number_int_array_T_DATA kcg_copy_array_int_3

#define kcg_comp_DMI_Icons_int_array_T_DATA kcg_comp_array_int_9

#define kcg_copy_DMI_Icons_int_array_T_DATA kcg_copy_array_int_9

#define kcg_comp_DMI_EVC_Radio_Net_Data_int_array_T_DATA kcg_comp_array_int_3

#define kcg_copy_DMI_EVC_Radio_Net_Data_int_array_T_DATA kcg_copy_array_int_3

#define kcg_comp_DMI_LevelList_int_array_T_DATA kcg_comp_array_int_65

#define kcg_copy_DMI_LevelList_int_array_T_DATA kcg_copy_array_int_65

#define kcg_comp_DMI_Display_Control_int_array_T_DATA kcg_comp_array_int_3

#define kcg_copy_DMI_Display_Control_int_array_T_DATA kcg_copy_array_int_3

#define kcg_comp_DMI_System_Version_int_array_T_DATA kcg_comp_array_int_3

#define kcg_copy_DMI_System_Version_int_array_T_DATA kcg_copy_array_int_3

#define kcg_comp_DMI_Identifier_Request_int_array_T_DATA kcg_comp_array_int_261

#define kcg_copy_DMI_Identifier_Request_int_array_T_DATA kcg_copy_array_int_261

#define kcg_comp_V5 kcg_comp_array_int_5

#define kcg_copy_V5 kcg_copy_array_int_5

#define kcg_comp_DMI_speedProfile_int_array_T_DATA kcg_comp_array_int_129

#define kcg_copy_DMI_speedProfile_int_array_T_DATA kcg_copy_array_int_129

#define kcg_comp_DMI_trackCondition_int_array_T kcg_comp_array_int_65

#define kcg_copy_DMI_trackCondition_int_array_T kcg_copy_array_int_65

#define kcg_comp_DMI_gradientProfile_int_arrayT kcg_comp_array_int_129

#define kcg_copy_DMI_gradientProfile_int_arrayT kcg_copy_array_int_129

#define kcg_comp_DMI_loadingGauge_T_DMI_Types_Pkg kcg_comp_struct_169597

#define kcg_copy_DMI_loadingGauge_T_DMI_Types_Pkg kcg_copy_struct_169597

#define kcg_comp_DMI_airtightSystem_T_DMI_Types_Pkg kcg_comp_struct_169597

#define kcg_copy_DMI_airtightSystem_T_DMI_Types_Pkg kcg_copy_struct_169597

#define kcg_comp_DMI_vMax_id_T_DMI_Types_Pkg kcg_comp_struct_169597

#define kcg_copy_DMI_vMax_id_T_DMI_Types_Pkg kcg_copy_struct_169597

#define kcg_comp_DMI_brakeModel_id_T_DMI_Types_Pkg kcg_comp_struct_169597

#define kcg_copy_DMI_brakeModel_id_T_DMI_Types_Pkg kcg_copy_struct_169597

#define kcg_comp_DMI_EVC_Coded_Train_Data_int_array_T_DATA kcg_comp_array_int_9

#define kcg_copy_DMI_EVC_Coded_Train_Data_int_array_T_DATA kcg_copy_array_int_9

#define kcg_comp_DMI_Entry_Request_int_array_T_DATA kcg_comp_array_int_3

#define kcg_copy_DMI_Entry_Request_int_array_T_DATA kcg_copy_array_int_3

#define kcg_comp_DMI_Menu_Request_int_array_T_DATA kcg_comp_array_int_3

#define kcg_copy_DMI_Menu_Request_int_array_T_DATA kcg_copy_array_int_3

#define kcg_comp_DMI_Dynamic_int_array_T_DATA kcg_comp_array_int_24

#define kcg_copy_DMI_Dynamic_int_array_T_DATA kcg_copy_array_int_24

#define kcg_comp_tPASP_Array kcg_comp_array_real_10

#define kcg_copy_tPASP_Array kcg_copy_array_real_10

#define kcg_comp_tPASPOutput_Array kcg_comp_array_real_4

#define kcg_copy_tPASPOutput_Array kcg_copy_array_real_4

#define kcg_comp_sTractionIdentity_T_Packet_TrainTypes_Pkg kcg_comp_struct_169965

#define kcg_copy_sTractionIdentity_T_Packet_TrainTypes_Pkg kcg_copy_struct_169965

#define kcg_comp_aTractionIdentity_T_Packet_TrainTypes_Pkg kcg_comp_array_169735

#define kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg kcg_copy_array_169735

#define kcg_comp_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_comp_array_int_5

#define kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_copy_array_int_5

#define kcg_comp_D_test_distance_T_TIU_Types_Pkg kcg_comp_struct_169971

#define kcg_copy_D_test_distance_T_TIU_Types_Pkg kcg_copy_struct_169971

#define kcg_comp_D_test_trackinit_T_TIU_Types_Pkg kcg_comp_struct_169971

#define kcg_copy_D_test_trackinit_T_TIU_Types_Pkg kcg_copy_struct_169971

#define kcg_comp_L_test_trackcond_T_TIU_Types_Pkg kcg_comp_struct_169971

#define kcg_copy_L_test_trackcond_T_TIU_Types_Pkg kcg_copy_struct_169971

#define kcg_comp_D_test_trackcond_T_TIU_Types_Pkg kcg_comp_struct_169971

#define kcg_copy_D_test_trackcond_T_TIU_Types_Pkg kcg_copy_struct_169971

#define kcg_comp_BaliseGroupData_Basics kcg_comp_struct_169401

#define kcg_copy_BaliseGroupData_Basics kcg_copy_struct_169401

#define kcg_comp_BaliseGroupData_TM kcg_comp_struct_169401

#define kcg_copy_BaliseGroupData_TM kcg_copy_struct_169401

#define kcg_comp_P041_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P041_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P041_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P041_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P046_section_array_T_TM kcg_comp_array_int_2

#define kcg_copy_P046_section_array_T_TM kcg_copy_array_int_2

#define kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P015_trackide_sectionlist_T_TM kcg_comp_array_170158

#define kcg_copy_P015_trackide_sectionlist_T_TM kcg_copy_array_170158

#define kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_comp_array_170826

#define kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_copy_array_170826

#define kcg_comp_P015_section_array_T_TM kcg_comp_array_int_4

#define kcg_copy_P015_section_array_T_TM kcg_copy_array_int_4

#define kcg_comp_P015_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P015_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_P015_OBU_sectionlist_int_T_TM kcg_comp_array_170158

#define kcg_copy_P015_OBU_sectionlist_int_T_TM kcg_copy_array_170158

#define kcg_comp_P005_section_array_T_TM kcg_comp_array_int_7

#define kcg_copy_P005_section_array_T_TM kcg_copy_array_int_7

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_comp_array_170826

#define kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_copy_array_170826

#define kcg_comp_P027V1_section_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2

#define kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2

#define kcg_comp_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2_32

#define kcg_copy_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2_32

#define kcg_comp_P021_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P021_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P021_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P021_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_M_003_int_T_TM_radio_messages kcg_comp_struct_170773

#define kcg_copy_M_003_int_T_TM_radio_messages kcg_copy_struct_170773

#define kcg_comp_M_024_int_T_TM_radio_messages kcg_comp_struct_170773

#define kcg_copy_M_024_int_T_TM_radio_messages kcg_copy_struct_170773

#define kcg_comp_P058_trackide_sectionlist_T_TM kcg_comp_array_168785

#define kcg_copy_P058_trackide_sectionlist_T_TM kcg_copy_array_168785

#define kcg_comp_P058_section_array_T_TM kcg_comp_array_int_2

#define kcg_copy_P058_section_array_T_TM kcg_copy_array_int_2

#define kcg_comp_P058_OBU_sectionlist_array_T_TM kcg_comp_array_int_2_32

#define kcg_copy_P058_OBU_sectionlist_array_T_TM kcg_copy_array_int_2_32

#define kcg_comp_P058_sections_array_flat_T_TM kcg_comp_array_int_64

#define kcg_copy_P058_sections_array_flat_T_TM kcg_copy_array_int_64

#define kcg_comp_P058_OBU_sectionlist_int_T_TM kcg_comp_array_168785

#define kcg_copy_P058_OBU_sectionlist_int_T_TM kcg_copy_array_168785

#define kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_comp_struct_171773

#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_copy_struct_171773

#define kcg_comp_M_028_T_TM_radio_messages kcg_comp_struct_168880

#define kcg_copy_M_028_T_TM_radio_messages kcg_copy_struct_168880

#define kcg_comp_M_038_T_TM_radio_messages kcg_comp_struct_170763

#define kcg_copy_M_038_T_TM_radio_messages kcg_copy_struct_170763

#define kcg_comp_M_039_T_TM_radio_messages kcg_comp_struct_170763

#define kcg_copy_M_039_T_TM_radio_messages kcg_copy_struct_170763

#define kcg_comp_M_040_T_TM_radio_messages kcg_comp_struct_170763

#define kcg_copy_M_040_T_TM_radio_messages kcg_copy_struct_170763

#define kcg_comp_M_041_T_TM_radio_messages kcg_comp_struct_170763

#define kcg_copy_M_041_T_TM_radio_messages kcg_copy_struct_170763

#define kcg_comp_M_043_T_TM_radio_messages kcg_comp_struct_170763

#define kcg_copy_M_043_T_TM_radio_messages kcg_copy_struct_170763

#define kcg_comp_M_003_T_TM_radio_messages kcg_comp_struct_170763

#define kcg_copy_M_003_T_TM_radio_messages kcg_copy_struct_170763

#define kcg_comp_M_006_T_TM_radio_messages kcg_comp_struct_170763

#define kcg_copy_M_006_T_TM_radio_messages kcg_copy_struct_170763

#define kcg_comp_M_009_T_TM_radio_messages kcg_comp_struct_170763

#define kcg_copy_M_009_T_TM_radio_messages kcg_copy_struct_170763

#define kcg_comp_M_016_T_TM_radio_messages kcg_comp_struct_168859

#define kcg_copy_M_016_T_TM_radio_messages kcg_copy_struct_168859

#define kcg_comp_M_018_T_TM_radio_messages kcg_comp_struct_168859

#define kcg_copy_M_018_T_TM_radio_messages kcg_copy_struct_168859

#define kcg_comp_M_024_T_TM_radio_messages kcg_comp_struct_170763

#define kcg_copy_M_024_T_TM_radio_messages kcg_copy_struct_170763

#define kcg_comp_M_027_T_TM_radio_messages kcg_comp_struct_168880

#define kcg_copy_M_027_T_TM_radio_messages kcg_copy_struct_168880

#define kcg_comp_Radio_TrackTrain_Header_T_TM_transitional kcg_comp_struct_171773

#define kcg_copy_Radio_TrackTrain_Header_T_TM_transitional kcg_copy_struct_171773

#define kcg_comp_telephoneNumber_T_Packet_TrainTypes_Pkg kcg_comp_array_int_15

#define kcg_copy_telephoneNumber_T_Packet_TrainTypes_Pkg kcg_copy_array_int_15

#define kcg_comp_Radio_TrainTrack_Header_T_Radio_Types_Pkg kcg_comp_struct_172356

#define kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg kcg_copy_struct_172356

#define kcg_comp_Radio_TrainTrack_Message_T_Radio_Types_Pkg kcg_comp_struct_168630

#define kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg kcg_copy_struct_168630

#define kcg_comp_P011_ntc_list_TM_TrainToTrack kcg_comp_array_int_5

#define kcg_copy_P011_ntc_list_TM_TrainToTrack kcg_copy_array_int_5

#define kcg_comp_P011_voltage_TM_TrainToTrack kcg_comp_struct_169965

#define kcg_copy_P011_voltage_TM_TrainToTrack kcg_copy_struct_169965

#define kcg_comp_P011_voltage_list_TM_TrainToTrack kcg_comp_array_169735

#define kcg_copy_P011_voltage_list_TM_TrainToTrack kcg_copy_array_169735

#define kcg_comp_P003_nid_radio_list_t_TM_TrainToTrack kcg_comp_array_int_5

#define kcg_copy_P003_nid_radio_list_t_TM_TrainToTrack kcg_copy_array_int_5

#define kcg_comp_P003_nid_radio_list_int_t_TM_TrainToTrack kcg_comp_array_int_5

#define kcg_copy_P003_nid_radio_list_int_t_TM_TrainToTrack kcg_copy_array_int_5

#define kcg_comp_Array03_TM_TrainToTrack kcg_comp_array_int_3

#define kcg_copy_Array03_TM_TrainToTrack kcg_copy_array_int_3

#define kcg_comp_P003_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_8

#define kcg_copy_P003_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_8

#define kcg_comp_P005_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_3

#define kcg_copy_P005_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_3

#define kcg_comp_P004_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_3

#define kcg_copy_P004_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_3

#define kcg_comp_P009_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_3

#define kcg_copy_P009_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_3

#define kcg_comp_P011_voltage_sections_array_flat_t_TM_TrainToTrack kcg_comp_array_int_8

#define kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack kcg_copy_array_int_8

#define kcg_comp_P011_ntc_list_array_T_TM_TrainToTrack kcg_comp_array_int_5

#define kcg_copy_P011_ntc_list_array_T_TM_TrainToTrack kcg_copy_array_int_5

#define kcg_comp_Array11_TM_TrainToTrack kcg_comp_array_int_11

#define kcg_copy_Array11_TM_TrainToTrack kcg_copy_array_int_11

#define kcg_comp_P011_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_25

#define kcg_copy_P011_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_25

#define kcg_comp_P000_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_17

#define kcg_copy_P000_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_17

#define kcg_comp_P001_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_17

#define kcg_copy_P001_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_17

#define kcg_comp_D_test_current_T_TIU_Types_Pkg kcg_comp_struct_169971

#define kcg_copy_D_test_current_T_TIU_Types_Pkg kcg_copy_struct_169971

#define kcg_comp_D_test_traction_T_TIU_Types_Pkg kcg_comp_struct_169971

#define kcg_copy_D_test_traction_T_TIU_Types_Pkg kcg_copy_struct_169971

#define kcg_comp_ReceivedMessage_T_Common_Types_Pkg kcg_comp_struct_172526

#define kcg_copy_ReceivedMessage_T_Common_Types_Pkg kcg_copy_struct_172526

#define kcg_comp_msgFromTrack_T_RCM_MsgTypes_Pkg kcg_comp_struct_172526

#define kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg kcg_copy_struct_172526

#define kcg_comp_msgToTrack_T_RCM_MsgTypes_Pkg kcg_comp_struct_168630

#define kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg kcg_copy_struct_168630

#define kcg_comp_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus kcg_comp_array_169813

#define kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus kcg_copy_array_169813

#define kcg_comp_M_155_T_TM_radio_messages kcg_comp_struct_170132

#define kcg_copy_M_155_T_TM_radio_messages kcg_copy_struct_170132

#define kcg_comp_M_TrainTrackMessage_buffer_t_TM_lib_internal kcg_comp_array_169813

#define kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal kcg_copy_array_169813

#define kcg_comp_M_156_T_TM_radio_messages kcg_comp_struct_170132

#define kcg_copy_M_156_T_TM_radio_messages kcg_copy_struct_170132

#define kcg_comp_M_159_T_TM_radio_messages kcg_comp_struct_170132

#define kcg_copy_M_159_T_TM_radio_messages kcg_copy_struct_170132

#define kcg_comp_M_154_T_TM_radio_messages kcg_comp_struct_170132

#define kcg_copy_M_154_T_TM_radio_messages kcg_copy_struct_170132

#define kcg_comp_P131_RBCTransitionOrder_T_Packet_Types_Pkg kcg_comp_struct_172277

#define kcg_copy_P131_RBCTransitionOrder_T_Packet_Types_Pkg kcg_copy_struct_172277

#define kcg_comp_P131_OBU_T_TM kcg_comp_struct_172277

#define kcg_copy_P131_OBU_T_TM kcg_copy_struct_172277

#define kcg_comp_Array09_TM kcg_comp_array_int_9

#define kcg_copy_Array09_TM kcg_copy_array_int_9

#define kcg_comp_P203V1_OBU_l_section_enum_T_TM_baseline2 kcg_comp_struct_169021

#define kcg_copy_P203V1_OBU_l_section_enum_T_TM_baseline2 kcg_copy_struct_169021

#define kcg_comp_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2 kcg_comp_array_169645

#define kcg_copy_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2 kcg_copy_array_169645

#define kcg_comp_P203V1_OBU_k_m_section_enum_T_TM_baseline2 kcg_comp_struct_169865

#define kcg_copy_P203V1_OBU_k_m_section_enum_T_TM_baseline2 kcg_copy_struct_169865

#define kcg_comp_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2 kcg_comp_array_170182

#define kcg_copy_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2 kcg_copy_array_170182

#define kcg_comp_P203V1_OBU_k_section_enum_T_TM_baseline2 kcg_comp_struct_172264

#define kcg_copy_P203V1_OBU_k_section_enum_T_TM_baseline2 kcg_copy_struct_172264

#define kcg_comp_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2 kcg_comp_array_169066

#define kcg_copy_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2 kcg_copy_array_169066

#define kcg_comp_P203V1_OBU_n_section_enum_T_TM_baseline2 kcg_comp_struct_170221

#define kcg_copy_P203V1_OBU_n_section_enum_T_TM_baseline2 kcg_copy_struct_170221

#define kcg_comp_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2 kcg_comp_array_170178

#define kcg_copy_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2 kcg_copy_array_170178

#define kcg_comp_nidC_T_Packet_Types_Pkg kcg_comp_struct_170172

#define kcg_copy_nidC_T_Packet_Types_Pkg kcg_copy_struct_170172

#define kcg_comp_Array03_TM kcg_comp_array_int_3

#define kcg_copy_Array03_TM kcg_copy_array_int_3

#define kcg_comp_Radio_TrainTrack_Header_T_TM_transitional kcg_comp_struct_172356

#define kcg_copy_Radio_TrainTrack_Header_T_TM_transitional kcg_copy_struct_172356

#define kcg_comp_Radio_TrainTrack_Message_T_TM_transitional kcg_comp_struct_168630

#define kcg_copy_Radio_TrainTrack_Message_T_TM_transitional kcg_copy_struct_168630

#define kcg_comp_Driver2MAR_T_TA_MA_Request kcg_comp_struct_168546

#define kcg_copy_Driver2MAR_T_TA_MA_Request kcg_copy_struct_168546

#define kcg_comp_Array06_TM kcg_comp_array_int_6

#define kcg_copy_Array06_TM kcg_copy_array_int_6

#define kcg_comp_P015_section_enum_T_TM kcg_comp_struct_169455

#define kcg_copy_P015_section_enum_T_TM kcg_copy_struct_169455

#define kcg_comp_Array15_TM kcg_comp_array_int_15

#define kcg_copy_Array15_TM kcg_copy_array_int_15

#define kcg_comp_Array05_TM kcg_comp_array_int_5

#define kcg_copy_Array05_TM kcg_copy_array_int_5

#define kcg_comp_MRSP_section_t_TrackAtlasTypes kcg_comp_struct_169478

#define kcg_copy_MRSP_section_t_TrackAtlasTypes kcg_copy_struct_169478

#define kcg_comp_P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg kcg_comp_struct_170518

#define kcg_copy_P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg kcg_copy_struct_170518

#define kcg_comp_P138_OBU_T_TM kcg_comp_struct_169584

#define kcg_copy_P138_OBU_T_TM kcg_copy_struct_169584

#define kcg_comp_P138_ReversingAreaInformation_T_Packet_Types_Pkg kcg_comp_struct_169584

#define kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg kcg_copy_struct_169584

#define kcg_comp_P139_OBU_T_TM kcg_comp_struct_170588

#define kcg_copy_P139_OBU_T_TM kcg_copy_struct_170588

#define kcg_comp_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg kcg_comp_struct_170588

#define kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg kcg_copy_struct_170588

#define kcg_comp_Array04_TM kcg_comp_array_int_4

#define kcg_copy_Array04_TM kcg_copy_array_int_4

#define kcg_comp_P135_OBU_T_TM kcg_comp_struct_170518

#define kcg_copy_P135_OBU_T_TM kcg_copy_struct_170518

#define kcg_comp_P012_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P012_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_P012_section_enum_T_TM kcg_comp_struct_169455

#define kcg_copy_P012_section_enum_T_TM kcg_copy_struct_169455

#define kcg_comp_Array07_TM kcg_comp_array_int_7

#define kcg_copy_Array07_TM kcg_copy_array_int_7

#define kcg_comp_GradientProfile_for_DMI_section_t_TrackAtlasTypes kcg_comp_struct_170025

#define kcg_copy_GradientProfile_for_DMI_section_t_TrackAtlasTypes kcg_copy_struct_170025

#define kcg_comp_P003V1_section_enum_T_TM_baseline2 kcg_comp_struct_170172

#define kcg_copy_P003V1_section_enum_T_TM_baseline2 kcg_copy_struct_170172

#define kcg_comp_P003V1_sectionlist_enum_T_TM_baseline2 kcg_comp_array_168647

#define kcg_copy_P003V1_sectionlist_enum_T_TM_baseline2 kcg_copy_array_168647

#define kcg_comp_P003V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_Array24_TM kcg_comp_array_int_24

#define kcg_copy_Array24_TM kcg_copy_array_int_24

#define kcg_comp_P003_OBU_nid_c_section_enum_T_TM kcg_comp_struct_170172

#define kcg_copy_P003_OBU_nid_c_section_enum_T_TM kcg_copy_struct_170172

#define kcg_comp_P003_OBU_nid_c_sectionlist_enum_T_TM kcg_comp_array_168647

#define kcg_copy_P003_OBU_nid_c_sectionlist_enum_T_TM kcg_copy_array_168647

#define kcg_comp_P003_OBU_l_section_enum_T_TM kcg_comp_struct_169021

#define kcg_copy_P003_OBU_l_section_enum_T_TM kcg_copy_struct_169021

#define kcg_comp_P003_OBU_l_sectionlist_enum_T_TM kcg_comp_array_169645

#define kcg_copy_P003_OBU_l_sectionlist_enum_T_TM kcg_copy_array_169645

#define kcg_comp_P003_OBU_k_m_section_enum_T_TM kcg_comp_struct_169865

#define kcg_copy_P003_OBU_k_m_section_enum_T_TM kcg_copy_struct_169865

#define kcg_comp_P003_OBU_k_m_sectionlist_enum_T_TM kcg_comp_array_170182

#define kcg_copy_P003_OBU_k_m_sectionlist_enum_T_TM kcg_copy_array_170182

#define kcg_comp_P003_OBU_k_section_enum_T_TM kcg_comp_struct_172264

#define kcg_copy_P003_OBU_k_section_enum_T_TM kcg_copy_struct_172264

#define kcg_comp_P003_OBU_k_sectionlist_enum_T_TM kcg_comp_array_169066

#define kcg_copy_P003_OBU_k_sectionlist_enum_T_TM kcg_copy_array_169066

#define kcg_comp_P003_OBU_n_section_enum_T_TM kcg_comp_struct_170221

#define kcg_copy_P003_OBU_n_section_enum_T_TM kcg_copy_struct_170221

#define kcg_comp_P003_OBU_n_sectionlist_enum_T_TM kcg_comp_array_170178

#define kcg_copy_P003_OBU_n_sectionlist_enum_T_TM kcg_copy_array_170178

#define kcg_comp_Driver2MAR_T_MA_Request kcg_comp_struct_168546

#define kcg_copy_Driver2MAR_T_MA_Request kcg_copy_struct_168546

#define kcg_comp_M_129_T_TM_radio_messages kcg_comp_struct_170132

#define kcg_copy_M_129_T_TM_radio_messages kcg_copy_struct_170132

#define kcg_comp_P011_voltage_section_array_T_TM_TrainToTrack kcg_comp_array_int_2

#define kcg_copy_P011_voltage_section_array_T_TM_TrainToTrack kcg_copy_array_int_2

#define kcg_comp_M_136_T_TM_radio_messages kcg_comp_struct_170132

#define kcg_copy_M_136_T_TM_radio_messages kcg_copy_struct_170132

#define kcg_comp_P044_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_25

#define kcg_copy_P044_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_25

#define kcg_comp_Array08_TM kcg_comp_array_int_8

#define kcg_copy_Array08_TM kcg_copy_array_int_8

#define kcg_comp_ParabolaCurveAccelerations_T_CalcBrakingCurves_types kcg_comp_array_real_114

#define kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types kcg_copy_array_real_114

#define kcg_comp_ParabolaCurveSpeeds_T_CalcBrakingCurves_types kcg_comp_array_real_114

#define kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types kcg_copy_array_real_114

#define kcg_comp_ParabolaCurveDistances_T_CalcBrakingCurves_types kcg_comp_array_real_114

#define kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types kcg_copy_array_real_114

#define kcg_comp_ASafeRow_T_CalcBrakingCurves_types kcg_comp_array_real_100

#define kcg_copy_ASafeRow_T_CalcBrakingCurves_types kcg_copy_array_real_100

#define kcg_comp_ASafeDistanceDefinition_T_CalcBrakingCurves_types kcg_comp_array_real_100

#define kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types kcg_copy_array_real_100

#define kcg_comp_v_BrakeSteps_t_SDMConversionModelPkg kcg_comp_array_int_6

#define kcg_copy_v_BrakeSteps_t_SDMConversionModelPkg kcg_copy_array_int_6

#define kcg_comp_a_BrakeSteps_t_SDMConversionModelPkg kcg_comp_array_int_6

#define kcg_copy_a_BrakeSteps_t_SDMConversionModelPkg kcg_copy_array_int_6

#define kcg_comp_v_MergedSteps_t_SDMConversionModelPkg kcg_comp_array_int_13

#define kcg_copy_v_MergedSteps_t_SDMConversionModelPkg kcg_copy_array_int_13

#define kcg_comp_a_MergedSteps_t_SDMConversionModelPkg kcg_comp_array_int_13

#define kcg_copy_a_MergedSteps_t_SDMConversionModelPkg kcg_copy_array_int_13

#define kcg_comp_v_KvSteps_t_SDMConversionModelPkg kcg_comp_array_int_7

#define kcg_copy_v_KvSteps_t_SDMConversionModelPkg kcg_copy_array_int_7

#define kcg_comp_m_KvSteps_t_SDMConversionModelPkg kcg_comp_array_int_7

#define kcg_copy_m_KvSteps_t_SDMConversionModelPkg kcg_copy_array_int_7

#define kcg_comp_LKrIntLookUp_t_SDMConversionModelPkg kcg_comp_array_int_32

#define kcg_copy_LKrIntLookUp_t_SDMConversionModelPkg kcg_copy_array_int_32

#define kcg_comp_coeff_BrakeBasic_t_SDMConversionModelPkg kcg_comp_array_real_3

#define kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg kcg_copy_array_real_3

#define kcg_comp_TractionDeltaTriple_TargetLimits_Pkg kcg_comp_array_real_3

#define kcg_copy_TractionDeltaTriple_TargetLimits_Pkg kcg_copy_array_real_3

#endif /* _KCG_TYPES_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** kcg_types.h
** Generation date: 2015-11-20T14:27:48
*************************************************************$ */


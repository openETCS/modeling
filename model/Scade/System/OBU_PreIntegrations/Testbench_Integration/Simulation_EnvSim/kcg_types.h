/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/Simulation_EnvSim\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:46:54
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

/* Level_And_Mode_Types_Pkg::T_Mode */
typedef enum {
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
typedef enum {
  Profile_OS_Level_And_Mode_Types_Pkg,
  Profile_LS_Level_And_Mode_Types_Pkg,
  Profile_SH_Level_And_Mode_Types_Pkg,
  No_Profile_Level_And_Mode_Types_Pkg
} T_MA_Level_And_Mode_Types_Pkg;
/* DMI_Types_Pkg::DMI_Q_TEXT */
typedef enum {
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
/* Q_TEXTCLASS */
typedef enum {
  Q_TEXTCLASS_Auxiliary_Information = 0,
  Q_TEXTCLASS_Important_Information = 1
} Q_TEXTCLASS;
/* Q_TEXTCONFIRM */
typedef enum {
  Q_TEXTCONFIRM_No_confirmation_required = 0,
  Q_TEXTCONFIRM_Confirmation_required = 1,
  Q_TEXTCONFIRM_Confirmation_required_command_application_of_the_service_brake_when_display_end_condit = 2,
  Q_TEXTCONFIRM_Confirmation_required_command_application_of_the_emergency_brake_when_display_end_cond = 3
} Q_TEXTCONFIRM;
/* M_TRACKCOND */
typedef enum {
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
typedef enum {
  show_icon_in_area_DMI_Types_Pkg,
  clear_area_DMI_Types_Pkg,
  show_icon_flashing_in_area_DMI_Types_Pkg,
  show_icon_with_yellow_flashing_frame_in_area_DMI_Types_Pkg
} Icon_control_flag_T_DMI_Types_Pkg;
/* DMI_Types_Pkg::Icon_group_T */
typedef enum {
  level_symbol_DMI_Types_Pkg,
  mode_symbols_DMI_Types_Pkg,
  status_symbols_DMI_Types_Pkg,
  order_an_announcements_symbols_DMI_Types_Pkg,
  planning_information_symbols_DMI_Types_Pkg,
  navigation_symbols_DMI_Types_Pkg,
  settings_symbols_DMI_Types_Pkg
} Icon_group_T_DMI_Types_Pkg;
/* DMI_Types_Pkg::Area_group_T */
typedef enum {
  A_DMI_Types_Pkg,
  B_DMI_Types_Pkg,
  C_DMI_Types_Pkg,
  D_DMI_Types_Pkg,
  E_DMI_Types_Pkg,
  F_DMI_Types_Pkg,
  G_DMI_Types_Pkg,
  H_DMI_Types_Pkg
} Area_group_T_DMI_Types_Pkg;
/* DMI_Types_Pkg::DMI_List_Entry_Request_T */
typedef enum {
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
/* DMI_Types_Pkg::M_SupervisionDisplay_T */
typedef enum {
  supDis_normal_DMI_Types_Pkg,
  supDis_indication_DMI_Types_Pkg,
  supDis_overspeed_DMI_Types_Pkg,
  supDis_warning_DMI_Types_Pkg,
  supDis_intervention_DMI_Types_Pkg
} M_SupervisionDisplay_T_DMI_Types_Pkg;
/* DMI_Types_Pkg::M_SUPERVISION_STATUS */
typedef enum {
  CSM_DMI_Types_Pkg,
  PIM_DMI_Types_Pkg,
  TSM_DMI_Types_Pkg,
  RSM_DMI_Types_Pkg,
  supervision_status_unknown_DMI_Types_Pkg
} M_SUPERVISION_STATUS_DMI_Types_Pkg;
/* SDM_Types_Pkg::SupervisionStatus_T */
typedef enum {
  Normal_Supervision_SDM_Types_Pkg,
  Indication_Supervision_SDM_Types_Pkg,
  Overspeed_Supervision_SDM_Types_Pkg,
  Warning_Supervision_SDM_Types_Pkg,
  Intervention_Supervision_SDM_Types_Pkg,
  Undefined_Supervision_SDM_Types_Pkg
} SupervisionStatus_T_SDM_Types_Pkg;
/* SDM_Types_Pkg::SDM_Types_T */
typedef enum {
  CSM_SDM_Types_Pkg,
  TSM_SDM_Types_Pkg,
  RSM_SDM_Types_Pkg,
  No_SDM_Type_SDM_Types_Pkg
} SDM_Types_T_SDM_Types_Pkg;
/* TargetManagement_types::TargetType_T */
typedef enum {
  EoA_TargetManagement_types,
  SvL_TargetManagement_types,
  MRSP_TargetManagement_types,
  invalid_TargetManagement_types,
  LoA_TargetManagement_types
} TargetType_T_TargetManagement_types;
/* DMI_Types_Pkg::DMI_StatusSet_T */
typedef enum {
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
/* M_ADHESION */
typedef enum {
  M_ADHESION_Slippery_rail = 0,
  M_ADHESION_Non_slippery_rail = 1
} M_ADHESION;
/* DMI_Types_Pkg::DMI_DMI_Identifier_T */
typedef enum {
  DMI_1_DMI_Types_Pkg,
  DMI_2_DMI_Types_Pkg
} DMI_DMI_Identifier_T_DMI_Types_Pkg;
/* DMI_Types_Pkg::DMI_Cabin_Identifier_T */
typedef enum {
  cabin_A_DMI_Types_Pkg,
  cabin_B_DMI_Types_Pkg
} DMI_Cabin_Identifier_T_DMI_Types_Pkg;
/* Q_TEXTREPORT */
typedef enum {
  Q_TEXTREPORT_No_driver_acknowledgement_report_required = 0,
  Q_TEXTREPORT_Driver_acknowledgement_report_required = 1
} Q_TEXTREPORT;
/* DMI_Types_Pkg::DMI_context_TXT_MSG_T */
typedef enum {
  con_undefined_DMI_Types_Pkg,
  con_levelMgmt_DMI_Types_Pkg,
  con_modeChange_DMI_Types_Pkg,
  con_trackRequest_DMI_Types_Pkg
} DMI_context_TXT_MSG_T_DMI_Types_Pkg;
/* Level_And_Mode_Types_Pkg::T_TransitionType */
typedef enum {
  M_TransitionType_Conditional_Level_And_Mode_Types_Pkg,
  M_TransitionType_DriverInit_Level_And_Mode_Types_Pkg,
  M_TransitionType_Normal_Level_And_Mode_Types_Pkg
} T_TransitionType_Level_And_Mode_Types_Pkg;
/* DMI_Types_Pkg::DMI_Request_T */
typedef enum {
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
/* DataDictionary_Pkg::LevelDecisionTableActionKind */
typedef enum {
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
typedef enum {
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
/* TIU_Types_Pkg::cab_ID_T */
typedef enum {
  CabUndefined_TIU_Types_Pkg,
  CabA_TIU_Types_Pkg,
  CabB_TIU_Types_Pkg
} cab_ID_T_TIU_Types_Pkg;
/* TA_MA::ActionType */
typedef enum { replace_TA_MA, hold_TA_MA, delete_TA_MA } ActionType_TA_MA;
/* M_LEVELTR */
typedef enum {
  M_LEVELTR_Level_0 = 0,
  M_LEVELTR_Level_NTC_specified_by_NID_NTC = 1,
  M_LEVELTR_Level_1 = 2,
  M_LEVELTR_Level_2 = 3,
  M_LEVELTR_Level_3 = 4
} M_LEVELTR;
/* Q_DIFF */
typedef enum {
  Q_DIFF_Cant_Deficiency_specific_category = 0,
  Q_DIFF_Other_specific_category_replaces_the_Cant_Deficiency_SSP = 1,
  Q_DIFF_Other_specific_category_does_not_replace_the_Cant_Deficiency_SSP = 2
} Q_DIFF;
/* NC_CDDIFF */
typedef enum {
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
typedef enum {
  Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element = 0,
  Q_FRONT_No_train_length_delay_on_validity_end_point_of_profile_element = 1
} Q_FRONT;
/* Q_SRSTOP */
typedef enum {
  Q_SRSTOP_Stop_if_in_SR_mode = 0,
  Q_SRSTOP_Go_if_in_SR_mode = 1
} Q_SRSTOP;
/* M_MAMODE */
typedef enum {
  M_MAMODE_On_Sight = 0,
  M_MAMODE_Shunting = 1,
  M_MAMODE_Limited_Supervision = 2
} M_MAMODE;
/* Q_MAMODE */
typedef enum {
  Q_MAMODE_as_the_EOA = 0,
  Q_MAMODE_as_both_the_EOA_and_SvL = 1
} Q_MAMODE;
/* Q_GDIR */
typedef enum { Q_GDIR_downhill = 0, Q_GDIR_uphill = 1 } Q_GDIR;
/* Q_OVERLAP */
typedef enum {
  Q_OVERLAP_No_overlap_information = 0,
  Q_OVERLAP_Overlap_information_to_follow = 1
} Q_OVERLAP;
/* Q_DANGERPOINT */
typedef enum {
  Q_DANGERPOINT_No_danger_point_information = 0,
  Q_DANGERPOINT_Danger_point_information_to_follow = 1
} Q_DANGERPOINT;
/* Q_ENDTIMER */
typedef enum {
  Q_ENDTIMER_No_End_section_timer_information = 0,
  Q_ENDTIMER_End_section_timer_information_to_follow = 1
} Q_ENDTIMER;
/* Q_SECTIONTIMER */
typedef enum {
  Q_SECTIONTIMER_No_Section_Timer_information = 0,
  Q_SECTIONTIMER_Section_Timer_information_to_follow = 1
} Q_SECTIONTIMER;
/* TrackAtlasTypes::MA_Level_t */
typedef enum {
  MA_L1_TrackAtlasTypes,
  MA_L23_TrackAtlasTypes
} MA_Level_t_TrackAtlasTypes;
/* Q_NVEMRRLS */
typedef enum {
  Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill = 0,
  Q_NVEMRRLS_Revoke_emergency_brake_command_when_permitted_speed_supervision_limit_is_no_longer_exceed = 1
} Q_NVEMRRLS;
/* Q_NVSBTSMPERM */
typedef enum { Q_NVSBTSMPERM_No = 0, Q_NVSBTSMPERM_Yes = 1 } Q_NVSBTSMPERM;
/* M_NVCONTACT */
typedef enum {
  M_NVCONTACT_Train_trip = 0,
  M_NVCONTACT_Apply_service_brake = 1,
  M_NVCONTACT_No_Reaction = 2
} M_NVCONTACT;
/* M_NVDERUN */
typedef enum { M_NVDERUN_No = 0, M_NVDERUN_Yes = 1 } M_NVDERUN;
/* Q_NVDRIVER_ADHES */
typedef enum {
  Q_NVDRIVER_ADHES_Not_allowed = 0,
  Q_NVDRIVER_ADHES_Allowed = 1
} Q_NVDRIVER_ADHES;
/* Q_NVGUIPERM */
typedef enum { Q_NVGUIPERM_No = 0, Q_NVGUIPERM_Yes = 1 } Q_NVGUIPERM;
/* Q_NVSBFBPERM */
typedef enum { Q_NVSBFBPERM_No = 0, Q_NVSBFBPERM_Yes = 1 } Q_NVSBFBPERM;
/* Q_NVINHSMICPERM */
typedef enum {
  Q_NVINHSMICPERM_No = 0,
  Q_NVINHSMICPERM_Yes = 1
} Q_NVINHSMICPERM;
/* M_NVEBCL */
typedef enum {
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
typedef enum {
  Q_NVKINT_No_integrated_correction_factors_follow = 0,
  Q_NVKINT_Integrated_correction_factors_follow = 1
} Q_NVKINT;
/* Q_NVKVINTSET */
typedef enum {
  Q_NVKVINTSET_Freight_trains = 0,
  Q_NVKVINTSET_Conventional_passenger_trains = 1
} Q_NVKVINTSET;
/* L_NVKRINT */
typedef enum {
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
typedef enum {
  Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows = 0,
  Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows = 1
} Q_NEWCOUNTRY;
/* Q_LINKORIENTATION */
typedef enum {
  Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction = 0,
  Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction = 1
} Q_LINKORIENTATION;
/* Q_LINKREACTION */
typedef enum {
  Q_LINKREACTION_Train_trip = 0,
  Q_LINKREACTION_Apply_service_brake = 1,
  Q_LINKREACTION_No_Reaction = 2
} Q_LINKREACTION;
/* Handover_Pkg::abilityToHandleCommunicationSessions */
typedef enum {
  isAbleToManageOneSession_Handover_Pkg,
  isAbleToManageTwoSessions_Handover_Pkg
} abilityToHandleCommunicationSessions_Handover_Pkg;
/* RCM_Types_Pkg::mobileHealthStatus_T */
typedef enum {
  mhs_nok_RCM_Types_Pkg,
  mhs_ok_RCM_Types_Pkg
} mobileHealthStatus_T_RCM_Types_Pkg;
/* RCM_Types_Pkg::mobileRegistrationStatus_T */
typedef enum {
  mrs_unregistered_RCM_Types_Pkg,
  mrs_registering_RCM_Types_Pkg,
  mrs_registered_RCM_Types_Pkg
} mobileRegistrationStatus_T_RCM_Types_Pkg;
/* RCM_Types_Pkg::mobileRegistrationAction_T */
typedef enum {
  mra_nop_RCM_Types_Pkg,
  mra_register_RCM_Types_Pkg,
  mra_unregister_RCM_Types_Pkg
} mobileRegistrationAction_T_RCM_Types_Pkg;
/* RCM_Session_Types_Pkg::sessionPhase_T */
typedef enum {
  sp_terminated_RCM_Session_Types_Pkg,
  sp_establishing_RCM_Session_Types_Pkg,
  sp_maintaining_RCM_Session_Types_Pkg,
  sp_terminating_RCM_Session_Types_Pkg
} sessionPhase_T_RCM_Session_Types_Pkg;
/* RCM_Types_Pkg::mobileConnectionStatus_T */
typedef enum {
  mcs_disconnected_RCM_Types_Pkg,
  mcs_connecting_RCM_Types_Pkg,
  mcs_connected_RCM_Types_Pkg
} mobileConnectionStatus_T_RCM_Types_Pkg;
/* RCM_Types_Pkg::mobileConnetionAction_T */
typedef enum {
  mca_nop_RCM_Types_Pkg,
  mca_connect_RCM_Types_Pkg,
  mca_disconnect_RCM_Types_Pkg,
  mca_expectRadioHole_RCM_Types_Pkg,
  mca_unexpectRadioHole_RCM_Types_Pkg
} mobileConnetionAction_T_RCM_Types_Pkg;
/* RCM_Session_Types_Pkg::safeRadioConnnectionIndicator_T */
typedef enum {
  srci_noConnection_RCM_Session_Types_Pkg,
  srci_connectionLost_setupFailed_RCM_Session_Types_Pkg,
  srci_connectionUp_RCM_Session_Types_Pkg
} safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg;
/* Q_RBC */
typedef enum {
  Q_RBC_Terminate_communication_session = 0,
  Q_RBC_Establish_communication_session = 1
} Q_RBC;
/* Q_SLEEPSESSION */
typedef enum {
  Q_SLEEPSESSION_Ignore_session_establishment_order = 0,
  Q_SLEEPSESSION_Execute_session_establishment_order = 1
} Q_SLEEPSESSION;
/* API_RadioCommunication_Pkg::connectionStatusRadioUnit_T */
typedef enum {
  conn_unknown_API_RadioCommunication_Pkg,
  conn_no_connection_API_RadioCommunication_Pkg,
  conn_ConnectionUp_API_RadioCommunication_Pkg,
  conn_SetupFailed_API_RadioCommunication_Pkg
} connectionStatusRadioUnit_T_API_RadioCommunication_Pkg;
/* TIU_Types_Pkg::M_Isolation_status_T */
typedef enum {
  on_board_equipment_is_isolated_TIU_Types_Pkg,
  on_board_equipement_is_not_isolated_TIU_Types_Pkg,
  isolation_status_not_defined_TIU_Types_Pkg
} M_Isolation_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_brake_inhibit_command_T */
typedef enum {
  brake_inhibit_not_defined_TIU_Types_Pkg,
  inhibit_brake_TIU_Types_Pkg,
  do_not_inhibit_brake_TIU_Types_Pkg
} M_brake_inhibit_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_eddy_current_brake_inhibition_T */
typedef enum {
  eddy_current_brake_inhibition_not_defined_TIU_Types_Pkg,
  inhibit_for_service_brake_TIU_Types_Pkg,
  inhibit_for_emergency_brake_TIU_Types_Pkg,
  inhibit_for_both_service_emergency_brake_TIU_Types_Pkg,
  do_not_inhibit_for_service_brake_TIU_Types_Pkg,
  do_not_inhibit_for_emergency_brake_TIU_Types_Pkg,
  do_not_inhibit_for_both_service_emergency_brake_TIU_Types_Pkg
} M_eddy_current_brake_inhibition_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_pantograph_command_T */
typedef enum {
  pantograph_command_not_defined_TIU_Types_Pkg,
  lower_pantograph_TIU_Types_Pkg,
  raise_pantograph_TIU_Types_Pkg
} M_pantograph_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_airtightness_command_T */
typedef enum {
  airtightness_command_not_defined_TIU_Types_Pkg,
  tunnel_condition_active_TIU_Types_Pkg,
  tunnel_condition_not_active_TIU_Types_Pkg
} M_airtightness_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_mainpowerswitch_command_T */
typedef enum {
  open_main_power_swicth_TIU_Types_Pkg,
  close_main_power_switch_TIU_Types_Pkg
} M_mainpowerswitch_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_voltage_types_T */
typedef enum {
  line_not_fitted_with_any_traction_system_TIU_Types_Pkg,
  ac_25kV_50Hz_TIU_Types_Pkg,
  ac_15kV_16_7Hz_TIU_Types_Pkg,
  dc_3kV_TIU_Types_Pkg,
  dc_1_5kV_TIU_Types_Pkg,
  dc_600_750kV_TIU_Types_Pkg
} M_voltage_types_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_traction_cutoff_command_T */
typedef enum {
  traction_cutoff_command_not_defined_TIU_Types_Pkg,
  apply_traction_cutoff_TIU_Types_Pkg,
  release_traction_cutoff_TIU_Types_Pkg
} M_traction_cutoff_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_cab_signal_status_T */
typedef enum {
  cab_signal_status_not_defined_TIU_Types_Pkg,
  both_desks_are_closed_TIU_Types_Pkg,
  desk_A_is_open_TIU_Types_Pkg,
  desk_B_is_open_TIU_Types_Pkg,
  both_desks_are_open_TIU_Types_Pkg
} M_cab_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_sleeping_signal_status_T */
typedef enum {
  signal_active_TIU_Types_Pkg,
  signal_not_active_TIU_Types_Pkg
} M_sleeping_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_passiveshunting_signal_status_T */
typedef enum {
  passive_shunting_permitted_TIU_Types_Pkg,
  passive_shunting_not_permitted_TIU_Types_Pkg
} M_passiveshunting_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_nonleading_signal_status_T */
typedef enum {
  non_leading_signall_status_not_defined_TIU_Types_Pkg,
  non_leading_permitted_TIU_Types_Pkg,
  non_leading_not_permitted_TIU_Types_Pkg
} M_nonleading_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_directioncontroller_signal_status_T */
typedef enum {
  direction_controller_in_neutral_TIU_Types_Pkg,
  direction_controller_in_forward_TIU_Types_Pkg,
  direction_controller_in_backward_TIU_Types_Pkg
} M_directioncontroller_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_trainintegrity_signal_status_T */
typedef enum {
  train_is_not_integer_TIU_Types_Pkg,
  train_is_integer_TIU_Types_Pkg
} M_trainintegrity_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_traction_signal_status_T */
typedef enum {
  traction_on_TIU_Types_Pkg,
  traction_off_TIU_Types_Pkg
} M_traction_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_train_data_entry_type_T */
typedef enum {
  fixed_entry_type_TIU_Types_Pkg,
  flexible_entry_type_TIU_Types_Pkg,
  switchable_entry_type_TIU_Types_Pkg,
  no_entry_type_TIU_Types_Pkg
} M_train_data_entry_type_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_brake_status_T */
typedef enum {
  brake_status_not_defined_TIU_Types_Pkg,
  is_active_TIU_Types_Pkg,
  is_not_active_TIU_Types_Pkg
} M_brake_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_trackcond_T */
typedef enum {
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
/* TIU_Types_Pkg::M_brake_signal_command_T */
typedef enum {
  brake_signal_command_not_defined_TIU_Types_Pkg,
  apply_brake_TIU_Types_Pkg,
  release_brake_TIU_Types_Pkg
} M_brake_signal_command_T_TIU_Types_Pkg;
/* API_RadioCommunication_Pkg::cmdRadioUnit_T */
typedef enum {
  cmdr_not_relevant_API_RadioCommunication_Pkg,
  cmdr_connection_request_API_RadioCommunication_Pkg,
  cmdr_disconnection_request_API_RadioCommunication_Pkg,
  cmdr_reset_connection_API_RadioCommunication_Pkg,
  cmdr_networkUnregister_API_RadioCommunication_Pkg,
  cmdr_networkRegister_API_RadioCommunication_Pkg
} cmdRadioUnit_T_API_RadioCommunication_Pkg;
/* MoRC_Pck::mobileHWConnectionStatus_Type */
typedef enum {
  mhwc_notRegistered_MoRC_Pck,
  mhwc_registered_MoRC_Pck,
  mhwc_connecting_MoRC_Pck,
  mhwc_connected_MoRC_Pck,
  mhwc_registering_MoRC_Pck
} mobileHWConnectionStatus_Type_MoRC_Pck;
/* Common_Types_Pkg::MsgSource_T */
typedef enum {
  msrc_undefined_Common_Types_Pkg,
  msrc_Euroradio_Common_Types_Pkg,
  msrc_Eurobalise_Common_Types_Pkg,
  msrc_RadioInfillUnit_Common_Types_Pkg,
  msrc_OBU_Common_Types_Pkg
} MsgSource_T_Common_Types_Pkg;
/* Obu_BasicTypes_Pkg::odoMotionState_T */
typedef enum {
  noMotion_Obu_BasicTypes_Pkg,
  Motion_Obu_BasicTypes_Pkg
} odoMotionState_T_Obu_BasicTypes_Pkg;
/* Obu_BasicTypes_Pkg::odoMotionDirection_T */
typedef enum {
  unknownDirection_Obu_BasicTypes_Pkg,
  cabAFirst_Obu_BasicTypes_Pkg,
  cabBFirst_Obu_BasicTypes_Pkg
} odoMotionDirection_T_Obu_BasicTypes_Pkg;
/* M_ERROR */
typedef enum {
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
typedef enum {
  Q_MARQSTREASON_Start_selected_by_driver = 1,
  Q_MARQSTREASON_Time_before_reaching_preindication_location_for_the_EOA_or_LOA_reached = 2,
  Q_MARQSTREASON_Time_before_a_section_timer_or_LOA_speed_timer_expires_reached = 4,
  Q_MARQSTREASON_Track_description_deleted = 8,
  Q_MARQSTREASON_TAF_up_to_level_2_or_3_transition_location = 16
} Q_MARQSTREASON;
/* Q_EMERGENCYSTOP */
typedef enum {
  Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA = 0,
  Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_no_update_of_EOA = 1,
  Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted = 2,
  Q_EMERGENCYSTOP_Emergency_stop = 3
} Q_EMERGENCYSTOP;
/* M_AXLELOADCAT */
typedef enum {
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
/* NC_TRAIN */
typedef enum {
  NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category = 0,
  NC_TRAIN_Freight_train_braked_in_P_position = 1,
  NC_TRAIN_Freight_train_braked_in_G_position = 2,
  NC_TRAIN_Passenger_train = 4
} NC_TRAIN;
/* M_AIRTIGHT */
typedef enum { M_AIRTIGHT_Not_fitted = 0, M_AIRTIGHT_Fitted = 1 } M_AIRTIGHT;
/* M_LOADINGGAUGE */
typedef enum {
  M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles = 0,
  M_LOADINGGAUGE_G1 = 1,
  M_LOADINGGAUGE_GA = 2,
  M_LOADINGGAUGE_GB = 3,
  M_LOADINGGAUGE_GC = 4
} M_LOADINGGAUGE;
/* NC_CDTRAIN */
typedef enum {
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
typedef enum {
  M_VOLTAGE_Line_not_fitted_with_any_traction_system = 0,
  M_VOLTAGE_AC_25_kV_50_Hz = 1,
  M_VOLTAGE_AC_15_kV_16_7_Hz = 2,
  M_VOLTAGE_DC_3_kV = 3,
  M_VOLTAGE_DC_1_5_kV = 4,
  M_VOLTAGE_DC_600_or_750_V = 5
} M_VOLTAGE;
/* M_MODE */
typedef enum {
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
/* M_LEVEL */
typedef enum {
  M_LEVEL_Level_0 = 0,
  M_LEVEL_Level_NTC_specified_by_NID_NTC = 1,
  M_LEVEL_Level_1 = 2,
  M_LEVEL_Level_2 = 3,
  M_LEVEL_Level_3 = 4
} M_LEVEL;
/* Q_DIRLRBG */
typedef enum {
  Q_DIRLRBG_Reverse = 0,
  Q_DIRLRBG_Nominal = 1,
  Q_DIRLRBG_Unknown = 2
} Q_DIRLRBG;
/* Q_DIRTRAIN */
typedef enum {
  Q_DIRTRAIN_Reverse = 0,
  Q_DIRTRAIN_Nominal = 1,
  Q_DIRTRAIN_Unknown = 2
} Q_DIRTRAIN;
/* Q_DLRBG */
typedef enum {
  Q_DLRBG_Reverse = 0,
  Q_DLRBG_Nominal = 1,
  Q_DLRBG_Unknown = 2
} Q_DLRBG;
/* Q_LENGTH */
typedef enum {
  Q_LENGTH_No_train_integrity_information_available = 0,
  Q_LENGTH_Train_integrity_confirmed_by_integrity_monitoring_device = 1,
  Q_LENGTH_Train_integrity_confirmed_by_driver = 2,
  Q_LENGTH_Train_integrity_lost = 3
} Q_LENGTH;
/* M_LOC */
typedef enum {
  M_LOC_Now = 0,
  M_LOC_Every_LRBG_compliant_balise_group = 1,
  M_LOC_Do_not_send_position_report_on_passage_of_LRBG_compliant_balise_group = 2
} M_LOC;
/* Q_LGTLOC */
typedef enum {
  Q_LGTLOC_Min_safe_rear_end = 0,
  Q_LGTLOC_Max_safe_front_end = 1
} Q_LGTLOC;
/* RBC_Diagnostic_Pkg::DiagMsgType_E */
typedef enum {
  DIAG_MSG_TYPE_Empty_RBC_Diagnostic_Pkg,
  DIAG_MSG_TYPE_information_RBC_Diagnostic_Pkg,
  DIAG_MSG_TYPE_warning_RBC_Diagnostic_Pkg,
  DIAG_MSG_TYPE_error_RBC_Diagnostic_Pkg
} DiagMsgType_E_RBC_Diagnostic_Pkg;
/* RBC_Diagnostic_Pkg::DiagMsgSrc_E */
typedef enum {
  DIAG_MSG_SRC_Empty_RBC_Diagnostic_Pkg,
  DIAG_MSG_SRC_Process_Unconditional_Emergency_Message_RBC_Diagnostic_Pkg
} DiagMsgSrc_E_RBC_Diagnostic_Pkg;
/* RBC_Diagnostic_Pkg::DiagMsgText_E */
typedef enum {
  DIAG_MSG_Empty_RBC_Diagnostic_Pkg,
  DIAG_MSG_Failure_during_session_establishment_RBC_Diagnostic_Pkg
} DiagMsgText_E_RBC_Diagnostic_Pkg;
/* Q_UPDOWN */
typedef enum {
  Q_UPDOWN_Down_link_telegram = 0,
  Q_UPDOWN_Up_link_telegram = 1
} Q_UPDOWN;
/* Q_MEDIA */
typedef enum { Q_MEDIA_Balise = 0, Q_MEDIA_Loop = 1 } Q_MEDIA;
/* N_PIG */
typedef enum {
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
typedef enum {
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
typedef enum {
  M_DUP_No_duplicates = 0,
  M_DUP_This_balise_is_a_duplicate_of_the_next_balise = 1,
  M_DUP_This_balise_is_a_duplicate_of_the_previous_balise = 2
} M_DUP;
/* Q_LINK */
typedef enum { Q_LINK_Unlinked = 0, Q_LINK_Linked = 1 } Q_LINK;
/* US_Integration_November::TrackType */
typedef enum {
  US_01_to_12_US_Integration_November,
  US_13_to_16_US_Integration_November,
  Sheet14_only_US_Integration_November
} TrackType_US_Integration_November;
/* Q_ORIENTATION */
typedef enum {
  Q_ORIENTATION_The_balise_group_has_been_passed_by_the_train_in_reverse_direction = 0,
  Q_ORIENTATION_The_balise_group_has_been_passed_by_the_train_in_nominal_direction = 1
} Q_ORIENTATION;
/* M_ACK */
typedef enum {
  M_ACK_No_acknowledgement_required = 0,
  M_ACK_Acknowledgement_required = 1
} M_ACK;
/* Q_SCALE */
typedef enum {
  Q_SCALE_10_cm_scale = 0,
  Q_SCALE_1_m_scale = 1,
  Q_SCALE_10_m_scale = 2
} Q_SCALE;
/* M_VERSION */
typedef enum {
  M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS = 0,
  M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0 = 16,
  M_VERSION_Version_1_1_introduced_in_SRS_3_3_0 = 17,
  M_VERSION_Version_2_0_introduced_in_SRS_3_3_0 = 32
} M_VERSION;
/* TM::OrBG */
typedef enum { Amsterdam_TM, Utrecht_TM } OrBG_TM;
/* TM::OrLine */
typedef enum { N_TM, Z_TM } OrLine_TM;
/* Q_DIR */
typedef enum {
  Q_DIR_Reverse = 0,
  Q_DIR_Nominal = 1,
  Q_DIR_Both_directions = 2
} Q_DIR;
/* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
typedef enum {
  _47_SSM_TR_no_trans_SM1,
  _46_SSM_TR_State1_1_SM1,
  SSM_TR_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_1_SM1,
  SSM_TR_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_1_SM1
} _48_SSM_TR_SM1;
/* SoMProcedure_Pkg::SoM_SR_FS_OS_LS_SH_SN_UN::SM1 */
typedef enum {
  _44_SSM_st_State1_SM1,
  SSM_st_Waiting_for_MA_for_FS_or_SR_or_OS_LS_SH_SM1,
  SSM_st_Wait_for_Acknowledgment_for_mode_change_SB_to_FS_from_mode_and_Level_Management_SM1,
  SSM_st_FS_Mode_SM1
} _45_SSM_ST_SM1;
/* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
typedef enum {
  SSM_TR_no_trans_Level_NTC_and_Mode_SN,
  SSM_TR_State1_1_Level_NTC_and_Mode_SN,
  SSM_TR_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_1_Level_NTC_and_Mode_SN
} SSM_TR_Level_NTC_and_Mode_SN;
/* SoMProcedure_Pkg::SoM_NTC_SN::Level_NTC_and_Mode_SN */
typedef enum {
  SSM_st_State1_Level_NTC_and_Mode_SN,
  SSM_st_Waiting_for_Ack_of_proposed_Mode_SN_from_Driver_Level_NTC_and_Mode_SN,
  SSM_st_Level_NTC_andMode_SN_Level_NTC_and_Mode_SN
} SSM_ST_Level_NTC_and_Mode_SN;
/* ManageProcedure_Pkg::Master_Procedure::SM1 */
typedef enum {
  _42_SSM_TR_no_trans_SM1,
  SSM_TR_NP_1_SM1,
  SSM_TR_Awakness_of_Train_1_SM1,
  SSM_TR_Awakness_of_Train_2_SM1,
  SSM_TR_Awakness_of_Train_3_SM1
} _43_SSM_TR_SM1;
/* ManageProcedure_Pkg::Master_Procedure::SM1 */
typedef enum {
  SSM_st_NP_SM1,
  SSM_st_Awakness_of_Train_SM1,
  SSM_st_SoM_L2_3_FS_SR_OS_LS_SH_SM1,
  SSM_st_SoM_NTC_SN_SM1
} _41_SSM_ST_SM1;
/* ManageProcedure_Pkg::Master_Procedure::SM1::Awakness_of_Train::SM3 */
typedef enum {
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
typedef enum {
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
typedef enum {
  SSM_TR_no_trans_modeInterplay,
  SSM_TR_CSM_1_modeInterplay,
  SSM_TR_CSM_2_modeInterplay,
  SSM_TR_TSM_1_modeInterplay,
  SSM_TR_TSM_2_modeInterplay,
  SSM_TR_RSM_1_modeInterplay,
  SSM_TR_RSM_2_modeInterplay
} SSM_TR_modeInterplay;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay */
typedef enum {
  SSM_st_CSM_modeInterplay,
  SSM_st_TSM_modeInterplay,
  SSM_st_RSM_modeInterplay
} SSM_ST_modeInterplay;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::CSM::CSM */
typedef enum {
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
typedef enum {
  SSM_st_Init_modeInterplay_CSM_CSM,
  SSM_st_NormalStatus_modeInterplay_CSM_CSM,
  SSM_st_OverspeedStatus_modeInterplay_CSM_CSM,
  SSM_st_WarningStatus_modeInterplay_CSM_CSM,
  SSM_st_InterventionStatus_modeInterplay_CSM_CSM
} SSM_ST_CSM_modeInterplay_CSM;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::TSM::SM4 */
typedef enum {
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
typedef enum {
  SSM_st_init_modeInterplay_TSM_SM4,
  SSM_st_Normal_modeInterplay_TSM_SM4,
  SSM_st_Indication_modeInterplay_TSM_SM4,
  SSM_st_Overspeed_modeInterplay_TSM_SM4,
  SSM_st_Warning_modeInterplay_TSM_SM4,
  SSM_st_Intervention_modeInterplay_TSM_SM4
} SSM_ST_SM4_modeInterplay_TSM;
/* SDM_Commands_Pkg::CmdTrainSupervisionStatus::modeInterplay::RSM::RSM */
typedef enum {
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
typedef enum {
  SSM_st_Init_modeInterplay_RSM_RSM,
  SSM_st_IndicationStatus_modeInterplay_RSM_RSM,
  SSM_st_InterventionStatus_modeInterplay_RSM_RSM
} SSM_ST_RSM_modeInterplay_RSM;
/* InformationFilter_Pkg::InformationFilter::SM1 */
typedef enum {
  _39_SSM_TR_no_trans_SM1,
  SSM_TR_State1_1_SM1,
  _38_SSM_TR_State2_1_SM1,
  SSM_TR_State3_1_SM1
} _40_SSM_TR_SM1;
/* InformationFilter_Pkg::InformationFilter::SM1 */
typedef enum {
  SSM_st_State1_SM1,
  _36_SSM_st_State2_SM1,
  SSM_st_State3_SM1
} _37_SSM_ST_SM1;
/* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
typedef enum {
  SSM_TR_no_trans_SM_SH_Initiated_By_Driver,
  SSM_TR_SH_procedure_possible_1_1_SM_SH_Initiated_By_Driver,
  SSM_TR_SH_procedure_possible_1_2_SM_SH_Initiated_By_Driver,
  SSM_TR_Issue_SH_Request_L2_L3_1_SM_SH_Initiated_By_Driver,
  SSM_TR_Issue_SH_Request_L2_L3_2_SM_SH_Initiated_By_Driver
} SSM_TR_SM_SH_Initiated_By_Driver;
/* Procedures::SH_Initiated_By_Driver_On::SM_SH_Initiated_By_Driver */
typedef enum {
  SSM_st_SH_procedure_possible_SM_SH_Initiated_By_Driver,
  SSM_st_Issue_SH_Request_L2_L3_SM_SH_Initiated_By_Driver,
  SSM_st_SH_Authorized_L0_L1_LNTC_SM_SH_Initiated_By_Driver,
  SSM_st_SH_Authorized_L2_L3_SM_SH_Initiated_By_Driver
} SSM_ST_SM_SH_Initiated_By_Driver;
/* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
typedef enum {
  SSM_TR_no_trans_SH_Initiated_By_Driver,
  SSM_TR_SH_initiated_by_driver_procedure_off_1_SH_Initiated_By_Driver,
  SSM_TR_S0_SH_initiated_by_driver_procedure_on_1_SH_Initiated_By_Driver
} SSM_TR_SH_Initiated_By_Driver;
/* Procedures::Procedure_SH_Initiated_By_Driver::SH_Initiated_By_Driver */
typedef enum {
  SSM_st_SH_initiated_by_driver_procedure_off_SH_Initiated_By_Driver,
  SSM_st_S0_SH_initiated_by_driver_procedure_on_SH_Initiated_By_Driver
} SSM_ST_SH_Initiated_By_Driver;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
typedef enum {
  SSM_TR_no_trans_SM_Mode_Profile_By_Trackside,
  SSM_TR_Procedure_Off_1_1_SM_Mode_Profile_By_Trackside,
  SSM_TR_Procedure_Off_1_2_SM_Mode_Profile_By_Trackside,
  SSM_TR_Futher_location_1_SM_Mode_Profile_By_Trackside,
  SSM_TR_Futher_location_2_SM_Mode_Profile_By_Trackside,
  SSM_TR_Current_Location_1_SM_Mode_Profile_By_Trackside
} SSM_TR_SM_Mode_Profile_By_Trackside;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside */
typedef enum {
  SSM_st_Procedure_Off_SM_Mode_Profile_By_Trackside,
  SSM_st_Futher_location_SM_Mode_Profile_By_Trackside,
  SSM_st_Current_Location_SM_Mode_Profile_By_Trackside
} SSM_ST_SM_Mode_Profile_By_Trackside;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
typedef enum {
  SSM_TR_no_trans_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location,
  SSM_TR_Req_Futher_Location_1_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location,
  SSM_TR_Start_Supervision_1_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location,
  SSM_TR_Waiting_Ack_1_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location
} SSM_TR_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Futher_location::SM_Futher_Location */
typedef enum {
  SSM_st_Req_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location,
  SSM_st_Start_Supervision_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location,
  SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location,
  SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Futher_location_SM_Futher_Location
} SSM_ST_SM_Futher_Location_SM_Mode_Profile_By_Trackside_Futher_location;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
typedef enum {
  SSM_TR_no_trans_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location,
  SSM_TR_Req_Current_Location_1_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location,
  SSM_TR_Req_Current_Location_2_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location,
  SSM_TR_Switch_Autorized_Waiting_Ack_1_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Locat,
  SSM_TR_Switch_Autorized_Waiting_Ack_2_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Locat,
  SSM_TR_Waiting_Ack_1_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location,
  SSM_TR_Ack_Not_Received_1_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location
} SSM_TR_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location;
/* Procedures::Procedure_With_Mode_Profile::SM_Mode_Profile_By_Trackside::Current_Location::SM_Current_Location */
typedef enum {
  SSM_st_Req_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location,
  SSM_st_Switch_Autorized_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Locatio,
  SSM_st_Waiting_Ack_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location,
  SSM_st_Switch_Mode_Confirmed_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location,
  SSM_st_Ack_Not_Received_SM_Mode_Profile_By_Trackside_Current_Location_SM_Current_Location
} SSM_ST_SM_Current_Location_SM_Mode_Profile_By_Trackside_Current_Location;
/* Procedures::Procedure_Start_L1_L2_L3::SM_Start_L1_L2_L3 */
typedef enum {
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
typedef enum {
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
typedef enum {
  SSM_TR_no_trans_SM_StartOfMissionProcedure,
  SSM_TR_Procedure_Off_1_SM_StartOfMissionProcedure,
  SSM_TR_Procedure_On_1_SM_StartOfMissionProcedure,
  SSM_TR_Procedure_On_2_SM_StartOfMissionProcedure,
  SSM_TR_EB_Requested_1_SM_StartOfMissionProcedure
} SSM_TR_SM_StartOfMissionProcedure;
/* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure */
typedef enum {
  SSM_st_Procedure_Off_SM_StartOfMissionProcedure,
  SSM_st_Procedure_On_SM_StartOfMissionProcedure,
  SSM_st_EB_Requested_SM_StartOfMissionProcedure
} SSM_ST_SM_StartOfMissionProcedure;
/* Procedures::Procedure_StartOfMission::SM_StartOfMissionProcedure::Procedure_On::SM_SoM_On */
typedef enum {
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
typedef enum {
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
typedef enum {
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
typedef enum {
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
typedef enum {
  SSM_TR_no_trans_SM_Train_Reversing,
  SSM_TR_Reversing_Procedure_Off_1_SM_Train_Reversing,
  SSM_TR_Reversing_Condition_1_SM_Train_Reversing,
  SSM_TR_Reversing_Condition_2_SM_Train_Reversing,
  SSM_TR_Reversing_Condition_3_SM_Train_Reversing,
  SSM_TR_Reversing_Data_Available_1_SM_Train_Reversing,
  SSM_TR_Reversing_Data_Available_2_SM_Train_Reversing
} SSM_TR_SM_Train_Reversing;
/* Procedures::Procedure_Train_Reversing::SM_Train_Reversing */
typedef enum {
  SSM_st_Reversing_Procedure_Off_SM_Train_Reversing,
  SSM_st_Reversing_Condition_SM_Train_Reversing,
  SSM_st_RV_Mode_SM_Train_Reversing,
  SSM_st_Reversing_Data_Available_SM_Train_Reversing
} SSM_ST_SM_Train_Reversing;
/* OutputToRBC::ExitLevel2or3::SM1 */
typedef enum {
  _34_SSM_TR_no_trans_SM1,
  SSM_TR_BeforeChange_1_SM1,
  SSM_TR_State2_1_SM1
} _35_SSM_TR_SM1;
/* OutputToRBC::ExitLevel2or3::SM1 */
typedef enum { SSM_st_BeforeChange_SM1, SSM_st_State2_SM1 } _33_SSM_ST_SM1;
/* Acknowledgement::RequestAck::SM1 */
typedef enum {
  _31_SSM_TR_no_trans_SM1,
  SSM_TR_Waiting_1_SM1,
  SSM_TR_LaunchRequest_1_SM1,
  SSM_TR_LaunchRequest_2_SM1,
  SSM_TR_AckReceived_1_SM1
} _32_SSM_TR_SM1;
/* Acknowledgement::RequestAck::SM1 */
typedef enum {
  SSM_st_Waiting_SM1,
  SSM_st_LaunchRequest_SM1,
  SSM_st_AckReceived_SM1
} _30_SSM_ST_SM1;
/* TA_MA_Request::MA_Request_Supervision::SM1 */
typedef enum {
  _28_SSM_TR_no_trans_SM1,
  SSM_TR_init_1_SM1,
  SSM_TR_NoReqPending_1_SM1,
  SSM_TR_ReqPending_1_SM1
} _29_SSM_TR_SM1;
/* TA_MA_Request::MA_Request_Supervision::SM1 */
typedef enum {
  SSM_st_init_SM1,
  SSM_st_NoReqPending_SM1,
  SSM_st_ReqPending_SM1
} _27_SSM_ST_SM1;
/* MoRC_Pck::Utils::countDownTimer::TimerStatus_SM */
typedef enum {
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
typedef enum {
  SSM_st_Stopped_TimerStatus_SM,
  SSM_st_Counting_TimerStatus_SM,
  SSM_st_Expired_TimerStatus_SM
} SSM_ST_TimerStatus_SM;
/* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
typedef enum {
  SSM_TR_no_trans_repeat_SM,
  SSM_TR_rep_inactive_1_repeat_SM,
  SSM_TR_rep_inactive_2_repeat_SM,
  SSM_TR_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_1_repeat_SM,
  SSM_TR_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_2_repeat_SM,
  SSM_TR_rep_repeatUntilStopConditionMet_1_repeat_SM,
  SSM_TR_rep_repeatUntilStopConditionMet_2_repeat_SM
} SSM_TR_repeat_SM;
/* MoRC_Pck::Subfunc_Pkg::requestRadioConnectionSetupFromOBU_v2::repeat_SM */
typedef enum {
  SSM_st_rep_inactive_repeat_SM,
  SSM_st_rep_repeatUntilSuccessfulOrADefinedNumberOfTimes_repeat_SM,
  SSM_st_rep_repeatUntilStopConditionMet_repeat_SM
} SSM_ST_repeat_SM;
/* MoRC_Pck::Subfunc_Pkg::registeringToTheRadioNetwork_v2::Register_SM */
typedef enum {
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
typedef enum {
  SSM_st_Unregistered_Register_SM,
  SSM_st_Registering_Register_SM,
  SSM_st_Registered_Register_SM,
  SSM_st_Reregistering_Register_SM
} SSM_ST_Register_SM;
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
typedef enum {
  _25_SSM_TR_no_trans_SM1,
  _24_SSM_TR_idle_1_SM1,
  SSM_TR_waitForSafeRadioConnectionSetUp_1_SM1,
  SSM_TR_waitForSafeRadioConnectionSetUp_2_SM1,
  SSM_TR_waitForSystemVersion_1_SM1,
  SSM_TR_waitForSystemVersion_2_SM1,
  SSM_TR_waitForSystemVersion_3_SM1,
  _23_SSM_TR_sessionEstablished_1_SM1
} _26_SSM_TR_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromOBU_v2::SM1 */
typedef enum {
  _21_SSM_st_idle_SM1,
  SSM_st_waitForSafeRadioConnectionSetUp_SM1,
  SSM_st_waitForSystemVersion_SM1,
  _20_SSM_st_sessionEstablished_SM1
} _22_SSM_ST_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */
typedef enum {
  _18_SSM_TR_no_trans_SM1,
  _17_SSM_TR_idle_1_SM1,
  SSM_TR_sessionEstablished_1_SM1
} _19_SSM_TR_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSessionFromRBC_v2::SM1 */
typedef enum {
  _15_SSM_st_idle_SM1,
  SSM_st_sessionEstablished_SM1
} _16_SSM_ST_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
typedef enum {
  _13_SSM_TR_no_trans_SM1,
  _12_SSM_TR_idle_1_SM1,
  SSM_TR_idle_2_SM1,
  SSM_TR_establishingByOBU_1_SM1,
  SSM_TR_establishingByRBC_1_SM1
} _14_SSM_TR_SM1;
/* MoRC_Pck::Subfunc_Pkg::establishSession_v2::SM1 */
typedef enum {
  _10_SSM_st_idle_SM1,
  SSM_st_establishingByOBU_SM1,
  SSM_st_establishingByRBC_SM1
} _11_SSM_ST_SM1;
/* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
typedef enum {
  _8_SSM_TR_no_trans_SM1,
  SSM_TR_idle_1_SM1,
  SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_1_SM1,
  SSM_TR_waitForAckTerminationOfCommunicationSessionReceived_2_SM1,
  SSM_TR_terminated_1_SM1
} _9_SSM_TR_SM1;
/* MoRC_Pck::Subfunc_Pkg::terminateSession_v2::SM1 */
typedef enum {
  SSM_st_idle_SM1,
  SSM_st_waitForAckTerminationOfCommunicationSessionReceived_SM1,
  SSM_st_terminated_SM1
} _7_SSM_ST_SM1;
/* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
typedef enum {
  SSM_TR_no_trans_Session_SM,
  SSM_TR_sessionTerminated_1_Session_SM,
  SSM_TR_establishingSession_1_Session_SM,
  SSM_TR_establishingSession_2_Session_SM,
  SSM_TR_maintainingSession_1_Session_SM,
  SSM_TR_terminatingSession_1_Session_SM
} SSM_TR_Session_SM;
/* MoRC_Pck::Subfunc_Pkg::sessionSequencer_v2::Session_SM */
typedef enum {
  SSM_st_sessionTerminated_Session_SM,
  SSM_st_establishingSession_Session_SM,
  SSM_st_maintainingSession_Session_SM,
  SSM_st_terminatingSession_Session_SM
} SSM_ST_Session_SM;
/* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
typedef enum {
  SSM_TR_no_trans_TrainExitedFromRBCArea_SM,
  SSM_TR_Idle_1_TrainExitedFromRBCArea_SM,
  SSM_TR_Idle_2_TrainExitedFromRBCArea_SM,
  SSM_TR_WaitForOrderToTerminateTheSession_1_TrainExitedFromRBCArea_SM,
  SSM_TR_WaitForOrderToTerminateTheSession_2_TrainExitedFromRBCArea_SM
} SSM_TR_TrainExitedFromRBCArea_SM;
/* MoRC_Pck::Subfunc_Pkg::initiateTerminatingSession_v2::TrainExitedFromRBCArea_SM */
typedef enum {
  SSM_st_Idle_TrainExitedFromRBCArea_SM,
  SSM_st_WaitForOrderToTerminateTheSession_TrainExitedFromRBCArea_SM
} SSM_ST_TrainExitedFromRBCArea_SM;
/* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
typedef enum {
  SSM_TR_no_trans_connectionStatus_SM,
  SSM_TR_NoConnection_1_connectionStatus_SM,
  SSM_TR_NoConnection_2_connectionStatus_SM,
  SSM_TR_ConnectionLost_SetupFailed_1_connectionStatus_SM,
  SSM_TR_ConnectionLost_SetupFailed_2_connectionStatus_SM,
  SSM_TR_ConnectionUp_1_connectionStatus_SM,
  SSM_TR_ConnectionUp_2_connectionStatus_SM
} SSM_TR_connectionStatus_SM;
/* MoRC_Pck::Subfunc_Pkg::safeRadioConnectionIndication_v2::connectionStatus_SM */
typedef enum {
  SSM_st_NoConnection_connectionStatus_SM,
  SSM_st_ConnectionLost_SetupFailed_connectionStatus_SM,
  SSM_st_ConnectionUp_connectionStatus_SM
} SSM_ST_connectionStatus_SM;
/* Handover_Pkg::handoverUtils_Pkg::handOverSequencer::IfBlock1::else::handOver_with_1_Session_SM */
typedef enum {
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
typedef enum {
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
typedef enum {
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
typedef enum {
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
typedef enum {
  _5_SSM_TR_no_trans_SM1,
  SSM_TR_mobile_1_1_SM1,
  SSM_TR_mobile_2_1_SM1
} _6_SSM_TR_SM1;
/* Handover_Pkg::handoverUtils_Pkg::changeoverSwitch::SM1 */
typedef enum { SSM_st_mobile_1_SM1, SSM_st_mobile_2_SM1 } _4_SSM_ST_SM1;
/* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
typedef enum {
  _2_SSM_TR_no_trans_SM1,
  SSM_TR_notRequested_1_SM1,
  SSM_TR_notRequested_2_SM1,
  SSM_TR_requested_1_SM1
} _3_SSM_TR_SM1;
/* RCM_Utils_Pkg::encoders::mergeMsgToBus::SM1 */
typedef enum { SSM_st_notRequested_SM1, SSM_st_requested_SM1 } _1_SSM_ST_SM1;
/* Toolbox::TrainModules::RTM::GSM_R_MobileManagement */
typedef enum {
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
typedef enum {
  SSM_st_Not_registered_GSM_R_MobileManagement,
  SSM_st_Registering_GSM_R_MobileManagement,
  SSM_st_Registered_GSM_R_MobileManagement,
  SSM_st_Connecting_GSM_R_MobileManagement,
  SSM_st_Connected_GSM_R_MobileManagement
} SSM_ST_GSM_R_MobileManagement;
/* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */
typedef enum {
  SSM_TR_no_trans_POSITION_REPORT_SM,
  SSM_TR_IDLE_1_POSITION_REPORT_SM,
  SSM_TR_PROCESS_POSITION_REPORT_1_POSITION_REPORT_SM,
  SSM_TR_PROCESS_POSITION_REPORT_2_POSITION_REPORT_SM
} SSM_TR_POSITION_REPORT_SM;
/* RBC_Model_Pkg::RBC__ProcessPositionReport::POSITION_REPORT_SM */
typedef enum {
  SSM_st_IDLE_POSITION_REPORT_SM,
  SSM_st_PROCESS_POSITION_REPORT_POSITION_REPORT_SM
} SSM_ST_POSITION_REPORT_SM;
/* RBC_Model_Pkg::RBC__ProcessMovementAuthority::MOVEMENT_AUTHORITY_SM */
typedef enum {
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
typedef enum {
  SSM_st_IDLE_MOVEMENT_AUTHORITY_SM,
  SSM_st_SEND_MA_MOVEMENT_AUTHORITY_SM,
  SSM_st_AWAIT_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_MOVEMENT_AUTHORITY_SM,
  SSM_st_AWAIT_MA_MOVEMENT_AUTHORITY_SM,
  SSM_st_UPDATE_POSITION_MOVEMENT_AUTHORITY_SM
} SSM_ST_MOVEMENT_AUTHORITY_SM;
/* RBC_Model_Pkg::RBC__ProcessConditionalEmergencyStop::CONDITIONAL_EMERGENCY_STOP_SM */
typedef enum {
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
typedef enum {
  SSM_st_IDLE_CONDITIONAL_EMERGENCY_STOP_SM,
  SSM_st_SEND_CONDITIONAL_EMERGENCY_STOP_CONDITIONAL_EMERGENCY_STOP_SM,
  SSM_st_AWAIT_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM,
  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONDITIONAL_EMERGENCY_STOP_SM
} SSM_ST_CONDITIONAL_EMERGENCY_STOP_SM;
/* RBC_Model_Pkg::RBC__ProcessUnconditionalEmergencyStop::UNCONDITIONAL_EMERGENCY_STOP_SM */
typedef enum {
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
typedef enum {
  SSM_st_IDLE_UNCONDITIONAL_EMERGENCY_STOP_SM,
  SSM_st_SEND_UNCONDITIONAL_EMERGENCY_STOP_UNCONDITIONAL_EMERGENCY_STOP_SM,
  SSM_st_AWAIT_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM,
  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_UNCONDITIONAL_EMERGENCY_STOP_SM
} SSM_ST_UNCONDITIONAL_EMERGENCY_STOP_SM;
/* RBC_Model_Pkg::RBC__ProcessRevocationOfEmergencyStop::REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM */
typedef enum {
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
typedef enum {
  SSM_st_IDLE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_st_SEND_REVOCATION_OF_ES_MESSAGE_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_st_AWAIT_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM,
  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM
} SSM_ST_REVOCATION_OF_EMERGENCY_STOP_MESSAGE_SM;
/* RBC_Model_Pkg::RBC__ProcessGeneralMessage::GENERAL_MESSAGE_SM */
typedef enum {
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
typedef enum {
  SSM_st_IDLE_GENERAL_MESSAGE_SM,
  SSM_st_SEND_GENERAL_MESSAGE_GENERAL_MESSAGE_SM,
  SSM_st_AWAIT_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM,
  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_GENERAL_MESSAGE_SM
} SSM_ST_GENERAL_MESSAGE_SM;
/* RBC_Model_Pkg::RBC__ProcessTripAndPostTrip::TRIP_AND_POST_TRIP_SM */
typedef enum {
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
typedef enum {
  SSM_st_IDLE_TRIP_AND_POST_TRIP_SM,
  SSM_st_MODE_TRIP_TRIP_AND_POST_TRIP_SM,
  SSM_st_MODE_POST_TRIP_TRIP_AND_POST_TRIP_SM,
  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_TRIP_AND_POST_TRIP_SM,
  SSM_st_SEND_MSG_06_TRIP_AND_POST_TRIP_SM
} SSM_ST_TRIP_AND_POST_TRIP_SM;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM */
typedef enum {
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
typedef enum {
  SSM_st_SESSION_TERMINATED_CONTROLLER_SM,
  SSM_st_SEND_RBC_VERSION_CONTROLLER_SM,
  SSM_st_AWAIT_SESSION_ESTABLISHED_REPORT_CONTROLLER_SM,
  SSM_st_SESSION_ESTABLISHED_CONTROLLER_SM,
  SSM_st_SESSION_TERMINATION_REQUEST_CONTROLLER_SM
} SSM_ST_CONTROLLER_SM;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM */
typedef enum {
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
typedef enum {
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
typedef enum {
  SSM_TR_no_trans_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHE,
  SSM_TR_START_1_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_1_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISH,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGEMENT_2_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISH,
  SSM_TR_AWAIT_ACKNOWLEDGEMENT_1_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SES,
  SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_1_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLIS,
  SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_2_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLIS
} SSM_TR_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::PROCESS_VALIDATED_TRAIN_DATA::PROCESS_VALIDATED_TRAIN_DATA_SM */
typedef enum {
  SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDATED_TRAIN_DATA_P,
  SSM_st_TRY_PROCESS_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_,
  SSM_st_AWAIT_ACKNOWLEDGEMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS_VALIDA,
  SSM_st_PROCESS_VALIDATED_TRAIN_DATA_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROCESS
} SSM_ST_PROCESS_VALIDATED_TRAIN_DATA_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_PROC;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
typedef enum {
  SSM_TR_no_trans_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_,
  SSM_TR_START_1_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_S,
  SSM_TR_SEND_MA_AND_POS_REP_PARAMS_1_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_,
  SSM_TR_SEND_MA_AND_POS_REP_PARAMS_2_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_,
  SSM_TR_AWAIT_ACKNOWLEDGMENT_1_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSIO,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGMENT_1_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_,
  SSM_TR_TRY_PROCESS_ACKNOWLEDGMENT_2_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_
} SSM_TR_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_M;
/* RBC_Model_Pkg::RBC__ProcessController::CONTROLLER_SM::SESSION_ESTABLISHED::SESSION_ESTABLISHED_SM::SEND_MA_AND_POS_REP_PARAMS::SEND_MA_AMD_POS_REP_PARAMS_SM */
typedef enum {
  SSM_st_START_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS_REP_PARAMS_SEN,
  SSM_st_SEND_MA_AND_POS_REP_PARAMS_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_A,
  SSM_st_AWAIT_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_AND_POS,
  SSM_st_TRY_PROCESS_ACKNOWLEDGMENT_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_MA_A
} SSM_ST_SEND_MA_AMD_POS_REP_PARAMS_SM_CONTROLLER_SM_SESSION_ESTABLISHED_SESSION_ESTABLISHED_SM_SEND_M;
/* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
typedef enum {
  SSM_TR_no_trans_SM1,
  SSM_TR_Reset_1_SM1,
  SSM_TR_Driving_1_SM1
} SSM_TR_SM1;
/* Toolbox::Physics::PHYSICS_MovementSimulation::SM1 */
typedef enum { SSM_st_Reset_SM1, SSM_st_Driving_SM1 } SSM_ST_SM1;
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

/* SDM_Types_Pkg::L_internal_real_Type */
typedef kcg_real L_internal_real_Type_SDM_Types_Pkg;

/* SDM_Types_Pkg::V_internal_real_Type */
typedef kcg_real V_internal_real_Type_SDM_Types_Pkg;

/* SDM_Types_Pkg::A_internal_real_Type */
typedef kcg_real A_internal_real_Type_SDM_Types_Pkg;

/* SDM_Types_Pkg::T_internal_real_Type */
typedef kcg_real T_internal_real_Type_SDM_Types_Pkg;

/* SDM_GradientAcceleration_types::Gradient_real_t */
typedef kcg_real Gradient_real_t_SDM_GradientAcceleration_types;

/* TrackAtlasTypes::FromTIU_t */
typedef kcg_bool FromTIU_t_TrackAtlasTypes;

/* SDM_Commands_Pkg::EB_command_T */
typedef kcg_bool EB_command_T_SDM_Commands_Pkg;

/* NID_MN */
typedef kcg_int NID_MN;

/* L_TEXT */
typedef kcg_int L_TEXT;

/* NID_C */
typedef kcg_int NID_C;

/* NID_RADIO */
typedef kcg_int NID_RADIO;

/* NID_RBC */
typedef kcg_int NID_RBC;

/* NID_BG */
typedef kcg_int NID_BG;

/* NID_LRBG */
typedef kcg_int NID_LRBG;

/* D_LINK */
typedef kcg_int D_LINK;

/* Q_LOCACC */
typedef kcg_int Q_LOCACC;

/* M_MCOUNT */
typedef kcg_int M_MCOUNT;

/* Q_NVLOCACC */
typedef kcg_int Q_NVLOCACC;

/* NID_NTC */
typedef kcg_int NID_NTC;

/* D_TRACKCOND */
typedef kcg_int D_TRACKCOND;

/* NID_OPERATIONAL */
typedef kcg_int NID_OPERATIONAL;

/* NID_CTRACTION */
typedef kcg_int NID_CTRACTION;

/* NID_TEXTMESSAGE */
typedef kcg_int NID_TEXTMESSAGE;

/* M_POSITION */
typedef kcg_int M_POSITION;

/* NID_MESSAGE */
typedef kcg_int NID_MESSAGE;

/* T_TRAIN */
typedef kcg_int T_TRAIN;

/* NID_EM */
typedef kcg_int NID_EM;

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

/* D_NVSTFF */
typedef kcg_int D_NVSTFF;

/* V_NVKVINT */
typedef kcg_int V_NVKVINT;

/* N_ITER */
typedef kcg_int N_ITER;

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

/* D_GRADIENT */
typedef kcg_int D_GRADIENT;

/* G_A */
typedef kcg_int G_A;

/* D_STATIC */
typedef kcg_int D_STATIC;

/* V_STATIC */
typedef kcg_int V_STATIC;

/* NC_DIFF */
typedef kcg_int NC_DIFF;

/* V_DIFF */
typedef kcg_int V_DIFF;

/* V_MAIN */
typedef kcg_int V_MAIN;

/* D_MAMODE */
typedef kcg_int D_MAMODE;

/* V_MAMODE */
typedef kcg_int V_MAMODE;

/* L_MAMODE */
typedef kcg_int L_MAMODE;

/* L_ACKMAMODE */
typedef kcg_int L_ACKMAMODE;

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

/* T_CYCLOC */
typedef kcg_int T_CYCLOC;

/* D_CYCLOC */
typedef kcg_int D_CYCLOC;

/* D_LOC */
typedef kcg_int D_LOC;

/* NID_LTRBG */
typedef kcg_int NID_LTRBG;

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

/* L_MESSAGE */
typedef kcg_int L_MESSAGE;

/* V_MAXTRAIN */
typedef kcg_int V_MAXTRAIN;

/* T_MAR */
typedef kcg_int T_MAR;

/* T_TIMEOUTRQST */
typedef kcg_int T_TIMEOUTRQST;

/* T_CYCRQST */
typedef kcg_int T_CYCRQST;

/* D_RBCTR */
typedef kcg_int D_RBCTR;

/* D_TAFDISPLAY */
typedef kcg_int D_TAFDISPLAY;

/* L_TAFDISPLAY */
typedef kcg_int L_TAFDISPLAY;

/* TIU_Types_Pkg::NID_ctraction_T */
typedef kcg_int NID_ctraction_T_TIU_Types_Pkg;

/* Obu_BasicTypes_Pkg::T_internal_Type */
typedef kcg_int T_internal_Type_Obu_BasicTypes_Pkg;

/* ProvidePositionReport_Pkg::SystemTime_T */
typedef T_internal_Type_Obu_BasicTypes_Pkg SystemTime_T_ProvidePositionReport_Pkg;

/* Obu_BasicTypes_Pkg::V_internal_Type */
typedef kcg_int V_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::Speed_T */
typedef V_internal_Type_Obu_BasicTypes_Pkg Speed_T_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::L_internal_Type */
typedef kcg_int L_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::Location_T */
typedef L_internal_Type_Obu_BasicTypes_Pkg Location_T_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::V_odometry_Type */
typedef kcg_int V_odometry_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::A_internal_Type */
typedef kcg_int A_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::G_internal_Type */
typedef kcg_int G_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::BCD_T */
typedef kcg_int BCD_T_Obu_BasicTypes_Pkg;

/* DMI_Types_Pkg::NID_STM */
typedef kcg_int NID_STM_DMI_Types_Pkg;

/* DMI_Types_Pkg::BCD */
typedef kcg_int BCD_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_TextMessage_ID_T */
typedef kcg_int DMI_TextMessage_ID_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::M_BRAKEPERCT */
typedef kcg_int M_BRAKEPERCT_DMI_Types_Pkg;

/* BG_Types_Pkg::NID_ERRORBG */
typedef kcg_int NID_ERRORBG_BG_Types_Pkg;

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

/* DATA::Icon_control_flag_INT_T */
typedef kcg_int Icon_control_flag_INT_T_DATA;

/* DATA::DMI_m_icon_flashing_freq_INT_T */
typedef kcg_int DMI_m_icon_flashing_freq_INT_T_DATA;

/* DATA::Icon_group_INT_T */
typedef kcg_int Icon_group_INT_T_DATA;

/* DATA::Area_group_INT_T */
typedef kcg_int Area_group_INT_T_DATA;

/* SDM_Types_Pkg::Percentage_T */
typedef kcg_int Percentage_T_SDM_Types_Pkg;

/* TM::nid_packet_meta */
typedef kcg_int nid_packet_meta_TM;

/* TA_MRSP::SSP_t_section_t */
typedef kcg_int SSP_t_section_t_TA_MRSP;

/* TA_MRSP::SSP_s_section_t */
typedef kcg_int SSP_s_section_t_TA_MRSP;

/* MoRC_Pck::time_Type */
typedef kcg_int time_Type_MoRC_Pck;

/* Toolbox::OdometrySpeed_T */
typedef kcg_int OdometrySpeed_T_Toolbox;

typedef struct {
  kcg_real TrainPos_in;
  kcg_int OffsetTotal;
  kcg_real TrainPosCalibrated;
} struct__154982;

/* InfraLib::TrainPosRaw_T */
typedef struct__154982 TrainPosRaw_T_InfraLib;

typedef struct {
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
} struct__154988;

/* TM::BaliseTelegramHeader_int_T */
typedef struct__154988 BaliseTelegramHeader_int_T_TM;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  kcg_int nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__155004;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__155004 MetadataElement_T_Common_Types_Pkg;

typedef struct__155004 array__155012[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__155012 Metadata_T_Common_Types_Pkg;

typedef struct {
  array__155012 PacketHeaders;
  array_int_500 PacketData;
} struct__155015;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__155015 CompressedPackets_T_Common_Types_Pkg;

typedef struct {
  BaliseTelegramHeader_int_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__155020;

/* TM::CompressedBaliseMessage */
typedef struct__155020 CompressedBaliseMessage_TM;

typedef struct {
  TrainPosRaw_T_InfraLib TrainPosRaw;
  CompressedBaliseMessage_TM BG_Message;
} struct__155025;

/* InfraLib::TrackSectionData_T */
typedef struct__155025 TrackSectionData_T_InfraLib;

typedef struct {
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Pos;
  OrBG_TM Or_BG;
  OrLine_TM Or_Line;
} struct__155030;

/* TM::BaliseGroupData */
typedef struct__155030 BaliseGroupData_TM;

/* Basics::BaliseGroupData */
typedef struct__155030 BaliseGroupData_Basics;

typedef struct {
  BaliseTelegramHeader_int_T_TM header;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int engineering_BG_location;
  kcg_real TrainPos;
  kcg_int pig_nom_0;
  kcg_bool balise_passed;
} struct__155038;

/* InfraLib::B_data_internal_T */
typedef struct__155038 B_data_internal_T_InfraLib;

typedef struct { kcg_bool valid; kcg_int NID_PACKET; } struct__155047;

/* TM::P255_trackside_int_T */
typedef struct__155047 P255_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SRSTOP;
} struct__155052;

/* TM::P137_trackside_int_T */
typedef struct__155052 P137_trackside_int_T_TM;

typedef struct {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
} struct__155060;

/* TM::P041_section_int_T */
typedef struct__155060 P041_section_int_T_TM;

typedef P041_section_int_T_TM array__155066[32];

/* TM::P041_trackide_sectionlist_T */
typedef array__155066 P041_trackide_sectionlist_T_TM;

typedef struct {
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
} struct__155069;

/* TM::P041_trackside_int_T */
typedef struct__155069 P041_trackside_int_T_TM;

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

typedef array_int_3 array_int_3_33[33];

/* TM::P021_OBU_sectionlist_array_T */
typedef array_int_3_33 P021_OBU_sectionlist_array_T_TM;

/* TM::P041_OBU_sectionlist_array_T */
typedef array_int_3_33 P041_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_99[99];

/* TM::P041_sections_array_flat_T */
typedef array_int_99 P041_sections_array_flat_T_TM;

/* TM::P021_sections_array_flat_T */
typedef array_int_99 P021_sections_array_flat_T_TM;

typedef P041_section_int_T_TM array__155092[33];

/* TM::P041_OBU_sectionlist_int_T */
typedef array__155092 P041_OBU_sectionlist_int_T_TM;

typedef struct { kcg_int M_LEVELTR; kcg_int NID_NTC; } struct__155095;

/* TM::P046_section_int_T */
typedef struct__155095 P046_section_int_T_TM;

typedef P046_section_int_T_TM array__155100[32];

/* TM::P046_trackide_sectionlist_T */
typedef array__155100 P046_trackide_sectionlist_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int N_ITER;
  P046_trackide_sectionlist_T_TM SECTIONS;
} struct__155103;

/* TM::P046_trackside_int_T */
typedef struct__155103 P046_trackside_int_T_TM;

typedef kcg_int array_int_2[2];

/* DATA::DMI_Radio_Net_Data_int_array_T */
typedef array_int_2 DMI_Radio_Net_Data_int_array_T_DATA;

/* TM::P058_section_array_T */
typedef array_int_2 P058_section_array_T_TM;

/* TM::P046_section_array_T */
typedef array_int_2 P046_section_array_T_TM;

/* TM_baseline2::P027V1_section_array_qdiff_T */
typedef array_int_2 P027V1_section_array_qdiff_T_TM_baseline2;

/* TM_TrainToTrack::P011_voltage_section_array_T */
typedef array_int_2 P011_voltage_section_array_T_TM_TrainToTrack;

typedef P046_section_array_T_TM array_int_2_33[33];

/* TM::P046_OBU_sectionlist_array_T */
typedef array_int_2_33 P046_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_66[66];

/* TM::P046_sections_array_flat_T */
typedef array_int_66 P046_sections_array_flat_T_TM;

typedef P046_section_int_T_TM array__155123[33];

/* TM::P046_OBU_sectionlist_int_T */
typedef array__155123 P046_OBU_sectionlist_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_RBC;
  kcg_int NID_C;
  kcg_int NID_RBC;
  kcg_int NID_RADIO;
  kcg_int Q_SLEEPSESSION;
} struct__155126;

/* TM::P042_trackside_int_T */
typedef struct__155126 P042_trackside_int_T_TM;

typedef kcg_int array_int_32[32];

/* SDMConversionModelPkg::LKrIntLookUp_t */
typedef array_int_32 LKrIntLookUp_t_SDMConversionModelPkg;

/* TM_baseline2::P003V1_OBU_sectionlist_int_T */
typedef array_int_32 P003V1_OBU_sectionlist_int_T_TM_baseline2;

/* TM_baseline2::P003V1_trackide_sectionlist_T */
typedef array_int_32 P003V1_trackide_sectionlist_T_TM_baseline2;

typedef struct {
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
} struct__155141;

/* TM_baseline2::P003V1_trackside_int_T */
typedef struct__155141 P003V1_trackside_int_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_MN;
} struct__155170;

/* TM::P045_trackside_int_T */
typedef struct__155170 P045_trackside_int_T_TM;

typedef struct {
  kcg_int L_SECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
} struct__155178;

/* TM::P015_section_int_T */
typedef struct__155178 P015_section_int_T_TM;

typedef P015_section_int_T_TM array__155185[32];

/* TM::P015_trackide_sectionlist_T */
typedef array__155185 P015_trackide_sectionlist_T_TM;

/* TM::P015_OBU_sectionlist_int_T */
typedef array__155185 P015_OBU_sectionlist_int_T_TM;

typedef struct {
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
} struct__155188;

/* TM::P015_trackside_int_T */
typedef struct__155188 P015_trackside_int_T_TM;

typedef struct {
  kcg_int D_LINK;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_LINKORIENTATION;
  kcg_int Q_LINKREACTION;
  kcg_int Q_LOCACC;
} struct__155215;

/* TM::P005_section_int_T */
typedef struct__155215 P005_section_int_T_TM;

typedef P005_section_int_T_TM array__155225[32];

/* TM::P005_trackide_sectionlist_T */
typedef array__155225 P005_trackide_sectionlist_T_TM;

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
} struct__155228;

/* TM::P005_trackside_int_T */
typedef struct__155228 P005_trackside_int_T_TM;

typedef struct { kcg_int NC_DIFF; kcg_int V_DIFF; } struct__155245;

/* TM_baseline2::P027V1_section_int_qdiff_T */
typedef struct__155245 P027V1_section_int_qdiff_T_TM_baseline2;

typedef P027V1_section_int_qdiff_T_TM_baseline2 array__155250[32];

/* TM_baseline2::P027V1_trackside_qdifflist_T */
typedef array__155250 P027V1_trackside_qdifflist_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_int_qdiff_T */
typedef array__155250 P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2;

typedef struct {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
} struct__155253;

/* TM_baseline2::P027V1_section_int_T */
typedef struct__155253 P027V1_section_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__155261[32];

/* TM_baseline2::P027V1_trackside_sectionlist_T */
typedef array__155261 P027V1_trackside_sectionlist_T_TM_baseline2;

typedef struct {
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
} struct__155264;

/* TM_baseline2::P027V1_trackside_int_T */
typedef struct__155264 P027V1_trackside_int_T_TM_baseline2;

typedef struct {
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
} struct__155279;

/* TM::P021_section_int_T */
typedef struct__155279 P021_section_int_T_TM;

typedef P021_section_int_T_TM array__155285[32];

/* TM::P021_trackide_sectionlist_T */
typedef array__155285 P021_trackide_sectionlist_T_TM;

typedef struct {
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
} struct__155288;

/* TM::P021_trackside_int_T */
typedef struct__155288 P021_trackside_int_T_TM;

typedef struct {
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
} struct__155301;

/* TM::P065_trackside_int_T */
typedef struct__155301 P065_trackside_int_T_TM;

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

typedef P015_section_array_T_TM array_int_4_32[32];

/* TM::P015_OBU_sectionlist_array_T */
typedef array_int_4_32 P015_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_128[128];

/* TM::P015_sections_array_flat_T */
typedef array_int_128 P015_sections_array_flat_T_TM;

/* TM::P012_sections_array_flat_T */
typedef array_int_128 P012_sections_array_flat_T_TM;

typedef kcg_int array_int_7[7];

/* SDMConversionModelPkg::m_KvSteps_t */
typedef array_int_7 m_KvSteps_t_SDMConversionModelPkg;

/* SDMConversionModelPkg::v_KvSteps_t */
typedef array_int_7 v_KvSteps_t_SDMConversionModelPkg;

/* TM::Array07 */
typedef array_int_7 Array07_TM;

/* TM::P005_section_array_T */
typedef array_int_7 P005_section_array_T_TM;

typedef P005_section_array_T_TM array_int_7_33[33];

/* TM::P005_OBU_sectionlist_array_T */
typedef array_int_7_33 P005_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_231[231];

/* TM::P005_sections_array_flat_T */
typedef array_int_231 P005_sections_array_flat_T_TM;

typedef P005_section_int_T_TM array__155332[33];

/* TM::P005_OBU_sectionlist_int_T */
typedef array__155332 P005_OBU_sectionlist_int_T_TM;

typedef kcg_int array_int_64[64];

/* TM::P058_sections_array_flat_T */
typedef array_int_64 P058_sections_array_flat_T_TM;

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef array_int_2 array_int_2_32[32];

/* TM::P058_OBU_sectionlist_array_T */
typedef array_int_2_32 P058_OBU_sectionlist_array_T_TM;

/* TM_baseline2::P027V1_OBU_sectionlist_array_qdiff_T */
typedef array_int_2_32 P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__155341[33];

/* TM_baseline2::P027V1_OBU_sectionlist_int_T */
typedef array__155341 P027V1_OBU_sectionlist_int_T_TM_baseline2;

typedef P021_section_int_T_TM array__155344[33];

/* TM::P021_OBU_sectionlist_int_T */
typedef array__155344 P021_OBU_sectionlist_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
} struct__155347;

/* TM_radio_messages::M_003_int_T */
typedef struct__155347 M_003_int_T_TM_radio_messages;

/* TM_radio_messages::M_024_int_T */
typedef struct__155347 M_024_int_T_TM_radio_messages;

typedef struct {
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
} struct__155356;

/* TM_radio_messages::M_TrackTrain_Radio_T */
typedef struct__155356 M_TrackTrain_Radio_T_TM_radio_messages;

typedef struct {
  M_TrackTrain_Radio_T_TM_radio_messages message;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int trigger;
  kcg_bool message_sent;
} struct__155371;

/* InfraLib::R_data_internal_T */
typedef struct__155371 R_data_internal_T_InfraLib;

typedef struct {
  kcg_bool valid;
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int T_MAR;
  kcg_int T_TIMEOUTRQST;
  kcg_int T_CYCRQST;
} struct__155378;

/* TM::P057_trackside_int_T */
typedef struct__155378 P057_trackside_int_T_TM;

typedef struct { kcg_int D_LOC; kcg_int Q_LGTLOC; } struct__155388;

/* TM::P058_section_int_T */
typedef struct__155388 P058_section_int_T_TM;

typedef P058_section_int_T_TM array__155393[32];

/* TM::P058_trackide_sectionlist_T */
typedef array__155393 P058_trackide_sectionlist_T_TM;

/* TM::P058_OBU_sectionlist_int_T */
typedef array__155393 P058_OBU_sectionlist_int_T_TM;

typedef struct {
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
} struct__155396;

/* TM::P058_trackside_int_T */
typedef struct__155396 P058_trackside_int_T_TM;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
  kcg_int t_train_received;
} struct__155409;

/* TM_radio_messages::M_008_int_T */
typedef struct__155409 M_008_int_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
  kcg_int m_version;
} struct__155419;

/* TM_radio_messages::M_032_int_T */
typedef struct__155419 M_032_int_T_TM_radio_messages;

typedef struct {
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
} struct__155429;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct__155429 Radio_TrackTrain_Header_T_Radio_Types_Pkg;

/* TM_transitional::Radio_TrackTrain_Header_T */
typedef struct__155429 Radio_TrackTrain_Header_T_TM_transitional;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_SH_request;
} struct__155447;

/* TM_radio_messages::M_027_T */
typedef struct__155447 M_027_T_TM_radio_messages;

/* TM_radio_messages::M_028_T */
typedef struct__155447 M_028_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  M_VERSION m_version;
} struct__155457;

/* TM_radio_messages::M_032_T */
typedef struct__155457 M_032_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_REF d_ref;
} struct__155467;

/* TM_radio_messages::M_033_T */
typedef struct__155467 M_033_T_TM_radio_messages;

typedef struct {
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
} struct__155478;

/* TM_radio_messages::M_034_T */
typedef struct__155478 M_034_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
} struct__155492;

/* TM_radio_messages::M_024_T */
typedef struct__155492 M_024_T_TM_radio_messages;

/* TM_radio_messages::M_009_T */
typedef struct__155492 M_009_T_TM_radio_messages;

/* TM_radio_messages::M_006_T */
typedef struct__155492 M_006_T_TM_radio_messages;

/* TM_radio_messages::M_003_T */
typedef struct__155492 M_003_T_TM_radio_messages;

/* TM_radio_messages::M_043_T */
typedef struct__155492 M_043_T_TM_radio_messages;

/* TM_radio_messages::M_041_T */
typedef struct__155492 M_041_T_TM_radio_messages;

/* TM_radio_messages::M_040_T */
typedef struct__155492 M_040_T_TM_radio_messages;

/* TM_radio_messages::M_039_T */
typedef struct__155492 M_039_T_TM_radio_messages;

/* TM_radio_messages::M_038_T */
typedef struct__155492 M_038_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_ORIENTATION q_orientation;
} struct__155501;

/* TM_radio_messages::M_045_T */
typedef struct__155501 M_045_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_SR d_sr;
} struct__155511;

/* TM_radio_messages::M_002_T */
typedef struct__155511 M_002_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_received;
} struct__155522;

/* TM_radio_messages::M_008_T */
typedef struct__155522 M_008_T_TM_radio_messages;

typedef struct {
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
} struct__155532;

/* TM_radio_messages::M_015_T */
typedef struct__155532 M_015_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  NID_EM nid_em;
} struct__155546;

/* TM_radio_messages::M_018_T */
typedef struct__155546 M_018_T_TM_radio_messages;

/* TM_radio_messages::M_016_T */
typedef struct__155546 M_016_T_TM_radio_messages;

typedef struct {
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
} struct__155556;

/* TM_radio_messages::M_015_int_T */
typedef struct__155556 M_015_int_T_TM_radio_messages;

typedef struct {
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
} struct__155570;

/* TM::Radio_TrackTrain_Header_T */
typedef struct__155570 Radio_TrackTrain_Header_T_TM;

typedef struct {
  Radio_TrackTrain_Header_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__155588;

/* TM::CompressedRadioMessage */
typedef struct__155588 CompressedRadioMessage_TM;

typedef struct {
  Q_UPDOWN q_updown;
  M_VERSION m_version;
  Q_MEDIA q_media;
  N_PIG n_pig;
  N_TOTAL n_total;
  M_DUP m_dup;
  kcg_int m_mcount;
  kcg_int nid_c;
  kcg_int nid_bg;
  Q_LINK q_link;
} struct__155593;

/* BG_Types_Pkg::TelegramHeader_T */
typedef struct__155593 TelegramHeader_T_BG_Types_Pkg;

typedef struct {
  kcg_bool m_IsValid;
  CompressedRadioMessage_TM m_Entry;
} struct__155606;

/* RadioTrackTrainMessageQueueEntry_T */
typedef struct__155606 RadioTrackTrainMessageQueueEntry_T;

typedef RadioTrackTrainMessageQueueEntry_T array__155611[8];

/* RadioTrackTrainMessageQueueEntries_T */
typedef array__155611 RadioTrackTrainMessageQueueEntries_T;

typedef struct {
  RadioTrackTrainMessageQueueEntries_T m_Entries;
} struct__155614;

/* RadioTrackTrainMessageQueue_T */
typedef struct__155614 RadioTrackTrainMessageQueue_T;

typedef struct {
  kcg_bool valid;
  kcg_int count;
  T_TRAIN timestamp;
  DiagMsgType_E_RBC_Diagnostic_Pkg diagType;
  DiagMsgSrc_E_RBC_Diagnostic_Pkg diagSrc;
  DiagMsgText_E_RBC_Diagnostic_Pkg diagText;
} struct__155618;

/* RBC_Diagnostic_Pkg::DiagMsg_T */
typedef struct__155618 DiagMsg_T_RBC_Diagnostic_Pkg;

typedef struct { D_LOC d_loc; Q_LGTLOC q_lgtloc; } struct__155627;

/* Packet_Types_Pkg::IterPacket58_T */
typedef struct__155627 IterPacket58_T_Packet_Types_Pkg;

typedef IterPacket58_T_Packet_Types_Pkg array__155632[32];

typedef struct {
  Q_DIR q_dir;
  Q_SCALE q_scale;
  T_CYCLOC t_cycloc;
  D_CYCLOC d_cycloc;
  M_LOC m_loc;
  N_ITER m_NumberOfIncrementalDistancesAndQualifiers;
  array__155632 m_IncrementalDistancesAndQualifiers;
} struct__155635;

/* PosRepParams_T */
typedef struct__155635 PosRepParams_T;

typedef struct {
  Q_DIR q_dir;
  T_MAR t_mar;
  T_TIMEOUTRQST t_timeoutrqst;
  T_CYCRQST t_cycrqst;
} struct__155645;

/* MAReqParams_T */
typedef struct__155645 MAReqParams_T;

typedef struct {
  NID_C nid_c;
  V_NVSHUNT v_nvshunt;
  V_NVSTFF v_nvstff;
  V_NVONSIGHT v_nvonsight;
  V_NVUNFIT v_nvunfit;
  V_NVREL v_nvrel;
  T_NVCONTACT t_nvcontact;
} struct__155652;

/* NationalParams_T */
typedef struct__155652 NationalParams_T;

typedef struct {
  M_VERSION m_version;
  NationalParams_T m_NationalParams;
  MAReqParams_T m_MAReqParams;
  PosRepParams_T m_PosRepParams;
} struct__155662;

/* DynamicConfig_T */
typedef struct__155662 DynamicConfig_T;

typedef struct { T_TRAIN m_Value; } struct__155669;

/* Clock_T */
typedef struct__155669 Clock_T;

typedef struct {
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
} struct__155673;

/* PosData_T */
typedef struct__155673 PosData_T;

typedef kcg_int array_int_15[15];

/* Packet_TrainTypes_Pkg::telephoneNumber_T */
typedef array_int_15 telephoneNumber_T_Packet_TrainTypes_Pkg;

/* TM::Array15 */
typedef array_int_15 Array15_TM;

typedef struct { kcg_bool valid; array_int_15 telephoneNumber; } struct__155694;

/* Packet_TrainTypes_Pkg::sNID_RADIO_T */
typedef struct__155694 sNID_RADIO_T_Packet_TrainTypes_Pkg;

typedef sNID_RADIO_T_Packet_TrainTypes_Pkg array__155699[1];

/* Packet_TrainTypes_Pkg::aNID_RADIO_T */
typedef array__155699 aNID_RADIO_T_Packet_TrainTypes_Pkg;

typedef struct { M_VOLTAGE m_voltage; kcg_int nid_ctraction; } struct__155702;

/* Packet_TrainTypes_Pkg::sTractionIdentity_T */
typedef struct__155702 sTractionIdentity_T_Packet_TrainTypes_Pkg;

/* TM_TrainToTrack::P011_voltage */
typedef struct__155702 P011_voltage_TM_TrainToTrack;

typedef struct__155702 array__155707[4];

/* Packet_TrainTypes_Pkg::aTractionIdentity_T */
typedef array__155707 aTractionIdentity_T_Packet_TrainTypes_Pkg;

/* TM_TrainToTrack::P011_voltage_list */
typedef array__155707 P011_voltage_list_TM_TrainToTrack;

typedef kcg_int array_int_5[5];

/* Packet_TrainTypes_Pkg::aNID_NTC_T */
typedef array_int_5 aNID_NTC_T_Packet_TrainTypes_Pkg;

/* TM::Array05 */
typedef array_int_5 Array05_TM;

/* TM_TrainToTrack::P011_ntc_list */
typedef array_int_5 P011_ntc_list_TM_TrainToTrack;

/* TM_TrainToTrack::P011_ntc_list_array_T */
typedef array_int_5 P011_ntc_list_array_T_TM_TrainToTrack;

/* TM_TrainToTrack::P003_nid_radio_list_t */
typedef array_int_5 P003_nid_radio_list_t_TM_TrainToTrack;

/* TM_TrainToTrack::P003_nid_radio_list_int_t */
typedef array_int_5 P003_nid_radio_list_int_t_TM_TrainToTrack;

typedef struct {
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
} struct__155713;

/* TrainData_T */
typedef struct__155713 TrainData_T;

typedef struct { TrainData_T m_TrainData; PosData_T m_PosData; } struct__155731;

/* SessionManagement_T */
typedef struct__155731 SessionManagement_T;

typedef DiagMsg_T_RBC_Diagnostic_Pkg array__155736[16];

typedef struct {
  SessionManagement_T session;
  DynamicConfig_T config;
  array__155736 diagnostic;
  RadioTrackTrainMessageQueue_T messageQueue;
  Clock_T clockk;
  CompressedRadioMessage_TM lastSentTrackTrainMessage;
} struct__155739;

/* RBC_DataBus_Pkg::RBC_Data_T */
typedef struct__155739 RBC_Data_T_RBC_DataBus_Pkg;

typedef struct {
  kcg_bool present;
  kcg_int nid_message;
  kcg_int t_train;
  kcg_int nid_engine;
  Q_MARQSTREASON xQ_MARQSTREASON;
  kcg_int xT_TRAIN;
  kcg_int xNID_EM;
  Q_EMERGENCYSTOP xQ_EMERGENCYSTOP;
  kcg_int xNID_TEXTMESSAGE;
} struct__155748;

/* Radio_Types_Pkg::Radio_TrainTrack_Header_T */
typedef struct__155748 Radio_TrainTrack_Header_T_Radio_Types_Pkg;

/* TM_transitional::Radio_TrainTrack_Header_T */
typedef struct__155748 Radio_TrainTrack_Header_T_TM_transitional;

typedef struct {
  kcg_bool valid;
  NC_CDTRAIN nc_cdtrain;
  NC_TRAIN nc_train;
  kcg_int l_train;
  kcg_int v_maxtrain;
  M_LOADINGGAUGE m_loadinggoage;
  M_AXLELOADCAT m_axleloadcat;
  M_AIRTIGHT m_airtight;
  kcg_int n_axle;
  kcg_int nIter_tractionIdentity;
  array__155707 tractionIdentity;
  kcg_int nIter_ntc;
  array_int_5 nid_ntc;
} struct__155760;

/* Packet_TrainTypes_Pkg::PT11_ValidatedTrainData_T */
typedef struct__155760 PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int transitionInformation;
} struct__155776;

/* Packet_TrainTypes_Pkg::PT9_Level23_TransitionInformation_T */
typedef struct__155776 PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int number;
  array__155699 aNID_RADIO;
} struct__155781;

/* Packet_TrainTypes_Pkg::PT3_OnboardTelephoneNumbers_T */
typedef struct__155781 PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg;

typedef struct {
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
} struct__155787;

/* TrainToTrack::Position_Report_based_on_two_balise_groups */
typedef struct__155787 Position_Report_based_on_two_balise_groups_TrainToTrack;

typedef struct { kcg_bool valid; struct__155787 packet1; } struct__155807;

/* Packet_TrainTypes_Pkg::PT1_PositionReport_2BG_T */
typedef struct__155807 PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg;

typedef struct {
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
} struct__155812;

/* TrainToTrack::Position_Report */
typedef struct__155812 Position_Report_TrainToTrack;

typedef struct { kcg_bool valid; struct__155812 packet0; } struct__155831;

/* Packet_TrainTypes_Pkg::PT0_PositionReport_T */
typedef struct__155831 PT0_PositionReport_T_Packet_TrainTypes_Pkg;

typedef struct { kcg_bool valid; kcg_int TrainRunningNumber; } struct__155836;

/* Packet_TrainTypes_Pkg::PT5_TrainRunningNumber */
typedef struct__155836 PT5_TrainRunningNumber_Packet_TrainTypes_Pkg;

typedef struct { kcg_bool valid; M_ERROR m_error; } struct__155841;

/* Packet_TrainTypes_Pkg::PT4_ErrorReporting_T */
typedef struct__155841 PT4_ErrorReporting_T_Packet_TrainTypes_Pkg;

typedef struct {
  struct__155831 p0;
  struct__155807 p1;
  struct__155781 p3;
  struct__155841 p4;
  struct__155836 p5;
  struct__155776 p9;
  struct__155760 p11;
} struct__155846;

/* Common_Types_Pkg::outPackets_T */
typedef struct__155846 outPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_bool present;
  struct__155748 header;
  struct__155846 packets;
} struct__155856;

/* Radio_Types_Pkg::Radio_TrainTrack_Message_T */
typedef struct__155856 Radio_TrainTrack_Message_T_Radio_Types_Pkg;

/* RCM_MsgTypes_Pkg::msgToTrack_T */
typedef Radio_TrainTrack_Message_T_Radio_Types_Pkg msgToTrack_T_RCM_MsgTypes_Pkg;

/* TM_transitional::Radio_TrainTrack_Message_T */
typedef struct__155856 Radio_TrainTrack_Message_T_TM_transitional;

typedef struct {
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
} struct__155862;

/* TM_TrainToTrack::P011 */
typedef struct__155862 P011_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NID_LTRBG nid_ltrbg;
} struct__155880;

/* TM_TrainToTrack::P009 */
typedef struct__155880 P009_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NID_OPERATIONAL nid_opeartional;
} struct__155887;

/* TM_TrainToTrack::P005 */
typedef struct__155887 P005_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  M_ERROR m_error;
} struct__155894;

/* TM_TrainToTrack::P004 */
typedef struct__155894 P004_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  N_ITER n_iter;
  P003_nid_radio_list_t_TM_TrainToTrack nid_radio;
} struct__155901;

/* TM_TrainToTrack::P003 */
typedef struct__155901 P003_TM_TrainToTrack;

typedef struct {
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
} struct__155909;

/* TM_TrainToTrack::P001 */
typedef struct__155909 P001_TM_TrainToTrack;

typedef struct {
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
} struct__155930;

/* TM_TrainToTrack::P000 */
typedef struct__155930 P000_TM_TrainToTrack;

typedef kcg_int array_int_8[8];

/* TM::Array08 */
typedef array_int_8 Array08_TM;

/* TM_TrainToTrack::P011_voltage_sections_array_flat_t */
typedef array_int_8 P011_voltage_sections_array_flat_t_TM_TrainToTrack;

/* TM_TrainToTrack::P003_TrainTrack_int */
typedef array_int_8 P003_TrainTrack_int_TM_TrainToTrack;

typedef kcg_int array_int_11[11];

/* DATA::DMI_Driver_Identifier_int_array_T */
typedef array_int_11 DMI_Driver_Identifier_int_array_T_DATA;

/* TM_TrainToTrack::Array11 */
typedef array_int_11 Array11_TM_TrainToTrack;

typedef kcg_int array_int_25[25];

/* TM_TrainToTrack::P044_TrainTrack_int */
typedef array_int_25 P044_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P011_TrainTrack_int */
typedef array_int_25 P011_TrainTrack_int_TM_TrainToTrack;

typedef kcg_int array_int_17[17];

/* TM_TrainToTrack::P001_TrainTrack_int */
typedef array_int_17 P001_TrainTrack_int_TM_TrainToTrack;

/* TM_TrainToTrack::P000_TrainTrack_int */
typedef array_int_17 P000_TrainTrack_int_TM_TrainToTrack;

typedef kcg_int array_int_50[50];

/* TM_radio_messages::M_TrainTrack_compressed_packets_T */
typedef array_int_50 M_TrainTrack_compressed_packets_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int nid_engine;
  kcg_int field1;
  kcg_int field2;
  kcg_int field3;
} struct__155965;

/* TM_radio_messages::M_TrainTrack_MessageHd_T */
typedef struct__155965 M_TrainTrack_MessageHd_T_TM_radio_messages;

typedef struct {
  M_TrainTrack_MessageHd_T_TM_radio_messages Message;
  M_TrainTrack_compressed_packets_T_TM_radio_messages OptionalPackets;
} struct__155976;

/* TM_radio_messages::M_TrainTrack_Message_T */
typedef struct__155976 M_TrainTrack_Message_T_TM_radio_messages;

typedef struct {
  kcg_real o_nominal;
  kcg_real o_min;
  kcg_real o_max;
} struct__155981;

/* Toolbox::odometryFactors_T */
typedef struct__155981 odometryFactors_T_Toolbox;

typedef struct {
  kcg_int v_safeNominal;
  kcg_int v_rawNominal;
  kcg_int v_lower;
  kcg_int v_upper;
} struct__155987;

/* Obu_BasicTypes_Pkg::OdometrySpeeds_T */
typedef struct__155987 OdometrySpeeds_T_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_int o_nominal;
  kcg_int o_min;
  kcg_int o_max;
} struct__155994;

/* Obu_BasicTypes_Pkg::OdometryLocations_T */
typedef struct__155994 OdometryLocations_T_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int timestamp;
  struct__155994 odo;
  struct__155987 speed;
  kcg_int acceleration;
  odoMotionState_T_Obu_BasicTypes_Pkg motionState;
  odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection;
} struct__156000;

/* Obu_BasicTypes_Pkg::odometry_T */
typedef struct__156000 odometry_T_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_int nominal;
  kcg_int d_min;
  kcg_int d_max;
} struct__156010;

/* Obu_BasicTypes_Pkg::LocWithInAcc_T */
typedef struct__156010 LocWithInAcc_T_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_bool t_train_reference;
  kcg_bool nid_em;
  kcg_bool q_scale;
  kcg_bool d_sr;
  kcg_bool t_sh_rqst;
  kcg_bool d_ref;
  kcg_bool q_dir;
  kcg_bool d_emergencystop;
  kcg_bool m_version;
} struct__156016;

/* Common_Types_Pkg::RadioMetadata_T */
typedef struct__156016 RadioMetadata_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int nid_c;
  kcg_int rbc_id;
  kcg_int device_id;
} struct__156028;

/* Common_Types_Pkg::RBC_Id_T */
typedef struct__156028 RBC_Id_T_Common_Types_Pkg;

typedef struct {
  kcg_bool present;
  kcg_bool apiConsistencyError;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  RadioMetadata_T_Common_Types_Pkg Radio_MetaData;
  RBC_Id_T_Common_Types_Pkg sendingRBC_Id;
} struct__156035;

/* API_Msg_Pkg::API_RadioMsgHeader_T */
typedef struct__156035 API_RadioMsgHeader_T_API_Msg_Pkg;

typedef struct {
  odometry_T_Obu_BasicTypes_Pkg odometerOfBaliseDetection;
  LocWithInAcc_T_Obu_BasicTypes_Pkg BG_centerDetectionInaccuraccuracies;
} struct__156043;

/* BG_Types_Pkg::centerOfBalisePosition_T */
typedef struct__156043 centerOfBalisePosition_T_BG_Types_Pkg;

typedef struct {
  kcg_bool present;
  kcg_bool checkResult;
  kcg_bool api_bad_balise_received;
  TelegramHeader_T_BG_Types_Pkg api_header;
  centerOfBalisePosition_T_BG_Types_Pkg centerOfBalisePosition;
} struct__156048;

/* API_Msg_Pkg::API_TelegramHeader_T */
typedef struct__156048 API_TelegramHeader_T_API_Msg_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTimeMsgReceived;
  MsgSource_T_Common_Types_Pkg msg_type;
  API_TelegramHeader_T_API_Msg_Pkg btm_msg;
  API_RadioMsgHeader_T_API_Msg_Pkg rtm_msg;
  CompressedPackets_T_Common_Types_Pkg packets;
} struct__156056;

/* API_Msg_Pkg::API_TrackSideInput_T */
typedef struct__156056 API_TrackSideInput_T_API_Msg_Pkg;

typedef struct {
  kcg_bool valid;
  mobileHWConnectionStatus_Type_MoRC_Pck connectionStatus;
  kcg_bool settingUpConnectionHasFailed;
  kcg_bool connectionLost;
} struct__156065;

/* MoRC_Pck::mobileHWStatus_Type */
typedef struct__156065 mobileHWStatus_Type_MoRC_Pck;

typedef struct {
  kcg_bool valid;
  cmdRadioUnit_T_API_RadioCommunication_Pkg cmd;
  NID_MN networkID;
} struct__156072;

/* API_RadioCommunication_Pkg::RadioManagement_T */
typedef struct__156072 RadioManagement_T_API_RadioCommunication_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool acknowledgedByDriver;
  NC_TRAIN trainCategory;
  NC_CDTRAIN cantDeficientcy;
  kcg_int trainLength;
  kcg_int brakePerctage;
  kcg_int maxTrainSpeed;
  M_LOADINGGAUGE loadingGauge;
  M_AXLELOADCAT axleLoadCategory;
  M_AIRTIGHT airtightSystem;
  kcg_int axleNumber;
  kcg_int numberNationalSystems;
  array_int_5 nationSystems;
  kcg_int numberTractionSystems;
  array__155707 tractionSystem;
} struct__156078;

/* TIU_Types_Pkg::trainData_T */
typedef struct__156078 trainData_T_TIU_Types_Pkg;

typedef struct { kcg_int now; kcg_int distance; } struct__156096;

/* TIU_Types_Pkg::D_test_distance_T */
typedef struct__156096 D_test_distance_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::D_test_traction_T */
typedef D_test_distance_T_TIU_Types_Pkg D_test_traction_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::D_test_current_T */
typedef D_test_distance_T_TIU_Types_Pkg D_test_current_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::D_test_trackcond_T */
typedef D_test_distance_T_TIU_Types_Pkg D_test_trackcond_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::L_test_trackcond_T */
typedef D_test_distance_T_TIU_Types_Pkg L_test_trackcond_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::D_test_trackinit_T */
typedef D_test_distance_T_TIU_Types_Pkg D_test_trackinit_T_TIU_Types_Pkg;

typedef struct {
  struct__156096 d_test_trackcond;
  struct__156096 l_test_trackcond;
  M_trackcond_T_TIU_Types_Pkg m_trackcond;
} struct__156101;

/* TIU_Types_Pkg::nothing_to_resume_profile_follow_T */
typedef struct__156101 nothing_to_resume_profile_follow_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  struct__156101 nothing_to_resume_profile_follow;
  struct__156096 empty_profile_initial_state_to_be_resumed;
} struct__156107;

/* TIU_Types_Pkg::Type_I_train_and_brake_inhibition_with_distance_commands_T */
typedef struct__156107 Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_brake_status_T_TIU_Types_Pkg m_regenerativebrake_st;
  M_brake_status_T_TIU_Types_Pkg m_eddycurrentbrake_st;
  M_brake_status_T_TIU_Types_Pkg m_magneticshoebrake_st;
  M_brake_status_T_TIU_Types_Pkg m_electropneumaticbrake_st;
  M_brake_status_T_TIU_Types_Pkg m_additionalbrake_st;
} struct__156113;

/* TIU_Types_Pkg::Brake_status_T */
typedef struct__156113 Brake_status_T_TIU_Types_Pkg;

typedef struct { kcg_bool valid; kcg_int pressure; } struct__156122;

/* TIU_Types_Pkg::Brake_pressure_value_T */
typedef struct__156122 Brake_pressure_value_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_sleeping_signal_status_T_TIU_Types_Pkg m_sleeping_st;
  M_passiveshunting_signal_status_T_TIU_Types_Pkg m_passiveshunting_st;
  M_nonleading_signal_status_T_TIU_Types_Pkg m_nonleading_st;
  M_cab_signal_status_T_TIU_Types_Pkg m_cab_st;
  M_directioncontroller_signal_status_T_TIU_Types_Pkg m_directioncontroller_st;
  M_trainintegrity_signal_status_T_TIU_Types_Pkg m_trainintegrity_st;
  M_traction_signal_status_T_TIU_Types_Pkg m_traction_st;
} struct__156127;

/* TIU_Types_Pkg::Mode_control_and_train_status_T */
typedef struct__156127 Mode_control_and_train_status_T_TIU_Types_Pkg;

typedef struct {
  struct__156127 train_status;
  struct__156113 brake_status;
  struct__156122 brake_pressure;
  M_train_data_entry_type_T_TIU_Types_Pkg train_data_entry_type;
  struct__156078 train_data_info;
  struct__156107 type_I_train_and_brake_inhibition;
} struct__156138;

/* TIU_Types_Pkg::Message_Train_Interface_to_EVC_T */
typedef struct__156138 Message_Train_Interface_to_EVC_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_brake_signal_command_T_TIU_Types_Pkg m_servicebrake_cm;
  M_brake_signal_command_T_TIU_Types_Pkg m_emergencybrake_cm;
} struct__156147;

/* TIU_Types_Pkg::Brake_command_T */
typedef struct__156147 Brake_command_T_TIU_Types_Pkg;

typedef struct { kcg_bool no_restriction; kcg_int restriction; } struct__156153;

/* TIU_Types_Pkg::M_current_T */
typedef struct__156153 M_current_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_test_current_T_TIU_Types_Pkg d_test_current;
  M_current_T_TIU_Types_Pkg m_current;
} struct__156158;

/* TIU_Types_Pkg::Change_of_allowed_current_consumption_T */
typedef struct__156158 Change_of_allowed_current_consumption_T_TIU_Types_Pkg;

typedef struct { kcg_bool valid; kcg_int door_control_info; } struct__156164;

/* TIU_Types_Pkg::Passenger_door_control_info_T */
typedef struct__156164 Passenger_door_control_info_T_TIU_Types_Pkg;

typedef struct {
  M_voltage_types_T_TIU_Types_Pkg voltage_type;
  NID_ctraction_T_TIU_Types_Pkg NID_ctraction;
} struct__156169;

/* TIU_Types_Pkg::M_voltage_T */
typedef struct__156169 M_voltage_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_test_traction_T_TIU_Types_Pkg d_test_traction;
  M_voltage_T_TIU_Types_Pkg m_voltage;
} struct__156174;

/* TIU_Types_Pkg::Change_traction_system_T */
typedef struct__156174 Change_traction_system_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_pantograph_command_T_TIU_Types_Pkg m_pantograph_cm;
  M_airtightness_command_T_TIU_Types_Pkg m_airtightness_cm;
  M_mainpowerswitch_command_T_TIU_Types_Pkg m_mainpowerswitch_cm;
  M_traction_cutoff_command_T_TIU_Types_Pkg m_traction_cutoff_cm;
} struct__156180;

/* TIU_Types_Pkg::Type_I_train_commands_T */
typedef struct__156180 Type_I_train_commands_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_brake_inhibit_command_T_TIU_Types_Pkg m_regenerativebrake_cm;
  M_eddy_current_brake_inhibition_T_TIU_Types_Pkg m_eddycurrentbrake_cm;
  M_brake_inhibit_command_T_TIU_Types_Pkg m_magneticshoebrake_cm;
} struct__156188;

/* TIU_Types_Pkg::Brake_inhibition_command_T */
typedef struct__156188 Brake_inhibition_command_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_Isolation_status_T_TIU_Types_Pkg isolation_status;
} struct__156195;

/* TIU_Types_Pkg::Isolation_Status_T */
typedef struct__156195 Isolation_Status_T_TIU_Types_Pkg;

typedef struct {
  Isolation_Status_T_TIU_Types_Pkg isolation_status;
  Brake_command_T_TIU_Types_Pkg brake_command;
  Brake_inhibition_command_T_TIU_Types_Pkg brake_inhibition;
  Type_I_train_commands_T_TIU_Types_Pkg type_I_train_commands;
  Change_traction_system_T_TIU_Types_Pkg change_traction_system;
  Passenger_door_control_info_T_TIU_Types_Pkg passenger_door_control_info;
  Change_of_allowed_current_consumption_T_TIU_Types_Pkg change_of_allowed_current_consumption;
} struct__156200;

/* TIU_Types_Pkg::Message_EVC_to_Train_Interface_T */
typedef struct__156200 Message_EVC_to_Train_Interface_T_TIU_Types_Pkg;

typedef struct { kcg_bool valid; struct__156138 info; } struct__156210;

/* API_TIU_Pkg::TIU_Input_msg */
typedef struct__156210 TIU_Input_msg_API_TIU_Pkg;

typedef struct {
  kcg_bool valid;
  Message_EVC_to_Train_Interface_T_TIU_Types_Pkg info;
} struct__156215;

/* API_TIU_Pkg::TIU_Output_msg */
typedef struct__156215 TIU_Output_msg_API_TIU_Pkg;

typedef struct { M_LEVEL level; NID_STM_DMI_Types_Pkg nid_stm; } struct__156220;

/* DMI_Types_Pkg::DMI_level_T */
typedef struct__156220 DMI_level_T_DMI_Types_Pkg;

typedef DMI_level_T_DMI_Types_Pkg array__156225[32];

/* DMI_Types_Pkg::DMI_level_array_T */
typedef array__156225 DMI_level_array_T_DMI_Types_Pkg;

typedef struct {
  kcg_int number;
  DMI_level_array_T_DMI_Types_Pkg levelList;
} struct__156228;

/* DMI_Types_Pkg::DMI_LevelList_T */
typedef struct__156228 DMI_LevelList_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_LEVEL lastActiveLevel;
  NID_NTC lastActiveNTC;
  DMI_LevelList_T_DMI_Types_Pkg availableLevelsList;
} struct__156233;

/* API_PersistanceStorage_Pkg::ps_dataForStartOfMission_T */
typedef struct__156233 ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg;

typedef struct {
  kcg_bool reset;
  kcg_real targetSpeed;
  kcg_real traction;
  kcg_real brake;
  kcg_real initialPosition;
  kcg_real initialVelocity;
  kcg_int mode;
  kcg_int level;
  kcg_int mobileHWStatus;
  kcg_bool openDesk;
} struct__156240;

/* EnvSim::GUI_to_EVC */
typedef struct__156240 GUI_to_EVC_EnvSim;

typedef struct {
  kcg_bool emergencyBrake;
  kcg_bool serviceBrake;
  kcg_bool tractionCutOff;
  kcg_int currentPositionInCm;
  kcg_real currentPositionInM;
  kcg_real currentVelocityInKmH;
  kcg_bool afbActive;
  kcg_real trainPositionDeltaMax;
  kcg_real trainPositionNominal;
  kcg_real trainPositionDeltaMin;
  kcg_int timestamp;
} struct__156253;

/* EnvSim::EVC_to_GUI */
typedef struct__156253 EVC_to_GUI_EnvSim;

typedef kcg_int array_int_311[311];

/* API_DMI_Pkg::DMI_to_EVC_Message_int_T */
typedef array_int_311 DMI_to_EVC_Message_int_T_API_DMI_Pkg;

typedef kcg_int array_int_999[999];

/* API_DMI_Pkg::EVC_to_DMI_Message_int_T */
typedef array_int_999 EVC_to_DMI_Message_int_T_API_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg msgSrc;
  Q_DIR q_dir;
  NID_MN nid_mn;
  RBC_Id_T_Common_Types_Pkg origin;
} struct__156273;

/* RCM_MsgTypes_Pkg::p45_radioNetworkRegistration_T */
typedef struct__156273 p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg;

typedef struct {
  kcg_bool valid;
  Q_UPDOWN q_updown;
  M_VERSION m_version;
  Q_MEDIA q_media;
  N_TOTAL n_total;
  kcg_int m_mcount;
  kcg_int nid_c;
  kcg_int nid_bg;
  Q_LINK q_link;
  struct__156000 bgPosition;
  struct__156010 BG_centerDetectionInaccuraccuracies;
  kcg_int q_nvlocacc;
  kcg_bool noCoordinateSystemHasBeenAssigned;
  Q_DIRLRBG trainOrientationToBG;
  Q_DIRTRAIN trainRunningDirectionToBG;
} struct__156281;

/* BG_Types_Pkg::BG_Header_T */
typedef struct__156281 BG_Header_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg source;
  struct__156016 radioMetadata;
  struct__156281 BG_Common_Header;
  struct__155429 Radio_Common_Header;
  struct__155015 packets;
  struct__156028 sendingRBC;
} struct__156299;

/* Common_Types_Pkg::ReceivedMessage_T */
typedef struct__156299 ReceivedMessage_T_Common_Types_Pkg;

/* RCM_MsgTypes_Pkg::msgFromTrack_T */
typedef ReceivedMessage_T_Common_Types_Pkg msgFromTrack_T_RCM_MsgTypes_Pkg;

typedef struct { kcg_bool valid; Q_DIR q_dir; NID_MN nid_mn; } struct__156309;

/* Packet_Types_Pkg::P45_RadioNetworkRegistration_T */
typedef struct__156309 P45_RadioNetworkRegistration_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg msgSrc;
  Q_DIR q_dir;
  Q_RBC q_rbc;
  NID_C nid_c;
  NID_RBC nid_RBC;
  NID_RADIO nid_radio;
  Q_SLEEPSESSION q_sleepsession;
  RBC_Id_T_Common_Types_Pkg origin;
} struct__156315;

/* RCM_MsgTypes_Pkg::p42_sessionManagement_T */
typedef struct__156315 p42_sessionManagement_T_RCM_MsgTypes_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_RBC q_rbc;
  NID_C nid_c;
  NID_RBC nid_rbc;
  NID_RADIO nid_radio;
  Q_SLEEPSESSION q_sleepsession;
} struct__156327;

/* Packet_Types_Pkg::P42_SessionManagement_T */
typedef struct__156327 P42_SessionManagement_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg msgSrc;
  RBC_Id_T_Common_Types_Pkg origin;
  NID_LRBG lrbg;
} struct__156337;

/* RCM_MsgTypes_Pkg::m39_AckOfTerminationOfACommunicationSession_T */
typedef struct__156337 m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg msgSrc;
  RBC_Id_T_Common_Types_Pkg origin;
} struct__156344;

/* RCM_MsgTypes_Pkg::m38_initiationOfACommunicationSession_T */
typedef struct__156344 m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg msgSrc;
  kcg_bool versionSupported;
  RBC_Id_T_Common_Types_Pkg origin;
  M_VERSION m_version;
} struct__156350;

/* RCM_MsgTypes_Pkg::m32_RBC_RIU_SystemVersion_T */
typedef struct__156350 m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg;

typedef struct {
  kcg_bool m155_initiationOfACommunicationSession;
  kcg_bool m156_terminationOfACommunicationSession;
  kcg_bool m159_sessionEstablished;
  kcg_bool m154_noCompatibleVersionSupported;
} struct__156358;

/* RCM_MsgTypes_Pkg::msgToTrackTriggers_T */
typedef struct__156358 msgToTrackTriggers_T_RCM_MsgTypes_Pkg;

typedef struct {
  kcg_bool valid;
  safeRadioConnnectionIndicator_T_RCM_Session_Types_Pkg indicator;
} struct__156365;

/* RCM_Session_Types_Pkg::safeRadioConnectionIndication_T */
typedef struct__156365 safeRadioConnectionIndication_T_RCM_Session_Types_Pkg;

typedef struct {
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
} struct__156370;

/* RCM_Session_Types_Pkg::obuEventsAndPhases_T */
typedef struct__156370 obuEventsAndPhases_T_RCM_Session_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int mobileDeviceNo;
  mobileConnetionAction_T_RCM_Types_Pkg action;
  NID_RADIO nid_radio;
} struct__156394;

/* RCM_Types_Pkg::mobileConnectionCmd_T */
typedef struct__156394 mobileConnectionCmd_T_RCM_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int mobileDeviceNo;
  mobileConnectionStatus_T_RCM_Types_Pkg status;
  kcg_int nid_radio;
  kcg_bool settingUpConnectionHasFailed;
  kcg_bool connectionLost;
  kcg_bool isInRadioHole;
} struct__156401;

/* RCM_Types_Pkg::mobileConnectionContext_T */
typedef struct__156401 mobileConnectionContext_T_RCM_Types_Pkg;

typedef struct {
  kcg_bool valid;
  sessionPhase_T_RCM_Session_Types_Pkg phase;
  kcg_int nid_c;
  kcg_int nid_rbc;
  kcg_int nid_radio;
} struct__156411;

/* RCM_Session_Types_Pkg::sessionStatus_T */
typedef struct__156411 sessionStatus_T_RCM_Session_Types_Pkg;

typedef struct {
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
} struct__156419;

/* RCM_Session_Types_Pkg::sessionCmd_T */
typedef struct__156419 sessionCmd_T_RCM_Session_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int mobileDeviceNo;
  mobileRegistrationAction_T_RCM_Types_Pkg action;
  NID_MN network_id;
} struct__156432;

/* RCM_Types_Pkg::mobileRegistrationCmd_T */
typedef struct__156432 mobileRegistrationCmd_T_RCM_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int mobileDeviceNo;
  mobileHealthStatus_T_RCM_Types_Pkg healthStatus;
  mobileRegistrationStatus_T_RCM_Types_Pkg status;
  kcg_int nid_mn;
} struct__156439;

/* RCM_Types_Pkg::mobileRegistrationContext_T */
typedef struct__156439 mobileRegistrationContext_T_RCM_Types_Pkg;

typedef struct {
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
} struct__156447;

/* RCM_Session_Types_Pkg::morc_configData_T */
typedef struct__156447 morc_configData_T_RCM_Session_Types_Pkg;

typedef struct {
  mobileRegistrationContext_T_RCM_Types_Pkg registration;
  mobileConnectionContext_T_RCM_Types_Pkg connection;
  sessionStatus_T_RCM_Session_Types_Pkg session;
} struct__156461;

/* RCM_Session_Types_Pkg::morcStatus_T */
typedef struct__156461 morcStatus_T_RCM_Session_Types_Pkg;

typedef M_TrainTrack_Message_T_TM_radio_messages array__156467[5];

/* TM_lib_internal::M_TrainTrackMessage_buffer_t */
typedef array__156467 M_TrainTrackMessage_buffer_t_TM_lib_internal;

/* TM_TrainTrack_Bus::M_TrainTrackMessageBus_t */
typedef array__156467 M_TrainTrackMessageBus_t_TM_TrainTrack_Bus;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int nid_engine;
} struct__156470;

/* TM_radio_messages::M_136_T */
typedef struct__156470 M_136_T_TM_radio_messages;

/* TM_radio_messages::M_129_T */
typedef struct__156470 M_129_T_TM_radio_messages;

/* TM_radio_messages::M_154_T */
typedef struct__156470 M_154_T_TM_radio_messages;

/* TM_radio_messages::M_159_T */
typedef struct__156470 M_159_T_TM_radio_messages;

/* TM_radio_messages::M_156_T */
typedef struct__156470 M_156_T_TM_radio_messages;

/* TM_radio_messages::M_155_T */
typedef struct__156470 M_155_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  kcg_int nid_LRBG;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  kcg_int d_link;
  Q_NEWCOUNTRY q_newcountry;
  kcg_int nid_c;
  kcg_int nid_bg;
  Q_LINKORIENTATION q_linkorientation;
  Q_LINKREACTION q_linkreaction;
  kcg_int q_locacc;
} struct__156478;

/* BG_Types_Pkg::LinkedBG_T */
typedef struct__156478 LinkedBG_T_BG_Types_Pkg;

typedef struct__156478 array__156492[33];

/* BG_Types_Pkg::LinkedBGs_T */
typedef array__156492 LinkedBGs_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  struct__156281 BG_Header;
  array__156492 linkedBGs;
} struct__156495;

/* BG_Types_Pkg::passedBG_T */
typedef struct__156495 passedBG_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int nid_bg_fromLinkingBG;
  kcg_int nid_c_fromLinkingBG;
  struct__156010 expectedLocation;
  struct__156010 d_link;
  struct__156478 linkingInfo;
} struct__156501;

/* TrainPosition_Types_Pck::infoFromLinking_T */
typedef struct__156501 infoFromLinking_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool valid;
  kcg_int nid_c;
  kcg_int nid_bg;
  Q_LINK q_link;
  struct__156010 location;
  kcg_int seqNoOnTrack;
  struct__156501 infoFromLinking;
  struct__156495 infoFromPassing;
  kcg_bool missed;
} struct__156510;

/* TrainPosition_Types_Pck::positionedBG_T */
typedef struct__156510 positionedBG_T_TrainPosition_Types_Pck;

typedef positionedBG_T_TrainPosition_Types_Pck array__156522[41];

/* TrainPosition_Types_Pck::positionedBGs_T */
typedef array__156522 positionedBGs_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool valid;
  kcg_int mobileDeviceNo;
  NID_C nid_c;
  NID_RBC nid_RBC;
  NID_RADIO nid_radio;
  NID_MN nid_mn;
} struct__156525;

/* Handover_Pkg::connection_ids_T */
typedef struct__156525 connection_ids_T_Handover_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_RBCTR d_rbctr;
  NID_C nid_c;
  NID_RBC nid_rbc;
  NID_RADIO nid_radio;
  Q_SLEEPSESSION q_sleepsession;
} struct__156534;

/* Packet_Types_Pkg::P131_RBCTransitionOrder_T */
typedef struct__156534 P131_RBCTransitionOrder_T_Packet_Types_Pkg;

/* TM::P131_OBU_T */
typedef struct__156534 P131_OBU_T_TM;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg source;
  NID_LRBG nid_lrbg;
  LocWithInAcc_T_Obu_BasicTypes_Pkg location;
  kcg_bool contactLastKnownRBC;
  kcg_bool useTheShortNumberStoredOnboard;
  P131_RBCTransitionOrder_T_Packet_Types_Pkg order;
} struct__156545;

/* Handover_Pkg::p131_q_rbcTransitionOrder_T */
typedef struct__156545 p131_q_rbcTransitionOrder_T_Handover_Pkg;

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

typedef struct {
  NID_ENGINE nid_engine;
  NID_OPERATIONAL nid_operational;
  L_TRAIN l_train;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_baliseAntenna_2_frontend;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_frontend_2_rearend;
  LocWithInAcc_T_Obu_BasicTypes_Pkg locationAccuracy_DefaultValue;
  LocWithInAcc_T_Obu_BasicTypes_Pkg centerDetectionAcc_DefaultValue;
} struct__156558;

/* TrainPosition_Types_Pck::trainProperties_T */
typedef struct__156558 trainProperties_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool valid;
  kcg_int timestamp;
  kcg_bool trainPositionIsUnknown;
  kcg_bool noCoordinateSystemHasBeenAssigned;
  struct__156010 trainPosition;
  kcg_int estimatedFrontEndPosition;
  kcg_int minSafeFrontEndPosition;
  kcg_int maxSafeFrontEndPostion;
  struct__156510 LRBG;
  struct__156510 prvLRBG;
  Q_DLRBG nominalOrReverseToLRBG;
  Q_DIRLRBG trainOrientationToLRBG;
  Q_DIRTRAIN trainRunningDirectionToLRBG;
  kcg_bool linkingIsUsedOnboard;
  kcg_int estimatedRearEndPosition;
  kcg_int minSafeRearEndPosition;
  kcg_int maxSafeRearEndPosition;
} struct__156568;

/* TrainPosition_Types_Pck::trainPosition_T */
typedef struct__156568 trainPosition_T_TrainPosition_Types_Pck;

typedef struct {
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg defaultID;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg memorizedID;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg ID_fromDriver;
} struct__156588;

/* MoRC_Pck::radioNetWorkIDs_T */
typedef struct__156588 radioNetWorkIDs_T_MoRC_Pck;

typedef struct {
  kcg_bool valid;
  L_NVKRINT l_nvkrint_l;
  kcg_real m_nvkrint_l;
} struct__156594;

/* TM::P003_OBU_l_section_enum_T */
typedef struct__156594 P003_OBU_l_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_l_section_enum_T */
typedef struct__156594 P203V1_OBU_l_section_enum_T_TM_baseline2;

typedef struct__156594 array__156600[32];

/* TM::P003_OBU_l_sectionlist_enum_T */
typedef array__156600 P003_OBU_l_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_l_sectionlist_enum_T */
typedef array__156600 P203V1_OBU_l_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int v_nvkvint_k_m;
  kcg_real m_nvkvint_km_12;
  kcg_real m_nvkvint_km_23;
} struct__156603;

/* TM::P003_OBU_k_m_section_enum_T */
typedef struct__156603 P003_OBU_k_m_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_m_section_enum_T */
typedef struct__156603 P203V1_OBU_k_m_section_enum_T_TM_baseline2;

typedef struct__156603 array__156610[32];

/* TM::P003_OBU_k_m_sectionlist_enum_T */
typedef array__156610 P003_OBU_k_m_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_m_sectionlist_enum_T */
typedef array__156610 P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_NVKVINTSET q_nvkvintset_k;
  kcg_real a_nvp12_k;
  kcg_real a_nvp23_k;
  kcg_int v_nvkvint_k;
  kcg_real m_nvkvint_k_12;
  kcg_real m_nvkvint_k_23;
  kcg_int n_iter_k_m;
  array__156610 n_iter_k_m_list;
} struct__156613;

/* TM::P003_OBU_k_section_enum_T */
typedef struct__156613 P003_OBU_k_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_section_enum_T */
typedef struct__156613 P203V1_OBU_k_section_enum_T_TM_baseline2;

typedef struct__156613 array__156625[32];

/* TM::P003_OBU_k_sectionlist_enum_T */
typedef array__156625 P003_OBU_k_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_sectionlist_enum_T */
typedef array__156625 P203V1_OBU_k_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int v_nvkvint_n;
  kcg_real m_nvkvint_n_12;
  kcg_real m_nvkvint_n_23;
} struct__156628;

/* TM::P003_OBU_n_section_enum_T */
typedef struct__156628 P003_OBU_n_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_n_section_enum_T */
typedef struct__156628 P203V1_OBU_n_section_enum_T_TM_baseline2;

typedef struct__156628 array__156635[32];

/* TM::P003_OBU_n_sectionlist_enum_T */
typedef array__156635 P003_OBU_n_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_n_sectionlist_enum_T */
typedef array__156635 P203V1_OBU_n_sectionlist_enum_T_TM_baseline2;

typedef struct {
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
} struct__156638;

/* TM_baseline2::P203V1_OBU_T */
typedef struct__156638 P203V1_OBU_T_TM_baseline2;

typedef struct {
  Q_NVLOCACC q_nvlocacc;
  V_NVLIMSUPERV v_nvlimsuperv;
} struct__156669;

/* TM_baseline2::P003_permanent_data_T */
typedef struct__156669 P003_permanent_data_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  L_NVKRINT l_nvkrint;
  M_NVKRINT m_nvkrint;
} struct__156674;

/* Packet_Types_Pkg::nvkrint_T */
typedef struct__156674 nvkrint_T_Packet_Types_Pkg;

typedef nvkrint_T_Packet_Types_Pkg array__156680[7];

/* Packet_Types_Pkg::nvkrintArray_T */
typedef array__156680 nvkrintArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  V_NVKVINT v_nvkvint;
  M_NVKVINT m_nvkvint12;
  M_NVKVINT m_nvkvint23;
} struct__156683;

/* Packet_Types_Pkg::nvkvint_T */
typedef struct__156683 nvkvint_T_Packet_Types_Pkg;

typedef nvkvint_T_Packet_Types_Pkg array__156690[7];

/* Packet_Types_Pkg::nvkvintArray_T */
typedef array__156690 nvkvintArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_NVKVINTSET q_nvkvintset;
  A_NVP12 a_nvp12;
  A_NVP23 a_nvp23;
  nvkvintArray_T_Packet_Types_Pkg nvkintArray;
} struct__156693;

/* Packet_Types_Pkg::nvkvintset_T */
typedef struct__156693 nvkvintset_T_Packet_Types_Pkg;

typedef nvkvintset_T_Packet_Types_Pkg array__156701[7];

/* Packet_Types_Pkg::nvkvintsetArray_T */
typedef array__156701 nvkvintsetArray_T_Packet_Types_Pkg;

typedef struct { kcg_bool valid; kcg_int nid_c; } struct__156704;

/* Packet_Types_Pkg::nidC_T */
typedef struct__156704 nidC_T_Packet_Types_Pkg;

/* TM::P003_OBU_nid_c_section_enum_T */
typedef struct__156704 P003_OBU_nid_c_section_enum_T_TM;

/* TM_baseline2::P003V1_section_enum_T */
typedef struct__156704 P003V1_section_enum_T_TM_baseline2;

typedef nidC_T_Packet_Types_Pkg array__156709[7];

/* Packet_Types_Pkg::nidCArray_T */
typedef array__156709 nidCArray_T_Packet_Types_Pkg;

typedef struct {
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
} struct__156712;

/* Packet_Types_Pkg::P3_NationalValues_T */
typedef struct__156712 P3_NationalValues_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_LINK d_link;
  Q_NEWCOUNTRY q_newcountry;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINKORIENTATION q_linkorientation;
  Q_LINKREACTION q_linkreaction;
  Q_LOCACC q_locacc;
} struct__156751;

/* TM::P005_section_enum_T */
typedef struct__156751 P005_section_enum_T_TM;

typedef P005_section_enum_T_TM array__156762[33];

/* TM::P005_OBU_sectionlist_enum_T */
typedef array__156762 P005_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  L_PACKET l_packet;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P005_OBU_sectionlist_enum_T_TM sections;
} struct__156765;

/* TM::P005_OBU_T */
typedef struct__156765 P005_OBU_T_TM;

typedef struct {
  kcg_int index;
  kcg_int noOfFoundBGs;
  kcg_bool BGFound;
} struct__156774;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::BG_find_T */
typedef struct__156774 BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

typedef struct {
  kcg_int unlinkedBGsCount;
  kcg_int linkedBGsCount;
  kcg_int totalBGsCount;
  kcg_int passedUnlinkedBGsCount;
  kcg_int passedLinkedBGsCount;
  kcg_int passedTotalBGsCount;
} struct__156780;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::BG_counters_T */
typedef struct__156780 BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

typedef struct {
  kcg_int previousLinkedBG_idx;
  kcg_int currentIndex;
  kcg_int subsequentLinkedBG_idx;
} struct__156789;

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::linkedBG_index_T */
typedef struct__156789 linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

typedef linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg array__156795[41];

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::linkedBGs_indices_T */
typedef array__156795 linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

typedef struct {
  positionedBG_T_TrainPosition_Types_Pck refBG;
  positionedBG_T_TrainPosition_Types_Pck prevLinkedBG;
  positionedBG_T_TrainPosition_Types_Pck prevUnlinkedBG;
  kcg_bool recalculate;
  LocWithInAcc_T_Obu_BasicTypes_Pkg sumOfBestDistances;
} struct__156798;

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::refBGs_T */
typedef struct__156798 refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

typedef struct {
  positionedBGs_T_TrainPosition_Types_Pck BGs;
  kcg_bool overrun;
} struct__156806;

/* CalculateTrainPosition_Pkg::positionedBGs_w_overrun_T */
typedef struct__156806 positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg;

typedef positionedBG_T_TrainPosition_Types_Pck array__156811[33];

/* TrainPosition_Types_Pck::linkedBGs_asPositionedBGs_T */
typedef array__156811 linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool outOfMemSpace;
  kcg_bool passedBG_foundNotWhereExpected;
  kcg_bool positionCalculation_inconsistent;
  kcg_bool linkedBGMissed;
  kcg_bool BGpassedInUnexpectedDirection;
  kcg_bool BG_LinkingConsistencyError;
  kcg_bool twoConsecutiveLinkedBGs_missed;
  kcg_bool doubleRepositioningError;
  struct__156510 bg;
} struct__156814;

/* TrainPosition_Types_Pck::positionErrors_T */
typedef struct__156814 positionErrors_T_TrainPosition_Types_Pck;

typedef struct {
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
} struct__156826;

/* TrainPosition_Types_Pck::trainPositionInfo_T */
typedef struct__156826 trainPositionInfo_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool valid;
  kcg_bool q_endsection;
  L_internal_Type_Obu_BasicTypes_Pkg l_section;
  kcg_bool q_sectiontimer;
  T_internal_Type_Obu_BasicTypes_Pkg t_sectiontimer;
  L_internal_Type_Obu_BasicTypes_Pkg d_sectiontimerstoploc;
} struct__156839;

/* TrackAtlasTypes::MovementAuthoritySection_t */
typedef struct__156839 MovementAuthoritySection_t_TrackAtlasTypes;

typedef MovementAuthoritySection_t_TrackAtlasTypes array__156848[10];

/* TrackAtlasTypes::MovementAuthoritySectionlist_t */
typedef array__156848 MovementAuthoritySectionlist_t_TrackAtlasTypes;

typedef struct {
  T_internal_Type_Obu_BasicTypes_Pkg t_endtimer;
  L_internal_Type_Obu_BasicTypes_Pkg d_endtimerstoploc;
} struct__156851;

/* TrackAtlasTypes::Endtimer_t */
typedef struct__156851 Endtimer_t_TrackAtlasTypes;

typedef struct {
  L_internal_Type_Obu_BasicTypes_Pkg d_DP_or_OL;
  V_internal_Type_Obu_BasicTypes_Pkg v_release;
  kcg_bool calc_v_release_onboard;
} struct__156856;

/* TrackAtlasTypes::DP_or_OL_t */
typedef struct__156856 DP_or_OL_t_TrackAtlasTypes;

typedef struct {
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
} struct__156862;

/* TrackAtlasTypes::MovementAuthority_t */
typedef struct__156862 MovementAuthority_t_TrackAtlasTypes;

typedef struct {
  kcg_bool trackAheadFree;
  kcg_bool driverSelectsStart;
} struct__156880;

/* MA_Request::Driver2MAR_T */
typedef struct__156880 Driver2MAR_T_MA_Request;

/* TA_MA_Request::Driver2MAR_T */
typedef struct__156880 Driver2MAR_T_TA_MA_Request;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  T_MAR t_mar;
  T_TIMEOUTRQST t_timeoutrqst;
  T_CYCRQST t_cycrqst;
} struct__156885;

/* Packet_Types_Pkg::P57_MovementAuthorityRequestParameters_T */
typedef struct__156885 P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool compatibleModeAndLevel;
  M_LEVEL level;
  kcg_bool newLevel;
  M_MODE Mode;
  kcg_bool newMode;
} struct__156893;

/* Level_And_Mode_Types_Pkg::T_Mode_Level */
typedef struct__156893 T_Mode_Level_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int nid_engine;
  Q_MARQSTREASON q_marqstreason;
} struct__156901;

/* TM_radio_messages::M_132_T */
typedef struct__156901 M_132_T_TM_radio_messages;

typedef kcg_int array_int_6[6];

/* SDMConversionModelPkg::a_BrakeSteps_t */
typedef array_int_6 a_BrakeSteps_t_SDMConversionModelPkg;

/* SDMConversionModelPkg::v_BrakeSteps_t */
typedef array_int_6 v_BrakeSteps_t_SDMConversionModelPkg;

/* TM::Array06 */
typedef array_int_6 Array06_TM;

typedef struct {
  kcg_bool valid;
  L_SECTION l_section;
  Q_SECTIONTIMER q_sectiontimer;
  T_SECTIONTIMER t_sectiontimer;
  D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc;
} struct__156913;

/* TM::P015_section_enum_T */
typedef struct__156913 P015_section_enum_T_TM;

/* TM::P012_section_enum_T */
typedef struct__156913 P012_section_enum_T_TM;

typedef P015_section_enum_T_TM array__156921[32];

/* TM::P015_OBU_sectionlist_enum_T */
typedef array__156921 P015_OBU_sectionlist_enum_T_TM;

typedef struct {
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
} struct__156924;

/* TM::P015_OBU_T */
typedef struct__156924 P015_OBU_T_TM;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_Absolute;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_LRBG;
  G_internal_Type_Obu_BasicTypes_Pkg Gradient;
  L_internal_Type_Obu_BasicTypes_Pkg L_Gradient;
} struct__156949;

/* TrackAtlasTypes::Gradient_section_t */
typedef struct__156949 Gradient_section_t_TrackAtlasTypes;

typedef Gradient_section_t_TrackAtlasTypes array__156957[50];

/* TrackAtlasTypes::GradientProfile_t */
typedef array__156957 GradientProfile_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} struct__156960;

/* TM::P021_section_enum_T */
typedef struct__156960 P021_section_enum_T_TM;

typedef P021_section_enum_T_TM array__156967[33];

/* TM::P021_OBU_sectionlist_enum_T */
typedef array__156967 P021_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P021_OBU_sectionlist_enum_T_TM sections;
} struct__156970;

/* TM::P021_OBU_T */
typedef struct__156970 P021_OBU_T_TM;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  NID_ENGINE nid_engine;
  NID_EM nid_em;
  Q_EMERGENCYSTOP q_emergencystop;
} struct__156978;

/* TM_radio_messages::M_147_T */
typedef struct__156978 M_147_T_TM_radio_messages;

typedef struct {
  kcg_bool handled;
  NID_EM nid_em;
  kcg_int nfree;
} struct__156988;

/* TA_EmergencyStop::NID_EM_Store::NID_EM_STORE_Acc_T */
typedef struct__156988 NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store;

typedef struct { NID_EM nid_em; kcg_bool valid; } struct__156994;

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Item_T */
typedef struct__156994 NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store;

typedef NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store array__156999[8];

typedef struct { kcg_int nfree; array__156999 items; } struct__157002;

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_T */
typedef struct__157002 NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_Abs;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_LRBG;
  V_internal_Type_Obu_BasicTypes_Pkg MRS;
} struct__157007;

/* DMI_Types_Pkg::DMI_speedProfileElement_T */
typedef struct__157007 DMI_speedProfileElement_T_DMI_Types_Pkg;

/* TrackAtlasTypes::MRSP_section_t */
typedef struct__157007 MRSP_section_t_TrackAtlasTypes;

typedef MRSP_section_t_TrackAtlasTypes array__157014[110];

/* TrackAtlasTypes::MRSP_Profile_t */
typedef array__157014 MRSP_Profile_t_TrackAtlasTypes;

typedef struct {
  kcg_int write_index;
  MRSP_Profile_t_TrackAtlasTypes MRSP;
} struct__157017;

/* TA_Export::MRSP_reduction_acc */
typedef struct__157017 MRSP_reduction_acc_TA_Export;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg d_static_abs;
  L_internal_Type_Obu_BasicTypes_Pkg d_static_LRBG;
  kcg_bool q_train_length_corr;
  V_internal_Type_Obu_BasicTypes_Pkg v_static;
} struct__157022;

/* TrackAtlasTypes::StaticSpeedSection_t */
typedef struct__157022 StaticSpeedSection_t_TrackAtlasTypes;

typedef StaticSpeedSection_t_TrackAtlasTypes array__157030[50];

/* TrackAtlasTypes::StaticSpeedProfile_t */
typedef array__157030 StaticSpeedProfile_t_TrackAtlasTypes;

typedef struct { kcg_bool valid; Q_DIR q_dir; } struct__157033;

/* Packet_Types_Pkg::P135_StopShuntingOnDeskOpening_T */
typedef struct__157033 P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg;

/* TM::P135_OBU_T */
typedef struct__157033 P135_OBU_T_TM;

typedef struct {
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
} struct__157038;

/* Packet_Types_Pkg::P12_Level1MovementAuthority_T */
typedef struct__157038 P12_Level1MovementAuthority_T_Packet_Types_Pkg;

typedef P12_Level1MovementAuthority_T_Packet_Types_Pkg array__157066[5];

/* Packet_Types_Pkg::P12_Level1MovementAuthorities_T */
typedef array__157066 P12_Level1MovementAuthorities_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_MAMODE d_mamode;
  M_MAMODE m_mamode;
  V_MAMODE v_mamode;
  L_MAMODE l_mamode;
  L_ACKMAMODE l_ackmamode;
  Q_MAMODE q_mamode;
} struct__157069;

/* Packet_Types_Pkg::P80_ModeProfile_T */
typedef struct__157069 P80_ModeProfile_T_Packet_Types_Pkg;

typedef P80_ModeProfile_T_Packet_Types_Pkg array__157081[3];

/* Packet_Types_Pkg::P80_ModeProfiles_T */
typedef array__157081 P80_ModeProfiles_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_NEWCOUNTRY q_newcountry;
  NID_C nid_c;
  NID_BG nid_bg;
} struct__157084;

/* Packet_Types_Pkg::P63_BaliseInSRAuthority_T */
typedef struct__157084 P63_BaliseInSRAuthority_T_Packet_Types_Pkg;

typedef P63_BaliseInSRAuthority_T_Packet_Types_Pkg array__157092[7];

/* Packet_Types_Pkg::P63_ListofBalisesinSRAuthority_T */
typedef array__157092 P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} struct__157095;

/* Packet_Types_Pkg::P21_GradientProfile_T */
typedef struct__157095 P21_GradientProfile_T_Packet_Types_Pkg;

typedef P21_GradientProfile_T_Packet_Types_Pkg array__157104[7];

/* Packet_Types_Pkg::P21_GradientProfiles_T */
typedef array__157104 P21_GradientProfiles_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_STARTREVERSE d_startreverse;
  L_REVERSEAREA l_reversearea;
} struct__157107;

/* Packet_Types_Pkg::P138_ReversingAreaInformation_T */
typedef struct__157107 P138_ReversingAreaInformation_T_Packet_Types_Pkg;

/* TM::P138_OBU_T */
typedef struct__157107 P138_OBU_T_TM;

typedef struct {
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
} struct__157115;

/* Packet_Types_Pkg::P15_Level23MovementAuthority_T */
typedef struct__157115 P15_Level23MovementAuthority_T_Packet_Types_Pkg;

typedef P15_Level23MovementAuthority_T_Packet_Types_Pkg array__157142[5];

/* Packet_Types_Pkg::P15_Level23MovementAuthorities_T */
typedef array__157142 P15_Level23MovementAuthorities_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_REVERSE d_reverse;
  V_REVERSE v_reverse;
} struct__157145;

/* Packet_Types_Pkg::P139_ReversingSupervisionInformation_T */
typedef struct__157145 P139_ReversingSupervisionInformation_T_Packet_Types_Pkg;

/* TM::P139_OBU_T */
typedef struct__157145 P139_OBU_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SRSTOP q_srstop;
} struct__157153;

/* Packet_Types_Pkg::P137_StopIfInStaffResponsible_T */
typedef struct__157153 P137_StopIfInStaffResponsible_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NC_DIFF nc_diff;
  V_DIFF v_diff;
} struct__157159;

/* TM_baseline2::P027V1_section_enum_qdiff_T */
typedef struct__157159 P027V1_section_enum_qdiff_T_TM_baseline2;

typedef P027V1_section_enum_qdiff_T_TM_baseline2 array__157165[32];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_qdiff_T */
typedef array__157165 P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  N_ITER n_iter;
  P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 SECTIONS_q_diff;
} struct__157168;

/* TM_baseline2::P027V1_section_enum_T */
typedef struct__157168 P027V1_section_enum_T_TM_baseline2;

typedef P027V1_section_enum_T_TM_baseline2 array__157177[33];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_T */
typedef array__157177 P027V1_OBU_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 sections;
} struct__157180;

/* TM_baseline2::P027V1_OBU_T */
typedef struct__157180 P027V1_OBU_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_DIFF q_diff;
  NC_CDDIFF nc_cddiff;
  NC_DIFF nc_diff;
  V_DIFF v_diff;
} struct__157187;

/* Packet_Types_Pkg::Diff_T */
typedef struct__157187 Diff_T_Packet_Types_Pkg;

typedef Diff_T_Packet_Types_Pkg array__157195[7];

/* Packet_Types_Pkg::DiffArray_T */
typedef array__157195 DiffArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  DiffArray_T_Packet_Types_Pkg diffArray;
} struct__157198;

/* Packet_Types_Pkg::SSP_T */
typedef struct__157198 SSP_T_Packet_Types_Pkg;

typedef SSP_T_Packet_Types_Pkg array__157206[7];

/* Packet_Types_Pkg::SSPArray_T */
typedef array__157206 SSPArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  DiffArray_T_Packet_Types_Pkg diffArray;
  SSPArray_T_Packet_Types_Pkg SSPArray;
} struct__157209;

/* Packet_Types_Pkg::P27_InternationalStaticSpeedProfile_T */
typedef struct__157209 P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg;

typedef struct { kcg_bool valid; Q_DIR q_dir; Q_SCALE q_scale; } struct__157220;

/* TM_baseline2::P027V1_OBU_body_enum_T */
typedef struct__157220 P027V1_OBU_body_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_LEVELTR d_leveltr;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
  L_ACKLEVELTR l_ackleveltr;
} struct__157226;

/* Packet_Types_Pkg::P41_LevelTransitionOrder_T */
typedef struct__157226 P41_LevelTransitionOrder_T_Packet_Types_Pkg;

typedef P41_LevelTransitionOrder_T_Packet_Types_Pkg array__157236[7];

/* Packet_Types_Pkg::P41_LevelTransistionOrders_T */
typedef array__157236 P41_LevelTransistionOrders_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
  L_ACKLEVELTR l_ackleveltr;
} struct__157239;

/* TM::P041_section_enum_T */
typedef struct__157239 P041_section_enum_T_TM;

typedef P041_section_enum_T_TM array__157246[33];

/* TM::P041_OBU_sectionlist_enum_T */
typedef array__157246 P041_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_LEVELTR d_leveltr;
  N_ITER n_iter;
  P041_OBU_sectionlist_enum_T_TM sections;
} struct__157249;

/* TM::P041_OBU_T */
typedef struct__157249 P041_OBU_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
} struct__157258;

/* Packet_Types_Pkg::P46_ConditionalLevelTransitionOrder_T */
typedef struct__157258 P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg;

typedef P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg array__157265[7];

/* Packet_Types_Pkg::P46_ConditionalLevelTransitionOrders_T */
typedef array__157265 P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
} struct__157268;

/* TM::P046_section_enum_T */
typedef struct__157268 P046_section_enum_T_TM;

typedef P046_section_enum_T_TM array__157274[33];

/* TM::P046_OBU_sectionlist_enum_T */
typedef array__157274 P046_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  N_ITER n_iter;
  P046_OBU_sectionlist_enum_T_TM sections;
} struct__157277;

/* TM::P046_OBU_T */
typedef struct__157277 P046_OBU_T_TM;

typedef struct {
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
} struct__157284;

/* TM::P012_OBU_T */
typedef struct__157284 P012_OBU_T_TM;

typedef struct {
  kcg_bool Mess_15;
  kcg_bool Mess_16;
  kcg_bool Mess_2;
  kcg_bool Mess_27;
  kcg_bool Mess_28;
  kcg_bool Mess_6;
} struct__157310;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_Mess */
typedef struct__157310 T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg;

typedef struct {
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
} struct__157319;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_Packet */
typedef struct__157319 T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg begin_section;
  L_internal_Type_Obu_BasicTypes_Pkg end_section;
  G_internal_Type_Obu_BasicTypes_Pkg gradient;
} struct__157336;

/* DMI_Types_Pkg::DMI_gradientProfileElement_T */
typedef struct__157336 DMI_gradientProfileElement_T_DMI_Types_Pkg;

/* TrackAtlasTypes::GradientProfile_for_DMI_section_t */
typedef struct__157336 GradientProfile_for_DMI_section_t_TrackAtlasTypes;

typedef GradientProfile_for_DMI_section_t_TrackAtlasTypes array__157343[50];

/* TrackAtlasTypes::GradientProfile_for_DMI_t */
typedef array__157343 GradientProfile_for_DMI_t_TrackAtlasTypes;

typedef struct__156704 array__157346[32];

/* TM::P003_OBU_nid_c_sectionlist_enum_T */
typedef array__157346 P003_OBU_nid_c_sectionlist_enum_T_TM;

/* TM_baseline2::P003V1_sectionlist_enum_T */
typedef array__157346 P003V1_sectionlist_enum_T_TM_baseline2;

typedef struct {
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
} struct__157349;

/* TM_baseline2::P003V1_OBU_T */
typedef struct__157349 P003V1_OBU_T_TM_baseline2;

typedef kcg_int array_int_24[24];

/* DATA::DMI_Dynamic_int_array_T */
typedef array_int_24 DMI_Dynamic_int_array_T_DATA;

/* TM::Array24 */
typedef array_int_24 Array24_TM;

typedef struct {
  SSP_t_section_t_TA_MRSP target;
  SSP_s_section_t_TA_MRSP speed;
} struct__157379;

/* TA_MRSP::SSP_section_t */
typedef struct__157379 SSP_section_t_TA_MRSP;

typedef SSP_section_t_TA_MRSP array__157384[33];

/* TA_MRSP::SSP_cat_t */
typedef array__157384 SSP_cat_t_TA_MRSP;

typedef array__157384 array__157387[11];

/* TA_MRSP::SSP_matrix_t */
typedef array__157387 SSP_matrix_t_TA_MRSP;

typedef struct {
  MovementAuthoritySectionlist_t_TrackAtlasTypes sections;
  L_internal_Type_Obu_BasicTypes_Pkg d_endsection;
} struct__157390;

/* TA_MA::AccuDistanceProfileMA */
typedef struct__157390 AccuDistanceProfileMA_TA_MA;

typedef struct {
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
} struct__157395;

/* TM::P003_OBU_T */
typedef struct__157395 P003_OBU_T_TM;

typedef struct {
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg train_packets;
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg train_messages;
  kcg_bool p12;
  kcg_bool p15;
  kcg_bool p21;
  kcg_bool p27;
} struct__157450;

/* TrackAtlasTypes::DataForModeAndLevel_t */
typedef struct__157450 DataForModeAndLevel_t_TrackAtlasTypes;

typedef struct {
  kcg_bool freshMA;
  MovementAuthority_t_TrackAtlasTypes MA;
  kcg_bool freshGradientProfile;
  GradientProfile_t_TrackAtlasTypes GradientProfile;
  kcg_bool freshMRSP;
  MRSP_Profile_t_TrackAtlasTypes MRSP;
} struct__157459;

/* TrackAtlasTypes::DataForSupervision_nextGen_t */
typedef struct__157459 DataForSupervision_nextGen_t_TrackAtlasTypes;

typedef struct {
  GradientProfile_for_DMI_t_TrackAtlasTypes GradientProfile;
  kcg_bool Gradient_profile_updated;
  MRSP_Profile_t_TrackAtlasTypes MRSP;
  kcg_bool MRSP_updated;
} struct__157468;

/* TrackAtlasTypes::DataForDMI_t */
typedef struct__157468 DataForDMI_t_TrackAtlasTypes;

typedef struct {
  kcg_bool trainStandStill;
  kcg_bool driverRequestModify;
  kcg_bool communicationSessionEstablished;
  kcg_bool safeRadioConnectionLost;
  kcg_bool approachingRBCarea;
  kcg_bool MoRCreadyFlag;
} struct__157475;

/* trainData_Types_pkg::trainData_Events_T */
typedef struct__157475 trainData_Events_T_trainData_Types_pkg;

typedef struct {
  kcg_bool brakeTrigger;
  kcg_bool driverRequestModify;
  kcg_bool shortenLocationBasedInformation;
  kcg_bool deleteMA;
  kcg_bool trainLengthIncreased;
} struct__157484;

/* trainData_Types_pkg::trainData_Trigger_T */
typedef struct__157484 trainData_Trigger_T_trainData_Types_pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool validatedByDriver;
  kcg_bool RBCsystemVersionOnboard;
  kcg_bool validatedbyRBC;
  kcg_bool waitingForRBCResponse;
  kcg_bool driverIsModificationTrainData;
  T_TRAIN timeStampValidateToRBC;
} struct__157492;

/* trainData_Types_pkg::trainDataStatus_T */
typedef struct__157492 trainDataStatus_T_trainData_Types_pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  NC_TRAIN trainCategory;
  L_internal_Type_Obu_BasicTypes_Pkg l_train;
  M_BRAKEPERCT_DMI_Types_Pkg m_brakeperct;
  V_internal_Type_Obu_BasicTypes_Pkg v_maxTrain;
  M_AXLELOADCAT m_axleLoad;
  M_AIRTIGHT m_airTight;
  M_LOADINGGAUGE m_loadingGauge;
} struct__157502;

/* DMI_Messages_Bothways_Pkg::DMI_Train_Data_T */
typedef struct__157502 DMI_Train_Data_T_DMI_Messages_Bothways_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  kcg_bool acknowledged;
} struct__157514;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Train_Data_Ack_T */
typedef struct__157514 DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  NID_ENGINE nid_engine;
  T_TRAIN t_train_req;
} struct__157520;

/* TM_radio_messages::M_146_T */
typedef struct__157520 M_146_T_TM_radio_messages;

typedef P011_voltage_section_array_T_TM_TrainToTrack array_int_2_4[4];

/* TM_TrainToTrack::P011_voltage_sectionlist_array_T */
typedef array_int_2_4 P011_voltage_sectionlist_array_T_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  NID_OPERATIONAL trainRunningNumber;
} struct__157532;

/* DMI_Messages_Bothways_Pkg::DMI_Train_Running_Number_T */
typedef struct__157532 DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool deskOpen;
  cab_ID_T_TIU_Types_Pkg ownCab;
  cab_ID_T_TIU_Types_Pkg activeCab;
} struct__157538;

/* TIU_Types_Pkg::TIU_trainStatus_T */
typedef struct__157538 TIU_trainStatus_T_TIU_Types_Pkg;

typedef M_TrainTrack_Message_T_TM_radio_messages array__157545[100];

/* TM_lib_internal::M_TrainTrackRadioOutputBuffer_t */
typedef array__157545 M_TrainTrackRadioOutputBuffer_t_TM_lib_internal;

typedef kcg_int array_int_1[1];

/* TM_TrainToTrack::P044_other_data */
typedef array_int_1 P044_other_data_TM_TrainToTrack;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  L_PACKET l_packet;
  NID_XUSER nid_xuser;
  P044_other_data_TM_TrainToTrack external_data;
} struct__157551;

/* TM_TrainToTrack::P044 */
typedef struct__157551 P044_TM_TrainToTrack;

typedef struct { kcg_bool present; M_ERROR errorType; } struct__157559;

/* ProvidePositionReport_Pkg::ErrorMessage_T */
typedef struct__157559 ErrorMessage_T_ProvidePositionReport_Pkg;

typedef struct {
  M_MODE currMode;
  M_LEVEL currLevel;
  kcg_bool levelTransitionBorderPassed;
} struct__157564;

/* ProvidePositionReport_Pkg::ModeLevel2PositionReport_T */
typedef struct__157564 ModeLevel2PositionReport_T_ProvidePositionReport_Pkg;

typedef struct { NID_NTC nid_ntc; Q_LENGTH q_length; } struct__157570;

/* BG_Types_Pkg::TrainToTrackStatus_T */
typedef struct__157570 TrainToTrackStatus_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_BG nidBG;
  LocWithInAcc_T_Obu_BasicTypes_Pkg location;
} struct__157575;

/* ProvidePositionReport_Pkg::ReportedBG_T */
typedef struct__157575 ReportedBG_T_ProvidePositionReport_Pkg;

typedef ReportedBG_T_ProvidePositionReport_Pkg array__157581[8];

/* ProvidePositionReport_Pkg::ReportedBGList_T */
typedef array__157581 ReportedBGList_T_ProvidePositionReport_Pkg;

typedef struct { kcg_bool newSessionEstablished; } struct__157584;

/* ProvidePositionReport_Pkg::RBC_Communication_T */
typedef struct__157584 RBC_Communication_T_ProvidePositionReport_Pkg;

typedef struct {
  kcg_bool minSafeRearEndPassed;
  kcg_bool maxSafeFrontEndPassed;
} struct__157588;

/* ProvidePositionReport_Pkg::LocationBasedEvents_T */
typedef struct__157588 LocationBasedEvents_T_ProvidePositionReport_Pkg;

typedef IterPacket58_T_Packet_Types_Pkg array__157593[2];

/* Packet_Types_Pkg::IterPacket58List_T */
typedef array__157593 IterPacket58List_T_Packet_Types_Pkg;

typedef struct {
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
} struct__157596;

/* Packet_Types_Pkg::P58_PositionReportParameters_T */
typedef struct__157596 P58_PositionReportParameters_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_LOC d_loc;
  Q_LGTLOC q_lgtloc;
} struct__157609;

/* TM::P058_section_enum_T */
typedef struct__157609 P058_section_enum_T_TM;

typedef P058_section_enum_T_TM array__157615[32];

/* TM::P058_OBU_sectionlist_enum_T */
typedef array__157615 P058_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  T_CYCLOC t_cycloc;
  D_CYCLOC d_cycloc;
  M_LOC m_loc;
  N_ITER n_iter;
  P058_OBU_sectionlist_enum_T_TM sections;
} struct__157618;

/* TM::P058_OBU_T */
typedef struct__157618 P058_OBU_T_TM;

typedef struct {
  kcg_bool linkedBGError;
  kcg_bool unlinkedBGError;
  kcg_bool BG_versionIncompatible;
  kcg_bool radioSequenceError;
  kcg_bool tNvContactError;
  kcg_bool otherTimingError;
  kcg_bool radioMessageConsistencyError;
  NID_C nid_c;
  NID_ERRORBG_BG_Types_Pkg nid_errorbg;
} struct__157629;

/* Common_Types_Pkg::MSG_Errors_T */
typedef struct__157629 MSG_Errors_T_Common_Types_Pkg;

typedef struct {
  kcg_bool isChanged;
  NID_BG bg_id;
  NID_C nid_c;
  MSG_Errors_T_Common_Types_Pkg errors;
} struct__157641;

/* xdebugSupport_Pkg::probesBalises_T */
typedef struct__157641 probesBalises_T_xdebugSupport_Pkg;

typedef struct {
  P41_LevelTransistionOrders_T_Packet_Types_Pkg p41;
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg p46;
  kcg_bool p12_received;
  kcg_bool p15_received;
  kcg_bool p21_received;
  kcg_bool p27_received;
  NID_LRBG LRBG;
  L_internal_Type_Obu_BasicTypes_Pkg referenceLocation;
} struct__157648;

/* xdebugSupport_Pkg::dataCollectionForLevelTransition_T */
typedef struct__157648 dataCollectionForLevelTransition_T_xdebugSupport_Pkg;

typedef struct {
  kcg_bool pendingL1Transition;
  kcg_bool pendingL12L3Transition;
  kcg_bool pendingAckOfTrainDataFromRBC;
  kcg_bool emergencyStopAccepted;
  kcg_int lastAckTextMessageId;
  kcg_bool pendingNTCTransition;
  kcg_bool SPPAndGradientOnBoard;
  kcg_bool MACoverNotFullLength;
} struct__157659;

/* Common_Types_Pkg::filterRelatedEvents_T */
typedef struct__157659 filterRelatedEvents_T_Common_Types_Pkg;

typedef struct {
  kcg_bool P12_received;
  kcg_bool P15_received;
  kcg_bool P21_received;
  kcg_bool P27_received;
} struct__157670;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_MASSPGradient_Available */
typedef struct__157670 T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg;

typedef ReceivedMessage_T_Common_Types_Pkg array__157677[3];

/* InformationFilter_Pkg::TransitionBuffer_T */
typedef array__157677 TransitionBuffer_T_InformationFilter_Pkg;

typedef ModeDecisionTableActionKind_DataDictionary_Pkg array__157680[17];

typedef array__157680 array__157683[256];

/* DataDictionary_Pkg::ModeDecisionTableType */
typedef array__157683 ModeDecisionTableType_DataDictionary_Pkg;

typedef LevelDecisionTableActionKind_DataDictionary_Pkg array__157686[5];

typedef array__157686 array__157689[256];

/* DataDictionary_Pkg::LevelDecisionTableType */
typedef array__157689 LevelDecisionTableType_DataDictionary_Pkg;

typedef kcg_bool array_bool_256[256];

typedef array_bool_256 array_bool_256_46[46];

/* CheckEuroradioMessage::MetadataTruthtable_T1 */
typedef array_bool_256_46 MetadataTruthtable_T1_CheckEuroradioMessage;

typedef struct {
  kcg_bool present;
  kcg_bool consistencyError;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg header;
  RadioMetadata_T_Common_Types_Pkg radioMetadata;
  CompressedPackets_T_Common_Types_Pkg packets;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} struct__157698;

/* Radio_Types_Pkg::RadioMessage_T */
typedef struct__157698 RadioMessage_T_Radio_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool checkResult;
  TelegramHeader_T_BG_Types_Pkg telegramheader;
  CompressedPackets_T_Common_Types_Pkg packets;
} struct__157707;

/* BG_Types_Pkg::Telegram_T */
typedef struct__157707 Telegram_T_BG_Types_Pkg;

typedef Telegram_T_BG_Types_Pkg array__157714[8];

/* BG_Types_Pkg::TelegramArray_T */
typedef array__157714 TelegramArray_T_BG_Types_Pkg;

typedef struct {
  kcg_bool present;
  TelegramArray_T_BG_Types_Pkg Telegrams;
  kcg_int numberBalises;
  centerOfBalisePosition_T_BG_Types_Pkg centerOfBalisePosition;
} struct__157717;

/* BG_Types_Pkg::BG_Message_T */
typedef struct__157717 BG_Message_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  MsgSource_T_Common_Types_Pkg msg_type;
  BG_Message_T_BG_Types_Pkg telegramHeaders;
  RadioMessage_T_Radio_Types_Pkg radio_Msg;
} struct__157724;

/* Common_Types_Pkg::TrackSide_ForCheck_T */
typedef struct__157724 TrackSide_ForCheck_T_Common_Types_Pkg;

typedef struct {
  kcg_bool badBaliseFlag;
  kcg_bool BGMessageSent;
  NID_C C_ID;
  NID_BG BG_ID;
  centerOfBalisePosition_T_BG_Types_Pkg balisePosition;
  centerOfBalisePosition_T_BG_Types_Pkg positionFirstContact;
  kcg_int collectedTelegrams;
  kcg_int totalTelegrams;
} struct__157732;

/* Receive_TrackSide_Msg_Pkg::BGCollector_T */
typedef struct__157732 BGCollector_T_Receive_TrackSide_Msg_Pkg;

typedef struct {
  kcg_bool valid;
  Telegram_T_BG_Types_Pkg telegram;
  centerOfBalisePosition_T_BG_Types_Pkg position;
} struct__157743;

/* Receive_TrackSide_Msg_Pkg::TelegramStore_T */
typedef struct__157743 TelegramStore_T_Receive_TrackSide_Msg_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_Request_T_DMI_Types_Pkg m_request;
} struct__157749;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Driver_Request_T */
typedef struct__157749 DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  M_LEVEL level;
  M_POSITION position;
  T_TransitionType_Level_And_Mode_Types_Pkg transitionType;
  kcg_bool immediateAck;
  Location_T_Obu_BasicTypes_Pkg AckLength;
} struct__157755;

/* Level_And_Mode_Types_Pkg::T_LevelTansitionInfo */
typedef struct__157755 T_LevelTansitionInfo_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_level_T_DMI_Types_Pkg level;
} struct__157763;

/* DMI_Messages_Bothways_Pkg::DMI_Level_Data_T */
typedef struct__157763 DMI_Level_Data_T_DMI_Messages_Bothways_Pkg;

typedef struct {
  kcg_bool is_set;
  T_LevelTansitionInfo_Level_And_Mode_Types_Pkg transition;
  NID_LRBG LRBG;
  L_internal_Type_Obu_BasicTypes_Pkg referenceLocation;
} struct__157769;

/* Level_And_Mode_Types_Pkg::T_LevelTransition */
typedef struct__157769 T_LevelTransition_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool Req_Exit_SH;
  kcg_bool Req_NL;
  kcg_bool Req_Override;
  kcg_bool Req_SH;
  kcg_bool Req_Start;
  kcg_bool ETCS_Isolated;
} struct__157776;

/* DMI_Types_Pkg::DMI_DriverRequest_T */
typedef struct__157776 DMI_DriverRequest_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  DMI_TextMessage_ID_T_DMI_Types_Pkg dmi_textMessageID;
  T_internal_Type_Obu_BasicTypes_Pkg timeStamp;
  Q_TEXTREPORT textReport;
  DMI_context_TXT_MSG_T_DMI_Types_Pkg context;
  NID_TEXTMESSAGE nid_textmessage;
  M_LEVEL whichLevel;
  M_MODE whichMode;
} struct__157786;

/* DMI_Types_Pkg::DMI_TXT_MSG_status_T */
typedef struct__157786 DMI_TXT_MSG_status_T_DMI_Types_Pkg;

typedef DMI_TXT_MSG_status_T_DMI_Types_Pkg array__157797[31];

/* DMI_Types_Pkg::DMI_TXT_MSGList_status_T */
typedef array__157797 DMI_TXT_MSGList_status_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  M_MODE whichMode;
  kcg_bool acknowledgement;
} struct__157800;

/* DMI_Types_Pkg::DMI_DriverAck_T */
typedef struct__157800 DMI_DriverAck_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  DMI_DriverAck_T_DMI_Types_Pkg DriverAck;
  DMI_DriverRequest_T_DMI_Types_Pkg DriverRequest;
  kcg_bool LevelAck;
} struct__157806;

/* DMI_Types_Pkg::DMI_To_Modes_T */
typedef struct__157806 DMI_To_Modes_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_TextMessage_ID_T_DMI_Types_Pkg textMessage_ID;
  kcg_bool acknowledged;
} struct__157813;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Text_Message_Ack_T */
typedef struct__157813 DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  kcg_int DMI_nid_icon_identifier;
} struct__157820;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Icon_Ack_T */
typedef struct__157820 DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef kcg_char array_char_255[255];

/* DMI_Types_Pkg::DMI_TEXT */
typedef array_char_255 DMI_TEXT_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_DMI_Identifier_T_DMI_Types_Pkg DMI_Identifier;
  DMI_Cabin_Identifier_T_DMI_Types_Pkg Cabin_Identifier;
  L_TEXT l_name;
  DMI_TEXT_DMI_Types_Pkg DMI_name;
  M_VERSION m_version;
} struct__157829;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Identifier_T */
typedef struct__157829 DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  kcg_bool DMI_Active;
  kcg_bool DMI_Error;
  kcg_bool DMI_DriverIdValidated;
  kcg_bool DMI_LevelSelectedByDirver;
  kcg_bool DMI_TrainRunningNumberFirstValidation;
  kcg_bool DMI_TrainRunningNumberValidated;
  kcg_bool DMI_TrainDataValidated;
  kcg_bool DMI_StartReceived;
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg DMI_Identifier;
} struct__157839;

/* DMI_Types_Pkg::DMI_EVC_status_T */
typedef struct__157839 DMI_EVC_status_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  M_ADHESION adhesionFactor;
} struct__157851;

/* DMI_Messages_Bothways_Pkg::DMI_Adhesion_Factor_Data_T */
typedef struct__157851 DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg;

typedef kcg_char array_char_9[9];

/* DMI_Messages_Bothways_Pkg::driverIdentifier_T */
typedef array_char_9 driverIdentifier_T_DMI_Messages_Bothways_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  driverIdentifier_T_DMI_Messages_Bothways_Pkg driverIdentifier;
} struct__157860;

/* DMI_Messages_Bothways_Pkg::DMI_Driver_Identifier_T */
typedef struct__157860 DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
} struct__157866;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Radio_Net_Data_T */
typedef struct__157866 DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg systemTime;
  DMI_StatusSet_T_DMI_Types_Pkg statusSet;
  kcg_int nAlive;
} struct__157871;

/* DMI_Messages_DMI_to_EVC_Pkg::DMI_Status_T */
typedef struct__157871 DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg;

typedef struct {
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
} struct__157878;

/* API_DMI_Pkg::DMI_to_EVC_Message_T */
typedef struct__157878 DMI_to_EVC_Message_T_API_DMI_Pkg;

typedef kcg_int array_int_255[255];

/* DATA::DMI_TEXT_INT_Array_T */
typedef array_int_255 DMI_TEXT_INT_Array_T_DATA;

typedef kcg_int array_int_261[261];

/* DATA::DMI_Identifier_Request_int_array_T */
typedef array_int_261 DMI_Identifier_Request_int_array_T_DATA;

/* DATA::DMI_Identifier_int_array_T */
typedef array_int_261 DMI_Identifier_int_array_T_DATA;

typedef struct {
  TargetType_T_TargetManagement_types targetType;
  L_internal_Type_Obu_BasicTypes_Pkg distance;
  V_internal_Type_Obu_BasicTypes_Pkg speed;
  kcg_bool valid;
} struct__157900;

/* TargetManagement_types::Target_T */
typedef struct__157900 Target_T_TargetManagement_types;

typedef struct {
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
} struct__157907;

/* SDM_Types_Pkg::SDM_Commands_T */
typedef struct__157907 SDM_Commands_T_SDM_Types_Pkg;

typedef kcg_bool array_bool_114[114];

/* CalcBrakingCurves_types::ParabolaCurveValid_T */
typedef array_bool_114 ParabolaCurveValid_T_CalcBrakingCurves_types;

typedef kcg_real array_real_114[114];

/* CalcBrakingCurves_types::ParabolaCurveDistances_T */
typedef array_real_114 ParabolaCurveDistances_T_CalcBrakingCurves_types;

/* CalcBrakingCurves_types::ParabolaCurveSpeeds_T */
typedef array_real_114 ParabolaCurveSpeeds_T_CalcBrakingCurves_types;

/* CalcBrakingCurves_types::ParabolaCurveAccelerations_T */
typedef array_real_114 ParabolaCurveAccelerations_T_CalcBrakingCurves_types;

typedef struct {
  ParabolaCurveDistances_T_CalcBrakingCurves_types distances;
  ParabolaCurveSpeeds_T_CalcBrakingCurves_types speeds;
  ParabolaCurveAccelerations_T_CalcBrakingCurves_types accelerations;
  ParabolaCurveValid_T_CalcBrakingCurves_types valid;
} struct__157940;

/* CalcBrakingCurves_types::ParabolaCurve_T */
typedef struct__157940 ParabolaCurve_T_CalcBrakingCurves_types;

typedef ParabolaCurve_T_CalcBrakingCurves_types array__157947[110];

/* CalcBrakingCurves_types::ParabolaCurve_list_MRSP_T */
typedef array__157947 ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types;

typedef struct {
  ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types MRSP_EBD_curves;
  ParabolaCurve_T_CalcBrakingCurves_types EOA_SBD_curve;
  ParabolaCurve_T_CalcBrakingCurves_types SvL_LoA_EBD_curve;
  ParabolaCurve_T_CalcBrakingCurves_types GUI_curve;
  kcg_bool GUI_curve_enabled;
} struct__157950;

/* CalcBrakingCurves_types::CurveCollection_T */
typedef struct__157950 CurveCollection_T_CalcBrakingCurves_types;

typedef struct {
  TargetType_T_TargetManagement_types targetType;
  kcg_real distance;
  kcg_real speed;
} struct__157958;

/* TargetManagement_types::Target_real_T */
typedef struct__157958 Target_real_T_TargetManagement_types;

typedef Target_real_T_TargetManagement_types array__157964[110];

/* TargetManagement_types::Target_list_MRSP_real_T */
typedef array__157964 Target_list_MRSP_real_T_TargetManagement_types;

typedef struct {
  kcg_bool updatedTargetList;
  Target_list_MRSP_real_T_TargetManagement_types MRSP_targetList;
  Target_real_T_TargetManagement_types EOA_target;
  Target_real_T_TargetManagement_types SvL_LoA_target;
} struct__157967;

/* TargetManagement_types::TargetCollection_T */
typedef struct__157967 TargetCollection_T_TargetManagement_types;

typedef struct {
  L_internal_real_Type_SDM_Types_Pkg position;
  A_internal_real_Type_SDM_Types_Pkg gradient_acceleration;
  kcg_bool valid;
} struct__157974;

/* SDM_GradientAcceleration_types::A_gradient_element_t */
typedef struct__157974 A_gradient_element_t_SDM_GradientAcceleration_types;

typedef struct {
  kcg_real location;
  kcg_real gradient;
  kcg_bool valid;
} struct__157980;

/* SDM_GradientAcceleration_types::Gradient_section_real_t */
typedef struct__157980 Gradient_section_real_t_SDM_GradientAcceleration_types;

typedef Gradient_section_real_t_SDM_GradientAcceleration_types array__157986[50];

/* SDM_GradientAcceleration_types::GradientProfile_real_t */
typedef array__157986 GradientProfile_real_t_SDM_GradientAcceleration_types;

typedef Gradient_section_real_t_SDM_GradientAcceleration_types array__157989[100];

/* SDM_GradientAcceleration_types::GradientProfile_real_compensated_t */
typedef array__157989 GradientProfile_real_compensated_t_SDM_GradientAcceleration_types;

typedef struct {
  kcg_real frontPos;
  kcg_int frontIndex;
  kcg_real rearPos;
  kcg_int rearIndex;
  array__157989 compensatedGradientProfile;
} struct__157992;

/* SDM_GradientAcceleration_Pkg::ACC */
typedef struct__157992 ACC_SDM_GradientAcceleration_Pkg;

typedef A_gradient_element_t_SDM_GradientAcceleration_types array__158000[100];

/* SDM_GradientAcceleration_types::A_gradient_t */
typedef array__158000 A_gradient_t_SDM_GradientAcceleration_types;

typedef struct {
  kcg_bool trainPositionIsValid;
  L_internal_real_Type_SDM_Types_Pkg d_est_frontendPos;
  L_internal_real_Type_SDM_Types_Pkg d_minSafeFrontEndPos;
  L_internal_real_Type_SDM_Types_Pkg d_maxSafeFrontEndPos;
  L_internal_real_Type_SDM_Types_Pkg d_LRBG;
  L_internal_real_Type_SDM_Types_Pkg d_accLRBG;
} struct__158003;

/* SDM_Types_Pkg::TrainLocations_real_T */
typedef struct__158003 TrainLocations_real_T_SDM_Types_Pkg;

typedef kcg_real array_real_100[100];

/* CalcBrakingCurves_types::ASafeDistanceDefinition_T */
typedef array_real_100 ASafeDistanceDefinition_T_CalcBrakingCurves_types;

/* CalcBrakingCurves_types::ASafeRow_T */
typedef array_real_100 ASafeRow_T_CalcBrakingCurves_types;

typedef ASafeRow_T_CalcBrakingCurves_types array_real_100_14[14];

/* CalcBrakingCurves_types::ASafe_Data_T */
typedef array_real_100_14 ASafe_Data_T_CalcBrakingCurves_types;

typedef V_internal_real_Type_SDM_Types_Pkg array_real_14[14];

/* CalcBrakingCurves_types::ASafeSpeedDefinition_T */
typedef array_real_14 ASafeSpeedDefinition_T_CalcBrakingCurves_types;

typedef struct {
  ASafeDistanceDefinition_T_CalcBrakingCurves_types distance_definition;
  ASafeSpeedDefinition_T_CalcBrakingCurves_types speed_definition;
  ASafe_Data_T_CalcBrakingCurves_types data;
} struct__158021;

/* CalcBrakingCurves_types::ASafe_T */
typedef struct__158021 ASafe_T_CalcBrakingCurves_types;

typedef struct { array_int_6 a; array_int_6 v; } struct__158027;

/* SDMConversionModelPkg::av_Map_t */
typedef struct__158027 av_Map_t_SDMConversionModelPkg;

typedef struct {
  av_Map_t_SDMConversionModelPkg emergency;
  av_Map_t_SDMConversionModelPkg service;
} struct__158032;

/* SDMConversionModelPkg::a_Brake_t */
typedef struct__158032 a_Brake_t_SDMConversionModelPkg;

typedef kcg_int array_int_13[13];

/* SDMConversionModelPkg::a_MergedSteps_t */
typedef array_int_13 a_MergedSteps_t_SDMConversionModelPkg;

/* SDMConversionModelPkg::v_MergedSteps_t */
typedef array_int_13 v_MergedSteps_t_SDMConversionModelPkg;

typedef struct {
  a_MergedSteps_t_SDMConversionModelPkg a;
  v_MergedSteps_t_SDMConversionModelPkg v;
} struct__158040;

/* SDMConversionModelPkg::av_MergedMap_t */
typedef struct__158040 av_MergedMap_t_SDMConversionModelPkg;

typedef kcg_int array_int_221[221];

typedef array_int_6 array_int_6_221[221];

typedef struct { array_int_7 m; array_int_7 v; } struct__158051;

/* SDMConversionModelPkg::mv_Map_t */
typedef struct__158051 mv_Map_t_SDMConversionModelPkg;

typedef kcg_real array_real_3[3];

/* TargetLimits_Pkg::TractionDeltaTriple */
typedef array_real_3 TractionDeltaTriple_TargetLimits_Pkg;

/* SDMConversionModelPkg::coeff_BrakeBasic_t */
typedef array_real_3 coeff_BrakeBasic_t_SDMConversionModelPkg;

typedef T_internal_real_Type_SDM_Types_Pkg array_real_2[2];

/* SDMModelPkg::t_BrakeVt_t */
typedef array_real_2 t_BrakeVt_t_SDMModelPkg;

typedef struct {
  t_BrakeVt_t_SDMModelPkg emergency;
  t_BrakeVt_t_SDMModelPkg service;
} struct__158062;

/* SDMModelPkg::t_Brake_t */
typedef struct__158062 t_Brake_t_SDMModelPkg;

typedef struct {
  T_internal_real_Type_SDM_Types_Pkg Traction;
  T_internal_real_Type_SDM_Types_Pkg berem;
  T_internal_real_Type_SDM_Types_Pkg bs;
  T_internal_real_Type_SDM_Types_Pkg bs1;
  T_internal_real_Type_SDM_Types_Pkg bs2;
  kcg_bool inhComp;
  T_internal_real_Type_SDM_Types_Pkg indication;
} struct__158067;

/* TargetLimits_Pkg::T_trac_t */
typedef struct__158067 T_trac_t_TargetLimits_Pkg;

typedef struct {
  kcg_real distance;
  kcg_real speed;
  kcg_real acceleration;
} struct__158077;

/* CalcBrakingCurves_types::ParabolaArc_T */
typedef struct__158077 ParabolaArc_T_CalcBrakingCurves_types;

typedef struct {
  V_internal_real_Type_SDM_Types_Pkg v;
  L_internal_real_Type_SDM_Types_Pkg d;
} struct__158083;

/* TargetLimits_Pkg::bec_t */
typedef struct__158083 bec_t_TargetLimits_Pkg;

typedef struct {
  kcg_bool isSB_FBAvailable;
  kcg_bool isSB_CmdAvailable;
  kcg_bool isTCOAvailable;
  T_internal_Type_Obu_BasicTypes_Pkg T_traction_cut_off;
  L_internal_Type_Obu_BasicTypes_Pkg offsetAntennaL1;
} struct__158088;

/* SDM_Types_Pkg::trainData_internal_t */
typedef struct__158088 trainData_internal_t_SDM_Types_Pkg;

typedef struct {
  L_internal_real_Type_SDM_Types_Pkg SBI2;
  kcg_int index;
  TargetType_T_TargetManagement_types ttype;
  bec_t_TargetLimits_Pkg bec;
  V_internal_real_Type_SDM_Types_Pkg V_est;
  T_trac_t_TargetLimits_Pkg T;
  V_internal_real_Type_SDM_Types_Pkg V_ura;
  V_internal_real_Type_SDM_Types_Pkg V_P_MRDT_ebd;
  kcg_int V_P_MRDT_index;
} struct__158096;

/* TargetLimits_Pkg::TargetIteratorAkku */
typedef struct__158096 TargetIteratorAkku_TargetLimits_Pkg;

typedef struct {
  L_internal_real_Type_SDM_Types_Pkg Location;
  V_internal_real_Type_SDM_Types_Pkg TargetSpeed;
} struct__158108;

/* TargetManagement_types::EOA_real_T */
typedef struct__158108 EOA_real_T_TargetManagement_types;

typedef struct {
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
} struct__158113;

/* TargetManagement_types::MA_section_real_T */
typedef struct__158113 MA_section_real_T_TargetManagement_types;

typedef struct {
  kcg_real Loc_Abs;
  kcg_real MRS;
  kcg_bool valid;
} struct__158126;

/* TargetManagement_types::MRSP_internal_section_T */
typedef struct__158126 MRSP_internal_section_T_TargetManagement_types;

typedef MRSP_internal_section_T_TargetManagement_types array__158132[110];

/* TargetManagement_types::MRSP_internal_T */
typedef array__158132 MRSP_internal_T_TargetManagement_types;

typedef struct {
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
} struct__158135;

/* SDM_Types_Pkg::SDM_Locations_T */
typedef struct__158135 SDM_Locations_T_SDM_Types_Pkg;

typedef struct {
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
} struct__158158;

/* SDM_Types_Pkg::Speeds_T */
typedef struct__158158 Speeds_T_SDM_Types_Pkg;

typedef struct {
  array__157964 targetList;
  kcg_int lastInsertedTargetIndex;
} struct__158176;

/* TargetManagement_pkg::extractTargetsMRSPACC */
typedef struct__158176 extractTargetsMRSPACC_TargetManagement_pkg;

typedef struct {
  L_internal_real_Type_SDM_Types_Pkg distance;
  V_internal_real_Type_SDM_Types_Pkg speed;
  kcg_int distanceIndex;
  kcg_int speedIndex;
  ParabolaCurve_T_CalcBrakingCurves_types BC;
} struct__158181;

/* CalcBrakingCurves_Pkg::BCAccumulator_type */
typedef struct__158181 BCAccumulator_type_CalcBrakingCurves_Pkg;

typedef struct {
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
} struct__158189;

/* DMI_Types_Pkg::speedSupervisionForDMI_T */
typedef struct__158189 speedSupervisionForDMI_T_DMI_Types_Pkg;

typedef struct {
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
} struct__158202;

/* SDM_Commands_Pkg::TSM_triggerCond_T */
typedef struct__158202 TSM_triggerCond_T_SDM_Commands_Pkg;

typedef kcg_bool array_bool_14[14];

/* SDM_Commands_Pkg::MyArray */
typedef array_bool_14 MyArray_SDM_Commands_Pkg;

typedef struct {
  kcg_bool r0;
  kcg_bool r1;
  kcg_bool r2;
  kcg_bool r3;
} struct__158222;

/* SDM_Commands_Pkg::TSM_revokeCond_T */
typedef struct__158222 TSM_revokeCond_T_SDM_Commands_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg messageSource;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  P42_SessionManagement_T_Packet_Types_Pkg p42;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg p45;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} struct__158229;

/* Common_Types_Pkg::radioManagementMessage_T */
typedef struct__158229 radioManagementMessage_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_List_Entry_Request_T_DMI_Types_Pkg entry_request;
} struct__158238;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Entry_Request_T */
typedef struct__158238 DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  NID_MN nid_mn;
} struct__158244;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Radio_Net_Data_T */
typedef struct__158244 DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool cab_is_active;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
} struct__158250;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Display_Control_T */
typedef struct__158250 DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_int number;
  BCD_DMI_Types_Pkg dig1;
  BCD_DMI_Types_Pkg dig2;
  BCD_DMI_Types_Pkg dig3;
} struct__158256;

/* DMI_Types_Pkg::DMI_brakeModel_id_T */
typedef struct__158256 DMI_brakeModel_id_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_vMax_id_T */
typedef struct__158256 DMI_vMax_id_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_airtightSystem_T */
typedef struct__158256 DMI_airtightSystem_T_DMI_Types_Pkg;

/* DMI_Types_Pkg::DMI_loadingGauge_T */
typedef struct__158256 DMI_loadingGauge_T_DMI_Types_Pkg;

typedef struct {
  kcg_int number;
  BCD_DMI_Types_Pkg dig1;
  BCD_DMI_Types_Pkg dig2;
  BCD_DMI_Types_Pkg dig3;
  BCD_DMI_Types_Pkg dig4;
} struct__158263;

/* DMI_Types_Pkg::DMI_train_length_T */
typedef struct__158263 DMI_train_length_T_DMI_Types_Pkg;

typedef struct {
  kcg_int number;
  BCD_DMI_Types_Pkg dig1;
  BCD_DMI_Types_Pkg dig2;
  BCD_DMI_Types_Pkg dig3;
  BCD_DMI_Types_Pkg dig4;
  BCD_DMI_Types_Pkg dig5;
} struct__158271;

/* DMI_Types_Pkg::DMI_train_id_T */
typedef struct__158271 DMI_train_id_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_train_id_T_DMI_Types_Pkg trainID;
  DMI_train_length_T_DMI_Types_Pkg trainLength;
  DMI_brakeModel_id_T_DMI_Types_Pkg brakeModel;
  DMI_vMax_id_T_DMI_Types_Pkg vmax;
  M_AXLELOADCAT mAxleLoad;
  DMI_airtightSystem_T_DMI_Types_Pkg airTightSystem;
  DMI_loadingGauge_T_DMI_Types_Pkg mLoadingGauge;
} struct__158280;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Coded_Train_Data_T */
typedef struct__158280 DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg location_LOA;
  V_internal_Type_Obu_BasicTypes_Pkg v_LOA;
} struct__158292;

/* DMI_Types_Pkg::movementAuthorityForDMI_T */
typedef struct__158292 movementAuthorityForDMI_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_C nid_c;
  kcg_bool nid_c_valid;
} struct__158298;

/* DMI_Types_Pkg::nationValuesForDMI_T */
typedef struct__158298 nationValuesForDMI_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  Icon_control_flag_T_DMI_Types_Pkg DMI_m_icon_control_flag;
  kcg_real DMI_m_icon_flashing_freq;
  Icon_group_T_DMI_Types_Pkg DMI_nid_icon_group;
  kcg_int DMI_nid_icon_rank;
  Area_group_T_DMI_Types_Pkg DMI_nid_area_group;
  kcg_int DMI_nid_area_rank;
  kcg_int DMI_nid_icon_identifier;
} struct__158304;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Icons_T */
typedef struct__158304 DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef kcg_int array_int_65[65];

/* DMI_trackCondition_int_array_T */
typedef array_int_65 DMI_trackCondition_int_array_T;

/* DATA::DMI_LevelList_int_array_T */
typedef array_int_65 DMI_LevelList_int_array_T_DATA;

typedef kcg_int array_int_67[67];

/* DATA::DMI_EVC_Level_Data_int_array_T */
typedef array_int_67 DMI_EVC_Level_Data_int_array_T_DATA;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_LevelList_T_DMI_Types_Pkg levelList;
} struct__158322;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_EVC_Level_Data_T */
typedef struct__158322 DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  M_VERSION system_version;
} struct__158328;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_System_Version_T */
typedef struct__158328 DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  M_VERSION ERTMS_Version;
  M_VERSION EVC_Version;
  L_TEXT l_name;
  DMI_TEXT_DMI_Types_Pkg x_name;
  L_TEXT l_extra;
} struct__158334;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Identifier_Request_T */
typedef struct__158334 DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef kcg_int array_int_129[129];

/* DMI_gradientProfile_int_arrayT */
typedef array_int_129 DMI_gradientProfile_int_arrayT;

/* DATA::DMI_speedProfile_int_array_T */
typedef array_int_129 DMI_speedProfile_int_array_T_DATA;

typedef DMI_speedProfileElement_T_DMI_Types_Pkg array__158347[32];

/* DMI_Types_Pkg::DMI_SpeedProfileArray_T */
typedef array__158347 DMI_SpeedProfileArray_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool profileChanged;
  DMI_SpeedProfileArray_T_DMI_Types_Pkg speedProfiles;
} struct__158350;

/* DMI_Types_Pkg::DMI_speedProfile_T */
typedef struct__158350 DMI_speedProfile_T_DMI_Types_Pkg;

typedef DMI_gradientProfileElement_T_DMI_Types_Pkg array__158355[32];

/* DMI_Types_Pkg::DMI_gradientProfileArray_T */
typedef array__158355 DMI_gradientProfileArray_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool profileChanged;
  DMI_gradientProfileArray_T_DMI_Types_Pkg gradientProfiles;
} struct__158358;

/* DMI_Types_Pkg::DMI_gradientProfile_T */
typedef struct__158358 DMI_gradientProfile_T_DMI_Types_Pkg;

typedef struct {
  D_TRACKCOND d_trackcond;
  M_TRACKCOND m_trackcond;
} struct__158363;

/* DMI_Types_Pkg::DMI_trackConditionElement_T */
typedef struct__158363 DMI_trackConditionElement_T_DMI_Types_Pkg;

typedef DMI_trackConditionElement_T_DMI_Types_Pkg array__158368[32];

/* DMI_Types_Pkg::DMI_trackConditionArray_T */
typedef array__158368 DMI_trackConditionArray_T_DMI_Types_Pkg;

typedef struct {
  kcg_int nIter;
  DMI_trackConditionArray_T_DMI_Types_Pkg trackCondition;
} struct__158371;

/* DMI_Types_Pkg::DMI_trackCondition_T */
typedef struct__158371 DMI_trackCondition_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_speedProfile_T_DMI_Types_Pkg speedProfiles;
  DMI_gradientProfile_T_DMI_Types_Pkg gradientProfiles;
  DMI_trackCondition_T_DMI_Types_Pkg trackConditions;
} struct__158376;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Track_Description_T */
typedef struct__158376 DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef kcg_int array_int_325[325];

/* DMI_Track_Description_int_array_T */
typedef array_int_325 DMI_Track_Description_int_array_T;

typedef kcg_int array_int_262[262];

/* DATA::DMI_Text_Message_int_array_T */
typedef array_int_262 DMI_Text_Message_int_array_T_DATA;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_TextMessage_ID_T_DMI_Types_Pkg textMessage_ID;
  DMI_Q_TEXT_DMI_Types_Pkg q_text;
  L_TEXT l_text;
  DMI_TEXT_DMI_Types_Pkg x_text;
  Q_TEXTCLASS q_textClass;
  Q_TEXTCONFIRM q_textConfirm;
} struct__158390;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Text_Message_T */
typedef struct__158390 DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
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
} struct__158401;

/* DMI_Types_Pkg::DMI_Available_Menu_T */
typedef struct__158401 DMI_Available_Menu_T_DMI_Types_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg system_clock;
  DMI_Available_Menu_T_DMI_Types_Pkg available_menu;
} struct__158434;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Menu_Request_T */
typedef struct__158434 DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
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
} struct__158440;

/* DMI_Messages_EVC_to_DMI_Pkg::DMI_Dynamic_T */
typedef struct__158440 DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg;

typedef struct {
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
} struct__158466;

/* API_DMI_Pkg::EVC_to_DMI_Message_T */
typedef struct__158466 EVC_to_DMI_Message_T_API_DMI_Pkg;

typedef struct {
  kcg_bool valid;
  M_MODE whichMode;
  kcg_bool SH_Req_RefusedByRBC;
  kcg_bool LevelNeedsAck;
} struct__158486;

/* Level_And_Mode_Types_Pkg::T_AcknoledgementRequest */
typedef struct__158486 T_AcknoledgementRequest_Level_And_Mode_Types_Pkg;

typedef struct {
  T_LevelTransition_Level_And_Mode_Types_Pkg LevelTransition;
  kcg_bool IsAvailableForUse;
} struct__158493;

/* Level_And_Mode_Types_Pkg::T_AnnouncedLevel */
typedef struct__158493 T_AnnouncedLevel_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool NO_initrequestSent;
  kcg_bool secondValidationRequested;
} struct__158498;

/* manage_DMI_Output_Pkg::dmiOutputs_T */
typedef struct__158498 dmiOutputs_T_manage_DMI_Output_Pkg;

typedef struct {
  kcg_bool NTC;
  kcg_bool L0;
  kcg_bool L1;
  kcg_bool L2;
  kcg_bool L3;
} struct__158503;

/* Level_And_Mode_Types_Pkg::T_ERTMS_capabilities */
typedef struct__158503 T_ERTMS_capabilities_Level_And_Mode_Types_Pkg;

typedef struct {
  MSG_Errors_T_Common_Types_Pkg Common_Errors;
  kcg_bool Failure_Occured;
  kcg_bool Continue_Shunting_Active;
  kcg_bool Stop_Shunting_Stored;
} struct__158511;

/* Level_And_Mode_Types_Pkg::T_Data_From_F2_functions */
typedef struct__158511 T_Data_From_F2_functions_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool Interface_To_National_System;
  kcg_bool National_trip_Order;
} struct__158518;

/* Level_And_Mode_Types_Pkg::T_Data_From_STM */
typedef struct__158518 T_Data_From_STM_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool BG_In_List_Expected_BG_In_SR;
  kcg_bool BG_In_List_Expected_BG_In_SH;
  struct__156814 PositionErrors;
  struct__156568 Train_Position;
  kcg_int Train_Speed;
  kcg_bool Train_Standstill;
} struct__158523;

/* Level_And_Mode_Types_Pkg::T_Data_From_Localisation */
typedef struct__158523 T_Data_From_Localisation_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool EoM_Procedure_req;
  kcg_bool Clean_BG_List_SH_Area;
  kcg_bool MA_Req;
  kcg_bool Req_for_SH_from_Driver;
  kcg_bool Connection_to_RBC_req;
  kcg_bool Position_Repport_Needed;
} struct__158532;

/* Level_And_Mode_Types_Pkg::T_Data_To_BG_Management */
typedef struct__158532 T_Data_To_BG_Management_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool Estim_front_End_overpass_SR_Dist;
  kcg_bool Estim_Front_End_Rear_SSP;
  kcg_bool Override_Function_Active;
  kcg_bool EOA_Antenna_Overpass;
  kcg_bool EOA_Front_End;
  kcg_bool Train_Speed_Under_Overide_Limit;
} struct__158541;

/* Level_And_Mode_Types_Pkg::T_Data_From_Speed_Supervision */
typedef struct__158541 T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool emergencyBrakeActive;
  kcg_bool isolationStatus;
} struct__158550;

/* TIU_Types_Pkg::TIU_commandStatus_T */
typedef struct__158550 TIU_commandStatus_T_TIU_Types_Pkg;

typedef T_LevelTransition_Level_And_Mode_Types_Pkg array__158556[7];

/* Level_And_Mode_Types_Pkg::T_LevelTransition_PriorityTable */
typedef array__158556 T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg;

typedef struct {
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg level_transition_priority_table;
  T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg conditionnalTransition;
  kcg_bool receivedL2L3MA_track;
  kcg_bool receivedL1MA_track;
} struct__158559;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_To_Level */
typedef struct__158559 T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg;

typedef struct {
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
} struct__158566;

/* Level_And_Mode_Types_Pkg::T_Data_From_DMI */
typedef struct__158566 T_Data_From_DMI_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool Ack_LS;
  kcg_bool Ack_OS;
  kcg_bool Ack_RV;
  kcg_bool Ack_SH;
  kcg_bool Ack_SN;
  kcg_bool Ack_SR;
  kcg_bool Ack_TR;
  kcg_bool Ack_UN;
  kcg_bool SH_Refused_By_RBC;
} struct__158583;

/* Level_And_Mode_Types_Pkg::T_Data_To_DMI */
typedef struct__158583 T_Data_To_DMI_Level_And_Mode_Types_Pkg;

typedef struct {
  Location_T_Obu_BasicTypes_Pkg Distance;
  T_MA_Level_And_Mode_Types_Pkg Mode;
  Speed_T_Obu_BasicTypes_Pkg Speed;
  Location_T_Obu_BasicTypes_Pkg Length;
  Location_T_Obu_BasicTypes_Pkg Length_Ack;
} struct__158595;

/* Level_And_Mode_Types_Pkg::T_Mode_Profile */
typedef struct__158595 T_Mode_Profile_Level_And_Mode_Types_Pkg;

typedef T_Mode_Profile_Level_And_Mode_Types_Pkg array__158603[3];

/* Level_And_Mode_Types_Pkg::T_Mode_Profile_Table */
typedef array__158603 T_Mode_Profile_Table_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool Available;
  Location_T_Obu_BasicTypes_Pkg Dist_Start;
  Location_T_Obu_BasicTypes_Pkg Length;
  Location_T_Obu_BasicTypes_Pkg Dist_Run;
  Speed_T_Obu_BasicTypes_Pkg Speed;
} struct__158606;

/* Level_And_Mode_Types_Pkg::T_Reversing_Data */
typedef struct__158606 T_Reversing_Data_Level_And_Mode_Types_Pkg;

typedef struct {
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
} struct__158614;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_To_Mode */
typedef struct__158614 T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg;

typedef kcg_bool array_bool_30[30];

typedef kcg_bool array_bool_4[4];

typedef struct { kcg_int idx; array_bool_4 items; } struct__158634;

typedef kcg_bool array_bool_1[1];

typedef kcg_real array_real_1[1];

typedef Target_real_T_TargetManagement_types array__158645[1];

typedef array_real_100 array_real_100_1[1];

typedef ASafeRow_T_CalcBrakingCurves_types array_real_100_13[13];

typedef V_internal_real_Type_SDM_Types_Pkg array_real_13[13];

typedef kcg_real array_real_8[8];

typedef array_real_100 array_real_100_8[8];

typedef ASafeRow_T_CalcBrakingCurves_types array_real_100_6[6];

typedef V_internal_real_Type_SDM_Types_Pkg array_real_6[6];

typedef kcg_bool array_bool_8[8];

typedef ReceivedMessage_T_Common_Types_Pkg array__158672[2];

typedef ErrorMessage_T_ProvidePositionReport_Pkg array__158675[9];

typedef struct__156704 array__158678[1];

typedef kcg_int array_int_33[33];

typedef kcg_int array_int_30[30];

typedef positionedBG_T_TrainPosition_Types_Pck array__158687[1];

typedef positionedBG_T_TrainPosition_Types_Pck array__158690[8];

typedef kcg_int array_int_42[42];

typedef M_TrainTrack_Message_T_TM_radio_messages array__158696[1];

typedef kcg_bool array_bool_5[5];

typedef struct { kcg_int idx; array_bool_5 items; } struct__158702;

typedef API_TrackSideInput_T_API_Msg_Pkg array__158707[5];

typedef kcg_int array_int_444[444];

typedef kcg_int array_int_264[264];

typedef kcg_int array_int_350[350];

typedef kcg_int array_int_396[396];

typedef kcg_int array_int_432[432];

typedef kcg_int array_int_428[428];

typedef kcg_int array_int_395[395];

typedef kcg_int array_int_430[430];

typedef kcg_real array_real_113[113];

typedef kcg_bool array_bool_113[113];

typedef Target_real_T_TargetManagement_types array__165285[109];

typedef M_TrainTrack_Message_T_TM_radio_messages array__165722[4];

typedef P003_OBU_nid_c_section_enum_T_TM array__165961[31];

typedef positionedBG_T_TrainPosition_Types_Pck array__166060[40];

typedef M_TrainTrack_Message_T_TM_radio_messages array__166215[95];

typedef M_TrainTrack_Message_T_TM_radio_messages array__166219[96];

typedef M_TrainTrack_Message_T_TM_radio_messages array__166223[3];

typedef M_TrainTrack_Message_T_TM_radio_messages array__166226[97];

typedef M_TrainTrack_Message_T_TM_radio_messages array__166230[2];

typedef M_TrainTrack_Message_T_TM_radio_messages array__166233[98];

typedef M_TrainTrack_Message_T_TM_radio_messages array__166237[99];

typedef RadioTrackTrainMessageQueueEntry_T array__166359[7];

#ifndef kcg_copy_struct__154982
#define kcg_copy_struct__154982(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__154982)))
#endif /* kcg_copy_struct__154982 */

#ifndef kcg_copy_struct__154988
#define kcg_copy_struct__154988(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__154988)))
#endif /* kcg_copy_struct__154988 */

#ifndef kcg_copy_struct__155004
#define kcg_copy_struct__155004(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155004)))
#endif /* kcg_copy_struct__155004 */

#ifndef kcg_copy_struct__155015
#define kcg_copy_struct__155015(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155015)))
#endif /* kcg_copy_struct__155015 */

#ifndef kcg_copy_struct__155020
#define kcg_copy_struct__155020(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155020)))
#endif /* kcg_copy_struct__155020 */

#ifndef kcg_copy_struct__155025
#define kcg_copy_struct__155025(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155025)))
#endif /* kcg_copy_struct__155025 */

#ifndef kcg_copy_struct__155030
#define kcg_copy_struct__155030(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155030)))
#endif /* kcg_copy_struct__155030 */

#ifndef kcg_copy_struct__155038
#define kcg_copy_struct__155038(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155038)))
#endif /* kcg_copy_struct__155038 */

#ifndef kcg_copy_struct__155047
#define kcg_copy_struct__155047(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155047)))
#endif /* kcg_copy_struct__155047 */

#ifndef kcg_copy_struct__155052
#define kcg_copy_struct__155052(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155052)))
#endif /* kcg_copy_struct__155052 */

#ifndef kcg_copy_struct__155060
#define kcg_copy_struct__155060(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155060)))
#endif /* kcg_copy_struct__155060 */

#ifndef kcg_copy_struct__155069
#define kcg_copy_struct__155069(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155069)))
#endif /* kcg_copy_struct__155069 */

#ifndef kcg_copy_struct__155095
#define kcg_copy_struct__155095(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155095)))
#endif /* kcg_copy_struct__155095 */

#ifndef kcg_copy_struct__155103
#define kcg_copy_struct__155103(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155103)))
#endif /* kcg_copy_struct__155103 */

#ifndef kcg_copy_struct__155126
#define kcg_copy_struct__155126(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155126)))
#endif /* kcg_copy_struct__155126 */

#ifndef kcg_copy_struct__155141
#define kcg_copy_struct__155141(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155141)))
#endif /* kcg_copy_struct__155141 */

#ifndef kcg_copy_struct__155170
#define kcg_copy_struct__155170(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155170)))
#endif /* kcg_copy_struct__155170 */

#ifndef kcg_copy_struct__155178
#define kcg_copy_struct__155178(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155178)))
#endif /* kcg_copy_struct__155178 */

#ifndef kcg_copy_struct__155188
#define kcg_copy_struct__155188(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155188)))
#endif /* kcg_copy_struct__155188 */

#ifndef kcg_copy_struct__155215
#define kcg_copy_struct__155215(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155215)))
#endif /* kcg_copy_struct__155215 */

#ifndef kcg_copy_struct__155228
#define kcg_copy_struct__155228(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155228)))
#endif /* kcg_copy_struct__155228 */

#ifndef kcg_copy_struct__155245
#define kcg_copy_struct__155245(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155245)))
#endif /* kcg_copy_struct__155245 */

#ifndef kcg_copy_struct__155253
#define kcg_copy_struct__155253(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155253)))
#endif /* kcg_copy_struct__155253 */

#ifndef kcg_copy_struct__155264
#define kcg_copy_struct__155264(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155264)))
#endif /* kcg_copy_struct__155264 */

#ifndef kcg_copy_struct__155279
#define kcg_copy_struct__155279(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155279)))
#endif /* kcg_copy_struct__155279 */

#ifndef kcg_copy_struct__155288
#define kcg_copy_struct__155288(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155288)))
#endif /* kcg_copy_struct__155288 */

#ifndef kcg_copy_struct__155301
#define kcg_copy_struct__155301(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155301)))
#endif /* kcg_copy_struct__155301 */

#ifndef kcg_copy_struct__155347
#define kcg_copy_struct__155347(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155347)))
#endif /* kcg_copy_struct__155347 */

#ifndef kcg_copy_struct__155356
#define kcg_copy_struct__155356(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155356)))
#endif /* kcg_copy_struct__155356 */

#ifndef kcg_copy_struct__155371
#define kcg_copy_struct__155371(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155371)))
#endif /* kcg_copy_struct__155371 */

#ifndef kcg_copy_struct__155378
#define kcg_copy_struct__155378(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155378)))
#endif /* kcg_copy_struct__155378 */

#ifndef kcg_copy_struct__155388
#define kcg_copy_struct__155388(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155388)))
#endif /* kcg_copy_struct__155388 */

#ifndef kcg_copy_struct__155396
#define kcg_copy_struct__155396(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155396)))
#endif /* kcg_copy_struct__155396 */

#ifndef kcg_copy_struct__155409
#define kcg_copy_struct__155409(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155409)))
#endif /* kcg_copy_struct__155409 */

#ifndef kcg_copy_struct__155419
#define kcg_copy_struct__155419(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155419)))
#endif /* kcg_copy_struct__155419 */

#ifndef kcg_copy_struct__155429
#define kcg_copy_struct__155429(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155429)))
#endif /* kcg_copy_struct__155429 */

#ifndef kcg_copy_struct__155447
#define kcg_copy_struct__155447(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155447)))
#endif /* kcg_copy_struct__155447 */

#ifndef kcg_copy_struct__155457
#define kcg_copy_struct__155457(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155457)))
#endif /* kcg_copy_struct__155457 */

#ifndef kcg_copy_struct__155467
#define kcg_copy_struct__155467(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155467)))
#endif /* kcg_copy_struct__155467 */

#ifndef kcg_copy_struct__155478
#define kcg_copy_struct__155478(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155478)))
#endif /* kcg_copy_struct__155478 */

#ifndef kcg_copy_struct__155492
#define kcg_copy_struct__155492(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155492)))
#endif /* kcg_copy_struct__155492 */

#ifndef kcg_copy_struct__155501
#define kcg_copy_struct__155501(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155501)))
#endif /* kcg_copy_struct__155501 */

#ifndef kcg_copy_struct__155511
#define kcg_copy_struct__155511(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155511)))
#endif /* kcg_copy_struct__155511 */

#ifndef kcg_copy_struct__155522
#define kcg_copy_struct__155522(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155522)))
#endif /* kcg_copy_struct__155522 */

#ifndef kcg_copy_struct__155532
#define kcg_copy_struct__155532(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155532)))
#endif /* kcg_copy_struct__155532 */

#ifndef kcg_copy_struct__155546
#define kcg_copy_struct__155546(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155546)))
#endif /* kcg_copy_struct__155546 */

#ifndef kcg_copy_struct__155556
#define kcg_copy_struct__155556(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155556)))
#endif /* kcg_copy_struct__155556 */

#ifndef kcg_copy_struct__155570
#define kcg_copy_struct__155570(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155570)))
#endif /* kcg_copy_struct__155570 */

#ifndef kcg_copy_struct__155588
#define kcg_copy_struct__155588(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155588)))
#endif /* kcg_copy_struct__155588 */

#ifndef kcg_copy_struct__155593
#define kcg_copy_struct__155593(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155593)))
#endif /* kcg_copy_struct__155593 */

#ifndef kcg_copy_struct__155606
#define kcg_copy_struct__155606(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155606)))
#endif /* kcg_copy_struct__155606 */

#ifndef kcg_copy_struct__155614
#define kcg_copy_struct__155614(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155614)))
#endif /* kcg_copy_struct__155614 */

#ifndef kcg_copy_struct__155618
#define kcg_copy_struct__155618(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155618)))
#endif /* kcg_copy_struct__155618 */

#ifndef kcg_copy_struct__155627
#define kcg_copy_struct__155627(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155627)))
#endif /* kcg_copy_struct__155627 */

#ifndef kcg_copy_struct__155635
#define kcg_copy_struct__155635(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155635)))
#endif /* kcg_copy_struct__155635 */

#ifndef kcg_copy_struct__155645
#define kcg_copy_struct__155645(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155645)))
#endif /* kcg_copy_struct__155645 */

#ifndef kcg_copy_struct__155652
#define kcg_copy_struct__155652(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155652)))
#endif /* kcg_copy_struct__155652 */

#ifndef kcg_copy_struct__155662
#define kcg_copy_struct__155662(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155662)))
#endif /* kcg_copy_struct__155662 */

#ifndef kcg_copy_struct__155669
#define kcg_copy_struct__155669(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155669)))
#endif /* kcg_copy_struct__155669 */

#ifndef kcg_copy_struct__155673
#define kcg_copy_struct__155673(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155673)))
#endif /* kcg_copy_struct__155673 */

#ifndef kcg_copy_struct__155694
#define kcg_copy_struct__155694(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155694)))
#endif /* kcg_copy_struct__155694 */

#ifndef kcg_copy_struct__155702
#define kcg_copy_struct__155702(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155702)))
#endif /* kcg_copy_struct__155702 */

#ifndef kcg_copy_struct__155713
#define kcg_copy_struct__155713(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155713)))
#endif /* kcg_copy_struct__155713 */

#ifndef kcg_copy_struct__155731
#define kcg_copy_struct__155731(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155731)))
#endif /* kcg_copy_struct__155731 */

#ifndef kcg_copy_struct__155739
#define kcg_copy_struct__155739(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155739)))
#endif /* kcg_copy_struct__155739 */

#ifndef kcg_copy_struct__155748
#define kcg_copy_struct__155748(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155748)))
#endif /* kcg_copy_struct__155748 */

#ifndef kcg_copy_struct__155760
#define kcg_copy_struct__155760(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155760)))
#endif /* kcg_copy_struct__155760 */

#ifndef kcg_copy_struct__155776
#define kcg_copy_struct__155776(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155776)))
#endif /* kcg_copy_struct__155776 */

#ifndef kcg_copy_struct__155781
#define kcg_copy_struct__155781(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155781)))
#endif /* kcg_copy_struct__155781 */

#ifndef kcg_copy_struct__155787
#define kcg_copy_struct__155787(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155787)))
#endif /* kcg_copy_struct__155787 */

#ifndef kcg_copy_struct__155807
#define kcg_copy_struct__155807(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155807)))
#endif /* kcg_copy_struct__155807 */

#ifndef kcg_copy_struct__155812
#define kcg_copy_struct__155812(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155812)))
#endif /* kcg_copy_struct__155812 */

#ifndef kcg_copy_struct__155831
#define kcg_copy_struct__155831(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155831)))
#endif /* kcg_copy_struct__155831 */

#ifndef kcg_copy_struct__155836
#define kcg_copy_struct__155836(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155836)))
#endif /* kcg_copy_struct__155836 */

#ifndef kcg_copy_struct__155841
#define kcg_copy_struct__155841(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155841)))
#endif /* kcg_copy_struct__155841 */

#ifndef kcg_copy_struct__155846
#define kcg_copy_struct__155846(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155846)))
#endif /* kcg_copy_struct__155846 */

#ifndef kcg_copy_struct__155856
#define kcg_copy_struct__155856(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155856)))
#endif /* kcg_copy_struct__155856 */

#ifndef kcg_copy_struct__155862
#define kcg_copy_struct__155862(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155862)))
#endif /* kcg_copy_struct__155862 */

#ifndef kcg_copy_struct__155880
#define kcg_copy_struct__155880(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155880)))
#endif /* kcg_copy_struct__155880 */

#ifndef kcg_copy_struct__155887
#define kcg_copy_struct__155887(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155887)))
#endif /* kcg_copy_struct__155887 */

#ifndef kcg_copy_struct__155894
#define kcg_copy_struct__155894(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155894)))
#endif /* kcg_copy_struct__155894 */

#ifndef kcg_copy_struct__155901
#define kcg_copy_struct__155901(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155901)))
#endif /* kcg_copy_struct__155901 */

#ifndef kcg_copy_struct__155909
#define kcg_copy_struct__155909(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155909)))
#endif /* kcg_copy_struct__155909 */

#ifndef kcg_copy_struct__155930
#define kcg_copy_struct__155930(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155930)))
#endif /* kcg_copy_struct__155930 */

#ifndef kcg_copy_struct__155965
#define kcg_copy_struct__155965(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155965)))
#endif /* kcg_copy_struct__155965 */

#ifndef kcg_copy_struct__155976
#define kcg_copy_struct__155976(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155976)))
#endif /* kcg_copy_struct__155976 */

#ifndef kcg_copy_struct__155981
#define kcg_copy_struct__155981(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155981)))
#endif /* kcg_copy_struct__155981 */

#ifndef kcg_copy_struct__155987
#define kcg_copy_struct__155987(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155987)))
#endif /* kcg_copy_struct__155987 */

#ifndef kcg_copy_struct__155994
#define kcg_copy_struct__155994(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__155994)))
#endif /* kcg_copy_struct__155994 */

#ifndef kcg_copy_struct__156000
#define kcg_copy_struct__156000(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156000)))
#endif /* kcg_copy_struct__156000 */

#ifndef kcg_copy_struct__156010
#define kcg_copy_struct__156010(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156010)))
#endif /* kcg_copy_struct__156010 */

#ifndef kcg_copy_struct__156016
#define kcg_copy_struct__156016(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156016)))
#endif /* kcg_copy_struct__156016 */

#ifndef kcg_copy_struct__156028
#define kcg_copy_struct__156028(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156028)))
#endif /* kcg_copy_struct__156028 */

#ifndef kcg_copy_struct__156035
#define kcg_copy_struct__156035(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156035)))
#endif /* kcg_copy_struct__156035 */

#ifndef kcg_copy_struct__156043
#define kcg_copy_struct__156043(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156043)))
#endif /* kcg_copy_struct__156043 */

#ifndef kcg_copy_struct__156048
#define kcg_copy_struct__156048(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156048)))
#endif /* kcg_copy_struct__156048 */

#ifndef kcg_copy_struct__156056
#define kcg_copy_struct__156056(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156056)))
#endif /* kcg_copy_struct__156056 */

#ifndef kcg_copy_struct__156065
#define kcg_copy_struct__156065(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156065)))
#endif /* kcg_copy_struct__156065 */

#ifndef kcg_copy_struct__156072
#define kcg_copy_struct__156072(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156072)))
#endif /* kcg_copy_struct__156072 */

#ifndef kcg_copy_struct__156078
#define kcg_copy_struct__156078(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156078)))
#endif /* kcg_copy_struct__156078 */

#ifndef kcg_copy_struct__156096
#define kcg_copy_struct__156096(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156096)))
#endif /* kcg_copy_struct__156096 */

#ifndef kcg_copy_struct__156101
#define kcg_copy_struct__156101(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156101)))
#endif /* kcg_copy_struct__156101 */

#ifndef kcg_copy_struct__156107
#define kcg_copy_struct__156107(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156107)))
#endif /* kcg_copy_struct__156107 */

#ifndef kcg_copy_struct__156113
#define kcg_copy_struct__156113(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156113)))
#endif /* kcg_copy_struct__156113 */

#ifndef kcg_copy_struct__156122
#define kcg_copy_struct__156122(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156122)))
#endif /* kcg_copy_struct__156122 */

#ifndef kcg_copy_struct__156127
#define kcg_copy_struct__156127(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156127)))
#endif /* kcg_copy_struct__156127 */

#ifndef kcg_copy_struct__156138
#define kcg_copy_struct__156138(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156138)))
#endif /* kcg_copy_struct__156138 */

#ifndef kcg_copy_struct__156147
#define kcg_copy_struct__156147(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156147)))
#endif /* kcg_copy_struct__156147 */

#ifndef kcg_copy_struct__156153
#define kcg_copy_struct__156153(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156153)))
#endif /* kcg_copy_struct__156153 */

#ifndef kcg_copy_struct__156158
#define kcg_copy_struct__156158(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156158)))
#endif /* kcg_copy_struct__156158 */

#ifndef kcg_copy_struct__156164
#define kcg_copy_struct__156164(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156164)))
#endif /* kcg_copy_struct__156164 */

#ifndef kcg_copy_struct__156169
#define kcg_copy_struct__156169(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156169)))
#endif /* kcg_copy_struct__156169 */

#ifndef kcg_copy_struct__156174
#define kcg_copy_struct__156174(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156174)))
#endif /* kcg_copy_struct__156174 */

#ifndef kcg_copy_struct__156180
#define kcg_copy_struct__156180(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156180)))
#endif /* kcg_copy_struct__156180 */

#ifndef kcg_copy_struct__156188
#define kcg_copy_struct__156188(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156188)))
#endif /* kcg_copy_struct__156188 */

#ifndef kcg_copy_struct__156195
#define kcg_copy_struct__156195(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156195)))
#endif /* kcg_copy_struct__156195 */

#ifndef kcg_copy_struct__156200
#define kcg_copy_struct__156200(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156200)))
#endif /* kcg_copy_struct__156200 */

#ifndef kcg_copy_struct__156210
#define kcg_copy_struct__156210(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156210)))
#endif /* kcg_copy_struct__156210 */

#ifndef kcg_copy_struct__156215
#define kcg_copy_struct__156215(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156215)))
#endif /* kcg_copy_struct__156215 */

#ifndef kcg_copy_struct__156220
#define kcg_copy_struct__156220(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156220)))
#endif /* kcg_copy_struct__156220 */

#ifndef kcg_copy_struct__156228
#define kcg_copy_struct__156228(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156228)))
#endif /* kcg_copy_struct__156228 */

#ifndef kcg_copy_struct__156233
#define kcg_copy_struct__156233(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156233)))
#endif /* kcg_copy_struct__156233 */

#ifndef kcg_copy_struct__156240
#define kcg_copy_struct__156240(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156240)))
#endif /* kcg_copy_struct__156240 */

#ifndef kcg_copy_struct__156253
#define kcg_copy_struct__156253(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156253)))
#endif /* kcg_copy_struct__156253 */

#ifndef kcg_copy_struct__156273
#define kcg_copy_struct__156273(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156273)))
#endif /* kcg_copy_struct__156273 */

#ifndef kcg_copy_struct__156281
#define kcg_copy_struct__156281(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156281)))
#endif /* kcg_copy_struct__156281 */

#ifndef kcg_copy_struct__156299
#define kcg_copy_struct__156299(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156299)))
#endif /* kcg_copy_struct__156299 */

#ifndef kcg_copy_struct__156309
#define kcg_copy_struct__156309(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156309)))
#endif /* kcg_copy_struct__156309 */

#ifndef kcg_copy_struct__156315
#define kcg_copy_struct__156315(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156315)))
#endif /* kcg_copy_struct__156315 */

#ifndef kcg_copy_struct__156327
#define kcg_copy_struct__156327(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156327)))
#endif /* kcg_copy_struct__156327 */

#ifndef kcg_copy_struct__156337
#define kcg_copy_struct__156337(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156337)))
#endif /* kcg_copy_struct__156337 */

#ifndef kcg_copy_struct__156344
#define kcg_copy_struct__156344(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156344)))
#endif /* kcg_copy_struct__156344 */

#ifndef kcg_copy_struct__156350
#define kcg_copy_struct__156350(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156350)))
#endif /* kcg_copy_struct__156350 */

#ifndef kcg_copy_struct__156358
#define kcg_copy_struct__156358(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156358)))
#endif /* kcg_copy_struct__156358 */

#ifndef kcg_copy_struct__156365
#define kcg_copy_struct__156365(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156365)))
#endif /* kcg_copy_struct__156365 */

#ifndef kcg_copy_struct__156370
#define kcg_copy_struct__156370(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156370)))
#endif /* kcg_copy_struct__156370 */

#ifndef kcg_copy_struct__156394
#define kcg_copy_struct__156394(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156394)))
#endif /* kcg_copy_struct__156394 */

#ifndef kcg_copy_struct__156401
#define kcg_copy_struct__156401(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156401)))
#endif /* kcg_copy_struct__156401 */

#ifndef kcg_copy_struct__156411
#define kcg_copy_struct__156411(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156411)))
#endif /* kcg_copy_struct__156411 */

#ifndef kcg_copy_struct__156419
#define kcg_copy_struct__156419(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156419)))
#endif /* kcg_copy_struct__156419 */

#ifndef kcg_copy_struct__156432
#define kcg_copy_struct__156432(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156432)))
#endif /* kcg_copy_struct__156432 */

#ifndef kcg_copy_struct__156439
#define kcg_copy_struct__156439(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156439)))
#endif /* kcg_copy_struct__156439 */

#ifndef kcg_copy_struct__156447
#define kcg_copy_struct__156447(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156447)))
#endif /* kcg_copy_struct__156447 */

#ifndef kcg_copy_struct__156461
#define kcg_copy_struct__156461(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156461)))
#endif /* kcg_copy_struct__156461 */

#ifndef kcg_copy_struct__156470
#define kcg_copy_struct__156470(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156470)))
#endif /* kcg_copy_struct__156470 */

#ifndef kcg_copy_struct__156478
#define kcg_copy_struct__156478(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156478)))
#endif /* kcg_copy_struct__156478 */

#ifndef kcg_copy_struct__156495
#define kcg_copy_struct__156495(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156495)))
#endif /* kcg_copy_struct__156495 */

#ifndef kcg_copy_struct__156501
#define kcg_copy_struct__156501(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156501)))
#endif /* kcg_copy_struct__156501 */

#ifndef kcg_copy_struct__156510
#define kcg_copy_struct__156510(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156510)))
#endif /* kcg_copy_struct__156510 */

#ifndef kcg_copy_struct__156525
#define kcg_copy_struct__156525(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156525)))
#endif /* kcg_copy_struct__156525 */

#ifndef kcg_copy_struct__156534
#define kcg_copy_struct__156534(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156534)))
#endif /* kcg_copy_struct__156534 */

#ifndef kcg_copy_struct__156545
#define kcg_copy_struct__156545(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156545)))
#endif /* kcg_copy_struct__156545 */

#ifndef kcg_copy_struct__156558
#define kcg_copy_struct__156558(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156558)))
#endif /* kcg_copy_struct__156558 */

#ifndef kcg_copy_struct__156568
#define kcg_copy_struct__156568(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156568)))
#endif /* kcg_copy_struct__156568 */

#ifndef kcg_copy_struct__156588
#define kcg_copy_struct__156588(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156588)))
#endif /* kcg_copy_struct__156588 */

#ifndef kcg_copy_struct__156594
#define kcg_copy_struct__156594(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156594)))
#endif /* kcg_copy_struct__156594 */

#ifndef kcg_copy_struct__156603
#define kcg_copy_struct__156603(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156603)))
#endif /* kcg_copy_struct__156603 */

#ifndef kcg_copy_struct__156613
#define kcg_copy_struct__156613(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156613)))
#endif /* kcg_copy_struct__156613 */

#ifndef kcg_copy_struct__156628
#define kcg_copy_struct__156628(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156628)))
#endif /* kcg_copy_struct__156628 */

#ifndef kcg_copy_struct__156638
#define kcg_copy_struct__156638(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156638)))
#endif /* kcg_copy_struct__156638 */

#ifndef kcg_copy_struct__156669
#define kcg_copy_struct__156669(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156669)))
#endif /* kcg_copy_struct__156669 */

#ifndef kcg_copy_struct__156674
#define kcg_copy_struct__156674(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156674)))
#endif /* kcg_copy_struct__156674 */

#ifndef kcg_copy_struct__156683
#define kcg_copy_struct__156683(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156683)))
#endif /* kcg_copy_struct__156683 */

#ifndef kcg_copy_struct__156693
#define kcg_copy_struct__156693(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156693)))
#endif /* kcg_copy_struct__156693 */

#ifndef kcg_copy_struct__156704
#define kcg_copy_struct__156704(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156704)))
#endif /* kcg_copy_struct__156704 */

#ifndef kcg_copy_struct__156712
#define kcg_copy_struct__156712(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156712)))
#endif /* kcg_copy_struct__156712 */

#ifndef kcg_copy_struct__156751
#define kcg_copy_struct__156751(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156751)))
#endif /* kcg_copy_struct__156751 */

#ifndef kcg_copy_struct__156765
#define kcg_copy_struct__156765(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156765)))
#endif /* kcg_copy_struct__156765 */

#ifndef kcg_copy_struct__156774
#define kcg_copy_struct__156774(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156774)))
#endif /* kcg_copy_struct__156774 */

#ifndef kcg_copy_struct__156780
#define kcg_copy_struct__156780(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156780)))
#endif /* kcg_copy_struct__156780 */

#ifndef kcg_copy_struct__156789
#define kcg_copy_struct__156789(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156789)))
#endif /* kcg_copy_struct__156789 */

#ifndef kcg_copy_struct__156798
#define kcg_copy_struct__156798(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156798)))
#endif /* kcg_copy_struct__156798 */

#ifndef kcg_copy_struct__156806
#define kcg_copy_struct__156806(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156806)))
#endif /* kcg_copy_struct__156806 */

#ifndef kcg_copy_struct__156814
#define kcg_copy_struct__156814(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156814)))
#endif /* kcg_copy_struct__156814 */

#ifndef kcg_copy_struct__156826
#define kcg_copy_struct__156826(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156826)))
#endif /* kcg_copy_struct__156826 */

#ifndef kcg_copy_struct__156839
#define kcg_copy_struct__156839(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156839)))
#endif /* kcg_copy_struct__156839 */

#ifndef kcg_copy_struct__156851
#define kcg_copy_struct__156851(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156851)))
#endif /* kcg_copy_struct__156851 */

#ifndef kcg_copy_struct__156856
#define kcg_copy_struct__156856(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156856)))
#endif /* kcg_copy_struct__156856 */

#ifndef kcg_copy_struct__156862
#define kcg_copy_struct__156862(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156862)))
#endif /* kcg_copy_struct__156862 */

#ifndef kcg_copy_struct__156880
#define kcg_copy_struct__156880(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156880)))
#endif /* kcg_copy_struct__156880 */

#ifndef kcg_copy_struct__156885
#define kcg_copy_struct__156885(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156885)))
#endif /* kcg_copy_struct__156885 */

#ifndef kcg_copy_struct__156893
#define kcg_copy_struct__156893(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156893)))
#endif /* kcg_copy_struct__156893 */

#ifndef kcg_copy_struct__156901
#define kcg_copy_struct__156901(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156901)))
#endif /* kcg_copy_struct__156901 */

#ifndef kcg_copy_struct__156913
#define kcg_copy_struct__156913(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156913)))
#endif /* kcg_copy_struct__156913 */

#ifndef kcg_copy_struct__156924
#define kcg_copy_struct__156924(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156924)))
#endif /* kcg_copy_struct__156924 */

#ifndef kcg_copy_struct__156949
#define kcg_copy_struct__156949(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156949)))
#endif /* kcg_copy_struct__156949 */

#ifndef kcg_copy_struct__156960
#define kcg_copy_struct__156960(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156960)))
#endif /* kcg_copy_struct__156960 */

#ifndef kcg_copy_struct__156970
#define kcg_copy_struct__156970(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156970)))
#endif /* kcg_copy_struct__156970 */

#ifndef kcg_copy_struct__156978
#define kcg_copy_struct__156978(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156978)))
#endif /* kcg_copy_struct__156978 */

#ifndef kcg_copy_struct__156988
#define kcg_copy_struct__156988(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156988)))
#endif /* kcg_copy_struct__156988 */

#ifndef kcg_copy_struct__156994
#define kcg_copy_struct__156994(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__156994)))
#endif /* kcg_copy_struct__156994 */

#ifndef kcg_copy_struct__157002
#define kcg_copy_struct__157002(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157002)))
#endif /* kcg_copy_struct__157002 */

#ifndef kcg_copy_struct__157007
#define kcg_copy_struct__157007(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157007)))
#endif /* kcg_copy_struct__157007 */

#ifndef kcg_copy_struct__157017
#define kcg_copy_struct__157017(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157017)))
#endif /* kcg_copy_struct__157017 */

#ifndef kcg_copy_struct__157022
#define kcg_copy_struct__157022(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157022)))
#endif /* kcg_copy_struct__157022 */

#ifndef kcg_copy_struct__157033
#define kcg_copy_struct__157033(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157033)))
#endif /* kcg_copy_struct__157033 */

#ifndef kcg_copy_struct__157038
#define kcg_copy_struct__157038(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157038)))
#endif /* kcg_copy_struct__157038 */

#ifndef kcg_copy_struct__157069
#define kcg_copy_struct__157069(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157069)))
#endif /* kcg_copy_struct__157069 */

#ifndef kcg_copy_struct__157084
#define kcg_copy_struct__157084(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157084)))
#endif /* kcg_copy_struct__157084 */

#ifndef kcg_copy_struct__157095
#define kcg_copy_struct__157095(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157095)))
#endif /* kcg_copy_struct__157095 */

#ifndef kcg_copy_struct__157107
#define kcg_copy_struct__157107(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157107)))
#endif /* kcg_copy_struct__157107 */

#ifndef kcg_copy_struct__157115
#define kcg_copy_struct__157115(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157115)))
#endif /* kcg_copy_struct__157115 */

#ifndef kcg_copy_struct__157145
#define kcg_copy_struct__157145(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157145)))
#endif /* kcg_copy_struct__157145 */

#ifndef kcg_copy_struct__157153
#define kcg_copy_struct__157153(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157153)))
#endif /* kcg_copy_struct__157153 */

#ifndef kcg_copy_struct__157159
#define kcg_copy_struct__157159(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157159)))
#endif /* kcg_copy_struct__157159 */

#ifndef kcg_copy_struct__157168
#define kcg_copy_struct__157168(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157168)))
#endif /* kcg_copy_struct__157168 */

#ifndef kcg_copy_struct__157180
#define kcg_copy_struct__157180(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157180)))
#endif /* kcg_copy_struct__157180 */

#ifndef kcg_copy_struct__157187
#define kcg_copy_struct__157187(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157187)))
#endif /* kcg_copy_struct__157187 */

#ifndef kcg_copy_struct__157198
#define kcg_copy_struct__157198(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157198)))
#endif /* kcg_copy_struct__157198 */

#ifndef kcg_copy_struct__157209
#define kcg_copy_struct__157209(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157209)))
#endif /* kcg_copy_struct__157209 */

#ifndef kcg_copy_struct__157220
#define kcg_copy_struct__157220(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157220)))
#endif /* kcg_copy_struct__157220 */

#ifndef kcg_copy_struct__157226
#define kcg_copy_struct__157226(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157226)))
#endif /* kcg_copy_struct__157226 */

#ifndef kcg_copy_struct__157239
#define kcg_copy_struct__157239(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157239)))
#endif /* kcg_copy_struct__157239 */

#ifndef kcg_copy_struct__157249
#define kcg_copy_struct__157249(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157249)))
#endif /* kcg_copy_struct__157249 */

#ifndef kcg_copy_struct__157258
#define kcg_copy_struct__157258(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157258)))
#endif /* kcg_copy_struct__157258 */

#ifndef kcg_copy_struct__157268
#define kcg_copy_struct__157268(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157268)))
#endif /* kcg_copy_struct__157268 */

#ifndef kcg_copy_struct__157277
#define kcg_copy_struct__157277(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157277)))
#endif /* kcg_copy_struct__157277 */

#ifndef kcg_copy_struct__157284
#define kcg_copy_struct__157284(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157284)))
#endif /* kcg_copy_struct__157284 */

#ifndef kcg_copy_struct__157310
#define kcg_copy_struct__157310(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157310)))
#endif /* kcg_copy_struct__157310 */

#ifndef kcg_copy_struct__157319
#define kcg_copy_struct__157319(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157319)))
#endif /* kcg_copy_struct__157319 */

#ifndef kcg_copy_struct__157336
#define kcg_copy_struct__157336(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157336)))
#endif /* kcg_copy_struct__157336 */

#ifndef kcg_copy_struct__157349
#define kcg_copy_struct__157349(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157349)))
#endif /* kcg_copy_struct__157349 */

#ifndef kcg_copy_struct__157379
#define kcg_copy_struct__157379(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157379)))
#endif /* kcg_copy_struct__157379 */

#ifndef kcg_copy_struct__157390
#define kcg_copy_struct__157390(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157390)))
#endif /* kcg_copy_struct__157390 */

#ifndef kcg_copy_struct__157395
#define kcg_copy_struct__157395(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157395)))
#endif /* kcg_copy_struct__157395 */

#ifndef kcg_copy_struct__157450
#define kcg_copy_struct__157450(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157450)))
#endif /* kcg_copy_struct__157450 */

#ifndef kcg_copy_struct__157459
#define kcg_copy_struct__157459(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157459)))
#endif /* kcg_copy_struct__157459 */

#ifndef kcg_copy_struct__157468
#define kcg_copy_struct__157468(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157468)))
#endif /* kcg_copy_struct__157468 */

#ifndef kcg_copy_struct__157475
#define kcg_copy_struct__157475(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157475)))
#endif /* kcg_copy_struct__157475 */

#ifndef kcg_copy_struct__157484
#define kcg_copy_struct__157484(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157484)))
#endif /* kcg_copy_struct__157484 */

#ifndef kcg_copy_struct__157492
#define kcg_copy_struct__157492(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157492)))
#endif /* kcg_copy_struct__157492 */

#ifndef kcg_copy_struct__157502
#define kcg_copy_struct__157502(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157502)))
#endif /* kcg_copy_struct__157502 */

#ifndef kcg_copy_struct__157514
#define kcg_copy_struct__157514(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157514)))
#endif /* kcg_copy_struct__157514 */

#ifndef kcg_copy_struct__157520
#define kcg_copy_struct__157520(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157520)))
#endif /* kcg_copy_struct__157520 */

#ifndef kcg_copy_struct__157532
#define kcg_copy_struct__157532(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157532)))
#endif /* kcg_copy_struct__157532 */

#ifndef kcg_copy_struct__157538
#define kcg_copy_struct__157538(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157538)))
#endif /* kcg_copy_struct__157538 */

#ifndef kcg_copy_struct__157551
#define kcg_copy_struct__157551(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157551)))
#endif /* kcg_copy_struct__157551 */

#ifndef kcg_copy_struct__157559
#define kcg_copy_struct__157559(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157559)))
#endif /* kcg_copy_struct__157559 */

#ifndef kcg_copy_struct__157564
#define kcg_copy_struct__157564(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157564)))
#endif /* kcg_copy_struct__157564 */

#ifndef kcg_copy_struct__157570
#define kcg_copy_struct__157570(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157570)))
#endif /* kcg_copy_struct__157570 */

#ifndef kcg_copy_struct__157575
#define kcg_copy_struct__157575(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157575)))
#endif /* kcg_copy_struct__157575 */

#ifndef kcg_copy_struct__157584
#define kcg_copy_struct__157584(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157584)))
#endif /* kcg_copy_struct__157584 */

#ifndef kcg_copy_struct__157588
#define kcg_copy_struct__157588(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157588)))
#endif /* kcg_copy_struct__157588 */

#ifndef kcg_copy_struct__157596
#define kcg_copy_struct__157596(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157596)))
#endif /* kcg_copy_struct__157596 */

#ifndef kcg_copy_struct__157609
#define kcg_copy_struct__157609(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157609)))
#endif /* kcg_copy_struct__157609 */

#ifndef kcg_copy_struct__157618
#define kcg_copy_struct__157618(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157618)))
#endif /* kcg_copy_struct__157618 */

#ifndef kcg_copy_struct__157629
#define kcg_copy_struct__157629(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157629)))
#endif /* kcg_copy_struct__157629 */

#ifndef kcg_copy_struct__157641
#define kcg_copy_struct__157641(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157641)))
#endif /* kcg_copy_struct__157641 */

#ifndef kcg_copy_struct__157648
#define kcg_copy_struct__157648(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157648)))
#endif /* kcg_copy_struct__157648 */

#ifndef kcg_copy_struct__157659
#define kcg_copy_struct__157659(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157659)))
#endif /* kcg_copy_struct__157659 */

#ifndef kcg_copy_struct__157670
#define kcg_copy_struct__157670(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157670)))
#endif /* kcg_copy_struct__157670 */

#ifndef kcg_copy_struct__157698
#define kcg_copy_struct__157698(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157698)))
#endif /* kcg_copy_struct__157698 */

#ifndef kcg_copy_struct__157707
#define kcg_copy_struct__157707(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157707)))
#endif /* kcg_copy_struct__157707 */

#ifndef kcg_copy_struct__157717
#define kcg_copy_struct__157717(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157717)))
#endif /* kcg_copy_struct__157717 */

#ifndef kcg_copy_struct__157724
#define kcg_copy_struct__157724(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157724)))
#endif /* kcg_copy_struct__157724 */

#ifndef kcg_copy_struct__157732
#define kcg_copy_struct__157732(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157732)))
#endif /* kcg_copy_struct__157732 */

#ifndef kcg_copy_struct__157743
#define kcg_copy_struct__157743(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157743)))
#endif /* kcg_copy_struct__157743 */

#ifndef kcg_copy_struct__157749
#define kcg_copy_struct__157749(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157749)))
#endif /* kcg_copy_struct__157749 */

#ifndef kcg_copy_struct__157755
#define kcg_copy_struct__157755(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157755)))
#endif /* kcg_copy_struct__157755 */

#ifndef kcg_copy_struct__157763
#define kcg_copy_struct__157763(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157763)))
#endif /* kcg_copy_struct__157763 */

#ifndef kcg_copy_struct__157769
#define kcg_copy_struct__157769(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157769)))
#endif /* kcg_copy_struct__157769 */

#ifndef kcg_copy_struct__157776
#define kcg_copy_struct__157776(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157776)))
#endif /* kcg_copy_struct__157776 */

#ifndef kcg_copy_struct__157786
#define kcg_copy_struct__157786(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157786)))
#endif /* kcg_copy_struct__157786 */

#ifndef kcg_copy_struct__157800
#define kcg_copy_struct__157800(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157800)))
#endif /* kcg_copy_struct__157800 */

#ifndef kcg_copy_struct__157806
#define kcg_copy_struct__157806(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157806)))
#endif /* kcg_copy_struct__157806 */

#ifndef kcg_copy_struct__157813
#define kcg_copy_struct__157813(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157813)))
#endif /* kcg_copy_struct__157813 */

#ifndef kcg_copy_struct__157820
#define kcg_copy_struct__157820(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157820)))
#endif /* kcg_copy_struct__157820 */

#ifndef kcg_copy_struct__157829
#define kcg_copy_struct__157829(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157829)))
#endif /* kcg_copy_struct__157829 */

#ifndef kcg_copy_struct__157839
#define kcg_copy_struct__157839(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157839)))
#endif /* kcg_copy_struct__157839 */

#ifndef kcg_copy_struct__157851
#define kcg_copy_struct__157851(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157851)))
#endif /* kcg_copy_struct__157851 */

#ifndef kcg_copy_struct__157860
#define kcg_copy_struct__157860(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157860)))
#endif /* kcg_copy_struct__157860 */

#ifndef kcg_copy_struct__157866
#define kcg_copy_struct__157866(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157866)))
#endif /* kcg_copy_struct__157866 */

#ifndef kcg_copy_struct__157871
#define kcg_copy_struct__157871(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157871)))
#endif /* kcg_copy_struct__157871 */

#ifndef kcg_copy_struct__157878
#define kcg_copy_struct__157878(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157878)))
#endif /* kcg_copy_struct__157878 */

#ifndef kcg_copy_struct__157900
#define kcg_copy_struct__157900(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157900)))
#endif /* kcg_copy_struct__157900 */

#ifndef kcg_copy_struct__157907
#define kcg_copy_struct__157907(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157907)))
#endif /* kcg_copy_struct__157907 */

#ifndef kcg_copy_struct__157940
#define kcg_copy_struct__157940(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157940)))
#endif /* kcg_copy_struct__157940 */

#ifndef kcg_copy_struct__157950
#define kcg_copy_struct__157950(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157950)))
#endif /* kcg_copy_struct__157950 */

#ifndef kcg_copy_struct__157958
#define kcg_copy_struct__157958(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157958)))
#endif /* kcg_copy_struct__157958 */

#ifndef kcg_copy_struct__157967
#define kcg_copy_struct__157967(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157967)))
#endif /* kcg_copy_struct__157967 */

#ifndef kcg_copy_struct__157974
#define kcg_copy_struct__157974(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157974)))
#endif /* kcg_copy_struct__157974 */

#ifndef kcg_copy_struct__157980
#define kcg_copy_struct__157980(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157980)))
#endif /* kcg_copy_struct__157980 */

#ifndef kcg_copy_struct__157992
#define kcg_copy_struct__157992(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__157992)))
#endif /* kcg_copy_struct__157992 */

#ifndef kcg_copy_struct__158003
#define kcg_copy_struct__158003(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158003)))
#endif /* kcg_copy_struct__158003 */

#ifndef kcg_copy_struct__158021
#define kcg_copy_struct__158021(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158021)))
#endif /* kcg_copy_struct__158021 */

#ifndef kcg_copy_struct__158027
#define kcg_copy_struct__158027(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158027)))
#endif /* kcg_copy_struct__158027 */

#ifndef kcg_copy_struct__158032
#define kcg_copy_struct__158032(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158032)))
#endif /* kcg_copy_struct__158032 */

#ifndef kcg_copy_struct__158040
#define kcg_copy_struct__158040(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158040)))
#endif /* kcg_copy_struct__158040 */

#ifndef kcg_copy_struct__158051
#define kcg_copy_struct__158051(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158051)))
#endif /* kcg_copy_struct__158051 */

#ifndef kcg_copy_struct__158062
#define kcg_copy_struct__158062(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158062)))
#endif /* kcg_copy_struct__158062 */

#ifndef kcg_copy_struct__158067
#define kcg_copy_struct__158067(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158067)))
#endif /* kcg_copy_struct__158067 */

#ifndef kcg_copy_struct__158077
#define kcg_copy_struct__158077(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158077)))
#endif /* kcg_copy_struct__158077 */

#ifndef kcg_copy_struct__158083
#define kcg_copy_struct__158083(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158083)))
#endif /* kcg_copy_struct__158083 */

#ifndef kcg_copy_struct__158088
#define kcg_copy_struct__158088(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158088)))
#endif /* kcg_copy_struct__158088 */

#ifndef kcg_copy_struct__158096
#define kcg_copy_struct__158096(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158096)))
#endif /* kcg_copy_struct__158096 */

#ifndef kcg_copy_struct__158108
#define kcg_copy_struct__158108(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158108)))
#endif /* kcg_copy_struct__158108 */

#ifndef kcg_copy_struct__158113
#define kcg_copy_struct__158113(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158113)))
#endif /* kcg_copy_struct__158113 */

#ifndef kcg_copy_struct__158126
#define kcg_copy_struct__158126(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158126)))
#endif /* kcg_copy_struct__158126 */

#ifndef kcg_copy_struct__158135
#define kcg_copy_struct__158135(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158135)))
#endif /* kcg_copy_struct__158135 */

#ifndef kcg_copy_struct__158158
#define kcg_copy_struct__158158(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158158)))
#endif /* kcg_copy_struct__158158 */

#ifndef kcg_copy_struct__158176
#define kcg_copy_struct__158176(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158176)))
#endif /* kcg_copy_struct__158176 */

#ifndef kcg_copy_struct__158181
#define kcg_copy_struct__158181(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158181)))
#endif /* kcg_copy_struct__158181 */

#ifndef kcg_copy_struct__158189
#define kcg_copy_struct__158189(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158189)))
#endif /* kcg_copy_struct__158189 */

#ifndef kcg_copy_struct__158202
#define kcg_copy_struct__158202(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158202)))
#endif /* kcg_copy_struct__158202 */

#ifndef kcg_copy_struct__158222
#define kcg_copy_struct__158222(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158222)))
#endif /* kcg_copy_struct__158222 */

#ifndef kcg_copy_struct__158229
#define kcg_copy_struct__158229(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158229)))
#endif /* kcg_copy_struct__158229 */

#ifndef kcg_copy_struct__158238
#define kcg_copy_struct__158238(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158238)))
#endif /* kcg_copy_struct__158238 */

#ifndef kcg_copy_struct__158244
#define kcg_copy_struct__158244(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158244)))
#endif /* kcg_copy_struct__158244 */

#ifndef kcg_copy_struct__158250
#define kcg_copy_struct__158250(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158250)))
#endif /* kcg_copy_struct__158250 */

#ifndef kcg_copy_struct__158256
#define kcg_copy_struct__158256(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158256)))
#endif /* kcg_copy_struct__158256 */

#ifndef kcg_copy_struct__158263
#define kcg_copy_struct__158263(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158263)))
#endif /* kcg_copy_struct__158263 */

#ifndef kcg_copy_struct__158271
#define kcg_copy_struct__158271(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158271)))
#endif /* kcg_copy_struct__158271 */

#ifndef kcg_copy_struct__158280
#define kcg_copy_struct__158280(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158280)))
#endif /* kcg_copy_struct__158280 */

#ifndef kcg_copy_struct__158292
#define kcg_copy_struct__158292(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158292)))
#endif /* kcg_copy_struct__158292 */

#ifndef kcg_copy_struct__158298
#define kcg_copy_struct__158298(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158298)))
#endif /* kcg_copy_struct__158298 */

#ifndef kcg_copy_struct__158304
#define kcg_copy_struct__158304(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158304)))
#endif /* kcg_copy_struct__158304 */

#ifndef kcg_copy_struct__158322
#define kcg_copy_struct__158322(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158322)))
#endif /* kcg_copy_struct__158322 */

#ifndef kcg_copy_struct__158328
#define kcg_copy_struct__158328(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158328)))
#endif /* kcg_copy_struct__158328 */

#ifndef kcg_copy_struct__158334
#define kcg_copy_struct__158334(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158334)))
#endif /* kcg_copy_struct__158334 */

#ifndef kcg_copy_struct__158350
#define kcg_copy_struct__158350(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158350)))
#endif /* kcg_copy_struct__158350 */

#ifndef kcg_copy_struct__158358
#define kcg_copy_struct__158358(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158358)))
#endif /* kcg_copy_struct__158358 */

#ifndef kcg_copy_struct__158363
#define kcg_copy_struct__158363(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158363)))
#endif /* kcg_copy_struct__158363 */

#ifndef kcg_copy_struct__158371
#define kcg_copy_struct__158371(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158371)))
#endif /* kcg_copy_struct__158371 */

#ifndef kcg_copy_struct__158376
#define kcg_copy_struct__158376(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158376)))
#endif /* kcg_copy_struct__158376 */

#ifndef kcg_copy_struct__158390
#define kcg_copy_struct__158390(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158390)))
#endif /* kcg_copy_struct__158390 */

#ifndef kcg_copy_struct__158401
#define kcg_copy_struct__158401(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158401)))
#endif /* kcg_copy_struct__158401 */

#ifndef kcg_copy_struct__158434
#define kcg_copy_struct__158434(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158434)))
#endif /* kcg_copy_struct__158434 */

#ifndef kcg_copy_struct__158440
#define kcg_copy_struct__158440(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158440)))
#endif /* kcg_copy_struct__158440 */

#ifndef kcg_copy_struct__158466
#define kcg_copy_struct__158466(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158466)))
#endif /* kcg_copy_struct__158466 */

#ifndef kcg_copy_struct__158486
#define kcg_copy_struct__158486(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158486)))
#endif /* kcg_copy_struct__158486 */

#ifndef kcg_copy_struct__158493
#define kcg_copy_struct__158493(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158493)))
#endif /* kcg_copy_struct__158493 */

#ifndef kcg_copy_struct__158498
#define kcg_copy_struct__158498(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158498)))
#endif /* kcg_copy_struct__158498 */

#ifndef kcg_copy_struct__158503
#define kcg_copy_struct__158503(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158503)))
#endif /* kcg_copy_struct__158503 */

#ifndef kcg_copy_struct__158511
#define kcg_copy_struct__158511(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158511)))
#endif /* kcg_copy_struct__158511 */

#ifndef kcg_copy_struct__158518
#define kcg_copy_struct__158518(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158518)))
#endif /* kcg_copy_struct__158518 */

#ifndef kcg_copy_struct__158523
#define kcg_copy_struct__158523(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158523)))
#endif /* kcg_copy_struct__158523 */

#ifndef kcg_copy_struct__158532
#define kcg_copy_struct__158532(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158532)))
#endif /* kcg_copy_struct__158532 */

#ifndef kcg_copy_struct__158541
#define kcg_copy_struct__158541(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158541)))
#endif /* kcg_copy_struct__158541 */

#ifndef kcg_copy_struct__158550
#define kcg_copy_struct__158550(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158550)))
#endif /* kcg_copy_struct__158550 */

#ifndef kcg_copy_struct__158559
#define kcg_copy_struct__158559(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158559)))
#endif /* kcg_copy_struct__158559 */

#ifndef kcg_copy_struct__158566
#define kcg_copy_struct__158566(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158566)))
#endif /* kcg_copy_struct__158566 */

#ifndef kcg_copy_struct__158583
#define kcg_copy_struct__158583(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158583)))
#endif /* kcg_copy_struct__158583 */

#ifndef kcg_copy_struct__158595
#define kcg_copy_struct__158595(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158595)))
#endif /* kcg_copy_struct__158595 */

#ifndef kcg_copy_struct__158606
#define kcg_copy_struct__158606(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158606)))
#endif /* kcg_copy_struct__158606 */

#ifndef kcg_copy_struct__158614
#define kcg_copy_struct__158614(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158614)))
#endif /* kcg_copy_struct__158614 */

#ifndef kcg_copy_struct__158634
#define kcg_copy_struct__158634(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158634)))
#endif /* kcg_copy_struct__158634 */

#ifndef kcg_copy_struct__158702
#define kcg_copy_struct__158702(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__158702)))
#endif /* kcg_copy_struct__158702 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__155012
#define kcg_copy_array__155012(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__155012)))
#endif /* kcg_copy_array__155012 */

#ifndef kcg_copy_array__155066
#define kcg_copy_array__155066(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__155066)))
#endif /* kcg_copy_array__155066 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_int_3_33
#define kcg_copy_array_int_3_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33)))
#endif /* kcg_copy_array_int_3_33 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__155092
#define kcg_copy_array__155092(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__155092)))
#endif /* kcg_copy_array__155092 */

#ifndef kcg_copy_array__155100
#define kcg_copy_array__155100(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__155100)))
#endif /* kcg_copy_array__155100 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array_int_2_33
#define kcg_copy_array_int_2_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_33)))
#endif /* kcg_copy_array_int_2_33 */

#ifndef kcg_copy_array_int_66
#define kcg_copy_array_int_66(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_66)))
#endif /* kcg_copy_array_int_66 */

#ifndef kcg_copy_array__155123
#define kcg_copy_array__155123(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__155123)))
#endif /* kcg_copy_array__155123 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array__155185
#define kcg_copy_array__155185(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__155185)))
#endif /* kcg_copy_array__155185 */

#ifndef kcg_copy_array__155225
#define kcg_copy_array__155225(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__155225)))
#endif /* kcg_copy_array__155225 */

#ifndef kcg_copy_array__155250
#define kcg_copy_array__155250(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__155250)))
#endif /* kcg_copy_array__155250 */

#ifndef kcg_copy_array__155261
#define kcg_copy_array__155261(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__155261)))
#endif /* kcg_copy_array__155261 */

#ifndef kcg_copy_array__155285
#define kcg_copy_array__155285(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__155285)))
#endif /* kcg_copy_array__155285 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_int_4_32
#define kcg_copy_array_int_4_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4_32)))
#endif /* kcg_copy_array_int_4_32 */

#ifndef kcg_copy_array_int_128
#define kcg_copy_array_int_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128)))
#endif /* kcg_copy_array_int_128 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array_int_7_33
#define kcg_copy_array_int_7_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33)))
#endif /* kcg_copy_array_int_7_33 */

#ifndef kcg_copy_array_int_231
#define kcg_copy_array_int_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231)))
#endif /* kcg_copy_array_int_231 */

#ifndef kcg_copy_array__155332
#define kcg_copy_array__155332(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__155332)))
#endif /* kcg_copy_array__155332 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array_int_2_32
#define kcg_copy_array_int_2_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32)))
#endif /* kcg_copy_array_int_2_32 */

#ifndef kcg_copy_array__155341
#define kcg_copy_array__155341(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__155341)))
#endif /* kcg_copy_array__155341 */

#ifndef kcg_copy_array__155344
#define kcg_copy_array__155344(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__155344)))
#endif /* kcg_copy_array__155344 */

#ifndef kcg_copy_array__155393
#define kcg_copy_array__155393(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__155393)))
#endif /* kcg_copy_array__155393 */

#ifndef kcg_copy_array__155611
#define kcg_copy_array__155611(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__155611)))
#endif /* kcg_copy_array__155611 */

#ifndef kcg_copy_array__155632
#define kcg_copy_array__155632(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__155632)))
#endif /* kcg_copy_array__155632 */

#ifndef kcg_copy_array_int_15
#define kcg_copy_array_int_15(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_15)))
#endif /* kcg_copy_array_int_15 */

#ifndef kcg_copy_array__155699
#define kcg_copy_array__155699(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__155699)))
#endif /* kcg_copy_array__155699 */

#ifndef kcg_copy_array__155707
#define kcg_copy_array__155707(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__155707)))
#endif /* kcg_copy_array__155707 */

#ifndef kcg_copy_array_int_5
#define kcg_copy_array_int_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_5)))
#endif /* kcg_copy_array_int_5 */

#ifndef kcg_copy_array__155736
#define kcg_copy_array__155736(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__155736)))
#endif /* kcg_copy_array__155736 */

#ifndef kcg_copy_array_int_8
#define kcg_copy_array_int_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_8)))
#endif /* kcg_copy_array_int_8 */

#ifndef kcg_copy_array_int_11
#define kcg_copy_array_int_11(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_11)))
#endif /* kcg_copy_array_int_11 */

#ifndef kcg_copy_array_int_25
#define kcg_copy_array_int_25(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_25)))
#endif /* kcg_copy_array_int_25 */

#ifndef kcg_copy_array_int_17
#define kcg_copy_array_int_17(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_17)))
#endif /* kcg_copy_array_int_17 */

#ifndef kcg_copy_array_int_50
#define kcg_copy_array_int_50(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_50)))
#endif /* kcg_copy_array_int_50 */

#ifndef kcg_copy_array__156225
#define kcg_copy_array__156225(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__156225)))
#endif /* kcg_copy_array__156225 */

#ifndef kcg_copy_array_int_311
#define kcg_copy_array_int_311(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_311)))
#endif /* kcg_copy_array_int_311 */

#ifndef kcg_copy_array_int_999
#define kcg_copy_array_int_999(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_999)))
#endif /* kcg_copy_array_int_999 */

#ifndef kcg_copy_array__156467
#define kcg_copy_array__156467(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__156467)))
#endif /* kcg_copy_array__156467 */

#ifndef kcg_copy_array__156492
#define kcg_copy_array__156492(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__156492)))
#endif /* kcg_copy_array__156492 */

#ifndef kcg_copy_array__156522
#define kcg_copy_array__156522(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__156522)))
#endif /* kcg_copy_array__156522 */

#ifndef kcg_copy_array_int_9
#define kcg_copy_array_int_9(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_9)))
#endif /* kcg_copy_array_int_9 */

#ifndef kcg_copy_array__156600
#define kcg_copy_array__156600(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__156600)))
#endif /* kcg_copy_array__156600 */

#ifndef kcg_copy_array__156610
#define kcg_copy_array__156610(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__156610)))
#endif /* kcg_copy_array__156610 */

#ifndef kcg_copy_array__156625
#define kcg_copy_array__156625(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__156625)))
#endif /* kcg_copy_array__156625 */

#ifndef kcg_copy_array__156635
#define kcg_copy_array__156635(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__156635)))
#endif /* kcg_copy_array__156635 */

#ifndef kcg_copy_array__156680
#define kcg_copy_array__156680(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__156680)))
#endif /* kcg_copy_array__156680 */

#ifndef kcg_copy_array__156690
#define kcg_copy_array__156690(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__156690)))
#endif /* kcg_copy_array__156690 */

#ifndef kcg_copy_array__156701
#define kcg_copy_array__156701(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__156701)))
#endif /* kcg_copy_array__156701 */

#ifndef kcg_copy_array__156709
#define kcg_copy_array__156709(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__156709)))
#endif /* kcg_copy_array__156709 */

#ifndef kcg_copy_array__156762
#define kcg_copy_array__156762(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__156762)))
#endif /* kcg_copy_array__156762 */

#ifndef kcg_copy_array__156795
#define kcg_copy_array__156795(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__156795)))
#endif /* kcg_copy_array__156795 */

#ifndef kcg_copy_array__156811
#define kcg_copy_array__156811(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__156811)))
#endif /* kcg_copy_array__156811 */

#ifndef kcg_copy_array__156848
#define kcg_copy_array__156848(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__156848)))
#endif /* kcg_copy_array__156848 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array__156921
#define kcg_copy_array__156921(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__156921)))
#endif /* kcg_copy_array__156921 */

#ifndef kcg_copy_array__156957
#define kcg_copy_array__156957(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__156957)))
#endif /* kcg_copy_array__156957 */

#ifndef kcg_copy_array__156967
#define kcg_copy_array__156967(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__156967)))
#endif /* kcg_copy_array__156967 */

#ifndef kcg_copy_array__156999
#define kcg_copy_array__156999(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__156999)))
#endif /* kcg_copy_array__156999 */

#ifndef kcg_copy_array__157014
#define kcg_copy_array__157014(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157014)))
#endif /* kcg_copy_array__157014 */

#ifndef kcg_copy_array__157030
#define kcg_copy_array__157030(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157030)))
#endif /* kcg_copy_array__157030 */

#ifndef kcg_copy_array__157066
#define kcg_copy_array__157066(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157066)))
#endif /* kcg_copy_array__157066 */

#ifndef kcg_copy_array__157081
#define kcg_copy_array__157081(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157081)))
#endif /* kcg_copy_array__157081 */

#ifndef kcg_copy_array__157092
#define kcg_copy_array__157092(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157092)))
#endif /* kcg_copy_array__157092 */

#ifndef kcg_copy_array__157104
#define kcg_copy_array__157104(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157104)))
#endif /* kcg_copy_array__157104 */

#ifndef kcg_copy_array__157142
#define kcg_copy_array__157142(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157142)))
#endif /* kcg_copy_array__157142 */

#ifndef kcg_copy_array__157165
#define kcg_copy_array__157165(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157165)))
#endif /* kcg_copy_array__157165 */

#ifndef kcg_copy_array__157177
#define kcg_copy_array__157177(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157177)))
#endif /* kcg_copy_array__157177 */

#ifndef kcg_copy_array__157195
#define kcg_copy_array__157195(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157195)))
#endif /* kcg_copy_array__157195 */

#ifndef kcg_copy_array__157206
#define kcg_copy_array__157206(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157206)))
#endif /* kcg_copy_array__157206 */

#ifndef kcg_copy_array__157236
#define kcg_copy_array__157236(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157236)))
#endif /* kcg_copy_array__157236 */

#ifndef kcg_copy_array__157246
#define kcg_copy_array__157246(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157246)))
#endif /* kcg_copy_array__157246 */

#ifndef kcg_copy_array__157265
#define kcg_copy_array__157265(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157265)))
#endif /* kcg_copy_array__157265 */

#ifndef kcg_copy_array__157274
#define kcg_copy_array__157274(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157274)))
#endif /* kcg_copy_array__157274 */

#ifndef kcg_copy_array__157343
#define kcg_copy_array__157343(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157343)))
#endif /* kcg_copy_array__157343 */

#ifndef kcg_copy_array__157346
#define kcg_copy_array__157346(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157346)))
#endif /* kcg_copy_array__157346 */

#ifndef kcg_copy_array_int_24
#define kcg_copy_array_int_24(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_24)))
#endif /* kcg_copy_array_int_24 */

#ifndef kcg_copy_array__157384
#define kcg_copy_array__157384(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157384)))
#endif /* kcg_copy_array__157384 */

#ifndef kcg_copy_array__157387
#define kcg_copy_array__157387(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157387)))
#endif /* kcg_copy_array__157387 */

#ifndef kcg_copy_array_int_2_4
#define kcg_copy_array_int_2_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_4)))
#endif /* kcg_copy_array_int_2_4 */

#ifndef kcg_copy_array__157545
#define kcg_copy_array__157545(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157545)))
#endif /* kcg_copy_array__157545 */

#ifndef kcg_copy_array_int_1
#define kcg_copy_array_int_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_1)))
#endif /* kcg_copy_array_int_1 */

#ifndef kcg_copy_array__157581
#define kcg_copy_array__157581(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157581)))
#endif /* kcg_copy_array__157581 */

#ifndef kcg_copy_array__157593
#define kcg_copy_array__157593(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157593)))
#endif /* kcg_copy_array__157593 */

#ifndef kcg_copy_array__157615
#define kcg_copy_array__157615(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157615)))
#endif /* kcg_copy_array__157615 */

#ifndef kcg_copy_array__157677
#define kcg_copy_array__157677(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157677)))
#endif /* kcg_copy_array__157677 */

#ifndef kcg_copy_array__157680
#define kcg_copy_array__157680(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157680)))
#endif /* kcg_copy_array__157680 */

#ifndef kcg_copy_array__157683
#define kcg_copy_array__157683(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157683)))
#endif /* kcg_copy_array__157683 */

#ifndef kcg_copy_array__157686
#define kcg_copy_array__157686(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157686)))
#endif /* kcg_copy_array__157686 */

#ifndef kcg_copy_array__157689
#define kcg_copy_array__157689(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157689)))
#endif /* kcg_copy_array__157689 */

#ifndef kcg_copy_array_bool_256
#define kcg_copy_array_bool_256(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_256)))
#endif /* kcg_copy_array_bool_256 */

#ifndef kcg_copy_array_bool_256_46
#define kcg_copy_array_bool_256_46(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_256_46)))
#endif /* kcg_copy_array_bool_256_46 */

#ifndef kcg_copy_array__157714
#define kcg_copy_array__157714(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157714)))
#endif /* kcg_copy_array__157714 */

#ifndef kcg_copy_array__157797
#define kcg_copy_array__157797(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157797)))
#endif /* kcg_copy_array__157797 */

#ifndef kcg_copy_array_char_255
#define kcg_copy_array_char_255(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_char_255)))
#endif /* kcg_copy_array_char_255 */

#ifndef kcg_copy_array_char_9
#define kcg_copy_array_char_9(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_char_9)))
#endif /* kcg_copy_array_char_9 */

#ifndef kcg_copy_array_int_255
#define kcg_copy_array_int_255(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_255)))
#endif /* kcg_copy_array_int_255 */

#ifndef kcg_copy_array_int_261
#define kcg_copy_array_int_261(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_261)))
#endif /* kcg_copy_array_int_261 */

#ifndef kcg_copy_array_bool_114
#define kcg_copy_array_bool_114(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_114)))
#endif /* kcg_copy_array_bool_114 */

#ifndef kcg_copy_array_real_114
#define kcg_copy_array_real_114(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_114)))
#endif /* kcg_copy_array_real_114 */

#ifndef kcg_copy_array__157947
#define kcg_copy_array__157947(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157947)))
#endif /* kcg_copy_array__157947 */

#ifndef kcg_copy_array__157964
#define kcg_copy_array__157964(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157964)))
#endif /* kcg_copy_array__157964 */

#ifndef kcg_copy_array__157986
#define kcg_copy_array__157986(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157986)))
#endif /* kcg_copy_array__157986 */

#ifndef kcg_copy_array__157989
#define kcg_copy_array__157989(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__157989)))
#endif /* kcg_copy_array__157989 */

#ifndef kcg_copy_array__158000
#define kcg_copy_array__158000(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__158000)))
#endif /* kcg_copy_array__158000 */

#ifndef kcg_copy_array_real_100
#define kcg_copy_array_real_100(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_100)))
#endif /* kcg_copy_array_real_100 */

#ifndef kcg_copy_array_real_100_14
#define kcg_copy_array_real_100_14(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_100_14)))
#endif /* kcg_copy_array_real_100_14 */

#ifndef kcg_copy_array_real_14
#define kcg_copy_array_real_14(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_14)))
#endif /* kcg_copy_array_real_14 */

#ifndef kcg_copy_array_int_13
#define kcg_copy_array_int_13(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_13)))
#endif /* kcg_copy_array_int_13 */

#ifndef kcg_copy_array_int_221
#define kcg_copy_array_int_221(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_221)))
#endif /* kcg_copy_array_int_221 */

#ifndef kcg_copy_array_int_6_221
#define kcg_copy_array_int_6_221(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6_221)))
#endif /* kcg_copy_array_int_6_221 */

#ifndef kcg_copy_array_real_3
#define kcg_copy_array_real_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_3)))
#endif /* kcg_copy_array_real_3 */

#ifndef kcg_copy_array_real_2
#define kcg_copy_array_real_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_2)))
#endif /* kcg_copy_array_real_2 */

#ifndef kcg_copy_array__158132
#define kcg_copy_array__158132(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__158132)))
#endif /* kcg_copy_array__158132 */

#ifndef kcg_copy_array_bool_14
#define kcg_copy_array_bool_14(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_14)))
#endif /* kcg_copy_array_bool_14 */

#ifndef kcg_copy_array_int_65
#define kcg_copy_array_int_65(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_65)))
#endif /* kcg_copy_array_int_65 */

#ifndef kcg_copy_array_int_67
#define kcg_copy_array_int_67(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_67)))
#endif /* kcg_copy_array_int_67 */

#ifndef kcg_copy_array_int_129
#define kcg_copy_array_int_129(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_129)))
#endif /* kcg_copy_array_int_129 */

#ifndef kcg_copy_array__158347
#define kcg_copy_array__158347(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__158347)))
#endif /* kcg_copy_array__158347 */

#ifndef kcg_copy_array__158355
#define kcg_copy_array__158355(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__158355)))
#endif /* kcg_copy_array__158355 */

#ifndef kcg_copy_array__158368
#define kcg_copy_array__158368(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__158368)))
#endif /* kcg_copy_array__158368 */

#ifndef kcg_copy_array_int_325
#define kcg_copy_array_int_325(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_325)))
#endif /* kcg_copy_array_int_325 */

#ifndef kcg_copy_array_int_262
#define kcg_copy_array_int_262(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_262)))
#endif /* kcg_copy_array_int_262 */

#ifndef kcg_copy_array__158556
#define kcg_copy_array__158556(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__158556)))
#endif /* kcg_copy_array__158556 */

#ifndef kcg_copy_array__158603
#define kcg_copy_array__158603(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__158603)))
#endif /* kcg_copy_array__158603 */

#ifndef kcg_copy_array_bool_30
#define kcg_copy_array_bool_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_30)))
#endif /* kcg_copy_array_bool_30 */

#ifndef kcg_copy_array_bool_4
#define kcg_copy_array_bool_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_4)))
#endif /* kcg_copy_array_bool_4 */

#ifndef kcg_copy_array_bool_1
#define kcg_copy_array_bool_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_1)))
#endif /* kcg_copy_array_bool_1 */

#ifndef kcg_copy_array_real_1
#define kcg_copy_array_real_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_1)))
#endif /* kcg_copy_array_real_1 */

#ifndef kcg_copy_array__158645
#define kcg_copy_array__158645(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__158645)))
#endif /* kcg_copy_array__158645 */

#ifndef kcg_copy_array_real_100_1
#define kcg_copy_array_real_100_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_100_1)))
#endif /* kcg_copy_array_real_100_1 */

#ifndef kcg_copy_array_real_100_13
#define kcg_copy_array_real_100_13(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_100_13)))
#endif /* kcg_copy_array_real_100_13 */

#ifndef kcg_copy_array_real_13
#define kcg_copy_array_real_13(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_13)))
#endif /* kcg_copy_array_real_13 */

#ifndef kcg_copy_array_real_8
#define kcg_copy_array_real_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_8)))
#endif /* kcg_copy_array_real_8 */

#ifndef kcg_copy_array_real_100_8
#define kcg_copy_array_real_100_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_100_8)))
#endif /* kcg_copy_array_real_100_8 */

#ifndef kcg_copy_array_real_100_6
#define kcg_copy_array_real_100_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_100_6)))
#endif /* kcg_copy_array_real_100_6 */

#ifndef kcg_copy_array_real_6
#define kcg_copy_array_real_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_6)))
#endif /* kcg_copy_array_real_6 */

#ifndef kcg_copy_array_bool_8
#define kcg_copy_array_bool_8(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_8)))
#endif /* kcg_copy_array_bool_8 */

#ifndef kcg_copy_array__158672
#define kcg_copy_array__158672(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__158672)))
#endif /* kcg_copy_array__158672 */

#ifndef kcg_copy_array__158675
#define kcg_copy_array__158675(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__158675)))
#endif /* kcg_copy_array__158675 */

#ifndef kcg_copy_array__158678
#define kcg_copy_array__158678(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__158678)))
#endif /* kcg_copy_array__158678 */

#ifndef kcg_copy_array_int_33
#define kcg_copy_array_int_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33)))
#endif /* kcg_copy_array_int_33 */

#ifndef kcg_copy_array_int_30
#define kcg_copy_array_int_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_30)))
#endif /* kcg_copy_array_int_30 */

#ifndef kcg_copy_array__158687
#define kcg_copy_array__158687(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__158687)))
#endif /* kcg_copy_array__158687 */

#ifndef kcg_copy_array__158690
#define kcg_copy_array__158690(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__158690)))
#endif /* kcg_copy_array__158690 */

#ifndef kcg_copy_array_int_42
#define kcg_copy_array_int_42(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_42)))
#endif /* kcg_copy_array_int_42 */

#ifndef kcg_copy_array__158696
#define kcg_copy_array__158696(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__158696)))
#endif /* kcg_copy_array__158696 */

#ifndef kcg_copy_array_bool_5
#define kcg_copy_array_bool_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_5)))
#endif /* kcg_copy_array_bool_5 */

#ifndef kcg_copy_array__158707
#define kcg_copy_array__158707(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__158707)))
#endif /* kcg_copy_array__158707 */

#ifndef kcg_copy_array_int_444
#define kcg_copy_array_int_444(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_444)))
#endif /* kcg_copy_array_int_444 */

#ifndef kcg_copy_array_int_264
#define kcg_copy_array_int_264(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_264)))
#endif /* kcg_copy_array_int_264 */

#ifndef kcg_copy_array_int_350
#define kcg_copy_array_int_350(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_350)))
#endif /* kcg_copy_array_int_350 */

#ifndef kcg_copy_array_int_396
#define kcg_copy_array_int_396(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_396)))
#endif /* kcg_copy_array_int_396 */

#ifndef kcg_copy_array_int_432
#define kcg_copy_array_int_432(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_432)))
#endif /* kcg_copy_array_int_432 */

#ifndef kcg_copy_array_int_428
#define kcg_copy_array_int_428(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_428)))
#endif /* kcg_copy_array_int_428 */

#ifndef kcg_copy_array_int_395
#define kcg_copy_array_int_395(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_395)))
#endif /* kcg_copy_array_int_395 */

#ifndef kcg_copy_array_int_430
#define kcg_copy_array_int_430(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_430)))
#endif /* kcg_copy_array_int_430 */

#ifndef kcg_copy_array_real_113
#define kcg_copy_array_real_113(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_real_113)))
#endif /* kcg_copy_array_real_113 */

#ifndef kcg_copy_array_bool_113
#define kcg_copy_array_bool_113(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_113)))
#endif /* kcg_copy_array_bool_113 */

#ifndef kcg_copy_array__165285
#define kcg_copy_array__165285(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__165285)))
#endif /* kcg_copy_array__165285 */

#ifndef kcg_copy_array__165722
#define kcg_copy_array__165722(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__165722)))
#endif /* kcg_copy_array__165722 */

#ifndef kcg_copy_array__165961
#define kcg_copy_array__165961(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__165961)))
#endif /* kcg_copy_array__165961 */

#ifndef kcg_copy_array__166060
#define kcg_copy_array__166060(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__166060)))
#endif /* kcg_copy_array__166060 */

#ifndef kcg_copy_array__166215
#define kcg_copy_array__166215(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__166215)))
#endif /* kcg_copy_array__166215 */

#ifndef kcg_copy_array__166219
#define kcg_copy_array__166219(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__166219)))
#endif /* kcg_copy_array__166219 */

#ifndef kcg_copy_array__166223
#define kcg_copy_array__166223(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__166223)))
#endif /* kcg_copy_array__166223 */

#ifndef kcg_copy_array__166226
#define kcg_copy_array__166226(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__166226)))
#endif /* kcg_copy_array__166226 */

#ifndef kcg_copy_array__166230
#define kcg_copy_array__166230(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__166230)))
#endif /* kcg_copy_array__166230 */

#ifndef kcg_copy_array__166233
#define kcg_copy_array__166233(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__166233)))
#endif /* kcg_copy_array__166233 */

#ifndef kcg_copy_array__166237
#define kcg_copy_array__166237(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__166237)))
#endif /* kcg_copy_array__166237 */

#ifndef kcg_copy_array__166359
#define kcg_copy_array__166359(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__166359)))
#endif /* kcg_copy_array__166359 */

#ifndef kcg_comp_struct__154982
extern kcg_bool kcg_comp_struct__154982(
  struct__154982 *kcg_c1,
  struct__154982 *kcg_c2);
#endif /* kcg_comp_struct__154982 */

#ifndef kcg_comp_struct__154988
extern kcg_bool kcg_comp_struct__154988(
  struct__154988 *kcg_c1,
  struct__154988 *kcg_c2);
#endif /* kcg_comp_struct__154988 */

#ifndef kcg_comp_struct__155004
extern kcg_bool kcg_comp_struct__155004(
  struct__155004 *kcg_c1,
  struct__155004 *kcg_c2);
#endif /* kcg_comp_struct__155004 */

#ifndef kcg_comp_struct__155015
extern kcg_bool kcg_comp_struct__155015(
  struct__155015 *kcg_c1,
  struct__155015 *kcg_c2);
#endif /* kcg_comp_struct__155015 */

#ifndef kcg_comp_struct__155020
extern kcg_bool kcg_comp_struct__155020(
  struct__155020 *kcg_c1,
  struct__155020 *kcg_c2);
#endif /* kcg_comp_struct__155020 */

#ifndef kcg_comp_struct__155025
extern kcg_bool kcg_comp_struct__155025(
  struct__155025 *kcg_c1,
  struct__155025 *kcg_c2);
#endif /* kcg_comp_struct__155025 */

#ifndef kcg_comp_struct__155030
extern kcg_bool kcg_comp_struct__155030(
  struct__155030 *kcg_c1,
  struct__155030 *kcg_c2);
#endif /* kcg_comp_struct__155030 */

#ifndef kcg_comp_struct__155038
extern kcg_bool kcg_comp_struct__155038(
  struct__155038 *kcg_c1,
  struct__155038 *kcg_c2);
#endif /* kcg_comp_struct__155038 */

#ifndef kcg_comp_struct__155047
extern kcg_bool kcg_comp_struct__155047(
  struct__155047 *kcg_c1,
  struct__155047 *kcg_c2);
#endif /* kcg_comp_struct__155047 */

#ifndef kcg_comp_struct__155052
extern kcg_bool kcg_comp_struct__155052(
  struct__155052 *kcg_c1,
  struct__155052 *kcg_c2);
#endif /* kcg_comp_struct__155052 */

#ifndef kcg_comp_struct__155060
extern kcg_bool kcg_comp_struct__155060(
  struct__155060 *kcg_c1,
  struct__155060 *kcg_c2);
#endif /* kcg_comp_struct__155060 */

#ifndef kcg_comp_struct__155069
extern kcg_bool kcg_comp_struct__155069(
  struct__155069 *kcg_c1,
  struct__155069 *kcg_c2);
#endif /* kcg_comp_struct__155069 */

#ifndef kcg_comp_struct__155095
extern kcg_bool kcg_comp_struct__155095(
  struct__155095 *kcg_c1,
  struct__155095 *kcg_c2);
#endif /* kcg_comp_struct__155095 */

#ifndef kcg_comp_struct__155103
extern kcg_bool kcg_comp_struct__155103(
  struct__155103 *kcg_c1,
  struct__155103 *kcg_c2);
#endif /* kcg_comp_struct__155103 */

#ifndef kcg_comp_struct__155126
extern kcg_bool kcg_comp_struct__155126(
  struct__155126 *kcg_c1,
  struct__155126 *kcg_c2);
#endif /* kcg_comp_struct__155126 */

#ifndef kcg_comp_struct__155141
extern kcg_bool kcg_comp_struct__155141(
  struct__155141 *kcg_c1,
  struct__155141 *kcg_c2);
#endif /* kcg_comp_struct__155141 */

#ifndef kcg_comp_struct__155170
extern kcg_bool kcg_comp_struct__155170(
  struct__155170 *kcg_c1,
  struct__155170 *kcg_c2);
#endif /* kcg_comp_struct__155170 */

#ifndef kcg_comp_struct__155178
extern kcg_bool kcg_comp_struct__155178(
  struct__155178 *kcg_c1,
  struct__155178 *kcg_c2);
#endif /* kcg_comp_struct__155178 */

#ifndef kcg_comp_struct__155188
extern kcg_bool kcg_comp_struct__155188(
  struct__155188 *kcg_c1,
  struct__155188 *kcg_c2);
#endif /* kcg_comp_struct__155188 */

#ifndef kcg_comp_struct__155215
extern kcg_bool kcg_comp_struct__155215(
  struct__155215 *kcg_c1,
  struct__155215 *kcg_c2);
#endif /* kcg_comp_struct__155215 */

#ifndef kcg_comp_struct__155228
extern kcg_bool kcg_comp_struct__155228(
  struct__155228 *kcg_c1,
  struct__155228 *kcg_c2);
#endif /* kcg_comp_struct__155228 */

#ifndef kcg_comp_struct__155245
extern kcg_bool kcg_comp_struct__155245(
  struct__155245 *kcg_c1,
  struct__155245 *kcg_c2);
#endif /* kcg_comp_struct__155245 */

#ifndef kcg_comp_struct__155253
extern kcg_bool kcg_comp_struct__155253(
  struct__155253 *kcg_c1,
  struct__155253 *kcg_c2);
#endif /* kcg_comp_struct__155253 */

#ifndef kcg_comp_struct__155264
extern kcg_bool kcg_comp_struct__155264(
  struct__155264 *kcg_c1,
  struct__155264 *kcg_c2);
#endif /* kcg_comp_struct__155264 */

#ifndef kcg_comp_struct__155279
extern kcg_bool kcg_comp_struct__155279(
  struct__155279 *kcg_c1,
  struct__155279 *kcg_c2);
#endif /* kcg_comp_struct__155279 */

#ifndef kcg_comp_struct__155288
extern kcg_bool kcg_comp_struct__155288(
  struct__155288 *kcg_c1,
  struct__155288 *kcg_c2);
#endif /* kcg_comp_struct__155288 */

#ifndef kcg_comp_struct__155301
extern kcg_bool kcg_comp_struct__155301(
  struct__155301 *kcg_c1,
  struct__155301 *kcg_c2);
#endif /* kcg_comp_struct__155301 */

#ifndef kcg_comp_struct__155347
extern kcg_bool kcg_comp_struct__155347(
  struct__155347 *kcg_c1,
  struct__155347 *kcg_c2);
#endif /* kcg_comp_struct__155347 */

#ifndef kcg_comp_struct__155356
extern kcg_bool kcg_comp_struct__155356(
  struct__155356 *kcg_c1,
  struct__155356 *kcg_c2);
#endif /* kcg_comp_struct__155356 */

#ifndef kcg_comp_struct__155371
extern kcg_bool kcg_comp_struct__155371(
  struct__155371 *kcg_c1,
  struct__155371 *kcg_c2);
#endif /* kcg_comp_struct__155371 */

#ifndef kcg_comp_struct__155378
extern kcg_bool kcg_comp_struct__155378(
  struct__155378 *kcg_c1,
  struct__155378 *kcg_c2);
#endif /* kcg_comp_struct__155378 */

#ifndef kcg_comp_struct__155388
extern kcg_bool kcg_comp_struct__155388(
  struct__155388 *kcg_c1,
  struct__155388 *kcg_c2);
#endif /* kcg_comp_struct__155388 */

#ifndef kcg_comp_struct__155396
extern kcg_bool kcg_comp_struct__155396(
  struct__155396 *kcg_c1,
  struct__155396 *kcg_c2);
#endif /* kcg_comp_struct__155396 */

#ifndef kcg_comp_struct__155409
extern kcg_bool kcg_comp_struct__155409(
  struct__155409 *kcg_c1,
  struct__155409 *kcg_c2);
#endif /* kcg_comp_struct__155409 */

#ifndef kcg_comp_struct__155419
extern kcg_bool kcg_comp_struct__155419(
  struct__155419 *kcg_c1,
  struct__155419 *kcg_c2);
#endif /* kcg_comp_struct__155419 */

#ifndef kcg_comp_struct__155429
extern kcg_bool kcg_comp_struct__155429(
  struct__155429 *kcg_c1,
  struct__155429 *kcg_c2);
#endif /* kcg_comp_struct__155429 */

#ifndef kcg_comp_struct__155447
extern kcg_bool kcg_comp_struct__155447(
  struct__155447 *kcg_c1,
  struct__155447 *kcg_c2);
#endif /* kcg_comp_struct__155447 */

#ifndef kcg_comp_struct__155457
extern kcg_bool kcg_comp_struct__155457(
  struct__155457 *kcg_c1,
  struct__155457 *kcg_c2);
#endif /* kcg_comp_struct__155457 */

#ifndef kcg_comp_struct__155467
extern kcg_bool kcg_comp_struct__155467(
  struct__155467 *kcg_c1,
  struct__155467 *kcg_c2);
#endif /* kcg_comp_struct__155467 */

#ifndef kcg_comp_struct__155478
extern kcg_bool kcg_comp_struct__155478(
  struct__155478 *kcg_c1,
  struct__155478 *kcg_c2);
#endif /* kcg_comp_struct__155478 */

#ifndef kcg_comp_struct__155492
extern kcg_bool kcg_comp_struct__155492(
  struct__155492 *kcg_c1,
  struct__155492 *kcg_c2);
#endif /* kcg_comp_struct__155492 */

#ifndef kcg_comp_struct__155501
extern kcg_bool kcg_comp_struct__155501(
  struct__155501 *kcg_c1,
  struct__155501 *kcg_c2);
#endif /* kcg_comp_struct__155501 */

#ifndef kcg_comp_struct__155511
extern kcg_bool kcg_comp_struct__155511(
  struct__155511 *kcg_c1,
  struct__155511 *kcg_c2);
#endif /* kcg_comp_struct__155511 */

#ifndef kcg_comp_struct__155522
extern kcg_bool kcg_comp_struct__155522(
  struct__155522 *kcg_c1,
  struct__155522 *kcg_c2);
#endif /* kcg_comp_struct__155522 */

#ifndef kcg_comp_struct__155532
extern kcg_bool kcg_comp_struct__155532(
  struct__155532 *kcg_c1,
  struct__155532 *kcg_c2);
#endif /* kcg_comp_struct__155532 */

#ifndef kcg_comp_struct__155546
extern kcg_bool kcg_comp_struct__155546(
  struct__155546 *kcg_c1,
  struct__155546 *kcg_c2);
#endif /* kcg_comp_struct__155546 */

#ifndef kcg_comp_struct__155556
extern kcg_bool kcg_comp_struct__155556(
  struct__155556 *kcg_c1,
  struct__155556 *kcg_c2);
#endif /* kcg_comp_struct__155556 */

#ifndef kcg_comp_struct__155570
extern kcg_bool kcg_comp_struct__155570(
  struct__155570 *kcg_c1,
  struct__155570 *kcg_c2);
#endif /* kcg_comp_struct__155570 */

#ifndef kcg_comp_struct__155588
extern kcg_bool kcg_comp_struct__155588(
  struct__155588 *kcg_c1,
  struct__155588 *kcg_c2);
#endif /* kcg_comp_struct__155588 */

#ifndef kcg_comp_struct__155593
extern kcg_bool kcg_comp_struct__155593(
  struct__155593 *kcg_c1,
  struct__155593 *kcg_c2);
#endif /* kcg_comp_struct__155593 */

#ifndef kcg_comp_struct__155606
extern kcg_bool kcg_comp_struct__155606(
  struct__155606 *kcg_c1,
  struct__155606 *kcg_c2);
#endif /* kcg_comp_struct__155606 */

#ifndef kcg_comp_struct__155614
extern kcg_bool kcg_comp_struct__155614(
  struct__155614 *kcg_c1,
  struct__155614 *kcg_c2);
#endif /* kcg_comp_struct__155614 */

#ifndef kcg_comp_struct__155618
extern kcg_bool kcg_comp_struct__155618(
  struct__155618 *kcg_c1,
  struct__155618 *kcg_c2);
#endif /* kcg_comp_struct__155618 */

#ifndef kcg_comp_struct__155627
extern kcg_bool kcg_comp_struct__155627(
  struct__155627 *kcg_c1,
  struct__155627 *kcg_c2);
#endif /* kcg_comp_struct__155627 */

#ifndef kcg_comp_struct__155635
extern kcg_bool kcg_comp_struct__155635(
  struct__155635 *kcg_c1,
  struct__155635 *kcg_c2);
#endif /* kcg_comp_struct__155635 */

#ifndef kcg_comp_struct__155645
extern kcg_bool kcg_comp_struct__155645(
  struct__155645 *kcg_c1,
  struct__155645 *kcg_c2);
#endif /* kcg_comp_struct__155645 */

#ifndef kcg_comp_struct__155652
extern kcg_bool kcg_comp_struct__155652(
  struct__155652 *kcg_c1,
  struct__155652 *kcg_c2);
#endif /* kcg_comp_struct__155652 */

#ifndef kcg_comp_struct__155662
extern kcg_bool kcg_comp_struct__155662(
  struct__155662 *kcg_c1,
  struct__155662 *kcg_c2);
#endif /* kcg_comp_struct__155662 */

#ifndef kcg_comp_struct__155669
extern kcg_bool kcg_comp_struct__155669(
  struct__155669 *kcg_c1,
  struct__155669 *kcg_c2);
#endif /* kcg_comp_struct__155669 */

#ifndef kcg_comp_struct__155673
extern kcg_bool kcg_comp_struct__155673(
  struct__155673 *kcg_c1,
  struct__155673 *kcg_c2);
#endif /* kcg_comp_struct__155673 */

#ifndef kcg_comp_struct__155694
extern kcg_bool kcg_comp_struct__155694(
  struct__155694 *kcg_c1,
  struct__155694 *kcg_c2);
#endif /* kcg_comp_struct__155694 */

#ifndef kcg_comp_struct__155702
extern kcg_bool kcg_comp_struct__155702(
  struct__155702 *kcg_c1,
  struct__155702 *kcg_c2);
#endif /* kcg_comp_struct__155702 */

#ifndef kcg_comp_struct__155713
extern kcg_bool kcg_comp_struct__155713(
  struct__155713 *kcg_c1,
  struct__155713 *kcg_c2);
#endif /* kcg_comp_struct__155713 */

#ifndef kcg_comp_struct__155731
extern kcg_bool kcg_comp_struct__155731(
  struct__155731 *kcg_c1,
  struct__155731 *kcg_c2);
#endif /* kcg_comp_struct__155731 */

#ifndef kcg_comp_struct__155739
extern kcg_bool kcg_comp_struct__155739(
  struct__155739 *kcg_c1,
  struct__155739 *kcg_c2);
#endif /* kcg_comp_struct__155739 */

#ifndef kcg_comp_struct__155748
extern kcg_bool kcg_comp_struct__155748(
  struct__155748 *kcg_c1,
  struct__155748 *kcg_c2);
#endif /* kcg_comp_struct__155748 */

#ifndef kcg_comp_struct__155760
extern kcg_bool kcg_comp_struct__155760(
  struct__155760 *kcg_c1,
  struct__155760 *kcg_c2);
#endif /* kcg_comp_struct__155760 */

#ifndef kcg_comp_struct__155776
extern kcg_bool kcg_comp_struct__155776(
  struct__155776 *kcg_c1,
  struct__155776 *kcg_c2);
#endif /* kcg_comp_struct__155776 */

#ifndef kcg_comp_struct__155781
extern kcg_bool kcg_comp_struct__155781(
  struct__155781 *kcg_c1,
  struct__155781 *kcg_c2);
#endif /* kcg_comp_struct__155781 */

#ifndef kcg_comp_struct__155787
extern kcg_bool kcg_comp_struct__155787(
  struct__155787 *kcg_c1,
  struct__155787 *kcg_c2);
#endif /* kcg_comp_struct__155787 */

#ifndef kcg_comp_struct__155807
extern kcg_bool kcg_comp_struct__155807(
  struct__155807 *kcg_c1,
  struct__155807 *kcg_c2);
#endif /* kcg_comp_struct__155807 */

#ifndef kcg_comp_struct__155812
extern kcg_bool kcg_comp_struct__155812(
  struct__155812 *kcg_c1,
  struct__155812 *kcg_c2);
#endif /* kcg_comp_struct__155812 */

#ifndef kcg_comp_struct__155831
extern kcg_bool kcg_comp_struct__155831(
  struct__155831 *kcg_c1,
  struct__155831 *kcg_c2);
#endif /* kcg_comp_struct__155831 */

#ifndef kcg_comp_struct__155836
extern kcg_bool kcg_comp_struct__155836(
  struct__155836 *kcg_c1,
  struct__155836 *kcg_c2);
#endif /* kcg_comp_struct__155836 */

#ifndef kcg_comp_struct__155841
extern kcg_bool kcg_comp_struct__155841(
  struct__155841 *kcg_c1,
  struct__155841 *kcg_c2);
#endif /* kcg_comp_struct__155841 */

#ifndef kcg_comp_struct__155846
extern kcg_bool kcg_comp_struct__155846(
  struct__155846 *kcg_c1,
  struct__155846 *kcg_c2);
#endif /* kcg_comp_struct__155846 */

#ifndef kcg_comp_struct__155856
extern kcg_bool kcg_comp_struct__155856(
  struct__155856 *kcg_c1,
  struct__155856 *kcg_c2);
#endif /* kcg_comp_struct__155856 */

#ifndef kcg_comp_struct__155862
extern kcg_bool kcg_comp_struct__155862(
  struct__155862 *kcg_c1,
  struct__155862 *kcg_c2);
#endif /* kcg_comp_struct__155862 */

#ifndef kcg_comp_struct__155880
extern kcg_bool kcg_comp_struct__155880(
  struct__155880 *kcg_c1,
  struct__155880 *kcg_c2);
#endif /* kcg_comp_struct__155880 */

#ifndef kcg_comp_struct__155887
extern kcg_bool kcg_comp_struct__155887(
  struct__155887 *kcg_c1,
  struct__155887 *kcg_c2);
#endif /* kcg_comp_struct__155887 */

#ifndef kcg_comp_struct__155894
extern kcg_bool kcg_comp_struct__155894(
  struct__155894 *kcg_c1,
  struct__155894 *kcg_c2);
#endif /* kcg_comp_struct__155894 */

#ifndef kcg_comp_struct__155901
extern kcg_bool kcg_comp_struct__155901(
  struct__155901 *kcg_c1,
  struct__155901 *kcg_c2);
#endif /* kcg_comp_struct__155901 */

#ifndef kcg_comp_struct__155909
extern kcg_bool kcg_comp_struct__155909(
  struct__155909 *kcg_c1,
  struct__155909 *kcg_c2);
#endif /* kcg_comp_struct__155909 */

#ifndef kcg_comp_struct__155930
extern kcg_bool kcg_comp_struct__155930(
  struct__155930 *kcg_c1,
  struct__155930 *kcg_c2);
#endif /* kcg_comp_struct__155930 */

#ifndef kcg_comp_struct__155965
extern kcg_bool kcg_comp_struct__155965(
  struct__155965 *kcg_c1,
  struct__155965 *kcg_c2);
#endif /* kcg_comp_struct__155965 */

#ifndef kcg_comp_struct__155976
extern kcg_bool kcg_comp_struct__155976(
  struct__155976 *kcg_c1,
  struct__155976 *kcg_c2);
#endif /* kcg_comp_struct__155976 */

#ifndef kcg_comp_struct__155981
extern kcg_bool kcg_comp_struct__155981(
  struct__155981 *kcg_c1,
  struct__155981 *kcg_c2);
#endif /* kcg_comp_struct__155981 */

#ifndef kcg_comp_struct__155987
extern kcg_bool kcg_comp_struct__155987(
  struct__155987 *kcg_c1,
  struct__155987 *kcg_c2);
#endif /* kcg_comp_struct__155987 */

#ifndef kcg_comp_struct__155994
extern kcg_bool kcg_comp_struct__155994(
  struct__155994 *kcg_c1,
  struct__155994 *kcg_c2);
#endif /* kcg_comp_struct__155994 */

#ifndef kcg_comp_struct__156000
extern kcg_bool kcg_comp_struct__156000(
  struct__156000 *kcg_c1,
  struct__156000 *kcg_c2);
#endif /* kcg_comp_struct__156000 */

#ifndef kcg_comp_struct__156010
extern kcg_bool kcg_comp_struct__156010(
  struct__156010 *kcg_c1,
  struct__156010 *kcg_c2);
#endif /* kcg_comp_struct__156010 */

#ifndef kcg_comp_struct__156016
extern kcg_bool kcg_comp_struct__156016(
  struct__156016 *kcg_c1,
  struct__156016 *kcg_c2);
#endif /* kcg_comp_struct__156016 */

#ifndef kcg_comp_struct__156028
extern kcg_bool kcg_comp_struct__156028(
  struct__156028 *kcg_c1,
  struct__156028 *kcg_c2);
#endif /* kcg_comp_struct__156028 */

#ifndef kcg_comp_struct__156035
extern kcg_bool kcg_comp_struct__156035(
  struct__156035 *kcg_c1,
  struct__156035 *kcg_c2);
#endif /* kcg_comp_struct__156035 */

#ifndef kcg_comp_struct__156043
extern kcg_bool kcg_comp_struct__156043(
  struct__156043 *kcg_c1,
  struct__156043 *kcg_c2);
#endif /* kcg_comp_struct__156043 */

#ifndef kcg_comp_struct__156048
extern kcg_bool kcg_comp_struct__156048(
  struct__156048 *kcg_c1,
  struct__156048 *kcg_c2);
#endif /* kcg_comp_struct__156048 */

#ifndef kcg_comp_struct__156056
extern kcg_bool kcg_comp_struct__156056(
  struct__156056 *kcg_c1,
  struct__156056 *kcg_c2);
#endif /* kcg_comp_struct__156056 */

#ifndef kcg_comp_struct__156065
extern kcg_bool kcg_comp_struct__156065(
  struct__156065 *kcg_c1,
  struct__156065 *kcg_c2);
#endif /* kcg_comp_struct__156065 */

#ifndef kcg_comp_struct__156072
extern kcg_bool kcg_comp_struct__156072(
  struct__156072 *kcg_c1,
  struct__156072 *kcg_c2);
#endif /* kcg_comp_struct__156072 */

#ifndef kcg_comp_struct__156078
extern kcg_bool kcg_comp_struct__156078(
  struct__156078 *kcg_c1,
  struct__156078 *kcg_c2);
#endif /* kcg_comp_struct__156078 */

#ifndef kcg_comp_struct__156096
extern kcg_bool kcg_comp_struct__156096(
  struct__156096 *kcg_c1,
  struct__156096 *kcg_c2);
#endif /* kcg_comp_struct__156096 */

#ifndef kcg_comp_struct__156101
extern kcg_bool kcg_comp_struct__156101(
  struct__156101 *kcg_c1,
  struct__156101 *kcg_c2);
#endif /* kcg_comp_struct__156101 */

#ifndef kcg_comp_struct__156107
extern kcg_bool kcg_comp_struct__156107(
  struct__156107 *kcg_c1,
  struct__156107 *kcg_c2);
#endif /* kcg_comp_struct__156107 */

#ifndef kcg_comp_struct__156113
extern kcg_bool kcg_comp_struct__156113(
  struct__156113 *kcg_c1,
  struct__156113 *kcg_c2);
#endif /* kcg_comp_struct__156113 */

#ifndef kcg_comp_struct__156122
extern kcg_bool kcg_comp_struct__156122(
  struct__156122 *kcg_c1,
  struct__156122 *kcg_c2);
#endif /* kcg_comp_struct__156122 */

#ifndef kcg_comp_struct__156127
extern kcg_bool kcg_comp_struct__156127(
  struct__156127 *kcg_c1,
  struct__156127 *kcg_c2);
#endif /* kcg_comp_struct__156127 */

#ifndef kcg_comp_struct__156138
extern kcg_bool kcg_comp_struct__156138(
  struct__156138 *kcg_c1,
  struct__156138 *kcg_c2);
#endif /* kcg_comp_struct__156138 */

#ifndef kcg_comp_struct__156147
extern kcg_bool kcg_comp_struct__156147(
  struct__156147 *kcg_c1,
  struct__156147 *kcg_c2);
#endif /* kcg_comp_struct__156147 */

#ifndef kcg_comp_struct__156153
extern kcg_bool kcg_comp_struct__156153(
  struct__156153 *kcg_c1,
  struct__156153 *kcg_c2);
#endif /* kcg_comp_struct__156153 */

#ifndef kcg_comp_struct__156158
extern kcg_bool kcg_comp_struct__156158(
  struct__156158 *kcg_c1,
  struct__156158 *kcg_c2);
#endif /* kcg_comp_struct__156158 */

#ifndef kcg_comp_struct__156164
extern kcg_bool kcg_comp_struct__156164(
  struct__156164 *kcg_c1,
  struct__156164 *kcg_c2);
#endif /* kcg_comp_struct__156164 */

#ifndef kcg_comp_struct__156169
extern kcg_bool kcg_comp_struct__156169(
  struct__156169 *kcg_c1,
  struct__156169 *kcg_c2);
#endif /* kcg_comp_struct__156169 */

#ifndef kcg_comp_struct__156174
extern kcg_bool kcg_comp_struct__156174(
  struct__156174 *kcg_c1,
  struct__156174 *kcg_c2);
#endif /* kcg_comp_struct__156174 */

#ifndef kcg_comp_struct__156180
extern kcg_bool kcg_comp_struct__156180(
  struct__156180 *kcg_c1,
  struct__156180 *kcg_c2);
#endif /* kcg_comp_struct__156180 */

#ifndef kcg_comp_struct__156188
extern kcg_bool kcg_comp_struct__156188(
  struct__156188 *kcg_c1,
  struct__156188 *kcg_c2);
#endif /* kcg_comp_struct__156188 */

#ifndef kcg_comp_struct__156195
extern kcg_bool kcg_comp_struct__156195(
  struct__156195 *kcg_c1,
  struct__156195 *kcg_c2);
#endif /* kcg_comp_struct__156195 */

#ifndef kcg_comp_struct__156200
extern kcg_bool kcg_comp_struct__156200(
  struct__156200 *kcg_c1,
  struct__156200 *kcg_c2);
#endif /* kcg_comp_struct__156200 */

#ifndef kcg_comp_struct__156210
extern kcg_bool kcg_comp_struct__156210(
  struct__156210 *kcg_c1,
  struct__156210 *kcg_c2);
#endif /* kcg_comp_struct__156210 */

#ifndef kcg_comp_struct__156215
extern kcg_bool kcg_comp_struct__156215(
  struct__156215 *kcg_c1,
  struct__156215 *kcg_c2);
#endif /* kcg_comp_struct__156215 */

#ifndef kcg_comp_struct__156220
extern kcg_bool kcg_comp_struct__156220(
  struct__156220 *kcg_c1,
  struct__156220 *kcg_c2);
#endif /* kcg_comp_struct__156220 */

#ifndef kcg_comp_struct__156228
extern kcg_bool kcg_comp_struct__156228(
  struct__156228 *kcg_c1,
  struct__156228 *kcg_c2);
#endif /* kcg_comp_struct__156228 */

#ifndef kcg_comp_struct__156233
extern kcg_bool kcg_comp_struct__156233(
  struct__156233 *kcg_c1,
  struct__156233 *kcg_c2);
#endif /* kcg_comp_struct__156233 */

#ifndef kcg_comp_struct__156240
extern kcg_bool kcg_comp_struct__156240(
  struct__156240 *kcg_c1,
  struct__156240 *kcg_c2);
#endif /* kcg_comp_struct__156240 */

#ifndef kcg_comp_struct__156253
extern kcg_bool kcg_comp_struct__156253(
  struct__156253 *kcg_c1,
  struct__156253 *kcg_c2);
#endif /* kcg_comp_struct__156253 */

#ifndef kcg_comp_struct__156273
extern kcg_bool kcg_comp_struct__156273(
  struct__156273 *kcg_c1,
  struct__156273 *kcg_c2);
#endif /* kcg_comp_struct__156273 */

#ifndef kcg_comp_struct__156281
extern kcg_bool kcg_comp_struct__156281(
  struct__156281 *kcg_c1,
  struct__156281 *kcg_c2);
#endif /* kcg_comp_struct__156281 */

#ifndef kcg_comp_struct__156299
extern kcg_bool kcg_comp_struct__156299(
  struct__156299 *kcg_c1,
  struct__156299 *kcg_c2);
#endif /* kcg_comp_struct__156299 */

#ifndef kcg_comp_struct__156309
extern kcg_bool kcg_comp_struct__156309(
  struct__156309 *kcg_c1,
  struct__156309 *kcg_c2);
#endif /* kcg_comp_struct__156309 */

#ifndef kcg_comp_struct__156315
extern kcg_bool kcg_comp_struct__156315(
  struct__156315 *kcg_c1,
  struct__156315 *kcg_c2);
#endif /* kcg_comp_struct__156315 */

#ifndef kcg_comp_struct__156327
extern kcg_bool kcg_comp_struct__156327(
  struct__156327 *kcg_c1,
  struct__156327 *kcg_c2);
#endif /* kcg_comp_struct__156327 */

#ifndef kcg_comp_struct__156337
extern kcg_bool kcg_comp_struct__156337(
  struct__156337 *kcg_c1,
  struct__156337 *kcg_c2);
#endif /* kcg_comp_struct__156337 */

#ifndef kcg_comp_struct__156344
extern kcg_bool kcg_comp_struct__156344(
  struct__156344 *kcg_c1,
  struct__156344 *kcg_c2);
#endif /* kcg_comp_struct__156344 */

#ifndef kcg_comp_struct__156350
extern kcg_bool kcg_comp_struct__156350(
  struct__156350 *kcg_c1,
  struct__156350 *kcg_c2);
#endif /* kcg_comp_struct__156350 */

#ifndef kcg_comp_struct__156358
extern kcg_bool kcg_comp_struct__156358(
  struct__156358 *kcg_c1,
  struct__156358 *kcg_c2);
#endif /* kcg_comp_struct__156358 */

#ifndef kcg_comp_struct__156365
extern kcg_bool kcg_comp_struct__156365(
  struct__156365 *kcg_c1,
  struct__156365 *kcg_c2);
#endif /* kcg_comp_struct__156365 */

#ifndef kcg_comp_struct__156370
extern kcg_bool kcg_comp_struct__156370(
  struct__156370 *kcg_c1,
  struct__156370 *kcg_c2);
#endif /* kcg_comp_struct__156370 */

#ifndef kcg_comp_struct__156394
extern kcg_bool kcg_comp_struct__156394(
  struct__156394 *kcg_c1,
  struct__156394 *kcg_c2);
#endif /* kcg_comp_struct__156394 */

#ifndef kcg_comp_struct__156401
extern kcg_bool kcg_comp_struct__156401(
  struct__156401 *kcg_c1,
  struct__156401 *kcg_c2);
#endif /* kcg_comp_struct__156401 */

#ifndef kcg_comp_struct__156411
extern kcg_bool kcg_comp_struct__156411(
  struct__156411 *kcg_c1,
  struct__156411 *kcg_c2);
#endif /* kcg_comp_struct__156411 */

#ifndef kcg_comp_struct__156419
extern kcg_bool kcg_comp_struct__156419(
  struct__156419 *kcg_c1,
  struct__156419 *kcg_c2);
#endif /* kcg_comp_struct__156419 */

#ifndef kcg_comp_struct__156432
extern kcg_bool kcg_comp_struct__156432(
  struct__156432 *kcg_c1,
  struct__156432 *kcg_c2);
#endif /* kcg_comp_struct__156432 */

#ifndef kcg_comp_struct__156439
extern kcg_bool kcg_comp_struct__156439(
  struct__156439 *kcg_c1,
  struct__156439 *kcg_c2);
#endif /* kcg_comp_struct__156439 */

#ifndef kcg_comp_struct__156447
extern kcg_bool kcg_comp_struct__156447(
  struct__156447 *kcg_c1,
  struct__156447 *kcg_c2);
#endif /* kcg_comp_struct__156447 */

#ifndef kcg_comp_struct__156461
extern kcg_bool kcg_comp_struct__156461(
  struct__156461 *kcg_c1,
  struct__156461 *kcg_c2);
#endif /* kcg_comp_struct__156461 */

#ifndef kcg_comp_struct__156470
extern kcg_bool kcg_comp_struct__156470(
  struct__156470 *kcg_c1,
  struct__156470 *kcg_c2);
#endif /* kcg_comp_struct__156470 */

#ifndef kcg_comp_struct__156478
extern kcg_bool kcg_comp_struct__156478(
  struct__156478 *kcg_c1,
  struct__156478 *kcg_c2);
#endif /* kcg_comp_struct__156478 */

#ifndef kcg_comp_struct__156495
extern kcg_bool kcg_comp_struct__156495(
  struct__156495 *kcg_c1,
  struct__156495 *kcg_c2);
#endif /* kcg_comp_struct__156495 */

#ifndef kcg_comp_struct__156501
extern kcg_bool kcg_comp_struct__156501(
  struct__156501 *kcg_c1,
  struct__156501 *kcg_c2);
#endif /* kcg_comp_struct__156501 */

#ifndef kcg_comp_struct__156510
extern kcg_bool kcg_comp_struct__156510(
  struct__156510 *kcg_c1,
  struct__156510 *kcg_c2);
#endif /* kcg_comp_struct__156510 */

#ifndef kcg_comp_struct__156525
extern kcg_bool kcg_comp_struct__156525(
  struct__156525 *kcg_c1,
  struct__156525 *kcg_c2);
#endif /* kcg_comp_struct__156525 */

#ifndef kcg_comp_struct__156534
extern kcg_bool kcg_comp_struct__156534(
  struct__156534 *kcg_c1,
  struct__156534 *kcg_c2);
#endif /* kcg_comp_struct__156534 */

#ifndef kcg_comp_struct__156545
extern kcg_bool kcg_comp_struct__156545(
  struct__156545 *kcg_c1,
  struct__156545 *kcg_c2);
#endif /* kcg_comp_struct__156545 */

#ifndef kcg_comp_struct__156558
extern kcg_bool kcg_comp_struct__156558(
  struct__156558 *kcg_c1,
  struct__156558 *kcg_c2);
#endif /* kcg_comp_struct__156558 */

#ifndef kcg_comp_struct__156568
extern kcg_bool kcg_comp_struct__156568(
  struct__156568 *kcg_c1,
  struct__156568 *kcg_c2);
#endif /* kcg_comp_struct__156568 */

#ifndef kcg_comp_struct__156588
extern kcg_bool kcg_comp_struct__156588(
  struct__156588 *kcg_c1,
  struct__156588 *kcg_c2);
#endif /* kcg_comp_struct__156588 */

#ifndef kcg_comp_struct__156594
extern kcg_bool kcg_comp_struct__156594(
  struct__156594 *kcg_c1,
  struct__156594 *kcg_c2);
#endif /* kcg_comp_struct__156594 */

#ifndef kcg_comp_struct__156603
extern kcg_bool kcg_comp_struct__156603(
  struct__156603 *kcg_c1,
  struct__156603 *kcg_c2);
#endif /* kcg_comp_struct__156603 */

#ifndef kcg_comp_struct__156613
extern kcg_bool kcg_comp_struct__156613(
  struct__156613 *kcg_c1,
  struct__156613 *kcg_c2);
#endif /* kcg_comp_struct__156613 */

#ifndef kcg_comp_struct__156628
extern kcg_bool kcg_comp_struct__156628(
  struct__156628 *kcg_c1,
  struct__156628 *kcg_c2);
#endif /* kcg_comp_struct__156628 */

#ifndef kcg_comp_struct__156638
extern kcg_bool kcg_comp_struct__156638(
  struct__156638 *kcg_c1,
  struct__156638 *kcg_c2);
#endif /* kcg_comp_struct__156638 */

#ifndef kcg_comp_struct__156669
extern kcg_bool kcg_comp_struct__156669(
  struct__156669 *kcg_c1,
  struct__156669 *kcg_c2);
#endif /* kcg_comp_struct__156669 */

#ifndef kcg_comp_struct__156674
extern kcg_bool kcg_comp_struct__156674(
  struct__156674 *kcg_c1,
  struct__156674 *kcg_c2);
#endif /* kcg_comp_struct__156674 */

#ifndef kcg_comp_struct__156683
extern kcg_bool kcg_comp_struct__156683(
  struct__156683 *kcg_c1,
  struct__156683 *kcg_c2);
#endif /* kcg_comp_struct__156683 */

#ifndef kcg_comp_struct__156693
extern kcg_bool kcg_comp_struct__156693(
  struct__156693 *kcg_c1,
  struct__156693 *kcg_c2);
#endif /* kcg_comp_struct__156693 */

#ifndef kcg_comp_struct__156704
extern kcg_bool kcg_comp_struct__156704(
  struct__156704 *kcg_c1,
  struct__156704 *kcg_c2);
#endif /* kcg_comp_struct__156704 */

#ifndef kcg_comp_struct__156712
extern kcg_bool kcg_comp_struct__156712(
  struct__156712 *kcg_c1,
  struct__156712 *kcg_c2);
#endif /* kcg_comp_struct__156712 */

#ifndef kcg_comp_struct__156751
extern kcg_bool kcg_comp_struct__156751(
  struct__156751 *kcg_c1,
  struct__156751 *kcg_c2);
#endif /* kcg_comp_struct__156751 */

#ifndef kcg_comp_struct__156765
extern kcg_bool kcg_comp_struct__156765(
  struct__156765 *kcg_c1,
  struct__156765 *kcg_c2);
#endif /* kcg_comp_struct__156765 */

#ifndef kcg_comp_struct__156774
extern kcg_bool kcg_comp_struct__156774(
  struct__156774 *kcg_c1,
  struct__156774 *kcg_c2);
#endif /* kcg_comp_struct__156774 */

#ifndef kcg_comp_struct__156780
extern kcg_bool kcg_comp_struct__156780(
  struct__156780 *kcg_c1,
  struct__156780 *kcg_c2);
#endif /* kcg_comp_struct__156780 */

#ifndef kcg_comp_struct__156789
extern kcg_bool kcg_comp_struct__156789(
  struct__156789 *kcg_c1,
  struct__156789 *kcg_c2);
#endif /* kcg_comp_struct__156789 */

#ifndef kcg_comp_struct__156798
extern kcg_bool kcg_comp_struct__156798(
  struct__156798 *kcg_c1,
  struct__156798 *kcg_c2);
#endif /* kcg_comp_struct__156798 */

#ifndef kcg_comp_struct__156806
extern kcg_bool kcg_comp_struct__156806(
  struct__156806 *kcg_c1,
  struct__156806 *kcg_c2);
#endif /* kcg_comp_struct__156806 */

#ifndef kcg_comp_struct__156814
extern kcg_bool kcg_comp_struct__156814(
  struct__156814 *kcg_c1,
  struct__156814 *kcg_c2);
#endif /* kcg_comp_struct__156814 */

#ifndef kcg_comp_struct__156826
extern kcg_bool kcg_comp_struct__156826(
  struct__156826 *kcg_c1,
  struct__156826 *kcg_c2);
#endif /* kcg_comp_struct__156826 */

#ifndef kcg_comp_struct__156839
extern kcg_bool kcg_comp_struct__156839(
  struct__156839 *kcg_c1,
  struct__156839 *kcg_c2);
#endif /* kcg_comp_struct__156839 */

#ifndef kcg_comp_struct__156851
extern kcg_bool kcg_comp_struct__156851(
  struct__156851 *kcg_c1,
  struct__156851 *kcg_c2);
#endif /* kcg_comp_struct__156851 */

#ifndef kcg_comp_struct__156856
extern kcg_bool kcg_comp_struct__156856(
  struct__156856 *kcg_c1,
  struct__156856 *kcg_c2);
#endif /* kcg_comp_struct__156856 */

#ifndef kcg_comp_struct__156862
extern kcg_bool kcg_comp_struct__156862(
  struct__156862 *kcg_c1,
  struct__156862 *kcg_c2);
#endif /* kcg_comp_struct__156862 */

#ifndef kcg_comp_struct__156880
extern kcg_bool kcg_comp_struct__156880(
  struct__156880 *kcg_c1,
  struct__156880 *kcg_c2);
#endif /* kcg_comp_struct__156880 */

#ifndef kcg_comp_struct__156885
extern kcg_bool kcg_comp_struct__156885(
  struct__156885 *kcg_c1,
  struct__156885 *kcg_c2);
#endif /* kcg_comp_struct__156885 */

#ifndef kcg_comp_struct__156893
extern kcg_bool kcg_comp_struct__156893(
  struct__156893 *kcg_c1,
  struct__156893 *kcg_c2);
#endif /* kcg_comp_struct__156893 */

#ifndef kcg_comp_struct__156901
extern kcg_bool kcg_comp_struct__156901(
  struct__156901 *kcg_c1,
  struct__156901 *kcg_c2);
#endif /* kcg_comp_struct__156901 */

#ifndef kcg_comp_struct__156913
extern kcg_bool kcg_comp_struct__156913(
  struct__156913 *kcg_c1,
  struct__156913 *kcg_c2);
#endif /* kcg_comp_struct__156913 */

#ifndef kcg_comp_struct__156924
extern kcg_bool kcg_comp_struct__156924(
  struct__156924 *kcg_c1,
  struct__156924 *kcg_c2);
#endif /* kcg_comp_struct__156924 */

#ifndef kcg_comp_struct__156949
extern kcg_bool kcg_comp_struct__156949(
  struct__156949 *kcg_c1,
  struct__156949 *kcg_c2);
#endif /* kcg_comp_struct__156949 */

#ifndef kcg_comp_struct__156960
extern kcg_bool kcg_comp_struct__156960(
  struct__156960 *kcg_c1,
  struct__156960 *kcg_c2);
#endif /* kcg_comp_struct__156960 */

#ifndef kcg_comp_struct__156970
extern kcg_bool kcg_comp_struct__156970(
  struct__156970 *kcg_c1,
  struct__156970 *kcg_c2);
#endif /* kcg_comp_struct__156970 */

#ifndef kcg_comp_struct__156978
extern kcg_bool kcg_comp_struct__156978(
  struct__156978 *kcg_c1,
  struct__156978 *kcg_c2);
#endif /* kcg_comp_struct__156978 */

#ifndef kcg_comp_struct__156988
extern kcg_bool kcg_comp_struct__156988(
  struct__156988 *kcg_c1,
  struct__156988 *kcg_c2);
#endif /* kcg_comp_struct__156988 */

#ifndef kcg_comp_struct__156994
extern kcg_bool kcg_comp_struct__156994(
  struct__156994 *kcg_c1,
  struct__156994 *kcg_c2);
#endif /* kcg_comp_struct__156994 */

#ifndef kcg_comp_struct__157002
extern kcg_bool kcg_comp_struct__157002(
  struct__157002 *kcg_c1,
  struct__157002 *kcg_c2);
#endif /* kcg_comp_struct__157002 */

#ifndef kcg_comp_struct__157007
extern kcg_bool kcg_comp_struct__157007(
  struct__157007 *kcg_c1,
  struct__157007 *kcg_c2);
#endif /* kcg_comp_struct__157007 */

#ifndef kcg_comp_struct__157017
extern kcg_bool kcg_comp_struct__157017(
  struct__157017 *kcg_c1,
  struct__157017 *kcg_c2);
#endif /* kcg_comp_struct__157017 */

#ifndef kcg_comp_struct__157022
extern kcg_bool kcg_comp_struct__157022(
  struct__157022 *kcg_c1,
  struct__157022 *kcg_c2);
#endif /* kcg_comp_struct__157022 */

#ifndef kcg_comp_struct__157033
extern kcg_bool kcg_comp_struct__157033(
  struct__157033 *kcg_c1,
  struct__157033 *kcg_c2);
#endif /* kcg_comp_struct__157033 */

#ifndef kcg_comp_struct__157038
extern kcg_bool kcg_comp_struct__157038(
  struct__157038 *kcg_c1,
  struct__157038 *kcg_c2);
#endif /* kcg_comp_struct__157038 */

#ifndef kcg_comp_struct__157069
extern kcg_bool kcg_comp_struct__157069(
  struct__157069 *kcg_c1,
  struct__157069 *kcg_c2);
#endif /* kcg_comp_struct__157069 */

#ifndef kcg_comp_struct__157084
extern kcg_bool kcg_comp_struct__157084(
  struct__157084 *kcg_c1,
  struct__157084 *kcg_c2);
#endif /* kcg_comp_struct__157084 */

#ifndef kcg_comp_struct__157095
extern kcg_bool kcg_comp_struct__157095(
  struct__157095 *kcg_c1,
  struct__157095 *kcg_c2);
#endif /* kcg_comp_struct__157095 */

#ifndef kcg_comp_struct__157107
extern kcg_bool kcg_comp_struct__157107(
  struct__157107 *kcg_c1,
  struct__157107 *kcg_c2);
#endif /* kcg_comp_struct__157107 */

#ifndef kcg_comp_struct__157115
extern kcg_bool kcg_comp_struct__157115(
  struct__157115 *kcg_c1,
  struct__157115 *kcg_c2);
#endif /* kcg_comp_struct__157115 */

#ifndef kcg_comp_struct__157145
extern kcg_bool kcg_comp_struct__157145(
  struct__157145 *kcg_c1,
  struct__157145 *kcg_c2);
#endif /* kcg_comp_struct__157145 */

#ifndef kcg_comp_struct__157153
extern kcg_bool kcg_comp_struct__157153(
  struct__157153 *kcg_c1,
  struct__157153 *kcg_c2);
#endif /* kcg_comp_struct__157153 */

#ifndef kcg_comp_struct__157159
extern kcg_bool kcg_comp_struct__157159(
  struct__157159 *kcg_c1,
  struct__157159 *kcg_c2);
#endif /* kcg_comp_struct__157159 */

#ifndef kcg_comp_struct__157168
extern kcg_bool kcg_comp_struct__157168(
  struct__157168 *kcg_c1,
  struct__157168 *kcg_c2);
#endif /* kcg_comp_struct__157168 */

#ifndef kcg_comp_struct__157180
extern kcg_bool kcg_comp_struct__157180(
  struct__157180 *kcg_c1,
  struct__157180 *kcg_c2);
#endif /* kcg_comp_struct__157180 */

#ifndef kcg_comp_struct__157187
extern kcg_bool kcg_comp_struct__157187(
  struct__157187 *kcg_c1,
  struct__157187 *kcg_c2);
#endif /* kcg_comp_struct__157187 */

#ifndef kcg_comp_struct__157198
extern kcg_bool kcg_comp_struct__157198(
  struct__157198 *kcg_c1,
  struct__157198 *kcg_c2);
#endif /* kcg_comp_struct__157198 */

#ifndef kcg_comp_struct__157209
extern kcg_bool kcg_comp_struct__157209(
  struct__157209 *kcg_c1,
  struct__157209 *kcg_c2);
#endif /* kcg_comp_struct__157209 */

#ifndef kcg_comp_struct__157220
extern kcg_bool kcg_comp_struct__157220(
  struct__157220 *kcg_c1,
  struct__157220 *kcg_c2);
#endif /* kcg_comp_struct__157220 */

#ifndef kcg_comp_struct__157226
extern kcg_bool kcg_comp_struct__157226(
  struct__157226 *kcg_c1,
  struct__157226 *kcg_c2);
#endif /* kcg_comp_struct__157226 */

#ifndef kcg_comp_struct__157239
extern kcg_bool kcg_comp_struct__157239(
  struct__157239 *kcg_c1,
  struct__157239 *kcg_c2);
#endif /* kcg_comp_struct__157239 */

#ifndef kcg_comp_struct__157249
extern kcg_bool kcg_comp_struct__157249(
  struct__157249 *kcg_c1,
  struct__157249 *kcg_c2);
#endif /* kcg_comp_struct__157249 */

#ifndef kcg_comp_struct__157258
extern kcg_bool kcg_comp_struct__157258(
  struct__157258 *kcg_c1,
  struct__157258 *kcg_c2);
#endif /* kcg_comp_struct__157258 */

#ifndef kcg_comp_struct__157268
extern kcg_bool kcg_comp_struct__157268(
  struct__157268 *kcg_c1,
  struct__157268 *kcg_c2);
#endif /* kcg_comp_struct__157268 */

#ifndef kcg_comp_struct__157277
extern kcg_bool kcg_comp_struct__157277(
  struct__157277 *kcg_c1,
  struct__157277 *kcg_c2);
#endif /* kcg_comp_struct__157277 */

#ifndef kcg_comp_struct__157284
extern kcg_bool kcg_comp_struct__157284(
  struct__157284 *kcg_c1,
  struct__157284 *kcg_c2);
#endif /* kcg_comp_struct__157284 */

#ifndef kcg_comp_struct__157310
extern kcg_bool kcg_comp_struct__157310(
  struct__157310 *kcg_c1,
  struct__157310 *kcg_c2);
#endif /* kcg_comp_struct__157310 */

#ifndef kcg_comp_struct__157319
extern kcg_bool kcg_comp_struct__157319(
  struct__157319 *kcg_c1,
  struct__157319 *kcg_c2);
#endif /* kcg_comp_struct__157319 */

#ifndef kcg_comp_struct__157336
extern kcg_bool kcg_comp_struct__157336(
  struct__157336 *kcg_c1,
  struct__157336 *kcg_c2);
#endif /* kcg_comp_struct__157336 */

#ifndef kcg_comp_struct__157349
extern kcg_bool kcg_comp_struct__157349(
  struct__157349 *kcg_c1,
  struct__157349 *kcg_c2);
#endif /* kcg_comp_struct__157349 */

#ifndef kcg_comp_struct__157379
extern kcg_bool kcg_comp_struct__157379(
  struct__157379 *kcg_c1,
  struct__157379 *kcg_c2);
#endif /* kcg_comp_struct__157379 */

#ifndef kcg_comp_struct__157390
extern kcg_bool kcg_comp_struct__157390(
  struct__157390 *kcg_c1,
  struct__157390 *kcg_c2);
#endif /* kcg_comp_struct__157390 */

#ifndef kcg_comp_struct__157395
extern kcg_bool kcg_comp_struct__157395(
  struct__157395 *kcg_c1,
  struct__157395 *kcg_c2);
#endif /* kcg_comp_struct__157395 */

#ifndef kcg_comp_struct__157450
extern kcg_bool kcg_comp_struct__157450(
  struct__157450 *kcg_c1,
  struct__157450 *kcg_c2);
#endif /* kcg_comp_struct__157450 */

#ifndef kcg_comp_struct__157459
extern kcg_bool kcg_comp_struct__157459(
  struct__157459 *kcg_c1,
  struct__157459 *kcg_c2);
#endif /* kcg_comp_struct__157459 */

#ifndef kcg_comp_struct__157468
extern kcg_bool kcg_comp_struct__157468(
  struct__157468 *kcg_c1,
  struct__157468 *kcg_c2);
#endif /* kcg_comp_struct__157468 */

#ifndef kcg_comp_struct__157475
extern kcg_bool kcg_comp_struct__157475(
  struct__157475 *kcg_c1,
  struct__157475 *kcg_c2);
#endif /* kcg_comp_struct__157475 */

#ifndef kcg_comp_struct__157484
extern kcg_bool kcg_comp_struct__157484(
  struct__157484 *kcg_c1,
  struct__157484 *kcg_c2);
#endif /* kcg_comp_struct__157484 */

#ifndef kcg_comp_struct__157492
extern kcg_bool kcg_comp_struct__157492(
  struct__157492 *kcg_c1,
  struct__157492 *kcg_c2);
#endif /* kcg_comp_struct__157492 */

#ifndef kcg_comp_struct__157502
extern kcg_bool kcg_comp_struct__157502(
  struct__157502 *kcg_c1,
  struct__157502 *kcg_c2);
#endif /* kcg_comp_struct__157502 */

#ifndef kcg_comp_struct__157514
extern kcg_bool kcg_comp_struct__157514(
  struct__157514 *kcg_c1,
  struct__157514 *kcg_c2);
#endif /* kcg_comp_struct__157514 */

#ifndef kcg_comp_struct__157520
extern kcg_bool kcg_comp_struct__157520(
  struct__157520 *kcg_c1,
  struct__157520 *kcg_c2);
#endif /* kcg_comp_struct__157520 */

#ifndef kcg_comp_struct__157532
extern kcg_bool kcg_comp_struct__157532(
  struct__157532 *kcg_c1,
  struct__157532 *kcg_c2);
#endif /* kcg_comp_struct__157532 */

#ifndef kcg_comp_struct__157538
extern kcg_bool kcg_comp_struct__157538(
  struct__157538 *kcg_c1,
  struct__157538 *kcg_c2);
#endif /* kcg_comp_struct__157538 */

#ifndef kcg_comp_struct__157551
extern kcg_bool kcg_comp_struct__157551(
  struct__157551 *kcg_c1,
  struct__157551 *kcg_c2);
#endif /* kcg_comp_struct__157551 */

#ifndef kcg_comp_struct__157559
extern kcg_bool kcg_comp_struct__157559(
  struct__157559 *kcg_c1,
  struct__157559 *kcg_c2);
#endif /* kcg_comp_struct__157559 */

#ifndef kcg_comp_struct__157564
extern kcg_bool kcg_comp_struct__157564(
  struct__157564 *kcg_c1,
  struct__157564 *kcg_c2);
#endif /* kcg_comp_struct__157564 */

#ifndef kcg_comp_struct__157570
extern kcg_bool kcg_comp_struct__157570(
  struct__157570 *kcg_c1,
  struct__157570 *kcg_c2);
#endif /* kcg_comp_struct__157570 */

#ifndef kcg_comp_struct__157575
extern kcg_bool kcg_comp_struct__157575(
  struct__157575 *kcg_c1,
  struct__157575 *kcg_c2);
#endif /* kcg_comp_struct__157575 */

#ifndef kcg_comp_struct__157584
extern kcg_bool kcg_comp_struct__157584(
  struct__157584 *kcg_c1,
  struct__157584 *kcg_c2);
#endif /* kcg_comp_struct__157584 */

#ifndef kcg_comp_struct__157588
extern kcg_bool kcg_comp_struct__157588(
  struct__157588 *kcg_c1,
  struct__157588 *kcg_c2);
#endif /* kcg_comp_struct__157588 */

#ifndef kcg_comp_struct__157596
extern kcg_bool kcg_comp_struct__157596(
  struct__157596 *kcg_c1,
  struct__157596 *kcg_c2);
#endif /* kcg_comp_struct__157596 */

#ifndef kcg_comp_struct__157609
extern kcg_bool kcg_comp_struct__157609(
  struct__157609 *kcg_c1,
  struct__157609 *kcg_c2);
#endif /* kcg_comp_struct__157609 */

#ifndef kcg_comp_struct__157618
extern kcg_bool kcg_comp_struct__157618(
  struct__157618 *kcg_c1,
  struct__157618 *kcg_c2);
#endif /* kcg_comp_struct__157618 */

#ifndef kcg_comp_struct__157629
extern kcg_bool kcg_comp_struct__157629(
  struct__157629 *kcg_c1,
  struct__157629 *kcg_c2);
#endif /* kcg_comp_struct__157629 */

#ifndef kcg_comp_struct__157641
extern kcg_bool kcg_comp_struct__157641(
  struct__157641 *kcg_c1,
  struct__157641 *kcg_c2);
#endif /* kcg_comp_struct__157641 */

#ifndef kcg_comp_struct__157648
extern kcg_bool kcg_comp_struct__157648(
  struct__157648 *kcg_c1,
  struct__157648 *kcg_c2);
#endif /* kcg_comp_struct__157648 */

#ifndef kcg_comp_struct__157659
extern kcg_bool kcg_comp_struct__157659(
  struct__157659 *kcg_c1,
  struct__157659 *kcg_c2);
#endif /* kcg_comp_struct__157659 */

#ifndef kcg_comp_struct__157670
extern kcg_bool kcg_comp_struct__157670(
  struct__157670 *kcg_c1,
  struct__157670 *kcg_c2);
#endif /* kcg_comp_struct__157670 */

#ifndef kcg_comp_struct__157698
extern kcg_bool kcg_comp_struct__157698(
  struct__157698 *kcg_c1,
  struct__157698 *kcg_c2);
#endif /* kcg_comp_struct__157698 */

#ifndef kcg_comp_struct__157707
extern kcg_bool kcg_comp_struct__157707(
  struct__157707 *kcg_c1,
  struct__157707 *kcg_c2);
#endif /* kcg_comp_struct__157707 */

#ifndef kcg_comp_struct__157717
extern kcg_bool kcg_comp_struct__157717(
  struct__157717 *kcg_c1,
  struct__157717 *kcg_c2);
#endif /* kcg_comp_struct__157717 */

#ifndef kcg_comp_struct__157724
extern kcg_bool kcg_comp_struct__157724(
  struct__157724 *kcg_c1,
  struct__157724 *kcg_c2);
#endif /* kcg_comp_struct__157724 */

#ifndef kcg_comp_struct__157732
extern kcg_bool kcg_comp_struct__157732(
  struct__157732 *kcg_c1,
  struct__157732 *kcg_c2);
#endif /* kcg_comp_struct__157732 */

#ifndef kcg_comp_struct__157743
extern kcg_bool kcg_comp_struct__157743(
  struct__157743 *kcg_c1,
  struct__157743 *kcg_c2);
#endif /* kcg_comp_struct__157743 */

#ifndef kcg_comp_struct__157749
extern kcg_bool kcg_comp_struct__157749(
  struct__157749 *kcg_c1,
  struct__157749 *kcg_c2);
#endif /* kcg_comp_struct__157749 */

#ifndef kcg_comp_struct__157755
extern kcg_bool kcg_comp_struct__157755(
  struct__157755 *kcg_c1,
  struct__157755 *kcg_c2);
#endif /* kcg_comp_struct__157755 */

#ifndef kcg_comp_struct__157763
extern kcg_bool kcg_comp_struct__157763(
  struct__157763 *kcg_c1,
  struct__157763 *kcg_c2);
#endif /* kcg_comp_struct__157763 */

#ifndef kcg_comp_struct__157769
extern kcg_bool kcg_comp_struct__157769(
  struct__157769 *kcg_c1,
  struct__157769 *kcg_c2);
#endif /* kcg_comp_struct__157769 */

#ifndef kcg_comp_struct__157776
extern kcg_bool kcg_comp_struct__157776(
  struct__157776 *kcg_c1,
  struct__157776 *kcg_c2);
#endif /* kcg_comp_struct__157776 */

#ifndef kcg_comp_struct__157786
extern kcg_bool kcg_comp_struct__157786(
  struct__157786 *kcg_c1,
  struct__157786 *kcg_c2);
#endif /* kcg_comp_struct__157786 */

#ifndef kcg_comp_struct__157800
extern kcg_bool kcg_comp_struct__157800(
  struct__157800 *kcg_c1,
  struct__157800 *kcg_c2);
#endif /* kcg_comp_struct__157800 */

#ifndef kcg_comp_struct__157806
extern kcg_bool kcg_comp_struct__157806(
  struct__157806 *kcg_c1,
  struct__157806 *kcg_c2);
#endif /* kcg_comp_struct__157806 */

#ifndef kcg_comp_struct__157813
extern kcg_bool kcg_comp_struct__157813(
  struct__157813 *kcg_c1,
  struct__157813 *kcg_c2);
#endif /* kcg_comp_struct__157813 */

#ifndef kcg_comp_struct__157820
extern kcg_bool kcg_comp_struct__157820(
  struct__157820 *kcg_c1,
  struct__157820 *kcg_c2);
#endif /* kcg_comp_struct__157820 */

#ifndef kcg_comp_struct__157829
extern kcg_bool kcg_comp_struct__157829(
  struct__157829 *kcg_c1,
  struct__157829 *kcg_c2);
#endif /* kcg_comp_struct__157829 */

#ifndef kcg_comp_struct__157839
extern kcg_bool kcg_comp_struct__157839(
  struct__157839 *kcg_c1,
  struct__157839 *kcg_c2);
#endif /* kcg_comp_struct__157839 */

#ifndef kcg_comp_struct__157851
extern kcg_bool kcg_comp_struct__157851(
  struct__157851 *kcg_c1,
  struct__157851 *kcg_c2);
#endif /* kcg_comp_struct__157851 */

#ifndef kcg_comp_struct__157860
extern kcg_bool kcg_comp_struct__157860(
  struct__157860 *kcg_c1,
  struct__157860 *kcg_c2);
#endif /* kcg_comp_struct__157860 */

#ifndef kcg_comp_struct__157866
extern kcg_bool kcg_comp_struct__157866(
  struct__157866 *kcg_c1,
  struct__157866 *kcg_c2);
#endif /* kcg_comp_struct__157866 */

#ifndef kcg_comp_struct__157871
extern kcg_bool kcg_comp_struct__157871(
  struct__157871 *kcg_c1,
  struct__157871 *kcg_c2);
#endif /* kcg_comp_struct__157871 */

#ifndef kcg_comp_struct__157878
extern kcg_bool kcg_comp_struct__157878(
  struct__157878 *kcg_c1,
  struct__157878 *kcg_c2);
#endif /* kcg_comp_struct__157878 */

#ifndef kcg_comp_struct__157900
extern kcg_bool kcg_comp_struct__157900(
  struct__157900 *kcg_c1,
  struct__157900 *kcg_c2);
#endif /* kcg_comp_struct__157900 */

#ifndef kcg_comp_struct__157907
extern kcg_bool kcg_comp_struct__157907(
  struct__157907 *kcg_c1,
  struct__157907 *kcg_c2);
#endif /* kcg_comp_struct__157907 */

#ifndef kcg_comp_struct__157940
extern kcg_bool kcg_comp_struct__157940(
  struct__157940 *kcg_c1,
  struct__157940 *kcg_c2);
#endif /* kcg_comp_struct__157940 */

#ifndef kcg_comp_struct__157950
extern kcg_bool kcg_comp_struct__157950(
  struct__157950 *kcg_c1,
  struct__157950 *kcg_c2);
#endif /* kcg_comp_struct__157950 */

#ifndef kcg_comp_struct__157958
extern kcg_bool kcg_comp_struct__157958(
  struct__157958 *kcg_c1,
  struct__157958 *kcg_c2);
#endif /* kcg_comp_struct__157958 */

#ifndef kcg_comp_struct__157967
extern kcg_bool kcg_comp_struct__157967(
  struct__157967 *kcg_c1,
  struct__157967 *kcg_c2);
#endif /* kcg_comp_struct__157967 */

#ifndef kcg_comp_struct__157974
extern kcg_bool kcg_comp_struct__157974(
  struct__157974 *kcg_c1,
  struct__157974 *kcg_c2);
#endif /* kcg_comp_struct__157974 */

#ifndef kcg_comp_struct__157980
extern kcg_bool kcg_comp_struct__157980(
  struct__157980 *kcg_c1,
  struct__157980 *kcg_c2);
#endif /* kcg_comp_struct__157980 */

#ifndef kcg_comp_struct__157992
extern kcg_bool kcg_comp_struct__157992(
  struct__157992 *kcg_c1,
  struct__157992 *kcg_c2);
#endif /* kcg_comp_struct__157992 */

#ifndef kcg_comp_struct__158003
extern kcg_bool kcg_comp_struct__158003(
  struct__158003 *kcg_c1,
  struct__158003 *kcg_c2);
#endif /* kcg_comp_struct__158003 */

#ifndef kcg_comp_struct__158021
extern kcg_bool kcg_comp_struct__158021(
  struct__158021 *kcg_c1,
  struct__158021 *kcg_c2);
#endif /* kcg_comp_struct__158021 */

#ifndef kcg_comp_struct__158027
extern kcg_bool kcg_comp_struct__158027(
  struct__158027 *kcg_c1,
  struct__158027 *kcg_c2);
#endif /* kcg_comp_struct__158027 */

#ifndef kcg_comp_struct__158032
extern kcg_bool kcg_comp_struct__158032(
  struct__158032 *kcg_c1,
  struct__158032 *kcg_c2);
#endif /* kcg_comp_struct__158032 */

#ifndef kcg_comp_struct__158040
extern kcg_bool kcg_comp_struct__158040(
  struct__158040 *kcg_c1,
  struct__158040 *kcg_c2);
#endif /* kcg_comp_struct__158040 */

#ifndef kcg_comp_struct__158051
extern kcg_bool kcg_comp_struct__158051(
  struct__158051 *kcg_c1,
  struct__158051 *kcg_c2);
#endif /* kcg_comp_struct__158051 */

#ifndef kcg_comp_struct__158062
extern kcg_bool kcg_comp_struct__158062(
  struct__158062 *kcg_c1,
  struct__158062 *kcg_c2);
#endif /* kcg_comp_struct__158062 */

#ifndef kcg_comp_struct__158067
extern kcg_bool kcg_comp_struct__158067(
  struct__158067 *kcg_c1,
  struct__158067 *kcg_c2);
#endif /* kcg_comp_struct__158067 */

#ifndef kcg_comp_struct__158077
extern kcg_bool kcg_comp_struct__158077(
  struct__158077 *kcg_c1,
  struct__158077 *kcg_c2);
#endif /* kcg_comp_struct__158077 */

#ifndef kcg_comp_struct__158083
extern kcg_bool kcg_comp_struct__158083(
  struct__158083 *kcg_c1,
  struct__158083 *kcg_c2);
#endif /* kcg_comp_struct__158083 */

#ifndef kcg_comp_struct__158088
extern kcg_bool kcg_comp_struct__158088(
  struct__158088 *kcg_c1,
  struct__158088 *kcg_c2);
#endif /* kcg_comp_struct__158088 */

#ifndef kcg_comp_struct__158096
extern kcg_bool kcg_comp_struct__158096(
  struct__158096 *kcg_c1,
  struct__158096 *kcg_c2);
#endif /* kcg_comp_struct__158096 */

#ifndef kcg_comp_struct__158108
extern kcg_bool kcg_comp_struct__158108(
  struct__158108 *kcg_c1,
  struct__158108 *kcg_c2);
#endif /* kcg_comp_struct__158108 */

#ifndef kcg_comp_struct__158113
extern kcg_bool kcg_comp_struct__158113(
  struct__158113 *kcg_c1,
  struct__158113 *kcg_c2);
#endif /* kcg_comp_struct__158113 */

#ifndef kcg_comp_struct__158126
extern kcg_bool kcg_comp_struct__158126(
  struct__158126 *kcg_c1,
  struct__158126 *kcg_c2);
#endif /* kcg_comp_struct__158126 */

#ifndef kcg_comp_struct__158135
extern kcg_bool kcg_comp_struct__158135(
  struct__158135 *kcg_c1,
  struct__158135 *kcg_c2);
#endif /* kcg_comp_struct__158135 */

#ifndef kcg_comp_struct__158158
extern kcg_bool kcg_comp_struct__158158(
  struct__158158 *kcg_c1,
  struct__158158 *kcg_c2);
#endif /* kcg_comp_struct__158158 */

#ifndef kcg_comp_struct__158176
extern kcg_bool kcg_comp_struct__158176(
  struct__158176 *kcg_c1,
  struct__158176 *kcg_c2);
#endif /* kcg_comp_struct__158176 */

#ifndef kcg_comp_struct__158181
extern kcg_bool kcg_comp_struct__158181(
  struct__158181 *kcg_c1,
  struct__158181 *kcg_c2);
#endif /* kcg_comp_struct__158181 */

#ifndef kcg_comp_struct__158189
extern kcg_bool kcg_comp_struct__158189(
  struct__158189 *kcg_c1,
  struct__158189 *kcg_c2);
#endif /* kcg_comp_struct__158189 */

#ifndef kcg_comp_struct__158202
extern kcg_bool kcg_comp_struct__158202(
  struct__158202 *kcg_c1,
  struct__158202 *kcg_c2);
#endif /* kcg_comp_struct__158202 */

#ifndef kcg_comp_struct__158222
extern kcg_bool kcg_comp_struct__158222(
  struct__158222 *kcg_c1,
  struct__158222 *kcg_c2);
#endif /* kcg_comp_struct__158222 */

#ifndef kcg_comp_struct__158229
extern kcg_bool kcg_comp_struct__158229(
  struct__158229 *kcg_c1,
  struct__158229 *kcg_c2);
#endif /* kcg_comp_struct__158229 */

#ifndef kcg_comp_struct__158238
extern kcg_bool kcg_comp_struct__158238(
  struct__158238 *kcg_c1,
  struct__158238 *kcg_c2);
#endif /* kcg_comp_struct__158238 */

#ifndef kcg_comp_struct__158244
extern kcg_bool kcg_comp_struct__158244(
  struct__158244 *kcg_c1,
  struct__158244 *kcg_c2);
#endif /* kcg_comp_struct__158244 */

#ifndef kcg_comp_struct__158250
extern kcg_bool kcg_comp_struct__158250(
  struct__158250 *kcg_c1,
  struct__158250 *kcg_c2);
#endif /* kcg_comp_struct__158250 */

#ifndef kcg_comp_struct__158256
extern kcg_bool kcg_comp_struct__158256(
  struct__158256 *kcg_c1,
  struct__158256 *kcg_c2);
#endif /* kcg_comp_struct__158256 */

#ifndef kcg_comp_struct__158263
extern kcg_bool kcg_comp_struct__158263(
  struct__158263 *kcg_c1,
  struct__158263 *kcg_c2);
#endif /* kcg_comp_struct__158263 */

#ifndef kcg_comp_struct__158271
extern kcg_bool kcg_comp_struct__158271(
  struct__158271 *kcg_c1,
  struct__158271 *kcg_c2);
#endif /* kcg_comp_struct__158271 */

#ifndef kcg_comp_struct__158280
extern kcg_bool kcg_comp_struct__158280(
  struct__158280 *kcg_c1,
  struct__158280 *kcg_c2);
#endif /* kcg_comp_struct__158280 */

#ifndef kcg_comp_struct__158292
extern kcg_bool kcg_comp_struct__158292(
  struct__158292 *kcg_c1,
  struct__158292 *kcg_c2);
#endif /* kcg_comp_struct__158292 */

#ifndef kcg_comp_struct__158298
extern kcg_bool kcg_comp_struct__158298(
  struct__158298 *kcg_c1,
  struct__158298 *kcg_c2);
#endif /* kcg_comp_struct__158298 */

#ifndef kcg_comp_struct__158304
extern kcg_bool kcg_comp_struct__158304(
  struct__158304 *kcg_c1,
  struct__158304 *kcg_c2);
#endif /* kcg_comp_struct__158304 */

#ifndef kcg_comp_struct__158322
extern kcg_bool kcg_comp_struct__158322(
  struct__158322 *kcg_c1,
  struct__158322 *kcg_c2);
#endif /* kcg_comp_struct__158322 */

#ifndef kcg_comp_struct__158328
extern kcg_bool kcg_comp_struct__158328(
  struct__158328 *kcg_c1,
  struct__158328 *kcg_c2);
#endif /* kcg_comp_struct__158328 */

#ifndef kcg_comp_struct__158334
extern kcg_bool kcg_comp_struct__158334(
  struct__158334 *kcg_c1,
  struct__158334 *kcg_c2);
#endif /* kcg_comp_struct__158334 */

#ifndef kcg_comp_struct__158350
extern kcg_bool kcg_comp_struct__158350(
  struct__158350 *kcg_c1,
  struct__158350 *kcg_c2);
#endif /* kcg_comp_struct__158350 */

#ifndef kcg_comp_struct__158358
extern kcg_bool kcg_comp_struct__158358(
  struct__158358 *kcg_c1,
  struct__158358 *kcg_c2);
#endif /* kcg_comp_struct__158358 */

#ifndef kcg_comp_struct__158363
extern kcg_bool kcg_comp_struct__158363(
  struct__158363 *kcg_c1,
  struct__158363 *kcg_c2);
#endif /* kcg_comp_struct__158363 */

#ifndef kcg_comp_struct__158371
extern kcg_bool kcg_comp_struct__158371(
  struct__158371 *kcg_c1,
  struct__158371 *kcg_c2);
#endif /* kcg_comp_struct__158371 */

#ifndef kcg_comp_struct__158376
extern kcg_bool kcg_comp_struct__158376(
  struct__158376 *kcg_c1,
  struct__158376 *kcg_c2);
#endif /* kcg_comp_struct__158376 */

#ifndef kcg_comp_struct__158390
extern kcg_bool kcg_comp_struct__158390(
  struct__158390 *kcg_c1,
  struct__158390 *kcg_c2);
#endif /* kcg_comp_struct__158390 */

#ifndef kcg_comp_struct__158401
extern kcg_bool kcg_comp_struct__158401(
  struct__158401 *kcg_c1,
  struct__158401 *kcg_c2);
#endif /* kcg_comp_struct__158401 */

#ifndef kcg_comp_struct__158434
extern kcg_bool kcg_comp_struct__158434(
  struct__158434 *kcg_c1,
  struct__158434 *kcg_c2);
#endif /* kcg_comp_struct__158434 */

#ifndef kcg_comp_struct__158440
extern kcg_bool kcg_comp_struct__158440(
  struct__158440 *kcg_c1,
  struct__158440 *kcg_c2);
#endif /* kcg_comp_struct__158440 */

#ifndef kcg_comp_struct__158466
extern kcg_bool kcg_comp_struct__158466(
  struct__158466 *kcg_c1,
  struct__158466 *kcg_c2);
#endif /* kcg_comp_struct__158466 */

#ifndef kcg_comp_struct__158486
extern kcg_bool kcg_comp_struct__158486(
  struct__158486 *kcg_c1,
  struct__158486 *kcg_c2);
#endif /* kcg_comp_struct__158486 */

#ifndef kcg_comp_struct__158493
extern kcg_bool kcg_comp_struct__158493(
  struct__158493 *kcg_c1,
  struct__158493 *kcg_c2);
#endif /* kcg_comp_struct__158493 */

#ifndef kcg_comp_struct__158498
extern kcg_bool kcg_comp_struct__158498(
  struct__158498 *kcg_c1,
  struct__158498 *kcg_c2);
#endif /* kcg_comp_struct__158498 */

#ifndef kcg_comp_struct__158503
extern kcg_bool kcg_comp_struct__158503(
  struct__158503 *kcg_c1,
  struct__158503 *kcg_c2);
#endif /* kcg_comp_struct__158503 */

#ifndef kcg_comp_struct__158511
extern kcg_bool kcg_comp_struct__158511(
  struct__158511 *kcg_c1,
  struct__158511 *kcg_c2);
#endif /* kcg_comp_struct__158511 */

#ifndef kcg_comp_struct__158518
extern kcg_bool kcg_comp_struct__158518(
  struct__158518 *kcg_c1,
  struct__158518 *kcg_c2);
#endif /* kcg_comp_struct__158518 */

#ifndef kcg_comp_struct__158523
extern kcg_bool kcg_comp_struct__158523(
  struct__158523 *kcg_c1,
  struct__158523 *kcg_c2);
#endif /* kcg_comp_struct__158523 */

#ifndef kcg_comp_struct__158532
extern kcg_bool kcg_comp_struct__158532(
  struct__158532 *kcg_c1,
  struct__158532 *kcg_c2);
#endif /* kcg_comp_struct__158532 */

#ifndef kcg_comp_struct__158541
extern kcg_bool kcg_comp_struct__158541(
  struct__158541 *kcg_c1,
  struct__158541 *kcg_c2);
#endif /* kcg_comp_struct__158541 */

#ifndef kcg_comp_struct__158550
extern kcg_bool kcg_comp_struct__158550(
  struct__158550 *kcg_c1,
  struct__158550 *kcg_c2);
#endif /* kcg_comp_struct__158550 */

#ifndef kcg_comp_struct__158559
extern kcg_bool kcg_comp_struct__158559(
  struct__158559 *kcg_c1,
  struct__158559 *kcg_c2);
#endif /* kcg_comp_struct__158559 */

#ifndef kcg_comp_struct__158566
extern kcg_bool kcg_comp_struct__158566(
  struct__158566 *kcg_c1,
  struct__158566 *kcg_c2);
#endif /* kcg_comp_struct__158566 */

#ifndef kcg_comp_struct__158583
extern kcg_bool kcg_comp_struct__158583(
  struct__158583 *kcg_c1,
  struct__158583 *kcg_c2);
#endif /* kcg_comp_struct__158583 */

#ifndef kcg_comp_struct__158595
extern kcg_bool kcg_comp_struct__158595(
  struct__158595 *kcg_c1,
  struct__158595 *kcg_c2);
#endif /* kcg_comp_struct__158595 */

#ifndef kcg_comp_struct__158606
extern kcg_bool kcg_comp_struct__158606(
  struct__158606 *kcg_c1,
  struct__158606 *kcg_c2);
#endif /* kcg_comp_struct__158606 */

#ifndef kcg_comp_struct__158614
extern kcg_bool kcg_comp_struct__158614(
  struct__158614 *kcg_c1,
  struct__158614 *kcg_c2);
#endif /* kcg_comp_struct__158614 */

#ifndef kcg_comp_struct__158634
extern kcg_bool kcg_comp_struct__158634(
  struct__158634 *kcg_c1,
  struct__158634 *kcg_c2);
#endif /* kcg_comp_struct__158634 */

#ifndef kcg_comp_struct__158702
extern kcg_bool kcg_comp_struct__158702(
  struct__158702 *kcg_c1,
  struct__158702 *kcg_c2);
#endif /* kcg_comp_struct__158702 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__155012
extern kcg_bool kcg_comp_array__155012(
  array__155012 *kcg_c1,
  array__155012 *kcg_c2);
#endif /* kcg_comp_array__155012 */

#ifndef kcg_comp_array__155066
extern kcg_bool kcg_comp_array__155066(
  array__155066 *kcg_c1,
  array__155066 *kcg_c2);
#endif /* kcg_comp_array__155066 */

#ifndef kcg_comp_array_int_3
extern kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2);
#endif /* kcg_comp_array_int_3 */

#ifndef kcg_comp_array_int_3_33
extern kcg_bool kcg_comp_array_int_3_33(
  array_int_3_33 *kcg_c1,
  array_int_3_33 *kcg_c2);
#endif /* kcg_comp_array_int_3_33 */

#ifndef kcg_comp_array_int_99
extern kcg_bool kcg_comp_array_int_99(
  array_int_99 *kcg_c1,
  array_int_99 *kcg_c2);
#endif /* kcg_comp_array_int_99 */

#ifndef kcg_comp_array__155092
extern kcg_bool kcg_comp_array__155092(
  array__155092 *kcg_c1,
  array__155092 *kcg_c2);
#endif /* kcg_comp_array__155092 */

#ifndef kcg_comp_array__155100
extern kcg_bool kcg_comp_array__155100(
  array__155100 *kcg_c1,
  array__155100 *kcg_c2);
#endif /* kcg_comp_array__155100 */

#ifndef kcg_comp_array_int_2
extern kcg_bool kcg_comp_array_int_2(array_int_2 *kcg_c1, array_int_2 *kcg_c2);
#endif /* kcg_comp_array_int_2 */

#ifndef kcg_comp_array_int_2_33
extern kcg_bool kcg_comp_array_int_2_33(
  array_int_2_33 *kcg_c1,
  array_int_2_33 *kcg_c2);
#endif /* kcg_comp_array_int_2_33 */

#ifndef kcg_comp_array_int_66
extern kcg_bool kcg_comp_array_int_66(
  array_int_66 *kcg_c1,
  array_int_66 *kcg_c2);
#endif /* kcg_comp_array_int_66 */

#ifndef kcg_comp_array__155123
extern kcg_bool kcg_comp_array__155123(
  array__155123 *kcg_c1,
  array__155123 *kcg_c2);
#endif /* kcg_comp_array__155123 */

#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */

#ifndef kcg_comp_array__155185
extern kcg_bool kcg_comp_array__155185(
  array__155185 *kcg_c1,
  array__155185 *kcg_c2);
#endif /* kcg_comp_array__155185 */

#ifndef kcg_comp_array__155225
extern kcg_bool kcg_comp_array__155225(
  array__155225 *kcg_c1,
  array__155225 *kcg_c2);
#endif /* kcg_comp_array__155225 */

#ifndef kcg_comp_array__155250
extern kcg_bool kcg_comp_array__155250(
  array__155250 *kcg_c1,
  array__155250 *kcg_c2);
#endif /* kcg_comp_array__155250 */

#ifndef kcg_comp_array__155261
extern kcg_bool kcg_comp_array__155261(
  array__155261 *kcg_c1,
  array__155261 *kcg_c2);
#endif /* kcg_comp_array__155261 */

#ifndef kcg_comp_array__155285
extern kcg_bool kcg_comp_array__155285(
  array__155285 *kcg_c1,
  array__155285 *kcg_c2);
#endif /* kcg_comp_array__155285 */

#ifndef kcg_comp_array_int_4
extern kcg_bool kcg_comp_array_int_4(array_int_4 *kcg_c1, array_int_4 *kcg_c2);
#endif /* kcg_comp_array_int_4 */

#ifndef kcg_comp_array_int_4_32
extern kcg_bool kcg_comp_array_int_4_32(
  array_int_4_32 *kcg_c1,
  array_int_4_32 *kcg_c2);
#endif /* kcg_comp_array_int_4_32 */

#ifndef kcg_comp_array_int_128
extern kcg_bool kcg_comp_array_int_128(
  array_int_128 *kcg_c1,
  array_int_128 *kcg_c2);
#endif /* kcg_comp_array_int_128 */

#ifndef kcg_comp_array_int_7
extern kcg_bool kcg_comp_array_int_7(array_int_7 *kcg_c1, array_int_7 *kcg_c2);
#endif /* kcg_comp_array_int_7 */

#ifndef kcg_comp_array_int_7_33
extern kcg_bool kcg_comp_array_int_7_33(
  array_int_7_33 *kcg_c1,
  array_int_7_33 *kcg_c2);
#endif /* kcg_comp_array_int_7_33 */

#ifndef kcg_comp_array_int_231
extern kcg_bool kcg_comp_array_int_231(
  array_int_231 *kcg_c1,
  array_int_231 *kcg_c2);
#endif /* kcg_comp_array_int_231 */

#ifndef kcg_comp_array__155332
extern kcg_bool kcg_comp_array__155332(
  array__155332 *kcg_c1,
  array__155332 *kcg_c2);
#endif /* kcg_comp_array__155332 */

#ifndef kcg_comp_array_int_64
extern kcg_bool kcg_comp_array_int_64(
  array_int_64 *kcg_c1,
  array_int_64 *kcg_c2);
#endif /* kcg_comp_array_int_64 */

#ifndef kcg_comp_array_int_2_32
extern kcg_bool kcg_comp_array_int_2_32(
  array_int_2_32 *kcg_c1,
  array_int_2_32 *kcg_c2);
#endif /* kcg_comp_array_int_2_32 */

#ifndef kcg_comp_array__155341
extern kcg_bool kcg_comp_array__155341(
  array__155341 *kcg_c1,
  array__155341 *kcg_c2);
#endif /* kcg_comp_array__155341 */

#ifndef kcg_comp_array__155344
extern kcg_bool kcg_comp_array__155344(
  array__155344 *kcg_c1,
  array__155344 *kcg_c2);
#endif /* kcg_comp_array__155344 */

#ifndef kcg_comp_array__155393
extern kcg_bool kcg_comp_array__155393(
  array__155393 *kcg_c1,
  array__155393 *kcg_c2);
#endif /* kcg_comp_array__155393 */

#ifndef kcg_comp_array__155611
extern kcg_bool kcg_comp_array__155611(
  array__155611 *kcg_c1,
  array__155611 *kcg_c2);
#endif /* kcg_comp_array__155611 */

#ifndef kcg_comp_array__155632
extern kcg_bool kcg_comp_array__155632(
  array__155632 *kcg_c1,
  array__155632 *kcg_c2);
#endif /* kcg_comp_array__155632 */

#ifndef kcg_comp_array_int_15
extern kcg_bool kcg_comp_array_int_15(
  array_int_15 *kcg_c1,
  array_int_15 *kcg_c2);
#endif /* kcg_comp_array_int_15 */

#ifndef kcg_comp_array__155699
extern kcg_bool kcg_comp_array__155699(
  array__155699 *kcg_c1,
  array__155699 *kcg_c2);
#endif /* kcg_comp_array__155699 */

#ifndef kcg_comp_array__155707
extern kcg_bool kcg_comp_array__155707(
  array__155707 *kcg_c1,
  array__155707 *kcg_c2);
#endif /* kcg_comp_array__155707 */

#ifndef kcg_comp_array_int_5
extern kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2);
#endif /* kcg_comp_array_int_5 */

#ifndef kcg_comp_array__155736
extern kcg_bool kcg_comp_array__155736(
  array__155736 *kcg_c1,
  array__155736 *kcg_c2);
#endif /* kcg_comp_array__155736 */

#ifndef kcg_comp_array_int_8
extern kcg_bool kcg_comp_array_int_8(array_int_8 *kcg_c1, array_int_8 *kcg_c2);
#endif /* kcg_comp_array_int_8 */

#ifndef kcg_comp_array_int_11
extern kcg_bool kcg_comp_array_int_11(
  array_int_11 *kcg_c1,
  array_int_11 *kcg_c2);
#endif /* kcg_comp_array_int_11 */

#ifndef kcg_comp_array_int_25
extern kcg_bool kcg_comp_array_int_25(
  array_int_25 *kcg_c1,
  array_int_25 *kcg_c2);
#endif /* kcg_comp_array_int_25 */

#ifndef kcg_comp_array_int_17
extern kcg_bool kcg_comp_array_int_17(
  array_int_17 *kcg_c1,
  array_int_17 *kcg_c2);
#endif /* kcg_comp_array_int_17 */

#ifndef kcg_comp_array_int_50
extern kcg_bool kcg_comp_array_int_50(
  array_int_50 *kcg_c1,
  array_int_50 *kcg_c2);
#endif /* kcg_comp_array_int_50 */

#ifndef kcg_comp_array__156225
extern kcg_bool kcg_comp_array__156225(
  array__156225 *kcg_c1,
  array__156225 *kcg_c2);
#endif /* kcg_comp_array__156225 */

#ifndef kcg_comp_array_int_311
extern kcg_bool kcg_comp_array_int_311(
  array_int_311 *kcg_c1,
  array_int_311 *kcg_c2);
#endif /* kcg_comp_array_int_311 */

#ifndef kcg_comp_array_int_999
extern kcg_bool kcg_comp_array_int_999(
  array_int_999 *kcg_c1,
  array_int_999 *kcg_c2);
#endif /* kcg_comp_array_int_999 */

#ifndef kcg_comp_array__156467
extern kcg_bool kcg_comp_array__156467(
  array__156467 *kcg_c1,
  array__156467 *kcg_c2);
#endif /* kcg_comp_array__156467 */

#ifndef kcg_comp_array__156492
extern kcg_bool kcg_comp_array__156492(
  array__156492 *kcg_c1,
  array__156492 *kcg_c2);
#endif /* kcg_comp_array__156492 */

#ifndef kcg_comp_array__156522
extern kcg_bool kcg_comp_array__156522(
  array__156522 *kcg_c1,
  array__156522 *kcg_c2);
#endif /* kcg_comp_array__156522 */

#ifndef kcg_comp_array_int_9
extern kcg_bool kcg_comp_array_int_9(array_int_9 *kcg_c1, array_int_9 *kcg_c2);
#endif /* kcg_comp_array_int_9 */

#ifndef kcg_comp_array__156600
extern kcg_bool kcg_comp_array__156600(
  array__156600 *kcg_c1,
  array__156600 *kcg_c2);
#endif /* kcg_comp_array__156600 */

#ifndef kcg_comp_array__156610
extern kcg_bool kcg_comp_array__156610(
  array__156610 *kcg_c1,
  array__156610 *kcg_c2);
#endif /* kcg_comp_array__156610 */

#ifndef kcg_comp_array__156625
extern kcg_bool kcg_comp_array__156625(
  array__156625 *kcg_c1,
  array__156625 *kcg_c2);
#endif /* kcg_comp_array__156625 */

#ifndef kcg_comp_array__156635
extern kcg_bool kcg_comp_array__156635(
  array__156635 *kcg_c1,
  array__156635 *kcg_c2);
#endif /* kcg_comp_array__156635 */

#ifndef kcg_comp_array__156680
extern kcg_bool kcg_comp_array__156680(
  array__156680 *kcg_c1,
  array__156680 *kcg_c2);
#endif /* kcg_comp_array__156680 */

#ifndef kcg_comp_array__156690
extern kcg_bool kcg_comp_array__156690(
  array__156690 *kcg_c1,
  array__156690 *kcg_c2);
#endif /* kcg_comp_array__156690 */

#ifndef kcg_comp_array__156701
extern kcg_bool kcg_comp_array__156701(
  array__156701 *kcg_c1,
  array__156701 *kcg_c2);
#endif /* kcg_comp_array__156701 */

#ifndef kcg_comp_array__156709
extern kcg_bool kcg_comp_array__156709(
  array__156709 *kcg_c1,
  array__156709 *kcg_c2);
#endif /* kcg_comp_array__156709 */

#ifndef kcg_comp_array__156762
extern kcg_bool kcg_comp_array__156762(
  array__156762 *kcg_c1,
  array__156762 *kcg_c2);
#endif /* kcg_comp_array__156762 */

#ifndef kcg_comp_array__156795
extern kcg_bool kcg_comp_array__156795(
  array__156795 *kcg_c1,
  array__156795 *kcg_c2);
#endif /* kcg_comp_array__156795 */

#ifndef kcg_comp_array__156811
extern kcg_bool kcg_comp_array__156811(
  array__156811 *kcg_c1,
  array__156811 *kcg_c2);
#endif /* kcg_comp_array__156811 */

#ifndef kcg_comp_array__156848
extern kcg_bool kcg_comp_array__156848(
  array__156848 *kcg_c1,
  array__156848 *kcg_c2);
#endif /* kcg_comp_array__156848 */

#ifndef kcg_comp_array_int_6
extern kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2);
#endif /* kcg_comp_array_int_6 */

#ifndef kcg_comp_array__156921
extern kcg_bool kcg_comp_array__156921(
  array__156921 *kcg_c1,
  array__156921 *kcg_c2);
#endif /* kcg_comp_array__156921 */

#ifndef kcg_comp_array__156957
extern kcg_bool kcg_comp_array__156957(
  array__156957 *kcg_c1,
  array__156957 *kcg_c2);
#endif /* kcg_comp_array__156957 */

#ifndef kcg_comp_array__156967
extern kcg_bool kcg_comp_array__156967(
  array__156967 *kcg_c1,
  array__156967 *kcg_c2);
#endif /* kcg_comp_array__156967 */

#ifndef kcg_comp_array__156999
extern kcg_bool kcg_comp_array__156999(
  array__156999 *kcg_c1,
  array__156999 *kcg_c2);
#endif /* kcg_comp_array__156999 */

#ifndef kcg_comp_array__157014
extern kcg_bool kcg_comp_array__157014(
  array__157014 *kcg_c1,
  array__157014 *kcg_c2);
#endif /* kcg_comp_array__157014 */

#ifndef kcg_comp_array__157030
extern kcg_bool kcg_comp_array__157030(
  array__157030 *kcg_c1,
  array__157030 *kcg_c2);
#endif /* kcg_comp_array__157030 */

#ifndef kcg_comp_array__157066
extern kcg_bool kcg_comp_array__157066(
  array__157066 *kcg_c1,
  array__157066 *kcg_c2);
#endif /* kcg_comp_array__157066 */

#ifndef kcg_comp_array__157081
extern kcg_bool kcg_comp_array__157081(
  array__157081 *kcg_c1,
  array__157081 *kcg_c2);
#endif /* kcg_comp_array__157081 */

#ifndef kcg_comp_array__157092
extern kcg_bool kcg_comp_array__157092(
  array__157092 *kcg_c1,
  array__157092 *kcg_c2);
#endif /* kcg_comp_array__157092 */

#ifndef kcg_comp_array__157104
extern kcg_bool kcg_comp_array__157104(
  array__157104 *kcg_c1,
  array__157104 *kcg_c2);
#endif /* kcg_comp_array__157104 */

#ifndef kcg_comp_array__157142
extern kcg_bool kcg_comp_array__157142(
  array__157142 *kcg_c1,
  array__157142 *kcg_c2);
#endif /* kcg_comp_array__157142 */

#ifndef kcg_comp_array__157165
extern kcg_bool kcg_comp_array__157165(
  array__157165 *kcg_c1,
  array__157165 *kcg_c2);
#endif /* kcg_comp_array__157165 */

#ifndef kcg_comp_array__157177
extern kcg_bool kcg_comp_array__157177(
  array__157177 *kcg_c1,
  array__157177 *kcg_c2);
#endif /* kcg_comp_array__157177 */

#ifndef kcg_comp_array__157195
extern kcg_bool kcg_comp_array__157195(
  array__157195 *kcg_c1,
  array__157195 *kcg_c2);
#endif /* kcg_comp_array__157195 */

#ifndef kcg_comp_array__157206
extern kcg_bool kcg_comp_array__157206(
  array__157206 *kcg_c1,
  array__157206 *kcg_c2);
#endif /* kcg_comp_array__157206 */

#ifndef kcg_comp_array__157236
extern kcg_bool kcg_comp_array__157236(
  array__157236 *kcg_c1,
  array__157236 *kcg_c2);
#endif /* kcg_comp_array__157236 */

#ifndef kcg_comp_array__157246
extern kcg_bool kcg_comp_array__157246(
  array__157246 *kcg_c1,
  array__157246 *kcg_c2);
#endif /* kcg_comp_array__157246 */

#ifndef kcg_comp_array__157265
extern kcg_bool kcg_comp_array__157265(
  array__157265 *kcg_c1,
  array__157265 *kcg_c2);
#endif /* kcg_comp_array__157265 */

#ifndef kcg_comp_array__157274
extern kcg_bool kcg_comp_array__157274(
  array__157274 *kcg_c1,
  array__157274 *kcg_c2);
#endif /* kcg_comp_array__157274 */

#ifndef kcg_comp_array__157343
extern kcg_bool kcg_comp_array__157343(
  array__157343 *kcg_c1,
  array__157343 *kcg_c2);
#endif /* kcg_comp_array__157343 */

#ifndef kcg_comp_array__157346
extern kcg_bool kcg_comp_array__157346(
  array__157346 *kcg_c1,
  array__157346 *kcg_c2);
#endif /* kcg_comp_array__157346 */

#ifndef kcg_comp_array_int_24
extern kcg_bool kcg_comp_array_int_24(
  array_int_24 *kcg_c1,
  array_int_24 *kcg_c2);
#endif /* kcg_comp_array_int_24 */

#ifndef kcg_comp_array__157384
extern kcg_bool kcg_comp_array__157384(
  array__157384 *kcg_c1,
  array__157384 *kcg_c2);
#endif /* kcg_comp_array__157384 */

#ifndef kcg_comp_array__157387
extern kcg_bool kcg_comp_array__157387(
  array__157387 *kcg_c1,
  array__157387 *kcg_c2);
#endif /* kcg_comp_array__157387 */

#ifndef kcg_comp_array_int_2_4
extern kcg_bool kcg_comp_array_int_2_4(
  array_int_2_4 *kcg_c1,
  array_int_2_4 *kcg_c2);
#endif /* kcg_comp_array_int_2_4 */

#ifndef kcg_comp_array__157545
extern kcg_bool kcg_comp_array__157545(
  array__157545 *kcg_c1,
  array__157545 *kcg_c2);
#endif /* kcg_comp_array__157545 */

#ifndef kcg_comp_array_int_1
extern kcg_bool kcg_comp_array_int_1(array_int_1 *kcg_c1, array_int_1 *kcg_c2);
#endif /* kcg_comp_array_int_1 */

#ifndef kcg_comp_array__157581
extern kcg_bool kcg_comp_array__157581(
  array__157581 *kcg_c1,
  array__157581 *kcg_c2);
#endif /* kcg_comp_array__157581 */

#ifndef kcg_comp_array__157593
extern kcg_bool kcg_comp_array__157593(
  array__157593 *kcg_c1,
  array__157593 *kcg_c2);
#endif /* kcg_comp_array__157593 */

#ifndef kcg_comp_array__157615
extern kcg_bool kcg_comp_array__157615(
  array__157615 *kcg_c1,
  array__157615 *kcg_c2);
#endif /* kcg_comp_array__157615 */

#ifndef kcg_comp_array__157677
extern kcg_bool kcg_comp_array__157677(
  array__157677 *kcg_c1,
  array__157677 *kcg_c2);
#endif /* kcg_comp_array__157677 */

#ifndef kcg_comp_array__157680
extern kcg_bool kcg_comp_array__157680(
  array__157680 *kcg_c1,
  array__157680 *kcg_c2);
#endif /* kcg_comp_array__157680 */

#ifndef kcg_comp_array__157683
extern kcg_bool kcg_comp_array__157683(
  array__157683 *kcg_c1,
  array__157683 *kcg_c2);
#endif /* kcg_comp_array__157683 */

#ifndef kcg_comp_array__157686
extern kcg_bool kcg_comp_array__157686(
  array__157686 *kcg_c1,
  array__157686 *kcg_c2);
#endif /* kcg_comp_array__157686 */

#ifndef kcg_comp_array__157689
extern kcg_bool kcg_comp_array__157689(
  array__157689 *kcg_c1,
  array__157689 *kcg_c2);
#endif /* kcg_comp_array__157689 */

#ifndef kcg_comp_array_bool_256
extern kcg_bool kcg_comp_array_bool_256(
  array_bool_256 *kcg_c1,
  array_bool_256 *kcg_c2);
#endif /* kcg_comp_array_bool_256 */

#ifndef kcg_comp_array_bool_256_46
extern kcg_bool kcg_comp_array_bool_256_46(
  array_bool_256_46 *kcg_c1,
  array_bool_256_46 *kcg_c2);
#endif /* kcg_comp_array_bool_256_46 */

#ifndef kcg_comp_array__157714
extern kcg_bool kcg_comp_array__157714(
  array__157714 *kcg_c1,
  array__157714 *kcg_c2);
#endif /* kcg_comp_array__157714 */

#ifndef kcg_comp_array__157797
extern kcg_bool kcg_comp_array__157797(
  array__157797 *kcg_c1,
  array__157797 *kcg_c2);
#endif /* kcg_comp_array__157797 */

#ifndef kcg_comp_array_char_255
extern kcg_bool kcg_comp_array_char_255(
  array_char_255 *kcg_c1,
  array_char_255 *kcg_c2);
#endif /* kcg_comp_array_char_255 */

#ifndef kcg_comp_array_char_9
extern kcg_bool kcg_comp_array_char_9(
  array_char_9 *kcg_c1,
  array_char_9 *kcg_c2);
#endif /* kcg_comp_array_char_9 */

#ifndef kcg_comp_array_int_255
extern kcg_bool kcg_comp_array_int_255(
  array_int_255 *kcg_c1,
  array_int_255 *kcg_c2);
#endif /* kcg_comp_array_int_255 */

#ifndef kcg_comp_array_int_261
extern kcg_bool kcg_comp_array_int_261(
  array_int_261 *kcg_c1,
  array_int_261 *kcg_c2);
#endif /* kcg_comp_array_int_261 */

#ifndef kcg_comp_array_bool_114
extern kcg_bool kcg_comp_array_bool_114(
  array_bool_114 *kcg_c1,
  array_bool_114 *kcg_c2);
#endif /* kcg_comp_array_bool_114 */

#ifndef kcg_comp_array_real_114
extern kcg_bool kcg_comp_array_real_114(
  array_real_114 *kcg_c1,
  array_real_114 *kcg_c2);
#endif /* kcg_comp_array_real_114 */

#ifndef kcg_comp_array__157947
extern kcg_bool kcg_comp_array__157947(
  array__157947 *kcg_c1,
  array__157947 *kcg_c2);
#endif /* kcg_comp_array__157947 */

#ifndef kcg_comp_array__157964
extern kcg_bool kcg_comp_array__157964(
  array__157964 *kcg_c1,
  array__157964 *kcg_c2);
#endif /* kcg_comp_array__157964 */

#ifndef kcg_comp_array__157986
extern kcg_bool kcg_comp_array__157986(
  array__157986 *kcg_c1,
  array__157986 *kcg_c2);
#endif /* kcg_comp_array__157986 */

#ifndef kcg_comp_array__157989
extern kcg_bool kcg_comp_array__157989(
  array__157989 *kcg_c1,
  array__157989 *kcg_c2);
#endif /* kcg_comp_array__157989 */

#ifndef kcg_comp_array__158000
extern kcg_bool kcg_comp_array__158000(
  array__158000 *kcg_c1,
  array__158000 *kcg_c2);
#endif /* kcg_comp_array__158000 */

#ifndef kcg_comp_array_real_100
extern kcg_bool kcg_comp_array_real_100(
  array_real_100 *kcg_c1,
  array_real_100 *kcg_c2);
#endif /* kcg_comp_array_real_100 */

#ifndef kcg_comp_array_real_100_14
extern kcg_bool kcg_comp_array_real_100_14(
  array_real_100_14 *kcg_c1,
  array_real_100_14 *kcg_c2);
#endif /* kcg_comp_array_real_100_14 */

#ifndef kcg_comp_array_real_14
extern kcg_bool kcg_comp_array_real_14(
  array_real_14 *kcg_c1,
  array_real_14 *kcg_c2);
#endif /* kcg_comp_array_real_14 */

#ifndef kcg_comp_array_int_13
extern kcg_bool kcg_comp_array_int_13(
  array_int_13 *kcg_c1,
  array_int_13 *kcg_c2);
#endif /* kcg_comp_array_int_13 */

#ifndef kcg_comp_array_int_221
extern kcg_bool kcg_comp_array_int_221(
  array_int_221 *kcg_c1,
  array_int_221 *kcg_c2);
#endif /* kcg_comp_array_int_221 */

#ifndef kcg_comp_array_int_6_221
extern kcg_bool kcg_comp_array_int_6_221(
  array_int_6_221 *kcg_c1,
  array_int_6_221 *kcg_c2);
#endif /* kcg_comp_array_int_6_221 */

#ifndef kcg_comp_array_real_3
extern kcg_bool kcg_comp_array_real_3(
  array_real_3 *kcg_c1,
  array_real_3 *kcg_c2);
#endif /* kcg_comp_array_real_3 */

#ifndef kcg_comp_array_real_2
extern kcg_bool kcg_comp_array_real_2(
  array_real_2 *kcg_c1,
  array_real_2 *kcg_c2);
#endif /* kcg_comp_array_real_2 */

#ifndef kcg_comp_array__158132
extern kcg_bool kcg_comp_array__158132(
  array__158132 *kcg_c1,
  array__158132 *kcg_c2);
#endif /* kcg_comp_array__158132 */

#ifndef kcg_comp_array_bool_14
extern kcg_bool kcg_comp_array_bool_14(
  array_bool_14 *kcg_c1,
  array_bool_14 *kcg_c2);
#endif /* kcg_comp_array_bool_14 */

#ifndef kcg_comp_array_int_65
extern kcg_bool kcg_comp_array_int_65(
  array_int_65 *kcg_c1,
  array_int_65 *kcg_c2);
#endif /* kcg_comp_array_int_65 */

#ifndef kcg_comp_array_int_67
extern kcg_bool kcg_comp_array_int_67(
  array_int_67 *kcg_c1,
  array_int_67 *kcg_c2);
#endif /* kcg_comp_array_int_67 */

#ifndef kcg_comp_array_int_129
extern kcg_bool kcg_comp_array_int_129(
  array_int_129 *kcg_c1,
  array_int_129 *kcg_c2);
#endif /* kcg_comp_array_int_129 */

#ifndef kcg_comp_array__158347
extern kcg_bool kcg_comp_array__158347(
  array__158347 *kcg_c1,
  array__158347 *kcg_c2);
#endif /* kcg_comp_array__158347 */

#ifndef kcg_comp_array__158355
extern kcg_bool kcg_comp_array__158355(
  array__158355 *kcg_c1,
  array__158355 *kcg_c2);
#endif /* kcg_comp_array__158355 */

#ifndef kcg_comp_array__158368
extern kcg_bool kcg_comp_array__158368(
  array__158368 *kcg_c1,
  array__158368 *kcg_c2);
#endif /* kcg_comp_array__158368 */

#ifndef kcg_comp_array_int_325
extern kcg_bool kcg_comp_array_int_325(
  array_int_325 *kcg_c1,
  array_int_325 *kcg_c2);
#endif /* kcg_comp_array_int_325 */

#ifndef kcg_comp_array_int_262
extern kcg_bool kcg_comp_array_int_262(
  array_int_262 *kcg_c1,
  array_int_262 *kcg_c2);
#endif /* kcg_comp_array_int_262 */

#ifndef kcg_comp_array__158556
extern kcg_bool kcg_comp_array__158556(
  array__158556 *kcg_c1,
  array__158556 *kcg_c2);
#endif /* kcg_comp_array__158556 */

#ifndef kcg_comp_array__158603
extern kcg_bool kcg_comp_array__158603(
  array__158603 *kcg_c1,
  array__158603 *kcg_c2);
#endif /* kcg_comp_array__158603 */

#ifndef kcg_comp_array_bool_30
extern kcg_bool kcg_comp_array_bool_30(
  array_bool_30 *kcg_c1,
  array_bool_30 *kcg_c2);
#endif /* kcg_comp_array_bool_30 */

#ifndef kcg_comp_array_bool_4
extern kcg_bool kcg_comp_array_bool_4(
  array_bool_4 *kcg_c1,
  array_bool_4 *kcg_c2);
#endif /* kcg_comp_array_bool_4 */

#ifndef kcg_comp_array_bool_1
extern kcg_bool kcg_comp_array_bool_1(
  array_bool_1 *kcg_c1,
  array_bool_1 *kcg_c2);
#endif /* kcg_comp_array_bool_1 */

#ifndef kcg_comp_array_real_1
extern kcg_bool kcg_comp_array_real_1(
  array_real_1 *kcg_c1,
  array_real_1 *kcg_c2);
#endif /* kcg_comp_array_real_1 */

#ifndef kcg_comp_array__158645
extern kcg_bool kcg_comp_array__158645(
  array__158645 *kcg_c1,
  array__158645 *kcg_c2);
#endif /* kcg_comp_array__158645 */

#ifndef kcg_comp_array_real_100_1
extern kcg_bool kcg_comp_array_real_100_1(
  array_real_100_1 *kcg_c1,
  array_real_100_1 *kcg_c2);
#endif /* kcg_comp_array_real_100_1 */

#ifndef kcg_comp_array_real_100_13
extern kcg_bool kcg_comp_array_real_100_13(
  array_real_100_13 *kcg_c1,
  array_real_100_13 *kcg_c2);
#endif /* kcg_comp_array_real_100_13 */

#ifndef kcg_comp_array_real_13
extern kcg_bool kcg_comp_array_real_13(
  array_real_13 *kcg_c1,
  array_real_13 *kcg_c2);
#endif /* kcg_comp_array_real_13 */

#ifndef kcg_comp_array_real_8
extern kcg_bool kcg_comp_array_real_8(
  array_real_8 *kcg_c1,
  array_real_8 *kcg_c2);
#endif /* kcg_comp_array_real_8 */

#ifndef kcg_comp_array_real_100_8
extern kcg_bool kcg_comp_array_real_100_8(
  array_real_100_8 *kcg_c1,
  array_real_100_8 *kcg_c2);
#endif /* kcg_comp_array_real_100_8 */

#ifndef kcg_comp_array_real_100_6
extern kcg_bool kcg_comp_array_real_100_6(
  array_real_100_6 *kcg_c1,
  array_real_100_6 *kcg_c2);
#endif /* kcg_comp_array_real_100_6 */

#ifndef kcg_comp_array_real_6
extern kcg_bool kcg_comp_array_real_6(
  array_real_6 *kcg_c1,
  array_real_6 *kcg_c2);
#endif /* kcg_comp_array_real_6 */

#ifndef kcg_comp_array_bool_8
extern kcg_bool kcg_comp_array_bool_8(
  array_bool_8 *kcg_c1,
  array_bool_8 *kcg_c2);
#endif /* kcg_comp_array_bool_8 */

#ifndef kcg_comp_array__158672
extern kcg_bool kcg_comp_array__158672(
  array__158672 *kcg_c1,
  array__158672 *kcg_c2);
#endif /* kcg_comp_array__158672 */

#ifndef kcg_comp_array__158675
extern kcg_bool kcg_comp_array__158675(
  array__158675 *kcg_c1,
  array__158675 *kcg_c2);
#endif /* kcg_comp_array__158675 */

#ifndef kcg_comp_array__158678
extern kcg_bool kcg_comp_array__158678(
  array__158678 *kcg_c1,
  array__158678 *kcg_c2);
#endif /* kcg_comp_array__158678 */

#ifndef kcg_comp_array_int_33
extern kcg_bool kcg_comp_array_int_33(
  array_int_33 *kcg_c1,
  array_int_33 *kcg_c2);
#endif /* kcg_comp_array_int_33 */

#ifndef kcg_comp_array_int_30
extern kcg_bool kcg_comp_array_int_30(
  array_int_30 *kcg_c1,
  array_int_30 *kcg_c2);
#endif /* kcg_comp_array_int_30 */

#ifndef kcg_comp_array__158687
extern kcg_bool kcg_comp_array__158687(
  array__158687 *kcg_c1,
  array__158687 *kcg_c2);
#endif /* kcg_comp_array__158687 */

#ifndef kcg_comp_array__158690
extern kcg_bool kcg_comp_array__158690(
  array__158690 *kcg_c1,
  array__158690 *kcg_c2);
#endif /* kcg_comp_array__158690 */

#ifndef kcg_comp_array_int_42
extern kcg_bool kcg_comp_array_int_42(
  array_int_42 *kcg_c1,
  array_int_42 *kcg_c2);
#endif /* kcg_comp_array_int_42 */

#ifndef kcg_comp_array__158696
extern kcg_bool kcg_comp_array__158696(
  array__158696 *kcg_c1,
  array__158696 *kcg_c2);
#endif /* kcg_comp_array__158696 */

#ifndef kcg_comp_array_bool_5
extern kcg_bool kcg_comp_array_bool_5(
  array_bool_5 *kcg_c1,
  array_bool_5 *kcg_c2);
#endif /* kcg_comp_array_bool_5 */

#ifndef kcg_comp_array__158707
extern kcg_bool kcg_comp_array__158707(
  array__158707 *kcg_c1,
  array__158707 *kcg_c2);
#endif /* kcg_comp_array__158707 */

#ifndef kcg_comp_array_int_444
extern kcg_bool kcg_comp_array_int_444(
  array_int_444 *kcg_c1,
  array_int_444 *kcg_c2);
#endif /* kcg_comp_array_int_444 */

#ifndef kcg_comp_array_int_264
extern kcg_bool kcg_comp_array_int_264(
  array_int_264 *kcg_c1,
  array_int_264 *kcg_c2);
#endif /* kcg_comp_array_int_264 */

#ifndef kcg_comp_array_int_350
extern kcg_bool kcg_comp_array_int_350(
  array_int_350 *kcg_c1,
  array_int_350 *kcg_c2);
#endif /* kcg_comp_array_int_350 */

#ifndef kcg_comp_array_int_396
extern kcg_bool kcg_comp_array_int_396(
  array_int_396 *kcg_c1,
  array_int_396 *kcg_c2);
#endif /* kcg_comp_array_int_396 */

#ifndef kcg_comp_array_int_432
extern kcg_bool kcg_comp_array_int_432(
  array_int_432 *kcg_c1,
  array_int_432 *kcg_c2);
#endif /* kcg_comp_array_int_432 */

#ifndef kcg_comp_array_int_428
extern kcg_bool kcg_comp_array_int_428(
  array_int_428 *kcg_c1,
  array_int_428 *kcg_c2);
#endif /* kcg_comp_array_int_428 */

#ifndef kcg_comp_array_int_395
extern kcg_bool kcg_comp_array_int_395(
  array_int_395 *kcg_c1,
  array_int_395 *kcg_c2);
#endif /* kcg_comp_array_int_395 */

#ifndef kcg_comp_array_int_430
extern kcg_bool kcg_comp_array_int_430(
  array_int_430 *kcg_c1,
  array_int_430 *kcg_c2);
#endif /* kcg_comp_array_int_430 */

#ifndef kcg_comp_array_real_113
extern kcg_bool kcg_comp_array_real_113(
  array_real_113 *kcg_c1,
  array_real_113 *kcg_c2);
#endif /* kcg_comp_array_real_113 */

#ifndef kcg_comp_array_bool_113
extern kcg_bool kcg_comp_array_bool_113(
  array_bool_113 *kcg_c1,
  array_bool_113 *kcg_c2);
#endif /* kcg_comp_array_bool_113 */

#ifndef kcg_comp_array__165285
extern kcg_bool kcg_comp_array__165285(
  array__165285 *kcg_c1,
  array__165285 *kcg_c2);
#endif /* kcg_comp_array__165285 */

#ifndef kcg_comp_array__165722
extern kcg_bool kcg_comp_array__165722(
  array__165722 *kcg_c1,
  array__165722 *kcg_c2);
#endif /* kcg_comp_array__165722 */

#ifndef kcg_comp_array__165961
extern kcg_bool kcg_comp_array__165961(
  array__165961 *kcg_c1,
  array__165961 *kcg_c2);
#endif /* kcg_comp_array__165961 */

#ifndef kcg_comp_array__166060
extern kcg_bool kcg_comp_array__166060(
  array__166060 *kcg_c1,
  array__166060 *kcg_c2);
#endif /* kcg_comp_array__166060 */

#ifndef kcg_comp_array__166215
extern kcg_bool kcg_comp_array__166215(
  array__166215 *kcg_c1,
  array__166215 *kcg_c2);
#endif /* kcg_comp_array__166215 */

#ifndef kcg_comp_array__166219
extern kcg_bool kcg_comp_array__166219(
  array__166219 *kcg_c1,
  array__166219 *kcg_c2);
#endif /* kcg_comp_array__166219 */

#ifndef kcg_comp_array__166223
extern kcg_bool kcg_comp_array__166223(
  array__166223 *kcg_c1,
  array__166223 *kcg_c2);
#endif /* kcg_comp_array__166223 */

#ifndef kcg_comp_array__166226
extern kcg_bool kcg_comp_array__166226(
  array__166226 *kcg_c1,
  array__166226 *kcg_c2);
#endif /* kcg_comp_array__166226 */

#ifndef kcg_comp_array__166230
extern kcg_bool kcg_comp_array__166230(
  array__166230 *kcg_c1,
  array__166230 *kcg_c2);
#endif /* kcg_comp_array__166230 */

#ifndef kcg_comp_array__166233
extern kcg_bool kcg_comp_array__166233(
  array__166233 *kcg_c1,
  array__166233 *kcg_c2);
#endif /* kcg_comp_array__166233 */

#ifndef kcg_comp_array__166237
extern kcg_bool kcg_comp_array__166237(
  array__166237 *kcg_c1,
  array__166237 *kcg_c2);
#endif /* kcg_comp_array__166237 */

#ifndef kcg_comp_array__166359
extern kcg_bool kcg_comp_array__166359(
  array__166359 *kcg_c1,
  array__166359 *kcg_c2);
#endif /* kcg_comp_array__166359 */

#define kcg_comp_P011_voltage_section_array_T_TM_TrainToTrack kcg_comp_array_int_2

#define kcg_copy_P011_voltage_section_array_T_TM_TrainToTrack kcg_copy_array_int_2

#define kcg_comp_P011_voltage_sectionlist_array_T_TM_TrainToTrack kcg_comp_array_int_2_4

#define kcg_copy_P011_voltage_sectionlist_array_T_TM_TrainToTrack kcg_copy_array_int_2_4

#define kcg_comp_P011_voltage_sections_array_flat_t_TM_TrainToTrack kcg_comp_array_int_8

#define kcg_copy_P011_voltage_sections_array_flat_t_TM_TrainToTrack kcg_copy_array_int_8

#define kcg_comp_P011_ntc_list_TM_TrainToTrack kcg_comp_array_int_5

#define kcg_copy_P011_ntc_list_TM_TrainToTrack kcg_copy_array_int_5

#define kcg_comp_P011_voltage_TM_TrainToTrack kcg_comp_struct__155702

#define kcg_copy_P011_voltage_TM_TrainToTrack kcg_copy_struct__155702

#define kcg_comp_P011_voltage_list_TM_TrainToTrack kcg_comp_array__155707

#define kcg_copy_P011_voltage_list_TM_TrainToTrack kcg_copy_array__155707

#define kcg_comp_P011_TM_TrainToTrack kcg_comp_struct__155862

#define kcg_copy_P011_TM_TrainToTrack kcg_copy_struct__155862

#define kcg_comp_P000_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_17

#define kcg_copy_P000_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_17

#define kcg_comp_P000_TM_TrainToTrack kcg_comp_struct__155930

#define kcg_copy_P000_TM_TrainToTrack kcg_copy_struct__155930

#define kcg_comp_P001_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_17

#define kcg_copy_P001_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_17

#define kcg_comp_P001_TM_TrainToTrack kcg_comp_struct__155909

#define kcg_copy_P001_TM_TrainToTrack kcg_copy_struct__155909

#define kcg_comp_P044_other_data_TM_TrainToTrack kcg_comp_array_int_1

#define kcg_copy_P044_other_data_TM_TrainToTrack kcg_copy_array_int_1

#define kcg_comp_P044_TM_TrainToTrack kcg_comp_struct__157551

#define kcg_copy_P044_TM_TrainToTrack kcg_copy_struct__157551

#define kcg_comp_P044_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_25

#define kcg_copy_P044_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_25

#define kcg_comp_P005_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_3

#define kcg_copy_P005_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_3

#define kcg_comp_P005_TM_TrainToTrack kcg_comp_struct__155887

#define kcg_copy_P005_TM_TrainToTrack kcg_copy_struct__155887

#define kcg_comp_P004_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_3

#define kcg_copy_P004_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_3

#define kcg_comp_P004_TM_TrainToTrack kcg_comp_struct__155894

#define kcg_copy_P004_TM_TrainToTrack kcg_copy_struct__155894

#define kcg_comp_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus kcg_comp_array__156467

#define kcg_copy_M_TrainTrackMessageBus_t_TM_TrainTrack_Bus kcg_copy_array__156467

#define kcg_comp_Position_Report_based_on_two_balise_groups_TrainToTrack kcg_comp_struct__155787

#define kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack kcg_copy_struct__155787

#define kcg_comp_Position_Report_TrainToTrack kcg_comp_struct__155812

#define kcg_copy_Position_Report_TrainToTrack kcg_copy_struct__155812

#define kcg_comp_DMI_Track_Description_int_array_T kcg_comp_array_int_325

#define kcg_copy_DMI_Track_Description_int_array_T kcg_copy_array_int_325

#define kcg_comp_DMI_gradientProfile_int_arrayT kcg_comp_array_int_129

#define kcg_copy_DMI_gradientProfile_int_arrayT kcg_copy_array_int_129

#define kcg_comp_DMI_trackCondition_int_array_T kcg_comp_array_int_65

#define kcg_copy_DMI_trackCondition_int_array_T kcg_copy_array_int_65

#define kcg_comp_RBC_Communication_T_ProvidePositionReport_Pkg kcg_comp_struct__157584

#define kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg kcg_copy_struct__157584

#define kcg_comp_LocationBasedEvents_T_ProvidePositionReport_Pkg kcg_comp_struct__157588

#define kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg kcg_copy_struct__157588

#define kcg_comp_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg kcg_comp_struct__157564

#define kcg_copy_ModeLevel2PositionReport_T_ProvidePositionReport_Pkg kcg_copy_struct__157564

#define kcg_comp_ReportedBGList_T_ProvidePositionReport_Pkg kcg_comp_array__157581

#define kcg_copy_ReportedBGList_T_ProvidePositionReport_Pkg kcg_copy_array__157581

#define kcg_comp_ReportedBG_T_ProvidePositionReport_Pkg kcg_comp_struct__157575

#define kcg_copy_ReportedBG_T_ProvidePositionReport_Pkg kcg_copy_struct__157575

#define kcg_comp_ErrorMessage_T_ProvidePositionReport_Pkg kcg_comp_struct__157559

#define kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg kcg_copy_struct__157559

#define kcg_comp_p131_q_rbcTransitionOrder_T_Handover_Pkg kcg_comp_struct__156545

#define kcg_copy_p131_q_rbcTransitionOrder_T_Handover_Pkg kcg_copy_struct__156545

#define kcg_comp_connection_ids_T_Handover_Pkg kcg_comp_struct__156525

#define kcg_copy_connection_ids_T_Handover_Pkg kcg_copy_struct__156525

#define kcg_comp_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_comp_array__155250

#define kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_copy_array__155250

#define kcg_comp_P027V1_section_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2

#define kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2

#define kcg_comp_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2_32

#define kcg_copy_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2_32

#define kcg_comp_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array__155341

#define kcg_copy_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array__155341

#define kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P003V1_trackside_int_T_TM_baseline2 kcg_comp_struct__155141

#define kcg_copy_P003V1_trackside_int_T_TM_baseline2 kcg_copy_struct__155141

#define kcg_comp_P027V1_section_int_T_TM_baseline2 kcg_comp_struct__155253

#define kcg_copy_P027V1_section_int_T_TM_baseline2 kcg_copy_struct__155253

#define kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_comp_array__155261

#define kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_copy_array__155261

#define kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2 kcg_comp_struct__155245

#define kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2 kcg_copy_struct__155245

#define kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_comp_array__155250

#define kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_copy_array__155250

#define kcg_comp_P027V1_trackside_int_T_TM_baseline2 kcg_comp_struct__155264

#define kcg_copy_P027V1_trackside_int_T_TM_baseline2 kcg_copy_struct__155264

#define kcg_comp_P203V1_OBU_l_section_enum_T_TM_baseline2 kcg_comp_struct__156594

#define kcg_copy_P203V1_OBU_l_section_enum_T_TM_baseline2 kcg_copy_struct__156594

#define kcg_comp_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2 kcg_comp_array__156600

#define kcg_copy_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2 kcg_copy_array__156600

#define kcg_comp_P203V1_OBU_k_m_section_enum_T_TM_baseline2 kcg_comp_struct__156603

#define kcg_copy_P203V1_OBU_k_m_section_enum_T_TM_baseline2 kcg_copy_struct__156603

#define kcg_comp_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2 kcg_comp_array__156610

#define kcg_copy_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2 kcg_copy_array__156610

#define kcg_comp_P203V1_OBU_k_section_enum_T_TM_baseline2 kcg_comp_struct__156613

#define kcg_copy_P203V1_OBU_k_section_enum_T_TM_baseline2 kcg_copy_struct__156613

#define kcg_comp_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2 kcg_comp_array__156625

#define kcg_copy_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2 kcg_copy_array__156625

#define kcg_comp_P203V1_OBU_n_section_enum_T_TM_baseline2 kcg_comp_struct__156628

#define kcg_copy_P203V1_OBU_n_section_enum_T_TM_baseline2 kcg_copy_struct__156628

#define kcg_comp_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2 kcg_comp_array__156635

#define kcg_copy_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2 kcg_copy_array__156635

#define kcg_comp_P203V1_OBU_T_TM_baseline2 kcg_comp_struct__156638

#define kcg_copy_P203V1_OBU_T_TM_baseline2 kcg_copy_struct__156638

#define kcg_comp_P003_permanent_data_T_TM_baseline2 kcg_comp_struct__156669

#define kcg_copy_P003_permanent_data_T_TM_baseline2 kcg_copy_struct__156669

#define kcg_comp_P003V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P003V1_section_enum_T_TM_baseline2 kcg_comp_struct__156704

#define kcg_copy_P003V1_section_enum_T_TM_baseline2 kcg_copy_struct__156704

#define kcg_comp_P003V1_sectionlist_enum_T_TM_baseline2 kcg_comp_array__157346

#define kcg_copy_P003V1_sectionlist_enum_T_TM_baseline2 kcg_copy_array__157346

#define kcg_comp_P003V1_OBU_T_TM_baseline2 kcg_comp_struct__157349

#define kcg_copy_P003V1_OBU_T_TM_baseline2 kcg_copy_struct__157349

#define kcg_comp_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_comp_array__157177

#define kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_copy_array__157177

#define kcg_comp_P027V1_OBU_T_TM_baseline2 kcg_comp_struct__157180

#define kcg_copy_P027V1_OBU_T_TM_baseline2 kcg_copy_struct__157180

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_comp_struct__157159

#define kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_copy_struct__157159

#define kcg_comp_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_comp_array__157165

#define kcg_copy_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_copy_array__157165

#define kcg_comp_P027V1_section_enum_T_TM_baseline2 kcg_comp_struct__157168

#define kcg_copy_P027V1_section_enum_T_TM_baseline2 kcg_copy_struct__157168

#define kcg_comp_P027V1_OBU_body_enum_T_TM_baseline2 kcg_comp_struct__157220

#define kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2 kcg_copy_struct__157220

#define kcg_comp_probesBalises_T_xdebugSupport_Pkg kcg_comp_struct__157641

#define kcg_copy_probesBalises_T_xdebugSupport_Pkg kcg_copy_struct__157641

#define kcg_comp_dataCollectionForLevelTransition_T_xdebugSupport_Pkg kcg_comp_struct__157648

#define kcg_copy_dataCollectionForLevelTransition_T_xdebugSupport_Pkg kcg_copy_struct__157648

#define kcg_comp_ModeDecisionTableType_DataDictionary_Pkg kcg_comp_array__157683

#define kcg_copy_ModeDecisionTableType_DataDictionary_Pkg kcg_copy_array__157683

#define kcg_comp_LevelDecisionTableType_DataDictionary_Pkg kcg_comp_array__157689

#define kcg_copy_LevelDecisionTableType_DataDictionary_Pkg kcg_copy_array__157689

#define kcg_comp_TransitionBuffer_T_InformationFilter_Pkg kcg_comp_array__157677

#define kcg_copy_TransitionBuffer_T_InformationFilter_Pkg kcg_copy_array__157677

#define kcg_comp_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal kcg_comp_array__157545

#define kcg_copy_M_TrainTrackRadioOutputBuffer_t_TM_lib_internal kcg_copy_array__157545

#define kcg_comp_M_TrainTrackMessage_buffer_t_TM_lib_internal kcg_comp_array__156467

#define kcg_copy_M_TrainTrackMessage_buffer_t_TM_lib_internal kcg_copy_array__156467

#define kcg_comp_DMI_Level_Data_int_array_T_DATA kcg_comp_array_int_4

#define kcg_copy_DMI_Level_Data_int_array_T_DATA kcg_copy_array_int_4

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

#define kcg_comp_DriverIdentifier_INT_T_DATA kcg_comp_array_int_9

#define kcg_copy_DriverIdentifier_INT_T_DATA kcg_copy_array_int_9

#define kcg_comp_DMI_Driver_Identifier_int_array_T_DATA kcg_comp_array_int_11

#define kcg_copy_DMI_Driver_Identifier_int_array_T_DATA kcg_copy_array_int_11

#define kcg_comp_DMI_Icons_int_array_T_DATA kcg_comp_array_int_9

#define kcg_copy_DMI_Icons_int_array_T_DATA kcg_copy_array_int_9

#define kcg_comp_DMI_Adhesion_Factor_Data_int_array_T_DATA kcg_comp_array_int_3

#define kcg_copy_DMI_Adhesion_Factor_Data_int_array_T_DATA kcg_copy_array_int_3

#define kcg_comp_DMI_Train_Data_int_array_T_DATA kcg_comp_array_int_9

#define kcg_copy_DMI_Train_Data_int_array_T_DATA kcg_copy_array_int_9

#define kcg_comp_DMI_Train_Running_Number_int_array_T_DATA kcg_comp_array_int_3

#define kcg_copy_DMI_Train_Running_Number_int_array_T_DATA kcg_copy_array_int_3

#define kcg_comp_DMI_EVC_Radio_Net_Data_int_array_T_DATA kcg_comp_array_int_3

#define kcg_copy_DMI_EVC_Radio_Net_Data_int_array_T_DATA kcg_copy_array_int_3

#define kcg_comp_DMI_EVC_Level_Data_int_array_T_DATA kcg_comp_array_int_67

#define kcg_copy_DMI_EVC_Level_Data_int_array_T_DATA kcg_copy_array_int_67

#define kcg_comp_MetadataTruthtable_T1_CheckEuroradioMessage kcg_comp_array_bool_256_46

#define kcg_copy_MetadataTruthtable_T1_CheckEuroradioMessage kcg_copy_array_bool_256_46

#define kcg_comp_DMI_LevelList_int_array_T_DATA kcg_comp_array_int_65

#define kcg_copy_DMI_LevelList_int_array_T_DATA kcg_copy_array_int_65

#define kcg_comp_DMI_Display_Control_int_array_T_DATA kcg_comp_array_int_3

#define kcg_copy_DMI_Display_Control_int_array_T_DATA kcg_copy_array_int_3

#define kcg_comp_DMI_System_Version_int_array_T_DATA kcg_comp_array_int_3

#define kcg_copy_DMI_System_Version_int_array_T_DATA kcg_copy_array_int_3

#define kcg_comp_DMI_Identifier_Request_int_array_T_DATA kcg_comp_array_int_261

#define kcg_copy_DMI_Identifier_Request_int_array_T_DATA kcg_copy_array_int_261

#define kcg_comp_DMI_speedProfile_int_array_T_DATA kcg_comp_array_int_129

#define kcg_copy_DMI_speedProfile_int_array_T_DATA kcg_copy_array_int_129

#define kcg_comp_DMI_Text_Message_int_array_T_DATA kcg_comp_array_int_262

#define kcg_copy_DMI_Text_Message_int_array_T_DATA kcg_copy_array_int_262

#define kcg_comp_DMI_TEXT_INT_Array_T_DATA kcg_comp_array_int_255

#define kcg_copy_DMI_TEXT_INT_Array_T_DATA kcg_copy_array_int_255

#define kcg_comp_DMI_EVC_Coded_Train_Data_int_array_T_DATA kcg_comp_array_int_9

#define kcg_copy_DMI_EVC_Coded_Train_Data_int_array_T_DATA kcg_copy_array_int_9

#define kcg_comp_DMI_Entry_Request_int_array_T_DATA kcg_comp_array_int_3

#define kcg_copy_DMI_Entry_Request_int_array_T_DATA kcg_copy_array_int_3

#define kcg_comp_DMI_Menu_Request_int_array_T_DATA kcg_comp_array_int_3

#define kcg_copy_DMI_Menu_Request_int_array_T_DATA kcg_copy_array_int_3

#define kcg_comp_DMI_Dynamic_int_array_T_DATA kcg_comp_array_int_24

#define kcg_copy_DMI_Dynamic_int_array_T_DATA kcg_copy_array_int_24

#define kcg_comp_P065_trackside_int_T_TM kcg_comp_struct__155301

#define kcg_copy_P065_trackside_int_T_TM kcg_copy_struct__155301

#define kcg_comp_P137_trackside_int_T_TM kcg_comp_struct__155052

#define kcg_copy_P137_trackside_int_T_TM kcg_copy_struct__155052

#define kcg_comp_P046_OBU_sectionlist_int_T_TM kcg_comp_array__155123

#define kcg_copy_P046_OBU_sectionlist_int_T_TM kcg_copy_array__155123

#define kcg_comp_P046_section_array_T_TM kcg_comp_array_int_2

#define kcg_copy_P046_section_array_T_TM kcg_copy_array_int_2

#define kcg_comp_P046_OBU_sectionlist_array_T_TM kcg_comp_array_int_2_33

#define kcg_copy_P046_OBU_sectionlist_array_T_TM kcg_copy_array_int_2_33

#define kcg_comp_P046_section_int_T_TM kcg_comp_struct__155095

#define kcg_copy_P046_section_int_T_TM kcg_copy_struct__155095

#define kcg_comp_P046_trackide_sectionlist_T_TM kcg_comp_array__155100

#define kcg_copy_P046_trackide_sectionlist_T_TM kcg_copy_array__155100

#define kcg_comp_P046_trackside_int_T_TM kcg_comp_struct__155103

#define kcg_copy_P046_trackside_int_T_TM kcg_copy_struct__155103

#define kcg_comp_P045_trackside_int_T_TM kcg_comp_struct__155170

#define kcg_copy_P045_trackside_int_T_TM kcg_copy_struct__155170

#define kcg_comp_P041_OBU_sectionlist_int_T_TM kcg_comp_array__155092

#define kcg_copy_P041_OBU_sectionlist_int_T_TM kcg_copy_array__155092

#define kcg_comp_P041_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P041_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P041_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P041_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P041_section_int_T_TM kcg_comp_struct__155060

#define kcg_copy_P041_section_int_T_TM kcg_copy_struct__155060

#define kcg_comp_P041_trackide_sectionlist_T_TM kcg_comp_array__155066

#define kcg_copy_P041_trackide_sectionlist_T_TM kcg_copy_array__155066

#define kcg_comp_P041_trackside_int_T_TM kcg_comp_struct__155069

#define kcg_copy_P041_trackside_int_T_TM kcg_copy_struct__155069

#define kcg_comp_BaliseGroupData_TM kcg_comp_struct__155030

#define kcg_copy_BaliseGroupData_TM kcg_copy_struct__155030

#define kcg_comp_P255_trackside_int_T_TM kcg_comp_struct__155047

#define kcg_copy_P255_trackside_int_T_TM kcg_copy_struct__155047

#define kcg_comp_BaliseTelegramHeader_int_T_TM kcg_comp_struct__154988

#define kcg_copy_BaliseTelegramHeader_int_T_TM kcg_copy_struct__154988

#define kcg_comp_CompressedBaliseMessage_TM kcg_comp_struct__155020

#define kcg_copy_CompressedBaliseMessage_TM kcg_copy_struct__155020

#define kcg_comp_P058_OBU_sectionlist_int_T_TM kcg_comp_array__155393

#define kcg_copy_P058_OBU_sectionlist_int_T_TM kcg_copy_array__155393

#define kcg_comp_P058_section_array_T_TM kcg_comp_array_int_2

#define kcg_copy_P058_section_array_T_TM kcg_copy_array_int_2

#define kcg_comp_P058_OBU_sectionlist_array_T_TM kcg_comp_array_int_2_32

#define kcg_copy_P058_OBU_sectionlist_array_T_TM kcg_copy_array_int_2_32

#define kcg_comp_DataForModeAndLevel_t_TrackAtlasTypes kcg_comp_struct__157450

#define kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes kcg_copy_struct__157450

#define kcg_comp_P021_OBU_sectionlist_int_T_TM kcg_comp_array__155344

#define kcg_copy_P021_OBU_sectionlist_int_T_TM kcg_copy_array__155344

#define kcg_comp_P021_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P021_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_StaticSpeedSection_t_TrackAtlasTypes kcg_comp_struct__157022

#define kcg_copy_StaticSpeedSection_t_TrackAtlasTypes kcg_copy_struct__157022

#define kcg_comp_P021_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P021_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_StaticSpeedProfile_t_TrackAtlasTypes kcg_comp_array__157030

#define kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes kcg_copy_array__157030

#define kcg_comp_P015_OBU_sectionlist_int_T_TM kcg_comp_array__155185

#define kcg_copy_P015_OBU_sectionlist_int_T_TM kcg_copy_array__155185

#define kcg_comp_Gradient_section_t_TrackAtlasTypes kcg_comp_struct__156949

#define kcg_copy_Gradient_section_t_TrackAtlasTypes kcg_copy_struct__156949

#define kcg_comp_P015_section_array_T_TM kcg_comp_array_int_4

#define kcg_copy_P015_section_array_T_TM kcg_copy_array_int_4

#define kcg_comp_GradientProfile_t_TrackAtlasTypes kcg_comp_array__156957

#define kcg_copy_GradientProfile_t_TrackAtlasTypes kcg_copy_array__156957

#define kcg_comp_P015_OBU_sectionlist_array_T_TM kcg_comp_array_int_4_32

#define kcg_copy_P015_OBU_sectionlist_array_T_TM kcg_copy_array_int_4_32

#define kcg_comp_DataForSupervision_nextGen_t_TrackAtlasTypes kcg_comp_struct__157459

#define kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes kcg_copy_struct__157459

#define kcg_comp_P005_OBU_sectionlist_int_T_TM kcg_comp_array__155332

#define kcg_copy_P005_OBU_sectionlist_int_T_TM kcg_copy_array__155332

#define kcg_comp_Endtimer_t_TrackAtlasTypes kcg_comp_struct__156851

#define kcg_copy_Endtimer_t_TrackAtlasTypes kcg_copy_struct__156851

#define kcg_comp_P005_section_array_T_TM kcg_comp_array_int_7

#define kcg_copy_P005_section_array_T_TM kcg_copy_array_int_7

#define kcg_comp_DP_or_OL_t_TrackAtlasTypes kcg_comp_struct__156856

#define kcg_copy_DP_or_OL_t_TrackAtlasTypes kcg_copy_struct__156856

#define kcg_comp_P005_OBU_sectionlist_array_T_TM kcg_comp_array_int_7_33

#define kcg_copy_P005_OBU_sectionlist_array_T_TM kcg_copy_array_int_7_33

#define kcg_comp_MovementAuthoritySectionlist_t_TrackAtlasTypes kcg_comp_array__156848

#define kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes kcg_copy_array__156848

#define kcg_comp_P015_section_int_T_TM kcg_comp_struct__155178

#define kcg_copy_P015_section_int_T_TM kcg_copy_struct__155178

#define kcg_comp_MovementAuthority_t_TrackAtlasTypes kcg_comp_struct__156862

#define kcg_copy_MovementAuthority_t_TrackAtlasTypes kcg_copy_struct__156862

#define kcg_comp_P015_trackide_sectionlist_T_TM kcg_comp_array__155185

#define kcg_copy_P015_trackide_sectionlist_T_TM kcg_copy_array__155185

#define kcg_comp_MovementAuthoritySection_t_TrackAtlasTypes kcg_comp_struct__156839

#define kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes kcg_copy_struct__156839

#define kcg_comp_P015_trackside_int_T_TM kcg_comp_struct__155188

#define kcg_copy_P015_trackside_int_T_TM kcg_copy_struct__155188

#define kcg_comp_P005_section_int_T_TM kcg_comp_struct__155215

#define kcg_copy_P005_section_int_T_TM kcg_copy_struct__155215

#define kcg_comp_P005_trackide_sectionlist_T_TM kcg_comp_array__155225

#define kcg_copy_P005_trackide_sectionlist_T_TM kcg_copy_array__155225

#define kcg_comp_P005_trackside_int_T_TM kcg_comp_struct__155228

#define kcg_copy_P005_trackside_int_T_TM kcg_copy_struct__155228

#define kcg_comp_MRSP_Profile_t_TrackAtlasTypes kcg_comp_array__157014

#define kcg_copy_MRSP_Profile_t_TrackAtlasTypes kcg_copy_array__157014

#define kcg_comp_P021_section_int_T_TM kcg_comp_struct__155279

#define kcg_copy_P021_section_int_T_TM kcg_copy_struct__155279

#define kcg_comp_GradientProfile_for_DMI_t_TrackAtlasTypes kcg_comp_array__157343

#define kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes kcg_copy_array__157343

#define kcg_comp_P021_trackide_sectionlist_T_TM kcg_comp_array__155285

#define kcg_copy_P021_trackide_sectionlist_T_TM kcg_copy_array__155285

#define kcg_comp_DataForDMI_t_TrackAtlasTypes kcg_comp_struct__157468

#define kcg_copy_DataForDMI_t_TrackAtlasTypes kcg_copy_struct__157468

#define kcg_comp_P021_trackside_int_T_TM kcg_comp_struct__155288

#define kcg_copy_P021_trackside_int_T_TM kcg_copy_struct__155288

#define kcg_comp_GradientProfile_for_DMI_section_t_TrackAtlasTypes kcg_comp_struct__157336

#define kcg_copy_GradientProfile_for_DMI_section_t_TrackAtlasTypes kcg_copy_struct__157336

#define kcg_comp_P058_section_int_T_TM kcg_comp_struct__155388

#define kcg_copy_P058_section_int_T_TM kcg_copy_struct__155388

#define kcg_comp_MRSP_section_t_TrackAtlasTypes kcg_comp_struct__157007

#define kcg_copy_MRSP_section_t_TrackAtlasTypes kcg_copy_struct__157007

#define kcg_comp_P058_trackide_sectionlist_T_TM kcg_comp_array__155393

#define kcg_copy_P058_trackide_sectionlist_T_TM kcg_copy_array__155393

#define kcg_comp_P058_trackside_int_T_TM kcg_comp_struct__155396

#define kcg_copy_P058_trackside_int_T_TM kcg_copy_struct__155396

#define kcg_comp_P057_trackside_int_T_TM kcg_comp_struct__155378

#define kcg_copy_P057_trackside_int_T_TM kcg_copy_struct__155378

#define kcg_comp_CompressedRadioMessage_TM kcg_comp_struct__155588

#define kcg_copy_CompressedRadioMessage_TM kcg_copy_struct__155588

#define kcg_comp_Radio_TrackTrain_Header_T_TM kcg_comp_struct__155570

#define kcg_copy_Radio_TrackTrain_Header_T_TM kcg_copy_struct__155570

#define kcg_comp_P042_trackside_int_T_TM kcg_comp_struct__155126

#define kcg_copy_P042_trackside_int_T_TM kcg_copy_struct__155126

#define kcg_comp_Array09_TM kcg_comp_array_int_9

#define kcg_copy_Array09_TM kcg_copy_array_int_9

#define kcg_comp_P131_OBU_T_TM kcg_comp_struct__156534

#define kcg_copy_P131_OBU_T_TM kcg_copy_struct__156534

#define kcg_comp_P005_OBU_T_TM kcg_comp_struct__156765

#define kcg_copy_P005_OBU_T_TM kcg_copy_struct__156765

#define kcg_comp_P005_OBU_sectionlist_enum_T_TM kcg_comp_array__156762

#define kcg_copy_P005_OBU_sectionlist_enum_T_TM kcg_copy_array__156762

#define kcg_comp_P005_sections_array_flat_T_TM kcg_comp_array_int_231

#define kcg_copy_P005_sections_array_flat_T_TM kcg_copy_array_int_231

#define kcg_comp_P005_section_enum_T_TM kcg_comp_struct__156751

#define kcg_copy_P005_section_enum_T_TM kcg_copy_struct__156751

#define kcg_comp_P003_OBU_l_section_enum_T_TM kcg_comp_struct__156594

#define kcg_copy_P003_OBU_l_section_enum_T_TM kcg_copy_struct__156594

#define kcg_comp_P003_OBU_l_sectionlist_enum_T_TM kcg_comp_array__156600

#define kcg_copy_P003_OBU_l_sectionlist_enum_T_TM kcg_copy_array__156600

#define kcg_comp_P003_OBU_k_m_section_enum_T_TM kcg_comp_struct__156603

#define kcg_copy_P003_OBU_k_m_section_enum_T_TM kcg_copy_struct__156603

#define kcg_comp_P003_OBU_k_m_sectionlist_enum_T_TM kcg_comp_array__156610

#define kcg_copy_P003_OBU_k_m_sectionlist_enum_T_TM kcg_copy_array__156610

#define kcg_comp_P003_OBU_k_section_enum_T_TM kcg_comp_struct__156613

#define kcg_copy_P003_OBU_k_section_enum_T_TM kcg_copy_struct__156613

#define kcg_comp_P003_OBU_k_sectionlist_enum_T_TM kcg_comp_array__156625

#define kcg_copy_P003_OBU_k_sectionlist_enum_T_TM kcg_copy_array__156625

#define kcg_comp_P003_OBU_n_section_enum_T_TM kcg_comp_struct__156628

#define kcg_copy_P003_OBU_n_section_enum_T_TM kcg_copy_struct__156628

#define kcg_comp_P003_OBU_n_sectionlist_enum_T_TM kcg_comp_array__156635

#define kcg_copy_P003_OBU_n_sectionlist_enum_T_TM kcg_copy_array__156635

#define kcg_comp_P003_OBU_nid_c_section_enum_T_TM kcg_comp_struct__156704

#define kcg_copy_P003_OBU_nid_c_section_enum_T_TM kcg_copy_struct__156704

#define kcg_comp_P003_OBU_nid_c_sectionlist_enum_T_TM kcg_comp_array__157346

#define kcg_copy_P003_OBU_nid_c_sectionlist_enum_T_TM kcg_copy_array__157346

#define kcg_comp_P003_OBU_T_TM kcg_comp_struct__157395

#define kcg_copy_P003_OBU_T_TM kcg_copy_struct__157395

#define kcg_comp_Array24_TM kcg_comp_array_int_24

#define kcg_copy_Array24_TM kcg_copy_array_int_24

#define kcg_comp_Array08_TM kcg_comp_array_int_8

#define kcg_copy_Array08_TM kcg_copy_array_int_8

#define kcg_comp_P058_OBU_T_TM kcg_comp_struct__157618

#define kcg_copy_P058_OBU_T_TM kcg_copy_struct__157618

#define kcg_comp_P058_OBU_sectionlist_enum_T_TM kcg_comp_array__157615

#define kcg_copy_P058_OBU_sectionlist_enum_T_TM kcg_copy_array__157615

#define kcg_comp_P058_sections_array_flat_T_TM kcg_comp_array_int_64

#define kcg_copy_P058_sections_array_flat_T_TM kcg_copy_array_int_64

#define kcg_comp_P058_section_enum_T_TM kcg_comp_struct__157609

#define kcg_copy_P058_section_enum_T_TM kcg_copy_struct__157609

#define kcg_comp_P138_OBU_T_TM kcg_comp_struct__157107

#define kcg_copy_P138_OBU_T_TM kcg_copy_struct__157107

#define kcg_comp_P135_OBU_T_TM kcg_comp_struct__157033

#define kcg_copy_P135_OBU_T_TM kcg_copy_struct__157033

#define kcg_comp_P139_OBU_T_TM kcg_comp_struct__157145

#define kcg_copy_P139_OBU_T_TM kcg_copy_struct__157145

#define kcg_comp_P012_OBU_T_TM kcg_comp_struct__157284

#define kcg_copy_P012_OBU_T_TM kcg_copy_struct__157284

#define kcg_comp_P012_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P012_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_P012_section_enum_T_TM kcg_comp_struct__156913

#define kcg_copy_P012_section_enum_T_TM kcg_copy_struct__156913

#define kcg_comp_Array07_TM kcg_comp_array_int_7

#define kcg_copy_Array07_TM kcg_copy_array_int_7

#define kcg_comp_Array03_TM kcg_comp_array_int_3

#define kcg_copy_Array03_TM kcg_copy_array_int_3

#define kcg_comp_Array05_TM kcg_comp_array_int_5

#define kcg_copy_Array05_TM kcg_copy_array_int_5

#define kcg_comp_P021_OBU_T_TM kcg_comp_struct__156970

#define kcg_copy_P021_OBU_T_TM kcg_copy_struct__156970

#define kcg_comp_P021_OBU_sectionlist_enum_T_TM kcg_comp_array__156967

#define kcg_copy_P021_OBU_sectionlist_enum_T_TM kcg_copy_array__156967

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P021_section_enum_T_TM kcg_comp_struct__156960

#define kcg_copy_P021_section_enum_T_TM kcg_copy_struct__156960

#define kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg kcg_comp_struct__155760

#define kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg kcg_copy_struct__155760

#define kcg_comp_P041_OBU_T_TM kcg_comp_struct__157249

#define kcg_copy_P041_OBU_T_TM kcg_copy_struct__157249

#define kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg kcg_comp_struct__155776

#define kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg kcg_copy_struct__155776

#define kcg_comp_P041_OBU_sectionlist_enum_T_TM kcg_comp_array__157246

#define kcg_copy_P041_OBU_sectionlist_enum_T_TM kcg_copy_array__157246

#define kcg_comp_telephoneNumber_T_Packet_TrainTypes_Pkg kcg_comp_array_int_15

#define kcg_copy_telephoneNumber_T_Packet_TrainTypes_Pkg kcg_copy_array_int_15

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg kcg_comp_struct__155694

#define kcg_copy_sNID_RADIO_T_Packet_TrainTypes_Pkg kcg_copy_struct__155694

#define kcg_comp_P041_section_enum_T_TM kcg_comp_struct__157239

#define kcg_copy_P041_section_enum_T_TM kcg_copy_struct__157239

#define kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg kcg_comp_array__155699

#define kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg kcg_copy_array__155699

#define kcg_comp_Array04_TM kcg_comp_array_int_4

#define kcg_copy_Array04_TM kcg_copy_array_int_4

#define kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg kcg_comp_struct__155781

#define kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg kcg_copy_struct__155781

#define kcg_comp_P046_OBU_T_TM kcg_comp_struct__157277

#define kcg_copy_P046_OBU_T_TM kcg_copy_struct__157277

#define kcg_comp_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg kcg_comp_struct__155807

#define kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg kcg_copy_struct__155807

#define kcg_comp_P046_OBU_sectionlist_enum_T_TM kcg_comp_array__157274

#define kcg_copy_P046_OBU_sectionlist_enum_T_TM kcg_copy_array__157274

#define kcg_comp_PT0_PositionReport_T_Packet_TrainTypes_Pkg kcg_comp_struct__155831

#define kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg kcg_copy_struct__155831

#define kcg_comp_P046_sections_array_flat_T_TM kcg_comp_array_int_66

#define kcg_copy_P046_sections_array_flat_T_TM kcg_copy_array_int_66

#define kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg kcg_comp_struct__155836

#define kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg kcg_copy_struct__155836

#define kcg_comp_P046_section_enum_T_TM kcg_comp_struct__157268

#define kcg_copy_P046_section_enum_T_TM kcg_copy_struct__157268

#define kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg kcg_comp_struct__155841

#define kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg kcg_copy_struct__155841

#define kcg_comp_P015_OBU_T_TM kcg_comp_struct__156924

#define kcg_copy_P015_OBU_T_TM kcg_copy_struct__156924

#define kcg_comp_sTractionIdentity_T_Packet_TrainTypes_Pkg kcg_comp_struct__155702

#define kcg_copy_sTractionIdentity_T_Packet_TrainTypes_Pkg kcg_copy_struct__155702

#define kcg_comp_Array15_TM kcg_comp_array_int_15

#define kcg_copy_Array15_TM kcg_copy_array_int_15

#define kcg_comp_aTractionIdentity_T_Packet_TrainTypes_Pkg kcg_comp_array__155707

#define kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg kcg_copy_array__155707

#define kcg_comp_P015_OBU_sectionlist_enum_T_TM kcg_comp_array__156921

#define kcg_copy_P015_OBU_sectionlist_enum_T_TM kcg_copy_array__156921

#define kcg_comp_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_comp_array_int_5

#define kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_copy_array_int_5

#define kcg_comp_P015_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P015_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_P015_section_enum_T_TM kcg_comp_struct__156913

#define kcg_copy_P015_section_enum_T_TM kcg_copy_struct__156913

#define kcg_comp_Array06_TM kcg_comp_array_int_6

#define kcg_copy_Array06_TM kcg_copy_array_int_6

#define kcg_comp_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__157763

#define kcg_copy_DMI_Level_Data_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__157763

#define kcg_comp_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__157851

#define kcg_copy_DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__157851

#define kcg_comp_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__157502

#define kcg_copy_DMI_Train_Data_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__157502

#define kcg_comp_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__157532

#define kcg_copy_DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__157532

#define kcg_comp_driverIdentifier_T_DMI_Messages_Bothways_Pkg kcg_comp_array_char_9

#define kcg_copy_driverIdentifier_T_DMI_Messages_Bothways_Pkg kcg_copy_array_char_9

#define kcg_comp_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg kcg_comp_struct__157860

#define kcg_copy_DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg kcg_copy_struct__157860

#define kcg_comp_TrainToTrackStatus_T_BG_Types_Pkg kcg_comp_struct__157570

#define kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg kcg_copy_struct__157570

#define kcg_comp_BG_Message_T_BG_Types_Pkg kcg_comp_struct__157717

#define kcg_copy_BG_Message_T_BG_Types_Pkg kcg_copy_struct__157717

#define kcg_comp_TelegramHeader_T_BG_Types_Pkg kcg_comp_struct__155593

#define kcg_copy_TelegramHeader_T_BG_Types_Pkg kcg_copy_struct__155593

#define kcg_comp_Telegram_T_BG_Types_Pkg kcg_comp_struct__157707

#define kcg_copy_Telegram_T_BG_Types_Pkg kcg_copy_struct__157707

#define kcg_comp_TelegramArray_T_BG_Types_Pkg kcg_comp_array__157714

#define kcg_copy_TelegramArray_T_BG_Types_Pkg kcg_copy_array__157714

#define kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg kcg_comp_struct__156043

#define kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg kcg_copy_struct__156043

#define kcg_comp_LinkedBGs_T_BG_Types_Pkg kcg_comp_array__156492

#define kcg_copy_LinkedBGs_T_BG_Types_Pkg kcg_copy_array__156492

#define kcg_comp_BG_Header_T_BG_Types_Pkg kcg_comp_struct__156281

#define kcg_copy_BG_Header_T_BG_Types_Pkg kcg_copy_struct__156281

#define kcg_comp_passedBG_T_BG_Types_Pkg kcg_comp_struct__156495

#define kcg_copy_passedBG_T_BG_Types_Pkg kcg_copy_struct__156495

#define kcg_comp_LinkedBG_T_BG_Types_Pkg kcg_comp_struct__156478

#define kcg_copy_LinkedBG_T_BG_Types_Pkg kcg_copy_struct__156478

#define kcg_comp_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck kcg_comp_array__156811

#define kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck kcg_copy_array__156811

#define kcg_comp_trainPositionInfo_T_TrainPosition_Types_Pck kcg_comp_struct__156826

#define kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck kcg_copy_struct__156826

#define kcg_comp_positionErrors_T_TrainPosition_Types_Pck kcg_comp_struct__156814

#define kcg_copy_positionErrors_T_TrainPosition_Types_Pck kcg_copy_struct__156814

#define kcg_comp_positionedBGs_T_TrainPosition_Types_Pck kcg_comp_array__156522

#define kcg_copy_positionedBGs_T_TrainPosition_Types_Pck kcg_copy_array__156522

#define kcg_comp_trainProperties_T_TrainPosition_Types_Pck kcg_comp_struct__156558

#define kcg_copy_trainProperties_T_TrainPosition_Types_Pck kcg_copy_struct__156558

#define kcg_comp_infoFromLinking_T_TrainPosition_Types_Pck kcg_comp_struct__156501

#define kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck kcg_copy_struct__156501

#define kcg_comp_positionedBG_T_TrainPosition_Types_Pck kcg_comp_struct__156510

#define kcg_copy_positionedBG_T_TrainPosition_Types_Pck kcg_copy_struct__156510

#define kcg_comp_trainPosition_T_TrainPosition_Types_Pck kcg_comp_struct__156568

#define kcg_copy_trainPosition_T_TrainPosition_Types_Pck kcg_copy_struct__156568

#define kcg_comp_morc_configData_T_RCM_Session_Types_Pkg kcg_comp_struct__156447

#define kcg_copy_morc_configData_T_RCM_Session_Types_Pkg kcg_copy_struct__156447

#define kcg_comp_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg kcg_comp_struct__156365

#define kcg_copy_safeRadioConnectionIndication_T_RCM_Session_Types_Pkg kcg_copy_struct__156365

#define kcg_comp_obuEventsAndPhases_T_RCM_Session_Types_Pkg kcg_comp_struct__156370

#define kcg_copy_obuEventsAndPhases_T_RCM_Session_Types_Pkg kcg_copy_struct__156370

#define kcg_comp_sessionCmd_T_RCM_Session_Types_Pkg kcg_comp_struct__156419

#define kcg_copy_sessionCmd_T_RCM_Session_Types_Pkg kcg_copy_struct__156419

#define kcg_comp_sessionStatus_T_RCM_Session_Types_Pkg kcg_comp_struct__156411

#define kcg_copy_sessionStatus_T_RCM_Session_Types_Pkg kcg_copy_struct__156411

#define kcg_comp_morcStatus_T_RCM_Session_Types_Pkg kcg_comp_struct__156461

#define kcg_copy_morcStatus_T_RCM_Session_Types_Pkg kcg_copy_struct__156461

#define kcg_comp_mobileRegistrationCmd_T_RCM_Types_Pkg kcg_comp_struct__156432

#define kcg_copy_mobileRegistrationCmd_T_RCM_Types_Pkg kcg_copy_struct__156432

#define kcg_comp_mobileConnectionCmd_T_RCM_Types_Pkg kcg_comp_struct__156394

#define kcg_copy_mobileConnectionCmd_T_RCM_Types_Pkg kcg_copy_struct__156394

#define kcg_comp_mobileConnectionContext_T_RCM_Types_Pkg kcg_comp_struct__156401

#define kcg_copy_mobileConnectionContext_T_RCM_Types_Pkg kcg_copy_struct__156401

#define kcg_comp_mobileRegistrationContext_T_RCM_Types_Pkg kcg_comp_struct__156439

#define kcg_copy_mobileRegistrationContext_T_RCM_Types_Pkg kcg_copy_struct__156439

#define kcg_comp_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__158304

#define kcg_copy_DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__158304

#define kcg_comp_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__158244

#define kcg_copy_DMI_EVC_Radio_Net_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__158244

#define kcg_comp_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__158322

#define kcg_copy_DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__158322

#define kcg_comp_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__158250

#define kcg_copy_DMI_Display_Control_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__158250

#define kcg_comp_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__158328

#define kcg_copy_DMI_System_Version_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__158328

#define kcg_comp_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__158334

#define kcg_copy_DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__158334

#define kcg_comp_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__158376

#define kcg_copy_DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__158376

#define kcg_comp_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__158390

#define kcg_copy_DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__158390

#define kcg_comp_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__158280

#define kcg_copy_DMI_EVC_Coded_Train_Data_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__158280

#define kcg_comp_DiagMsg_T_RBC_Diagnostic_Pkg kcg_comp_struct__155618

#define kcg_copy_DiagMsg_T_RBC_Diagnostic_Pkg kcg_copy_struct__155618

#define kcg_comp_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__158238

#define kcg_copy_DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__158238

#define kcg_comp_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__158434

#define kcg_copy_DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__158434

#define kcg_comp_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg kcg_comp_struct__158440

#define kcg_copy_DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg kcg_copy_struct__158440

#define kcg_comp_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__157514

#define kcg_copy_DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__157514

#define kcg_comp_RBC_Data_T_RBC_DataBus_Pkg kcg_comp_struct__155739

#define kcg_copy_RBC_Data_T_RBC_DataBus_Pkg kcg_copy_struct__155739

#define kcg_comp_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__157813

#define kcg_copy_DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__157813

#define kcg_comp_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__157866

#define kcg_copy_DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__157866

#define kcg_comp_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__157871

#define kcg_copy_DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__157871

#define kcg_comp_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__157820

#define kcg_copy_DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__157820

#define kcg_comp_API_RadioMsgHeader_T_API_Msg_Pkg kcg_comp_struct__156035

#define kcg_copy_API_RadioMsgHeader_T_API_Msg_Pkg kcg_copy_struct__156035

#define kcg_comp_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__157749

#define kcg_copy_DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__157749

#define kcg_comp_API_TelegramHeader_T_API_Msg_Pkg kcg_comp_struct__156048

#define kcg_copy_API_TelegramHeader_T_API_Msg_Pkg kcg_copy_struct__156048

#define kcg_comp_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg kcg_comp_struct__157829

#define kcg_copy_DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg kcg_copy_struct__157829

#define kcg_comp_API_TrackSideInput_T_API_Msg_Pkg kcg_comp_struct__156056

#define kcg_copy_API_TrackSideInput_T_API_Msg_Pkg kcg_copy_struct__156056

#define kcg_comp_DMI_DriverRequest_T_DMI_Types_Pkg kcg_comp_struct__157776

#define kcg_copy_DMI_DriverRequest_T_DMI_Types_Pkg kcg_copy_struct__157776

#define kcg_comp_DMI_DriverAck_T_DMI_Types_Pkg kcg_comp_struct__157800

#define kcg_copy_DMI_DriverAck_T_DMI_Types_Pkg kcg_copy_struct__157800

#define kcg_comp_DMI_To_Modes_T_DMI_Types_Pkg kcg_comp_struct__157806

#define kcg_copy_DMI_To_Modes_T_DMI_Types_Pkg kcg_copy_struct__157806

#define kcg_comp_TelegramStore_T_Receive_TrackSide_Msg_Pkg kcg_comp_struct__157743

#define kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg kcg_copy_struct__157743

#define kcg_comp_BGCollector_T_Receive_TrackSide_Msg_Pkg kcg_comp_struct__157732

#define kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg kcg_copy_struct__157732

#define kcg_comp_Driver2MAR_T_MA_Request kcg_comp_struct__156880

#define kcg_copy_Driver2MAR_T_MA_Request kcg_copy_struct__156880

#define kcg_comp_DMI_TXT_MSG_status_T_DMI_Types_Pkg kcg_comp_struct__157786

#define kcg_copy_DMI_TXT_MSG_status_T_DMI_Types_Pkg kcg_copy_struct__157786

#define kcg_comp_DMI_TXT_MSGList_status_T_DMI_Types_Pkg kcg_comp_array__157797

#define kcg_copy_DMI_TXT_MSGList_status_T_DMI_Types_Pkg kcg_copy_array__157797

#define kcg_comp_GUI_to_EVC_EnvSim kcg_comp_struct__156240

#define kcg_copy_GUI_to_EVC_EnvSim kcg_copy_struct__156240

#define kcg_comp_EVC_to_GUI_EnvSim kcg_comp_struct__156253

#define kcg_copy_EVC_to_GUI_EnvSim kcg_copy_struct__156253

#define kcg_comp_DMI_level_array_T_DMI_Types_Pkg kcg_comp_array__156225

#define kcg_copy_DMI_level_array_T_DMI_Types_Pkg kcg_copy_array__156225

#define kcg_comp_DMI_LevelList_T_DMI_Types_Pkg kcg_comp_struct__156228

#define kcg_copy_DMI_LevelList_T_DMI_Types_Pkg kcg_copy_struct__156228

#define kcg_comp_DMI_trackConditionElement_T_DMI_Types_Pkg kcg_comp_struct__158363

#define kcg_copy_DMI_trackConditionElement_T_DMI_Types_Pkg kcg_copy_struct__158363

#define kcg_comp_DMI_trackConditionArray_T_DMI_Types_Pkg kcg_comp_array__158368

#define kcg_copy_DMI_trackConditionArray_T_DMI_Types_Pkg kcg_copy_array__158368

#define kcg_comp_DMI_trackCondition_T_DMI_Types_Pkg kcg_comp_struct__158371

#define kcg_copy_DMI_trackCondition_T_DMI_Types_Pkg kcg_copy_struct__158371

#define kcg_comp_DMI_gradientProfileElement_T_DMI_Types_Pkg kcg_comp_struct__157336

#define kcg_copy_DMI_gradientProfileElement_T_DMI_Types_Pkg kcg_copy_struct__157336

#define kcg_comp_DMI_gradientProfileArray_T_DMI_Types_Pkg kcg_comp_array__158355

#define kcg_copy_DMI_gradientProfileArray_T_DMI_Types_Pkg kcg_copy_array__158355

#define kcg_comp_ACC_SDM_GradientAcceleration_Pkg kcg_comp_struct__157992

#define kcg_copy_ACC_SDM_GradientAcceleration_Pkg kcg_copy_struct__157992

#define kcg_comp_DMI_gradientProfile_T_DMI_Types_Pkg kcg_comp_struct__158358

#define kcg_copy_DMI_gradientProfile_T_DMI_Types_Pkg kcg_copy_struct__158358

#define kcg_comp_DMI_speedProfileElement_T_DMI_Types_Pkg kcg_comp_struct__157007

#define kcg_copy_DMI_speedProfileElement_T_DMI_Types_Pkg kcg_copy_struct__157007

#define kcg_comp_DMI_SpeedProfileArray_T_DMI_Types_Pkg kcg_comp_array__158347

#define kcg_copy_DMI_SpeedProfileArray_T_DMI_Types_Pkg kcg_copy_array__158347

#define kcg_comp_DMI_speedProfile_T_DMI_Types_Pkg kcg_comp_struct__158350

#define kcg_copy_DMI_speedProfile_T_DMI_Types_Pkg kcg_copy_struct__158350

#define kcg_comp_a_Brake_t_SDMConversionModelPkg kcg_comp_struct__158032

#define kcg_copy_a_Brake_t_SDMConversionModelPkg kcg_copy_struct__158032

#define kcg_comp_v_MergedSteps_t_SDMConversionModelPkg kcg_comp_array_int_13

#define kcg_copy_v_MergedSteps_t_SDMConversionModelPkg kcg_copy_array_int_13

#define kcg_comp_a_MergedSteps_t_SDMConversionModelPkg kcg_comp_array_int_13

#define kcg_copy_a_MergedSteps_t_SDMConversionModelPkg kcg_copy_array_int_13

#define kcg_comp_av_MergedMap_t_SDMConversionModelPkg kcg_comp_struct__158040

#define kcg_copy_av_MergedMap_t_SDMConversionModelPkg kcg_copy_struct__158040

#define kcg_comp_v_BrakeSteps_t_SDMConversionModelPkg kcg_comp_array_int_6

#define kcg_copy_v_BrakeSteps_t_SDMConversionModelPkg kcg_copy_array_int_6

#define kcg_comp_a_BrakeSteps_t_SDMConversionModelPkg kcg_comp_array_int_6

#define kcg_copy_a_BrakeSteps_t_SDMConversionModelPkg kcg_copy_array_int_6

#define kcg_comp_av_Map_t_SDMConversionModelPkg kcg_comp_struct__158027

#define kcg_copy_av_Map_t_SDMConversionModelPkg kcg_copy_struct__158027

#define kcg_comp_v_KvSteps_t_SDMConversionModelPkg kcg_comp_array_int_7

#define kcg_copy_v_KvSteps_t_SDMConversionModelPkg kcg_copy_array_int_7

#define kcg_comp_m_KvSteps_t_SDMConversionModelPkg kcg_comp_array_int_7

#define kcg_copy_m_KvSteps_t_SDMConversionModelPkg kcg_copy_array_int_7

#define kcg_comp_mv_Map_t_SDMConversionModelPkg kcg_comp_struct__158051

#define kcg_copy_mv_Map_t_SDMConversionModelPkg kcg_copy_struct__158051

#define kcg_comp_LKrIntLookUp_t_SDMConversionModelPkg kcg_comp_array_int_32

#define kcg_copy_LKrIntLookUp_t_SDMConversionModelPkg kcg_copy_array_int_32

#define kcg_comp_coeff_BrakeBasic_t_SDMConversionModelPkg kcg_comp_array_real_3

#define kcg_copy_coeff_BrakeBasic_t_SDMConversionModelPkg kcg_copy_array_real_3

#define kcg_comp_odometryFactors_T_Toolbox kcg_comp_struct__155981

#define kcg_copy_odometryFactors_T_Toolbox kcg_copy_struct__155981

#define kcg_comp_DMI_loadingGauge_T_DMI_Types_Pkg kcg_comp_struct__158256

#define kcg_copy_DMI_loadingGauge_T_DMI_Types_Pkg kcg_copy_struct__158256

#define kcg_comp_DMI_airtightSystem_T_DMI_Types_Pkg kcg_comp_struct__158256

#define kcg_copy_DMI_airtightSystem_T_DMI_Types_Pkg kcg_copy_struct__158256

#define kcg_comp_DMI_vMax_id_T_DMI_Types_Pkg kcg_comp_struct__158256

#define kcg_copy_DMI_vMax_id_T_DMI_Types_Pkg kcg_copy_struct__158256

#define kcg_comp_DMI_brakeModel_id_T_DMI_Types_Pkg kcg_comp_struct__158256

#define kcg_copy_DMI_brakeModel_id_T_DMI_Types_Pkg kcg_copy_struct__158256

#define kcg_comp_DMI_train_length_T_DMI_Types_Pkg kcg_comp_struct__158263

#define kcg_copy_DMI_train_length_T_DMI_Types_Pkg kcg_copy_struct__158263

#define kcg_comp_DMI_train_id_T_DMI_Types_Pkg kcg_comp_struct__158271

#define kcg_copy_DMI_train_id_T_DMI_Types_Pkg kcg_copy_struct__158271

#define kcg_comp_DMI_Available_Menu_T_DMI_Types_Pkg kcg_comp_struct__158401

#define kcg_copy_DMI_Available_Menu_T_DMI_Types_Pkg kcg_copy_struct__158401

#define kcg_comp_movementAuthorityForDMI_T_DMI_Types_Pkg kcg_comp_struct__158292

#define kcg_copy_movementAuthorityForDMI_T_DMI_Types_Pkg kcg_copy_struct__158292

#define kcg_comp_nationValuesForDMI_T_DMI_Types_Pkg kcg_comp_struct__158298

#define kcg_copy_nationValuesForDMI_T_DMI_Types_Pkg kcg_copy_struct__158298

#define kcg_comp_speedSupervisionForDMI_T_DMI_Types_Pkg kcg_comp_struct__158189

#define kcg_copy_speedSupervisionForDMI_T_DMI_Types_Pkg kcg_copy_struct__158189

#define kcg_comp_t_BrakeVt_t_SDMModelPkg kcg_comp_array_real_2

#define kcg_copy_t_BrakeVt_t_SDMModelPkg kcg_copy_array_real_2

#define kcg_comp_t_Brake_t_SDMModelPkg kcg_comp_struct__158062

#define kcg_copy_t_Brake_t_SDMModelPkg kcg_copy_struct__158062

#define kcg_comp_DMI_level_T_DMI_Types_Pkg kcg_comp_struct__156220

#define kcg_copy_DMI_level_T_DMI_Types_Pkg kcg_copy_struct__156220

#define kcg_comp_DMI_TEXT_DMI_Types_Pkg kcg_comp_array_char_255

#define kcg_copy_DMI_TEXT_DMI_Types_Pkg kcg_copy_array_char_255

#define kcg_comp_p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg kcg_comp_struct__156273

#define kcg_copy_p45_radioNetworkRegistration_T_RCM_MsgTypes_Pkg kcg_copy_struct__156273

#define kcg_comp_msgToTrack_T_RCM_MsgTypes_Pkg kcg_comp_struct__155856

#define kcg_copy_msgToTrack_T_RCM_MsgTypes_Pkg kcg_copy_struct__155856

#define kcg_comp_msgToTrackTriggers_T_RCM_MsgTypes_Pkg kcg_comp_struct__156358

#define kcg_copy_msgToTrackTriggers_T_RCM_MsgTypes_Pkg kcg_copy_struct__156358

#define kcg_comp_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg kcg_comp_struct__156337

#define kcg_copy_m39_AckOfTerminationOfACommunicationSession_T_RCM_MsgTypes_Pkg kcg_copy_struct__156337

#define kcg_comp_BaliseGroupData_Basics kcg_comp_struct__155030

#define kcg_copy_BaliseGroupData_Basics kcg_copy_struct__155030

#define kcg_comp_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg kcg_comp_struct__156350

#define kcg_copy_m32_RBC_RIU_SystemVersion_T_RCM_MsgTypes_Pkg kcg_copy_struct__156350

#define kcg_comp_msgFromTrack_T_RCM_MsgTypes_Pkg kcg_comp_struct__156299

#define kcg_copy_msgFromTrack_T_RCM_MsgTypes_Pkg kcg_copy_struct__156299

#define kcg_comp_DMI_EVC_status_T_DMI_Types_Pkg kcg_comp_struct__157839

#define kcg_copy_DMI_EVC_status_T_DMI_Types_Pkg kcg_copy_struct__157839

#define kcg_comp_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg kcg_comp_struct__156344

#define kcg_copy_m38_initiationOfACommunicationSession_T_RCM_MsgTypes_Pkg kcg_copy_struct__156344

#define kcg_comp_p42_sessionManagement_T_RCM_MsgTypes_Pkg kcg_comp_struct__156315

#define kcg_copy_p42_sessionManagement_T_RCM_MsgTypes_Pkg kcg_copy_struct__156315

#define kcg_comp_TractionDeltaTriple_TargetLimits_Pkg kcg_comp_array_real_3

#define kcg_copy_TractionDeltaTriple_TargetLimits_Pkg kcg_copy_array_real_3

#define kcg_comp_TargetIteratorAkku_TargetLimits_Pkg kcg_comp_struct__158096

#define kcg_copy_TargetIteratorAkku_TargetLimits_Pkg kcg_copy_struct__158096

#define kcg_comp_bec_t_TargetLimits_Pkg kcg_comp_struct__158083

#define kcg_copy_bec_t_TargetLimits_Pkg kcg_copy_struct__158083

#define kcg_comp_T_trac_t_TargetLimits_Pkg kcg_comp_struct__158067

#define kcg_copy_T_trac_t_TargetLimits_Pkg kcg_copy_struct__158067

#define kcg_comp_extractTargetsMRSPACC_TargetManagement_pkg kcg_comp_struct__158176

#define kcg_copy_extractTargetsMRSPACC_TargetManagement_pkg kcg_copy_struct__158176

#define kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg kcg_comp_struct__155987

#define kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg kcg_copy_struct__155987

#define kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg kcg_comp_struct__155994

#define kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg kcg_copy_struct__155994

#define kcg_comp_odometry_T_Obu_BasicTypes_Pkg kcg_comp_struct__156000

#define kcg_copy_odometry_T_Obu_BasicTypes_Pkg kcg_copy_struct__156000

#define kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_comp_struct__156010

#define kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_copy_struct__156010

#define kcg_comp_mobileHWStatus_Type_MoRC_Pck kcg_comp_struct__156065

#define kcg_copy_mobileHWStatus_Type_MoRC_Pck kcg_copy_struct__156065

#define kcg_comp_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types kcg_comp_array__157947

#define kcg_copy_ParabolaCurve_list_MRSP_T_CalcBrakingCurves_types kcg_copy_array__157947

#define kcg_comp_CurveCollection_T_CalcBrakingCurves_types kcg_comp_struct__157950

#define kcg_copy_CurveCollection_T_CalcBrakingCurves_types kcg_copy_struct__157950

#define kcg_comp_ParabolaCurveValid_T_CalcBrakingCurves_types kcg_comp_array_bool_114

#define kcg_copy_ParabolaCurveValid_T_CalcBrakingCurves_types kcg_copy_array_bool_114

#define kcg_comp_ParabolaCurveAccelerations_T_CalcBrakingCurves_types kcg_comp_array_real_114

#define kcg_copy_ParabolaCurveAccelerations_T_CalcBrakingCurves_types kcg_copy_array_real_114

#define kcg_comp_ParabolaCurveSpeeds_T_CalcBrakingCurves_types kcg_comp_array_real_114

#define kcg_copy_ParabolaCurveSpeeds_T_CalcBrakingCurves_types kcg_copy_array_real_114

#define kcg_comp_ParabolaCurveDistances_T_CalcBrakingCurves_types kcg_comp_array_real_114

#define kcg_copy_ParabolaCurveDistances_T_CalcBrakingCurves_types kcg_copy_array_real_114

#define kcg_comp_radioNetWorkIDs_T_MoRC_Pck kcg_comp_struct__156588

#define kcg_copy_radioNetWorkIDs_T_MoRC_Pck kcg_copy_struct__156588

#define kcg_comp_ParabolaCurve_T_CalcBrakingCurves_types kcg_comp_struct__157940

#define kcg_copy_ParabolaCurve_T_CalcBrakingCurves_types kcg_copy_struct__157940

#define kcg_comp_ParabolaArc_T_CalcBrakingCurves_types kcg_comp_struct__158077

#define kcg_copy_ParabolaArc_T_CalcBrakingCurves_types kcg_copy_struct__158077

#define kcg_comp_ASafeRow_T_CalcBrakingCurves_types kcg_comp_array_real_100

#define kcg_copy_ASafeRow_T_CalcBrakingCurves_types kcg_copy_array_real_100

#define kcg_comp_ASafe_Data_T_CalcBrakingCurves_types kcg_comp_array_real_100_14

#define kcg_copy_ASafe_Data_T_CalcBrakingCurves_types kcg_copy_array_real_100_14

#define kcg_comp_ASafeSpeedDefinition_T_CalcBrakingCurves_types kcg_comp_array_real_14

#define kcg_copy_ASafeSpeedDefinition_T_CalcBrakingCurves_types kcg_copy_array_real_14

#define kcg_comp_ASafeDistanceDefinition_T_CalcBrakingCurves_types kcg_comp_array_real_100

#define kcg_copy_ASafeDistanceDefinition_T_CalcBrakingCurves_types kcg_copy_array_real_100

#define kcg_comp_ASafe_T_CalcBrakingCurves_types kcg_comp_struct__158021

#define kcg_copy_ASafe_T_CalcBrakingCurves_types kcg_copy_struct__158021

#define kcg_comp_dmiOutputs_T_manage_DMI_Output_Pkg kcg_comp_struct__158498

#define kcg_copy_dmiOutputs_T_manage_DMI_Output_Pkg kcg_copy_struct__158498

#define kcg_comp_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg kcg_comp_array__156795

#define kcg_copy_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg kcg_copy_array__156795

#define kcg_comp_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg kcg_comp_struct__156789

#define kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg kcg_copy_struct__156789

#define kcg_comp_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg kcg_comp_struct__156798

#define kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg kcg_copy_struct__156798

#define kcg_comp_BCAccumulator_type_CalcBrakingCurves_Pkg kcg_comp_struct__158181

#define kcg_copy_BCAccumulator_type_CalcBrakingCurves_Pkg kcg_copy_struct__158181

#define kcg_comp_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg kcg_comp_struct__157310

#define kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg kcg_copy_struct__157310

#define kcg_comp_A_gradient_t_SDM_GradientAcceleration_types kcg_comp_array__158000

#define kcg_copy_A_gradient_t_SDM_GradientAcceleration_types kcg_copy_array__158000

#define kcg_comp_A_gradient_element_t_SDM_GradientAcceleration_types kcg_comp_struct__157974

#define kcg_copy_A_gradient_element_t_SDM_GradientAcceleration_types kcg_copy_struct__157974

#define kcg_comp_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg kcg_comp_struct__158559

#define kcg_copy_T_Data_From_Track_To_Level_Level_And_Mode_Types_Pkg kcg_copy_struct__158559

#define kcg_comp_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types kcg_comp_array__157989

#define kcg_copy_GradientProfile_real_compensated_t_SDM_GradientAcceleration_types kcg_copy_array__157989

#define kcg_comp_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg kcg_comp_array__158556

#define kcg_copy_T_LevelTransition_PriorityTable_Level_And_Mode_Types_Pkg kcg_copy_array__158556

#define kcg_comp_GradientProfile_real_t_SDM_GradientAcceleration_types kcg_comp_array__157986

#define kcg_copy_GradientProfile_real_t_SDM_GradientAcceleration_types kcg_copy_array__157986

#define kcg_comp_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg kcg_comp_struct__158503

#define kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg kcg_copy_struct__158503

#define kcg_comp_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg kcg_comp_struct__158511

#define kcg_copy_T_Data_From_F2_functions_Level_And_Mode_Types_Pkg kcg_copy_struct__158511

#define kcg_comp_Gradient_section_real_t_SDM_GradientAcceleration_types kcg_comp_struct__157980

#define kcg_copy_Gradient_section_real_t_SDM_GradientAcceleration_types kcg_copy_struct__157980

#define kcg_comp_T_Data_From_STM_Level_And_Mode_Types_Pkg kcg_comp_struct__158518

#define kcg_copy_T_Data_From_STM_Level_And_Mode_Types_Pkg kcg_copy_struct__158518

#define kcg_comp_T_Data_From_DMI_Level_And_Mode_Types_Pkg kcg_comp_struct__158566

#define kcg_copy_T_Data_From_DMI_Level_And_Mode_Types_Pkg kcg_copy_struct__158566

#define kcg_comp_T_Data_From_Localisation_Level_And_Mode_Types_Pkg kcg_comp_struct__158523

#define kcg_copy_T_Data_From_Localisation_Level_And_Mode_Types_Pkg kcg_copy_struct__158523

#define kcg_comp_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg kcg_comp_struct__158532

#define kcg_copy_T_Data_To_BG_Management_Level_And_Mode_Types_Pkg kcg_copy_struct__158532

#define kcg_comp_T_Data_To_DMI_Level_And_Mode_Types_Pkg kcg_comp_struct__158583

#define kcg_copy_T_Data_To_DMI_Level_And_Mode_Types_Pkg kcg_copy_struct__158583

#define kcg_comp_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg kcg_comp_struct__158541

#define kcg_copy_T_Data_From_Speed_Supervision_Level_And_Mode_Types_Pkg kcg_copy_struct__158541

#define kcg_comp_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg kcg_comp_array__158603

#define kcg_copy_T_Mode_Profile_Table_Level_And_Mode_Types_Pkg kcg_copy_array__158603

#define kcg_comp_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg kcg_comp_struct__158614

#define kcg_copy_T_Data_From_Track_To_Mode_Level_And_Mode_Types_Pkg kcg_copy_struct__158614

#define kcg_comp_T_Reversing_Data_Level_And_Mode_Types_Pkg kcg_comp_struct__158606

#define kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg kcg_copy_struct__158606

#define kcg_comp_T_Mode_Profile_Level_And_Mode_Types_Pkg kcg_comp_struct__158595

#define kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg kcg_copy_struct__158595

#define kcg_comp_MRSP_internal_T_TargetManagement_types kcg_comp_array__158132

#define kcg_copy_MRSP_internal_T_TargetManagement_types kcg_copy_array__158132

#define kcg_comp_MA_section_real_T_TargetManagement_types kcg_comp_struct__158113

#define kcg_copy_MA_section_real_T_TargetManagement_types kcg_copy_struct__158113

#define kcg_comp_EOA_real_T_TargetManagement_types kcg_comp_struct__158108

#define kcg_copy_EOA_real_T_TargetManagement_types kcg_copy_struct__158108

#define kcg_comp_MRSP_internal_section_T_TargetManagement_types kcg_comp_struct__158126

#define kcg_copy_MRSP_internal_section_T_TargetManagement_types kcg_copy_struct__158126

#define kcg_comp_Target_real_T_TargetManagement_types kcg_comp_struct__157958

#define kcg_copy_Target_real_T_TargetManagement_types kcg_copy_struct__157958

#define kcg_comp_Target_list_MRSP_real_T_TargetManagement_types kcg_comp_array__157964

#define kcg_copy_Target_list_MRSP_real_T_TargetManagement_types kcg_copy_array__157964

#define kcg_comp_TargetCollection_T_TargetManagement_types kcg_comp_struct__157967

#define kcg_copy_TargetCollection_T_TargetManagement_types kcg_copy_struct__157967

#define kcg_comp_Target_T_TargetManagement_types kcg_comp_struct__157900

#define kcg_copy_Target_T_TargetManagement_types kcg_copy_struct__157900

#define kcg_comp_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg kcg_comp_struct__157319

#define kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg kcg_copy_struct__157319

#define kcg_comp_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg kcg_comp_struct__157670

#define kcg_copy_T_Data_From_Track_MASSPGradient_Available_Level_And_Mode_Types_Pkg kcg_copy_struct__157670

#define kcg_comp_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg kcg_comp_struct__156774

#define kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg kcg_copy_struct__156774

#define kcg_comp_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg kcg_comp_struct__157755

#define kcg_copy_T_LevelTansitionInfo_Level_And_Mode_Types_Pkg kcg_copy_struct__157755

#define kcg_comp_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg kcg_comp_struct__156780

#define kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg kcg_copy_struct__156780

#define kcg_comp_T_LevelTransition_Level_And_Mode_Types_Pkg kcg_comp_struct__157769

#define kcg_copy_T_LevelTransition_Level_And_Mode_Types_Pkg kcg_copy_struct__157769

#define kcg_comp_T_AnnouncedLevel_Level_And_Mode_Types_Pkg kcg_comp_struct__158493

#define kcg_copy_T_AnnouncedLevel_Level_And_Mode_Types_Pkg kcg_copy_struct__158493

#define kcg_comp_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg kcg_comp_struct__158486

#define kcg_copy_T_AcknoledgementRequest_Level_And_Mode_Types_Pkg kcg_copy_struct__158486

#define kcg_comp_T_Mode_Level_Level_And_Mode_Types_Pkg kcg_comp_struct__156893

#define kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg kcg_copy_struct__156893

#define kcg_comp_TrainLocations_real_T_SDM_Types_Pkg kcg_comp_struct__158003

#define kcg_copy_TrainLocations_real_T_SDM_Types_Pkg kcg_copy_struct__158003

#define kcg_comp_SDM_Commands_T_SDM_Types_Pkg kcg_comp_struct__157907

#define kcg_copy_SDM_Commands_T_SDM_Types_Pkg kcg_copy_struct__157907

#define kcg_comp_trainData_internal_t_SDM_Types_Pkg kcg_comp_struct__158088

#define kcg_copy_trainData_internal_t_SDM_Types_Pkg kcg_copy_struct__158088

#define kcg_comp_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg kcg_comp_struct__156806

#define kcg_copy_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg kcg_copy_struct__156806

#define kcg_comp_SDM_Locations_T_SDM_Types_Pkg kcg_comp_struct__158135

#define kcg_copy_SDM_Locations_T_SDM_Types_Pkg kcg_copy_struct__158135

#define kcg_comp_Speeds_T_SDM_Types_Pkg kcg_comp_struct__158158

#define kcg_copy_Speeds_T_SDM_Types_Pkg kcg_copy_struct__158158

#define kcg_comp_D_test_trackinit_T_TIU_Types_Pkg kcg_comp_struct__156096

#define kcg_copy_D_test_trackinit_T_TIU_Types_Pkg kcg_copy_struct__156096

#define kcg_comp_L_test_trackcond_T_TIU_Types_Pkg kcg_comp_struct__156096

#define kcg_copy_L_test_trackcond_T_TIU_Types_Pkg kcg_copy_struct__156096

#define kcg_comp_D_test_trackcond_T_TIU_Types_Pkg kcg_comp_struct__156096

#define kcg_copy_D_test_trackcond_T_TIU_Types_Pkg kcg_copy_struct__156096

#define kcg_comp_nothing_to_resume_profile_follow_T_TIU_Types_Pkg kcg_comp_struct__156101

#define kcg_copy_nothing_to_resume_profile_follow_T_TIU_Types_Pkg kcg_copy_struct__156101

#define kcg_comp_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg kcg_comp_struct__156107

#define kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg kcg_copy_struct__156107

#define kcg_comp_Driver2MAR_T_TA_MA_Request kcg_comp_struct__156880

#define kcg_copy_Driver2MAR_T_TA_MA_Request kcg_copy_struct__156880

#define kcg_comp_Brake_pressure_value_T_TIU_Types_Pkg kcg_comp_struct__156122

#define kcg_copy_Brake_pressure_value_T_TIU_Types_Pkg kcg_copy_struct__156122

#define kcg_comp_Brake_status_T_TIU_Types_Pkg kcg_comp_struct__156113

#define kcg_copy_Brake_status_T_TIU_Types_Pkg kcg_copy_struct__156113

#define kcg_comp_Radio_TrackTrain_Header_T_TM_transitional kcg_comp_struct__155429

#define kcg_copy_Radio_TrackTrain_Header_T_TM_transitional kcg_copy_struct__155429

#define kcg_comp_Radio_TrainTrack_Header_T_TM_transitional kcg_comp_struct__155748

#define kcg_copy_Radio_TrainTrack_Header_T_TM_transitional kcg_copy_struct__155748

#define kcg_comp_Radio_TrainTrack_Message_T_TM_transitional kcg_comp_struct__155856

#define kcg_copy_Radio_TrainTrack_Message_T_TM_transitional kcg_copy_struct__155856

#define kcg_comp_Mode_control_and_train_status_T_TIU_Types_Pkg kcg_comp_struct__156127

#define kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg kcg_copy_struct__156127

#define kcg_comp_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg kcg_comp_struct__156138

#define kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg kcg_copy_struct__156138

#define kcg_comp_MyArray_SDM_Commands_Pkg kcg_comp_array_bool_14

#define kcg_copy_MyArray_SDM_Commands_Pkg kcg_copy_array_bool_14

#define kcg_comp_TSM_triggerCond_T_SDM_Commands_Pkg kcg_comp_struct__158202

#define kcg_copy_TSM_triggerCond_T_SDM_Commands_Pkg kcg_copy_struct__158202

#define kcg_comp_TSM_revokeCond_T_SDM_Commands_Pkg kcg_comp_struct__158222

#define kcg_copy_TSM_revokeCond_T_SDM_Commands_Pkg kcg_copy_struct__158222

#define kcg_comp_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store kcg_comp_struct__156988

#define kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store kcg_copy_struct__156988

#define kcg_comp_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store kcg_comp_struct__156994

#define kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store kcg_copy_struct__156994

#define kcg_comp_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store kcg_comp_struct__157002

#define kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store kcg_copy_struct__157002

#define kcg_comp_trainData_T_TIU_Types_Pkg kcg_comp_struct__156078

#define kcg_copy_trainData_T_TIU_Types_Pkg kcg_copy_struct__156078

#define kcg_comp_P131_RBCTransitionOrder_T_Packet_Types_Pkg kcg_comp_struct__156534

#define kcg_copy_P131_RBCTransitionOrder_T_Packet_Types_Pkg kcg_copy_struct__156534

#define kcg_comp_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg kcg_comp_struct__156885

#define kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg kcg_copy_struct__156885

#define kcg_comp_IterPacket58_T_Packet_Types_Pkg kcg_comp_struct__155627

#define kcg_copy_IterPacket58_T_Packet_Types_Pkg kcg_copy_struct__155627

#define kcg_comp_IterPacket58List_T_Packet_Types_Pkg kcg_comp_array__157593

#define kcg_copy_IterPacket58List_T_Packet_Types_Pkg kcg_copy_array__157593

#define kcg_comp_TIU_trainStatus_T_TIU_Types_Pkg kcg_comp_struct__157538

#define kcg_copy_TIU_trainStatus_T_TIU_Types_Pkg kcg_copy_struct__157538

#define kcg_comp_P58_PositionReportParameters_T_Packet_Types_Pkg kcg_comp_struct__157596

#define kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg kcg_copy_struct__157596

#define kcg_comp_P63_BaliseInSRAuthority_T_Packet_Types_Pkg kcg_comp_struct__157084

#define kcg_copy_P63_BaliseInSRAuthority_T_Packet_Types_Pkg kcg_copy_struct__157084

#define kcg_comp_TIU_commandStatus_T_TIU_Types_Pkg kcg_comp_struct__158550

#define kcg_copy_TIU_commandStatus_T_TIU_Types_Pkg kcg_copy_struct__158550

#define kcg_comp_M_current_T_TIU_Types_Pkg kcg_comp_struct__156153

#define kcg_copy_M_current_T_TIU_Types_Pkg kcg_copy_struct__156153

#define kcg_comp_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg kcg_comp_array__157092

#define kcg_copy_P63_ListofBalisesinSRAuthority_T_Packet_Types_Pkg kcg_copy_array__157092

#define kcg_comp_D_test_current_T_TIU_Types_Pkg kcg_comp_struct__156096

#define kcg_copy_D_test_current_T_TIU_Types_Pkg kcg_copy_struct__156096

#define kcg_comp_P21_GradientProfile_T_Packet_Types_Pkg kcg_comp_struct__157095

#define kcg_copy_P21_GradientProfile_T_Packet_Types_Pkg kcg_copy_struct__157095

#define kcg_comp_Change_of_allowed_current_consumption_T_TIU_Types_Pkg kcg_comp_struct__156158

#define kcg_copy_Change_of_allowed_current_consumption_T_TIU_Types_Pkg kcg_copy_struct__156158

#define kcg_comp_P21_GradientProfiles_T_Packet_Types_Pkg kcg_comp_array__157104

#define kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg kcg_copy_array__157104

#define kcg_comp_Passenger_door_control_info_T_TIU_Types_Pkg kcg_comp_struct__156164

#define kcg_copy_Passenger_door_control_info_T_TIU_Types_Pkg kcg_copy_struct__156164

#define kcg_comp_P15_Level23MovementAuthority_T_Packet_Types_Pkg kcg_comp_struct__157115

#define kcg_copy_P15_Level23MovementAuthority_T_Packet_Types_Pkg kcg_copy_struct__157115

#define kcg_comp_P15_Level23MovementAuthorities_T_Packet_Types_Pkg kcg_comp_array__157142

#define kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg kcg_copy_array__157142

#define kcg_comp_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg kcg_comp_struct__157145

#define kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg kcg_copy_struct__157145

#define kcg_comp_P138_ReversingAreaInformation_T_Packet_Types_Pkg kcg_comp_struct__157107

#define kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg kcg_copy_struct__157107

#define kcg_comp_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg kcg_comp_struct__157153

#define kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg kcg_copy_struct__157153

#define kcg_comp_P12_Level1MovementAuthority_T_Packet_Types_Pkg kcg_comp_struct__157038

#define kcg_copy_P12_Level1MovementAuthority_T_Packet_Types_Pkg kcg_copy_struct__157038

#define kcg_comp_P12_Level1MovementAuthorities_T_Packet_Types_Pkg kcg_comp_array__157066

#define kcg_copy_P12_Level1MovementAuthorities_T_Packet_Types_Pkg kcg_copy_array__157066

#define kcg_comp_P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg kcg_comp_struct__157033

#define kcg_copy_P135_StopShuntingOnDeskOpening_T_Packet_Types_Pkg kcg_copy_struct__157033

#define kcg_comp_P80_ModeProfile_T_Packet_Types_Pkg kcg_comp_struct__157069

#define kcg_copy_P80_ModeProfile_T_Packet_Types_Pkg kcg_copy_struct__157069

#define kcg_comp_M_voltage_T_TIU_Types_Pkg kcg_comp_struct__156169

#define kcg_copy_M_voltage_T_TIU_Types_Pkg kcg_copy_struct__156169

#define kcg_comp_P80_ModeProfiles_T_Packet_Types_Pkg kcg_comp_array__157081

#define kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg kcg_copy_array__157081

#define kcg_comp_D_test_distance_T_TIU_Types_Pkg kcg_comp_struct__156096

#define kcg_copy_D_test_distance_T_TIU_Types_Pkg kcg_copy_struct__156096

#define kcg_comp_SSP_T_Packet_Types_Pkg kcg_comp_struct__157198

#define kcg_copy_SSP_T_Packet_Types_Pkg kcg_copy_struct__157198

#define kcg_comp_D_test_traction_T_TIU_Types_Pkg kcg_comp_struct__156096

#define kcg_copy_D_test_traction_T_TIU_Types_Pkg kcg_copy_struct__156096

#define kcg_comp_SSPArray_T_Packet_Types_Pkg kcg_comp_array__157206

#define kcg_copy_SSPArray_T_Packet_Types_Pkg kcg_copy_array__157206

#define kcg_comp_Change_traction_system_T_TIU_Types_Pkg kcg_comp_struct__156174

#define kcg_copy_Change_traction_system_T_TIU_Types_Pkg kcg_copy_struct__156174

#define kcg_comp_Diff_T_Packet_Types_Pkg kcg_comp_struct__157187

#define kcg_copy_Diff_T_Packet_Types_Pkg kcg_copy_struct__157187

#define kcg_comp_DiffArray_T_Packet_Types_Pkg kcg_comp_array__157195

#define kcg_copy_DiffArray_T_Packet_Types_Pkg kcg_copy_array__157195

#define kcg_comp_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg kcg_comp_struct__157209

#define kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg kcg_copy_struct__157209

#define kcg_comp_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg kcg_comp_struct__157258

#define kcg_copy_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg kcg_copy_struct__157258

#define kcg_comp_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg kcg_comp_array__157265

#define kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg kcg_copy_array__157265

#define kcg_comp_P41_LevelTransitionOrder_T_Packet_Types_Pkg kcg_comp_struct__157226

#define kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg kcg_copy_struct__157226

#define kcg_comp_MRSP_reduction_acc_TA_Export kcg_comp_struct__157017

#define kcg_copy_MRSP_reduction_acc_TA_Export kcg_copy_struct__157017

#define kcg_comp_P41_LevelTransistionOrders_T_Packet_Types_Pkg kcg_comp_array__157236

#define kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg kcg_copy_array__157236

#define kcg_comp_nvkrint_T_Packet_Types_Pkg kcg_comp_struct__156674

#define kcg_copy_nvkrint_T_Packet_Types_Pkg kcg_copy_struct__156674

#define kcg_comp_nvkrintArray_T_Packet_Types_Pkg kcg_comp_array__156680

#define kcg_copy_nvkrintArray_T_Packet_Types_Pkg kcg_copy_array__156680

#define kcg_comp_nvkvint_T_Packet_Types_Pkg kcg_comp_struct__156683

#define kcg_copy_nvkvint_T_Packet_Types_Pkg kcg_copy_struct__156683

#define kcg_comp_nvkvintArray_T_Packet_Types_Pkg kcg_comp_array__156690

#define kcg_copy_nvkvintArray_T_Packet_Types_Pkg kcg_copy_array__156690

#define kcg_comp_nvkvintset_T_Packet_Types_Pkg kcg_comp_struct__156693

#define kcg_copy_nvkvintset_T_Packet_Types_Pkg kcg_copy_struct__156693

#define kcg_comp_nvkvintsetArray_T_Packet_Types_Pkg kcg_comp_array__156701

#define kcg_copy_nvkvintsetArray_T_Packet_Types_Pkg kcg_copy_array__156701

#define kcg_comp_nidC_T_Packet_Types_Pkg kcg_comp_struct__156704

#define kcg_copy_nidC_T_Packet_Types_Pkg kcg_copy_struct__156704

#define kcg_comp_nidCArray_T_Packet_Types_Pkg kcg_comp_array__156709

#define kcg_copy_nidCArray_T_Packet_Types_Pkg kcg_copy_array__156709

#define kcg_comp_P3_NationalValues_T_Packet_Types_Pkg kcg_comp_struct__156712

#define kcg_copy_P3_NationalValues_T_Packet_Types_Pkg kcg_copy_struct__156712

#define kcg_comp_Type_I_train_commands_T_TIU_Types_Pkg kcg_comp_struct__156180

#define kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg kcg_copy_struct__156180

#define kcg_comp_P45_RadioNetworkRegistration_T_Packet_Types_Pkg kcg_comp_struct__156309

#define kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg kcg_copy_struct__156309

#define kcg_comp_P42_SessionManagement_T_Packet_Types_Pkg kcg_comp_struct__156327

#define kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg kcg_copy_struct__156327

#define kcg_comp_Radio_TrainTrack_Message_T_Radio_Types_Pkg kcg_comp_struct__155856

#define kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg kcg_copy_struct__155856

#define kcg_comp_Radio_TrainTrack_Header_T_Radio_Types_Pkg kcg_comp_struct__155748

#define kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg kcg_copy_struct__155748

#define kcg_comp_RadioMessage_T_Radio_Types_Pkg kcg_comp_struct__157698

#define kcg_copy_RadioMessage_T_Radio_Types_Pkg kcg_copy_struct__157698

#define kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_comp_struct__155429

#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_copy_struct__155429

#define kcg_comp_Brake_inhibition_command_T_TIU_Types_Pkg kcg_comp_struct__156188

#define kcg_copy_Brake_inhibition_command_T_TIU_Types_Pkg kcg_copy_struct__156188

#define kcg_comp_outPackets_T_Common_Types_Pkg kcg_comp_struct__155846

#define kcg_copy_outPackets_T_Common_Types_Pkg kcg_copy_struct__155846

#define kcg_comp_MSG_Errors_T_Common_Types_Pkg kcg_comp_struct__157629

#define kcg_copy_MSG_Errors_T_Common_Types_Pkg kcg_copy_struct__157629

#define kcg_comp_filterRelatedEvents_T_Common_Types_Pkg kcg_comp_struct__157659

#define kcg_copy_filterRelatedEvents_T_Common_Types_Pkg kcg_copy_struct__157659

#define kcg_comp_ReceivedMessage_T_Common_Types_Pkg kcg_comp_struct__156299

#define kcg_copy_ReceivedMessage_T_Common_Types_Pkg kcg_copy_struct__156299

#define kcg_comp_RadioMetadata_T_Common_Types_Pkg kcg_comp_struct__156016

#define kcg_copy_RadioMetadata_T_Common_Types_Pkg kcg_copy_struct__156016

#define kcg_comp_Brake_command_T_TIU_Types_Pkg kcg_comp_struct__156147

#define kcg_copy_Brake_command_T_TIU_Types_Pkg kcg_copy_struct__156147

#define kcg_comp_TrackSide_ForCheck_T_Common_Types_Pkg kcg_comp_struct__157724

#define kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg kcg_copy_struct__157724

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__155004

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__155004

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__155012

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__155012

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__155015

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__155015

#define kcg_comp_Isolation_Status_T_TIU_Types_Pkg kcg_comp_struct__156195

#define kcg_copy_Isolation_Status_T_TIU_Types_Pkg kcg_copy_struct__156195

#define kcg_comp_RBC_Id_T_Common_Types_Pkg kcg_comp_struct__156028

#define kcg_copy_RBC_Id_T_Common_Types_Pkg kcg_copy_struct__156028

#define kcg_comp_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg kcg_comp_struct__156200

#define kcg_copy_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg kcg_copy_struct__156200

#define kcg_comp_TIU_Input_msg_API_TIU_Pkg kcg_comp_struct__156210

#define kcg_copy_TIU_Input_msg_API_TIU_Pkg kcg_copy_struct__156210

#define kcg_comp_TIU_Output_msg_API_TIU_Pkg kcg_comp_struct__156215

#define kcg_copy_TIU_Output_msg_API_TIU_Pkg kcg_copy_struct__156215

#define kcg_comp_DMI_to_EVC_Message_int_T_API_DMI_Pkg kcg_comp_array_int_311

#define kcg_copy_DMI_to_EVC_Message_int_T_API_DMI_Pkg kcg_copy_array_int_311

#define kcg_comp_radioManagementMessage_T_Common_Types_Pkg kcg_comp_struct__158229

#define kcg_copy_radioManagementMessage_T_Common_Types_Pkg kcg_copy_struct__158229

#define kcg_comp_DMI_to_EVC_Message_T_API_DMI_Pkg kcg_comp_struct__157878

#define kcg_copy_DMI_to_EVC_Message_T_API_DMI_Pkg kcg_copy_struct__157878

#define kcg_comp_EVC_to_DMI_Message_T_API_DMI_Pkg kcg_comp_struct__158466

#define kcg_copy_EVC_to_DMI_Message_T_API_DMI_Pkg kcg_copy_struct__158466

#define kcg_comp_EVC_to_DMI_Message_int_T_API_DMI_Pkg kcg_comp_array_int_999

#define kcg_copy_EVC_to_DMI_Message_int_T_API_DMI_Pkg kcg_copy_array_int_999

#define kcg_comp_SSP_cat_t_TA_MRSP kcg_comp_array__157384

#define kcg_copy_SSP_cat_t_TA_MRSP kcg_copy_array__157384

#define kcg_comp_SSP_section_t_TA_MRSP kcg_comp_struct__157379

#define kcg_copy_SSP_section_t_TA_MRSP kcg_copy_struct__157379

#define kcg_comp_SSP_matrix_t_TA_MRSP kcg_comp_array__157387

#define kcg_copy_SSP_matrix_t_TA_MRSP kcg_copy_array__157387

#define kcg_comp_RadioManagement_T_API_RadioCommunication_Pkg kcg_comp_struct__156072

#define kcg_copy_RadioManagement_T_API_RadioCommunication_Pkg kcg_copy_struct__156072

#define kcg_comp_M_024_int_T_TM_radio_messages kcg_comp_struct__155347

#define kcg_copy_M_024_int_T_TM_radio_messages kcg_copy_struct__155347

#define kcg_comp_M_008_int_T_TM_radio_messages kcg_comp_struct__155409

#define kcg_copy_M_008_int_T_TM_radio_messages kcg_copy_struct__155409

#define kcg_comp_M_032_int_T_TM_radio_messages kcg_comp_struct__155419

#define kcg_copy_M_032_int_T_TM_radio_messages kcg_copy_struct__155419

#define kcg_comp_M_028_T_TM_radio_messages kcg_comp_struct__155447

#define kcg_copy_M_028_T_TM_radio_messages kcg_copy_struct__155447

#define kcg_comp_M_032_T_TM_radio_messages kcg_comp_struct__155457

#define kcg_copy_M_032_T_TM_radio_messages kcg_copy_struct__155457

#define kcg_comp_M_033_T_TM_radio_messages kcg_comp_struct__155467

#define kcg_copy_M_033_T_TM_radio_messages kcg_copy_struct__155467

#define kcg_comp_M_034_T_TM_radio_messages kcg_comp_struct__155478

#define kcg_copy_M_034_T_TM_radio_messages kcg_copy_struct__155478

#define kcg_comp_M_038_T_TM_radio_messages kcg_comp_struct__155492

#define kcg_copy_M_038_T_TM_radio_messages kcg_copy_struct__155492

#define kcg_comp_M_039_T_TM_radio_messages kcg_comp_struct__155492

#define kcg_copy_M_039_T_TM_radio_messages kcg_copy_struct__155492

#define kcg_comp_M_040_T_TM_radio_messages kcg_comp_struct__155492

#define kcg_copy_M_040_T_TM_radio_messages kcg_copy_struct__155492

#define kcg_comp_M_041_T_TM_radio_messages kcg_comp_struct__155492

#define kcg_copy_M_041_T_TM_radio_messages kcg_copy_struct__155492

#define kcg_comp_M_043_T_TM_radio_messages kcg_comp_struct__155492

#define kcg_copy_M_043_T_TM_radio_messages kcg_copy_struct__155492

#define kcg_comp_M_045_T_TM_radio_messages kcg_comp_struct__155501

#define kcg_copy_M_045_T_TM_radio_messages kcg_copy_struct__155501

#define kcg_comp_M_002_T_TM_radio_messages kcg_comp_struct__155511

#define kcg_copy_M_002_T_TM_radio_messages kcg_copy_struct__155511

#define kcg_comp_M_003_T_TM_radio_messages kcg_comp_struct__155492

#define kcg_copy_M_003_T_TM_radio_messages kcg_copy_struct__155492

#define kcg_comp_TrainPosRaw_T_InfraLib kcg_comp_struct__154982

#define kcg_copy_TrainPosRaw_T_InfraLib kcg_copy_struct__154982

#define kcg_comp_M_006_T_TM_radio_messages kcg_comp_struct__155492

#define kcg_copy_M_006_T_TM_radio_messages kcg_copy_struct__155492

#define kcg_comp_TrackSectionData_T_InfraLib kcg_comp_struct__155025

#define kcg_copy_TrackSectionData_T_InfraLib kcg_copy_struct__155025

#define kcg_comp_M_008_T_TM_radio_messages kcg_comp_struct__155522

#define kcg_copy_M_008_T_TM_radio_messages kcg_copy_struct__155522

#define kcg_comp_B_data_internal_T_InfraLib kcg_comp_struct__155038

#define kcg_copy_B_data_internal_T_InfraLib kcg_copy_struct__155038

#define kcg_comp_M_009_T_TM_radio_messages kcg_comp_struct__155492

#define kcg_copy_M_009_T_TM_radio_messages kcg_copy_struct__155492

#define kcg_comp_R_data_internal_T_InfraLib kcg_comp_struct__155371

#define kcg_copy_R_data_internal_T_InfraLib kcg_copy_struct__155371

#define kcg_comp_M_015_T_TM_radio_messages kcg_comp_struct__155532

#define kcg_copy_M_015_T_TM_radio_messages kcg_copy_struct__155532

#define kcg_comp_M_016_T_TM_radio_messages kcg_comp_struct__155546

#define kcg_copy_M_016_T_TM_radio_messages kcg_copy_struct__155546

#define kcg_comp_M_018_T_TM_radio_messages kcg_comp_struct__155546

#define kcg_copy_M_018_T_TM_radio_messages kcg_copy_struct__155546

#define kcg_comp_M_024_T_TM_radio_messages kcg_comp_struct__155492

#define kcg_copy_M_024_T_TM_radio_messages kcg_copy_struct__155492

#define kcg_comp_M_027_T_TM_radio_messages kcg_comp_struct__155447

#define kcg_copy_M_027_T_TM_radio_messages kcg_copy_struct__155447

#define kcg_comp_M_015_int_T_TM_radio_messages kcg_comp_struct__155556

#define kcg_copy_M_015_int_T_TM_radio_messages kcg_copy_struct__155556

#define kcg_comp_M_TrackTrain_Radio_T_TM_radio_messages kcg_comp_struct__155356

#define kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages kcg_copy_struct__155356

#define kcg_comp_M_003_int_T_TM_radio_messages kcg_comp_struct__155347

#define kcg_copy_M_003_int_T_TM_radio_messages kcg_copy_struct__155347

#define kcg_comp_M_155_T_TM_radio_messages kcg_comp_struct__156470

#define kcg_copy_M_155_T_TM_radio_messages kcg_copy_struct__156470

#define kcg_comp_M_156_T_TM_radio_messages kcg_comp_struct__156470

#define kcg_copy_M_156_T_TM_radio_messages kcg_copy_struct__156470

#define kcg_comp_AccuDistanceProfileMA_TA_MA kcg_comp_struct__157390

#define kcg_copy_AccuDistanceProfileMA_TA_MA kcg_copy_struct__157390

#define kcg_comp_M_159_T_TM_radio_messages kcg_comp_struct__156470

#define kcg_copy_M_159_T_TM_radio_messages kcg_copy_struct__156470

#define kcg_comp_M_154_T_TM_radio_messages kcg_comp_struct__156470

#define kcg_copy_M_154_T_TM_radio_messages kcg_copy_struct__156470

#define kcg_comp_M_132_T_TM_radio_messages kcg_comp_struct__156901

#define kcg_copy_M_132_T_TM_radio_messages kcg_copy_struct__156901

#define kcg_comp_M_147_T_TM_radio_messages kcg_comp_struct__156978

#define kcg_copy_M_147_T_TM_radio_messages kcg_copy_struct__156978

#define kcg_comp_M_146_T_TM_radio_messages kcg_comp_struct__157520

#define kcg_copy_M_146_T_TM_radio_messages kcg_copy_struct__157520

#define kcg_comp_M_129_T_TM_radio_messages kcg_comp_struct__156470

#define kcg_copy_M_129_T_TM_radio_messages kcg_copy_struct__156470

#define kcg_comp_M_136_T_TM_radio_messages kcg_comp_struct__156470

#define kcg_copy_M_136_T_TM_radio_messages kcg_copy_struct__156470

#define kcg_comp_M_TrainTrack_compressed_packets_T_TM_radio_messages kcg_comp_array_int_50

#define kcg_copy_M_TrainTrack_compressed_packets_T_TM_radio_messages kcg_copy_array_int_50

#define kcg_comp_M_TrainTrack_MessageHd_T_TM_radio_messages kcg_comp_struct__155965

#define kcg_copy_M_TrainTrack_MessageHd_T_TM_radio_messages kcg_copy_struct__155965

#define kcg_comp_M_TrainTrack_Message_T_TM_radio_messages kcg_comp_struct__155976

#define kcg_copy_M_TrainTrack_Message_T_TM_radio_messages kcg_copy_struct__155976

#define kcg_comp_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg kcg_comp_struct__156233

#define kcg_copy_ps_dataForStartOfMission_T_API_PersistanceStorage_Pkg kcg_copy_struct__156233

#define kcg_comp_trainData_Events_T_trainData_Types_pkg kcg_comp_struct__157475

#define kcg_copy_trainData_Events_T_trainData_Types_pkg kcg_copy_struct__157475

#define kcg_comp_trainData_Trigger_T_trainData_Types_pkg kcg_comp_struct__157484

#define kcg_copy_trainData_Trigger_T_trainData_Types_pkg kcg_copy_struct__157484

#define kcg_comp_trainDataStatus_T_trainData_Types_pkg kcg_comp_struct__157492

#define kcg_copy_trainDataStatus_T_trainData_Types_pkg kcg_copy_struct__157492

#define kcg_comp_RadioTrackTrainMessageQueueEntry_T kcg_comp_struct__155606

#define kcg_copy_RadioTrackTrainMessageQueueEntry_T kcg_copy_struct__155606

#define kcg_comp_RadioTrackTrainMessageQueueEntries_T kcg_comp_array__155611

#define kcg_copy_RadioTrackTrainMessageQueueEntries_T kcg_copy_array__155611

#define kcg_comp_RadioTrackTrainMessageQueue_T kcg_comp_struct__155614

#define kcg_copy_RadioTrackTrainMessageQueue_T kcg_copy_struct__155614

#define kcg_comp_PosRepParams_T kcg_comp_struct__155635

#define kcg_copy_PosRepParams_T kcg_copy_struct__155635

#define kcg_comp_MAReqParams_T kcg_comp_struct__155645

#define kcg_copy_MAReqParams_T kcg_copy_struct__155645

#define kcg_comp_NationalParams_T kcg_comp_struct__155652

#define kcg_copy_NationalParams_T kcg_copy_struct__155652

#define kcg_comp_DynamicConfig_T kcg_comp_struct__155662

#define kcg_copy_DynamicConfig_T kcg_copy_struct__155662

#define kcg_comp_Clock_T kcg_comp_struct__155669

#define kcg_copy_Clock_T kcg_copy_struct__155669

#define kcg_comp_PosData_T kcg_comp_struct__155673

#define kcg_copy_PosData_T kcg_copy_struct__155673

#define kcg_comp_TrainData_T kcg_comp_struct__155713

#define kcg_copy_TrainData_T kcg_copy_struct__155713

#define kcg_comp_SessionManagement_T kcg_comp_struct__155731

#define kcg_copy_SessionManagement_T kcg_copy_struct__155731

#define kcg_comp_Array03_TM_TrainToTrack kcg_comp_array_int_3

#define kcg_copy_Array03_TM_TrainToTrack kcg_copy_array_int_3

#define kcg_comp_Array11_TM_TrainToTrack kcg_comp_array_int_11

#define kcg_copy_Array11_TM_TrainToTrack kcg_copy_array_int_11

#define kcg_comp_P003_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_8

#define kcg_copy_P003_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_8

#define kcg_comp_P003_nid_radio_list_int_t_TM_TrainToTrack kcg_comp_array_int_5

#define kcg_copy_P003_nid_radio_list_int_t_TM_TrainToTrack kcg_copy_array_int_5

#define kcg_comp_P003_nid_radio_list_t_TM_TrainToTrack kcg_comp_array_int_5

#define kcg_copy_P003_nid_radio_list_t_TM_TrainToTrack kcg_copy_array_int_5

#define kcg_comp_P003_TM_TrainToTrack kcg_comp_struct__155901

#define kcg_copy_P003_TM_TrainToTrack kcg_copy_struct__155901

#define kcg_comp_P009_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_3

#define kcg_copy_P009_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_3

#define kcg_comp_P009_TM_TrainToTrack kcg_comp_struct__155880

#define kcg_copy_P009_TM_TrainToTrack kcg_copy_struct__155880

#define kcg_comp_P011_TrainTrack_int_TM_TrainToTrack kcg_comp_array_int_25

#define kcg_copy_P011_TrainTrack_int_TM_TrainToTrack kcg_copy_array_int_25

#define kcg_comp_P011_ntc_list_array_T_TM_TrainToTrack kcg_comp_array_int_5

#define kcg_copy_P011_ntc_list_array_T_TM_TrainToTrack kcg_copy_array_int_5

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-11-20T19:46:54
*************************************************************$ */


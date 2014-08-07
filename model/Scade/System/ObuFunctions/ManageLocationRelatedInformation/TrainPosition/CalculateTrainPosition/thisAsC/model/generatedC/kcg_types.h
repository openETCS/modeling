/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config S:/SDVAL_RAMS/Förderprojekte/openETCS/section/040_Model/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/TrainPosition/CalculateTrainPosition/KCG/config.txt
** Generation date: 2014-08-07T09:21:25
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

/* truthtables::TruthTableValues */
typedef enum kcg_tag_TruthTableValues_truthtables {
  T_truthtables,
  F_truthtables,
  X_truthtables
} TruthTableValues_truthtables;
/* BG_Types_Pkg::Orientation_T */
typedef enum kcg_tag_Orientation_T_BG_Types_Pkg {
  Single_Balise_Group_BG_Types_Pkg,
  DIR_Nominal_BG_Types_Pkg,
  DIR_Reverse_BG_Types_Pkg
} Orientation_T_BG_Types_Pkg;
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
/* M_ACK */
typedef enum kcg_tag_M_ACK {
  M_ACK_No_acknowledgement_required = 0,
  M_ACK_Acknowledgement_required = 1
} M_ACK;
/* M_ADHESION */
typedef enum kcg_tag_M_ADHESION {
  M_ADHESION_Slippery_rail = 0,
  M_ADHESION_Non_slippery_rail = 1
} M_ADHESION;
/* M_AIRTIGHT */
typedef enum kcg_tag_M_AIRTIGHT {
  M_AIRTIGHT_Not_fitted = 0,
  M_AIRTIGHT_Fitted = 1
} M_AIRTIGHT;
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
/* M_LEVELTEXTDISPLAY */
typedef enum kcg_tag_M_LEVELTEXTDISPLAY {
  M_LEVELTEXTDISPLAY_Level_0 = 0,
  M_LEVELTEXTDISPLAY_Level_NTC_specified_by_NID_NTC = 1,
  M_LEVELTEXTDISPLAY_Level_1 = 2,
  M_LEVELTEXTDISPLAY_Level_2 = 3,
  M_LEVELTEXTDISPLAY_Level_3 = 4,
  M_LEVELTEXTDISPLAY_The_display_of_the_text_shall_not_be_limited_by_the_level = 5
} M_LEVELTEXTDISPLAY;
/* M_LEVELTR */
typedef enum kcg_tag_M_LEVELTR {
  M_LEVELTR_Level_0 = 0,
  M_LEVELTR_Level_NTC_specified_by_NID_NTC = 1,
  M_LEVELTR_Level_1 = 2,
  M_LEVELTR_Level_2 = 3,
  M_LEVELTR_Level_3 = 4
} M_LEVELTR;
/* M_LINEGAUGE */
typedef enum kcg_tag_M_LINEGAUGE {
  M_LINEGAUGE_G1 = 1,
  M_LINEGAUGE_GA = 2,
  M_LINEGAUGE_GB = 4,
  M_LINEGAUGE_GC = 8
} M_LINEGAUGE;
/* M_LOADINGGAUGE */
typedef enum kcg_tag_M_LOADINGGAUGE {
  M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles = 0,
  M_LOADINGGAUGE_G1 = 1,
  M_LOADINGGAUGE_GA = 2,
  M_LOADINGGAUGE_GB = 3,
  M_LOADINGGAUGE_GC = 4
} M_LOADINGGAUGE;
/* M_MAMODE */
typedef enum kcg_tag_M_MAMODE {
  M_MAMODE_On_Sight = 0,
  M_MAMODE_Shunting = 1,
  M_MAMODE_Limited_Supervision = 2
} M_MAMODE;
/* M_MODETEXTDISPLAY */
typedef enum kcg_tag_M_MODETEXTDISPLAY {
  M_MODETEXTDISPLAY_Full_Supervision = 0,
  M_MODETEXTDISPLAY_On_Sight = 1,
  M_MODETEXTDISPLAY_Staff_Responsible = 2,
  M_MODETEXTDISPLAY_Unfitted = 4,
  M_MODETEXTDISPLAY_Stand_By = 6,
  M_MODETEXTDISPLAY_Trip = 7,
  M_MODETEXTDISPLAY_Post_Trip = 8,
  M_MODETEXTDISPLAY_Non_Leading = 11,
  M_MODETEXTDISPLAY_Limited_Supervision = 12,
  M_MODETEXTDISPLAY_Reversing = 14,
  M_MODETEXTDISPLAY_The_display_of_the_text_shall_not_be_limited_by_the_mode = 15
} M_MODETEXTDISPLAY;
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
/* M_PLATFORM */
typedef enum kcg_tag_M_PLATFORM {
  M_PLATFORM_200_mm = 0,
  M_PLATFORM_300380_mm = 1,
  M_PLATFORM_550_mm = 2,
  M_PLATFORM_580_mm = 3,
  M_PLATFORM_680_mm = 4,
  M_PLATFORM_685_mm = 5,
  M_PLATFORM_730_mm = 6,
  M_PLATFORM_760_mm = 7,
  M_PLATFORM_840_mm = 8,
  M_PLATFORM_900_mm = 9,
  M_PLATFORM_915_mm = 10,
  M_PLATFORM_920_mm = 11,
  M_PLATFORM_960_mm = 12,
  M_PLATFORM_1100_mm = 13
} M_PLATFORM;
/* M_TRACKCOND */
typedef enum kcg_tag_M_TRACKCOND {
  M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted = 0,
  M_TRACKCOND_Tunnel_stopping_area_Initial_state_is_no_tunnel_stopping_area = 1,
  M_TRACKCOND_Sound_horn_Initial_state_is_is_no_request_for_sound_horn = 2,
  M_TRACKCOND_Powerless_section_Lower_pantograph_Initial_state_is_not_powerless_section = 3,
  M_TRACKCOND_Radio_hole_stop_supervising_T_NVCONTACT_Initial_state_is_supervise_T_NVCONTACT = 4,
  M_TRACKCOND_Air_tightness_Initial_state_is_no_request_for_air_tightness = 5,
  M_TRACKCOND_Switch_off_regenerative_brake_Initial_state_is_regenerative_brake_on = 6,
  M_TRACKCOND_Switch_off_eddy_current_brake_for_service_brake_Initial_state_is_eddy_current_brake_for_service_brake_on = 7,
  M_TRACKCOND_Switch_off_magnetic_shoe_brake_Initial_state_is_magnetic_shoe_brake_on = 8,
  M_TRACKCOND_Powerless_section_switch_off_the_main_power_switch_Initial_state_is_not_powerless_section = 9,
  M_TRACKCOND_Switch_off_eddy_current_brake_for_emergency_brake_Initial_state_is_eddy_current_brake_for_emergency_brake_on = 10
} M_TRACKCOND;
/* M_VOLTAGE */
typedef enum kcg_tag_M_VOLTAGE {
  M_VOLTAGE_Line_not_fitted_with_any_traction_system = 0,
  M_VOLTAGE_AC_25_kV_50_Hz = 1,
  M_VOLTAGE_AC_15_kV_16_7_Hz = 2,
  M_VOLTAGE_DC_3_kV = 3,
  M_VOLTAGE_DC_1_5_kV = 4,
  M_VOLTAGE_DC_600_or_750_V = 5
} M_VOLTAGE;
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
/* NC_TRAIN */
typedef enum kcg_tag_NC_TRAIN {
  NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category = 0,
  NC_TRAIN_Freight_train_braked_in_P_position = 1,
  NC_TRAIN_Freight_train_braked_in_G_position = 2,
  NC_TRAIN_Passenger_train = 4
} NC_TRAIN;
/* Q_ASPECT */
typedef enum kcg_tag_Q_ASPECT {
  Q_ASPECT_Stop_if_in_SH_mode = 0,
  Q_ASPECT_Go_if_in_SH_mode = 1
} Q_ASPECT;
/* Q_CONFTEXTDISPLAY */
typedef enum kcg_tag_Q_CONFTEXTDISPLAY {
  Q_CONFTEXTDISPLAY_Driver_acknowledgement_always_ends_the_text_display_regardless_of_the_end_condition = 0,
  Q_CONFTEXTDISPLAY_Driver_acknowledgement_is_an_additional_condition_to_end_the_display = 1
} Q_CONFTEXTDISPLAY;
/* Q_DANGERPOINT */
typedef enum kcg_tag_Q_DANGERPOINT {
  Q_DANGERPOINT_No_danger_point_information = 0,
  Q_DANGERPOINT_Danger_point_information_to_follow = 1
} Q_DANGERPOINT;
/* Q_DIFF */
typedef enum kcg_tag_Q_DIFF {
  Q_DIFF_Cant_Deficiency_specific_category = 0,
  Q_DIFF_Other_specific_category_replaces_the_Cant_Deficiency_SSP = 1,
  Q_DIFF_Other_specific_category_does_not_replace_the_Cant_Deficiency_SSP = 2
} Q_DIFF;
/* Q_EMERGENCYSTOP */
typedef enum kcg_tag_Q_EMERGENCYSTOP {
  Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA = 0,
  Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_no_update_of_EOA = 1,
  Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted = 2,
  Q_EMERGENCYSTOP_Emergency_stop = 3
} Q_EMERGENCYSTOP;
/* Q_ENDTIMER */
typedef enum kcg_tag_Q_ENDTIMER {
  Q_ENDTIMER_No_End_section_timer_information = 0,
  Q_ENDTIMER_End_section_timer_information_to_follow = 1
} Q_ENDTIMER;
/* Q_FRONT */
typedef enum kcg_tag_Q_FRONT {
  Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element = 0,
  Q_FRONT_No_train_length_delay_on_validity_end_point_of_profile_element = 1
} Q_FRONT;
/* Q_GDIR */
typedef enum kcg_tag_Q_GDIR { Q_GDIR_downhill = 0, Q_GDIR_uphill = 1 } Q_GDIR;
/* Q_INFILL */
typedef enum kcg_tag_Q_INFILL {
  Q_INFILL_Enter = 0,
  Q_INFILL_Exit = 1
} Q_INFILL;
/* Q_LOOPDIR */
typedef enum kcg_tag_Q_LOOPDIR {
  Q_LOOPDIR_Opposite = 0,
  Q_LOOPDIR_Same = 1
} Q_LOOPDIR;
/* Q_LXSTATUS */
typedef enum kcg_tag_Q_LXSTATUS {
  Q_LXSTATUS_LX_is_protected = 0,
  Q_LXSTATUS_LX_is_not_protected = 1
} Q_LXSTATUS;
/* Q_MAMODE */
typedef enum kcg_tag_Q_MAMODE {
  Q_MAMODE_as_the_EOA = 0,
  Q_MAMODE_as_both_the_EOA_and_SvL = 1
} Q_MAMODE;
/* Q_MARQSTREASON */
typedef enum kcg_tag_Q_MARQSTREASON {
  Q_MARQSTREASON_Start_selected_by_driver = 1,
  Q_MARQSTREASON_Time_before_reaching_preindication_location_for_the_EOA_or_LOA_reached = 2,
  Q_MARQSTREASON_Time_before_a_section_timer_or_LOA_speed_timer_expires_reached = 4,
  Q_MARQSTREASON_Track_description_deleted = 8,
  Q_MARQSTREASON_TAF_up_to_level_2_or_3_transition_location = 16
} Q_MARQSTREASON;
/* Q_MPOSITION */
typedef enum kcg_tag_Q_MPOSITION {
  Q_MPOSITION_Opposite = 0,
  Q_MPOSITION_Same = 1
} Q_MPOSITION;
/* Q_NVDRIVER_ADHES */
typedef enum kcg_tag_Q_NVDRIVER_ADHES {
  Q_NVDRIVER_ADHES_Not_allowed = 0,
  Q_NVDRIVER_ADHES_Allowed = 1
} Q_NVDRIVER_ADHES;
/* Q_NVEMRRLS */
typedef enum kcg_tag_Q_NVEMRRLS {
  Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill = 0,
  Q_NVEMRRLS_Revoke_emergency_brake_command_when_permitted_speed_supervision_limit_is_no_longer_exceeded = 1
} Q_NVEMRRLS;
/* Q_NVGUIPERM */
typedef enum kcg_tag_Q_NVGUIPERM {
  Q_NVGUIPERM_No = 0,
  Q_NVGUIPERM_Yes = 1
} Q_NVGUIPERM;
/* Q_NVINHSMICPERM */
typedef enum kcg_tag_Q_NVINHSMICPERM {
  Q_NVINHSMICPERM_No = 0,
  Q_NVINHSMICPERM_Yes = 1
} Q_NVINHSMICPERM;
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
/* Q_NVSBFBPERM */
typedef enum kcg_tag_Q_NVSBFBPERM {
  Q_NVSBFBPERM_No = 0,
  Q_NVSBFBPERM_Yes = 1
} Q_NVSBFBPERM;
/* Q_NVSBTSMPERM */
typedef enum kcg_tag_Q_NVSBTSMPERM {
  Q_NVSBTSMPERM_No = 0,
  Q_NVSBTSMPERM_Yes = 1
} Q_NVSBTSMPERM;
/* Q_ORIENTATION */
typedef enum kcg_tag_Q_ORIENTATION {
  Q_ORIENTATION_The_balise_group_has_been_passed_by_the_train_in_reverse_direction = 0,
  Q_ORIENTATION_The_balise_group_has_been_passed_by_the_train_in_nominal_direction = 1
} Q_ORIENTATION;
/* Q_OVERLAP */
typedef enum kcg_tag_Q_OVERLAP {
  Q_OVERLAP_No_overlap_information = 0,
  Q_OVERLAP_Overlap_information_to_follow = 1
} Q_OVERLAP;
/* Q_PBDSR */
typedef enum kcg_tag_Q_PBDSR {
  Q_PBDSR_EB_intervention_requested = 0,
  Q_PBDSR_SB_intervention_requested = 1
} Q_PBDSR;
/* Q_PLATFORM */
typedef enum kcg_tag_Q_PLATFORM {
  Q_PLATFORM_Platform_on_left_side = 0,
  Q_PLATFORM_Platform_on_right_side = 1,
  Q_PLATFORM_Platform_on_both_sides = 2
} Q_PLATFORM;
/* Q_RBC */
typedef enum kcg_tag_Q_RBC {
  Q_RBC_Terminate_communication_session = 0,
  Q_RBC_Establish_communication_session = 1
} Q_RBC;
/* Q_RIU */
typedef enum kcg_tag_Q_RIU {
  Q_RIU_Terminate_communication_session = 0,
  Q_RIU_Establish_communication_session = 1
} Q_RIU;
/* Q_SECTIONTIMER */
typedef enum kcg_tag_Q_SECTIONTIMER {
  Q_SECTIONTIMER_No_Section_Timer_information = 0,
  Q_SECTIONTIMER_Section_Timer_information_to_follow = 1
} Q_SECTIONTIMER;
/* Q_SLEEPSESSION */
typedef enum kcg_tag_Q_SLEEPSESSION {
  Q_SLEEPSESSION_Ignore_session_establishment_order = 0,
  Q_SLEEPSESSION_Execute_session_establishment_order = 1
} Q_SLEEPSESSION;
/* Q_SRSTOP */
typedef enum kcg_tag_Q_SRSTOP {
  Q_SRSTOP_Stop_if_in_SR_mode = 0,
  Q_SRSTOP_Go_if_in_SR_mode = 1
} Q_SRSTOP;
/* Q_STATUS */
typedef enum kcg_tag_Q_STATUS {
  Q_STATUS_Valid = 1,
  Q_STATUS_Unknown = 2
} Q_STATUS;
/* Q_STOPLX */
typedef enum kcg_tag_Q_STOPLX {
  Q_STOPLX_No_stop_required = 0,
  Q_STOPLX_Stop_required = 1
} Q_STOPLX;
/* Q_SUITABILITY */
typedef enum kcg_tag_Q_SUITABILITY {
  Q_SUITABILITY_Loading_gauge = 0,
  Q_SUITABILITY_Max_axle_load = 1,
  Q_SUITABILITY_Traction_system = 2
} Q_SUITABILITY;
/* Q_TEXT */
typedef enum kcg_tag_Q_TEXT {
  Q_TEXT_Level_crossing_not_protected = 0,
  Q_TEXT_Acknowledgement = 1
} Q_TEXT;
/* Q_TEXTCLASS */
typedef enum kcg_tag_Q_TEXTCLASS {
  Q_TEXTCLASS_Auxiliary_Information = 0,
  Q_TEXTCLASS_Important_Information = 1
} Q_TEXTCLASS;
/* Q_TEXTCONFIRM */
typedef enum kcg_tag_Q_TEXTCONFIRM {
  Q_TEXTCONFIRM_No_confirmation_required = 0,
  Q_TEXTCONFIRM_Confirmation_required = 1,
  Q_TEXTCONFIRM_Confirmation_required_command_application_of_the_service_brake_when_display_end_condition_is_fulfilled_unless_the_text_has_already_been_acknowledged_by_the_driver = 2,
  Q_TEXTCONFIRM_Confirmation_required_command_application_of_the_emergency_brake_when_display_end_condition_is_fulfilled_unless_the_text_has_already_been_acknowledged_by_the_driver = 3
} Q_TEXTCONFIRM;
/* Q_TEXTDISPLAY */
typedef enum kcg_tag_Q_TEXTDISPLAY {
  Q_TEXTDISPLAY_No_display_as_soon_as__or__until_one_of_the_events_is_fulfilled = 0,
  Q_TEXTDISPLAY_Yes_display_as_soon_as__or__until_all_events_are_fulfilled = 1
} Q_TEXTDISPLAY;
/* Q_TEXTREPORT */
typedef enum kcg_tag_Q_TEXTREPORT {
  Q_TEXTREPORT_No_driver_acknowledgement_report_required = 0,
  Q_TEXTREPORT_Driver_acknowledgement_report_required = 1
} Q_TEXTREPORT;
/* Q_TRACKINIT */
typedef enum kcg_tag_Q_TRACKINIT {
  Q_TRACKINIT_No_initial_states_to_be_resumed_profile_to_follow = 0,
  Q_TRACKINIT_Empty_profile_initial_states_to_be_resumed = 1
} Q_TRACKINIT;
/* Q_VBCO */
typedef enum kcg_tag_Q_VBCO {
  Q_VBCO_Remove_the_Virtual_Balise_Cover = 0,
  Q_VBCO_Set_the_Virtual_Balise_Cover = 1
} Q_VBCO;
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
/* M_LEVEL */
typedef enum kcg_tag_M_LEVEL {
  M_LEVEL_Level_0 = 0,
  M_LEVEL_Level_NTC_specified_by_NID_NTC = 1,
  M_LEVEL_Level_1 = 2,
  M_LEVEL_Level_2 = 3,
  M_LEVEL_Level_3 = 4
} M_LEVEL;
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
  M_MODE_Passive_Shunting = 15
} M_MODE;
/* Q_LENGTH */
typedef enum kcg_tag_Q_LENGTH {
  Q_LENGTH_No_train_integrity_information_available = 0,
  Q_LENGTH_Train_integrity_confirmed_by_integrity_monitoring_device = 1,
  Q_LENGTH_Train_integrity_confirmed_by_driver = 2,
  Q_LENGTH_Train_integrity_lost = 3
} Q_LENGTH;
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
/* Radio_TrainToTrack::Validated_Train_Data_OptionalPackets */
typedef enum kcg_tag_Validated_Train_Data_OptionalPackets_Radio_TrainToTrack {
  Validated_Train_Data_OptionalPackageNumber_0_Radio_TrainToTrack = 0,
  Validated_Train_Data_OptionalPackageNumber_1_Radio_TrainToTrack = 1,
  Validated_Train_Data_OptionalPackageNumber_11_Radio_TrainToTrack = 11
} Validated_Train_Data_OptionalPackets_Radio_TrainToTrack;
/* Radio_TrainToTrack::Request_for_Shunting_OptionalPackets */
typedef enum kcg_tag_Request_for_Shunting_OptionalPackets_Radio_TrainToTrack {
  Request_for_Shunting_OptionalPackageNumber_0_Radio_TrainToTrack = 0,
  Request_for_Shunting_OptionalPackageNumber_1_Radio_TrainToTrack = 1
} Request_for_Shunting_OptionalPackets_Radio_TrainToTrack;
/* Radio_TrainToTrack::MA_Request_OptionalPackets */
typedef enum kcg_tag_MA_Request_OptionalPackets_Radio_TrainToTrack {
  MA_Request_OptionalPackageNumber_0_Radio_TrainToTrack = 0,
  MA_Request_OptionalPackageNumber_1_Radio_TrainToTrack = 1,
  MA_Request_OptionalPackageNumber_9_Radio_TrainToTrack = 9
} MA_Request_OptionalPackets_Radio_TrainToTrack;
/* Radio_TrainToTrack::Train_Position_Report_OptionalPackets */
typedef enum kcg_tag_Train_Position_Report_OptionalPackets_Radio_TrainToTrack {
  Train_Position_Report_OptionalPackageNumber_0_Radio_TrainToTrack = 0,
  Train_Position_Report_OptionalPackageNumber_1_Radio_TrainToTrack = 1,
  Train_Position_Report_OptionalPackageNumber_4_Radio_TrainToTrack = 4,
  Train_Position_Report_OptionalPackageNumber_5_Radio_TrainToTrack = 5,
  Train_Position_Report_OptionalPackageNumber_44_Radio_TrainToTrack = 44
} Train_Position_Report_OptionalPackets_Radio_TrainToTrack;
/* Radio_TrainToTrack::Request_to_shorten_MA_is_granted_OptionalPackets */
typedef enum kcg_tag_Request_to_shorten_MA_is_granted_OptionalPackets_Radio_TrainToTrack {
  Request_to_shorten_MA_is_granted_OptionalPackageNumber_0_Radio_TrainToTrack = 0,
  Request_to_shorten_MA_is_granted_OptionalPackageNumber_1_Radio_TrainToTrack = 1
} Request_to_shorten_MA_is_granted_OptionalPackets_Radio_TrainToTrack;
/* Radio_TrainToTrack::Request_to_shorten_MA_is_rejected_OptionalPackets */
typedef enum kcg_tag_Request_to_shorten_MA_is_rejected_OptionalPackets_Radio_TrainToTrack {
  Request_to_shorten_MA_is_rejected_OptionalPackageNumber_0_Radio_TrainToTrack = 0,
  Request_to_shorten_MA_is_rejected_OptionalPackageNumber_1_Radio_TrainToTrack = 1
} Request_to_shorten_MA_is_rejected_OptionalPackets_Radio_TrainToTrack;
/* Radio_TrainToTrack::Acknowledgement_of_Emergency_Stop_OptionalPackets */
typedef enum kcg_tag_Acknowledgement_of_Emergency_Stop_OptionalPackets_Radio_TrainToTrack {
  Acknowledgement_of_Emergency_Stop_OptionalPackageNumber_0_Radio_TrainToTrack = 0,
  Acknowledgement_of_Emergency_Stop_OptionalPackageNumber_1_Radio_TrainToTrack = 1
} Acknowledgement_of_Emergency_Stop_OptionalPackets_Radio_TrainToTrack;
/* Radio_TrainToTrack::Track_Ahead_Free_Granted_OptionalPackets */
typedef enum kcg_tag_Track_Ahead_Free_Granted_OptionalPackets_Radio_TrainToTrack {
  Track_Ahead_Free_Granted_OptionalPackageNumber_0_Radio_TrainToTrack = 0,
  Track_Ahead_Free_Granted_OptionalPackageNumber_1_Radio_TrainToTrack = 1
} Track_Ahead_Free_Granted_OptionalPackets_Radio_TrainToTrack;
/* Radio_TrainToTrack::End_of_Mission_OptionalPackets */
typedef enum kcg_tag_End_of_Mission_OptionalPackets_Radio_TrainToTrack {
  End_of_Mission_OptionalPackageNumber_0_Radio_TrainToTrack = 0,
  End_of_Mission_OptionalPackageNumber_1_Radio_TrainToTrack = 1
} End_of_Mission_OptionalPackets_Radio_TrainToTrack;
/* Radio_TrainToTrack::Radio_infill_request_OptionalPackets */
typedef enum kcg_tag_Radio_infill_request_OptionalPackets_Radio_TrainToTrack {
  Radio_infill_request_OptionalPackageNumber_0_Radio_TrainToTrack = 0,
  Radio_infill_request_OptionalPackageNumber_1_Radio_TrainToTrack = 1
} Radio_infill_request_OptionalPackets_Radio_TrainToTrack;
/* Radio_TrainToTrack::SoM_Position_Report_OptionalPackets */
typedef enum kcg_tag_SoM_Position_Report_OptionalPackets_Radio_TrainToTrack {
  SoM_Position_Report_OptionalPackageNumber_0_Radio_TrainToTrack = 0,
  SoM_Position_Report_OptionalPackageNumber_1_Radio_TrainToTrack = 1,
  SoM_Position_Report_OptionalPackageNumber_4_Radio_TrainToTrack = 4,
  SoM_Position_Report_OptionalPackageNumber_5_Radio_TrainToTrack = 5,
  SoM_Position_Report_OptionalPackageNumber_44_Radio_TrainToTrack = 44
} SoM_Position_Report_OptionalPackets_Radio_TrainToTrack;
/* Radio_TrainToTrack::Text_message_acknowledged_by_driver_OptionalPackets */
typedef enum kcg_tag_Text_message_acknowledged_by_driver_OptionalPackets_Radio_TrainToTrack {
  Text_message_acknowledged_by_driver_OptionalPackageNumber_0_Radio_TrainToTrack = 0,
  Text_message_acknowledged_by_driver_OptionalPackageNumber_1_Radio_TrainToTrack = 1
} Text_message_acknowledged_by_driver_OptionalPackets_Radio_TrainToTrack;
/* Radio_TrainToTrack::Session_Established_OptionalPackets */
typedef enum kcg_tag_Session_Established_OptionalPackets_Radio_TrainToTrack {
  Session_Established_OptionalPackageNumber_3_Radio_TrainToTrack = 3
} Session_Established_OptionalPackets_Radio_TrainToTrack;
/* Radio_TrackToTrain::SR_Authorisation_OptionalPackets */
typedef enum kcg_tag_SR_Authorisation_OptionalPackets_Radio_TrackToTrain {
  SR_Authorisation_OptionalPackageNumber_63_Radio_TrackToTrain = 63
} SR_Authorisation_OptionalPackets_Radio_TrackToTrain;
/* Radio_TrackToTrain::Movement_Authority_OptionalPackets */
typedef enum kcg_tag_Movement_Authority_OptionalPackets_Radio_TrackToTrain {
  Movement_Authority_OptionalPackageNumber_15_Radio_TrackToTrain = 15,
  Movement_Authority_OptionalPackageNumber_21_Radio_TrackToTrain = 21,
  Movement_Authority_OptionalPackageNumber_27_Radio_TrackToTrain = 27,
  Movement_Authority_OptionalPackageNumber_49_Radio_TrackToTrain = 49,
  Movement_Authority_OptionalPackageNumber_80_Radio_TrackToTrain = 80,
  Movement_Authority_OptionalPackageNumber_3_Radio_TrackToTrain = 3,
  Movement_Authority_OptionalPackageNumber_5_Radio_TrackToTrain = 5,
  Movement_Authority_OptionalPackageNumber_39_Radio_TrackToTrain = 39,
  Movement_Authority_OptionalPackageNumber_40_Radio_TrackToTrain = 40,
  Movement_Authority_OptionalPackageNumber_51_Radio_TrackToTrain = 51,
  Movement_Authority_OptionalPackageNumber_41_Radio_TrackToTrain = 41,
  Movement_Authority_OptionalPackageNumber_42_Radio_TrackToTrain = 42,
  Movement_Authority_OptionalPackageNumber_44_Radio_TrackToTrain = 44,
  Movement_Authority_OptionalPackageNumber_45_Radio_TrackToTrain = 45,
  Movement_Authority_OptionalPackageNumber_52_Radio_TrackToTrain = 52,
  Movement_Authority_OptionalPackageNumber_57_Radio_TrackToTrain = 57,
  Movement_Authority_OptionalPackageNumber_58_Radio_TrackToTrain = 58,
  Movement_Authority_OptionalPackageNumber_64_Radio_TrackToTrain = 64,
  Movement_Authority_OptionalPackageNumber_65_Radio_TrackToTrain = 65,
  Movement_Authority_OptionalPackageNumber_66_Radio_TrackToTrain = 66,
  Movement_Authority_OptionalPackageNumber_68_Radio_TrackToTrain = 68,
  Movement_Authority_OptionalPackageNumber_69_Radio_TrackToTrain = 69,
  Movement_Authority_OptionalPackageNumber_70_Radio_TrackToTrain = 70,
  Movement_Authority_OptionalPackageNumber_71_Radio_TrackToTrain = 71,
  Movement_Authority_OptionalPackageNumber_72_Radio_TrackToTrain = 72,
  Movement_Authority_OptionalPackageNumber_76_Radio_TrackToTrain = 76,
  Movement_Authority_OptionalPackageNumber_79_Radio_TrackToTrain = 79,
  Movement_Authority_OptionalPackageNumber_88_Radio_TrackToTrain = 88,
  Movement_Authority_OptionalPackageNumber_131_Radio_TrackToTrain = 131,
  Movement_Authority_OptionalPackageNumber_138_Radio_TrackToTrain = 138,
  Movement_Authority_OptionalPackageNumber_139_Radio_TrackToTrain = 139,
  Movement_Authority_OptionalPackageNumber_140_Radio_TrackToTrain = 140
} Movement_Authority_OptionalPackets_Radio_TrackToTrain;
/* Radio_TrackToTrain::Request_to_Shorten_MA_OptionalPackets */
typedef enum kcg_tag_Request_to_Shorten_MA_OptionalPackets_Radio_TrackToTrain {
  Request_to_Shorten_MA_OptionalPackageNumber_15_Radio_TrackToTrain = 15,
  Request_to_Shorten_MA_OptionalPackageNumber_80_Radio_TrackToTrain = 80
} Request_to_Shorten_MA_OptionalPackets_Radio_TrackToTrain;
/* Radio_TrackToTrain::General_message_OptionalPackets */
typedef enum kcg_tag_General_message_OptionalPackets_Radio_TrackToTrain {
  General_message_OptionalPackageNumber_21_Radio_TrackToTrain = 21,
  General_message_OptionalPackageNumber_27_Radio_TrackToTrain = 27,
  General_message_OptionalPackageNumber_45_Radio_TrackToTrain = 45,
  General_message_OptionalPackageNumber_143_Radio_TrackToTrain = 143,
  General_message_OptionalPackageNumber_254_Radio_TrackToTrain = 254,
  General_message_OptionalPackageNumber_3_Radio_TrackToTrain = 3,
  General_message_OptionalPackageNumber_5_Radio_TrackToTrain = 5,
  General_message_OptionalPackageNumber_39_Radio_TrackToTrain = 39,
  General_message_OptionalPackageNumber_40_Radio_TrackToTrain = 40,
  General_message_OptionalPackageNumber_51_Radio_TrackToTrain = 51,
  General_message_OptionalPackageNumber_41_Radio_TrackToTrain = 41,
  General_message_OptionalPackageNumber_42_Radio_TrackToTrain = 42,
  General_message_OptionalPackageNumber_44_Radio_TrackToTrain = 44,
  General_message_OptionalPackageNumber_52_Radio_TrackToTrain = 52,
  General_message_OptionalPackageNumber_57_Radio_TrackToTrain = 57,
  General_message_OptionalPackageNumber_58_Radio_TrackToTrain = 58,
  General_message_OptionalPackageNumber_64_Radio_TrackToTrain = 64,
  General_message_OptionalPackageNumber_65_Radio_TrackToTrain = 65,
  General_message_OptionalPackageNumber_66_Radio_TrackToTrain = 66,
  General_message_OptionalPackageNumber_68_Radio_TrackToTrain = 68,
  General_message_OptionalPackageNumber_69_Radio_TrackToTrain = 69,
  General_message_OptionalPackageNumber_70_Radio_TrackToTrain = 70,
  General_message_OptionalPackageNumber_71_Radio_TrackToTrain = 71,
  General_message_OptionalPackageNumber_72_Radio_TrackToTrain = 72,
  General_message_OptionalPackageNumber_76_Radio_TrackToTrain = 76,
  General_message_OptionalPackageNumber_79_Radio_TrackToTrain = 79,
  General_message_OptionalPackageNumber_88_Radio_TrackToTrain = 88,
  General_message_OptionalPackageNumber_131_Radio_TrackToTrain = 131,
  General_message_OptionalPackageNumber_138_Radio_TrackToTrain = 138,
  General_message_OptionalPackageNumber_139_Radio_TrackToTrain = 139,
  General_message_OptionalPackageNumber_140_Radio_TrackToTrain = 140
} General_message_OptionalPackets_Radio_TrackToTrain;
/* Radio_TrackToTrain::SH_Authorised_OptionalPackets */
typedef enum kcg_tag_SH_Authorised_OptionalPackets_Radio_TrackToTrain {
  SH_Authorised_OptionalPackageNumber_3_Radio_TrackToTrain = 3,
  SH_Authorised_OptionalPackageNumber_44_Radio_TrackToTrain = 44,
  SH_Authorised_OptionalPackageNumber_49_Radio_TrackToTrain = 49
} SH_Authorised_OptionalPackets_Radio_TrackToTrain;
/* Radio_TrackToTrain::MA_with_Shifted_Location_Reference_OptionalPackets */
typedef enum kcg_tag_MA_with_Shifted_Location_Reference_OptionalPackets_Radio_TrackToTrain {
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_15_Radio_TrackToTrain = 15,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_21_Radio_TrackToTrain = 21,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_27_Radio_TrackToTrain = 27,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_49_Radio_TrackToTrain = 49,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_80_Radio_TrackToTrain = 80,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_3_Radio_TrackToTrain = 3,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_5_Radio_TrackToTrain = 5,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_39_Radio_TrackToTrain = 39,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_40_Radio_TrackToTrain = 40,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_51_Radio_TrackToTrain = 51,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_41_Radio_TrackToTrain = 41,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_42_Radio_TrackToTrain = 42,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_44_Radio_TrackToTrain = 44,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_45_Radio_TrackToTrain = 45,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_52_Radio_TrackToTrain = 52,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_57_Radio_TrackToTrain = 57,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_58_Radio_TrackToTrain = 58,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_64_Radio_TrackToTrain = 64,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_65_Radio_TrackToTrain = 65,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_66_Radio_TrackToTrain = 66,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_68_Radio_TrackToTrain = 68,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_69_Radio_TrackToTrain = 69,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_70_Radio_TrackToTrain = 70,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_71_Radio_TrackToTrain = 71,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_72_Radio_TrackToTrain = 72,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_76_Radio_TrackToTrain = 76,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_79_Radio_TrackToTrain = 79,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_88_Radio_TrackToTrain = 88,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_131_Radio_TrackToTrain = 131,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_138_Radio_TrackToTrain = 138,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_139_Radio_TrackToTrain = 139,
  MA_with_Shifted_Location_Reference_OptionalPackageNumber_140_Radio_TrackToTrain = 140
} MA_with_Shifted_Location_Reference_OptionalPackets_Radio_TrackToTrain;
/* Radio_TrackToTrain::Infill_MA_OptionalPackets */
typedef enum kcg_tag_Infill_MA_OptionalPackets_Radio_TrackToTrain {
  Infill_MA_OptionalPackageNumber_136_Radio_TrackToTrain = 136,
  Infill_MA_OptionalPackageNumber_12_Radio_TrackToTrain = 12,
  Infill_MA_OptionalPackageNumber_5_Radio_TrackToTrain = 5,
  Infill_MA_OptionalPackageNumber_21_Radio_TrackToTrain = 21,
  Infill_MA_OptionalPackageNumber_27_Radio_TrackToTrain = 27,
  Infill_MA_OptionalPackageNumber_39_Radio_TrackToTrain = 39,
  Infill_MA_OptionalPackageNumber_40_Radio_TrackToTrain = 40,
  Infill_MA_OptionalPackageNumber_41_Radio_TrackToTrain = 41,
  Infill_MA_OptionalPackageNumber_44_Radio_TrackToTrain = 44,
  Infill_MA_OptionalPackageNumber_49_Radio_TrackToTrain = 49,
  Infill_MA_OptionalPackageNumber_51_Radio_TrackToTrain = 51,
  Infill_MA_OptionalPackageNumber_65_Radio_TrackToTrain = 65,
  Infill_MA_OptionalPackageNumber_66_Radio_TrackToTrain = 66,
  Infill_MA_OptionalPackageNumber_68_Radio_TrackToTrain = 68,
  Infill_MA_OptionalPackageNumber_69_Radio_TrackToTrain = 69,
  Infill_MA_OptionalPackageNumber_70_Radio_TrackToTrain = 70,
  Infill_MA_OptionalPackageNumber_71_Radio_TrackToTrain = 71,
  Infill_MA_OptionalPackageNumber_80_Radio_TrackToTrain = 80,
  Infill_MA_OptionalPackageNumber_88_Radio_TrackToTrain = 88,
  Infill_MA_OptionalPackageNumber_138_Radio_TrackToTrain = 138,
  Infill_MA_OptionalPackageNumber_139_Radio_TrackToTrain = 139
} Infill_MA_OptionalPackets_Radio_TrackToTrain;
/* Q_DLRBG */
typedef enum kcg_tag_Q_DLRBG {
  Q_DLRBG_Reverse = 0,
  Q_DLRBG_Nominal = 1,
  Q_DLRBG_Unknown = 2
} Q_DLRBG;
/* M_DUP */
typedef enum kcg_tag_M_DUP {
  M_DUP_No_duplicates = 0,
  M_DUP_This_balise_is_a_duplicate_of_the_next_balise = 1,
  M_DUP_This_balise_is_a_duplicate_of_the_previous_balise = 2
} M_DUP;
/* M_VERSION */
typedef enum kcg_tag_M_VERSION {
  M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS = 0,
  M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0 = 16,
  M_VERSION_Version_1_1_introduced_in_SRS_3_3_0 = 17,
  M_VERSION_Version_2_0_introduced_in_SRS_3_3_0 = 32
} M_VERSION;
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
/* Q_LINK */
typedef enum kcg_tag_Q_LINK { Q_LINK_Unlinked = 0, Q_LINK_Linked = 1 } Q_LINK;
/* Q_MEDIA */
typedef enum kcg_tag_Q_MEDIA { Q_MEDIA_Balise = 0, Q_MEDIA_Loop = 1 } Q_MEDIA;
/* Q_UPDOWN */
typedef enum kcg_tag_Q_UPDOWN {
  Q_UPDOWN_Down_link_telegram = 0,
  Q_UPDOWN_Up_link_telegram = 1
} Q_UPDOWN;
/* Q_DIR */
typedef enum kcg_tag_Q_DIR {
  Q_DIR_Reverse = 0,
  Q_DIR_Nominal = 1,
  Q_DIR_Both_directions = 2
} Q_DIR;
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
/* Q_NEWCOUNTRY */
typedef enum kcg_tag_Q_NEWCOUNTRY {
  Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows = 0,
  Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows = 1
} Q_NEWCOUNTRY;
/* Q_SCALE */
typedef enum kcg_tag_Q_SCALE {
  Q_SCALE_10_cm_scale = 0,
  Q_SCALE_1_m_scale = 1,
  Q_SCALE_10_m_scale = 2
} Q_SCALE;
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
/* BG_Types_Pkg::TrainInfo_T */
typedef struct kcg_tag_TrainInfo_T_BG_Types_Pkg {
  M_LEVELTR m_leveltr;
  M_MODE m_mode;
} TrainInfo_T_BG_Types_Pkg;

/* A_NVMAXREDADH1 */
typedef kcg_real A_NVMAXREDADH1;

/* A_NVMAXREDADH2 */
typedef kcg_real A_NVMAXREDADH2;

/* A_NVMAXREDADH3 */
typedef kcg_real A_NVMAXREDADH3;

/* A_NVP12 */
typedef kcg_real A_NVP12;

/* A_NVP23 */
typedef kcg_real A_NVP23;

/* M_NVAVADH */
typedef kcg_real M_NVAVADH;

/* M_NVKRINT */
typedef kcg_real M_NVKRINT;

/* M_NVKTINT */
typedef kcg_real M_NVKTINT;

/* M_NVKVINT */
typedef kcg_real M_NVKVINT;

/* T_TRAIN */
typedef kcg_real T_TRAIN;

/* TrainPosition_Types_Pck::positionErrors_T */
typedef struct kcg_tag_positionErrors_T_TrainPosition_Types_Pck {
  kcg_bool outOfMemSpace;
  kcg_bool passedBG_notFoundWhereExpected;
  kcg_bool positionCalculation_inconsistent;
} positionErrors_T_TrainPosition_Types_Pck;

/* lut::LutIndex */
typedef struct kcg_tag_LutIndex_lut { kcg_int k; kcg_real f; } LutIndex_lut;

/* Obu_BasicTypes_Pkg::L_internal_Type */
typedef kcg_int L_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::LocWithInAcc_T */
typedef struct kcg_tag_LocWithInAcc_T_Obu_BasicTypes_Pkg {
  L_internal_Type_Obu_BasicTypes_Pkg nominal;
  L_internal_Type_Obu_BasicTypes_Pkg d_min;
  L_internal_Type_Obu_BasicTypes_Pkg d_max;
} LocWithInAcc_T_Obu_BasicTypes_Pkg;

/* TrainPosition_Types_Pck::trainProperties_T */
typedef struct kcg_tag_trainProperties_T_TrainPosition_Types_Pck {
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_baliseAntenna_2_frontend;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_frontend_2_rearend;
} trainProperties_T_TrainPosition_Types_Pck;

/* Obu_BasicTypes_Pkg::OdometryLocations_T */
typedef struct kcg_tag_OdometryLocations_T_Obu_BasicTypes_Pkg {
  L_internal_Type_Obu_BasicTypes_Pkg o_nominal;
  L_internal_Type_Obu_BasicTypes_Pkg o_min;
  L_internal_Type_Obu_BasicTypes_Pkg o_max;
} OdometryLocations_T_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::T_internal_Type */
typedef kcg_int T_internal_Type_Obu_BasicTypes_Pkg;

/* BG_Types_Pkg::centerOfBalisePosition_T */
typedef struct kcg_tag_centerOfBalisePosition_T_BG_Types_Pkg {
  OdometryLocations_T_Obu_BasicTypes_Pkg centerOfBalisePosition;
  LocWithInAcc_T_Obu_BasicTypes_Pkg BG_centerDetectionInaccuraccuracies;
  T_internal_Type_Obu_BasicTypes_Pkg timestamp;
} centerOfBalisePosition_T_BG_Types_Pkg;

/* Obu_BasicTypes_Pkg::V_internal_Type */
typedef kcg_int V_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::G_internal_Type */
typedef kcg_int G_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::A_internal_Type */
typedef kcg_int A_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::Location_T */
typedef kcg_int Location_T_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::Speed_T */
typedef kcg_int Speed_T_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::odometry_T */
typedef struct kcg_tag_odometry_T_Obu_BasicTypes_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg timestamp;
  OdometryLocations_T_Obu_BasicTypes_Pkg odo;
  Speed_T_Obu_BasicTypes_Pkg speed;
} odometry_T_Obu_BasicTypes_Pkg;

/* BG_Types_Pkg::Position_T */
typedef kcg_int Position_T_BG_Types_Pkg;

/* D_ADHESION */
typedef kcg_int D_ADHESION;

/* D_AXLELOAD */
typedef kcg_int D_AXLELOAD;

/* D_CURRENT */
typedef kcg_int D_CURRENT;

/* D_CYCLOC */
typedef kcg_int D_CYCLOC;

/* D_DP */
typedef kcg_int D_DP;

/* D_EMERGENCYSTOP */
typedef kcg_int D_EMERGENCYSTOP;

/* D_ENDTIMERSTARTLOC */
typedef kcg_int D_ENDTIMERSTARTLOC;

/* D_GRADIENT */
typedef kcg_int D_GRADIENT;

/* D_INFILL */
typedef kcg_int D_INFILL;

/* D_LEVELTR */
typedef kcg_int D_LEVELTR;

/* D_LINK */
typedef kcg_int D_LINK;

/* D_LOC */
typedef kcg_int D_LOC;

/* D_LOOP */
typedef kcg_int D_LOOP;

/* D_LRBG */
typedef kcg_int D_LRBG;

/* D_LX */
typedef kcg_int D_LX;

/* D_MAMODE */
typedef kcg_int D_MAMODE;

/* D_NVOVTRP */
typedef kcg_int D_NVOVTRP;

/* D_NVPOTRP */
typedef kcg_int D_NVPOTRP;

/* D_NVROLL */
typedef kcg_int D_NVROLL;

/* D_NVSTFF */
typedef kcg_int D_NVSTFF;

/* D_OL */
typedef kcg_int D_OL;

/* D_PBD */
typedef kcg_int D_PBD;

/* D_PBDSR */
typedef kcg_int D_PBDSR;

/* D_POSOFF */
typedef kcg_int D_POSOFF;

/* D_RBCTR */
typedef kcg_int D_RBCTR;

/* D_REF */
typedef kcg_int D_REF;

/* D_REVERSE */
typedef kcg_int D_REVERSE;

/* D_SECTIONTIMERSTOPLOC */
typedef kcg_int D_SECTIONTIMERSTOPLOC;

/* D_SR */
typedef kcg_int D_SR;

/* D_STARTOL */
typedef kcg_int D_STARTOL;

/* D_STARTREVERSE */
typedef kcg_int D_STARTREVERSE;

/* D_STATIC */
typedef kcg_int D_STATIC;

/* D_SUITABILITY */
typedef kcg_int D_SUITABILITY;

/* D_TAFDISPLAY */
typedef kcg_int D_TAFDISPLAY;

/* D_TEXTDISPLAY */
typedef kcg_int D_TEXTDISPLAY;

/* D_TRACKINIT */
typedef kcg_int D_TRACKINIT;

/* D_TRACKCOND */
typedef kcg_int D_TRACKCOND;

/* D_TRACTION */
typedef kcg_int D_TRACTION;

/* D_TSR */
typedef kcg_int D_TSR;

/* D_VALIDNV */
typedef kcg_int D_VALIDNV;

/* G_A */
typedef kcg_int G_A;

/* G_PBDSR */
typedef kcg_int G_PBDSR;

/* G_TSR */
typedef kcg_int G_TSR;

/* L_ACKLEVELTR */
typedef kcg_int L_ACKLEVELTR;

/* L_ACKMAMODE */
typedef kcg_int L_ACKMAMODE;

/* L_ADHESION */
typedef kcg_int L_ADHESION;

/* L_AXLELOAD */
typedef kcg_int L_AXLELOAD;

/* L_DOUBTOVER */
typedef kcg_int L_DOUBTOVER;

/* L_DOUBTUNDER */
typedef kcg_int L_DOUBTUNDER;

/* L_ENDSECTION */
typedef kcg_int L_ENDSECTION;

/* L_LOOP */
typedef kcg_int L_LOOP;

/* L_LX */
typedef kcg_int L_LX;

/* L_MAMODE */
typedef kcg_int L_MAMODE;

/* L_MESSAGE */
typedef kcg_int L_MESSAGE;

/* L_PACKET */
typedef kcg_int L_PACKET;

/* L_PBDSR */
typedef kcg_int L_PBDSR;

/* L_REVERSEAREA */
typedef kcg_int L_REVERSEAREA;

/* L_SECTION */
typedef kcg_int L_SECTION;

/* L_STOPLX */
typedef kcg_int L_STOPLX;

/* L_TAFDISPLAY */
typedef kcg_int L_TAFDISPLAY;

/* L_TEXT */
typedef kcg_int L_TEXT;

/* L_TEXTDISPLAY */
typedef kcg_int L_TEXTDISPLAY;

/* L_TRACKCOND */
typedef kcg_int L_TRACKCOND;

/* L_TRAIN */
typedef kcg_int L_TRAIN;

/* L_TRAININT */
typedef kcg_int L_TRAININT;

/* L_TSR */
typedef kcg_int L_TSR;

/* M_CURRENT */
typedef kcg_int M_CURRENT;

/* M_MCOUNT */
typedef kcg_int M_MCOUNT;

/* M_POSITION */
typedef kcg_int M_POSITION;

/* N_AXLE */
typedef kcg_int N_AXLE;

/* N_ITER */
typedef kcg_int N_ITER;

/* NC_DIFF */
typedef kcg_int NC_DIFF;

/* NID_BG */
typedef kcg_int NID_BG;

/* NID_C */
typedef kcg_int NID_C;

/* NID_CTRACTION */
typedef kcg_int NID_CTRACTION;

/* NID_EM */
typedef kcg_int NID_EM;

/* NID_ENGINE */
typedef kcg_int NID_ENGINE;

/* NID_LOOP */
typedef kcg_int NID_LOOP;

/* NID_LRBG */
typedef kcg_int NID_LRBG;

/* NID_LTRBG */
typedef kcg_int NID_LTRBG;

/* NID_LX */
typedef kcg_int NID_LX;

/* NID_MESSAGE */
typedef kcg_int NID_MESSAGE;

/* NID_MN */
typedef kcg_int NID_MN;

/* NID_OPERATIONAL */
typedef kcg_int NID_OPERATIONAL;

/* NID_PACKET */
typedef kcg_int NID_PACKET;

/* NID_PRVLRBG */
typedef kcg_int NID_PRVLRBG;

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
  NID_BG nid_LRBG;
  NID_PRVLRBG nid_PrvLRB;
  Q_DLRBG nominalOrReverseToLRBG;
  Q_DIRLRBG trainOrientationToLRBG;
  Q_DIRTRAIN trainRunningDirectionToLRBG;
  Speed_T_Obu_BasicTypes_Pkg speed;
} trainPosition_T_TrainPosition_Types_Pck;

/* NID_RADIO */
typedef kcg_int NID_RADIO;

/* NID_RBC */
typedef kcg_int NID_RBC;

/* NID_RIU */
typedef kcg_int NID_RIU;

/* NID_NTC */
typedef kcg_int NID_NTC;

/* NID_TEXTMESSAGE */
typedef kcg_int NID_TEXTMESSAGE;

/* NID_TSR */
typedef kcg_int NID_TSR;

/* NID_VBCMK */
typedef kcg_int NID_VBCMK;

/* NID_XUSER */
typedef kcg_int NID_XUSER;

/* Q_LOCACC */
typedef kcg_int Q_LOCACC;

/* BG_Types_Pkg::LinkedBG_T */
typedef struct kcg_tag_LinkedBG_T_BG_Types_Pkg {
  kcg_bool valid;
  NID_LRBG nid_LRBG;
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  L_PACKET l_packet;
  Q_SCALE q_scale;
  D_LINK d_link;
  Q_NEWCOUNTRY q_newcountry;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINKORIENTATION q_linkorientation;
  Q_LINKREACTION q_linkreaction;
  Q_LOCACC q_locacc;
} LinkedBG_T_BG_Types_Pkg;

/* TrainPosition_Types_Pck::infoFromLinking_T */
typedef struct kcg_tag_infoFromLinking_T_TrainPosition_Types_Pck {
  kcg_bool valid;
  NID_BG nid_bg_fromLinkingBG;
  NID_C nid_c_fromLinkingBG;
  LocWithInAcc_T_Obu_BasicTypes_Pkg expectedLocation;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_link;
  LinkedBG_T_BG_Types_Pkg linkingInfo;
} infoFromLinking_T_TrainPosition_Types_Pck;

/* BG_Types_Pkg::LinkedBGs_T */
typedef LinkedBG_T_BG_Types_Pkg LinkedBGs_T_BG_Types_Pkg[32];

/* BG_Types_Pkg::AdditionalInformation_T */
typedef struct kcg_tag_AdditionalInformation_T_BG_Types_Pkg {
  kcg_int addInfo;
  LinkedBGs_T_BG_Types_Pkg linkingPackets;
} AdditionalInformation_T_BG_Types_Pkg;

/* Q_NVLOCACC */
typedef kcg_int Q_NVLOCACC;

/* Q_SSCODE */
typedef kcg_int Q_SSCODE;

/* T_CYCLOC */
typedef kcg_int T_CYCLOC;

/* T_CYCRQST */
typedef kcg_int T_CYCRQST;

/* T_ENDTIMER */
typedef kcg_int T_ENDTIMER;

/* T_LOA */
typedef kcg_int T_LOA;

/* T_MAR */
typedef kcg_int T_MAR;

/* T_NVCONTACT */
typedef kcg_int T_NVCONTACT;

/* T_NVOVTRP */
typedef kcg_int T_NVOVTRP;

/* T_OL */
typedef kcg_int T_OL;

/* T_SECTIONTIMER */
typedef kcg_int T_SECTIONTIMER;

/* T_TEXTDISPLAY */
typedef kcg_int T_TEXTDISPLAY;

/* T_TIMEOUTRQST */
typedef kcg_int T_TIMEOUTRQST;

/* T_VBC */
typedef kcg_int T_VBC;

/* V_AXLELOAD */
typedef kcg_int V_AXLELOAD;

/* V_DIFF */
typedef kcg_int V_DIFF;

/* V_LOA */
typedef kcg_int V_LOA;

/* V_LX */
typedef kcg_int V_LX;

/* V_MAIN */
typedef kcg_int V_MAIN;

/* V_MAMODE */
typedef kcg_int V_MAMODE;

/* V_MAXTRAIN */
typedef kcg_int V_MAXTRAIN;

/* V_NVALLOWOVTRP */
typedef kcg_int V_NVALLOWOVTRP;

/* V_NVKVINT */
typedef kcg_int V_NVKVINT;

/* V_NVLIMSUPERV */
typedef kcg_int V_NVLIMSUPERV;

/* V_NVONSIGHT */
typedef kcg_int V_NVONSIGHT;

/* V_NVSUPOVTRP */
typedef kcg_int V_NVSUPOVTRP;

/* V_NVREL */
typedef kcg_int V_NVREL;

/* V_NVSHUNT */
typedef kcg_int V_NVSHUNT;

/* V_NVSTFF */
typedef kcg_int V_NVSTFF;

/* V_NVUNFIT */
typedef kcg_int V_NVUNFIT;

/* V_RELEASEDP */
typedef kcg_int V_RELEASEDP;

/* V_RELEASEOL */
typedef kcg_int V_RELEASEOL;

/* V_REVERSE */
typedef kcg_int V_REVERSE;

/* V_STATIC */
typedef kcg_int V_STATIC;

/* V_TRAIN */
typedef kcg_int V_TRAIN;

/* V_TSR */
typedef kcg_int V_TSR;

/* X_TEXT */
typedef kcg_int X_TEXT;

/* TrackToTrain::Virtual_Balise_Cover_marker */
typedef struct kcg_tag_Virtual_Balise_Cover_marker_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int NID_VBCMK;
} Virtual_Balise_Cover_marker_TrackToTrain;

/* TrackToTrain::System_Version_order */
typedef struct kcg_tag_System_Version_order_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int M_VERSION;
} System_Version_order_TrackToTrain;

/* TrackToTrain::Var30 */
typedef struct kcg_tag_Var30_TrackToTrain { kcg_int NID_C; } Var30_TrackToTrain;

/* TrackToTrain::AVar30 */
typedef Var30_TrackToTrain AVar30_TrackToTrain[33];

/* TrackToTrain::SVar30 */
typedef struct kcg_tag_SVar30_TrackToTrain {
  kcg_int N_ITER;
  AVar30_TrackToTrain Array;
} SVar30_TrackToTrain;

/* TrackToTrain::Var34 */
typedef struct kcg_tag_Var34_TrackToTrain {
  kcg_int L_NVKRINT;
  kcg_real M_NVKRINT;
} Var34_TrackToTrain;

/* TrackToTrain::AVar34 */
typedef Var34_TrackToTrain AVar34_TrackToTrain[33];

/* TrackToTrain::SVar34 */
typedef struct kcg_tag_SVar34_TrackToTrain {
  kcg_int N_ITER;
  AVar34_TrackToTrain Array;
} SVar34_TrackToTrain;

/* TrackToTrain::Var50 */
typedef struct kcg_tag_Var50_TrackToTrain {
  kcg_int D_LINK;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_LINKORIENTATION;
  kcg_int Q_LINKREACTION;
  kcg_int Q_LOCACC;
} Var50_TrackToTrain;

/* TrackToTrain::AVar50 */
typedef Var50_TrackToTrain AVar50_TrackToTrain[33];

/* TrackToTrain::SVar50 */
typedef struct kcg_tag_SVar50_TrackToTrain {
  kcg_int N_ITER;
  AVar50_TrackToTrain Array;
} SVar50_TrackToTrain;

/* TrackToTrain::Linking */
typedef struct kcg_tag_Linking_TrackToTrain {
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
  SVar50_TrackToTrain Struct5;
} Linking_TrackToTrain;

/* TrackToTrain::Virtual_Balise_Cover_order */
typedef struct kcg_tag_Virtual_Balise_Cover_order_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_VBCO;
  kcg_int NID_VBCMK;
  kcg_int NID_C;
  kcg_int T_VBC;
} Virtual_Balise_Cover_order_TrackToTrain;

/* TrackToTrain::Var130 */
typedef struct kcg_tag_Var130_TrackToTrain {
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int D_SR;
} Var130_TrackToTrain;

/* TrackToTrain::AVar130 */
typedef Var130_TrackToTrain AVar130_TrackToTrain[33];

/* TrackToTrain::SVar130 */
typedef struct kcg_tag_SVar130_TrackToTrain {
  kcg_int N_ITER;
  AVar130_TrackToTrain Array;
} SVar130_TrackToTrain;

/* TrackToTrain::Repositioning_Information */
typedef struct kcg_tag_Repositioning_Information_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int L_SECTION;
} Repositioning_Information_TrackToTrain;

/* TrackToTrain::Var210 */
typedef struct kcg_tag_Var210_TrackToTrain {
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
} Var210_TrackToTrain;

/* TrackToTrain::AVar210 */
typedef Var210_TrackToTrain AVar210_TrackToTrain[33];

/* TrackToTrain::SVar210 */
typedef struct kcg_tag_SVar210_TrackToTrain {
  kcg_int N_ITER;
  AVar210_TrackToTrain Array;
} SVar210_TrackToTrain;

/* TrackToTrain::Gradient_Profile */
typedef struct kcg_tag_Gradient_Profile_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
  SVar210_TrackToTrain Struct15;
} Gradient_Profile_TrackToTrain;

/* TrackToTrain::Track_Condition_Change_of_traction_system */
typedef struct kcg_tag_Track_Condition_Change_of_traction_system_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_TRACTION;
  kcg_int M_VOLTAGE;
  kcg_int NID_CTRACTION;
} Track_Condition_Change_of_traction_system_TrackToTrain;

/* TrackToTrain::Track_Condition_Change_of_allowed_current_consumption */
typedef struct kcg_tag_Track_Condition_Change_of_allowed_current_consumption_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_CURRENT;
  kcg_int M_CURRENT;
} Track_Condition_Change_of_allowed_current_consumption_TrackToTrain;

/* TrackToTrain::Var410 */
typedef struct kcg_tag_Var410_TrackToTrain {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
} Var410_TrackToTrain;

/* TrackToTrain::AVar410 */
typedef Var410_TrackToTrain AVar410_TrackToTrain[33];

/* TrackToTrain::SVar410 */
typedef struct kcg_tag_SVar410_TrackToTrain {
  kcg_int N_ITER;
  AVar410_TrackToTrain Array;
} SVar410_TrackToTrain;

/* TrackToTrain::Level_Transition_Order */
typedef struct kcg_tag_Level_Transition_Order_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_LEVELTR;
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
  SVar410_TrackToTrain Struct19;
} Level_Transition_Order_TrackToTrain;

/* TrackToTrain::Session_Management */
typedef struct kcg_tag_Session_Management_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_RBC;
  kcg_int NID_C;
  kcg_int NID_RBC;
  kcg_int NID_RADIO;
  kcg_int Q_SLEEPSESSION;
} Session_Management_TrackToTrain;

/* TrackToTrain::Data_used_by_applications_outside_the_ERTMSETCS_system */
typedef struct kcg_tag_Data_used_by_applications_outside_the_ERTMSETCS_system_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_XUSER;
  kcg_int NID_NTC;
  kcg_int Other_data_depending_on__NID_XUSER;
} Data_used_by_applications_outside_the_ERTMSETCS_system_TrackToTrain;

/* TrackToTrain::Radio_Network_registration */
typedef struct kcg_tag_Radio_Network_registration_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_MN;
} Radio_Network_registration_TrackToTrain;

/* TrackToTrain::Var460 */
typedef struct kcg_tag_Var460_TrackToTrain {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
} Var460_TrackToTrain;

/* TrackToTrain::AVar460 */
typedef Var460_TrackToTrain AVar460_TrackToTrain[33];

/* TrackToTrain::SVar460 */
typedef struct kcg_tag_SVar460_TrackToTrain {
  kcg_int N_ITER;
  AVar460_TrackToTrain Array;
} SVar460_TrackToTrain;

/* TrackToTrain::Conditional_Level_Transition_Order */
typedef struct kcg_tag_Conditional_Level_Transition_Order_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  SVar460_TrackToTrain Struct20;
} Conditional_Level_Transition_Order_TrackToTrain;

/* TrackToTrain::Var520 */
typedef struct kcg_tag_Var520_TrackToTrain {
  kcg_int D_PBD;
  kcg_int Q_GDIR;
  kcg_int G_PBDSR;
  kcg_int Q_PBDSR;
  kcg_int D_PBDSR;
  kcg_int L_PBDSR;
} Var520_TrackToTrain;

/* TrackToTrain::AVar520 */
typedef Var520_TrackToTrain AVar520_TrackToTrain[33];

/* TrackToTrain::SVar520 */
typedef struct kcg_tag_SVar520_TrackToTrain {
  kcg_int N_ITER;
  AVar520_TrackToTrain Array;
} SVar520_TrackToTrain;

/* TrackToTrain::Permitted_Braking_Distance_Information */
typedef struct kcg_tag_Permitted_Braking_Distance_Information_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int Q_TRACKINIT;
  kcg_int D_TRACKINIT;
  kcg_int D_PBD;
  kcg_int Q_GDIR;
  kcg_int G_PBDSR;
  kcg_int Q_PBDSR;
  kcg_int D_PBDSR;
  kcg_int L_PBDSR;
  SVar520_TrackToTrain Struct25;
} Permitted_Braking_Distance_Information_TrackToTrain;

/* TrackToTrain::Movement_Authority_Request_Parameters */
typedef struct kcg_tag_Movement_Authority_Request_Parameters_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int T_MAR;
  kcg_int T_TIMEOUTRQST;
  kcg_int T_CYCRQST;
} Movement_Authority_Request_Parameters_TrackToTrain;

/* TrackToTrain::Var580 */
typedef struct kcg_tag_Var580_TrackToTrain {
  kcg_int D_LOC;
  Q_LGTLOC q_lgtloc;
} Var580_TrackToTrain;

/* TrackToTrain::AVar580 */
typedef Var580_TrackToTrain AVar580_TrackToTrain[33];

/* TrackToTrain::SVar580 */
typedef struct kcg_tag_SVar580_TrackToTrain {
  kcg_int N_ITER;
  AVar580_TrackToTrain Array;
} SVar580_TrackToTrain;

/* TrackToTrain::Position_Report_Parameters */
typedef struct kcg_tag_Position_Report_Parameters_TrackToTrain {
  kcg_int NID_PACKET;
  Q_DIR q_dir;
  kcg_int L_PACKET;
  Q_SCALE q_scale;
  kcg_int T_CYCLOC;
  kcg_int D_CYCLOC;
  M_LOC m_loc;
  SVar580_TrackToTrain Struct26;
} Position_Report_Parameters_TrackToTrain;

/* TrackToTrain::Temporary_Speed_Restriction */
typedef struct kcg_tag_Temporary_Speed_Restriction_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int NID_TSR;
  kcg_int D_TSR;
  kcg_int L_TSR;
  kcg_int Q_FRONT;
  kcg_int V_TSR;
} Temporary_Speed_Restriction_TrackToTrain;

/* TrackToTrain::Temporary_Speed_Restriction_Revocation */
typedef struct kcg_tag_Temporary_Speed_Restriction_Revocation_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_TSR;
} Temporary_Speed_Restriction_Revocation_TrackToTrain;

/* TrackToTrain::Var670 */
typedef struct kcg_tag_Var670_TrackToTrain {
  kcg_int D_TRACKCOND;
  kcg_int L_TRACKCOND;
} Var670_TrackToTrain;

/* TrackToTrain::AVar670 */
typedef Var670_TrackToTrain AVar670_TrackToTrain[33];

/* TrackToTrain::SVar670 */
typedef struct kcg_tag_SVar670_TrackToTrain {
  kcg_int N_ITER;
  AVar670_TrackToTrain Array;
} SVar670_TrackToTrain;

/* TrackToTrain::Track_Condition_Big_Metal_Masses */
typedef struct kcg_tag_Track_Condition_Big_Metal_Masses_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_TRACKCOND;
  kcg_int L_TRACKCOND;
  SVar670_TrackToTrain Struct28;
} Track_Condition_Big_Metal_Masses_TrackToTrain;

/* TrackToTrain::Var680 */
typedef struct kcg_tag_Var680_TrackToTrain {
  kcg_int D_TRACKCOND;
  kcg_int L_TRACKCOND;
  kcg_int M_TRACKCOND;
} Var680_TrackToTrain;

/* TrackToTrain::AVar680 */
typedef Var680_TrackToTrain AVar680_TrackToTrain[33];

/* TrackToTrain::SVar680 */
typedef struct kcg_tag_SVar680_TrackToTrain {
  kcg_int N_ITER;
  AVar680_TrackToTrain Array;
} SVar680_TrackToTrain;

/* TrackToTrain::Track_Condition */
typedef struct kcg_tag_Track_Condition_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int Q_TRACKINIT;
  kcg_int D_TRACKINIT;
  kcg_int D_TRACKCOND;
  kcg_int L_TRACKCOND;
  kcg_int M_TRACKCOND;
  SVar680_TrackToTrain Struct29;
} Track_Condition_TrackToTrain;

/* TrackToTrain::Var690 */
typedef struct kcg_tag_Var690_TrackToTrain {
  kcg_int D_TRACKCOND;
  kcg_int L_TRACKCOND;
  kcg_int M_PLATFORM;
  kcg_int Q_PLATFORM;
} Var690_TrackToTrain;

/* TrackToTrain::AVar690 */
typedef Var690_TrackToTrain AVar690_TrackToTrain[33];

/* TrackToTrain::SVar690 */
typedef struct kcg_tag_SVar690_TrackToTrain {
  kcg_int N_ITER;
  AVar690_TrackToTrain Array;
} SVar690_TrackToTrain;

/* TrackToTrain::Track_Condition_Station_Platforms */
typedef struct kcg_tag_Track_Condition_Station_Platforms_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int Q_TRACKINIT;
  kcg_int D_TRACKINIT;
  kcg_int D_TRACKCOND;
  kcg_int L_TRACKCOND;
  kcg_int M_PLATFORM;
  kcg_int Q_PLATFORM;
  SVar690_TrackToTrain Struct30;
} Track_Condition_Station_Platforms_TrackToTrain;

/* TrackToTrain::Var700 */
typedef struct kcg_tag_Var700_TrackToTrain {
  kcg_int D_SUITABILITY;
  kcg_int Q_SUITABILITY;
  kcg_int M_LINEGAUGE;
  kcg_int M_AXLELOADCAT;
  kcg_int M_VOLTAGE;
  kcg_int NID_CTRACTION;
} Var700_TrackToTrain;

/* TrackToTrain::AVar700 */
typedef Var700_TrackToTrain AVar700_TrackToTrain[33];

/* TrackToTrain::SVar700 */
typedef struct kcg_tag_SVar700_TrackToTrain {
  kcg_int N_ITER;
  AVar700_TrackToTrain Array;
} SVar700_TrackToTrain;

/* TrackToTrain::Route_Suitability_Data */
typedef struct kcg_tag_Route_Suitability_Data_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int Q_TRACKINIT;
  kcg_int D_TRACKINIT;
  kcg_int D_SUITABILITY;
  kcg_int Q_SUITABILITY;
  kcg_int M_LINEGAUGE;
  kcg_int M_AXLELOADCAT;
  kcg_int M_VOLTAGE;
  kcg_int NID_CTRACTION;
  SVar700_TrackToTrain Struct31;
} Route_Suitability_Data_TrackToTrain;

/* TrackToTrain::Adhesion_factor */
typedef struct kcg_tag_Adhesion_factor_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_ADHESION;
  kcg_int L_ADHESION;
  kcg_int M_ADHESION;
} Adhesion_factor_TrackToTrain;

/* TrackToTrain::Var790 */
typedef struct kcg_tag_Var790_TrackToTrain {
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int D_POSOFF;
  kcg_int Q_MPOSITION;
  kcg_int M_POSITION;
} Var790_TrackToTrain;

/* TrackToTrain::AVar790 */
typedef Var790_TrackToTrain AVar790_TrackToTrain[33];

/* TrackToTrain::SVar790 */
typedef struct kcg_tag_SVar790_TrackToTrain {
  kcg_int N_ITER;
  AVar790_TrackToTrain Array;
} SVar790_TrackToTrain;

/* TrackToTrain::Geographical_Position_Information */
typedef struct kcg_tag_Geographical_Position_Information_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int D_POSOFF;
  kcg_int Q_MPOSITION;
  kcg_int M_POSITION;
  SVar790_TrackToTrain Struct44;
} Geographical_Position_Information_TrackToTrain;

/* TrackToTrain::Var800 */
typedef struct kcg_tag_Var800_TrackToTrain {
  kcg_int D_MAMODE;
  kcg_int M_MAMODE;
  kcg_int V_MAMODE;
  kcg_int L_MAMODE;
  kcg_int L_ACKMAMODE;
  kcg_int Q_MAMODE;
} Var800_TrackToTrain;

/* TrackToTrain::AVar800 */
typedef Var800_TrackToTrain AVar800_TrackToTrain[33];

/* TrackToTrain::SVar800 */
typedef struct kcg_tag_SVar800_TrackToTrain {
  kcg_int N_ITER;
  AVar800_TrackToTrain Array;
} SVar800_TrackToTrain;

/* TrackToTrain::Mode_profile */
typedef struct kcg_tag_Mode_profile_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_MAMODE;
  kcg_int M_MAMODE;
  kcg_int V_MAMODE;
  kcg_int L_MAMODE;
  kcg_int L_ACKMAMODE;
  kcg_int Q_MAMODE;
  SVar800_TrackToTrain Struct45;
} Mode_profile_TrackToTrain;

/* TrackToTrain::Level_Crossing_information */
typedef struct kcg_tag_Level_Crossing_information_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int NID_LX;
  kcg_int D_LX;
  kcg_int L_LX;
  kcg_int Q_LXSTATUS;
  kcg_int V_LX;
  kcg_int Q_STOPLX;
  kcg_int L_STOPLX;
} Level_Crossing_information_TrackToTrain;

/* TrackToTrain::RBC_transition_order */
typedef struct kcg_tag_RBC_transition_order_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_RBCTR;
  kcg_int NID_C;
  kcg_int NID_RBC;
  kcg_int NID_RADIO;
  kcg_int Q_SLEEPSESSION;
} RBC_transition_order_TrackToTrain;

/* TrackToTrain::Danger_for_Shunting_information */
typedef struct kcg_tag_Danger_for_Shunting_information_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_ASPECT;
} Danger_for_Shunting_information_TrackToTrain;

/* TrackToTrain::Radio_infill_area_information */
typedef struct kcg_tag_Radio_infill_area_information_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int Q_RIU;
  kcg_int NID_C;
  kcg_int NID_RIU;
  kcg_int NID_RADIO;
  kcg_int D_INFILL;
  kcg_int NID_BG;
} Radio_infill_area_information_TrackToTrain;

/* TrackToTrain::EOLM_Packet */
typedef struct kcg_tag_EOLM_Packet_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int NID_LOOP;
  kcg_int D_LOOP;
  kcg_int L_LOOP;
  kcg_int Q_LOOPDIR;
  kcg_int Q_SSCODE;
} EOLM_Packet_TrackToTrain;

/* TrackToTrain::Stop_if_in_Staff_Responsible */
typedef struct kcg_tag_Stop_if_in_Staff_Responsible_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SRSTOP;
} Stop_if_in_Staff_Responsible_TrackToTrain;

/* TrackToTrain::Reversing_area_information */
typedef struct kcg_tag_Reversing_area_information_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_STARTREVERSE;
  kcg_int L_REVERSEAREA;
} Reversing_area_information_TrackToTrain;

/* TrackToTrain::Reversing_supervision_information */
typedef struct kcg_tag_Reversing_supervision_information_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_REVERSE;
  kcg_int V_REVERSE;
} Reversing_supervision_information_TrackToTrain;

/* TrackToTrain::Train_running_number_from_RBC */
typedef struct kcg_tag_Train_running_number_from_RBC_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_OPERATIONAL;
} Train_running_number_from_RBC_TrackToTrain;

/* TrackToTrain::Default_Gradient_for_Temporary_Speed_Restriction */
typedef struct kcg_tag_Default_Gradient_for_Temporary_Speed_Restriction_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_GDIR;
  kcg_int G_TSR;
} Default_Gradient_for_Temporary_Speed_Restriction_TrackToTrain;

/* TrackToTrain::Session_Management_with_neighbouring_Radio_Infill_Unit */
typedef struct kcg_tag_Session_Management_with_neighbouring_Radio_Infill_Unit_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_RIU;
  kcg_int NID_C;
  kcg_int NID_RIU;
  kcg_int NID_RADIO;
} Session_Management_with_neighbouring_Radio_Infill_Unit_TrackToTrain;

/* TrainToTrack::Position_Report */
typedef struct kcg_tag_Position_Report_TrainToTrack {
  kcg_int NID_PACKET;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
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

/* TrainToTrack::Position_Report_based_on_two_balise_groups */
typedef struct kcg_tag_Position_Report_based_on_two_balise_groups_TrainToTrack {
  kcg_int NID_PACKET;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
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

/* TrainToTrack::Var30 */
typedef struct kcg_tag_Var30_TrainToTrack {
  kcg_int NID_RADIO;
} Var30_TrainToTrack;

/* TrainToTrack::AVar30 */
typedef Var30_TrainToTrack AVar30_TrainToTrack[33];

/* TrainToTrack::SVar30 */
typedef struct kcg_tag_SVar30_TrainToTrack {
  kcg_int N_ITER;
  AVar30_TrainToTrack Array;
} SVar30_TrainToTrack;

/* TrainToTrack::Onboard_telephone_numbers */
typedef struct kcg_tag_Onboard_telephone_numbers_TrainToTrack {
  kcg_int NID_PACKET;
  kcg_int L_PACKET;
  SVar30_TrainToTrack Struct46;
} Onboard_telephone_numbers_TrainToTrack;

/* TrainToTrack::Error_reporting */
typedef struct kcg_tag_Error_reporting_TrainToTrack {
  kcg_int NID_PACKET;
  kcg_int L_PACKET;
  M_ERROR error;
} Error_reporting_TrainToTrack;

/* TrainToTrack::Train_running_number */
typedef struct kcg_tag_Train_running_number_TrainToTrack {
  kcg_int NID_PACKET;
  kcg_int L_PACKET;
  kcg_int NID_OPERATIONAL;
} Train_running_number_TrainToTrack;

/* TrainToTrack::Level_23_transition_information */
typedef struct kcg_tag_Level_23_transition_information_TrainToTrack {
  kcg_int NID_PACKET;
  kcg_int L_PACKET;
  kcg_int NID_LTRBG;
} Level_23_transition_information_TrainToTrack;

/* TrainToTrack::Var110 */
typedef struct kcg_tag_Var110_TrainToTrack {
  kcg_int M_VOLTAGE;
  kcg_int NID_CTRACTION;
} Var110_TrainToTrack;

/* TrainToTrack::AVar110 */
typedef Var110_TrainToTrack AVar110_TrainToTrack[33];

/* TrainToTrack::SVar110 */
typedef struct kcg_tag_SVar110_TrainToTrack {
  kcg_int N_ITER;
  AVar110_TrainToTrack Array;
} SVar110_TrainToTrack;

/* TrainToTrack::Var111 */
typedef struct kcg_tag_Var111_TrainToTrack {
  kcg_int NID_NTC;
} Var111_TrainToTrack;

/* TrainToTrack::AVar111 */
typedef Var111_TrainToTrack AVar111_TrainToTrack[33];

/* TrainToTrack::SVar111 */
typedef struct kcg_tag_SVar111_TrainToTrack {
  kcg_int N_ITER;
  AVar111_TrainToTrack Array;
} SVar111_TrainToTrack;

/* TrainToTrack::Validated_train_data */
typedef struct kcg_tag_Validated_train_data_TrainToTrack {
  kcg_int NID_PACKET;
  kcg_int L_PACKET;
  kcg_int NC_CDTRAIN;
  kcg_int NC_TRAIN;
  kcg_int L_TRAIN;
  kcg_int V_MAXTRAIN;
  kcg_int M_LOADINGGAUGE;
  kcg_int M_AXLELOADCAT;
  kcg_int M_AIRTIGHT;
  kcg_int N_AXLE;
  SVar110_TrainToTrack Struct47;
  SVar111_TrainToTrack Struct48;
} Validated_train_data_TrainToTrack;

/* TrainToTrack::Data_used_by_applications_outside_the_ERTMS_or_ETCS_system */
typedef struct kcg_tag_Data_used_by_applications_outside_the_ERTMS_or_ETCS_system_TrainToTrack {
  kcg_int NID_PACKET;
  kcg_int L_PACKET;
  kcg_int NID_XUSER;
  kcg_int Other_data_depending_on__NID_XUSER;
} Data_used_by_applications_outside_the_ERTMS_or_ETCS_system_TrainToTrack;

/* BothWays::End_of_Information */
typedef struct kcg_tag_End_of_Information_BothWays {
  kcg_int NID_PACKET;
} End_of_Information_BothWays;

/* Radio_TrainToTrack::Validated_Train_Data */
typedef struct kcg_tag_Validated_Train_Data_Radio_TrainToTrack {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int NID_ENGINE;
  kcg_int PADDING0;
  kcg_int Validated_Train_Data_OptionalPackets;
} Validated_Train_Data_Radio_TrainToTrack;

/* Radio_TrainToTrack::Request_for_Shunting */
typedef struct kcg_tag_Request_for_Shunting_Radio_TrainToTrack {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int NID_ENGINE;
  kcg_int PADDING1;
  kcg_int Request_for_Shunting_OptionalPackets;
} Request_for_Shunting_Radio_TrainToTrack;

/* Radio_TrainToTrack::MA_Request */
typedef struct kcg_tag_MA_Request_Radio_TrainToTrack {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int NID_ENGINE;
  kcg_int Q_MARQSTREASON;
  kcg_int PADDING2;
  kcg_int MA_Request_OptionalPackets;
} MA_Request_Radio_TrainToTrack;

/* Radio_TrainToTrack::Train_Position_Report */
typedef struct kcg_tag_Train_Position_Report_Radio_TrainToTrack {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int NID_ENGINE;
  kcg_int PADDING3;
  kcg_int Train_Position_Report_OptionalPackets;
} Train_Position_Report_Radio_TrainToTrack;

/* BG_Types_Pkg::RBCReport_T */
typedef struct kcg_tag_RBCReport_T_BG_Types_Pkg {
  Train_Position_Report_Radio_TrainToTrack train_position_report;
} RBCReport_T_BG_Types_Pkg;

/* Radio_TrainToTrack::Request_to_shorten_MA_is_granted */
typedef struct kcg_tag_Request_to_shorten_MA_is_granted_Radio_TrainToTrack {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int NID_ENGINE;
  kcg_int PADDING4;
  kcg_int Request_to_shorten_MA_is_granted_OptionalPackets;
} Request_to_shorten_MA_is_granted_Radio_TrainToTrack;

/* Radio_TrainToTrack::Request_to_shorten_MA_is_rejected */
typedef struct kcg_tag_Request_to_shorten_MA_is_rejected_Radio_TrainToTrack {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int NID_ENGINE;
  kcg_int PADDING5;
  kcg_int Request_to_shorten_MA_is_rejected_OptionalPackets;
} Request_to_shorten_MA_is_rejected_Radio_TrainToTrack;

/* Radio_TrainToTrack::Acknowledgement_of_Emergency_Stop */
typedef struct kcg_tag_Acknowledgement_of_Emergency_Stop_Radio_TrainToTrack {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int NID_ENGINE;
  kcg_int NID_EM;
  kcg_int Q_EMERGENCYSTOP;
  kcg_int Acknowledgement_of_Emergency_Stop_OptionalPackets;
} Acknowledgement_of_Emergency_Stop_Radio_TrainToTrack;

/* Radio_TrainToTrack::Track_Ahead_Free_Granted */
typedef struct kcg_tag_Track_Ahead_Free_Granted_Radio_TrainToTrack {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int NID_ENGINE;
  kcg_int PADDING6;
  kcg_int Track_Ahead_Free_Granted_OptionalPackets;
} Track_Ahead_Free_Granted_Radio_TrainToTrack;

/* Radio_TrainToTrack::End_of_Mission */
typedef struct kcg_tag_End_of_Mission_Radio_TrainToTrack {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int NID_ENGINE;
  kcg_int PADDING7;
  kcg_int End_of_Mission_OptionalPackets;
} End_of_Mission_Radio_TrainToTrack;

/* Radio_TrainToTrack::Radio_infill_request */
typedef struct kcg_tag_Radio_infill_request_Radio_TrainToTrack {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int NID_ENGINE;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_INFILL;
  kcg_int PADDING8;
  kcg_int Radio_infill_request_OptionalPackets;
} Radio_infill_request_Radio_TrainToTrack;

/* Radio_TrainToTrack::SoM_Position_Report */
typedef struct kcg_tag_SoM_Position_Report_Radio_TrainToTrack {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int NID_ENGINE;
  kcg_int Q_STATUS;
  kcg_int PADDING9;
  kcg_int SoM_Position_Report_OptionalPackets;
} SoM_Position_Report_Radio_TrainToTrack;

/* Radio_TrainToTrack::Text_message_acknowledged_by_driver */
typedef struct kcg_tag_Text_message_acknowledged_by_driver_Radio_TrainToTrack {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int NID_ENGINE;
  kcg_int NID_TEXTMESSAGE;
  kcg_int PADDING10;
  kcg_int Text_message_acknowledged_by_driver_OptionalPackets;
} Text_message_acknowledged_by_driver_Radio_TrainToTrack;

/* Radio_TrainToTrack::Session_Established */
typedef struct kcg_tag_Session_Established_Radio_TrainToTrack {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int NID_ENGINE;
  kcg_int PADDING11;
  kcg_int Session_Established_OptionalPackets;
} Session_Established_Radio_TrainToTrack;

/* Radio_TrackToTrain::SR_Authorisation */
typedef struct kcg_tag_SR_Authorisation_Radio_TrackToTrain {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int M_ACK;
  kcg_int NID_LRBG;
  kcg_int Q_SCALE;
  kcg_int D_SR;
  kcg_int PADDING12;
  kcg_int SR_Authorisation_OptionalPackets;
} SR_Authorisation_Radio_TrackToTrain;

/* Radio_TrackToTrain::Movement_Authority */
typedef struct kcg_tag_Movement_Authority_Radio_TrackToTrain {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int M_ACK;
  kcg_int NID_LRBG;
  kcg_int PADDING13;
  kcg_int Movement_Authority_OptionalPackets;
} Movement_Authority_Radio_TrackToTrain;

/* Radio_TrackToTrain::Request_to_Shorten_MA */
typedef struct kcg_tag_Request_to_Shorten_MA_Radio_TrackToTrain {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int M_ACK;
  kcg_int NID_LRBG;
  kcg_int PADDING14;
  kcg_int Request_to_Shorten_MA_OptionalPackets;
} Request_to_Shorten_MA_Radio_TrackToTrain;

/* Radio_TrackToTrain::Conditional_Emergency_Stop */
typedef struct kcg_tag_Conditional_Emergency_Stop_Radio_TrackToTrain {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int M_ACK;
  kcg_int NID_LRBG;
  kcg_int NID_EM;
  kcg_int Q_SCALE;
  kcg_int D_REF;
  kcg_int Q_DIR;
  kcg_int D_EMERGENCYSTOP;
} Conditional_Emergency_Stop_Radio_TrackToTrain;

/* Radio_TrackToTrain::General_message */
typedef struct kcg_tag_General_message_Radio_TrackToTrain {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int M_ACK;
  kcg_int NID_LRBG;
  kcg_int PADDING15;
  kcg_int General_message_OptionalPackets;
} General_message_Radio_TrackToTrain;

/* Radio_TrackToTrain::SH_Authorised */
typedef struct kcg_tag_SH_Authorised_Radio_TrackToTrain {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN0;
  kcg_int M_ACK;
  kcg_int NID_LRBG;
  kcg_real T_TRAIN1;
  kcg_int PADDING16;
  kcg_int SH_Authorised_OptionalPackets;
} SH_Authorised_Radio_TrackToTrain;

/* Radio_TrackToTrain::RBC_or_RIU_System_Version */
typedef struct kcg_tag_RBC_or_RIU_System_Version_Radio_TrackToTrain {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int M_ACK;
  kcg_int NID_LRBG;
  kcg_int M_VERSION;
} RBC_or_RIU_System_Version_Radio_TrackToTrain;

/* Radio_TrackToTrain::MA_with_Shifted_Location_Reference */
typedef struct kcg_tag_MA_with_Shifted_Location_Reference_Radio_TrackToTrain {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int M_ACK;
  kcg_int NID_LRBG;
  kcg_int Q_SCALE;
  kcg_int D_REF;
  kcg_int PADDING17;
  kcg_int MA_with_Shifted_Location_Reference_OptionalPackets;
} MA_with_Shifted_Location_Reference_Radio_TrackToTrain;

/* Radio_TrackToTrain::Track_Ahead_Free_Request */
typedef struct kcg_tag_Track_Ahead_Free_Request_Radio_TrackToTrain {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int M_ACK;
  kcg_int NID_LRBG;
  kcg_int Q_SCALE;
  kcg_int D_REF;
  kcg_int Q_DIR;
  kcg_int D_TAFDISPLAY;
  kcg_int L_TAFDISPLAY;
} Track_Ahead_Free_Request_Radio_TrackToTrain;

/* Radio_TrackToTrain::Infill_MA */
typedef struct kcg_tag_Infill_MA_Radio_TrackToTrain {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int M_ACK;
  kcg_int NID_LRBG;
  kcg_int PADDING18;
  kcg_int Infill_MA_OptionalPackets;
} Infill_MA_Radio_TrackToTrain;

/* Radio_TrackToTrain::Assignment_of_coordinate_system */
typedef struct kcg_tag_Assignment_of_coordinate_system_Radio_TrackToTrain {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int M_ACK;
  kcg_int NID_LRBG;
  kcg_int Q_ORIENTATION;
} Assignment_of_coordinate_system_Radio_TrackToTrain;

/* BG_Types_Pkg::RBCOrientationReport_T */
typedef struct kcg_tag_RBCOrientationReport_T_BG_Types_Pkg {
  Assignment_of_coordinate_system_Radio_TrackToTrain assignment_of_coordinate_system;
} RBCOrientationReport_T_BG_Types_Pkg;

typedef struct kcg_tag_struct_10421 {
  kcg_int V_NVKVINT;
  kcg_real M_NVKVINT;
} struct_10421;

/* TrackToTrain::Var31 */
typedef struct_10421 Var31_TrackToTrain;

/* TrackToTrain::Var33 */
typedef struct_10421 Var33_TrackToTrain;

typedef struct kcg_tag_struct_10441 {
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
} struct_10441;

/* TrackToTrain::Var137 */
typedef struct_10441 Var137_TrackToTrain;

/* TrackToTrain::Staff_Responsible_distance_Information_from_loop */
typedef struct kcg_tag_Staff_Responsible_distance_Information_from_loop_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  Var137_TrackToTrain Struct9;
  Var137_TrackToTrain Struct12;
  kcg_int D_SR;
  SVar130_TrackToTrain Struct13;
} Staff_Responsible_distance_Information_from_loop_TrackToTrain;

/* TrackToTrain::Var490 */
typedef struct_10441 Var490_TrackToTrain;

/* TrackToTrain::Var630 */
typedef struct_10441 Var630_TrackToTrain;

typedef struct_10441 array_10288[33];

/* TrackToTrain::AVar490 */
typedef array_10288 AVar490_TrackToTrain;

/* TrackToTrain::AVar630 */
typedef array_10288 AVar630_TrackToTrain;

typedef struct kcg_tag_struct_10371 {
  kcg_int N_ITER;
  array_10288 Array;
} struct_10371;

/* TrackToTrain::SVar490 */
typedef struct_10371 SVar490_TrackToTrain;

/* TrackToTrain::List_of_balises_for_SH_Area */
typedef struct kcg_tag_List_of_balises_for_SH_Area_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  SVar490_TrackToTrain Struct21;
} List_of_balises_for_SH_Area_TrackToTrain;

/* TrackToTrain::SVar630 */
typedef struct_10371 SVar630_TrackToTrain;

/* TrackToTrain::List_of_Balises_in_SR_Authority */
typedef struct kcg_tag_List_of_Balises_in_SR_Authority_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  SVar630_TrackToTrain Struct27;
} List_of_Balises_in_SR_Authority_TrackToTrain;

typedef struct kcg_tag_struct_10470 {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
} struct_10470;

/* TrackToTrain::Track_Ahead_Free_up_to_level_23_transition_location */
typedef struct_10470 Track_Ahead_Free_up_to_level_23_transition_location_TrackToTrain;

/* TrackToTrain::Infill_location_reference */
typedef struct_10470 Infill_location_reference_TrackToTrain;

typedef struct kcg_tag_struct_10503 {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
} struct_10503;

/* TrackToTrain::Inhibition_of_revocable_TSRs_from_balises_in_L23 */
typedef struct_10503 Inhibition_of_revocable_TSRs_from_balises_in_L23_TrackToTrain;

/* TrackToTrain::Stop_Shunting_on_desk_opening */
typedef struct_10503 Stop_Shunting_on_desk_opening_TrackToTrain;

/* TrackToTrain::Inhibition_of_balise_group_message_consistency_reaction */
typedef struct_10503 Inhibition_of_balise_group_message_consistency_reaction_TrackToTrain;

/* TrackToTrain::Default_balise_or_Loop_or_RIU_information */
typedef struct_10503 Default_balise_or_Loop_or_RIU_information_TrackToTrain;

typedef struct kcg_tag_struct_10720 {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int M_ACK;
  kcg_int NID_LRBG;
} struct_10720;

/* Radio_TrackToTrain::Recognition_of_exit_from_TRIP_mode */
typedef struct_10720 Recognition_of_exit_from_TRIP_mode_Radio_TrackToTrain;

/* Radio_TrackToTrain::Initiation_of_a_communication_session */
typedef struct_10720 Initiation_of_a_communication_session_Radio_TrackToTrain;

/* Radio_TrackToTrain::Acknowledgement_of_termination_of_a_communication_session */
typedef struct_10720 Acknowledgement_of_termination_of_a_communication_session_Radio_TrackToTrain;

/* Radio_TrackToTrain::Train_Rejected */
typedef struct_10720 Train_Rejected_Radio_TrackToTrain;

/* Radio_TrackToTrain::Train_Accepted */
typedef struct_10720 Train_Accepted_Radio_TrackToTrain;

/* Radio_TrackToTrain::SoM_position_report_confirmed_by_RBC */
typedef struct_10720 SoM_position_report_confirmed_by_RBC_Radio_TrackToTrain;

typedef struct kcg_tag_struct_10729 {
  kcg_int M_MODETEXTDISPLAY;
  kcg_int M_LEVELTEXTDISPLAY;
  kcg_int NID_NTC;
} struct_10729;

/* TrackToTrain::Var727 */
typedef struct_10729 Var727_TrackToTrain;

/* TrackToTrain::Packet_for_sending_plain_text_messages */
typedef struct kcg_tag_Packet_for_sending_plain_text_messages_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int Q_TEXTCLASS;
  kcg_int Q_TEXTDISPLAY;
  kcg_int D_TEXTDISPLAY;
  Var727_TrackToTrain Struct34;
  kcg_int L_TEXTDISPLAY;
  kcg_int T_TEXTDISPLAY;
  Var727_TrackToTrain Struct37;
  kcg_int Q_TEXTCONFIRM;
  kcg_int Q_CONFTEXTDISPLAY;
  kcg_int Q_TEXTREPORT;
  kcg_int NID_TEXTMESSAGE;
  kcg_int NID_C;
  kcg_int NID_RBC;
  kcg_int L_TEXT;
  kcg_int X_TEXT;
} Packet_for_sending_plain_text_messages_TrackToTrain;

/* TrackToTrain::Var767 */
typedef struct_10729 Var767_TrackToTrain;

/* TrackToTrain::Packet_for_sending_fixed_text_messages */
typedef struct kcg_tag_Packet_for_sending_fixed_text_messages_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int Q_TEXTCLASS;
  kcg_int Q_TEXTDISPLAY;
  kcg_int D_TEXTDISPLAY;
  Var767_TrackToTrain Struct40;
  kcg_int L_TEXTDISPLAY;
  kcg_int T_TEXTDISPLAY;
  Var767_TrackToTrain Struct43;
  kcg_int Q_TEXTCONFIRM;
  kcg_int Q_CONFTEXTDISPLAY;
  kcg_int Q_TEXTREPORT;
  kcg_int NID_TEXTMESSAGE;
  kcg_int NID_C;
  kcg_int NID_RBC;
  kcg_int Q_TEXT;
} Packet_for_sending_fixed_text_messages_TrackToTrain;

typedef struct kcg_tag_struct_11012 {
  kcg_int Q_DIFF;
  kcg_int NC_CDDIFF;
  kcg_int NC_DIFF;
  kcg_int V_DIFF;
} struct_11012;

/* TrackToTrain::Var270 */
typedef struct_11012 Var270_TrackToTrain;

/* TrackToTrain::Var272 */
typedef struct_11012 Var272_TrackToTrain;

typedef struct_11012 array_10743[33];

/* TrackToTrain::AVar270 */
typedef array_10743 AVar270_TrackToTrain;

/* TrackToTrain::AVar272 */
typedef array_10743 AVar272_TrackToTrain;

typedef struct kcg_tag_struct_10334 {
  kcg_int N_ITER;
  array_10743 Array;
} struct_10334;

/* TrackToTrain::SVar270 */
typedef struct_10334 SVar270_TrackToTrain;

/* TrackToTrain::SVar272 */
typedef struct_10334 SVar272_TrackToTrain;

/* TrackToTrain::Var271 */
typedef struct kcg_tag_Var271_TrackToTrain {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  SVar272_TrackToTrain Struct62;
} Var271_TrackToTrain;

/* TrackToTrain::AVar271 */
typedef Var271_TrackToTrain AVar271_TrackToTrain[33];

/* TrackToTrain::SVar271 */
typedef struct kcg_tag_SVar271_TrackToTrain {
  kcg_int N_ITER;
  AVar271_TrackToTrain Array;
} SVar271_TrackToTrain;

/* TrackToTrain::International_Static_Speed_Profile */
typedef struct kcg_tag_International_Static_Speed_Profile_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  SVar270_TrackToTrain Struct16;
  SVar271_TrackToTrain Struct17;
} International_Static_Speed_Profile_TrackToTrain;

typedef struct kcg_tag_struct_11020 {
  kcg_int M_AXLELOADCAT;
  kcg_int V_AXLELOAD;
} struct_11020;

/* TrackToTrain::Var510 */
typedef struct_11020 Var510_TrackToTrain;

/* TrackToTrain::Var512 */
typedef struct_11020 Var512_TrackToTrain;

typedef struct_10421 array_11035[33];

/* TrackToTrain::AVar31 */
typedef array_11035 AVar31_TrackToTrain;

/* TrackToTrain::AVar33 */
typedef array_11035 AVar33_TrackToTrain;

typedef struct kcg_tag_struct_10297 {
  kcg_int N_ITER;
  array_11035 Array;
} struct_10297;

/* TrackToTrain::SVar31 */
typedef struct_10297 SVar31_TrackToTrain;

/* TrackToTrain::SVar33 */
typedef struct_10297 SVar33_TrackToTrain;

/* TrackToTrain::Var32 */
typedef struct kcg_tag_Var32_TrackToTrain {
  kcg_int Q_NVKVINTSET;
  kcg_real A_NVP12;
  kcg_real A_NVP23;
  kcg_int V_NVKVINT;
  kcg_real M_NVKVINT;
  SVar33_TrackToTrain Struct51;
} Var32_TrackToTrain;

/* TrackToTrain::AVar32 */
typedef Var32_TrackToTrain AVar32_TrackToTrain[33];

/* TrackToTrain::SVar32 */
typedef struct kcg_tag_SVar32_TrackToTrain {
  kcg_int N_ITER;
  AVar32_TrackToTrain Array;
} SVar32_TrackToTrain;

/* TrackToTrain::National_Values */
typedef struct kcg_tag_National_Values_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_VALIDNV;
  kcg_int NID_C;
  SVar30_TrackToTrain Struct0;
  kcg_int V_NVSHUNT;
  kcg_int V_NVSTFF;
  kcg_int V_NVONSIGHT;
  kcg_int V_NVLIMSUPERV;
  kcg_int V_NVUNFIT;
  kcg_int V_NVREL;
  kcg_int D_NVROLL;
  kcg_int Q_NVSBTSMPERM;
  kcg_int Q_NVEMRRLS;
  kcg_int Q_NVGUIPERM;
  kcg_int Q_NVSBFBPERM;
  kcg_int Q_NVINHSMICPERM;
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
  kcg_real A_NVMAXREDADH1;
  kcg_real A_NVMAXREDADH2;
  kcg_real A_NVMAXREDADH3;
  kcg_int Q_NVLOCACC;
  kcg_real M_NVAVADH;
  kcg_int M_NVEBCL;
  kcg_int Q_NVKINT;
  kcg_int Q_NVKVINTSET;
  kcg_real A_NVP12;
  kcg_real A_NVP23;
  kcg_int V_NVKVINT;
  kcg_real M_NVKVINT;
  SVar31_TrackToTrain Struct1;
  SVar32_TrackToTrain Struct2;
  kcg_int L_NVKRINT;
  kcg_real M_NVKRINT;
  SVar34_TrackToTrain Struct4;
  kcg_real M_NVKTINT;
} National_Values_TrackToTrain;

typedef struct kcg_tag_struct_11039 {
  kcg_int L_SECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
} struct_11039;

/* TrackToTrain::Var120 */
typedef struct_11039 Var120_TrackToTrain;

/* TrackToTrain::Var150 */
typedef struct_11039 Var150_TrackToTrain;

typedef struct_11039 array_10739[33];

/* TrackToTrain::AVar120 */
typedef array_10739 AVar120_TrackToTrain;

/* TrackToTrain::AVar150 */
typedef array_10739 AVar150_TrackToTrain;

typedef struct kcg_tag_struct_10318 {
  kcg_int N_ITER;
  array_10739 Array;
} struct_10318;

/* TrackToTrain::SVar120 */
typedef struct_10318 SVar120_TrackToTrain;

/* TrackToTrain::Level_1_Movement_Authority */
typedef struct kcg_tag_Level_1_Movement_Authority_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int V_MAIN;
  kcg_int V_LOA;
  kcg_int T_LOA;
  SVar120_TrackToTrain Struct6;
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
} Level_1_Movement_Authority_TrackToTrain;

/* TrackToTrain::SVar150 */
typedef struct_10318 SVar150_TrackToTrain;

/* TrackToTrain::Level_23_Movement_Authority */
typedef struct kcg_tag_Level_23_Movement_Authority_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int V_LOA;
  kcg_int T_LOA;
  SVar150_TrackToTrain Struct14;
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
} Level_23_Movement_Authority_TrackToTrain;

typedef struct kcg_tag_struct_11056 {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int M_ACK;
  kcg_int NID_LRBG;
  kcg_int NID_EM;
} struct_11056;

/* Radio_TrackToTrain::Unconditional_Emergency_Stop */
typedef struct_11056 Unconditional_Emergency_Stop_Radio_TrackToTrain;

/* Radio_TrackToTrain::Revocation_of_Emergency_Stop */
typedef struct_11056 Revocation_of_Emergency_Stop_Radio_TrackToTrain;

typedef struct_11020 array_11277[33];

/* TrackToTrain::AVar510 */
typedef array_11277 AVar510_TrackToTrain;

/* TrackToTrain::AVar512 */
typedef array_11277 AVar512_TrackToTrain;

typedef struct kcg_tag_struct_10355 {
  kcg_int N_ITER;
  array_11277 Array;
} struct_10355;

/* TrackToTrain::SVar510 */
typedef struct_10355 SVar510_TrackToTrain;

/* TrackToTrain::SVar512 */
typedef struct_10355 SVar512_TrackToTrain;

/* TrackToTrain::Var511 */
typedef struct kcg_tag_Var511_TrackToTrain {
  kcg_int D_AXLELOAD;
  kcg_int L_AXLELOAD;
  kcg_int Q_FRONT;
  SVar512_TrackToTrain Struct68;
} Var511_TrackToTrain;

/* TrackToTrain::AVar511 */
typedef Var511_TrackToTrain AVar511_TrackToTrain[33];

/* TrackToTrain::SVar511 */
typedef struct kcg_tag_SVar511_TrackToTrain {
  kcg_int N_ITER;
  AVar511_TrackToTrain Array;
} SVar511_TrackToTrain;

/* TrackToTrain::Axle_Load_Speed_Profile */
typedef struct kcg_tag_Axle_Load_Speed_Profile_TrackToTrain {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int Q_TRACKINIT;
  kcg_int D_TRACKINIT;
  kcg_int D_AXLELOAD;
  kcg_int L_AXLELOAD;
  kcg_int Q_FRONT;
  SVar510_TrackToTrain Struct22;
  SVar511_TrackToTrain Struct23;
} Axle_Load_Speed_Profile_TrackToTrain;

typedef struct kcg_tag_struct_11281 {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN0;
  kcg_int M_ACK;
  kcg_int NID_LRBG;
  kcg_real T_TRAIN1;
} struct_11281;

/* Radio_TrackToTrain::Acknowledgement_of_Train_Data */
typedef struct_11281 Acknowledgement_of_Train_Data_Radio_TrackToTrain;

/* Radio_TrackToTrain::SH_Refused */
typedef struct_11281 SH_Refused_Radio_TrackToTrain;

typedef struct kcg_tag_struct_11318 {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int NID_ENGINE;
} struct_11318;

/* Radio_TrainToTrack::Acknowledgement */
typedef struct_11318 Acknowledgement_Radio_TrainToTrack;

/* Radio_TrainToTrack::No_compatible_version_supported */
typedef struct_11318 No_compatible_version_supported_Radio_TrainToTrack;

/* Radio_TrainToTrack::Initiation_of_a_communication_session */
typedef struct_11318 Initiation_of_a_communication_session_Radio_TrainToTrack;

/* Radio_TrainToTrack::Termination_of_a_communication_session */
typedef struct_11318 Termination_of_a_communication_session_Radio_TrainToTrack;

typedef struct kcg_tag_struct_11732 {
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
} struct_11732;

/* BG_Types_Pkg::BG_Header_T */
typedef struct_11732 BG_Header_T_BG_Types_Pkg;

/* BG_Types_Pkg::passedBG_T */
typedef struct kcg_tag_passedBG_T_BG_Types_Pkg {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg timestamp;
  OdometryLocations_T_Obu_BasicTypes_Pkg odometrystamp;
  LocWithInAcc_T_Obu_BasicTypes_Pkg BG_centerDetectionInaccuraccuracies;
  BG_Header_T_BG_Types_Pkg BG_Header;
  LinkedBGs_T_BG_Types_Pkg linkedBGs;
  kcg_bool noCoordinateSystemHasBeenAssigned;
  Q_DIRLRBG trainOrientationToBG;
  Q_DIRTRAIN trainRunningDirectionToBG;
  Speed_T_Obu_BasicTypes_Pkg passingSpeed;
} passedBG_T_BG_Types_Pkg;

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
} positionedBG_T_TrainPosition_Types_Pck;

/* TrainPosition_Types_Pck::linkedBGs_asPositionedBGs_T */
typedef positionedBG_T_TrainPosition_Types_Pck linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck[32];

/* TrainPosition_Types_Pck::positionedBGs_T */
typedef positionedBG_T_TrainPosition_Types_Pck positionedBGs_T_TrainPosition_Types_Pck[64];

/* CalculateTrainPosition_Pkg::positionedBGs_w_overrun_T */
typedef struct kcg_tag_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg {
  positionedBGs_T_TrainPosition_Types_Pck BGs;
  kcg_bool overrun;
} positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg;

/* TrainPosition_Types_Pck::trainPositionInfo_T */
typedef struct kcg_tag_trainPositionInfo_T_TrainPosition_Types_Pck {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg timestamp;
  LocWithInAcc_T_Obu_BasicTypes_Pkg trainPosition;
  LocWithInAcc_T_Obu_BasicTypes_Pkg trainPositionDerivedFromLastLinkedBG;
  LocWithInAcc_T_Obu_BasicTypes_Pkg trainPositionDerivedFromLastUnlinkedBG;
  positionedBG_T_TrainPosition_Types_Pck lastPassedLinkedBG;
  positionedBG_T_TrainPosition_Types_Pck lastPassedUnlinkedBG;
  Speed_T_Obu_BasicTypes_Pkg speed;
} trainPositionInfo_T_TrainPosition_Types_Pck;

/* BG_Types_Pkg::TelegramHeader_T */
typedef struct_11732 TelegramHeader_T_BG_Types_Pkg;

/* BG_Types_Pkg::TelegramHeaderFlag_T */
typedef struct kcg_tag_TelegramHeaderFlag_T_BG_Types_Pkg {
  kcg_bool valid;
  TelegramHeader_T_BG_Types_Pkg header;
} TelegramHeaderFlag_T_BG_Types_Pkg;

/* BG_Types_Pkg::TelegramHeaderArray_T */
typedef TelegramHeaderFlag_T_BG_Types_Pkg TelegramHeaderArray_T_BG_Types_Pkg[8];

/* BG_Types_Pkg::BG_Message_T */
typedef struct kcg_tag_BG_Message_T_BG_Types_Pkg {
  kcg_bool present;
  TelegramHeaderArray_T_BG_Types_Pkg TelegramHeaders;
  AdditionalInformation_T_BG_Types_Pkg AddInfo;
  kcg_int numberBalises;
  centerOfBalisePosition_T_BG_Types_Pkg centerOfBalisePosition;
} BG_Message_T_BG_Types_Pkg;

/* BG_Types_Pkg::FilteredBGMessage_T */
typedef struct kcg_tag_FilteredBGMessage_T_BG_Types_Pkg {
  Q_DIRTRAIN q_dirlrbg;
  BG_Message_T_BG_Types_Pkg checkedMessage;
} FilteredBGMessage_T_BG_Types_Pkg;

/* BG_Types_Pkg::CurrentLRBG */
typedef struct kcg_tag_CurrentLRBG_BG_Types_Pkg {
  FilteredBGMessage_T_BG_Types_Pkg filteredBGMessage;
  Position_T_BG_Types_Pkg position;
} CurrentLRBG_BG_Types_Pkg;

/* BG_Types_Pkg::ListOfBG */
typedef CurrentLRBG_BG_Types_Pkg ListOfBG_BG_Types_Pkg[20];

/* BG_Types_Pkg::Telegram_T */
typedef struct kcg_tag_Telegram_T_BG_Types_Pkg {
  kcg_bool present;
  kcg_bool valid;
  TelegramHeader_T_BG_Types_Pkg telegramheader;
  AdditionalInformation_T_BG_Types_Pkg packets;
} Telegram_T_BG_Types_Pkg;

#ifndef kcg_copy_Var790_TrackToTrain
#define kcg_copy_Var790_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Var790_TrackToTrain)))
#endif /* kcg_copy_Var790_TrackToTrain */

#ifndef kcg_copy_Data_used_by_applications_outside_the_ERTMS_or_ETCS_system_TrainToTrack
#define kcg_copy_Data_used_by_applications_outside_the_ERTMS_or_ETCS_system_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Data_used_by_applications_outside_the_ERTMS_or_ETCS_system_TrainToTrack)))
#endif /* kcg_copy_Data_used_by_applications_outside_the_ERTMS_or_ETCS_system_TrainToTrack */

#ifndef kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg
#define kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (LocWithInAcc_T_Obu_BasicTypes_Pkg)))
#endif /* kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg */

#ifndef kcg_copy_Var30_TrackToTrain
#define kcg_copy_Var30_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Var30_TrackToTrain)))
#endif /* kcg_copy_Var30_TrackToTrain */

#ifndef kcg_copy_odometry_T_Obu_BasicTypes_Pkg
#define kcg_copy_odometry_T_Obu_BasicTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (odometry_T_Obu_BasicTypes_Pkg)))
#endif /* kcg_copy_odometry_T_Obu_BasicTypes_Pkg */

#ifndef kcg_copy_Level_23_transition_information_TrainToTrack
#define kcg_copy_Level_23_transition_information_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Level_23_transition_information_TrainToTrack)))
#endif /* kcg_copy_Level_23_transition_information_TrainToTrack */

#ifndef kcg_copy_RBCReport_T_BG_Types_Pkg
#define kcg_copy_RBCReport_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RBCReport_T_BG_Types_Pkg)))
#endif /* kcg_copy_RBCReport_T_BG_Types_Pkg */

#ifndef kcg_copy_RBCOrientationReport_T_BG_Types_Pkg
#define kcg_copy_RBCOrientationReport_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RBCOrientationReport_T_BG_Types_Pkg)))
#endif /* kcg_copy_RBCOrientationReport_T_BG_Types_Pkg */

#ifndef kcg_copy_End_of_Information_BothWays
#define kcg_copy_End_of_Information_BothWays(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (End_of_Information_BothWays)))
#endif /* kcg_copy_End_of_Information_BothWays */

#ifndef kcg_copy_Request_for_Shunting_Radio_TrainToTrack
#define kcg_copy_Request_for_Shunting_Radio_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Request_for_Shunting_Radio_TrainToTrack)))
#endif /* kcg_copy_Request_for_Shunting_Radio_TrainToTrack */

#ifndef kcg_copy_SVar32_TrackToTrain
#define kcg_copy_SVar32_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SVar32_TrackToTrain)))
#endif /* kcg_copy_SVar32_TrackToTrain */

#ifndef kcg_copy_struct_10297
#define kcg_copy_struct_10297(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_10297)))
#endif /* kcg_copy_struct_10297 */

#ifndef kcg_copy_SVar34_TrackToTrain
#define kcg_copy_SVar34_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SVar34_TrackToTrain)))
#endif /* kcg_copy_SVar34_TrackToTrain */

#ifndef kcg_copy_SVar50_TrackToTrain
#define kcg_copy_SVar50_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SVar50_TrackToTrain)))
#endif /* kcg_copy_SVar50_TrackToTrain */

#ifndef kcg_copy_SVar130_TrackToTrain
#define kcg_copy_SVar130_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SVar130_TrackToTrain)))
#endif /* kcg_copy_SVar130_TrackToTrain */

#ifndef kcg_copy_struct_10318
#define kcg_copy_struct_10318(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_10318)))
#endif /* kcg_copy_struct_10318 */

#ifndef kcg_copy_SVar210_TrackToTrain
#define kcg_copy_SVar210_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SVar210_TrackToTrain)))
#endif /* kcg_copy_SVar210_TrackToTrain */

#ifndef kcg_copy_SVar271_TrackToTrain
#define kcg_copy_SVar271_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SVar271_TrackToTrain)))
#endif /* kcg_copy_SVar271_TrackToTrain */

#ifndef kcg_copy_struct_10334
#define kcg_copy_struct_10334(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_10334)))
#endif /* kcg_copy_struct_10334 */

#ifndef kcg_copy_SVar410_TrackToTrain
#define kcg_copy_SVar410_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SVar410_TrackToTrain)))
#endif /* kcg_copy_SVar410_TrackToTrain */

#ifndef kcg_copy_SVar460_TrackToTrain
#define kcg_copy_SVar460_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SVar460_TrackToTrain)))
#endif /* kcg_copy_SVar460_TrackToTrain */

#ifndef kcg_copy_SVar511_TrackToTrain
#define kcg_copy_SVar511_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SVar511_TrackToTrain)))
#endif /* kcg_copy_SVar511_TrackToTrain */

#ifndef kcg_copy_struct_10355
#define kcg_copy_struct_10355(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_10355)))
#endif /* kcg_copy_struct_10355 */

#ifndef kcg_copy_SVar520_TrackToTrain
#define kcg_copy_SVar520_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SVar520_TrackToTrain)))
#endif /* kcg_copy_SVar520_TrackToTrain */

#ifndef kcg_copy_SVar580_TrackToTrain
#define kcg_copy_SVar580_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SVar580_TrackToTrain)))
#endif /* kcg_copy_SVar580_TrackToTrain */

#ifndef kcg_copy_struct_10371
#define kcg_copy_struct_10371(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_10371)))
#endif /* kcg_copy_struct_10371 */

#ifndef kcg_copy_SVar670_TrackToTrain
#define kcg_copy_SVar670_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SVar670_TrackToTrain)))
#endif /* kcg_copy_SVar670_TrackToTrain */

#ifndef kcg_copy_SVar680_TrackToTrain
#define kcg_copy_SVar680_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SVar680_TrackToTrain)))
#endif /* kcg_copy_SVar680_TrackToTrain */

#ifndef kcg_copy_SVar690_TrackToTrain
#define kcg_copy_SVar690_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SVar690_TrackToTrain)))
#endif /* kcg_copy_SVar690_TrackToTrain */

#ifndef kcg_copy_SVar700_TrackToTrain
#define kcg_copy_SVar700_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SVar700_TrackToTrain)))
#endif /* kcg_copy_SVar700_TrackToTrain */

#ifndef kcg_copy_SVar790_TrackToTrain
#define kcg_copy_SVar790_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SVar790_TrackToTrain)))
#endif /* kcg_copy_SVar790_TrackToTrain */

#ifndef kcg_copy_SVar800_TrackToTrain
#define kcg_copy_SVar800_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SVar800_TrackToTrain)))
#endif /* kcg_copy_SVar800_TrackToTrain */

#ifndef kcg_copy_SVar110_TrainToTrack
#define kcg_copy_SVar110_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SVar110_TrainToTrack)))
#endif /* kcg_copy_SVar110_TrainToTrack */

#ifndef kcg_copy_Var30_TrainToTrack
#define kcg_copy_Var30_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Var30_TrainToTrack)))
#endif /* kcg_copy_Var30_TrainToTrack */

#ifndef kcg_copy_CurrentLRBG_BG_Types_Pkg
#define kcg_copy_CurrentLRBG_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (CurrentLRBG_BG_Types_Pkg)))
#endif /* kcg_copy_CurrentLRBG_BG_Types_Pkg */

#ifndef kcg_copy_struct_10421
#define kcg_copy_struct_10421(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_10421)))
#endif /* kcg_copy_struct_10421 */

#ifndef kcg_copy_LutIndex_lut
#define kcg_copy_LutIndex_lut(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (LutIndex_lut)))
#endif /* kcg_copy_LutIndex_lut */

#ifndef kcg_copy_Train_Position_Report_Radio_TrainToTrack
#define kcg_copy_Train_Position_Report_Radio_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Train_Position_Report_Radio_TrainToTrack)))
#endif /* kcg_copy_Train_Position_Report_Radio_TrainToTrack */

#ifndef kcg_copy_struct_10441
#define kcg_copy_struct_10441(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_10441)))
#endif /* kcg_copy_struct_10441 */

#ifndef kcg_copy_Danger_for_Shunting_information_TrackToTrain
#define kcg_copy_Danger_for_Shunting_information_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Danger_for_Shunting_information_TrackToTrain)))
#endif /* kcg_copy_Danger_for_Shunting_information_TrackToTrain */

#ifndef kcg_copy_Request_to_shorten_MA_is_granted_Radio_TrainToTrack
#define kcg_copy_Request_to_shorten_MA_is_granted_Radio_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Request_to_shorten_MA_is_granted_Radio_TrainToTrack)))
#endif /* kcg_copy_Request_to_shorten_MA_is_granted_Radio_TrainToTrack */

#ifndef kcg_copy_struct_10470
#define kcg_copy_struct_10470(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_10470)))
#endif /* kcg_copy_struct_10470 */

#ifndef kcg_copy_Stop_if_in_Staff_Responsible_TrackToTrain
#define kcg_copy_Stop_if_in_Staff_Responsible_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Stop_if_in_Staff_Responsible_TrackToTrain)))
#endif /* kcg_copy_Stop_if_in_Staff_Responsible_TrackToTrain */

#ifndef kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg
#define kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (OdometryLocations_T_Obu_BasicTypes_Pkg)))
#endif /* kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg */

#ifndef kcg_copy_System_Version_order_TrackToTrain
#define kcg_copy_System_Version_order_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (System_Version_order_TrackToTrain)))
#endif /* kcg_copy_System_Version_order_TrackToTrain */

#ifndef kcg_copy_struct_10503
#define kcg_copy_struct_10503(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_10503)))
#endif /* kcg_copy_struct_10503 */

#ifndef kcg_copy_Var34_TrackToTrain
#define kcg_copy_Var34_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Var34_TrackToTrain)))
#endif /* kcg_copy_Var34_TrackToTrain */

#ifndef kcg_copy_Radio_Network_registration_TrackToTrain
#define kcg_copy_Radio_Network_registration_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Radio_Network_registration_TrackToTrain)))
#endif /* kcg_copy_Radio_Network_registration_TrackToTrain */

#ifndef kcg_copy_Var50_TrackToTrain
#define kcg_copy_Var50_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Var50_TrackToTrain)))
#endif /* kcg_copy_Var50_TrackToTrain */

#ifndef kcg_copy_Virtual_Balise_Cover_order_TrackToTrain
#define kcg_copy_Virtual_Balise_Cover_order_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Virtual_Balise_Cover_order_TrackToTrain)))
#endif /* kcg_copy_Virtual_Balise_Cover_order_TrackToTrain */

#ifndef kcg_copy_Track_Condition_Change_of_traction_system_TrackToTrain
#define kcg_copy_Track_Condition_Change_of_traction_system_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Track_Condition_Change_of_traction_system_TrackToTrain)))
#endif /* kcg_copy_Track_Condition_Change_of_traction_system_TrackToTrain */

#ifndef kcg_copy_Adhesion_factor_TrackToTrain
#define kcg_copy_Adhesion_factor_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Adhesion_factor_TrackToTrain)))
#endif /* kcg_copy_Adhesion_factor_TrackToTrain */

#ifndef kcg_copy_Session_Management_with_neighbouring_Radio_Infill_Unit_TrackToTrain
#define kcg_copy_Session_Management_with_neighbouring_Radio_Infill_Unit_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Session_Management_with_neighbouring_Radio_Infill_Unit_TrackToTrain)))
#endif /* kcg_copy_Session_Management_with_neighbouring_Radio_Infill_Unit_TrackToTrain */

#ifndef kcg_copy_MA_Request_Radio_TrainToTrack
#define kcg_copy_MA_Request_Radio_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MA_Request_Radio_TrainToTrack)))
#endif /* kcg_copy_MA_Request_Radio_TrainToTrack */

#ifndef kcg_copy_Acknowledgement_of_Emergency_Stop_Radio_TrainToTrack
#define kcg_copy_Acknowledgement_of_Emergency_Stop_Radio_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Acknowledgement_of_Emergency_Stop_Radio_TrainToTrack)))
#endif /* kcg_copy_Acknowledgement_of_Emergency_Stop_Radio_TrainToTrack */

#ifndef kcg_copy_SoM_Position_Report_Radio_TrainToTrack
#define kcg_copy_SoM_Position_Report_Radio_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SoM_Position_Report_Radio_TrainToTrack)))
#endif /* kcg_copy_SoM_Position_Report_Radio_TrainToTrack */

#ifndef kcg_copy_Text_message_acknowledged_by_driver_Radio_TrainToTrack
#define kcg_copy_Text_message_acknowledged_by_driver_Radio_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Text_message_acknowledged_by_driver_Radio_TrainToTrack)))
#endif /* kcg_copy_Text_message_acknowledged_by_driver_Radio_TrainToTrack */

#ifndef kcg_copy_Movement_Authority_Radio_TrackToTrain
#define kcg_copy_Movement_Authority_Radio_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Movement_Authority_Radio_TrackToTrain)))
#endif /* kcg_copy_Movement_Authority_Radio_TrackToTrain */

#ifndef kcg_copy_Request_to_Shorten_MA_Radio_TrackToTrain
#define kcg_copy_Request_to_Shorten_MA_Radio_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Request_to_Shorten_MA_Radio_TrackToTrain)))
#endif /* kcg_copy_Request_to_Shorten_MA_Radio_TrackToTrain */

#ifndef kcg_copy_General_message_Radio_TrackToTrain
#define kcg_copy_General_message_Radio_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (General_message_Radio_TrackToTrain)))
#endif /* kcg_copy_General_message_Radio_TrackToTrain */

#ifndef kcg_copy_Infill_MA_Radio_TrackToTrain
#define kcg_copy_Infill_MA_Radio_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Infill_MA_Radio_TrackToTrain)))
#endif /* kcg_copy_Infill_MA_Radio_TrackToTrain */

#ifndef kcg_copy_Data_used_by_applications_outside_the_ERTMSETCS_system_TrackToTrain
#define kcg_copy_Data_used_by_applications_outside_the_ERTMSETCS_system_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Data_used_by_applications_outside_the_ERTMSETCS_system_TrackToTrain)))
#endif /* kcg_copy_Data_used_by_applications_outside_the_ERTMSETCS_system_TrackToTrain */

#ifndef kcg_copy_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg
#define kcg_copy_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg)))
#endif /* kcg_copy_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg */

#ifndef kcg_copy_Var130_TrackToTrain
#define kcg_copy_Var130_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Var130_TrackToTrain)))
#endif /* kcg_copy_Var130_TrackToTrain */

#ifndef kcg_copy_SVar30_TrackToTrain
#define kcg_copy_SVar30_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SVar30_TrackToTrain)))
#endif /* kcg_copy_SVar30_TrackToTrain */

#ifndef kcg_copy_SVar30_TrainToTrack
#define kcg_copy_SVar30_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SVar30_TrainToTrack)))
#endif /* kcg_copy_SVar30_TrainToTrack */

#ifndef kcg_copy_SVar111_TrainToTrack
#define kcg_copy_SVar111_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SVar111_TrainToTrack)))
#endif /* kcg_copy_SVar111_TrainToTrack */

#ifndef kcg_copy_BG_Message_T_BG_Types_Pkg
#define kcg_copy_BG_Message_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (BG_Message_T_BG_Types_Pkg)))
#endif /* kcg_copy_BG_Message_T_BG_Types_Pkg */

#ifndef kcg_copy_Virtual_Balise_Cover_marker_TrackToTrain
#define kcg_copy_Virtual_Balise_Cover_marker_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Virtual_Balise_Cover_marker_TrackToTrain)))
#endif /* kcg_copy_Virtual_Balise_Cover_marker_TrackToTrain */

#ifndef kcg_copy_Default_Gradient_for_Temporary_Speed_Restriction_TrackToTrain
#define kcg_copy_Default_Gradient_for_Temporary_Speed_Restriction_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Default_Gradient_for_Temporary_Speed_Restriction_TrackToTrain)))
#endif /* kcg_copy_Default_Gradient_for_Temporary_Speed_Restriction_TrackToTrain */

#ifndef kcg_copy_TrainInfo_T_BG_Types_Pkg
#define kcg_copy_TrainInfo_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TrainInfo_T_BG_Types_Pkg)))
#endif /* kcg_copy_TrainInfo_T_BG_Types_Pkg */

#ifndef kcg_copy_struct_10720
#define kcg_copy_struct_10720(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_10720)))
#endif /* kcg_copy_struct_10720 */

#ifndef kcg_copy_struct_10729
#define kcg_copy_struct_10729(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_10729)))
#endif /* kcg_copy_struct_10729 */

#ifndef kcg_copy_Train_running_number_TrainToTrack
#define kcg_copy_Train_running_number_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Train_running_number_TrainToTrack)))
#endif /* kcg_copy_Train_running_number_TrainToTrack */

#ifndef kcg_copy_Var800_TrackToTrain
#define kcg_copy_Var800_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Var800_TrackToTrain)))
#endif /* kcg_copy_Var800_TrackToTrain */

#ifndef kcg_copy_Request_to_shorten_MA_is_rejected_Radio_TrainToTrack
#define kcg_copy_Request_to_shorten_MA_is_rejected_Radio_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Request_to_shorten_MA_is_rejected_Radio_TrainToTrack)))
#endif /* kcg_copy_Request_to_shorten_MA_is_rejected_Radio_TrainToTrack */

#ifndef kcg_copy_Onboard_telephone_numbers_TrainToTrack
#define kcg_copy_Onboard_telephone_numbers_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Onboard_telephone_numbers_TrainToTrack)))
#endif /* kcg_copy_Onboard_telephone_numbers_TrainToTrack */

#ifndef kcg_copy_Validated_Train_Data_Radio_TrainToTrack
#define kcg_copy_Validated_Train_Data_Radio_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Validated_Train_Data_Radio_TrainToTrack)))
#endif /* kcg_copy_Validated_Train_Data_Radio_TrainToTrack */

#ifndef kcg_copy_Staff_Responsible_distance_Information_from_loop_TrackToTrain
#define kcg_copy_Staff_Responsible_distance_Information_from_loop_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Staff_Responsible_distance_Information_from_loop_TrackToTrain)))
#endif /* kcg_copy_Staff_Responsible_distance_Information_from_loop_TrackToTrain */

#ifndef kcg_copy_Gradient_Profile_TrackToTrain
#define kcg_copy_Gradient_Profile_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Gradient_Profile_TrackToTrain)))
#endif /* kcg_copy_Gradient_Profile_TrackToTrain */

#ifndef kcg_copy_International_Static_Speed_Profile_TrackToTrain
#define kcg_copy_International_Static_Speed_Profile_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (International_Static_Speed_Profile_TrackToTrain)))
#endif /* kcg_copy_International_Static_Speed_Profile_TrackToTrain */

#ifndef kcg_copy_Level_Transition_Order_TrackToTrain
#define kcg_copy_Level_Transition_Order_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Level_Transition_Order_TrackToTrain)))
#endif /* kcg_copy_Level_Transition_Order_TrackToTrain */

#ifndef kcg_copy_Session_Management_TrackToTrain
#define kcg_copy_Session_Management_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Session_Management_TrackToTrain)))
#endif /* kcg_copy_Session_Management_TrackToTrain */

#ifndef kcg_copy_Position_Report_Parameters_TrackToTrain
#define kcg_copy_Position_Report_Parameters_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Position_Report_Parameters_TrackToTrain)))
#endif /* kcg_copy_Position_Report_Parameters_TrackToTrain */

#ifndef kcg_copy_Temporary_Speed_Restriction_TrackToTrain
#define kcg_copy_Temporary_Speed_Restriction_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Temporary_Speed_Restriction_TrackToTrain)))
#endif /* kcg_copy_Temporary_Speed_Restriction_TrackToTrain */

#ifndef kcg_copy_RBC_transition_order_TrackToTrain
#define kcg_copy_RBC_transition_order_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RBC_transition_order_TrackToTrain)))
#endif /* kcg_copy_RBC_transition_order_TrackToTrain */

#ifndef kcg_copy_EOLM_Packet_TrackToTrain
#define kcg_copy_EOLM_Packet_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (EOLM_Packet_TrackToTrain)))
#endif /* kcg_copy_EOLM_Packet_TrackToTrain */

#ifndef kcg_copy_Radio_infill_request_Radio_TrainToTrack
#define kcg_copy_Radio_infill_request_Radio_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Radio_infill_request_Radio_TrainToTrack)))
#endif /* kcg_copy_Radio_infill_request_Radio_TrainToTrack */

#ifndef kcg_copy_SR_Authorisation_Radio_TrackToTrain
#define kcg_copy_SR_Authorisation_Radio_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SR_Authorisation_Radio_TrackToTrain)))
#endif /* kcg_copy_SR_Authorisation_Radio_TrackToTrain */

#ifndef kcg_copy_SH_Authorised_Radio_TrackToTrain
#define kcg_copy_SH_Authorised_Radio_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (SH_Authorised_Radio_TrackToTrain)))
#endif /* kcg_copy_SH_Authorised_Radio_TrackToTrain */

#ifndef kcg_copy_MA_with_Shifted_Location_Reference_Radio_TrackToTrain
#define kcg_copy_MA_with_Shifted_Location_Reference_Radio_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MA_with_Shifted_Location_Reference_Radio_TrackToTrain)))
#endif /* kcg_copy_MA_with_Shifted_Location_Reference_Radio_TrackToTrain */

#ifndef kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck
#define kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (trainPositionInfo_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_positionedBG_T_TrainPosition_Types_Pck
#define kcg_copy_positionedBG_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (positionedBG_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_positionedBG_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_Temporary_Speed_Restriction_Revocation_TrackToTrain
#define kcg_copy_Temporary_Speed_Restriction_Revocation_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Temporary_Speed_Restriction_Revocation_TrackToTrain)))
#endif /* kcg_copy_Temporary_Speed_Restriction_Revocation_TrackToTrain */

#ifndef kcg_copy_Track_Condition_Big_Metal_Masses_TrackToTrain
#define kcg_copy_Track_Condition_Big_Metal_Masses_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Track_Condition_Big_Metal_Masses_TrackToTrain)))
#endif /* kcg_copy_Track_Condition_Big_Metal_Masses_TrackToTrain */

#ifndef kcg_copy_Session_Established_Radio_TrainToTrack
#define kcg_copy_Session_Established_Radio_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Session_Established_Radio_TrainToTrack)))
#endif /* kcg_copy_Session_Established_Radio_TrainToTrack */

#ifndef kcg_copy_Movement_Authority_Request_Parameters_TrackToTrain
#define kcg_copy_Movement_Authority_Request_Parameters_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Movement_Authority_Request_Parameters_TrackToTrain)))
#endif /* kcg_copy_Movement_Authority_Request_Parameters_TrackToTrain */

#ifndef kcg_copy_Error_reporting_TrainToTrack
#define kcg_copy_Error_reporting_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Error_reporting_TrainToTrack)))
#endif /* kcg_copy_Error_reporting_TrainToTrack */

#ifndef kcg_copy_struct_11012
#define kcg_copy_struct_11012(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_11012)))
#endif /* kcg_copy_struct_11012 */

#ifndef kcg_copy_struct_11020
#define kcg_copy_struct_11020(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_11020)))
#endif /* kcg_copy_struct_11020 */

#ifndef kcg_copy_Reversing_supervision_information_TrackToTrain
#define kcg_copy_Reversing_supervision_information_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Reversing_supervision_information_TrackToTrain)))
#endif /* kcg_copy_Reversing_supervision_information_TrackToTrain */

#ifndef kcg_copy_struct_11039
#define kcg_copy_struct_11039(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_11039)))
#endif /* kcg_copy_struct_11039 */

#ifndef kcg_copy_Assignment_of_coordinate_system_Radio_TrackToTrain
#define kcg_copy_Assignment_of_coordinate_system_Radio_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Assignment_of_coordinate_system_Radio_TrackToTrain)))
#endif /* kcg_copy_Assignment_of_coordinate_system_Radio_TrackToTrain */

#ifndef kcg_copy_struct_11056
#define kcg_copy_struct_11056(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_11056)))
#endif /* kcg_copy_struct_11056 */

#ifndef kcg_copy_Var110_TrainToTrack
#define kcg_copy_Var110_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Var110_TrainToTrack)))
#endif /* kcg_copy_Var110_TrainToTrack */

#ifndef kcg_copy_Var210_TrackToTrain
#define kcg_copy_Var210_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Var210_TrackToTrain)))
#endif /* kcg_copy_Var210_TrackToTrain */

#ifndef kcg_copy_Var690_TrackToTrain
#define kcg_copy_Var690_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Var690_TrackToTrain)))
#endif /* kcg_copy_Var690_TrackToTrain */

#ifndef kcg_copy_FilteredBGMessage_T_BG_Types_Pkg
#define kcg_copy_FilteredBGMessage_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (FilteredBGMessage_T_BG_Types_Pkg)))
#endif /* kcg_copy_FilteredBGMessage_T_BG_Types_Pkg */

#ifndef kcg_copy_TelegramHeaderFlag_T_BG_Types_Pkg
#define kcg_copy_TelegramHeaderFlag_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TelegramHeaderFlag_T_BG_Types_Pkg)))
#endif /* kcg_copy_TelegramHeaderFlag_T_BG_Types_Pkg */

#ifndef kcg_copy_AdditionalInformation_T_BG_Types_Pkg
#define kcg_copy_AdditionalInformation_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (AdditionalInformation_T_BG_Types_Pkg)))
#endif /* kcg_copy_AdditionalInformation_T_BG_Types_Pkg */

#ifndef kcg_copy_Var32_TrackToTrain
#define kcg_copy_Var32_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Var32_TrackToTrain)))
#endif /* kcg_copy_Var32_TrackToTrain */

#ifndef kcg_copy_Conditional_Level_Transition_Order_TrackToTrain
#define kcg_copy_Conditional_Level_Transition_Order_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Conditional_Level_Transition_Order_TrackToTrain)))
#endif /* kcg_copy_Conditional_Level_Transition_Order_TrackToTrain */

#ifndef kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck
#define kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (infoFromLinking_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_Var580_TrackToTrain
#define kcg_copy_Var580_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Var580_TrackToTrain)))
#endif /* kcg_copy_Var580_TrackToTrain */

#ifndef kcg_copy_End_of_Mission_Radio_TrainToTrack
#define kcg_copy_End_of_Mission_Radio_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (End_of_Mission_Radio_TrainToTrack)))
#endif /* kcg_copy_End_of_Mission_Radio_TrainToTrack */

#ifndef kcg_copy_Var410_TrackToTrain
#define kcg_copy_Var410_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Var410_TrackToTrain)))
#endif /* kcg_copy_Var410_TrackToTrain */

#ifndef kcg_copy_Telegram_T_BG_Types_Pkg
#define kcg_copy_Telegram_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Telegram_T_BG_Types_Pkg)))
#endif /* kcg_copy_Telegram_T_BG_Types_Pkg */

#ifndef kcg_copy_Var271_TrackToTrain
#define kcg_copy_Var271_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Var271_TrackToTrain)))
#endif /* kcg_copy_Var271_TrackToTrain */

#ifndef kcg_copy_List_of_balises_for_SH_Area_TrackToTrain
#define kcg_copy_List_of_balises_for_SH_Area_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (List_of_balises_for_SH_Area_TrackToTrain)))
#endif /* kcg_copy_List_of_balises_for_SH_Area_TrackToTrain */

#ifndef kcg_copy_Var511_TrackToTrain
#define kcg_copy_Var511_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Var511_TrackToTrain)))
#endif /* kcg_copy_Var511_TrackToTrain */

#ifndef kcg_copy_List_of_Balises_in_SR_Authority_TrackToTrain
#define kcg_copy_List_of_Balises_in_SR_Authority_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (List_of_Balises_in_SR_Authority_TrackToTrain)))
#endif /* kcg_copy_List_of_Balises_in_SR_Authority_TrackToTrain */

#ifndef kcg_copy_Repositioning_Information_TrackToTrain
#define kcg_copy_Repositioning_Information_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Repositioning_Information_TrackToTrain)))
#endif /* kcg_copy_Repositioning_Information_TrackToTrain */

#ifndef kcg_copy_RBC_or_RIU_System_Version_Radio_TrackToTrain
#define kcg_copy_RBC_or_RIU_System_Version_Radio_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RBC_or_RIU_System_Version_Radio_TrackToTrain)))
#endif /* kcg_copy_RBC_or_RIU_System_Version_Radio_TrackToTrain */

#ifndef kcg_copy_Var680_TrackToTrain
#define kcg_copy_Var680_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Var680_TrackToTrain)))
#endif /* kcg_copy_Var680_TrackToTrain */

#ifndef kcg_copy_Reversing_area_information_TrackToTrain
#define kcg_copy_Reversing_area_information_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Reversing_area_information_TrackToTrain)))
#endif /* kcg_copy_Reversing_area_information_TrackToTrain */

#ifndef kcg_copy_Var700_TrackToTrain
#define kcg_copy_Var700_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Var700_TrackToTrain)))
#endif /* kcg_copy_Var700_TrackToTrain */

#ifndef kcg_copy_positionErrors_T_TrainPosition_Types_Pck
#define kcg_copy_positionErrors_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (positionErrors_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_positionErrors_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_Train_running_number_from_RBC_TrackToTrain
#define kcg_copy_Train_running_number_from_RBC_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Train_running_number_from_RBC_TrackToTrain)))
#endif /* kcg_copy_Train_running_number_from_RBC_TrackToTrain */

#ifndef kcg_copy_Track_Condition_Change_of_allowed_current_consumption_TrackToTrain
#define kcg_copy_Track_Condition_Change_of_allowed_current_consumption_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Track_Condition_Change_of_allowed_current_consumption_TrackToTrain)))
#endif /* kcg_copy_Track_Condition_Change_of_allowed_current_consumption_TrackToTrain */

#ifndef kcg_copy_struct_11281
#define kcg_copy_struct_11281(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_11281)))
#endif /* kcg_copy_struct_11281 */

#ifndef kcg_copy_Var460_TrackToTrain
#define kcg_copy_Var460_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Var460_TrackToTrain)))
#endif /* kcg_copy_Var460_TrackToTrain */

#ifndef kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg
#define kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (centerOfBalisePosition_T_BG_Types_Pkg)))
#endif /* kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg */

#ifndef kcg_copy_Var111_TrainToTrack
#define kcg_copy_Var111_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Var111_TrainToTrack)))
#endif /* kcg_copy_Var111_TrainToTrack */

#ifndef kcg_copy_Var520_TrackToTrain
#define kcg_copy_Var520_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Var520_TrackToTrain)))
#endif /* kcg_copy_Var520_TrackToTrain */

#ifndef kcg_copy_struct_11318
#define kcg_copy_struct_11318(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_11318)))
#endif /* kcg_copy_struct_11318 */

#ifndef kcg_copy_Track_Ahead_Free_Granted_Radio_TrainToTrack
#define kcg_copy_Track_Ahead_Free_Granted_Radio_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Track_Ahead_Free_Granted_Radio_TrainToTrack)))
#endif /* kcg_copy_Track_Ahead_Free_Granted_Radio_TrainToTrack */

#ifndef kcg_copy_National_Values_TrackToTrain
#define kcg_copy_National_Values_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (National_Values_TrackToTrain)))
#endif /* kcg_copy_National_Values_TrackToTrain */

#ifndef kcg_copy_Linking_TrackToTrain
#define kcg_copy_Linking_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Linking_TrackToTrain)))
#endif /* kcg_copy_Linking_TrackToTrain */

#ifndef kcg_copy_Level_1_Movement_Authority_TrackToTrain
#define kcg_copy_Level_1_Movement_Authority_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Level_1_Movement_Authority_TrackToTrain)))
#endif /* kcg_copy_Level_1_Movement_Authority_TrackToTrain */

#ifndef kcg_copy_Level_23_Movement_Authority_TrackToTrain
#define kcg_copy_Level_23_Movement_Authority_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Level_23_Movement_Authority_TrackToTrain)))
#endif /* kcg_copy_Level_23_Movement_Authority_TrackToTrain */

#ifndef kcg_copy_Axle_Load_Speed_Profile_TrackToTrain
#define kcg_copy_Axle_Load_Speed_Profile_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Axle_Load_Speed_Profile_TrackToTrain)))
#endif /* kcg_copy_Axle_Load_Speed_Profile_TrackToTrain */

#ifndef kcg_copy_Permitted_Braking_Distance_Information_TrackToTrain
#define kcg_copy_Permitted_Braking_Distance_Information_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Permitted_Braking_Distance_Information_TrackToTrain)))
#endif /* kcg_copy_Permitted_Braking_Distance_Information_TrackToTrain */

#ifndef kcg_copy_Track_Condition_TrackToTrain
#define kcg_copy_Track_Condition_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Track_Condition_TrackToTrain)))
#endif /* kcg_copy_Track_Condition_TrackToTrain */

#ifndef kcg_copy_Track_Condition_Station_Platforms_TrackToTrain
#define kcg_copy_Track_Condition_Station_Platforms_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Track_Condition_Station_Platforms_TrackToTrain)))
#endif /* kcg_copy_Track_Condition_Station_Platforms_TrackToTrain */

#ifndef kcg_copy_Route_Suitability_Data_TrackToTrain
#define kcg_copy_Route_Suitability_Data_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Route_Suitability_Data_TrackToTrain)))
#endif /* kcg_copy_Route_Suitability_Data_TrackToTrain */

#ifndef kcg_copy_Packet_for_sending_plain_text_messages_TrackToTrain
#define kcg_copy_Packet_for_sending_plain_text_messages_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Packet_for_sending_plain_text_messages_TrackToTrain)))
#endif /* kcg_copy_Packet_for_sending_plain_text_messages_TrackToTrain */

#ifndef kcg_copy_Packet_for_sending_fixed_text_messages_TrackToTrain
#define kcg_copy_Packet_for_sending_fixed_text_messages_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Packet_for_sending_fixed_text_messages_TrackToTrain)))
#endif /* kcg_copy_Packet_for_sending_fixed_text_messages_TrackToTrain */

#ifndef kcg_copy_Geographical_Position_Information_TrackToTrain
#define kcg_copy_Geographical_Position_Information_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Geographical_Position_Information_TrackToTrain)))
#endif /* kcg_copy_Geographical_Position_Information_TrackToTrain */

#ifndef kcg_copy_Mode_profile_TrackToTrain
#define kcg_copy_Mode_profile_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Mode_profile_TrackToTrain)))
#endif /* kcg_copy_Mode_profile_TrackToTrain */

#ifndef kcg_copy_Level_Crossing_information_TrackToTrain
#define kcg_copy_Level_Crossing_information_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Level_Crossing_information_TrackToTrain)))
#endif /* kcg_copy_Level_Crossing_information_TrackToTrain */

#ifndef kcg_copy_Radio_infill_area_information_TrackToTrain
#define kcg_copy_Radio_infill_area_information_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Radio_infill_area_information_TrackToTrain)))
#endif /* kcg_copy_Radio_infill_area_information_TrackToTrain */

#ifndef kcg_copy_Position_Report_TrainToTrack
#define kcg_copy_Position_Report_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Position_Report_TrainToTrack)))
#endif /* kcg_copy_Position_Report_TrainToTrack */

#ifndef kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack
#define kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Position_Report_based_on_two_balise_groups_TrainToTrack)))
#endif /* kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack */

#ifndef kcg_copy_Validated_train_data_TrainToTrack
#define kcg_copy_Validated_train_data_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Validated_train_data_TrainToTrack)))
#endif /* kcg_copy_Validated_train_data_TrainToTrack */

#ifndef kcg_copy_Conditional_Emergency_Stop_Radio_TrackToTrain
#define kcg_copy_Conditional_Emergency_Stop_Radio_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Conditional_Emergency_Stop_Radio_TrackToTrain)))
#endif /* kcg_copy_Conditional_Emergency_Stop_Radio_TrackToTrain */

#ifndef kcg_copy_Track_Ahead_Free_Request_Radio_TrackToTrain
#define kcg_copy_Track_Ahead_Free_Request_Radio_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Track_Ahead_Free_Request_Radio_TrackToTrain)))
#endif /* kcg_copy_Track_Ahead_Free_Request_Radio_TrackToTrain */

#ifndef kcg_copy_trainPosition_T_TrainPosition_Types_Pck
#define kcg_copy_trainPosition_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (trainPosition_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_trainPosition_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_passedBG_T_BG_Types_Pkg
#define kcg_copy_passedBG_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (passedBG_T_BG_Types_Pkg)))
#endif /* kcg_copy_passedBG_T_BG_Types_Pkg */

#ifndef kcg_copy_struct_11732
#define kcg_copy_struct_11732(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct_11732)))
#endif /* kcg_copy_struct_11732 */

#ifndef kcg_copy_LinkedBG_T_BG_Types_Pkg
#define kcg_copy_LinkedBG_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (LinkedBG_T_BG_Types_Pkg)))
#endif /* kcg_copy_LinkedBG_T_BG_Types_Pkg */

#ifndef kcg_copy_Var670_TrackToTrain
#define kcg_copy_Var670_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Var670_TrackToTrain)))
#endif /* kcg_copy_Var670_TrackToTrain */

#ifndef kcg_copy_trainProperties_T_TrainPosition_Types_Pck
#define kcg_copy_trainProperties_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (trainProperties_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_trainProperties_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_AVar111_TrainToTrack
#define kcg_copy_AVar111_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (AVar111_TrainToTrack)))
#endif /* kcg_copy_AVar111_TrainToTrack */

#ifndef kcg_copy_AVar34_TrackToTrain
#define kcg_copy_AVar34_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (AVar34_TrackToTrain)))
#endif /* kcg_copy_AVar34_TrackToTrain */

#ifndef kcg_copy_TelegramHeaderArray_T_BG_Types_Pkg
#define kcg_copy_TelegramHeaderArray_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (TelegramHeaderArray_T_BG_Types_Pkg)))
#endif /* kcg_copy_TelegramHeaderArray_T_BG_Types_Pkg */

#ifndef kcg_copy_array_10288
#define kcg_copy_array_10288(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_10288)))
#endif /* kcg_copy_array_10288 */

#ifndef kcg_copy_AVar110_TrainToTrack
#define kcg_copy_AVar110_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (AVar110_TrainToTrack)))
#endif /* kcg_copy_AVar110_TrainToTrack */

#ifndef kcg_copy_ListOfBG_BG_Types_Pkg
#define kcg_copy_ListOfBG_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (ListOfBG_BG_Types_Pkg)))
#endif /* kcg_copy_ListOfBG_BG_Types_Pkg */

#ifndef kcg_copy_AVar30_TrackToTrain
#define kcg_copy_AVar30_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (AVar30_TrackToTrain)))
#endif /* kcg_copy_AVar30_TrackToTrain */

#ifndef kcg_copy_positionedBGs_T_TrainPosition_Types_Pck
#define kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (positionedBGs_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_positionedBGs_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_AVar580_TrackToTrain
#define kcg_copy_AVar580_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (AVar580_TrackToTrain)))
#endif /* kcg_copy_AVar580_TrackToTrain */

#ifndef kcg_copy_AVar130_TrackToTrain
#define kcg_copy_AVar130_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (AVar130_TrackToTrain)))
#endif /* kcg_copy_AVar130_TrackToTrain */

#ifndef kcg_copy_array_10739
#define kcg_copy_array_10739(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_10739)))
#endif /* kcg_copy_array_10739 */

#ifndef kcg_copy_array_10743
#define kcg_copy_array_10743(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_10743)))
#endif /* kcg_copy_array_10743 */

#ifndef kcg_copy_AVar690_TrackToTrain
#define kcg_copy_AVar690_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (AVar690_TrackToTrain)))
#endif /* kcg_copy_AVar690_TrackToTrain */

#ifndef kcg_copy_AVar670_TrackToTrain
#define kcg_copy_AVar670_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (AVar670_TrackToTrain)))
#endif /* kcg_copy_AVar670_TrackToTrain */

#ifndef kcg_copy_AVar50_TrackToTrain
#define kcg_copy_AVar50_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (AVar50_TrackToTrain)))
#endif /* kcg_copy_AVar50_TrackToTrain */

#ifndef kcg_copy_AVar30_TrainToTrack
#define kcg_copy_AVar30_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (AVar30_TrainToTrack)))
#endif /* kcg_copy_AVar30_TrainToTrack */

#ifndef kcg_copy_array_11035
#define kcg_copy_array_11035(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_11035)))
#endif /* kcg_copy_array_11035 */

#ifndef kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck
#define kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck)))
#endif /* kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck */

#ifndef kcg_copy_LinkedBGs_T_BG_Types_Pkg
#define kcg_copy_LinkedBGs_T_BG_Types_Pkg(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (LinkedBGs_T_BG_Types_Pkg)))
#endif /* kcg_copy_LinkedBGs_T_BG_Types_Pkg */

#ifndef kcg_copy_AVar680_TrackToTrain
#define kcg_copy_AVar680_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (AVar680_TrackToTrain)))
#endif /* kcg_copy_AVar680_TrackToTrain */

#ifndef kcg_copy_AVar32_TrackToTrain
#define kcg_copy_AVar32_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (AVar32_TrackToTrain)))
#endif /* kcg_copy_AVar32_TrackToTrain */

#ifndef kcg_copy_AVar520_TrackToTrain
#define kcg_copy_AVar520_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (AVar520_TrackToTrain)))
#endif /* kcg_copy_AVar520_TrackToTrain */

#ifndef kcg_copy_AVar700_TrackToTrain
#define kcg_copy_AVar700_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (AVar700_TrackToTrain)))
#endif /* kcg_copy_AVar700_TrackToTrain */

#ifndef kcg_copy_AVar790_TrackToTrain
#define kcg_copy_AVar790_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (AVar790_TrackToTrain)))
#endif /* kcg_copy_AVar790_TrackToTrain */

#ifndef kcg_copy_AVar800_TrackToTrain
#define kcg_copy_AVar800_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (AVar800_TrackToTrain)))
#endif /* kcg_copy_AVar800_TrackToTrain */

#ifndef kcg_copy_AVar271_TrackToTrain
#define kcg_copy_AVar271_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (AVar271_TrackToTrain)))
#endif /* kcg_copy_AVar271_TrackToTrain */

#ifndef kcg_copy_AVar511_TrackToTrain
#define kcg_copy_AVar511_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (AVar511_TrackToTrain)))
#endif /* kcg_copy_AVar511_TrackToTrain */

#ifndef kcg_copy_AVar410_TrackToTrain
#define kcg_copy_AVar410_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (AVar410_TrackToTrain)))
#endif /* kcg_copy_AVar410_TrackToTrain */

#ifndef kcg_copy_array_11277
#define kcg_copy_array_11277(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_11277)))
#endif /* kcg_copy_array_11277 */

#ifndef kcg_copy_AVar460_TrackToTrain
#define kcg_copy_AVar460_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (AVar460_TrackToTrain)))
#endif /* kcg_copy_AVar460_TrackToTrain */

#ifndef kcg_copy_AVar210_TrackToTrain
#define kcg_copy_AVar210_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (AVar210_TrackToTrain)))
#endif /* kcg_copy_AVar210_TrackToTrain */

#ifdef kcg_use_Var790_TrackToTrain
#ifndef kcg_comp_Var790_TrackToTrain
extern kcg_bool kcg_comp_Var790_TrackToTrain(
  Var790_TrackToTrain *kcg_c1,
  Var790_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Var790_TrackToTrain */
#endif /* kcg_use_Var790_TrackToTrain */

#ifdef kcg_use_Data_used_by_applications_outside_the_ERTMS_or_ETCS_system_TrainToTrack
#ifndef kcg_comp_Data_used_by_applications_outside_the_ERTMS_or_ETCS_system_TrainToTrack
extern kcg_bool kcg_comp_Data_used_by_applications_outside_the_ERTMS_or_ETCS_system_TrainToTrack(
  Data_used_by_applications_outside_the_ERTMS_or_ETCS_system_TrainToTrack *kcg_c1,
  Data_used_by_applications_outside_the_ERTMS_or_ETCS_system_TrainToTrack *kcg_c2);
#endif /* kcg_comp_Data_used_by_applications_outside_the_ERTMS_or_ETCS_system_TrainToTrack */
#endif /* kcg_use_Data_used_by_applications_outside_the_ERTMS_or_ETCS_system_TrainToTrack */

#ifdef kcg_use_LocWithInAcc_T_Obu_BasicTypes_Pkg
#ifndef kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg
extern kcg_bool kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg(
  LocWithInAcc_T_Obu_BasicTypes_Pkg *kcg_c1,
  LocWithInAcc_T_Obu_BasicTypes_Pkg *kcg_c2);
#endif /* kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg */
#endif /* kcg_use_LocWithInAcc_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_Var30_TrackToTrain
#ifndef kcg_comp_Var30_TrackToTrain
extern kcg_bool kcg_comp_Var30_TrackToTrain(
  Var30_TrackToTrain *kcg_c1,
  Var30_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Var30_TrackToTrain */
#endif /* kcg_use_Var30_TrackToTrain */

#ifdef kcg_use_odometry_T_Obu_BasicTypes_Pkg
#ifndef kcg_comp_odometry_T_Obu_BasicTypes_Pkg
extern kcg_bool kcg_comp_odometry_T_Obu_BasicTypes_Pkg(
  odometry_T_Obu_BasicTypes_Pkg *kcg_c1,
  odometry_T_Obu_BasicTypes_Pkg *kcg_c2);
#endif /* kcg_comp_odometry_T_Obu_BasicTypes_Pkg */
#endif /* kcg_use_odometry_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_Level_23_transition_information_TrainToTrack
#ifndef kcg_comp_Level_23_transition_information_TrainToTrack
extern kcg_bool kcg_comp_Level_23_transition_information_TrainToTrack(
  Level_23_transition_information_TrainToTrack *kcg_c1,
  Level_23_transition_information_TrainToTrack *kcg_c2);
#endif /* kcg_comp_Level_23_transition_information_TrainToTrack */
#endif /* kcg_use_Level_23_transition_information_TrainToTrack */

#ifdef kcg_use_RBCReport_T_BG_Types_Pkg
#ifndef kcg_comp_RBCReport_T_BG_Types_Pkg
extern kcg_bool kcg_comp_RBCReport_T_BG_Types_Pkg(
  RBCReport_T_BG_Types_Pkg *kcg_c1,
  RBCReport_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_RBCReport_T_BG_Types_Pkg */
#endif /* kcg_use_RBCReport_T_BG_Types_Pkg */

#ifdef kcg_use_RBCOrientationReport_T_BG_Types_Pkg
#ifndef kcg_comp_RBCOrientationReport_T_BG_Types_Pkg
extern kcg_bool kcg_comp_RBCOrientationReport_T_BG_Types_Pkg(
  RBCOrientationReport_T_BG_Types_Pkg *kcg_c1,
  RBCOrientationReport_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_RBCOrientationReport_T_BG_Types_Pkg */
#endif /* kcg_use_RBCOrientationReport_T_BG_Types_Pkg */

#ifdef kcg_use_End_of_Information_BothWays
#ifndef kcg_comp_End_of_Information_BothWays
extern kcg_bool kcg_comp_End_of_Information_BothWays(
  End_of_Information_BothWays *kcg_c1,
  End_of_Information_BothWays *kcg_c2);
#endif /* kcg_comp_End_of_Information_BothWays */
#endif /* kcg_use_End_of_Information_BothWays */

#ifdef kcg_use_Request_for_Shunting_Radio_TrainToTrack
#ifndef kcg_comp_Request_for_Shunting_Radio_TrainToTrack
extern kcg_bool kcg_comp_Request_for_Shunting_Radio_TrainToTrack(
  Request_for_Shunting_Radio_TrainToTrack *kcg_c1,
  Request_for_Shunting_Radio_TrainToTrack *kcg_c2);
#endif /* kcg_comp_Request_for_Shunting_Radio_TrainToTrack */
#endif /* kcg_use_Request_for_Shunting_Radio_TrainToTrack */

#ifdef kcg_use_SVar32_TrackToTrain
#ifndef kcg_comp_SVar32_TrackToTrain
extern kcg_bool kcg_comp_SVar32_TrackToTrain(
  SVar32_TrackToTrain *kcg_c1,
  SVar32_TrackToTrain *kcg_c2);
#endif /* kcg_comp_SVar32_TrackToTrain */
#endif /* kcg_use_SVar32_TrackToTrain */

#ifdef kcg_use_struct_10297
#ifndef kcg_comp_struct_10297
extern kcg_bool kcg_comp_struct_10297(
  struct_10297 *kcg_c1,
  struct_10297 *kcg_c2);
#endif /* kcg_comp_struct_10297 */
#endif /* kcg_use_struct_10297 */

#ifdef kcg_use_SVar34_TrackToTrain
#ifndef kcg_comp_SVar34_TrackToTrain
extern kcg_bool kcg_comp_SVar34_TrackToTrain(
  SVar34_TrackToTrain *kcg_c1,
  SVar34_TrackToTrain *kcg_c2);
#endif /* kcg_comp_SVar34_TrackToTrain */
#endif /* kcg_use_SVar34_TrackToTrain */

#ifdef kcg_use_SVar50_TrackToTrain
#ifndef kcg_comp_SVar50_TrackToTrain
extern kcg_bool kcg_comp_SVar50_TrackToTrain(
  SVar50_TrackToTrain *kcg_c1,
  SVar50_TrackToTrain *kcg_c2);
#endif /* kcg_comp_SVar50_TrackToTrain */
#endif /* kcg_use_SVar50_TrackToTrain */

#ifdef kcg_use_SVar130_TrackToTrain
#ifndef kcg_comp_SVar130_TrackToTrain
extern kcg_bool kcg_comp_SVar130_TrackToTrain(
  SVar130_TrackToTrain *kcg_c1,
  SVar130_TrackToTrain *kcg_c2);
#endif /* kcg_comp_SVar130_TrackToTrain */
#endif /* kcg_use_SVar130_TrackToTrain */

#ifdef kcg_use_struct_10318
#ifndef kcg_comp_struct_10318
extern kcg_bool kcg_comp_struct_10318(
  struct_10318 *kcg_c1,
  struct_10318 *kcg_c2);
#endif /* kcg_comp_struct_10318 */
#endif /* kcg_use_struct_10318 */

#ifdef kcg_use_SVar210_TrackToTrain
#ifndef kcg_comp_SVar210_TrackToTrain
extern kcg_bool kcg_comp_SVar210_TrackToTrain(
  SVar210_TrackToTrain *kcg_c1,
  SVar210_TrackToTrain *kcg_c2);
#endif /* kcg_comp_SVar210_TrackToTrain */
#endif /* kcg_use_SVar210_TrackToTrain */

#ifdef kcg_use_SVar271_TrackToTrain
#ifndef kcg_comp_SVar271_TrackToTrain
extern kcg_bool kcg_comp_SVar271_TrackToTrain(
  SVar271_TrackToTrain *kcg_c1,
  SVar271_TrackToTrain *kcg_c2);
#endif /* kcg_comp_SVar271_TrackToTrain */
#endif /* kcg_use_SVar271_TrackToTrain */

#ifdef kcg_use_struct_10334
#ifndef kcg_comp_struct_10334
extern kcg_bool kcg_comp_struct_10334(
  struct_10334 *kcg_c1,
  struct_10334 *kcg_c2);
#endif /* kcg_comp_struct_10334 */
#endif /* kcg_use_struct_10334 */

#ifdef kcg_use_SVar410_TrackToTrain
#ifndef kcg_comp_SVar410_TrackToTrain
extern kcg_bool kcg_comp_SVar410_TrackToTrain(
  SVar410_TrackToTrain *kcg_c1,
  SVar410_TrackToTrain *kcg_c2);
#endif /* kcg_comp_SVar410_TrackToTrain */
#endif /* kcg_use_SVar410_TrackToTrain */

#ifdef kcg_use_SVar460_TrackToTrain
#ifndef kcg_comp_SVar460_TrackToTrain
extern kcg_bool kcg_comp_SVar460_TrackToTrain(
  SVar460_TrackToTrain *kcg_c1,
  SVar460_TrackToTrain *kcg_c2);
#endif /* kcg_comp_SVar460_TrackToTrain */
#endif /* kcg_use_SVar460_TrackToTrain */

#ifdef kcg_use_SVar511_TrackToTrain
#ifndef kcg_comp_SVar511_TrackToTrain
extern kcg_bool kcg_comp_SVar511_TrackToTrain(
  SVar511_TrackToTrain *kcg_c1,
  SVar511_TrackToTrain *kcg_c2);
#endif /* kcg_comp_SVar511_TrackToTrain */
#endif /* kcg_use_SVar511_TrackToTrain */

#ifdef kcg_use_struct_10355
#ifndef kcg_comp_struct_10355
extern kcg_bool kcg_comp_struct_10355(
  struct_10355 *kcg_c1,
  struct_10355 *kcg_c2);
#endif /* kcg_comp_struct_10355 */
#endif /* kcg_use_struct_10355 */

#ifdef kcg_use_SVar520_TrackToTrain
#ifndef kcg_comp_SVar520_TrackToTrain
extern kcg_bool kcg_comp_SVar520_TrackToTrain(
  SVar520_TrackToTrain *kcg_c1,
  SVar520_TrackToTrain *kcg_c2);
#endif /* kcg_comp_SVar520_TrackToTrain */
#endif /* kcg_use_SVar520_TrackToTrain */

#ifdef kcg_use_SVar580_TrackToTrain
#ifndef kcg_comp_SVar580_TrackToTrain
extern kcg_bool kcg_comp_SVar580_TrackToTrain(
  SVar580_TrackToTrain *kcg_c1,
  SVar580_TrackToTrain *kcg_c2);
#endif /* kcg_comp_SVar580_TrackToTrain */
#endif /* kcg_use_SVar580_TrackToTrain */

#ifdef kcg_use_struct_10371
#ifndef kcg_comp_struct_10371
extern kcg_bool kcg_comp_struct_10371(
  struct_10371 *kcg_c1,
  struct_10371 *kcg_c2);
#endif /* kcg_comp_struct_10371 */
#endif /* kcg_use_struct_10371 */

#ifdef kcg_use_SVar670_TrackToTrain
#ifndef kcg_comp_SVar670_TrackToTrain
extern kcg_bool kcg_comp_SVar670_TrackToTrain(
  SVar670_TrackToTrain *kcg_c1,
  SVar670_TrackToTrain *kcg_c2);
#endif /* kcg_comp_SVar670_TrackToTrain */
#endif /* kcg_use_SVar670_TrackToTrain */

#ifdef kcg_use_SVar680_TrackToTrain
#ifndef kcg_comp_SVar680_TrackToTrain
extern kcg_bool kcg_comp_SVar680_TrackToTrain(
  SVar680_TrackToTrain *kcg_c1,
  SVar680_TrackToTrain *kcg_c2);
#endif /* kcg_comp_SVar680_TrackToTrain */
#endif /* kcg_use_SVar680_TrackToTrain */

#ifdef kcg_use_SVar690_TrackToTrain
#ifndef kcg_comp_SVar690_TrackToTrain
extern kcg_bool kcg_comp_SVar690_TrackToTrain(
  SVar690_TrackToTrain *kcg_c1,
  SVar690_TrackToTrain *kcg_c2);
#endif /* kcg_comp_SVar690_TrackToTrain */
#endif /* kcg_use_SVar690_TrackToTrain */

#ifdef kcg_use_SVar700_TrackToTrain
#ifndef kcg_comp_SVar700_TrackToTrain
extern kcg_bool kcg_comp_SVar700_TrackToTrain(
  SVar700_TrackToTrain *kcg_c1,
  SVar700_TrackToTrain *kcg_c2);
#endif /* kcg_comp_SVar700_TrackToTrain */
#endif /* kcg_use_SVar700_TrackToTrain */

#ifdef kcg_use_SVar790_TrackToTrain
#ifndef kcg_comp_SVar790_TrackToTrain
extern kcg_bool kcg_comp_SVar790_TrackToTrain(
  SVar790_TrackToTrain *kcg_c1,
  SVar790_TrackToTrain *kcg_c2);
#endif /* kcg_comp_SVar790_TrackToTrain */
#endif /* kcg_use_SVar790_TrackToTrain */

#ifdef kcg_use_SVar800_TrackToTrain
#ifndef kcg_comp_SVar800_TrackToTrain
extern kcg_bool kcg_comp_SVar800_TrackToTrain(
  SVar800_TrackToTrain *kcg_c1,
  SVar800_TrackToTrain *kcg_c2);
#endif /* kcg_comp_SVar800_TrackToTrain */
#endif /* kcg_use_SVar800_TrackToTrain */

#ifdef kcg_use_SVar110_TrainToTrack
#ifndef kcg_comp_SVar110_TrainToTrack
extern kcg_bool kcg_comp_SVar110_TrainToTrack(
  SVar110_TrainToTrack *kcg_c1,
  SVar110_TrainToTrack *kcg_c2);
#endif /* kcg_comp_SVar110_TrainToTrack */
#endif /* kcg_use_SVar110_TrainToTrack */

#ifdef kcg_use_Var30_TrainToTrack
#ifndef kcg_comp_Var30_TrainToTrack
extern kcg_bool kcg_comp_Var30_TrainToTrack(
  Var30_TrainToTrack *kcg_c1,
  Var30_TrainToTrack *kcg_c2);
#endif /* kcg_comp_Var30_TrainToTrack */
#endif /* kcg_use_Var30_TrainToTrack */

#ifdef kcg_use_CurrentLRBG_BG_Types_Pkg
#ifndef kcg_comp_CurrentLRBG_BG_Types_Pkg
extern kcg_bool kcg_comp_CurrentLRBG_BG_Types_Pkg(
  CurrentLRBG_BG_Types_Pkg *kcg_c1,
  CurrentLRBG_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_CurrentLRBG_BG_Types_Pkg */
#endif /* kcg_use_CurrentLRBG_BG_Types_Pkg */

#ifdef kcg_use_struct_10421
#ifndef kcg_comp_struct_10421
extern kcg_bool kcg_comp_struct_10421(
  struct_10421 *kcg_c1,
  struct_10421 *kcg_c2);
#endif /* kcg_comp_struct_10421 */
#endif /* kcg_use_struct_10421 */

#ifdef kcg_use_LutIndex_lut
#ifndef kcg_comp_LutIndex_lut
extern kcg_bool kcg_comp_LutIndex_lut(
  LutIndex_lut *kcg_c1,
  LutIndex_lut *kcg_c2);
#endif /* kcg_comp_LutIndex_lut */
#endif /* kcg_use_LutIndex_lut */

#ifdef kcg_use_Train_Position_Report_Radio_TrainToTrack
#ifndef kcg_comp_Train_Position_Report_Radio_TrainToTrack
extern kcg_bool kcg_comp_Train_Position_Report_Radio_TrainToTrack(
  Train_Position_Report_Radio_TrainToTrack *kcg_c1,
  Train_Position_Report_Radio_TrainToTrack *kcg_c2);
#endif /* kcg_comp_Train_Position_Report_Radio_TrainToTrack */
#endif /* kcg_use_Train_Position_Report_Radio_TrainToTrack */

#ifdef kcg_use_struct_10441
#ifndef kcg_comp_struct_10441
extern kcg_bool kcg_comp_struct_10441(
  struct_10441 *kcg_c1,
  struct_10441 *kcg_c2);
#endif /* kcg_comp_struct_10441 */
#endif /* kcg_use_struct_10441 */

#ifdef kcg_use_Danger_for_Shunting_information_TrackToTrain
#ifndef kcg_comp_Danger_for_Shunting_information_TrackToTrain
extern kcg_bool kcg_comp_Danger_for_Shunting_information_TrackToTrain(
  Danger_for_Shunting_information_TrackToTrain *kcg_c1,
  Danger_for_Shunting_information_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Danger_for_Shunting_information_TrackToTrain */
#endif /* kcg_use_Danger_for_Shunting_information_TrackToTrain */

#ifdef kcg_use_Request_to_shorten_MA_is_granted_Radio_TrainToTrack
#ifndef kcg_comp_Request_to_shorten_MA_is_granted_Radio_TrainToTrack
extern kcg_bool kcg_comp_Request_to_shorten_MA_is_granted_Radio_TrainToTrack(
  Request_to_shorten_MA_is_granted_Radio_TrainToTrack *kcg_c1,
  Request_to_shorten_MA_is_granted_Radio_TrainToTrack *kcg_c2);
#endif /* kcg_comp_Request_to_shorten_MA_is_granted_Radio_TrainToTrack */
#endif /* kcg_use_Request_to_shorten_MA_is_granted_Radio_TrainToTrack */

#ifdef kcg_use_struct_10470
#ifndef kcg_comp_struct_10470
extern kcg_bool kcg_comp_struct_10470(
  struct_10470 *kcg_c1,
  struct_10470 *kcg_c2);
#endif /* kcg_comp_struct_10470 */
#endif /* kcg_use_struct_10470 */

#ifdef kcg_use_Stop_if_in_Staff_Responsible_TrackToTrain
#ifndef kcg_comp_Stop_if_in_Staff_Responsible_TrackToTrain
extern kcg_bool kcg_comp_Stop_if_in_Staff_Responsible_TrackToTrain(
  Stop_if_in_Staff_Responsible_TrackToTrain *kcg_c1,
  Stop_if_in_Staff_Responsible_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Stop_if_in_Staff_Responsible_TrackToTrain */
#endif /* kcg_use_Stop_if_in_Staff_Responsible_TrackToTrain */

#ifdef kcg_use_OdometryLocations_T_Obu_BasicTypes_Pkg
#ifndef kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg
extern kcg_bool kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg(
  OdometryLocations_T_Obu_BasicTypes_Pkg *kcg_c1,
  OdometryLocations_T_Obu_BasicTypes_Pkg *kcg_c2);
#endif /* kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg */
#endif /* kcg_use_OdometryLocations_T_Obu_BasicTypes_Pkg */

#ifdef kcg_use_System_Version_order_TrackToTrain
#ifndef kcg_comp_System_Version_order_TrackToTrain
extern kcg_bool kcg_comp_System_Version_order_TrackToTrain(
  System_Version_order_TrackToTrain *kcg_c1,
  System_Version_order_TrackToTrain *kcg_c2);
#endif /* kcg_comp_System_Version_order_TrackToTrain */
#endif /* kcg_use_System_Version_order_TrackToTrain */

#ifdef kcg_use_struct_10503
#ifndef kcg_comp_struct_10503
extern kcg_bool kcg_comp_struct_10503(
  struct_10503 *kcg_c1,
  struct_10503 *kcg_c2);
#endif /* kcg_comp_struct_10503 */
#endif /* kcg_use_struct_10503 */

#ifdef kcg_use_Var34_TrackToTrain
#ifndef kcg_comp_Var34_TrackToTrain
extern kcg_bool kcg_comp_Var34_TrackToTrain(
  Var34_TrackToTrain *kcg_c1,
  Var34_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Var34_TrackToTrain */
#endif /* kcg_use_Var34_TrackToTrain */

#ifdef kcg_use_Radio_Network_registration_TrackToTrain
#ifndef kcg_comp_Radio_Network_registration_TrackToTrain
extern kcg_bool kcg_comp_Radio_Network_registration_TrackToTrain(
  Radio_Network_registration_TrackToTrain *kcg_c1,
  Radio_Network_registration_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Radio_Network_registration_TrackToTrain */
#endif /* kcg_use_Radio_Network_registration_TrackToTrain */

#ifdef kcg_use_Var50_TrackToTrain
#ifndef kcg_comp_Var50_TrackToTrain
extern kcg_bool kcg_comp_Var50_TrackToTrain(
  Var50_TrackToTrain *kcg_c1,
  Var50_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Var50_TrackToTrain */
#endif /* kcg_use_Var50_TrackToTrain */

#ifdef kcg_use_Virtual_Balise_Cover_order_TrackToTrain
#ifndef kcg_comp_Virtual_Balise_Cover_order_TrackToTrain
extern kcg_bool kcg_comp_Virtual_Balise_Cover_order_TrackToTrain(
  Virtual_Balise_Cover_order_TrackToTrain *kcg_c1,
  Virtual_Balise_Cover_order_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Virtual_Balise_Cover_order_TrackToTrain */
#endif /* kcg_use_Virtual_Balise_Cover_order_TrackToTrain */

#ifdef kcg_use_Track_Condition_Change_of_traction_system_TrackToTrain
#ifndef kcg_comp_Track_Condition_Change_of_traction_system_TrackToTrain
extern kcg_bool kcg_comp_Track_Condition_Change_of_traction_system_TrackToTrain(
  Track_Condition_Change_of_traction_system_TrackToTrain *kcg_c1,
  Track_Condition_Change_of_traction_system_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Track_Condition_Change_of_traction_system_TrackToTrain */
#endif /* kcg_use_Track_Condition_Change_of_traction_system_TrackToTrain */

#ifdef kcg_use_Adhesion_factor_TrackToTrain
#ifndef kcg_comp_Adhesion_factor_TrackToTrain
extern kcg_bool kcg_comp_Adhesion_factor_TrackToTrain(
  Adhesion_factor_TrackToTrain *kcg_c1,
  Adhesion_factor_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Adhesion_factor_TrackToTrain */
#endif /* kcg_use_Adhesion_factor_TrackToTrain */

#ifdef kcg_use_Session_Management_with_neighbouring_Radio_Infill_Unit_TrackToTrain
#ifndef kcg_comp_Session_Management_with_neighbouring_Radio_Infill_Unit_TrackToTrain
extern kcg_bool kcg_comp_Session_Management_with_neighbouring_Radio_Infill_Unit_TrackToTrain(
  Session_Management_with_neighbouring_Radio_Infill_Unit_TrackToTrain *kcg_c1,
  Session_Management_with_neighbouring_Radio_Infill_Unit_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Session_Management_with_neighbouring_Radio_Infill_Unit_TrackToTrain */
#endif /* kcg_use_Session_Management_with_neighbouring_Radio_Infill_Unit_TrackToTrain */

#ifdef kcg_use_MA_Request_Radio_TrainToTrack
#ifndef kcg_comp_MA_Request_Radio_TrainToTrack
extern kcg_bool kcg_comp_MA_Request_Radio_TrainToTrack(
  MA_Request_Radio_TrainToTrack *kcg_c1,
  MA_Request_Radio_TrainToTrack *kcg_c2);
#endif /* kcg_comp_MA_Request_Radio_TrainToTrack */
#endif /* kcg_use_MA_Request_Radio_TrainToTrack */

#ifdef kcg_use_Acknowledgement_of_Emergency_Stop_Radio_TrainToTrack
#ifndef kcg_comp_Acknowledgement_of_Emergency_Stop_Radio_TrainToTrack
extern kcg_bool kcg_comp_Acknowledgement_of_Emergency_Stop_Radio_TrainToTrack(
  Acknowledgement_of_Emergency_Stop_Radio_TrainToTrack *kcg_c1,
  Acknowledgement_of_Emergency_Stop_Radio_TrainToTrack *kcg_c2);
#endif /* kcg_comp_Acknowledgement_of_Emergency_Stop_Radio_TrainToTrack */
#endif /* kcg_use_Acknowledgement_of_Emergency_Stop_Radio_TrainToTrack */

#ifdef kcg_use_SoM_Position_Report_Radio_TrainToTrack
#ifndef kcg_comp_SoM_Position_Report_Radio_TrainToTrack
extern kcg_bool kcg_comp_SoM_Position_Report_Radio_TrainToTrack(
  SoM_Position_Report_Radio_TrainToTrack *kcg_c1,
  SoM_Position_Report_Radio_TrainToTrack *kcg_c2);
#endif /* kcg_comp_SoM_Position_Report_Radio_TrainToTrack */
#endif /* kcg_use_SoM_Position_Report_Radio_TrainToTrack */

#ifdef kcg_use_Text_message_acknowledged_by_driver_Radio_TrainToTrack
#ifndef kcg_comp_Text_message_acknowledged_by_driver_Radio_TrainToTrack
extern kcg_bool kcg_comp_Text_message_acknowledged_by_driver_Radio_TrainToTrack(
  Text_message_acknowledged_by_driver_Radio_TrainToTrack *kcg_c1,
  Text_message_acknowledged_by_driver_Radio_TrainToTrack *kcg_c2);
#endif /* kcg_comp_Text_message_acknowledged_by_driver_Radio_TrainToTrack */
#endif /* kcg_use_Text_message_acknowledged_by_driver_Radio_TrainToTrack */

#ifdef kcg_use_Movement_Authority_Radio_TrackToTrain
#ifndef kcg_comp_Movement_Authority_Radio_TrackToTrain
extern kcg_bool kcg_comp_Movement_Authority_Radio_TrackToTrain(
  Movement_Authority_Radio_TrackToTrain *kcg_c1,
  Movement_Authority_Radio_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Movement_Authority_Radio_TrackToTrain */
#endif /* kcg_use_Movement_Authority_Radio_TrackToTrain */

#ifdef kcg_use_Request_to_Shorten_MA_Radio_TrackToTrain
#ifndef kcg_comp_Request_to_Shorten_MA_Radio_TrackToTrain
extern kcg_bool kcg_comp_Request_to_Shorten_MA_Radio_TrackToTrain(
  Request_to_Shorten_MA_Radio_TrackToTrain *kcg_c1,
  Request_to_Shorten_MA_Radio_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Request_to_Shorten_MA_Radio_TrackToTrain */
#endif /* kcg_use_Request_to_Shorten_MA_Radio_TrackToTrain */

#ifdef kcg_use_General_message_Radio_TrackToTrain
#ifndef kcg_comp_General_message_Radio_TrackToTrain
extern kcg_bool kcg_comp_General_message_Radio_TrackToTrain(
  General_message_Radio_TrackToTrain *kcg_c1,
  General_message_Radio_TrackToTrain *kcg_c2);
#endif /* kcg_comp_General_message_Radio_TrackToTrain */
#endif /* kcg_use_General_message_Radio_TrackToTrain */

#ifdef kcg_use_Infill_MA_Radio_TrackToTrain
#ifndef kcg_comp_Infill_MA_Radio_TrackToTrain
extern kcg_bool kcg_comp_Infill_MA_Radio_TrackToTrain(
  Infill_MA_Radio_TrackToTrain *kcg_c1,
  Infill_MA_Radio_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Infill_MA_Radio_TrackToTrain */
#endif /* kcg_use_Infill_MA_Radio_TrackToTrain */

#ifdef kcg_use_Data_used_by_applications_outside_the_ERTMSETCS_system_TrackToTrain
#ifndef kcg_comp_Data_used_by_applications_outside_the_ERTMSETCS_system_TrackToTrain
extern kcg_bool kcg_comp_Data_used_by_applications_outside_the_ERTMSETCS_system_TrackToTrain(
  Data_used_by_applications_outside_the_ERTMSETCS_system_TrackToTrain *kcg_c1,
  Data_used_by_applications_outside_the_ERTMSETCS_system_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Data_used_by_applications_outside_the_ERTMSETCS_system_TrackToTrain */
#endif /* kcg_use_Data_used_by_applications_outside_the_ERTMSETCS_system_TrackToTrain */

#ifdef kcg_use_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg
#ifndef kcg_comp_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg
extern kcg_bool kcg_comp_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg(
  positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg *kcg_c1,
  positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg *kcg_c2);
#endif /* kcg_comp_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg */
#endif /* kcg_use_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg */

#ifdef kcg_use_Var130_TrackToTrain
#ifndef kcg_comp_Var130_TrackToTrain
extern kcg_bool kcg_comp_Var130_TrackToTrain(
  Var130_TrackToTrain *kcg_c1,
  Var130_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Var130_TrackToTrain */
#endif /* kcg_use_Var130_TrackToTrain */

#ifdef kcg_use_SVar30_TrackToTrain
#ifndef kcg_comp_SVar30_TrackToTrain
extern kcg_bool kcg_comp_SVar30_TrackToTrain(
  SVar30_TrackToTrain *kcg_c1,
  SVar30_TrackToTrain *kcg_c2);
#endif /* kcg_comp_SVar30_TrackToTrain */
#endif /* kcg_use_SVar30_TrackToTrain */

#ifdef kcg_use_SVar30_TrainToTrack
#ifndef kcg_comp_SVar30_TrainToTrack
extern kcg_bool kcg_comp_SVar30_TrainToTrack(
  SVar30_TrainToTrack *kcg_c1,
  SVar30_TrainToTrack *kcg_c2);
#endif /* kcg_comp_SVar30_TrainToTrack */
#endif /* kcg_use_SVar30_TrainToTrack */

#ifdef kcg_use_SVar111_TrainToTrack
#ifndef kcg_comp_SVar111_TrainToTrack
extern kcg_bool kcg_comp_SVar111_TrainToTrack(
  SVar111_TrainToTrack *kcg_c1,
  SVar111_TrainToTrack *kcg_c2);
#endif /* kcg_comp_SVar111_TrainToTrack */
#endif /* kcg_use_SVar111_TrainToTrack */

#ifdef kcg_use_BG_Message_T_BG_Types_Pkg
#ifndef kcg_comp_BG_Message_T_BG_Types_Pkg
extern kcg_bool kcg_comp_BG_Message_T_BG_Types_Pkg(
  BG_Message_T_BG_Types_Pkg *kcg_c1,
  BG_Message_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_BG_Message_T_BG_Types_Pkg */
#endif /* kcg_use_BG_Message_T_BG_Types_Pkg */

#ifdef kcg_use_Virtual_Balise_Cover_marker_TrackToTrain
#ifndef kcg_comp_Virtual_Balise_Cover_marker_TrackToTrain
extern kcg_bool kcg_comp_Virtual_Balise_Cover_marker_TrackToTrain(
  Virtual_Balise_Cover_marker_TrackToTrain *kcg_c1,
  Virtual_Balise_Cover_marker_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Virtual_Balise_Cover_marker_TrackToTrain */
#endif /* kcg_use_Virtual_Balise_Cover_marker_TrackToTrain */

#ifdef kcg_use_Default_Gradient_for_Temporary_Speed_Restriction_TrackToTrain
#ifndef kcg_comp_Default_Gradient_for_Temporary_Speed_Restriction_TrackToTrain
extern kcg_bool kcg_comp_Default_Gradient_for_Temporary_Speed_Restriction_TrackToTrain(
  Default_Gradient_for_Temporary_Speed_Restriction_TrackToTrain *kcg_c1,
  Default_Gradient_for_Temporary_Speed_Restriction_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Default_Gradient_for_Temporary_Speed_Restriction_TrackToTrain */
#endif /* kcg_use_Default_Gradient_for_Temporary_Speed_Restriction_TrackToTrain */

#ifdef kcg_use_TrainInfo_T_BG_Types_Pkg
#ifndef kcg_comp_TrainInfo_T_BG_Types_Pkg
extern kcg_bool kcg_comp_TrainInfo_T_BG_Types_Pkg(
  TrainInfo_T_BG_Types_Pkg *kcg_c1,
  TrainInfo_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_TrainInfo_T_BG_Types_Pkg */
#endif /* kcg_use_TrainInfo_T_BG_Types_Pkg */

#ifdef kcg_use_struct_10720
#ifndef kcg_comp_struct_10720
extern kcg_bool kcg_comp_struct_10720(
  struct_10720 *kcg_c1,
  struct_10720 *kcg_c2);
#endif /* kcg_comp_struct_10720 */
#endif /* kcg_use_struct_10720 */

#ifdef kcg_use_struct_10729
#ifndef kcg_comp_struct_10729
extern kcg_bool kcg_comp_struct_10729(
  struct_10729 *kcg_c1,
  struct_10729 *kcg_c2);
#endif /* kcg_comp_struct_10729 */
#endif /* kcg_use_struct_10729 */

#ifdef kcg_use_Train_running_number_TrainToTrack
#ifndef kcg_comp_Train_running_number_TrainToTrack
extern kcg_bool kcg_comp_Train_running_number_TrainToTrack(
  Train_running_number_TrainToTrack *kcg_c1,
  Train_running_number_TrainToTrack *kcg_c2);
#endif /* kcg_comp_Train_running_number_TrainToTrack */
#endif /* kcg_use_Train_running_number_TrainToTrack */

#ifdef kcg_use_Var800_TrackToTrain
#ifndef kcg_comp_Var800_TrackToTrain
extern kcg_bool kcg_comp_Var800_TrackToTrain(
  Var800_TrackToTrain *kcg_c1,
  Var800_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Var800_TrackToTrain */
#endif /* kcg_use_Var800_TrackToTrain */

#ifdef kcg_use_Request_to_shorten_MA_is_rejected_Radio_TrainToTrack
#ifndef kcg_comp_Request_to_shorten_MA_is_rejected_Radio_TrainToTrack
extern kcg_bool kcg_comp_Request_to_shorten_MA_is_rejected_Radio_TrainToTrack(
  Request_to_shorten_MA_is_rejected_Radio_TrainToTrack *kcg_c1,
  Request_to_shorten_MA_is_rejected_Radio_TrainToTrack *kcg_c2);
#endif /* kcg_comp_Request_to_shorten_MA_is_rejected_Radio_TrainToTrack */
#endif /* kcg_use_Request_to_shorten_MA_is_rejected_Radio_TrainToTrack */

#ifdef kcg_use_Onboard_telephone_numbers_TrainToTrack
#ifndef kcg_comp_Onboard_telephone_numbers_TrainToTrack
extern kcg_bool kcg_comp_Onboard_telephone_numbers_TrainToTrack(
  Onboard_telephone_numbers_TrainToTrack *kcg_c1,
  Onboard_telephone_numbers_TrainToTrack *kcg_c2);
#endif /* kcg_comp_Onboard_telephone_numbers_TrainToTrack */
#endif /* kcg_use_Onboard_telephone_numbers_TrainToTrack */

#ifdef kcg_use_Validated_Train_Data_Radio_TrainToTrack
#ifndef kcg_comp_Validated_Train_Data_Radio_TrainToTrack
extern kcg_bool kcg_comp_Validated_Train_Data_Radio_TrainToTrack(
  Validated_Train_Data_Radio_TrainToTrack *kcg_c1,
  Validated_Train_Data_Radio_TrainToTrack *kcg_c2);
#endif /* kcg_comp_Validated_Train_Data_Radio_TrainToTrack */
#endif /* kcg_use_Validated_Train_Data_Radio_TrainToTrack */

#ifdef kcg_use_Staff_Responsible_distance_Information_from_loop_TrackToTrain
#ifndef kcg_comp_Staff_Responsible_distance_Information_from_loop_TrackToTrain
extern kcg_bool kcg_comp_Staff_Responsible_distance_Information_from_loop_TrackToTrain(
  Staff_Responsible_distance_Information_from_loop_TrackToTrain *kcg_c1,
  Staff_Responsible_distance_Information_from_loop_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Staff_Responsible_distance_Information_from_loop_TrackToTrain */
#endif /* kcg_use_Staff_Responsible_distance_Information_from_loop_TrackToTrain */

#ifdef kcg_use_Gradient_Profile_TrackToTrain
#ifndef kcg_comp_Gradient_Profile_TrackToTrain
extern kcg_bool kcg_comp_Gradient_Profile_TrackToTrain(
  Gradient_Profile_TrackToTrain *kcg_c1,
  Gradient_Profile_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Gradient_Profile_TrackToTrain */
#endif /* kcg_use_Gradient_Profile_TrackToTrain */

#ifdef kcg_use_International_Static_Speed_Profile_TrackToTrain
#ifndef kcg_comp_International_Static_Speed_Profile_TrackToTrain
extern kcg_bool kcg_comp_International_Static_Speed_Profile_TrackToTrain(
  International_Static_Speed_Profile_TrackToTrain *kcg_c1,
  International_Static_Speed_Profile_TrackToTrain *kcg_c2);
#endif /* kcg_comp_International_Static_Speed_Profile_TrackToTrain */
#endif /* kcg_use_International_Static_Speed_Profile_TrackToTrain */

#ifdef kcg_use_Level_Transition_Order_TrackToTrain
#ifndef kcg_comp_Level_Transition_Order_TrackToTrain
extern kcg_bool kcg_comp_Level_Transition_Order_TrackToTrain(
  Level_Transition_Order_TrackToTrain *kcg_c1,
  Level_Transition_Order_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Level_Transition_Order_TrackToTrain */
#endif /* kcg_use_Level_Transition_Order_TrackToTrain */

#ifdef kcg_use_Session_Management_TrackToTrain
#ifndef kcg_comp_Session_Management_TrackToTrain
extern kcg_bool kcg_comp_Session_Management_TrackToTrain(
  Session_Management_TrackToTrain *kcg_c1,
  Session_Management_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Session_Management_TrackToTrain */
#endif /* kcg_use_Session_Management_TrackToTrain */

#ifdef kcg_use_Position_Report_Parameters_TrackToTrain
#ifndef kcg_comp_Position_Report_Parameters_TrackToTrain
extern kcg_bool kcg_comp_Position_Report_Parameters_TrackToTrain(
  Position_Report_Parameters_TrackToTrain *kcg_c1,
  Position_Report_Parameters_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Position_Report_Parameters_TrackToTrain */
#endif /* kcg_use_Position_Report_Parameters_TrackToTrain */

#ifdef kcg_use_Temporary_Speed_Restriction_TrackToTrain
#ifndef kcg_comp_Temporary_Speed_Restriction_TrackToTrain
extern kcg_bool kcg_comp_Temporary_Speed_Restriction_TrackToTrain(
  Temporary_Speed_Restriction_TrackToTrain *kcg_c1,
  Temporary_Speed_Restriction_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Temporary_Speed_Restriction_TrackToTrain */
#endif /* kcg_use_Temporary_Speed_Restriction_TrackToTrain */

#ifdef kcg_use_RBC_transition_order_TrackToTrain
#ifndef kcg_comp_RBC_transition_order_TrackToTrain
extern kcg_bool kcg_comp_RBC_transition_order_TrackToTrain(
  RBC_transition_order_TrackToTrain *kcg_c1,
  RBC_transition_order_TrackToTrain *kcg_c2);
#endif /* kcg_comp_RBC_transition_order_TrackToTrain */
#endif /* kcg_use_RBC_transition_order_TrackToTrain */

#ifdef kcg_use_EOLM_Packet_TrackToTrain
#ifndef kcg_comp_EOLM_Packet_TrackToTrain
extern kcg_bool kcg_comp_EOLM_Packet_TrackToTrain(
  EOLM_Packet_TrackToTrain *kcg_c1,
  EOLM_Packet_TrackToTrain *kcg_c2);
#endif /* kcg_comp_EOLM_Packet_TrackToTrain */
#endif /* kcg_use_EOLM_Packet_TrackToTrain */

#ifdef kcg_use_Radio_infill_request_Radio_TrainToTrack
#ifndef kcg_comp_Radio_infill_request_Radio_TrainToTrack
extern kcg_bool kcg_comp_Radio_infill_request_Radio_TrainToTrack(
  Radio_infill_request_Radio_TrainToTrack *kcg_c1,
  Radio_infill_request_Radio_TrainToTrack *kcg_c2);
#endif /* kcg_comp_Radio_infill_request_Radio_TrainToTrack */
#endif /* kcg_use_Radio_infill_request_Radio_TrainToTrack */

#ifdef kcg_use_SR_Authorisation_Radio_TrackToTrain
#ifndef kcg_comp_SR_Authorisation_Radio_TrackToTrain
extern kcg_bool kcg_comp_SR_Authorisation_Radio_TrackToTrain(
  SR_Authorisation_Radio_TrackToTrain *kcg_c1,
  SR_Authorisation_Radio_TrackToTrain *kcg_c2);
#endif /* kcg_comp_SR_Authorisation_Radio_TrackToTrain */
#endif /* kcg_use_SR_Authorisation_Radio_TrackToTrain */

#ifdef kcg_use_SH_Authorised_Radio_TrackToTrain
#ifndef kcg_comp_SH_Authorised_Radio_TrackToTrain
extern kcg_bool kcg_comp_SH_Authorised_Radio_TrackToTrain(
  SH_Authorised_Radio_TrackToTrain *kcg_c1,
  SH_Authorised_Radio_TrackToTrain *kcg_c2);
#endif /* kcg_comp_SH_Authorised_Radio_TrackToTrain */
#endif /* kcg_use_SH_Authorised_Radio_TrackToTrain */

#ifdef kcg_use_MA_with_Shifted_Location_Reference_Radio_TrackToTrain
#ifndef kcg_comp_MA_with_Shifted_Location_Reference_Radio_TrackToTrain
extern kcg_bool kcg_comp_MA_with_Shifted_Location_Reference_Radio_TrackToTrain(
  MA_with_Shifted_Location_Reference_Radio_TrackToTrain *kcg_c1,
  MA_with_Shifted_Location_Reference_Radio_TrackToTrain *kcg_c2);
#endif /* kcg_comp_MA_with_Shifted_Location_Reference_Radio_TrackToTrain */
#endif /* kcg_use_MA_with_Shifted_Location_Reference_Radio_TrackToTrain */

#ifdef kcg_use_trainPositionInfo_T_TrainPosition_Types_Pck
#ifndef kcg_comp_trainPositionInfo_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_trainPositionInfo_T_TrainPosition_Types_Pck(
  trainPositionInfo_T_TrainPosition_Types_Pck *kcg_c1,
  trainPositionInfo_T_TrainPosition_Types_Pck *kcg_c2);
#endif /* kcg_comp_trainPositionInfo_T_TrainPosition_Types_Pck */
#endif /* kcg_use_trainPositionInfo_T_TrainPosition_Types_Pck */

#ifdef kcg_use_positionedBG_T_TrainPosition_Types_Pck
#ifndef kcg_comp_positionedBG_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_positionedBG_T_TrainPosition_Types_Pck(
  positionedBG_T_TrainPosition_Types_Pck *kcg_c1,
  positionedBG_T_TrainPosition_Types_Pck *kcg_c2);
#endif /* kcg_comp_positionedBG_T_TrainPosition_Types_Pck */
#endif /* kcg_use_positionedBG_T_TrainPosition_Types_Pck */

#ifdef kcg_use_Temporary_Speed_Restriction_Revocation_TrackToTrain
#ifndef kcg_comp_Temporary_Speed_Restriction_Revocation_TrackToTrain
extern kcg_bool kcg_comp_Temporary_Speed_Restriction_Revocation_TrackToTrain(
  Temporary_Speed_Restriction_Revocation_TrackToTrain *kcg_c1,
  Temporary_Speed_Restriction_Revocation_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Temporary_Speed_Restriction_Revocation_TrackToTrain */
#endif /* kcg_use_Temporary_Speed_Restriction_Revocation_TrackToTrain */

#ifdef kcg_use_Track_Condition_Big_Metal_Masses_TrackToTrain
#ifndef kcg_comp_Track_Condition_Big_Metal_Masses_TrackToTrain
extern kcg_bool kcg_comp_Track_Condition_Big_Metal_Masses_TrackToTrain(
  Track_Condition_Big_Metal_Masses_TrackToTrain *kcg_c1,
  Track_Condition_Big_Metal_Masses_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Track_Condition_Big_Metal_Masses_TrackToTrain */
#endif /* kcg_use_Track_Condition_Big_Metal_Masses_TrackToTrain */

#ifdef kcg_use_Session_Established_Radio_TrainToTrack
#ifndef kcg_comp_Session_Established_Radio_TrainToTrack
extern kcg_bool kcg_comp_Session_Established_Radio_TrainToTrack(
  Session_Established_Radio_TrainToTrack *kcg_c1,
  Session_Established_Radio_TrainToTrack *kcg_c2);
#endif /* kcg_comp_Session_Established_Radio_TrainToTrack */
#endif /* kcg_use_Session_Established_Radio_TrainToTrack */

#ifdef kcg_use_Movement_Authority_Request_Parameters_TrackToTrain
#ifndef kcg_comp_Movement_Authority_Request_Parameters_TrackToTrain
extern kcg_bool kcg_comp_Movement_Authority_Request_Parameters_TrackToTrain(
  Movement_Authority_Request_Parameters_TrackToTrain *kcg_c1,
  Movement_Authority_Request_Parameters_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Movement_Authority_Request_Parameters_TrackToTrain */
#endif /* kcg_use_Movement_Authority_Request_Parameters_TrackToTrain */

#ifdef kcg_use_Error_reporting_TrainToTrack
#ifndef kcg_comp_Error_reporting_TrainToTrack
extern kcg_bool kcg_comp_Error_reporting_TrainToTrack(
  Error_reporting_TrainToTrack *kcg_c1,
  Error_reporting_TrainToTrack *kcg_c2);
#endif /* kcg_comp_Error_reporting_TrainToTrack */
#endif /* kcg_use_Error_reporting_TrainToTrack */

#ifdef kcg_use_struct_11012
#ifndef kcg_comp_struct_11012
extern kcg_bool kcg_comp_struct_11012(
  struct_11012 *kcg_c1,
  struct_11012 *kcg_c2);
#endif /* kcg_comp_struct_11012 */
#endif /* kcg_use_struct_11012 */

#ifdef kcg_use_struct_11020
#ifndef kcg_comp_struct_11020
extern kcg_bool kcg_comp_struct_11020(
  struct_11020 *kcg_c1,
  struct_11020 *kcg_c2);
#endif /* kcg_comp_struct_11020 */
#endif /* kcg_use_struct_11020 */

#ifdef kcg_use_Reversing_supervision_information_TrackToTrain
#ifndef kcg_comp_Reversing_supervision_information_TrackToTrain
extern kcg_bool kcg_comp_Reversing_supervision_information_TrackToTrain(
  Reversing_supervision_information_TrackToTrain *kcg_c1,
  Reversing_supervision_information_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Reversing_supervision_information_TrackToTrain */
#endif /* kcg_use_Reversing_supervision_information_TrackToTrain */

#ifdef kcg_use_struct_11039
#ifndef kcg_comp_struct_11039
extern kcg_bool kcg_comp_struct_11039(
  struct_11039 *kcg_c1,
  struct_11039 *kcg_c2);
#endif /* kcg_comp_struct_11039 */
#endif /* kcg_use_struct_11039 */

#ifdef kcg_use_Assignment_of_coordinate_system_Radio_TrackToTrain
#ifndef kcg_comp_Assignment_of_coordinate_system_Radio_TrackToTrain
extern kcg_bool kcg_comp_Assignment_of_coordinate_system_Radio_TrackToTrain(
  Assignment_of_coordinate_system_Radio_TrackToTrain *kcg_c1,
  Assignment_of_coordinate_system_Radio_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Assignment_of_coordinate_system_Radio_TrackToTrain */
#endif /* kcg_use_Assignment_of_coordinate_system_Radio_TrackToTrain */

#ifdef kcg_use_struct_11056
#ifndef kcg_comp_struct_11056
extern kcg_bool kcg_comp_struct_11056(
  struct_11056 *kcg_c1,
  struct_11056 *kcg_c2);
#endif /* kcg_comp_struct_11056 */
#endif /* kcg_use_struct_11056 */

#ifdef kcg_use_Var110_TrainToTrack
#ifndef kcg_comp_Var110_TrainToTrack
extern kcg_bool kcg_comp_Var110_TrainToTrack(
  Var110_TrainToTrack *kcg_c1,
  Var110_TrainToTrack *kcg_c2);
#endif /* kcg_comp_Var110_TrainToTrack */
#endif /* kcg_use_Var110_TrainToTrack */

#ifdef kcg_use_Var210_TrackToTrain
#ifndef kcg_comp_Var210_TrackToTrain
extern kcg_bool kcg_comp_Var210_TrackToTrain(
  Var210_TrackToTrain *kcg_c1,
  Var210_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Var210_TrackToTrain */
#endif /* kcg_use_Var210_TrackToTrain */

#ifdef kcg_use_Var690_TrackToTrain
#ifndef kcg_comp_Var690_TrackToTrain
extern kcg_bool kcg_comp_Var690_TrackToTrain(
  Var690_TrackToTrain *kcg_c1,
  Var690_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Var690_TrackToTrain */
#endif /* kcg_use_Var690_TrackToTrain */

#ifdef kcg_use_FilteredBGMessage_T_BG_Types_Pkg
#ifndef kcg_comp_FilteredBGMessage_T_BG_Types_Pkg
extern kcg_bool kcg_comp_FilteredBGMessage_T_BG_Types_Pkg(
  FilteredBGMessage_T_BG_Types_Pkg *kcg_c1,
  FilteredBGMessage_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_FilteredBGMessage_T_BG_Types_Pkg */
#endif /* kcg_use_FilteredBGMessage_T_BG_Types_Pkg */

#ifdef kcg_use_TelegramHeaderFlag_T_BG_Types_Pkg
#ifndef kcg_comp_TelegramHeaderFlag_T_BG_Types_Pkg
extern kcg_bool kcg_comp_TelegramHeaderFlag_T_BG_Types_Pkg(
  TelegramHeaderFlag_T_BG_Types_Pkg *kcg_c1,
  TelegramHeaderFlag_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_TelegramHeaderFlag_T_BG_Types_Pkg */
#endif /* kcg_use_TelegramHeaderFlag_T_BG_Types_Pkg */

#ifdef kcg_use_AdditionalInformation_T_BG_Types_Pkg
#ifndef kcg_comp_AdditionalInformation_T_BG_Types_Pkg
extern kcg_bool kcg_comp_AdditionalInformation_T_BG_Types_Pkg(
  AdditionalInformation_T_BG_Types_Pkg *kcg_c1,
  AdditionalInformation_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_AdditionalInformation_T_BG_Types_Pkg */
#endif /* kcg_use_AdditionalInformation_T_BG_Types_Pkg */

#ifdef kcg_use_Var32_TrackToTrain
#ifndef kcg_comp_Var32_TrackToTrain
extern kcg_bool kcg_comp_Var32_TrackToTrain(
  Var32_TrackToTrain *kcg_c1,
  Var32_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Var32_TrackToTrain */
#endif /* kcg_use_Var32_TrackToTrain */

#ifdef kcg_use_Conditional_Level_Transition_Order_TrackToTrain
#ifndef kcg_comp_Conditional_Level_Transition_Order_TrackToTrain
extern kcg_bool kcg_comp_Conditional_Level_Transition_Order_TrackToTrain(
  Conditional_Level_Transition_Order_TrackToTrain *kcg_c1,
  Conditional_Level_Transition_Order_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Conditional_Level_Transition_Order_TrackToTrain */
#endif /* kcg_use_Conditional_Level_Transition_Order_TrackToTrain */

#ifdef kcg_use_infoFromLinking_T_TrainPosition_Types_Pck
#ifndef kcg_comp_infoFromLinking_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_infoFromLinking_T_TrainPosition_Types_Pck(
  infoFromLinking_T_TrainPosition_Types_Pck *kcg_c1,
  infoFromLinking_T_TrainPosition_Types_Pck *kcg_c2);
#endif /* kcg_comp_infoFromLinking_T_TrainPosition_Types_Pck */
#endif /* kcg_use_infoFromLinking_T_TrainPosition_Types_Pck */

#ifdef kcg_use_Var580_TrackToTrain
#ifndef kcg_comp_Var580_TrackToTrain
extern kcg_bool kcg_comp_Var580_TrackToTrain(
  Var580_TrackToTrain *kcg_c1,
  Var580_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Var580_TrackToTrain */
#endif /* kcg_use_Var580_TrackToTrain */

#ifdef kcg_use_End_of_Mission_Radio_TrainToTrack
#ifndef kcg_comp_End_of_Mission_Radio_TrainToTrack
extern kcg_bool kcg_comp_End_of_Mission_Radio_TrainToTrack(
  End_of_Mission_Radio_TrainToTrack *kcg_c1,
  End_of_Mission_Radio_TrainToTrack *kcg_c2);
#endif /* kcg_comp_End_of_Mission_Radio_TrainToTrack */
#endif /* kcg_use_End_of_Mission_Radio_TrainToTrack */

#ifdef kcg_use_Var410_TrackToTrain
#ifndef kcg_comp_Var410_TrackToTrain
extern kcg_bool kcg_comp_Var410_TrackToTrain(
  Var410_TrackToTrain *kcg_c1,
  Var410_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Var410_TrackToTrain */
#endif /* kcg_use_Var410_TrackToTrain */

#ifdef kcg_use_Telegram_T_BG_Types_Pkg
#ifndef kcg_comp_Telegram_T_BG_Types_Pkg
extern kcg_bool kcg_comp_Telegram_T_BG_Types_Pkg(
  Telegram_T_BG_Types_Pkg *kcg_c1,
  Telegram_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_Telegram_T_BG_Types_Pkg */
#endif /* kcg_use_Telegram_T_BG_Types_Pkg */

#ifdef kcg_use_Var271_TrackToTrain
#ifndef kcg_comp_Var271_TrackToTrain
extern kcg_bool kcg_comp_Var271_TrackToTrain(
  Var271_TrackToTrain *kcg_c1,
  Var271_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Var271_TrackToTrain */
#endif /* kcg_use_Var271_TrackToTrain */

#ifdef kcg_use_List_of_balises_for_SH_Area_TrackToTrain
#ifndef kcg_comp_List_of_balises_for_SH_Area_TrackToTrain
extern kcg_bool kcg_comp_List_of_balises_for_SH_Area_TrackToTrain(
  List_of_balises_for_SH_Area_TrackToTrain *kcg_c1,
  List_of_balises_for_SH_Area_TrackToTrain *kcg_c2);
#endif /* kcg_comp_List_of_balises_for_SH_Area_TrackToTrain */
#endif /* kcg_use_List_of_balises_for_SH_Area_TrackToTrain */

#ifdef kcg_use_Var511_TrackToTrain
#ifndef kcg_comp_Var511_TrackToTrain
extern kcg_bool kcg_comp_Var511_TrackToTrain(
  Var511_TrackToTrain *kcg_c1,
  Var511_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Var511_TrackToTrain */
#endif /* kcg_use_Var511_TrackToTrain */

#ifdef kcg_use_List_of_Balises_in_SR_Authority_TrackToTrain
#ifndef kcg_comp_List_of_Balises_in_SR_Authority_TrackToTrain
extern kcg_bool kcg_comp_List_of_Balises_in_SR_Authority_TrackToTrain(
  List_of_Balises_in_SR_Authority_TrackToTrain *kcg_c1,
  List_of_Balises_in_SR_Authority_TrackToTrain *kcg_c2);
#endif /* kcg_comp_List_of_Balises_in_SR_Authority_TrackToTrain */
#endif /* kcg_use_List_of_Balises_in_SR_Authority_TrackToTrain */

#ifdef kcg_use_Repositioning_Information_TrackToTrain
#ifndef kcg_comp_Repositioning_Information_TrackToTrain
extern kcg_bool kcg_comp_Repositioning_Information_TrackToTrain(
  Repositioning_Information_TrackToTrain *kcg_c1,
  Repositioning_Information_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Repositioning_Information_TrackToTrain */
#endif /* kcg_use_Repositioning_Information_TrackToTrain */

#ifdef kcg_use_RBC_or_RIU_System_Version_Radio_TrackToTrain
#ifndef kcg_comp_RBC_or_RIU_System_Version_Radio_TrackToTrain
extern kcg_bool kcg_comp_RBC_or_RIU_System_Version_Radio_TrackToTrain(
  RBC_or_RIU_System_Version_Radio_TrackToTrain *kcg_c1,
  RBC_or_RIU_System_Version_Radio_TrackToTrain *kcg_c2);
#endif /* kcg_comp_RBC_or_RIU_System_Version_Radio_TrackToTrain */
#endif /* kcg_use_RBC_or_RIU_System_Version_Radio_TrackToTrain */

#ifdef kcg_use_Var680_TrackToTrain
#ifndef kcg_comp_Var680_TrackToTrain
extern kcg_bool kcg_comp_Var680_TrackToTrain(
  Var680_TrackToTrain *kcg_c1,
  Var680_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Var680_TrackToTrain */
#endif /* kcg_use_Var680_TrackToTrain */

#ifdef kcg_use_Reversing_area_information_TrackToTrain
#ifndef kcg_comp_Reversing_area_information_TrackToTrain
extern kcg_bool kcg_comp_Reversing_area_information_TrackToTrain(
  Reversing_area_information_TrackToTrain *kcg_c1,
  Reversing_area_information_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Reversing_area_information_TrackToTrain */
#endif /* kcg_use_Reversing_area_information_TrackToTrain */

#ifdef kcg_use_Var700_TrackToTrain
#ifndef kcg_comp_Var700_TrackToTrain
extern kcg_bool kcg_comp_Var700_TrackToTrain(
  Var700_TrackToTrain *kcg_c1,
  Var700_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Var700_TrackToTrain */
#endif /* kcg_use_Var700_TrackToTrain */

#ifdef kcg_use_positionErrors_T_TrainPosition_Types_Pck
#ifndef kcg_comp_positionErrors_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_positionErrors_T_TrainPosition_Types_Pck(
  positionErrors_T_TrainPosition_Types_Pck *kcg_c1,
  positionErrors_T_TrainPosition_Types_Pck *kcg_c2);
#endif /* kcg_comp_positionErrors_T_TrainPosition_Types_Pck */
#endif /* kcg_use_positionErrors_T_TrainPosition_Types_Pck */

#ifdef kcg_use_Train_running_number_from_RBC_TrackToTrain
#ifndef kcg_comp_Train_running_number_from_RBC_TrackToTrain
extern kcg_bool kcg_comp_Train_running_number_from_RBC_TrackToTrain(
  Train_running_number_from_RBC_TrackToTrain *kcg_c1,
  Train_running_number_from_RBC_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Train_running_number_from_RBC_TrackToTrain */
#endif /* kcg_use_Train_running_number_from_RBC_TrackToTrain */

#ifdef kcg_use_Track_Condition_Change_of_allowed_current_consumption_TrackToTrain
#ifndef kcg_comp_Track_Condition_Change_of_allowed_current_consumption_TrackToTrain
extern kcg_bool kcg_comp_Track_Condition_Change_of_allowed_current_consumption_TrackToTrain(
  Track_Condition_Change_of_allowed_current_consumption_TrackToTrain *kcg_c1,
  Track_Condition_Change_of_allowed_current_consumption_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Track_Condition_Change_of_allowed_current_consumption_TrackToTrain */
#endif /* kcg_use_Track_Condition_Change_of_allowed_current_consumption_TrackToTrain */

#ifdef kcg_use_struct_11281
#ifndef kcg_comp_struct_11281
extern kcg_bool kcg_comp_struct_11281(
  struct_11281 *kcg_c1,
  struct_11281 *kcg_c2);
#endif /* kcg_comp_struct_11281 */
#endif /* kcg_use_struct_11281 */

#ifdef kcg_use_Var460_TrackToTrain
#ifndef kcg_comp_Var460_TrackToTrain
extern kcg_bool kcg_comp_Var460_TrackToTrain(
  Var460_TrackToTrain *kcg_c1,
  Var460_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Var460_TrackToTrain */
#endif /* kcg_use_Var460_TrackToTrain */

#ifdef kcg_use_centerOfBalisePosition_T_BG_Types_Pkg
#ifndef kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg
extern kcg_bool kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg(
  centerOfBalisePosition_T_BG_Types_Pkg *kcg_c1,
  centerOfBalisePosition_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg */
#endif /* kcg_use_centerOfBalisePosition_T_BG_Types_Pkg */

#ifdef kcg_use_Var111_TrainToTrack
#ifndef kcg_comp_Var111_TrainToTrack
extern kcg_bool kcg_comp_Var111_TrainToTrack(
  Var111_TrainToTrack *kcg_c1,
  Var111_TrainToTrack *kcg_c2);
#endif /* kcg_comp_Var111_TrainToTrack */
#endif /* kcg_use_Var111_TrainToTrack */

#ifdef kcg_use_Var520_TrackToTrain
#ifndef kcg_comp_Var520_TrackToTrain
extern kcg_bool kcg_comp_Var520_TrackToTrain(
  Var520_TrackToTrain *kcg_c1,
  Var520_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Var520_TrackToTrain */
#endif /* kcg_use_Var520_TrackToTrain */

#ifdef kcg_use_struct_11318
#ifndef kcg_comp_struct_11318
extern kcg_bool kcg_comp_struct_11318(
  struct_11318 *kcg_c1,
  struct_11318 *kcg_c2);
#endif /* kcg_comp_struct_11318 */
#endif /* kcg_use_struct_11318 */

#ifdef kcg_use_Track_Ahead_Free_Granted_Radio_TrainToTrack
#ifndef kcg_comp_Track_Ahead_Free_Granted_Radio_TrainToTrack
extern kcg_bool kcg_comp_Track_Ahead_Free_Granted_Radio_TrainToTrack(
  Track_Ahead_Free_Granted_Radio_TrainToTrack *kcg_c1,
  Track_Ahead_Free_Granted_Radio_TrainToTrack *kcg_c2);
#endif /* kcg_comp_Track_Ahead_Free_Granted_Radio_TrainToTrack */
#endif /* kcg_use_Track_Ahead_Free_Granted_Radio_TrainToTrack */

#ifdef kcg_use_National_Values_TrackToTrain
#ifndef kcg_comp_National_Values_TrackToTrain
extern kcg_bool kcg_comp_National_Values_TrackToTrain(
  National_Values_TrackToTrain *kcg_c1,
  National_Values_TrackToTrain *kcg_c2);
#endif /* kcg_comp_National_Values_TrackToTrain */
#endif /* kcg_use_National_Values_TrackToTrain */

#ifdef kcg_use_Linking_TrackToTrain
#ifndef kcg_comp_Linking_TrackToTrain
extern kcg_bool kcg_comp_Linking_TrackToTrain(
  Linking_TrackToTrain *kcg_c1,
  Linking_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Linking_TrackToTrain */
#endif /* kcg_use_Linking_TrackToTrain */

#ifdef kcg_use_Level_1_Movement_Authority_TrackToTrain
#ifndef kcg_comp_Level_1_Movement_Authority_TrackToTrain
extern kcg_bool kcg_comp_Level_1_Movement_Authority_TrackToTrain(
  Level_1_Movement_Authority_TrackToTrain *kcg_c1,
  Level_1_Movement_Authority_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Level_1_Movement_Authority_TrackToTrain */
#endif /* kcg_use_Level_1_Movement_Authority_TrackToTrain */

#ifdef kcg_use_Level_23_Movement_Authority_TrackToTrain
#ifndef kcg_comp_Level_23_Movement_Authority_TrackToTrain
extern kcg_bool kcg_comp_Level_23_Movement_Authority_TrackToTrain(
  Level_23_Movement_Authority_TrackToTrain *kcg_c1,
  Level_23_Movement_Authority_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Level_23_Movement_Authority_TrackToTrain */
#endif /* kcg_use_Level_23_Movement_Authority_TrackToTrain */

#ifdef kcg_use_Axle_Load_Speed_Profile_TrackToTrain
#ifndef kcg_comp_Axle_Load_Speed_Profile_TrackToTrain
extern kcg_bool kcg_comp_Axle_Load_Speed_Profile_TrackToTrain(
  Axle_Load_Speed_Profile_TrackToTrain *kcg_c1,
  Axle_Load_Speed_Profile_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Axle_Load_Speed_Profile_TrackToTrain */
#endif /* kcg_use_Axle_Load_Speed_Profile_TrackToTrain */

#ifdef kcg_use_Permitted_Braking_Distance_Information_TrackToTrain
#ifndef kcg_comp_Permitted_Braking_Distance_Information_TrackToTrain
extern kcg_bool kcg_comp_Permitted_Braking_Distance_Information_TrackToTrain(
  Permitted_Braking_Distance_Information_TrackToTrain *kcg_c1,
  Permitted_Braking_Distance_Information_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Permitted_Braking_Distance_Information_TrackToTrain */
#endif /* kcg_use_Permitted_Braking_Distance_Information_TrackToTrain */

#ifdef kcg_use_Track_Condition_TrackToTrain
#ifndef kcg_comp_Track_Condition_TrackToTrain
extern kcg_bool kcg_comp_Track_Condition_TrackToTrain(
  Track_Condition_TrackToTrain *kcg_c1,
  Track_Condition_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Track_Condition_TrackToTrain */
#endif /* kcg_use_Track_Condition_TrackToTrain */

#ifdef kcg_use_Track_Condition_Station_Platforms_TrackToTrain
#ifndef kcg_comp_Track_Condition_Station_Platforms_TrackToTrain
extern kcg_bool kcg_comp_Track_Condition_Station_Platforms_TrackToTrain(
  Track_Condition_Station_Platforms_TrackToTrain *kcg_c1,
  Track_Condition_Station_Platforms_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Track_Condition_Station_Platforms_TrackToTrain */
#endif /* kcg_use_Track_Condition_Station_Platforms_TrackToTrain */

#ifdef kcg_use_Route_Suitability_Data_TrackToTrain
#ifndef kcg_comp_Route_Suitability_Data_TrackToTrain
extern kcg_bool kcg_comp_Route_Suitability_Data_TrackToTrain(
  Route_Suitability_Data_TrackToTrain *kcg_c1,
  Route_Suitability_Data_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Route_Suitability_Data_TrackToTrain */
#endif /* kcg_use_Route_Suitability_Data_TrackToTrain */

#ifdef kcg_use_Packet_for_sending_plain_text_messages_TrackToTrain
#ifndef kcg_comp_Packet_for_sending_plain_text_messages_TrackToTrain
extern kcg_bool kcg_comp_Packet_for_sending_plain_text_messages_TrackToTrain(
  Packet_for_sending_plain_text_messages_TrackToTrain *kcg_c1,
  Packet_for_sending_plain_text_messages_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Packet_for_sending_plain_text_messages_TrackToTrain */
#endif /* kcg_use_Packet_for_sending_plain_text_messages_TrackToTrain */

#ifdef kcg_use_Packet_for_sending_fixed_text_messages_TrackToTrain
#ifndef kcg_comp_Packet_for_sending_fixed_text_messages_TrackToTrain
extern kcg_bool kcg_comp_Packet_for_sending_fixed_text_messages_TrackToTrain(
  Packet_for_sending_fixed_text_messages_TrackToTrain *kcg_c1,
  Packet_for_sending_fixed_text_messages_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Packet_for_sending_fixed_text_messages_TrackToTrain */
#endif /* kcg_use_Packet_for_sending_fixed_text_messages_TrackToTrain */

#ifdef kcg_use_Geographical_Position_Information_TrackToTrain
#ifndef kcg_comp_Geographical_Position_Information_TrackToTrain
extern kcg_bool kcg_comp_Geographical_Position_Information_TrackToTrain(
  Geographical_Position_Information_TrackToTrain *kcg_c1,
  Geographical_Position_Information_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Geographical_Position_Information_TrackToTrain */
#endif /* kcg_use_Geographical_Position_Information_TrackToTrain */

#ifdef kcg_use_Mode_profile_TrackToTrain
#ifndef kcg_comp_Mode_profile_TrackToTrain
extern kcg_bool kcg_comp_Mode_profile_TrackToTrain(
  Mode_profile_TrackToTrain *kcg_c1,
  Mode_profile_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Mode_profile_TrackToTrain */
#endif /* kcg_use_Mode_profile_TrackToTrain */

#ifdef kcg_use_Level_Crossing_information_TrackToTrain
#ifndef kcg_comp_Level_Crossing_information_TrackToTrain
extern kcg_bool kcg_comp_Level_Crossing_information_TrackToTrain(
  Level_Crossing_information_TrackToTrain *kcg_c1,
  Level_Crossing_information_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Level_Crossing_information_TrackToTrain */
#endif /* kcg_use_Level_Crossing_information_TrackToTrain */

#ifdef kcg_use_Radio_infill_area_information_TrackToTrain
#ifndef kcg_comp_Radio_infill_area_information_TrackToTrain
extern kcg_bool kcg_comp_Radio_infill_area_information_TrackToTrain(
  Radio_infill_area_information_TrackToTrain *kcg_c1,
  Radio_infill_area_information_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Radio_infill_area_information_TrackToTrain */
#endif /* kcg_use_Radio_infill_area_information_TrackToTrain */

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

#ifdef kcg_use_Validated_train_data_TrainToTrack
#ifndef kcg_comp_Validated_train_data_TrainToTrack
extern kcg_bool kcg_comp_Validated_train_data_TrainToTrack(
  Validated_train_data_TrainToTrack *kcg_c1,
  Validated_train_data_TrainToTrack *kcg_c2);
#endif /* kcg_comp_Validated_train_data_TrainToTrack */
#endif /* kcg_use_Validated_train_data_TrainToTrack */

#ifdef kcg_use_Conditional_Emergency_Stop_Radio_TrackToTrain
#ifndef kcg_comp_Conditional_Emergency_Stop_Radio_TrackToTrain
extern kcg_bool kcg_comp_Conditional_Emergency_Stop_Radio_TrackToTrain(
  Conditional_Emergency_Stop_Radio_TrackToTrain *kcg_c1,
  Conditional_Emergency_Stop_Radio_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Conditional_Emergency_Stop_Radio_TrackToTrain */
#endif /* kcg_use_Conditional_Emergency_Stop_Radio_TrackToTrain */

#ifdef kcg_use_Track_Ahead_Free_Request_Radio_TrackToTrain
#ifndef kcg_comp_Track_Ahead_Free_Request_Radio_TrackToTrain
extern kcg_bool kcg_comp_Track_Ahead_Free_Request_Radio_TrackToTrain(
  Track_Ahead_Free_Request_Radio_TrackToTrain *kcg_c1,
  Track_Ahead_Free_Request_Radio_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Track_Ahead_Free_Request_Radio_TrackToTrain */
#endif /* kcg_use_Track_Ahead_Free_Request_Radio_TrackToTrain */

#ifdef kcg_use_trainPosition_T_TrainPosition_Types_Pck
#ifndef kcg_comp_trainPosition_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_trainPosition_T_TrainPosition_Types_Pck(
  trainPosition_T_TrainPosition_Types_Pck *kcg_c1,
  trainPosition_T_TrainPosition_Types_Pck *kcg_c2);
#endif /* kcg_comp_trainPosition_T_TrainPosition_Types_Pck */
#endif /* kcg_use_trainPosition_T_TrainPosition_Types_Pck */

#ifdef kcg_use_passedBG_T_BG_Types_Pkg
#ifndef kcg_comp_passedBG_T_BG_Types_Pkg
extern kcg_bool kcg_comp_passedBG_T_BG_Types_Pkg(
  passedBG_T_BG_Types_Pkg *kcg_c1,
  passedBG_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_passedBG_T_BG_Types_Pkg */
#endif /* kcg_use_passedBG_T_BG_Types_Pkg */

#ifdef kcg_use_struct_11732
#ifndef kcg_comp_struct_11732
extern kcg_bool kcg_comp_struct_11732(
  struct_11732 *kcg_c1,
  struct_11732 *kcg_c2);
#endif /* kcg_comp_struct_11732 */
#endif /* kcg_use_struct_11732 */

#ifdef kcg_use_LinkedBG_T_BG_Types_Pkg
#ifndef kcg_comp_LinkedBG_T_BG_Types_Pkg
extern kcg_bool kcg_comp_LinkedBG_T_BG_Types_Pkg(
  LinkedBG_T_BG_Types_Pkg *kcg_c1,
  LinkedBG_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_LinkedBG_T_BG_Types_Pkg */
#endif /* kcg_use_LinkedBG_T_BG_Types_Pkg */

#ifdef kcg_use_Var670_TrackToTrain
#ifndef kcg_comp_Var670_TrackToTrain
extern kcg_bool kcg_comp_Var670_TrackToTrain(
  Var670_TrackToTrain *kcg_c1,
  Var670_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Var670_TrackToTrain */
#endif /* kcg_use_Var670_TrackToTrain */

#ifdef kcg_use_trainProperties_T_TrainPosition_Types_Pck
#ifndef kcg_comp_trainProperties_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_trainProperties_T_TrainPosition_Types_Pck(
  trainProperties_T_TrainPosition_Types_Pck *kcg_c1,
  trainProperties_T_TrainPosition_Types_Pck *kcg_c2);
#endif /* kcg_comp_trainProperties_T_TrainPosition_Types_Pck */
#endif /* kcg_use_trainProperties_T_TrainPosition_Types_Pck */

#ifdef kcg_use_AVar111_TrainToTrack
#ifndef kcg_comp_AVar111_TrainToTrack
extern kcg_bool kcg_comp_AVar111_TrainToTrack(
  AVar111_TrainToTrack *kcg_c1,
  AVar111_TrainToTrack *kcg_c2);
#endif /* kcg_comp_AVar111_TrainToTrack */
#endif /* kcg_use_AVar111_TrainToTrack */

#ifdef kcg_use_AVar34_TrackToTrain
#ifndef kcg_comp_AVar34_TrackToTrain
extern kcg_bool kcg_comp_AVar34_TrackToTrain(
  AVar34_TrackToTrain *kcg_c1,
  AVar34_TrackToTrain *kcg_c2);
#endif /* kcg_comp_AVar34_TrackToTrain */
#endif /* kcg_use_AVar34_TrackToTrain */

#ifdef kcg_use_TelegramHeaderArray_T_BG_Types_Pkg
#ifndef kcg_comp_TelegramHeaderArray_T_BG_Types_Pkg
extern kcg_bool kcg_comp_TelegramHeaderArray_T_BG_Types_Pkg(
  TelegramHeaderArray_T_BG_Types_Pkg *kcg_c1,
  TelegramHeaderArray_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_TelegramHeaderArray_T_BG_Types_Pkg */
#endif /* kcg_use_TelegramHeaderArray_T_BG_Types_Pkg */

#ifdef kcg_use_array_10288
#ifndef kcg_comp_array_10288
extern kcg_bool kcg_comp_array_10288(array_10288 *kcg_c1, array_10288 *kcg_c2);
#endif /* kcg_comp_array_10288 */
#endif /* kcg_use_array_10288 */

#ifdef kcg_use_AVar110_TrainToTrack
#ifndef kcg_comp_AVar110_TrainToTrack
extern kcg_bool kcg_comp_AVar110_TrainToTrack(
  AVar110_TrainToTrack *kcg_c1,
  AVar110_TrainToTrack *kcg_c2);
#endif /* kcg_comp_AVar110_TrainToTrack */
#endif /* kcg_use_AVar110_TrainToTrack */

#ifdef kcg_use_ListOfBG_BG_Types_Pkg
#ifndef kcg_comp_ListOfBG_BG_Types_Pkg
extern kcg_bool kcg_comp_ListOfBG_BG_Types_Pkg(
  ListOfBG_BG_Types_Pkg *kcg_c1,
  ListOfBG_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_ListOfBG_BG_Types_Pkg */
#endif /* kcg_use_ListOfBG_BG_Types_Pkg */

#ifdef kcg_use_AVar30_TrackToTrain
#ifndef kcg_comp_AVar30_TrackToTrain
extern kcg_bool kcg_comp_AVar30_TrackToTrain(
  AVar30_TrackToTrain *kcg_c1,
  AVar30_TrackToTrain *kcg_c2);
#endif /* kcg_comp_AVar30_TrackToTrain */
#endif /* kcg_use_AVar30_TrackToTrain */

#ifdef kcg_use_positionedBGs_T_TrainPosition_Types_Pck
#ifndef kcg_comp_positionedBGs_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_positionedBGs_T_TrainPosition_Types_Pck(
  positionedBGs_T_TrainPosition_Types_Pck *kcg_c1,
  positionedBGs_T_TrainPosition_Types_Pck *kcg_c2);
#endif /* kcg_comp_positionedBGs_T_TrainPosition_Types_Pck */
#endif /* kcg_use_positionedBGs_T_TrainPosition_Types_Pck */

#ifdef kcg_use_AVar580_TrackToTrain
#ifndef kcg_comp_AVar580_TrackToTrain
extern kcg_bool kcg_comp_AVar580_TrackToTrain(
  AVar580_TrackToTrain *kcg_c1,
  AVar580_TrackToTrain *kcg_c2);
#endif /* kcg_comp_AVar580_TrackToTrain */
#endif /* kcg_use_AVar580_TrackToTrain */

#ifdef kcg_use_AVar130_TrackToTrain
#ifndef kcg_comp_AVar130_TrackToTrain
extern kcg_bool kcg_comp_AVar130_TrackToTrain(
  AVar130_TrackToTrain *kcg_c1,
  AVar130_TrackToTrain *kcg_c2);
#endif /* kcg_comp_AVar130_TrackToTrain */
#endif /* kcg_use_AVar130_TrackToTrain */

#ifdef kcg_use_array_10739
#ifndef kcg_comp_array_10739
extern kcg_bool kcg_comp_array_10739(array_10739 *kcg_c1, array_10739 *kcg_c2);
#endif /* kcg_comp_array_10739 */
#endif /* kcg_use_array_10739 */

#ifdef kcg_use_array_10743
#ifndef kcg_comp_array_10743
extern kcg_bool kcg_comp_array_10743(array_10743 *kcg_c1, array_10743 *kcg_c2);
#endif /* kcg_comp_array_10743 */
#endif /* kcg_use_array_10743 */

#ifdef kcg_use_AVar690_TrackToTrain
#ifndef kcg_comp_AVar690_TrackToTrain
extern kcg_bool kcg_comp_AVar690_TrackToTrain(
  AVar690_TrackToTrain *kcg_c1,
  AVar690_TrackToTrain *kcg_c2);
#endif /* kcg_comp_AVar690_TrackToTrain */
#endif /* kcg_use_AVar690_TrackToTrain */

#ifdef kcg_use_AVar670_TrackToTrain
#ifndef kcg_comp_AVar670_TrackToTrain
extern kcg_bool kcg_comp_AVar670_TrackToTrain(
  AVar670_TrackToTrain *kcg_c1,
  AVar670_TrackToTrain *kcg_c2);
#endif /* kcg_comp_AVar670_TrackToTrain */
#endif /* kcg_use_AVar670_TrackToTrain */

#ifdef kcg_use_AVar50_TrackToTrain
#ifndef kcg_comp_AVar50_TrackToTrain
extern kcg_bool kcg_comp_AVar50_TrackToTrain(
  AVar50_TrackToTrain *kcg_c1,
  AVar50_TrackToTrain *kcg_c2);
#endif /* kcg_comp_AVar50_TrackToTrain */
#endif /* kcg_use_AVar50_TrackToTrain */

#ifdef kcg_use_AVar30_TrainToTrack
#ifndef kcg_comp_AVar30_TrainToTrack
extern kcg_bool kcg_comp_AVar30_TrainToTrack(
  AVar30_TrainToTrack *kcg_c1,
  AVar30_TrainToTrack *kcg_c2);
#endif /* kcg_comp_AVar30_TrainToTrack */
#endif /* kcg_use_AVar30_TrainToTrack */

#ifdef kcg_use_array_11035
#ifndef kcg_comp_array_11035
extern kcg_bool kcg_comp_array_11035(array_11035 *kcg_c1, array_11035 *kcg_c2);
#endif /* kcg_comp_array_11035 */
#endif /* kcg_use_array_11035 */

#ifdef kcg_use_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck
#ifndef kcg_comp_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck
extern kcg_bool kcg_comp_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck(
  linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck *kcg_c1,
  linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck *kcg_c2);
#endif /* kcg_comp_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck */
#endif /* kcg_use_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck */

#ifdef kcg_use_LinkedBGs_T_BG_Types_Pkg
#ifndef kcg_comp_LinkedBGs_T_BG_Types_Pkg
extern kcg_bool kcg_comp_LinkedBGs_T_BG_Types_Pkg(
  LinkedBGs_T_BG_Types_Pkg *kcg_c1,
  LinkedBGs_T_BG_Types_Pkg *kcg_c2);
#endif /* kcg_comp_LinkedBGs_T_BG_Types_Pkg */
#endif /* kcg_use_LinkedBGs_T_BG_Types_Pkg */

#ifdef kcg_use_AVar680_TrackToTrain
#ifndef kcg_comp_AVar680_TrackToTrain
extern kcg_bool kcg_comp_AVar680_TrackToTrain(
  AVar680_TrackToTrain *kcg_c1,
  AVar680_TrackToTrain *kcg_c2);
#endif /* kcg_comp_AVar680_TrackToTrain */
#endif /* kcg_use_AVar680_TrackToTrain */

#ifdef kcg_use_AVar32_TrackToTrain
#ifndef kcg_comp_AVar32_TrackToTrain
extern kcg_bool kcg_comp_AVar32_TrackToTrain(
  AVar32_TrackToTrain *kcg_c1,
  AVar32_TrackToTrain *kcg_c2);
#endif /* kcg_comp_AVar32_TrackToTrain */
#endif /* kcg_use_AVar32_TrackToTrain */

#ifdef kcg_use_AVar520_TrackToTrain
#ifndef kcg_comp_AVar520_TrackToTrain
extern kcg_bool kcg_comp_AVar520_TrackToTrain(
  AVar520_TrackToTrain *kcg_c1,
  AVar520_TrackToTrain *kcg_c2);
#endif /* kcg_comp_AVar520_TrackToTrain */
#endif /* kcg_use_AVar520_TrackToTrain */

#ifdef kcg_use_AVar700_TrackToTrain
#ifndef kcg_comp_AVar700_TrackToTrain
extern kcg_bool kcg_comp_AVar700_TrackToTrain(
  AVar700_TrackToTrain *kcg_c1,
  AVar700_TrackToTrain *kcg_c2);
#endif /* kcg_comp_AVar700_TrackToTrain */
#endif /* kcg_use_AVar700_TrackToTrain */

#ifdef kcg_use_AVar790_TrackToTrain
#ifndef kcg_comp_AVar790_TrackToTrain
extern kcg_bool kcg_comp_AVar790_TrackToTrain(
  AVar790_TrackToTrain *kcg_c1,
  AVar790_TrackToTrain *kcg_c2);
#endif /* kcg_comp_AVar790_TrackToTrain */
#endif /* kcg_use_AVar790_TrackToTrain */

#ifdef kcg_use_AVar800_TrackToTrain
#ifndef kcg_comp_AVar800_TrackToTrain
extern kcg_bool kcg_comp_AVar800_TrackToTrain(
  AVar800_TrackToTrain *kcg_c1,
  AVar800_TrackToTrain *kcg_c2);
#endif /* kcg_comp_AVar800_TrackToTrain */
#endif /* kcg_use_AVar800_TrackToTrain */

#ifdef kcg_use_AVar271_TrackToTrain
#ifndef kcg_comp_AVar271_TrackToTrain
extern kcg_bool kcg_comp_AVar271_TrackToTrain(
  AVar271_TrackToTrain *kcg_c1,
  AVar271_TrackToTrain *kcg_c2);
#endif /* kcg_comp_AVar271_TrackToTrain */
#endif /* kcg_use_AVar271_TrackToTrain */

#ifdef kcg_use_AVar511_TrackToTrain
#ifndef kcg_comp_AVar511_TrackToTrain
extern kcg_bool kcg_comp_AVar511_TrackToTrain(
  AVar511_TrackToTrain *kcg_c1,
  AVar511_TrackToTrain *kcg_c2);
#endif /* kcg_comp_AVar511_TrackToTrain */
#endif /* kcg_use_AVar511_TrackToTrain */

#ifdef kcg_use_AVar410_TrackToTrain
#ifndef kcg_comp_AVar410_TrackToTrain
extern kcg_bool kcg_comp_AVar410_TrackToTrain(
  AVar410_TrackToTrain *kcg_c1,
  AVar410_TrackToTrain *kcg_c2);
#endif /* kcg_comp_AVar410_TrackToTrain */
#endif /* kcg_use_AVar410_TrackToTrain */

#ifdef kcg_use_array_11277
#ifndef kcg_comp_array_11277
extern kcg_bool kcg_comp_array_11277(array_11277 *kcg_c1, array_11277 *kcg_c2);
#endif /* kcg_comp_array_11277 */
#endif /* kcg_use_array_11277 */

#ifdef kcg_use_AVar460_TrackToTrain
#ifndef kcg_comp_AVar460_TrackToTrain
extern kcg_bool kcg_comp_AVar460_TrackToTrain(
  AVar460_TrackToTrain *kcg_c1,
  AVar460_TrackToTrain *kcg_c2);
#endif /* kcg_comp_AVar460_TrackToTrain */
#endif /* kcg_use_AVar460_TrackToTrain */

#ifdef kcg_use_AVar210_TrackToTrain
#ifndef kcg_comp_AVar210_TrackToTrain
extern kcg_bool kcg_comp_AVar210_TrackToTrain(
  AVar210_TrackToTrain *kcg_c1,
  AVar210_TrackToTrain *kcg_c2);
#endif /* kcg_comp_AVar210_TrackToTrain */
#endif /* kcg_use_AVar210_TrackToTrain */

#define kcg_comp_BG_Header_T_BG_Types_Pkg kcg_comp_struct_11732

#define kcg_copy_BG_Header_T_BG_Types_Pkg kcg_copy_struct_11732

#define kcg_comp_SoM_position_report_confirmed_by_RBC_Radio_TrackToTrain kcg_comp_struct_10720

#define kcg_copy_SoM_position_report_confirmed_by_RBC_Radio_TrackToTrain kcg_copy_struct_10720

#define kcg_comp_Train_Accepted_Radio_TrackToTrain kcg_comp_struct_10720

#define kcg_copy_Train_Accepted_Radio_TrackToTrain kcg_copy_struct_10720

#define kcg_comp_Train_Rejected_Radio_TrackToTrain kcg_comp_struct_10720

#define kcg_copy_Train_Rejected_Radio_TrackToTrain kcg_copy_struct_10720

#define kcg_comp_Acknowledgement_of_termination_of_a_communication_session_Radio_TrackToTrain kcg_comp_struct_10720

#define kcg_copy_Acknowledgement_of_termination_of_a_communication_session_Radio_TrackToTrain kcg_copy_struct_10720

#define kcg_comp_Initiation_of_a_communication_session_Radio_TrackToTrain kcg_comp_struct_10720

#define kcg_copy_Initiation_of_a_communication_session_Radio_TrackToTrain kcg_copy_struct_10720

#define kcg_comp_SH_Refused_Radio_TrackToTrain kcg_comp_struct_11281

#define kcg_copy_SH_Refused_Radio_TrackToTrain kcg_copy_struct_11281

#define kcg_comp_Revocation_of_Emergency_Stop_Radio_TrackToTrain kcg_comp_struct_11056

#define kcg_copy_Revocation_of_Emergency_Stop_Radio_TrackToTrain kcg_copy_struct_11056

#define kcg_comp_Unconditional_Emergency_Stop_Radio_TrackToTrain kcg_comp_struct_11056

#define kcg_copy_Unconditional_Emergency_Stop_Radio_TrackToTrain kcg_copy_struct_11056

#define kcg_comp_Acknowledgement_of_Train_Data_Radio_TrackToTrain kcg_comp_struct_11281

#define kcg_copy_Acknowledgement_of_Train_Data_Radio_TrackToTrain kcg_copy_struct_11281

#define kcg_comp_Recognition_of_exit_from_TRIP_mode_Radio_TrackToTrain kcg_comp_struct_10720

#define kcg_copy_Recognition_of_exit_from_TRIP_mode_Radio_TrackToTrain kcg_copy_struct_10720

#define kcg_comp_Termination_of_a_communication_session_Radio_TrainToTrack kcg_comp_struct_11318

#define kcg_copy_Termination_of_a_communication_session_Radio_TrainToTrack kcg_copy_struct_11318

#define kcg_comp_Initiation_of_a_communication_session_Radio_TrainToTrack kcg_comp_struct_11318

#define kcg_copy_Initiation_of_a_communication_session_Radio_TrainToTrack kcg_copy_struct_11318

#define kcg_comp_No_compatible_version_supported_Radio_TrainToTrack kcg_comp_struct_11318

#define kcg_copy_No_compatible_version_supported_Radio_TrainToTrack kcg_copy_struct_11318

#define kcg_comp_Acknowledgement_Radio_TrainToTrack kcg_comp_struct_11318

#define kcg_copy_Acknowledgement_Radio_TrainToTrack kcg_copy_struct_11318

#define kcg_comp_Default_balise_or_Loop_or_RIU_information_TrackToTrain kcg_comp_struct_10503

#define kcg_copy_Default_balise_or_Loop_or_RIU_information_TrackToTrain kcg_copy_struct_10503

#define kcg_comp_Inhibition_of_balise_group_message_consistency_reaction_TrackToTrain kcg_comp_struct_10503

#define kcg_copy_Inhibition_of_balise_group_message_consistency_reaction_TrackToTrain kcg_copy_struct_10503

#define kcg_comp_Infill_location_reference_TrackToTrain kcg_comp_struct_10470

#define kcg_copy_Infill_location_reference_TrackToTrain kcg_copy_struct_10470

#define kcg_comp_Stop_Shunting_on_desk_opening_TrackToTrain kcg_comp_struct_10503

#define kcg_copy_Stop_Shunting_on_desk_opening_TrackToTrain kcg_copy_struct_10503

#define kcg_comp_Track_Ahead_Free_up_to_level_23_transition_location_TrackToTrain kcg_comp_struct_10470

#define kcg_copy_Track_Ahead_Free_up_to_level_23_transition_location_TrackToTrain kcg_copy_struct_10470

#define kcg_comp_Var767_TrackToTrain kcg_comp_struct_10729

#define kcg_copy_Var767_TrackToTrain kcg_copy_struct_10729

#define kcg_comp_Var727_TrackToTrain kcg_comp_struct_10729

#define kcg_copy_Var727_TrackToTrain kcg_copy_struct_10729

#define kcg_comp_Inhibition_of_revocable_TSRs_from_balises_in_L23_TrackToTrain kcg_comp_struct_10503

#define kcg_copy_Inhibition_of_revocable_TSRs_from_balises_in_L23_TrackToTrain kcg_copy_struct_10503

#define kcg_comp_Var630_TrackToTrain kcg_comp_struct_10441

#define kcg_copy_Var630_TrackToTrain kcg_copy_struct_10441

#define kcg_comp_AVar630_TrackToTrain kcg_comp_array_10288

#define kcg_copy_AVar630_TrackToTrain kcg_copy_array_10288

#define kcg_comp_SVar630_TrackToTrain kcg_comp_struct_10371

#define kcg_copy_SVar630_TrackToTrain kcg_copy_struct_10371

#define kcg_comp_Var512_TrackToTrain kcg_comp_struct_11020

#define kcg_copy_Var512_TrackToTrain kcg_copy_struct_11020

#define kcg_comp_AVar512_TrackToTrain kcg_comp_array_11277

#define kcg_copy_AVar512_TrackToTrain kcg_copy_array_11277

#define kcg_comp_SVar512_TrackToTrain kcg_comp_struct_10355

#define kcg_copy_SVar512_TrackToTrain kcg_copy_struct_10355

#define kcg_comp_Var510_TrackToTrain kcg_comp_struct_11020

#define kcg_copy_Var510_TrackToTrain kcg_copy_struct_11020

#define kcg_comp_AVar510_TrackToTrain kcg_comp_array_11277

#define kcg_copy_AVar510_TrackToTrain kcg_copy_array_11277

#define kcg_comp_SVar510_TrackToTrain kcg_comp_struct_10355

#define kcg_copy_SVar510_TrackToTrain kcg_copy_struct_10355

#define kcg_comp_Var490_TrackToTrain kcg_comp_struct_10441

#define kcg_copy_Var490_TrackToTrain kcg_copy_struct_10441

#define kcg_comp_AVar490_TrackToTrain kcg_comp_array_10288

#define kcg_copy_AVar490_TrackToTrain kcg_copy_array_10288

#define kcg_comp_SVar490_TrackToTrain kcg_comp_struct_10371

#define kcg_copy_SVar490_TrackToTrain kcg_copy_struct_10371

#define kcg_comp_Var272_TrackToTrain kcg_comp_struct_11012

#define kcg_copy_Var272_TrackToTrain kcg_copy_struct_11012

#define kcg_comp_AVar272_TrackToTrain kcg_comp_array_10743

#define kcg_copy_AVar272_TrackToTrain kcg_copy_array_10743

#define kcg_comp_SVar272_TrackToTrain kcg_comp_struct_10334

#define kcg_copy_SVar272_TrackToTrain kcg_copy_struct_10334

#define kcg_comp_Var270_TrackToTrain kcg_comp_struct_11012

#define kcg_copy_Var270_TrackToTrain kcg_copy_struct_11012

#define kcg_comp_AVar270_TrackToTrain kcg_comp_array_10743

#define kcg_copy_AVar270_TrackToTrain kcg_copy_array_10743

#define kcg_comp_SVar270_TrackToTrain kcg_comp_struct_10334

#define kcg_copy_SVar270_TrackToTrain kcg_copy_struct_10334

#define kcg_comp_Var150_TrackToTrain kcg_comp_struct_11039

#define kcg_copy_Var150_TrackToTrain kcg_copy_struct_11039

#define kcg_comp_AVar150_TrackToTrain kcg_comp_array_10739

#define kcg_copy_AVar150_TrackToTrain kcg_copy_array_10739

#define kcg_comp_SVar150_TrackToTrain kcg_comp_struct_10318

#define kcg_copy_SVar150_TrackToTrain kcg_copy_struct_10318

#define kcg_comp_Var137_TrackToTrain kcg_comp_struct_10441

#define kcg_copy_Var137_TrackToTrain kcg_copy_struct_10441

#define kcg_comp_Var120_TrackToTrain kcg_comp_struct_11039

#define kcg_copy_Var120_TrackToTrain kcg_copy_struct_11039

#define kcg_comp_AVar120_TrackToTrain kcg_comp_array_10739

#define kcg_copy_AVar120_TrackToTrain kcg_copy_array_10739

#define kcg_comp_SVar120_TrackToTrain kcg_comp_struct_10318

#define kcg_copy_SVar120_TrackToTrain kcg_copy_struct_10318

#define kcg_comp_Var33_TrackToTrain kcg_comp_struct_10421

#define kcg_copy_Var33_TrackToTrain kcg_copy_struct_10421

#define kcg_comp_AVar33_TrackToTrain kcg_comp_array_11035

#define kcg_copy_AVar33_TrackToTrain kcg_copy_array_11035

#define kcg_comp_SVar33_TrackToTrain kcg_comp_struct_10297

#define kcg_copy_SVar33_TrackToTrain kcg_copy_struct_10297

#define kcg_comp_Var31_TrackToTrain kcg_comp_struct_10421

#define kcg_copy_Var31_TrackToTrain kcg_copy_struct_10421

#define kcg_comp_AVar31_TrackToTrain kcg_comp_array_11035

#define kcg_copy_AVar31_TrackToTrain kcg_copy_array_11035

#define kcg_comp_SVar31_TrackToTrain kcg_comp_struct_10297

#define kcg_copy_SVar31_TrackToTrain kcg_copy_struct_10297

#define kcg_comp_TelegramHeader_T_BG_Types_Pkg kcg_comp_struct_11732

#define kcg_copy_TelegramHeader_T_BG_Types_Pkg kcg_copy_struct_11732

#endif /* _KCG_TYPES_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** kcg_types.h
** Generation date: 2014-08-07T09:21:25
*************************************************************$ */


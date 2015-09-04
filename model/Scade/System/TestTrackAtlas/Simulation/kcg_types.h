/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T14:44:59
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

/* Q_NVSBTSMPERM */
typedef enum { Q_NVSBTSMPERM_No = 0, Q_NVSBTSMPERM_Yes = 1 } Q_NVSBTSMPERM;
/* Q_NVEMRRLS */
typedef enum {
  Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill = 0,
  Q_NVEMRRLS_Revoke_emergency_brake_command_when_permitted_speed_supervision_limit_is_no_longer_exceeded = 1
} Q_NVEMRRLS;
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
/* TrackAtlasTypes::MA_Level_t */
typedef enum {
  MA_L1_TrackAtlasTypes,
  MA_L23_TrackAtlasTypes
} MA_Level_t_TrackAtlasTypes;
/* Q_SRSTOP */
typedef enum {
  Q_SRSTOP_Stop_if_in_SR_mode = 0,
  Q_SRSTOP_Go_if_in_SR_mode = 1
} Q_SRSTOP;
/* Q_SECTIONTIMER */
typedef enum {
  Q_SECTIONTIMER_No_Section_Timer_information = 0,
  Q_SECTIONTIMER_Section_Timer_information_to_follow = 1
} Q_SECTIONTIMER;
/* Q_ENDTIMER */
typedef enum {
  Q_ENDTIMER_No_End_section_timer_information = 0,
  Q_ENDTIMER_End_section_timer_information_to_follow = 1
} Q_ENDTIMER;
/* Q_DANGERPOINT */
typedef enum {
  Q_DANGERPOINT_No_danger_point_information = 0,
  Q_DANGERPOINT_Danger_point_information_to_follow = 1
} Q_DANGERPOINT;
/* Q_OVERLAP */
typedef enum {
  Q_OVERLAP_No_overlap_information = 0,
  Q_OVERLAP_Overlap_information_to_follow = 1
} Q_OVERLAP;
/* Q_GDIR */
typedef enum { Q_GDIR_downhill = 0, Q_GDIR_uphill = 1 } Q_GDIR;
/* Q_FRONT */
typedef enum {
  Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element = 0,
  Q_FRONT_No_train_length_delay_on_validity_end_point_of_profile_element = 1
} Q_FRONT;
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
/* M_LEVELTR */
typedef enum {
  M_LEVELTR_Level_0 = 0,
  M_LEVELTR_Level_NTC_specified_by_NID_NTC = 1,
  M_LEVELTR_Level_1 = 2,
  M_LEVELTR_Level_2 = 3,
  M_LEVELTR_Level_3 = 4
} M_LEVELTR;
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
/* Common_Types_Pkg::MsgSource_T */
typedef enum {
  msrc_undefined_Common_Types_Pkg,
  msrc_Euroradio_Common_Types_Pkg,
  msrc_Eurobalise_Common_Types_Pkg,
  msrc_RadioInfillUnit_Common_Types_Pkg,
  msrc_OBU_Common_Types_Pkg
} MsgSource_T_Common_Types_Pkg;
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
/* NC_TRAIN */
typedef enum {
  NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category = 0,
  NC_TRAIN_Freight_train_braked_in_P_position = 1,
  NC_TRAIN_Freight_train_braked_in_G_position = 2,
  NC_TRAIN_Passenger_train = 4
} NC_TRAIN;
/* M_LOADINGGAUGE */
typedef enum {
  M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles = 0,
  M_LOADINGGAUGE_G1 = 1,
  M_LOADINGGAUGE_GA = 2,
  M_LOADINGGAUGE_GB = 3,
  M_LOADINGGAUGE_GC = 4
} M_LOADINGGAUGE;
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
/* M_AIRTIGHT */
typedef enum { M_AIRTIGHT_Not_fitted = 0, M_AIRTIGHT_Fitted = 1 } M_AIRTIGHT;
/* M_VOLTAGE */
typedef enum {
  M_VOLTAGE_Line_not_fitted_with_any_traction_system = 0,
  M_VOLTAGE_AC_25_kV_50_Hz = 1,
  M_VOLTAGE_AC_15_kV_16_7_Hz = 2,
  M_VOLTAGE_DC_3_kV = 3,
  M_VOLTAGE_DC_1_5_kV = 4,
  M_VOLTAGE_DC_600_or_750_V = 5
} M_VOLTAGE;
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
/* Q_UPDOWN */
typedef enum {
  Q_UPDOWN_Down_link_telegram = 0,
  Q_UPDOWN_Up_link_telegram = 1
} Q_UPDOWN;
/* Q_MEDIA */
typedef enum { Q_MEDIA_Balise = 0, Q_MEDIA_Loop = 1 } Q_MEDIA;
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
/* Q_LINK */
typedef enum { Q_LINK_Unlinked = 0, Q_LINK_Linked = 1 } Q_LINK;
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
/* M_LEVEL */
typedef enum {
  M_LEVEL_Level_0 = 0,
  M_LEVEL_Level_NTC_specified_by_NID_NTC = 1,
  M_LEVEL_Level_1 = 2,
  M_LEVEL_Level_2 = 3,
  M_LEVEL_Level_3 = 4
} M_LEVEL;
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
/* Q_DIR */
typedef enum {
  Q_DIR_Reverse = 0,
  Q_DIR_Nominal = 1,
  Q_DIR_Both_directions = 2
} Q_DIR;
/* MA_Request::MA_Request_Supervision::SM1 */
typedef enum {
  SSM_TR_no_trans_SM1,
  SSM_TR_init_1_SM1,
  SSM_TR_NoReqPending_1_SM1,
  SSM_TR_ReqPending_1_SM1
} SSM_TR_SM1;
/* MA_Request::MA_Request_Supervision::SM1 */
typedef enum {
  SSM_st_init_SM1,
  SSM_st_NoReqPending_SM1,
  SSM_st_ReqPending_SM1
} SSM_ST_SM1;
/* T_TRAIN */
typedef kcg_real T_TRAIN;

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

/* TrackAtlasTypes::FromTIU_t */
typedef kcg_bool FromTIU_t_TrackAtlasTypes;

/* V_LOA */
typedef kcg_int V_LOA;

/* T_LOA */
typedef kcg_int T_LOA;

/* N_ITER */
typedef kcg_int N_ITER;

/* L_SECTION */
typedef kcg_int L_SECTION;

/* T_SECTIONTIMER */
typedef kcg_int T_SECTIONTIMER;

/* D_SECTIONTIMERSTOPLOC */
typedef kcg_int D_SECTIONTIMERSTOPLOC;

/* L_ENDSECTION */
typedef kcg_int L_ENDSECTION;

/* T_ENDTIMER */
typedef kcg_int T_ENDTIMER;

/* D_ENDTIMERSTARTLOC */
typedef kcg_int D_ENDTIMERSTARTLOC;

/* D_DP */
typedef kcg_int D_DP;

/* V_RELEASEDP */
typedef kcg_int V_RELEASEDP;

/* D_STARTOL */
typedef kcg_int D_STARTOL;

/* T_OL */
typedef kcg_int T_OL;

/* D_OL */
typedef kcg_int D_OL;

/* V_RELEASEOL */
typedef kcg_int V_RELEASEOL;

/* D_VALIDNV */
typedef kcg_int D_VALIDNV;

/* NID_C */
typedef kcg_int NID_C;

/* V_NVSHUNT */
typedef kcg_int V_NVSHUNT;

/* V_NVSTFF */
typedef kcg_int V_NVSTFF;

/* V_NVONSIGHT */
typedef kcg_int V_NVONSIGHT;

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

/* NID_PACKET */
typedef kcg_int NID_PACKET;

/* M_MCOUNT */
typedef kcg_int M_MCOUNT;

/* NID_BG */
typedef kcg_int NID_BG;

/* Q_NVLOCACC */
typedef kcg_int Q_NVLOCACC;

/* NID_MESSAGE */
typedef kcg_int NID_MESSAGE;

/* NID_LRBG */
typedef kcg_int NID_LRBG;

/* NID_EM */
typedef kcg_int NID_EM;

/* D_SR */
typedef kcg_int D_SR;

/* D_REF */
typedef kcg_int D_REF;

/* D_EMERGENCYSTOP */
typedef kcg_int D_EMERGENCYSTOP;

/* NID_RBC */
typedef kcg_int NID_RBC;

/* D_STATIC */
typedef kcg_int D_STATIC;

/* V_STATIC */
typedef kcg_int V_STATIC;

/* NC_DIFF */
typedef kcg_int NC_DIFF;

/* V_DIFF */
typedef kcg_int V_DIFF;

/* D_LINK */
typedef kcg_int D_LINK;

/* Q_LOCACC */
typedef kcg_int Q_LOCACC;

/* V_NVLIMSUPERV */
typedef kcg_int V_NVLIMSUPERV;

/* V_NVKVINT */
typedef kcg_int V_NVKVINT;

/* T_MAR */
typedef kcg_int T_MAR;

/* T_TIMEOUTRQST */
typedef kcg_int T_TIMEOUTRQST;

/* T_CYCRQST */
typedef kcg_int T_CYCRQST;

/* NID_ENGINE */
typedef kcg_int NID_ENGINE;

/* NID_TEXTMESSAGE */
typedef kcg_int NID_TEXTMESSAGE;

/* NID_OPERATIONAL */
typedef kcg_int NID_OPERATIONAL;

/* NID_LTRBG */
typedef kcg_int NID_LTRBG;

/* N_AXLE */
typedef kcg_int N_AXLE;

/* NID_CTRACTION */
typedef kcg_int NID_CTRACTION;

/* NID_NTC */
typedef kcg_int NID_NTC;

/* L_TRAIN */
typedef kcg_int L_TRAIN;

/* T_CYCLOC */
typedef kcg_int T_CYCLOC;

/* D_STARTREVERSE */
typedef kcg_int D_STARTREVERSE;

/* L_REVERSEAREA */
typedef kcg_int L_REVERSEAREA;

/* D_REVERSE */
typedef kcg_int D_REVERSE;

/* V_REVERSE */
typedef kcg_int V_REVERSE;

/* D_GRADIENT */
typedef kcg_int D_GRADIENT;

/* G_A */
typedef kcg_int G_A;

/* D_LEVELTR */
typedef kcg_int D_LEVELTR;

/* L_ACKLEVELTR */
typedef kcg_int L_ACKLEVELTR;

/* D_MAMODE */
typedef kcg_int D_MAMODE;

/* V_MAMODE */
typedef kcg_int V_MAMODE;

/* L_MAMODE */
typedef kcg_int L_MAMODE;

/* L_ACKMAMODE */
typedef kcg_int L_ACKMAMODE;

/* V_MAIN */
typedef kcg_int V_MAIN;

/* L_MESSAGE */
typedef kcg_int L_MESSAGE;

/* D_TAFDISPLAY */
typedef kcg_int D_TAFDISPLAY;

/* L_TAFDISPLAY */
typedef kcg_int L_TAFDISPLAY;

/* TM::nid_packet_meta */
typedef kcg_int nid_packet_meta_TM;

/* TA_MRSP::SSP_target_t */
typedef kcg_int SSP_target_t_TA_MRSP;

/* TA_MRSP::SSP_t_section_t */
typedef kcg_int SSP_t_section_t_TA_MRSP;

/* TA_MRSP::SSP_s_section_t */
typedef kcg_int SSP_s_section_t_TA_MRSP;

/* Obu_BasicTypes_Pkg::L_internal_Type */
typedef kcg_int L_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::Location_T */
typedef L_internal_Type_Obu_BasicTypes_Pkg Location_T_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::T_internal_Type */
typedef kcg_int T_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::V_internal_Type */
typedef kcg_int V_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::A_internal_Type */
typedef kcg_int A_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::G_internal_Type */
typedef kcg_int G_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::BCD_T */
typedef kcg_int BCD_T_Obu_BasicTypes_Pkg;

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
} struct__22641;

/* TM_radio_messages::M_TrackTrain_Radio_T */
typedef struct__22641 M_TrackTrain_Radio_T_TM_radio_messages;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__22659;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__22659 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__22667[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__22667 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__22670;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__22670 CompressedPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_SH_request;
} struct__22675;

/* TM_radio_messages::M_027_T */
typedef struct__22675 M_027_T_TM_radio_messages;

/* TM_radio_messages::M_028_T */
typedef struct__22675 M_028_T_TM_radio_messages;

typedef struct {
  kcg_int radioDevice;
  T_internal_Type_Obu_BasicTypes_Pkg receivedSystemTime;
  NID_MESSAGE nid_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_reference;
  NID_EM nid_em;
  Q_SCALE q_scale;
  D_SR d_sr;
  T_TRAIN t_sh_rqst;
  D_REF d_ref;
  Q_DIR q_dir;
  D_EMERGENCYSTOP d_emergencystop;
  M_VERSION m_version;
} struct__22685;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct__22685 Radio_TrackTrain_Header_T_Radio_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  M_VERSION m_version;
} struct__22703;

/* TM_radio_messages::M_032_T */
typedef struct__22703 M_032_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_REF d_ref;
} struct__22713;

/* TM_radio_messages::M_033_T */
typedef struct__22713 M_033_T_TM_radio_messages;

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
} struct__22724;

/* TM_radio_messages::M_034_T */
typedef struct__22724 M_034_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
} struct__22738;

/* TM_radio_messages::M_024_T */
typedef struct__22738 M_024_T_TM_radio_messages;

/* TM_radio_messages::M_009_T */
typedef struct__22738 M_009_T_TM_radio_messages;

/* TM_radio_messages::M_006_T */
typedef struct__22738 M_006_T_TM_radio_messages;

/* TM_radio_messages::M_003_T */
typedef struct__22738 M_003_T_TM_radio_messages;

/* TM_radio_messages::M_043_T */
typedef struct__22738 M_043_T_TM_radio_messages;

/* TM_radio_messages::M_041_T */
typedef struct__22738 M_041_T_TM_radio_messages;

/* TM_radio_messages::M_040_T */
typedef struct__22738 M_040_T_TM_radio_messages;

/* TM_radio_messages::M_039_T */
typedef struct__22738 M_039_T_TM_radio_messages;

/* TM_radio_messages::M_038_T */
typedef struct__22738 M_038_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_ORIENTATION q_orientation;
} struct__22747;

/* TM_radio_messages::M_045_T */
typedef struct__22747 M_045_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_SR d_sr;
} struct__22757;

/* TM_radio_messages::M_002_T */
typedef struct__22757 M_002_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_received;
} struct__22768;

/* TM_radio_messages::M_008_T */
typedef struct__22768 M_008_T_TM_radio_messages;

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
} struct__22778;

/* TM_radio_messages::M_015_T */
typedef struct__22778 M_015_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  NID_EM nid_em;
} struct__22792;

/* TM_radio_messages::M_018_T */
typedef struct__22792 M_018_T_TM_radio_messages;

/* TM_radio_messages::M_016_T */
typedef struct__22792 M_016_T_TM_radio_messages;

typedef struct {
  M_TrackTrain_Radio_T_TM_radio_messages message;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int trigger;
  kcg_bool message_sent;
} struct__22802;

/* InfraLib::R_data_internal_T */
typedef struct__22802 R_data_internal_T_InfraLib;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
} struct__22809;

/* TM_radio_messages::M_003_int_T */
typedef struct__22809 M_003_int_T_TM_radio_messages;

typedef kcg_int array_int_4[4];

/* TM::Array04 */
typedef array_int_4 Array04_TM;

/* TM::P015_section_array_T */
typedef array_int_4 P015_section_array_T_TM;

typedef struct {
  kcg_int L_SECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
} struct__22821;

/* TM::P015_section_int_T */
typedef struct__22821 P015_section_int_T_TM;

typedef P015_section_array_T_TM array_int_4_32[32];

/* TM::P015_OBU_sectionlist_array_T */
typedef array_int_4_32 P015_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_128[128];

/* TM::P015_sections_array_flat_T */
typedef array_int_128 P015_sections_array_flat_T_TM;

/* TM::P012_sections_array_flat_T */
typedef array_int_128 P012_sections_array_flat_T_TM;

typedef P015_section_int_T_TM array__22834[32];

/* TM::P015_trackide_sectionlist_T */
typedef array__22834 P015_trackide_sectionlist_T_TM;

/* TM::P015_OBU_sectionlist_int_T */
typedef array__22834 P015_OBU_sectionlist_int_T_TM;

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
} struct__22837;

/* TM::P015_trackside_int_T */
typedef struct__22837 P015_trackside_int_T_TM;

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
} struct__22864;

/* TM::P065_trackside_int_T */
typedef struct__22864 P065_trackside_int_T_TM;

typedef kcg_int array_int_7[7];

/* TM::Array07 */
typedef array_int_7 Array07_TM;

/* TM::P005_section_array_T */
typedef array_int_7 P005_section_array_T_TM;

typedef struct {
  kcg_int D_LINK;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_LINKORIENTATION;
  kcg_int Q_LINKREACTION;
  kcg_int Q_LOCACC;
} struct__22880;

/* TM::P005_section_int_T */
typedef struct__22880 P005_section_int_T_TM;

typedef P005_section_array_T_TM array_int_7_33[33];

/* TM::P005_OBU_sectionlist_array_T */
typedef array_int_7_33 P005_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_231[231];

/* TM::P005_sections_array_flat_T */
typedef array_int_231 P005_sections_array_flat_T_TM;

typedef P005_section_int_T_TM array__22896[33];

/* TM::P005_OBU_sectionlist_int_T */
typedef array__22896 P005_OBU_sectionlist_int_T_TM;

typedef P005_section_int_T_TM array__22899[32];

/* TM::P005_trackide_sectionlist_T */
typedef array__22899 P005_trackide_sectionlist_T_TM;

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
} struct__22902;

/* TM::P005_trackside_int_T */
typedef struct__22902 P005_trackside_int_T_TM;

typedef kcg_int array_int_2[2];

/* TM_baseline2::P027V1_section_array_qdiff_T */
typedef array_int_2 P027V1_section_array_qdiff_T_TM_baseline2;

typedef struct { kcg_int NC_DIFF; kcg_int V_DIFF; } struct__22922;

/* TM_baseline2::P027V1_section_int_qdiff_T */
typedef struct__22922 P027V1_section_int_qdiff_T_TM_baseline2;

typedef P027V1_section_array_qdiff_T_TM_baseline2 array_int_2_32[32];

/* TM_baseline2::P027V1_OBU_sectionlist_array_qdiff_T */
typedef array_int_2_32 P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2;

typedef kcg_int array_int_64[64];

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef P027V1_section_int_qdiff_T_TM_baseline2 array__22933[32];

/* TM_baseline2::P027V1_trackside_qdifflist_T */
typedef array__22933 P027V1_trackside_qdifflist_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_int_qdiff_T */
typedef array__22933 P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2;

typedef struct {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
} struct__22936;

/* TM_baseline2::P027V1_section_int_T */
typedef struct__22936 P027V1_section_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__22944[33];

/* TM_baseline2::P027V1_OBU_sectionlist_int_T */
typedef array__22944 P027V1_OBU_sectionlist_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__22947[32];

/* TM_baseline2::P027V1_trackside_sectionlist_T */
typedef array__22947 P027V1_trackside_sectionlist_T_TM_baseline2;

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
} struct__22950;

/* TM_baseline2::P027V1_trackside_int_T */
typedef struct__22950 P027V1_trackside_int_T_TM_baseline2;

typedef kcg_int array_int_3[3];

/* TM::Array03 */
typedef array_int_3 Array03_TM;

/* TM::P021_section_array_T */
typedef array_int_3 P021_section_array_T_TM;

/* TM::P041_section_array_T */
typedef array_int_3 P041_section_array_T_TM;

/* Packet_TrainTypes_Pkg::aNID_NTC_T */
typedef array_int_3 aNID_NTC_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
} struct__22968;

/* TM::P021_section_int_T */
typedef struct__22968 P021_section_int_T_TM;

typedef array_int_3 array_int_3_33[33];

/* TM::P021_OBU_sectionlist_array_T */
typedef array_int_3_33 P021_OBU_sectionlist_array_T_TM;

/* TM::P041_OBU_sectionlist_array_T */
typedef array_int_3_33 P041_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_99[99];

/* TM::P021_sections_array_flat_T */
typedef array_int_99 P021_sections_array_flat_T_TM;

/* TM::P041_sections_array_flat_T */
typedef array_int_99 P041_sections_array_flat_T_TM;

typedef P021_section_int_T_TM array__22980[33];

/* TM::P021_OBU_sectionlist_int_T */
typedef array__22980 P021_OBU_sectionlist_int_T_TM;

typedef P021_section_int_T_TM array__22983[32];

/* TM::P021_trackide_sectionlist_T */
typedef array__22983 P021_trackide_sectionlist_T_TM;

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
} struct__22986;

/* TM::P021_trackside_int_T */
typedef struct__22986 P021_trackside_int_T_TM;

typedef struct {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
} struct__22999;

/* TM::P041_section_int_T */
typedef struct__22999 P041_section_int_T_TM;

typedef P041_section_int_T_TM array__23005[33];

/* TM::P041_OBU_sectionlist_int_T */
typedef array__23005 P041_OBU_sectionlist_int_T_TM;

typedef P041_section_int_T_TM array__23008[32];

/* TM::P041_trackide_sectionlist_T */
typedef array__23008 P041_trackide_sectionlist_T_TM;

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
} struct__23011;

/* TM::P041_trackside_int_T */
typedef struct__23011 P041_trackside_int_T_TM;

typedef kcg_int array_int_32[32];

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
} struct__23028;

/* TM_baseline2::P003V1_trackside_int_T */
typedef struct__23028 P003V1_trackside_int_T_TM_baseline2;

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
} struct__23057;

/* TM::Radio_TrackTrain_Header_T */
typedef struct__23057 Radio_TrackTrain_Header_T_TM;

typedef struct {
  Radio_TrackTrain_Header_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__23075;

/* TM::CompressedRadioMessage */
typedef struct__23075 CompressedRadioMessage_TM;

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
} struct__23080;

/* TrainToTrack::Position_Report_based_on_two_balise_groups */
typedef struct__23080 Position_Report_based_on_two_balise_groups_TrainToTrack;

typedef struct {
  kcg_bool valid;
  Position_Report_based_on_two_balise_groups_TrainToTrack packet1;
} struct__23100;

/* Packet_TrainTypes_Pkg::PT1_PositionReport_2BG_T */
typedef struct__23100 PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg;

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
} struct__23105;

/* TrainToTrack::Position_Report */
typedef struct__23105 Position_Report_TrainToTrack;

typedef struct {
  kcg_bool valid;
  Position_Report_TrainToTrack packet0;
} struct__23124;

/* Packet_TrainTypes_Pkg::PT0_PositionReport_T */
typedef struct__23124 PT0_PositionReport_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool trackAheadFree;
  kcg_bool driverSelectsStart;
} struct__23129;

/* MA_Request::Driver2MAR_T */
typedef struct__23129 Driver2MAR_T_MA_Request;

typedef struct {
  L_internal_Type_Obu_BasicTypes_Pkg nominal;
  L_internal_Type_Obu_BasicTypes_Pkg d_min;
  L_internal_Type_Obu_BasicTypes_Pkg d_max;
} struct__23134;

/* Obu_BasicTypes_Pkg::LocWithInAcc_T */
typedef struct__23134 LocWithInAcc_T_Obu_BasicTypes_Pkg;

typedef struct {
  NID_ENGINE nid_engine;
  NID_OPERATIONAL nid_operational;
  L_TRAIN l_train;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_baliseAntenna_2_frontend;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_frontend_2_rearend;
  LocWithInAcc_T_Obu_BasicTypes_Pkg locationAccuracy_DefaultValue;
  LocWithInAcc_T_Obu_BasicTypes_Pkg centerDetectionAcc_DefaultValue;
} struct__23140;

/* TrainPosition_Types_Pck::trainProperties_T */
typedef struct__23140 trainProperties_T_TrainPosition_Types_Pck;

typedef struct {
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
} struct__23150;

/* BG_Types_Pkg::LinkedBG_T */
typedef struct__23150 LinkedBG_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_BG nid_bg_fromLinkingBG;
  NID_C nid_c_fromLinkingBG;
  LocWithInAcc_T_Obu_BasicTypes_Pkg expectedLocation;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_link;
  LinkedBG_T_BG_Types_Pkg linkingInfo;
} struct__23164;

/* TrainPosition_Types_Pck::infoFromLinking_T */
typedef struct__23164 infoFromLinking_T_TrainPosition_Types_Pck;

typedef LinkedBG_T_BG_Types_Pkg array__23173[4];

/* BG_Types_Pkg::LinkedBGs_T */
typedef array__23173 LinkedBGs_T_BG_Types_Pkg;

typedef struct {
  V_internal_Type_Obu_BasicTypes_Pkg v_safeNominal;
  V_internal_Type_Obu_BasicTypes_Pkg v_rawNominal;
  V_internal_Type_Obu_BasicTypes_Pkg v_lower;
  V_internal_Type_Obu_BasicTypes_Pkg v_upper;
} struct__23176;

/* Obu_BasicTypes_Pkg::OdometrySpeeds_T */
typedef struct__23176 OdometrySpeeds_T_Obu_BasicTypes_Pkg;

typedef struct {
  L_internal_Type_Obu_BasicTypes_Pkg o_nominal;
  L_internal_Type_Obu_BasicTypes_Pkg o_min;
  L_internal_Type_Obu_BasicTypes_Pkg o_max;
} struct__23183;

/* Obu_BasicTypes_Pkg::OdometryLocations_T */
typedef struct__23183 OdometryLocations_T_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg timestamp;
  OdometryLocations_T_Obu_BasicTypes_Pkg odo;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg speed;
  A_internal_Type_Obu_BasicTypes_Pkg acceleration;
  odoMotionState_T_Obu_BasicTypes_Pkg motionState;
  odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection;
} struct__23189;

/* Obu_BasicTypes_Pkg::odometry_T */
typedef struct__23189 odometry_T_Obu_BasicTypes_Pkg;

typedef struct {
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
} struct__23199;

/* BG_Types_Pkg::BG_Header_T */
typedef struct__23199 BG_Header_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  BG_Header_T_BG_Types_Pkg BG_Header;
  LinkedBGs_T_BG_Types_Pkg linkedBGs;
} struct__23217;

/* BG_Types_Pkg::passedBG_T */
typedef struct__23217 passedBG_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINK q_link;
  LocWithInAcc_T_Obu_BasicTypes_Pkg location;
  kcg_int seqNoOnTrack;
  infoFromLinking_T_TrainPosition_Types_Pck infoFromLinking;
  passedBG_T_BG_Types_Pkg infoFromPassing;
} struct__23223;

/* TrainPosition_Types_Pck::positionedBG_T */
typedef struct__23223 positionedBG_T_TrainPosition_Types_Pck;

typedef struct {
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
} struct__23234;

/* TrainPosition_Types_Pck::trainPosition_T */
typedef struct__23234 trainPosition_T_TrainPosition_Types_Pck;

typedef struct { kcg_bool valid; M_LEVEL level; M_MODE Mode; } struct__23251;

/* Level_And_Mode_Types_Pkg::T_Mode_Level */
typedef struct__23251 T_Mode_Level_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool present;
  NID_MESSAGE nid_message;
  T_TRAIN t_train;
  NID_ENGINE nid_engine;
  Q_MARQSTREASON xQ_MARQSTREASON;
  T_TRAIN xT_TRAIN;
  NID_EM xNID_EM;
  Q_EMERGENCYSTOP xQ_EMERGENCYSTOP;
  NID_TEXTMESSAGE xNID_TEXTMESSAGE;
} struct__23257;

/* Radio_Types_Pkg::Radio_TrainTrack_Header_T */
typedef struct__23257 Radio_TrainTrack_Header_T_Radio_Types_Pkg;

typedef struct {
  M_VOLTAGE m_voltage;
  NID_CTRACTION nid_ctraction;
} struct__23269;

/* Packet_TrainTypes_Pkg::sTractionIdentity_T */
typedef struct__23269 sTractionIdentity_T_Packet_TrainTypes_Pkg;

typedef sTractionIdentity_T_Packet_TrainTypes_Pkg array__23274[3];

/* Packet_TrainTypes_Pkg::aTractionIdentity_T */
typedef array__23274 aTractionIdentity_T_Packet_TrainTypes_Pkg;

typedef struct {
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
} struct__23277;

/* Packet_TrainTypes_Pkg::PT11_ValidatedTrainData_T */
typedef struct__23277 PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  NID_LTRBG transitionInformation;
} struct__23293;

/* Packet_TrainTypes_Pkg::PT9_Level23_TransitionInformation_T */
typedef struct__23293 PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  NID_OPERATIONAL TrainRunningNumber;
} struct__23298;

/* Packet_TrainTypes_Pkg::PT5_TrainRunningNumber */
typedef struct__23298 PT5_TrainRunningNumber_Packet_TrainTypes_Pkg;

typedef struct { kcg_bool valid; M_ERROR m_error; } struct__23303;

/* Packet_TrainTypes_Pkg::PT4_ErrorReporting_T */
typedef struct__23303 PT4_ErrorReporting_T_Packet_TrainTypes_Pkg;

typedef kcg_int array_int_15[15];

/* TM::Array15 */
typedef array_int_15 Array15_TM;

/* Packet_TrainTypes_Pkg::telephoneNumber_T */
typedef array_int_15 telephoneNumber_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  telephoneNumber_T_Packet_TrainTypes_Pkg telephoneNumber;
} struct__23311;

/* Packet_TrainTypes_Pkg::sNID_RADIO_T */
typedef struct__23311 sNID_RADIO_T_Packet_TrainTypes_Pkg;

typedef sNID_RADIO_T_Packet_TrainTypes_Pkg array__23316[1];

/* Packet_TrainTypes_Pkg::aNID_RADIO_T */
typedef array__23316 aNID_RADIO_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int number;
  aNID_RADIO_T_Packet_TrainTypes_Pkg aNID_RADIO;
} struct__23319;

/* Packet_TrainTypes_Pkg::PT3_OnboardTelephoneNumbers_T */
typedef struct__23319 PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg;

typedef struct {
  PT0_PositionReport_T_Packet_TrainTypes_Pkg p0;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg p1;
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg p3;
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg p4;
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg p5;
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg p9;
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg p11;
} struct__23325;

/* Common_Types_Pkg::outPackets_T */
typedef struct__23325 outPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_bool present;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg header;
  outPackets_T_Common_Types_Pkg packets;
} struct__23335;

/* Radio_Types_Pkg::Radio_TrainTrack_Message_T */
typedef struct__23335 Radio_TrainTrack_Message_T_Radio_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_C nid_c;
  NID_RBC rbc_id;
  kcg_int device_id;
} struct__23341;

/* Common_Types_Pkg::RBC_Id_T */
typedef struct__23341 RBC_Id_T_Common_Types_Pkg;

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
} struct__23348;

/* Common_Types_Pkg::RadioMetadata_T */
typedef struct__23348 RadioMetadata_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg source;
  RadioMetadata_T_Common_Types_Pkg radioMetadata;
  BG_Header_T_BG_Types_Pkg BG_Common_Header;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  CompressedPackets_T_Common_Types_Pkg packets;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} struct__23360;

/* Common_Types_Pkg::ReceivedMessage_T */
typedef struct__23360 ReceivedMessage_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  L_NVKRINT l_nvkrint_l;
  kcg_real m_nvkrint_l;
} struct__23370;

/* TM::P003_OBU_l_section_enum_T */
typedef struct__23370 P003_OBU_l_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_l_section_enum_T */
typedef struct__23370 P203V1_OBU_l_section_enum_T_TM_baseline2;

typedef struct__23370 array__23376[32];

/* TM::P003_OBU_l_sectionlist_enum_T */
typedef array__23376 P003_OBU_l_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_l_sectionlist_enum_T */
typedef array__23376 P203V1_OBU_l_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int v_nvkvint_k_m;
  kcg_real m_nvkvint_km_12;
  kcg_real m_nvkvint_km_23;
} struct__23379;

/* TM::P003_OBU_k_m_section_enum_T */
typedef struct__23379 P003_OBU_k_m_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_m_section_enum_T */
typedef struct__23379 P203V1_OBU_k_m_section_enum_T_TM_baseline2;

typedef struct__23379 array__23386[32];

/* TM::P003_OBU_k_m_sectionlist_enum_T */
typedef array__23386 P003_OBU_k_m_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_m_sectionlist_enum_T */
typedef array__23386 P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_NVKVINTSET q_nvkvintset_k;
  kcg_real a_nvp12_k;
  kcg_real a_nvp23_k;
  kcg_int v_nvkvint_k;
  kcg_real m_nvkvint_k_12;
  kcg_real m_nvkvint_k_23;
  kcg_int n_iter_k_m;
  array__23386 n_iter_k_m_list;
} struct__23389;

/* TM::P003_OBU_k_section_enum_T */
typedef struct__23389 P003_OBU_k_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_section_enum_T */
typedef struct__23389 P203V1_OBU_k_section_enum_T_TM_baseline2;

typedef struct__23389 array__23401[32];

/* TM::P003_OBU_k_sectionlist_enum_T */
typedef array__23401 P003_OBU_k_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_sectionlist_enum_T */
typedef array__23401 P203V1_OBU_k_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int v_nvkvint_n;
  kcg_real m_nvkvint_n_12;
  kcg_real m_nvkvint_n_23;
} struct__23404;

/* TM::P003_OBU_n_section_enum_T */
typedef struct__23404 P003_OBU_n_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_n_section_enum_T */
typedef struct__23404 P203V1_OBU_n_section_enum_T_TM_baseline2;

typedef struct__23404 array__23411[32];

/* TM::P003_OBU_n_sectionlist_enum_T */
typedef array__23411 P003_OBU_n_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_n_sectionlist_enum_T */
typedef array__23411 P203V1_OBU_n_sectionlist_enum_T_TM_baseline2;

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
} struct__23414;

/* TM_baseline2::P203V1_OBU_T */
typedef struct__23414 P203V1_OBU_T_TM_baseline2;

typedef struct {
  Q_NVLOCACC q_nvlocacc;
  V_NVLIMSUPERV v_nvlimsuperv;
} struct__23445;

/* TM_baseline2::P003_permanent_data_T */
typedef struct__23445 P003_permanent_data_T_TM_baseline2;

typedef struct {
  kcg_bool Mess_15;
  kcg_bool Mess_16;
  kcg_bool Mess_2;
  kcg_bool Mess_27;
  kcg_bool Mess_28;
  kcg_bool Mess_6;
  kcg_bool T_NVCONTACT_Overpass;
} struct__23450;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_Mess */
typedef struct__23450 T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg;

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
} struct__23460;

/* Packet_Types_Pkg::P80_ModeProfile_T */
typedef struct__23460 P80_ModeProfile_T_Packet_Types_Pkg;

typedef P80_ModeProfile_T_Packet_Types_Pkg array__23472[3];

/* Packet_Types_Pkg::P80_ModeProfiles_T */
typedef array__23472 P80_ModeProfiles_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
} struct__23475;

/* Packet_Types_Pkg::P46_ConditionalLevelTransitionOrder_T */
typedef struct__23475 P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg;

typedef P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg array__23482[7];

/* Packet_Types_Pkg::P46_ConditionalLevelTransitionOrders_T */
typedef array__23482 P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_LEVELTR d_leveltr;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
  L_ACKLEVELTR l_ackleveltr;
} struct__23485;

/* Packet_Types_Pkg::P41_LevelTransitionOrder_T */
typedef struct__23485 P41_LevelTransitionOrder_T_Packet_Types_Pkg;

typedef P41_LevelTransitionOrder_T_Packet_Types_Pkg array__23495[7];

/* Packet_Types_Pkg::P41_LevelTransistionOrders_T */
typedef array__23495 P41_LevelTransistionOrders_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIFF q_diff;
  NC_CDDIFF nc_cddiff;
  NC_DIFF nc_diff;
  V_DIFF v_diff;
} struct__23498;

/* Packet_Types_Pkg::Diff_T */
typedef struct__23498 Diff_T_Packet_Types_Pkg;

typedef Diff_T_Packet_Types_Pkg array__23506[7];

/* Packet_Types_Pkg::DiffArray_T */
typedef array__23506 DiffArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  DiffArray_T_Packet_Types_Pkg diffArray;
} struct__23509;

/* Packet_Types_Pkg::SSP_T */
typedef struct__23509 SSP_T_Packet_Types_Pkg;

typedef SSP_T_Packet_Types_Pkg array__23517[7];

/* Packet_Types_Pkg::SSPArray_T */
typedef array__23517 SSPArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  DiffArray_T_Packet_Types_Pkg diffArray;
  SSPArray_T_Packet_Types_Pkg SSPArray;
} struct__23520;

/* Packet_Types_Pkg::P27_InternationalStaticSpeedProfile_T */
typedef struct__23520 P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} struct__23531;

/* Packet_Types_Pkg::P21_GradientProfile_T */
typedef struct__23531 P21_GradientProfile_T_Packet_Types_Pkg;

typedef P21_GradientProfile_T_Packet_Types_Pkg array__23540[7];

/* Packet_Types_Pkg::P21_GradientProfiles_T */
typedef array__23540 P21_GradientProfiles_T_Packet_Types_Pkg;

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
} struct__23543;

/* Packet_Types_Pkg::P15_Level23MovementAuthority_T */
typedef struct__23543 P15_Level23MovementAuthority_T_Packet_Types_Pkg;

typedef P15_Level23MovementAuthority_T_Packet_Types_Pkg array__23570[5];

/* Packet_Types_Pkg::P15_Level23MovementAuthorities_T */
typedef array__23570 P15_Level23MovementAuthorities_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_REVERSE d_reverse;
  V_REVERSE v_reverse;
} struct__23573;

/* TM::P139_OBU_T */
typedef struct__23573 P139_OBU_T_TM;

/* Packet_Types_Pkg::P139_ReversingSupervisionInformation_T */
typedef struct__23573 P139_ReversingSupervisionInformation_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_STARTREVERSE d_startreverse;
  L_REVERSEAREA l_reversearea;
} struct__23581;

/* TM::P138_OBU_T */
typedef struct__23581 P138_OBU_T_TM;

/* Packet_Types_Pkg::P138_ReversingAreaInformation_T */
typedef struct__23581 P138_ReversingAreaInformation_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SRSTOP q_srstop;
} struct__23589;

/* Packet_Types_Pkg::P137_StopIfInStaffResponsible_T */
typedef struct__23589 P137_StopIfInStaffResponsible_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool P_12;
  kcg_bool P_135;
  P137_StopIfInStaffResponsible_T_Packet_Types_Pkg P_137;
  P138_ReversingAreaInformation_T_Packet_Types_Pkg P_138;
  P139_ReversingSupervisionInformation_T_Packet_Types_Pkg P_139;
  P15_Level23MovementAuthorities_T_Packet_Types_Pkg P_15;
  P21_GradientProfiles_T_Packet_Types_Pkg P_21;
  P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg P_27;
  P41_LevelTransistionOrders_T_Packet_Types_Pkg P_41;
  P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg P_46;
  kcg_bool P_63;
  P80_ModeProfiles_T_Packet_Types_Pkg P_80;
} struct__23595;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_Packet */
typedef struct__23595 T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg;

typedef struct {
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg train_packets;
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg train_messages;
  kcg_bool p12;
  kcg_bool p15;
  kcg_bool p21;
  kcg_bool p27;
} struct__23610;

/* TrackAtlasTypes::DataForModeAndLevel_t */
typedef struct__23610 DataForModeAndLevel_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg begin_section;
  L_internal_Type_Obu_BasicTypes_Pkg end_section;
  G_internal_Type_Obu_BasicTypes_Pkg gradient;
} struct__23619;

/* TrackAtlasTypes::GradientProfile_for_DMI_section_t */
typedef struct__23619 GradientProfile_for_DMI_section_t_TrackAtlasTypes;

typedef GradientProfile_for_DMI_section_t_TrackAtlasTypes array__23626[50];

/* TrackAtlasTypes::GradientProfile_for_DMI_t */
typedef array__23626 GradientProfile_for_DMI_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_Abs;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_LRBG;
  V_internal_Type_Obu_BasicTypes_Pkg MRS;
} struct__23629;

/* TrackAtlasTypes::MRSP_section_t */
typedef struct__23629 MRSP_section_t_TrackAtlasTypes;

typedef MRSP_section_t_TrackAtlasTypes array__23636[200];

/* TrackAtlasTypes::MRSP_Profile_t */
typedef array__23636 MRSP_Profile_t_TrackAtlasTypes;

typedef struct {
  GradientProfile_for_DMI_t_TrackAtlasTypes GradientProfile;
  kcg_bool Gradient_profile_updated;
  MRSP_Profile_t_TrackAtlasTypes MRSP;
  kcg_bool MRSP_updated;
} struct__23639;

/* TrackAtlasTypes::DataForDMI_t */
typedef struct__23639 DataForDMI_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_Absolute;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_LRBG;
  G_internal_Type_Obu_BasicTypes_Pkg Gradient;
  L_internal_Type_Obu_BasicTypes_Pkg L_Gradient;
} struct__23646;

/* TrackAtlasTypes::Gradient_section_t */
typedef struct__23646 Gradient_section_t_TrackAtlasTypes;

typedef Gradient_section_t_TrackAtlasTypes array__23654[50];

/* TrackAtlasTypes::GradientProfile_t */
typedef array__23654 GradientProfile_t_TrackAtlasTypes;

typedef struct {
  T_internal_Type_Obu_BasicTypes_Pkg t_endtimer;
  L_internal_Type_Obu_BasicTypes_Pkg d_endtimerstoploc;
} struct__23657;

/* TrackAtlasTypes::Endtimer_t */
typedef struct__23657 Endtimer_t_TrackAtlasTypes;

typedef struct {
  L_internal_Type_Obu_BasicTypes_Pkg d_DP_or_OL;
  V_internal_Type_Obu_BasicTypes_Pkg v_release;
  kcg_bool calc_v_release_onboard;
} struct__23662;

/* TrackAtlasTypes::DP_or_OL_t */
typedef struct__23662 DP_or_OL_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  kcg_bool q_endsection;
  L_internal_Type_Obu_BasicTypes_Pkg l_section;
  kcg_bool q_sectiontimer;
  T_internal_Type_Obu_BasicTypes_Pkg t_sectiontimer;
  L_internal_Type_Obu_BasicTypes_Pkg d_sectiontimerstoploc;
} struct__23668;

/* TrackAtlasTypes::MovementAuthoritySection_t */
typedef struct__23668 MovementAuthoritySection_t_TrackAtlasTypes;

typedef MovementAuthoritySection_t_TrackAtlasTypes array__23677[10];

/* TrackAtlasTypes::MovementAuthoritySectionlist_t */
typedef array__23677 MovementAuthoritySectionlist_t_TrackAtlasTypes;

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
} struct__23680;

/* TrackAtlasTypes::MovementAuthority_t */
typedef struct__23680 MovementAuthority_t_TrackAtlasTypes;

typedef struct {
  kcg_bool freshMA;
  MovementAuthority_t_TrackAtlasTypes MA;
  kcg_bool freshGradientProfile;
  GradientProfile_t_TrackAtlasTypes GradientProfile;
  kcg_bool freshMRSP;
  MRSP_Profile_t_TrackAtlasTypes MRSP;
} struct__23698;

/* TrackAtlasTypes::DataForSupervision_nextGen_t */
typedef struct__23698 DataForSupervision_nextGen_t_TrackAtlasTypes;

typedef struct { kcg_bool valid; kcg_int nid_c; } struct__23707;

/* TM::P003_OBU_nid_c_section_enum_T */
typedef struct__23707 P003_OBU_nid_c_section_enum_T_TM;

/* TM_baseline2::P003V1_section_enum_T */
typedef struct__23707 P003V1_section_enum_T_TM_baseline2;

typedef struct__23707 array__23712[32];

/* TM::P003_OBU_nid_c_sectionlist_enum_T */
typedef array__23712 P003_OBU_nid_c_sectionlist_enum_T_TM;

/* TM_baseline2::P003V1_sectionlist_enum_T */
typedef array__23712 P003V1_sectionlist_enum_T_TM_baseline2;

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
} struct__23715;

/* TM::P003_OBU_T */
typedef struct__23715 P003_OBU_T_TM;

typedef struct {
  kcg_bool valid;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} struct__23770;

/* TM::P021_section_enum_T */
typedef struct__23770 P021_section_enum_T_TM;

typedef P021_section_enum_T_TM array__23777[33];

/* TM::P021_OBU_sectionlist_enum_T */
typedef array__23777 P021_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P021_OBU_sectionlist_enum_T_TM sections;
} struct__23780;

/* TM::P021_OBU_T */
typedef struct__23780 P021_OBU_T_TM;

typedef kcg_int array_int_5[5];

/* TM::Array05 */
typedef array_int_5 Array05_TM;

typedef struct {
  kcg_bool handled;
  NID_EM nid_em;
  kcg_int nfree;
} struct__23791;

/* TA_EmergencyStop::NID_EM_Store::NID_EM_STORE_Acc_T */
typedef struct__23791 NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store;

typedef struct { NID_EM nid_em; kcg_bool valid; } struct__23797;

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Item_T */
typedef struct__23797 NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store;

typedef NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store array__23802[8];

typedef struct { kcg_int nfree; array__23802 items; } struct__23805;

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_T */
typedef struct__23805 NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  kcg_int t_mar;
  kcg_int t_timeoutrqst;
  kcg_int t_cycrqst;
} struct__23810;

/* Packet_Types_Pkg::P57_MovementAuthorityRequestParameters_T */
typedef struct__23810 P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg;

typedef kcg_int array_int_6[6];

/* TM::Array06 */
typedef array_int_6 Array06_TM;

typedef struct {
  kcg_bool valid;
  L_SECTION l_section;
  Q_SECTIONTIMER q_sectiontimer;
  T_SECTIONTIMER t_sectiontimer;
  D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc;
} struct__23821;

/* TM::P015_section_enum_T */
typedef struct__23821 P015_section_enum_T_TM;

/* TM::P012_section_enum_T */
typedef struct__23821 P012_section_enum_T_TM;

typedef P015_section_enum_T_TM array__23829[32];

/* TM::P015_OBU_sectionlist_enum_T */
typedef array__23829 P015_OBU_sectionlist_enum_T_TM;

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
} struct__23832;

/* TM::P015_OBU_T */
typedef struct__23832 P015_OBU_T_TM;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg d_static_abs;
  L_internal_Type_Obu_BasicTypes_Pkg d_static_LRBG;
  kcg_bool q_train_length_corr;
  V_internal_Type_Obu_BasicTypes_Pkg v_static;
} struct__23857;

/* TrackAtlasTypes::StaticSpeedSection_t */
typedef struct__23857 StaticSpeedSection_t_TrackAtlasTypes;

typedef StaticSpeedSection_t_TrackAtlasTypes array__23865[50];

/* TrackAtlasTypes::StaticSpeedProfile_t */
typedef array__23865 StaticSpeedProfile_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
} struct__23868;

/* TM::P046_section_enum_T */
typedef struct__23868 P046_section_enum_T_TM;

typedef P046_section_enum_T_TM array__23874[33];

/* TM::P046_OBU_sectionlist_enum_T */
typedef array__23874 P046_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  N_ITER n_iter;
  P046_OBU_sectionlist_enum_T_TM sections;
} struct__23877;

/* TM::P046_OBU_T */
typedef struct__23877 P046_OBU_T_TM;

typedef kcg_int array_int_66[66];

/* TM::P046_sections_array_flat_T */
typedef array_int_66 P046_sections_array_flat_T_TM;

typedef struct {
  kcg_bool valid;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
  L_ACKLEVELTR l_ackleveltr;
} struct__23887;

/* TM::P041_section_enum_T */
typedef struct__23887 P041_section_enum_T_TM;

typedef P041_section_enum_T_TM array__23894[33];

/* TM::P041_OBU_sectionlist_enum_T */
typedef array__23894 P041_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_LEVELTR d_leveltr;
  N_ITER n_iter;
  P041_OBU_sectionlist_enum_T_TM sections;
} struct__23897;

/* TM::P041_OBU_T */
typedef struct__23897 P041_OBU_T_TM;

typedef struct {
  kcg_bool valid;
  NC_DIFF nc_diff;
  V_DIFF v_diff;
} struct__23906;

/* TM_baseline2::P027V1_section_enum_qdiff_T */
typedef struct__23906 P027V1_section_enum_qdiff_T_TM_baseline2;

typedef P027V1_section_enum_qdiff_T_TM_baseline2 array__23912[32];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_qdiff_T */
typedef array__23912 P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  N_ITER n_iter;
  P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 SECTIONS_q_diff;
} struct__23915;

/* TM_baseline2::P027V1_section_enum_T */
typedef struct__23915 P027V1_section_enum_T_TM_baseline2;

typedef P027V1_section_enum_T_TM_baseline2 array__23924[33];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_T */
typedef array__23924 P027V1_OBU_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 sections;
} struct__23927;

/* TM_baseline2::P027V1_OBU_T */
typedef struct__23927 P027V1_OBU_T_TM_baseline2;

typedef struct { kcg_bool valid; Q_DIR q_dir; Q_SCALE q_scale; } struct__23934;

/* TM_baseline2::P027V1_OBU_body_enum_T */
typedef struct__23934 P027V1_OBU_body_enum_T_TM_baseline2;

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
} struct__23940;

/* TM::P012_OBU_T */
typedef struct__23940 P012_OBU_T_TM;

typedef struct { kcg_bool valid; Q_DIR q_dir; } struct__23966;

/* TM::P135_OBU_T */
typedef struct__23966 P135_OBU_T_TM;

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
} struct__23971;

/* TM_baseline2::P003V1_OBU_T */
typedef struct__23971 P003V1_OBU_T_TM_baseline2;

typedef kcg_int array_int_24[24];

/* TM::Array24 */
typedef array_int_24 Array24_TM;

typedef struct { kcg_int target; kcg_int speed; } struct__24001;

/* TA_MRSP::SSP_section_t */
typedef struct__24001 SSP_section_t_TA_MRSP;

typedef struct__24001 array__24006[33];

/* TA_MRSP::SSP_cat_t */
typedef array__24006 SSP_cat_t_TA_MRSP;

typedef array__24006 array__24009[11];

/* TA_MRSP::SSP_matrix_t */
typedef array__24009 SSP_matrix_t_TA_MRSP;

typedef struct {
  kcg_int Category_Index;
  kcg_int Pos_Index;
  SSP_target_t_TA_MRSP Loc;
} struct__24012;

/* TA_MRSP::SSP_t_indexed_matrix_element */
typedef struct__24012 SSP_t_indexed_matrix_element_TA_MRSP;

typedef SSP_t_indexed_matrix_element_TA_MRSP array__24018[363];

/* TA_MRSP::SSP_t_list_t */
typedef array__24018 SSP_t_list_t_TA_MRSP;

typedef kcg_int array_int_33[33];

/* TA_MRSP::SSP_t_cat_t */
typedef array_int_33 SSP_t_cat_t_TA_MRSP;

typedef array_int_33 array_int_33_11[11];

/* TA_MRSP::SSP_t_matrix_t */
typedef array_int_33_11 SSP_t_matrix_t_TA_MRSP;

typedef struct { kcg_bool Found; kcg_int Index; } struct__24027;

/* TA_MRSP::SSP_Mark_ValidSSPsection */
typedef struct__24027 SSP_Mark_ValidSSPsection_TA_MRSP;

typedef struct {
  kcg_bool found;
  kcg_int index;
  SSP_t_section_t_TA_MRSP target;
} struct__24032;

/* TA_MRSP::SSP_valid_section_t */
typedef struct__24032 SSP_valid_section_t_TA_MRSP;

typedef struct { kcg_int index; SSP_t_section_t_TA_MRSP target; } struct__24038;

/* TA_MRSP::SSP_relevant_target_t */
typedef struct__24038 SSP_relevant_target_t_TA_MRSP;

typedef struct { kcg_int Index; SSP_target_t_TA_MRSP Loc; } struct__24043;

/* TA_MRSP::SSP_t_indexed_trgt_t */
typedef struct__24043 SSP_t_indexed_trgt_t_TA_MRSP;

typedef SSP_t_indexed_trgt_t_TA_MRSP array__24048[11];

/* TA_MRSP::SSP_t_indexed_targets_list_t */
typedef array__24048 SSP_t_indexed_targets_list_t_TA_MRSP;

typedef kcg_int array_int_30[30];

typedef kcg_bool array_bool_30[30];

typedef CompressedPacketData_T_Common_Types_Pkg array_int_500_500[500];

typedef array_int_128 array_int_128_32[32];

typedef SSP_t_indexed_matrix_element_TA_MRSP array__24063[11];

typedef SSP_valid_section_t_TA_MRSP array__24066[33];

typedef kcg_int array_int_11[11];

typedef SSP_t_list_t_TA_MRSP array__24072[200];

typedef SSP_matrix_t_TA_MRSP array__24075[200];

typedef kcg_int array_int_200[200];

typedef P027V1_sections_array_flat_qdiff_T_TM_baseline2 array_int_64_32[32];

typedef CompressedPackets_T_Common_Types_Pkg array__24084[33];

typedef kcg_bool array_bool_50[50];

typedef kcg_int array_int_50[50];

typedef P027V1_OBU_sectionlist_enum_T_TM_baseline2 array__24093[50];

typedef Q_SCALE array__24096[50];

typedef StaticSpeedProfile_t_TrackAtlasTypes array__24099[50];

typedef P003V1_OBU_sectionlist_int_T_TM_baseline2 array_int_32_32[32];

typedef P003V1_section_enum_T_TM_baseline2 array__24105[31];

typedef P003V1_section_enum_T_TM_baseline2 array__24108[1];

typedef P015_OBU_sectionlist_enum_T_TM array__24111[5];

typedef P015_OBU_T_TM array__24114[5];

typedef array_int_99 array_int_99_33[33];

typedef P021_OBU_sectionlist_enum_T_TM array__24120[7];

typedef P021_OBU_T_TM array__24123[7];

typedef P041_OBU_sectionlist_enum_T_TM array__24126[7];

typedef Q_SCALE array__24129[7];

typedef Q_DIR array__24132[7];

typedef P046_sections_array_flat_T_TM array_int_66_33[33];

typedef P046_OBU_sectionlist_enum_T_TM array__24138[7];

typedef array__23777 array__24141[33];

typedef Q_SCALE array__24144[33];

typedef GradientProfile_t_TrackAtlasTypes array__24147[50];

typedef StaticSpeedProfile_t_TrackAtlasTypes array__24150[200];

typedef array_int_3_33 array_int_3_33_231[231];

typedef kcg_int array_int_396[396];

typedef kcg_int array_int_1[1];

typedef kcg_int array_int_104[104];

typedef P021_section_int_T_TM array__24165[1];

typedef kcg_int array_int_494[494];

typedef P027V1_section_int_T_TM_baseline2 array__24171[1];

typedef array_int_2_32 array_int_2_32_32[32];

typedef kcg_int array_int_432[432];

typedef kcg_int array_int_68[68];

typedef kcg_int array_int_444[444];

typedef kcg_int array_int_56[56];

typedef kcg_int array_int_18[18];

typedef array_int_7_33 array_int_7_33_231[231];

typedef kcg_int array_int_264[264];

typedef kcg_int array_int_236[236];

typedef P005_section_int_T_TM array__24201[1];

typedef array_int_3_33 array_int_3_33_99[99];

typedef kcg_int array_int_395[395];

typedef kcg_int array_int_105[105];

typedef P041_section_int_T_TM array__24213[1];

typedef kcg_int array_int_491[491];

typedef kcg_int array_int_9[9];

typedef array_int_4_32 array_int_4_32_128[128];

typedef kcg_int array_int_350[350];

typedef kcg_int array_int_21[21];

typedef kcg_int array_int_150[150];

typedef kcg_int array_int_22[22];

#ifndef kcg_copy_struct__22641
#define kcg_copy_struct__22641(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22641)))
#endif /* kcg_copy_struct__22641 */

#ifndef kcg_copy_struct__22659
#define kcg_copy_struct__22659(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22659)))
#endif /* kcg_copy_struct__22659 */

#ifndef kcg_copy_struct__22670
#define kcg_copy_struct__22670(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22670)))
#endif /* kcg_copy_struct__22670 */

#ifndef kcg_copy_struct__22675
#define kcg_copy_struct__22675(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22675)))
#endif /* kcg_copy_struct__22675 */

#ifndef kcg_copy_struct__22685
#define kcg_copy_struct__22685(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22685)))
#endif /* kcg_copy_struct__22685 */

#ifndef kcg_copy_struct__22703
#define kcg_copy_struct__22703(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22703)))
#endif /* kcg_copy_struct__22703 */

#ifndef kcg_copy_struct__22713
#define kcg_copy_struct__22713(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22713)))
#endif /* kcg_copy_struct__22713 */

#ifndef kcg_copy_struct__22724
#define kcg_copy_struct__22724(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22724)))
#endif /* kcg_copy_struct__22724 */

#ifndef kcg_copy_struct__22738
#define kcg_copy_struct__22738(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22738)))
#endif /* kcg_copy_struct__22738 */

#ifndef kcg_copy_struct__22747
#define kcg_copy_struct__22747(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22747)))
#endif /* kcg_copy_struct__22747 */

#ifndef kcg_copy_struct__22757
#define kcg_copy_struct__22757(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22757)))
#endif /* kcg_copy_struct__22757 */

#ifndef kcg_copy_struct__22768
#define kcg_copy_struct__22768(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22768)))
#endif /* kcg_copy_struct__22768 */

#ifndef kcg_copy_struct__22778
#define kcg_copy_struct__22778(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22778)))
#endif /* kcg_copy_struct__22778 */

#ifndef kcg_copy_struct__22792
#define kcg_copy_struct__22792(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22792)))
#endif /* kcg_copy_struct__22792 */

#ifndef kcg_copy_struct__22802
#define kcg_copy_struct__22802(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22802)))
#endif /* kcg_copy_struct__22802 */

#ifndef kcg_copy_struct__22809
#define kcg_copy_struct__22809(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22809)))
#endif /* kcg_copy_struct__22809 */

#ifndef kcg_copy_struct__22821
#define kcg_copy_struct__22821(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22821)))
#endif /* kcg_copy_struct__22821 */

#ifndef kcg_copy_struct__22837
#define kcg_copy_struct__22837(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22837)))
#endif /* kcg_copy_struct__22837 */

#ifndef kcg_copy_struct__22864
#define kcg_copy_struct__22864(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22864)))
#endif /* kcg_copy_struct__22864 */

#ifndef kcg_copy_struct__22880
#define kcg_copy_struct__22880(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22880)))
#endif /* kcg_copy_struct__22880 */

#ifndef kcg_copy_struct__22902
#define kcg_copy_struct__22902(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22902)))
#endif /* kcg_copy_struct__22902 */

#ifndef kcg_copy_struct__22922
#define kcg_copy_struct__22922(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22922)))
#endif /* kcg_copy_struct__22922 */

#ifndef kcg_copy_struct__22936
#define kcg_copy_struct__22936(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22936)))
#endif /* kcg_copy_struct__22936 */

#ifndef kcg_copy_struct__22950
#define kcg_copy_struct__22950(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22950)))
#endif /* kcg_copy_struct__22950 */

#ifndef kcg_copy_struct__22968
#define kcg_copy_struct__22968(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22968)))
#endif /* kcg_copy_struct__22968 */

#ifndef kcg_copy_struct__22986
#define kcg_copy_struct__22986(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22986)))
#endif /* kcg_copy_struct__22986 */

#ifndef kcg_copy_struct__22999
#define kcg_copy_struct__22999(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22999)))
#endif /* kcg_copy_struct__22999 */

#ifndef kcg_copy_struct__23011
#define kcg_copy_struct__23011(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23011)))
#endif /* kcg_copy_struct__23011 */

#ifndef kcg_copy_struct__23028
#define kcg_copy_struct__23028(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23028)))
#endif /* kcg_copy_struct__23028 */

#ifndef kcg_copy_struct__23057
#define kcg_copy_struct__23057(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23057)))
#endif /* kcg_copy_struct__23057 */

#ifndef kcg_copy_struct__23075
#define kcg_copy_struct__23075(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23075)))
#endif /* kcg_copy_struct__23075 */

#ifndef kcg_copy_struct__23080
#define kcg_copy_struct__23080(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23080)))
#endif /* kcg_copy_struct__23080 */

#ifndef kcg_copy_struct__23100
#define kcg_copy_struct__23100(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23100)))
#endif /* kcg_copy_struct__23100 */

#ifndef kcg_copy_struct__23105
#define kcg_copy_struct__23105(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23105)))
#endif /* kcg_copy_struct__23105 */

#ifndef kcg_copy_struct__23124
#define kcg_copy_struct__23124(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23124)))
#endif /* kcg_copy_struct__23124 */

#ifndef kcg_copy_struct__23129
#define kcg_copy_struct__23129(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23129)))
#endif /* kcg_copy_struct__23129 */

#ifndef kcg_copy_struct__23134
#define kcg_copy_struct__23134(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23134)))
#endif /* kcg_copy_struct__23134 */

#ifndef kcg_copy_struct__23140
#define kcg_copy_struct__23140(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23140)))
#endif /* kcg_copy_struct__23140 */

#ifndef kcg_copy_struct__23150
#define kcg_copy_struct__23150(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23150)))
#endif /* kcg_copy_struct__23150 */

#ifndef kcg_copy_struct__23164
#define kcg_copy_struct__23164(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23164)))
#endif /* kcg_copy_struct__23164 */

#ifndef kcg_copy_struct__23176
#define kcg_copy_struct__23176(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23176)))
#endif /* kcg_copy_struct__23176 */

#ifndef kcg_copy_struct__23183
#define kcg_copy_struct__23183(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23183)))
#endif /* kcg_copy_struct__23183 */

#ifndef kcg_copy_struct__23189
#define kcg_copy_struct__23189(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23189)))
#endif /* kcg_copy_struct__23189 */

#ifndef kcg_copy_struct__23199
#define kcg_copy_struct__23199(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23199)))
#endif /* kcg_copy_struct__23199 */

#ifndef kcg_copy_struct__23217
#define kcg_copy_struct__23217(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23217)))
#endif /* kcg_copy_struct__23217 */

#ifndef kcg_copy_struct__23223
#define kcg_copy_struct__23223(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23223)))
#endif /* kcg_copy_struct__23223 */

#ifndef kcg_copy_struct__23234
#define kcg_copy_struct__23234(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23234)))
#endif /* kcg_copy_struct__23234 */

#ifndef kcg_copy_struct__23251
#define kcg_copy_struct__23251(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23251)))
#endif /* kcg_copy_struct__23251 */

#ifndef kcg_copy_struct__23257
#define kcg_copy_struct__23257(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23257)))
#endif /* kcg_copy_struct__23257 */

#ifndef kcg_copy_struct__23269
#define kcg_copy_struct__23269(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23269)))
#endif /* kcg_copy_struct__23269 */

#ifndef kcg_copy_struct__23277
#define kcg_copy_struct__23277(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23277)))
#endif /* kcg_copy_struct__23277 */

#ifndef kcg_copy_struct__23293
#define kcg_copy_struct__23293(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23293)))
#endif /* kcg_copy_struct__23293 */

#ifndef kcg_copy_struct__23298
#define kcg_copy_struct__23298(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23298)))
#endif /* kcg_copy_struct__23298 */

#ifndef kcg_copy_struct__23303
#define kcg_copy_struct__23303(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23303)))
#endif /* kcg_copy_struct__23303 */

#ifndef kcg_copy_struct__23311
#define kcg_copy_struct__23311(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23311)))
#endif /* kcg_copy_struct__23311 */

#ifndef kcg_copy_struct__23319
#define kcg_copy_struct__23319(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23319)))
#endif /* kcg_copy_struct__23319 */

#ifndef kcg_copy_struct__23325
#define kcg_copy_struct__23325(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23325)))
#endif /* kcg_copy_struct__23325 */

#ifndef kcg_copy_struct__23335
#define kcg_copy_struct__23335(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23335)))
#endif /* kcg_copy_struct__23335 */

#ifndef kcg_copy_struct__23341
#define kcg_copy_struct__23341(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23341)))
#endif /* kcg_copy_struct__23341 */

#ifndef kcg_copy_struct__23348
#define kcg_copy_struct__23348(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23348)))
#endif /* kcg_copy_struct__23348 */

#ifndef kcg_copy_struct__23360
#define kcg_copy_struct__23360(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23360)))
#endif /* kcg_copy_struct__23360 */

#ifndef kcg_copy_struct__23370
#define kcg_copy_struct__23370(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23370)))
#endif /* kcg_copy_struct__23370 */

#ifndef kcg_copy_struct__23379
#define kcg_copy_struct__23379(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23379)))
#endif /* kcg_copy_struct__23379 */

#ifndef kcg_copy_struct__23389
#define kcg_copy_struct__23389(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23389)))
#endif /* kcg_copy_struct__23389 */

#ifndef kcg_copy_struct__23404
#define kcg_copy_struct__23404(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23404)))
#endif /* kcg_copy_struct__23404 */

#ifndef kcg_copy_struct__23414
#define kcg_copy_struct__23414(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23414)))
#endif /* kcg_copy_struct__23414 */

#ifndef kcg_copy_struct__23445
#define kcg_copy_struct__23445(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23445)))
#endif /* kcg_copy_struct__23445 */

#ifndef kcg_copy_struct__23450
#define kcg_copy_struct__23450(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23450)))
#endif /* kcg_copy_struct__23450 */

#ifndef kcg_copy_struct__23460
#define kcg_copy_struct__23460(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23460)))
#endif /* kcg_copy_struct__23460 */

#ifndef kcg_copy_struct__23475
#define kcg_copy_struct__23475(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23475)))
#endif /* kcg_copy_struct__23475 */

#ifndef kcg_copy_struct__23485
#define kcg_copy_struct__23485(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23485)))
#endif /* kcg_copy_struct__23485 */

#ifndef kcg_copy_struct__23498
#define kcg_copy_struct__23498(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23498)))
#endif /* kcg_copy_struct__23498 */

#ifndef kcg_copy_struct__23509
#define kcg_copy_struct__23509(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23509)))
#endif /* kcg_copy_struct__23509 */

#ifndef kcg_copy_struct__23520
#define kcg_copy_struct__23520(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23520)))
#endif /* kcg_copy_struct__23520 */

#ifndef kcg_copy_struct__23531
#define kcg_copy_struct__23531(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23531)))
#endif /* kcg_copy_struct__23531 */

#ifndef kcg_copy_struct__23543
#define kcg_copy_struct__23543(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23543)))
#endif /* kcg_copy_struct__23543 */

#ifndef kcg_copy_struct__23573
#define kcg_copy_struct__23573(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23573)))
#endif /* kcg_copy_struct__23573 */

#ifndef kcg_copy_struct__23581
#define kcg_copy_struct__23581(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23581)))
#endif /* kcg_copy_struct__23581 */

#ifndef kcg_copy_struct__23589
#define kcg_copy_struct__23589(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23589)))
#endif /* kcg_copy_struct__23589 */

#ifndef kcg_copy_struct__23595
#define kcg_copy_struct__23595(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23595)))
#endif /* kcg_copy_struct__23595 */

#ifndef kcg_copy_struct__23610
#define kcg_copy_struct__23610(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23610)))
#endif /* kcg_copy_struct__23610 */

#ifndef kcg_copy_struct__23619
#define kcg_copy_struct__23619(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23619)))
#endif /* kcg_copy_struct__23619 */

#ifndef kcg_copy_struct__23629
#define kcg_copy_struct__23629(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23629)))
#endif /* kcg_copy_struct__23629 */

#ifndef kcg_copy_struct__23639
#define kcg_copy_struct__23639(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23639)))
#endif /* kcg_copy_struct__23639 */

#ifndef kcg_copy_struct__23646
#define kcg_copy_struct__23646(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23646)))
#endif /* kcg_copy_struct__23646 */

#ifndef kcg_copy_struct__23657
#define kcg_copy_struct__23657(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23657)))
#endif /* kcg_copy_struct__23657 */

#ifndef kcg_copy_struct__23662
#define kcg_copy_struct__23662(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23662)))
#endif /* kcg_copy_struct__23662 */

#ifndef kcg_copy_struct__23668
#define kcg_copy_struct__23668(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23668)))
#endif /* kcg_copy_struct__23668 */

#ifndef kcg_copy_struct__23680
#define kcg_copy_struct__23680(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23680)))
#endif /* kcg_copy_struct__23680 */

#ifndef kcg_copy_struct__23698
#define kcg_copy_struct__23698(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23698)))
#endif /* kcg_copy_struct__23698 */

#ifndef kcg_copy_struct__23707
#define kcg_copy_struct__23707(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23707)))
#endif /* kcg_copy_struct__23707 */

#ifndef kcg_copy_struct__23715
#define kcg_copy_struct__23715(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23715)))
#endif /* kcg_copy_struct__23715 */

#ifndef kcg_copy_struct__23770
#define kcg_copy_struct__23770(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23770)))
#endif /* kcg_copy_struct__23770 */

#ifndef kcg_copy_struct__23780
#define kcg_copy_struct__23780(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23780)))
#endif /* kcg_copy_struct__23780 */

#ifndef kcg_copy_struct__23791
#define kcg_copy_struct__23791(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23791)))
#endif /* kcg_copy_struct__23791 */

#ifndef kcg_copy_struct__23797
#define kcg_copy_struct__23797(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23797)))
#endif /* kcg_copy_struct__23797 */

#ifndef kcg_copy_struct__23805
#define kcg_copy_struct__23805(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23805)))
#endif /* kcg_copy_struct__23805 */

#ifndef kcg_copy_struct__23810
#define kcg_copy_struct__23810(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23810)))
#endif /* kcg_copy_struct__23810 */

#ifndef kcg_copy_struct__23821
#define kcg_copy_struct__23821(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23821)))
#endif /* kcg_copy_struct__23821 */

#ifndef kcg_copy_struct__23832
#define kcg_copy_struct__23832(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23832)))
#endif /* kcg_copy_struct__23832 */

#ifndef kcg_copy_struct__23857
#define kcg_copy_struct__23857(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23857)))
#endif /* kcg_copy_struct__23857 */

#ifndef kcg_copy_struct__23868
#define kcg_copy_struct__23868(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23868)))
#endif /* kcg_copy_struct__23868 */

#ifndef kcg_copy_struct__23877
#define kcg_copy_struct__23877(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23877)))
#endif /* kcg_copy_struct__23877 */

#ifndef kcg_copy_struct__23887
#define kcg_copy_struct__23887(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23887)))
#endif /* kcg_copy_struct__23887 */

#ifndef kcg_copy_struct__23897
#define kcg_copy_struct__23897(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23897)))
#endif /* kcg_copy_struct__23897 */

#ifndef kcg_copy_struct__23906
#define kcg_copy_struct__23906(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23906)))
#endif /* kcg_copy_struct__23906 */

#ifndef kcg_copy_struct__23915
#define kcg_copy_struct__23915(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23915)))
#endif /* kcg_copy_struct__23915 */

#ifndef kcg_copy_struct__23927
#define kcg_copy_struct__23927(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23927)))
#endif /* kcg_copy_struct__23927 */

#ifndef kcg_copy_struct__23934
#define kcg_copy_struct__23934(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23934)))
#endif /* kcg_copy_struct__23934 */

#ifndef kcg_copy_struct__23940
#define kcg_copy_struct__23940(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23940)))
#endif /* kcg_copy_struct__23940 */

#ifndef kcg_copy_struct__23966
#define kcg_copy_struct__23966(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23966)))
#endif /* kcg_copy_struct__23966 */

#ifndef kcg_copy_struct__23971
#define kcg_copy_struct__23971(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23971)))
#endif /* kcg_copy_struct__23971 */

#ifndef kcg_copy_struct__24001
#define kcg_copy_struct__24001(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__24001)))
#endif /* kcg_copy_struct__24001 */

#ifndef kcg_copy_struct__24012
#define kcg_copy_struct__24012(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__24012)))
#endif /* kcg_copy_struct__24012 */

#ifndef kcg_copy_struct__24027
#define kcg_copy_struct__24027(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__24027)))
#endif /* kcg_copy_struct__24027 */

#ifndef kcg_copy_struct__24032
#define kcg_copy_struct__24032(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__24032)))
#endif /* kcg_copy_struct__24032 */

#ifndef kcg_copy_struct__24038
#define kcg_copy_struct__24038(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__24038)))
#endif /* kcg_copy_struct__24038 */

#ifndef kcg_copy_struct__24043
#define kcg_copy_struct__24043(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__24043)))
#endif /* kcg_copy_struct__24043 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__22667
#define kcg_copy_array__22667(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__22667)))
#endif /* kcg_copy_array__22667 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_int_4_32
#define kcg_copy_array_int_4_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4_32)))
#endif /* kcg_copy_array_int_4_32 */

#ifndef kcg_copy_array_int_128
#define kcg_copy_array_int_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128)))
#endif /* kcg_copy_array_int_128 */

#ifndef kcg_copy_array__22834
#define kcg_copy_array__22834(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__22834)))
#endif /* kcg_copy_array__22834 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array_int_7_33
#define kcg_copy_array_int_7_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33)))
#endif /* kcg_copy_array_int_7_33 */

#ifndef kcg_copy_array_int_231
#define kcg_copy_array_int_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231)))
#endif /* kcg_copy_array_int_231 */

#ifndef kcg_copy_array__22896
#define kcg_copy_array__22896(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__22896)))
#endif /* kcg_copy_array__22896 */

#ifndef kcg_copy_array__22899
#define kcg_copy_array__22899(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__22899)))
#endif /* kcg_copy_array__22899 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array_int_2_32
#define kcg_copy_array_int_2_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32)))
#endif /* kcg_copy_array_int_2_32 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array__22933
#define kcg_copy_array__22933(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__22933)))
#endif /* kcg_copy_array__22933 */

#ifndef kcg_copy_array__22944
#define kcg_copy_array__22944(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__22944)))
#endif /* kcg_copy_array__22944 */

#ifndef kcg_copy_array__22947
#define kcg_copy_array__22947(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__22947)))
#endif /* kcg_copy_array__22947 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_int_3_33
#define kcg_copy_array_int_3_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33)))
#endif /* kcg_copy_array_int_3_33 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__22980
#define kcg_copy_array__22980(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__22980)))
#endif /* kcg_copy_array__22980 */

#ifndef kcg_copy_array__22983
#define kcg_copy_array__22983(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__22983)))
#endif /* kcg_copy_array__22983 */

#ifndef kcg_copy_array__23005
#define kcg_copy_array__23005(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23005)))
#endif /* kcg_copy_array__23005 */

#ifndef kcg_copy_array__23008
#define kcg_copy_array__23008(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23008)))
#endif /* kcg_copy_array__23008 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array__23173
#define kcg_copy_array__23173(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23173)))
#endif /* kcg_copy_array__23173 */

#ifndef kcg_copy_array__23274
#define kcg_copy_array__23274(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23274)))
#endif /* kcg_copy_array__23274 */

#ifndef kcg_copy_array_int_15
#define kcg_copy_array_int_15(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_15)))
#endif /* kcg_copy_array_int_15 */

#ifndef kcg_copy_array__23316
#define kcg_copy_array__23316(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23316)))
#endif /* kcg_copy_array__23316 */

#ifndef kcg_copy_array__23376
#define kcg_copy_array__23376(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23376)))
#endif /* kcg_copy_array__23376 */

#ifndef kcg_copy_array__23386
#define kcg_copy_array__23386(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23386)))
#endif /* kcg_copy_array__23386 */

#ifndef kcg_copy_array__23401
#define kcg_copy_array__23401(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23401)))
#endif /* kcg_copy_array__23401 */

#ifndef kcg_copy_array__23411
#define kcg_copy_array__23411(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23411)))
#endif /* kcg_copy_array__23411 */

#ifndef kcg_copy_array__23472
#define kcg_copy_array__23472(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23472)))
#endif /* kcg_copy_array__23472 */

#ifndef kcg_copy_array__23482
#define kcg_copy_array__23482(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23482)))
#endif /* kcg_copy_array__23482 */

#ifndef kcg_copy_array__23495
#define kcg_copy_array__23495(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23495)))
#endif /* kcg_copy_array__23495 */

#ifndef kcg_copy_array__23506
#define kcg_copy_array__23506(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23506)))
#endif /* kcg_copy_array__23506 */

#ifndef kcg_copy_array__23517
#define kcg_copy_array__23517(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23517)))
#endif /* kcg_copy_array__23517 */

#ifndef kcg_copy_array__23540
#define kcg_copy_array__23540(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23540)))
#endif /* kcg_copy_array__23540 */

#ifndef kcg_copy_array__23570
#define kcg_copy_array__23570(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23570)))
#endif /* kcg_copy_array__23570 */

#ifndef kcg_copy_array__23626
#define kcg_copy_array__23626(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23626)))
#endif /* kcg_copy_array__23626 */

#ifndef kcg_copy_array__23636
#define kcg_copy_array__23636(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23636)))
#endif /* kcg_copy_array__23636 */

#ifndef kcg_copy_array__23654
#define kcg_copy_array__23654(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23654)))
#endif /* kcg_copy_array__23654 */

#ifndef kcg_copy_array__23677
#define kcg_copy_array__23677(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23677)))
#endif /* kcg_copy_array__23677 */

#ifndef kcg_copy_array__23712
#define kcg_copy_array__23712(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23712)))
#endif /* kcg_copy_array__23712 */

#ifndef kcg_copy_array__23777
#define kcg_copy_array__23777(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23777)))
#endif /* kcg_copy_array__23777 */

#ifndef kcg_copy_array_int_5
#define kcg_copy_array_int_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_5)))
#endif /* kcg_copy_array_int_5 */

#ifndef kcg_copy_array__23802
#define kcg_copy_array__23802(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23802)))
#endif /* kcg_copy_array__23802 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array__23829
#define kcg_copy_array__23829(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23829)))
#endif /* kcg_copy_array__23829 */

#ifndef kcg_copy_array__23865
#define kcg_copy_array__23865(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23865)))
#endif /* kcg_copy_array__23865 */

#ifndef kcg_copy_array__23874
#define kcg_copy_array__23874(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23874)))
#endif /* kcg_copy_array__23874 */

#ifndef kcg_copy_array_int_66
#define kcg_copy_array_int_66(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_66)))
#endif /* kcg_copy_array_int_66 */

#ifndef kcg_copy_array__23894
#define kcg_copy_array__23894(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23894)))
#endif /* kcg_copy_array__23894 */

#ifndef kcg_copy_array__23912
#define kcg_copy_array__23912(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23912)))
#endif /* kcg_copy_array__23912 */

#ifndef kcg_copy_array__23924
#define kcg_copy_array__23924(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23924)))
#endif /* kcg_copy_array__23924 */

#ifndef kcg_copy_array_int_24
#define kcg_copy_array_int_24(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_24)))
#endif /* kcg_copy_array_int_24 */

#ifndef kcg_copy_array__24006
#define kcg_copy_array__24006(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24006)))
#endif /* kcg_copy_array__24006 */

#ifndef kcg_copy_array__24009
#define kcg_copy_array__24009(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24009)))
#endif /* kcg_copy_array__24009 */

#ifndef kcg_copy_array__24018
#define kcg_copy_array__24018(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24018)))
#endif /* kcg_copy_array__24018 */

#ifndef kcg_copy_array_int_33
#define kcg_copy_array_int_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33)))
#endif /* kcg_copy_array_int_33 */

#ifndef kcg_copy_array_int_33_11
#define kcg_copy_array_int_33_11(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33_11)))
#endif /* kcg_copy_array_int_33_11 */

#ifndef kcg_copy_array__24048
#define kcg_copy_array__24048(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24048)))
#endif /* kcg_copy_array__24048 */

#ifndef kcg_copy_array_int_30
#define kcg_copy_array_int_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_30)))
#endif /* kcg_copy_array_int_30 */

#ifndef kcg_copy_array_bool_30
#define kcg_copy_array_bool_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_30)))
#endif /* kcg_copy_array_bool_30 */

#ifndef kcg_copy_array_int_500_500
#define kcg_copy_array_int_500_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500_500)))
#endif /* kcg_copy_array_int_500_500 */

#ifndef kcg_copy_array_int_128_32
#define kcg_copy_array_int_128_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128_32)))
#endif /* kcg_copy_array_int_128_32 */

#ifndef kcg_copy_array__24063
#define kcg_copy_array__24063(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24063)))
#endif /* kcg_copy_array__24063 */

#ifndef kcg_copy_array__24066
#define kcg_copy_array__24066(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24066)))
#endif /* kcg_copy_array__24066 */

#ifndef kcg_copy_array_int_11
#define kcg_copy_array_int_11(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_11)))
#endif /* kcg_copy_array_int_11 */

#ifndef kcg_copy_array__24072
#define kcg_copy_array__24072(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24072)))
#endif /* kcg_copy_array__24072 */

#ifndef kcg_copy_array__24075
#define kcg_copy_array__24075(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24075)))
#endif /* kcg_copy_array__24075 */

#ifndef kcg_copy_array_int_200
#define kcg_copy_array_int_200(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_200)))
#endif /* kcg_copy_array_int_200 */

#ifndef kcg_copy_array_int_64_32
#define kcg_copy_array_int_64_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64_32)))
#endif /* kcg_copy_array_int_64_32 */

#ifndef kcg_copy_array__24084
#define kcg_copy_array__24084(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24084)))
#endif /* kcg_copy_array__24084 */

#ifndef kcg_copy_array_bool_50
#define kcg_copy_array_bool_50(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_50)))
#endif /* kcg_copy_array_bool_50 */

#ifndef kcg_copy_array_int_50
#define kcg_copy_array_int_50(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_50)))
#endif /* kcg_copy_array_int_50 */

#ifndef kcg_copy_array__24093
#define kcg_copy_array__24093(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24093)))
#endif /* kcg_copy_array__24093 */

#ifndef kcg_copy_array__24096
#define kcg_copy_array__24096(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24096)))
#endif /* kcg_copy_array__24096 */

#ifndef kcg_copy_array__24099
#define kcg_copy_array__24099(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24099)))
#endif /* kcg_copy_array__24099 */

#ifndef kcg_copy_array_int_32_32
#define kcg_copy_array_int_32_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32_32)))
#endif /* kcg_copy_array_int_32_32 */

#ifndef kcg_copy_array__24105
#define kcg_copy_array__24105(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24105)))
#endif /* kcg_copy_array__24105 */

#ifndef kcg_copy_array__24108
#define kcg_copy_array__24108(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24108)))
#endif /* kcg_copy_array__24108 */

#ifndef kcg_copy_array__24111
#define kcg_copy_array__24111(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24111)))
#endif /* kcg_copy_array__24111 */

#ifndef kcg_copy_array__24114
#define kcg_copy_array__24114(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24114)))
#endif /* kcg_copy_array__24114 */

#ifndef kcg_copy_array_int_99_33
#define kcg_copy_array_int_99_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99_33)))
#endif /* kcg_copy_array_int_99_33 */

#ifndef kcg_copy_array__24120
#define kcg_copy_array__24120(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24120)))
#endif /* kcg_copy_array__24120 */

#ifndef kcg_copy_array__24123
#define kcg_copy_array__24123(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24123)))
#endif /* kcg_copy_array__24123 */

#ifndef kcg_copy_array__24126
#define kcg_copy_array__24126(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24126)))
#endif /* kcg_copy_array__24126 */

#ifndef kcg_copy_array__24129
#define kcg_copy_array__24129(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24129)))
#endif /* kcg_copy_array__24129 */

#ifndef kcg_copy_array__24132
#define kcg_copy_array__24132(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24132)))
#endif /* kcg_copy_array__24132 */

#ifndef kcg_copy_array_int_66_33
#define kcg_copy_array_int_66_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_66_33)))
#endif /* kcg_copy_array_int_66_33 */

#ifndef kcg_copy_array__24138
#define kcg_copy_array__24138(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24138)))
#endif /* kcg_copy_array__24138 */

#ifndef kcg_copy_array__24141
#define kcg_copy_array__24141(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24141)))
#endif /* kcg_copy_array__24141 */

#ifndef kcg_copy_array__24144
#define kcg_copy_array__24144(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24144)))
#endif /* kcg_copy_array__24144 */

#ifndef kcg_copy_array__24147
#define kcg_copy_array__24147(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24147)))
#endif /* kcg_copy_array__24147 */

#ifndef kcg_copy_array__24150
#define kcg_copy_array__24150(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24150)))
#endif /* kcg_copy_array__24150 */

#ifndef kcg_copy_array_int_3_33_231
#define kcg_copy_array_int_3_33_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33_231)))
#endif /* kcg_copy_array_int_3_33_231 */

#ifndef kcg_copy_array_int_396
#define kcg_copy_array_int_396(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_396)))
#endif /* kcg_copy_array_int_396 */

#ifndef kcg_copy_array_int_1
#define kcg_copy_array_int_1(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_1)))
#endif /* kcg_copy_array_int_1 */

#ifndef kcg_copy_array_int_104
#define kcg_copy_array_int_104(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_104)))
#endif /* kcg_copy_array_int_104 */

#ifndef kcg_copy_array__24165
#define kcg_copy_array__24165(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24165)))
#endif /* kcg_copy_array__24165 */

#ifndef kcg_copy_array_int_494
#define kcg_copy_array_int_494(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_494)))
#endif /* kcg_copy_array_int_494 */

#ifndef kcg_copy_array__24171
#define kcg_copy_array__24171(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24171)))
#endif /* kcg_copy_array__24171 */

#ifndef kcg_copy_array_int_2_32_32
#define kcg_copy_array_int_2_32_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32_32)))
#endif /* kcg_copy_array_int_2_32_32 */

#ifndef kcg_copy_array_int_432
#define kcg_copy_array_int_432(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_432)))
#endif /* kcg_copy_array_int_432 */

#ifndef kcg_copy_array_int_68
#define kcg_copy_array_int_68(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_68)))
#endif /* kcg_copy_array_int_68 */

#ifndef kcg_copy_array_int_444
#define kcg_copy_array_int_444(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_444)))
#endif /* kcg_copy_array_int_444 */

#ifndef kcg_copy_array_int_56
#define kcg_copy_array_int_56(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_56)))
#endif /* kcg_copy_array_int_56 */

#ifndef kcg_copy_array_int_18
#define kcg_copy_array_int_18(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_18)))
#endif /* kcg_copy_array_int_18 */

#ifndef kcg_copy_array_int_7_33_231
#define kcg_copy_array_int_7_33_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33_231)))
#endif /* kcg_copy_array_int_7_33_231 */

#ifndef kcg_copy_array_int_264
#define kcg_copy_array_int_264(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_264)))
#endif /* kcg_copy_array_int_264 */

#ifndef kcg_copy_array_int_236
#define kcg_copy_array_int_236(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_236)))
#endif /* kcg_copy_array_int_236 */

#ifndef kcg_copy_array__24201
#define kcg_copy_array__24201(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24201)))
#endif /* kcg_copy_array__24201 */

#ifndef kcg_copy_array_int_3_33_99
#define kcg_copy_array_int_3_33_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33_99)))
#endif /* kcg_copy_array_int_3_33_99 */

#ifndef kcg_copy_array_int_395
#define kcg_copy_array_int_395(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_395)))
#endif /* kcg_copy_array_int_395 */

#ifndef kcg_copy_array_int_105
#define kcg_copy_array_int_105(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_105)))
#endif /* kcg_copy_array_int_105 */

#ifndef kcg_copy_array__24213
#define kcg_copy_array__24213(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24213)))
#endif /* kcg_copy_array__24213 */

#ifndef kcg_copy_array_int_491
#define kcg_copy_array_int_491(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_491)))
#endif /* kcg_copy_array_int_491 */

#ifndef kcg_copy_array_int_9
#define kcg_copy_array_int_9(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_9)))
#endif /* kcg_copy_array_int_9 */

#ifndef kcg_copy_array_int_4_32_128
#define kcg_copy_array_int_4_32_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4_32_128)))
#endif /* kcg_copy_array_int_4_32_128 */

#ifndef kcg_copy_array_int_350
#define kcg_copy_array_int_350(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_350)))
#endif /* kcg_copy_array_int_350 */

#ifndef kcg_copy_array_int_21
#define kcg_copy_array_int_21(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_21)))
#endif /* kcg_copy_array_int_21 */

#ifndef kcg_copy_array_int_150
#define kcg_copy_array_int_150(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_150)))
#endif /* kcg_copy_array_int_150 */

#ifndef kcg_copy_array_int_22
#define kcg_copy_array_int_22(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_22)))
#endif /* kcg_copy_array_int_22 */

#ifndef kcg_comp_struct__22641
extern kcg_bool kcg_comp_struct__22641(
  struct__22641 *kcg_c1,
  struct__22641 *kcg_c2);
#endif /* kcg_comp_struct__22641 */

#ifndef kcg_comp_struct__22659
extern kcg_bool kcg_comp_struct__22659(
  struct__22659 *kcg_c1,
  struct__22659 *kcg_c2);
#endif /* kcg_comp_struct__22659 */

#ifndef kcg_comp_struct__22670
extern kcg_bool kcg_comp_struct__22670(
  struct__22670 *kcg_c1,
  struct__22670 *kcg_c2);
#endif /* kcg_comp_struct__22670 */

#ifndef kcg_comp_struct__22675
extern kcg_bool kcg_comp_struct__22675(
  struct__22675 *kcg_c1,
  struct__22675 *kcg_c2);
#endif /* kcg_comp_struct__22675 */

#ifndef kcg_comp_struct__22685
extern kcg_bool kcg_comp_struct__22685(
  struct__22685 *kcg_c1,
  struct__22685 *kcg_c2);
#endif /* kcg_comp_struct__22685 */

#ifndef kcg_comp_struct__22703
extern kcg_bool kcg_comp_struct__22703(
  struct__22703 *kcg_c1,
  struct__22703 *kcg_c2);
#endif /* kcg_comp_struct__22703 */

#ifndef kcg_comp_struct__22713
extern kcg_bool kcg_comp_struct__22713(
  struct__22713 *kcg_c1,
  struct__22713 *kcg_c2);
#endif /* kcg_comp_struct__22713 */

#ifndef kcg_comp_struct__22724
extern kcg_bool kcg_comp_struct__22724(
  struct__22724 *kcg_c1,
  struct__22724 *kcg_c2);
#endif /* kcg_comp_struct__22724 */

#ifndef kcg_comp_struct__22738
extern kcg_bool kcg_comp_struct__22738(
  struct__22738 *kcg_c1,
  struct__22738 *kcg_c2);
#endif /* kcg_comp_struct__22738 */

#ifndef kcg_comp_struct__22747
extern kcg_bool kcg_comp_struct__22747(
  struct__22747 *kcg_c1,
  struct__22747 *kcg_c2);
#endif /* kcg_comp_struct__22747 */

#ifndef kcg_comp_struct__22757
extern kcg_bool kcg_comp_struct__22757(
  struct__22757 *kcg_c1,
  struct__22757 *kcg_c2);
#endif /* kcg_comp_struct__22757 */

#ifndef kcg_comp_struct__22768
extern kcg_bool kcg_comp_struct__22768(
  struct__22768 *kcg_c1,
  struct__22768 *kcg_c2);
#endif /* kcg_comp_struct__22768 */

#ifndef kcg_comp_struct__22778
extern kcg_bool kcg_comp_struct__22778(
  struct__22778 *kcg_c1,
  struct__22778 *kcg_c2);
#endif /* kcg_comp_struct__22778 */

#ifndef kcg_comp_struct__22792
extern kcg_bool kcg_comp_struct__22792(
  struct__22792 *kcg_c1,
  struct__22792 *kcg_c2);
#endif /* kcg_comp_struct__22792 */

#ifndef kcg_comp_struct__22802
extern kcg_bool kcg_comp_struct__22802(
  struct__22802 *kcg_c1,
  struct__22802 *kcg_c2);
#endif /* kcg_comp_struct__22802 */

#ifndef kcg_comp_struct__22809
extern kcg_bool kcg_comp_struct__22809(
  struct__22809 *kcg_c1,
  struct__22809 *kcg_c2);
#endif /* kcg_comp_struct__22809 */

#ifndef kcg_comp_struct__22821
extern kcg_bool kcg_comp_struct__22821(
  struct__22821 *kcg_c1,
  struct__22821 *kcg_c2);
#endif /* kcg_comp_struct__22821 */

#ifndef kcg_comp_struct__22837
extern kcg_bool kcg_comp_struct__22837(
  struct__22837 *kcg_c1,
  struct__22837 *kcg_c2);
#endif /* kcg_comp_struct__22837 */

#ifndef kcg_comp_struct__22864
extern kcg_bool kcg_comp_struct__22864(
  struct__22864 *kcg_c1,
  struct__22864 *kcg_c2);
#endif /* kcg_comp_struct__22864 */

#ifndef kcg_comp_struct__22880
extern kcg_bool kcg_comp_struct__22880(
  struct__22880 *kcg_c1,
  struct__22880 *kcg_c2);
#endif /* kcg_comp_struct__22880 */

#ifndef kcg_comp_struct__22902
extern kcg_bool kcg_comp_struct__22902(
  struct__22902 *kcg_c1,
  struct__22902 *kcg_c2);
#endif /* kcg_comp_struct__22902 */

#ifndef kcg_comp_struct__22922
extern kcg_bool kcg_comp_struct__22922(
  struct__22922 *kcg_c1,
  struct__22922 *kcg_c2);
#endif /* kcg_comp_struct__22922 */

#ifndef kcg_comp_struct__22936
extern kcg_bool kcg_comp_struct__22936(
  struct__22936 *kcg_c1,
  struct__22936 *kcg_c2);
#endif /* kcg_comp_struct__22936 */

#ifndef kcg_comp_struct__22950
extern kcg_bool kcg_comp_struct__22950(
  struct__22950 *kcg_c1,
  struct__22950 *kcg_c2);
#endif /* kcg_comp_struct__22950 */

#ifndef kcg_comp_struct__22968
extern kcg_bool kcg_comp_struct__22968(
  struct__22968 *kcg_c1,
  struct__22968 *kcg_c2);
#endif /* kcg_comp_struct__22968 */

#ifndef kcg_comp_struct__22986
extern kcg_bool kcg_comp_struct__22986(
  struct__22986 *kcg_c1,
  struct__22986 *kcg_c2);
#endif /* kcg_comp_struct__22986 */

#ifndef kcg_comp_struct__22999
extern kcg_bool kcg_comp_struct__22999(
  struct__22999 *kcg_c1,
  struct__22999 *kcg_c2);
#endif /* kcg_comp_struct__22999 */

#ifndef kcg_comp_struct__23011
extern kcg_bool kcg_comp_struct__23011(
  struct__23011 *kcg_c1,
  struct__23011 *kcg_c2);
#endif /* kcg_comp_struct__23011 */

#ifndef kcg_comp_struct__23028
extern kcg_bool kcg_comp_struct__23028(
  struct__23028 *kcg_c1,
  struct__23028 *kcg_c2);
#endif /* kcg_comp_struct__23028 */

#ifndef kcg_comp_struct__23057
extern kcg_bool kcg_comp_struct__23057(
  struct__23057 *kcg_c1,
  struct__23057 *kcg_c2);
#endif /* kcg_comp_struct__23057 */

#ifndef kcg_comp_struct__23075
extern kcg_bool kcg_comp_struct__23075(
  struct__23075 *kcg_c1,
  struct__23075 *kcg_c2);
#endif /* kcg_comp_struct__23075 */

#ifndef kcg_comp_struct__23080
extern kcg_bool kcg_comp_struct__23080(
  struct__23080 *kcg_c1,
  struct__23080 *kcg_c2);
#endif /* kcg_comp_struct__23080 */

#ifndef kcg_comp_struct__23100
extern kcg_bool kcg_comp_struct__23100(
  struct__23100 *kcg_c1,
  struct__23100 *kcg_c2);
#endif /* kcg_comp_struct__23100 */

#ifndef kcg_comp_struct__23105
extern kcg_bool kcg_comp_struct__23105(
  struct__23105 *kcg_c1,
  struct__23105 *kcg_c2);
#endif /* kcg_comp_struct__23105 */

#ifndef kcg_comp_struct__23124
extern kcg_bool kcg_comp_struct__23124(
  struct__23124 *kcg_c1,
  struct__23124 *kcg_c2);
#endif /* kcg_comp_struct__23124 */

#ifndef kcg_comp_struct__23129
extern kcg_bool kcg_comp_struct__23129(
  struct__23129 *kcg_c1,
  struct__23129 *kcg_c2);
#endif /* kcg_comp_struct__23129 */

#ifndef kcg_comp_struct__23134
extern kcg_bool kcg_comp_struct__23134(
  struct__23134 *kcg_c1,
  struct__23134 *kcg_c2);
#endif /* kcg_comp_struct__23134 */

#ifndef kcg_comp_struct__23140
extern kcg_bool kcg_comp_struct__23140(
  struct__23140 *kcg_c1,
  struct__23140 *kcg_c2);
#endif /* kcg_comp_struct__23140 */

#ifndef kcg_comp_struct__23150
extern kcg_bool kcg_comp_struct__23150(
  struct__23150 *kcg_c1,
  struct__23150 *kcg_c2);
#endif /* kcg_comp_struct__23150 */

#ifndef kcg_comp_struct__23164
extern kcg_bool kcg_comp_struct__23164(
  struct__23164 *kcg_c1,
  struct__23164 *kcg_c2);
#endif /* kcg_comp_struct__23164 */

#ifndef kcg_comp_struct__23176
extern kcg_bool kcg_comp_struct__23176(
  struct__23176 *kcg_c1,
  struct__23176 *kcg_c2);
#endif /* kcg_comp_struct__23176 */

#ifndef kcg_comp_struct__23183
extern kcg_bool kcg_comp_struct__23183(
  struct__23183 *kcg_c1,
  struct__23183 *kcg_c2);
#endif /* kcg_comp_struct__23183 */

#ifndef kcg_comp_struct__23189
extern kcg_bool kcg_comp_struct__23189(
  struct__23189 *kcg_c1,
  struct__23189 *kcg_c2);
#endif /* kcg_comp_struct__23189 */

#ifndef kcg_comp_struct__23199
extern kcg_bool kcg_comp_struct__23199(
  struct__23199 *kcg_c1,
  struct__23199 *kcg_c2);
#endif /* kcg_comp_struct__23199 */

#ifndef kcg_comp_struct__23217
extern kcg_bool kcg_comp_struct__23217(
  struct__23217 *kcg_c1,
  struct__23217 *kcg_c2);
#endif /* kcg_comp_struct__23217 */

#ifndef kcg_comp_struct__23223
extern kcg_bool kcg_comp_struct__23223(
  struct__23223 *kcg_c1,
  struct__23223 *kcg_c2);
#endif /* kcg_comp_struct__23223 */

#ifndef kcg_comp_struct__23234
extern kcg_bool kcg_comp_struct__23234(
  struct__23234 *kcg_c1,
  struct__23234 *kcg_c2);
#endif /* kcg_comp_struct__23234 */

#ifndef kcg_comp_struct__23251
extern kcg_bool kcg_comp_struct__23251(
  struct__23251 *kcg_c1,
  struct__23251 *kcg_c2);
#endif /* kcg_comp_struct__23251 */

#ifndef kcg_comp_struct__23257
extern kcg_bool kcg_comp_struct__23257(
  struct__23257 *kcg_c1,
  struct__23257 *kcg_c2);
#endif /* kcg_comp_struct__23257 */

#ifndef kcg_comp_struct__23269
extern kcg_bool kcg_comp_struct__23269(
  struct__23269 *kcg_c1,
  struct__23269 *kcg_c2);
#endif /* kcg_comp_struct__23269 */

#ifndef kcg_comp_struct__23277
extern kcg_bool kcg_comp_struct__23277(
  struct__23277 *kcg_c1,
  struct__23277 *kcg_c2);
#endif /* kcg_comp_struct__23277 */

#ifndef kcg_comp_struct__23293
extern kcg_bool kcg_comp_struct__23293(
  struct__23293 *kcg_c1,
  struct__23293 *kcg_c2);
#endif /* kcg_comp_struct__23293 */

#ifndef kcg_comp_struct__23298
extern kcg_bool kcg_comp_struct__23298(
  struct__23298 *kcg_c1,
  struct__23298 *kcg_c2);
#endif /* kcg_comp_struct__23298 */

#ifndef kcg_comp_struct__23303
extern kcg_bool kcg_comp_struct__23303(
  struct__23303 *kcg_c1,
  struct__23303 *kcg_c2);
#endif /* kcg_comp_struct__23303 */

#ifndef kcg_comp_struct__23311
extern kcg_bool kcg_comp_struct__23311(
  struct__23311 *kcg_c1,
  struct__23311 *kcg_c2);
#endif /* kcg_comp_struct__23311 */

#ifndef kcg_comp_struct__23319
extern kcg_bool kcg_comp_struct__23319(
  struct__23319 *kcg_c1,
  struct__23319 *kcg_c2);
#endif /* kcg_comp_struct__23319 */

#ifndef kcg_comp_struct__23325
extern kcg_bool kcg_comp_struct__23325(
  struct__23325 *kcg_c1,
  struct__23325 *kcg_c2);
#endif /* kcg_comp_struct__23325 */

#ifndef kcg_comp_struct__23335
extern kcg_bool kcg_comp_struct__23335(
  struct__23335 *kcg_c1,
  struct__23335 *kcg_c2);
#endif /* kcg_comp_struct__23335 */

#ifndef kcg_comp_struct__23341
extern kcg_bool kcg_comp_struct__23341(
  struct__23341 *kcg_c1,
  struct__23341 *kcg_c2);
#endif /* kcg_comp_struct__23341 */

#ifndef kcg_comp_struct__23348
extern kcg_bool kcg_comp_struct__23348(
  struct__23348 *kcg_c1,
  struct__23348 *kcg_c2);
#endif /* kcg_comp_struct__23348 */

#ifndef kcg_comp_struct__23360
extern kcg_bool kcg_comp_struct__23360(
  struct__23360 *kcg_c1,
  struct__23360 *kcg_c2);
#endif /* kcg_comp_struct__23360 */

#ifndef kcg_comp_struct__23370
extern kcg_bool kcg_comp_struct__23370(
  struct__23370 *kcg_c1,
  struct__23370 *kcg_c2);
#endif /* kcg_comp_struct__23370 */

#ifndef kcg_comp_struct__23379
extern kcg_bool kcg_comp_struct__23379(
  struct__23379 *kcg_c1,
  struct__23379 *kcg_c2);
#endif /* kcg_comp_struct__23379 */

#ifndef kcg_comp_struct__23389
extern kcg_bool kcg_comp_struct__23389(
  struct__23389 *kcg_c1,
  struct__23389 *kcg_c2);
#endif /* kcg_comp_struct__23389 */

#ifndef kcg_comp_struct__23404
extern kcg_bool kcg_comp_struct__23404(
  struct__23404 *kcg_c1,
  struct__23404 *kcg_c2);
#endif /* kcg_comp_struct__23404 */

#ifndef kcg_comp_struct__23414
extern kcg_bool kcg_comp_struct__23414(
  struct__23414 *kcg_c1,
  struct__23414 *kcg_c2);
#endif /* kcg_comp_struct__23414 */

#ifndef kcg_comp_struct__23445
extern kcg_bool kcg_comp_struct__23445(
  struct__23445 *kcg_c1,
  struct__23445 *kcg_c2);
#endif /* kcg_comp_struct__23445 */

#ifndef kcg_comp_struct__23450
extern kcg_bool kcg_comp_struct__23450(
  struct__23450 *kcg_c1,
  struct__23450 *kcg_c2);
#endif /* kcg_comp_struct__23450 */

#ifndef kcg_comp_struct__23460
extern kcg_bool kcg_comp_struct__23460(
  struct__23460 *kcg_c1,
  struct__23460 *kcg_c2);
#endif /* kcg_comp_struct__23460 */

#ifndef kcg_comp_struct__23475
extern kcg_bool kcg_comp_struct__23475(
  struct__23475 *kcg_c1,
  struct__23475 *kcg_c2);
#endif /* kcg_comp_struct__23475 */

#ifndef kcg_comp_struct__23485
extern kcg_bool kcg_comp_struct__23485(
  struct__23485 *kcg_c1,
  struct__23485 *kcg_c2);
#endif /* kcg_comp_struct__23485 */

#ifndef kcg_comp_struct__23498
extern kcg_bool kcg_comp_struct__23498(
  struct__23498 *kcg_c1,
  struct__23498 *kcg_c2);
#endif /* kcg_comp_struct__23498 */

#ifndef kcg_comp_struct__23509
extern kcg_bool kcg_comp_struct__23509(
  struct__23509 *kcg_c1,
  struct__23509 *kcg_c2);
#endif /* kcg_comp_struct__23509 */

#ifndef kcg_comp_struct__23520
extern kcg_bool kcg_comp_struct__23520(
  struct__23520 *kcg_c1,
  struct__23520 *kcg_c2);
#endif /* kcg_comp_struct__23520 */

#ifndef kcg_comp_struct__23531
extern kcg_bool kcg_comp_struct__23531(
  struct__23531 *kcg_c1,
  struct__23531 *kcg_c2);
#endif /* kcg_comp_struct__23531 */

#ifndef kcg_comp_struct__23543
extern kcg_bool kcg_comp_struct__23543(
  struct__23543 *kcg_c1,
  struct__23543 *kcg_c2);
#endif /* kcg_comp_struct__23543 */

#ifndef kcg_comp_struct__23573
extern kcg_bool kcg_comp_struct__23573(
  struct__23573 *kcg_c1,
  struct__23573 *kcg_c2);
#endif /* kcg_comp_struct__23573 */

#ifndef kcg_comp_struct__23581
extern kcg_bool kcg_comp_struct__23581(
  struct__23581 *kcg_c1,
  struct__23581 *kcg_c2);
#endif /* kcg_comp_struct__23581 */

#ifndef kcg_comp_struct__23589
extern kcg_bool kcg_comp_struct__23589(
  struct__23589 *kcg_c1,
  struct__23589 *kcg_c2);
#endif /* kcg_comp_struct__23589 */

#ifndef kcg_comp_struct__23595
extern kcg_bool kcg_comp_struct__23595(
  struct__23595 *kcg_c1,
  struct__23595 *kcg_c2);
#endif /* kcg_comp_struct__23595 */

#ifndef kcg_comp_struct__23610
extern kcg_bool kcg_comp_struct__23610(
  struct__23610 *kcg_c1,
  struct__23610 *kcg_c2);
#endif /* kcg_comp_struct__23610 */

#ifndef kcg_comp_struct__23619
extern kcg_bool kcg_comp_struct__23619(
  struct__23619 *kcg_c1,
  struct__23619 *kcg_c2);
#endif /* kcg_comp_struct__23619 */

#ifndef kcg_comp_struct__23629
extern kcg_bool kcg_comp_struct__23629(
  struct__23629 *kcg_c1,
  struct__23629 *kcg_c2);
#endif /* kcg_comp_struct__23629 */

#ifndef kcg_comp_struct__23639
extern kcg_bool kcg_comp_struct__23639(
  struct__23639 *kcg_c1,
  struct__23639 *kcg_c2);
#endif /* kcg_comp_struct__23639 */

#ifndef kcg_comp_struct__23646
extern kcg_bool kcg_comp_struct__23646(
  struct__23646 *kcg_c1,
  struct__23646 *kcg_c2);
#endif /* kcg_comp_struct__23646 */

#ifndef kcg_comp_struct__23657
extern kcg_bool kcg_comp_struct__23657(
  struct__23657 *kcg_c1,
  struct__23657 *kcg_c2);
#endif /* kcg_comp_struct__23657 */

#ifndef kcg_comp_struct__23662
extern kcg_bool kcg_comp_struct__23662(
  struct__23662 *kcg_c1,
  struct__23662 *kcg_c2);
#endif /* kcg_comp_struct__23662 */

#ifndef kcg_comp_struct__23668
extern kcg_bool kcg_comp_struct__23668(
  struct__23668 *kcg_c1,
  struct__23668 *kcg_c2);
#endif /* kcg_comp_struct__23668 */

#ifndef kcg_comp_struct__23680
extern kcg_bool kcg_comp_struct__23680(
  struct__23680 *kcg_c1,
  struct__23680 *kcg_c2);
#endif /* kcg_comp_struct__23680 */

#ifndef kcg_comp_struct__23698
extern kcg_bool kcg_comp_struct__23698(
  struct__23698 *kcg_c1,
  struct__23698 *kcg_c2);
#endif /* kcg_comp_struct__23698 */

#ifndef kcg_comp_struct__23707
extern kcg_bool kcg_comp_struct__23707(
  struct__23707 *kcg_c1,
  struct__23707 *kcg_c2);
#endif /* kcg_comp_struct__23707 */

#ifndef kcg_comp_struct__23715
extern kcg_bool kcg_comp_struct__23715(
  struct__23715 *kcg_c1,
  struct__23715 *kcg_c2);
#endif /* kcg_comp_struct__23715 */

#ifndef kcg_comp_struct__23770
extern kcg_bool kcg_comp_struct__23770(
  struct__23770 *kcg_c1,
  struct__23770 *kcg_c2);
#endif /* kcg_comp_struct__23770 */

#ifndef kcg_comp_struct__23780
extern kcg_bool kcg_comp_struct__23780(
  struct__23780 *kcg_c1,
  struct__23780 *kcg_c2);
#endif /* kcg_comp_struct__23780 */

#ifndef kcg_comp_struct__23791
extern kcg_bool kcg_comp_struct__23791(
  struct__23791 *kcg_c1,
  struct__23791 *kcg_c2);
#endif /* kcg_comp_struct__23791 */

#ifndef kcg_comp_struct__23797
extern kcg_bool kcg_comp_struct__23797(
  struct__23797 *kcg_c1,
  struct__23797 *kcg_c2);
#endif /* kcg_comp_struct__23797 */

#ifndef kcg_comp_struct__23805
extern kcg_bool kcg_comp_struct__23805(
  struct__23805 *kcg_c1,
  struct__23805 *kcg_c2);
#endif /* kcg_comp_struct__23805 */

#ifndef kcg_comp_struct__23810
extern kcg_bool kcg_comp_struct__23810(
  struct__23810 *kcg_c1,
  struct__23810 *kcg_c2);
#endif /* kcg_comp_struct__23810 */

#ifndef kcg_comp_struct__23821
extern kcg_bool kcg_comp_struct__23821(
  struct__23821 *kcg_c1,
  struct__23821 *kcg_c2);
#endif /* kcg_comp_struct__23821 */

#ifndef kcg_comp_struct__23832
extern kcg_bool kcg_comp_struct__23832(
  struct__23832 *kcg_c1,
  struct__23832 *kcg_c2);
#endif /* kcg_comp_struct__23832 */

#ifndef kcg_comp_struct__23857
extern kcg_bool kcg_comp_struct__23857(
  struct__23857 *kcg_c1,
  struct__23857 *kcg_c2);
#endif /* kcg_comp_struct__23857 */

#ifndef kcg_comp_struct__23868
extern kcg_bool kcg_comp_struct__23868(
  struct__23868 *kcg_c1,
  struct__23868 *kcg_c2);
#endif /* kcg_comp_struct__23868 */

#ifndef kcg_comp_struct__23877
extern kcg_bool kcg_comp_struct__23877(
  struct__23877 *kcg_c1,
  struct__23877 *kcg_c2);
#endif /* kcg_comp_struct__23877 */

#ifndef kcg_comp_struct__23887
extern kcg_bool kcg_comp_struct__23887(
  struct__23887 *kcg_c1,
  struct__23887 *kcg_c2);
#endif /* kcg_comp_struct__23887 */

#ifndef kcg_comp_struct__23897
extern kcg_bool kcg_comp_struct__23897(
  struct__23897 *kcg_c1,
  struct__23897 *kcg_c2);
#endif /* kcg_comp_struct__23897 */

#ifndef kcg_comp_struct__23906
extern kcg_bool kcg_comp_struct__23906(
  struct__23906 *kcg_c1,
  struct__23906 *kcg_c2);
#endif /* kcg_comp_struct__23906 */

#ifndef kcg_comp_struct__23915
extern kcg_bool kcg_comp_struct__23915(
  struct__23915 *kcg_c1,
  struct__23915 *kcg_c2);
#endif /* kcg_comp_struct__23915 */

#ifndef kcg_comp_struct__23927
extern kcg_bool kcg_comp_struct__23927(
  struct__23927 *kcg_c1,
  struct__23927 *kcg_c2);
#endif /* kcg_comp_struct__23927 */

#ifndef kcg_comp_struct__23934
extern kcg_bool kcg_comp_struct__23934(
  struct__23934 *kcg_c1,
  struct__23934 *kcg_c2);
#endif /* kcg_comp_struct__23934 */

#ifndef kcg_comp_struct__23940
extern kcg_bool kcg_comp_struct__23940(
  struct__23940 *kcg_c1,
  struct__23940 *kcg_c2);
#endif /* kcg_comp_struct__23940 */

#ifndef kcg_comp_struct__23966
extern kcg_bool kcg_comp_struct__23966(
  struct__23966 *kcg_c1,
  struct__23966 *kcg_c2);
#endif /* kcg_comp_struct__23966 */

#ifndef kcg_comp_struct__23971
extern kcg_bool kcg_comp_struct__23971(
  struct__23971 *kcg_c1,
  struct__23971 *kcg_c2);
#endif /* kcg_comp_struct__23971 */

#ifndef kcg_comp_struct__24001
extern kcg_bool kcg_comp_struct__24001(
  struct__24001 *kcg_c1,
  struct__24001 *kcg_c2);
#endif /* kcg_comp_struct__24001 */

#ifndef kcg_comp_struct__24012
extern kcg_bool kcg_comp_struct__24012(
  struct__24012 *kcg_c1,
  struct__24012 *kcg_c2);
#endif /* kcg_comp_struct__24012 */

#ifndef kcg_comp_struct__24027
extern kcg_bool kcg_comp_struct__24027(
  struct__24027 *kcg_c1,
  struct__24027 *kcg_c2);
#endif /* kcg_comp_struct__24027 */

#ifndef kcg_comp_struct__24032
extern kcg_bool kcg_comp_struct__24032(
  struct__24032 *kcg_c1,
  struct__24032 *kcg_c2);
#endif /* kcg_comp_struct__24032 */

#ifndef kcg_comp_struct__24038
extern kcg_bool kcg_comp_struct__24038(
  struct__24038 *kcg_c1,
  struct__24038 *kcg_c2);
#endif /* kcg_comp_struct__24038 */

#ifndef kcg_comp_struct__24043
extern kcg_bool kcg_comp_struct__24043(
  struct__24043 *kcg_c1,
  struct__24043 *kcg_c2);
#endif /* kcg_comp_struct__24043 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__22667
extern kcg_bool kcg_comp_array__22667(
  array__22667 *kcg_c1,
  array__22667 *kcg_c2);
#endif /* kcg_comp_array__22667 */

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

#ifndef kcg_comp_array__22834
extern kcg_bool kcg_comp_array__22834(
  array__22834 *kcg_c1,
  array__22834 *kcg_c2);
#endif /* kcg_comp_array__22834 */

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

#ifndef kcg_comp_array__22896
extern kcg_bool kcg_comp_array__22896(
  array__22896 *kcg_c1,
  array__22896 *kcg_c2);
#endif /* kcg_comp_array__22896 */

#ifndef kcg_comp_array__22899
extern kcg_bool kcg_comp_array__22899(
  array__22899 *kcg_c1,
  array__22899 *kcg_c2);
#endif /* kcg_comp_array__22899 */

#ifndef kcg_comp_array_int_2
extern kcg_bool kcg_comp_array_int_2(array_int_2 *kcg_c1, array_int_2 *kcg_c2);
#endif /* kcg_comp_array_int_2 */

#ifndef kcg_comp_array_int_2_32
extern kcg_bool kcg_comp_array_int_2_32(
  array_int_2_32 *kcg_c1,
  array_int_2_32 *kcg_c2);
#endif /* kcg_comp_array_int_2_32 */

#ifndef kcg_comp_array_int_64
extern kcg_bool kcg_comp_array_int_64(
  array_int_64 *kcg_c1,
  array_int_64 *kcg_c2);
#endif /* kcg_comp_array_int_64 */

#ifndef kcg_comp_array__22933
extern kcg_bool kcg_comp_array__22933(
  array__22933 *kcg_c1,
  array__22933 *kcg_c2);
#endif /* kcg_comp_array__22933 */

#ifndef kcg_comp_array__22944
extern kcg_bool kcg_comp_array__22944(
  array__22944 *kcg_c1,
  array__22944 *kcg_c2);
#endif /* kcg_comp_array__22944 */

#ifndef kcg_comp_array__22947
extern kcg_bool kcg_comp_array__22947(
  array__22947 *kcg_c1,
  array__22947 *kcg_c2);
#endif /* kcg_comp_array__22947 */

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

#ifndef kcg_comp_array__22980
extern kcg_bool kcg_comp_array__22980(
  array__22980 *kcg_c1,
  array__22980 *kcg_c2);
#endif /* kcg_comp_array__22980 */

#ifndef kcg_comp_array__22983
extern kcg_bool kcg_comp_array__22983(
  array__22983 *kcg_c1,
  array__22983 *kcg_c2);
#endif /* kcg_comp_array__22983 */

#ifndef kcg_comp_array__23005
extern kcg_bool kcg_comp_array__23005(
  array__23005 *kcg_c1,
  array__23005 *kcg_c2);
#endif /* kcg_comp_array__23005 */

#ifndef kcg_comp_array__23008
extern kcg_bool kcg_comp_array__23008(
  array__23008 *kcg_c1,
  array__23008 *kcg_c2);
#endif /* kcg_comp_array__23008 */

#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */

#ifndef kcg_comp_array__23173
extern kcg_bool kcg_comp_array__23173(
  array__23173 *kcg_c1,
  array__23173 *kcg_c2);
#endif /* kcg_comp_array__23173 */

#ifndef kcg_comp_array__23274
extern kcg_bool kcg_comp_array__23274(
  array__23274 *kcg_c1,
  array__23274 *kcg_c2);
#endif /* kcg_comp_array__23274 */

#ifndef kcg_comp_array_int_15
extern kcg_bool kcg_comp_array_int_15(
  array_int_15 *kcg_c1,
  array_int_15 *kcg_c2);
#endif /* kcg_comp_array_int_15 */

#ifndef kcg_comp_array__23316
extern kcg_bool kcg_comp_array__23316(
  array__23316 *kcg_c1,
  array__23316 *kcg_c2);
#endif /* kcg_comp_array__23316 */

#ifndef kcg_comp_array__23376
extern kcg_bool kcg_comp_array__23376(
  array__23376 *kcg_c1,
  array__23376 *kcg_c2);
#endif /* kcg_comp_array__23376 */

#ifndef kcg_comp_array__23386
extern kcg_bool kcg_comp_array__23386(
  array__23386 *kcg_c1,
  array__23386 *kcg_c2);
#endif /* kcg_comp_array__23386 */

#ifndef kcg_comp_array__23401
extern kcg_bool kcg_comp_array__23401(
  array__23401 *kcg_c1,
  array__23401 *kcg_c2);
#endif /* kcg_comp_array__23401 */

#ifndef kcg_comp_array__23411
extern kcg_bool kcg_comp_array__23411(
  array__23411 *kcg_c1,
  array__23411 *kcg_c2);
#endif /* kcg_comp_array__23411 */

#ifndef kcg_comp_array__23472
extern kcg_bool kcg_comp_array__23472(
  array__23472 *kcg_c1,
  array__23472 *kcg_c2);
#endif /* kcg_comp_array__23472 */

#ifndef kcg_comp_array__23482
extern kcg_bool kcg_comp_array__23482(
  array__23482 *kcg_c1,
  array__23482 *kcg_c2);
#endif /* kcg_comp_array__23482 */

#ifndef kcg_comp_array__23495
extern kcg_bool kcg_comp_array__23495(
  array__23495 *kcg_c1,
  array__23495 *kcg_c2);
#endif /* kcg_comp_array__23495 */

#ifndef kcg_comp_array__23506
extern kcg_bool kcg_comp_array__23506(
  array__23506 *kcg_c1,
  array__23506 *kcg_c2);
#endif /* kcg_comp_array__23506 */

#ifndef kcg_comp_array__23517
extern kcg_bool kcg_comp_array__23517(
  array__23517 *kcg_c1,
  array__23517 *kcg_c2);
#endif /* kcg_comp_array__23517 */

#ifndef kcg_comp_array__23540
extern kcg_bool kcg_comp_array__23540(
  array__23540 *kcg_c1,
  array__23540 *kcg_c2);
#endif /* kcg_comp_array__23540 */

#ifndef kcg_comp_array__23570
extern kcg_bool kcg_comp_array__23570(
  array__23570 *kcg_c1,
  array__23570 *kcg_c2);
#endif /* kcg_comp_array__23570 */

#ifndef kcg_comp_array__23626
extern kcg_bool kcg_comp_array__23626(
  array__23626 *kcg_c1,
  array__23626 *kcg_c2);
#endif /* kcg_comp_array__23626 */

#ifndef kcg_comp_array__23636
extern kcg_bool kcg_comp_array__23636(
  array__23636 *kcg_c1,
  array__23636 *kcg_c2);
#endif /* kcg_comp_array__23636 */

#ifndef kcg_comp_array__23654
extern kcg_bool kcg_comp_array__23654(
  array__23654 *kcg_c1,
  array__23654 *kcg_c2);
#endif /* kcg_comp_array__23654 */

#ifndef kcg_comp_array__23677
extern kcg_bool kcg_comp_array__23677(
  array__23677 *kcg_c1,
  array__23677 *kcg_c2);
#endif /* kcg_comp_array__23677 */

#ifndef kcg_comp_array__23712
extern kcg_bool kcg_comp_array__23712(
  array__23712 *kcg_c1,
  array__23712 *kcg_c2);
#endif /* kcg_comp_array__23712 */

#ifndef kcg_comp_array__23777
extern kcg_bool kcg_comp_array__23777(
  array__23777 *kcg_c1,
  array__23777 *kcg_c2);
#endif /* kcg_comp_array__23777 */

#ifndef kcg_comp_array_int_5
extern kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2);
#endif /* kcg_comp_array_int_5 */

#ifndef kcg_comp_array__23802
extern kcg_bool kcg_comp_array__23802(
  array__23802 *kcg_c1,
  array__23802 *kcg_c2);
#endif /* kcg_comp_array__23802 */

#ifndef kcg_comp_array_int_6
extern kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2);
#endif /* kcg_comp_array_int_6 */

#ifndef kcg_comp_array__23829
extern kcg_bool kcg_comp_array__23829(
  array__23829 *kcg_c1,
  array__23829 *kcg_c2);
#endif /* kcg_comp_array__23829 */

#ifndef kcg_comp_array__23865
extern kcg_bool kcg_comp_array__23865(
  array__23865 *kcg_c1,
  array__23865 *kcg_c2);
#endif /* kcg_comp_array__23865 */

#ifndef kcg_comp_array__23874
extern kcg_bool kcg_comp_array__23874(
  array__23874 *kcg_c1,
  array__23874 *kcg_c2);
#endif /* kcg_comp_array__23874 */

#ifndef kcg_comp_array_int_66
extern kcg_bool kcg_comp_array_int_66(
  array_int_66 *kcg_c1,
  array_int_66 *kcg_c2);
#endif /* kcg_comp_array_int_66 */

#ifndef kcg_comp_array__23894
extern kcg_bool kcg_comp_array__23894(
  array__23894 *kcg_c1,
  array__23894 *kcg_c2);
#endif /* kcg_comp_array__23894 */

#ifndef kcg_comp_array__23912
extern kcg_bool kcg_comp_array__23912(
  array__23912 *kcg_c1,
  array__23912 *kcg_c2);
#endif /* kcg_comp_array__23912 */

#ifndef kcg_comp_array__23924
extern kcg_bool kcg_comp_array__23924(
  array__23924 *kcg_c1,
  array__23924 *kcg_c2);
#endif /* kcg_comp_array__23924 */

#ifndef kcg_comp_array_int_24
extern kcg_bool kcg_comp_array_int_24(
  array_int_24 *kcg_c1,
  array_int_24 *kcg_c2);
#endif /* kcg_comp_array_int_24 */

#ifndef kcg_comp_array__24006
extern kcg_bool kcg_comp_array__24006(
  array__24006 *kcg_c1,
  array__24006 *kcg_c2);
#endif /* kcg_comp_array__24006 */

#ifndef kcg_comp_array__24009
extern kcg_bool kcg_comp_array__24009(
  array__24009 *kcg_c1,
  array__24009 *kcg_c2);
#endif /* kcg_comp_array__24009 */

#ifndef kcg_comp_array__24018
extern kcg_bool kcg_comp_array__24018(
  array__24018 *kcg_c1,
  array__24018 *kcg_c2);
#endif /* kcg_comp_array__24018 */

#ifndef kcg_comp_array_int_33
extern kcg_bool kcg_comp_array_int_33(
  array_int_33 *kcg_c1,
  array_int_33 *kcg_c2);
#endif /* kcg_comp_array_int_33 */

#ifndef kcg_comp_array_int_33_11
extern kcg_bool kcg_comp_array_int_33_11(
  array_int_33_11 *kcg_c1,
  array_int_33_11 *kcg_c2);
#endif /* kcg_comp_array_int_33_11 */

#ifndef kcg_comp_array__24048
extern kcg_bool kcg_comp_array__24048(
  array__24048 *kcg_c1,
  array__24048 *kcg_c2);
#endif /* kcg_comp_array__24048 */

#ifndef kcg_comp_array_int_30
extern kcg_bool kcg_comp_array_int_30(
  array_int_30 *kcg_c1,
  array_int_30 *kcg_c2);
#endif /* kcg_comp_array_int_30 */

#ifndef kcg_comp_array_bool_30
extern kcg_bool kcg_comp_array_bool_30(
  array_bool_30 *kcg_c1,
  array_bool_30 *kcg_c2);
#endif /* kcg_comp_array_bool_30 */

#ifndef kcg_comp_array_int_500_500
extern kcg_bool kcg_comp_array_int_500_500(
  array_int_500_500 *kcg_c1,
  array_int_500_500 *kcg_c2);
#endif /* kcg_comp_array_int_500_500 */

#ifndef kcg_comp_array_int_128_32
extern kcg_bool kcg_comp_array_int_128_32(
  array_int_128_32 *kcg_c1,
  array_int_128_32 *kcg_c2);
#endif /* kcg_comp_array_int_128_32 */

#ifndef kcg_comp_array__24063
extern kcg_bool kcg_comp_array__24063(
  array__24063 *kcg_c1,
  array__24063 *kcg_c2);
#endif /* kcg_comp_array__24063 */

#ifndef kcg_comp_array__24066
extern kcg_bool kcg_comp_array__24066(
  array__24066 *kcg_c1,
  array__24066 *kcg_c2);
#endif /* kcg_comp_array__24066 */

#ifndef kcg_comp_array_int_11
extern kcg_bool kcg_comp_array_int_11(
  array_int_11 *kcg_c1,
  array_int_11 *kcg_c2);
#endif /* kcg_comp_array_int_11 */

#ifndef kcg_comp_array__24072
extern kcg_bool kcg_comp_array__24072(
  array__24072 *kcg_c1,
  array__24072 *kcg_c2);
#endif /* kcg_comp_array__24072 */

#ifndef kcg_comp_array__24075
extern kcg_bool kcg_comp_array__24075(
  array__24075 *kcg_c1,
  array__24075 *kcg_c2);
#endif /* kcg_comp_array__24075 */

#ifndef kcg_comp_array_int_200
extern kcg_bool kcg_comp_array_int_200(
  array_int_200 *kcg_c1,
  array_int_200 *kcg_c2);
#endif /* kcg_comp_array_int_200 */

#ifndef kcg_comp_array_int_64_32
extern kcg_bool kcg_comp_array_int_64_32(
  array_int_64_32 *kcg_c1,
  array_int_64_32 *kcg_c2);
#endif /* kcg_comp_array_int_64_32 */

#ifndef kcg_comp_array__24084
extern kcg_bool kcg_comp_array__24084(
  array__24084 *kcg_c1,
  array__24084 *kcg_c2);
#endif /* kcg_comp_array__24084 */

#ifndef kcg_comp_array_bool_50
extern kcg_bool kcg_comp_array_bool_50(
  array_bool_50 *kcg_c1,
  array_bool_50 *kcg_c2);
#endif /* kcg_comp_array_bool_50 */

#ifndef kcg_comp_array_int_50
extern kcg_bool kcg_comp_array_int_50(
  array_int_50 *kcg_c1,
  array_int_50 *kcg_c2);
#endif /* kcg_comp_array_int_50 */

#ifndef kcg_comp_array__24093
extern kcg_bool kcg_comp_array__24093(
  array__24093 *kcg_c1,
  array__24093 *kcg_c2);
#endif /* kcg_comp_array__24093 */

#ifndef kcg_comp_array__24096
extern kcg_bool kcg_comp_array__24096(
  array__24096 *kcg_c1,
  array__24096 *kcg_c2);
#endif /* kcg_comp_array__24096 */

#ifndef kcg_comp_array__24099
extern kcg_bool kcg_comp_array__24099(
  array__24099 *kcg_c1,
  array__24099 *kcg_c2);
#endif /* kcg_comp_array__24099 */

#ifndef kcg_comp_array_int_32_32
extern kcg_bool kcg_comp_array_int_32_32(
  array_int_32_32 *kcg_c1,
  array_int_32_32 *kcg_c2);
#endif /* kcg_comp_array_int_32_32 */

#ifndef kcg_comp_array__24105
extern kcg_bool kcg_comp_array__24105(
  array__24105 *kcg_c1,
  array__24105 *kcg_c2);
#endif /* kcg_comp_array__24105 */

#ifndef kcg_comp_array__24108
extern kcg_bool kcg_comp_array__24108(
  array__24108 *kcg_c1,
  array__24108 *kcg_c2);
#endif /* kcg_comp_array__24108 */

#ifndef kcg_comp_array__24111
extern kcg_bool kcg_comp_array__24111(
  array__24111 *kcg_c1,
  array__24111 *kcg_c2);
#endif /* kcg_comp_array__24111 */

#ifndef kcg_comp_array__24114
extern kcg_bool kcg_comp_array__24114(
  array__24114 *kcg_c1,
  array__24114 *kcg_c2);
#endif /* kcg_comp_array__24114 */

#ifndef kcg_comp_array_int_99_33
extern kcg_bool kcg_comp_array_int_99_33(
  array_int_99_33 *kcg_c1,
  array_int_99_33 *kcg_c2);
#endif /* kcg_comp_array_int_99_33 */

#ifndef kcg_comp_array__24120
extern kcg_bool kcg_comp_array__24120(
  array__24120 *kcg_c1,
  array__24120 *kcg_c2);
#endif /* kcg_comp_array__24120 */

#ifndef kcg_comp_array__24123
extern kcg_bool kcg_comp_array__24123(
  array__24123 *kcg_c1,
  array__24123 *kcg_c2);
#endif /* kcg_comp_array__24123 */

#ifndef kcg_comp_array__24126
extern kcg_bool kcg_comp_array__24126(
  array__24126 *kcg_c1,
  array__24126 *kcg_c2);
#endif /* kcg_comp_array__24126 */

#ifndef kcg_comp_array__24129
extern kcg_bool kcg_comp_array__24129(
  array__24129 *kcg_c1,
  array__24129 *kcg_c2);
#endif /* kcg_comp_array__24129 */

#ifndef kcg_comp_array__24132
extern kcg_bool kcg_comp_array__24132(
  array__24132 *kcg_c1,
  array__24132 *kcg_c2);
#endif /* kcg_comp_array__24132 */

#ifndef kcg_comp_array_int_66_33
extern kcg_bool kcg_comp_array_int_66_33(
  array_int_66_33 *kcg_c1,
  array_int_66_33 *kcg_c2);
#endif /* kcg_comp_array_int_66_33 */

#ifndef kcg_comp_array__24138
extern kcg_bool kcg_comp_array__24138(
  array__24138 *kcg_c1,
  array__24138 *kcg_c2);
#endif /* kcg_comp_array__24138 */

#ifndef kcg_comp_array__24141
extern kcg_bool kcg_comp_array__24141(
  array__24141 *kcg_c1,
  array__24141 *kcg_c2);
#endif /* kcg_comp_array__24141 */

#ifndef kcg_comp_array__24144
extern kcg_bool kcg_comp_array__24144(
  array__24144 *kcg_c1,
  array__24144 *kcg_c2);
#endif /* kcg_comp_array__24144 */

#ifndef kcg_comp_array__24147
extern kcg_bool kcg_comp_array__24147(
  array__24147 *kcg_c1,
  array__24147 *kcg_c2);
#endif /* kcg_comp_array__24147 */

#ifndef kcg_comp_array__24150
extern kcg_bool kcg_comp_array__24150(
  array__24150 *kcg_c1,
  array__24150 *kcg_c2);
#endif /* kcg_comp_array__24150 */

#ifndef kcg_comp_array_int_3_33_231
extern kcg_bool kcg_comp_array_int_3_33_231(
  array_int_3_33_231 *kcg_c1,
  array_int_3_33_231 *kcg_c2);
#endif /* kcg_comp_array_int_3_33_231 */

#ifndef kcg_comp_array_int_396
extern kcg_bool kcg_comp_array_int_396(
  array_int_396 *kcg_c1,
  array_int_396 *kcg_c2);
#endif /* kcg_comp_array_int_396 */

#ifndef kcg_comp_array_int_1
extern kcg_bool kcg_comp_array_int_1(array_int_1 *kcg_c1, array_int_1 *kcg_c2);
#endif /* kcg_comp_array_int_1 */

#ifndef kcg_comp_array_int_104
extern kcg_bool kcg_comp_array_int_104(
  array_int_104 *kcg_c1,
  array_int_104 *kcg_c2);
#endif /* kcg_comp_array_int_104 */

#ifndef kcg_comp_array__24165
extern kcg_bool kcg_comp_array__24165(
  array__24165 *kcg_c1,
  array__24165 *kcg_c2);
#endif /* kcg_comp_array__24165 */

#ifndef kcg_comp_array_int_494
extern kcg_bool kcg_comp_array_int_494(
  array_int_494 *kcg_c1,
  array_int_494 *kcg_c2);
#endif /* kcg_comp_array_int_494 */

#ifndef kcg_comp_array__24171
extern kcg_bool kcg_comp_array__24171(
  array__24171 *kcg_c1,
  array__24171 *kcg_c2);
#endif /* kcg_comp_array__24171 */

#ifndef kcg_comp_array_int_2_32_32
extern kcg_bool kcg_comp_array_int_2_32_32(
  array_int_2_32_32 *kcg_c1,
  array_int_2_32_32 *kcg_c2);
#endif /* kcg_comp_array_int_2_32_32 */

#ifndef kcg_comp_array_int_432
extern kcg_bool kcg_comp_array_int_432(
  array_int_432 *kcg_c1,
  array_int_432 *kcg_c2);
#endif /* kcg_comp_array_int_432 */

#ifndef kcg_comp_array_int_68
extern kcg_bool kcg_comp_array_int_68(
  array_int_68 *kcg_c1,
  array_int_68 *kcg_c2);
#endif /* kcg_comp_array_int_68 */

#ifndef kcg_comp_array_int_444
extern kcg_bool kcg_comp_array_int_444(
  array_int_444 *kcg_c1,
  array_int_444 *kcg_c2);
#endif /* kcg_comp_array_int_444 */

#ifndef kcg_comp_array_int_56
extern kcg_bool kcg_comp_array_int_56(
  array_int_56 *kcg_c1,
  array_int_56 *kcg_c2);
#endif /* kcg_comp_array_int_56 */

#ifndef kcg_comp_array_int_18
extern kcg_bool kcg_comp_array_int_18(
  array_int_18 *kcg_c1,
  array_int_18 *kcg_c2);
#endif /* kcg_comp_array_int_18 */

#ifndef kcg_comp_array_int_7_33_231
extern kcg_bool kcg_comp_array_int_7_33_231(
  array_int_7_33_231 *kcg_c1,
  array_int_7_33_231 *kcg_c2);
#endif /* kcg_comp_array_int_7_33_231 */

#ifndef kcg_comp_array_int_264
extern kcg_bool kcg_comp_array_int_264(
  array_int_264 *kcg_c1,
  array_int_264 *kcg_c2);
#endif /* kcg_comp_array_int_264 */

#ifndef kcg_comp_array_int_236
extern kcg_bool kcg_comp_array_int_236(
  array_int_236 *kcg_c1,
  array_int_236 *kcg_c2);
#endif /* kcg_comp_array_int_236 */

#ifndef kcg_comp_array__24201
extern kcg_bool kcg_comp_array__24201(
  array__24201 *kcg_c1,
  array__24201 *kcg_c2);
#endif /* kcg_comp_array__24201 */

#ifndef kcg_comp_array_int_3_33_99
extern kcg_bool kcg_comp_array_int_3_33_99(
  array_int_3_33_99 *kcg_c1,
  array_int_3_33_99 *kcg_c2);
#endif /* kcg_comp_array_int_3_33_99 */

#ifndef kcg_comp_array_int_395
extern kcg_bool kcg_comp_array_int_395(
  array_int_395 *kcg_c1,
  array_int_395 *kcg_c2);
#endif /* kcg_comp_array_int_395 */

#ifndef kcg_comp_array_int_105
extern kcg_bool kcg_comp_array_int_105(
  array_int_105 *kcg_c1,
  array_int_105 *kcg_c2);
#endif /* kcg_comp_array_int_105 */

#ifndef kcg_comp_array__24213
extern kcg_bool kcg_comp_array__24213(
  array__24213 *kcg_c1,
  array__24213 *kcg_c2);
#endif /* kcg_comp_array__24213 */

#ifndef kcg_comp_array_int_491
extern kcg_bool kcg_comp_array_int_491(
  array_int_491 *kcg_c1,
  array_int_491 *kcg_c2);
#endif /* kcg_comp_array_int_491 */

#ifndef kcg_comp_array_int_9
extern kcg_bool kcg_comp_array_int_9(array_int_9 *kcg_c1, array_int_9 *kcg_c2);
#endif /* kcg_comp_array_int_9 */

#ifndef kcg_comp_array_int_4_32_128
extern kcg_bool kcg_comp_array_int_4_32_128(
  array_int_4_32_128 *kcg_c1,
  array_int_4_32_128 *kcg_c2);
#endif /* kcg_comp_array_int_4_32_128 */

#ifndef kcg_comp_array_int_350
extern kcg_bool kcg_comp_array_int_350(
  array_int_350 *kcg_c1,
  array_int_350 *kcg_c2);
#endif /* kcg_comp_array_int_350 */

#ifndef kcg_comp_array_int_21
extern kcg_bool kcg_comp_array_int_21(
  array_int_21 *kcg_c1,
  array_int_21 *kcg_c2);
#endif /* kcg_comp_array_int_21 */

#ifndef kcg_comp_array_int_150
extern kcg_bool kcg_comp_array_int_150(
  array_int_150 *kcg_c1,
  array_int_150 *kcg_c2);
#endif /* kcg_comp_array_int_150 */

#ifndef kcg_comp_array_int_22
extern kcg_bool kcg_comp_array_int_22(
  array_int_22 *kcg_c1,
  array_int_22 *kcg_c2);
#endif /* kcg_comp_array_int_22 */

#define kcg_comp_SSP_matrix_t_TA_MRSP kcg_comp_array__24009

#define kcg_copy_SSP_matrix_t_TA_MRSP kcg_copy_array__24009

#define kcg_comp_SSP_cat_t_TA_MRSP kcg_comp_array__24006

#define kcg_copy_SSP_cat_t_TA_MRSP kcg_copy_array__24006

#define kcg_comp_SSP_Mark_ValidSSPsection_TA_MRSP kcg_comp_struct__24027

#define kcg_copy_SSP_Mark_ValidSSPsection_TA_MRSP kcg_copy_struct__24027

#define kcg_comp_SSP_relevant_target_t_TA_MRSP kcg_comp_struct__24038

#define kcg_copy_SSP_relevant_target_t_TA_MRSP kcg_copy_struct__24038

#define kcg_comp_SSP_section_t_TA_MRSP kcg_comp_struct__24001

#define kcg_copy_SSP_section_t_TA_MRSP kcg_copy_struct__24001

#define kcg_comp_SSP_valid_section_t_TA_MRSP kcg_comp_struct__24032

#define kcg_copy_SSP_valid_section_t_TA_MRSP kcg_copy_struct__24032

#define kcg_comp_SSP_t_list_t_TA_MRSP kcg_comp_array__24018

#define kcg_copy_SSP_t_list_t_TA_MRSP kcg_copy_array__24018

#define kcg_comp_SSP_t_indexed_matrix_element_TA_MRSP kcg_comp_struct__24012

#define kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP kcg_copy_struct__24012

#define kcg_comp_SSP_t_indexed_targets_list_t_TA_MRSP kcg_comp_array__24048

#define kcg_copy_SSP_t_indexed_targets_list_t_TA_MRSP kcg_copy_array__24048

#define kcg_comp_SSP_t_matrix_t_TA_MRSP kcg_comp_array_int_33_11

#define kcg_copy_SSP_t_matrix_t_TA_MRSP kcg_copy_array_int_33_11

#define kcg_comp_SSP_t_cat_t_TA_MRSP kcg_comp_array_int_33

#define kcg_copy_SSP_t_cat_t_TA_MRSP kcg_copy_array_int_33

#define kcg_comp_SSP_t_indexed_trgt_t_TA_MRSP kcg_comp_struct__24043

#define kcg_copy_SSP_t_indexed_trgt_t_TA_MRSP kcg_copy_struct__24043

#define kcg_comp_CompressedRadioMessage_TM kcg_comp_struct__23075

#define kcg_copy_CompressedRadioMessage_TM kcg_copy_struct__23075

#define kcg_comp_Radio_TrackTrain_Header_T_TM kcg_comp_struct__23057

#define kcg_copy_Radio_TrackTrain_Header_T_TM kcg_copy_struct__23057

#define kcg_comp_P015_OBU_sectionlist_int_T_TM kcg_comp_array__22834

#define kcg_copy_P015_OBU_sectionlist_int_T_TM kcg_copy_array__22834

#define kcg_comp_P015_section_array_T_TM kcg_comp_array_int_4

#define kcg_copy_P015_section_array_T_TM kcg_copy_array_int_4

#define kcg_comp_P015_OBU_sectionlist_array_T_TM kcg_comp_array_int_4_32

#define kcg_copy_P015_OBU_sectionlist_array_T_TM kcg_copy_array_int_4_32

#define kcg_comp_P015_section_int_T_TM kcg_comp_struct__22821

#define kcg_copy_P015_section_int_T_TM kcg_copy_struct__22821

#define kcg_comp_P015_trackide_sectionlist_T_TM kcg_comp_array__22834

#define kcg_copy_P015_trackide_sectionlist_T_TM kcg_copy_array__22834

#define kcg_comp_P015_trackside_int_T_TM kcg_comp_struct__22837

#define kcg_copy_P015_trackside_int_T_TM kcg_copy_struct__22837

#define kcg_comp_P065_trackside_int_T_TM kcg_comp_struct__22864

#define kcg_copy_P065_trackside_int_T_TM kcg_copy_struct__22864

#define kcg_comp_P041_OBU_sectionlist_int_T_TM kcg_comp_array__23005

#define kcg_copy_P041_OBU_sectionlist_int_T_TM kcg_copy_array__23005

#define kcg_comp_P041_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P041_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P041_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P041_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P041_section_int_T_TM kcg_comp_struct__22999

#define kcg_copy_P041_section_int_T_TM kcg_copy_struct__22999

#define kcg_comp_P041_trackide_sectionlist_T_TM kcg_comp_array__23008

#define kcg_copy_P041_trackide_sectionlist_T_TM kcg_copy_array__23008

#define kcg_comp_P041_trackside_int_T_TM kcg_comp_struct__23011

#define kcg_copy_P041_trackside_int_T_TM kcg_copy_struct__23011

#define kcg_comp_P005_OBU_sectionlist_int_T_TM kcg_comp_array__22896

#define kcg_copy_P005_OBU_sectionlist_int_T_TM kcg_copy_array__22896

#define kcg_comp_P005_section_array_T_TM kcg_comp_array_int_7

#define kcg_copy_P005_section_array_T_TM kcg_copy_array_int_7

#define kcg_comp_P005_OBU_sectionlist_array_T_TM kcg_comp_array_int_7_33

#define kcg_copy_P005_OBU_sectionlist_array_T_TM kcg_copy_array_int_7_33

#define kcg_comp_P005_sections_array_flat_T_TM kcg_comp_array_int_231

#define kcg_copy_P005_sections_array_flat_T_TM kcg_copy_array_int_231

#define kcg_comp_P005_section_int_T_TM kcg_comp_struct__22880

#define kcg_copy_P005_section_int_T_TM kcg_copy_struct__22880

#define kcg_comp_P005_trackide_sectionlist_T_TM kcg_comp_array__22899

#define kcg_copy_P005_trackide_sectionlist_T_TM kcg_copy_array__22899

#define kcg_comp_P005_trackside_int_T_TM kcg_comp_struct__22902

#define kcg_copy_P005_trackside_int_T_TM kcg_copy_struct__22902

#define kcg_comp_P021_OBU_sectionlist_int_T_TM kcg_comp_array__22980

#define kcg_copy_P021_OBU_sectionlist_int_T_TM kcg_copy_array__22980

#define kcg_comp_P021_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P021_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P021_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P021_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P021_section_int_T_TM kcg_comp_struct__22968

#define kcg_copy_P021_section_int_T_TM kcg_copy_struct__22968

#define kcg_comp_P021_trackide_sectionlist_T_TM kcg_comp_array__22983

#define kcg_copy_P021_trackide_sectionlist_T_TM kcg_copy_array__22983

#define kcg_comp_P021_trackside_int_T_TM kcg_comp_struct__22986

#define kcg_copy_P021_trackside_int_T_TM kcg_copy_struct__22986

#define kcg_comp_P012_OBU_T_TM kcg_comp_struct__23940

#define kcg_copy_P012_OBU_T_TM kcg_copy_struct__23940

#define kcg_comp_P012_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P012_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_P012_section_enum_T_TM kcg_comp_struct__23821

#define kcg_copy_P012_section_enum_T_TM kcg_copy_struct__23821

#define kcg_comp_Array07_TM kcg_comp_array_int_7

#define kcg_copy_Array07_TM kcg_copy_array_int_7

#define kcg_comp_Array04_TM kcg_comp_array_int_4

#define kcg_copy_Array04_TM kcg_copy_array_int_4

#define kcg_comp_P046_OBU_T_TM kcg_comp_struct__23877

#define kcg_copy_P046_OBU_T_TM kcg_copy_struct__23877

#define kcg_comp_P046_OBU_sectionlist_enum_T_TM kcg_comp_array__23874

#define kcg_copy_P046_OBU_sectionlist_enum_T_TM kcg_copy_array__23874

#define kcg_comp_P046_sections_array_flat_T_TM kcg_comp_array_int_66

#define kcg_copy_P046_sections_array_flat_T_TM kcg_copy_array_int_66

#define kcg_comp_P046_section_enum_T_TM kcg_comp_struct__23868

#define kcg_copy_P046_section_enum_T_TM kcg_copy_struct__23868

#define kcg_comp_P041_OBU_T_TM kcg_comp_struct__23897

#define kcg_copy_P041_OBU_T_TM kcg_copy_struct__23897

#define kcg_comp_P041_OBU_sectionlist_enum_T_TM kcg_comp_array__23894

#define kcg_copy_P041_OBU_sectionlist_enum_T_TM kcg_copy_array__23894

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P041_section_enum_T_TM kcg_comp_struct__23887

#define kcg_copy_P041_section_enum_T_TM kcg_copy_struct__23887

#define kcg_comp_P021_OBU_T_TM kcg_comp_struct__23780

#define kcg_copy_P021_OBU_T_TM kcg_copy_struct__23780

#define kcg_comp_P021_OBU_sectionlist_enum_T_TM kcg_comp_array__23777

#define kcg_copy_P021_OBU_sectionlist_enum_T_TM kcg_copy_array__23777

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P021_section_enum_T_TM kcg_comp_struct__23770

#define kcg_copy_P021_section_enum_T_TM kcg_copy_struct__23770

#define kcg_comp_P139_OBU_T_TM kcg_comp_struct__23573

#define kcg_copy_P139_OBU_T_TM kcg_copy_struct__23573

#define kcg_comp_P138_OBU_T_TM kcg_comp_struct__23581

#define kcg_copy_P138_OBU_T_TM kcg_copy_struct__23581

#define kcg_comp_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store kcg_comp_struct__23791

#define kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store kcg_copy_struct__23791

#define kcg_comp_P135_OBU_T_TM kcg_comp_struct__23966

#define kcg_copy_P135_OBU_T_TM kcg_copy_struct__23966

#define kcg_comp_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store kcg_comp_struct__23797

#define kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store kcg_copy_struct__23797

#define kcg_comp_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store kcg_comp_struct__23805

#define kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store kcg_copy_struct__23805

#define kcg_comp_P003_OBU_l_section_enum_T_TM kcg_comp_struct__23370

#define kcg_copy_P003_OBU_l_section_enum_T_TM kcg_copy_struct__23370

#define kcg_comp_P003_OBU_l_sectionlist_enum_T_TM kcg_comp_array__23376

#define kcg_copy_P003_OBU_l_sectionlist_enum_T_TM kcg_copy_array__23376

#define kcg_comp_P003_OBU_k_m_section_enum_T_TM kcg_comp_struct__23379

#define kcg_copy_P003_OBU_k_m_section_enum_T_TM kcg_copy_struct__23379

#define kcg_comp_P003_OBU_k_m_sectionlist_enum_T_TM kcg_comp_array__23386

#define kcg_copy_P003_OBU_k_m_sectionlist_enum_T_TM kcg_copy_array__23386

#define kcg_comp_P003_OBU_k_section_enum_T_TM kcg_comp_struct__23389

#define kcg_copy_P003_OBU_k_section_enum_T_TM kcg_copy_struct__23389

#define kcg_comp_P003_OBU_k_sectionlist_enum_T_TM kcg_comp_array__23401

#define kcg_copy_P003_OBU_k_sectionlist_enum_T_TM kcg_copy_array__23401

#define kcg_comp_P003_OBU_n_section_enum_T_TM kcg_comp_struct__23404

#define kcg_copy_P003_OBU_n_section_enum_T_TM kcg_copy_struct__23404

#define kcg_comp_P003_OBU_n_sectionlist_enum_T_TM kcg_comp_array__23411

#define kcg_copy_P003_OBU_n_sectionlist_enum_T_TM kcg_copy_array__23411

#define kcg_comp_P003_OBU_nid_c_section_enum_T_TM kcg_comp_struct__23707

#define kcg_copy_P003_OBU_nid_c_section_enum_T_TM kcg_copy_struct__23707

#define kcg_comp_P003_OBU_nid_c_sectionlist_enum_T_TM kcg_comp_array__23712

#define kcg_copy_P003_OBU_nid_c_sectionlist_enum_T_TM kcg_copy_array__23712

#define kcg_comp_P003_OBU_T_TM kcg_comp_struct__23715

#define kcg_copy_P003_OBU_T_TM kcg_copy_struct__23715

#define kcg_comp_Array24_TM kcg_comp_array_int_24

#define kcg_copy_Array24_TM kcg_copy_array_int_24

#define kcg_comp_Array03_TM kcg_comp_array_int_3

#define kcg_copy_Array03_TM kcg_copy_array_int_3

#define kcg_comp_Array05_TM kcg_comp_array_int_5

#define kcg_copy_Array05_TM kcg_copy_array_int_5

#define kcg_comp_Array15_TM kcg_comp_array_int_15

#define kcg_copy_Array15_TM kcg_copy_array_int_15

#define kcg_comp_P015_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P015_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_Array06_TM kcg_comp_array_int_6

#define kcg_copy_Array06_TM kcg_copy_array_int_6

#define kcg_comp_P015_section_enum_T_TM kcg_comp_struct__23821

#define kcg_copy_P015_section_enum_T_TM kcg_copy_struct__23821

#define kcg_comp_P015_OBU_sectionlist_enum_T_TM kcg_comp_array__23829

#define kcg_copy_P015_OBU_sectionlist_enum_T_TM kcg_copy_array__23829

#define kcg_comp_P015_OBU_T_TM kcg_comp_struct__23832

#define kcg_copy_P015_OBU_T_TM kcg_copy_struct__23832

#define kcg_comp_M_028_T_TM_radio_messages kcg_comp_struct__22675

#define kcg_copy_M_028_T_TM_radio_messages kcg_copy_struct__22675

#define kcg_comp_M_032_T_TM_radio_messages kcg_comp_struct__22703

#define kcg_copy_M_032_T_TM_radio_messages kcg_copy_struct__22703

#define kcg_comp_M_033_T_TM_radio_messages kcg_comp_struct__22713

#define kcg_copy_M_033_T_TM_radio_messages kcg_copy_struct__22713

#define kcg_comp_M_034_T_TM_radio_messages kcg_comp_struct__22724

#define kcg_copy_M_034_T_TM_radio_messages kcg_copy_struct__22724

#define kcg_comp_M_038_T_TM_radio_messages kcg_comp_struct__22738

#define kcg_copy_M_038_T_TM_radio_messages kcg_copy_struct__22738

#define kcg_comp_M_039_T_TM_radio_messages kcg_comp_struct__22738

#define kcg_copy_M_039_T_TM_radio_messages kcg_copy_struct__22738

#define kcg_comp_M_040_T_TM_radio_messages kcg_comp_struct__22738

#define kcg_copy_M_040_T_TM_radio_messages kcg_copy_struct__22738

#define kcg_comp_M_041_T_TM_radio_messages kcg_comp_struct__22738

#define kcg_copy_M_041_T_TM_radio_messages kcg_copy_struct__22738

#define kcg_comp_M_043_T_TM_radio_messages kcg_comp_struct__22738

#define kcg_copy_M_043_T_TM_radio_messages kcg_copy_struct__22738

#define kcg_comp_M_045_T_TM_radio_messages kcg_comp_struct__22747

#define kcg_copy_M_045_T_TM_radio_messages kcg_copy_struct__22747

#define kcg_comp_M_002_T_TM_radio_messages kcg_comp_struct__22757

#define kcg_copy_M_002_T_TM_radio_messages kcg_copy_struct__22757

#define kcg_comp_M_003_T_TM_radio_messages kcg_comp_struct__22738

#define kcg_copy_M_003_T_TM_radio_messages kcg_copy_struct__22738

#define kcg_comp_M_006_T_TM_radio_messages kcg_comp_struct__22738

#define kcg_copy_M_006_T_TM_radio_messages kcg_copy_struct__22738

#define kcg_comp_M_008_T_TM_radio_messages kcg_comp_struct__22768

#define kcg_copy_M_008_T_TM_radio_messages kcg_copy_struct__22768

#define kcg_comp_M_009_T_TM_radio_messages kcg_comp_struct__22738

#define kcg_copy_M_009_T_TM_radio_messages kcg_copy_struct__22738

#define kcg_comp_M_015_T_TM_radio_messages kcg_comp_struct__22778

#define kcg_copy_M_015_T_TM_radio_messages kcg_copy_struct__22778

#define kcg_comp_M_016_T_TM_radio_messages kcg_comp_struct__22792

#define kcg_copy_M_016_T_TM_radio_messages kcg_copy_struct__22792

#define kcg_comp_M_018_T_TM_radio_messages kcg_comp_struct__22792

#define kcg_copy_M_018_T_TM_radio_messages kcg_copy_struct__22792

#define kcg_comp_M_024_T_TM_radio_messages kcg_comp_struct__22738

#define kcg_copy_M_024_T_TM_radio_messages kcg_copy_struct__22738

#define kcg_comp_M_027_T_TM_radio_messages kcg_comp_struct__22675

#define kcg_copy_M_027_T_TM_radio_messages kcg_copy_struct__22675

#define kcg_comp_M_TrackTrain_Radio_T_TM_radio_messages kcg_comp_struct__22641

#define kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages kcg_copy_struct__22641

#define kcg_comp_M_003_int_T_TM_radio_messages kcg_comp_struct__22809

#define kcg_copy_M_003_int_T_TM_radio_messages kcg_copy_struct__22809

#define kcg_comp_Position_Report_based_on_two_balise_groups_TrainToTrack kcg_comp_struct__23080

#define kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack kcg_copy_struct__23080

#define kcg_comp_Position_Report_TrainToTrack kcg_comp_struct__23105

#define kcg_copy_Position_Report_TrainToTrack kcg_copy_struct__23105

#define kcg_comp_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_comp_array_int_3

#define kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_copy_array_int_3

#define kcg_comp_sTractionIdentity_T_Packet_TrainTypes_Pkg kcg_comp_struct__23269

#define kcg_copy_sTractionIdentity_T_Packet_TrainTypes_Pkg kcg_copy_struct__23269

#define kcg_comp_aTractionIdentity_T_Packet_TrainTypes_Pkg kcg_comp_array__23274

#define kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg kcg_copy_array__23274

#define kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg kcg_comp_struct__23277

#define kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg kcg_copy_struct__23277

#define kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg kcg_comp_struct__23293

#define kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg kcg_copy_struct__23293

#define kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg kcg_comp_struct__23298

#define kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg kcg_copy_struct__23298

#define kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg kcg_comp_struct__23303

#define kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg kcg_copy_struct__23303

#define kcg_comp_telephoneNumber_T_Packet_TrainTypes_Pkg kcg_comp_array_int_15

#define kcg_copy_telephoneNumber_T_Packet_TrainTypes_Pkg kcg_copy_array_int_15

#define kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg kcg_comp_struct__23311

#define kcg_copy_sNID_RADIO_T_Packet_TrainTypes_Pkg kcg_copy_struct__23311

#define kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg kcg_comp_array__23316

#define kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg kcg_copy_array__23316

#define kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg kcg_comp_struct__23319

#define kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg kcg_copy_struct__23319

#define kcg_comp_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg kcg_comp_struct__23100

#define kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg kcg_copy_struct__23100

#define kcg_comp_PT0_PositionReport_T_Packet_TrainTypes_Pkg kcg_comp_struct__23124

#define kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg kcg_copy_struct__23124

#define kcg_comp_P80_ModeProfile_T_Packet_Types_Pkg kcg_comp_struct__23460

#define kcg_copy_P80_ModeProfile_T_Packet_Types_Pkg kcg_copy_struct__23460

#define kcg_comp_P80_ModeProfiles_T_Packet_Types_Pkg kcg_comp_array__23472

#define kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg kcg_copy_array__23472

#define kcg_comp_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg kcg_comp_struct__23475

#define kcg_copy_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg kcg_copy_struct__23475

#define kcg_comp_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg kcg_comp_array__23482

#define kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg kcg_copy_array__23482

#define kcg_comp_P41_LevelTransitionOrder_T_Packet_Types_Pkg kcg_comp_struct__23485

#define kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg kcg_copy_struct__23485

#define kcg_comp_P41_LevelTransistionOrders_T_Packet_Types_Pkg kcg_comp_array__23495

#define kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg kcg_copy_array__23495

#define kcg_comp_SSP_T_Packet_Types_Pkg kcg_comp_struct__23509

#define kcg_copy_SSP_T_Packet_Types_Pkg kcg_copy_struct__23509

#define kcg_comp_SSPArray_T_Packet_Types_Pkg kcg_comp_array__23517

#define kcg_copy_SSPArray_T_Packet_Types_Pkg kcg_copy_array__23517

#define kcg_comp_Diff_T_Packet_Types_Pkg kcg_comp_struct__23498

#define kcg_copy_Diff_T_Packet_Types_Pkg kcg_copy_struct__23498

#define kcg_comp_DiffArray_T_Packet_Types_Pkg kcg_comp_array__23506

#define kcg_copy_DiffArray_T_Packet_Types_Pkg kcg_copy_array__23506

#define kcg_comp_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg kcg_comp_struct__23520

#define kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg kcg_copy_struct__23520

#define kcg_comp_P21_GradientProfile_T_Packet_Types_Pkg kcg_comp_struct__23531

#define kcg_copy_P21_GradientProfile_T_Packet_Types_Pkg kcg_copy_struct__23531

#define kcg_comp_P21_GradientProfiles_T_Packet_Types_Pkg kcg_comp_array__23540

#define kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg kcg_copy_array__23540

#define kcg_comp_P15_Level23MovementAuthority_T_Packet_Types_Pkg kcg_comp_struct__23543

#define kcg_copy_P15_Level23MovementAuthority_T_Packet_Types_Pkg kcg_copy_struct__23543

#define kcg_comp_P15_Level23MovementAuthorities_T_Packet_Types_Pkg kcg_comp_array__23570

#define kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg kcg_copy_array__23570

#define kcg_comp_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg kcg_comp_struct__23573

#define kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg kcg_copy_struct__23573

#define kcg_comp_P138_ReversingAreaInformation_T_Packet_Types_Pkg kcg_comp_struct__23581

#define kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg kcg_copy_struct__23581

#define kcg_comp_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg kcg_comp_struct__23589

#define kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg kcg_copy_struct__23589

#define kcg_comp_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg kcg_comp_struct__23810

#define kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg kcg_copy_struct__23810

#define kcg_comp_Driver2MAR_T_MA_Request kcg_comp_struct__23129

#define kcg_copy_Driver2MAR_T_MA_Request kcg_copy_struct__23129

#define kcg_comp_trainProperties_T_TrainPosition_Types_Pck kcg_comp_struct__23140

#define kcg_copy_trainProperties_T_TrainPosition_Types_Pck kcg_copy_struct__23140

#define kcg_comp_infoFromLinking_T_TrainPosition_Types_Pck kcg_comp_struct__23164

#define kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck kcg_copy_struct__23164

#define kcg_comp_positionedBG_T_TrainPosition_Types_Pck kcg_comp_struct__23223

#define kcg_copy_positionedBG_T_TrainPosition_Types_Pck kcg_copy_struct__23223

#define kcg_comp_trainPosition_T_TrainPosition_Types_Pck kcg_comp_struct__23234

#define kcg_copy_trainPosition_T_TrainPosition_Types_Pck kcg_copy_struct__23234

#define kcg_comp_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg kcg_comp_struct__23450

#define kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg kcg_copy_struct__23450

#define kcg_comp_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg kcg_comp_struct__23595

#define kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg kcg_copy_struct__23595

#define kcg_comp_T_Mode_Level_Level_And_Mode_Types_Pkg kcg_comp_struct__23251

#define kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg kcg_copy_struct__23251

#define kcg_comp_Radio_TrainTrack_Message_T_Radio_Types_Pkg kcg_comp_struct__23335

#define kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg kcg_copy_struct__23335

#define kcg_comp_Radio_TrainTrack_Header_T_Radio_Types_Pkg kcg_comp_struct__23257

#define kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg kcg_copy_struct__23257

#define kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_comp_struct__22685

#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_copy_struct__22685

#define kcg_comp_LinkedBGs_T_BG_Types_Pkg kcg_comp_array__23173

#define kcg_copy_LinkedBGs_T_BG_Types_Pkg kcg_copy_array__23173

#define kcg_comp_passedBG_T_BG_Types_Pkg kcg_comp_struct__23217

#define kcg_copy_passedBG_T_BG_Types_Pkg kcg_copy_struct__23217

#define kcg_comp_LinkedBG_T_BG_Types_Pkg kcg_comp_struct__23150

#define kcg_copy_LinkedBG_T_BG_Types_Pkg kcg_copy_struct__23150

#define kcg_comp_BG_Header_T_BG_Types_Pkg kcg_comp_struct__23199

#define kcg_copy_BG_Header_T_BG_Types_Pkg kcg_copy_struct__23199

#define kcg_comp_outPackets_T_Common_Types_Pkg kcg_comp_struct__23325

#define kcg_copy_outPackets_T_Common_Types_Pkg kcg_copy_struct__23325

#define kcg_comp_RBC_Id_T_Common_Types_Pkg kcg_comp_struct__23341

#define kcg_copy_RBC_Id_T_Common_Types_Pkg kcg_copy_struct__23341

#define kcg_comp_RadioMetadata_T_Common_Types_Pkg kcg_comp_struct__23348

#define kcg_copy_RadioMetadata_T_Common_Types_Pkg kcg_copy_struct__23348

#define kcg_comp_ReceivedMessage_T_Common_Types_Pkg kcg_comp_struct__23360

#define kcg_copy_ReceivedMessage_T_Common_Types_Pkg kcg_copy_struct__23360

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__22670

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__22670

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__22667

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__22667

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__22659

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__22659

#define kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P003V1_trackside_int_T_TM_baseline2 kcg_comp_struct__23028

#define kcg_copy_P003V1_trackside_int_T_TM_baseline2 kcg_copy_struct__23028

#define kcg_comp_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_comp_array__22933

#define kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_copy_array__22933

#define kcg_comp_P027V1_section_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2

#define kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2

#define kcg_comp_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2_32

#define kcg_copy_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2_32

#define kcg_comp_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array__22944

#define kcg_copy_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array__22944

#define kcg_comp_P027V1_section_int_T_TM_baseline2 kcg_comp_struct__22936

#define kcg_copy_P027V1_section_int_T_TM_baseline2 kcg_copy_struct__22936

#define kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_comp_array__22947

#define kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_copy_array__22947

#define kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2 kcg_comp_struct__22922

#define kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2 kcg_copy_struct__22922

#define kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_comp_array__22933

#define kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_copy_array__22933

#define kcg_comp_P027V1_trackside_int_T_TM_baseline2 kcg_comp_struct__22950

#define kcg_copy_P027V1_trackside_int_T_TM_baseline2 kcg_copy_struct__22950

#define kcg_comp_P203V1_OBU_l_section_enum_T_TM_baseline2 kcg_comp_struct__23370

#define kcg_copy_P203V1_OBU_l_section_enum_T_TM_baseline2 kcg_copy_struct__23370

#define kcg_comp_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2 kcg_comp_array__23376

#define kcg_copy_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2 kcg_copy_array__23376

#define kcg_comp_P203V1_OBU_k_m_section_enum_T_TM_baseline2 kcg_comp_struct__23379

#define kcg_copy_P203V1_OBU_k_m_section_enum_T_TM_baseline2 kcg_copy_struct__23379

#define kcg_comp_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2 kcg_comp_array__23386

#define kcg_copy_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2 kcg_copy_array__23386

#define kcg_comp_P203V1_OBU_k_section_enum_T_TM_baseline2 kcg_comp_struct__23389

#define kcg_copy_P203V1_OBU_k_section_enum_T_TM_baseline2 kcg_copy_struct__23389

#define kcg_comp_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2 kcg_comp_array__23401

#define kcg_copy_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2 kcg_copy_array__23401

#define kcg_comp_P203V1_OBU_n_section_enum_T_TM_baseline2 kcg_comp_struct__23404

#define kcg_copy_P203V1_OBU_n_section_enum_T_TM_baseline2 kcg_copy_struct__23404

#define kcg_comp_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2 kcg_comp_array__23411

#define kcg_copy_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2 kcg_copy_array__23411

#define kcg_comp_P203V1_OBU_T_TM_baseline2 kcg_comp_struct__23414

#define kcg_copy_P203V1_OBU_T_TM_baseline2 kcg_copy_struct__23414

#define kcg_comp_P003_permanent_data_T_TM_baseline2 kcg_comp_struct__23445

#define kcg_copy_P003_permanent_data_T_TM_baseline2 kcg_copy_struct__23445

#define kcg_comp_P003V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_comp_array__23924

#define kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_copy_array__23924

#define kcg_comp_P027V1_OBU_T_TM_baseline2 kcg_comp_struct__23927

#define kcg_copy_P027V1_OBU_T_TM_baseline2 kcg_copy_struct__23927

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_comp_struct__23906

#define kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_copy_struct__23906

#define kcg_comp_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_comp_array__23912

#define kcg_copy_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_copy_array__23912

#define kcg_comp_P027V1_section_enum_T_TM_baseline2 kcg_comp_struct__23915

#define kcg_copy_P027V1_section_enum_T_TM_baseline2 kcg_copy_struct__23915

#define kcg_comp_P027V1_OBU_body_enum_T_TM_baseline2 kcg_comp_struct__23934

#define kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2 kcg_copy_struct__23934

#define kcg_comp_P003V1_section_enum_T_TM_baseline2 kcg_comp_struct__23707

#define kcg_copy_P003V1_section_enum_T_TM_baseline2 kcg_copy_struct__23707

#define kcg_comp_P003V1_sectionlist_enum_T_TM_baseline2 kcg_comp_array__23712

#define kcg_copy_P003V1_sectionlist_enum_T_TM_baseline2 kcg_copy_array__23712

#define kcg_comp_P003V1_OBU_T_TM_baseline2 kcg_comp_struct__23971

#define kcg_copy_P003V1_OBU_T_TM_baseline2 kcg_copy_struct__23971

#define kcg_comp_DataForModeAndLevel_t_TrackAtlasTypes kcg_comp_struct__23610

#define kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes kcg_copy_struct__23610

#define kcg_comp_DataForDMI_t_TrackAtlasTypes kcg_comp_struct__23639

#define kcg_copy_DataForDMI_t_TrackAtlasTypes kcg_copy_struct__23639

#define kcg_comp_DataForSupervision_nextGen_t_TrackAtlasTypes kcg_comp_struct__23698

#define kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes kcg_copy_struct__23698

#define kcg_comp_GradientProfile_for_DMI_t_TrackAtlasTypes kcg_comp_array__23626

#define kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes kcg_copy_array__23626

#define kcg_comp_GradientProfile_t_TrackAtlasTypes kcg_comp_array__23654

#define kcg_copy_GradientProfile_t_TrackAtlasTypes kcg_copy_array__23654

#define kcg_comp_GradientProfile_for_DMI_section_t_TrackAtlasTypes kcg_comp_struct__23619

#define kcg_copy_GradientProfile_for_DMI_section_t_TrackAtlasTypes kcg_copy_struct__23619

#define kcg_comp_Gradient_section_t_TrackAtlasTypes kcg_comp_struct__23646

#define kcg_copy_Gradient_section_t_TrackAtlasTypes kcg_copy_struct__23646

#define kcg_comp_StaticSpeedSection_t_TrackAtlasTypes kcg_comp_struct__23857

#define kcg_copy_StaticSpeedSection_t_TrackAtlasTypes kcg_copy_struct__23857

#define kcg_comp_StaticSpeedProfile_t_TrackAtlasTypes kcg_comp_array__23865

#define kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes kcg_copy_array__23865

#define kcg_comp_MRSP_section_t_TrackAtlasTypes kcg_comp_struct__23629

#define kcg_copy_MRSP_section_t_TrackAtlasTypes kcg_copy_struct__23629

#define kcg_comp_MRSP_Profile_t_TrackAtlasTypes kcg_comp_array__23636

#define kcg_copy_MRSP_Profile_t_TrackAtlasTypes kcg_copy_array__23636

#define kcg_comp_Endtimer_t_TrackAtlasTypes kcg_comp_struct__23657

#define kcg_copy_Endtimer_t_TrackAtlasTypes kcg_copy_struct__23657

#define kcg_comp_DP_or_OL_t_TrackAtlasTypes kcg_comp_struct__23662

#define kcg_copy_DP_or_OL_t_TrackAtlasTypes kcg_copy_struct__23662

#define kcg_comp_MovementAuthoritySection_t_TrackAtlasTypes kcg_comp_struct__23668

#define kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes kcg_copy_struct__23668

#define kcg_comp_MovementAuthoritySectionlist_t_TrackAtlasTypes kcg_comp_array__23677

#define kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes kcg_copy_array__23677

#define kcg_comp_MovementAuthority_t_TrackAtlasTypes kcg_comp_struct__23680

#define kcg_copy_MovementAuthority_t_TrackAtlasTypes kcg_copy_struct__23680

#define kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_comp_struct__23134

#define kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_copy_struct__23134

#define kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg kcg_comp_struct__23176

#define kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg kcg_copy_struct__23176

#define kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg kcg_comp_struct__23183

#define kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg kcg_copy_struct__23183

#define kcg_comp_odometry_T_Obu_BasicTypes_Pkg kcg_comp_struct__23189

#define kcg_copy_odometry_T_Obu_BasicTypes_Pkg kcg_copy_struct__23189

#define kcg_comp_R_data_internal_T_InfraLib kcg_comp_struct__22802

#define kcg_copy_R_data_internal_T_InfraLib kcg_copy_struct__22802

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-09-04T14:44:59
*************************************************************$ */


/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/TestTrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-09-04T10:01:35
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
} struct__22557;

/* TM_radio_messages::M_TrackTrain_Radio_T */
typedef struct__22557 M_TrackTrain_Radio_T_TM_radio_messages;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__22575;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__22575 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__22583[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__22583 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__22586;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__22586 CompressedPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_SH_request;
} struct__22591;

/* TM_radio_messages::M_027_T */
typedef struct__22591 M_027_T_TM_radio_messages;

/* TM_radio_messages::M_028_T */
typedef struct__22591 M_028_T_TM_radio_messages;

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
} struct__22601;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct__22601 Radio_TrackTrain_Header_T_Radio_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  M_VERSION m_version;
} struct__22619;

/* TM_radio_messages::M_032_T */
typedef struct__22619 M_032_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_REF d_ref;
} struct__22629;

/* TM_radio_messages::M_033_T */
typedef struct__22629 M_033_T_TM_radio_messages;

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
} struct__22640;

/* TM_radio_messages::M_034_T */
typedef struct__22640 M_034_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
} struct__22654;

/* TM_radio_messages::M_024_T */
typedef struct__22654 M_024_T_TM_radio_messages;

/* TM_radio_messages::M_009_T */
typedef struct__22654 M_009_T_TM_radio_messages;

/* TM_radio_messages::M_006_T */
typedef struct__22654 M_006_T_TM_radio_messages;

/* TM_radio_messages::M_003_T */
typedef struct__22654 M_003_T_TM_radio_messages;

/* TM_radio_messages::M_043_T */
typedef struct__22654 M_043_T_TM_radio_messages;

/* TM_radio_messages::M_041_T */
typedef struct__22654 M_041_T_TM_radio_messages;

/* TM_radio_messages::M_040_T */
typedef struct__22654 M_040_T_TM_radio_messages;

/* TM_radio_messages::M_039_T */
typedef struct__22654 M_039_T_TM_radio_messages;

/* TM_radio_messages::M_038_T */
typedef struct__22654 M_038_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_ORIENTATION q_orientation;
} struct__22663;

/* TM_radio_messages::M_045_T */
typedef struct__22663 M_045_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  Q_SCALE q_scale;
  D_SR d_sr;
} struct__22673;

/* TM_radio_messages::M_002_T */
typedef struct__22673 M_002_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  T_TRAIN t_train_received;
} struct__22684;

/* TM_radio_messages::M_008_T */
typedef struct__22684 M_008_T_TM_radio_messages;

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
} struct__22694;

/* TM_radio_messages::M_015_T */
typedef struct__22694 M_015_T_TM_radio_messages;

typedef struct {
  kcg_bool valid;
  NID_MESSAGE nid_message;
  L_MESSAGE l_message;
  T_TRAIN t_train;
  M_ACK m_ack;
  NID_LRBG nid_lrbg;
  NID_EM nid_em;
} struct__22708;

/* TM_radio_messages::M_018_T */
typedef struct__22708 M_018_T_TM_radio_messages;

/* TM_radio_messages::M_016_T */
typedef struct__22708 M_016_T_TM_radio_messages;

typedef struct {
  M_TrackTrain_Radio_T_TM_radio_messages message;
  CompressedPackets_T_Common_Types_Pkg packets;
  kcg_int trigger;
  kcg_bool message_sent;
} struct__22718;

/* InfraLib::R_data_internal_T */
typedef struct__22718 R_data_internal_T_InfraLib;

typedef struct {
  kcg_bool valid;
  kcg_int nid_message;
  kcg_int l_message;
  kcg_int t_train;
  kcg_int m_ack;
  kcg_int nid_lrbg;
} struct__22725;

/* TM_radio_messages::M_003_int_T */
typedef struct__22725 M_003_int_T_TM_radio_messages;

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
} struct__22737;

/* TM::P015_section_int_T */
typedef struct__22737 P015_section_int_T_TM;

typedef P015_section_array_T_TM array_int_4_32[32];

/* TM::P015_OBU_sectionlist_array_T */
typedef array_int_4_32 P015_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_128[128];

/* TM::P015_sections_array_flat_T */
typedef array_int_128 P015_sections_array_flat_T_TM;

/* TM::P012_sections_array_flat_T */
typedef array_int_128 P012_sections_array_flat_T_TM;

typedef P015_section_int_T_TM array__22750[32];

/* TM::P015_trackide_sectionlist_T */
typedef array__22750 P015_trackide_sectionlist_T_TM;

/* TM::P015_OBU_sectionlist_int_T */
typedef array__22750 P015_OBU_sectionlist_int_T_TM;

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
} struct__22753;

/* TM::P015_trackside_int_T */
typedef struct__22753 P015_trackside_int_T_TM;

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
} struct__22780;

/* TM::P065_trackside_int_T */
typedef struct__22780 P065_trackside_int_T_TM;

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
} struct__22796;

/* TM::P005_section_int_T */
typedef struct__22796 P005_section_int_T_TM;

typedef P005_section_array_T_TM array_int_7_33[33];

/* TM::P005_OBU_sectionlist_array_T */
typedef array_int_7_33 P005_OBU_sectionlist_array_T_TM;

typedef kcg_int array_int_231[231];

/* TM::P005_sections_array_flat_T */
typedef array_int_231 P005_sections_array_flat_T_TM;

typedef P005_section_int_T_TM array__22812[33];

/* TM::P005_OBU_sectionlist_int_T */
typedef array__22812 P005_OBU_sectionlist_int_T_TM;

typedef P005_section_int_T_TM array__22815[32];

/* TM::P005_trackide_sectionlist_T */
typedef array__22815 P005_trackide_sectionlist_T_TM;

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
} struct__22818;

/* TM::P005_trackside_int_T */
typedef struct__22818 P005_trackside_int_T_TM;

typedef kcg_int array_int_2[2];

/* TM_baseline2::P027V1_section_array_qdiff_T */
typedef array_int_2 P027V1_section_array_qdiff_T_TM_baseline2;

typedef struct { kcg_int NC_DIFF; kcg_int V_DIFF; } struct__22838;

/* TM_baseline2::P027V1_section_int_qdiff_T */
typedef struct__22838 P027V1_section_int_qdiff_T_TM_baseline2;

typedef P027V1_section_array_qdiff_T_TM_baseline2 array_int_2_32[32];

/* TM_baseline2::P027V1_OBU_sectionlist_array_qdiff_T */
typedef array_int_2_32 P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2;

typedef kcg_int array_int_64[64];

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef P027V1_section_int_qdiff_T_TM_baseline2 array__22849[32];

/* TM_baseline2::P027V1_trackside_qdifflist_T */
typedef array__22849 P027V1_trackside_qdifflist_T_TM_baseline2;

/* TM_baseline2::P027V1_OBU_sectionlist_int_qdiff_T */
typedef array__22849 P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2;

typedef struct {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  kcg_int N_ITER;
  P027V1_trackside_qdifflist_T_TM_baseline2 SECTIONS_q_diff;
} struct__22852;

/* TM_baseline2::P027V1_section_int_T */
typedef struct__22852 P027V1_section_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__22860[33];

/* TM_baseline2::P027V1_OBU_sectionlist_int_T */
typedef array__22860 P027V1_OBU_sectionlist_int_T_TM_baseline2;

typedef P027V1_section_int_T_TM_baseline2 array__22863[32];

/* TM_baseline2::P027V1_trackside_sectionlist_T */
typedef array__22863 P027V1_trackside_sectionlist_T_TM_baseline2;

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
} struct__22866;

/* TM_baseline2::P027V1_trackside_int_T */
typedef struct__22866 P027V1_trackside_int_T_TM_baseline2;

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
} struct__22884;

/* TM::P021_section_int_T */
typedef struct__22884 P021_section_int_T_TM;

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

typedef P021_section_int_T_TM array__22896[33];

/* TM::P021_OBU_sectionlist_int_T */
typedef array__22896 P021_OBU_sectionlist_int_T_TM;

typedef P021_section_int_T_TM array__22899[32];

/* TM::P021_trackide_sectionlist_T */
typedef array__22899 P021_trackide_sectionlist_T_TM;

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
} struct__22902;

/* TM::P021_trackside_int_T */
typedef struct__22902 P021_trackside_int_T_TM;

typedef struct {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
} struct__22915;

/* TM::P041_section_int_T */
typedef struct__22915 P041_section_int_T_TM;

typedef P041_section_int_T_TM array__22921[33];

/* TM::P041_OBU_sectionlist_int_T */
typedef array__22921 P041_OBU_sectionlist_int_T_TM;

typedef P041_section_int_T_TM array__22924[32];

/* TM::P041_trackide_sectionlist_T */
typedef array__22924 P041_trackide_sectionlist_T_TM;

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
} struct__22927;

/* TM::P041_trackside_int_T */
typedef struct__22927 P041_trackside_int_T_TM;

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
} struct__22944;

/* TM_baseline2::P003V1_trackside_int_T */
typedef struct__22944 P003V1_trackside_int_T_TM_baseline2;

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
} struct__22973;

/* TM::Radio_TrackTrain_Header_T */
typedef struct__22973 Radio_TrackTrain_Header_T_TM;

typedef struct {
  Radio_TrackTrain_Header_T_TM Header;
  CompressedPackets_T_Common_Types_Pkg Messages;
} struct__22991;

/* TM::CompressedRadioMessage */
typedef struct__22991 CompressedRadioMessage_TM;

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
} struct__22996;

/* TrainToTrack::Position_Report_based_on_two_balise_groups */
typedef struct__22996 Position_Report_based_on_two_balise_groups_TrainToTrack;

typedef struct {
  kcg_bool valid;
  Position_Report_based_on_two_balise_groups_TrainToTrack packet1;
} struct__23016;

/* Packet_TrainTypes_Pkg::PT1_PositionReport_2BG_T */
typedef struct__23016 PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg;

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
} struct__23021;

/* TrainToTrack::Position_Report */
typedef struct__23021 Position_Report_TrainToTrack;

typedef struct {
  kcg_bool valid;
  Position_Report_TrainToTrack packet0;
} struct__23040;

/* Packet_TrainTypes_Pkg::PT0_PositionReport_T */
typedef struct__23040 PT0_PositionReport_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool trackAheadFree;
  kcg_bool driverSelectsStart;
} struct__23045;

/* MA_Request::Driver2MAR_T */
typedef struct__23045 Driver2MAR_T_MA_Request;

typedef struct {
  L_internal_Type_Obu_BasicTypes_Pkg nominal;
  L_internal_Type_Obu_BasicTypes_Pkg d_min;
  L_internal_Type_Obu_BasicTypes_Pkg d_max;
} struct__23050;

/* Obu_BasicTypes_Pkg::LocWithInAcc_T */
typedef struct__23050 LocWithInAcc_T_Obu_BasicTypes_Pkg;

typedef struct {
  NID_ENGINE nid_engine;
  NID_OPERATIONAL nid_operational;
  L_TRAIN l_train;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_baliseAntenna_2_frontend;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_frontend_2_rearend;
  LocWithInAcc_T_Obu_BasicTypes_Pkg locationAccuracy_DefaultValue;
  LocWithInAcc_T_Obu_BasicTypes_Pkg centerDetectionAcc_DefaultValue;
} struct__23056;

/* TrainPosition_Types_Pck::trainProperties_T */
typedef struct__23056 trainProperties_T_TrainPosition_Types_Pck;

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
} struct__23066;

/* BG_Types_Pkg::LinkedBG_T */
typedef struct__23066 LinkedBG_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_BG nid_bg_fromLinkingBG;
  NID_C nid_c_fromLinkingBG;
  LocWithInAcc_T_Obu_BasicTypes_Pkg expectedLocation;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_link;
  LinkedBG_T_BG_Types_Pkg linkingInfo;
} struct__23080;

/* TrainPosition_Types_Pck::infoFromLinking_T */
typedef struct__23080 infoFromLinking_T_TrainPosition_Types_Pck;

typedef LinkedBG_T_BG_Types_Pkg array__23089[4];

/* BG_Types_Pkg::LinkedBGs_T */
typedef array__23089 LinkedBGs_T_BG_Types_Pkg;

typedef struct {
  V_internal_Type_Obu_BasicTypes_Pkg v_safeNominal;
  V_internal_Type_Obu_BasicTypes_Pkg v_rawNominal;
  V_internal_Type_Obu_BasicTypes_Pkg v_lower;
  V_internal_Type_Obu_BasicTypes_Pkg v_upper;
} struct__23092;

/* Obu_BasicTypes_Pkg::OdometrySpeeds_T */
typedef struct__23092 OdometrySpeeds_T_Obu_BasicTypes_Pkg;

typedef struct {
  L_internal_Type_Obu_BasicTypes_Pkg o_nominal;
  L_internal_Type_Obu_BasicTypes_Pkg o_min;
  L_internal_Type_Obu_BasicTypes_Pkg o_max;
} struct__23099;

/* Obu_BasicTypes_Pkg::OdometryLocations_T */
typedef struct__23099 OdometryLocations_T_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg timestamp;
  OdometryLocations_T_Obu_BasicTypes_Pkg odo;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg speed;
  A_internal_Type_Obu_BasicTypes_Pkg acceleration;
  odoMotionState_T_Obu_BasicTypes_Pkg motionState;
  odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection;
} struct__23105;

/* Obu_BasicTypes_Pkg::odometry_T */
typedef struct__23105 odometry_T_Obu_BasicTypes_Pkg;

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
} struct__23115;

/* BG_Types_Pkg::BG_Header_T */
typedef struct__23115 BG_Header_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  BG_Header_T_BG_Types_Pkg BG_Header;
  LinkedBGs_T_BG_Types_Pkg linkedBGs;
} struct__23133;

/* BG_Types_Pkg::passedBG_T */
typedef struct__23133 passedBG_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINK q_link;
  LocWithInAcc_T_Obu_BasicTypes_Pkg location;
  kcg_int seqNoOnTrack;
  infoFromLinking_T_TrainPosition_Types_Pck infoFromLinking;
  passedBG_T_BG_Types_Pkg infoFromPassing;
} struct__23139;

/* TrainPosition_Types_Pck::positionedBG_T */
typedef struct__23139 positionedBG_T_TrainPosition_Types_Pck;

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
} struct__23150;

/* TrainPosition_Types_Pck::trainPosition_T */
typedef struct__23150 trainPosition_T_TrainPosition_Types_Pck;

typedef struct { kcg_bool valid; M_LEVEL level; M_MODE Mode; } struct__23167;

/* Level_And_Mode_Types_Pkg::T_Mode_Level */
typedef struct__23167 T_Mode_Level_Level_And_Mode_Types_Pkg;

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
} struct__23173;

/* Radio_Types_Pkg::Radio_TrainTrack_Header_T */
typedef struct__23173 Radio_TrainTrack_Header_T_Radio_Types_Pkg;

typedef struct {
  M_VOLTAGE m_voltage;
  NID_CTRACTION nid_ctraction;
} struct__23185;

/* Packet_TrainTypes_Pkg::sTractionIdentity_T */
typedef struct__23185 sTractionIdentity_T_Packet_TrainTypes_Pkg;

typedef sTractionIdentity_T_Packet_TrainTypes_Pkg array__23190[3];

/* Packet_TrainTypes_Pkg::aTractionIdentity_T */
typedef array__23190 aTractionIdentity_T_Packet_TrainTypes_Pkg;

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
} struct__23193;

/* Packet_TrainTypes_Pkg::PT11_ValidatedTrainData_T */
typedef struct__23193 PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  NID_LTRBG transitionInformation;
} struct__23209;

/* Packet_TrainTypes_Pkg::PT9_Level23_TransitionInformation_T */
typedef struct__23209 PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  NID_OPERATIONAL TrainRunningNumber;
} struct__23214;

/* Packet_TrainTypes_Pkg::PT5_TrainRunningNumber */
typedef struct__23214 PT5_TrainRunningNumber_Packet_TrainTypes_Pkg;

typedef struct { kcg_bool valid; M_ERROR m_error; } struct__23219;

/* Packet_TrainTypes_Pkg::PT4_ErrorReporting_T */
typedef struct__23219 PT4_ErrorReporting_T_Packet_TrainTypes_Pkg;

typedef kcg_int array_int_15[15];

/* TM::Array15 */
typedef array_int_15 Array15_TM;

/* Packet_TrainTypes_Pkg::telephoneNumber_T */
typedef array_int_15 telephoneNumber_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  telephoneNumber_T_Packet_TrainTypes_Pkg telephoneNumber;
} struct__23227;

/* Packet_TrainTypes_Pkg::sNID_RADIO_T */
typedef struct__23227 sNID_RADIO_T_Packet_TrainTypes_Pkg;

typedef sNID_RADIO_T_Packet_TrainTypes_Pkg array__23232[1];

/* Packet_TrainTypes_Pkg::aNID_RADIO_T */
typedef array__23232 aNID_RADIO_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int number;
  aNID_RADIO_T_Packet_TrainTypes_Pkg aNID_RADIO;
} struct__23235;

/* Packet_TrainTypes_Pkg::PT3_OnboardTelephoneNumbers_T */
typedef struct__23235 PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg;

typedef struct {
  PT0_PositionReport_T_Packet_TrainTypes_Pkg p0;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg p1;
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg p3;
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg p4;
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg p5;
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg p9;
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg p11;
} struct__23241;

/* Common_Types_Pkg::outPackets_T */
typedef struct__23241 outPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_bool present;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg header;
  outPackets_T_Common_Types_Pkg packets;
} struct__23251;

/* Radio_Types_Pkg::Radio_TrainTrack_Message_T */
typedef struct__23251 Radio_TrainTrack_Message_T_Radio_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_C nid_c;
  NID_RBC rbc_id;
  kcg_int device_id;
} struct__23257;

/* Common_Types_Pkg::RBC_Id_T */
typedef struct__23257 RBC_Id_T_Common_Types_Pkg;

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
} struct__23264;

/* Common_Types_Pkg::RadioMetadata_T */
typedef struct__23264 RadioMetadata_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg source;
  RadioMetadata_T_Common_Types_Pkg radioMetadata;
  BG_Header_T_BG_Types_Pkg BG_Common_Header;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  CompressedPackets_T_Common_Types_Pkg packets;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} struct__23276;

/* Common_Types_Pkg::ReceivedMessage_T */
typedef struct__23276 ReceivedMessage_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  L_NVKRINT l_nvkrint_l;
  kcg_real m_nvkrint_l;
} struct__23286;

/* TM::P003_OBU_l_section_enum_T */
typedef struct__23286 P003_OBU_l_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_l_section_enum_T */
typedef struct__23286 P203V1_OBU_l_section_enum_T_TM_baseline2;

typedef struct__23286 array__23292[32];

/* TM::P003_OBU_l_sectionlist_enum_T */
typedef array__23292 P003_OBU_l_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_l_sectionlist_enum_T */
typedef array__23292 P203V1_OBU_l_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int v_nvkvint_k_m;
  kcg_real m_nvkvint_km_12;
  kcg_real m_nvkvint_km_23;
} struct__23295;

/* TM::P003_OBU_k_m_section_enum_T */
typedef struct__23295 P003_OBU_k_m_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_m_section_enum_T */
typedef struct__23295 P203V1_OBU_k_m_section_enum_T_TM_baseline2;

typedef struct__23295 array__23302[32];

/* TM::P003_OBU_k_m_sectionlist_enum_T */
typedef array__23302 P003_OBU_k_m_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_m_sectionlist_enum_T */
typedef array__23302 P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_NVKVINTSET q_nvkvintset_k;
  kcg_real a_nvp12_k;
  kcg_real a_nvp23_k;
  kcg_int v_nvkvint_k;
  kcg_real m_nvkvint_k_12;
  kcg_real m_nvkvint_k_23;
  kcg_int n_iter_k_m;
  array__23302 n_iter_k_m_list;
} struct__23305;

/* TM::P003_OBU_k_section_enum_T */
typedef struct__23305 P003_OBU_k_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_section_enum_T */
typedef struct__23305 P203V1_OBU_k_section_enum_T_TM_baseline2;

typedef struct__23305 array__23317[32];

/* TM::P003_OBU_k_sectionlist_enum_T */
typedef array__23317 P003_OBU_k_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_sectionlist_enum_T */
typedef array__23317 P203V1_OBU_k_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int v_nvkvint_n;
  kcg_real m_nvkvint_n_12;
  kcg_real m_nvkvint_n_23;
} struct__23320;

/* TM::P003_OBU_n_section_enum_T */
typedef struct__23320 P003_OBU_n_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_n_section_enum_T */
typedef struct__23320 P203V1_OBU_n_section_enum_T_TM_baseline2;

typedef struct__23320 array__23327[32];

/* TM::P003_OBU_n_sectionlist_enum_T */
typedef array__23327 P003_OBU_n_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_n_sectionlist_enum_T */
typedef array__23327 P203V1_OBU_n_sectionlist_enum_T_TM_baseline2;

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
} struct__23330;

/* TM_baseline2::P203V1_OBU_T */
typedef struct__23330 P203V1_OBU_T_TM_baseline2;

typedef struct {
  Q_NVLOCACC q_nvlocacc;
  V_NVLIMSUPERV v_nvlimsuperv;
} struct__23361;

/* TM_baseline2::P003_permanent_data_T */
typedef struct__23361 P003_permanent_data_T_TM_baseline2;

typedef struct {
  kcg_bool Mess_15;
  kcg_bool Mess_16;
  kcg_bool Mess_2;
  kcg_bool Mess_27;
  kcg_bool Mess_28;
  kcg_bool Mess_6;
  kcg_bool T_NVCONTACT_Overpass;
} struct__23366;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_Mess */
typedef struct__23366 T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg;

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
} struct__23376;

/* Packet_Types_Pkg::P80_ModeProfile_T */
typedef struct__23376 P80_ModeProfile_T_Packet_Types_Pkg;

typedef P80_ModeProfile_T_Packet_Types_Pkg array__23388[3];

/* Packet_Types_Pkg::P80_ModeProfiles_T */
typedef array__23388 P80_ModeProfiles_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
} struct__23391;

/* Packet_Types_Pkg::P46_ConditionalLevelTransitionOrder_T */
typedef struct__23391 P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg;

typedef P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg array__23398[7];

/* Packet_Types_Pkg::P46_ConditionalLevelTransitionOrders_T */
typedef array__23398 P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_LEVELTR d_leveltr;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
  L_ACKLEVELTR l_ackleveltr;
} struct__23401;

/* Packet_Types_Pkg::P41_LevelTransitionOrder_T */
typedef struct__23401 P41_LevelTransitionOrder_T_Packet_Types_Pkg;

typedef P41_LevelTransitionOrder_T_Packet_Types_Pkg array__23411[7];

/* Packet_Types_Pkg::P41_LevelTransistionOrders_T */
typedef array__23411 P41_LevelTransistionOrders_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIFF q_diff;
  NC_CDDIFF nc_cddiff;
  NC_DIFF nc_diff;
  V_DIFF v_diff;
} struct__23414;

/* Packet_Types_Pkg::Diff_T */
typedef struct__23414 Diff_T_Packet_Types_Pkg;

typedef Diff_T_Packet_Types_Pkg array__23422[7];

/* Packet_Types_Pkg::DiffArray_T */
typedef array__23422 DiffArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  DiffArray_T_Packet_Types_Pkg diffArray;
} struct__23425;

/* Packet_Types_Pkg::SSP_T */
typedef struct__23425 SSP_T_Packet_Types_Pkg;

typedef SSP_T_Packet_Types_Pkg array__23433[7];

/* Packet_Types_Pkg::SSPArray_T */
typedef array__23433 SSPArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  DiffArray_T_Packet_Types_Pkg diffArray;
  SSPArray_T_Packet_Types_Pkg SSPArray;
} struct__23436;

/* Packet_Types_Pkg::P27_InternationalStaticSpeedProfile_T */
typedef struct__23436 P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} struct__23447;

/* Packet_Types_Pkg::P21_GradientProfile_T */
typedef struct__23447 P21_GradientProfile_T_Packet_Types_Pkg;

typedef P21_GradientProfile_T_Packet_Types_Pkg array__23456[7];

/* Packet_Types_Pkg::P21_GradientProfiles_T */
typedef array__23456 P21_GradientProfiles_T_Packet_Types_Pkg;

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
} struct__23459;

/* Packet_Types_Pkg::P15_Level23MovementAuthority_T */
typedef struct__23459 P15_Level23MovementAuthority_T_Packet_Types_Pkg;

typedef P15_Level23MovementAuthority_T_Packet_Types_Pkg array__23486[5];

/* Packet_Types_Pkg::P15_Level23MovementAuthorities_T */
typedef array__23486 P15_Level23MovementAuthorities_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_REVERSE d_reverse;
  V_REVERSE v_reverse;
} struct__23489;

/* TM::P139_OBU_T */
typedef struct__23489 P139_OBU_T_TM;

/* Packet_Types_Pkg::P139_ReversingSupervisionInformation_T */
typedef struct__23489 P139_ReversingSupervisionInformation_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_STARTREVERSE d_startreverse;
  L_REVERSEAREA l_reversearea;
} struct__23497;

/* TM::P138_OBU_T */
typedef struct__23497 P138_OBU_T_TM;

/* Packet_Types_Pkg::P138_ReversingAreaInformation_T */
typedef struct__23497 P138_ReversingAreaInformation_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SRSTOP q_srstop;
} struct__23505;

/* Packet_Types_Pkg::P137_StopIfInStaffResponsible_T */
typedef struct__23505 P137_StopIfInStaffResponsible_T_Packet_Types_Pkg;

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
} struct__23511;

/* Level_And_Mode_Types_Pkg::T_Data_From_Track_Packet */
typedef struct__23511 T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg;

typedef struct {
  T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg train_packets;
  T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg train_messages;
  kcg_bool p12;
  kcg_bool p15;
  kcg_bool p21;
  kcg_bool p27;
} struct__23526;

/* TrackAtlasTypes::DataForModeAndLevel_t */
typedef struct__23526 DataForModeAndLevel_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg begin_section;
  L_internal_Type_Obu_BasicTypes_Pkg end_section;
  G_internal_Type_Obu_BasicTypes_Pkg gradient;
} struct__23535;

/* TrackAtlasTypes::GradientProfile_for_DMI_section_t */
typedef struct__23535 GradientProfile_for_DMI_section_t_TrackAtlasTypes;

typedef GradientProfile_for_DMI_section_t_TrackAtlasTypes array__23542[50];

/* TrackAtlasTypes::GradientProfile_for_DMI_t */
typedef array__23542 GradientProfile_for_DMI_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_Abs;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_LRBG;
  V_internal_Type_Obu_BasicTypes_Pkg MRS;
} struct__23545;

/* TrackAtlasTypes::MRSP_section_t */
typedef struct__23545 MRSP_section_t_TrackAtlasTypes;

typedef MRSP_section_t_TrackAtlasTypes array__23552[200];

/* TrackAtlasTypes::MRSP_Profile_t */
typedef array__23552 MRSP_Profile_t_TrackAtlasTypes;

typedef struct {
  GradientProfile_for_DMI_t_TrackAtlasTypes GradientProfile;
  kcg_bool Gradient_profile_updated;
  MRSP_Profile_t_TrackAtlasTypes MRSP;
  kcg_bool MRSP_updated;
} struct__23555;

/* TrackAtlasTypes::DataForDMI_t */
typedef struct__23555 DataForDMI_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_Absolute;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_LRBG;
  G_internal_Type_Obu_BasicTypes_Pkg Gradient;
  L_internal_Type_Obu_BasicTypes_Pkg L_Gradient;
} struct__23562;

/* TrackAtlasTypes::Gradient_section_t */
typedef struct__23562 Gradient_section_t_TrackAtlasTypes;

typedef Gradient_section_t_TrackAtlasTypes array__23570[50];

/* TrackAtlasTypes::GradientProfile_t */
typedef array__23570 GradientProfile_t_TrackAtlasTypes;

typedef struct {
  T_internal_Type_Obu_BasicTypes_Pkg t_endtimer;
  L_internal_Type_Obu_BasicTypes_Pkg d_endtimerstoploc;
} struct__23573;

/* TrackAtlasTypes::Endtimer_t */
typedef struct__23573 Endtimer_t_TrackAtlasTypes;

typedef struct {
  L_internal_Type_Obu_BasicTypes_Pkg d_DP_or_OL;
  V_internal_Type_Obu_BasicTypes_Pkg v_release;
  kcg_bool calc_v_release_onboard;
} struct__23578;

/* TrackAtlasTypes::DP_or_OL_t */
typedef struct__23578 DP_or_OL_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  kcg_bool q_endsection;
  L_internal_Type_Obu_BasicTypes_Pkg l_section;
  kcg_bool q_sectiontimer;
  T_internal_Type_Obu_BasicTypes_Pkg t_sectiontimer;
  L_internal_Type_Obu_BasicTypes_Pkg d_sectiontimerstoploc;
} struct__23584;

/* TrackAtlasTypes::MovementAuthoritySection_t */
typedef struct__23584 MovementAuthoritySection_t_TrackAtlasTypes;

typedef MovementAuthoritySection_t_TrackAtlasTypes array__23593[10];

/* TrackAtlasTypes::MovementAuthoritySectionlist_t */
typedef array__23593 MovementAuthoritySectionlist_t_TrackAtlasTypes;

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
} struct__23596;

/* TrackAtlasTypes::MovementAuthority_t */
typedef struct__23596 MovementAuthority_t_TrackAtlasTypes;

typedef struct {
  kcg_bool freshMA;
  MovementAuthority_t_TrackAtlasTypes MA;
  kcg_bool freshGradientProfile;
  GradientProfile_t_TrackAtlasTypes GradientProfile;
  kcg_bool freshMRSP;
  MRSP_Profile_t_TrackAtlasTypes MRSP;
} struct__23614;

/* TrackAtlasTypes::DataForSupervision_nextGen_t */
typedef struct__23614 DataForSupervision_nextGen_t_TrackAtlasTypes;

typedef struct { kcg_bool valid; kcg_int nid_c; } struct__23623;

/* TM::P003_OBU_nid_c_section_enum_T */
typedef struct__23623 P003_OBU_nid_c_section_enum_T_TM;

/* TM_baseline2::P003V1_section_enum_T */
typedef struct__23623 P003V1_section_enum_T_TM_baseline2;

typedef struct__23623 array__23628[32];

/* TM::P003_OBU_nid_c_sectionlist_enum_T */
typedef array__23628 P003_OBU_nid_c_sectionlist_enum_T_TM;

/* TM_baseline2::P003V1_sectionlist_enum_T */
typedef array__23628 P003V1_sectionlist_enum_T_TM_baseline2;

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
} struct__23631;

/* TM::P003_OBU_T */
typedef struct__23631 P003_OBU_T_TM;

typedef struct {
  kcg_bool valid;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} struct__23686;

/* TM::P021_section_enum_T */
typedef struct__23686 P021_section_enum_T_TM;

typedef P021_section_enum_T_TM array__23693[33];

/* TM::P021_OBU_sectionlist_enum_T */
typedef array__23693 P021_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P021_OBU_sectionlist_enum_T_TM sections;
} struct__23696;

/* TM::P021_OBU_T */
typedef struct__23696 P021_OBU_T_TM;

typedef kcg_int array_int_5[5];

/* TM::Array05 */
typedef array_int_5 Array05_TM;

typedef struct {
  kcg_bool handled;
  NID_EM nid_em;
  kcg_int nfree;
} struct__23707;

/* TA_EmergencyStop::NID_EM_Store::NID_EM_STORE_Acc_T */
typedef struct__23707 NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store;

typedef struct { NID_EM nid_em; kcg_bool valid; } struct__23713;

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_Item_T */
typedef struct__23713 NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store;

typedef NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store array__23718[8];

typedef struct { kcg_int nfree; array__23718 items; } struct__23721;

/* TA_EmergencyStop::NID_EM_Store::NID_EM_Store_T */
typedef struct__23721 NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  kcg_int t_mar;
  kcg_int t_timeoutrqst;
  kcg_int t_cycrqst;
} struct__23726;

/* Packet_Types_Pkg::P57_MovementAuthorityRequestParameters_T */
typedef struct__23726 P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg;

typedef kcg_int array_int_6[6];

/* TM::Array06 */
typedef array_int_6 Array06_TM;

typedef struct {
  kcg_bool valid;
  L_SECTION l_section;
  Q_SECTIONTIMER q_sectiontimer;
  T_SECTIONTIMER t_sectiontimer;
  D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc;
} struct__23737;

/* TM::P015_section_enum_T */
typedef struct__23737 P015_section_enum_T_TM;

/* TM::P012_section_enum_T */
typedef struct__23737 P012_section_enum_T_TM;

typedef P015_section_enum_T_TM array__23745[32];

/* TM::P015_OBU_sectionlist_enum_T */
typedef array__23745 P015_OBU_sectionlist_enum_T_TM;

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
} struct__23748;

/* TM::P015_OBU_T */
typedef struct__23748 P015_OBU_T_TM;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg d_static_abs;
  L_internal_Type_Obu_BasicTypes_Pkg d_static_LRBG;
  kcg_bool q_train_length_corr;
  V_internal_Type_Obu_BasicTypes_Pkg v_static;
} struct__23773;

/* TrackAtlasTypes::StaticSpeedSection_t */
typedef struct__23773 StaticSpeedSection_t_TrackAtlasTypes;

typedef StaticSpeedSection_t_TrackAtlasTypes array__23781[50];

/* TrackAtlasTypes::StaticSpeedProfile_t */
typedef array__23781 StaticSpeedProfile_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
} struct__23784;

/* TM::P046_section_enum_T */
typedef struct__23784 P046_section_enum_T_TM;

typedef P046_section_enum_T_TM array__23790[33];

/* TM::P046_OBU_sectionlist_enum_T */
typedef array__23790 P046_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  N_ITER n_iter;
  P046_OBU_sectionlist_enum_T_TM sections;
} struct__23793;

/* TM::P046_OBU_T */
typedef struct__23793 P046_OBU_T_TM;

typedef kcg_int array_int_66[66];

/* TM::P046_sections_array_flat_T */
typedef array_int_66 P046_sections_array_flat_T_TM;

typedef struct {
  kcg_bool valid;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
  L_ACKLEVELTR l_ackleveltr;
} struct__23803;

/* TM::P041_section_enum_T */
typedef struct__23803 P041_section_enum_T_TM;

typedef P041_section_enum_T_TM array__23810[33];

/* TM::P041_OBU_sectionlist_enum_T */
typedef array__23810 P041_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_LEVELTR d_leveltr;
  N_ITER n_iter;
  P041_OBU_sectionlist_enum_T_TM sections;
} struct__23813;

/* TM::P041_OBU_T */
typedef struct__23813 P041_OBU_T_TM;

typedef struct {
  kcg_bool valid;
  NC_DIFF nc_diff;
  V_DIFF v_diff;
} struct__23822;

/* TM_baseline2::P027V1_section_enum_qdiff_T */
typedef struct__23822 P027V1_section_enum_qdiff_T_TM_baseline2;

typedef P027V1_section_enum_qdiff_T_TM_baseline2 array__23828[32];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_qdiff_T */
typedef array__23828 P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  N_ITER n_iter;
  P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 SECTIONS_q_diff;
} struct__23831;

/* TM_baseline2::P027V1_section_enum_T */
typedef struct__23831 P027V1_section_enum_T_TM_baseline2;

typedef P027V1_section_enum_T_TM_baseline2 array__23840[33];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_T */
typedef array__23840 P027V1_OBU_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 sections;
} struct__23843;

/* TM_baseline2::P027V1_OBU_T */
typedef struct__23843 P027V1_OBU_T_TM_baseline2;

typedef struct { kcg_bool valid; Q_DIR q_dir; Q_SCALE q_scale; } struct__23850;

/* TM_baseline2::P027V1_OBU_body_enum_T */
typedef struct__23850 P027V1_OBU_body_enum_T_TM_baseline2;

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
} struct__23856;

/* TM::P012_OBU_T */
typedef struct__23856 P012_OBU_T_TM;

typedef struct { kcg_bool valid; Q_DIR q_dir; } struct__23882;

/* TM::P135_OBU_T */
typedef struct__23882 P135_OBU_T_TM;

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
} struct__23887;

/* TM_baseline2::P003V1_OBU_T */
typedef struct__23887 P003V1_OBU_T_TM_baseline2;

typedef kcg_int array_int_24[24];

/* TM::Array24 */
typedef array_int_24 Array24_TM;

typedef struct { kcg_int target; kcg_int speed; } struct__23917;

/* TA_MRSP::SSP_section_t */
typedef struct__23917 SSP_section_t_TA_MRSP;

typedef struct__23917 array__23922[33];

/* TA_MRSP::SSP_cat_t */
typedef array__23922 SSP_cat_t_TA_MRSP;

typedef array__23922 array__23925[11];

/* TA_MRSP::SSP_matrix_t */
typedef array__23925 SSP_matrix_t_TA_MRSP;

typedef struct {
  kcg_int Category_Index;
  kcg_int Pos_Index;
  SSP_target_t_TA_MRSP Loc;
} struct__23928;

/* TA_MRSP::SSP_t_indexed_matrix_element */
typedef struct__23928 SSP_t_indexed_matrix_element_TA_MRSP;

typedef SSP_t_indexed_matrix_element_TA_MRSP array__23934[363];

/* TA_MRSP::SSP_t_list_t */
typedef array__23934 SSP_t_list_t_TA_MRSP;

typedef kcg_int array_int_33[33];

/* TA_MRSP::SSP_t_cat_t */
typedef array_int_33 SSP_t_cat_t_TA_MRSP;

typedef array_int_33 array_int_33_11[11];

/* TA_MRSP::SSP_t_matrix_t */
typedef array_int_33_11 SSP_t_matrix_t_TA_MRSP;

typedef struct { kcg_bool Found; kcg_int Index; } struct__23943;

/* TA_MRSP::SSP_Mark_ValidSSPsection */
typedef struct__23943 SSP_Mark_ValidSSPsection_TA_MRSP;

typedef struct {
  kcg_bool found;
  kcg_int index;
  SSP_t_section_t_TA_MRSP target;
} struct__23948;

/* TA_MRSP::SSP_valid_section_t */
typedef struct__23948 SSP_valid_section_t_TA_MRSP;

typedef struct { kcg_int index; SSP_t_section_t_TA_MRSP target; } struct__23954;

/* TA_MRSP::SSP_relevant_target_t */
typedef struct__23954 SSP_relevant_target_t_TA_MRSP;

typedef struct { kcg_int Index; SSP_target_t_TA_MRSP Loc; } struct__23959;

/* TA_MRSP::SSP_t_indexed_trgt_t */
typedef struct__23959 SSP_t_indexed_trgt_t_TA_MRSP;

typedef SSP_t_indexed_trgt_t_TA_MRSP array__23964[11];

/* TA_MRSP::SSP_t_indexed_targets_list_t */
typedef array__23964 SSP_t_indexed_targets_list_t_TA_MRSP;

typedef kcg_int array_int_30[30];

typedef kcg_bool array_bool_30[30];

typedef CompressedPacketData_T_Common_Types_Pkg array_int_500_500[500];

typedef array_int_128 array_int_128_32[32];

typedef SSP_t_indexed_matrix_element_TA_MRSP array__23979[11];

typedef SSP_valid_section_t_TA_MRSP array__23982[33];

typedef kcg_int array_int_11[11];

typedef SSP_t_list_t_TA_MRSP array__23988[200];

typedef SSP_matrix_t_TA_MRSP array__23991[200];

typedef kcg_int array_int_200[200];

typedef P027V1_sections_array_flat_qdiff_T_TM_baseline2 array_int_64_32[32];

typedef CompressedPackets_T_Common_Types_Pkg array__24000[33];

typedef kcg_bool array_bool_50[50];

typedef kcg_int array_int_50[50];

typedef P027V1_OBU_sectionlist_enum_T_TM_baseline2 array__24009[50];

typedef Q_SCALE array__24012[50];

typedef StaticSpeedProfile_t_TrackAtlasTypes array__24015[50];

typedef P003V1_OBU_sectionlist_int_T_TM_baseline2 array_int_32_32[32];

typedef P003V1_section_enum_T_TM_baseline2 array__24021[31];

typedef P003V1_section_enum_T_TM_baseline2 array__24024[1];

typedef P015_OBU_sectionlist_enum_T_TM array__24027[5];

typedef P015_OBU_T_TM array__24030[5];

typedef array_int_99 array_int_99_33[33];

typedef P021_OBU_sectionlist_enum_T_TM array__24036[7];

typedef P021_OBU_T_TM array__24039[7];

typedef P041_OBU_sectionlist_enum_T_TM array__24042[7];

typedef Q_SCALE array__24045[7];

typedef Q_DIR array__24048[7];

typedef P046_sections_array_flat_T_TM array_int_66_33[33];

typedef P046_OBU_sectionlist_enum_T_TM array__24054[7];

typedef array__23693 array__24057[33];

typedef Q_SCALE array__24060[33];

typedef GradientProfile_t_TrackAtlasTypes array__24063[50];

typedef GradientProfile_t_TrackAtlasTypes array__24066[33];

typedef StaticSpeedProfile_t_TrackAtlasTypes array__24069[200];

typedef array_int_3_33 array_int_3_33_231[231];

typedef kcg_int array_int_396[396];

typedef kcg_int array_int_1[1];

typedef kcg_int array_int_104[104];

typedef P021_section_int_T_TM array__24084[1];

typedef kcg_int array_int_494[494];

typedef P027V1_section_int_T_TM_baseline2 array__24090[1];

typedef array_int_2_32 array_int_2_32_32[32];

typedef kcg_int array_int_432[432];

typedef kcg_int array_int_68[68];

typedef kcg_int array_int_444[444];

typedef kcg_int array_int_56[56];

typedef kcg_int array_int_18[18];

typedef array_int_7_33 array_int_7_33_231[231];

typedef kcg_int array_int_264[264];

typedef kcg_int array_int_236[236];

typedef P005_section_int_T_TM array__24120[1];

typedef array_int_3_33 array_int_3_33_99[99];

typedef kcg_int array_int_395[395];

typedef kcg_int array_int_105[105];

typedef P041_section_int_T_TM array__24132[1];

typedef kcg_int array_int_491[491];

typedef kcg_int array_int_9[9];

typedef array_int_4_32 array_int_4_32_128[128];

typedef kcg_int array_int_350[350];

typedef kcg_int array_int_21[21];

typedef kcg_int array_int_150[150];

typedef kcg_int array_int_22[22];

#ifndef kcg_copy_struct__22557
#define kcg_copy_struct__22557(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22557)))
#endif /* kcg_copy_struct__22557 */

#ifndef kcg_copy_struct__22575
#define kcg_copy_struct__22575(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22575)))
#endif /* kcg_copy_struct__22575 */

#ifndef kcg_copy_struct__22586
#define kcg_copy_struct__22586(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22586)))
#endif /* kcg_copy_struct__22586 */

#ifndef kcg_copy_struct__22591
#define kcg_copy_struct__22591(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22591)))
#endif /* kcg_copy_struct__22591 */

#ifndef kcg_copy_struct__22601
#define kcg_copy_struct__22601(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22601)))
#endif /* kcg_copy_struct__22601 */

#ifndef kcg_copy_struct__22619
#define kcg_copy_struct__22619(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22619)))
#endif /* kcg_copy_struct__22619 */

#ifndef kcg_copy_struct__22629
#define kcg_copy_struct__22629(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22629)))
#endif /* kcg_copy_struct__22629 */

#ifndef kcg_copy_struct__22640
#define kcg_copy_struct__22640(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22640)))
#endif /* kcg_copy_struct__22640 */

#ifndef kcg_copy_struct__22654
#define kcg_copy_struct__22654(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22654)))
#endif /* kcg_copy_struct__22654 */

#ifndef kcg_copy_struct__22663
#define kcg_copy_struct__22663(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22663)))
#endif /* kcg_copy_struct__22663 */

#ifndef kcg_copy_struct__22673
#define kcg_copy_struct__22673(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22673)))
#endif /* kcg_copy_struct__22673 */

#ifndef kcg_copy_struct__22684
#define kcg_copy_struct__22684(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22684)))
#endif /* kcg_copy_struct__22684 */

#ifndef kcg_copy_struct__22694
#define kcg_copy_struct__22694(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22694)))
#endif /* kcg_copy_struct__22694 */

#ifndef kcg_copy_struct__22708
#define kcg_copy_struct__22708(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22708)))
#endif /* kcg_copy_struct__22708 */

#ifndef kcg_copy_struct__22718
#define kcg_copy_struct__22718(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22718)))
#endif /* kcg_copy_struct__22718 */

#ifndef kcg_copy_struct__22725
#define kcg_copy_struct__22725(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22725)))
#endif /* kcg_copy_struct__22725 */

#ifndef kcg_copy_struct__22737
#define kcg_copy_struct__22737(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22737)))
#endif /* kcg_copy_struct__22737 */

#ifndef kcg_copy_struct__22753
#define kcg_copy_struct__22753(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22753)))
#endif /* kcg_copy_struct__22753 */

#ifndef kcg_copy_struct__22780
#define kcg_copy_struct__22780(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22780)))
#endif /* kcg_copy_struct__22780 */

#ifndef kcg_copy_struct__22796
#define kcg_copy_struct__22796(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22796)))
#endif /* kcg_copy_struct__22796 */

#ifndef kcg_copy_struct__22818
#define kcg_copy_struct__22818(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22818)))
#endif /* kcg_copy_struct__22818 */

#ifndef kcg_copy_struct__22838
#define kcg_copy_struct__22838(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22838)))
#endif /* kcg_copy_struct__22838 */

#ifndef kcg_copy_struct__22852
#define kcg_copy_struct__22852(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22852)))
#endif /* kcg_copy_struct__22852 */

#ifndef kcg_copy_struct__22866
#define kcg_copy_struct__22866(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22866)))
#endif /* kcg_copy_struct__22866 */

#ifndef kcg_copy_struct__22884
#define kcg_copy_struct__22884(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22884)))
#endif /* kcg_copy_struct__22884 */

#ifndef kcg_copy_struct__22902
#define kcg_copy_struct__22902(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22902)))
#endif /* kcg_copy_struct__22902 */

#ifndef kcg_copy_struct__22915
#define kcg_copy_struct__22915(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22915)))
#endif /* kcg_copy_struct__22915 */

#ifndef kcg_copy_struct__22927
#define kcg_copy_struct__22927(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22927)))
#endif /* kcg_copy_struct__22927 */

#ifndef kcg_copy_struct__22944
#define kcg_copy_struct__22944(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22944)))
#endif /* kcg_copy_struct__22944 */

#ifndef kcg_copy_struct__22973
#define kcg_copy_struct__22973(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22973)))
#endif /* kcg_copy_struct__22973 */

#ifndef kcg_copy_struct__22991
#define kcg_copy_struct__22991(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22991)))
#endif /* kcg_copy_struct__22991 */

#ifndef kcg_copy_struct__22996
#define kcg_copy_struct__22996(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__22996)))
#endif /* kcg_copy_struct__22996 */

#ifndef kcg_copy_struct__23016
#define kcg_copy_struct__23016(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23016)))
#endif /* kcg_copy_struct__23016 */

#ifndef kcg_copy_struct__23021
#define kcg_copy_struct__23021(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23021)))
#endif /* kcg_copy_struct__23021 */

#ifndef kcg_copy_struct__23040
#define kcg_copy_struct__23040(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23040)))
#endif /* kcg_copy_struct__23040 */

#ifndef kcg_copy_struct__23045
#define kcg_copy_struct__23045(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23045)))
#endif /* kcg_copy_struct__23045 */

#ifndef kcg_copy_struct__23050
#define kcg_copy_struct__23050(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23050)))
#endif /* kcg_copy_struct__23050 */

#ifndef kcg_copy_struct__23056
#define kcg_copy_struct__23056(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23056)))
#endif /* kcg_copy_struct__23056 */

#ifndef kcg_copy_struct__23066
#define kcg_copy_struct__23066(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23066)))
#endif /* kcg_copy_struct__23066 */

#ifndef kcg_copy_struct__23080
#define kcg_copy_struct__23080(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23080)))
#endif /* kcg_copy_struct__23080 */

#ifndef kcg_copy_struct__23092
#define kcg_copy_struct__23092(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23092)))
#endif /* kcg_copy_struct__23092 */

#ifndef kcg_copy_struct__23099
#define kcg_copy_struct__23099(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23099)))
#endif /* kcg_copy_struct__23099 */

#ifndef kcg_copy_struct__23105
#define kcg_copy_struct__23105(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23105)))
#endif /* kcg_copy_struct__23105 */

#ifndef kcg_copy_struct__23115
#define kcg_copy_struct__23115(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23115)))
#endif /* kcg_copy_struct__23115 */

#ifndef kcg_copy_struct__23133
#define kcg_copy_struct__23133(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23133)))
#endif /* kcg_copy_struct__23133 */

#ifndef kcg_copy_struct__23139
#define kcg_copy_struct__23139(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23139)))
#endif /* kcg_copy_struct__23139 */

#ifndef kcg_copy_struct__23150
#define kcg_copy_struct__23150(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23150)))
#endif /* kcg_copy_struct__23150 */

#ifndef kcg_copy_struct__23167
#define kcg_copy_struct__23167(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23167)))
#endif /* kcg_copy_struct__23167 */

#ifndef kcg_copy_struct__23173
#define kcg_copy_struct__23173(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23173)))
#endif /* kcg_copy_struct__23173 */

#ifndef kcg_copy_struct__23185
#define kcg_copy_struct__23185(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23185)))
#endif /* kcg_copy_struct__23185 */

#ifndef kcg_copy_struct__23193
#define kcg_copy_struct__23193(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23193)))
#endif /* kcg_copy_struct__23193 */

#ifndef kcg_copy_struct__23209
#define kcg_copy_struct__23209(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23209)))
#endif /* kcg_copy_struct__23209 */

#ifndef kcg_copy_struct__23214
#define kcg_copy_struct__23214(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23214)))
#endif /* kcg_copy_struct__23214 */

#ifndef kcg_copy_struct__23219
#define kcg_copy_struct__23219(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23219)))
#endif /* kcg_copy_struct__23219 */

#ifndef kcg_copy_struct__23227
#define kcg_copy_struct__23227(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23227)))
#endif /* kcg_copy_struct__23227 */

#ifndef kcg_copy_struct__23235
#define kcg_copy_struct__23235(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23235)))
#endif /* kcg_copy_struct__23235 */

#ifndef kcg_copy_struct__23241
#define kcg_copy_struct__23241(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23241)))
#endif /* kcg_copy_struct__23241 */

#ifndef kcg_copy_struct__23251
#define kcg_copy_struct__23251(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23251)))
#endif /* kcg_copy_struct__23251 */

#ifndef kcg_copy_struct__23257
#define kcg_copy_struct__23257(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23257)))
#endif /* kcg_copy_struct__23257 */

#ifndef kcg_copy_struct__23264
#define kcg_copy_struct__23264(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23264)))
#endif /* kcg_copy_struct__23264 */

#ifndef kcg_copy_struct__23276
#define kcg_copy_struct__23276(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23276)))
#endif /* kcg_copy_struct__23276 */

#ifndef kcg_copy_struct__23286
#define kcg_copy_struct__23286(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23286)))
#endif /* kcg_copy_struct__23286 */

#ifndef kcg_copy_struct__23295
#define kcg_copy_struct__23295(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23295)))
#endif /* kcg_copy_struct__23295 */

#ifndef kcg_copy_struct__23305
#define kcg_copy_struct__23305(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23305)))
#endif /* kcg_copy_struct__23305 */

#ifndef kcg_copy_struct__23320
#define kcg_copy_struct__23320(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23320)))
#endif /* kcg_copy_struct__23320 */

#ifndef kcg_copy_struct__23330
#define kcg_copy_struct__23330(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23330)))
#endif /* kcg_copy_struct__23330 */

#ifndef kcg_copy_struct__23361
#define kcg_copy_struct__23361(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23361)))
#endif /* kcg_copy_struct__23361 */

#ifndef kcg_copy_struct__23366
#define kcg_copy_struct__23366(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23366)))
#endif /* kcg_copy_struct__23366 */

#ifndef kcg_copy_struct__23376
#define kcg_copy_struct__23376(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23376)))
#endif /* kcg_copy_struct__23376 */

#ifndef kcg_copy_struct__23391
#define kcg_copy_struct__23391(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23391)))
#endif /* kcg_copy_struct__23391 */

#ifndef kcg_copy_struct__23401
#define kcg_copy_struct__23401(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23401)))
#endif /* kcg_copy_struct__23401 */

#ifndef kcg_copy_struct__23414
#define kcg_copy_struct__23414(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23414)))
#endif /* kcg_copy_struct__23414 */

#ifndef kcg_copy_struct__23425
#define kcg_copy_struct__23425(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23425)))
#endif /* kcg_copy_struct__23425 */

#ifndef kcg_copy_struct__23436
#define kcg_copy_struct__23436(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23436)))
#endif /* kcg_copy_struct__23436 */

#ifndef kcg_copy_struct__23447
#define kcg_copy_struct__23447(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23447)))
#endif /* kcg_copy_struct__23447 */

#ifndef kcg_copy_struct__23459
#define kcg_copy_struct__23459(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23459)))
#endif /* kcg_copy_struct__23459 */

#ifndef kcg_copy_struct__23489
#define kcg_copy_struct__23489(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23489)))
#endif /* kcg_copy_struct__23489 */

#ifndef kcg_copy_struct__23497
#define kcg_copy_struct__23497(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23497)))
#endif /* kcg_copy_struct__23497 */

#ifndef kcg_copy_struct__23505
#define kcg_copy_struct__23505(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23505)))
#endif /* kcg_copy_struct__23505 */

#ifndef kcg_copy_struct__23511
#define kcg_copy_struct__23511(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23511)))
#endif /* kcg_copy_struct__23511 */

#ifndef kcg_copy_struct__23526
#define kcg_copy_struct__23526(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23526)))
#endif /* kcg_copy_struct__23526 */

#ifndef kcg_copy_struct__23535
#define kcg_copy_struct__23535(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23535)))
#endif /* kcg_copy_struct__23535 */

#ifndef kcg_copy_struct__23545
#define kcg_copy_struct__23545(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23545)))
#endif /* kcg_copy_struct__23545 */

#ifndef kcg_copy_struct__23555
#define kcg_copy_struct__23555(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23555)))
#endif /* kcg_copy_struct__23555 */

#ifndef kcg_copy_struct__23562
#define kcg_copy_struct__23562(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23562)))
#endif /* kcg_copy_struct__23562 */

#ifndef kcg_copy_struct__23573
#define kcg_copy_struct__23573(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23573)))
#endif /* kcg_copy_struct__23573 */

#ifndef kcg_copy_struct__23578
#define kcg_copy_struct__23578(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23578)))
#endif /* kcg_copy_struct__23578 */

#ifndef kcg_copy_struct__23584
#define kcg_copy_struct__23584(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23584)))
#endif /* kcg_copy_struct__23584 */

#ifndef kcg_copy_struct__23596
#define kcg_copy_struct__23596(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23596)))
#endif /* kcg_copy_struct__23596 */

#ifndef kcg_copy_struct__23614
#define kcg_copy_struct__23614(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23614)))
#endif /* kcg_copy_struct__23614 */

#ifndef kcg_copy_struct__23623
#define kcg_copy_struct__23623(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23623)))
#endif /* kcg_copy_struct__23623 */

#ifndef kcg_copy_struct__23631
#define kcg_copy_struct__23631(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23631)))
#endif /* kcg_copy_struct__23631 */

#ifndef kcg_copy_struct__23686
#define kcg_copy_struct__23686(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23686)))
#endif /* kcg_copy_struct__23686 */

#ifndef kcg_copy_struct__23696
#define kcg_copy_struct__23696(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23696)))
#endif /* kcg_copy_struct__23696 */

#ifndef kcg_copy_struct__23707
#define kcg_copy_struct__23707(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23707)))
#endif /* kcg_copy_struct__23707 */

#ifndef kcg_copy_struct__23713
#define kcg_copy_struct__23713(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23713)))
#endif /* kcg_copy_struct__23713 */

#ifndef kcg_copy_struct__23721
#define kcg_copy_struct__23721(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23721)))
#endif /* kcg_copy_struct__23721 */

#ifndef kcg_copy_struct__23726
#define kcg_copy_struct__23726(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23726)))
#endif /* kcg_copy_struct__23726 */

#ifndef kcg_copy_struct__23737
#define kcg_copy_struct__23737(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23737)))
#endif /* kcg_copy_struct__23737 */

#ifndef kcg_copy_struct__23748
#define kcg_copy_struct__23748(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23748)))
#endif /* kcg_copy_struct__23748 */

#ifndef kcg_copy_struct__23773
#define kcg_copy_struct__23773(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23773)))
#endif /* kcg_copy_struct__23773 */

#ifndef kcg_copy_struct__23784
#define kcg_copy_struct__23784(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23784)))
#endif /* kcg_copy_struct__23784 */

#ifndef kcg_copy_struct__23793
#define kcg_copy_struct__23793(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23793)))
#endif /* kcg_copy_struct__23793 */

#ifndef kcg_copy_struct__23803
#define kcg_copy_struct__23803(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23803)))
#endif /* kcg_copy_struct__23803 */

#ifndef kcg_copy_struct__23813
#define kcg_copy_struct__23813(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23813)))
#endif /* kcg_copy_struct__23813 */

#ifndef kcg_copy_struct__23822
#define kcg_copy_struct__23822(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23822)))
#endif /* kcg_copy_struct__23822 */

#ifndef kcg_copy_struct__23831
#define kcg_copy_struct__23831(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23831)))
#endif /* kcg_copy_struct__23831 */

#ifndef kcg_copy_struct__23843
#define kcg_copy_struct__23843(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23843)))
#endif /* kcg_copy_struct__23843 */

#ifndef kcg_copy_struct__23850
#define kcg_copy_struct__23850(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23850)))
#endif /* kcg_copy_struct__23850 */

#ifndef kcg_copy_struct__23856
#define kcg_copy_struct__23856(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23856)))
#endif /* kcg_copy_struct__23856 */

#ifndef kcg_copy_struct__23882
#define kcg_copy_struct__23882(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23882)))
#endif /* kcg_copy_struct__23882 */

#ifndef kcg_copy_struct__23887
#define kcg_copy_struct__23887(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23887)))
#endif /* kcg_copy_struct__23887 */

#ifndef kcg_copy_struct__23917
#define kcg_copy_struct__23917(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23917)))
#endif /* kcg_copy_struct__23917 */

#ifndef kcg_copy_struct__23928
#define kcg_copy_struct__23928(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23928)))
#endif /* kcg_copy_struct__23928 */

#ifndef kcg_copy_struct__23943
#define kcg_copy_struct__23943(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23943)))
#endif /* kcg_copy_struct__23943 */

#ifndef kcg_copy_struct__23948
#define kcg_copy_struct__23948(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23948)))
#endif /* kcg_copy_struct__23948 */

#ifndef kcg_copy_struct__23954
#define kcg_copy_struct__23954(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23954)))
#endif /* kcg_copy_struct__23954 */

#ifndef kcg_copy_struct__23959
#define kcg_copy_struct__23959(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__23959)))
#endif /* kcg_copy_struct__23959 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__22583
#define kcg_copy_array__22583(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__22583)))
#endif /* kcg_copy_array__22583 */

#ifndef kcg_copy_array_int_4
#define kcg_copy_array_int_4(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4)))
#endif /* kcg_copy_array_int_4 */

#ifndef kcg_copy_array_int_4_32
#define kcg_copy_array_int_4_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_4_32)))
#endif /* kcg_copy_array_int_4_32 */

#ifndef kcg_copy_array_int_128
#define kcg_copy_array_int_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128)))
#endif /* kcg_copy_array_int_128 */

#ifndef kcg_copy_array__22750
#define kcg_copy_array__22750(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__22750)))
#endif /* kcg_copy_array__22750 */

#ifndef kcg_copy_array_int_7
#define kcg_copy_array_int_7(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7)))
#endif /* kcg_copy_array_int_7 */

#ifndef kcg_copy_array_int_7_33
#define kcg_copy_array_int_7_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_7_33)))
#endif /* kcg_copy_array_int_7_33 */

#ifndef kcg_copy_array_int_231
#define kcg_copy_array_int_231(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_231)))
#endif /* kcg_copy_array_int_231 */

#ifndef kcg_copy_array__22812
#define kcg_copy_array__22812(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__22812)))
#endif /* kcg_copy_array__22812 */

#ifndef kcg_copy_array__22815
#define kcg_copy_array__22815(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__22815)))
#endif /* kcg_copy_array__22815 */

#ifndef kcg_copy_array_int_2
#define kcg_copy_array_int_2(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2)))
#endif /* kcg_copy_array_int_2 */

#ifndef kcg_copy_array_int_2_32
#define kcg_copy_array_int_2_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_2_32)))
#endif /* kcg_copy_array_int_2_32 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array__22849
#define kcg_copy_array__22849(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__22849)))
#endif /* kcg_copy_array__22849 */

#ifndef kcg_copy_array__22860
#define kcg_copy_array__22860(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__22860)))
#endif /* kcg_copy_array__22860 */

#ifndef kcg_copy_array__22863
#define kcg_copy_array__22863(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__22863)))
#endif /* kcg_copy_array__22863 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array_int_3_33
#define kcg_copy_array_int_3_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33)))
#endif /* kcg_copy_array_int_3_33 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__22896
#define kcg_copy_array__22896(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__22896)))
#endif /* kcg_copy_array__22896 */

#ifndef kcg_copy_array__22899
#define kcg_copy_array__22899(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__22899)))
#endif /* kcg_copy_array__22899 */

#ifndef kcg_copy_array__22921
#define kcg_copy_array__22921(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__22921)))
#endif /* kcg_copy_array__22921 */

#ifndef kcg_copy_array__22924
#define kcg_copy_array__22924(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__22924)))
#endif /* kcg_copy_array__22924 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array__23089
#define kcg_copy_array__23089(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23089)))
#endif /* kcg_copy_array__23089 */

#ifndef kcg_copy_array__23190
#define kcg_copy_array__23190(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23190)))
#endif /* kcg_copy_array__23190 */

#ifndef kcg_copy_array_int_15
#define kcg_copy_array_int_15(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_15)))
#endif /* kcg_copy_array_int_15 */

#ifndef kcg_copy_array__23232
#define kcg_copy_array__23232(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23232)))
#endif /* kcg_copy_array__23232 */

#ifndef kcg_copy_array__23292
#define kcg_copy_array__23292(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23292)))
#endif /* kcg_copy_array__23292 */

#ifndef kcg_copy_array__23302
#define kcg_copy_array__23302(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23302)))
#endif /* kcg_copy_array__23302 */

#ifndef kcg_copy_array__23317
#define kcg_copy_array__23317(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23317)))
#endif /* kcg_copy_array__23317 */

#ifndef kcg_copy_array__23327
#define kcg_copy_array__23327(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23327)))
#endif /* kcg_copy_array__23327 */

#ifndef kcg_copy_array__23388
#define kcg_copy_array__23388(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23388)))
#endif /* kcg_copy_array__23388 */

#ifndef kcg_copy_array__23398
#define kcg_copy_array__23398(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23398)))
#endif /* kcg_copy_array__23398 */

#ifndef kcg_copy_array__23411
#define kcg_copy_array__23411(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23411)))
#endif /* kcg_copy_array__23411 */

#ifndef kcg_copy_array__23422
#define kcg_copy_array__23422(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23422)))
#endif /* kcg_copy_array__23422 */

#ifndef kcg_copy_array__23433
#define kcg_copy_array__23433(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23433)))
#endif /* kcg_copy_array__23433 */

#ifndef kcg_copy_array__23456
#define kcg_copy_array__23456(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23456)))
#endif /* kcg_copy_array__23456 */

#ifndef kcg_copy_array__23486
#define kcg_copy_array__23486(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23486)))
#endif /* kcg_copy_array__23486 */

#ifndef kcg_copy_array__23542
#define kcg_copy_array__23542(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23542)))
#endif /* kcg_copy_array__23542 */

#ifndef kcg_copy_array__23552
#define kcg_copy_array__23552(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23552)))
#endif /* kcg_copy_array__23552 */

#ifndef kcg_copy_array__23570
#define kcg_copy_array__23570(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23570)))
#endif /* kcg_copy_array__23570 */

#ifndef kcg_copy_array__23593
#define kcg_copy_array__23593(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23593)))
#endif /* kcg_copy_array__23593 */

#ifndef kcg_copy_array__23628
#define kcg_copy_array__23628(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23628)))
#endif /* kcg_copy_array__23628 */

#ifndef kcg_copy_array__23693
#define kcg_copy_array__23693(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23693)))
#endif /* kcg_copy_array__23693 */

#ifndef kcg_copy_array_int_5
#define kcg_copy_array_int_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_5)))
#endif /* kcg_copy_array_int_5 */

#ifndef kcg_copy_array__23718
#define kcg_copy_array__23718(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23718)))
#endif /* kcg_copy_array__23718 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array__23745
#define kcg_copy_array__23745(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23745)))
#endif /* kcg_copy_array__23745 */

#ifndef kcg_copy_array__23781
#define kcg_copy_array__23781(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23781)))
#endif /* kcg_copy_array__23781 */

#ifndef kcg_copy_array__23790
#define kcg_copy_array__23790(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23790)))
#endif /* kcg_copy_array__23790 */

#ifndef kcg_copy_array_int_66
#define kcg_copy_array_int_66(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_66)))
#endif /* kcg_copy_array_int_66 */

#ifndef kcg_copy_array__23810
#define kcg_copy_array__23810(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23810)))
#endif /* kcg_copy_array__23810 */

#ifndef kcg_copy_array__23828
#define kcg_copy_array__23828(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23828)))
#endif /* kcg_copy_array__23828 */

#ifndef kcg_copy_array__23840
#define kcg_copy_array__23840(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23840)))
#endif /* kcg_copy_array__23840 */

#ifndef kcg_copy_array_int_24
#define kcg_copy_array_int_24(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_24)))
#endif /* kcg_copy_array_int_24 */

#ifndef kcg_copy_array__23922
#define kcg_copy_array__23922(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23922)))
#endif /* kcg_copy_array__23922 */

#ifndef kcg_copy_array__23925
#define kcg_copy_array__23925(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23925)))
#endif /* kcg_copy_array__23925 */

#ifndef kcg_copy_array__23934
#define kcg_copy_array__23934(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23934)))
#endif /* kcg_copy_array__23934 */

#ifndef kcg_copy_array_int_33
#define kcg_copy_array_int_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33)))
#endif /* kcg_copy_array_int_33 */

#ifndef kcg_copy_array_int_33_11
#define kcg_copy_array_int_33_11(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33_11)))
#endif /* kcg_copy_array_int_33_11 */

#ifndef kcg_copy_array__23964
#define kcg_copy_array__23964(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23964)))
#endif /* kcg_copy_array__23964 */

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

#ifndef kcg_copy_array__23979
#define kcg_copy_array__23979(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23979)))
#endif /* kcg_copy_array__23979 */

#ifndef kcg_copy_array__23982
#define kcg_copy_array__23982(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23982)))
#endif /* kcg_copy_array__23982 */

#ifndef kcg_copy_array_int_11
#define kcg_copy_array_int_11(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_11)))
#endif /* kcg_copy_array_int_11 */

#ifndef kcg_copy_array__23988
#define kcg_copy_array__23988(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23988)))
#endif /* kcg_copy_array__23988 */

#ifndef kcg_copy_array__23991
#define kcg_copy_array__23991(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__23991)))
#endif /* kcg_copy_array__23991 */

#ifndef kcg_copy_array_int_200
#define kcg_copy_array_int_200(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_200)))
#endif /* kcg_copy_array_int_200 */

#ifndef kcg_copy_array_int_64_32
#define kcg_copy_array_int_64_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64_32)))
#endif /* kcg_copy_array_int_64_32 */

#ifndef kcg_copy_array__24000
#define kcg_copy_array__24000(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24000)))
#endif /* kcg_copy_array__24000 */

#ifndef kcg_copy_array_bool_50
#define kcg_copy_array_bool_50(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_50)))
#endif /* kcg_copy_array_bool_50 */

#ifndef kcg_copy_array_int_50
#define kcg_copy_array_int_50(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_50)))
#endif /* kcg_copy_array_int_50 */

#ifndef kcg_copy_array__24009
#define kcg_copy_array__24009(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24009)))
#endif /* kcg_copy_array__24009 */

#ifndef kcg_copy_array__24012
#define kcg_copy_array__24012(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24012)))
#endif /* kcg_copy_array__24012 */

#ifndef kcg_copy_array__24015
#define kcg_copy_array__24015(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24015)))
#endif /* kcg_copy_array__24015 */

#ifndef kcg_copy_array_int_32_32
#define kcg_copy_array_int_32_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32_32)))
#endif /* kcg_copy_array_int_32_32 */

#ifndef kcg_copy_array__24021
#define kcg_copy_array__24021(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24021)))
#endif /* kcg_copy_array__24021 */

#ifndef kcg_copy_array__24024
#define kcg_copy_array__24024(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24024)))
#endif /* kcg_copy_array__24024 */

#ifndef kcg_copy_array__24027
#define kcg_copy_array__24027(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24027)))
#endif /* kcg_copy_array__24027 */

#ifndef kcg_copy_array__24030
#define kcg_copy_array__24030(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24030)))
#endif /* kcg_copy_array__24030 */

#ifndef kcg_copy_array_int_99_33
#define kcg_copy_array_int_99_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99_33)))
#endif /* kcg_copy_array_int_99_33 */

#ifndef kcg_copy_array__24036
#define kcg_copy_array__24036(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24036)))
#endif /* kcg_copy_array__24036 */

#ifndef kcg_copy_array__24039
#define kcg_copy_array__24039(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24039)))
#endif /* kcg_copy_array__24039 */

#ifndef kcg_copy_array__24042
#define kcg_copy_array__24042(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24042)))
#endif /* kcg_copy_array__24042 */

#ifndef kcg_copy_array__24045
#define kcg_copy_array__24045(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24045)))
#endif /* kcg_copy_array__24045 */

#ifndef kcg_copy_array__24048
#define kcg_copy_array__24048(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24048)))
#endif /* kcg_copy_array__24048 */

#ifndef kcg_copy_array_int_66_33
#define kcg_copy_array_int_66_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_66_33)))
#endif /* kcg_copy_array_int_66_33 */

#ifndef kcg_copy_array__24054
#define kcg_copy_array__24054(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24054)))
#endif /* kcg_copy_array__24054 */

#ifndef kcg_copy_array__24057
#define kcg_copy_array__24057(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24057)))
#endif /* kcg_copy_array__24057 */

#ifndef kcg_copy_array__24060
#define kcg_copy_array__24060(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24060)))
#endif /* kcg_copy_array__24060 */

#ifndef kcg_copy_array__24063
#define kcg_copy_array__24063(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24063)))
#endif /* kcg_copy_array__24063 */

#ifndef kcg_copy_array__24066
#define kcg_copy_array__24066(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24066)))
#endif /* kcg_copy_array__24066 */

#ifndef kcg_copy_array__24069
#define kcg_copy_array__24069(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24069)))
#endif /* kcg_copy_array__24069 */

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

#ifndef kcg_copy_array__24084
#define kcg_copy_array__24084(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24084)))
#endif /* kcg_copy_array__24084 */

#ifndef kcg_copy_array_int_494
#define kcg_copy_array_int_494(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_494)))
#endif /* kcg_copy_array_int_494 */

#ifndef kcg_copy_array__24090
#define kcg_copy_array__24090(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24090)))
#endif /* kcg_copy_array__24090 */

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

#ifndef kcg_copy_array__24120
#define kcg_copy_array__24120(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24120)))
#endif /* kcg_copy_array__24120 */

#ifndef kcg_copy_array_int_3_33_99
#define kcg_copy_array_int_3_33_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3_33_99)))
#endif /* kcg_copy_array_int_3_33_99 */

#ifndef kcg_copy_array_int_395
#define kcg_copy_array_int_395(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_395)))
#endif /* kcg_copy_array_int_395 */

#ifndef kcg_copy_array_int_105
#define kcg_copy_array_int_105(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_105)))
#endif /* kcg_copy_array_int_105 */

#ifndef kcg_copy_array__24132
#define kcg_copy_array__24132(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__24132)))
#endif /* kcg_copy_array__24132 */

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

#ifndef kcg_comp_struct__22557
extern kcg_bool kcg_comp_struct__22557(
  struct__22557 *kcg_c1,
  struct__22557 *kcg_c2);
#endif /* kcg_comp_struct__22557 */

#ifndef kcg_comp_struct__22575
extern kcg_bool kcg_comp_struct__22575(
  struct__22575 *kcg_c1,
  struct__22575 *kcg_c2);
#endif /* kcg_comp_struct__22575 */

#ifndef kcg_comp_struct__22586
extern kcg_bool kcg_comp_struct__22586(
  struct__22586 *kcg_c1,
  struct__22586 *kcg_c2);
#endif /* kcg_comp_struct__22586 */

#ifndef kcg_comp_struct__22591
extern kcg_bool kcg_comp_struct__22591(
  struct__22591 *kcg_c1,
  struct__22591 *kcg_c2);
#endif /* kcg_comp_struct__22591 */

#ifndef kcg_comp_struct__22601
extern kcg_bool kcg_comp_struct__22601(
  struct__22601 *kcg_c1,
  struct__22601 *kcg_c2);
#endif /* kcg_comp_struct__22601 */

#ifndef kcg_comp_struct__22619
extern kcg_bool kcg_comp_struct__22619(
  struct__22619 *kcg_c1,
  struct__22619 *kcg_c2);
#endif /* kcg_comp_struct__22619 */

#ifndef kcg_comp_struct__22629
extern kcg_bool kcg_comp_struct__22629(
  struct__22629 *kcg_c1,
  struct__22629 *kcg_c2);
#endif /* kcg_comp_struct__22629 */

#ifndef kcg_comp_struct__22640
extern kcg_bool kcg_comp_struct__22640(
  struct__22640 *kcg_c1,
  struct__22640 *kcg_c2);
#endif /* kcg_comp_struct__22640 */

#ifndef kcg_comp_struct__22654
extern kcg_bool kcg_comp_struct__22654(
  struct__22654 *kcg_c1,
  struct__22654 *kcg_c2);
#endif /* kcg_comp_struct__22654 */

#ifndef kcg_comp_struct__22663
extern kcg_bool kcg_comp_struct__22663(
  struct__22663 *kcg_c1,
  struct__22663 *kcg_c2);
#endif /* kcg_comp_struct__22663 */

#ifndef kcg_comp_struct__22673
extern kcg_bool kcg_comp_struct__22673(
  struct__22673 *kcg_c1,
  struct__22673 *kcg_c2);
#endif /* kcg_comp_struct__22673 */

#ifndef kcg_comp_struct__22684
extern kcg_bool kcg_comp_struct__22684(
  struct__22684 *kcg_c1,
  struct__22684 *kcg_c2);
#endif /* kcg_comp_struct__22684 */

#ifndef kcg_comp_struct__22694
extern kcg_bool kcg_comp_struct__22694(
  struct__22694 *kcg_c1,
  struct__22694 *kcg_c2);
#endif /* kcg_comp_struct__22694 */

#ifndef kcg_comp_struct__22708
extern kcg_bool kcg_comp_struct__22708(
  struct__22708 *kcg_c1,
  struct__22708 *kcg_c2);
#endif /* kcg_comp_struct__22708 */

#ifndef kcg_comp_struct__22718
extern kcg_bool kcg_comp_struct__22718(
  struct__22718 *kcg_c1,
  struct__22718 *kcg_c2);
#endif /* kcg_comp_struct__22718 */

#ifndef kcg_comp_struct__22725
extern kcg_bool kcg_comp_struct__22725(
  struct__22725 *kcg_c1,
  struct__22725 *kcg_c2);
#endif /* kcg_comp_struct__22725 */

#ifndef kcg_comp_struct__22737
extern kcg_bool kcg_comp_struct__22737(
  struct__22737 *kcg_c1,
  struct__22737 *kcg_c2);
#endif /* kcg_comp_struct__22737 */

#ifndef kcg_comp_struct__22753
extern kcg_bool kcg_comp_struct__22753(
  struct__22753 *kcg_c1,
  struct__22753 *kcg_c2);
#endif /* kcg_comp_struct__22753 */

#ifndef kcg_comp_struct__22780
extern kcg_bool kcg_comp_struct__22780(
  struct__22780 *kcg_c1,
  struct__22780 *kcg_c2);
#endif /* kcg_comp_struct__22780 */

#ifndef kcg_comp_struct__22796
extern kcg_bool kcg_comp_struct__22796(
  struct__22796 *kcg_c1,
  struct__22796 *kcg_c2);
#endif /* kcg_comp_struct__22796 */

#ifndef kcg_comp_struct__22818
extern kcg_bool kcg_comp_struct__22818(
  struct__22818 *kcg_c1,
  struct__22818 *kcg_c2);
#endif /* kcg_comp_struct__22818 */

#ifndef kcg_comp_struct__22838
extern kcg_bool kcg_comp_struct__22838(
  struct__22838 *kcg_c1,
  struct__22838 *kcg_c2);
#endif /* kcg_comp_struct__22838 */

#ifndef kcg_comp_struct__22852
extern kcg_bool kcg_comp_struct__22852(
  struct__22852 *kcg_c1,
  struct__22852 *kcg_c2);
#endif /* kcg_comp_struct__22852 */

#ifndef kcg_comp_struct__22866
extern kcg_bool kcg_comp_struct__22866(
  struct__22866 *kcg_c1,
  struct__22866 *kcg_c2);
#endif /* kcg_comp_struct__22866 */

#ifndef kcg_comp_struct__22884
extern kcg_bool kcg_comp_struct__22884(
  struct__22884 *kcg_c1,
  struct__22884 *kcg_c2);
#endif /* kcg_comp_struct__22884 */

#ifndef kcg_comp_struct__22902
extern kcg_bool kcg_comp_struct__22902(
  struct__22902 *kcg_c1,
  struct__22902 *kcg_c2);
#endif /* kcg_comp_struct__22902 */

#ifndef kcg_comp_struct__22915
extern kcg_bool kcg_comp_struct__22915(
  struct__22915 *kcg_c1,
  struct__22915 *kcg_c2);
#endif /* kcg_comp_struct__22915 */

#ifndef kcg_comp_struct__22927
extern kcg_bool kcg_comp_struct__22927(
  struct__22927 *kcg_c1,
  struct__22927 *kcg_c2);
#endif /* kcg_comp_struct__22927 */

#ifndef kcg_comp_struct__22944
extern kcg_bool kcg_comp_struct__22944(
  struct__22944 *kcg_c1,
  struct__22944 *kcg_c2);
#endif /* kcg_comp_struct__22944 */

#ifndef kcg_comp_struct__22973
extern kcg_bool kcg_comp_struct__22973(
  struct__22973 *kcg_c1,
  struct__22973 *kcg_c2);
#endif /* kcg_comp_struct__22973 */

#ifndef kcg_comp_struct__22991
extern kcg_bool kcg_comp_struct__22991(
  struct__22991 *kcg_c1,
  struct__22991 *kcg_c2);
#endif /* kcg_comp_struct__22991 */

#ifndef kcg_comp_struct__22996
extern kcg_bool kcg_comp_struct__22996(
  struct__22996 *kcg_c1,
  struct__22996 *kcg_c2);
#endif /* kcg_comp_struct__22996 */

#ifndef kcg_comp_struct__23016
extern kcg_bool kcg_comp_struct__23016(
  struct__23016 *kcg_c1,
  struct__23016 *kcg_c2);
#endif /* kcg_comp_struct__23016 */

#ifndef kcg_comp_struct__23021
extern kcg_bool kcg_comp_struct__23021(
  struct__23021 *kcg_c1,
  struct__23021 *kcg_c2);
#endif /* kcg_comp_struct__23021 */

#ifndef kcg_comp_struct__23040
extern kcg_bool kcg_comp_struct__23040(
  struct__23040 *kcg_c1,
  struct__23040 *kcg_c2);
#endif /* kcg_comp_struct__23040 */

#ifndef kcg_comp_struct__23045
extern kcg_bool kcg_comp_struct__23045(
  struct__23045 *kcg_c1,
  struct__23045 *kcg_c2);
#endif /* kcg_comp_struct__23045 */

#ifndef kcg_comp_struct__23050
extern kcg_bool kcg_comp_struct__23050(
  struct__23050 *kcg_c1,
  struct__23050 *kcg_c2);
#endif /* kcg_comp_struct__23050 */

#ifndef kcg_comp_struct__23056
extern kcg_bool kcg_comp_struct__23056(
  struct__23056 *kcg_c1,
  struct__23056 *kcg_c2);
#endif /* kcg_comp_struct__23056 */

#ifndef kcg_comp_struct__23066
extern kcg_bool kcg_comp_struct__23066(
  struct__23066 *kcg_c1,
  struct__23066 *kcg_c2);
#endif /* kcg_comp_struct__23066 */

#ifndef kcg_comp_struct__23080
extern kcg_bool kcg_comp_struct__23080(
  struct__23080 *kcg_c1,
  struct__23080 *kcg_c2);
#endif /* kcg_comp_struct__23080 */

#ifndef kcg_comp_struct__23092
extern kcg_bool kcg_comp_struct__23092(
  struct__23092 *kcg_c1,
  struct__23092 *kcg_c2);
#endif /* kcg_comp_struct__23092 */

#ifndef kcg_comp_struct__23099
extern kcg_bool kcg_comp_struct__23099(
  struct__23099 *kcg_c1,
  struct__23099 *kcg_c2);
#endif /* kcg_comp_struct__23099 */

#ifndef kcg_comp_struct__23105
extern kcg_bool kcg_comp_struct__23105(
  struct__23105 *kcg_c1,
  struct__23105 *kcg_c2);
#endif /* kcg_comp_struct__23105 */

#ifndef kcg_comp_struct__23115
extern kcg_bool kcg_comp_struct__23115(
  struct__23115 *kcg_c1,
  struct__23115 *kcg_c2);
#endif /* kcg_comp_struct__23115 */

#ifndef kcg_comp_struct__23133
extern kcg_bool kcg_comp_struct__23133(
  struct__23133 *kcg_c1,
  struct__23133 *kcg_c2);
#endif /* kcg_comp_struct__23133 */

#ifndef kcg_comp_struct__23139
extern kcg_bool kcg_comp_struct__23139(
  struct__23139 *kcg_c1,
  struct__23139 *kcg_c2);
#endif /* kcg_comp_struct__23139 */

#ifndef kcg_comp_struct__23150
extern kcg_bool kcg_comp_struct__23150(
  struct__23150 *kcg_c1,
  struct__23150 *kcg_c2);
#endif /* kcg_comp_struct__23150 */

#ifndef kcg_comp_struct__23167
extern kcg_bool kcg_comp_struct__23167(
  struct__23167 *kcg_c1,
  struct__23167 *kcg_c2);
#endif /* kcg_comp_struct__23167 */

#ifndef kcg_comp_struct__23173
extern kcg_bool kcg_comp_struct__23173(
  struct__23173 *kcg_c1,
  struct__23173 *kcg_c2);
#endif /* kcg_comp_struct__23173 */

#ifndef kcg_comp_struct__23185
extern kcg_bool kcg_comp_struct__23185(
  struct__23185 *kcg_c1,
  struct__23185 *kcg_c2);
#endif /* kcg_comp_struct__23185 */

#ifndef kcg_comp_struct__23193
extern kcg_bool kcg_comp_struct__23193(
  struct__23193 *kcg_c1,
  struct__23193 *kcg_c2);
#endif /* kcg_comp_struct__23193 */

#ifndef kcg_comp_struct__23209
extern kcg_bool kcg_comp_struct__23209(
  struct__23209 *kcg_c1,
  struct__23209 *kcg_c2);
#endif /* kcg_comp_struct__23209 */

#ifndef kcg_comp_struct__23214
extern kcg_bool kcg_comp_struct__23214(
  struct__23214 *kcg_c1,
  struct__23214 *kcg_c2);
#endif /* kcg_comp_struct__23214 */

#ifndef kcg_comp_struct__23219
extern kcg_bool kcg_comp_struct__23219(
  struct__23219 *kcg_c1,
  struct__23219 *kcg_c2);
#endif /* kcg_comp_struct__23219 */

#ifndef kcg_comp_struct__23227
extern kcg_bool kcg_comp_struct__23227(
  struct__23227 *kcg_c1,
  struct__23227 *kcg_c2);
#endif /* kcg_comp_struct__23227 */

#ifndef kcg_comp_struct__23235
extern kcg_bool kcg_comp_struct__23235(
  struct__23235 *kcg_c1,
  struct__23235 *kcg_c2);
#endif /* kcg_comp_struct__23235 */

#ifndef kcg_comp_struct__23241
extern kcg_bool kcg_comp_struct__23241(
  struct__23241 *kcg_c1,
  struct__23241 *kcg_c2);
#endif /* kcg_comp_struct__23241 */

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

#ifndef kcg_comp_struct__23264
extern kcg_bool kcg_comp_struct__23264(
  struct__23264 *kcg_c1,
  struct__23264 *kcg_c2);
#endif /* kcg_comp_struct__23264 */

#ifndef kcg_comp_struct__23276
extern kcg_bool kcg_comp_struct__23276(
  struct__23276 *kcg_c1,
  struct__23276 *kcg_c2);
#endif /* kcg_comp_struct__23276 */

#ifndef kcg_comp_struct__23286
extern kcg_bool kcg_comp_struct__23286(
  struct__23286 *kcg_c1,
  struct__23286 *kcg_c2);
#endif /* kcg_comp_struct__23286 */

#ifndef kcg_comp_struct__23295
extern kcg_bool kcg_comp_struct__23295(
  struct__23295 *kcg_c1,
  struct__23295 *kcg_c2);
#endif /* kcg_comp_struct__23295 */

#ifndef kcg_comp_struct__23305
extern kcg_bool kcg_comp_struct__23305(
  struct__23305 *kcg_c1,
  struct__23305 *kcg_c2);
#endif /* kcg_comp_struct__23305 */

#ifndef kcg_comp_struct__23320
extern kcg_bool kcg_comp_struct__23320(
  struct__23320 *kcg_c1,
  struct__23320 *kcg_c2);
#endif /* kcg_comp_struct__23320 */

#ifndef kcg_comp_struct__23330
extern kcg_bool kcg_comp_struct__23330(
  struct__23330 *kcg_c1,
  struct__23330 *kcg_c2);
#endif /* kcg_comp_struct__23330 */

#ifndef kcg_comp_struct__23361
extern kcg_bool kcg_comp_struct__23361(
  struct__23361 *kcg_c1,
  struct__23361 *kcg_c2);
#endif /* kcg_comp_struct__23361 */

#ifndef kcg_comp_struct__23366
extern kcg_bool kcg_comp_struct__23366(
  struct__23366 *kcg_c1,
  struct__23366 *kcg_c2);
#endif /* kcg_comp_struct__23366 */

#ifndef kcg_comp_struct__23376
extern kcg_bool kcg_comp_struct__23376(
  struct__23376 *kcg_c1,
  struct__23376 *kcg_c2);
#endif /* kcg_comp_struct__23376 */

#ifndef kcg_comp_struct__23391
extern kcg_bool kcg_comp_struct__23391(
  struct__23391 *kcg_c1,
  struct__23391 *kcg_c2);
#endif /* kcg_comp_struct__23391 */

#ifndef kcg_comp_struct__23401
extern kcg_bool kcg_comp_struct__23401(
  struct__23401 *kcg_c1,
  struct__23401 *kcg_c2);
#endif /* kcg_comp_struct__23401 */

#ifndef kcg_comp_struct__23414
extern kcg_bool kcg_comp_struct__23414(
  struct__23414 *kcg_c1,
  struct__23414 *kcg_c2);
#endif /* kcg_comp_struct__23414 */

#ifndef kcg_comp_struct__23425
extern kcg_bool kcg_comp_struct__23425(
  struct__23425 *kcg_c1,
  struct__23425 *kcg_c2);
#endif /* kcg_comp_struct__23425 */

#ifndef kcg_comp_struct__23436
extern kcg_bool kcg_comp_struct__23436(
  struct__23436 *kcg_c1,
  struct__23436 *kcg_c2);
#endif /* kcg_comp_struct__23436 */

#ifndef kcg_comp_struct__23447
extern kcg_bool kcg_comp_struct__23447(
  struct__23447 *kcg_c1,
  struct__23447 *kcg_c2);
#endif /* kcg_comp_struct__23447 */

#ifndef kcg_comp_struct__23459
extern kcg_bool kcg_comp_struct__23459(
  struct__23459 *kcg_c1,
  struct__23459 *kcg_c2);
#endif /* kcg_comp_struct__23459 */

#ifndef kcg_comp_struct__23489
extern kcg_bool kcg_comp_struct__23489(
  struct__23489 *kcg_c1,
  struct__23489 *kcg_c2);
#endif /* kcg_comp_struct__23489 */

#ifndef kcg_comp_struct__23497
extern kcg_bool kcg_comp_struct__23497(
  struct__23497 *kcg_c1,
  struct__23497 *kcg_c2);
#endif /* kcg_comp_struct__23497 */

#ifndef kcg_comp_struct__23505
extern kcg_bool kcg_comp_struct__23505(
  struct__23505 *kcg_c1,
  struct__23505 *kcg_c2);
#endif /* kcg_comp_struct__23505 */

#ifndef kcg_comp_struct__23511
extern kcg_bool kcg_comp_struct__23511(
  struct__23511 *kcg_c1,
  struct__23511 *kcg_c2);
#endif /* kcg_comp_struct__23511 */

#ifndef kcg_comp_struct__23526
extern kcg_bool kcg_comp_struct__23526(
  struct__23526 *kcg_c1,
  struct__23526 *kcg_c2);
#endif /* kcg_comp_struct__23526 */

#ifndef kcg_comp_struct__23535
extern kcg_bool kcg_comp_struct__23535(
  struct__23535 *kcg_c1,
  struct__23535 *kcg_c2);
#endif /* kcg_comp_struct__23535 */

#ifndef kcg_comp_struct__23545
extern kcg_bool kcg_comp_struct__23545(
  struct__23545 *kcg_c1,
  struct__23545 *kcg_c2);
#endif /* kcg_comp_struct__23545 */

#ifndef kcg_comp_struct__23555
extern kcg_bool kcg_comp_struct__23555(
  struct__23555 *kcg_c1,
  struct__23555 *kcg_c2);
#endif /* kcg_comp_struct__23555 */

#ifndef kcg_comp_struct__23562
extern kcg_bool kcg_comp_struct__23562(
  struct__23562 *kcg_c1,
  struct__23562 *kcg_c2);
#endif /* kcg_comp_struct__23562 */

#ifndef kcg_comp_struct__23573
extern kcg_bool kcg_comp_struct__23573(
  struct__23573 *kcg_c1,
  struct__23573 *kcg_c2);
#endif /* kcg_comp_struct__23573 */

#ifndef kcg_comp_struct__23578
extern kcg_bool kcg_comp_struct__23578(
  struct__23578 *kcg_c1,
  struct__23578 *kcg_c2);
#endif /* kcg_comp_struct__23578 */

#ifndef kcg_comp_struct__23584
extern kcg_bool kcg_comp_struct__23584(
  struct__23584 *kcg_c1,
  struct__23584 *kcg_c2);
#endif /* kcg_comp_struct__23584 */

#ifndef kcg_comp_struct__23596
extern kcg_bool kcg_comp_struct__23596(
  struct__23596 *kcg_c1,
  struct__23596 *kcg_c2);
#endif /* kcg_comp_struct__23596 */

#ifndef kcg_comp_struct__23614
extern kcg_bool kcg_comp_struct__23614(
  struct__23614 *kcg_c1,
  struct__23614 *kcg_c2);
#endif /* kcg_comp_struct__23614 */

#ifndef kcg_comp_struct__23623
extern kcg_bool kcg_comp_struct__23623(
  struct__23623 *kcg_c1,
  struct__23623 *kcg_c2);
#endif /* kcg_comp_struct__23623 */

#ifndef kcg_comp_struct__23631
extern kcg_bool kcg_comp_struct__23631(
  struct__23631 *kcg_c1,
  struct__23631 *kcg_c2);
#endif /* kcg_comp_struct__23631 */

#ifndef kcg_comp_struct__23686
extern kcg_bool kcg_comp_struct__23686(
  struct__23686 *kcg_c1,
  struct__23686 *kcg_c2);
#endif /* kcg_comp_struct__23686 */

#ifndef kcg_comp_struct__23696
extern kcg_bool kcg_comp_struct__23696(
  struct__23696 *kcg_c1,
  struct__23696 *kcg_c2);
#endif /* kcg_comp_struct__23696 */

#ifndef kcg_comp_struct__23707
extern kcg_bool kcg_comp_struct__23707(
  struct__23707 *kcg_c1,
  struct__23707 *kcg_c2);
#endif /* kcg_comp_struct__23707 */

#ifndef kcg_comp_struct__23713
extern kcg_bool kcg_comp_struct__23713(
  struct__23713 *kcg_c1,
  struct__23713 *kcg_c2);
#endif /* kcg_comp_struct__23713 */

#ifndef kcg_comp_struct__23721
extern kcg_bool kcg_comp_struct__23721(
  struct__23721 *kcg_c1,
  struct__23721 *kcg_c2);
#endif /* kcg_comp_struct__23721 */

#ifndef kcg_comp_struct__23726
extern kcg_bool kcg_comp_struct__23726(
  struct__23726 *kcg_c1,
  struct__23726 *kcg_c2);
#endif /* kcg_comp_struct__23726 */

#ifndef kcg_comp_struct__23737
extern kcg_bool kcg_comp_struct__23737(
  struct__23737 *kcg_c1,
  struct__23737 *kcg_c2);
#endif /* kcg_comp_struct__23737 */

#ifndef kcg_comp_struct__23748
extern kcg_bool kcg_comp_struct__23748(
  struct__23748 *kcg_c1,
  struct__23748 *kcg_c2);
#endif /* kcg_comp_struct__23748 */

#ifndef kcg_comp_struct__23773
extern kcg_bool kcg_comp_struct__23773(
  struct__23773 *kcg_c1,
  struct__23773 *kcg_c2);
#endif /* kcg_comp_struct__23773 */

#ifndef kcg_comp_struct__23784
extern kcg_bool kcg_comp_struct__23784(
  struct__23784 *kcg_c1,
  struct__23784 *kcg_c2);
#endif /* kcg_comp_struct__23784 */

#ifndef kcg_comp_struct__23793
extern kcg_bool kcg_comp_struct__23793(
  struct__23793 *kcg_c1,
  struct__23793 *kcg_c2);
#endif /* kcg_comp_struct__23793 */

#ifndef kcg_comp_struct__23803
extern kcg_bool kcg_comp_struct__23803(
  struct__23803 *kcg_c1,
  struct__23803 *kcg_c2);
#endif /* kcg_comp_struct__23803 */

#ifndef kcg_comp_struct__23813
extern kcg_bool kcg_comp_struct__23813(
  struct__23813 *kcg_c1,
  struct__23813 *kcg_c2);
#endif /* kcg_comp_struct__23813 */

#ifndef kcg_comp_struct__23822
extern kcg_bool kcg_comp_struct__23822(
  struct__23822 *kcg_c1,
  struct__23822 *kcg_c2);
#endif /* kcg_comp_struct__23822 */

#ifndef kcg_comp_struct__23831
extern kcg_bool kcg_comp_struct__23831(
  struct__23831 *kcg_c1,
  struct__23831 *kcg_c2);
#endif /* kcg_comp_struct__23831 */

#ifndef kcg_comp_struct__23843
extern kcg_bool kcg_comp_struct__23843(
  struct__23843 *kcg_c1,
  struct__23843 *kcg_c2);
#endif /* kcg_comp_struct__23843 */

#ifndef kcg_comp_struct__23850
extern kcg_bool kcg_comp_struct__23850(
  struct__23850 *kcg_c1,
  struct__23850 *kcg_c2);
#endif /* kcg_comp_struct__23850 */

#ifndef kcg_comp_struct__23856
extern kcg_bool kcg_comp_struct__23856(
  struct__23856 *kcg_c1,
  struct__23856 *kcg_c2);
#endif /* kcg_comp_struct__23856 */

#ifndef kcg_comp_struct__23882
extern kcg_bool kcg_comp_struct__23882(
  struct__23882 *kcg_c1,
  struct__23882 *kcg_c2);
#endif /* kcg_comp_struct__23882 */

#ifndef kcg_comp_struct__23887
extern kcg_bool kcg_comp_struct__23887(
  struct__23887 *kcg_c1,
  struct__23887 *kcg_c2);
#endif /* kcg_comp_struct__23887 */

#ifndef kcg_comp_struct__23917
extern kcg_bool kcg_comp_struct__23917(
  struct__23917 *kcg_c1,
  struct__23917 *kcg_c2);
#endif /* kcg_comp_struct__23917 */

#ifndef kcg_comp_struct__23928
extern kcg_bool kcg_comp_struct__23928(
  struct__23928 *kcg_c1,
  struct__23928 *kcg_c2);
#endif /* kcg_comp_struct__23928 */

#ifndef kcg_comp_struct__23943
extern kcg_bool kcg_comp_struct__23943(
  struct__23943 *kcg_c1,
  struct__23943 *kcg_c2);
#endif /* kcg_comp_struct__23943 */

#ifndef kcg_comp_struct__23948
extern kcg_bool kcg_comp_struct__23948(
  struct__23948 *kcg_c1,
  struct__23948 *kcg_c2);
#endif /* kcg_comp_struct__23948 */

#ifndef kcg_comp_struct__23954
extern kcg_bool kcg_comp_struct__23954(
  struct__23954 *kcg_c1,
  struct__23954 *kcg_c2);
#endif /* kcg_comp_struct__23954 */

#ifndef kcg_comp_struct__23959
extern kcg_bool kcg_comp_struct__23959(
  struct__23959 *kcg_c1,
  struct__23959 *kcg_c2);
#endif /* kcg_comp_struct__23959 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__22583
extern kcg_bool kcg_comp_array__22583(
  array__22583 *kcg_c1,
  array__22583 *kcg_c2);
#endif /* kcg_comp_array__22583 */

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

#ifndef kcg_comp_array__22750
extern kcg_bool kcg_comp_array__22750(
  array__22750 *kcg_c1,
  array__22750 *kcg_c2);
#endif /* kcg_comp_array__22750 */

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

#ifndef kcg_comp_array__22812
extern kcg_bool kcg_comp_array__22812(
  array__22812 *kcg_c1,
  array__22812 *kcg_c2);
#endif /* kcg_comp_array__22812 */

#ifndef kcg_comp_array__22815
extern kcg_bool kcg_comp_array__22815(
  array__22815 *kcg_c1,
  array__22815 *kcg_c2);
#endif /* kcg_comp_array__22815 */

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

#ifndef kcg_comp_array__22849
extern kcg_bool kcg_comp_array__22849(
  array__22849 *kcg_c1,
  array__22849 *kcg_c2);
#endif /* kcg_comp_array__22849 */

#ifndef kcg_comp_array__22860
extern kcg_bool kcg_comp_array__22860(
  array__22860 *kcg_c1,
  array__22860 *kcg_c2);
#endif /* kcg_comp_array__22860 */

#ifndef kcg_comp_array__22863
extern kcg_bool kcg_comp_array__22863(
  array__22863 *kcg_c1,
  array__22863 *kcg_c2);
#endif /* kcg_comp_array__22863 */

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

#ifndef kcg_comp_array__22921
extern kcg_bool kcg_comp_array__22921(
  array__22921 *kcg_c1,
  array__22921 *kcg_c2);
#endif /* kcg_comp_array__22921 */

#ifndef kcg_comp_array__22924
extern kcg_bool kcg_comp_array__22924(
  array__22924 *kcg_c1,
  array__22924 *kcg_c2);
#endif /* kcg_comp_array__22924 */

#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */

#ifndef kcg_comp_array__23089
extern kcg_bool kcg_comp_array__23089(
  array__23089 *kcg_c1,
  array__23089 *kcg_c2);
#endif /* kcg_comp_array__23089 */

#ifndef kcg_comp_array__23190
extern kcg_bool kcg_comp_array__23190(
  array__23190 *kcg_c1,
  array__23190 *kcg_c2);
#endif /* kcg_comp_array__23190 */

#ifndef kcg_comp_array_int_15
extern kcg_bool kcg_comp_array_int_15(
  array_int_15 *kcg_c1,
  array_int_15 *kcg_c2);
#endif /* kcg_comp_array_int_15 */

#ifndef kcg_comp_array__23232
extern kcg_bool kcg_comp_array__23232(
  array__23232 *kcg_c1,
  array__23232 *kcg_c2);
#endif /* kcg_comp_array__23232 */

#ifndef kcg_comp_array__23292
extern kcg_bool kcg_comp_array__23292(
  array__23292 *kcg_c1,
  array__23292 *kcg_c2);
#endif /* kcg_comp_array__23292 */

#ifndef kcg_comp_array__23302
extern kcg_bool kcg_comp_array__23302(
  array__23302 *kcg_c1,
  array__23302 *kcg_c2);
#endif /* kcg_comp_array__23302 */

#ifndef kcg_comp_array__23317
extern kcg_bool kcg_comp_array__23317(
  array__23317 *kcg_c1,
  array__23317 *kcg_c2);
#endif /* kcg_comp_array__23317 */

#ifndef kcg_comp_array__23327
extern kcg_bool kcg_comp_array__23327(
  array__23327 *kcg_c1,
  array__23327 *kcg_c2);
#endif /* kcg_comp_array__23327 */

#ifndef kcg_comp_array__23388
extern kcg_bool kcg_comp_array__23388(
  array__23388 *kcg_c1,
  array__23388 *kcg_c2);
#endif /* kcg_comp_array__23388 */

#ifndef kcg_comp_array__23398
extern kcg_bool kcg_comp_array__23398(
  array__23398 *kcg_c1,
  array__23398 *kcg_c2);
#endif /* kcg_comp_array__23398 */

#ifndef kcg_comp_array__23411
extern kcg_bool kcg_comp_array__23411(
  array__23411 *kcg_c1,
  array__23411 *kcg_c2);
#endif /* kcg_comp_array__23411 */

#ifndef kcg_comp_array__23422
extern kcg_bool kcg_comp_array__23422(
  array__23422 *kcg_c1,
  array__23422 *kcg_c2);
#endif /* kcg_comp_array__23422 */

#ifndef kcg_comp_array__23433
extern kcg_bool kcg_comp_array__23433(
  array__23433 *kcg_c1,
  array__23433 *kcg_c2);
#endif /* kcg_comp_array__23433 */

#ifndef kcg_comp_array__23456
extern kcg_bool kcg_comp_array__23456(
  array__23456 *kcg_c1,
  array__23456 *kcg_c2);
#endif /* kcg_comp_array__23456 */

#ifndef kcg_comp_array__23486
extern kcg_bool kcg_comp_array__23486(
  array__23486 *kcg_c1,
  array__23486 *kcg_c2);
#endif /* kcg_comp_array__23486 */

#ifndef kcg_comp_array__23542
extern kcg_bool kcg_comp_array__23542(
  array__23542 *kcg_c1,
  array__23542 *kcg_c2);
#endif /* kcg_comp_array__23542 */

#ifndef kcg_comp_array__23552
extern kcg_bool kcg_comp_array__23552(
  array__23552 *kcg_c1,
  array__23552 *kcg_c2);
#endif /* kcg_comp_array__23552 */

#ifndef kcg_comp_array__23570
extern kcg_bool kcg_comp_array__23570(
  array__23570 *kcg_c1,
  array__23570 *kcg_c2);
#endif /* kcg_comp_array__23570 */

#ifndef kcg_comp_array__23593
extern kcg_bool kcg_comp_array__23593(
  array__23593 *kcg_c1,
  array__23593 *kcg_c2);
#endif /* kcg_comp_array__23593 */

#ifndef kcg_comp_array__23628
extern kcg_bool kcg_comp_array__23628(
  array__23628 *kcg_c1,
  array__23628 *kcg_c2);
#endif /* kcg_comp_array__23628 */

#ifndef kcg_comp_array__23693
extern kcg_bool kcg_comp_array__23693(
  array__23693 *kcg_c1,
  array__23693 *kcg_c2);
#endif /* kcg_comp_array__23693 */

#ifndef kcg_comp_array_int_5
extern kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2);
#endif /* kcg_comp_array_int_5 */

#ifndef kcg_comp_array__23718
extern kcg_bool kcg_comp_array__23718(
  array__23718 *kcg_c1,
  array__23718 *kcg_c2);
#endif /* kcg_comp_array__23718 */

#ifndef kcg_comp_array_int_6
extern kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2);
#endif /* kcg_comp_array_int_6 */

#ifndef kcg_comp_array__23745
extern kcg_bool kcg_comp_array__23745(
  array__23745 *kcg_c1,
  array__23745 *kcg_c2);
#endif /* kcg_comp_array__23745 */

#ifndef kcg_comp_array__23781
extern kcg_bool kcg_comp_array__23781(
  array__23781 *kcg_c1,
  array__23781 *kcg_c2);
#endif /* kcg_comp_array__23781 */

#ifndef kcg_comp_array__23790
extern kcg_bool kcg_comp_array__23790(
  array__23790 *kcg_c1,
  array__23790 *kcg_c2);
#endif /* kcg_comp_array__23790 */

#ifndef kcg_comp_array_int_66
extern kcg_bool kcg_comp_array_int_66(
  array_int_66 *kcg_c1,
  array_int_66 *kcg_c2);
#endif /* kcg_comp_array_int_66 */

#ifndef kcg_comp_array__23810
extern kcg_bool kcg_comp_array__23810(
  array__23810 *kcg_c1,
  array__23810 *kcg_c2);
#endif /* kcg_comp_array__23810 */

#ifndef kcg_comp_array__23828
extern kcg_bool kcg_comp_array__23828(
  array__23828 *kcg_c1,
  array__23828 *kcg_c2);
#endif /* kcg_comp_array__23828 */

#ifndef kcg_comp_array__23840
extern kcg_bool kcg_comp_array__23840(
  array__23840 *kcg_c1,
  array__23840 *kcg_c2);
#endif /* kcg_comp_array__23840 */

#ifndef kcg_comp_array_int_24
extern kcg_bool kcg_comp_array_int_24(
  array_int_24 *kcg_c1,
  array_int_24 *kcg_c2);
#endif /* kcg_comp_array_int_24 */

#ifndef kcg_comp_array__23922
extern kcg_bool kcg_comp_array__23922(
  array__23922 *kcg_c1,
  array__23922 *kcg_c2);
#endif /* kcg_comp_array__23922 */

#ifndef kcg_comp_array__23925
extern kcg_bool kcg_comp_array__23925(
  array__23925 *kcg_c1,
  array__23925 *kcg_c2);
#endif /* kcg_comp_array__23925 */

#ifndef kcg_comp_array__23934
extern kcg_bool kcg_comp_array__23934(
  array__23934 *kcg_c1,
  array__23934 *kcg_c2);
#endif /* kcg_comp_array__23934 */

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

#ifndef kcg_comp_array__23964
extern kcg_bool kcg_comp_array__23964(
  array__23964 *kcg_c1,
  array__23964 *kcg_c2);
#endif /* kcg_comp_array__23964 */

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

#ifndef kcg_comp_array__23979
extern kcg_bool kcg_comp_array__23979(
  array__23979 *kcg_c1,
  array__23979 *kcg_c2);
#endif /* kcg_comp_array__23979 */

#ifndef kcg_comp_array__23982
extern kcg_bool kcg_comp_array__23982(
  array__23982 *kcg_c1,
  array__23982 *kcg_c2);
#endif /* kcg_comp_array__23982 */

#ifndef kcg_comp_array_int_11
extern kcg_bool kcg_comp_array_int_11(
  array_int_11 *kcg_c1,
  array_int_11 *kcg_c2);
#endif /* kcg_comp_array_int_11 */

#ifndef kcg_comp_array__23988
extern kcg_bool kcg_comp_array__23988(
  array__23988 *kcg_c1,
  array__23988 *kcg_c2);
#endif /* kcg_comp_array__23988 */

#ifndef kcg_comp_array__23991
extern kcg_bool kcg_comp_array__23991(
  array__23991 *kcg_c1,
  array__23991 *kcg_c2);
#endif /* kcg_comp_array__23991 */

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

#ifndef kcg_comp_array__24000
extern kcg_bool kcg_comp_array__24000(
  array__24000 *kcg_c1,
  array__24000 *kcg_c2);
#endif /* kcg_comp_array__24000 */

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

#ifndef kcg_comp_array__24009
extern kcg_bool kcg_comp_array__24009(
  array__24009 *kcg_c1,
  array__24009 *kcg_c2);
#endif /* kcg_comp_array__24009 */

#ifndef kcg_comp_array__24012
extern kcg_bool kcg_comp_array__24012(
  array__24012 *kcg_c1,
  array__24012 *kcg_c2);
#endif /* kcg_comp_array__24012 */

#ifndef kcg_comp_array__24015
extern kcg_bool kcg_comp_array__24015(
  array__24015 *kcg_c1,
  array__24015 *kcg_c2);
#endif /* kcg_comp_array__24015 */

#ifndef kcg_comp_array_int_32_32
extern kcg_bool kcg_comp_array_int_32_32(
  array_int_32_32 *kcg_c1,
  array_int_32_32 *kcg_c2);
#endif /* kcg_comp_array_int_32_32 */

#ifndef kcg_comp_array__24021
extern kcg_bool kcg_comp_array__24021(
  array__24021 *kcg_c1,
  array__24021 *kcg_c2);
#endif /* kcg_comp_array__24021 */

#ifndef kcg_comp_array__24024
extern kcg_bool kcg_comp_array__24024(
  array__24024 *kcg_c1,
  array__24024 *kcg_c2);
#endif /* kcg_comp_array__24024 */

#ifndef kcg_comp_array__24027
extern kcg_bool kcg_comp_array__24027(
  array__24027 *kcg_c1,
  array__24027 *kcg_c2);
#endif /* kcg_comp_array__24027 */

#ifndef kcg_comp_array__24030
extern kcg_bool kcg_comp_array__24030(
  array__24030 *kcg_c1,
  array__24030 *kcg_c2);
#endif /* kcg_comp_array__24030 */

#ifndef kcg_comp_array_int_99_33
extern kcg_bool kcg_comp_array_int_99_33(
  array_int_99_33 *kcg_c1,
  array_int_99_33 *kcg_c2);
#endif /* kcg_comp_array_int_99_33 */

#ifndef kcg_comp_array__24036
extern kcg_bool kcg_comp_array__24036(
  array__24036 *kcg_c1,
  array__24036 *kcg_c2);
#endif /* kcg_comp_array__24036 */

#ifndef kcg_comp_array__24039
extern kcg_bool kcg_comp_array__24039(
  array__24039 *kcg_c1,
  array__24039 *kcg_c2);
#endif /* kcg_comp_array__24039 */

#ifndef kcg_comp_array__24042
extern kcg_bool kcg_comp_array__24042(
  array__24042 *kcg_c1,
  array__24042 *kcg_c2);
#endif /* kcg_comp_array__24042 */

#ifndef kcg_comp_array__24045
extern kcg_bool kcg_comp_array__24045(
  array__24045 *kcg_c1,
  array__24045 *kcg_c2);
#endif /* kcg_comp_array__24045 */

#ifndef kcg_comp_array__24048
extern kcg_bool kcg_comp_array__24048(
  array__24048 *kcg_c1,
  array__24048 *kcg_c2);
#endif /* kcg_comp_array__24048 */

#ifndef kcg_comp_array_int_66_33
extern kcg_bool kcg_comp_array_int_66_33(
  array_int_66_33 *kcg_c1,
  array_int_66_33 *kcg_c2);
#endif /* kcg_comp_array_int_66_33 */

#ifndef kcg_comp_array__24054
extern kcg_bool kcg_comp_array__24054(
  array__24054 *kcg_c1,
  array__24054 *kcg_c2);
#endif /* kcg_comp_array__24054 */

#ifndef kcg_comp_array__24057
extern kcg_bool kcg_comp_array__24057(
  array__24057 *kcg_c1,
  array__24057 *kcg_c2);
#endif /* kcg_comp_array__24057 */

#ifndef kcg_comp_array__24060
extern kcg_bool kcg_comp_array__24060(
  array__24060 *kcg_c1,
  array__24060 *kcg_c2);
#endif /* kcg_comp_array__24060 */

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

#ifndef kcg_comp_array__24069
extern kcg_bool kcg_comp_array__24069(
  array__24069 *kcg_c1,
  array__24069 *kcg_c2);
#endif /* kcg_comp_array__24069 */

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

#ifndef kcg_comp_array__24084
extern kcg_bool kcg_comp_array__24084(
  array__24084 *kcg_c1,
  array__24084 *kcg_c2);
#endif /* kcg_comp_array__24084 */

#ifndef kcg_comp_array_int_494
extern kcg_bool kcg_comp_array_int_494(
  array_int_494 *kcg_c1,
  array_int_494 *kcg_c2);
#endif /* kcg_comp_array_int_494 */

#ifndef kcg_comp_array__24090
extern kcg_bool kcg_comp_array__24090(
  array__24090 *kcg_c1,
  array__24090 *kcg_c2);
#endif /* kcg_comp_array__24090 */

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

#ifndef kcg_comp_array__24120
extern kcg_bool kcg_comp_array__24120(
  array__24120 *kcg_c1,
  array__24120 *kcg_c2);
#endif /* kcg_comp_array__24120 */

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

#ifndef kcg_comp_array__24132
extern kcg_bool kcg_comp_array__24132(
  array__24132 *kcg_c1,
  array__24132 *kcg_c2);
#endif /* kcg_comp_array__24132 */

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

#define kcg_comp_SSP_matrix_t_TA_MRSP kcg_comp_array__23925

#define kcg_copy_SSP_matrix_t_TA_MRSP kcg_copy_array__23925

#define kcg_comp_SSP_cat_t_TA_MRSP kcg_comp_array__23922

#define kcg_copy_SSP_cat_t_TA_MRSP kcg_copy_array__23922

#define kcg_comp_SSP_Mark_ValidSSPsection_TA_MRSP kcg_comp_struct__23943

#define kcg_copy_SSP_Mark_ValidSSPsection_TA_MRSP kcg_copy_struct__23943

#define kcg_comp_SSP_relevant_target_t_TA_MRSP kcg_comp_struct__23954

#define kcg_copy_SSP_relevant_target_t_TA_MRSP kcg_copy_struct__23954

#define kcg_comp_SSP_section_t_TA_MRSP kcg_comp_struct__23917

#define kcg_copy_SSP_section_t_TA_MRSP kcg_copy_struct__23917

#define kcg_comp_SSP_valid_section_t_TA_MRSP kcg_comp_struct__23948

#define kcg_copy_SSP_valid_section_t_TA_MRSP kcg_copy_struct__23948

#define kcg_comp_SSP_t_list_t_TA_MRSP kcg_comp_array__23934

#define kcg_copy_SSP_t_list_t_TA_MRSP kcg_copy_array__23934

#define kcg_comp_SSP_t_indexed_matrix_element_TA_MRSP kcg_comp_struct__23928

#define kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP kcg_copy_struct__23928

#define kcg_comp_SSP_t_indexed_targets_list_t_TA_MRSP kcg_comp_array__23964

#define kcg_copy_SSP_t_indexed_targets_list_t_TA_MRSP kcg_copy_array__23964

#define kcg_comp_SSP_t_matrix_t_TA_MRSP kcg_comp_array_int_33_11

#define kcg_copy_SSP_t_matrix_t_TA_MRSP kcg_copy_array_int_33_11

#define kcg_comp_SSP_t_cat_t_TA_MRSP kcg_comp_array_int_33

#define kcg_copy_SSP_t_cat_t_TA_MRSP kcg_copy_array_int_33

#define kcg_comp_SSP_t_indexed_trgt_t_TA_MRSP kcg_comp_struct__23959

#define kcg_copy_SSP_t_indexed_trgt_t_TA_MRSP kcg_copy_struct__23959

#define kcg_comp_CompressedRadioMessage_TM kcg_comp_struct__22991

#define kcg_copy_CompressedRadioMessage_TM kcg_copy_struct__22991

#define kcg_comp_Radio_TrackTrain_Header_T_TM kcg_comp_struct__22973

#define kcg_copy_Radio_TrackTrain_Header_T_TM kcg_copy_struct__22973

#define kcg_comp_P015_OBU_sectionlist_int_T_TM kcg_comp_array__22750

#define kcg_copy_P015_OBU_sectionlist_int_T_TM kcg_copy_array__22750

#define kcg_comp_P015_section_array_T_TM kcg_comp_array_int_4

#define kcg_copy_P015_section_array_T_TM kcg_copy_array_int_4

#define kcg_comp_P015_OBU_sectionlist_array_T_TM kcg_comp_array_int_4_32

#define kcg_copy_P015_OBU_sectionlist_array_T_TM kcg_copy_array_int_4_32

#define kcg_comp_P015_section_int_T_TM kcg_comp_struct__22737

#define kcg_copy_P015_section_int_T_TM kcg_copy_struct__22737

#define kcg_comp_P015_trackide_sectionlist_T_TM kcg_comp_array__22750

#define kcg_copy_P015_trackide_sectionlist_T_TM kcg_copy_array__22750

#define kcg_comp_P015_trackside_int_T_TM kcg_comp_struct__22753

#define kcg_copy_P015_trackside_int_T_TM kcg_copy_struct__22753

#define kcg_comp_P065_trackside_int_T_TM kcg_comp_struct__22780

#define kcg_copy_P065_trackside_int_T_TM kcg_copy_struct__22780

#define kcg_comp_P041_OBU_sectionlist_int_T_TM kcg_comp_array__22921

#define kcg_copy_P041_OBU_sectionlist_int_T_TM kcg_copy_array__22921

#define kcg_comp_P041_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P041_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P041_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P041_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P041_section_int_T_TM kcg_comp_struct__22915

#define kcg_copy_P041_section_int_T_TM kcg_copy_struct__22915

#define kcg_comp_P041_trackide_sectionlist_T_TM kcg_comp_array__22924

#define kcg_copy_P041_trackide_sectionlist_T_TM kcg_copy_array__22924

#define kcg_comp_P041_trackside_int_T_TM kcg_comp_struct__22927

#define kcg_copy_P041_trackside_int_T_TM kcg_copy_struct__22927

#define kcg_comp_P005_OBU_sectionlist_int_T_TM kcg_comp_array__22812

#define kcg_copy_P005_OBU_sectionlist_int_T_TM kcg_copy_array__22812

#define kcg_comp_P005_section_array_T_TM kcg_comp_array_int_7

#define kcg_copy_P005_section_array_T_TM kcg_copy_array_int_7

#define kcg_comp_P005_OBU_sectionlist_array_T_TM kcg_comp_array_int_7_33

#define kcg_copy_P005_OBU_sectionlist_array_T_TM kcg_copy_array_int_7_33

#define kcg_comp_P005_sections_array_flat_T_TM kcg_comp_array_int_231

#define kcg_copy_P005_sections_array_flat_T_TM kcg_copy_array_int_231

#define kcg_comp_P005_section_int_T_TM kcg_comp_struct__22796

#define kcg_copy_P005_section_int_T_TM kcg_copy_struct__22796

#define kcg_comp_P005_trackide_sectionlist_T_TM kcg_comp_array__22815

#define kcg_copy_P005_trackide_sectionlist_T_TM kcg_copy_array__22815

#define kcg_comp_P005_trackside_int_T_TM kcg_comp_struct__22818

#define kcg_copy_P005_trackside_int_T_TM kcg_copy_struct__22818

#define kcg_comp_P021_OBU_sectionlist_int_T_TM kcg_comp_array__22896

#define kcg_copy_P021_OBU_sectionlist_int_T_TM kcg_copy_array__22896

#define kcg_comp_P021_section_array_T_TM kcg_comp_array_int_3

#define kcg_copy_P021_section_array_T_TM kcg_copy_array_int_3

#define kcg_comp_P021_OBU_sectionlist_array_T_TM kcg_comp_array_int_3_33

#define kcg_copy_P021_OBU_sectionlist_array_T_TM kcg_copy_array_int_3_33

#define kcg_comp_P021_section_int_T_TM kcg_comp_struct__22884

#define kcg_copy_P021_section_int_T_TM kcg_copy_struct__22884

#define kcg_comp_P021_trackide_sectionlist_T_TM kcg_comp_array__22899

#define kcg_copy_P021_trackide_sectionlist_T_TM kcg_copy_array__22899

#define kcg_comp_P021_trackside_int_T_TM kcg_comp_struct__22902

#define kcg_copy_P021_trackside_int_T_TM kcg_copy_struct__22902

#define kcg_comp_P012_OBU_T_TM kcg_comp_struct__23856

#define kcg_copy_P012_OBU_T_TM kcg_copy_struct__23856

#define kcg_comp_P012_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P012_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_P012_section_enum_T_TM kcg_comp_struct__23737

#define kcg_copy_P012_section_enum_T_TM kcg_copy_struct__23737

#define kcg_comp_Array07_TM kcg_comp_array_int_7

#define kcg_copy_Array07_TM kcg_copy_array_int_7

#define kcg_comp_Array04_TM kcg_comp_array_int_4

#define kcg_copy_Array04_TM kcg_copy_array_int_4

#define kcg_comp_P046_OBU_T_TM kcg_comp_struct__23793

#define kcg_copy_P046_OBU_T_TM kcg_copy_struct__23793

#define kcg_comp_P046_OBU_sectionlist_enum_T_TM kcg_comp_array__23790

#define kcg_copy_P046_OBU_sectionlist_enum_T_TM kcg_copy_array__23790

#define kcg_comp_P046_sections_array_flat_T_TM kcg_comp_array_int_66

#define kcg_copy_P046_sections_array_flat_T_TM kcg_copy_array_int_66

#define kcg_comp_P046_section_enum_T_TM kcg_comp_struct__23784

#define kcg_copy_P046_section_enum_T_TM kcg_copy_struct__23784

#define kcg_comp_P041_OBU_T_TM kcg_comp_struct__23813

#define kcg_copy_P041_OBU_T_TM kcg_copy_struct__23813

#define kcg_comp_P041_OBU_sectionlist_enum_T_TM kcg_comp_array__23810

#define kcg_copy_P041_OBU_sectionlist_enum_T_TM kcg_copy_array__23810

#define kcg_comp_P041_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P041_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P041_section_enum_T_TM kcg_comp_struct__23803

#define kcg_copy_P041_section_enum_T_TM kcg_copy_struct__23803

#define kcg_comp_P021_OBU_T_TM kcg_comp_struct__23696

#define kcg_copy_P021_OBU_T_TM kcg_copy_struct__23696

#define kcg_comp_P021_OBU_sectionlist_enum_T_TM kcg_comp_array__23693

#define kcg_copy_P021_OBU_sectionlist_enum_T_TM kcg_copy_array__23693

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P021_section_enum_T_TM kcg_comp_struct__23686

#define kcg_copy_P021_section_enum_T_TM kcg_copy_struct__23686

#define kcg_comp_P139_OBU_T_TM kcg_comp_struct__23489

#define kcg_copy_P139_OBU_T_TM kcg_copy_struct__23489

#define kcg_comp_P138_OBU_T_TM kcg_comp_struct__23497

#define kcg_copy_P138_OBU_T_TM kcg_copy_struct__23497

#define kcg_comp_P135_OBU_T_TM kcg_comp_struct__23882

#define kcg_copy_P135_OBU_T_TM kcg_copy_struct__23882

#define kcg_comp_P003_OBU_l_section_enum_T_TM kcg_comp_struct__23286

#define kcg_copy_P003_OBU_l_section_enum_T_TM kcg_copy_struct__23286

#define kcg_comp_P003_OBU_l_sectionlist_enum_T_TM kcg_comp_array__23292

#define kcg_copy_P003_OBU_l_sectionlist_enum_T_TM kcg_copy_array__23292

#define kcg_comp_P003_OBU_k_m_section_enum_T_TM kcg_comp_struct__23295

#define kcg_copy_P003_OBU_k_m_section_enum_T_TM kcg_copy_struct__23295

#define kcg_comp_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store kcg_comp_struct__23707

#define kcg_copy_NID_EM_STORE_Acc_T_TA_EmergencyStop_NID_EM_Store kcg_copy_struct__23707

#define kcg_comp_P003_OBU_k_m_sectionlist_enum_T_TM kcg_comp_array__23302

#define kcg_copy_P003_OBU_k_m_sectionlist_enum_T_TM kcg_copy_array__23302

#define kcg_comp_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store kcg_comp_struct__23713

#define kcg_copy_NID_EM_Store_Item_T_TA_EmergencyStop_NID_EM_Store kcg_copy_struct__23713

#define kcg_comp_P003_OBU_k_section_enum_T_TM kcg_comp_struct__23305

#define kcg_copy_P003_OBU_k_section_enum_T_TM kcg_copy_struct__23305

#define kcg_comp_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store kcg_comp_struct__23721

#define kcg_copy_NID_EM_Store_T_TA_EmergencyStop_NID_EM_Store kcg_copy_struct__23721

#define kcg_comp_P003_OBU_k_sectionlist_enum_T_TM kcg_comp_array__23317

#define kcg_copy_P003_OBU_k_sectionlist_enum_T_TM kcg_copy_array__23317

#define kcg_comp_P003_OBU_n_section_enum_T_TM kcg_comp_struct__23320

#define kcg_copy_P003_OBU_n_section_enum_T_TM kcg_copy_struct__23320

#define kcg_comp_P003_OBU_n_sectionlist_enum_T_TM kcg_comp_array__23327

#define kcg_copy_P003_OBU_n_sectionlist_enum_T_TM kcg_copy_array__23327

#define kcg_comp_P003_OBU_nid_c_section_enum_T_TM kcg_comp_struct__23623

#define kcg_copy_P003_OBU_nid_c_section_enum_T_TM kcg_copy_struct__23623

#define kcg_comp_P003_OBU_nid_c_sectionlist_enum_T_TM kcg_comp_array__23628

#define kcg_copy_P003_OBU_nid_c_sectionlist_enum_T_TM kcg_copy_array__23628

#define kcg_comp_P003_OBU_T_TM kcg_comp_struct__23631

#define kcg_copy_P003_OBU_T_TM kcg_copy_struct__23631

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

#define kcg_comp_P015_section_enum_T_TM kcg_comp_struct__23737

#define kcg_copy_P015_section_enum_T_TM kcg_copy_struct__23737

#define kcg_comp_P015_OBU_sectionlist_enum_T_TM kcg_comp_array__23745

#define kcg_copy_P015_OBU_sectionlist_enum_T_TM kcg_copy_array__23745

#define kcg_comp_P015_OBU_T_TM kcg_comp_struct__23748

#define kcg_copy_P015_OBU_T_TM kcg_copy_struct__23748

#define kcg_comp_M_028_T_TM_radio_messages kcg_comp_struct__22591

#define kcg_copy_M_028_T_TM_radio_messages kcg_copy_struct__22591

#define kcg_comp_M_032_T_TM_radio_messages kcg_comp_struct__22619

#define kcg_copy_M_032_T_TM_radio_messages kcg_copy_struct__22619

#define kcg_comp_M_033_T_TM_radio_messages kcg_comp_struct__22629

#define kcg_copy_M_033_T_TM_radio_messages kcg_copy_struct__22629

#define kcg_comp_M_034_T_TM_radio_messages kcg_comp_struct__22640

#define kcg_copy_M_034_T_TM_radio_messages kcg_copy_struct__22640

#define kcg_comp_M_038_T_TM_radio_messages kcg_comp_struct__22654

#define kcg_copy_M_038_T_TM_radio_messages kcg_copy_struct__22654

#define kcg_comp_M_039_T_TM_radio_messages kcg_comp_struct__22654

#define kcg_copy_M_039_T_TM_radio_messages kcg_copy_struct__22654

#define kcg_comp_M_040_T_TM_radio_messages kcg_comp_struct__22654

#define kcg_copy_M_040_T_TM_radio_messages kcg_copy_struct__22654

#define kcg_comp_M_041_T_TM_radio_messages kcg_comp_struct__22654

#define kcg_copy_M_041_T_TM_radio_messages kcg_copy_struct__22654

#define kcg_comp_M_043_T_TM_radio_messages kcg_comp_struct__22654

#define kcg_copy_M_043_T_TM_radio_messages kcg_copy_struct__22654

#define kcg_comp_M_045_T_TM_radio_messages kcg_comp_struct__22663

#define kcg_copy_M_045_T_TM_radio_messages kcg_copy_struct__22663

#define kcg_comp_M_002_T_TM_radio_messages kcg_comp_struct__22673

#define kcg_copy_M_002_T_TM_radio_messages kcg_copy_struct__22673

#define kcg_comp_M_003_T_TM_radio_messages kcg_comp_struct__22654

#define kcg_copy_M_003_T_TM_radio_messages kcg_copy_struct__22654

#define kcg_comp_M_006_T_TM_radio_messages kcg_comp_struct__22654

#define kcg_copy_M_006_T_TM_radio_messages kcg_copy_struct__22654

#define kcg_comp_M_008_T_TM_radio_messages kcg_comp_struct__22684

#define kcg_copy_M_008_T_TM_radio_messages kcg_copy_struct__22684

#define kcg_comp_M_009_T_TM_radio_messages kcg_comp_struct__22654

#define kcg_copy_M_009_T_TM_radio_messages kcg_copy_struct__22654

#define kcg_comp_M_015_T_TM_radio_messages kcg_comp_struct__22694

#define kcg_copy_M_015_T_TM_radio_messages kcg_copy_struct__22694

#define kcg_comp_M_016_T_TM_radio_messages kcg_comp_struct__22708

#define kcg_copy_M_016_T_TM_radio_messages kcg_copy_struct__22708

#define kcg_comp_M_018_T_TM_radio_messages kcg_comp_struct__22708

#define kcg_copy_M_018_T_TM_radio_messages kcg_copy_struct__22708

#define kcg_comp_M_024_T_TM_radio_messages kcg_comp_struct__22654

#define kcg_copy_M_024_T_TM_radio_messages kcg_copy_struct__22654

#define kcg_comp_M_027_T_TM_radio_messages kcg_comp_struct__22591

#define kcg_copy_M_027_T_TM_radio_messages kcg_copy_struct__22591

#define kcg_comp_M_TrackTrain_Radio_T_TM_radio_messages kcg_comp_struct__22557

#define kcg_copy_M_TrackTrain_Radio_T_TM_radio_messages kcg_copy_struct__22557

#define kcg_comp_M_003_int_T_TM_radio_messages kcg_comp_struct__22725

#define kcg_copy_M_003_int_T_TM_radio_messages kcg_copy_struct__22725

#define kcg_comp_Position_Report_based_on_two_balise_groups_TrainToTrack kcg_comp_struct__22996

#define kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack kcg_copy_struct__22996

#define kcg_comp_Position_Report_TrainToTrack kcg_comp_struct__23021

#define kcg_copy_Position_Report_TrainToTrack kcg_copy_struct__23021

#define kcg_comp_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_comp_array_int_3

#define kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_copy_array_int_3

#define kcg_comp_sTractionIdentity_T_Packet_TrainTypes_Pkg kcg_comp_struct__23185

#define kcg_copy_sTractionIdentity_T_Packet_TrainTypes_Pkg kcg_copy_struct__23185

#define kcg_comp_aTractionIdentity_T_Packet_TrainTypes_Pkg kcg_comp_array__23190

#define kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg kcg_copy_array__23190

#define kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg kcg_comp_struct__23193

#define kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg kcg_copy_struct__23193

#define kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg kcg_comp_struct__23209

#define kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg kcg_copy_struct__23209

#define kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg kcg_comp_struct__23214

#define kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg kcg_copy_struct__23214

#define kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg kcg_comp_struct__23219

#define kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg kcg_copy_struct__23219

#define kcg_comp_telephoneNumber_T_Packet_TrainTypes_Pkg kcg_comp_array_int_15

#define kcg_copy_telephoneNumber_T_Packet_TrainTypes_Pkg kcg_copy_array_int_15

#define kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg kcg_comp_struct__23227

#define kcg_copy_sNID_RADIO_T_Packet_TrainTypes_Pkg kcg_copy_struct__23227

#define kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg kcg_comp_array__23232

#define kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg kcg_copy_array__23232

#define kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg kcg_comp_struct__23235

#define kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg kcg_copy_struct__23235

#define kcg_comp_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg kcg_comp_struct__23016

#define kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg kcg_copy_struct__23016

#define kcg_comp_PT0_PositionReport_T_Packet_TrainTypes_Pkg kcg_comp_struct__23040

#define kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg kcg_copy_struct__23040

#define kcg_comp_P80_ModeProfile_T_Packet_Types_Pkg kcg_comp_struct__23376

#define kcg_copy_P80_ModeProfile_T_Packet_Types_Pkg kcg_copy_struct__23376

#define kcg_comp_P80_ModeProfiles_T_Packet_Types_Pkg kcg_comp_array__23388

#define kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg kcg_copy_array__23388

#define kcg_comp_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg kcg_comp_struct__23391

#define kcg_copy_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg kcg_copy_struct__23391

#define kcg_comp_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg kcg_comp_array__23398

#define kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg kcg_copy_array__23398

#define kcg_comp_P41_LevelTransitionOrder_T_Packet_Types_Pkg kcg_comp_struct__23401

#define kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg kcg_copy_struct__23401

#define kcg_comp_P41_LevelTransistionOrders_T_Packet_Types_Pkg kcg_comp_array__23411

#define kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg kcg_copy_array__23411

#define kcg_comp_SSP_T_Packet_Types_Pkg kcg_comp_struct__23425

#define kcg_copy_SSP_T_Packet_Types_Pkg kcg_copy_struct__23425

#define kcg_comp_SSPArray_T_Packet_Types_Pkg kcg_comp_array__23433

#define kcg_copy_SSPArray_T_Packet_Types_Pkg kcg_copy_array__23433

#define kcg_comp_Diff_T_Packet_Types_Pkg kcg_comp_struct__23414

#define kcg_copy_Diff_T_Packet_Types_Pkg kcg_copy_struct__23414

#define kcg_comp_DiffArray_T_Packet_Types_Pkg kcg_comp_array__23422

#define kcg_copy_DiffArray_T_Packet_Types_Pkg kcg_copy_array__23422

#define kcg_comp_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg kcg_comp_struct__23436

#define kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg kcg_copy_struct__23436

#define kcg_comp_P21_GradientProfile_T_Packet_Types_Pkg kcg_comp_struct__23447

#define kcg_copy_P21_GradientProfile_T_Packet_Types_Pkg kcg_copy_struct__23447

#define kcg_comp_P21_GradientProfiles_T_Packet_Types_Pkg kcg_comp_array__23456

#define kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg kcg_copy_array__23456

#define kcg_comp_P15_Level23MovementAuthority_T_Packet_Types_Pkg kcg_comp_struct__23459

#define kcg_copy_P15_Level23MovementAuthority_T_Packet_Types_Pkg kcg_copy_struct__23459

#define kcg_comp_P15_Level23MovementAuthorities_T_Packet_Types_Pkg kcg_comp_array__23486

#define kcg_copy_P15_Level23MovementAuthorities_T_Packet_Types_Pkg kcg_copy_array__23486

#define kcg_comp_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg kcg_comp_struct__23489

#define kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg kcg_copy_struct__23489

#define kcg_comp_P138_ReversingAreaInformation_T_Packet_Types_Pkg kcg_comp_struct__23497

#define kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg kcg_copy_struct__23497

#define kcg_comp_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg kcg_comp_struct__23505

#define kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg kcg_copy_struct__23505

#define kcg_comp_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg kcg_comp_struct__23726

#define kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg kcg_copy_struct__23726

#define kcg_comp_Driver2MAR_T_MA_Request kcg_comp_struct__23045

#define kcg_copy_Driver2MAR_T_MA_Request kcg_copy_struct__23045

#define kcg_comp_trainProperties_T_TrainPosition_Types_Pck kcg_comp_struct__23056

#define kcg_copy_trainProperties_T_TrainPosition_Types_Pck kcg_copy_struct__23056

#define kcg_comp_infoFromLinking_T_TrainPosition_Types_Pck kcg_comp_struct__23080

#define kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck kcg_copy_struct__23080

#define kcg_comp_positionedBG_T_TrainPosition_Types_Pck kcg_comp_struct__23139

#define kcg_copy_positionedBG_T_TrainPosition_Types_Pck kcg_copy_struct__23139

#define kcg_comp_trainPosition_T_TrainPosition_Types_Pck kcg_comp_struct__23150

#define kcg_copy_trainPosition_T_TrainPosition_Types_Pck kcg_copy_struct__23150

#define kcg_comp_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg kcg_comp_struct__23366

#define kcg_copy_T_Data_From_Track_Mess_Level_And_Mode_Types_Pkg kcg_copy_struct__23366

#define kcg_comp_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg kcg_comp_struct__23511

#define kcg_copy_T_Data_From_Track_Packet_Level_And_Mode_Types_Pkg kcg_copy_struct__23511

#define kcg_comp_T_Mode_Level_Level_And_Mode_Types_Pkg kcg_comp_struct__23167

#define kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg kcg_copy_struct__23167

#define kcg_comp_Radio_TrainTrack_Message_T_Radio_Types_Pkg kcg_comp_struct__23251

#define kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg kcg_copy_struct__23251

#define kcg_comp_Radio_TrainTrack_Header_T_Radio_Types_Pkg kcg_comp_struct__23173

#define kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg kcg_copy_struct__23173

#define kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_comp_struct__22601

#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_copy_struct__22601

#define kcg_comp_LinkedBGs_T_BG_Types_Pkg kcg_comp_array__23089

#define kcg_copy_LinkedBGs_T_BG_Types_Pkg kcg_copy_array__23089

#define kcg_comp_passedBG_T_BG_Types_Pkg kcg_comp_struct__23133

#define kcg_copy_passedBG_T_BG_Types_Pkg kcg_copy_struct__23133

#define kcg_comp_LinkedBG_T_BG_Types_Pkg kcg_comp_struct__23066

#define kcg_copy_LinkedBG_T_BG_Types_Pkg kcg_copy_struct__23066

#define kcg_comp_BG_Header_T_BG_Types_Pkg kcg_comp_struct__23115

#define kcg_copy_BG_Header_T_BG_Types_Pkg kcg_copy_struct__23115

#define kcg_comp_outPackets_T_Common_Types_Pkg kcg_comp_struct__23241

#define kcg_copy_outPackets_T_Common_Types_Pkg kcg_copy_struct__23241

#define kcg_comp_RBC_Id_T_Common_Types_Pkg kcg_comp_struct__23257

#define kcg_copy_RBC_Id_T_Common_Types_Pkg kcg_copy_struct__23257

#define kcg_comp_RadioMetadata_T_Common_Types_Pkg kcg_comp_struct__23264

#define kcg_copy_RadioMetadata_T_Common_Types_Pkg kcg_copy_struct__23264

#define kcg_comp_ReceivedMessage_T_Common_Types_Pkg kcg_comp_struct__23276

#define kcg_copy_ReceivedMessage_T_Common_Types_Pkg kcg_copy_struct__23276

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__22586

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__22586

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__22583

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__22583

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__22575

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__22575

#define kcg_comp_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_trackide_sectionlist_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P003V1_trackside_int_T_TM_baseline2 kcg_comp_struct__22944

#define kcg_copy_P003V1_trackside_int_T_TM_baseline2 kcg_copy_struct__22944

#define kcg_comp_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_comp_array__22849

#define kcg_copy_P027V1_OBU_sectionlist_int_qdiff_T_TM_baseline2 kcg_copy_array__22849

#define kcg_comp_P027V1_section_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2

#define kcg_copy_P027V1_section_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2

#define kcg_comp_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_comp_array_int_2_32

#define kcg_copy_P027V1_OBU_sectionlist_array_qdiff_T_TM_baseline2 kcg_copy_array_int_2_32

#define kcg_comp_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array__22860

#define kcg_copy_P027V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array__22860

#define kcg_comp_P027V1_section_int_T_TM_baseline2 kcg_comp_struct__22852

#define kcg_copy_P027V1_section_int_T_TM_baseline2 kcg_copy_struct__22852

#define kcg_comp_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_comp_array__22863

#define kcg_copy_P027V1_trackside_sectionlist_T_TM_baseline2 kcg_copy_array__22863

#define kcg_comp_P027V1_section_int_qdiff_T_TM_baseline2 kcg_comp_struct__22838

#define kcg_copy_P027V1_section_int_qdiff_T_TM_baseline2 kcg_copy_struct__22838

#define kcg_comp_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_comp_array__22849

#define kcg_copy_P027V1_trackside_qdifflist_T_TM_baseline2 kcg_copy_array__22849

#define kcg_comp_P027V1_trackside_int_T_TM_baseline2 kcg_comp_struct__22866

#define kcg_copy_P027V1_trackside_int_T_TM_baseline2 kcg_copy_struct__22866

#define kcg_comp_P203V1_OBU_l_section_enum_T_TM_baseline2 kcg_comp_struct__23286

#define kcg_copy_P203V1_OBU_l_section_enum_T_TM_baseline2 kcg_copy_struct__23286

#define kcg_comp_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2 kcg_comp_array__23292

#define kcg_copy_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2 kcg_copy_array__23292

#define kcg_comp_P203V1_OBU_k_m_section_enum_T_TM_baseline2 kcg_comp_struct__23295

#define kcg_copy_P203V1_OBU_k_m_section_enum_T_TM_baseline2 kcg_copy_struct__23295

#define kcg_comp_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2 kcg_comp_array__23302

#define kcg_copy_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2 kcg_copy_array__23302

#define kcg_comp_P203V1_OBU_k_section_enum_T_TM_baseline2 kcg_comp_struct__23305

#define kcg_copy_P203V1_OBU_k_section_enum_T_TM_baseline2 kcg_copy_struct__23305

#define kcg_comp_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2 kcg_comp_array__23317

#define kcg_copy_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2 kcg_copy_array__23317

#define kcg_comp_P203V1_OBU_n_section_enum_T_TM_baseline2 kcg_comp_struct__23320

#define kcg_copy_P203V1_OBU_n_section_enum_T_TM_baseline2 kcg_copy_struct__23320

#define kcg_comp_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2 kcg_comp_array__23327

#define kcg_copy_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2 kcg_copy_array__23327

#define kcg_comp_P203V1_OBU_T_TM_baseline2 kcg_comp_struct__23330

#define kcg_copy_P203V1_OBU_T_TM_baseline2 kcg_copy_struct__23330

#define kcg_comp_P003_permanent_data_T_TM_baseline2 kcg_comp_struct__23361

#define kcg_copy_P003_permanent_data_T_TM_baseline2 kcg_copy_struct__23361

#define kcg_comp_P003V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_comp_array__23840

#define kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_copy_array__23840

#define kcg_comp_P027V1_OBU_T_TM_baseline2 kcg_comp_struct__23843

#define kcg_copy_P027V1_OBU_T_TM_baseline2 kcg_copy_struct__23843

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_comp_struct__23822

#define kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_copy_struct__23822

#define kcg_comp_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_comp_array__23828

#define kcg_copy_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_copy_array__23828

#define kcg_comp_P027V1_section_enum_T_TM_baseline2 kcg_comp_struct__23831

#define kcg_copy_P027V1_section_enum_T_TM_baseline2 kcg_copy_struct__23831

#define kcg_comp_P027V1_OBU_body_enum_T_TM_baseline2 kcg_comp_struct__23850

#define kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2 kcg_copy_struct__23850

#define kcg_comp_P003V1_section_enum_T_TM_baseline2 kcg_comp_struct__23623

#define kcg_copy_P003V1_section_enum_T_TM_baseline2 kcg_copy_struct__23623

#define kcg_comp_P003V1_sectionlist_enum_T_TM_baseline2 kcg_comp_array__23628

#define kcg_copy_P003V1_sectionlist_enum_T_TM_baseline2 kcg_copy_array__23628

#define kcg_comp_P003V1_OBU_T_TM_baseline2 kcg_comp_struct__23887

#define kcg_copy_P003V1_OBU_T_TM_baseline2 kcg_copy_struct__23887

#define kcg_comp_DataForModeAndLevel_t_TrackAtlasTypes kcg_comp_struct__23526

#define kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes kcg_copy_struct__23526

#define kcg_comp_DataForDMI_t_TrackAtlasTypes kcg_comp_struct__23555

#define kcg_copy_DataForDMI_t_TrackAtlasTypes kcg_copy_struct__23555

#define kcg_comp_DataForSupervision_nextGen_t_TrackAtlasTypes kcg_comp_struct__23614

#define kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes kcg_copy_struct__23614

#define kcg_comp_GradientProfile_for_DMI_t_TrackAtlasTypes kcg_comp_array__23542

#define kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes kcg_copy_array__23542

#define kcg_comp_GradientProfile_t_TrackAtlasTypes kcg_comp_array__23570

#define kcg_copy_GradientProfile_t_TrackAtlasTypes kcg_copy_array__23570

#define kcg_comp_GradientProfile_for_DMI_section_t_TrackAtlasTypes kcg_comp_struct__23535

#define kcg_copy_GradientProfile_for_DMI_section_t_TrackAtlasTypes kcg_copy_struct__23535

#define kcg_comp_Gradient_section_t_TrackAtlasTypes kcg_comp_struct__23562

#define kcg_copy_Gradient_section_t_TrackAtlasTypes kcg_copy_struct__23562

#define kcg_comp_StaticSpeedSection_t_TrackAtlasTypes kcg_comp_struct__23773

#define kcg_copy_StaticSpeedSection_t_TrackAtlasTypes kcg_copy_struct__23773

#define kcg_comp_StaticSpeedProfile_t_TrackAtlasTypes kcg_comp_array__23781

#define kcg_copy_StaticSpeedProfile_t_TrackAtlasTypes kcg_copy_array__23781

#define kcg_comp_MRSP_section_t_TrackAtlasTypes kcg_comp_struct__23545

#define kcg_copy_MRSP_section_t_TrackAtlasTypes kcg_copy_struct__23545

#define kcg_comp_MRSP_Profile_t_TrackAtlasTypes kcg_comp_array__23552

#define kcg_copy_MRSP_Profile_t_TrackAtlasTypes kcg_copy_array__23552

#define kcg_comp_Endtimer_t_TrackAtlasTypes kcg_comp_struct__23573

#define kcg_copy_Endtimer_t_TrackAtlasTypes kcg_copy_struct__23573

#define kcg_comp_DP_or_OL_t_TrackAtlasTypes kcg_comp_struct__23578

#define kcg_copy_DP_or_OL_t_TrackAtlasTypes kcg_copy_struct__23578

#define kcg_comp_MovementAuthoritySection_t_TrackAtlasTypes kcg_comp_struct__23584

#define kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes kcg_copy_struct__23584

#define kcg_comp_MovementAuthoritySectionlist_t_TrackAtlasTypes kcg_comp_array__23593

#define kcg_copy_MovementAuthoritySectionlist_t_TrackAtlasTypes kcg_copy_array__23593

#define kcg_comp_MovementAuthority_t_TrackAtlasTypes kcg_comp_struct__23596

#define kcg_copy_MovementAuthority_t_TrackAtlasTypes kcg_copy_struct__23596

#define kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_comp_struct__23050

#define kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_copy_struct__23050

#define kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg kcg_comp_struct__23092

#define kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg kcg_copy_struct__23092

#define kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg kcg_comp_struct__23099

#define kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg kcg_copy_struct__23099

#define kcg_comp_odometry_T_Obu_BasicTypes_Pkg kcg_comp_struct__23105

#define kcg_copy_odometry_T_Obu_BasicTypes_Pkg kcg_copy_struct__23105

#define kcg_comp_R_data_internal_T_InfraLib kcg_comp_struct__22718

#define kcg_copy_R_data_internal_T_InfraLib kcg_copy_struct__22718

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-09-04T10:01:35
*************************************************************$ */


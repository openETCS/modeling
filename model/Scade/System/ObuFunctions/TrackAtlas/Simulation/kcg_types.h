/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-08-07T17:15:59
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

/* Q_GDIR */
typedef enum { Q_GDIR_downhill = 0, Q_GDIR_uphill = 1 } Q_GDIR;
/* Q_FRONT */
typedef enum {
  Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element = 0,
  Q_FRONT_No_train_length_delay_on_validity_end_point_of_profile_element = 1
} Q_FRONT;
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
  _13_M_NVEBCL_Confidence_level_99_99 = 4,
  _12_M_NVEBCL_Confidence_level_99_999 = 5,
  _11_M_NVEBCL_Confidence_level_99_9999 = 6,
  _10_M_NVEBCL_Confidence_level_99_99999 = 7,
  _9_M_NVEBCL_Confidence_level_99_999999 = 8,
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
/* Q_NVSBTSMPERM */
typedef enum { Q_NVSBTSMPERM_No = 0, Q_NVSBTSMPERM_Yes = 1 } Q_NVSBTSMPERM;
/* Q_NVEMRRLS */
typedef enum {
  _14_Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill = 0,
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
/* M_LEVELTR */
typedef enum {
  M_LEVELTR_Level_0 = 0,
  M_LEVELTR_Level_NTC_specified_by_NID_NTC = 1,
  M_LEVELTR_Level_1 = 2,
  M_LEVELTR_Level_2 = 3,
  M_LEVELTR_Level_3 = 4
} M_LEVELTR;
/* Level_And_Mode_Types_Pkg::T_MA */
typedef enum {
  Profile_OS_Level_And_Mode_Types_Pkg,
  Profile_LS_Level_And_Mode_Types_Pkg,
  Profile_SH_Level_And_Mode_Types_Pkg,
  No_Profile_Level_And_Mode_Types_Pkg
} T_MA_Level_And_Mode_Types_Pkg;
/* Q_SECTIONTIMER */
typedef enum {
  Q_SECTIONTIMER_No_Section_Timer_information = 0,
  Q_SECTIONTIMER_Section_Timer_information_to_follow = 1
} Q_SECTIONTIMER;
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
/* Common_Types_Pkg::MsgSource_T */
typedef enum {
  msrc_undefined_Common_Types_Pkg,
  msrc_Euroradio_Common_Types_Pkg,
  msrc_Eurobalise_Common_Types_Pkg,
  msrc_RadioInfillUnit_Common_Types_Pkg,
  msrc_OBU_Common_Types_Pkg
} MsgSource_T_Common_Types_Pkg;
/* M_ACK */
typedef enum {
  M_ACK_No_acknowledgement_required = 0,
  M_ACK_Acknowledgement_required = 1
} M_ACK;
/* Q_UPDOWN */
typedef enum {
  Q_UPDOWN_Down_link_telegram = 0,
  Q_UPDOWN_Up_link_telegram = 1
} Q_UPDOWN;
/* M_VERSION */
typedef enum {
  M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS = 0,
  M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0 = 16,
  M_VERSION_Version_1_1_introduced_in_SRS_3_3_0 = 17,
  M_VERSION_Version_2_0_introduced_in_SRS_3_3_0 = 32
} M_VERSION;
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
  _15_Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction = 0,
  Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction = 1
} Q_LINKORIENTATION;
/* Q_LINKREACTION */
typedef enum {
  Q_LINKREACTION_Train_trip = 0,
  Q_LINKREACTION_Apply_service_brake = 1,
  Q_LINKREACTION_No_Reaction = 2
} Q_LINKREACTION;
/* TrackAtlasTypes::MA_Level_t */
typedef enum {
  MA_L1_TrackAtlasTypes,
  MA_L23_TrackAtlasTypes
} MA_Level_t_TrackAtlasTypes;
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
  _6_NC_TRAIN_Freight_train_braked_in_P_position = 1,
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
  _8_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA = 0,
  Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_no_update_of_EOA = 1,
  Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted = 2,
  Q_EMERGENCYSTOP_Emergency_stop = 3
} Q_EMERGENCYSTOP;
/* Q_DIR */
typedef enum {
  Q_DIR_Reverse = 0,
  Q_DIR_Nominal = 1,
  Q_DIR_Both_directions = 2
} Q_DIR;
/* Q_SCALE */
typedef enum {
  Q_SCALE_10_cm_scale = 0,
  Q_SCALE_1_m_scale = 1,
  Q_SCALE_10_m_scale = 2
} Q_SCALE;
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
  _7_Q_LENGTH_Train_integrity_confirmed_by_integrity_monitoring_device = 1,
  Q_LENGTH_Train_integrity_confirmed_by_driver = 2,
  Q_LENGTH_Train_integrity_lost = 3
} Q_LENGTH;
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

/* NID_PACKET */
typedef kcg_int NID_PACKET;

/* D_GRADIENT */
typedef kcg_int D_GRADIENT;

/* G_A */
typedef kcg_int G_A;

/* N_ITER */
typedef kcg_int N_ITER;

/* M_MCOUNT */
typedef kcg_int M_MCOUNT;

/* NID_C */
typedef kcg_int NID_C;

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

/* D_LINK */
typedef kcg_int D_LINK;

/* Q_LOCACC */
typedef kcg_int Q_LOCACC;

/* V_LOA */
typedef kcg_int V_LOA;

/* T_LOA */
typedef kcg_int T_LOA;

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

/* D_STATIC */
typedef kcg_int D_STATIC;

/* V_STATIC */
typedef kcg_int V_STATIC;

/* NC_DIFF */
typedef kcg_int NC_DIFF;

/* V_DIFF */
typedef kcg_int V_DIFF;

/* V_NVLIMSUPERV */
typedef kcg_int V_NVLIMSUPERV;

/* V_NVKVINT */
typedef kcg_int V_NVKVINT;

/* NID_NTC */
typedef kcg_int NID_NTC;

/* L_ACKLEVELTR */
typedef kcg_int L_ACKLEVELTR;

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

/* L_TRAIN */
typedef kcg_int L_TRAIN;

/* T_CYCLOC */
typedef kcg_int T_CYCLOC;

/* Obu_BasicTypes_Pkg::T_internal_Type */
typedef kcg_int T_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::L_internal_Type */
typedef kcg_int L_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::Location_T */
typedef L_internal_Type_Obu_BasicTypes_Pkg Location_T_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::V_internal_Type */
typedef kcg_int V_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::Speed_T */
typedef V_internal_Type_Obu_BasicTypes_Pkg Speed_T_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::A_internal_Type */
typedef kcg_int A_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::G_internal_Type */
typedef kcg_int G_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::BCD_T */
typedef kcg_int BCD_T_Obu_BasicTypes_Pkg;

/* TA_MRSP::SSP_target_t */
typedef kcg_int SSP_target_t_TA_MRSP;

/* TA_MRSP::SSP_t_section_t */
typedef kcg_int SSP_t_section_t_TA_MRSP;

/* TA_MRSP::SSP_s_section_t */
typedef kcg_int SSP_s_section_t_TA_MRSP;

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
} struct__9719;

/* TrainToTrack::Position_Report_based_on_two_balise_groups */
typedef struct__9719 Position_Report_based_on_two_balise_groups_TrainToTrack;

typedef struct {
  kcg_bool valid;
  Position_Report_based_on_two_balise_groups_TrainToTrack packet1;
} struct__9739;

/* Packet_TrainTypes_Pkg::PT1_PositionReport_2BG_T */
typedef struct__9739 PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg;

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
} struct__9744;

/* TrainToTrack::Position_Report */
typedef struct__9744 Position_Report_TrainToTrack;

typedef struct {
  kcg_bool valid;
  Position_Report_TrainToTrack packet0;
} struct__9763;

/* Packet_TrainTypes_Pkg::PT0_PositionReport_T */
typedef struct__9763 PT0_PositionReport_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  kcg_int t_mar;
  kcg_int t_timeoutrqst;
  kcg_int t_cycrqst;
} struct__9768;

/* Packet_Types_Pkg::P57_MovementAuthorityRequestParameters_T */
typedef struct__9768 P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg;

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
} struct__9776;

/* Radio_Types_Pkg::Radio_TrainTrack_Header_T */
typedef struct__9776 Radio_TrainTrack_Header_T_Radio_Types_Pkg;

typedef kcg_int array_int_3[3];

/* TM::Array03 */
typedef array_int_3 Array03_TM;

/* Packet_TrainTypes_Pkg::aNID_NTC_T */
typedef array_int_3 aNID_NTC_T_Packet_TrainTypes_Pkg;

typedef struct {
  M_VOLTAGE m_voltage;
  NID_CTRACTION nid_ctraction;
} struct__9791;

/* Packet_TrainTypes_Pkg::sTractionIdentity_T */
typedef struct__9791 sTractionIdentity_T_Packet_TrainTypes_Pkg;

typedef sTractionIdentity_T_Packet_TrainTypes_Pkg array__9796[3];

/* Packet_TrainTypes_Pkg::aTractionIdentity_T */
typedef array__9796 aTractionIdentity_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  NC_CDTRAIN NC_CDTRAIN;
  NC_TRAIN NC_TRAIN;
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
} struct__9799;

/* Packet_TrainTypes_Pkg::PT11_ValidatedTrainData_T */
typedef struct__9799 PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  NID_LTRBG transitionInformation;
} struct__9815;

/* Packet_TrainTypes_Pkg::PT9_Level23_TransitionInformation_T */
typedef struct__9815 PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  NID_OPERATIONAL TrainRunningNumber;
} struct__9820;

/* Packet_TrainTypes_Pkg::PT5_TrainRunningNumber */
typedef struct__9820 PT5_TrainRunningNumber_Packet_TrainTypes_Pkg;

typedef struct { kcg_bool valid; M_ERROR M_ERROR; } struct__9825;

/* Packet_TrainTypes_Pkg::PT4_ErrorReporting_T */
typedef struct__9825 PT4_ErrorReporting_T_Packet_TrainTypes_Pkg;

typedef kcg_int array_int_15[15];

/* TM::Array15 */
typedef array_int_15 Array15_TM;

/* Packet_TrainTypes_Pkg::telephoneNumber_T */
typedef array_int_15 telephoneNumber_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  telephoneNumber_T_Packet_TrainTypes_Pkg telephoneNumber;
} struct__9833;

/* Packet_TrainTypes_Pkg::sNID_RADIO_T */
typedef struct__9833 sNID_RADIO_T_Packet_TrainTypes_Pkg;

typedef sNID_RADIO_T_Packet_TrainTypes_Pkg array__9838[1];

/* Packet_TrainTypes_Pkg::aNID_RADIO_T */
typedef array__9838 aNID_RADIO_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int number;
  aNID_RADIO_T_Packet_TrainTypes_Pkg aNID_RADIO;
} struct__9841;

/* Packet_TrainTypes_Pkg::PT3_OnboardTelephoneNumbers_T */
typedef struct__9841 PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg;

typedef struct {
  PT0_PositionReport_T_Packet_TrainTypes_Pkg p0;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg p1;
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg p3;
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg p4;
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg p5;
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg p9;
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg p11;
} struct__9847;

/* Common_Types_Pkg::outPackets_T */
typedef struct__9847 outPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_bool present;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg header;
  outPackets_T_Common_Types_Pkg packets;
} struct__9857;

/* Radio_Types_Pkg::Radio_TrainTrack_Message_T */
typedef struct__9857 Radio_TrainTrack_Message_T_Radio_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool q_endsection;
  L_internal_Type_Obu_BasicTypes_Pkg l_section;
  kcg_bool q_sectiontimer;
  T_internal_Type_Obu_BasicTypes_Pkg t_sectiontimer;
  L_internal_Type_Obu_BasicTypes_Pkg d_sectiontimerstoploc;
} struct__9863;

/* TrackAtlasTypes::MovementAuthoritySection_t */
typedef struct__9863 MovementAuthoritySection_t_TrackAtlasTypes;

typedef MovementAuthoritySection_t_TrackAtlasTypes array__9872[10];

/* TrackAtlasTypes::MovementAuthoritySectionlist_t */
typedef array__9872 _4_MovementAuthoritySectionlist_t_TrackAtlasTypes;

typedef struct {
  T_internal_Type_Obu_BasicTypes_Pkg t_endtimer;
  L_internal_Type_Obu_BasicTypes_Pkg d_endtimerstoploc;
} struct__9875;

/* TrackAtlasTypes::Endtimer_t */
typedef struct__9875 Endtimer_t_TrackAtlasTypes;

typedef struct {
  L_internal_Type_Obu_BasicTypes_Pkg d_DP_or_OL;
  V_internal_Type_Obu_BasicTypes_Pkg v_release;
  kcg_bool calc_v_release_onboard;
} struct__9880;

/* TrackAtlasTypes::DP_or_OL_t */
typedef struct__9880 DP_or_OL_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  MA_Level_t_TrackAtlasTypes Level;
  Q_DIR q_dir;
  V_internal_Type_Obu_BasicTypes_Pkg v_main;
  V_internal_Type_Obu_BasicTypes_Pkg v_loa;
  kcg_bool t_loa_unlimited;
  T_internal_Type_Obu_BasicTypes_Pkg t_loa;
  N_ITER n_iter;
  _4_MovementAuthoritySectionlist_t_TrackAtlasTypes sections;
  kcg_bool q_dangerpoint;
  DP_or_OL_t_TrackAtlasTypes dangerpoint;
  kcg_bool q_overlap;
  DP_or_OL_t_TrackAtlasTypes overlap;
  kcg_bool q_endtimer;
  Endtimer_t_TrackAtlasTypes endtimer_t;
} struct__9886;

/* TrackAtlasTypes::MovementAuthority_t */
typedef struct__9886 MovementAuthority_t_TrackAtlasTypes;

typedef struct {
  L_internal_Type_Obu_BasicTypes_Pkg nominal;
  L_internal_Type_Obu_BasicTypes_Pkg d_min;
  L_internal_Type_Obu_BasicTypes_Pkg d_max;
} struct__9904;

/* Obu_BasicTypes_Pkg::LocWithInAcc_T */
typedef struct__9904 LocWithInAcc_T_Obu_BasicTypes_Pkg;

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
} struct__9910;

/* BG_Types_Pkg::LinkedBG_T */
typedef struct__9910 LinkedBG_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_BG nid_bg_fromLinkingBG;
  NID_C nid_c_fromLinkingBG;
  LocWithInAcc_T_Obu_BasicTypes_Pkg expectedLocation;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_link;
  LinkedBG_T_BG_Types_Pkg linkingInfo;
} struct__9924;

/* TrainPosition_Types_Pck::infoFromLinking_T */
typedef struct__9924 infoFromLinking_T_TrainPosition_Types_Pck;

typedef LinkedBG_T_BG_Types_Pkg array__9933[4];

/* BG_Types_Pkg::LinkedBGs_T */
typedef array__9933 LinkedBGs_T_BG_Types_Pkg;

typedef struct {
  V_internal_Type_Obu_BasicTypes_Pkg v_safeNominal;
  V_internal_Type_Obu_BasicTypes_Pkg v_rawNominal;
  V_internal_Type_Obu_BasicTypes_Pkg v_lower;
  V_internal_Type_Obu_BasicTypes_Pkg v_upper;
} struct__9936;

/* Obu_BasicTypes_Pkg::OdometrySpeeds_T */
typedef struct__9936 OdometrySpeeds_T_Obu_BasicTypes_Pkg;

typedef struct {
  L_internal_Type_Obu_BasicTypes_Pkg o_nominal;
  L_internal_Type_Obu_BasicTypes_Pkg o_min;
  L_internal_Type_Obu_BasicTypes_Pkg o_max;
} struct__9943;

/* Obu_BasicTypes_Pkg::OdometryLocations_T */
typedef struct__9943 OdometryLocations_T_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg timestamp;
  OdometryLocations_T_Obu_BasicTypes_Pkg odo;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg speed;
  A_internal_Type_Obu_BasicTypes_Pkg acceleration;
  odoMotionState_T_Obu_BasicTypes_Pkg motionState;
  odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection;
} struct__9949;

/* Obu_BasicTypes_Pkg::odometry_T */
typedef struct__9949 odometry_T_Obu_BasicTypes_Pkg;

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
} struct__9959;

/* BG_Types_Pkg::BG_Header_T */
typedef struct__9959 BG_Header_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  BG_Header_T_BG_Types_Pkg BG_Header;
  LinkedBGs_T_BG_Types_Pkg linkedBGs;
} struct__9977;

/* BG_Types_Pkg::passedBG_T */
typedef struct__9977 passedBG_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINK q_link;
  LocWithInAcc_T_Obu_BasicTypes_Pkg location;
  kcg_int seqNoOnTrack;
  infoFromLinking_T_TrainPosition_Types_Pck infoFromLinking;
  passedBG_T_BG_Types_Pkg infoFromPassing;
} struct__9983;

/* TrainPosition_Types_Pck::positionedBG_T */
typedef struct__9983 positionedBG_T_TrainPosition_Types_Pck;

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
} struct__9994;

/* TrainPosition_Types_Pck::trainPosition_T */
typedef struct__9994 trainPosition_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool trackAheadFree;
  kcg_bool driverSelectsStart;
} struct__10011;

/* MA_Request::Driver2MAR_T */
typedef struct__10011 Driver2MAR_T_MA_Request;

typedef struct {
  NID_ENGINE nid_engine;
  NID_OPERATIONAL nid_operational;
  L_TRAIN l_train;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_baliseAntenna_2_frontend;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_frontend_2_rearend;
  LocWithInAcc_T_Obu_BasicTypes_Pkg locationAccuracy_DefaultValue;
  LocWithInAcc_T_Obu_BasicTypes_Pkg centerDetectionAcc_DefaultValue;
} struct__10016;

/* TrainPosition_Types_Pck::trainProperties_T */
typedef struct__10016 trainProperties_T_TrainPosition_Types_Pck;

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
} struct__10026;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct__10026 Radio_TrackTrain_Header_T_Radio_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_C nid_c;
  NID_RBC rbc_id;
  kcg_int device_id;
} struct__10044;

/* Common_Types_Pkg::RBC_Id_T */
typedef struct__10044 RBC_Id_T_Common_Types_Pkg;

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
} struct__10051;

/* Common_Types_Pkg::RadioMetadata_T */
typedef struct__10051 RadioMetadata_T_Common_Types_Pkg;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__10066;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__10066 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__10074[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__10074 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__10077;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__10077 CompressedPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg source;
  RadioMetadata_T_Common_Types_Pkg radioMetadata;
  BG_Header_T_BG_Types_Pkg BG_Common_Header;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  CompressedPackets_T_Common_Types_Pkg packets;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} struct__10082;

/* Common_Types_Pkg::ReceivedMessage_T */
typedef struct__10082 ReceivedMessage_T_Common_Types_Pkg;

typedef kcg_int array_int_6[6];

/* TM::Array06 */
typedef array_int_6 Array06_TM;

typedef kcg_int array_int_128[128];

/* TM::P015_sections_array_flat_T */
typedef array_int_128 P015_sections_array_flat_T_TM;

typedef struct {
  kcg_bool valid;
  L_SECTION l_section;
  Q_SECTIONTIMER q_sectiontimer;
  T_SECTIONTIMER t_sectiontimer;
  D_SECTIONTIMERSTOPLOC d_sectiontimerstoploc;
} struct__10098;

/* TM::P015_section_enum_T */
typedef struct__10098 P015_section_enum_T_TM;

typedef P015_section_enum_T_TM array__10106[32];

/* TM::P015_OBU_sectionlist_enum_T */
typedef array__10106 P015_OBU_sectionlist_enum_T_TM;

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
} struct__10109;

/* TM::P015_OBU_T */
typedef struct__10109 P015_OBU_T_TM;

typedef struct { kcg_bool valid; M_LEVEL level; M_MODE Mode; } struct__10134;

/* Level_And_Mode_Types_Pkg::T_Mode_Level */
typedef struct__10134 T_Mode_Level_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool Available;
  Location_T_Obu_BasicTypes_Pkg Dist_Start;
  Location_T_Obu_BasicTypes_Pkg Length;
  Location_T_Obu_BasicTypes_Pkg Dist_Run;
  Speed_T_Obu_BasicTypes_Pkg Speed;
} struct__10140;

/* Level_And_Mode_Types_Pkg::T_Reversing_Data */
typedef struct__10140 T_Reversing_Data_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool NTC;
  kcg_bool L0;
  kcg_bool L1;
  kcg_bool L2;
  kcg_bool L3;
} struct__10148;

/* Level_And_Mode_Types_Pkg::T_ERTMS_capabilities */
typedef struct__10148 T_ERTMS_capabilities_Level_And_Mode_Types_Pkg;

typedef struct {
  Location_T_Obu_BasicTypes_Pkg Distance;
  T_MA_Level_And_Mode_Types_Pkg Mode;
  Speed_T_Obu_BasicTypes_Pkg Speed;
  Location_T_Obu_BasicTypes_Pkg Length;
  Location_T_Obu_BasicTypes_Pkg Length_Ack;
} struct__10156;

/* Level_And_Mode_Types_Pkg::T_Mode_Profile */
typedef struct__10156 T_Mode_Profile_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool MA_available;
  kcg_bool MA_L1_available;
  kcg_bool MA_L23_available;
  kcg_bool GradientProfile_available;
  kcg_bool SSP_available;
  kcg_bool Shunting_Granted;
  kcg_bool TripOrder_GivenByBalise;
  kcg_bool StopIfInShunting;
  kcg_bool StopIfInSR;
  kcg_bool ER_BG_SystemVersion;
  kcg_bool LinkingReactToTrip;
  kcg_bool RBCAck_TR_EB_Revoiked;
  kcg_bool RBC_Authorized_SR;
  kcg_bool T_NV_ContactOverpass;
  kcg_bool Emergency_Stop_Message_Received;
} struct__10164;

/* TrackAtlasTypes::FlagsForModeAndLevel_t */
typedef struct__10164 FlagsForModeAndLevel_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
} struct__10182;

/* TM::P046_section_enum_T */
typedef struct__10182 P046_section_enum_T_TM;

typedef P046_section_enum_T_TM array__10188[33];

/* TM::P046_OBU_sectionlist_enum_T */
typedef array__10188 P046_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
  L_ACKLEVELTR l_ackleveltr;
} struct__10191;

/* TM::P041_section_enum_T */
typedef struct__10191 P041_section_enum_T_TM;

typedef P041_section_enum_T_TM array__10198[33];

/* TM::P041_OBU_sectionlist_enum_T */
typedef array__10198 P041_OBU_sectionlist_enum_T_TM;

typedef struct {
  FlagsForModeAndLevel_t_TrackAtlasTypes Flags;
  L_internal_Type_Obu_BasicTypes_Pkg AckDistance;
  V_internal_Type_Obu_BasicTypes_Pkg ReceivedTargetSpeed;
  L_internal_Type_Obu_BasicTypes_Pkg Distance;
  L_internal_Type_Obu_BasicTypes_Pkg Length;
  T_Mode_Profile_Level_And_Mode_Types_Pkg Mode_Profile_Onboard;
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg ERTMS_capabilities;
  T_Reversing_Data_Level_And_Mode_Types_Pkg Reversing_Data;
  P041_OBU_sectionlist_enum_T_TM ConditionalTransitionPriorities;
  P046_OBU_sectionlist_enum_T_TM TransitionPriorities;
} struct__10201;

/* TrackAtlasTypes::DataForModeAndLevel_t */
typedef struct__10201 DataForModeAndLevel_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg begin_section;
  L_internal_Type_Obu_BasicTypes_Pkg end_section;
  G_internal_Type_Obu_BasicTypes_Pkg gradient;
} struct__10214;

/* TrackAtlasTypes::GradientProfile_for_DMI_section_t */
typedef struct__10214 _3_GradientProfile_for_DMI_section_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_Absolute;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_LRBG;
  G_internal_Type_Obu_BasicTypes_Pkg Gradient;
  L_internal_Type_Obu_BasicTypes_Pkg L_Gradient;
} struct__10221;

/* TrackAtlasTypes::Gradient_section_t */
typedef struct__10221 Gradient_section_t_TrackAtlasTypes;

typedef _3_GradientProfile_for_DMI_section_t_TrackAtlasTypes array__10229[50];

/* TrackAtlasTypes::GradientProfile_for_DMI_t */
typedef array__10229 GradientProfile_for_DMI_t_TrackAtlasTypes;

typedef Gradient_section_t_TrackAtlasTypes array__10232[50];

/* TrackAtlasTypes::GradientProfile_t */
typedef array__10232 GradientProfile_t_TrackAtlasTypes;

typedef struct { kcg_bool valid; kcg_int nid_c; } struct__10235;

/* TM::P003_OBU_nid_c_section_enum_T */
typedef struct__10235 P003_OBU_nid_c_section_enum_T_TM;

/* TM_baseline2::P003V1_section_enum_T */
typedef struct__10235 P003V1_section_enum_T_TM_baseline2;

typedef struct__10235 array__10240[32];

/* TM::P003_OBU_nid_c_sectionlist_enum_T */
typedef array__10240 _5_P003_OBU_nid_c_sectionlist_enum_T_TM;

/* TM_baseline2::P003V1_sectionlist_enum_T */
typedef array__10240 P003V1_sectionlist_enum_T_TM_baseline2;

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
} struct__10243;

/* TM_baseline2::P003V1_OBU_T */
typedef struct__10243 P003V1_OBU_T_TM_baseline2;

typedef kcg_int array_int_32[32];

/* TM_baseline2::P003V1_OBU_sectionlist_int_T */
typedef array_int_32 P003V1_OBU_sectionlist_int_T_TM_baseline2;

typedef kcg_int array_int_24[24];

/* TM::Array24 */
typedef array_int_24 Array24_TM;

typedef struct {
  kcg_bool valid;
  L_NVKRINT l_nvkrint_l;
  kcg_real m_nvkrint_l;
} struct__10276;

/* TM::P003_OBU_l_section_enum_T */
typedef struct__10276 P003_OBU_l_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_l_section_enum_T */
typedef struct__10276 P203V1_OBU_l_section_enum_T_TM_baseline2;

typedef struct__10276 array__10282[32];

/* TM::P003_OBU_l_sectionlist_enum_T */
typedef array__10282 P003_OBU_l_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_l_sectionlist_enum_T */
typedef array__10282 P203V1_OBU_l_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int v_nvkvint_k_m;
  kcg_real m_nvkvint_km_12;
  kcg_real m_nvkvint_km_23;
} struct__10285;

/* TM::P003_OBU_k_m_section_enum_T */
typedef struct__10285 P003_OBU_k_m_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_m_section_enum_T */
typedef struct__10285 P203V1_OBU_k_m_section_enum_T_TM_baseline2;

typedef struct__10285 array__10292[32];

/* TM::P003_OBU_k_m_sectionlist_enum_T */
typedef array__10292 P003_OBU_k_m_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_m_sectionlist_enum_T */
typedef array__10292 _1_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_NVKVINTSET q_nvkvintset_k;
  kcg_real a_nvp12_k;
  kcg_real a_nvp23_k;
  kcg_int v_nvkvint_k;
  kcg_real m_nvkvint_k_12;
  kcg_real m_nvkvint_k_23;
  kcg_int n_iter_k_m;
  array__10292 n_iter_k_m_list;
} struct__10295;

/* TM::P003_OBU_k_section_enum_T */
typedef struct__10295 P003_OBU_k_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_section_enum_T */
typedef struct__10295 P203V1_OBU_k_section_enum_T_TM_baseline2;

typedef struct__10295 array__10307[32];

/* TM::P003_OBU_k_sectionlist_enum_T */
typedef array__10307 P003_OBU_k_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_sectionlist_enum_T */
typedef array__10307 P203V1_OBU_k_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int v_nvkvint_n;
  kcg_real m_nvkvint_n_12;
  kcg_real m_nvkvint_n_23;
} struct__10310;

/* TM::P003_OBU_n_section_enum_T */
typedef struct__10310 P003_OBU_n_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_n_section_enum_T */
typedef struct__10310 P203V1_OBU_n_section_enum_T_TM_baseline2;

typedef struct__10310 array__10317[32];

/* TM::P003_OBU_n_sectionlist_enum_T */
typedef array__10317 P003_OBU_n_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_n_sectionlist_enum_T */
typedef array__10317 P203V1_OBU_n_sectionlist_enum_T_TM_baseline2;

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
} struct__10320;

/* TM_baseline2::P203V1_OBU_T */
typedef struct__10320 P203V1_OBU_T_TM_baseline2;

typedef struct {
  Q_NVLOCACC q_nvlocacc;
  V_NVLIMSUPERV v_nvlimsuperv;
} struct__10351;

/* TM_baseline2::P003_permanent_data_T */
typedef struct__10351 P003_permanent_data_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  D_VALIDNV d_validnv;
  NID_C nid_c;
  N_ITER n_iter_nid_c;
  _5_P003_OBU_nid_c_sectionlist_enum_T_TM nid_c_list;
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
} struct__10356;

/* TM::P003_OBU_T */
typedef struct__10356 P003_OBU_T_TM;

typedef struct { kcg_int target; kcg_int speed; } struct__10411;

/* TA_MRSP::SSP_section_t */
typedef struct__10411 SSP_section_t_TA_MRSP;

typedef struct__10411 array__10416[33];

/* TA_MRSP::SSP_cat_t */
typedef array__10416 SSP_cat_t_TA_MRSP;

typedef struct {
  kcg_bool valid;
  NC_DIFF nc_diff;
  V_DIFF v_diff;
} struct__10419;

/* TM_baseline2::P027V1_section_enum_qdiff_T */
typedef struct__10419 P027V1_section_enum_qdiff_T_TM_baseline2;

typedef P027V1_section_enum_qdiff_T_TM_baseline2 array__10425[32];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_qdiff_T */
typedef array__10425 _2_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  N_ITER n_iter;
  _2_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 SECTIONS_q_diff;
} struct__10428;

/* TM_baseline2::P027V1_section_enum_T */
typedef struct__10428 P027V1_section_enum_T_TM_baseline2;

typedef P027V1_section_enum_T_TM_baseline2 array__10437[33];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_T */
typedef array__10437 P027V1_OBU_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 sections;
} struct__10440;

/* TM_baseline2::P027V1_OBU_T */
typedef struct__10440 P027V1_OBU_T_TM_baseline2;

typedef struct { kcg_bool valid; Q_DIR q_dir; Q_SCALE q_scale; } struct__10447;

/* TM_baseline2::P027V1_OBU_body_enum_T */
typedef struct__10447 P027V1_OBU_body_enum_T_TM_baseline2;

typedef kcg_int array_int_5[5];

/* TM::Array05 */
typedef array_int_5 Array05_TM;

typedef kcg_int array_int_64[64];

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef array__10416 array__10459[11];

/* TA_MRSP::SSP_matrix_t */
typedef array__10459 SSP_matrix_t_TA_MRSP;

typedef struct {
  kcg_int Category_Index;
  kcg_int Pos_Index;
  SSP_target_t_TA_MRSP Loc;
} struct__10462;

/* TA_MRSP::SSP_t_indexed_matrix_element */
typedef struct__10462 SSP_t_indexed_matrix_element_TA_MRSP;

typedef SSP_t_indexed_matrix_element_TA_MRSP array__10468[363];

/* TA_MRSP::SSP_t_list_t */
typedef array__10468 SSP_t_list_t_TA_MRSP;

typedef kcg_int array_int_33[33];

/* TA_MRSP::SSP_t_cat_t */
typedef array_int_33 SSP_t_cat_t_TA_MRSP;

typedef array_int_33 array_int_33_11[11];

/* TA_MRSP::SSP_t_matrix_t */
typedef array_int_33_11 SSP_t_matrix_t_TA_MRSP;

typedef struct { kcg_bool Found; kcg_int Index; } struct__10477;

/* TA_MRSP::SSP_Mark_ValidSSPsection */
typedef struct__10477 SSP_Mark_ValidSSPsection_TA_MRSP;

typedef struct {
  kcg_bool found;
  kcg_int index;
  SSP_t_section_t_TA_MRSP target;
} struct__10482;

/* TA_MRSP::SSP_valid_section_t */
typedef struct__10482 SSP_valid_section_t_TA_MRSP;

typedef struct { kcg_int index; SSP_t_section_t_TA_MRSP target; } struct__10488;

/* TA_MRSP::SSP_relevant_target_t */
typedef struct__10488 SSP_relevant_target_t_TA_MRSP;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_Abs;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_LRBG;
  V_internal_Type_Obu_BasicTypes_Pkg MRS;
} struct__10493;

/* TrackAtlasTypes::MRSP_section_t */
typedef struct__10493 MRSP_section_t_TrackAtlasTypes;

typedef struct { kcg_int Index; SSP_target_t_TA_MRSP Loc; } struct__10500;

/* TA_MRSP::SSP_t_indexed_trgt_t */
typedef struct__10500 SSP_t_indexed_trgt_t_TA_MRSP;

typedef SSP_t_indexed_trgt_t_TA_MRSP array__10505[11];

/* TA_MRSP::SSP_t_indexed_targets_list_t */
typedef array__10505 SSP_t_indexed_targets_list_t_TA_MRSP;

typedef MRSP_section_t_TrackAtlasTypes array__10508[200];

/* TrackAtlasTypes::MRSP_Profile_t */
typedef array__10508 MRSP_Profile_t_TrackAtlasTypes;

typedef struct {
  GradientProfile_for_DMI_t_TrackAtlasTypes GradientProfile;
  kcg_bool Gradient_profile_updated;
  MRSP_Profile_t_TrackAtlasTypes MRSP;
  kcg_bool MRSP_updated;
} struct__10511;

/* TrackAtlasTypes::DataForDMI_t */
typedef struct__10511 DataForDMI_t_TrackAtlasTypes;

typedef struct {
  kcg_bool freshMA;
  MovementAuthority_t_TrackAtlasTypes MA;
  kcg_bool freshGradientProfile;
  GradientProfile_t_TrackAtlasTypes GradientProfile;
  kcg_bool freshMRSP;
  MRSP_Profile_t_TrackAtlasTypes MRSP;
} struct__10518;

/* TrackAtlasTypes::DataForSupervision_nextGen_t */
typedef struct__10518 DataForSupervision_nextGen_t_TrackAtlasTypes;

typedef kcg_int array_int_99[99];

/* TM::P021_sections_array_flat_T */
typedef array_int_99 P021_sections_array_flat_T_TM;

typedef struct {
  kcg_bool valid;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} struct__10530;

/* TM::P021_section_enum_T */
typedef struct__10530 P021_section_enum_T_TM;

typedef P021_section_enum_T_TM array__10537[33];

/* TM::P021_OBU_sectionlist_enum_T */
typedef array__10537 P021_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P021_OBU_sectionlist_enum_T_TM sections;
} struct__10540;

/* TM::P021_OBU_T */
typedef struct__10540 P021_OBU_T_TM;

typedef kcg_int array_int_30[30];

typedef kcg_bool array_bool_30[30];

typedef CompressedPacketData_T_Common_Types_Pkg array_int_500_500[500];

typedef P021_sections_array_flat_T_TM array_int_99_33[33];

typedef GradientProfile_t_TrackAtlasTypes array__10560[33];

typedef array__10537 array__10563[33];

typedef Q_SCALE array__10566[33];

typedef P015_sections_array_flat_T_TM array_int_128_32[32];

typedef SSP_t_indexed_matrix_element_TA_MRSP array__10572[11];

typedef SSP_valid_section_t_TA_MRSP array__10575[33];

typedef kcg_int array_int_11[11];

typedef SSP_t_list_t_TA_MRSP array__10581[200];

typedef SSP_matrix_t_TA_MRSP array__10584[200];

typedef kcg_int array_int_200[200];

typedef P027V1_sections_array_flat_qdiff_T_TM_baseline2 array_int_64_32[32];

typedef CompressedPackets_T_Common_Types_Pkg array__10593[33];

typedef array__10416 array__10596[33];

typedef P027V1_section_enum_T_TM_baseline2 array__10599[32];

typedef array__10437 array__10602[33];

typedef P027V1_section_enum_T_TM_baseline2 array__10605[1];

typedef SSP_section_t_TA_MRSP array__10608[32];

typedef SSP_section_t_TA_MRSP array__10611[1];

typedef P003V1_OBU_sectionlist_int_T_TM_baseline2 array_int_32_32[32];

typedef P003V1_section_enum_T_TM_baseline2 array__10617[31];

typedef P003V1_section_enum_T_TM_baseline2 array__10620[1];

#ifndef kcg_copy_struct__9719
#define kcg_copy_struct__9719(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9719)))
#endif /* kcg_copy_struct__9719 */

#ifndef kcg_copy_struct__9739
#define kcg_copy_struct__9739(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9739)))
#endif /* kcg_copy_struct__9739 */

#ifndef kcg_copy_struct__9744
#define kcg_copy_struct__9744(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9744)))
#endif /* kcg_copy_struct__9744 */

#ifndef kcg_copy_struct__9763
#define kcg_copy_struct__9763(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9763)))
#endif /* kcg_copy_struct__9763 */

#ifndef kcg_copy_struct__9768
#define kcg_copy_struct__9768(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9768)))
#endif /* kcg_copy_struct__9768 */

#ifndef kcg_copy_struct__9776
#define kcg_copy_struct__9776(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9776)))
#endif /* kcg_copy_struct__9776 */

#ifndef kcg_copy_struct__9791
#define kcg_copy_struct__9791(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9791)))
#endif /* kcg_copy_struct__9791 */

#ifndef kcg_copy_struct__9799
#define kcg_copy_struct__9799(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9799)))
#endif /* kcg_copy_struct__9799 */

#ifndef kcg_copy_struct__9815
#define kcg_copy_struct__9815(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9815)))
#endif /* kcg_copy_struct__9815 */

#ifndef kcg_copy_struct__9820
#define kcg_copy_struct__9820(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9820)))
#endif /* kcg_copy_struct__9820 */

#ifndef kcg_copy_struct__9825
#define kcg_copy_struct__9825(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9825)))
#endif /* kcg_copy_struct__9825 */

#ifndef kcg_copy_struct__9833
#define kcg_copy_struct__9833(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9833)))
#endif /* kcg_copy_struct__9833 */

#ifndef kcg_copy_struct__9841
#define kcg_copy_struct__9841(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9841)))
#endif /* kcg_copy_struct__9841 */

#ifndef kcg_copy_struct__9847
#define kcg_copy_struct__9847(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9847)))
#endif /* kcg_copy_struct__9847 */

#ifndef kcg_copy_struct__9857
#define kcg_copy_struct__9857(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9857)))
#endif /* kcg_copy_struct__9857 */

#ifndef kcg_copy_struct__9863
#define kcg_copy_struct__9863(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9863)))
#endif /* kcg_copy_struct__9863 */

#ifndef kcg_copy_struct__9875
#define kcg_copy_struct__9875(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9875)))
#endif /* kcg_copy_struct__9875 */

#ifndef kcg_copy_struct__9880
#define kcg_copy_struct__9880(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9880)))
#endif /* kcg_copy_struct__9880 */

#ifndef kcg_copy_struct__9886
#define kcg_copy_struct__9886(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9886)))
#endif /* kcg_copy_struct__9886 */

#ifndef kcg_copy_struct__9904
#define kcg_copy_struct__9904(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9904)))
#endif /* kcg_copy_struct__9904 */

#ifndef kcg_copy_struct__9910
#define kcg_copy_struct__9910(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9910)))
#endif /* kcg_copy_struct__9910 */

#ifndef kcg_copy_struct__9924
#define kcg_copy_struct__9924(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9924)))
#endif /* kcg_copy_struct__9924 */

#ifndef kcg_copy_struct__9936
#define kcg_copy_struct__9936(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9936)))
#endif /* kcg_copy_struct__9936 */

#ifndef kcg_copy_struct__9943
#define kcg_copy_struct__9943(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9943)))
#endif /* kcg_copy_struct__9943 */

#ifndef kcg_copy_struct__9949
#define kcg_copy_struct__9949(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9949)))
#endif /* kcg_copy_struct__9949 */

#ifndef kcg_copy_struct__9959
#define kcg_copy_struct__9959(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9959)))
#endif /* kcg_copy_struct__9959 */

#ifndef kcg_copy_struct__9977
#define kcg_copy_struct__9977(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9977)))
#endif /* kcg_copy_struct__9977 */

#ifndef kcg_copy_struct__9983
#define kcg_copy_struct__9983(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9983)))
#endif /* kcg_copy_struct__9983 */

#ifndef kcg_copy_struct__9994
#define kcg_copy_struct__9994(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9994)))
#endif /* kcg_copy_struct__9994 */

#ifndef kcg_copy_struct__10011
#define kcg_copy_struct__10011(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10011)))
#endif /* kcg_copy_struct__10011 */

#ifndef kcg_copy_struct__10016
#define kcg_copy_struct__10016(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10016)))
#endif /* kcg_copy_struct__10016 */

#ifndef kcg_copy_struct__10026
#define kcg_copy_struct__10026(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10026)))
#endif /* kcg_copy_struct__10026 */

#ifndef kcg_copy_struct__10044
#define kcg_copy_struct__10044(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10044)))
#endif /* kcg_copy_struct__10044 */

#ifndef kcg_copy_struct__10051
#define kcg_copy_struct__10051(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10051)))
#endif /* kcg_copy_struct__10051 */

#ifndef kcg_copy_struct__10066
#define kcg_copy_struct__10066(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10066)))
#endif /* kcg_copy_struct__10066 */

#ifndef kcg_copy_struct__10077
#define kcg_copy_struct__10077(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10077)))
#endif /* kcg_copy_struct__10077 */

#ifndef kcg_copy_struct__10082
#define kcg_copy_struct__10082(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10082)))
#endif /* kcg_copy_struct__10082 */

#ifndef kcg_copy_struct__10098
#define kcg_copy_struct__10098(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10098)))
#endif /* kcg_copy_struct__10098 */

#ifndef kcg_copy_struct__10109
#define kcg_copy_struct__10109(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10109)))
#endif /* kcg_copy_struct__10109 */

#ifndef kcg_copy_struct__10134
#define kcg_copy_struct__10134(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10134)))
#endif /* kcg_copy_struct__10134 */

#ifndef kcg_copy_struct__10140
#define kcg_copy_struct__10140(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10140)))
#endif /* kcg_copy_struct__10140 */

#ifndef kcg_copy_struct__10148
#define kcg_copy_struct__10148(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10148)))
#endif /* kcg_copy_struct__10148 */

#ifndef kcg_copy_struct__10156
#define kcg_copy_struct__10156(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10156)))
#endif /* kcg_copy_struct__10156 */

#ifndef kcg_copy_struct__10164
#define kcg_copy_struct__10164(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10164)))
#endif /* kcg_copy_struct__10164 */

#ifndef kcg_copy_struct__10182
#define kcg_copy_struct__10182(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10182)))
#endif /* kcg_copy_struct__10182 */

#ifndef kcg_copy_struct__10191
#define kcg_copy_struct__10191(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10191)))
#endif /* kcg_copy_struct__10191 */

#ifndef kcg_copy_struct__10201
#define kcg_copy_struct__10201(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10201)))
#endif /* kcg_copy_struct__10201 */

#ifndef kcg_copy_struct__10214
#define kcg_copy_struct__10214(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10214)))
#endif /* kcg_copy_struct__10214 */

#ifndef kcg_copy_struct__10221
#define kcg_copy_struct__10221(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10221)))
#endif /* kcg_copy_struct__10221 */

#ifndef kcg_copy_struct__10235
#define kcg_copy_struct__10235(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10235)))
#endif /* kcg_copy_struct__10235 */

#ifndef kcg_copy_struct__10243
#define kcg_copy_struct__10243(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10243)))
#endif /* kcg_copy_struct__10243 */

#ifndef kcg_copy_struct__10276
#define kcg_copy_struct__10276(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10276)))
#endif /* kcg_copy_struct__10276 */

#ifndef kcg_copy_struct__10285
#define kcg_copy_struct__10285(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10285)))
#endif /* kcg_copy_struct__10285 */

#ifndef kcg_copy_struct__10295
#define kcg_copy_struct__10295(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10295)))
#endif /* kcg_copy_struct__10295 */

#ifndef kcg_copy_struct__10310
#define kcg_copy_struct__10310(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10310)))
#endif /* kcg_copy_struct__10310 */

#ifndef kcg_copy_struct__10320
#define kcg_copy_struct__10320(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10320)))
#endif /* kcg_copy_struct__10320 */

#ifndef kcg_copy_struct__10351
#define kcg_copy_struct__10351(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10351)))
#endif /* kcg_copy_struct__10351 */

#ifndef kcg_copy_struct__10356
#define kcg_copy_struct__10356(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10356)))
#endif /* kcg_copy_struct__10356 */

#ifndef kcg_copy_struct__10411
#define kcg_copy_struct__10411(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10411)))
#endif /* kcg_copy_struct__10411 */

#ifndef kcg_copy_struct__10419
#define kcg_copy_struct__10419(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10419)))
#endif /* kcg_copy_struct__10419 */

#ifndef kcg_copy_struct__10428
#define kcg_copy_struct__10428(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10428)))
#endif /* kcg_copy_struct__10428 */

#ifndef kcg_copy_struct__10440
#define kcg_copy_struct__10440(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10440)))
#endif /* kcg_copy_struct__10440 */

#ifndef kcg_copy_struct__10447
#define kcg_copy_struct__10447(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10447)))
#endif /* kcg_copy_struct__10447 */

#ifndef kcg_copy_struct__10462
#define kcg_copy_struct__10462(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10462)))
#endif /* kcg_copy_struct__10462 */

#ifndef kcg_copy_struct__10477
#define kcg_copy_struct__10477(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10477)))
#endif /* kcg_copy_struct__10477 */

#ifndef kcg_copy_struct__10482
#define kcg_copy_struct__10482(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10482)))
#endif /* kcg_copy_struct__10482 */

#ifndef kcg_copy_struct__10488
#define kcg_copy_struct__10488(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10488)))
#endif /* kcg_copy_struct__10488 */

#ifndef kcg_copy_struct__10493
#define kcg_copy_struct__10493(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10493)))
#endif /* kcg_copy_struct__10493 */

#ifndef kcg_copy_struct__10500
#define kcg_copy_struct__10500(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10500)))
#endif /* kcg_copy_struct__10500 */

#ifndef kcg_copy_struct__10511
#define kcg_copy_struct__10511(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10511)))
#endif /* kcg_copy_struct__10511 */

#ifndef kcg_copy_struct__10518
#define kcg_copy_struct__10518(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10518)))
#endif /* kcg_copy_struct__10518 */

#ifndef kcg_copy_struct__10530
#define kcg_copy_struct__10530(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10530)))
#endif /* kcg_copy_struct__10530 */

#ifndef kcg_copy_struct__10540
#define kcg_copy_struct__10540(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10540)))
#endif /* kcg_copy_struct__10540 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array__9796
#define kcg_copy_array__9796(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__9796)))
#endif /* kcg_copy_array__9796 */

#ifndef kcg_copy_array_int_15
#define kcg_copy_array_int_15(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_15)))
#endif /* kcg_copy_array_int_15 */

#ifndef kcg_copy_array__9838
#define kcg_copy_array__9838(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__9838)))
#endif /* kcg_copy_array__9838 */

#ifndef kcg_copy_array__9872
#define kcg_copy_array__9872(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__9872)))
#endif /* kcg_copy_array__9872 */

#ifndef kcg_copy_array__9933
#define kcg_copy_array__9933(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__9933)))
#endif /* kcg_copy_array__9933 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__10074
#define kcg_copy_array__10074(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10074)))
#endif /* kcg_copy_array__10074 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array_int_128
#define kcg_copy_array_int_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128)))
#endif /* kcg_copy_array_int_128 */

#ifndef kcg_copy_array__10106
#define kcg_copy_array__10106(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10106)))
#endif /* kcg_copy_array__10106 */

#ifndef kcg_copy_array__10188
#define kcg_copy_array__10188(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10188)))
#endif /* kcg_copy_array__10188 */

#ifndef kcg_copy_array__10198
#define kcg_copy_array__10198(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10198)))
#endif /* kcg_copy_array__10198 */

#ifndef kcg_copy_array__10229
#define kcg_copy_array__10229(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10229)))
#endif /* kcg_copy_array__10229 */

#ifndef kcg_copy_array__10232
#define kcg_copy_array__10232(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10232)))
#endif /* kcg_copy_array__10232 */

#ifndef kcg_copy_array__10240
#define kcg_copy_array__10240(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10240)))
#endif /* kcg_copy_array__10240 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array_int_24
#define kcg_copy_array_int_24(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_24)))
#endif /* kcg_copy_array_int_24 */

#ifndef kcg_copy_array__10282
#define kcg_copy_array__10282(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10282)))
#endif /* kcg_copy_array__10282 */

#ifndef kcg_copy_array__10292
#define kcg_copy_array__10292(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10292)))
#endif /* kcg_copy_array__10292 */

#ifndef kcg_copy_array__10307
#define kcg_copy_array__10307(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10307)))
#endif /* kcg_copy_array__10307 */

#ifndef kcg_copy_array__10317
#define kcg_copy_array__10317(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10317)))
#endif /* kcg_copy_array__10317 */

#ifndef kcg_copy_array__10416
#define kcg_copy_array__10416(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10416)))
#endif /* kcg_copy_array__10416 */

#ifndef kcg_copy_array__10425
#define kcg_copy_array__10425(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10425)))
#endif /* kcg_copy_array__10425 */

#ifndef kcg_copy_array__10437
#define kcg_copy_array__10437(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10437)))
#endif /* kcg_copy_array__10437 */

#ifndef kcg_copy_array_int_5
#define kcg_copy_array_int_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_5)))
#endif /* kcg_copy_array_int_5 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array__10459
#define kcg_copy_array__10459(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10459)))
#endif /* kcg_copy_array__10459 */

#ifndef kcg_copy_array__10468
#define kcg_copy_array__10468(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10468)))
#endif /* kcg_copy_array__10468 */

#ifndef kcg_copy_array_int_33
#define kcg_copy_array_int_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33)))
#endif /* kcg_copy_array_int_33 */

#ifndef kcg_copy_array_int_33_11
#define kcg_copy_array_int_33_11(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33_11)))
#endif /* kcg_copy_array_int_33_11 */

#ifndef kcg_copy_array__10505
#define kcg_copy_array__10505(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10505)))
#endif /* kcg_copy_array__10505 */

#ifndef kcg_copy_array__10508
#define kcg_copy_array__10508(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10508)))
#endif /* kcg_copy_array__10508 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__10537
#define kcg_copy_array__10537(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10537)))
#endif /* kcg_copy_array__10537 */

#ifndef kcg_copy_array_int_30
#define kcg_copy_array_int_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_30)))
#endif /* kcg_copy_array_int_30 */

#ifndef kcg_copy_array_bool_30
#define kcg_copy_array_bool_30(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_bool_30)))
#endif /* kcg_copy_array_bool_30 */

#ifndef kcg_copy_array_int_500_500
#define kcg_copy_array_int_500_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500_500)))
#endif /* kcg_copy_array_int_500_500 */

#ifndef kcg_copy_array_int_99_33
#define kcg_copy_array_int_99_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99_33)))
#endif /* kcg_copy_array_int_99_33 */

#ifndef kcg_copy_array__10560
#define kcg_copy_array__10560(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10560)))
#endif /* kcg_copy_array__10560 */

#ifndef kcg_copy_array__10563
#define kcg_copy_array__10563(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10563)))
#endif /* kcg_copy_array__10563 */

#ifndef kcg_copy_array__10566
#define kcg_copy_array__10566(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10566)))
#endif /* kcg_copy_array__10566 */

#ifndef kcg_copy_array_int_128_32
#define kcg_copy_array_int_128_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128_32)))
#endif /* kcg_copy_array_int_128_32 */

#ifndef kcg_copy_array__10572
#define kcg_copy_array__10572(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10572)))
#endif /* kcg_copy_array__10572 */

#ifndef kcg_copy_array__10575
#define kcg_copy_array__10575(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10575)))
#endif /* kcg_copy_array__10575 */

#ifndef kcg_copy_array_int_11
#define kcg_copy_array_int_11(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_11)))
#endif /* kcg_copy_array_int_11 */

#ifndef kcg_copy_array__10581
#define kcg_copy_array__10581(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10581)))
#endif /* kcg_copy_array__10581 */

#ifndef kcg_copy_array__10584
#define kcg_copy_array__10584(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10584)))
#endif /* kcg_copy_array__10584 */

#ifndef kcg_copy_array_int_200
#define kcg_copy_array_int_200(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_200)))
#endif /* kcg_copy_array_int_200 */

#ifndef kcg_copy_array_int_64_32
#define kcg_copy_array_int_64_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64_32)))
#endif /* kcg_copy_array_int_64_32 */

#ifndef kcg_copy_array__10593
#define kcg_copy_array__10593(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10593)))
#endif /* kcg_copy_array__10593 */

#ifndef kcg_copy_array__10596
#define kcg_copy_array__10596(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10596)))
#endif /* kcg_copy_array__10596 */

#ifndef kcg_copy_array__10599
#define kcg_copy_array__10599(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10599)))
#endif /* kcg_copy_array__10599 */

#ifndef kcg_copy_array__10602
#define kcg_copy_array__10602(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10602)))
#endif /* kcg_copy_array__10602 */

#ifndef kcg_copy_array__10605
#define kcg_copy_array__10605(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10605)))
#endif /* kcg_copy_array__10605 */

#ifndef kcg_copy_array__10608
#define kcg_copy_array__10608(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10608)))
#endif /* kcg_copy_array__10608 */

#ifndef kcg_copy_array__10611
#define kcg_copy_array__10611(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10611)))
#endif /* kcg_copy_array__10611 */

#ifndef kcg_copy_array_int_32_32
#define kcg_copy_array_int_32_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32_32)))
#endif /* kcg_copy_array_int_32_32 */

#ifndef kcg_copy_array__10617
#define kcg_copy_array__10617(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10617)))
#endif /* kcg_copy_array__10617 */

#ifndef kcg_copy_array__10620
#define kcg_copy_array__10620(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10620)))
#endif /* kcg_copy_array__10620 */

#ifndef kcg_comp_struct__9719
extern kcg_bool kcg_comp_struct__9719(
  struct__9719 *kcg_c1,
  struct__9719 *kcg_c2);
#endif /* kcg_comp_struct__9719 */

#ifndef kcg_comp_struct__9739
extern kcg_bool kcg_comp_struct__9739(
  struct__9739 *kcg_c1,
  struct__9739 *kcg_c2);
#endif /* kcg_comp_struct__9739 */

#ifndef kcg_comp_struct__9744
extern kcg_bool kcg_comp_struct__9744(
  struct__9744 *kcg_c1,
  struct__9744 *kcg_c2);
#endif /* kcg_comp_struct__9744 */

#ifndef kcg_comp_struct__9763
extern kcg_bool kcg_comp_struct__9763(
  struct__9763 *kcg_c1,
  struct__9763 *kcg_c2);
#endif /* kcg_comp_struct__9763 */

#ifndef kcg_comp_struct__9768
extern kcg_bool kcg_comp_struct__9768(
  struct__9768 *kcg_c1,
  struct__9768 *kcg_c2);
#endif /* kcg_comp_struct__9768 */

#ifndef kcg_comp_struct__9776
extern kcg_bool kcg_comp_struct__9776(
  struct__9776 *kcg_c1,
  struct__9776 *kcg_c2);
#endif /* kcg_comp_struct__9776 */

#ifndef kcg_comp_struct__9791
extern kcg_bool kcg_comp_struct__9791(
  struct__9791 *kcg_c1,
  struct__9791 *kcg_c2);
#endif /* kcg_comp_struct__9791 */

#ifndef kcg_comp_struct__9799
extern kcg_bool kcg_comp_struct__9799(
  struct__9799 *kcg_c1,
  struct__9799 *kcg_c2);
#endif /* kcg_comp_struct__9799 */

#ifndef kcg_comp_struct__9815
extern kcg_bool kcg_comp_struct__9815(
  struct__9815 *kcg_c1,
  struct__9815 *kcg_c2);
#endif /* kcg_comp_struct__9815 */

#ifndef kcg_comp_struct__9820
extern kcg_bool kcg_comp_struct__9820(
  struct__9820 *kcg_c1,
  struct__9820 *kcg_c2);
#endif /* kcg_comp_struct__9820 */

#ifndef kcg_comp_struct__9825
extern kcg_bool kcg_comp_struct__9825(
  struct__9825 *kcg_c1,
  struct__9825 *kcg_c2);
#endif /* kcg_comp_struct__9825 */

#ifndef kcg_comp_struct__9833
extern kcg_bool kcg_comp_struct__9833(
  struct__9833 *kcg_c1,
  struct__9833 *kcg_c2);
#endif /* kcg_comp_struct__9833 */

#ifndef kcg_comp_struct__9841
extern kcg_bool kcg_comp_struct__9841(
  struct__9841 *kcg_c1,
  struct__9841 *kcg_c2);
#endif /* kcg_comp_struct__9841 */

#ifndef kcg_comp_struct__9847
extern kcg_bool kcg_comp_struct__9847(
  struct__9847 *kcg_c1,
  struct__9847 *kcg_c2);
#endif /* kcg_comp_struct__9847 */

#ifndef kcg_comp_struct__9857
extern kcg_bool kcg_comp_struct__9857(
  struct__9857 *kcg_c1,
  struct__9857 *kcg_c2);
#endif /* kcg_comp_struct__9857 */

#ifndef kcg_comp_struct__9863
extern kcg_bool kcg_comp_struct__9863(
  struct__9863 *kcg_c1,
  struct__9863 *kcg_c2);
#endif /* kcg_comp_struct__9863 */

#ifndef kcg_comp_struct__9875
extern kcg_bool kcg_comp_struct__9875(
  struct__9875 *kcg_c1,
  struct__9875 *kcg_c2);
#endif /* kcg_comp_struct__9875 */

#ifndef kcg_comp_struct__9880
extern kcg_bool kcg_comp_struct__9880(
  struct__9880 *kcg_c1,
  struct__9880 *kcg_c2);
#endif /* kcg_comp_struct__9880 */

#ifndef kcg_comp_struct__9886
extern kcg_bool kcg_comp_struct__9886(
  struct__9886 *kcg_c1,
  struct__9886 *kcg_c2);
#endif /* kcg_comp_struct__9886 */

#ifndef kcg_comp_struct__9904
extern kcg_bool kcg_comp_struct__9904(
  struct__9904 *kcg_c1,
  struct__9904 *kcg_c2);
#endif /* kcg_comp_struct__9904 */

#ifndef kcg_comp_struct__9910
extern kcg_bool kcg_comp_struct__9910(
  struct__9910 *kcg_c1,
  struct__9910 *kcg_c2);
#endif /* kcg_comp_struct__9910 */

#ifndef kcg_comp_struct__9924
extern kcg_bool kcg_comp_struct__9924(
  struct__9924 *kcg_c1,
  struct__9924 *kcg_c2);
#endif /* kcg_comp_struct__9924 */

#ifndef kcg_comp_struct__9936
extern kcg_bool kcg_comp_struct__9936(
  struct__9936 *kcg_c1,
  struct__9936 *kcg_c2);
#endif /* kcg_comp_struct__9936 */

#ifndef kcg_comp_struct__9943
extern kcg_bool kcg_comp_struct__9943(
  struct__9943 *kcg_c1,
  struct__9943 *kcg_c2);
#endif /* kcg_comp_struct__9943 */

#ifndef kcg_comp_struct__9949
extern kcg_bool kcg_comp_struct__9949(
  struct__9949 *kcg_c1,
  struct__9949 *kcg_c2);
#endif /* kcg_comp_struct__9949 */

#ifndef kcg_comp_struct__9959
extern kcg_bool kcg_comp_struct__9959(
  struct__9959 *kcg_c1,
  struct__9959 *kcg_c2);
#endif /* kcg_comp_struct__9959 */

#ifndef kcg_comp_struct__9977
extern kcg_bool kcg_comp_struct__9977(
  struct__9977 *kcg_c1,
  struct__9977 *kcg_c2);
#endif /* kcg_comp_struct__9977 */

#ifndef kcg_comp_struct__9983
extern kcg_bool kcg_comp_struct__9983(
  struct__9983 *kcg_c1,
  struct__9983 *kcg_c2);
#endif /* kcg_comp_struct__9983 */

#ifndef kcg_comp_struct__9994
extern kcg_bool kcg_comp_struct__9994(
  struct__9994 *kcg_c1,
  struct__9994 *kcg_c2);
#endif /* kcg_comp_struct__9994 */

#ifndef kcg_comp_struct__10011
extern kcg_bool kcg_comp_struct__10011(
  struct__10011 *kcg_c1,
  struct__10011 *kcg_c2);
#endif /* kcg_comp_struct__10011 */

#ifndef kcg_comp_struct__10016
extern kcg_bool kcg_comp_struct__10016(
  struct__10016 *kcg_c1,
  struct__10016 *kcg_c2);
#endif /* kcg_comp_struct__10016 */

#ifndef kcg_comp_struct__10026
extern kcg_bool kcg_comp_struct__10026(
  struct__10026 *kcg_c1,
  struct__10026 *kcg_c2);
#endif /* kcg_comp_struct__10026 */

#ifndef kcg_comp_struct__10044
extern kcg_bool kcg_comp_struct__10044(
  struct__10044 *kcg_c1,
  struct__10044 *kcg_c2);
#endif /* kcg_comp_struct__10044 */

#ifndef kcg_comp_struct__10051
extern kcg_bool kcg_comp_struct__10051(
  struct__10051 *kcg_c1,
  struct__10051 *kcg_c2);
#endif /* kcg_comp_struct__10051 */

#ifndef kcg_comp_struct__10066
extern kcg_bool kcg_comp_struct__10066(
  struct__10066 *kcg_c1,
  struct__10066 *kcg_c2);
#endif /* kcg_comp_struct__10066 */

#ifndef kcg_comp_struct__10077
extern kcg_bool kcg_comp_struct__10077(
  struct__10077 *kcg_c1,
  struct__10077 *kcg_c2);
#endif /* kcg_comp_struct__10077 */

#ifndef kcg_comp_struct__10082
extern kcg_bool kcg_comp_struct__10082(
  struct__10082 *kcg_c1,
  struct__10082 *kcg_c2);
#endif /* kcg_comp_struct__10082 */

#ifndef kcg_comp_struct__10098
extern kcg_bool kcg_comp_struct__10098(
  struct__10098 *kcg_c1,
  struct__10098 *kcg_c2);
#endif /* kcg_comp_struct__10098 */

#ifndef kcg_comp_struct__10109
extern kcg_bool kcg_comp_struct__10109(
  struct__10109 *kcg_c1,
  struct__10109 *kcg_c2);
#endif /* kcg_comp_struct__10109 */

#ifndef kcg_comp_struct__10134
extern kcg_bool kcg_comp_struct__10134(
  struct__10134 *kcg_c1,
  struct__10134 *kcg_c2);
#endif /* kcg_comp_struct__10134 */

#ifndef kcg_comp_struct__10140
extern kcg_bool kcg_comp_struct__10140(
  struct__10140 *kcg_c1,
  struct__10140 *kcg_c2);
#endif /* kcg_comp_struct__10140 */

#ifndef kcg_comp_struct__10148
extern kcg_bool kcg_comp_struct__10148(
  struct__10148 *kcg_c1,
  struct__10148 *kcg_c2);
#endif /* kcg_comp_struct__10148 */

#ifndef kcg_comp_struct__10156
extern kcg_bool kcg_comp_struct__10156(
  struct__10156 *kcg_c1,
  struct__10156 *kcg_c2);
#endif /* kcg_comp_struct__10156 */

#ifndef kcg_comp_struct__10164
extern kcg_bool kcg_comp_struct__10164(
  struct__10164 *kcg_c1,
  struct__10164 *kcg_c2);
#endif /* kcg_comp_struct__10164 */

#ifndef kcg_comp_struct__10182
extern kcg_bool kcg_comp_struct__10182(
  struct__10182 *kcg_c1,
  struct__10182 *kcg_c2);
#endif /* kcg_comp_struct__10182 */

#ifndef kcg_comp_struct__10191
extern kcg_bool kcg_comp_struct__10191(
  struct__10191 *kcg_c1,
  struct__10191 *kcg_c2);
#endif /* kcg_comp_struct__10191 */

#ifndef kcg_comp_struct__10201
extern kcg_bool kcg_comp_struct__10201(
  struct__10201 *kcg_c1,
  struct__10201 *kcg_c2);
#endif /* kcg_comp_struct__10201 */

#ifndef kcg_comp_struct__10214
extern kcg_bool kcg_comp_struct__10214(
  struct__10214 *kcg_c1,
  struct__10214 *kcg_c2);
#endif /* kcg_comp_struct__10214 */

#ifndef kcg_comp_struct__10221
extern kcg_bool kcg_comp_struct__10221(
  struct__10221 *kcg_c1,
  struct__10221 *kcg_c2);
#endif /* kcg_comp_struct__10221 */

#ifndef kcg_comp_struct__10235
extern kcg_bool kcg_comp_struct__10235(
  struct__10235 *kcg_c1,
  struct__10235 *kcg_c2);
#endif /* kcg_comp_struct__10235 */

#ifndef kcg_comp_struct__10243
extern kcg_bool kcg_comp_struct__10243(
  struct__10243 *kcg_c1,
  struct__10243 *kcg_c2);
#endif /* kcg_comp_struct__10243 */

#ifndef kcg_comp_struct__10276
extern kcg_bool kcg_comp_struct__10276(
  struct__10276 *kcg_c1,
  struct__10276 *kcg_c2);
#endif /* kcg_comp_struct__10276 */

#ifndef kcg_comp_struct__10285
extern kcg_bool kcg_comp_struct__10285(
  struct__10285 *kcg_c1,
  struct__10285 *kcg_c2);
#endif /* kcg_comp_struct__10285 */

#ifndef kcg_comp_struct__10295
extern kcg_bool kcg_comp_struct__10295(
  struct__10295 *kcg_c1,
  struct__10295 *kcg_c2);
#endif /* kcg_comp_struct__10295 */

#ifndef kcg_comp_struct__10310
extern kcg_bool kcg_comp_struct__10310(
  struct__10310 *kcg_c1,
  struct__10310 *kcg_c2);
#endif /* kcg_comp_struct__10310 */

#ifndef kcg_comp_struct__10320
extern kcg_bool kcg_comp_struct__10320(
  struct__10320 *kcg_c1,
  struct__10320 *kcg_c2);
#endif /* kcg_comp_struct__10320 */

#ifndef kcg_comp_struct__10351
extern kcg_bool kcg_comp_struct__10351(
  struct__10351 *kcg_c1,
  struct__10351 *kcg_c2);
#endif /* kcg_comp_struct__10351 */

#ifndef kcg_comp_struct__10356
extern kcg_bool kcg_comp_struct__10356(
  struct__10356 *kcg_c1,
  struct__10356 *kcg_c2);
#endif /* kcg_comp_struct__10356 */

#ifndef kcg_comp_struct__10411
extern kcg_bool kcg_comp_struct__10411(
  struct__10411 *kcg_c1,
  struct__10411 *kcg_c2);
#endif /* kcg_comp_struct__10411 */

#ifndef kcg_comp_struct__10419
extern kcg_bool kcg_comp_struct__10419(
  struct__10419 *kcg_c1,
  struct__10419 *kcg_c2);
#endif /* kcg_comp_struct__10419 */

#ifndef kcg_comp_struct__10428
extern kcg_bool kcg_comp_struct__10428(
  struct__10428 *kcg_c1,
  struct__10428 *kcg_c2);
#endif /* kcg_comp_struct__10428 */

#ifndef kcg_comp_struct__10440
extern kcg_bool kcg_comp_struct__10440(
  struct__10440 *kcg_c1,
  struct__10440 *kcg_c2);
#endif /* kcg_comp_struct__10440 */

#ifndef kcg_comp_struct__10447
extern kcg_bool kcg_comp_struct__10447(
  struct__10447 *kcg_c1,
  struct__10447 *kcg_c2);
#endif /* kcg_comp_struct__10447 */

#ifndef kcg_comp_struct__10462
extern kcg_bool kcg_comp_struct__10462(
  struct__10462 *kcg_c1,
  struct__10462 *kcg_c2);
#endif /* kcg_comp_struct__10462 */

#ifndef kcg_comp_struct__10477
extern kcg_bool kcg_comp_struct__10477(
  struct__10477 *kcg_c1,
  struct__10477 *kcg_c2);
#endif /* kcg_comp_struct__10477 */

#ifndef kcg_comp_struct__10482
extern kcg_bool kcg_comp_struct__10482(
  struct__10482 *kcg_c1,
  struct__10482 *kcg_c2);
#endif /* kcg_comp_struct__10482 */

#ifndef kcg_comp_struct__10488
extern kcg_bool kcg_comp_struct__10488(
  struct__10488 *kcg_c1,
  struct__10488 *kcg_c2);
#endif /* kcg_comp_struct__10488 */

#ifndef kcg_comp_struct__10493
extern kcg_bool kcg_comp_struct__10493(
  struct__10493 *kcg_c1,
  struct__10493 *kcg_c2);
#endif /* kcg_comp_struct__10493 */

#ifndef kcg_comp_struct__10500
extern kcg_bool kcg_comp_struct__10500(
  struct__10500 *kcg_c1,
  struct__10500 *kcg_c2);
#endif /* kcg_comp_struct__10500 */

#ifndef kcg_comp_struct__10511
extern kcg_bool kcg_comp_struct__10511(
  struct__10511 *kcg_c1,
  struct__10511 *kcg_c2);
#endif /* kcg_comp_struct__10511 */

#ifndef kcg_comp_struct__10518
extern kcg_bool kcg_comp_struct__10518(
  struct__10518 *kcg_c1,
  struct__10518 *kcg_c2);
#endif /* kcg_comp_struct__10518 */

#ifndef kcg_comp_struct__10530
extern kcg_bool kcg_comp_struct__10530(
  struct__10530 *kcg_c1,
  struct__10530 *kcg_c2);
#endif /* kcg_comp_struct__10530 */

#ifndef kcg_comp_struct__10540
extern kcg_bool kcg_comp_struct__10540(
  struct__10540 *kcg_c1,
  struct__10540 *kcg_c2);
#endif /* kcg_comp_struct__10540 */

#ifndef kcg_comp_array_int_3
extern kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2);
#endif /* kcg_comp_array_int_3 */

#ifndef kcg_comp_array__9796
extern kcg_bool kcg_comp_array__9796(array__9796 *kcg_c1, array__9796 *kcg_c2);
#endif /* kcg_comp_array__9796 */

#ifndef kcg_comp_array_int_15
extern kcg_bool kcg_comp_array_int_15(
  array_int_15 *kcg_c1,
  array_int_15 *kcg_c2);
#endif /* kcg_comp_array_int_15 */

#ifndef kcg_comp_array__9838
extern kcg_bool kcg_comp_array__9838(array__9838 *kcg_c1, array__9838 *kcg_c2);
#endif /* kcg_comp_array__9838 */

#ifndef kcg_comp_array__9872
extern kcg_bool kcg_comp_array__9872(array__9872 *kcg_c1, array__9872 *kcg_c2);
#endif /* kcg_comp_array__9872 */

#ifndef kcg_comp_array__9933
extern kcg_bool kcg_comp_array__9933(array__9933 *kcg_c1, array__9933 *kcg_c2);
#endif /* kcg_comp_array__9933 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__10074
extern kcg_bool kcg_comp_array__10074(
  array__10074 *kcg_c1,
  array__10074 *kcg_c2);
#endif /* kcg_comp_array__10074 */

#ifndef kcg_comp_array_int_6
extern kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2);
#endif /* kcg_comp_array_int_6 */

#ifndef kcg_comp_array_int_128
extern kcg_bool kcg_comp_array_int_128(
  array_int_128 *kcg_c1,
  array_int_128 *kcg_c2);
#endif /* kcg_comp_array_int_128 */

#ifndef kcg_comp_array__10106
extern kcg_bool kcg_comp_array__10106(
  array__10106 *kcg_c1,
  array__10106 *kcg_c2);
#endif /* kcg_comp_array__10106 */

#ifndef kcg_comp_array__10188
extern kcg_bool kcg_comp_array__10188(
  array__10188 *kcg_c1,
  array__10188 *kcg_c2);
#endif /* kcg_comp_array__10188 */

#ifndef kcg_comp_array__10198
extern kcg_bool kcg_comp_array__10198(
  array__10198 *kcg_c1,
  array__10198 *kcg_c2);
#endif /* kcg_comp_array__10198 */

#ifndef kcg_comp_array__10229
extern kcg_bool kcg_comp_array__10229(
  array__10229 *kcg_c1,
  array__10229 *kcg_c2);
#endif /* kcg_comp_array__10229 */

#ifndef kcg_comp_array__10232
extern kcg_bool kcg_comp_array__10232(
  array__10232 *kcg_c1,
  array__10232 *kcg_c2);
#endif /* kcg_comp_array__10232 */

#ifndef kcg_comp_array__10240
extern kcg_bool kcg_comp_array__10240(
  array__10240 *kcg_c1,
  array__10240 *kcg_c2);
#endif /* kcg_comp_array__10240 */

#ifndef kcg_comp_array_int_32
extern kcg_bool kcg_comp_array_int_32(
  array_int_32 *kcg_c1,
  array_int_32 *kcg_c2);
#endif /* kcg_comp_array_int_32 */

#ifndef kcg_comp_array_int_24
extern kcg_bool kcg_comp_array_int_24(
  array_int_24 *kcg_c1,
  array_int_24 *kcg_c2);
#endif /* kcg_comp_array_int_24 */

#ifndef kcg_comp_array__10282
extern kcg_bool kcg_comp_array__10282(
  array__10282 *kcg_c1,
  array__10282 *kcg_c2);
#endif /* kcg_comp_array__10282 */

#ifndef kcg_comp_array__10292
extern kcg_bool kcg_comp_array__10292(
  array__10292 *kcg_c1,
  array__10292 *kcg_c2);
#endif /* kcg_comp_array__10292 */

#ifndef kcg_comp_array__10307
extern kcg_bool kcg_comp_array__10307(
  array__10307 *kcg_c1,
  array__10307 *kcg_c2);
#endif /* kcg_comp_array__10307 */

#ifndef kcg_comp_array__10317
extern kcg_bool kcg_comp_array__10317(
  array__10317 *kcg_c1,
  array__10317 *kcg_c2);
#endif /* kcg_comp_array__10317 */

#ifndef kcg_comp_array__10416
extern kcg_bool kcg_comp_array__10416(
  array__10416 *kcg_c1,
  array__10416 *kcg_c2);
#endif /* kcg_comp_array__10416 */

#ifndef kcg_comp_array__10425
extern kcg_bool kcg_comp_array__10425(
  array__10425 *kcg_c1,
  array__10425 *kcg_c2);
#endif /* kcg_comp_array__10425 */

#ifndef kcg_comp_array__10437
extern kcg_bool kcg_comp_array__10437(
  array__10437 *kcg_c1,
  array__10437 *kcg_c2);
#endif /* kcg_comp_array__10437 */

#ifndef kcg_comp_array_int_5
extern kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2);
#endif /* kcg_comp_array_int_5 */

#ifndef kcg_comp_array_int_64
extern kcg_bool kcg_comp_array_int_64(
  array_int_64 *kcg_c1,
  array_int_64 *kcg_c2);
#endif /* kcg_comp_array_int_64 */

#ifndef kcg_comp_array__10459
extern kcg_bool kcg_comp_array__10459(
  array__10459 *kcg_c1,
  array__10459 *kcg_c2);
#endif /* kcg_comp_array__10459 */

#ifndef kcg_comp_array__10468
extern kcg_bool kcg_comp_array__10468(
  array__10468 *kcg_c1,
  array__10468 *kcg_c2);
#endif /* kcg_comp_array__10468 */

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

#ifndef kcg_comp_array__10505
extern kcg_bool kcg_comp_array__10505(
  array__10505 *kcg_c1,
  array__10505 *kcg_c2);
#endif /* kcg_comp_array__10505 */

#ifndef kcg_comp_array__10508
extern kcg_bool kcg_comp_array__10508(
  array__10508 *kcg_c1,
  array__10508 *kcg_c2);
#endif /* kcg_comp_array__10508 */

#ifndef kcg_comp_array_int_99
extern kcg_bool kcg_comp_array_int_99(
  array_int_99 *kcg_c1,
  array_int_99 *kcg_c2);
#endif /* kcg_comp_array_int_99 */

#ifndef kcg_comp_array__10537
extern kcg_bool kcg_comp_array__10537(
  array__10537 *kcg_c1,
  array__10537 *kcg_c2);
#endif /* kcg_comp_array__10537 */

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

#ifndef kcg_comp_array_int_99_33
extern kcg_bool kcg_comp_array_int_99_33(
  array_int_99_33 *kcg_c1,
  array_int_99_33 *kcg_c2);
#endif /* kcg_comp_array_int_99_33 */

#ifndef kcg_comp_array__10560
extern kcg_bool kcg_comp_array__10560(
  array__10560 *kcg_c1,
  array__10560 *kcg_c2);
#endif /* kcg_comp_array__10560 */

#ifndef kcg_comp_array__10563
extern kcg_bool kcg_comp_array__10563(
  array__10563 *kcg_c1,
  array__10563 *kcg_c2);
#endif /* kcg_comp_array__10563 */

#ifndef kcg_comp_array__10566
extern kcg_bool kcg_comp_array__10566(
  array__10566 *kcg_c1,
  array__10566 *kcg_c2);
#endif /* kcg_comp_array__10566 */

#ifndef kcg_comp_array_int_128_32
extern kcg_bool kcg_comp_array_int_128_32(
  array_int_128_32 *kcg_c1,
  array_int_128_32 *kcg_c2);
#endif /* kcg_comp_array_int_128_32 */

#ifndef kcg_comp_array__10572
extern kcg_bool kcg_comp_array__10572(
  array__10572 *kcg_c1,
  array__10572 *kcg_c2);
#endif /* kcg_comp_array__10572 */

#ifndef kcg_comp_array__10575
extern kcg_bool kcg_comp_array__10575(
  array__10575 *kcg_c1,
  array__10575 *kcg_c2);
#endif /* kcg_comp_array__10575 */

#ifndef kcg_comp_array_int_11
extern kcg_bool kcg_comp_array_int_11(
  array_int_11 *kcg_c1,
  array_int_11 *kcg_c2);
#endif /* kcg_comp_array_int_11 */

#ifndef kcg_comp_array__10581
extern kcg_bool kcg_comp_array__10581(
  array__10581 *kcg_c1,
  array__10581 *kcg_c2);
#endif /* kcg_comp_array__10581 */

#ifndef kcg_comp_array__10584
extern kcg_bool kcg_comp_array__10584(
  array__10584 *kcg_c1,
  array__10584 *kcg_c2);
#endif /* kcg_comp_array__10584 */

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

#ifndef kcg_comp_array__10593
extern kcg_bool kcg_comp_array__10593(
  array__10593 *kcg_c1,
  array__10593 *kcg_c2);
#endif /* kcg_comp_array__10593 */

#ifndef kcg_comp_array__10596
extern kcg_bool kcg_comp_array__10596(
  array__10596 *kcg_c1,
  array__10596 *kcg_c2);
#endif /* kcg_comp_array__10596 */

#ifndef kcg_comp_array__10599
extern kcg_bool kcg_comp_array__10599(
  array__10599 *kcg_c1,
  array__10599 *kcg_c2);
#endif /* kcg_comp_array__10599 */

#ifndef kcg_comp_array__10602
extern kcg_bool kcg_comp_array__10602(
  array__10602 *kcg_c1,
  array__10602 *kcg_c2);
#endif /* kcg_comp_array__10602 */

#ifndef kcg_comp_array__10605
extern kcg_bool kcg_comp_array__10605(
  array__10605 *kcg_c1,
  array__10605 *kcg_c2);
#endif /* kcg_comp_array__10605 */

#ifndef kcg_comp_array__10608
extern kcg_bool kcg_comp_array__10608(
  array__10608 *kcg_c1,
  array__10608 *kcg_c2);
#endif /* kcg_comp_array__10608 */

#ifndef kcg_comp_array__10611
extern kcg_bool kcg_comp_array__10611(
  array__10611 *kcg_c1,
  array__10611 *kcg_c2);
#endif /* kcg_comp_array__10611 */

#ifndef kcg_comp_array_int_32_32
extern kcg_bool kcg_comp_array_int_32_32(
  array_int_32_32 *kcg_c1,
  array_int_32_32 *kcg_c2);
#endif /* kcg_comp_array_int_32_32 */

#ifndef kcg_comp_array__10617
extern kcg_bool kcg_comp_array__10617(
  array__10617 *kcg_c1,
  array__10617 *kcg_c2);
#endif /* kcg_comp_array__10617 */

#ifndef kcg_comp_array__10620
extern kcg_bool kcg_comp_array__10620(
  array__10620 *kcg_c1,
  array__10620 *kcg_c2);
#endif /* kcg_comp_array__10620 */

#define kcg_comp_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_comp_array_int_3

#define kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_copy_array_int_3

#define kcg_comp_sTractionIdentity_T_Packet_TrainTypes_Pkg kcg_comp_struct__9791

#define kcg_copy_sTractionIdentity_T_Packet_TrainTypes_Pkg kcg_copy_struct__9791

#define kcg_comp_aTractionIdentity_T_Packet_TrainTypes_Pkg kcg_comp_array__9796

#define kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg kcg_copy_array__9796

#define kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg kcg_comp_struct__9799

#define kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg kcg_copy_struct__9799

#define kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg kcg_comp_struct__9815

#define kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg kcg_copy_struct__9815

#define kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg kcg_comp_struct__9820

#define kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg kcg_copy_struct__9820

#define kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg kcg_comp_struct__9825

#define kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg kcg_copy_struct__9825

#define kcg_comp_telephoneNumber_T_Packet_TrainTypes_Pkg kcg_comp_array_int_15

#define kcg_copy_telephoneNumber_T_Packet_TrainTypes_Pkg kcg_copy_array_int_15

#define kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg kcg_comp_struct__9833

#define kcg_copy_sNID_RADIO_T_Packet_TrainTypes_Pkg kcg_copy_struct__9833

#define kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg kcg_comp_array__9838

#define kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg kcg_copy_array__9838

#define kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg kcg_comp_struct__9841

#define kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg kcg_copy_struct__9841

#define kcg_comp_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg kcg_comp_struct__9739

#define kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg kcg_copy_struct__9739

#define kcg_comp_PT0_PositionReport_T_Packet_TrainTypes_Pkg kcg_comp_struct__9763

#define kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg kcg_copy_struct__9763

#define kcg_comp_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg kcg_comp_struct__9768

#define kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg kcg_copy_struct__9768

#define kcg_comp_outPackets_T_Common_Types_Pkg kcg_comp_struct__9847

#define kcg_copy_outPackets_T_Common_Types_Pkg kcg_copy_struct__9847

#define kcg_comp_RBC_Id_T_Common_Types_Pkg kcg_comp_struct__10044

#define kcg_copy_RBC_Id_T_Common_Types_Pkg kcg_copy_struct__10044

#define kcg_comp_Driver2MAR_T_MA_Request kcg_comp_struct__10011

#define kcg_copy_Driver2MAR_T_MA_Request kcg_copy_struct__10011

#define kcg_comp_RadioMetadata_T_Common_Types_Pkg kcg_comp_struct__10051

#define kcg_copy_RadioMetadata_T_Common_Types_Pkg kcg_copy_struct__10051

#define kcg_comp_ReceivedMessage_T_Common_Types_Pkg kcg_comp_struct__10082

#define kcg_copy_ReceivedMessage_T_Common_Types_Pkg kcg_copy_struct__10082

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__10077

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__10077

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__10074

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__10074

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__10066

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__10066

#define kcg_comp_T_Mode_Level_Level_And_Mode_Types_Pkg kcg_comp_struct__10134

#define kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg kcg_copy_struct__10134

#define kcg_comp_T_Reversing_Data_Level_And_Mode_Types_Pkg kcg_comp_struct__10140

#define kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg kcg_copy_struct__10140

#define kcg_comp_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg kcg_comp_struct__10148

#define kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg kcg_copy_struct__10148

#define kcg_comp_T_Mode_Profile_Level_And_Mode_Types_Pkg kcg_comp_struct__10156

#define kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg kcg_copy_struct__10156

#define kcg_comp_P046_section_enum_T_TM kcg_comp_struct__10182

#define kcg_copy_P046_section_enum_T_TM kcg_copy_struct__10182

#define kcg_comp_P046_OBU_sectionlist_enum_T_TM kcg_comp_array__10188

#define kcg_copy_P046_OBU_sectionlist_enum_T_TM kcg_copy_array__10188

#define kcg_comp_P041_section_enum_T_TM kcg_comp_struct__10191

#define kcg_copy_P041_section_enum_T_TM kcg_copy_struct__10191

#define kcg_comp_P041_OBU_sectionlist_enum_T_TM kcg_comp_array__10198

#define kcg_copy_P041_OBU_sectionlist_enum_T_TM kcg_copy_array__10198

#define kcg_comp_P003_OBU_l_section_enum_T_TM kcg_comp_struct__10276

#define kcg_copy_P003_OBU_l_section_enum_T_TM kcg_copy_struct__10276

#define kcg_comp_P003_OBU_l_sectionlist_enum_T_TM kcg_comp_array__10282

#define kcg_copy_P003_OBU_l_sectionlist_enum_T_TM kcg_copy_array__10282

#define kcg_comp_P003_OBU_k_m_section_enum_T_TM kcg_comp_struct__10285

#define kcg_copy_P003_OBU_k_m_section_enum_T_TM kcg_copy_struct__10285

#define kcg_comp_P003_OBU_k_m_sectionlist_enum_T_TM kcg_comp_array__10292

#define kcg_copy_P003_OBU_k_m_sectionlist_enum_T_TM kcg_copy_array__10292

#define kcg_comp_P003_OBU_k_section_enum_T_TM kcg_comp_struct__10295

#define kcg_copy_P003_OBU_k_section_enum_T_TM kcg_copy_struct__10295

#define kcg_comp_P003_OBU_k_sectionlist_enum_T_TM kcg_comp_array__10307

#define kcg_copy_P003_OBU_k_sectionlist_enum_T_TM kcg_copy_array__10307

#define kcg_comp_P003_OBU_n_section_enum_T_TM kcg_comp_struct__10310

#define kcg_copy_P003_OBU_n_section_enum_T_TM kcg_copy_struct__10310

#define kcg_comp_P003_OBU_n_sectionlist_enum_T_TM kcg_comp_array__10317

#define kcg_copy_P003_OBU_n_sectionlist_enum_T_TM kcg_copy_array__10317

#define kcg_comp_P003_OBU_nid_c_section_enum_T_TM kcg_comp_struct__10235

#define kcg_copy_P003_OBU_nid_c_section_enum_T_TM kcg_copy_struct__10235

#define kcg_comp__5_P003_OBU_nid_c_sectionlist_enum_T_TM kcg_comp_array__10240

#define kcg_copy__5_P003_OBU_nid_c_sectionlist_enum_T_TM kcg_copy_array__10240

#define kcg_comp_P203V1_OBU_l_section_enum_T_TM_baseline2 kcg_comp_struct__10276

#define kcg_copy_P203V1_OBU_l_section_enum_T_TM_baseline2 kcg_copy_struct__10276

#define kcg_comp_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2 kcg_comp_array__10282

#define kcg_copy_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2 kcg_copy_array__10282

#define kcg_comp_P003_OBU_T_TM kcg_comp_struct__10356

#define kcg_copy_P003_OBU_T_TM kcg_copy_struct__10356

#define kcg_comp_Array24_TM kcg_comp_array_int_24

#define kcg_copy_Array24_TM kcg_copy_array_int_24

#define kcg_comp_P203V1_OBU_k_m_section_enum_T_TM_baseline2 kcg_comp_struct__10285

#define kcg_copy_P203V1_OBU_k_m_section_enum_T_TM_baseline2 kcg_copy_struct__10285

#define kcg_comp__1_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2 kcg_comp_array__10292

#define kcg_copy__1_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2 kcg_copy_array__10292

#define kcg_comp_Array03_TM kcg_comp_array_int_3

#define kcg_copy_Array03_TM kcg_copy_array_int_3

#define kcg_comp_Array15_TM kcg_comp_array_int_15

#define kcg_copy_Array15_TM kcg_copy_array_int_15

#define kcg_comp_P203V1_OBU_k_section_enum_T_TM_baseline2 kcg_comp_struct__10295

#define kcg_copy_P203V1_OBU_k_section_enum_T_TM_baseline2 kcg_copy_struct__10295

#define kcg_comp_P015_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P015_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2 kcg_comp_array__10307

#define kcg_copy_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2 kcg_copy_array__10307

#define kcg_comp_Array06_TM kcg_comp_array_int_6

#define kcg_copy_Array06_TM kcg_copy_array_int_6

#define kcg_comp_P203V1_OBU_n_section_enum_T_TM_baseline2 kcg_comp_struct__10310

#define kcg_copy_P203V1_OBU_n_section_enum_T_TM_baseline2 kcg_copy_struct__10310

#define kcg_comp_P015_section_enum_T_TM kcg_comp_struct__10098

#define kcg_copy_P015_section_enum_T_TM kcg_copy_struct__10098

#define kcg_comp_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2 kcg_comp_array__10317

#define kcg_copy_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2 kcg_copy_array__10317

#define kcg_comp_P015_OBU_sectionlist_enum_T_TM kcg_comp_array__10106

#define kcg_copy_P015_OBU_sectionlist_enum_T_TM kcg_copy_array__10106

#define kcg_comp_P203V1_OBU_T_TM_baseline2 kcg_comp_struct__10320

#define kcg_copy_P203V1_OBU_T_TM_baseline2 kcg_copy_struct__10320

#define kcg_comp_P015_OBU_T_TM kcg_comp_struct__10109

#define kcg_copy_P015_OBU_T_TM kcg_copy_struct__10109

#define kcg_comp_P003_permanent_data_T_TM_baseline2 kcg_comp_struct__10351

#define kcg_copy_P003_permanent_data_T_TM_baseline2 kcg_copy_struct__10351

#define kcg_comp_P003V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_Array05_TM kcg_comp_array_int_5

#define kcg_copy_Array05_TM kcg_copy_array_int_5

#define kcg_comp_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_comp_array__10437

#define kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_copy_array__10437

#define kcg_comp_P021_OBU_T_TM kcg_comp_struct__10540

#define kcg_copy_P021_OBU_T_TM kcg_copy_struct__10540

#define kcg_comp_P027V1_OBU_T_TM_baseline2 kcg_comp_struct__10440

#define kcg_copy_P027V1_OBU_T_TM_baseline2 kcg_copy_struct__10440

#define kcg_comp_P021_OBU_sectionlist_enum_T_TM kcg_comp_array__10537

#define kcg_copy_P021_OBU_sectionlist_enum_T_TM kcg_copy_array__10537

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_comp_struct__10419

#define kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_copy_struct__10419

#define kcg_comp_P021_section_enum_T_TM kcg_comp_struct__10530

#define kcg_copy_P021_section_enum_T_TM kcg_copy_struct__10530

#define kcg_comp__2_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_comp_array__10425

#define kcg_copy__2_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_copy_array__10425

#define kcg_comp_P027V1_section_enum_T_TM_baseline2 kcg_comp_struct__10428

#define kcg_copy_P027V1_section_enum_T_TM_baseline2 kcg_copy_struct__10428

#define kcg_comp_P027V1_OBU_body_enum_T_TM_baseline2 kcg_comp_struct__10447

#define kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2 kcg_copy_struct__10447

#define kcg_comp_P003V1_section_enum_T_TM_baseline2 kcg_comp_struct__10235

#define kcg_copy_P003V1_section_enum_T_TM_baseline2 kcg_copy_struct__10235

#define kcg_comp_P003V1_sectionlist_enum_T_TM_baseline2 kcg_comp_array__10240

#define kcg_copy_P003V1_sectionlist_enum_T_TM_baseline2 kcg_copy_array__10240

#define kcg_comp_P003V1_OBU_T_TM_baseline2 kcg_comp_struct__10243

#define kcg_copy_P003V1_OBU_T_TM_baseline2 kcg_copy_struct__10243

#define kcg_comp_trainProperties_T_TrainPosition_Types_Pck kcg_comp_struct__10016

#define kcg_copy_trainProperties_T_TrainPosition_Types_Pck kcg_copy_struct__10016

#define kcg_comp_infoFromLinking_T_TrainPosition_Types_Pck kcg_comp_struct__9924

#define kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck kcg_copy_struct__9924

#define kcg_comp_positionedBG_T_TrainPosition_Types_Pck kcg_comp_struct__9983

#define kcg_copy_positionedBG_T_TrainPosition_Types_Pck kcg_copy_struct__9983

#define kcg_comp_trainPosition_T_TrainPosition_Types_Pck kcg_comp_struct__9994

#define kcg_copy_trainPosition_T_TrainPosition_Types_Pck kcg_copy_struct__9994

#define kcg_comp_SSP_matrix_t_TA_MRSP kcg_comp_array__10459

#define kcg_copy_SSP_matrix_t_TA_MRSP kcg_copy_array__10459

#define kcg_comp_SSP_cat_t_TA_MRSP kcg_comp_array__10416

#define kcg_copy_SSP_cat_t_TA_MRSP kcg_copy_array__10416

#define kcg_comp_SSP_Mark_ValidSSPsection_TA_MRSP kcg_comp_struct__10477

#define kcg_copy_SSP_Mark_ValidSSPsection_TA_MRSP kcg_copy_struct__10477

#define kcg_comp_SSP_relevant_target_t_TA_MRSP kcg_comp_struct__10488

#define kcg_copy_SSP_relevant_target_t_TA_MRSP kcg_copy_struct__10488

#define kcg_comp_SSP_section_t_TA_MRSP kcg_comp_struct__10411

#define kcg_copy_SSP_section_t_TA_MRSP kcg_copy_struct__10411

#define kcg_comp_SSP_valid_section_t_TA_MRSP kcg_comp_struct__10482

#define kcg_copy_SSP_valid_section_t_TA_MRSP kcg_copy_struct__10482

#define kcg_comp_SSP_t_list_t_TA_MRSP kcg_comp_array__10468

#define kcg_copy_SSP_t_list_t_TA_MRSP kcg_copy_array__10468

#define kcg_comp_SSP_t_indexed_matrix_element_TA_MRSP kcg_comp_struct__10462

#define kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP kcg_copy_struct__10462

#define kcg_comp_SSP_t_indexed_targets_list_t_TA_MRSP kcg_comp_array__10505

#define kcg_copy_SSP_t_indexed_targets_list_t_TA_MRSP kcg_copy_array__10505

#define kcg_comp_SSP_t_matrix_t_TA_MRSP kcg_comp_array_int_33_11

#define kcg_copy_SSP_t_matrix_t_TA_MRSP kcg_copy_array_int_33_11

#define kcg_comp_SSP_t_cat_t_TA_MRSP kcg_comp_array_int_33

#define kcg_copy_SSP_t_cat_t_TA_MRSP kcg_copy_array_int_33

#define kcg_comp_SSP_t_indexed_trgt_t_TA_MRSP kcg_comp_struct__10500

#define kcg_copy_SSP_t_indexed_trgt_t_TA_MRSP kcg_copy_struct__10500

#define kcg_comp_FlagsForModeAndLevel_t_TrackAtlasTypes kcg_comp_struct__10164

#define kcg_copy_FlagsForModeAndLevel_t_TrackAtlasTypes kcg_copy_struct__10164

#define kcg_comp_DataForModeAndLevel_t_TrackAtlasTypes kcg_comp_struct__10201

#define kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes kcg_copy_struct__10201

#define kcg_comp_DataForDMI_t_TrackAtlasTypes kcg_comp_struct__10511

#define kcg_copy_DataForDMI_t_TrackAtlasTypes kcg_copy_struct__10511

#define kcg_comp_DataForSupervision_nextGen_t_TrackAtlasTypes kcg_comp_struct__10518

#define kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes kcg_copy_struct__10518

#define kcg_comp_GradientProfile_for_DMI_t_TrackAtlasTypes kcg_comp_array__10229

#define kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes kcg_copy_array__10229

#define kcg_comp__3_GradientProfile_for_DMI_section_t_TrackAtlasTypes kcg_comp_struct__10214

#define kcg_copy__3_GradientProfile_for_DMI_section_t_TrackAtlasTypes kcg_copy_struct__10214

#define kcg_comp_MRSP_section_t_TrackAtlasTypes kcg_comp_struct__10493

#define kcg_copy_MRSP_section_t_TrackAtlasTypes kcg_copy_struct__10493

#define kcg_comp_MRSP_Profile_t_TrackAtlasTypes kcg_comp_array__10508

#define kcg_copy_MRSP_Profile_t_TrackAtlasTypes kcg_copy_array__10508

#define kcg_comp_Endtimer_t_TrackAtlasTypes kcg_comp_struct__9875

#define kcg_copy_Endtimer_t_TrackAtlasTypes kcg_copy_struct__9875

#define kcg_comp_DP_or_OL_t_TrackAtlasTypes kcg_comp_struct__9880

#define kcg_copy_DP_or_OL_t_TrackAtlasTypes kcg_copy_struct__9880

#define kcg_comp_MovementAuthoritySection_t_TrackAtlasTypes kcg_comp_struct__9863

#define kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes kcg_copy_struct__9863

#define kcg_comp__4_MovementAuthoritySectionlist_t_TrackAtlasTypes kcg_comp_array__9872

#define kcg_copy__4_MovementAuthoritySectionlist_t_TrackAtlasTypes kcg_copy_array__9872

#define kcg_comp_MovementAuthority_t_TrackAtlasTypes kcg_comp_struct__9886

#define kcg_copy_MovementAuthority_t_TrackAtlasTypes kcg_copy_struct__9886

#define kcg_comp_Gradient_section_t_TrackAtlasTypes kcg_comp_struct__10221

#define kcg_copy_Gradient_section_t_TrackAtlasTypes kcg_copy_struct__10221

#define kcg_comp_GradientProfile_t_TrackAtlasTypes kcg_comp_array__10232

#define kcg_copy_GradientProfile_t_TrackAtlasTypes kcg_copy_array__10232

#define kcg_comp_Radio_TrainTrack_Message_T_Radio_Types_Pkg kcg_comp_struct__9857

#define kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg kcg_copy_struct__9857

#define kcg_comp_Radio_TrainTrack_Header_T_Radio_Types_Pkg kcg_comp_struct__9776

#define kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg kcg_copy_struct__9776

#define kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_comp_struct__10026

#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_copy_struct__10026

#define kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_comp_struct__9904

#define kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_copy_struct__9904

#define kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg kcg_comp_struct__9936

#define kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg kcg_copy_struct__9936

#define kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg kcg_comp_struct__9943

#define kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg kcg_copy_struct__9943

#define kcg_comp_odometry_T_Obu_BasicTypes_Pkg kcg_comp_struct__9949

#define kcg_copy_odometry_T_Obu_BasicTypes_Pkg kcg_copy_struct__9949

#define kcg_comp_LinkedBGs_T_BG_Types_Pkg kcg_comp_array__9933

#define kcg_copy_LinkedBGs_T_BG_Types_Pkg kcg_copy_array__9933

#define kcg_comp_passedBG_T_BG_Types_Pkg kcg_comp_struct__9977

#define kcg_copy_passedBG_T_BG_Types_Pkg kcg_copy_struct__9977

#define kcg_comp_LinkedBG_T_BG_Types_Pkg kcg_comp_struct__9910

#define kcg_copy_LinkedBG_T_BG_Types_Pkg kcg_copy_struct__9910

#define kcg_comp_BG_Header_T_BG_Types_Pkg kcg_comp_struct__9959

#define kcg_copy_BG_Header_T_BG_Types_Pkg kcg_copy_struct__9959

#define kcg_comp_Position_Report_based_on_two_balise_groups_TrainToTrack kcg_comp_struct__9719

#define kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack kcg_copy_struct__9719

#define kcg_comp_Position_Report_TrainToTrack kcg_comp_struct__9744

#define kcg_copy_Position_Report_TrainToTrack kcg_copy_struct__9744

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-08-07T17:15:59
*************************************************************$ */


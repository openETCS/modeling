/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/Simulation\kcg_s2c_config.txt
** Generation date: 2015-07-28T17:06:46
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
  _10_M_NVEBCL_Confidence_level_99_99 = 4,
  _9_M_NVEBCL_Confidence_level_99_999 = 5,
  _8_M_NVEBCL_Confidence_level_99_9999 = 6,
  _7_M_NVEBCL_Confidence_level_99_99999 = 7,
  _6_M_NVEBCL_Confidence_level_99_999999 = 8,
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
  _11_NC_TRAIN_Freight_train_braked_in_P_position = 1,
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
  _13_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA = 0,
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
  _12_Q_LENGTH_Train_integrity_confirmed_by_integrity_monitoring_device = 1,
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

/* V_NVLIMSUPERV */
typedef kcg_int V_NVLIMSUPERV;

/* V_NVKVINT */
typedef kcg_int V_NVKVINT;

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
} struct__9704;

/* TrainToTrack::Position_Report_based_on_two_balise_groups */
typedef struct__9704 Position_Report_based_on_two_balise_groups_TrainToTrack;

typedef struct {
  kcg_bool valid;
  Position_Report_based_on_two_balise_groups_TrainToTrack packet1;
} struct__9724;

/* Packet_TrainTypes_Pkg::PT1_PositionReport_2BG_T */
typedef struct__9724 PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg;

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
} struct__9729;

/* TrainToTrack::Position_Report */
typedef struct__9729 Position_Report_TrainToTrack;

typedef struct {
  kcg_bool valid;
  Position_Report_TrainToTrack packet0;
} struct__9748;

/* Packet_TrainTypes_Pkg::PT0_PositionReport_T */
typedef struct__9748 PT0_PositionReport_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  kcg_int t_mar;
  kcg_int t_timeoutrqst;
  kcg_int t_cycrqst;
} struct__9753;

/* Packet_Types_Pkg::P57_MovementAuthorityRequestParameters_T */
typedef struct__9753 P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg;

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
} struct__9761;

/* Radio_Types_Pkg::Radio_TrainTrack_Header_T */
typedef struct__9761 Radio_TrainTrack_Header_T_Radio_Types_Pkg;

typedef kcg_int array_int_3[3];

/* TM::Array03 */
typedef array_int_3 Array03_TM;

/* Packet_TrainTypes_Pkg::aNID_NTC_T */
typedef array_int_3 aNID_NTC_T_Packet_TrainTypes_Pkg;

typedef struct {
  M_VOLTAGE m_voltage;
  NID_CTRACTION nid_ctraction;
} struct__9776;

/* Packet_TrainTypes_Pkg::sTractionIdentity_T */
typedef struct__9776 sTractionIdentity_T_Packet_TrainTypes_Pkg;

typedef sTractionIdentity_T_Packet_TrainTypes_Pkg array__9781[3];

/* Packet_TrainTypes_Pkg::aTractionIdentity_T */
typedef array__9781 aTractionIdentity_T_Packet_TrainTypes_Pkg;

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
} struct__9784;

/* Packet_TrainTypes_Pkg::PT11_ValidatedTrainData_T */
typedef struct__9784 PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  NID_LTRBG transitionInformation;
} struct__9800;

/* Packet_TrainTypes_Pkg::PT9_Level23_TransitionInformation_T */
typedef struct__9800 PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  NID_OPERATIONAL TrainRunningNumber;
} struct__9805;

/* Packet_TrainTypes_Pkg::PT5_TrainRunningNumber */
typedef struct__9805 PT5_TrainRunningNumber_Packet_TrainTypes_Pkg;

typedef struct { kcg_bool valid; M_ERROR M_ERROR; } struct__9810;

/* Packet_TrainTypes_Pkg::PT4_ErrorReporting_T */
typedef struct__9810 PT4_ErrorReporting_T_Packet_TrainTypes_Pkg;

typedef kcg_int array_int_15[15];

/* TM::Array15 */
typedef array_int_15 Array15_TM;

/* Packet_TrainTypes_Pkg::telephoneNumber_T */
typedef array_int_15 telephoneNumber_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  telephoneNumber_T_Packet_TrainTypes_Pkg telephoneNumber;
} struct__9818;

/* Packet_TrainTypes_Pkg::sNID_RADIO_T */
typedef struct__9818 sNID_RADIO_T_Packet_TrainTypes_Pkg;

typedef sNID_RADIO_T_Packet_TrainTypes_Pkg array__9823[1];

/* Packet_TrainTypes_Pkg::aNID_RADIO_T */
typedef array__9823 aNID_RADIO_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int number;
  aNID_RADIO_T_Packet_TrainTypes_Pkg aNID_RADIO;
} struct__9826;

/* Packet_TrainTypes_Pkg::PT3_OnboardTelephoneNumbers_T */
typedef struct__9826 PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg;

typedef struct {
  PT0_PositionReport_T_Packet_TrainTypes_Pkg p0;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg p1;
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg p3;
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg p4;
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg p5;
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg p9;
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg p11;
} struct__9832;

/* Common_Types_Pkg::outPackets_T */
typedef struct__9832 outPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_bool present;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg header;
  outPackets_T_Common_Types_Pkg packets;
} struct__9842;

/* Radio_Types_Pkg::Radio_TrainTrack_Message_T */
typedef struct__9842 Radio_TrainTrack_Message_T_Radio_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool q_endsection;
  L_internal_Type_Obu_BasicTypes_Pkg l_section;
  kcg_bool q_sectiontimer;
  T_internal_Type_Obu_BasicTypes_Pkg t_sectiontimer;
  L_internal_Type_Obu_BasicTypes_Pkg d_sectiontimerstoploc;
} struct__9848;

/* TrackAtlasTypes::MovementAuthoritySection_t */
typedef struct__9848 MovementAuthoritySection_t_TrackAtlasTypes;

typedef MovementAuthoritySection_t_TrackAtlasTypes array__9857[10];

/* TrackAtlasTypes::MovementAuthoritySectionlist_t */
typedef array__9857 _4_MovementAuthoritySectionlist_t_TrackAtlasTypes;

typedef struct {
  T_internal_Type_Obu_BasicTypes_Pkg t_endtimer;
  L_internal_Type_Obu_BasicTypes_Pkg d_endtimerstoploc;
} struct__9860;

/* TrackAtlasTypes::Endtimer_t */
typedef struct__9860 Endtimer_t_TrackAtlasTypes;

typedef struct {
  L_internal_Type_Obu_BasicTypes_Pkg d_DP_or_OL;
  V_internal_Type_Obu_BasicTypes_Pkg v_release;
  kcg_bool calc_v_release_onboard;
} struct__9865;

/* TrackAtlasTypes::DP_or_OL_t */
typedef struct__9865 DP_or_OL_t_TrackAtlasTypes;

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
} struct__9871;

/* TrackAtlasTypes::MovementAuthority_t */
typedef struct__9871 MovementAuthority_t_TrackAtlasTypes;

typedef struct {
  L_internal_Type_Obu_BasicTypes_Pkg nominal;
  L_internal_Type_Obu_BasicTypes_Pkg d_min;
  L_internal_Type_Obu_BasicTypes_Pkg d_max;
} struct__9889;

/* Obu_BasicTypes_Pkg::LocWithInAcc_T */
typedef struct__9889 LocWithInAcc_T_Obu_BasicTypes_Pkg;

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
} struct__9895;

/* BG_Types_Pkg::LinkedBG_T */
typedef struct__9895 LinkedBG_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_BG nid_bg_fromLinkingBG;
  NID_C nid_c_fromLinkingBG;
  LocWithInAcc_T_Obu_BasicTypes_Pkg expectedLocation;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_link;
  LinkedBG_T_BG_Types_Pkg linkingInfo;
} struct__9909;

/* TrainPosition_Types_Pck::infoFromLinking_T */
typedef struct__9909 infoFromLinking_T_TrainPosition_Types_Pck;

typedef LinkedBG_T_BG_Types_Pkg array__9918[4];

/* BG_Types_Pkg::LinkedBGs_T */
typedef array__9918 LinkedBGs_T_BG_Types_Pkg;

typedef struct {
  V_internal_Type_Obu_BasicTypes_Pkg v_safeNominal;
  V_internal_Type_Obu_BasicTypes_Pkg v_rawNominal;
  V_internal_Type_Obu_BasicTypes_Pkg v_lower;
  V_internal_Type_Obu_BasicTypes_Pkg v_upper;
} struct__9921;

/* Obu_BasicTypes_Pkg::OdometrySpeeds_T */
typedef struct__9921 OdometrySpeeds_T_Obu_BasicTypes_Pkg;

typedef struct {
  L_internal_Type_Obu_BasicTypes_Pkg o_nominal;
  L_internal_Type_Obu_BasicTypes_Pkg o_min;
  L_internal_Type_Obu_BasicTypes_Pkg o_max;
} struct__9928;

/* Obu_BasicTypes_Pkg::OdometryLocations_T */
typedef struct__9928 OdometryLocations_T_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_bool valid;
  T_internal_Type_Obu_BasicTypes_Pkg timestamp;
  OdometryLocations_T_Obu_BasicTypes_Pkg odo;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg speed;
  A_internal_Type_Obu_BasicTypes_Pkg acceleration;
  odoMotionState_T_Obu_BasicTypes_Pkg motionState;
  odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection;
} struct__9934;

/* Obu_BasicTypes_Pkg::odometry_T */
typedef struct__9934 odometry_T_Obu_BasicTypes_Pkg;

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
} struct__9944;

/* BG_Types_Pkg::BG_Header_T */
typedef struct__9944 BG_Header_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  BG_Header_T_BG_Types_Pkg BG_Header;
  LinkedBGs_T_BG_Types_Pkg linkedBGs;
} struct__9962;

/* BG_Types_Pkg::passedBG_T */
typedef struct__9962 passedBG_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_C nid_c;
  NID_BG nid_bg;
  Q_LINK q_link;
  LocWithInAcc_T_Obu_BasicTypes_Pkg location;
  kcg_int seqNoOnTrack;
  infoFromLinking_T_TrainPosition_Types_Pck infoFromLinking;
  passedBG_T_BG_Types_Pkg infoFromPassing;
} struct__9968;

/* TrainPosition_Types_Pck::positionedBG_T */
typedef struct__9968 positionedBG_T_TrainPosition_Types_Pck;

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
} struct__9979;

/* TrainPosition_Types_Pck::trainPosition_T */
typedef struct__9979 trainPosition_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool trackAheadFree;
  kcg_bool driverSelectsStart;
} struct__9996;

/* MA_Request::Driver2MAR_T */
typedef struct__9996 Driver2MAR_T_MA_Request;

typedef struct {
  NID_ENGINE nid_engine;
  NID_OPERATIONAL nid_operational;
  L_TRAIN l_train;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_baliseAntenna_2_frontend;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_frontend_2_rearend;
  LocWithInAcc_T_Obu_BasicTypes_Pkg locationAccuracy_DefaultValue;
  LocWithInAcc_T_Obu_BasicTypes_Pkg centerDetectionAcc_DefaultValue;
} struct__10001;

/* TrainPosition_Types_Pck::trainProperties_T */
typedef struct__10001 trainProperties_T_TrainPosition_Types_Pck;

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
} struct__10011;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef struct__10011 Radio_TrackTrain_Header_T_Radio_Types_Pkg;

typedef struct {
  kcg_bool valid;
  NID_C nid_c;
  NID_RBC rbc_id;
  kcg_int device_id;
} struct__10029;

/* Common_Types_Pkg::RBC_Id_T */
typedef struct__10029 RBC_Id_T_Common_Types_Pkg;

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
} struct__10036;

/* Common_Types_Pkg::RadioMetadata_T */
typedef struct__10036 RadioMetadata_T_Common_Types_Pkg;

typedef kcg_int array_int_500[500];

/* Common_Types_Pkg::CompressedPacketData_T */
typedef array_int_500 CompressedPacketData_T_Common_Types_Pkg;

typedef struct {
  NID_PACKET nid_packet;
  Q_DIR q_dir;
  kcg_bool valid;
  kcg_int startAddress;
  kcg_int endAddress;
} struct__10051;

/* Common_Types_Pkg::MetadataElement_T */
typedef struct__10051 MetadataElement_T_Common_Types_Pkg;

typedef MetadataElement_T_Common_Types_Pkg array__10059[30];

/* Common_Types_Pkg::Metadata_T */
typedef array__10059 Metadata_T_Common_Types_Pkg;

typedef struct {
  Metadata_T_Common_Types_Pkg PacketHeaders;
  CompressedPacketData_T_Common_Types_Pkg PacketData;
} struct__10062;

/* Common_Types_Pkg::CompressedPackets_T */
typedef struct__10062 CompressedPackets_T_Common_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MsgSource_T_Common_Types_Pkg source;
  RadioMetadata_T_Common_Types_Pkg radioMetadata;
  BG_Header_T_BG_Types_Pkg BG_Common_Header;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
  CompressedPackets_T_Common_Types_Pkg packets;
  RBC_Id_T_Common_Types_Pkg sendingRBC;
} struct__10067;

/* Common_Types_Pkg::ReceivedMessage_T */
typedef struct__10067 ReceivedMessage_T_Common_Types_Pkg;

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
} struct__10083;

/* TM::P015_section_enum_T */
typedef struct__10083 P015_section_enum_T_TM;

typedef P015_section_enum_T_TM array__10091[32];

/* TM::P015_OBU_sectionlist_enum_T */
typedef array__10091 P015_OBU_sectionlist_enum_T_TM;

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
} struct__10094;

/* TM::P015_OBU_T */
typedef struct__10094 P015_OBU_T_TM;

typedef struct { kcg_bool valid; M_LEVEL level; M_MODE Mode; } struct__10119;

/* Level_And_Mode_Types_Pkg::T_Mode_Level */
typedef struct__10119 T_Mode_Level_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg begin_section;
  L_internal_Type_Obu_BasicTypes_Pkg end_section;
  G_internal_Type_Obu_BasicTypes_Pkg gradient;
} struct__10125;

/* TrackAtlasTypes::GradientProfile_for_DMI_section_t */
typedef struct__10125 _3_GradientProfile_for_DMI_section_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_Absolute;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_LRBG;
  G_internal_Type_Obu_BasicTypes_Pkg Gradient;
  L_internal_Type_Obu_BasicTypes_Pkg L_Gradient;
} struct__10132;

/* TrackAtlasTypes::Gradient_section_t */
typedef struct__10132 Gradient_section_t_TrackAtlasTypes;

typedef _3_GradientProfile_for_DMI_section_t_TrackAtlasTypes array__10140[10];

/* TrackAtlasTypes::GradientProfile_for_DMI_t */
typedef array__10140 GradientProfile_for_DMI_t_TrackAtlasTypes;

typedef Gradient_section_t_TrackAtlasTypes array__10143[10];

/* TrackAtlasTypes::GradientProfile_t */
typedef array__10143 GradientProfile_t_TrackAtlasTypes;

typedef struct {
  kcg_bool Available;
  Location_T_Obu_BasicTypes_Pkg Dist_Start;
  Location_T_Obu_BasicTypes_Pkg Length;
  Location_T_Obu_BasicTypes_Pkg Dist_Run;
  Speed_T_Obu_BasicTypes_Pkg Speed;
} struct__10146;

/* Level_And_Mode_Types_Pkg::T_Reversing_Data */
typedef struct__10146 T_Reversing_Data_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool NTC;
  kcg_bool L0;
  kcg_bool L1;
  kcg_bool L2;
  kcg_bool L3;
} struct__10154;

/* Level_And_Mode_Types_Pkg::T_ERTMS_capabilities */
typedef struct__10154 T_ERTMS_capabilities_Level_And_Mode_Types_Pkg;

typedef struct {
  Location_T_Obu_BasicTypes_Pkg Distance;
  T_MA_Level_And_Mode_Types_Pkg Mode;
  Speed_T_Obu_BasicTypes_Pkg Speed;
  Location_T_Obu_BasicTypes_Pkg Length;
  Location_T_Obu_BasicTypes_Pkg Length_Ack;
} struct__10162;

/* Level_And_Mode_Types_Pkg::T_Mode_Profile */
typedef struct__10162 T_Mode_Profile_Level_And_Mode_Types_Pkg;

typedef struct {
  kcg_bool MA_available;
  kcg_bool MA_L1_received;
  kcg_bool MA_L23_received;
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
} struct__10170;

/* TrackAtlasTypes::FlagsForModeAndLevel_t */
typedef struct__10170 FlagsForModeAndLevel_t_TrackAtlasTypes;

typedef struct {
  kcg_bool valid;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
} struct__10188;

/* TM::P046_section_enum_T */
typedef struct__10188 P046_section_enum_T_TM;

typedef P046_section_enum_T_TM array__10194[33];

/* TM::P046_OBU_sectionlist_enum_T */
typedef array__10194 P046_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  M_LEVELTR m_leveltr;
  NID_NTC nid_ntc;
  L_ACKLEVELTR l_ackleveltr;
} struct__10197;

/* TM::P041_section_enum_T */
typedef struct__10197 P041_section_enum_T_TM;

typedef P041_section_enum_T_TM array__10204[33];

/* TM::P041_OBU_sectionlist_enum_T */
typedef array__10204 P041_OBU_sectionlist_enum_T_TM;

typedef struct {
  FlagsForModeAndLevel_t_TrackAtlasTypes Flags;
  L_internal_Type_Obu_BasicTypes_Pkg AckDistance;
  V_internal_Type_Obu_BasicTypes_Pkg ReceivedTargetSpeed;
  T_Mode_Profile_Level_And_Mode_Types_Pkg Mode_Profile_Onboard;
  T_ERTMS_capabilities_Level_And_Mode_Types_Pkg ERTMS_capabilities;
  T_Reversing_Data_Level_And_Mode_Types_Pkg Reversing_Data;
  P041_OBU_sectionlist_enum_T_TM ConditionalTransitionPriorities;
  P046_OBU_sectionlist_enum_T_TM TransitionPriorities;
} struct__10207;

/* TrackAtlasTypes::DataForModeAndLevel_t */
typedef struct__10207 DataForModeAndLevel_t_TrackAtlasTypes;

typedef struct { kcg_bool valid; kcg_int nid_c; } struct__10218;

/* TM::P003_OBU_nid_c_section_enum_T */
typedef struct__10218 P003_OBU_nid_c_section_enum_T_TM;

/* TM_baseline2::P003V1_section_enum_T */
typedef struct__10218 P003V1_section_enum_T_TM_baseline2;

typedef struct__10218 array__10223[32];

/* TM::P003_OBU_nid_c_sectionlist_enum_T */
typedef array__10223 _5_P003_OBU_nid_c_sectionlist_enum_T_TM;

/* TM_baseline2::P003V1_sectionlist_enum_T */
typedef array__10223 P003V1_sectionlist_enum_T_TM_baseline2;

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
} struct__10226;

/* TM_baseline2::P003V1_OBU_T */
typedef struct__10226 P003V1_OBU_T_TM_baseline2;

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
} struct__10259;

/* TM::P003_OBU_l_section_enum_T */
typedef struct__10259 P003_OBU_l_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_l_section_enum_T */
typedef struct__10259 P203V1_OBU_l_section_enum_T_TM_baseline2;

typedef struct__10259 array__10265[32];

/* TM::P003_OBU_l_sectionlist_enum_T */
typedef array__10265 P003_OBU_l_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_l_sectionlist_enum_T */
typedef array__10265 P203V1_OBU_l_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int v_nvkvint_k_m;
  kcg_real m_nvkvint_km_12;
  kcg_real m_nvkvint_km_23;
} struct__10268;

/* TM::P003_OBU_k_m_section_enum_T */
typedef struct__10268 P003_OBU_k_m_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_m_section_enum_T */
typedef struct__10268 P203V1_OBU_k_m_section_enum_T_TM_baseline2;

typedef struct__10268 array__10275[32];

/* TM::P003_OBU_k_m_sectionlist_enum_T */
typedef array__10275 P003_OBU_k_m_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_m_sectionlist_enum_T */
typedef array__10275 _1_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_NVKVINTSET q_nvkvintset_k;
  kcg_real a_nvp12_k;
  kcg_real a_nvp23_k;
  kcg_int v_nvkvint_k;
  kcg_real m_nvkvint_k_12;
  kcg_real m_nvkvint_k_23;
  kcg_int n_iter_k_m;
  array__10275 n_iter_k_m_list;
} struct__10278;

/* TM::P003_OBU_k_section_enum_T */
typedef struct__10278 P003_OBU_k_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_section_enum_T */
typedef struct__10278 P203V1_OBU_k_section_enum_T_TM_baseline2;

typedef struct__10278 array__10290[32];

/* TM::P003_OBU_k_sectionlist_enum_T */
typedef array__10290 P003_OBU_k_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_k_sectionlist_enum_T */
typedef array__10290 P203V1_OBU_k_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  kcg_int v_nvkvint_n;
  kcg_real m_nvkvint_n_12;
  kcg_real m_nvkvint_n_23;
} struct__10293;

/* TM::P003_OBU_n_section_enum_T */
typedef struct__10293 P003_OBU_n_section_enum_T_TM;

/* TM_baseline2::P203V1_OBU_n_section_enum_T */
typedef struct__10293 P203V1_OBU_n_section_enum_T_TM_baseline2;

typedef struct__10293 array__10300[32];

/* TM::P003_OBU_n_sectionlist_enum_T */
typedef array__10300 P003_OBU_n_sectionlist_enum_T_TM;

/* TM_baseline2::P203V1_OBU_n_sectionlist_enum_T */
typedef array__10300 P203V1_OBU_n_sectionlist_enum_T_TM_baseline2;

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
} struct__10303;

/* TM_baseline2::P203V1_OBU_T */
typedef struct__10303 P203V1_OBU_T_TM_baseline2;

typedef struct {
  Q_NVLOCACC q_nvlocacc;
  V_NVLIMSUPERV v_nvlimsuperv;
} struct__10334;

/* TM_baseline2::P003_permanent_data_T */
typedef struct__10334 P003_permanent_data_T_TM_baseline2;

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
} struct__10339;

/* TM::P003_OBU_T */
typedef struct__10339 P003_OBU_T_TM;

typedef struct { kcg_int target; kcg_int speed; } struct__10394;

/* TA_MRSP::SSP_section_t */
typedef struct__10394 SSP_section_t_TA_MRSP;

typedef struct__10394 array__10399[33];

/* TA_MRSP::SSP_cat_t */
typedef array__10399 SSP_cat_t_TA_MRSP;

typedef struct {
  kcg_bool valid;
  NC_DIFF nc_diff;
  V_DIFF v_diff;
} struct__10402;

/* TM_baseline2::P027V1_section_enum_qdiff_T */
typedef struct__10402 P027V1_section_enum_qdiff_T_TM_baseline2;

typedef P027V1_section_enum_qdiff_T_TM_baseline2 array__10408[32];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_qdiff_T */
typedef array__10408 _2_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  D_STATIC d_static;
  V_STATIC v_static;
  Q_FRONT q_front;
  N_ITER n_iter;
  _2_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 SECTIONS_q_diff;
} struct__10411;

/* TM_baseline2::P027V1_section_enum_T */
typedef struct__10411 P027V1_section_enum_T_TM_baseline2;

typedef P027V1_section_enum_T_TM_baseline2 array__10420[33];

/* TM_baseline2::P027V1_OBU_sectionlist_enum_T */
typedef array__10420 P027V1_OBU_sectionlist_enum_T_TM_baseline2;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  P027V1_OBU_sectionlist_enum_T_TM_baseline2 sections;
} struct__10423;

/* TM_baseline2::P027V1_OBU_T */
typedef struct__10423 P027V1_OBU_T_TM_baseline2;

typedef struct { kcg_bool valid; Q_DIR q_dir; Q_SCALE q_scale; } struct__10430;

/* TM_baseline2::P027V1_OBU_body_enum_T */
typedef struct__10430 P027V1_OBU_body_enum_T_TM_baseline2;

typedef kcg_int array_int_5[5];

/* TM::Array05 */
typedef array_int_5 Array05_TM;

typedef kcg_int array_int_64[64];

/* TM_baseline2::P027V1_sections_array_flat_qdiff_T */
typedef array_int_64 P027V1_sections_array_flat_qdiff_T_TM_baseline2;

typedef array__10399 array__10442[11];

/* TA_MRSP::SSP_matrix_t */
typedef array__10442 SSP_matrix_t_TA_MRSP;

typedef struct {
  kcg_int Category_Index;
  kcg_int Pos_Index;
  SSP_target_t_TA_MRSP Loc;
} struct__10445;

/* TA_MRSP::SSP_t_indexed_matrix_element */
typedef struct__10445 SSP_t_indexed_matrix_element_TA_MRSP;

typedef SSP_t_indexed_matrix_element_TA_MRSP array__10451[363];

/* TA_MRSP::SSP_t_list_t */
typedef array__10451 SSP_t_list_t_TA_MRSP;

typedef kcg_int array_int_33[33];

/* TA_MRSP::SSP_t_cat_t */
typedef array_int_33 SSP_t_cat_t_TA_MRSP;

typedef array_int_33 array_int_33_11[11];

/* TA_MRSP::SSP_t_matrix_t */
typedef array_int_33_11 SSP_t_matrix_t_TA_MRSP;

typedef struct { kcg_bool Found; kcg_int Index; } struct__10460;

/* TA_MRSP::SSP_Mark_ValidSSPsection */
typedef struct__10460 SSP_Mark_ValidSSPsection_TA_MRSP;

typedef struct {
  kcg_bool found;
  kcg_int index;
  SSP_t_section_t_TA_MRSP target;
} struct__10465;

/* TA_MRSP::SSP_valid_section_t */
typedef struct__10465 SSP_valid_section_t_TA_MRSP;

typedef struct { kcg_int index; SSP_t_section_t_TA_MRSP target; } struct__10471;

/* TA_MRSP::SSP_relevant_target_t */
typedef struct__10471 SSP_relevant_target_t_TA_MRSP;

typedef struct {
  kcg_bool valid;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_Abs;
  L_internal_Type_Obu_BasicTypes_Pkg Loc_LRBG;
  V_internal_Type_Obu_BasicTypes_Pkg MRS;
} struct__10476;

/* TrackAtlasTypes::MRSP_section_t */
typedef struct__10476 MRSP_section_t_TrackAtlasTypes;

typedef struct { kcg_int Index; SSP_target_t_TA_MRSP Loc; } struct__10483;

/* TA_MRSP::SSP_t_indexed_trgt_t */
typedef struct__10483 SSP_t_indexed_trgt_t_TA_MRSP;

typedef SSP_t_indexed_trgt_t_TA_MRSP array__10488[11];

/* TA_MRSP::SSP_t_indexed_targets_list_t */
typedef array__10488 SSP_t_indexed_targets_list_t_TA_MRSP;

typedef MRSP_section_t_TrackAtlasTypes array__10491[200];

/* TrackAtlasTypes::MRSP_Profile_t */
typedef array__10491 MRSP_Profile_t_TrackAtlasTypes;

typedef struct {
  GradientProfile_for_DMI_t_TrackAtlasTypes GradientProfile;
  kcg_bool Gradient_profile_updated;
  MRSP_Profile_t_TrackAtlasTypes MRSP;
  kcg_bool MRSP_updated;
} struct__10494;

/* TrackAtlasTypes::DataForDMI_t */
typedef struct__10494 DataForDMI_t_TrackAtlasTypes;

typedef struct {
  kcg_bool freshMA;
  MovementAuthority_t_TrackAtlasTypes MA;
  kcg_bool freshGradientProfile;
  GradientProfile_t_TrackAtlasTypes GradientProfile;
  kcg_bool freshMRSP;
  MRSP_Profile_t_TrackAtlasTypes MRSP;
} struct__10501;

/* TrackAtlasTypes::DataForSupervision_nextGen_t */
typedef struct__10501 DataForSupervision_nextGen_t_TrackAtlasTypes;

typedef kcg_int array_int_99[99];

/* TM::P021_sections_array_flat_T */
typedef array_int_99 P021_sections_array_flat_T_TM;

typedef struct {
  kcg_bool valid;
  D_GRADIENT d_gradient;
  Q_GDIR q_gdir;
  G_A g_a;
} struct__10513;

/* TM::P021_section_enum_T */
typedef struct__10513 P021_section_enum_T_TM;

typedef P021_section_enum_T_TM array__10520[33];

/* TM::P021_OBU_sectionlist_enum_T */
typedef array__10520 P021_OBU_sectionlist_enum_T_TM;

typedef struct {
  kcg_bool valid;
  Q_DIR q_dir;
  Q_SCALE q_scale;
  N_ITER n_iter;
  P021_OBU_sectionlist_enum_T_TM sections;
} struct__10523;

/* TM::P021_OBU_T */
typedef struct__10523 P021_OBU_T_TM;

typedef kcg_int array_int_30[30];

typedef kcg_bool array_bool_30[30];

typedef CompressedPacketData_T_Common_Types_Pkg array_int_500_500[500];

typedef P021_sections_array_flat_T_TM array_int_99_33[33];

typedef GradientProfile_t_TrackAtlasTypes array__10543[33];

typedef array__10520 array__10546[33];

typedef Q_SCALE array__10549[33];

typedef P015_sections_array_flat_T_TM array_int_128_32[32];

typedef SSP_t_indexed_matrix_element_TA_MRSP array__10555[11];

typedef SSP_valid_section_t_TA_MRSP array__10558[33];

typedef kcg_int array_int_11[11];

typedef SSP_t_list_t_TA_MRSP array__10564[200];

typedef SSP_matrix_t_TA_MRSP array__10567[200];

typedef kcg_int array_int_200[200];

typedef P027V1_sections_array_flat_qdiff_T_TM_baseline2 array_int_64_32[32];

typedef CompressedPackets_T_Common_Types_Pkg array__10576[33];

typedef array__10399 array__10579[33];

typedef P027V1_section_enum_T_TM_baseline2 array__10582[32];

typedef array__10420 array__10585[33];

typedef P027V1_section_enum_T_TM_baseline2 array__10588[1];

typedef SSP_section_t_TA_MRSP array__10591[32];

typedef SSP_section_t_TA_MRSP array__10594[1];

typedef P003V1_OBU_sectionlist_int_T_TM_baseline2 array_int_32_32[32];

typedef P003V1_section_enum_T_TM_baseline2 array__10600[31];

typedef P003V1_section_enum_T_TM_baseline2 array__10603[1];

#ifndef kcg_copy_struct__9704
#define kcg_copy_struct__9704(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9704)))
#endif /* kcg_copy_struct__9704 */

#ifndef kcg_copy_struct__9724
#define kcg_copy_struct__9724(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9724)))
#endif /* kcg_copy_struct__9724 */

#ifndef kcg_copy_struct__9729
#define kcg_copy_struct__9729(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9729)))
#endif /* kcg_copy_struct__9729 */

#ifndef kcg_copy_struct__9748
#define kcg_copy_struct__9748(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9748)))
#endif /* kcg_copy_struct__9748 */

#ifndef kcg_copy_struct__9753
#define kcg_copy_struct__9753(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9753)))
#endif /* kcg_copy_struct__9753 */

#ifndef kcg_copy_struct__9761
#define kcg_copy_struct__9761(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9761)))
#endif /* kcg_copy_struct__9761 */

#ifndef kcg_copy_struct__9776
#define kcg_copy_struct__9776(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9776)))
#endif /* kcg_copy_struct__9776 */

#ifndef kcg_copy_struct__9784
#define kcg_copy_struct__9784(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9784)))
#endif /* kcg_copy_struct__9784 */

#ifndef kcg_copy_struct__9800
#define kcg_copy_struct__9800(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9800)))
#endif /* kcg_copy_struct__9800 */

#ifndef kcg_copy_struct__9805
#define kcg_copy_struct__9805(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9805)))
#endif /* kcg_copy_struct__9805 */

#ifndef kcg_copy_struct__9810
#define kcg_copy_struct__9810(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9810)))
#endif /* kcg_copy_struct__9810 */

#ifndef kcg_copy_struct__9818
#define kcg_copy_struct__9818(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9818)))
#endif /* kcg_copy_struct__9818 */

#ifndef kcg_copy_struct__9826
#define kcg_copy_struct__9826(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9826)))
#endif /* kcg_copy_struct__9826 */

#ifndef kcg_copy_struct__9832
#define kcg_copy_struct__9832(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9832)))
#endif /* kcg_copy_struct__9832 */

#ifndef kcg_copy_struct__9842
#define kcg_copy_struct__9842(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9842)))
#endif /* kcg_copy_struct__9842 */

#ifndef kcg_copy_struct__9848
#define kcg_copy_struct__9848(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9848)))
#endif /* kcg_copy_struct__9848 */

#ifndef kcg_copy_struct__9860
#define kcg_copy_struct__9860(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9860)))
#endif /* kcg_copy_struct__9860 */

#ifndef kcg_copy_struct__9865
#define kcg_copy_struct__9865(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9865)))
#endif /* kcg_copy_struct__9865 */

#ifndef kcg_copy_struct__9871
#define kcg_copy_struct__9871(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9871)))
#endif /* kcg_copy_struct__9871 */

#ifndef kcg_copy_struct__9889
#define kcg_copy_struct__9889(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9889)))
#endif /* kcg_copy_struct__9889 */

#ifndef kcg_copy_struct__9895
#define kcg_copy_struct__9895(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9895)))
#endif /* kcg_copy_struct__9895 */

#ifndef kcg_copy_struct__9909
#define kcg_copy_struct__9909(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9909)))
#endif /* kcg_copy_struct__9909 */

#ifndef kcg_copy_struct__9921
#define kcg_copy_struct__9921(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9921)))
#endif /* kcg_copy_struct__9921 */

#ifndef kcg_copy_struct__9928
#define kcg_copy_struct__9928(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9928)))
#endif /* kcg_copy_struct__9928 */

#ifndef kcg_copy_struct__9934
#define kcg_copy_struct__9934(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9934)))
#endif /* kcg_copy_struct__9934 */

#ifndef kcg_copy_struct__9944
#define kcg_copy_struct__9944(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9944)))
#endif /* kcg_copy_struct__9944 */

#ifndef kcg_copy_struct__9962
#define kcg_copy_struct__9962(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9962)))
#endif /* kcg_copy_struct__9962 */

#ifndef kcg_copy_struct__9968
#define kcg_copy_struct__9968(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9968)))
#endif /* kcg_copy_struct__9968 */

#ifndef kcg_copy_struct__9979
#define kcg_copy_struct__9979(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9979)))
#endif /* kcg_copy_struct__9979 */

#ifndef kcg_copy_struct__9996
#define kcg_copy_struct__9996(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__9996)))
#endif /* kcg_copy_struct__9996 */

#ifndef kcg_copy_struct__10001
#define kcg_copy_struct__10001(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10001)))
#endif /* kcg_copy_struct__10001 */

#ifndef kcg_copy_struct__10011
#define kcg_copy_struct__10011(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10011)))
#endif /* kcg_copy_struct__10011 */

#ifndef kcg_copy_struct__10029
#define kcg_copy_struct__10029(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10029)))
#endif /* kcg_copy_struct__10029 */

#ifndef kcg_copy_struct__10036
#define kcg_copy_struct__10036(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10036)))
#endif /* kcg_copy_struct__10036 */

#ifndef kcg_copy_struct__10051
#define kcg_copy_struct__10051(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10051)))
#endif /* kcg_copy_struct__10051 */

#ifndef kcg_copy_struct__10062
#define kcg_copy_struct__10062(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10062)))
#endif /* kcg_copy_struct__10062 */

#ifndef kcg_copy_struct__10067
#define kcg_copy_struct__10067(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10067)))
#endif /* kcg_copy_struct__10067 */

#ifndef kcg_copy_struct__10083
#define kcg_copy_struct__10083(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10083)))
#endif /* kcg_copy_struct__10083 */

#ifndef kcg_copy_struct__10094
#define kcg_copy_struct__10094(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10094)))
#endif /* kcg_copy_struct__10094 */

#ifndef kcg_copy_struct__10119
#define kcg_copy_struct__10119(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10119)))
#endif /* kcg_copy_struct__10119 */

#ifndef kcg_copy_struct__10125
#define kcg_copy_struct__10125(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10125)))
#endif /* kcg_copy_struct__10125 */

#ifndef kcg_copy_struct__10132
#define kcg_copy_struct__10132(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10132)))
#endif /* kcg_copy_struct__10132 */

#ifndef kcg_copy_struct__10146
#define kcg_copy_struct__10146(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10146)))
#endif /* kcg_copy_struct__10146 */

#ifndef kcg_copy_struct__10154
#define kcg_copy_struct__10154(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10154)))
#endif /* kcg_copy_struct__10154 */

#ifndef kcg_copy_struct__10162
#define kcg_copy_struct__10162(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10162)))
#endif /* kcg_copy_struct__10162 */

#ifndef kcg_copy_struct__10170
#define kcg_copy_struct__10170(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10170)))
#endif /* kcg_copy_struct__10170 */

#ifndef kcg_copy_struct__10188
#define kcg_copy_struct__10188(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10188)))
#endif /* kcg_copy_struct__10188 */

#ifndef kcg_copy_struct__10197
#define kcg_copy_struct__10197(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10197)))
#endif /* kcg_copy_struct__10197 */

#ifndef kcg_copy_struct__10207
#define kcg_copy_struct__10207(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10207)))
#endif /* kcg_copy_struct__10207 */

#ifndef kcg_copy_struct__10218
#define kcg_copy_struct__10218(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10218)))
#endif /* kcg_copy_struct__10218 */

#ifndef kcg_copy_struct__10226
#define kcg_copy_struct__10226(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10226)))
#endif /* kcg_copy_struct__10226 */

#ifndef kcg_copy_struct__10259
#define kcg_copy_struct__10259(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10259)))
#endif /* kcg_copy_struct__10259 */

#ifndef kcg_copy_struct__10268
#define kcg_copy_struct__10268(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10268)))
#endif /* kcg_copy_struct__10268 */

#ifndef kcg_copy_struct__10278
#define kcg_copy_struct__10278(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10278)))
#endif /* kcg_copy_struct__10278 */

#ifndef kcg_copy_struct__10293
#define kcg_copy_struct__10293(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10293)))
#endif /* kcg_copy_struct__10293 */

#ifndef kcg_copy_struct__10303
#define kcg_copy_struct__10303(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10303)))
#endif /* kcg_copy_struct__10303 */

#ifndef kcg_copy_struct__10334
#define kcg_copy_struct__10334(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10334)))
#endif /* kcg_copy_struct__10334 */

#ifndef kcg_copy_struct__10339
#define kcg_copy_struct__10339(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10339)))
#endif /* kcg_copy_struct__10339 */

#ifndef kcg_copy_struct__10394
#define kcg_copy_struct__10394(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10394)))
#endif /* kcg_copy_struct__10394 */

#ifndef kcg_copy_struct__10402
#define kcg_copy_struct__10402(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10402)))
#endif /* kcg_copy_struct__10402 */

#ifndef kcg_copy_struct__10411
#define kcg_copy_struct__10411(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10411)))
#endif /* kcg_copy_struct__10411 */

#ifndef kcg_copy_struct__10423
#define kcg_copy_struct__10423(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10423)))
#endif /* kcg_copy_struct__10423 */

#ifndef kcg_copy_struct__10430
#define kcg_copy_struct__10430(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10430)))
#endif /* kcg_copy_struct__10430 */

#ifndef kcg_copy_struct__10445
#define kcg_copy_struct__10445(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10445)))
#endif /* kcg_copy_struct__10445 */

#ifndef kcg_copy_struct__10460
#define kcg_copy_struct__10460(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10460)))
#endif /* kcg_copy_struct__10460 */

#ifndef kcg_copy_struct__10465
#define kcg_copy_struct__10465(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10465)))
#endif /* kcg_copy_struct__10465 */

#ifndef kcg_copy_struct__10471
#define kcg_copy_struct__10471(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10471)))
#endif /* kcg_copy_struct__10471 */

#ifndef kcg_copy_struct__10476
#define kcg_copy_struct__10476(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10476)))
#endif /* kcg_copy_struct__10476 */

#ifndef kcg_copy_struct__10483
#define kcg_copy_struct__10483(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10483)))
#endif /* kcg_copy_struct__10483 */

#ifndef kcg_copy_struct__10494
#define kcg_copy_struct__10494(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10494)))
#endif /* kcg_copy_struct__10494 */

#ifndef kcg_copy_struct__10501
#define kcg_copy_struct__10501(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10501)))
#endif /* kcg_copy_struct__10501 */

#ifndef kcg_copy_struct__10513
#define kcg_copy_struct__10513(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10513)))
#endif /* kcg_copy_struct__10513 */

#ifndef kcg_copy_struct__10523
#define kcg_copy_struct__10523(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__10523)))
#endif /* kcg_copy_struct__10523 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array__9781
#define kcg_copy_array__9781(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__9781)))
#endif /* kcg_copy_array__9781 */

#ifndef kcg_copy_array_int_15
#define kcg_copy_array_int_15(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_15)))
#endif /* kcg_copy_array_int_15 */

#ifndef kcg_copy_array__9823
#define kcg_copy_array__9823(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__9823)))
#endif /* kcg_copy_array__9823 */

#ifndef kcg_copy_array__9857
#define kcg_copy_array__9857(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__9857)))
#endif /* kcg_copy_array__9857 */

#ifndef kcg_copy_array__9918
#define kcg_copy_array__9918(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__9918)))
#endif /* kcg_copy_array__9918 */

#ifndef kcg_copy_array_int_500
#define kcg_copy_array_int_500(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_500)))
#endif /* kcg_copy_array_int_500 */

#ifndef kcg_copy_array__10059
#define kcg_copy_array__10059(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10059)))
#endif /* kcg_copy_array__10059 */

#ifndef kcg_copy_array_int_6
#define kcg_copy_array_int_6(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_6)))
#endif /* kcg_copy_array_int_6 */

#ifndef kcg_copy_array_int_128
#define kcg_copy_array_int_128(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128)))
#endif /* kcg_copy_array_int_128 */

#ifndef kcg_copy_array__10091
#define kcg_copy_array__10091(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10091)))
#endif /* kcg_copy_array__10091 */

#ifndef kcg_copy_array__10140
#define kcg_copy_array__10140(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10140)))
#endif /* kcg_copy_array__10140 */

#ifndef kcg_copy_array__10143
#define kcg_copy_array__10143(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10143)))
#endif /* kcg_copy_array__10143 */

#ifndef kcg_copy_array__10194
#define kcg_copy_array__10194(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10194)))
#endif /* kcg_copy_array__10194 */

#ifndef kcg_copy_array__10204
#define kcg_copy_array__10204(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10204)))
#endif /* kcg_copy_array__10204 */

#ifndef kcg_copy_array__10223
#define kcg_copy_array__10223(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10223)))
#endif /* kcg_copy_array__10223 */

#ifndef kcg_copy_array_int_32
#define kcg_copy_array_int_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32)))
#endif /* kcg_copy_array_int_32 */

#ifndef kcg_copy_array_int_24
#define kcg_copy_array_int_24(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_24)))
#endif /* kcg_copy_array_int_24 */

#ifndef kcg_copy_array__10265
#define kcg_copy_array__10265(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10265)))
#endif /* kcg_copy_array__10265 */

#ifndef kcg_copy_array__10275
#define kcg_copy_array__10275(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10275)))
#endif /* kcg_copy_array__10275 */

#ifndef kcg_copy_array__10290
#define kcg_copy_array__10290(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10290)))
#endif /* kcg_copy_array__10290 */

#ifndef kcg_copy_array__10300
#define kcg_copy_array__10300(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10300)))
#endif /* kcg_copy_array__10300 */

#ifndef kcg_copy_array__10399
#define kcg_copy_array__10399(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10399)))
#endif /* kcg_copy_array__10399 */

#ifndef kcg_copy_array__10408
#define kcg_copy_array__10408(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10408)))
#endif /* kcg_copy_array__10408 */

#ifndef kcg_copy_array__10420
#define kcg_copy_array__10420(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10420)))
#endif /* kcg_copy_array__10420 */

#ifndef kcg_copy_array_int_5
#define kcg_copy_array_int_5(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_5)))
#endif /* kcg_copy_array_int_5 */

#ifndef kcg_copy_array_int_64
#define kcg_copy_array_int_64(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64)))
#endif /* kcg_copy_array_int_64 */

#ifndef kcg_copy_array__10442
#define kcg_copy_array__10442(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10442)))
#endif /* kcg_copy_array__10442 */

#ifndef kcg_copy_array__10451
#define kcg_copy_array__10451(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10451)))
#endif /* kcg_copy_array__10451 */

#ifndef kcg_copy_array_int_33
#define kcg_copy_array_int_33(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33)))
#endif /* kcg_copy_array_int_33 */

#ifndef kcg_copy_array_int_33_11
#define kcg_copy_array_int_33_11(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_33_11)))
#endif /* kcg_copy_array_int_33_11 */

#ifndef kcg_copy_array__10488
#define kcg_copy_array__10488(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10488)))
#endif /* kcg_copy_array__10488 */

#ifndef kcg_copy_array__10491
#define kcg_copy_array__10491(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10491)))
#endif /* kcg_copy_array__10491 */

#ifndef kcg_copy_array_int_99
#define kcg_copy_array_int_99(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_99)))
#endif /* kcg_copy_array_int_99 */

#ifndef kcg_copy_array__10520
#define kcg_copy_array__10520(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10520)))
#endif /* kcg_copy_array__10520 */

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

#ifndef kcg_copy_array__10543
#define kcg_copy_array__10543(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10543)))
#endif /* kcg_copy_array__10543 */

#ifndef kcg_copy_array__10546
#define kcg_copy_array__10546(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10546)))
#endif /* kcg_copy_array__10546 */

#ifndef kcg_copy_array__10549
#define kcg_copy_array__10549(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10549)))
#endif /* kcg_copy_array__10549 */

#ifndef kcg_copy_array_int_128_32
#define kcg_copy_array_int_128_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_128_32)))
#endif /* kcg_copy_array_int_128_32 */

#ifndef kcg_copy_array__10555
#define kcg_copy_array__10555(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10555)))
#endif /* kcg_copy_array__10555 */

#ifndef kcg_copy_array__10558
#define kcg_copy_array__10558(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10558)))
#endif /* kcg_copy_array__10558 */

#ifndef kcg_copy_array_int_11
#define kcg_copy_array_int_11(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_11)))
#endif /* kcg_copy_array_int_11 */

#ifndef kcg_copy_array__10564
#define kcg_copy_array__10564(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10564)))
#endif /* kcg_copy_array__10564 */

#ifndef kcg_copy_array__10567
#define kcg_copy_array__10567(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10567)))
#endif /* kcg_copy_array__10567 */

#ifndef kcg_copy_array_int_200
#define kcg_copy_array_int_200(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_200)))
#endif /* kcg_copy_array_int_200 */

#ifndef kcg_copy_array_int_64_32
#define kcg_copy_array_int_64_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_64_32)))
#endif /* kcg_copy_array_int_64_32 */

#ifndef kcg_copy_array__10576
#define kcg_copy_array__10576(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10576)))
#endif /* kcg_copy_array__10576 */

#ifndef kcg_copy_array__10579
#define kcg_copy_array__10579(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10579)))
#endif /* kcg_copy_array__10579 */

#ifndef kcg_copy_array__10582
#define kcg_copy_array__10582(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10582)))
#endif /* kcg_copy_array__10582 */

#ifndef kcg_copy_array__10585
#define kcg_copy_array__10585(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10585)))
#endif /* kcg_copy_array__10585 */

#ifndef kcg_copy_array__10588
#define kcg_copy_array__10588(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10588)))
#endif /* kcg_copy_array__10588 */

#ifndef kcg_copy_array__10591
#define kcg_copy_array__10591(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10591)))
#endif /* kcg_copy_array__10591 */

#ifndef kcg_copy_array__10594
#define kcg_copy_array__10594(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10594)))
#endif /* kcg_copy_array__10594 */

#ifndef kcg_copy_array_int_32_32
#define kcg_copy_array_int_32_32(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_32_32)))
#endif /* kcg_copy_array_int_32_32 */

#ifndef kcg_copy_array__10600
#define kcg_copy_array__10600(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10600)))
#endif /* kcg_copy_array__10600 */

#ifndef kcg_copy_array__10603
#define kcg_copy_array__10603(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__10603)))
#endif /* kcg_copy_array__10603 */

#ifndef kcg_comp_struct__9704
extern kcg_bool kcg_comp_struct__9704(
  struct__9704 *kcg_c1,
  struct__9704 *kcg_c2);
#endif /* kcg_comp_struct__9704 */

#ifndef kcg_comp_struct__9724
extern kcg_bool kcg_comp_struct__9724(
  struct__9724 *kcg_c1,
  struct__9724 *kcg_c2);
#endif /* kcg_comp_struct__9724 */

#ifndef kcg_comp_struct__9729
extern kcg_bool kcg_comp_struct__9729(
  struct__9729 *kcg_c1,
  struct__9729 *kcg_c2);
#endif /* kcg_comp_struct__9729 */

#ifndef kcg_comp_struct__9748
extern kcg_bool kcg_comp_struct__9748(
  struct__9748 *kcg_c1,
  struct__9748 *kcg_c2);
#endif /* kcg_comp_struct__9748 */

#ifndef kcg_comp_struct__9753
extern kcg_bool kcg_comp_struct__9753(
  struct__9753 *kcg_c1,
  struct__9753 *kcg_c2);
#endif /* kcg_comp_struct__9753 */

#ifndef kcg_comp_struct__9761
extern kcg_bool kcg_comp_struct__9761(
  struct__9761 *kcg_c1,
  struct__9761 *kcg_c2);
#endif /* kcg_comp_struct__9761 */

#ifndef kcg_comp_struct__9776
extern kcg_bool kcg_comp_struct__9776(
  struct__9776 *kcg_c1,
  struct__9776 *kcg_c2);
#endif /* kcg_comp_struct__9776 */

#ifndef kcg_comp_struct__9784
extern kcg_bool kcg_comp_struct__9784(
  struct__9784 *kcg_c1,
  struct__9784 *kcg_c2);
#endif /* kcg_comp_struct__9784 */

#ifndef kcg_comp_struct__9800
extern kcg_bool kcg_comp_struct__9800(
  struct__9800 *kcg_c1,
  struct__9800 *kcg_c2);
#endif /* kcg_comp_struct__9800 */

#ifndef kcg_comp_struct__9805
extern kcg_bool kcg_comp_struct__9805(
  struct__9805 *kcg_c1,
  struct__9805 *kcg_c2);
#endif /* kcg_comp_struct__9805 */

#ifndef kcg_comp_struct__9810
extern kcg_bool kcg_comp_struct__9810(
  struct__9810 *kcg_c1,
  struct__9810 *kcg_c2);
#endif /* kcg_comp_struct__9810 */

#ifndef kcg_comp_struct__9818
extern kcg_bool kcg_comp_struct__9818(
  struct__9818 *kcg_c1,
  struct__9818 *kcg_c2);
#endif /* kcg_comp_struct__9818 */

#ifndef kcg_comp_struct__9826
extern kcg_bool kcg_comp_struct__9826(
  struct__9826 *kcg_c1,
  struct__9826 *kcg_c2);
#endif /* kcg_comp_struct__9826 */

#ifndef kcg_comp_struct__9832
extern kcg_bool kcg_comp_struct__9832(
  struct__9832 *kcg_c1,
  struct__9832 *kcg_c2);
#endif /* kcg_comp_struct__9832 */

#ifndef kcg_comp_struct__9842
extern kcg_bool kcg_comp_struct__9842(
  struct__9842 *kcg_c1,
  struct__9842 *kcg_c2);
#endif /* kcg_comp_struct__9842 */

#ifndef kcg_comp_struct__9848
extern kcg_bool kcg_comp_struct__9848(
  struct__9848 *kcg_c1,
  struct__9848 *kcg_c2);
#endif /* kcg_comp_struct__9848 */

#ifndef kcg_comp_struct__9860
extern kcg_bool kcg_comp_struct__9860(
  struct__9860 *kcg_c1,
  struct__9860 *kcg_c2);
#endif /* kcg_comp_struct__9860 */

#ifndef kcg_comp_struct__9865
extern kcg_bool kcg_comp_struct__9865(
  struct__9865 *kcg_c1,
  struct__9865 *kcg_c2);
#endif /* kcg_comp_struct__9865 */

#ifndef kcg_comp_struct__9871
extern kcg_bool kcg_comp_struct__9871(
  struct__9871 *kcg_c1,
  struct__9871 *kcg_c2);
#endif /* kcg_comp_struct__9871 */

#ifndef kcg_comp_struct__9889
extern kcg_bool kcg_comp_struct__9889(
  struct__9889 *kcg_c1,
  struct__9889 *kcg_c2);
#endif /* kcg_comp_struct__9889 */

#ifndef kcg_comp_struct__9895
extern kcg_bool kcg_comp_struct__9895(
  struct__9895 *kcg_c1,
  struct__9895 *kcg_c2);
#endif /* kcg_comp_struct__9895 */

#ifndef kcg_comp_struct__9909
extern kcg_bool kcg_comp_struct__9909(
  struct__9909 *kcg_c1,
  struct__9909 *kcg_c2);
#endif /* kcg_comp_struct__9909 */

#ifndef kcg_comp_struct__9921
extern kcg_bool kcg_comp_struct__9921(
  struct__9921 *kcg_c1,
  struct__9921 *kcg_c2);
#endif /* kcg_comp_struct__9921 */

#ifndef kcg_comp_struct__9928
extern kcg_bool kcg_comp_struct__9928(
  struct__9928 *kcg_c1,
  struct__9928 *kcg_c2);
#endif /* kcg_comp_struct__9928 */

#ifndef kcg_comp_struct__9934
extern kcg_bool kcg_comp_struct__9934(
  struct__9934 *kcg_c1,
  struct__9934 *kcg_c2);
#endif /* kcg_comp_struct__9934 */

#ifndef kcg_comp_struct__9944
extern kcg_bool kcg_comp_struct__9944(
  struct__9944 *kcg_c1,
  struct__9944 *kcg_c2);
#endif /* kcg_comp_struct__9944 */

#ifndef kcg_comp_struct__9962
extern kcg_bool kcg_comp_struct__9962(
  struct__9962 *kcg_c1,
  struct__9962 *kcg_c2);
#endif /* kcg_comp_struct__9962 */

#ifndef kcg_comp_struct__9968
extern kcg_bool kcg_comp_struct__9968(
  struct__9968 *kcg_c1,
  struct__9968 *kcg_c2);
#endif /* kcg_comp_struct__9968 */

#ifndef kcg_comp_struct__9979
extern kcg_bool kcg_comp_struct__9979(
  struct__9979 *kcg_c1,
  struct__9979 *kcg_c2);
#endif /* kcg_comp_struct__9979 */

#ifndef kcg_comp_struct__9996
extern kcg_bool kcg_comp_struct__9996(
  struct__9996 *kcg_c1,
  struct__9996 *kcg_c2);
#endif /* kcg_comp_struct__9996 */

#ifndef kcg_comp_struct__10001
extern kcg_bool kcg_comp_struct__10001(
  struct__10001 *kcg_c1,
  struct__10001 *kcg_c2);
#endif /* kcg_comp_struct__10001 */

#ifndef kcg_comp_struct__10011
extern kcg_bool kcg_comp_struct__10011(
  struct__10011 *kcg_c1,
  struct__10011 *kcg_c2);
#endif /* kcg_comp_struct__10011 */

#ifndef kcg_comp_struct__10029
extern kcg_bool kcg_comp_struct__10029(
  struct__10029 *kcg_c1,
  struct__10029 *kcg_c2);
#endif /* kcg_comp_struct__10029 */

#ifndef kcg_comp_struct__10036
extern kcg_bool kcg_comp_struct__10036(
  struct__10036 *kcg_c1,
  struct__10036 *kcg_c2);
#endif /* kcg_comp_struct__10036 */

#ifndef kcg_comp_struct__10051
extern kcg_bool kcg_comp_struct__10051(
  struct__10051 *kcg_c1,
  struct__10051 *kcg_c2);
#endif /* kcg_comp_struct__10051 */

#ifndef kcg_comp_struct__10062
extern kcg_bool kcg_comp_struct__10062(
  struct__10062 *kcg_c1,
  struct__10062 *kcg_c2);
#endif /* kcg_comp_struct__10062 */

#ifndef kcg_comp_struct__10067
extern kcg_bool kcg_comp_struct__10067(
  struct__10067 *kcg_c1,
  struct__10067 *kcg_c2);
#endif /* kcg_comp_struct__10067 */

#ifndef kcg_comp_struct__10083
extern kcg_bool kcg_comp_struct__10083(
  struct__10083 *kcg_c1,
  struct__10083 *kcg_c2);
#endif /* kcg_comp_struct__10083 */

#ifndef kcg_comp_struct__10094
extern kcg_bool kcg_comp_struct__10094(
  struct__10094 *kcg_c1,
  struct__10094 *kcg_c2);
#endif /* kcg_comp_struct__10094 */

#ifndef kcg_comp_struct__10119
extern kcg_bool kcg_comp_struct__10119(
  struct__10119 *kcg_c1,
  struct__10119 *kcg_c2);
#endif /* kcg_comp_struct__10119 */

#ifndef kcg_comp_struct__10125
extern kcg_bool kcg_comp_struct__10125(
  struct__10125 *kcg_c1,
  struct__10125 *kcg_c2);
#endif /* kcg_comp_struct__10125 */

#ifndef kcg_comp_struct__10132
extern kcg_bool kcg_comp_struct__10132(
  struct__10132 *kcg_c1,
  struct__10132 *kcg_c2);
#endif /* kcg_comp_struct__10132 */

#ifndef kcg_comp_struct__10146
extern kcg_bool kcg_comp_struct__10146(
  struct__10146 *kcg_c1,
  struct__10146 *kcg_c2);
#endif /* kcg_comp_struct__10146 */

#ifndef kcg_comp_struct__10154
extern kcg_bool kcg_comp_struct__10154(
  struct__10154 *kcg_c1,
  struct__10154 *kcg_c2);
#endif /* kcg_comp_struct__10154 */

#ifndef kcg_comp_struct__10162
extern kcg_bool kcg_comp_struct__10162(
  struct__10162 *kcg_c1,
  struct__10162 *kcg_c2);
#endif /* kcg_comp_struct__10162 */

#ifndef kcg_comp_struct__10170
extern kcg_bool kcg_comp_struct__10170(
  struct__10170 *kcg_c1,
  struct__10170 *kcg_c2);
#endif /* kcg_comp_struct__10170 */

#ifndef kcg_comp_struct__10188
extern kcg_bool kcg_comp_struct__10188(
  struct__10188 *kcg_c1,
  struct__10188 *kcg_c2);
#endif /* kcg_comp_struct__10188 */

#ifndef kcg_comp_struct__10197
extern kcg_bool kcg_comp_struct__10197(
  struct__10197 *kcg_c1,
  struct__10197 *kcg_c2);
#endif /* kcg_comp_struct__10197 */

#ifndef kcg_comp_struct__10207
extern kcg_bool kcg_comp_struct__10207(
  struct__10207 *kcg_c1,
  struct__10207 *kcg_c2);
#endif /* kcg_comp_struct__10207 */

#ifndef kcg_comp_struct__10218
extern kcg_bool kcg_comp_struct__10218(
  struct__10218 *kcg_c1,
  struct__10218 *kcg_c2);
#endif /* kcg_comp_struct__10218 */

#ifndef kcg_comp_struct__10226
extern kcg_bool kcg_comp_struct__10226(
  struct__10226 *kcg_c1,
  struct__10226 *kcg_c2);
#endif /* kcg_comp_struct__10226 */

#ifndef kcg_comp_struct__10259
extern kcg_bool kcg_comp_struct__10259(
  struct__10259 *kcg_c1,
  struct__10259 *kcg_c2);
#endif /* kcg_comp_struct__10259 */

#ifndef kcg_comp_struct__10268
extern kcg_bool kcg_comp_struct__10268(
  struct__10268 *kcg_c1,
  struct__10268 *kcg_c2);
#endif /* kcg_comp_struct__10268 */

#ifndef kcg_comp_struct__10278
extern kcg_bool kcg_comp_struct__10278(
  struct__10278 *kcg_c1,
  struct__10278 *kcg_c2);
#endif /* kcg_comp_struct__10278 */

#ifndef kcg_comp_struct__10293
extern kcg_bool kcg_comp_struct__10293(
  struct__10293 *kcg_c1,
  struct__10293 *kcg_c2);
#endif /* kcg_comp_struct__10293 */

#ifndef kcg_comp_struct__10303
extern kcg_bool kcg_comp_struct__10303(
  struct__10303 *kcg_c1,
  struct__10303 *kcg_c2);
#endif /* kcg_comp_struct__10303 */

#ifndef kcg_comp_struct__10334
extern kcg_bool kcg_comp_struct__10334(
  struct__10334 *kcg_c1,
  struct__10334 *kcg_c2);
#endif /* kcg_comp_struct__10334 */

#ifndef kcg_comp_struct__10339
extern kcg_bool kcg_comp_struct__10339(
  struct__10339 *kcg_c1,
  struct__10339 *kcg_c2);
#endif /* kcg_comp_struct__10339 */

#ifndef kcg_comp_struct__10394
extern kcg_bool kcg_comp_struct__10394(
  struct__10394 *kcg_c1,
  struct__10394 *kcg_c2);
#endif /* kcg_comp_struct__10394 */

#ifndef kcg_comp_struct__10402
extern kcg_bool kcg_comp_struct__10402(
  struct__10402 *kcg_c1,
  struct__10402 *kcg_c2);
#endif /* kcg_comp_struct__10402 */

#ifndef kcg_comp_struct__10411
extern kcg_bool kcg_comp_struct__10411(
  struct__10411 *kcg_c1,
  struct__10411 *kcg_c2);
#endif /* kcg_comp_struct__10411 */

#ifndef kcg_comp_struct__10423
extern kcg_bool kcg_comp_struct__10423(
  struct__10423 *kcg_c1,
  struct__10423 *kcg_c2);
#endif /* kcg_comp_struct__10423 */

#ifndef kcg_comp_struct__10430
extern kcg_bool kcg_comp_struct__10430(
  struct__10430 *kcg_c1,
  struct__10430 *kcg_c2);
#endif /* kcg_comp_struct__10430 */

#ifndef kcg_comp_struct__10445
extern kcg_bool kcg_comp_struct__10445(
  struct__10445 *kcg_c1,
  struct__10445 *kcg_c2);
#endif /* kcg_comp_struct__10445 */

#ifndef kcg_comp_struct__10460
extern kcg_bool kcg_comp_struct__10460(
  struct__10460 *kcg_c1,
  struct__10460 *kcg_c2);
#endif /* kcg_comp_struct__10460 */

#ifndef kcg_comp_struct__10465
extern kcg_bool kcg_comp_struct__10465(
  struct__10465 *kcg_c1,
  struct__10465 *kcg_c2);
#endif /* kcg_comp_struct__10465 */

#ifndef kcg_comp_struct__10471
extern kcg_bool kcg_comp_struct__10471(
  struct__10471 *kcg_c1,
  struct__10471 *kcg_c2);
#endif /* kcg_comp_struct__10471 */

#ifndef kcg_comp_struct__10476
extern kcg_bool kcg_comp_struct__10476(
  struct__10476 *kcg_c1,
  struct__10476 *kcg_c2);
#endif /* kcg_comp_struct__10476 */

#ifndef kcg_comp_struct__10483
extern kcg_bool kcg_comp_struct__10483(
  struct__10483 *kcg_c1,
  struct__10483 *kcg_c2);
#endif /* kcg_comp_struct__10483 */

#ifndef kcg_comp_struct__10494
extern kcg_bool kcg_comp_struct__10494(
  struct__10494 *kcg_c1,
  struct__10494 *kcg_c2);
#endif /* kcg_comp_struct__10494 */

#ifndef kcg_comp_struct__10501
extern kcg_bool kcg_comp_struct__10501(
  struct__10501 *kcg_c1,
  struct__10501 *kcg_c2);
#endif /* kcg_comp_struct__10501 */

#ifndef kcg_comp_struct__10513
extern kcg_bool kcg_comp_struct__10513(
  struct__10513 *kcg_c1,
  struct__10513 *kcg_c2);
#endif /* kcg_comp_struct__10513 */

#ifndef kcg_comp_struct__10523
extern kcg_bool kcg_comp_struct__10523(
  struct__10523 *kcg_c1,
  struct__10523 *kcg_c2);
#endif /* kcg_comp_struct__10523 */

#ifndef kcg_comp_array_int_3
extern kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2);
#endif /* kcg_comp_array_int_3 */

#ifndef kcg_comp_array__9781
extern kcg_bool kcg_comp_array__9781(array__9781 *kcg_c1, array__9781 *kcg_c2);
#endif /* kcg_comp_array__9781 */

#ifndef kcg_comp_array_int_15
extern kcg_bool kcg_comp_array_int_15(
  array_int_15 *kcg_c1,
  array_int_15 *kcg_c2);
#endif /* kcg_comp_array_int_15 */

#ifndef kcg_comp_array__9823
extern kcg_bool kcg_comp_array__9823(array__9823 *kcg_c1, array__9823 *kcg_c2);
#endif /* kcg_comp_array__9823 */

#ifndef kcg_comp_array__9857
extern kcg_bool kcg_comp_array__9857(array__9857 *kcg_c1, array__9857 *kcg_c2);
#endif /* kcg_comp_array__9857 */

#ifndef kcg_comp_array__9918
extern kcg_bool kcg_comp_array__9918(array__9918 *kcg_c1, array__9918 *kcg_c2);
#endif /* kcg_comp_array__9918 */

#ifndef kcg_comp_array_int_500
extern kcg_bool kcg_comp_array_int_500(
  array_int_500 *kcg_c1,
  array_int_500 *kcg_c2);
#endif /* kcg_comp_array_int_500 */

#ifndef kcg_comp_array__10059
extern kcg_bool kcg_comp_array__10059(
  array__10059 *kcg_c1,
  array__10059 *kcg_c2);
#endif /* kcg_comp_array__10059 */

#ifndef kcg_comp_array_int_6
extern kcg_bool kcg_comp_array_int_6(array_int_6 *kcg_c1, array_int_6 *kcg_c2);
#endif /* kcg_comp_array_int_6 */

#ifndef kcg_comp_array_int_128
extern kcg_bool kcg_comp_array_int_128(
  array_int_128 *kcg_c1,
  array_int_128 *kcg_c2);
#endif /* kcg_comp_array_int_128 */

#ifndef kcg_comp_array__10091
extern kcg_bool kcg_comp_array__10091(
  array__10091 *kcg_c1,
  array__10091 *kcg_c2);
#endif /* kcg_comp_array__10091 */

#ifndef kcg_comp_array__10140
extern kcg_bool kcg_comp_array__10140(
  array__10140 *kcg_c1,
  array__10140 *kcg_c2);
#endif /* kcg_comp_array__10140 */

#ifndef kcg_comp_array__10143
extern kcg_bool kcg_comp_array__10143(
  array__10143 *kcg_c1,
  array__10143 *kcg_c2);
#endif /* kcg_comp_array__10143 */

#ifndef kcg_comp_array__10194
extern kcg_bool kcg_comp_array__10194(
  array__10194 *kcg_c1,
  array__10194 *kcg_c2);
#endif /* kcg_comp_array__10194 */

#ifndef kcg_comp_array__10204
extern kcg_bool kcg_comp_array__10204(
  array__10204 *kcg_c1,
  array__10204 *kcg_c2);
#endif /* kcg_comp_array__10204 */

#ifndef kcg_comp_array__10223
extern kcg_bool kcg_comp_array__10223(
  array__10223 *kcg_c1,
  array__10223 *kcg_c2);
#endif /* kcg_comp_array__10223 */

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

#ifndef kcg_comp_array__10265
extern kcg_bool kcg_comp_array__10265(
  array__10265 *kcg_c1,
  array__10265 *kcg_c2);
#endif /* kcg_comp_array__10265 */

#ifndef kcg_comp_array__10275
extern kcg_bool kcg_comp_array__10275(
  array__10275 *kcg_c1,
  array__10275 *kcg_c2);
#endif /* kcg_comp_array__10275 */

#ifndef kcg_comp_array__10290
extern kcg_bool kcg_comp_array__10290(
  array__10290 *kcg_c1,
  array__10290 *kcg_c2);
#endif /* kcg_comp_array__10290 */

#ifndef kcg_comp_array__10300
extern kcg_bool kcg_comp_array__10300(
  array__10300 *kcg_c1,
  array__10300 *kcg_c2);
#endif /* kcg_comp_array__10300 */

#ifndef kcg_comp_array__10399
extern kcg_bool kcg_comp_array__10399(
  array__10399 *kcg_c1,
  array__10399 *kcg_c2);
#endif /* kcg_comp_array__10399 */

#ifndef kcg_comp_array__10408
extern kcg_bool kcg_comp_array__10408(
  array__10408 *kcg_c1,
  array__10408 *kcg_c2);
#endif /* kcg_comp_array__10408 */

#ifndef kcg_comp_array__10420
extern kcg_bool kcg_comp_array__10420(
  array__10420 *kcg_c1,
  array__10420 *kcg_c2);
#endif /* kcg_comp_array__10420 */

#ifndef kcg_comp_array_int_5
extern kcg_bool kcg_comp_array_int_5(array_int_5 *kcg_c1, array_int_5 *kcg_c2);
#endif /* kcg_comp_array_int_5 */

#ifndef kcg_comp_array_int_64
extern kcg_bool kcg_comp_array_int_64(
  array_int_64 *kcg_c1,
  array_int_64 *kcg_c2);
#endif /* kcg_comp_array_int_64 */

#ifndef kcg_comp_array__10442
extern kcg_bool kcg_comp_array__10442(
  array__10442 *kcg_c1,
  array__10442 *kcg_c2);
#endif /* kcg_comp_array__10442 */

#ifndef kcg_comp_array__10451
extern kcg_bool kcg_comp_array__10451(
  array__10451 *kcg_c1,
  array__10451 *kcg_c2);
#endif /* kcg_comp_array__10451 */

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

#ifndef kcg_comp_array__10488
extern kcg_bool kcg_comp_array__10488(
  array__10488 *kcg_c1,
  array__10488 *kcg_c2);
#endif /* kcg_comp_array__10488 */

#ifndef kcg_comp_array__10491
extern kcg_bool kcg_comp_array__10491(
  array__10491 *kcg_c1,
  array__10491 *kcg_c2);
#endif /* kcg_comp_array__10491 */

#ifndef kcg_comp_array_int_99
extern kcg_bool kcg_comp_array_int_99(
  array_int_99 *kcg_c1,
  array_int_99 *kcg_c2);
#endif /* kcg_comp_array_int_99 */

#ifndef kcg_comp_array__10520
extern kcg_bool kcg_comp_array__10520(
  array__10520 *kcg_c1,
  array__10520 *kcg_c2);
#endif /* kcg_comp_array__10520 */

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

#ifndef kcg_comp_array__10543
extern kcg_bool kcg_comp_array__10543(
  array__10543 *kcg_c1,
  array__10543 *kcg_c2);
#endif /* kcg_comp_array__10543 */

#ifndef kcg_comp_array__10546
extern kcg_bool kcg_comp_array__10546(
  array__10546 *kcg_c1,
  array__10546 *kcg_c2);
#endif /* kcg_comp_array__10546 */

#ifndef kcg_comp_array__10549
extern kcg_bool kcg_comp_array__10549(
  array__10549 *kcg_c1,
  array__10549 *kcg_c2);
#endif /* kcg_comp_array__10549 */

#ifndef kcg_comp_array_int_128_32
extern kcg_bool kcg_comp_array_int_128_32(
  array_int_128_32 *kcg_c1,
  array_int_128_32 *kcg_c2);
#endif /* kcg_comp_array_int_128_32 */

#ifndef kcg_comp_array__10555
extern kcg_bool kcg_comp_array__10555(
  array__10555 *kcg_c1,
  array__10555 *kcg_c2);
#endif /* kcg_comp_array__10555 */

#ifndef kcg_comp_array__10558
extern kcg_bool kcg_comp_array__10558(
  array__10558 *kcg_c1,
  array__10558 *kcg_c2);
#endif /* kcg_comp_array__10558 */

#ifndef kcg_comp_array_int_11
extern kcg_bool kcg_comp_array_int_11(
  array_int_11 *kcg_c1,
  array_int_11 *kcg_c2);
#endif /* kcg_comp_array_int_11 */

#ifndef kcg_comp_array__10564
extern kcg_bool kcg_comp_array__10564(
  array__10564 *kcg_c1,
  array__10564 *kcg_c2);
#endif /* kcg_comp_array__10564 */

#ifndef kcg_comp_array__10567
extern kcg_bool kcg_comp_array__10567(
  array__10567 *kcg_c1,
  array__10567 *kcg_c2);
#endif /* kcg_comp_array__10567 */

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

#ifndef kcg_comp_array__10576
extern kcg_bool kcg_comp_array__10576(
  array__10576 *kcg_c1,
  array__10576 *kcg_c2);
#endif /* kcg_comp_array__10576 */

#ifndef kcg_comp_array__10579
extern kcg_bool kcg_comp_array__10579(
  array__10579 *kcg_c1,
  array__10579 *kcg_c2);
#endif /* kcg_comp_array__10579 */

#ifndef kcg_comp_array__10582
extern kcg_bool kcg_comp_array__10582(
  array__10582 *kcg_c1,
  array__10582 *kcg_c2);
#endif /* kcg_comp_array__10582 */

#ifndef kcg_comp_array__10585
extern kcg_bool kcg_comp_array__10585(
  array__10585 *kcg_c1,
  array__10585 *kcg_c2);
#endif /* kcg_comp_array__10585 */

#ifndef kcg_comp_array__10588
extern kcg_bool kcg_comp_array__10588(
  array__10588 *kcg_c1,
  array__10588 *kcg_c2);
#endif /* kcg_comp_array__10588 */

#ifndef kcg_comp_array__10591
extern kcg_bool kcg_comp_array__10591(
  array__10591 *kcg_c1,
  array__10591 *kcg_c2);
#endif /* kcg_comp_array__10591 */

#ifndef kcg_comp_array__10594
extern kcg_bool kcg_comp_array__10594(
  array__10594 *kcg_c1,
  array__10594 *kcg_c2);
#endif /* kcg_comp_array__10594 */

#ifndef kcg_comp_array_int_32_32
extern kcg_bool kcg_comp_array_int_32_32(
  array_int_32_32 *kcg_c1,
  array_int_32_32 *kcg_c2);
#endif /* kcg_comp_array_int_32_32 */

#ifndef kcg_comp_array__10600
extern kcg_bool kcg_comp_array__10600(
  array__10600 *kcg_c1,
  array__10600 *kcg_c2);
#endif /* kcg_comp_array__10600 */

#ifndef kcg_comp_array__10603
extern kcg_bool kcg_comp_array__10603(
  array__10603 *kcg_c1,
  array__10603 *kcg_c2);
#endif /* kcg_comp_array__10603 */

#define kcg_comp_Position_Report_TrainToTrack kcg_comp_struct__9729

#define kcg_copy_Position_Report_TrainToTrack kcg_copy_struct__9729

#define kcg_comp_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_comp_array_int_3

#define kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_copy_array_int_3

#define kcg_comp_sTractionIdentity_T_Packet_TrainTypes_Pkg kcg_comp_struct__9776

#define kcg_copy_sTractionIdentity_T_Packet_TrainTypes_Pkg kcg_copy_struct__9776

#define kcg_comp_aTractionIdentity_T_Packet_TrainTypes_Pkg kcg_comp_array__9781

#define kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg kcg_copy_array__9781

#define kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg kcg_comp_struct__9784

#define kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg kcg_copy_struct__9784

#define kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg kcg_comp_struct__9800

#define kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg kcg_copy_struct__9800

#define kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg kcg_comp_struct__9805

#define kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg kcg_copy_struct__9805

#define kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg kcg_comp_struct__9810

#define kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg kcg_copy_struct__9810

#define kcg_comp_telephoneNumber_T_Packet_TrainTypes_Pkg kcg_comp_array_int_15

#define kcg_copy_telephoneNumber_T_Packet_TrainTypes_Pkg kcg_copy_array_int_15

#define kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg kcg_comp_struct__9818

#define kcg_copy_sNID_RADIO_T_Packet_TrainTypes_Pkg kcg_copy_struct__9818

#define kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg kcg_comp_array__9823

#define kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg kcg_copy_array__9823

#define kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg kcg_comp_struct__9826

#define kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg kcg_copy_struct__9826

#define kcg_comp_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg kcg_comp_struct__9724

#define kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg kcg_copy_struct__9724

#define kcg_comp_PT0_PositionReport_T_Packet_TrainTypes_Pkg kcg_comp_struct__9748

#define kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg kcg_copy_struct__9748

#define kcg_comp_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg kcg_comp_struct__9753

#define kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg kcg_copy_struct__9753

#define kcg_comp_outPackets_T_Common_Types_Pkg kcg_comp_struct__9832

#define kcg_copy_outPackets_T_Common_Types_Pkg kcg_copy_struct__9832

#define kcg_comp_RBC_Id_T_Common_Types_Pkg kcg_comp_struct__10029

#define kcg_copy_RBC_Id_T_Common_Types_Pkg kcg_copy_struct__10029

#define kcg_comp_RadioMetadata_T_Common_Types_Pkg kcg_comp_struct__10036

#define kcg_copy_RadioMetadata_T_Common_Types_Pkg kcg_copy_struct__10036

#define kcg_comp_Driver2MAR_T_MA_Request kcg_comp_struct__9996

#define kcg_copy_Driver2MAR_T_MA_Request kcg_copy_struct__9996

#define kcg_comp_ReceivedMessage_T_Common_Types_Pkg kcg_comp_struct__10067

#define kcg_copy_ReceivedMessage_T_Common_Types_Pkg kcg_copy_struct__10067

#define kcg_comp_CompressedPackets_T_Common_Types_Pkg kcg_comp_struct__10062

#define kcg_copy_CompressedPackets_T_Common_Types_Pkg kcg_copy_struct__10062

#define kcg_comp_CompressedPacketData_T_Common_Types_Pkg kcg_comp_array_int_500

#define kcg_copy_CompressedPacketData_T_Common_Types_Pkg kcg_copy_array_int_500

#define kcg_comp_Metadata_T_Common_Types_Pkg kcg_comp_array__10059

#define kcg_copy_Metadata_T_Common_Types_Pkg kcg_copy_array__10059

#define kcg_comp_MetadataElement_T_Common_Types_Pkg kcg_comp_struct__10051

#define kcg_copy_MetadataElement_T_Common_Types_Pkg kcg_copy_struct__10051

#define kcg_comp_T_Mode_Level_Level_And_Mode_Types_Pkg kcg_comp_struct__10119

#define kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg kcg_copy_struct__10119

#define kcg_comp_T_Reversing_Data_Level_And_Mode_Types_Pkg kcg_comp_struct__10146

#define kcg_copy_T_Reversing_Data_Level_And_Mode_Types_Pkg kcg_copy_struct__10146

#define kcg_comp_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg kcg_comp_struct__10154

#define kcg_copy_T_ERTMS_capabilities_Level_And_Mode_Types_Pkg kcg_copy_struct__10154

#define kcg_comp_T_Mode_Profile_Level_And_Mode_Types_Pkg kcg_comp_struct__10162

#define kcg_copy_T_Mode_Profile_Level_And_Mode_Types_Pkg kcg_copy_struct__10162

#define kcg_comp_P003_OBU_l_section_enum_T_TM kcg_comp_struct__10259

#define kcg_copy_P003_OBU_l_section_enum_T_TM kcg_copy_struct__10259

#define kcg_comp_P003_OBU_l_sectionlist_enum_T_TM kcg_comp_array__10265

#define kcg_copy_P003_OBU_l_sectionlist_enum_T_TM kcg_copy_array__10265

#define kcg_comp_P003_OBU_k_m_section_enum_T_TM kcg_comp_struct__10268

#define kcg_copy_P003_OBU_k_m_section_enum_T_TM kcg_copy_struct__10268

#define kcg_comp_P003_OBU_k_m_sectionlist_enum_T_TM kcg_comp_array__10275

#define kcg_copy_P003_OBU_k_m_sectionlist_enum_T_TM kcg_copy_array__10275

#define kcg_comp_P003_OBU_k_section_enum_T_TM kcg_comp_struct__10278

#define kcg_copy_P003_OBU_k_section_enum_T_TM kcg_copy_struct__10278

#define kcg_comp_P003_OBU_k_sectionlist_enum_T_TM kcg_comp_array__10290

#define kcg_copy_P003_OBU_k_sectionlist_enum_T_TM kcg_copy_array__10290

#define kcg_comp_P003_OBU_n_section_enum_T_TM kcg_comp_struct__10293

#define kcg_copy_P003_OBU_n_section_enum_T_TM kcg_copy_struct__10293

#define kcg_comp_P003_OBU_n_sectionlist_enum_T_TM kcg_comp_array__10300

#define kcg_copy_P003_OBU_n_sectionlist_enum_T_TM kcg_copy_array__10300

#define kcg_comp_P003_OBU_nid_c_section_enum_T_TM kcg_comp_struct__10218

#define kcg_copy_P003_OBU_nid_c_section_enum_T_TM kcg_copy_struct__10218

#define kcg_comp__5_P003_OBU_nid_c_sectionlist_enum_T_TM kcg_comp_array__10223

#define kcg_copy__5_P003_OBU_nid_c_sectionlist_enum_T_TM kcg_copy_array__10223

#define kcg_comp_P003_OBU_T_TM kcg_comp_struct__10339

#define kcg_copy_P003_OBU_T_TM kcg_copy_struct__10339

#define kcg_comp_P046_section_enum_T_TM kcg_comp_struct__10188

#define kcg_copy_P046_section_enum_T_TM kcg_copy_struct__10188

#define kcg_comp_P046_OBU_sectionlist_enum_T_TM kcg_comp_array__10194

#define kcg_copy_P046_OBU_sectionlist_enum_T_TM kcg_copy_array__10194

#define kcg_comp_P041_section_enum_T_TM kcg_comp_struct__10197

#define kcg_copy_P041_section_enum_T_TM kcg_copy_struct__10197

#define kcg_comp_P203V1_OBU_l_section_enum_T_TM_baseline2 kcg_comp_struct__10259

#define kcg_copy_P203V1_OBU_l_section_enum_T_TM_baseline2 kcg_copy_struct__10259

#define kcg_comp_P041_OBU_sectionlist_enum_T_TM kcg_comp_array__10204

#define kcg_copy_P041_OBU_sectionlist_enum_T_TM kcg_copy_array__10204

#define kcg_comp_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2 kcg_comp_array__10265

#define kcg_copy_P203V1_OBU_l_sectionlist_enum_T_TM_baseline2 kcg_copy_array__10265

#define kcg_comp_Array24_TM kcg_comp_array_int_24

#define kcg_copy_Array24_TM kcg_copy_array_int_24

#define kcg_comp_P203V1_OBU_k_m_section_enum_T_TM_baseline2 kcg_comp_struct__10268

#define kcg_copy_P203V1_OBU_k_m_section_enum_T_TM_baseline2 kcg_copy_struct__10268

#define kcg_comp__1_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2 kcg_comp_array__10275

#define kcg_copy__1_P203V1_OBU_k_m_sectionlist_enum_T_TM_baseline2 kcg_copy_array__10275

#define kcg_comp_Array03_TM kcg_comp_array_int_3

#define kcg_copy_Array03_TM kcg_copy_array_int_3

#define kcg_comp_Array15_TM kcg_comp_array_int_15

#define kcg_copy_Array15_TM kcg_copy_array_int_15

#define kcg_comp_P203V1_OBU_k_section_enum_T_TM_baseline2 kcg_comp_struct__10278

#define kcg_copy_P203V1_OBU_k_section_enum_T_TM_baseline2 kcg_copy_struct__10278

#define kcg_comp_P015_sections_array_flat_T_TM kcg_comp_array_int_128

#define kcg_copy_P015_sections_array_flat_T_TM kcg_copy_array_int_128

#define kcg_comp_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2 kcg_comp_array__10290

#define kcg_copy_P203V1_OBU_k_sectionlist_enum_T_TM_baseline2 kcg_copy_array__10290

#define kcg_comp_Array06_TM kcg_comp_array_int_6

#define kcg_copy_Array06_TM kcg_copy_array_int_6

#define kcg_comp_P203V1_OBU_n_section_enum_T_TM_baseline2 kcg_comp_struct__10293

#define kcg_copy_P203V1_OBU_n_section_enum_T_TM_baseline2 kcg_copy_struct__10293

#define kcg_comp_P015_section_enum_T_TM kcg_comp_struct__10083

#define kcg_copy_P015_section_enum_T_TM kcg_copy_struct__10083

#define kcg_comp_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2 kcg_comp_array__10300

#define kcg_copy_P203V1_OBU_n_sectionlist_enum_T_TM_baseline2 kcg_copy_array__10300

#define kcg_comp_P015_OBU_sectionlist_enum_T_TM kcg_comp_array__10091

#define kcg_copy_P015_OBU_sectionlist_enum_T_TM kcg_copy_array__10091

#define kcg_comp_P203V1_OBU_T_TM_baseline2 kcg_comp_struct__10303

#define kcg_copy_P203V1_OBU_T_TM_baseline2 kcg_copy_struct__10303

#define kcg_comp_P015_OBU_T_TM kcg_comp_struct__10094

#define kcg_copy_P015_OBU_T_TM kcg_copy_struct__10094

#define kcg_comp_P003_permanent_data_T_TM_baseline2 kcg_comp_struct__10334

#define kcg_copy_P003_permanent_data_T_TM_baseline2 kcg_copy_struct__10334

#define kcg_comp_P003V1_OBU_sectionlist_int_T_TM_baseline2 kcg_comp_array_int_32

#define kcg_copy_P003V1_OBU_sectionlist_int_T_TM_baseline2 kcg_copy_array_int_32

#define kcg_comp_Array05_TM kcg_comp_array_int_5

#define kcg_copy_Array05_TM kcg_copy_array_int_5

#define kcg_comp_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_comp_array__10420

#define kcg_copy_P027V1_OBU_sectionlist_enum_T_TM_baseline2 kcg_copy_array__10420

#define kcg_comp_P021_OBU_T_TM kcg_comp_struct__10523

#define kcg_copy_P021_OBU_T_TM kcg_copy_struct__10523

#define kcg_comp_P027V1_OBU_T_TM_baseline2 kcg_comp_struct__10423

#define kcg_copy_P027V1_OBU_T_TM_baseline2 kcg_copy_struct__10423

#define kcg_comp_P021_OBU_sectionlist_enum_T_TM kcg_comp_array__10520

#define kcg_copy_P021_OBU_sectionlist_enum_T_TM kcg_copy_array__10520

#define kcg_comp_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_comp_array_int_64

#define kcg_copy_P027V1_sections_array_flat_qdiff_T_TM_baseline2 kcg_copy_array_int_64

#define kcg_comp_P021_sections_array_flat_T_TM kcg_comp_array_int_99

#define kcg_copy_P021_sections_array_flat_T_TM kcg_copy_array_int_99

#define kcg_comp_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_comp_struct__10402

#define kcg_copy_P027V1_section_enum_qdiff_T_TM_baseline2 kcg_copy_struct__10402

#define kcg_comp_P021_section_enum_T_TM kcg_comp_struct__10513

#define kcg_copy_P021_section_enum_T_TM kcg_copy_struct__10513

#define kcg_comp__2_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_comp_array__10408

#define kcg_copy__2_P027V1_OBU_sectionlist_enum_qdiff_T_TM_baseline2 kcg_copy_array__10408

#define kcg_comp_P027V1_section_enum_T_TM_baseline2 kcg_comp_struct__10411

#define kcg_copy_P027V1_section_enum_T_TM_baseline2 kcg_copy_struct__10411

#define kcg_comp_P027V1_OBU_body_enum_T_TM_baseline2 kcg_comp_struct__10430

#define kcg_copy_P027V1_OBU_body_enum_T_TM_baseline2 kcg_copy_struct__10430

#define kcg_comp_P003V1_section_enum_T_TM_baseline2 kcg_comp_struct__10218

#define kcg_copy_P003V1_section_enum_T_TM_baseline2 kcg_copy_struct__10218

#define kcg_comp_P003V1_sectionlist_enum_T_TM_baseline2 kcg_comp_array__10223

#define kcg_copy_P003V1_sectionlist_enum_T_TM_baseline2 kcg_copy_array__10223

#define kcg_comp_P003V1_OBU_T_TM_baseline2 kcg_comp_struct__10226

#define kcg_copy_P003V1_OBU_T_TM_baseline2 kcg_copy_struct__10226

#define kcg_comp_trainProperties_T_TrainPosition_Types_Pck kcg_comp_struct__10001

#define kcg_copy_trainProperties_T_TrainPosition_Types_Pck kcg_copy_struct__10001

#define kcg_comp_infoFromLinking_T_TrainPosition_Types_Pck kcg_comp_struct__9909

#define kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck kcg_copy_struct__9909

#define kcg_comp_positionedBG_T_TrainPosition_Types_Pck kcg_comp_struct__9968

#define kcg_copy_positionedBG_T_TrainPosition_Types_Pck kcg_copy_struct__9968

#define kcg_comp_trainPosition_T_TrainPosition_Types_Pck kcg_comp_struct__9979

#define kcg_copy_trainPosition_T_TrainPosition_Types_Pck kcg_copy_struct__9979

#define kcg_comp_SSP_matrix_t_TA_MRSP kcg_comp_array__10442

#define kcg_copy_SSP_matrix_t_TA_MRSP kcg_copy_array__10442

#define kcg_comp_SSP_cat_t_TA_MRSP kcg_comp_array__10399

#define kcg_copy_SSP_cat_t_TA_MRSP kcg_copy_array__10399

#define kcg_comp_SSP_Mark_ValidSSPsection_TA_MRSP kcg_comp_struct__10460

#define kcg_copy_SSP_Mark_ValidSSPsection_TA_MRSP kcg_copy_struct__10460

#define kcg_comp_SSP_relevant_target_t_TA_MRSP kcg_comp_struct__10471

#define kcg_copy_SSP_relevant_target_t_TA_MRSP kcg_copy_struct__10471

#define kcg_comp_SSP_section_t_TA_MRSP kcg_comp_struct__10394

#define kcg_copy_SSP_section_t_TA_MRSP kcg_copy_struct__10394

#define kcg_comp_SSP_valid_section_t_TA_MRSP kcg_comp_struct__10465

#define kcg_copy_SSP_valid_section_t_TA_MRSP kcg_copy_struct__10465

#define kcg_comp_SSP_t_list_t_TA_MRSP kcg_comp_array__10451

#define kcg_copy_SSP_t_list_t_TA_MRSP kcg_copy_array__10451

#define kcg_comp_SSP_t_indexed_matrix_element_TA_MRSP kcg_comp_struct__10445

#define kcg_copy_SSP_t_indexed_matrix_element_TA_MRSP kcg_copy_struct__10445

#define kcg_comp_SSP_t_indexed_targets_list_t_TA_MRSP kcg_comp_array__10488

#define kcg_copy_SSP_t_indexed_targets_list_t_TA_MRSP kcg_copy_array__10488

#define kcg_comp_SSP_t_matrix_t_TA_MRSP kcg_comp_array_int_33_11

#define kcg_copy_SSP_t_matrix_t_TA_MRSP kcg_copy_array_int_33_11

#define kcg_comp_SSP_t_cat_t_TA_MRSP kcg_comp_array_int_33

#define kcg_copy_SSP_t_cat_t_TA_MRSP kcg_copy_array_int_33

#define kcg_comp_SSP_t_indexed_trgt_t_TA_MRSP kcg_comp_struct__10483

#define kcg_copy_SSP_t_indexed_trgt_t_TA_MRSP kcg_copy_struct__10483

#define kcg_comp_FlagsForModeAndLevel_t_TrackAtlasTypes kcg_comp_struct__10170

#define kcg_copy_FlagsForModeAndLevel_t_TrackAtlasTypes kcg_copy_struct__10170

#define kcg_comp_DataForModeAndLevel_t_TrackAtlasTypes kcg_comp_struct__10207

#define kcg_copy_DataForModeAndLevel_t_TrackAtlasTypes kcg_copy_struct__10207

#define kcg_comp_DataForDMI_t_TrackAtlasTypes kcg_comp_struct__10494

#define kcg_copy_DataForDMI_t_TrackAtlasTypes kcg_copy_struct__10494

#define kcg_comp_DataForSupervision_nextGen_t_TrackAtlasTypes kcg_comp_struct__10501

#define kcg_copy_DataForSupervision_nextGen_t_TrackAtlasTypes kcg_copy_struct__10501

#define kcg_comp_GradientProfile_for_DMI_t_TrackAtlasTypes kcg_comp_array__10140

#define kcg_copy_GradientProfile_for_DMI_t_TrackAtlasTypes kcg_copy_array__10140

#define kcg_comp__3_GradientProfile_for_DMI_section_t_TrackAtlasTypes kcg_comp_struct__10125

#define kcg_copy__3_GradientProfile_for_DMI_section_t_TrackAtlasTypes kcg_copy_struct__10125

#define kcg_comp_MRSP_section_t_TrackAtlasTypes kcg_comp_struct__10476

#define kcg_copy_MRSP_section_t_TrackAtlasTypes kcg_copy_struct__10476

#define kcg_comp_MRSP_Profile_t_TrackAtlasTypes kcg_comp_array__10491

#define kcg_copy_MRSP_Profile_t_TrackAtlasTypes kcg_copy_array__10491

#define kcg_comp_Endtimer_t_TrackAtlasTypes kcg_comp_struct__9860

#define kcg_copy_Endtimer_t_TrackAtlasTypes kcg_copy_struct__9860

#define kcg_comp_DP_or_OL_t_TrackAtlasTypes kcg_comp_struct__9865

#define kcg_copy_DP_or_OL_t_TrackAtlasTypes kcg_copy_struct__9865

#define kcg_comp_MovementAuthoritySection_t_TrackAtlasTypes kcg_comp_struct__9848

#define kcg_copy_MovementAuthoritySection_t_TrackAtlasTypes kcg_copy_struct__9848

#define kcg_comp__4_MovementAuthoritySectionlist_t_TrackAtlasTypes kcg_comp_array__9857

#define kcg_copy__4_MovementAuthoritySectionlist_t_TrackAtlasTypes kcg_copy_array__9857

#define kcg_comp_MovementAuthority_t_TrackAtlasTypes kcg_comp_struct__9871

#define kcg_copy_MovementAuthority_t_TrackAtlasTypes kcg_copy_struct__9871

#define kcg_comp_Gradient_section_t_TrackAtlasTypes kcg_comp_struct__10132

#define kcg_copy_Gradient_section_t_TrackAtlasTypes kcg_copy_struct__10132

#define kcg_comp_GradientProfile_t_TrackAtlasTypes kcg_comp_array__10143

#define kcg_copy_GradientProfile_t_TrackAtlasTypes kcg_copy_array__10143

#define kcg_comp_Radio_TrainTrack_Message_T_Radio_Types_Pkg kcg_comp_struct__9842

#define kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg kcg_copy_struct__9842

#define kcg_comp_Radio_TrainTrack_Header_T_Radio_Types_Pkg kcg_comp_struct__9761

#define kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg kcg_copy_struct__9761

#define kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_comp_struct__10011

#define kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg kcg_copy_struct__10011

#define kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_comp_struct__9889

#define kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_copy_struct__9889

#define kcg_comp_OdometrySpeeds_T_Obu_BasicTypes_Pkg kcg_comp_struct__9921

#define kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg kcg_copy_struct__9921

#define kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg kcg_comp_struct__9928

#define kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg kcg_copy_struct__9928

#define kcg_comp_odometry_T_Obu_BasicTypes_Pkg kcg_comp_struct__9934

#define kcg_copy_odometry_T_Obu_BasicTypes_Pkg kcg_copy_struct__9934

#define kcg_comp_LinkedBGs_T_BG_Types_Pkg kcg_comp_array__9918

#define kcg_copy_LinkedBGs_T_BG_Types_Pkg kcg_copy_array__9918

#define kcg_comp_passedBG_T_BG_Types_Pkg kcg_comp_struct__9962

#define kcg_copy_passedBG_T_BG_Types_Pkg kcg_copy_struct__9962

#define kcg_comp_LinkedBG_T_BG_Types_Pkg kcg_comp_struct__9895

#define kcg_copy_LinkedBG_T_BG_Types_Pkg kcg_copy_struct__9895

#define kcg_comp_BG_Header_T_BG_Types_Pkg kcg_comp_struct__9944

#define kcg_copy_BG_Header_T_BG_Types_Pkg kcg_copy_struct__9944

#define kcg_comp_Position_Report_based_on_two_balise_groups_TrainToTrack kcg_comp_struct__9704

#define kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack kcg_copy_struct__9704

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-07-28T17:06:46
*************************************************************$ */


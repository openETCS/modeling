/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/GITHUB/modeling/model/Scade/System/ObuFunctions/TrackAtlas/MA_Request__Build_MA_request_KCG613\kcg_s2c_config.txt
** Generation date: 2015-07-28T16:22:46
*************************************************************$ */
#ifndef _KCG_TYPES_H_
#define _KCG_TYPES_H_

#define KCG_MAPW_CPY

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
  _3_Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA = 0,
  Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_no_update_of_EOA = 1,
  Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted = 2,
  Q_EMERGENCYSTOP_Emergency_stop = 3
} Q_EMERGENCYSTOP;
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
/* Q_DLRBG */
typedef enum {
  Q_DLRBG_Reverse = 0,
  Q_DLRBG_Nominal = 1,
  Q_DLRBG_Unknown = 2
} Q_DLRBG;
/* Q_LENGTH */
typedef enum {
  Q_LENGTH_No_train_integrity_information_available = 0,
  _2_Q_LENGTH_Train_integrity_confirmed_by_integrity_monitoring_device = 1,
  Q_LENGTH_Train_integrity_confirmed_by_driver = 2,
  Q_LENGTH_Train_integrity_lost = 3
} Q_LENGTH;
/* Q_DIRTRAIN */
typedef enum {
  Q_DIRTRAIN_Reverse = 0,
  Q_DIRTRAIN_Nominal = 1,
  Q_DIRTRAIN_Unknown = 2
} Q_DIRTRAIN;
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
  _1_NC_TRAIN_Freight_train_braked_in_P_position = 1,
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
/* T_TRAIN */
typedef kcg_real T_TRAIN;

/* NID_MESSAGE */
typedef kcg_int NID_MESSAGE;

/* NID_ENGINE */
typedef kcg_int NID_ENGINE;

/* NID_EM */
typedef kcg_int NID_EM;

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

/* Obu_BasicTypes_Pkg::BCD_T */
typedef kcg_int BCD_T_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::L_internal_Type */
typedef kcg_int L_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::V_internal_Type */
typedef kcg_int V_internal_Type_Obu_BasicTypes_Pkg;

typedef struct {
  L_internal_Type_Obu_BasicTypes_Pkg nominal;
  L_internal_Type_Obu_BasicTypes_Pkg d_min;
  L_internal_Type_Obu_BasicTypes_Pkg d_max;
} struct__431;

/* Obu_BasicTypes_Pkg::LocWithInAcc_T */
typedef struct__431 LocWithInAcc_T_Obu_BasicTypes_Pkg;

typedef struct {
  NID_ENGINE nid_engine;
  NID_OPERATIONAL nid_operational;
  L_TRAIN l_train;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_baliseAntenna_2_frontend;
  LocWithInAcc_T_Obu_BasicTypes_Pkg d_frontend_2_rearend;
  LocWithInAcc_T_Obu_BasicTypes_Pkg locationAccuracy_DefaultValue;
  LocWithInAcc_T_Obu_BasicTypes_Pkg centerDetectionAcc_DefaultValue;
} struct__437;

/* TrainPosition_Types_Pck::trainProperties_T */
typedef struct__437 trainProperties_T_TrainPosition_Types_Pck;

typedef NID_NTC array_int_3[3];

/* Packet_TrainTypes_Pkg::aNID_NTC_T */
typedef array_int_3 aNID_NTC_T_Packet_TrainTypes_Pkg;

typedef struct {
  M_VOLTAGE m_voltage;
  NID_CTRACTION nid_ctraction;
} struct__450;

/* Packet_TrainTypes_Pkg::sTractionIdentity_T */
typedef struct__450 sTractionIdentity_T_Packet_TrainTypes_Pkg;

typedef sTractionIdentity_T_Packet_TrainTypes_Pkg array__455[3];

/* Packet_TrainTypes_Pkg::aTractionIdentity_T */
typedef array__455 aTractionIdentity_T_Packet_TrainTypes_Pkg;

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
} struct__458;

/* Packet_TrainTypes_Pkg::PT11_ValidatedTrainData_T */
typedef struct__458 PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg;

typedef struct { kcg_bool valid; NID_LTRBG transitionInformation; } struct__474;

/* Packet_TrainTypes_Pkg::PT9_Level23_TransitionInformation_T */
typedef struct__474 PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  NID_OPERATIONAL TrainRunningNumber;
} struct__479;

/* Packet_TrainTypes_Pkg::PT5_TrainRunningNumber */
typedef struct__479 PT5_TrainRunningNumber_Packet_TrainTypes_Pkg;

typedef struct { kcg_bool valid; M_ERROR M_ERROR; } struct__484;

/* Packet_TrainTypes_Pkg::PT4_ErrorReporting_T */
typedef struct__484 PT4_ErrorReporting_T_Packet_TrainTypes_Pkg;

typedef BCD_T_Obu_BasicTypes_Pkg array_int_15[15];

/* Packet_TrainTypes_Pkg::telephoneNumber_T */
typedef array_int_15 telephoneNumber_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  telephoneNumber_T_Packet_TrainTypes_Pkg telephoneNumber;
} struct__492;

/* Packet_TrainTypes_Pkg::sNID_RADIO_T */
typedef struct__492 sNID_RADIO_T_Packet_TrainTypes_Pkg;

typedef sNID_RADIO_T_Packet_TrainTypes_Pkg array__497[1];

/* Packet_TrainTypes_Pkg::aNID_RADIO_T */
typedef array__497 aNID_RADIO_T_Packet_TrainTypes_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int number;
  aNID_RADIO_T_Packet_TrainTypes_Pkg aNID_RADIO;
} struct__500;

/* Packet_TrainTypes_Pkg::PT3_OnboardTelephoneNumbers_T */
typedef struct__500 PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg;

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
} struct__506;

/* TrainToTrack::Position_Report_based_on_two_balise_groups */
typedef struct__506 Position_Report_based_on_two_balise_groups_TrainToTrack;

typedef struct {
  kcg_bool valid;
  Position_Report_based_on_two_balise_groups_TrainToTrack packet1;
} struct__526;

/* Packet_TrainTypes_Pkg::PT1_PositionReport_2BG_T */
typedef struct__526 PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg;

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
} struct__531;

/* TrainToTrack::Position_Report */
typedef struct__531 Position_Report_TrainToTrack;

typedef struct {
  kcg_bool valid;
  Position_Report_TrainToTrack packet0;
} struct__550;

/* Packet_TrainTypes_Pkg::PT0_PositionReport_T */
typedef struct__550 PT0_PositionReport_T_Packet_TrainTypes_Pkg;

typedef struct {
  PT0_PositionReport_T_Packet_TrainTypes_Pkg p0;
  PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg p1;
  PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg p3;
  PT4_ErrorReporting_T_Packet_TrainTypes_Pkg p4;
  PT5_TrainRunningNumber_Packet_TrainTypes_Pkg p5;
  PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg p9;
  PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg p11;
} struct__555;

/* Common_Types_Pkg::outPackets_T */
typedef struct__555 outPackets_T_Common_Types_Pkg;

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
} struct__565;

/* Radio_Types_Pkg::Radio_TrainTrack_Header_T */
typedef struct__565 Radio_TrainTrack_Header_T_Radio_Types_Pkg;

typedef struct {
  kcg_bool present;
  Radio_TrainTrack_Header_T_Radio_Types_Pkg header;
  outPackets_T_Common_Types_Pkg packets;
} struct__577;

/* Radio_Types_Pkg::Radio_TrainTrack_Message_T */
typedef struct__577 Radio_TrainTrack_Message_T_Radio_Types_Pkg;

#ifndef kcg_copy_struct__431
#define kcg_copy_struct__431(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__431)))
#endif /* kcg_copy_struct__431 */

#ifndef kcg_copy_struct__437
#define kcg_copy_struct__437(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__437)))
#endif /* kcg_copy_struct__437 */

#ifndef kcg_copy_struct__450
#define kcg_copy_struct__450(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__450)))
#endif /* kcg_copy_struct__450 */

#ifndef kcg_copy_struct__458
#define kcg_copy_struct__458(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__458)))
#endif /* kcg_copy_struct__458 */

#ifndef kcg_copy_struct__474
#define kcg_copy_struct__474(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__474)))
#endif /* kcg_copy_struct__474 */

#ifndef kcg_copy_struct__479
#define kcg_copy_struct__479(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__479)))
#endif /* kcg_copy_struct__479 */

#ifndef kcg_copy_struct__484
#define kcg_copy_struct__484(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__484)))
#endif /* kcg_copy_struct__484 */

#ifndef kcg_copy_struct__492
#define kcg_copy_struct__492(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__492)))
#endif /* kcg_copy_struct__492 */

#ifndef kcg_copy_struct__500
#define kcg_copy_struct__500(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__500)))
#endif /* kcg_copy_struct__500 */

#ifndef kcg_copy_struct__506
#define kcg_copy_struct__506(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__506)))
#endif /* kcg_copy_struct__506 */

#ifndef kcg_copy_struct__526
#define kcg_copy_struct__526(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__526)))
#endif /* kcg_copy_struct__526 */

#ifndef kcg_copy_struct__531
#define kcg_copy_struct__531(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__531)))
#endif /* kcg_copy_struct__531 */

#ifndef kcg_copy_struct__550
#define kcg_copy_struct__550(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__550)))
#endif /* kcg_copy_struct__550 */

#ifndef kcg_copy_struct__555
#define kcg_copy_struct__555(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__555)))
#endif /* kcg_copy_struct__555 */

#ifndef kcg_copy_struct__565
#define kcg_copy_struct__565(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__565)))
#endif /* kcg_copy_struct__565 */

#ifndef kcg_copy_struct__577
#define kcg_copy_struct__577(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__577)))
#endif /* kcg_copy_struct__577 */

#ifndef kcg_copy_array_int_3
#define kcg_copy_array_int_3(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_3)))
#endif /* kcg_copy_array_int_3 */

#ifndef kcg_copy_array__455
#define kcg_copy_array__455(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__455)))
#endif /* kcg_copy_array__455 */

#ifndef kcg_copy_array_int_15
#define kcg_copy_array_int_15(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array_int_15)))
#endif /* kcg_copy_array_int_15 */

#ifndef kcg_copy_array__497
#define kcg_copy_array__497(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__497)))
#endif /* kcg_copy_array__497 */

#ifndef kcg_comp_struct__431
extern kcg_bool kcg_comp_struct__431(struct__431 *kcg_c1, struct__431 *kcg_c2);
#endif /* kcg_comp_struct__431 */

#ifndef kcg_comp_struct__437
extern kcg_bool kcg_comp_struct__437(struct__437 *kcg_c1, struct__437 *kcg_c2);
#endif /* kcg_comp_struct__437 */

#ifndef kcg_comp_struct__450
extern kcg_bool kcg_comp_struct__450(struct__450 *kcg_c1, struct__450 *kcg_c2);
#endif /* kcg_comp_struct__450 */

#ifndef kcg_comp_struct__458
extern kcg_bool kcg_comp_struct__458(struct__458 *kcg_c1, struct__458 *kcg_c2);
#endif /* kcg_comp_struct__458 */

#ifndef kcg_comp_struct__474
extern kcg_bool kcg_comp_struct__474(struct__474 *kcg_c1, struct__474 *kcg_c2);
#endif /* kcg_comp_struct__474 */

#ifndef kcg_comp_struct__479
extern kcg_bool kcg_comp_struct__479(struct__479 *kcg_c1, struct__479 *kcg_c2);
#endif /* kcg_comp_struct__479 */

#ifndef kcg_comp_struct__484
extern kcg_bool kcg_comp_struct__484(struct__484 *kcg_c1, struct__484 *kcg_c2);
#endif /* kcg_comp_struct__484 */

#ifndef kcg_comp_struct__492
extern kcg_bool kcg_comp_struct__492(struct__492 *kcg_c1, struct__492 *kcg_c2);
#endif /* kcg_comp_struct__492 */

#ifndef kcg_comp_struct__500
extern kcg_bool kcg_comp_struct__500(struct__500 *kcg_c1, struct__500 *kcg_c2);
#endif /* kcg_comp_struct__500 */

#ifndef kcg_comp_struct__506
extern kcg_bool kcg_comp_struct__506(struct__506 *kcg_c1, struct__506 *kcg_c2);
#endif /* kcg_comp_struct__506 */

#ifndef kcg_comp_struct__526
extern kcg_bool kcg_comp_struct__526(struct__526 *kcg_c1, struct__526 *kcg_c2);
#endif /* kcg_comp_struct__526 */

#ifndef kcg_comp_struct__531
extern kcg_bool kcg_comp_struct__531(struct__531 *kcg_c1, struct__531 *kcg_c2);
#endif /* kcg_comp_struct__531 */

#ifndef kcg_comp_struct__550
extern kcg_bool kcg_comp_struct__550(struct__550 *kcg_c1, struct__550 *kcg_c2);
#endif /* kcg_comp_struct__550 */

#ifndef kcg_comp_struct__555
extern kcg_bool kcg_comp_struct__555(struct__555 *kcg_c1, struct__555 *kcg_c2);
#endif /* kcg_comp_struct__555 */

#ifndef kcg_comp_struct__565
extern kcg_bool kcg_comp_struct__565(struct__565 *kcg_c1, struct__565 *kcg_c2);
#endif /* kcg_comp_struct__565 */

#ifndef kcg_comp_struct__577
extern kcg_bool kcg_comp_struct__577(struct__577 *kcg_c1, struct__577 *kcg_c2);
#endif /* kcg_comp_struct__577 */

#ifndef kcg_comp_array_int_3
extern kcg_bool kcg_comp_array_int_3(array_int_3 *kcg_c1, array_int_3 *kcg_c2);
#endif /* kcg_comp_array_int_3 */

#ifndef kcg_comp_array__455
extern kcg_bool kcg_comp_array__455(array__455 *kcg_c1, array__455 *kcg_c2);
#endif /* kcg_comp_array__455 */

#ifndef kcg_comp_array_int_15
extern kcg_bool kcg_comp_array_int_15(
  array_int_15 *kcg_c1,
  array_int_15 *kcg_c2);
#endif /* kcg_comp_array_int_15 */

#ifndef kcg_comp_array__497
extern kcg_bool kcg_comp_array__497(array__497 *kcg_c1, array__497 *kcg_c2);
#endif /* kcg_comp_array__497 */

#define kcg_comp_trainProperties_T_TrainPosition_Types_Pck kcg_comp_struct__437

#define kcg_copy_trainProperties_T_TrainPosition_Types_Pck kcg_copy_struct__437

#define kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_comp_struct__431

#define kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg kcg_copy_struct__431

#define kcg_comp_Position_Report_based_on_two_balise_groups_TrainToTrack kcg_comp_struct__506

#define kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack kcg_copy_struct__506

#define kcg_comp_Position_Report_TrainToTrack kcg_comp_struct__531

#define kcg_copy_Position_Report_TrainToTrack kcg_copy_struct__531

#define kcg_comp_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_comp_array_int_3

#define kcg_copy_aNID_NTC_T_Packet_TrainTypes_Pkg kcg_copy_array_int_3

#define kcg_comp_sTractionIdentity_T_Packet_TrainTypes_Pkg kcg_comp_struct__450

#define kcg_copy_sTractionIdentity_T_Packet_TrainTypes_Pkg kcg_copy_struct__450

#define kcg_comp_aTractionIdentity_T_Packet_TrainTypes_Pkg kcg_comp_array__455

#define kcg_copy_aTractionIdentity_T_Packet_TrainTypes_Pkg kcg_copy_array__455

#define kcg_comp_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg kcg_comp_struct__458

#define kcg_copy_PT11_ValidatedTrainData_T_Packet_TrainTypes_Pkg kcg_copy_struct__458

#define kcg_comp_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg kcg_comp_struct__474

#define kcg_copy_PT9_Level23_TransitionInformation_T_Packet_TrainTypes_Pkg kcg_copy_struct__474

#define kcg_comp_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg kcg_comp_struct__479

#define kcg_copy_PT5_TrainRunningNumber_Packet_TrainTypes_Pkg kcg_copy_struct__479

#define kcg_comp_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg kcg_comp_struct__484

#define kcg_copy_PT4_ErrorReporting_T_Packet_TrainTypes_Pkg kcg_copy_struct__484

#define kcg_comp_telephoneNumber_T_Packet_TrainTypes_Pkg kcg_comp_array_int_15

#define kcg_copy_telephoneNumber_T_Packet_TrainTypes_Pkg kcg_copy_array_int_15

#define kcg_comp_sNID_RADIO_T_Packet_TrainTypes_Pkg kcg_comp_struct__492

#define kcg_copy_sNID_RADIO_T_Packet_TrainTypes_Pkg kcg_copy_struct__492

#define kcg_comp_aNID_RADIO_T_Packet_TrainTypes_Pkg kcg_comp_array__497

#define kcg_copy_aNID_RADIO_T_Packet_TrainTypes_Pkg kcg_copy_array__497

#define kcg_comp_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg kcg_comp_struct__500

#define kcg_copy_PT3_OnboardTelephoneNumbers_T_Packet_TrainTypes_Pkg kcg_copy_struct__500

#define kcg_comp_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg kcg_comp_struct__526

#define kcg_copy_PT1_PositionReport_2BG_T_Packet_TrainTypes_Pkg kcg_copy_struct__526

#define kcg_comp_PT0_PositionReport_T_Packet_TrainTypes_Pkg kcg_comp_struct__550

#define kcg_copy_PT0_PositionReport_T_Packet_TrainTypes_Pkg kcg_copy_struct__550

#define kcg_comp_outPackets_T_Common_Types_Pkg kcg_comp_struct__555

#define kcg_copy_outPackets_T_Common_Types_Pkg kcg_copy_struct__555

#define kcg_comp_Radio_TrainTrack_Message_T_Radio_Types_Pkg kcg_comp_struct__577

#define kcg_copy_Radio_TrainTrack_Message_T_Radio_Types_Pkg kcg_copy_struct__577

#define kcg_comp_Radio_TrainTrack_Header_T_Radio_Types_Pkg kcg_comp_struct__565

#define kcg_copy_Radio_TrainTrack_Header_T_Radio_Types_Pkg kcg_copy_struct__565

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2015-07-28T16:22:46
*************************************************************$ */


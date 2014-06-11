/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config C:/Users/GiovanniTrotta/Desktop/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/BaliseGroup/DetermineBG_Orientation_and_LRBG/Simulation/config.txt
** Generation date: 2014-06-11T16:39:34
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
/* M_LEVELTR */
typedef enum kcg_tag_M_LEVELTR {
  M_LEVELTR_Level_0 = 0,
  M_LEVELTR_Level_NTC_specified_by_NID_NTC = 1,
  M_LEVELTR_Level_1 = 2,
  M_LEVELTR_Level_2 = 3,
  M_LEVELTR_Level_3 = 4
} M_LEVELTR;
/* Q_DIRTRAIN */
typedef enum kcg_tag_Q_DIRTRAIN {
  Q_DIRTRAIN_Reverse = 0,
  Q_DIRTRAIN_Nominal = 1,
  Q_DIRTRAIN_Unknown = 2
} Q_DIRTRAIN;
/* M_VERSION */
typedef enum kcg_tag_M_VERSION {
  M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS = 0,
  M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0 = 16,
  M_VERSION_Version_1_1_introduced_in_SRS_3_3_0 = 17,
  M_VERSION_Version_2_0_introduced_in_SRS_3_3_0 = 32
} M_VERSION;
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
/* Q_MEDIA */
typedef enum kcg_tag_Q_MEDIA { Q_MEDIA_Balise = 0, Q_MEDIA_Loop = 1 } Q_MEDIA;
/* Q_UPDOWN */
typedef enum kcg_tag_Q_UPDOWN {
  Q_UPDOWN_Down_link_telegram = 0,
  Q_UPDOWN_Up_link_telegram = 1
} Q_UPDOWN;
/* Q_LINK */
typedef enum kcg_tag_Q_LINK { Q_LINK_Unlinked = 0, Q_LINK_Linked = 1 } Q_LINK;
/* M_DUP */
typedef enum kcg_tag_M_DUP {
  M_DUP_No_duplicates = 0,
  _1_M_DUP_This_balise_is_a_duplicate_of_the_next_balise = 1,
  M_DUP_This_balise_is_a_duplicate_of_the_previous_balise = 2
} M_DUP;
/* AdditionalInformation */
typedef enum kcg_tag_AdditionalInformation { value1 } AdditionalInformation;
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
/* Orientation */
typedef enum kcg_tag_Orientation {
  Single_Balise_Group,
  DIR_Nominal,
  DIR_Reverse
} Orientation;
/* DetermineBGOrientation_LRBG::FinalCheck::SM1 */
typedef enum kcg_tag_SSM_TR_SM1 {
  SSM_TR_no_trans_SM1,
  SSM_TR_Initial_1_SM1,
  SSM_TR_Initial_2_SM1
} SSM_TR_SM1;
/* DetermineBGOrientation_LRBG::FinalCheck::SM1 */
typedef enum kcg_tag_SSM_ST_SM1 {
  SSM_st_Initial_SM1,
  SSM_st_Level0or1_SM1,
  SSM_st_Level2or3_SM1
} SSM_ST_SM1;
/* DetermineBGOrientation_LRBG::FinalCheck::SM1::Level2or3::SM2 */
typedef enum kcg_tag_SSM_TR_SM2_SM1_Level2or3 {
  SSM_TR_no_trans_SM2_SM1_Level2or3,
  SSM_TR_Init_1_SM2_SM1_Level2or3,
  SSM_TR_Init_2_SM2_SM1_Level2or3
} SSM_TR_SM2_SM1_Level2or3;
/* DetermineBGOrientation_LRBG::FinalCheck::SM1::Level2or3::SM2 */
typedef enum kcg_tag_SSM_ST_SM2_SM1_Level2or3 {
  SSM_st_Init_SM1_Level2or3_SM2,
  SSM_st_Ack_SM1_Level2or3_SM2,
  SSM_st_NoAck_SM1_Level2or3_SM2
} SSM_ST_SM2_SM1_Level2or3;
/* TrainInfo */
typedef struct kcg_tag_TrainInfo {
  M_LEVELTR m_leveltr;
  M_MODE m_mode;
} TrainInfo;

/* Flag */
typedef struct kcg_tag_Flag { kcg_bool boolean_; } Flag;

/* NID_BG */
typedef kcg_int NID_BG;

/* NID_C */
typedef kcg_int NID_C;

/* M_MCOUNT */
typedef kcg_int M_MCOUNT;

/* Header */
typedef struct kcg_tag_Header {
  M_VERSION m_version;
  N_TOTAL n_total;
  N_PIG n_pig;
  Q_MEDIA q_media;
  Q_UPDOWN q_updown;
  Q_LINK q_link;
  NID_BG nid_bg;
  NID_C nid_c;
  M_MCOUNT m_mcount;
  M_DUP m_dup;
} Header;

/* HeaderFlag */
typedef struct kcg_tag_HeaderFlag { Header header; Flag flag; } HeaderFlag;

/* HederArray */
typedef HeaderFlag HederArray[8];

/* CheckedBGMessage */
typedef struct kcg_tag_CheckedBGMessage {
  HederArray headerflag;
  AdditionalInformation additionalinformation;
} CheckedBGMessage;

/* FilteredBGMessage */
typedef struct kcg_tag_FilteredBGMessage {
  Q_DIRTRAIN q_dirlrbg;
  CheckedBGMessage checkedbgmessage;
} FilteredBGMessage;

/* Position */
typedef struct kcg_tag_Position { kcg_int Position_1; } Position;

/* CurrentLRBG */
typedef struct kcg_tag_CurrentLRBG {
  FilteredBGMessage filteredbgmessage;
  Position position;
} CurrentLRBG;

/* ListOfBGs */
typedef CurrentLRBG ListOfBGs[20];

/* Radio_TrainToTrack::Train_Position_Report */
typedef struct kcg_tag_Train_Position_Report_Radio_TrainToTrack {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int NID_ENGINE;
  kcg_int PADDING3;
  kcg_int Train_Position_Report_OptionalPackets;
} Train_Position_Report_Radio_TrainToTrack;

/* Radio_TrackToTrain::Assignment_of_coordinate_system */
typedef struct kcg_tag_Assignment_of_coordinate_system_Radio_TrackToTrain {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int M_ACK;
  kcg_int NID_LRBG;
  kcg_int Q_ORIENTATION;
} Assignment_of_coordinate_system_Radio_TrackToTrain;

/* RBCOrientationReport */
typedef struct kcg_tag_RBCOrientationReport {
  Assignment_of_coordinate_system_Radio_TrackToTrain assignment_of_coordinate_system;
} RBCOrientationReport;

#ifndef kcg_copy_Header
#define kcg_copy_Header(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Header)))
#endif /* kcg_copy_Header */

#ifndef kcg_copy_TrainInfo
#define kcg_copy_TrainInfo(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (TrainInfo)))
#endif /* kcg_copy_TrainInfo */

#ifndef kcg_copy_HeaderFlag
#define kcg_copy_HeaderFlag(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (HeaderFlag)))
#endif /* kcg_copy_HeaderFlag */

#ifndef kcg_copy_Flag
#define kcg_copy_Flag(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Flag)))
#endif /* kcg_copy_Flag */

#ifndef kcg_copy_FilteredBGMessage
#define kcg_copy_FilteredBGMessage(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (FilteredBGMessage)))
#endif /* kcg_copy_FilteredBGMessage */

#ifndef kcg_copy_Train_Position_Report_Radio_TrainToTrack
#define kcg_copy_Train_Position_Report_Radio_TrainToTrack(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Train_Position_Report_Radio_TrainToTrack)))
#endif /* kcg_copy_Train_Position_Report_Radio_TrainToTrack */

#ifndef kcg_copy_Assignment_of_coordinate_system_Radio_TrackToTrain
#define kcg_copy_Assignment_of_coordinate_system_Radio_TrackToTrain(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Assignment_of_coordinate_system_Radio_TrackToTrain)))
#endif /* kcg_copy_Assignment_of_coordinate_system_Radio_TrackToTrain */

#ifndef kcg_copy_CurrentLRBG
#define kcg_copy_CurrentLRBG(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (CurrentLRBG)))
#endif /* kcg_copy_CurrentLRBG */

#ifndef kcg_copy_CheckedBGMessage
#define kcg_copy_CheckedBGMessage(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (CheckedBGMessage)))
#endif /* kcg_copy_CheckedBGMessage */

#ifndef kcg_copy_RBCOrientationReport
#define kcg_copy_RBCOrientationReport(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (RBCOrientationReport)))
#endif /* kcg_copy_RBCOrientationReport */

#ifndef kcg_copy_Position
#define kcg_copy_Position(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (Position)))
#endif /* kcg_copy_Position */

#ifndef kcg_copy_ListOfBGs
#define kcg_copy_ListOfBGs(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (ListOfBGs)))
#endif /* kcg_copy_ListOfBGs */

#ifndef kcg_copy_HederArray
#define kcg_copy_HederArray(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (HederArray)))
#endif /* kcg_copy_HederArray */

#ifdef kcg_use_Header
#ifndef kcg_comp_Header
extern kcg_bool kcg_comp_Header(Header *kcg_c1, Header *kcg_c2);
#endif /* kcg_comp_Header */
#endif /* kcg_use_Header */

#ifdef kcg_use_TrainInfo
#ifndef kcg_comp_TrainInfo
extern kcg_bool kcg_comp_TrainInfo(TrainInfo *kcg_c1, TrainInfo *kcg_c2);
#endif /* kcg_comp_TrainInfo */
#endif /* kcg_use_TrainInfo */

#ifdef kcg_use_HeaderFlag
#ifndef kcg_comp_HeaderFlag
extern kcg_bool kcg_comp_HeaderFlag(HeaderFlag *kcg_c1, HeaderFlag *kcg_c2);
#endif /* kcg_comp_HeaderFlag */
#endif /* kcg_use_HeaderFlag */

#ifdef kcg_use_Flag
#ifndef kcg_comp_Flag
extern kcg_bool kcg_comp_Flag(Flag *kcg_c1, Flag *kcg_c2);
#endif /* kcg_comp_Flag */
#endif /* kcg_use_Flag */

#ifdef kcg_use_FilteredBGMessage
#ifndef kcg_comp_FilteredBGMessage
extern kcg_bool kcg_comp_FilteredBGMessage(
  FilteredBGMessage *kcg_c1,
  FilteredBGMessage *kcg_c2);
#endif /* kcg_comp_FilteredBGMessage */
#endif /* kcg_use_FilteredBGMessage */

#ifdef kcg_use_Train_Position_Report_Radio_TrainToTrack
#ifndef kcg_comp_Train_Position_Report_Radio_TrainToTrack
extern kcg_bool kcg_comp_Train_Position_Report_Radio_TrainToTrack(
  Train_Position_Report_Radio_TrainToTrack *kcg_c1,
  Train_Position_Report_Radio_TrainToTrack *kcg_c2);
#endif /* kcg_comp_Train_Position_Report_Radio_TrainToTrack */
#endif /* kcg_use_Train_Position_Report_Radio_TrainToTrack */

#ifdef kcg_use_Assignment_of_coordinate_system_Radio_TrackToTrain
#ifndef kcg_comp_Assignment_of_coordinate_system_Radio_TrackToTrain
extern kcg_bool kcg_comp_Assignment_of_coordinate_system_Radio_TrackToTrain(
  Assignment_of_coordinate_system_Radio_TrackToTrain *kcg_c1,
  Assignment_of_coordinate_system_Radio_TrackToTrain *kcg_c2);
#endif /* kcg_comp_Assignment_of_coordinate_system_Radio_TrackToTrain */
#endif /* kcg_use_Assignment_of_coordinate_system_Radio_TrackToTrain */

#ifdef kcg_use_CurrentLRBG
#ifndef kcg_comp_CurrentLRBG
extern kcg_bool kcg_comp_CurrentLRBG(CurrentLRBG *kcg_c1, CurrentLRBG *kcg_c2);
#endif /* kcg_comp_CurrentLRBG */
#endif /* kcg_use_CurrentLRBG */

#ifdef kcg_use_CheckedBGMessage
#ifndef kcg_comp_CheckedBGMessage
extern kcg_bool kcg_comp_CheckedBGMessage(
  CheckedBGMessage *kcg_c1,
  CheckedBGMessage *kcg_c2);
#endif /* kcg_comp_CheckedBGMessage */
#endif /* kcg_use_CheckedBGMessage */

#ifdef kcg_use_RBCOrientationReport
#ifndef kcg_comp_RBCOrientationReport
extern kcg_bool kcg_comp_RBCOrientationReport(
  RBCOrientationReport *kcg_c1,
  RBCOrientationReport *kcg_c2);
#endif /* kcg_comp_RBCOrientationReport */
#endif /* kcg_use_RBCOrientationReport */

#ifdef kcg_use_Position
#ifndef kcg_comp_Position
extern kcg_bool kcg_comp_Position(Position *kcg_c1, Position *kcg_c2);
#endif /* kcg_comp_Position */
#endif /* kcg_use_Position */

#ifdef kcg_use_ListOfBGs
#ifndef kcg_comp_ListOfBGs
extern kcg_bool kcg_comp_ListOfBGs(ListOfBGs *kcg_c1, ListOfBGs *kcg_c2);
#endif /* kcg_comp_ListOfBGs */
#endif /* kcg_use_ListOfBGs */

#ifdef kcg_use_HederArray
#ifndef kcg_comp_HederArray
extern kcg_bool kcg_comp_HederArray(HederArray *kcg_c1, HederArray *kcg_c2);
#endif /* kcg_comp_HederArray */
#endif /* kcg_use_HederArray */

#endif /* _KCG_TYPES_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** kcg_types.h
** Generation date: 2014-06-11T16:39:34
*************************************************************$ */


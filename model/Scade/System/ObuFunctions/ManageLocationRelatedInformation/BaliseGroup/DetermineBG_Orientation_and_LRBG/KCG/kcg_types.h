/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Users/GiovanniTrotta/Desktop/SoftwareBGO/KCG\kcg_s2c_config.txt
** Generation date: 2014-05-19T12:09:24
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

/* DetermineBGOrientation_LRBG::DataDctionary::Orientation */
typedef enum {
  Single_Balise_Group_DetermineBGOrientation_LRBG_DataDctionary,
  DIR_Nominal_DetermineBGOrientation_LRBG_DataDctionary,
  DIR_Reverse_DetermineBGOrientation_LRBG_DataDctionary
} Orientation_DetermineBGOrientation_LRBG_DataDctionary;
/* DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_DIRTRAIN */
typedef enum {
  Q_DIRTRAIN__Reverse_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  Q_DIRTRAIN__Nominal_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  Q_DIRTRAIN__Unknown_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  Q_DIRTRAIN__Spare_DetermineBGOrientation_LRBG_DataDctionary_Variable
} Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable;
/* DetermineBGOrientation_LRBG::DataDctionary::Variable::M_PLATFORM */
typedef enum {
  M_PLATFORM__200_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_PLATFORM__300_380_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_PLATFORM__550_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_PLATFORM__580_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_PLATFORM__680_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_PLATFORM__685_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_PLATFORM__730_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_PLATFORM__760_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_PLATFORM__840_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_PLATFORM__900_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_PLATFORM__915_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_PLATFORM__920_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_PLATFORM__960_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_PLATFORM__1100_mm_DetermineBGOrientation_LRBG_DataDctionary_Variable
} M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable;
/* DetermineBGOrientation_LRBG::DataDctionary::Variable::N_TOTAL */
typedef enum {
  one_balise_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  two_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  tree_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  four_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  five_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  six_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  seven_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  eight_balises_in_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable
} N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable;
/* DetermineBGOrientation_LRBG::DataDctionary::Variable::N_PIG */
typedef enum {
  I_am_the_1th_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  I_am_the_2nd_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  I_am_the_3rd_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  I_am_the_4th_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  I_am_the_5th_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  I_am_the_6th_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  I_am_the_7th_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  I_am_the_8th_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  none_DetermineBGOrientation_LRBG_DataDctionary_Variable
} N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable;
/* DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_MEDIA */
typedef enum {
  Q_MEDIA__Balise_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  Q_MEDIA__Loop_DetermineBGOrientation_LRBG_DataDctionary_Variable
} Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable;
/* DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_UPDOWN */
typedef enum {
  Q_UPDOWN__Down_link_telegram_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  Q_UPDOWN__Up_link_telegram_DetermineBGOrientation_LRBG_DataDctionary_Variable
} Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable;
/* DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_LINK */
typedef enum {
  Q_LINK__Unlinked_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  Q_LINK__Linked_DetermineBGOrientation_LRBG_DataDctionary_Variable
} Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable;
/* DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MCOUNT */
typedef enum {
  M_MCOUNT__The_telegram_never_fits_any_message_of_the_group_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_MCOUNT__The_telegram_fits_with_all_telegrams_of_the_same_balise_group_DetermineBGOrientation_LRBG_DataDctionary_Variable
} M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable;
/* DetermineBGOrientation_LRBG::DataDctionary::Variable::M_DUP */
typedef enum {
  M_DUP__No_duplicates_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  _2_M_DUP__This_balise_is_a_duplicate_of_the_next_balise__seen_in_the_nominal_direction_of_the_balise_group___DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_DUP__This_balise_is_a_duplicate_of_the_previous_balise__seen_in_the_nominal_direction_of_the_balise_group___DetermineBGOrientation_LRBG_DataDctionary_Variable
} M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable;
/* DetermineBGOrientation_LRBG::DataDctionary::BTM::AdditionalInformation */
typedef enum {
  value1_DetermineBGOrientation_LRBG_DataDctionary_BTM
} AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM;
/* DetermineBGOrientation_LRBG::DataDctionary::Variable::M_LEVELTR */
typedef enum {
  M_LEVELTR__Level_0_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_LEVELTR__Level_NTC_specified_by_NID_NTC_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_LEVELTR__Level_1_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_LEVELTR__Level_2_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_LEVELTR__Level_3_DetermineBGOrientation_LRBG_DataDctionary_Variable
} M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable;
/* DetermineBGOrientation_LRBG::DataDctionary::Variable::M_MODE */
typedef enum {
  M_MODE__Full_Supervision_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_MODE__On_Sight_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_MODE__Staff_Responsible_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_MODE__Shunting_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_MODE__Unfitted_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_MODE__Sleeping_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_MODE__Stand_By_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_MODE__Trip_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_MODE__Post_Trip_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_MODE__System_Failure_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_MODE__Isolation_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_MODE__Non_Leading_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_MODE__Limited_Supervision_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_MODE__National_System_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_MODE__Reversing_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_MODE__Passive_Shunting_DetermineBGOrientation_LRBG_DataDctionary_Variable
} M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable;
/* DetermineBGOrientation_LRBG::DataDctionary::Variable::M_ACK */
typedef enum {
  M_ACK__No_acknowledgement_required_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  M_ACK__Acknowledgement_required_DetermineBGOrientation_LRBG_DataDctionary_Variable
} M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable;
/* DetermineBGOrientation_LRBG::DataDctionary::Variable::Q_ORIENTATION */
typedef enum {
  _1_Q_ORIENTATION__The_balise_group_has_been_passed_by_the_train_in_reverse_direction_DetermineBGOrientation_LRBG_DataDctionary_Variable,
  Q_ORIENTATION__The_balise_group_has_been_passed_by_the_train_in_nominal_direction_DetermineBGOrientation_LRBG_DataDctionary_Variable
} Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable;
/* DetermineBGOrientation_LRBG::DataDctionary::Variable::L_MESSAGE */
typedef kcg_real L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable;

/* DetermineBGOrientation_LRBG::DataDctionary::Variable::T_TRAIN */
typedef kcg_real T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable;

/* DetermineBGOrientation_LRBG::DataDctionary::Variable::NID_BG */
typedef kcg_int NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable;

/* DetermineBGOrientation_LRBG::DataDctionary::Variable::NID_C */
typedef kcg_int NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable;

/* DetermineBGOrientation_LRBG::DataDctionary::Variable::NID_MESSAGE */
typedef kcg_int NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable;

/* DetermineBGOrientation_LRBG::DataDctionary::Variable::NID_LRBG */
typedef kcg_int NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable;

typedef struct {
  NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable NID_MESSAGE;
  L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable L_MESSAGE;
  T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable T_TRAIN;
  M_ACK_DetermineBGOrientation_LRBG_DataDctionary_Variable M_ACK;
  NID_LRBG_DetermineBGOrientation_LRBG_DataDctionary_Variable NID_LRBG;
  Q_ORIENTATION_DetermineBGOrientation_LRBG_DataDctionary_Variable Q_ORIENTATION;
} struct__804;

/* DetermineBGOrientation_LRBG::DataDctionary::Packets::Assignment_of_coordinate_system */
typedef struct__804 Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets;

typedef struct {
  Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets assignment_of_coordinate_system;
} struct__813;

/* DetermineBGOrientation_LRBG::DataDctionary::RBCOrientationReport::RBCOrientationReport */
typedef struct__813 RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport;

typedef struct {
  NID_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable NID_MESSAGE;
  L_MESSAGE_DetermineBGOrientation_LRBG_DataDctionary_Variable L_MESSAGE;
  T_TRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable T_TRAIN;
} struct__817;

/* DetermineBGOrientation_LRBG::DataDctionary::Packets::Train_Position_Report */
typedef struct__817 Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets;

typedef struct {
  M_LEVELTR_DetermineBGOrientation_LRBG_DataDctionary_Variable m_leveltr;
  M_MODE_DetermineBGOrientation_LRBG_DataDctionary_Variable m_mode;
} struct__823;

/* DetermineBGOrientation_LRBG::DataDctionary::TrainInfo::TrainInfo */
typedef struct__823 TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo;

typedef struct {
  M_PLATFORM_DetermineBGOrientation_LRBG_DataDctionary_Variable m_version;
  N_TOTAL_DetermineBGOrientation_LRBG_DataDctionary_Variable n_total;
  N_PIG_DetermineBGOrientation_LRBG_DataDctionary_Variable n_pig;
  Q_MEDIA_DetermineBGOrientation_LRBG_DataDctionary_Variable q_media;
  Q_UPDOWN_DetermineBGOrientation_LRBG_DataDctionary_Variable q_updown;
  Q_LINK_DetermineBGOrientation_LRBG_DataDctionary_Variable q_link;
  NID_BG_DetermineBGOrientation_LRBG_DataDctionary_Variable nid_bg;
  NID_C_DetermineBGOrientation_LRBG_DataDctionary_Variable nid_c;
  M_MCOUNT_DetermineBGOrientation_LRBG_DataDctionary_Variable m_mcount;
  M_DUP_DetermineBGOrientation_LRBG_DataDctionary_Variable m_dup;
} struct__828;

/* DetermineBGOrientation_LRBG::DataDctionary::BTM::Header */
typedef struct__828 Header_DetermineBGOrientation_LRBG_DataDctionary_BTM;

typedef struct { kcg_bool boolean_; } struct__841;

/* DetermineBGOrientation_LRBG::DataDctionary::CheckedBGMessage::Flag */
typedef struct__841 Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage;

typedef struct {
  Header_DetermineBGOrientation_LRBG_DataDctionary_BTM header;
  Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage flag;
} struct__845;

/* DetermineBGOrientation_LRBG::DataDctionary::CheckedBGMessage::HeaderFlag */
typedef struct__845 HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage;

typedef HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage array__850[8];

/* DetermineBGOrientation_LRBG::DataDctionary::CheckedBGMessage::HederArray */
typedef array__850 HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage;

typedef struct {
  HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage headerflag;
  AdditionalInformation_DetermineBGOrientation_LRBG_DataDctionary_BTM additionalinformation;
} struct__853;

/* DetermineBGOrientation_LRBG::DataDctionary::CheckedBGMessage::CheckedBGMessage */
typedef struct__853 CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage;

typedef struct {
  Q_DIRTRAIN_DetermineBGOrientation_LRBG_DataDctionary_Variable q_dirlrbg;
  CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage checkedbgmessage;
} struct__858;

/* DetermineBGOrientation_LRBG::DataDctionary::FilteredBGMessage::FilteredBGMessage */
typedef struct__858 FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage;

typedef struct { kcg_int Position_1; } struct__863;

/* DetermineBGOrientation_LRBG::DataDctionary::CurrentLRBG::Position */
typedef struct__863 Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG;

typedef struct {
  FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage filteredbgmessage;
  Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG position;
} struct__867;

/* DetermineBGOrientation_LRBG::DataDctionary::CurrentLRBG::CurrentLRBG */
typedef struct__867 CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG;

typedef CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG array__872[20];

/* DetermineBGOrientation_LRBG::DataDctionary::ListOfBGs::ListOfBGs */
typedef array__872 ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs;

#ifndef kcg_copy_struct__804
#define kcg_copy_struct__804(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__804)))
#endif /* kcg_copy_struct__804 */

#ifndef kcg_copy_struct__813
#define kcg_copy_struct__813(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__813)))
#endif /* kcg_copy_struct__813 */

#ifndef kcg_copy_struct__817
#define kcg_copy_struct__817(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__817)))
#endif /* kcg_copy_struct__817 */

#ifndef kcg_copy_struct__823
#define kcg_copy_struct__823(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__823)))
#endif /* kcg_copy_struct__823 */

#ifndef kcg_copy_struct__828
#define kcg_copy_struct__828(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__828)))
#endif /* kcg_copy_struct__828 */

#ifndef kcg_copy_struct__841
#define kcg_copy_struct__841(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__841)))
#endif /* kcg_copy_struct__841 */

#ifndef kcg_copy_struct__845
#define kcg_copy_struct__845(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__845)))
#endif /* kcg_copy_struct__845 */

#ifndef kcg_copy_struct__853
#define kcg_copy_struct__853(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__853)))
#endif /* kcg_copy_struct__853 */

#ifndef kcg_copy_struct__858
#define kcg_copy_struct__858(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__858)))
#endif /* kcg_copy_struct__858 */

#ifndef kcg_copy_struct__863
#define kcg_copy_struct__863(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__863)))
#endif /* kcg_copy_struct__863 */

#ifndef kcg_copy_struct__867
#define kcg_copy_struct__867(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__867)))
#endif /* kcg_copy_struct__867 */

#ifndef kcg_copy_array__850
#define kcg_copy_array__850(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__850)))
#endif /* kcg_copy_array__850 */

#ifndef kcg_copy_array__872
#define kcg_copy_array__872(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (array__872)))
#endif /* kcg_copy_array__872 */

#ifndef kcg_comp_struct__804
extern kcg_bool kcg_comp_struct__804(struct__804 *kcg_c1, struct__804 *kcg_c2);
#endif /* kcg_comp_struct__804 */

#ifndef kcg_comp_struct__813
extern kcg_bool kcg_comp_struct__813(struct__813 *kcg_c1, struct__813 *kcg_c2);
#endif /* kcg_comp_struct__813 */

#ifndef kcg_comp_struct__817
extern kcg_bool kcg_comp_struct__817(struct__817 *kcg_c1, struct__817 *kcg_c2);
#endif /* kcg_comp_struct__817 */

#ifndef kcg_comp_struct__823
extern kcg_bool kcg_comp_struct__823(struct__823 *kcg_c1, struct__823 *kcg_c2);
#endif /* kcg_comp_struct__823 */

#ifndef kcg_comp_struct__828
extern kcg_bool kcg_comp_struct__828(struct__828 *kcg_c1, struct__828 *kcg_c2);
#endif /* kcg_comp_struct__828 */

#ifndef kcg_comp_struct__841
extern kcg_bool kcg_comp_struct__841(struct__841 *kcg_c1, struct__841 *kcg_c2);
#endif /* kcg_comp_struct__841 */

#ifndef kcg_comp_struct__845
extern kcg_bool kcg_comp_struct__845(struct__845 *kcg_c1, struct__845 *kcg_c2);
#endif /* kcg_comp_struct__845 */

#ifndef kcg_comp_struct__853
extern kcg_bool kcg_comp_struct__853(struct__853 *kcg_c1, struct__853 *kcg_c2);
#endif /* kcg_comp_struct__853 */

#ifndef kcg_comp_struct__858
extern kcg_bool kcg_comp_struct__858(struct__858 *kcg_c1, struct__858 *kcg_c2);
#endif /* kcg_comp_struct__858 */

#ifndef kcg_comp_struct__863
extern kcg_bool kcg_comp_struct__863(struct__863 *kcg_c1, struct__863 *kcg_c2);
#endif /* kcg_comp_struct__863 */

#ifndef kcg_comp_struct__867
extern kcg_bool kcg_comp_struct__867(struct__867 *kcg_c1, struct__867 *kcg_c2);
#endif /* kcg_comp_struct__867 */

#ifndef kcg_comp_array__850
extern kcg_bool kcg_comp_array__850(array__850 *kcg_c1, array__850 *kcg_c2);
#endif /* kcg_comp_array__850 */

#ifndef kcg_comp_array__872
extern kcg_bool kcg_comp_array__872(array__872 *kcg_c1, array__872 *kcg_c2);
#endif /* kcg_comp_array__872 */

#define kcg_comp_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport kcg_comp_struct__813

#define kcg_copy_RBCOrientationReport_DetermineBGOrientation_LRBG_DataDctionary_RBCOrientationReport kcg_copy_struct__813

#define kcg_comp_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets kcg_comp_struct__804

#define kcg_copy_Assignment_of_coordinate_system_DetermineBGOrientation_LRBG_DataDctionary_Packets kcg_copy_struct__804

#define kcg_comp_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets kcg_comp_struct__817

#define kcg_copy_Train_Position_Report_DetermineBGOrientation_LRBG_DataDctionary_Packets kcg_copy_struct__817

#define kcg_comp_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo kcg_comp_struct__823

#define kcg_copy_TrainInfo_DetermineBGOrientation_LRBG_DataDctionary_TrainInfo kcg_copy_struct__823

#define kcg_comp_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM kcg_comp_struct__828

#define kcg_copy_Header_DetermineBGOrientation_LRBG_DataDctionary_BTM kcg_copy_struct__828

#define kcg_comp_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage kcg_comp_struct__841

#define kcg_copy_Flag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage kcg_copy_struct__841

#define kcg_comp_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage kcg_comp_struct__845

#define kcg_copy_HeaderFlag_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage kcg_copy_struct__845

#define kcg_comp_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage kcg_comp_array__850

#define kcg_copy_HederArray_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage kcg_copy_array__850

#define kcg_comp_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage kcg_comp_struct__853

#define kcg_copy_CheckedBGMessage_DetermineBGOrientation_LRBG_DataDctionary_CheckedBGMessage kcg_copy_struct__853

#define kcg_comp_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage kcg_comp_struct__858

#define kcg_copy_FilteredBGMessage_DetermineBGOrientation_LRBG_DataDctionary_FilteredBGMessage kcg_copy_struct__858

#define kcg_comp_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG kcg_comp_struct__863

#define kcg_copy_Position_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG kcg_copy_struct__863

#define kcg_comp_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG kcg_comp_struct__867

#define kcg_copy_CurrentLRBG_DetermineBGOrientation_LRBG_DataDctionary_CurrentLRBG kcg_copy_struct__867

#define kcg_comp_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs kcg_comp_array__872

#define kcg_copy_ListOfBGs_DetermineBGOrientation_LRBG_DataDctionary_ListOfBGs kcg_copy_array__872

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2014-05-19T12:09:24
*************************************************************$ */


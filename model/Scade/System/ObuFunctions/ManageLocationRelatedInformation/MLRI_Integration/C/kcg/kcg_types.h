/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config S:/SDVAL_RAMS/Förderprojekte/openETCS/modeling/model/Scade/System/ObuFunctions/ManageLocationRelatedInformation/MLRI_Integration/KCG\kcg_s2c_config.txt
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */
#ifndef _MLRI__KCG_TYPES_H_
#define _MLRI__KCG_TYPES_H_

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

/* M_AIRTIGHT */
typedef enum {
  MLRI__M_AIRTIGHT_Not_fitted = 0,
  MLRI__M_AIRTIGHT_Fitted = 1
} MLRI__M_AIRTIGHT;
/* M_LOADINGGAUGE */
typedef enum {
  MLRI__M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles = 0,
  MLRI__M_LOADINGGAUGE_G1 = 1,
  MLRI__M_LOADINGGAUGE_GA = 2,
  MLRI__M_LOADINGGAUGE_GB = 3,
  MLRI__M_LOADINGGAUGE_GC = 4
} MLRI__M_LOADINGGAUGE;
/* NC_CDTRAIN */
typedef enum {
  MLRI__NC_CDTRAIN_Cant_Deficiency_80_mm = 0,
  MLRI__NC_CDTRAIN_Cant_Deficiency_100_mm = 1,
  MLRI__NC_CDTRAIN_Cant_Deficiency_130_mm = 2,
  MLRI__NC_CDTRAIN_Cant_Deficiency_150_mm = 3,
  MLRI__NC_CDTRAIN_Cant_Deficiency_165_mm = 4,
  MLRI__NC_CDTRAIN_Cant_Deficiency_180_mm = 5,
  MLRI__NC_CDTRAIN_Cant_Deficiency_210_mm = 6,
  MLRI__NC_CDTRAIN_Cant_Deficiency_225_mm = 7,
  MLRI__NC_CDTRAIN_Cant_Deficiency_245_mm = 8,
  MLRI__NC_CDTRAIN_Cant_Deficiency_275_mm = 9,
  MLRI__NC_CDTRAIN_Cant_Deficiency_300_mm = 10
} MLRI__NC_CDTRAIN;
/* NC_TRAIN */
typedef enum {
  MLRI__NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category = 0,
  MLRI__NC_TRAIN_Freight_train_braked_in_P_position = 1,
  MLRI__NC_TRAIN_Freight_train_braked_in_G_position = 2,
  MLRI__NC_TRAIN_Passenger_train = 4
} MLRI__NC_TRAIN;
/* Q_ASPECT */
typedef enum {
  MLRI__Q_ASPECT_Stop_if_in_SH_mode = 0,
  MLRI__Q_ASPECT_Go_if_in_SH_mode = 1
} MLRI__Q_ASPECT;
/* Q_DANGERPOINT */
typedef enum {
  MLRI__Q_DANGERPOINT_No_danger_point_information = 0,
  MLRI__Q_DANGERPOINT_Danger_point_information_to_follow = 1
} MLRI__Q_DANGERPOINT;
/* Q_EMERGENCYSTOP */
typedef enum {
  MLRI__Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_update_of_EOA = 0,
  MLRI__Q_EMERGENCYSTOP_Conditional_Emergency_Stop_accepted_with_no_update_of_EOA = 1,
  MLRI__Q_EMERGENCYSTOP_Unconditional_Emergency_Stop_accepted = 2,
  MLRI__Q_EMERGENCYSTOP_Emergency_stop = 3
} MLRI__Q_EMERGENCYSTOP;
/* Q_ENDTIMER */
typedef enum {
  MLRI__Q_ENDTIMER_No_End_section_timer_information = 0,
  MLRI__Q_ENDTIMER_End_section_timer_information_to_follow = 1
} MLRI__Q_ENDTIMER;
/* Q_INFILL */
typedef enum {
  MLRI__Q_INFILL_Enter = 0,
  MLRI__Q_INFILL_Exit = 1
} MLRI__Q_INFILL;
/* Q_LOOPDIR */
typedef enum {
  MLRI__Q_LOOPDIR_Opposite = 0,
  MLRI__Q_LOOPDIR_Same = 1
} MLRI__Q_LOOPDIR;
/* Q_MARQSTREASON */
typedef enum {
  MLRI__Q_MARQSTREASON_Start_selected_by_driver = 1,
  MLRI__Q_MARQSTREASON_Time_before_reaching_preindication_location_for_the_EOA_or_LOA_reached = 2,
  MLRI__Q_MARQSTREASON_Time_before_a_section_timer_or_LOA_speed_timer_expires_reached = 4,
  MLRI__Q_MARQSTREASON_Track_description_deleted = 8,
  MLRI__Q_MARQSTREASON_TAF_up_to_level_2_or_3_transition_location = 16
} MLRI__Q_MARQSTREASON;
/* Q_ORIENTATION */
typedef enum {
  MLRI__Q_ORIENTATION_The_balise_group_has_been_passed_by_the_train_in_reverse_direction = 0,
  MLRI__Q_ORIENTATION_The_balise_group_has_been_passed_by_the_train_in_nominal_direction = 1
} MLRI__Q_ORIENTATION;
/* Q_OVERLAP */
typedef enum {
  MLRI__Q_OVERLAP_No_overlap_information = 0,
  MLRI__Q_OVERLAP_Overlap_information_to_follow = 1
} MLRI__Q_OVERLAP;
/* Q_RIU */
typedef enum {
  MLRI__Q_RIU_Terminate_communication_session = 0,
  MLRI__Q_RIU_Establish_communication_session = 1
} MLRI__Q_RIU;
/* Q_SECTIONTIMER */
typedef enum {
  MLRI__Q_SECTIONTIMER_No_Section_Timer_information = 0,
  MLRI__Q_SECTIONTIMER_Section_Timer_information_to_follow = 1
} MLRI__Q_SECTIONTIMER;
/* Q_STATUS */
typedef enum {
  MLRI__Q_STATUS_Valid = 1,
  MLRI__Q_STATUS_Unknown = 2
} MLRI__Q_STATUS;
/* Q_VBCO */
typedef enum {
  MLRI__Q_VBCO_Remove_the_Virtual_Balise_Cover = 0,
  MLRI__Q_VBCO_Set_the_Virtual_Balise_Cover = 1
} MLRI__Q_VBCO;
/* Radio_TrainToTrack::Validated_Train_Data_OptionalPackets */
typedef enum {
  MLRI__Validated_Train_Data_OptionalPackageNumber_0_Radio_TrainToTrack = 0,
  MLRI__Validated_Train_Data_OptionalPackageNumber_1_Radio_TrainToTrack = 1,
  MLRI__Validated_Train_Data_OptionalPackageNumber_11_Radio_TrainToTrack = 11
} MLRI__Validated_Train_Data_OptionalPackets_Radio_TrainToTrack;
/* Radio_TrainToTrack::Request_for_Shunting_OptionalPackets */
typedef enum {
  MLRI__Request_for_Shunting_OptionalPackageNumber_0_Radio_TrainToTrack = 0,
  MLRI__Request_for_Shunting_OptionalPackageNumber_1_Radio_TrainToTrack = 1
} MLRI__Request_for_Shunting_OptionalPackets_Radio_TrainToTrack;
/* Radio_TrainToTrack::MA_Request_OptionalPackets */
typedef enum {
  MLRI__MA_Request_OptionalPackageNumber_0_Radio_TrainToTrack = 0,
  MLRI__MA_Request_OptionalPackageNumber_1_Radio_TrainToTrack = 1,
  MLRI__MA_Request_OptionalPackageNumber_9_Radio_TrainToTrack = 9
} MLRI__MA_Request_OptionalPackets_Radio_TrainToTrack;
/* Radio_TrainToTrack::Train_Position_Report_OptionalPackets */
typedef enum {
  MLRI__Train_Position_Report_OptionalPackageNumber_0_Radio_TrainToTrack = 0,
  MLRI__Train_Position_Report_OptionalPackageNumber_1_Radio_TrainToTrack = 1,
  MLRI__Train_Position_Report_OptionalPackageNumber_4_Radio_TrainToTrack = 4,
  MLRI__Train_Position_Report_OptionalPackageNumber_5_Radio_TrainToTrack = 5,
  MLRI__Train_Position_Report_OptionalPackageNumber_44_Radio_TrainToTrack = 44
} MLRI__Train_Position_Report_OptionalPackets_Radio_TrainToTrack;
/* Radio_TrainToTrack::Request_to_shorten_MA_is_granted_OptionalPackets */
typedef enum {
  MLRI__Request_to_shorten_MA_is_granted_OptionalPackageNumber_0_Radio_TrainToTrack = 0,
  MLRI__Request_to_shorten_MA_is_granted_OptionalPackageNumber_1_Radio_TrainToTrack = 1
} MLRI__Request_to_shorten_MA_is_granted_OptionalPackets_Radio_TrainToTrack;
/* Radio_TrainToTrack::Request_to_shorten_MA_is_rejected_OptionalPackets */
typedef enum {
  MLRI__Request_to_shorten_MA_is_rejected_OptionalPackageNumber_0_Radio_TrainToTrack = 0,
  MLRI__Request_to_shorten_MA_is_rejected_OptionalPackageNumber_1_Radio_TrainToTrack = 1
} MLRI__Request_to_shorten_MA_is_rejected_OptionalPackets_Radio_TrainToTrack;
/* Radio_TrainToTrack::Acknowledgement_of_Emergency_Stop_OptionalPackets */
typedef enum {
  MLRI__Acknowledgement_of_Emergency_Stop_OptionalPackageNumber_0_Radio_TrainToTrack = 0,
  MLRI__Acknowledgement_of_Emergency_Stop_OptionalPackageNumber_1_Radio_TrainToTrack = 1
} MLRI__Acknowledgement_of_Emergency_Stop_OptionalPackets_Radio_TrainToTrack;
/* Radio_TrainToTrack::Track_Ahead_Free_Granted_OptionalPackets */
typedef enum {
  MLRI__Track_Ahead_Free_Granted_OptionalPackageNumber_0_Radio_TrainToTrack = 0,
  MLRI__Track_Ahead_Free_Granted_OptionalPackageNumber_1_Radio_TrainToTrack = 1
} MLRI__Track_Ahead_Free_Granted_OptionalPackets_Radio_TrainToTrack;
/* Radio_TrainToTrack::End_of_Mission_OptionalPackets */
typedef enum {
  MLRI__End_of_Mission_OptionalPackageNumber_0_Radio_TrainToTrack = 0,
  MLRI__End_of_Mission_OptionalPackageNumber_1_Radio_TrainToTrack = 1
} MLRI__End_of_Mission_OptionalPackets_Radio_TrainToTrack;
/* Radio_TrainToTrack::Radio_infill_request_OptionalPackets */
typedef enum {
  MLRI__Radio_infill_request_OptionalPackageNumber_0_Radio_TrainToTrack = 0,
  MLRI__Radio_infill_request_OptionalPackageNumber_1_Radio_TrainToTrack = 1
} MLRI__Radio_infill_request_OptionalPackets_Radio_TrainToTrack;
/* Radio_TrainToTrack::SoM_Position_Report_OptionalPackets */
typedef enum {
  MLRI__SoM_Position_Report_OptionalPackageNumber_0_Radio_TrainToTrack = 0,
  MLRI__SoM_Position_Report_OptionalPackageNumber_1_Radio_TrainToTrack = 1,
  MLRI__SoM_Position_Report_OptionalPackageNumber_4_Radio_TrainToTrack = 4,
  MLRI__SoM_Position_Report_OptionalPackageNumber_5_Radio_TrainToTrack = 5,
  MLRI__SoM_Position_Report_OptionalPackageNumber_44_Radio_TrainToTrack = 44
} MLRI__SoM_Position_Report_OptionalPackets_Radio_TrainToTrack;
/* Radio_TrainToTrack::Text_message_acknowledged_by_driver_OptionalPackets */
typedef enum {
  MLRI__Text_message_acknowledged_by_driver_OptionalPackageNumber_0_Radio_TrainToTrack = 0,
  MLRI__Text_message_acknowledged_by_driver_OptionalPackageNumber_1_Radio_TrainToTrack = 1
} MLRI__Text_message_acknowledged_by_driver_OptionalPackets_Radio_TrainToTrack;
/* Radio_TrainToTrack::Session_Established_OptionalPackets */
typedef enum {
  MLRI__Session_Established_OptionalPackageNumber_3_Radio_TrainToTrack = 3
} MLRI__Session_Established_OptionalPackets_Radio_TrainToTrack;
/* Radio_TrackToTrain::SR_Authorisation_OptionalPackets */
typedef enum {
  MLRI__SR_Authorisation_OptionalPackageNumber_63_Radio_TrackToTrain = 63
} MLRI__SR_Authorisation_OptionalPackets_Radio_TrackToTrain;
/* Radio_TrackToTrain::Movement_Authority_OptionalPackets */
typedef enum {
  MLRI__Movement_Authority_OptionalPackageNumber_15_Radio_TrackToTrain = 15,
  MLRI__Movement_Authority_OptionalPackageNumber_21_Radio_TrackToTrain = 21,
  MLRI__Movement_Authority_OptionalPackageNumber_27_Radio_TrackToTrain = 27,
  MLRI__Movement_Authority_OptionalPackageNumber_49_Radio_TrackToTrain = 49,
  MLRI__Movement_Authority_OptionalPackageNumber_80_Radio_TrackToTrain = 80,
  MLRI__Movement_Authority_OptionalPackageNumber_3_Radio_TrackToTrain = 3,
  MLRI__Movement_Authority_OptionalPackageNumber_5_Radio_TrackToTrain = 5,
  MLRI__Movement_Authority_OptionalPackageNumber_39_Radio_TrackToTrain = 39,
  MLRI__Movement_Authority_OptionalPackageNumber_40_Radio_TrackToTrain = 40,
  MLRI__Movement_Authority_OptionalPackageNumber_51_Radio_TrackToTrain = 51,
  MLRI__Movement_Authority_OptionalPackageNumber_41_Radio_TrackToTrain = 41,
  MLRI__Movement_Authority_OptionalPackageNumber_42_Radio_TrackToTrain = 42,
  MLRI__Movement_Authority_OptionalPackageNumber_44_Radio_TrackToTrain = 44,
  MLRI__Movement_Authority_OptionalPackageNumber_45_Radio_TrackToTrain = 45,
  MLRI__Movement_Authority_OptionalPackageNumber_52_Radio_TrackToTrain = 52,
  MLRI__Movement_Authority_OptionalPackageNumber_57_Radio_TrackToTrain = 57,
  MLRI__Movement_Authority_OptionalPackageNumber_58_Radio_TrackToTrain = 58,
  MLRI__Movement_Authority_OptionalPackageNumber_64_Radio_TrackToTrain = 64,
  MLRI__Movement_Authority_OptionalPackageNumber_65_Radio_TrackToTrain = 65,
  MLRI__Movement_Authority_OptionalPackageNumber_66_Radio_TrackToTrain = 66,
  MLRI__Movement_Authority_OptionalPackageNumber_68_Radio_TrackToTrain = 68,
  MLRI__Movement_Authority_OptionalPackageNumber_69_Radio_TrackToTrain = 69,
  MLRI__Movement_Authority_OptionalPackageNumber_70_Radio_TrackToTrain = 70,
  MLRI__Movement_Authority_OptionalPackageNumber_71_Radio_TrackToTrain = 71,
  MLRI__Movement_Authority_OptionalPackageNumber_72_Radio_TrackToTrain = 72,
  MLRI__Movement_Authority_OptionalPackageNumber_76_Radio_TrackToTrain = 76,
  MLRI__Movement_Authority_OptionalPackageNumber_79_Radio_TrackToTrain = 79,
  MLRI__Movement_Authority_OptionalPackageNumber_88_Radio_TrackToTrain = 88,
  MLRI__Movement_Authority_OptionalPackageNumber_131_Radio_TrackToTrain = 131,
  MLRI__Movement_Authority_OptionalPackageNumber_138_Radio_TrackToTrain = 138,
  MLRI__Movement_Authority_OptionalPackageNumber_139_Radio_TrackToTrain = 139,
  MLRI__Movement_Authority_OptionalPackageNumber_140_Radio_TrackToTrain = 140
} MLRI__Movement_Authority_OptionalPackets_Radio_TrackToTrain;
/* Radio_TrackToTrain::Request_to_Shorten_MA_OptionalPackets */
typedef enum {
  MLRI__Request_to_Shorten_MA_OptionalPackageNumber_15_Radio_TrackToTrain = 15,
  MLRI__Request_to_Shorten_MA_OptionalPackageNumber_80_Radio_TrackToTrain = 80
} MLRI__Request_to_Shorten_MA_OptionalPackets_Radio_TrackToTrain;
/* Radio_TrackToTrain::General_message_OptionalPackets */
typedef enum {
  MLRI__General_message_OptionalPackageNumber_21_Radio_TrackToTrain = 21,
  MLRI__General_message_OptionalPackageNumber_27_Radio_TrackToTrain = 27,
  MLRI__General_message_OptionalPackageNumber_45_Radio_TrackToTrain = 45,
  MLRI__General_message_OptionalPackageNumber_143_Radio_TrackToTrain = 143,
  MLRI__General_message_OptionalPackageNumber_254_Radio_TrackToTrain = 254,
  MLRI__General_message_OptionalPackageNumber_3_Radio_TrackToTrain = 3,
  MLRI__General_message_OptionalPackageNumber_5_Radio_TrackToTrain = 5,
  MLRI__General_message_OptionalPackageNumber_39_Radio_TrackToTrain = 39,
  MLRI__General_message_OptionalPackageNumber_40_Radio_TrackToTrain = 40,
  MLRI__General_message_OptionalPackageNumber_51_Radio_TrackToTrain = 51,
  MLRI__General_message_OptionalPackageNumber_41_Radio_TrackToTrain = 41,
  MLRI__General_message_OptionalPackageNumber_42_Radio_TrackToTrain = 42,
  MLRI__General_message_OptionalPackageNumber_44_Radio_TrackToTrain = 44,
  MLRI__General_message_OptionalPackageNumber_52_Radio_TrackToTrain = 52,
  MLRI__General_message_OptionalPackageNumber_57_Radio_TrackToTrain = 57,
  MLRI__General_message_OptionalPackageNumber_58_Radio_TrackToTrain = 58,
  MLRI__General_message_OptionalPackageNumber_64_Radio_TrackToTrain = 64,
  MLRI__General_message_OptionalPackageNumber_65_Radio_TrackToTrain = 65,
  MLRI__General_message_OptionalPackageNumber_66_Radio_TrackToTrain = 66,
  MLRI__General_message_OptionalPackageNumber_68_Radio_TrackToTrain = 68,
  MLRI__General_message_OptionalPackageNumber_69_Radio_TrackToTrain = 69,
  MLRI__General_message_OptionalPackageNumber_70_Radio_TrackToTrain = 70,
  MLRI__General_message_OptionalPackageNumber_71_Radio_TrackToTrain = 71,
  MLRI__General_message_OptionalPackageNumber_72_Radio_TrackToTrain = 72,
  MLRI__General_message_OptionalPackageNumber_76_Radio_TrackToTrain = 76,
  MLRI__General_message_OptionalPackageNumber_79_Radio_TrackToTrain = 79,
  MLRI__General_message_OptionalPackageNumber_88_Radio_TrackToTrain = 88,
  MLRI__General_message_OptionalPackageNumber_131_Radio_TrackToTrain = 131,
  MLRI__General_message_OptionalPackageNumber_138_Radio_TrackToTrain = 138,
  MLRI__General_message_OptionalPackageNumber_139_Radio_TrackToTrain = 139,
  MLRI__General_message_OptionalPackageNumber_140_Radio_TrackToTrain = 140
} MLRI__General_message_OptionalPackets_Radio_TrackToTrain;
/* Radio_TrackToTrain::SH_Authorised_OptionalPackets */
typedef enum {
  MLRI__SH_Authorised_OptionalPackageNumber_3_Radio_TrackToTrain = 3,
  MLRI__SH_Authorised_OptionalPackageNumber_44_Radio_TrackToTrain = 44,
  MLRI__SH_Authorised_OptionalPackageNumber_49_Radio_TrackToTrain = 49
} MLRI__SH_Authorised_OptionalPackets_Radio_TrackToTrain;
/* Radio_TrackToTrain::MA_with_Shifted_Location_Reference_OptionalPackets */
typedef enum {
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_15_Radio_TrackToTrain = 15,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_21_Radio_TrackToTrain = 21,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_27_Radio_TrackToTrain = 27,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_49_Radio_TrackToTrain = 49,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_80_Radio_TrackToTrain = 80,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_3_Radio_TrackToTrain = 3,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_5_Radio_TrackToTrain = 5,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_39_Radio_TrackToTrain = 39,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_40_Radio_TrackToTrain = 40,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_51_Radio_TrackToTrain = 51,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_41_Radio_TrackToTrain = 41,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_42_Radio_TrackToTrain = 42,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_44_Radio_TrackToTrain = 44,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_45_Radio_TrackToTrain = 45,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_52_Radio_TrackToTrain = 52,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_57_Radio_TrackToTrain = 57,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_58_Radio_TrackToTrain = 58,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_64_Radio_TrackToTrain = 64,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_65_Radio_TrackToTrain = 65,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_66_Radio_TrackToTrain = 66,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_68_Radio_TrackToTrain = 68,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_69_Radio_TrackToTrain = 69,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_70_Radio_TrackToTrain = 70,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_71_Radio_TrackToTrain = 71,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_72_Radio_TrackToTrain = 72,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_76_Radio_TrackToTrain = 76,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_79_Radio_TrackToTrain = 79,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_88_Radio_TrackToTrain = 88,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_131_Radio_TrackToTrain = 131,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_138_Radio_TrackToTrain = 138,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_139_Radio_TrackToTrain = 139,
  MLRI__MA_with_Shifted_Location_Reference_OptionalPackageNumber_140_Radio_TrackToTrain = 140
} MLRI__MA_with_Shifted_Location_Reference_OptionalPackets_Radio_TrackToTrain;
/* Radio_TrackToTrain::Infill_MA_OptionalPackets */
typedef enum {
  MLRI__Infill_MA_OptionalPackageNumber_136_Radio_TrackToTrain = 136,
  MLRI__Infill_MA_OptionalPackageNumber_12_Radio_TrackToTrain = 12,
  MLRI__Infill_MA_OptionalPackageNumber_5_Radio_TrackToTrain = 5,
  MLRI__Infill_MA_OptionalPackageNumber_21_Radio_TrackToTrain = 21,
  MLRI__Infill_MA_OptionalPackageNumber_27_Radio_TrackToTrain = 27,
  MLRI__Infill_MA_OptionalPackageNumber_39_Radio_TrackToTrain = 39,
  MLRI__Infill_MA_OptionalPackageNumber_40_Radio_TrackToTrain = 40,
  MLRI__Infill_MA_OptionalPackageNumber_41_Radio_TrackToTrain = 41,
  MLRI__Infill_MA_OptionalPackageNumber_44_Radio_TrackToTrain = 44,
  MLRI__Infill_MA_OptionalPackageNumber_49_Radio_TrackToTrain = 49,
  MLRI__Infill_MA_OptionalPackageNumber_51_Radio_TrackToTrain = 51,
  MLRI__Infill_MA_OptionalPackageNumber_65_Radio_TrackToTrain = 65,
  MLRI__Infill_MA_OptionalPackageNumber_66_Radio_TrackToTrain = 66,
  MLRI__Infill_MA_OptionalPackageNumber_68_Radio_TrackToTrain = 68,
  MLRI__Infill_MA_OptionalPackageNumber_69_Radio_TrackToTrain = 69,
  MLRI__Infill_MA_OptionalPackageNumber_70_Radio_TrackToTrain = 70,
  MLRI__Infill_MA_OptionalPackageNumber_71_Radio_TrackToTrain = 71,
  MLRI__Infill_MA_OptionalPackageNumber_80_Radio_TrackToTrain = 80,
  MLRI__Infill_MA_OptionalPackageNumber_88_Radio_TrackToTrain = 88,
  MLRI__Infill_MA_OptionalPackageNumber_138_Radio_TrackToTrain = 138,
  MLRI__Infill_MA_OptionalPackageNumber_139_Radio_TrackToTrain = 139
} MLRI__Infill_MA_OptionalPackets_Radio_TrackToTrain;
/* truthtables::TruthTableValues */
typedef enum {
  MLRI__T_truthtables,
  MLRI__F_truthtables,
  MLRI__X_truthtables
} MLRI__TruthTableValues_truthtables;
/* Q_LXSTATUS */
typedef enum {
  MLRI__Q_LXSTATUS_LX_is_protected = 0,
  MLRI__Q_LXSTATUS_LX_is_not_protected = 1
} MLRI__Q_LXSTATUS;
/* Q_STOPLX */
typedef enum {
  MLRI__Q_STOPLX_No_stop_required = 0,
  MLRI__Q_STOPLX_Stop_required = 1
} MLRI__Q_STOPLX;
/* Q_TEXT */
typedef enum {
  MLRI__Q_TEXT_Level_crossing_not_protected = 0,
  MLRI__Q_TEXT_Acknowledgement = 1
} MLRI__Q_TEXT;
/* M_LEVELTEXTDISPLAY */
typedef enum {
  MLRI__M_LEVELTEXTDISPLAY_Level_0 = 0,
  MLRI__M_LEVELTEXTDISPLAY_Level_NTC_specified_by_NID_NTC = 1,
  MLRI__M_LEVELTEXTDISPLAY_Level_1 = 2,
  MLRI__M_LEVELTEXTDISPLAY_Level_2 = 3,
  MLRI__M_LEVELTEXTDISPLAY_Level_3 = 4,
  MLRI__M_LEVELTEXTDISPLAY_The_display_of_the_text_shall_not_be_limited_by_the_level = 5
} MLRI__M_LEVELTEXTDISPLAY;
/* M_MODETEXTDISPLAY */
typedef enum {
  MLRI__M_MODETEXTDISPLAY_Full_Supervision = 0,
  MLRI__M_MODETEXTDISPLAY_On_Sight = 1,
  MLRI__M_MODETEXTDISPLAY_Staff_Responsible = 2,
  MLRI__M_MODETEXTDISPLAY_Unfitted = 4,
  MLRI__M_MODETEXTDISPLAY_Stand_By = 6,
  MLRI__M_MODETEXTDISPLAY_Trip = 7,
  MLRI__M_MODETEXTDISPLAY_Post_Trip = 8,
  MLRI__M_MODETEXTDISPLAY_Non_Leading = 11,
  MLRI__M_MODETEXTDISPLAY_Limited_Supervision = 12,
  MLRI__M_MODETEXTDISPLAY_Reversing = 14,
  MLRI__M_MODETEXTDISPLAY_The_display_of_the_text_shall_not_be_limited_by_the_mode = 15
} MLRI__M_MODETEXTDISPLAY;
/* Q_CONFTEXTDISPLAY */
typedef enum {
  MLRI__Q_CONFTEXTDISPLAY_Driver_acknowledgement_always_ends_the_text_display_regardless_of_the_end_condition = 0,
  MLRI__Q_CONFTEXTDISPLAY_Driver_acknowledgement_is_an_additional_condition_to_end_the_display = 1
} MLRI__Q_CONFTEXTDISPLAY;
/* Q_TEXTCLASS */
typedef enum {
  MLRI__Q_TEXTCLASS_Auxiliary_Information = 0,
  MLRI__Q_TEXTCLASS_Important_Information = 1
} MLRI__Q_TEXTCLASS;
/* Q_TEXTCONFIRM */
typedef enum {
  MLRI__Q_TEXTCONFIRM_No_confirmation_required = 0,
  MLRI__Q_TEXTCONFIRM_Confirmation_required = 1,
  MLRI__Q_TEXTCONFIRM_Confirmation_required_command_application_of_the_service_brake_when_display_end_condition_is_fulfilled_unless_the_text_has_already_been_acknowledged_by_the_driver = 2,
  MLRI__Q_TEXTCONFIRM_Confirmation_required_command_application_of_the_emergency_brake_when_display_end_condition_is_fulfilled_unless_the_text_has_already_been_acknowledged_by_the_driver = 3
} MLRI__Q_TEXTCONFIRM;
/* Q_TEXTDISPLAY */
typedef enum {
  MLRI__Q_TEXTDISPLAY_No_display_as_soon_as__or__until_one_of_the_events_is_fulfilled = 0,
  MLRI__Q_TEXTDISPLAY_Yes_display_as_soon_as__or__until_all_events_are_fulfilled = 1
} MLRI__Q_TEXTDISPLAY;
/* Q_TEXTREPORT */
typedef enum {
  MLRI__Q_TEXTREPORT_No_driver_acknowledgement_report_required = 0,
  MLRI__Q_TEXTREPORT_Driver_acknowledgement_report_required = 1
} MLRI__Q_TEXTREPORT;
/* M_ADHESION */
typedef enum {
  MLRI__M_ADHESION_Slippery_rail = 0,
  MLRI__M_ADHESION_Non_slippery_rail = 1
} MLRI__M_ADHESION;
/* Q_RBC */
typedef enum {
  MLRI__Q_RBC_Terminate_communication_session = 0,
  MLRI__Q_RBC_Establish_communication_session = 1
} MLRI__Q_RBC;
/* M_NVCONTACT */
typedef enum {
  MLRI__M_NVCONTACT_Train_trip = 0,
  MLRI__M_NVCONTACT_Apply_service_brake = 1,
  MLRI__M_NVCONTACT_No_Reaction = 2
} MLRI__M_NVCONTACT;
/* M_NVDERUN */
typedef enum {
  MLRI__M_NVDERUN_No = 0,
  MLRI__M_NVDERUN_Yes = 1
} MLRI__M_NVDERUN;
/* M_NVEBCL */
typedef enum {
  MLRI__M_NVEBCL_Confidence_level_50 = 0,
  MLRI__M_NVEBCL_Confidence_level_90 = 1,
  MLRI__M_NVEBCL_Confidence_level_99 = 2,
  MLRI__M_NVEBCL_Confidence_level_99_9 = 3,
  MLRI__M_NVEBCL_Confidence_level_99_99 = 4,
  MLRI__M_NVEBCL_Confidence_level_99_999 = 5,
  MLRI__M_NVEBCL_Confidence_level_99_9999 = 6,
  MLRI__M_NVEBCL_Confidence_level_99_99999 = 7,
  MLRI__M_NVEBCL_Confidence_level_99_999999 = 8,
  MLRI__M_NVEBCL_Confidence_level_99_9999999 = 9
} MLRI__M_NVEBCL;
/* Q_NVDRIVER_ADHES */
typedef enum {
  MLRI__Q_NVDRIVER_ADHES_Not_allowed = 0,
  MLRI__Q_NVDRIVER_ADHES_Allowed = 1
} MLRI__Q_NVDRIVER_ADHES;
/* Q_NVEMRRLS */
typedef enum {
  MLRI__Q_NVEMRRLS_Revoke_emergency_brake_command_at_standstill = 0,
  MLRI__Q_NVEMRRLS_Revoke_emergency_brake_command_when_permitted_speed_supervision_limit_is_no_longer_exceeded = 1
} MLRI__Q_NVEMRRLS;
/* Q_NVGUIPERM */
typedef enum {
  MLRI__Q_NVGUIPERM_No = 0,
  MLRI__Q_NVGUIPERM_Yes = 1
} MLRI__Q_NVGUIPERM;
/* Q_NVINHSMICPERM */
typedef enum {
  MLRI__Q_NVINHSMICPERM_No = 0,
  MLRI__Q_NVINHSMICPERM_Yes = 1
} MLRI__Q_NVINHSMICPERM;
/* Q_NVKINT */
typedef enum {
  MLRI__Q_NVKINT_No_integrated_correction_factors_follow = 0,
  MLRI__Q_NVKINT_Integrated_correction_factors_follow = 1
} MLRI__Q_NVKINT;
/* Q_NVSBFBPERM */
typedef enum {
  MLRI__Q_NVSBFBPERM_No = 0,
  MLRI__Q_NVSBFBPERM_Yes = 1
} MLRI__Q_NVSBFBPERM;
/* Q_NVSBTSMPERM */
typedef enum {
  MLRI__Q_NVSBTSMPERM_No = 0,
  MLRI__Q_NVSBTSMPERM_Yes = 1
} MLRI__Q_NVSBTSMPERM;
/* Q_SRSTOP */
typedef enum {
  MLRI__Q_SRSTOP_Stop_if_in_SR_mode = 0,
  MLRI__Q_SRSTOP_Go_if_in_SR_mode = 1
} MLRI__Q_SRSTOP;
/* Q_SLEEPSESSION */
typedef enum {
  MLRI__Q_SLEEPSESSION_Ignore_session_establishment_order = 0,
  MLRI__Q_SLEEPSESSION_Execute_session_establishment_order = 1
} MLRI__Q_SLEEPSESSION;
/* NC_CDDIFF */
typedef enum {
  MLRI__NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_80_mm = 0,
  MLRI__NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_100_mm = 1,
  MLRI__NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_130_mm = 2,
  MLRI__NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_150_mm = 3,
  MLRI__NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_165_mm = 4,
  MLRI__NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_180_mm = 5,
  MLRI__NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_210_mm = 6,
  MLRI__NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_225_mm = 7,
  MLRI__NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_245_mm = 8,
  MLRI__NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_275_mm = 9,
  MLRI__NC_CDDIFF_Specific_SSP_applicable_to_Cant_Deficiency_300_mm = 10
} MLRI__NC_CDDIFF;
/* Q_DIFF */
typedef enum {
  MLRI__Q_DIFF_Cant_Deficiency_specific_category = 0,
  MLRI__Q_DIFF_Other_specific_category_replaces_the_Cant_Deficiency_SSP = 1,
  MLRI__Q_DIFF_Other_specific_category_does_not_replace_the_Cant_Deficiency_SSP = 2
} MLRI__Q_DIFF;
/* Q_NVKVINTSET */
typedef enum {
  MLRI__Q_NVKVINTSET_Freight_trains = 0,
  MLRI__Q_NVKVINTSET_Conventional_passenger_trains = 1
} MLRI__Q_NVKVINTSET;
/* L_NVKRINT */
typedef enum {
  MLRI__L_NVKRINT_0m = 0,
  MLRI__L_NVKRINT_25m = 1,
  MLRI__L_NVKRINT_50m = 2,
  MLRI__L_NVKRINT_75m = 3,
  MLRI__L_NVKRINT_100m = 4,
  MLRI__L_NVKRINT_150m = 5,
  MLRI__L_NVKRINT_200m = 6,
  MLRI__L_NVKRINT_300m = 7,
  MLRI__L_NVKRINT_400m = 8,
  MLRI__L_NVKRINT_500m = 9,
  MLRI__L_NVKRINT_600m = 10,
  MLRI__L_NVKRINT_700m = 11,
  MLRI__L_NVKRINT_800m = 12,
  MLRI__L_NVKRINT_900m = 13,
  MLRI__L_NVKRINT_1000m = 14,
  MLRI__L_NVKRINT_1100m = 15,
  MLRI__L_NVKRINT_1200m = 16,
  MLRI__L_NVKRINT_1300m = 17,
  MLRI__L_NVKRINT_1400m = 18,
  MLRI__L_NVKRINT_1500m = 19,
  MLRI__L_NVKRINT_1600m = 20,
  MLRI__L_NVKRINT_1700m = 21,
  MLRI__L_NVKRINT_1800m = 22,
  MLRI__L_NVKRINT_1900m = 23,
  MLRI__L_NVKRINT_2000m = 24,
  MLRI__L_NVKRINT_2100m = 25,
  MLRI__L_NVKRINT_2200m = 26,
  MLRI__L_NVKRINT_2300m = 27,
  MLRI__L_NVKRINT_2400m = 28,
  MLRI__L_NVKRINT_2500m = 29,
  MLRI__L_NVKRINT_2600m = 30,
  MLRI__L_NVKRINT_2700m = 31
} MLRI__L_NVKRINT;
/* Q_FRONT */
typedef enum {
  MLRI__Q_FRONT_Train_length_delay_on_validity_end_point_of_profile_element = 0,
  MLRI__Q_FRONT_No_train_length_delay_on_validity_end_point_of_profile_element = 1
} MLRI__Q_FRONT;
/* Q_GDIR */
typedef enum {
  MLRI__Q_GDIR_downhill = 0,
  MLRI__Q_GDIR_uphill = 1
} MLRI__Q_GDIR;
/* Q_PBDSR */
typedef enum {
  MLRI__Q_PBDSR_EB_intervention_requested = 0,
  MLRI__Q_PBDSR_SB_intervention_requested = 1
} MLRI__Q_PBDSR;
/* M_TRACKCOND */
typedef enum {
  MLRI__M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted = 0,
  MLRI__M_TRACKCOND_Tunnel_stopping_area_Initial_state_is_no_tunnel_stopping_area = 1,
  MLRI__M_TRACKCOND_Sound_horn_Initial_state_is_is_no_request_for_sound_horn = 2,
  MLRI__M_TRACKCOND_Powerless_section_Lower_pantograph_Initial_state_is_not_powerless_section = 3,
  MLRI__M_TRACKCOND_Radio_hole_stop_supervising_T_NVCONTACT_Initial_state_is_supervise_T_NVCONTACT = 4,
  MLRI__M_TRACKCOND_Air_tightness_Initial_state_is_no_request_for_air_tightness = 5,
  MLRI__M_TRACKCOND_Switch_off_regenerative_brake_Initial_state_is_regenerative_brake_on = 6,
  MLRI__M_TRACKCOND_Switch_off_eddy_current_brake_for_service_brake_Initial_state_is_eddy_current_brake_for_service_brake_on = 7,
  MLRI__M_TRACKCOND_Switch_off_magnetic_shoe_brake_Initial_state_is_magnetic_shoe_brake_on = 8,
  MLRI__M_TRACKCOND_Powerless_section_switch_off_the_main_power_switch_Initial_state_is_not_powerless_section = 9,
  MLRI__M_TRACKCOND_Switch_off_eddy_current_brake_for_emergency_brake_Initial_state_is_eddy_current_brake_for_emergency_brake_on = 10
} MLRI__M_TRACKCOND;
/* M_PLATFORM */
typedef enum {
  MLRI__M_PLATFORM_200_mm = 0,
  MLRI__M_PLATFORM_300380_mm = 1,
  MLRI__M_PLATFORM_550_mm = 2,
  MLRI__M_PLATFORM_580_mm = 3,
  MLRI__M_PLATFORM_680_mm = 4,
  MLRI__M_PLATFORM_685_mm = 5,
  MLRI__M_PLATFORM_730_mm = 6,
  MLRI__M_PLATFORM_760_mm = 7,
  MLRI__M_PLATFORM_840_mm = 8,
  MLRI__M_PLATFORM_900_mm = 9,
  MLRI__M_PLATFORM_915_mm = 10,
  MLRI__M_PLATFORM_920_mm = 11,
  MLRI__M_PLATFORM_960_mm = 12,
  MLRI__M_PLATFORM_1100_mm = 13
} MLRI__M_PLATFORM;
/* Q_PLATFORM */
typedef enum {
  MLRI__Q_PLATFORM_Platform_on_left_side = 0,
  MLRI__Q_PLATFORM_Platform_on_right_side = 1,
  MLRI__Q_PLATFORM_Platform_on_both_sides = 2
} MLRI__Q_PLATFORM;
/* M_AXLELOADCAT */
typedef enum {
  MLRI__M_AXLELOADCAT_A = 0,
  MLRI__M_AXLELOADCAT_HS17 = 1,
  MLRI__M_AXLELOADCAT_B1 = 2,
  MLRI__M_AXLELOADCAT_B2 = 3,
  MLRI__M_AXLELOADCAT_C2 = 4,
  MLRI__M_AXLELOADCAT_C3 = 5,
  MLRI__M_AXLELOADCAT_C4 = 6,
  MLRI__M_AXLELOADCAT_D2 = 7,
  MLRI__M_AXLELOADCAT_D3 = 8,
  MLRI__M_AXLELOADCAT_D4 = 9,
  MLRI__M_AXLELOADCAT_D4XL = 10,
  MLRI__M_AXLELOADCAT_E4 = 11,
  MLRI__M_AXLELOADCAT_E5 = 12
} MLRI__M_AXLELOADCAT;
/* M_LINEGAUGE */
typedef enum {
  MLRI__M_LINEGAUGE_G1 = 1,
  MLRI__M_LINEGAUGE_GA = 2,
  MLRI__M_LINEGAUGE_GB = 4,
  MLRI__M_LINEGAUGE_GC = 8
} MLRI__M_LINEGAUGE;
/* M_VOLTAGE */
typedef enum {
  MLRI__M_VOLTAGE_Line_not_fitted_with_any_traction_system = 0,
  MLRI__M_VOLTAGE_AC_25_kV_50_Hz = 1,
  MLRI__M_VOLTAGE_AC_15_kV_16_7_Hz = 2,
  MLRI__M_VOLTAGE_DC_3_kV = 3,
  MLRI__M_VOLTAGE_DC_1_5_kV = 4,
  MLRI__M_VOLTAGE_DC_600_or_750_V = 5
} MLRI__M_VOLTAGE;
/* Q_SUITABILITY */
typedef enum {
  MLRI__Q_SUITABILITY_Loading_gauge = 0,
  MLRI__Q_SUITABILITY_Max_axle_load = 1,
  MLRI__Q_SUITABILITY_Traction_system = 2
} MLRI__Q_SUITABILITY;
/* Q_TRACKINIT */
typedef enum {
  MLRI__Q_TRACKINIT_No_initial_states_to_be_resumed_profile_to_follow = 0,
  MLRI__Q_TRACKINIT_Empty_profile_initial_states_to_be_resumed = 1
} MLRI__Q_TRACKINIT;
/* Q_MPOSITION */
typedef enum {
  MLRI__Q_MPOSITION_Opposite = 0,
  MLRI__Q_MPOSITION_Same = 1
} MLRI__Q_MPOSITION;
/* M_MAMODE */
typedef enum {
  MLRI__M_MAMODE_On_Sight = 0,
  MLRI__M_MAMODE_Shunting = 1,
  MLRI__M_MAMODE_Limited_Supervision = 2
} MLRI__M_MAMODE;
/* Q_MAMODE */
typedef enum {
  MLRI__Q_MAMODE_as_the_EOA = 0,
  MLRI__Q_MAMODE_as_both_the_EOA_and_SvL = 1
} MLRI__Q_MAMODE;
/* M_ACK */
typedef enum {
  MLRI__M_ACK_No_acknowledgement_required = 0,
  MLRI__M_ACK_Acknowledgement_required = 1
} MLRI__M_ACK;
/* Common_Types_Pkg::MsgSource_T */
typedef enum {
  MLRI__Euroradio_Common_Types_Pkg,
  MLRI__Eurobalise_Common_Types_Pkg
} MLRI__MsgSource_T_Common_Types_Pkg;
/* TIU_Types_Pkg::M_voltage_types_T */
typedef enum {
  MLRI__line_not_fitted_with_any_traction_system_TIU_Types_Pkg,
  MLRI__ac_25kV_50Hz_TIU_Types_Pkg,
  MLRI__ac_15kV_16_7Hz_TIU_Types_Pkg,
  MLRI__dc_3kV_TIU_Types_Pkg,
  MLRI__dc_1_5kV_TIU_Types_Pkg,
  MLRI__dc_600_750kV_TIU_Types_Pkg
} MLRI__M_voltage_types_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M17_traction_cutoff_command_T */
typedef enum {
  MLRI__info_not_available_TIU_Types_Pkg,
  MLRI__apply_traction_cutoff_TIU_Types_Pkg,
  MLRI__release_traction_cutoff_TIU_Types_Pkg
} MLRI__M17_traction_cutoff_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M16_mainpowerswitch_command_T */
typedef enum {
  MLRI__M16_info_not_available_TIU_Types_Pkg,
  MLRI__open_main_power_swicth_TIU_Types_Pkg,
  MLRI__close_main_power_switch_TIU_Types_Pkg
} MLRI__M16_mainpowerswitch_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M15_airtightness_command_T */
typedef enum {
  MLRI__M15_info_not_available_TIU_Types_Pkg,
  MLRI__tunnel_condition_active_TIU_Types_Pkg,
  MLRI__tunnel_condition_not_active_TIU_Types_Pkg
} MLRI__M15_airtightness_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M14_pantograph_command_T */
typedef enum {
  MLRI__M14_info_not_available_TIU_Types_Pkg,
  MLRI__lower_pantograph_TIU_Types_Pkg,
  MLRI__raise_pantograph_TIU_Types_Pkg
} MLRI__M14_pantograph_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M13_train_data_entry_type_T */
typedef enum {
  MLRI__M13_info_not_available_TIU_Types_Pkg,
  MLRI__fixed_entry_type_TIU_Types_Pkg,
  MLRI__flexible_entry_type_TIU_Types_Pkg,
  MLRI__switchable_entry_type_TIU_Types_Pkg
} MLRI__M13_train_data_entry_type_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M08_Isolation_status_T */
typedef enum {
  MLRI__M08_info_not_available_TIU_Types_Pkg,
  MLRI__on_board_equipment_is_isolated_TIU_Types_Pkg,
  MLRI__on_board_equipement_is_not_isolated_TIU_Types_Pkg
} MLRI__M08_Isolation_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M07_traction_signal_status_T */
typedef enum {
  MLRI__M07_info_not_available_TIU_Types_Pkg,
  MLRI__traction_on_traction_off_TIU_Types_Pkg
} MLRI__M07_traction_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M06_trainintegrity_signal_status_T */
typedef enum {
  MLRI__M06_info_not_available_TIU_Types_Pkg,
  MLRI__train_is_not_integer_TIU_Types_Pkg,
  MLRI__train_is_integer_TIU_Types_Pkg
} MLRI__M06_trainintegrity_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M05_directioncontroller_signal_status_T */
typedef enum {
  MLRI__M05_info_not_available_TIU_Types_Pkg,
  MLRI__direction_controller_in_neutral_TIU_Types_Pkg,
  MLRI__direction_controller_in_forward_TIU_Types_Pkg,
  MLRI__direction_controller_in_backward_TIU_Types_Pkg
} MLRI__M05_directioncontroller_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M04_cab_signal_status_T */
typedef enum {
  MLRI__M04_info_not_available_TIU_Types_Pkg,
  MLRI__both_desks_are_closed_TIU_Types_Pkg,
  MLRI__desk_A_is_open_TIU_Types_Pkg,
  MLRI__desk_B_is_open_TIU_Types_Pkg,
  MLRI__both_desks_are_open_TIU_Types_Pkg
} MLRI__M04_cab_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M03_nonleading_signal_status_T */
typedef enum {
  MLRI__M03_info_not_available_TIU_Types_Pkg,
  MLRI__non_leading_permitted_TIU_Types_Pkg,
  MLRI__non_leading_not_permitted_TIU_Types_Pkg
} MLRI__M03_nonleading_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M02_passiveshunting_signal_status_T */
typedef enum {
  MLRI__M02_info_not_available_TIU_Types_Pkg,
  MLRI__passive_shunting_permitted_TIU_Types_Pkg,
  MLRI__passive_shunting_not_permitted_TIU_Types_Pkg
} MLRI__M02_passiveshunting_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M01_sleeping_signal_status_T */
typedef enum {
  MLRI__M01_info_not_available_TIU_Types_Pkg,
  MLRI__signal_active_TIU_Types_Pkg,
  MLRI__signal_not_active_TIU_Types_Pkg
} MLRI__M01_sleeping_signal_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M09_brake_status_T */
typedef enum {
  MLRI__M09_info_not_available_TIU_Types_Pkg,
  MLRI__is_active_TIU_Types_Pkg,
  MLRI__is_not_active_TIU_Types_Pkg
} MLRI__M09_brake_status_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M12_eddy_current_brake_inhibition_T */
typedef enum {
  MLRI__M12_info_not_available_TIU_Types_Pkg,
  MLRI__inhibit_for_service_brake_TIU_Types_Pkg,
  MLRI__inhibit_for_emergency_brake_TIU_Types_Pkg,
  MLRI__inhibit_for_both_service_emergency_brake_TIU_Types_Pkg,
  MLRI__do_not_inhibit_for_service_brake_TIU_Types_Pkg,
  MLRI__do_not_inhibit_for_emergency_brake_TIU_Types_Pkg,
  MLRI__do_not_inhibit_for_both_service_emergency_brake_TIU_Types_Pkg
} MLRI__M12_eddy_current_brake_inhibition_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M11_brake_inhibit_command_T */
typedef enum {
  MLRI__M11_info_not_available_TIU_Types_Pkg,
  MLRI__inhibit_brake_TIU_Types_Pkg,
  MLRI__do_not_inhibit_brake_TIU_Types_Pkg
} MLRI__M11_brake_inhibit_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M10_brake_signal_command_T */
typedef enum {
  MLRI__M10_info_not_available_TIU_Types_Pkg,
  MLRI__apply_brake_TIU_Types_Pkg,
  MLRI__release_brake_TIU_Types_Pkg
} MLRI__M10_brake_signal_command_T_TIU_Types_Pkg;
/* TIU_Types_Pkg::M_trackcond_T */
typedef enum {
  MLRI__non_stopping_area_TIU_Types_Pkg,
  MLRI__tunnel_stopping_area_TIU_Types_Pkg,
  MLRI__sound_horn_TIU_Types_Pkg,
  MLRI__powerless_section_lower_pantograph_TIU_Types_Pkg,
  MLRI__radio_hole_TIU_Types_Pkg,
  MLRI__air_tightness_TIU_Types_Pkg,
  MLRI__switch_off_regenerative_brake_TIU_Types_Pkg,
  MLRI__switch_off_eddy_current_brake_for_service_brake_TIU_Types_Pkg,
  MLRI__switch_off_magnetic_shoe_brake_TIU_Types_Pkg,
  MLRI__powerless_section_switch_off_main_power_switch_TIU_Types_Pkg,
  MLRI__switch_off_eddy_current_brake_for_emergency_brake_TIU_Types_Pkg
} MLRI__M_trackcond_T_TIU_Types_Pkg;
/* SelectUsableInfo_Pkg::indRej_T */
typedef enum {
  MLRI__IND_REJ_Not_Relevant_SelectUsableInfo_Pkg,
  MLRI__IND_REJ_Accepted_SelectUsableInfo_Pkg,
  MLRI__IND_REJ_Rejected_SelectUsableInfo_Pkg
} MLRI__indRej_T_SelectUsableInfo_Pkg;
/* M_DUP */
typedef enum {
  MLRI__M_DUP_No_duplicates = 0,
  MLRI__M_DUP_This_balise_is_a_duplicate_of_the_next_balise = 1,
  MLRI__M_DUP_This_balise_is_a_duplicate_of_the_previous_balise = 2
} MLRI__M_DUP;
/* N_PIG */
typedef enum {
  MLRI__N_PIG_I_am_the_1st = 0,
  MLRI__N_PIG_I_am_the_2nd = 1,
  MLRI__N_PIG_I_am_the_3rd = 2,
  MLRI__N_PIG_I_am_the_4th = 3,
  MLRI__N_PIG_I_am_the_5th = 4,
  MLRI__N_PIG_I_am_the_6th = 5,
  MLRI__N_PIG_I_am_the_7th = 6,
  MLRI__N_PIG_I_am_the_8th = 7
} MLRI__N_PIG;
/* TIU_Types_Pkg::cabActiveStatus_T */
typedef enum {
  MLRI__cabNone_Active_TIU_Types_Pkg,
  MLRI__cabA_Active_TIU_Types_Pkg,
  MLRI__cabB_Active_TIU_Types_Pkg
} MLRI__cabActiveStatus_T_TIU_Types_Pkg;
/* CalculateTrainPosition_Pkg::Pos_Pkg::trainMovementDir_T */
typedef enum {
  MLRI__trm_unknown_CalculateTrainPosition_Pkg_Pos_Pkg,
  MLRI__trm_standstill_CalculateTrainPosition_Pkg_Pos_Pkg,
  MLRI__trm_increasing_CalculateTrainPosition_Pkg_Pos_Pkg,
  MLRI__trm_decreasing_CalculateTrainPosition_Pkg_Pos_Pkg
} MLRI__trainMovementDir_T_CalculateTrainPosition_Pkg_Pos_Pkg;
/* M_LEVELTR */
typedef enum {
  MLRI__M_LEVELTR_Level_0 = 0,
  MLRI__M_LEVELTR_Level_NTC_specified_by_NID_NTC = 1,
  MLRI__M_LEVELTR_Level_1 = 2,
  MLRI__M_LEVELTR_Level_2 = 3,
  MLRI__M_LEVELTR_Level_3 = 4
} MLRI__M_LEVELTR;
/* BG_Types_Pkg::BG_Orientation_T */
typedef enum {
  MLRI__BG_Orientation_Reverse_BG_Types_Pkg,
  MLRI__BG_Orientation_Nominal_BG_Types_Pkg,
  MLRI__BG_Orientation_Unknown_BG_Types_Pkg
} MLRI__BG_Orientation_T_BG_Types_Pkg;
/* M_VERSION */
typedef enum {
  MLRI__M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS = 0,
  MLRI__M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0 = 16,
  MLRI__M_VERSION_Version_1_1_introduced_in_SRS_3_3_0 = 17,
  MLRI__M_VERSION_Version_2_0_introduced_in_SRS_3_3_0 = 32
} MLRI__M_VERSION;
/* N_TOTAL */
typedef enum {
  MLRI__N_TOTAL_1_balise_in_the_group = 0,
  MLRI__N_TOTAL_2_balises_in_the_group = 1,
  MLRI__N_TOTAL_3_balises_in_the_group = 2,
  MLRI__N_TOTAL_4_balises_in_the_group = 3,
  MLRI__N_TOTAL_5_balises_in_the_group = 4,
  MLRI__N_TOTAL_6_balises_in_the_group = 5,
  MLRI__N_TOTAL_7_balises_in_the_group = 6,
  MLRI__N_TOTAL_8_balises_in_the_group = 7
} MLRI__N_TOTAL;
/* Q_LINK */
typedef enum {
  MLRI__Q_LINK_Unlinked = 0,
  MLRI__Q_LINK_Linked = 1
} MLRI__Q_LINK;
/* Q_MEDIA */
typedef enum { MLRI__Q_MEDIA_Balise = 0, MLRI__Q_MEDIA_Loop = 1 } MLRI__Q_MEDIA;
/* Q_UPDOWN */
typedef enum {
  MLRI__Q_UPDOWN_Down_link_telegram = 0,
  MLRI__Q_UPDOWN_Up_link_telegram = 1
} MLRI__Q_UPDOWN;
/* Obu_BasicTypes_Pkg::odoMotionState_T */
typedef enum {
  MLRI__noMotion_Obu_BasicTypes_Pkg,
  MLRI__Motion_Obu_BasicTypes_Pkg
} MLRI__odoMotionState_T_Obu_BasicTypes_Pkg;
/* Obu_BasicTypes_Pkg::odoMotionDirection_T */
typedef enum {
  MLRI__unknownDirection_Obu_BasicTypes_Pkg,
  MLRI__cabAFirst_Obu_BasicTypes_Pkg,
  MLRI__cabBFirst_Obu_BasicTypes_Pkg
} MLRI__odoMotionDirection_T_Obu_BasicTypes_Pkg;
/* Q_LINKORIENTATION */
typedef enum {
  MLRI__Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_reverse_direction = 0,
  MLRI__Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction = 1
} MLRI__Q_LINKORIENTATION;
/* Q_LINKREACTION */
typedef enum {
  MLRI__Q_LINKREACTION_Train_trip = 0,
  MLRI__Q_LINKREACTION_Apply_service_brake = 1,
  MLRI__Q_LINKREACTION_No_Reaction = 2
} MLRI__Q_LINKREACTION;
/* Q_NEWCOUNTRY */
typedef enum {
  MLRI__Q_NEWCOUNTRY_Same_country__or__railway_administration_no_NID_C_follows = 0,
  MLRI__Q_NEWCOUNTRY_Not_the_same_country__or__railway_administration_NID_C_follows = 1
} MLRI__Q_NEWCOUNTRY;
/* M_LEVEL */
typedef enum {
  MLRI__M_LEVEL_Level_0 = 0,
  MLRI__M_LEVEL_Level_NTC_specified_by_NID_NTC = 1,
  MLRI__M_LEVEL_Level_1 = 2,
  MLRI__M_LEVEL_Level_2 = 3,
  MLRI__M_LEVEL_Level_3 = 4
} MLRI__M_LEVEL;
/* M_MODE */
typedef enum {
  MLRI__M_MODE_Full_Supervision = 0,
  MLRI__M_MODE_On_Sight = 1,
  MLRI__M_MODE_Staff_Responsible = 2,
  MLRI__M_MODE_Shunting = 3,
  MLRI__M_MODE_Unfitted = 4,
  MLRI__M_MODE_Sleeping = 5,
  MLRI__M_MODE_Stand_By = 6,
  MLRI__M_MODE_Trip = 7,
  MLRI__M_MODE_Post_Trip = 8,
  MLRI__M_MODE_System_Failure = 9,
  MLRI__M_MODE_Isolation = 10,
  MLRI__M_MODE_Non_Leading = 11,
  MLRI__M_MODE_Limited_Supervision = 12,
  MLRI__M_MODE_National_System = 13,
  MLRI__M_MODE_Reversing = 14,
  MLRI__M_MODE_Passive_Shunting = 15
} MLRI__M_MODE;
/* Q_DIRLRBG */
typedef enum {
  MLRI__Q_DIRLRBG_Reverse = 0,
  MLRI__Q_DIRLRBG_Nominal = 1,
  MLRI__Q_DIRLRBG_Unknown = 2
} MLRI__Q_DIRLRBG;
/* Q_DIRTRAIN */
typedef enum {
  MLRI__Q_DIRTRAIN_Reverse = 0,
  MLRI__Q_DIRTRAIN_Nominal = 1,
  MLRI__Q_DIRTRAIN_Unknown = 2
} MLRI__Q_DIRTRAIN;
/* Q_DLRBG */
typedef enum {
  MLRI__Q_DLRBG_Reverse = 0,
  MLRI__Q_DLRBG_Nominal = 1,
  MLRI__Q_DLRBG_Unknown = 2
} MLRI__Q_DLRBG;
/* Q_LENGTH */
typedef enum {
  MLRI__Q_LENGTH_No_train_integrity_information_available = 0,
  MLRI__Q_LENGTH_Train_integrity_confirmed_by_integrity_monitoring_device = 1,
  MLRI__Q_LENGTH_Train_integrity_confirmed_by_driver = 2,
  MLRI__Q_LENGTH_Train_integrity_lost = 3
} MLRI__Q_LENGTH;
/* M_ERROR */
typedef enum {
  MLRI__M_ERROR_Balise_group_linking_consistency_error = 0,
  MLRI__M_ERROR_Linked_balise_group_message_consistency_erro = 1,
  MLRI__M_ERROR_Unlinked_balise_group_message_consistency_error = 2,
  MLRI__M_ERROR_Radio_message_consistency_error = 3,
  MLRI__M_ERROR_Radio_sequence_error = 4,
  MLRI__M_ERROR_Radio_safe_radio_connection_error = 5,
  MLRI__M_ERROR_Safety_critical_failure = 6,
  MLRI__M_ERROR_Double_linking_error = 7,
  MLRI__M_ERROR_Double_repositioning_error = 8
} MLRI__M_ERROR;
/* M_LOC */
typedef enum {
  MLRI__M_LOC_Now = 0,
  MLRI__M_LOC_Every_LRBG_compliant_balise_group = 1,
  MLRI__M_LOC_Do_not_send_position_report_on_passage_of_LRBG_compliant_balise_group = 2
} MLRI__M_LOC;
/* Q_DIR */
typedef enum {
  MLRI__Q_DIR_Reverse = 0,
  MLRI__Q_DIR_Nominal = 1,
  MLRI__Q_DIR_Both_directions = 2
} MLRI__Q_DIR;
/* Q_SCALE */
typedef enum {
  MLRI__Q_SCALE_10_cm_scale = 0,
  MLRI__Q_SCALE_1_m_scale = 1,
  MLRI__Q_SCALE_10_m_scale = 2
} MLRI__Q_SCALE;
/* Q_LGTLOC */
typedef enum {
  MLRI__Q_LGTLOC_Min_safe_rear_end = 0,
  MLRI__Q_LGTLOC_Max_safe_front_end = 1
} MLRI__Q_LGTLOC;
/* ProvidePositionReport_Pkg::BG_Orientation_T */
typedef enum {
  MLRI__orientation_reverse_ProvidePositionReport_Pkg,
  MLRI__orientation_nominal_ProvidePositionReport_Pkg,
  MLRI__orientation_unknown_ProvidePositionReport_Pkg
} MLRI__BG_Orientation_T_ProvidePositionReport_Pkg;
/* CalculateTrainPosition_Pkg::Pos_Pkg::trainMovementSensor::SM1 */
typedef enum {
  MLRI___5_SSM_TR_no_trans_SM1,
  MLRI__SSM_TR_Unknown_1_SM1,
  MLRI__SSM_TR_Unknown_2_SM1,
  MLRI__SSM_TR_Unknown_3_SM1,
  MLRI__SSM_TR_Decreasing_1_SM1,
  MLRI__SSM_TR_Decreasing_2_SM1,
  MLRI__SSM_TR_Increasing_1_SM1,
  MLRI__SSM_TR_Increasing_2_SM1,
  MLRI__SSM_TR_Standstill_1_SM1,
  MLRI__SSM_TR_Standstill_2_SM1
} MLRI___6_SSM_TR_SM1;
/* CalculateTrainPosition_Pkg::Pos_Pkg::trainMovementSensor::SM1 */
typedef enum {
  MLRI__SSM_st_Unknown_SM1,
  MLRI__SSM_st_Decreasing_SM1,
  MLRI__SSM_st_Increasing_SM1,
  MLRI__SSM_st_Standstill_SM1
} MLRI___4_SSM_ST_SM1;
/* ProvidePositionReport_Pkg::AggregatePacket_4::SM1 */
typedef enum {
  MLRI___2_SSM_TR_no_trans_SM1,
  MLRI__SSM_TR_init_1_SM1,
  MLRI__SSM_TR_emptyStorage_1_SM1,
  MLRI__SSM_TR_filledStorage_1_SM1,
  MLRI__SSM_TR_intermediate_1_SM1,
  MLRI__SSM_TR_intermediate_2_SM1
} MLRI___3_SSM_TR_SM1;
/* ProvidePositionReport_Pkg::AggregatePacket_4::SM1 */
typedef enum {
  MLRI__SSM_st_init_SM1,
  MLRI__SSM_st_emptyStorage_SM1,
  MLRI__SSM_st_filledStorage_SM1,
  MLRI__SSM_st_intermediate_SM1
} MLRI___1_SSM_ST_SM1;
/* ProvidePositionReport_Pkg::op_D_cycloc::SM1 */
typedef enum {
  MLRI__SSM_TR_no_trans_SM1,
  MLRI__SSM_TR_SimpleCase_1_SM1,
  MLRI__SSM_TR_SpecialCase_1_SM1,
  MLRI__SSM_TR_SpecialCase_2_SM1,
  MLRI__SSM_TR_Init_1_SM1,
  MLRI__SSM_TR_Intermediate_1_SM1,
  MLRI__SSM_TR_Intermediate_2_SM1
} MLRI__SSM_TR_SM1;
/* ProvidePositionReport_Pkg::op_D_cycloc::SM1 */
typedef enum {
  MLRI__SSM_st_SimpleCase_SM1,
  MLRI__SSM_st_SpecialCase_SM1,
  MLRI__SSM_st_Init_SM1,
  MLRI__SSM_st_Intermediate_SM1
} MLRI__SSM_ST_SM1;
/* A_NVMAXREDADH1 */
typedef kcg_real MLRI__A_NVMAXREDADH1;

/* A_NVMAXREDADH2 */
typedef kcg_real MLRI__A_NVMAXREDADH2;

/* A_NVMAXREDADH3 */
typedef kcg_real MLRI__A_NVMAXREDADH3;

/* A_NVP12 */
typedef kcg_real MLRI__A_NVP12;

/* A_NVP23 */
typedef kcg_real MLRI__A_NVP23;

/* M_NVAVADH */
typedef kcg_real MLRI__M_NVAVADH;

/* M_NVKRINT */
typedef kcg_real MLRI__M_NVKRINT;

/* M_NVKTINT */
typedef kcg_real MLRI__M_NVKTINT;

/* M_NVKVINT */
typedef kcg_real MLRI__M_NVKVINT;

/* T_TRAIN */
typedef kcg_real MLRI__T_TRAIN;

/* ProvidePositionReport_Pkg::LinkingInfoUsedOnBoard */
typedef kcg_bool MLRI__LinkingInfoUsedOnBoard_ProvidePositionReport_Pkg;

/* D_ADHESION */
typedef kcg_int MLRI__D_ADHESION;

/* D_AXLELOAD */
typedef kcg_int MLRI__D_AXLELOAD;

/* D_CURRENT */
typedef kcg_int MLRI__D_CURRENT;

/* D_CYCLOC */
typedef kcg_int MLRI__D_CYCLOC;

/* D_DP */
typedef kcg_int MLRI__D_DP;

/* D_EMERGENCYSTOP */
typedef kcg_int MLRI__D_EMERGENCYSTOP;

/* D_ENDTIMERSTARTLOC */
typedef kcg_int MLRI__D_ENDTIMERSTARTLOC;

/* D_GRADIENT */
typedef kcg_int MLRI__D_GRADIENT;

/* D_INFILL */
typedef kcg_int MLRI__D_INFILL;

/* D_LEVELTR */
typedef kcg_int MLRI__D_LEVELTR;

/* D_LINK */
typedef kcg_int MLRI__D_LINK;

/* D_LOC */
typedef kcg_int MLRI__D_LOC;

/* D_LOOP */
typedef kcg_int MLRI__D_LOOP;

/* D_LRBG */
typedef kcg_int MLRI__D_LRBG;

/* D_LX */
typedef kcg_int MLRI__D_LX;

/* D_MAMODE */
typedef kcg_int MLRI__D_MAMODE;

/* D_NVOVTRP */
typedef kcg_int MLRI__D_NVOVTRP;

/* D_NVPOTRP */
typedef kcg_int MLRI__D_NVPOTRP;

/* D_NVROLL */
typedef kcg_int MLRI__D_NVROLL;

/* D_NVSTFF */
typedef kcg_int MLRI__D_NVSTFF;

/* D_OL */
typedef kcg_int MLRI__D_OL;

/* D_PBD */
typedef kcg_int MLRI__D_PBD;

/* D_PBDSR */
typedef kcg_int MLRI__D_PBDSR;

/* D_POSOFF */
typedef kcg_int MLRI__D_POSOFF;

/* D_RBCTR */
typedef kcg_int MLRI__D_RBCTR;

/* D_REF */
typedef kcg_int MLRI__D_REF;

/* D_REVERSE */
typedef kcg_int MLRI__D_REVERSE;

/* D_SECTIONTIMERSTOPLOC */
typedef kcg_int MLRI__D_SECTIONTIMERSTOPLOC;

/* D_SR */
typedef kcg_int MLRI__D_SR;

/* D_STARTOL */
typedef kcg_int MLRI__D_STARTOL;

/* D_STARTREVERSE */
typedef kcg_int MLRI__D_STARTREVERSE;

/* D_STATIC */
typedef kcg_int MLRI__D_STATIC;

/* D_SUITABILITY */
typedef kcg_int MLRI__D_SUITABILITY;

/* D_TAFDISPLAY */
typedef kcg_int MLRI__D_TAFDISPLAY;

/* D_TEXTDISPLAY */
typedef kcg_int MLRI__D_TEXTDISPLAY;

/* D_TRACKINIT */
typedef kcg_int MLRI__D_TRACKINIT;

/* D_TRACKCOND */
typedef kcg_int MLRI__D_TRACKCOND;

/* D_TRACTION */
typedef kcg_int MLRI__D_TRACTION;

/* D_TSR */
typedef kcg_int MLRI__D_TSR;

/* D_VALIDNV */
typedef kcg_int MLRI__D_VALIDNV;

/* G_A */
typedef kcg_int MLRI__G_A;

/* G_PBDSR */
typedef kcg_int MLRI__G_PBDSR;

/* G_TSR */
typedef kcg_int MLRI__G_TSR;

/* L_ACKLEVELTR */
typedef kcg_int MLRI__L_ACKLEVELTR;

/* L_ACKMAMODE */
typedef kcg_int MLRI__L_ACKMAMODE;

/* L_ADHESION */
typedef kcg_int MLRI__L_ADHESION;

/* L_AXLELOAD */
typedef kcg_int MLRI__L_AXLELOAD;

/* L_DOUBTOVER */
typedef kcg_int MLRI__L_DOUBTOVER;

/* L_DOUBTUNDER */
typedef kcg_int MLRI__L_DOUBTUNDER;

/* L_ENDSECTION */
typedef kcg_int MLRI__L_ENDSECTION;

/* L_LOOP */
typedef kcg_int MLRI__L_LOOP;

/* L_LX */
typedef kcg_int MLRI__L_LX;

/* L_MAMODE */
typedef kcg_int MLRI__L_MAMODE;

/* L_MESSAGE */
typedef kcg_int MLRI__L_MESSAGE;

/* L_PACKET */
typedef kcg_int MLRI__L_PACKET;

/* L_PBDSR */
typedef kcg_int MLRI__L_PBDSR;

/* L_REVERSEAREA */
typedef kcg_int MLRI__L_REVERSEAREA;

/* L_SECTION */
typedef kcg_int MLRI__L_SECTION;

/* L_STOPLX */
typedef kcg_int MLRI__L_STOPLX;

/* L_TAFDISPLAY */
typedef kcg_int MLRI__L_TAFDISPLAY;

/* L_TEXT */
typedef kcg_int MLRI__L_TEXT;

/* L_TEXTDISPLAY */
typedef kcg_int MLRI__L_TEXTDISPLAY;

/* L_TRACKCOND */
typedef kcg_int MLRI__L_TRACKCOND;

/* L_TRAIN */
typedef kcg_int MLRI__L_TRAIN;

/* L_TRAININT */
typedef kcg_int MLRI__L_TRAININT;

/* L_TSR */
typedef kcg_int MLRI__L_TSR;

/* M_CURRENT */
typedef kcg_int MLRI__M_CURRENT;

/* M_MCOUNT */
typedef kcg_int MLRI__M_MCOUNT;

/* M_POSITION */
typedef kcg_int MLRI__M_POSITION;

/* N_AXLE */
typedef kcg_int MLRI__N_AXLE;

/* N_ITER */
typedef kcg_int MLRI__N_ITER;

/* NC_DIFF */
typedef kcg_int MLRI__NC_DIFF;

/* NID_BG */
typedef kcg_int MLRI__NID_BG;

/* NID_C */
typedef kcg_int MLRI__NID_C;

/* NID_CTRACTION */
typedef kcg_int MLRI__NID_CTRACTION;

/* NID_EM */
typedef kcg_int MLRI__NID_EM;

/* NID_ENGINE */
typedef kcg_int MLRI__NID_ENGINE;

/* NID_LOOP */
typedef kcg_int MLRI__NID_LOOP;

/* NID_LRBG */
typedef kcg_int MLRI__NID_LRBG;

/* NID_LTRBG */
typedef kcg_int MLRI__NID_LTRBG;

/* NID_LX */
typedef kcg_int MLRI__NID_LX;

/* NID_MESSAGE */
typedef kcg_int MLRI__NID_MESSAGE;

/* NID_MN */
typedef kcg_int MLRI__NID_MN;

/* NID_OPERATIONAL */
typedef kcg_int MLRI__NID_OPERATIONAL;

/* NID_PACKET */
typedef kcg_int MLRI__NID_PACKET;

/* NID_PRVLRBG */
typedef kcg_int MLRI__NID_PRVLRBG;

/* NID_RADIO */
typedef kcg_int MLRI__NID_RADIO;

/* NID_RBC */
typedef kcg_int MLRI__NID_RBC;

/* NID_RIU */
typedef kcg_int MLRI__NID_RIU;

/* NID_NTC */
typedef kcg_int MLRI__NID_NTC;

/* NID_TEXTMESSAGE */
typedef kcg_int MLRI__NID_TEXTMESSAGE;

/* NID_TSR */
typedef kcg_int MLRI__NID_TSR;

/* NID_VBCMK */
typedef kcg_int MLRI__NID_VBCMK;

/* NID_XUSER */
typedef kcg_int MLRI__NID_XUSER;

/* Q_LOCACC */
typedef kcg_int MLRI__Q_LOCACC;

/* Q_NVLOCACC */
typedef kcg_int MLRI__Q_NVLOCACC;

/* Q_SSCODE */
typedef kcg_int MLRI__Q_SSCODE;

/* T_CYCLOC */
typedef kcg_int MLRI__T_CYCLOC;

/* T_CYCRQST */
typedef kcg_int MLRI__T_CYCRQST;

/* T_ENDTIMER */
typedef kcg_int MLRI__T_ENDTIMER;

/* T_LOA */
typedef kcg_int MLRI__T_LOA;

/* T_MAR */
typedef kcg_int MLRI__T_MAR;

/* T_NVCONTACT */
typedef kcg_int MLRI__T_NVCONTACT;

/* T_NVOVTRP */
typedef kcg_int MLRI__T_NVOVTRP;

/* T_OL */
typedef kcg_int MLRI__T_OL;

/* T_SECTIONTIMER */
typedef kcg_int MLRI__T_SECTIONTIMER;

/* T_TEXTDISPLAY */
typedef kcg_int MLRI__T_TEXTDISPLAY;

/* T_TIMEOUTRQST */
typedef kcg_int MLRI__T_TIMEOUTRQST;

/* T_VBC */
typedef kcg_int MLRI__T_VBC;

/* V_AXLELOAD */
typedef kcg_int MLRI__V_AXLELOAD;

/* V_DIFF */
typedef kcg_int MLRI__V_DIFF;

/* V_LOA */
typedef kcg_int MLRI__V_LOA;

/* V_LX */
typedef kcg_int MLRI__V_LX;

/* V_MAIN */
typedef kcg_int MLRI__V_MAIN;

/* V_MAMODE */
typedef kcg_int MLRI__V_MAMODE;

/* V_MAXTRAIN */
typedef kcg_int MLRI__V_MAXTRAIN;

/* V_NVALLOWOVTRP */
typedef kcg_int MLRI__V_NVALLOWOVTRP;

/* V_NVKVINT */
typedef kcg_int MLRI__V_NVKVINT;

/* V_NVLIMSUPERV */
typedef kcg_int MLRI__V_NVLIMSUPERV;

/* V_NVONSIGHT */
typedef kcg_int MLRI__V_NVONSIGHT;

/* V_NVSUPOVTRP */
typedef kcg_int MLRI__V_NVSUPOVTRP;

/* V_NVREL */
typedef kcg_int MLRI__V_NVREL;

/* V_NVSHUNT */
typedef kcg_int MLRI__V_NVSHUNT;

/* V_NVSTFF */
typedef kcg_int MLRI__V_NVSTFF;

/* V_NVUNFIT */
typedef kcg_int MLRI__V_NVUNFIT;

/* V_RELEASEDP */
typedef kcg_int MLRI__V_RELEASEDP;

/* V_RELEASEOL */
typedef kcg_int MLRI__V_RELEASEOL;

/* V_REVERSE */
typedef kcg_int MLRI__V_REVERSE;

/* V_STATIC */
typedef kcg_int MLRI__V_STATIC;

/* V_TRAIN */
typedef kcg_int MLRI__V_TRAIN;

/* V_TSR */
typedef kcg_int MLRI__V_TSR;

/* X_TEXT */
typedef kcg_int MLRI__X_TEXT;

/* Obu_BasicTypes_Pkg::L_internal_Type */
typedef kcg_int MLRI__L_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::Location_T */
typedef MLRI__L_internal_Type_Obu_BasicTypes_Pkg MLRI__Location_T_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::T_internal_Type */
typedef kcg_int MLRI__T_internal_Type_Obu_BasicTypes_Pkg;

/* ProvidePositionReport_Pkg::SystemTime_T */
typedef MLRI__T_internal_Type_Obu_BasicTypes_Pkg MLRI__SystemTime_T_ProvidePositionReport_Pkg;

/* Obu_BasicTypes_Pkg::V_internal_Type */
typedef kcg_int MLRI__V_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::Speed_T */
typedef MLRI__V_internal_Type_Obu_BasicTypes_Pkg MLRI__Speed_T_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::G_internal_Type */
typedef kcg_int MLRI__G_internal_Type_Obu_BasicTypes_Pkg;

/* Obu_BasicTypes_Pkg::A_internal_Type */
typedef kcg_int MLRI__A_internal_Type_Obu_BasicTypes_Pkg;

/* TIU_Types_Pkg::Passenger_door_control_info_T */
typedef kcg_int MLRI__Passenger_door_control_info_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::NID_ctraction_T */
typedef kcg_int MLRI__NID_ctraction_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::M_train_data_info_T */
typedef kcg_int MLRI__M_train_data_info_T_TIU_Types_Pkg;

typedef struct {
  MLRI__D_LOC d_loc;
  MLRI__Q_LGTLOC q_lgtloc;
} MLRI__struct__21201;

/* ProvidePositionReport_Pkg::IterPacket58_T */
typedef MLRI__struct__21201 MLRI__IterPacket58_T_ProvidePositionReport_Pkg;

typedef MLRI__IterPacket58_T_ProvidePositionReport_Pkg MLRI__array__21206[2];

/* ProvidePositionReport_Pkg::IterPacket58List_T */
typedef MLRI__array__21206 MLRI__IterPacket58List_T_ProvidePositionReport_Pkg;

typedef struct {
  MLRI__NID_PACKET nid_packet;
  MLRI__Q_DIR q_dir;
  MLRI__L_PACKET l_packet;
  MLRI__Q_SCALE q_scale;
  MLRI__T_CYCLOC t_cycloc;
  MLRI__D_CYCLOC d_cycloc;
  MLRI__M_LOC m_loc;
  MLRI__N_ITER n_iter;
  MLRI__IterPacket58List_T_ProvidePositionReport_Pkg iterPacket58List;
} MLRI__struct__21209;

/* ProvidePositionReport_Pkg::Packet58_T */
typedef MLRI__struct__21209 MLRI__Packet58_T_ProvidePositionReport_Pkg;

typedef struct {
  kcg_bool present;
  MLRI__NID_BG nidBG;
  MLRI__Location_T_Obu_BasicTypes_Pkg bgLocation;
  MLRI__Packet58_T_ProvidePositionReport_Pkg packet58;
} MLRI__struct__21221;

/* ProvidePositionReport_Pkg::PositionReportParameter_T */
typedef MLRI__struct__21221 MLRI__PositionReportParameter_T_ProvidePositionReport_Pkg;

typedef struct { kcg_bool newSessionEstablished; } MLRI__struct__21228;

/* ProvidePositionReport_Pkg::RBC_Communication_T */
typedef MLRI__struct__21228 MLRI__RBC_Communication_T_ProvidePositionReport_Pkg;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int L_PACKET;
  kcg_int NID_OPERATIONAL;
} MLRI__struct__21232;

/* TrainToTrack::Train_running_number */
typedef MLRI__struct__21232 MLRI__Train_running_number_TrainToTrack;

typedef struct {
  kcg_bool valid;
  MLRI__Train_running_number_TrainToTrack packet5;
} MLRI__struct__21238;

/* ProvidePositionReport_Pkg::Packet5_T */
typedef MLRI__struct__21238 MLRI__Packet5_T_ProvidePositionReport_Pkg;

typedef struct {
  MLRI__NID_MESSAGE nid_message;
  MLRI__L_MESSAGE l_message;
  MLRI__T_TRAIN t_train;
  MLRI__NID_ENGINE nid_engine;
} MLRI__struct__21243;

/* ProvidePositionReport_Pkg::PositionReportHeader_T */
typedef MLRI__struct__21243 MLRI__PositionReportHeader_T_ProvidePositionReport_Pkg;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int L_PACKET;
  MLRI__M_ERROR error;
} MLRI__struct__21250;

/* TrainToTrack::Error_reporting */
typedef MLRI__struct__21250 MLRI__Error_reporting_TrainToTrack;

typedef struct {
  kcg_bool valid;
  MLRI__Error_reporting_TrainToTrack packet4;
} MLRI__struct__21256;

/* ProvidePositionReport_Pkg::Packet4_T */
typedef MLRI__struct__21256 MLRI__Packet4_T_ProvidePositionReport_Pkg;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int L_PACKET;
  MLRI__Q_SCALE qscale;
  kcg_int NID_LRBG;
  kcg_int D_LRBG;
  MLRI__Q_DIRLRBG dirlrbg;
  MLRI__Q_DLRBG dlrbg;
  kcg_int L_DOUBTOVER;
  kcg_int L_DOUBTUNDER;
  MLRI__Q_LENGTH length;
  kcg_int L_TRAININT;
  kcg_int V_TRAIN;
  MLRI__Q_DIRTRAIN dirtrain;
  MLRI__M_MODE mode;
  MLRI__M_LEVEL level;
  kcg_int NID_NTC;
} MLRI__struct__21261;

/* TrainToTrack::Position_Report */
typedef MLRI__struct__21261 MLRI__Position_Report_TrainToTrack;

typedef struct {
  kcg_bool valid;
  MLRI__Position_Report_TrainToTrack packet0;
} MLRI__struct__21280;

/* ProvidePositionReport_Pkg::Packet0_T */
typedef MLRI__struct__21280 MLRI__Packet0_T_ProvidePositionReport_Pkg;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int L_PACKET;
  MLRI__Q_SCALE qscale;
  kcg_int NID_LRBG;
  kcg_int NID_PRVLRBG;
  kcg_int D_LRBG;
  MLRI__Q_DIRLRBG dirlrbg;
  MLRI__Q_DLRBG dlrbg;
  kcg_int L_DOUBTOVER;
  kcg_int L_DOUBTUNDER;
  MLRI__Q_LENGTH length;
  kcg_int L_TRAININT;
  kcg_int V_TRAIN;
  MLRI__Q_DIRTRAIN dirtrain;
  MLRI__M_MODE mode;
  MLRI__M_LEVEL level;
  kcg_int NID_NTC;
} MLRI__struct__21285;

/* TrainToTrack::Position_Report_based_on_two_balise_groups */
typedef MLRI__struct__21285 MLRI__Position_Report_based_on_two_balise_groups_TrainToTrack;

typedef struct {
  kcg_bool valid;
  MLRI__Position_Report_based_on_two_balise_groups_TrainToTrack packet1;
} MLRI__struct__21305;

/* ProvidePositionReport_Pkg::Packet1_T */
typedef MLRI__struct__21305 MLRI__Packet1_T_ProvidePositionReport_Pkg;

typedef struct {
  kcg_bool valid;
  MLRI__PositionReportHeader_T_ProvidePositionReport_Pkg header;
  MLRI__Packet0_T_ProvidePositionReport_Pkg packet0;
  MLRI__Packet1_T_ProvidePositionReport_Pkg packet1;
  MLRI__Packet4_T_ProvidePositionReport_Pkg packet4;
  MLRI__Packet5_T_ProvidePositionReport_Pkg packet5;
} MLRI__struct__21310;

/* ProvidePositionReport_Pkg::PositionReport_T */
typedef MLRI__struct__21310 MLRI__PositionReport_T_ProvidePositionReport_Pkg;

typedef struct {
  kcg_bool minSafeRearEndPassed;
  kcg_bool maxSafeFrontEndPassed;
  kcg_bool levelTransitionBorderPassed;
} MLRI__struct__21319;

/* ProvidePositionReport_Pkg::LocationBasedEvents_T */
typedef MLRI__struct__21319 MLRI__LocationBasedEvents_T_ProvidePositionReport_Pkg;

typedef struct {
  kcg_int nominal;
  kcg_int d_min;
  kcg_int d_max;
} MLRI__struct__21325;

/* Obu_BasicTypes_Pkg::LocWithInAcc_T */
typedef MLRI__struct__21325 MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int nid_LRBG;
  MLRI__Q_DIR q_dir;
  MLRI__Q_SCALE q_scale;
  kcg_int d_link;
  MLRI__Q_NEWCOUNTRY q_newcountry;
  kcg_int nid_c;
  kcg_int nid_bg;
  MLRI__Q_LINKORIENTATION q_linkorientation;
  MLRI__Q_LINKREACTION q_linkreaction;
  kcg_int q_locacc;
} MLRI__struct__21331;

/* BG_Types_Pkg::LinkedBG_T */
typedef MLRI__struct__21331 MLRI__LinkedBG_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int nid_bg_fromLinkingBG;
  kcg_int nid_c_fromLinkingBG;
  MLRI__struct__21325 expectedLocation;
  MLRI__struct__21325 d_link;
  MLRI__struct__21331 linkingInfo;
} MLRI__struct__21345;

/* TrainPosition_Types_Pck::infoFromLinking_T */
typedef MLRI__struct__21345 MLRI__infoFromLinking_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_int o_nominal;
  kcg_int o_min;
  kcg_int o_max;
} MLRI__struct__21354;

/* Obu_BasicTypes_Pkg::OdometryLocations_T */
typedef MLRI__struct__21354 MLRI__OdometryLocations_T_Obu_BasicTypes_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int timestamp;
  MLRI__struct__21354 odo;
  kcg_int speed;
  kcg_int acceleration;
  MLRI__odoMotionState_T_Obu_BasicTypes_Pkg motionState;
  MLRI__odoMotionDirection_T_Obu_BasicTypes_Pkg motionDirection;
} MLRI__struct__21360;

/* Obu_BasicTypes_Pkg::odometry_T */
typedef MLRI__struct__21360 MLRI__odometry_T_Obu_BasicTypes_Pkg;

typedef MLRI__struct__21331 MLRI__array__21370[4];

/* BG_Types_Pkg::LinkedBGs_T */
typedef MLRI__array__21370 MLRI__LinkedBGs_T_BG_Types_Pkg;

typedef struct {
  MLRI__Q_UPDOWN q_updown;
  MLRI__M_VERSION m_version;
  MLRI__Q_MEDIA q_media;
  MLRI__N_TOTAL n_total;
  kcg_int m_mcount;
  kcg_int nid_c;
  kcg_int nid_bg;
  MLRI__Q_LINK q_link;
} MLRI__struct__21373;

/* BG_Types_Pkg::BG_Header_T */
typedef MLRI__struct__21373 MLRI__BG_Header_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MLRI__struct__21360 bgPosition;
  MLRI__struct__21325 BG_centerDetectionInaccuraccuracies;
  kcg_int q_nvlocacc;
  MLRI__struct__21373 BG_Header;
  MLRI__array__21370 linkedBGs;
  kcg_bool noCoordinateSystemHasBeenAssigned;
  MLRI__Q_DIRLRBG trainOrientationToBG;
  MLRI__Q_DIRTRAIN trainRunningDirectionToBG;
} MLRI__struct__21384;

/* BG_Types_Pkg::passedBG_T */
typedef MLRI__struct__21384 MLRI__passedBG_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_int nid_c;
  kcg_int nid_bg;
  MLRI__Q_LINK q_link;
  MLRI__struct__21325 location;
  kcg_int seqNoOnTrack;
  MLRI__struct__21345 infoFromLinking;
  MLRI__struct__21384 infoFromPassing;
} MLRI__struct__21396;

/* TrainPosition_Types_Pck::positionedBG_T */
typedef MLRI__struct__21396 MLRI__positionedBG_T_TrainPosition_Types_Pck;

typedef MLRI__positionedBG_T_TrainPosition_Types_Pck MLRI__array__21407[8];

/* TrainPosition_Types_Pck::positionedBGs_T */
typedef MLRI__array__21407 MLRI__positionedBGs_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool valid;
  MLRI__T_internal_Type_Obu_BasicTypes_Pkg timestamp;
  kcg_bool trainPositionIsUnknown;
  kcg_bool noCoordinateSystemHasBeenAssigned;
  MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg trainPosition;
  MLRI__Location_T_Obu_BasicTypes_Pkg estimatedFrontEndPosition;
  MLRI__Location_T_Obu_BasicTypes_Pkg minSafeFrontEndPosition;
  MLRI__Location_T_Obu_BasicTypes_Pkg maxSafeFrontEndPostion;
  MLRI__positionedBG_T_TrainPosition_Types_Pck LRBG;
  MLRI__positionedBG_T_TrainPosition_Types_Pck prvLRBG;
  MLRI__Q_DLRBG nominalOrReverseToLRBG;
  MLRI__Q_DIRLRBG trainOrientationToLRBG;
  MLRI__Q_DIRTRAIN trainRunningDirectionToLRBG;
  kcg_bool linkingIsUsedOnboard;
} MLRI__struct__21410;

/* TrainPosition_Types_Pck::trainPosition_T */
typedef MLRI__struct__21410 MLRI__trainPosition_T_TrainPosition_Types_Pck;

typedef struct { kcg_bool present; MLRI__M_LOC m_loc; } MLRI__struct__21427;

/* ProvidePositionReport_Pkg::PresentxMLOC_T */
typedef MLRI__struct__21427 MLRI__PresentxMLOC_T_ProvidePositionReport_Pkg;

typedef struct {
  MLRI__M_MODE m_mode;
  MLRI__M_LEVEL m_level;
  MLRI__M_LEVELTR m_leveltr;
  MLRI__NID_NTC nid_ntc;
  MLRI__Q_LENGTH q_length;
} MLRI__struct__21432;

/* BG_Types_Pkg::TrainToTrackStatus_T */
typedef MLRI__struct__21432 MLRI__TrainToTrackStatus_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MLRI__T_internal_Type_Obu_BasicTypes_Pkg timestamp;
  MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg trainPosition;
  MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg trainPositionDerivedFromLastLinkedBG;
  MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg trainPositionDerivedFromLastUnlinkedBG;
  MLRI__positionedBG_T_TrainPosition_Types_Pck lastPassedLinkedBG;
  MLRI__positionedBG_T_TrainPosition_Types_Pck lastPassedUnlinkedBG;
  MLRI__Speed_T_Obu_BasicTypes_Pkg speed;
} MLRI__struct__21440;

/* TrainPosition_Types_Pck::trainPositionInfo_T */
typedef MLRI__struct__21440 MLRI__trainPositionInfo_T_TrainPosition_Types_Pck;

typedef struct {
  MLRI__NID_ENGINE nid_engine;
  MLRI__NID_OPERATIONAL nid_operational;
  MLRI__L_TRAIN l_train;
  MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg d_baliseAntenna_2_frontend;
  MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg d_frontend_2_rearend;
  MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg locationAccuracy_DefaultValue;
  MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg centerDetectionAcc_DefaultValue;
} MLRI__struct__21451;

/* TrainPosition_Types_Pck::trainProperties_T */
typedef MLRI__struct__21451 MLRI__trainProperties_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool present;
  MLRI__M_ERROR errorType;
} MLRI__struct__21461;

/* ProvidePositionReport_Pkg::ErrorMessage_T */
typedef MLRI__struct__21461 MLRI__ErrorMessage_T_ProvidePositionReport_Pkg;

typedef struct {
  kcg_int index;
  kcg_int noOfFoundBGs;
  kcg_bool BGFound;
} MLRI__struct__21466;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::BG_find_T */
typedef MLRI__struct__21466 MLRI__BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

typedef struct {
  kcg_int unlinkedBGsCount;
  kcg_int linkedBGsCount;
  kcg_int totalBGsCount;
  kcg_int passedUnlinkedBGsCount;
  kcg_int passedLinkedBGsCount;
  kcg_int passedTotalBGsCount;
} MLRI__struct__21472;

/* CalculateTrainPosition_Pkg::BG_utilities_Pkg::BG_counters_T */
typedef MLRI__struct__21472 MLRI__BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg;

typedef MLRI__positionedBG_T_TrainPosition_Types_Pck MLRI__array__21481[4];

/* TrainPosition_Types_Pck::linkedBGs_asPositionedBGs_T */
typedef MLRI__array__21481 MLRI__linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck;

typedef struct {
  MLRI__positionedBGs_T_TrainPosition_Types_Pck BGs;
  kcg_bool overrun;
} MLRI__struct__21484;

/* CalculateTrainPosition_Pkg::positionedBGs_w_overrun_T */
typedef MLRI__struct__21484 MLRI__positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg;

typedef struct {
  kcg_int previousLinkedBG_idx;
  kcg_int currentIndex;
  kcg_int subsequentLinkedBG_idx;
} MLRI__struct__21489;

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::linkedBG_index_T */
typedef MLRI__struct__21489 MLRI__linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

typedef MLRI__linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg MLRI__array__21495[8];

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::linkedBGs_indices_T */
typedef MLRI__array__21495 MLRI__linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

typedef struct {
  MLRI__positionedBG_T_TrainPosition_Types_Pck refBG;
  MLRI__positionedBG_T_TrainPosition_Types_Pck prevLinkedBG;
  MLRI__positionedBG_T_TrainPosition_Types_Pck prevUnlinkedBG;
  kcg_bool recalculate;
  MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg sumOfBestDistances;
} MLRI__struct__21498;

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::refBGs_T */
typedef MLRI__struct__21498 MLRI__refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

typedef struct {
  kcg_bool outOfMemSpace;
  kcg_bool passedBG_notFoundWhereExpected;
  kcg_bool positionCalculation_inconsistent;
  kcg_bool BG_LinkingConsistencyError;
  kcg_bool DoubleLinkingError;
  kcg_bool DoubleRepositioningError;
} MLRI__struct__21506;

/* TrainPosition_Types_Pck::positionErrors_T */
typedef MLRI__struct__21506 MLRI__positionErrors_T_TrainPosition_Types_Pck;

typedef struct {
  kcg_bool validData;
  kcg_bool RecExit;
  MLRI__cabActiveStatus_T_TIU_Types_Pkg cabActiveStatus;
} MLRI__struct__21515;

/* TIU_Types_Pkg::trainData_T */
typedef MLRI__struct__21515 MLRI__trainData_T_TIU_Types_Pkg;

typedef struct {
  MLRI__LinkedBGs_T_BG_Types_Pkg listLinking;
} MLRI__struct__21521;

/* API_Msg_Pkg::API_addInfo_T */
typedef MLRI__struct__21521 MLRI__API_addInfo_T_API_Msg_Pkg;

typedef struct {
  MLRI__odometry_T_Obu_BasicTypes_Pkg odometerOfBaliseDetection;
  MLRI__LocWithInAcc_T_Obu_BasicTypes_Pkg BG_centerDetectionInaccuraccuracies;
} MLRI__struct__21525;

/* BG_Types_Pkg::centerOfBalisePosition_T */
typedef MLRI__struct__21525 MLRI__centerOfBalisePosition_T_BG_Types_Pkg;

typedef struct {
  MLRI__Q_UPDOWN q_updown;
  MLRI__M_VERSION m_version;
  MLRI__Q_MEDIA q_media;
  MLRI__N_PIG n_pig;
  MLRI__N_TOTAL n_total;
  MLRI__M_DUP m_dup;
  MLRI__M_MCOUNT m_mcount;
  MLRI__NID_C nid_c;
  MLRI__NID_BG nid_bg;
  MLRI__Q_LINK q_link;
} MLRI__struct__21530;

/* BG_Types_Pkg::TelegramHeader_T */
typedef MLRI__struct__21530 MLRI__TelegramHeader_T_BG_Types_Pkg;

typedef struct {
  kcg_bool present;
  kcg_bool checkResult;
  kcg_bool api_bad_balise_received;
  MLRI__TelegramHeader_T_BG_Types_Pkg api_header;
  MLRI__API_addInfo_T_API_Msg_Pkg api_packets;
  MLRI__centerOfBalisePosition_T_BG_Types_Pkg centerOfBalisePosition;
} MLRI__struct__21543;

/* API_Msg_Pkg::API_Telegram_T */
typedef MLRI__struct__21543 MLRI__API_Telegram_T_API_Msg_Pkg;

typedef struct {
  MLRI__LinkedBGs_T_BG_Types_Pkg linkingPackets;
} MLRI__struct__21552;

/* BG_Types_Pkg::AdditionalInformation_T */
typedef MLRI__struct__21552 MLRI__AdditionalInformation_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool checkResult;
  MLRI__TelegramHeader_T_BG_Types_Pkg telegramheader;
  MLRI__AdditionalInformation_T_BG_Types_Pkg packets;
} MLRI__struct__21556;

/* BG_Types_Pkg::Telegram_T */
typedef MLRI__struct__21556 MLRI__Telegram_T_BG_Types_Pkg;

typedef MLRI__Telegram_T_BG_Types_Pkg MLRI__array__21563[8];

/* BG_Types_Pkg::TelegramArray_T */
typedef MLRI__array__21563 MLRI__TelegramArray_T_BG_Types_Pkg;

typedef struct {
  kcg_bool present;
  MLRI__TelegramArray_T_BG_Types_Pkg Telegrams;
  kcg_int numberBalises;
  MLRI__centerOfBalisePosition_T_BG_Types_Pkg centerOfBalisePosition;
} MLRI__struct__21566;

/* BG_Types_Pkg::BG_Message_T */
typedef MLRI__struct__21566 MLRI__BG_Message_T_BG_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MLRI__Telegram_T_BG_Types_Pkg telegram;
  MLRI__centerOfBalisePosition_T_BG_Types_Pkg position;
} MLRI__struct__21573;

/* BuildBGMessage_Pkg::TelegramStore_T */
typedef MLRI__struct__21573 MLRI__TelegramStore_T_BuildBGMessage_Pkg;

typedef struct {
  kcg_bool badBaliseFlag;
  kcg_bool BGMessageSent;
  MLRI__NID_C C_ID;
  MLRI__NID_BG BG_ID;
  MLRI__centerOfBalisePosition_T_BG_Types_Pkg balisePosition;
  MLRI__centerOfBalisePosition_T_BG_Types_Pkg positionFirstContact;
  kcg_int collectedTelegrams;
  kcg_int totalTelegrams;
} MLRI__struct__21579;

/* BuildBGMessage_Pkg::BGCollector_T */
typedef MLRI__struct__21579 MLRI__BGCollector_T_BuildBGMessage_Pkg;

typedef struct {
  kcg_bool valid;
  kcg_bool M_ERROR_Balise_group_linking_consistency_error;
  kcg_bool M_ERROR_Linked_balise_group_message_consistency_error;
  kcg_bool M_ERROR_Unlinked_balise_group_message_consistency_error;
  kcg_bool M_ERROR_Radio_message_consistency_error;
  kcg_bool M_ERROR_Radio_sequence_error;
  kcg_bool M_ERROR_Radio_safe_radio_connection_error;
  kcg_bool M_ERROR_Safety_critical_failure;
  kcg_bool M_ERROR_Double_linking_error;
  kcg_bool M_ERROR_Double_repositioning_error;
} MLRI__struct__21590;

/* ProvidePositionReport_Pkg::M_Error_T */
typedef MLRI__struct__21590 MLRI__M_Error_T_ProvidePositionReport_Pkg;

typedef struct { kcg_bool valid; MLRI__M_ERROR errorType; } MLRI__struct__21603;

/* ProvidePositionReport_Pkg::MemorizedErrorMsg_T */
typedef MLRI__struct__21603 MLRI__MemorizedErrorMsg_T_ProvidePositionReport_Pkg;

typedef struct {
  MLRI__positionedBG_T_TrainPosition_Types_Pck prevLinkedBG;
  MLRI__positionedBG_T_TrainPosition_Types_Pck unlinkedBG;
  kcg_int indexOfUnlinkedBG;
} MLRI__struct__21608;

/* CalculateTrainPosition_Pkg::BG_relocation_Pkg::BGs_forImprovement_T */
typedef MLRI__struct__21608 MLRI__BGs_forImprovement_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg;

typedef struct { kcg_int now; kcg_int distance; } MLRI__struct__21614;

/* TIU_Types_Pkg::D_test_distance_T */
typedef MLRI__struct__21614 MLRI__D_test_distance_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::L_test_trackcond_T */
typedef MLRI__D_test_distance_T_TIU_Types_Pkg MLRI__L_test_trackcond_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::D_test_traction_T */
typedef MLRI__D_test_distance_T_TIU_Types_Pkg MLRI__D_test_traction_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::D_test_trackinit_T */
typedef MLRI__D_test_distance_T_TIU_Types_Pkg MLRI__D_test_trackinit_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::D_test_trackcond_T */
typedef MLRI__D_test_distance_T_TIU_Types_Pkg MLRI__D_test_trackcond_T_TIU_Types_Pkg;

/* TIU_Types_Pkg::D_test_current_T */
typedef MLRI__D_test_distance_T_TIU_Types_Pkg MLRI__D_test_current_T_TIU_Types_Pkg;

typedef struct {
  MLRI__D_test_trackcond_T_TIU_Types_Pkg d_test_trackcond;
  MLRI__L_test_trackcond_T_TIU_Types_Pkg l_test_trackcond;
  MLRI__M_trackcond_T_TIU_Types_Pkg m_trackcond;
} MLRI__struct__21619;

/* TIU_Types_Pkg::nothing_to_resume_profile_follow_T */
typedef MLRI__struct__21619 MLRI__nothing_to_resume_profile_follow_T_TIU_Types_Pkg;

typedef MLRI__nothing_to_resume_profile_follow_T_TIU_Types_Pkg MLRI__array__21625[32];

/* TIU_Types_Pkg::A_nothing_to_resume_profile_follow_T */
typedef MLRI__array__21625 MLRI__A_nothing_to_resume_profile_follow_T_TIU_Types_Pkg;

typedef struct {
  MLRI__M10_brake_signal_command_T_TIU_Types_Pkg m_servicebrake_cm;
  MLRI__M10_brake_signal_command_T_TIU_Types_Pkg m_emergencybrake_cm;
} MLRI__struct__21628;

/* TIU_Types_Pkg::Brake_command_T */
typedef MLRI__struct__21628 MLRI__Brake_command_T_TIU_Types_Pkg;

typedef struct {
  MLRI__M11_brake_inhibit_command_T_TIU_Types_Pkg m_regenerativebrake_cm;
  MLRI__M12_eddy_current_brake_inhibition_T_TIU_Types_Pkg m_eddycurrentbrake_cm;
  MLRI__M11_brake_inhibit_command_T_TIU_Types_Pkg m_magneticshoebrake_cm;
} MLRI__struct__21633;

/* TIU_Types_Pkg::Brake_inhibition_command_T */
typedef MLRI__struct__21633 MLRI__Brake_inhibition_command_T_TIU_Types_Pkg;

typedef struct {
  MLRI__M09_brake_status_T_TIU_Types_Pkg m_regenerativebrake_st;
  MLRI__M09_brake_status_T_TIU_Types_Pkg m_eddycurrentbrake_st;
  MLRI__M09_brake_status_T_TIU_Types_Pkg m_magneticshoebrake_st;
  MLRI__M09_brake_status_T_TIU_Types_Pkg m_electropneumaticbrake_st;
  MLRI__M09_brake_status_T_TIU_Types_Pkg m_additionalbrake_st;
} MLRI__struct__21639;

/* TIU_Types_Pkg::Brake_status_T */
typedef MLRI__struct__21639 MLRI__Brake_status_T_TIU_Types_Pkg;

typedef struct {
  kcg_bool no_restriction;
  kcg_int restriction;
} MLRI__struct__21647;

/* TIU_Types_Pkg::M_current_T */
typedef MLRI__struct__21647 MLRI__M_current_T_TIU_Types_Pkg;

typedef struct {
  MLRI__D_test_current_T_TIU_Types_Pkg d_test_current;
  MLRI__M_current_T_TIU_Types_Pkg m_current;
} MLRI__struct__21652;

/* TIU_Types_Pkg::Change_of_allowed_current_consumption_T */
typedef MLRI__struct__21652 MLRI__Change_of_allowed_current_consumption_T_TIU_Types_Pkg;

typedef struct {
  MLRI__M_voltage_types_T_TIU_Types_Pkg voltage_type;
  MLRI__NID_ctraction_T_TIU_Types_Pkg NID_ctraction;
} MLRI__struct__21657;

/* TIU_Types_Pkg::M_voltage_T */
typedef MLRI__struct__21657 MLRI__M_voltage_T_TIU_Types_Pkg;

typedef struct {
  MLRI__D_test_traction_T_TIU_Types_Pkg d_test_traction;
  MLRI__M_voltage_T_TIU_Types_Pkg m_voltage;
} MLRI__struct__21662;

/* TIU_Types_Pkg::M_change_traction_system_T */
typedef MLRI__struct__21662 MLRI__M_change_traction_system_T_TIU_Types_Pkg;

typedef struct {
  MLRI__M14_pantograph_command_T_TIU_Types_Pkg m_pantograph_cm;
  MLRI__M15_airtightness_command_T_TIU_Types_Pkg m_airtightness_cm;
  MLRI__M16_mainpowerswitch_command_T_TIU_Types_Pkg m_mainpowerswitch_cm;
  MLRI__M17_traction_cutoff_command_T_TIU_Types_Pkg m_traction_cutoff_cm;
} MLRI__struct__21667;

/* TIU_Types_Pkg::Type_I_train_commands_T */
typedef MLRI__struct__21667 MLRI__Type_I_train_commands_T_TIU_Types_Pkg;

typedef struct {
  MLRI__M08_Isolation_status_T_TIU_Types_Pkg isolation_status;
  MLRI__Brake_command_T_TIU_Types_Pkg brake_command;
  MLRI__Brake_inhibition_command_T_TIU_Types_Pkg brake_inhibition;
  MLRI__Type_I_train_commands_T_TIU_Types_Pkg type_I_train_commands;
  MLRI__M_change_traction_system_T_TIU_Types_Pkg change_traction_system;
  MLRI__Passenger_door_control_info_T_TIU_Types_Pkg passenger_door_control_info;
  MLRI__Change_of_allowed_current_consumption_T_TIU_Types_Pkg change_of_allowed_current_consumption;
} MLRI__struct__21674;

/* TIU_Types_Pkg::Message_EVC_to_Train_Interface_T */
typedef MLRI__struct__21674 MLRI__Message_EVC_to_Train_Interface_T_TIU_Types_Pkg;

typedef struct {
  MLRI__M01_sleeping_signal_status_T_TIU_Types_Pkg m_sleeping_st;
  MLRI__M02_passiveshunting_signal_status_T_TIU_Types_Pkg m_passiveshunting_st;
  MLRI__M03_nonleading_signal_status_T_TIU_Types_Pkg m_nonleading_st;
  MLRI__M04_cab_signal_status_T_TIU_Types_Pkg m_cab_st;
  MLRI__M05_directioncontroller_signal_status_T_TIU_Types_Pkg m_directioncontroller_st;
  MLRI__M06_trainintegrity_signal_status_T_TIU_Types_Pkg m_trainintegrity_st;
  MLRI__M07_traction_signal_status_T_TIU_Types_Pkg m_traction_st;
} MLRI__struct__21684;

/* TIU_Types_Pkg::Mode_control_and_train_status_T */
typedef MLRI__struct__21684 MLRI__Mode_control_and_train_status_T_TIU_Types_Pkg;

typedef struct { kcg_bool valid; kcg_int pressure; } MLRI__struct__21694;

/* TIU_Types_Pkg::P01_brake_pressure_value_T */
typedef MLRI__struct__21694 MLRI__P01_brake_pressure_value_T_TIU_Types_Pkg;

typedef struct {
  MLRI__nothing_to_resume_profile_follow_T_TIU_Types_Pkg nothing_to_resume_profile_follow;
  MLRI__D_test_trackinit_T_TIU_Types_Pkg empty_profile_initial_state_to_be_resumed;
} MLRI__struct__21699;

/* TIU_Types_Pkg::Type_I_train_and_brake_inhibition_with_distance_commands_T */
typedef MLRI__struct__21699 MLRI__Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg;

typedef struct {
  MLRI__Mode_control_and_train_status_T_TIU_Types_Pkg train_status;
  MLRI__Brake_status_T_TIU_Types_Pkg brake_status;
  MLRI__P01_brake_pressure_value_T_TIU_Types_Pkg brake_pressure;
  MLRI__M13_train_data_entry_type_T_TIU_Types_Pkg train_data_entry_type;
  MLRI__M_train_data_info_T_TIU_Types_Pkg train_data_info;
  MLRI__Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg type_I_train_and_brake_inhibition;
} MLRI__struct__21704;

/* TIU_Types_Pkg::Message_Train_Interface_to_EVC_T */
typedef MLRI__struct__21704 MLRI__Message_Train_Interface_to_EVC_T_TIU_Types_Pkg;

typedef struct {
  kcg_int nIter;
  MLRI__A_nothing_to_resume_profile_follow_T_TIU_Types_Pkg value;
} MLRI__struct__21713;

/* TIU_Types_Pkg::S_nothing_to_resume_profile_follow_T */
typedef MLRI__struct__21713 MLRI__S_nothing_to_resume_profile_follow_T_TIU_Types_Pkg;

typedef struct {
  MLRI__NID_MESSAGE nid_message;
  MLRI__T_TRAIN t_train;
  MLRI__M_ACK m_ack;
  MLRI__NID_LRBG nid_lrbg;
  MLRI__Q_SCALE q_scale;
  MLRI__D_SR d_sr;
  MLRI__T_TRAIN t_sh_rqst;
  MLRI__D_REF d_ref;
} MLRI__struct__21718;

/* Radio_Types_Pkg::Radio_TrackTrain_Header_T */
typedef MLRI__struct__21718 MLRI__Radio_TrackTrain_Header_T_Radio_Types_Pkg;

typedef struct {
  MLRI__MsgSource_T_Common_Types_Pkg source;
  MLRI__BG_Header_T_BG_Types_Pkg BG_Common_Header;
  MLRI__Radio_TrackTrain_Header_T_Radio_Types_Pkg Radio_Common_Header;
} MLRI__struct__21729;

/* Common_Types_Pkg::ReceivedMessage_T */
typedef MLRI__struct__21729 MLRI__ReceivedMessage_T_Common_Types_Pkg;

typedef struct { kcg_bool valid; MLRI__X_TEXT x_text; } MLRI__struct__21735;

/* Packet_Types_Pkg::xText_T */
typedef MLRI__struct__21735 MLRI__xText_T_Packet_Types_Pkg;

typedef MLRI__xText_T_Packet_Types_Pkg MLRI__array__21740[255];

/* Packet_Types_Pkg::xTextArray_T */
typedef MLRI__array__21740 MLRI__xTextArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MLRI__V_NVKVINT v_nvkvint;
  MLRI__M_NVKVINT m_nvkvint12;
  MLRI__M_NVKVINT m_nvkvint23;
} MLRI__struct__21743;

/* Packet_Types_Pkg::nvkvint_T */
typedef MLRI__struct__21743 MLRI__nvkvint_T_Packet_Types_Pkg;

typedef MLRI__nvkvint_T_Packet_Types_Pkg MLRI__array__21750[31];

/* Packet_Types_Pkg::nvkvintArray_T */
typedef MLRI__array__21750 MLRI__nvkvintArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MLRI__Q_DIR q_dir;
  MLRI__Q_SCALE q_scale;
  MLRI__D_MAMODE d_mamode;
  MLRI__M_MAMODE m_mamode;
  MLRI__V_MAMODE v_mamode;
  MLRI__L_MAMODE l_mamode;
  MLRI__L_ACKMAMODE l_ackmamode;
  MLRI__Q_MAMODE q_mamode;
} MLRI__struct__21753;

/* Packet_Types_Pkg::P80_ModeProfile_T */
typedef MLRI__struct__21753 MLRI__P80_ModeProfile_T_Packet_Types_Pkg;

typedef MLRI__P80_ModeProfile_T_Packet_Types_Pkg MLRI__array__21765[31];

/* Packet_Types_Pkg::P80_ModeProfiles_T */
typedef MLRI__array__21765 MLRI__P80_ModeProfiles_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MLRI__Q_DIR q_dir;
  MLRI__Q_SCALE q_scale;
  MLRI__Q_NEWCOUNTRY q_newcountry;
  MLRI__NID_C nid_c;
  MLRI__NID_BG nid_bg;
  MLRI__D_POSOFF d_posoff;
  MLRI__Q_MPOSITION q_mposition;
  MLRI__M_POSITION m_position;
} MLRI__struct__21768;

/* Packet_Types_Pkg::P79_GeographicalPositionInformation_T */
typedef MLRI__struct__21768 MLRI__P79_GeographicalPositionInformation_T_Packet_Types_Pkg;

typedef MLRI__P79_GeographicalPositionInformation_T_Packet_Types_Pkg MLRI__array__21780[31];

/* Packet_Types_Pkg::P79_GeographicalPositionInformations_T */
typedef MLRI__array__21780 MLRI__P79_GeographicalPositionInformations_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MLRI__Q_DIR q_dir;
  MLRI__Q_SCALE q_scale;
  MLRI__Q_TRACKINIT q_trackinit;
  MLRI__D_TRACKINIT d_trackinit;
  MLRI__D_SUITABILITY d_suitability;
  MLRI__Q_SUITABILITY q_suitability;
  MLRI__M_LINEGAUGE m_linegauge;
  MLRI__M_AXLELOADCAT m_axleloadcat;
  MLRI__M_VOLTAGE m_voltage;
  MLRI__NID_CTRACTION nid_ctraction;
} MLRI__struct__21783;

/* Packet_Types_Pkg::P70_RouteSuitabilityData_T */
typedef MLRI__struct__21783 MLRI__P70_RouteSuitabilityData_T_Packet_Types_Pkg;

typedef MLRI__P70_RouteSuitabilityData_T_Packet_Types_Pkg MLRI__array__21797[31];

/* Packet_Types_Pkg::P70_RouteSuitabilityDatas_T */
typedef MLRI__array__21797 MLRI__P70_RouteSuitabilityDatas_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MLRI__Q_DIR q_dir;
  MLRI__Q_SCALE q_scale;
  MLRI__Q_TRACKINIT q_trackinit;
  MLRI__D_TRACKINIT d_trackinit;
  MLRI__D_TRACKCOND d_trackcond;
  MLRI__L_TRACKCOND l_trackcond;
  MLRI__M_PLATFORM m_platform;
  MLRI__Q_PLATFORM q_platform;
} MLRI__struct__21800;

/* Packet_Types_Pkg::P69_TrackConditionStationPlatform_T */
typedef MLRI__struct__21800 MLRI__P69_TrackConditionStationPlatform_T_Packet_Types_Pkg;

typedef MLRI__P69_TrackConditionStationPlatform_T_Packet_Types_Pkg MLRI__array__21812[31];

/* Packet_Types_Pkg::P69_TrackConditionStationPlatforms_T */
typedef MLRI__array__21812 MLRI__P69_TrackConditionStationPlatforms_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MLRI__Q_DIR q_dir;
  MLRI__Q_SCALE q_scale;
  MLRI__Q_TRACKINIT q_trackinit;
  MLRI__D_TRACKINIT d_trackinit;
  MLRI__D_TRACKCOND d_trackcond;
  MLRI__L_TRACKCOND l_trackcond;
  MLRI__M_TRACKCOND m_trackcond;
} MLRI__struct__21815;

/* Packet_Types_Pkg::P68_TrackCondition_T */
typedef MLRI__struct__21815 MLRI__P68_TrackCondition_T_Packet_Types_Pkg;

typedef MLRI__P68_TrackCondition_T_Packet_Types_Pkg MLRI__array__21826[31];

/* Packet_Types_Pkg::P68_TrackConditions_T */
typedef MLRI__array__21826 MLRI__P68_TrackConditions_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MLRI__Q_DIR q_dir;
  MLRI__Q_SCALE q_scale;
  MLRI__T_CYCLOC t_cycloc;
  MLRI__D_CYCLOC d_cycloc;
  MLRI__M_LOC m_loc;
  MLRI__D_LOC d_loc;
  MLRI__Q_LGTLOC q_lgtloc;
} MLRI__struct__21829;

/* Packet_Types_Pkg::P58_PositionReportParameter_T */
typedef MLRI__struct__21829 MLRI__P58_PositionReportParameter_T_Packet_Types_Pkg;

typedef MLRI__P58_PositionReportParameter_T_Packet_Types_Pkg MLRI__array__21840[31];

/* Packet_Types_Pkg::P58_PositionReportParameters_T */
typedef MLRI__array__21840 MLRI__P58_PositionReportParameters_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MLRI__Q_DIR q_dir;
  MLRI__Q_SCALE q_scale;
  MLRI__Q_TRACKINIT q_trackinit;
  MLRI__D_TRACKINIT d_trackinit;
  MLRI__D_PBD d_pbd;
  MLRI__Q_GDIR q_gdir;
  MLRI__G_PBDSR g_pbdsr;
  MLRI__Q_PBDSR q_pbdsr;
  MLRI__D_PBDSR d_pbdsr;
  MLRI__L_PBDSR l_pbdsr;
} MLRI__struct__21843;

/* Packet_Types_Pkg::P52_PermittedBrakingDistanceInformation_T */
typedef MLRI__struct__21843 MLRI__P52_PermittedBrakingDistanceInformation_T_Packet_Types_Pkg;

typedef MLRI__P52_PermittedBrakingDistanceInformation_T_Packet_Types_Pkg MLRI__array__21857[31];

/* Packet_Types_Pkg::P52_PermittedBrakingDistanceInformations_T */
typedef MLRI__array__21857 MLRI__P52_PermittedBrakingDistanceInformations_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MLRI__M_AXLELOADCAT m_axleloadcat;
  MLRI__V_AXLELOAD v_axleload;
} MLRI__struct__21860;

/* Packet_Types_Pkg::axleload_T */
typedef MLRI__struct__21860 MLRI__axleload_T_Packet_Types_Pkg;

typedef MLRI__axleload_T_Packet_Types_Pkg MLRI__array__21866[31];

/* Packet_Types_Pkg::axleloadArray_T */
typedef MLRI__array__21866 MLRI__axleloadArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MLRI__Q_DIR q_dir;
  MLRI__Q_SCALE q_scale;
  MLRI__Q_TRACKINIT q_trackinit;
  MLRI__D_TRACKINIT d_trackinit;
  MLRI__D_AXLELOAD d_axleload;
  MLRI__L_AXLELOAD l_axleload;
  MLRI__Q_FRONT q_front;
  MLRI__axleloadArray_T_Packet_Types_Pkg axleloadArray;
} MLRI__struct__21869;

/* Packet_Types_Pkg::P51_AxleLoadSpeedProfile_T */
typedef MLRI__struct__21869 MLRI__P51_AxleLoadSpeedProfile_T_Packet_Types_Pkg;

typedef MLRI__P51_AxleLoadSpeedProfile_T_Packet_Types_Pkg MLRI__array__21881[31];

/* Packet_Types_Pkg::P51_AxleLoadSpeedProfiles_T */
typedef MLRI__array__21881 MLRI__P51_AxleLoadSpeedProfiles_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MLRI__Q_DIR q_dir;
  MLRI__Q_NEWCOUNTRY q_newcountry;
  MLRI__NID_C nid_c;
  MLRI__NID_BG nid_bg;
} MLRI__struct__21884;

/* Packet_Types_Pkg::P49_ListOfBalisesForSHArea_T */
typedef MLRI__struct__21884 MLRI__P49_ListOfBalisesForSHArea_T_Packet_Types_Pkg;

typedef MLRI__P49_ListOfBalisesForSHArea_T_Packet_Types_Pkg MLRI__array__21892[31];

/* Packet_Types_Pkg::P49_ListOfBalisesForSHAreas_T */
typedef MLRI__array__21892 MLRI__P49_ListOfBalisesForSHAreas_T_Packet_Types_Pkg;

typedef struct {
  MLRI__Q_DIR q_dir;
  MLRI__M_LEVELTR m_leveltr;
  MLRI__NID_NTC nid_ntc;
} MLRI__struct__21895;

/* Packet_Types_Pkg::P46_ConditionalLevelTransitionOrder_T */
typedef MLRI__struct__21895 MLRI__P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg;

typedef MLRI__P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg MLRI__array__21901[31];

/* Packet_Types_Pkg::P46_ConditionalLevelTransitionOrders_T */
typedef MLRI__array__21901 MLRI__P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MLRI__Q_DIR q_dir;
  MLRI__Q_SCALE q_scale;
  MLRI__D_LEVELTR d_leveltr;
  MLRI__M_LEVELTR m_leveltr;
  MLRI__NID_NTC nid_ntc;
  MLRI__L_ACKLEVELTR l_ackleveltr;
} MLRI__struct__21904;

/* Packet_Types_Pkg::P41_LevelTransitionOrder_T */
typedef MLRI__struct__21904 MLRI__P41_LevelTransitionOrder_T_Packet_Types_Pkg;

typedef MLRI__P41_LevelTransitionOrder_T_Packet_Types_Pkg MLRI__array__21914[31];

/* Packet_Types_Pkg::P41_LevelTransistionOrders_T */
typedef MLRI__array__21914 MLRI__P41_LevelTransistionOrders_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MLRI__L_NVKRINT l_nvkrint;
  MLRI__M_NVKRINT m_nvkrint;
} MLRI__struct__21917;

/* Packet_Types_Pkg::nvkrint_T */
typedef MLRI__struct__21917 MLRI__nvkrint_T_Packet_Types_Pkg;

typedef MLRI__nvkrint_T_Packet_Types_Pkg MLRI__array__21923[31];

/* Packet_Types_Pkg::nvkrintArray_T */
typedef MLRI__array__21923 MLRI__nvkrintArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MLRI__Q_NVKVINTSET q_nvkvintset;
  MLRI__A_NVP12 a_nvp12;
  MLRI__A_NVP23 a_nvp23;
  MLRI__nvkvintArray_T_Packet_Types_Pkg nvkintArray;
} MLRI__struct__21926;

/* Packet_Types_Pkg::nvkvintset_T */
typedef MLRI__struct__21926 MLRI__nvkvintset_T_Packet_Types_Pkg;

typedef MLRI__nvkvintset_T_Packet_Types_Pkg MLRI__array__21934[31];

/* Packet_Types_Pkg::nvkvintsetArray_T */
typedef MLRI__array__21934 MLRI__nvkvintsetArray_T_Packet_Types_Pkg;

typedef struct { kcg_bool valid; MLRI__NID_C nid_c; } MLRI__struct__21937;

/* Packet_Types_Pkg::nidC_T */
typedef MLRI__struct__21937 MLRI__nidC_T_Packet_Types_Pkg;

typedef MLRI__nidC_T_Packet_Types_Pkg MLRI__array__21942[31];

/* Packet_Types_Pkg::nidCArray_T */
typedef MLRI__array__21942 MLRI__nidCArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MLRI__Q_DIFF q_diff;
  MLRI__NC_CDDIFF nc_cddiff;
  MLRI__NC_DIFF nc_diff;
  MLRI__V_DIFF v_diff;
} MLRI__struct__21945;

/* Packet_Types_Pkg::Diff_T */
typedef MLRI__struct__21945 MLRI__Diff_T_Packet_Types_Pkg;

typedef MLRI__Diff_T_Packet_Types_Pkg MLRI__array__21953[31];

/* Packet_Types_Pkg::DiffArray_T */
typedef MLRI__array__21953 MLRI__DiffArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MLRI__D_STATIC d_static;
  MLRI__V_STATIC v_static;
  MLRI__Q_FRONT q_front;
  MLRI__DiffArray_T_Packet_Types_Pkg diffArray;
} MLRI__struct__21956;

/* Packet_Types_Pkg::SSP_T */
typedef MLRI__struct__21956 MLRI__SSP_T_Packet_Types_Pkg;

typedef MLRI__SSP_T_Packet_Types_Pkg MLRI__array__21964[31];

/* Packet_Types_Pkg::SSPArray_T */
typedef MLRI__array__21964 MLRI__SSPArray_T_Packet_Types_Pkg;

typedef struct {
  kcg_bool valid;
  MLRI__Q_DIR q_dir;
  MLRI__Q_SCALE q_scale;
  MLRI__D_GRADIENT d_gradient;
  MLRI__Q_GDIR q_gdir;
  MLRI__G_A g_a;
} MLRI__struct__21967;

/* Packet_Types_Pkg::P21_GradientProfile_T */
typedef MLRI__struct__21967 MLRI__P21_GradientProfile_T_Packet_Types_Pkg;

typedef MLRI__P21_GradientProfile_T_Packet_Types_Pkg MLRI__array__21976[31];

/* Packet_Types_Pkg::P21_GradientProfiles_T */
typedef MLRI__array__21976 MLRI__P21_GradientProfiles_T_Packet_Types_Pkg;

typedef struct {
  MLRI__Q_DIR q_dir;
  MLRI__Q_SCALE q_scale;
  MLRI__D_RBCTR d_rbctr;
  MLRI__NID_C nid_c;
  MLRI__NID_RBC nid_rbc;
  MLRI__NID_RADIO nid_radio;
  MLRI__Q_SLEEPSESSION q_sleepsession;
} MLRI__struct__21979;

/* Packet_Types_Pkg::P131_RBCTransitionOrder_T */
typedef MLRI__struct__21979 MLRI__P131_RBCTransitionOrder_T_Packet_Types_Pkg;

typedef struct {
  MLRI__Q_DIR q_dir;
  MLRI__Q_SRSTOP q_srstop;
} MLRI__struct__21989;

/* Packet_Types_Pkg::P137_StopIfInStaffResponsible_T */
typedef MLRI__struct__21989 MLRI__P137_StopIfInStaffResponsible_T_Packet_Types_Pkg;

typedef struct {
  MLRI__Q_DIR q_dir;
  MLRI__Q_SCALE q_scale;
  MLRI__D_STARTREVERSE d_startreverse;
  MLRI__L_REVERSEAREA l_reversearea;
} MLRI__struct__21994;

/* Packet_Types_Pkg::P138_ReversingAreaInformation_T */
typedef MLRI__struct__21994 MLRI__P138_ReversingAreaInformation_T_Packet_Types_Pkg;

typedef struct {
  MLRI__Q_DIR q_dir;
  MLRI__Q_SCALE q_scale;
  MLRI__D_REVERSE d_reverse;
  MLRI__V_REVERSE v_reverse;
} MLRI__struct__22001;

/* Packet_Types_Pkg::P139_ReversingSupervisionInformation_T */
typedef MLRI__struct__22001 MLRI__P139_ReversingSupervisionInformation_T_Packet_Types_Pkg;

typedef struct {
  MLRI__Q_DIR q_dir;
  MLRI__NID_OPERATIONAL nid_operational;
} MLRI__struct__22008;

/* Packet_Types_Pkg::P140_TrainRunningNumberFromRBC_T */
typedef MLRI__struct__22008 MLRI__P140_TrainRunningNumberFromRBC_T_Packet_Types_Pkg;

typedef struct { MLRI__NID_PACKET nid_packet; } MLRI__struct__22013;

/* Packet_Types_Pkg::P255_EndOfInformation_T */
typedef MLRI__struct__22013 MLRI__P255_EndOfInformation_T_Packet_Types_Pkg;

typedef struct {
  MLRI__Q_DIR q_dir;
  MLRI__Q_SCALE q_scale;
  MLRI__D_STATIC d_static;
  MLRI__V_STATIC v_static;
  MLRI__Q_FRONT q_front;
  MLRI__DiffArray_T_Packet_Types_Pkg diffArray;
  MLRI__SSPArray_T_Packet_Types_Pkg SSPArray;
} MLRI__struct__22017;

/* Packet_Types_Pkg::P27_InternationalStaticSpeedProfile_T */
typedef MLRI__struct__22017 MLRI__P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg;

typedef struct {
  MLRI__Q_DIR q_dir;
  MLRI__Q_SCALE q_scale;
  MLRI__D_TRACTION d_traction;
  MLRI__M_VOLTAGE m_voltage;
  MLRI__NID_CTRACTION nid_ctraction;
} MLRI__struct__22027;

/* Packet_Types_Pkg::P39_TrackConditionChangeOfTractionSystem_T */
typedef MLRI__struct__22027 MLRI__P39_TrackConditionChangeOfTractionSystem_T_Packet_Types_Pkg;

typedef struct {
  MLRI__Q_DIR q_dir;
  MLRI__D_VALIDNV d_validnv;
  MLRI__nidCArray_T_Packet_Types_Pkg nid_cArray;
  MLRI__V_NVSHUNT v_nvshunt;
  MLRI__V_NVSTFF v_nvstff;
  MLRI__V_NVONSIGHT v_nvonsight;
  MLRI__V_NVLIMSUPERV v_nvlimsuperv;
  MLRI__V_NVUNFIT v_nvunfit;
  MLRI__V_NVREL v_nvrel;
  MLRI__D_NVROLL d_nvroll;
  MLRI__Q_NVSBTSMPERM q_nvsbtsmperm;
  MLRI__Q_NVEMRRLS q_nvemrrls;
  MLRI__Q_NVGUIPERM q_nvguiperm;
  MLRI__Q_NVSBFBPERM q_nvsbfbperm;
  MLRI__Q_NVINHSMICPERM q_nvinhsmicperm;
  MLRI__V_NVALLOWOVTRP v_nvallowovtrp;
  MLRI__V_NVSUPOVTRP v_nvsupovtrp;
  MLRI__D_NVOVTRP d_nvovtrp;
  MLRI__T_NVOVTRP t_nvovtrp;
  MLRI__D_NVPOTRP d_nvpotrp;
  MLRI__M_NVCONTACT m_nvcontact;
  MLRI__T_NVCONTACT t_nvcontact;
  MLRI__M_NVDERUN m_nvderun;
  MLRI__D_NVSTFF d_nvstff;
  MLRI__Q_NVDRIVER_ADHES q_nvdriver_adhes;
  MLRI__A_NVMAXREDADH1 a_nvmaxredadh1;
  MLRI__A_NVMAXREDADH2 a_nvmaxredadh2;
  MLRI__A_NVMAXREDADH3 a_nvmaxredadh3;
  MLRI__Q_NVLOCACC q_nvlocacc;
  MLRI__M_NVAVADH m_nvavadh;
  MLRI__M_NVEBCL m_nvebcl;
  MLRI__Q_NVKINT q_nvkint;
  MLRI__nvkvintsetArray_T_Packet_Types_Pkg nvkvintsetArray;
  MLRI__nvkrintArray_T_Packet_Types_Pkg nvkrintArray;
  MLRI__M_NVKTINT m_nvktint;
} MLRI__struct__22035;

/* Packet_Types_Pkg::P3_NationalValues_T */
typedef MLRI__struct__22035 MLRI__P3_NationalValues_T_Packet_Types_Pkg;

typedef struct {
  MLRI__Q_DIR q_dir;
  MLRI__Q_SCALE q_scale;
  MLRI__D_CURRENT d_current;
  MLRI__M_CURRENT m_current;
} MLRI__struct__22073;

/* Packet_Types_Pkg::P40_TrackConditionChangeOfAllowedCurrentConsumption_T */
typedef MLRI__struct__22073 MLRI__P40_TrackConditionChangeOfAllowedCurrentConsumption_T_Packet_Types_Pkg;

typedef struct {
  MLRI__Q_DIR q_dir;
  MLRI__Q_RBC q_rbc;
  MLRI__NID_C nid_c;
  MLRI__NID_RBC nid_rbc;
  MLRI__NID_RADIO nid_radio;
  MLRI__Q_SLEEPSESSION q_sleepsession;
} MLRI__struct__22080;

/* Packet_Types_Pkg::P42_SessionManagement_T */
typedef MLRI__struct__22080 MLRI__P42_SessionManagement_T_Packet_Types_Pkg;

typedef struct {
  MLRI__Q_DIR q_dir;
  MLRI__NID_XUSER nid_xuser;
  MLRI__NID_NTC nid_ntc;
  kcg_int Other_data_depending_on__NID_XUSER;
} MLRI__struct__22089;

/* Packet_Types_Pkg::P44_DataUsedByApplicationsOutsideTheERTMSETCSSystem_T */
typedef MLRI__struct__22089 MLRI__P44_DataUsedByApplicationsOutsideTheERTMSETCSSystem_T_Packet_Types_Pkg;

typedef struct { MLRI__Q_DIR q_dir; MLRI__NID_MN nid_mn; } MLRI__struct__22096;

/* Packet_Types_Pkg::P45_RadioNetworkRegistration_T */
typedef MLRI__struct__22096 MLRI__P45_RadioNetworkRegistration_T_Packet_Types_Pkg;

typedef struct {
  MLRI__Q_DIR q_dir;
  MLRI__T_MAR t_mar;
  MLRI__T_TIMEOUTRQST t_timeoutrqst;
  MLRI__T_CYCRQST t_cycrqst;
} MLRI__struct__22101;

/* Packet_Types_Pkg::P57_MovementAuthorityRequestParameters_T */
typedef MLRI__struct__22101 MLRI__P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg;

typedef struct { MLRI__Q_DIR q_dir; } MLRI__struct__22108;

/* Packet_Types_Pkg::P64_InhibitionOfRevocableTSRsFromBalisesInL23_T */
typedef MLRI__struct__22108 MLRI__P64_InhibitionOfRevocableTSRsFromBalisesInL23_T_Packet_Types_Pkg;

typedef struct {
  MLRI__Q_DIR q_dir;
  MLRI__Q_SCALE q_scale;
  MLRI__NID_TSR nid_tsr;
  MLRI__D_TSR d_tsr;
  MLRI__L_TSR l_tsr;
  MLRI__Q_FRONT q_front;
  MLRI__V_TSR v_tsr;
} MLRI__struct__22112;

/* Packet_Types_Pkg::P65_TemporarySpeedRestriction_T */
typedef MLRI__struct__22112 MLRI__P65_TemporarySpeedRestriction_T_Packet_Types_Pkg;

typedef struct {
  MLRI__Q_DIR q_dir;
  MLRI__NID_TSR nid_tsr;
} MLRI__struct__22122;

/* Packet_Types_Pkg::P66_TemporarySpeedRestrictionRevocation_T */
typedef MLRI__struct__22122 MLRI__P66_TemporarySpeedRestrictionRevocation_T_Packet_Types_Pkg;

typedef struct {
  MLRI__Q_DIR q_dir;
  MLRI__Q_SCALE q_scale;
  MLRI__D_ADHESION d_adhesion;
  MLRI__L_ADHESION l_adhesion;
  MLRI__M_ADHESION m_adhesion;
} MLRI__struct__22127;

/* Packet_Types_Pkg::P71_AdhesionFactor_T */
typedef MLRI__struct__22127 MLRI__P71_AdhesionFactor_T_Packet_Types_Pkg;

typedef struct {
  MLRI__Q_DIR q_dir;
  MLRI__Q_SCALE q_scale;
  MLRI__Q_TEXTCLASS q_textclass;
  MLRI__Q_TEXTDISPLAY q_textdisplay;
  MLRI__D_TEXTDISPLAY d_textdisplay;
  MLRI__M_MODETEXTDISPLAY m_modetextdisplay_start;
  MLRI__M_LEVELTEXTDISPLAY m_leveltextdisplay_start;
  MLRI__NID_NTC nid_ntc_start;
  MLRI__L_TEXTDISPLAY l_textdisplay;
  MLRI__T_TEXTDISPLAY t_textdisplay;
  MLRI__M_MODETEXTDISPLAY m_modetextdisplay_end;
  MLRI__M_LEVELTEXTDISPLAY m_leveltextdisplay_end;
  MLRI__NID_NTC nid_ntc_end;
  MLRI__Q_TEXTCONFIRM q_textconfirm;
  MLRI__Q_CONFTEXTDISPLAY q_conftextdisplay;
  MLRI__Q_TEXTREPORT q_textreport;
  MLRI__NID_TEXTMESSAGE nid_textmessage;
  MLRI__NID_C nid_c;
  MLRI__NID_RBC nid_rbc;
  MLRI__L_TEXT l_text;
  MLRI__xTextArray_T_Packet_Types_Pkg x_text;
} MLRI__struct__22135;

/* Packet_Types_Pkg::P72_PacketForSendingPlainTextMessages_T */
typedef MLRI__struct__22135 MLRI__P72_PacketForSendingPlainTextMessages_T_Packet_Types_Pkg;

typedef struct {
  MLRI__Q_DIR q_dir;
  MLRI__Q_SCALE q_scale;
  MLRI__Q_TEXTCLASS q_textclass;
  MLRI__Q_TEXTDISPLAY q_textdisplay;
  MLRI__D_TEXTDISPLAY d_textdisplay;
  MLRI__M_MODETEXTDISPLAY m_modetextdisplay_start;
  MLRI__M_LEVELTEXTDISPLAY m_leveltextdisplay_start;
  MLRI__NID_NTC nid_ntc_start;
  MLRI__L_TEXTDISPLAY l_textdisplay;
  MLRI__T_TEXTDISPLAY t_textdisplay;
  MLRI__M_MODETEXTDISPLAY m_modetextdisplay_end;
  MLRI__M_LEVELTEXTDISPLAY m_leveltextdisplay_end;
  MLRI__NID_NTC nid_ntc_end;
  MLRI__Q_TEXTCONFIRM q_textconfirm;
  MLRI__Q_CONFTEXTDISPLAY q_conftextdisplay;
  MLRI__Q_TEXTREPORT q_textreport;
  MLRI__NID_TEXTMESSAGE nid_textmessage;
  MLRI__NID_C nid_c;
  MLRI__NID_RBC nid_rbc;
  MLRI__Q_TEXT q_text;
} MLRI__struct__22159;

/* Packet_Types_Pkg::P76_PacketForSendingFixedTextMessages_T */
typedef MLRI__struct__22159 MLRI__P76_PacketForSendingFixedTextMessages_T_Packet_Types_Pkg;

typedef struct {
  MLRI__Q_DIR q_dir;
  MLRI__Q_SCALE q_scale;
  MLRI__NID_LX nid_lx;
  MLRI__D_LX d_lx;
  MLRI__L_LX l_lx;
  MLRI__Q_LXSTATUS q_lxstatus;
  MLRI__V_LX v_lx;
  MLRI__Q_STOPLX q_stoplx;
  MLRI__L_STOPLX l_stoplx;
} MLRI__struct__22182;

/* Packet_Types_Pkg::P88_LevelCrossingInformation_T */
typedef MLRI__struct__22182 MLRI__P88_LevelCrossingInformation_T_Packet_Types_Pkg;

typedef struct {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int M_ACK;
  kcg_int NID_LRBG;
  kcg_int Q_ORIENTATION;
} MLRI__struct__22194;

/* Radio_TrackToTrain::Assignment_of_coordinate_system */
typedef MLRI__struct__22194 MLRI__Assignment_of_coordinate_system_Radio_TrackToTrain;

typedef struct {
  MLRI__Assignment_of_coordinate_system_Radio_TrackToTrain assignment_of_coordinate_system;
} MLRI__struct__22203;

/* BG_Types_Pkg::RBCOrientationReport_T */
typedef MLRI__struct__22203 MLRI__RBCOrientationReport_T_BG_Types_Pkg;

typedef struct {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int NID_ENGINE;
  kcg_int PADDING3;
  kcg_int Train_Position_Report_OptionalPackets;
} MLRI__struct__22207;

/* Radio_TrainToTrack::Train_Position_Report */
typedef MLRI__struct__22207 MLRI__Train_Position_Report_Radio_TrainToTrack;

typedef struct {
  MLRI__Train_Position_Report_Radio_TrainToTrack train_position_report;
} MLRI__struct__22216;

/* BG_Types_Pkg::RBCReport_T */
typedef MLRI__struct__22216 MLRI__RBCReport_T_BG_Types_Pkg;

typedef struct { kcg_int k; kcg_real f; } MLRI__struct__22220;

/* lut::LutIndex */
typedef MLRI__struct__22220 MLRI__LutIndex_lut;

typedef struct {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int M_ACK;
  kcg_int NID_LRBG;
} MLRI__struct__22225;

/* Radio_TrackToTrain::Recognition_of_exit_from_TRIP_mode */
typedef MLRI__struct__22225 MLRI__Recognition_of_exit_from_TRIP_mode_Radio_TrackToTrain;

/* Radio_TrackToTrain::Initiation_of_a_communication_session */
typedef MLRI__struct__22225 MLRI__Initiation_of_a_communication_session_Radio_TrackToTrain;

/* Radio_TrackToTrain::Acknowledgement_of_termination_of_a_communication_session */
typedef MLRI__struct__22225 MLRI__Acknowledgement_of_termination_of_a_communication_session_Radio_TrackToTrain;

/* Radio_TrackToTrain::Train_Rejected */
typedef MLRI__struct__22225 MLRI__Train_Rejected_Radio_TrackToTrain;

/* Radio_TrackToTrain::Train_Accepted */
typedef MLRI__struct__22225 MLRI__Train_Accepted_Radio_TrackToTrain;

/* Radio_TrackToTrain::SoM_position_report_confirmed_by_RBC */
typedef MLRI__struct__22225 MLRI__SoM_position_report_confirmed_by_RBC_Radio_TrackToTrain;

typedef struct {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int M_ACK;
  kcg_int NID_LRBG;
  kcg_int PADDING18;
  kcg_int Infill_MA_OptionalPackets;
} MLRI__struct__22233;

/* Radio_TrackToTrain::Infill_MA */
typedef MLRI__struct__22233 MLRI__Infill_MA_Radio_TrackToTrain;

typedef struct {
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
} MLRI__struct__22243;

/* Radio_TrackToTrain::Track_Ahead_Free_Request */
typedef MLRI__struct__22243 MLRI__Track_Ahead_Free_Request_Radio_TrackToTrain;

typedef struct {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int M_ACK;
  kcg_int NID_LRBG;
  kcg_int Q_SCALE;
  kcg_int D_REF;
  kcg_int PADDING17;
  kcg_int MA_with_Shifted_Location_Reference_OptionalPackets;
} MLRI__struct__22256;

/* Radio_TrackToTrain::MA_with_Shifted_Location_Reference */
typedef MLRI__struct__22256 MLRI__MA_with_Shifted_Location_Reference_Radio_TrackToTrain;

typedef struct {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int M_ACK;
  kcg_int NID_LRBG;
  kcg_int M_VERSION;
} MLRI__struct__22268;

/* Radio_TrackToTrain::RBC_or_RIU_System_Version */
typedef MLRI__struct__22268 MLRI__RBC_or_RIU_System_Version_Radio_TrackToTrain;

typedef struct {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN0;
  kcg_int M_ACK;
  kcg_int NID_LRBG;
  kcg_real T_TRAIN1;
  kcg_int PADDING16;
  kcg_int SH_Authorised_OptionalPackets;
} MLRI__struct__22277;

/* Radio_TrackToTrain::SH_Authorised */
typedef MLRI__struct__22277 MLRI__SH_Authorised_Radio_TrackToTrain;

typedef struct {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN0;
  kcg_int M_ACK;
  kcg_int NID_LRBG;
  kcg_real T_TRAIN1;
} MLRI__struct__22288;

/* Radio_TrackToTrain::Acknowledgement_of_Train_Data */
typedef MLRI__struct__22288 MLRI__Acknowledgement_of_Train_Data_Radio_TrackToTrain;

/* Radio_TrackToTrain::SH_Refused */
typedef MLRI__struct__22288 MLRI__SH_Refused_Radio_TrackToTrain;

typedef struct {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int M_ACK;
  kcg_int NID_LRBG;
  kcg_int PADDING15;
  kcg_int General_message_OptionalPackets;
} MLRI__struct__22297;

/* Radio_TrackToTrain::General_message */
typedef MLRI__struct__22297 MLRI__General_message_Radio_TrackToTrain;

typedef struct {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int M_ACK;
  kcg_int NID_LRBG;
  kcg_int NID_EM;
} MLRI__struct__22307;

/* Radio_TrackToTrain::Unconditional_Emergency_Stop */
typedef MLRI__struct__22307 MLRI__Unconditional_Emergency_Stop_Radio_TrackToTrain;

/* Radio_TrackToTrain::Revocation_of_Emergency_Stop */
typedef MLRI__struct__22307 MLRI__Revocation_of_Emergency_Stop_Radio_TrackToTrain;

typedef struct {
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
} MLRI__struct__22316;

/* Radio_TrackToTrain::Conditional_Emergency_Stop */
typedef MLRI__struct__22316 MLRI__Conditional_Emergency_Stop_Radio_TrackToTrain;

typedef struct {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int M_ACK;
  kcg_int NID_LRBG;
  kcg_int PADDING14;
  kcg_int Request_to_Shorten_MA_OptionalPackets;
} MLRI__struct__22329;

/* Radio_TrackToTrain::Request_to_Shorten_MA */
typedef MLRI__struct__22329 MLRI__Request_to_Shorten_MA_Radio_TrackToTrain;

typedef struct {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int M_ACK;
  kcg_int NID_LRBG;
  kcg_int PADDING13;
  kcg_int Movement_Authority_OptionalPackets;
} MLRI__struct__22339;

/* Radio_TrackToTrain::Movement_Authority */
typedef MLRI__struct__22339 MLRI__Movement_Authority_Radio_TrackToTrain;

typedef struct {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int M_ACK;
  kcg_int NID_LRBG;
  kcg_int Q_SCALE;
  kcg_int D_SR;
  kcg_int PADDING12;
  kcg_int SR_Authorisation_OptionalPackets;
} MLRI__struct__22349;

/* Radio_TrackToTrain::SR_Authorisation */
typedef MLRI__struct__22349 MLRI__SR_Authorisation_Radio_TrackToTrain;

typedef struct {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int NID_ENGINE;
  kcg_int PADDING11;
  kcg_int Session_Established_OptionalPackets;
} MLRI__struct__22361;

/* Radio_TrainToTrack::Session_Established */
typedef MLRI__struct__22361 MLRI__Session_Established_Radio_TrainToTrack;

typedef struct {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int NID_ENGINE;
  kcg_int NID_TEXTMESSAGE;
  kcg_int PADDING10;
  kcg_int Text_message_acknowledged_by_driver_OptionalPackets;
} MLRI__struct__22370;

/* Radio_TrainToTrack::Text_message_acknowledged_by_driver */
typedef MLRI__struct__22370 MLRI__Text_message_acknowledged_by_driver_Radio_TrainToTrack;

typedef struct {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int NID_ENGINE;
  kcg_int Q_STATUS;
  kcg_int PADDING9;
  kcg_int SoM_Position_Report_OptionalPackets;
} MLRI__struct__22380;

/* Radio_TrainToTrack::SoM_Position_Report */
typedef MLRI__struct__22380 MLRI__SoM_Position_Report_Radio_TrainToTrack;

typedef struct {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int NID_ENGINE;
} MLRI__struct__22390;

/* Radio_TrainToTrack::Acknowledgement */
typedef MLRI__struct__22390 MLRI__Acknowledgement_Radio_TrainToTrack;

/* Radio_TrainToTrack::No_compatible_version_supported */
typedef MLRI__struct__22390 MLRI__No_compatible_version_supported_Radio_TrainToTrack;

/* Radio_TrainToTrack::Initiation_of_a_communication_session */
typedef MLRI__struct__22390 MLRI__Initiation_of_a_communication_session_Radio_TrainToTrack;

/* Radio_TrainToTrack::Termination_of_a_communication_session */
typedef MLRI__struct__22390 MLRI__Termination_of_a_communication_session_Radio_TrainToTrack;

typedef struct {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int NID_ENGINE;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_INFILL;
  kcg_int PADDING8;
  kcg_int Radio_infill_request_OptionalPackets;
} MLRI__struct__22397;

/* Radio_TrainToTrack::Radio_infill_request */
typedef MLRI__struct__22397 MLRI__Radio_infill_request_Radio_TrainToTrack;

typedef struct {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int NID_ENGINE;
  kcg_int PADDING7;
  kcg_int End_of_Mission_OptionalPackets;
} MLRI__struct__22409;

/* Radio_TrainToTrack::End_of_Mission */
typedef MLRI__struct__22409 MLRI__End_of_Mission_Radio_TrainToTrack;

typedef struct {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int NID_ENGINE;
  kcg_int PADDING6;
  kcg_int Track_Ahead_Free_Granted_OptionalPackets;
} MLRI__struct__22418;

/* Radio_TrainToTrack::Track_Ahead_Free_Granted */
typedef MLRI__struct__22418 MLRI__Track_Ahead_Free_Granted_Radio_TrainToTrack;

typedef struct {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int NID_ENGINE;
  kcg_int NID_EM;
  kcg_int Q_EMERGENCYSTOP;
  kcg_int Acknowledgement_of_Emergency_Stop_OptionalPackets;
} MLRI__struct__22427;

/* Radio_TrainToTrack::Acknowledgement_of_Emergency_Stop */
typedef MLRI__struct__22427 MLRI__Acknowledgement_of_Emergency_Stop_Radio_TrainToTrack;

typedef struct {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int NID_ENGINE;
  kcg_int PADDING5;
  kcg_int Request_to_shorten_MA_is_rejected_OptionalPackets;
} MLRI__struct__22437;

/* Radio_TrainToTrack::Request_to_shorten_MA_is_rejected */
typedef MLRI__struct__22437 MLRI__Request_to_shorten_MA_is_rejected_Radio_TrainToTrack;

typedef struct {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int NID_ENGINE;
  kcg_int PADDING4;
  kcg_int Request_to_shorten_MA_is_granted_OptionalPackets;
} MLRI__struct__22446;

/* Radio_TrainToTrack::Request_to_shorten_MA_is_granted */
typedef MLRI__struct__22446 MLRI__Request_to_shorten_MA_is_granted_Radio_TrainToTrack;

typedef struct {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int NID_ENGINE;
  kcg_int Q_MARQSTREASON;
  kcg_int PADDING2;
  kcg_int MA_Request_OptionalPackets;
} MLRI__struct__22455;

/* Radio_TrainToTrack::MA_Request */
typedef MLRI__struct__22455 MLRI__MA_Request_Radio_TrainToTrack;

typedef struct {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int NID_ENGINE;
  kcg_int PADDING1;
  kcg_int Request_for_Shunting_OptionalPackets;
} MLRI__struct__22465;

/* Radio_TrainToTrack::Request_for_Shunting */
typedef MLRI__struct__22465 MLRI__Request_for_Shunting_Radio_TrainToTrack;

typedef struct {
  kcg_int NID_MESSAGE;
  kcg_int L_MESSAGE;
  kcg_real T_TRAIN;
  kcg_int NID_ENGINE;
  kcg_int PADDING0;
  kcg_int Validated_Train_Data_OptionalPackets;
} MLRI__struct__22474;

/* Radio_TrainToTrack::Validated_Train_Data */
typedef MLRI__struct__22474 MLRI__Validated_Train_Data_Radio_TrainToTrack;

typedef struct { kcg_int NID_PACKET; } MLRI__struct__22483;

/* BothWays::End_of_Information */
typedef MLRI__struct__22483 MLRI__End_of_Information_BothWays;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int L_PACKET;
  kcg_int NID_XUSER;
  kcg_int Other_data_depending_on__NID_XUSER;
} MLRI__struct__22487;

/* TrainToTrack::Data_used_by_applications_outside_the_ERTMS_or_ETCS_system */
typedef MLRI__struct__22487 MLRI__Data_used_by_applications_outside_the_ERTMS_or_ETCS_system_TrainToTrack;

typedef struct { kcg_int NID_NTC; } MLRI__struct__22494;

/* TrainToTrack::Var111 */
typedef MLRI__struct__22494 MLRI__Var111_TrainToTrack;

typedef MLRI__Var111_TrainToTrack MLRI__array__22498[33];

/* TrainToTrack::AVar111 */
typedef MLRI__array__22498 MLRI__AVar111_TrainToTrack;

typedef struct {
  kcg_int N_ITER;
  MLRI__AVar111_TrainToTrack Array;
} MLRI__struct__22501;

/* TrainToTrack::SVar111 */
typedef MLRI__struct__22501 MLRI__SVar111_TrainToTrack;

typedef struct {
  kcg_int M_VOLTAGE;
  kcg_int NID_CTRACTION;
} MLRI__struct__22506;

/* TrainToTrack::Var110 */
typedef MLRI__struct__22506 MLRI__Var110_TrainToTrack;

typedef MLRI__Var110_TrainToTrack MLRI__array__22511[33];

/* TrainToTrack::AVar110 */
typedef MLRI__array__22511 MLRI__AVar110_TrainToTrack;

typedef struct {
  kcg_int N_ITER;
  MLRI__AVar110_TrainToTrack Array;
} MLRI__struct__22514;

/* TrainToTrack::SVar110 */
typedef MLRI__struct__22514 MLRI__SVar110_TrainToTrack;

typedef struct {
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
  MLRI__SVar110_TrainToTrack Struct47;
  MLRI__SVar111_TrainToTrack Struct48;
} MLRI__struct__22519;

/* TrainToTrack::Validated_train_data */
typedef MLRI__struct__22519 MLRI__Validated_train_data_TrainToTrack;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int L_PACKET;
  kcg_int NID_LTRBG;
} MLRI__struct__22534;

/* TrainToTrack::Level_23_transition_information */
typedef MLRI__struct__22534 MLRI__Level_23_transition_information_TrainToTrack;

typedef struct { kcg_int NID_RADIO; } MLRI__struct__22540;

/* TrainToTrack::Var30 */
typedef MLRI__struct__22540 MLRI__Var30_TrainToTrack;

typedef MLRI__Var30_TrainToTrack MLRI__array__22544[33];

/* TrainToTrack::AVar30 */
typedef MLRI__array__22544 MLRI__AVar30_TrainToTrack;

typedef struct {
  kcg_int N_ITER;
  MLRI__AVar30_TrainToTrack Array;
} MLRI__struct__22547;

/* TrainToTrack::SVar30 */
typedef MLRI__struct__22547 MLRI__SVar30_TrainToTrack;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int L_PACKET;
  MLRI__SVar30_TrainToTrack Struct46;
} MLRI__struct__22552;

/* TrainToTrack::Onboard_telephone_numbers */
typedef MLRI__struct__22552 MLRI__Onboard_telephone_numbers_TrainToTrack;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
} MLRI__struct__22558;

/* TrackToTrain::Inhibition_of_revocable_TSRs_from_balises_in_L23 */
typedef MLRI__struct__22558 MLRI__Inhibition_of_revocable_TSRs_from_balises_in_L23_TrackToTrain;

/* TrackToTrain::Stop_Shunting_on_desk_opening */
typedef MLRI__struct__22558 MLRI__Stop_Shunting_on_desk_opening_TrackToTrain;

/* TrackToTrain::Inhibition_of_balise_group_message_consistency_reaction */
typedef MLRI__struct__22558 MLRI__Inhibition_of_balise_group_message_consistency_reaction_TrackToTrain;

/* TrackToTrain::Default_balise_or_Loop_or_RIU_information */
typedef MLRI__struct__22558 MLRI__Default_balise_or_Loop_or_RIU_information_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_RIU;
  kcg_int NID_C;
  kcg_int NID_RIU;
  kcg_int NID_RADIO;
} MLRI__struct__22564;

/* TrackToTrain::Session_Management_with_neighbouring_Radio_Infill_Unit */
typedef MLRI__struct__22564 MLRI__Session_Management_with_neighbouring_Radio_Infill_Unit_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_GDIR;
  kcg_int G_TSR;
} MLRI__struct__22574;

/* TrackToTrain::Default_Gradient_for_Temporary_Speed_Restriction */
typedef MLRI__struct__22574 MLRI__Default_Gradient_for_Temporary_Speed_Restriction_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_OPERATIONAL;
} MLRI__struct__22582;

/* TrackToTrain::Train_running_number_from_RBC */
typedef MLRI__struct__22582 MLRI__Train_running_number_from_RBC_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_REVERSE;
  kcg_int V_REVERSE;
} MLRI__struct__22589;

/* TrackToTrain::Reversing_supervision_information */
typedef MLRI__struct__22589 MLRI__Reversing_supervision_information_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_STARTREVERSE;
  kcg_int L_REVERSEAREA;
} MLRI__struct__22598;

/* TrackToTrain::Reversing_area_information */
typedef MLRI__struct__22598 MLRI__Reversing_area_information_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SRSTOP;
} MLRI__struct__22607;

/* TrackToTrain::Stop_if_in_Staff_Responsible */
typedef MLRI__struct__22607 MLRI__Stop_if_in_Staff_Responsible_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
} MLRI__struct__22614;

/* TrackToTrain::Track_Ahead_Free_up_to_level_23_transition_location */
typedef MLRI__struct__22614 MLRI__Track_Ahead_Free_up_to_level_23_transition_location_TrackToTrain;

/* TrackToTrain::Infill_location_reference */
typedef MLRI__struct__22614 MLRI__Infill_location_reference_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int NID_LOOP;
  kcg_int D_LOOP;
  kcg_int L_LOOP;
  kcg_int Q_LOOPDIR;
  kcg_int Q_SSCODE;
} MLRI__struct__22623;

/* TrackToTrain::EOLM_Packet */
typedef MLRI__struct__22623 MLRI__EOLM_Packet_TrackToTrain;

typedef struct {
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
} MLRI__struct__22635;

/* TrackToTrain::Radio_infill_area_information */
typedef MLRI__struct__22635 MLRI__Radio_infill_area_information_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_ASPECT;
} MLRI__struct__22648;

/* TrackToTrain::Danger_for_Shunting_information */
typedef MLRI__struct__22648 MLRI__Danger_for_Shunting_information_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_RBCTR;
  kcg_int NID_C;
  kcg_int NID_RBC;
  kcg_int NID_RADIO;
  kcg_int Q_SLEEPSESSION;
} MLRI__struct__22655;

/* TrackToTrain::RBC_transition_order */
typedef MLRI__struct__22655 MLRI__RBC_transition_order_TrackToTrain;

typedef struct {
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
} MLRI__struct__22667;

/* TrackToTrain::Level_Crossing_information */
typedef MLRI__struct__22667 MLRI__Level_Crossing_information_TrackToTrain;

typedef struct {
  kcg_int D_MAMODE;
  kcg_int M_MAMODE;
  kcg_int V_MAMODE;
  kcg_int L_MAMODE;
  kcg_int L_ACKMAMODE;
  kcg_int Q_MAMODE;
} MLRI__struct__22681;

/* TrackToTrain::Var800 */
typedef MLRI__struct__22681 MLRI__Var800_TrackToTrain;

typedef MLRI__Var800_TrackToTrain MLRI__array__22690[33];

/* TrackToTrain::AVar800 */
typedef MLRI__array__22690 MLRI__AVar800_TrackToTrain;

typedef struct {
  kcg_int N_ITER;
  MLRI__AVar800_TrackToTrain Array;
} MLRI__struct__22693;

/* TrackToTrain::SVar800 */
typedef MLRI__struct__22693 MLRI__SVar800_TrackToTrain;

typedef struct {
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
  MLRI__SVar800_TrackToTrain Struct45;
} MLRI__struct__22698;

/* TrackToTrain::Mode_profile */
typedef MLRI__struct__22698 MLRI__Mode_profile_TrackToTrain;

typedef struct {
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int D_POSOFF;
  kcg_int Q_MPOSITION;
  kcg_int M_POSITION;
} MLRI__struct__22712;

/* TrackToTrain::Var790 */
typedef MLRI__struct__22712 MLRI__Var790_TrackToTrain;

typedef MLRI__Var790_TrackToTrain MLRI__array__22721[33];

/* TrackToTrain::AVar790 */
typedef MLRI__array__22721 MLRI__AVar790_TrackToTrain;

typedef struct {
  kcg_int N_ITER;
  MLRI__AVar790_TrackToTrain Array;
} MLRI__struct__22724;

/* TrackToTrain::SVar790 */
typedef MLRI__struct__22724 MLRI__SVar790_TrackToTrain;

typedef struct {
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
  MLRI__SVar790_TrackToTrain Struct44;
} MLRI__struct__22729;

/* TrackToTrain::Geographical_Position_Information */
typedef MLRI__struct__22729 MLRI__Geographical_Position_Information_TrackToTrain;

typedef struct {
  kcg_int M_MODETEXTDISPLAY;
  kcg_int M_LEVELTEXTDISPLAY;
  kcg_int NID_NTC;
} MLRI__struct__22743;

/* TrackToTrain::Var727 */
typedef MLRI__struct__22743 MLRI__Var727_TrackToTrain;

/* TrackToTrain::Var767 */
typedef MLRI__struct__22743 MLRI__Var767_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int Q_TEXTCLASS;
  kcg_int Q_TEXTDISPLAY;
  kcg_int D_TEXTDISPLAY;
  MLRI__Var767_TrackToTrain Struct40;
  kcg_int L_TEXTDISPLAY;
  kcg_int T_TEXTDISPLAY;
  MLRI__Var767_TrackToTrain Struct43;
  kcg_int Q_TEXTCONFIRM;
  kcg_int Q_CONFTEXTDISPLAY;
  kcg_int Q_TEXTREPORT;
  kcg_int NID_TEXTMESSAGE;
  kcg_int NID_C;
  kcg_int NID_RBC;
  kcg_int Q_TEXT;
} MLRI__struct__22749;

/* TrackToTrain::Packet_for_sending_fixed_text_messages */
typedef MLRI__struct__22749 MLRI__Packet_for_sending_fixed_text_messages_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int Q_TEXTCLASS;
  kcg_int Q_TEXTDISPLAY;
  kcg_int D_TEXTDISPLAY;
  MLRI__Var727_TrackToTrain Struct34;
  kcg_int L_TEXTDISPLAY;
  kcg_int T_TEXTDISPLAY;
  MLRI__Var727_TrackToTrain Struct37;
  kcg_int Q_TEXTCONFIRM;
  kcg_int Q_CONFTEXTDISPLAY;
  kcg_int Q_TEXTREPORT;
  kcg_int NID_TEXTMESSAGE;
  kcg_int NID_C;
  kcg_int NID_RBC;
  kcg_int L_TEXT;
  kcg_int X_TEXT;
} MLRI__struct__22770;

/* TrackToTrain::Packet_for_sending_plain_text_messages */
typedef MLRI__struct__22770 MLRI__Packet_for_sending_plain_text_messages_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_ADHESION;
  kcg_int L_ADHESION;
  kcg_int M_ADHESION;
} MLRI__struct__22792;

/* TrackToTrain::Adhesion_factor */
typedef MLRI__struct__22792 MLRI__Adhesion_factor_TrackToTrain;

typedef struct {
  kcg_int D_SUITABILITY;
  kcg_int Q_SUITABILITY;
  kcg_int M_LINEGAUGE;
  kcg_int M_AXLELOADCAT;
  kcg_int M_VOLTAGE;
  kcg_int NID_CTRACTION;
} MLRI__struct__22802;

/* TrackToTrain::Var700 */
typedef MLRI__struct__22802 MLRI__Var700_TrackToTrain;

typedef MLRI__Var700_TrackToTrain MLRI__array__22811[33];

/* TrackToTrain::AVar700 */
typedef MLRI__array__22811 MLRI__AVar700_TrackToTrain;

typedef struct {
  kcg_int N_ITER;
  MLRI__AVar700_TrackToTrain Array;
} MLRI__struct__22814;

/* TrackToTrain::SVar700 */
typedef MLRI__struct__22814 MLRI__SVar700_TrackToTrain;

typedef struct {
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
  MLRI__SVar700_TrackToTrain Struct31;
} MLRI__struct__22819;

/* TrackToTrain::Route_Suitability_Data */
typedef MLRI__struct__22819 MLRI__Route_Suitability_Data_TrackToTrain;

typedef struct {
  kcg_int D_TRACKCOND;
  kcg_int L_TRACKCOND;
  kcg_int M_PLATFORM;
  kcg_int Q_PLATFORM;
} MLRI__struct__22835;

/* TrackToTrain::Var690 */
typedef MLRI__struct__22835 MLRI__Var690_TrackToTrain;

typedef MLRI__Var690_TrackToTrain MLRI__array__22842[33];

/* TrackToTrain::AVar690 */
typedef MLRI__array__22842 MLRI__AVar690_TrackToTrain;

typedef struct {
  kcg_int N_ITER;
  MLRI__AVar690_TrackToTrain Array;
} MLRI__struct__22845;

/* TrackToTrain::SVar690 */
typedef MLRI__struct__22845 MLRI__SVar690_TrackToTrain;

typedef struct {
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
  MLRI__SVar690_TrackToTrain Struct30;
} MLRI__struct__22850;

/* TrackToTrain::Track_Condition_Station_Platforms */
typedef MLRI__struct__22850 MLRI__Track_Condition_Station_Platforms_TrackToTrain;

typedef struct {
  kcg_int D_TRACKCOND;
  kcg_int L_TRACKCOND;
  kcg_int M_TRACKCOND;
} MLRI__struct__22864;

/* TrackToTrain::Var680 */
typedef MLRI__struct__22864 MLRI__Var680_TrackToTrain;

typedef MLRI__Var680_TrackToTrain MLRI__array__22870[33];

/* TrackToTrain::AVar680 */
typedef MLRI__array__22870 MLRI__AVar680_TrackToTrain;

typedef struct {
  kcg_int N_ITER;
  MLRI__AVar680_TrackToTrain Array;
} MLRI__struct__22873;

/* TrackToTrain::SVar680 */
typedef MLRI__struct__22873 MLRI__SVar680_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int Q_TRACKINIT;
  kcg_int D_TRACKINIT;
  kcg_int D_TRACKCOND;
  kcg_int L_TRACKCOND;
  kcg_int M_TRACKCOND;
  MLRI__SVar680_TrackToTrain Struct29;
} MLRI__struct__22878;

/* TrackToTrain::Track_Condition */
typedef MLRI__struct__22878 MLRI__Track_Condition_TrackToTrain;

typedef struct {
  kcg_int D_TRACKCOND;
  kcg_int L_TRACKCOND;
} MLRI__struct__22891;

/* TrackToTrain::Var670 */
typedef MLRI__struct__22891 MLRI__Var670_TrackToTrain;

typedef MLRI__Var670_TrackToTrain MLRI__array__22896[33];

/* TrackToTrain::AVar670 */
typedef MLRI__array__22896 MLRI__AVar670_TrackToTrain;

typedef struct {
  kcg_int N_ITER;
  MLRI__AVar670_TrackToTrain Array;
} MLRI__struct__22899;

/* TrackToTrain::SVar670 */
typedef MLRI__struct__22899 MLRI__SVar670_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_TRACKCOND;
  kcg_int L_TRACKCOND;
  MLRI__SVar670_TrackToTrain Struct28;
} MLRI__struct__22904;

/* TrackToTrain::Track_Condition_Big_Metal_Masses */
typedef MLRI__struct__22904 MLRI__Track_Condition_Big_Metal_Masses_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_TSR;
} MLRI__struct__22914;

/* TrackToTrain::Temporary_Speed_Restriction_Revocation */
typedef MLRI__struct__22914 MLRI__Temporary_Speed_Restriction_Revocation_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int NID_TSR;
  kcg_int D_TSR;
  kcg_int L_TSR;
  kcg_int Q_FRONT;
  kcg_int V_TSR;
} MLRI__struct__22921;

/* TrackToTrain::Temporary_Speed_Restriction */
typedef MLRI__struct__22921 MLRI__Temporary_Speed_Restriction_TrackToTrain;

typedef struct {
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
} MLRI__struct__22933;

/* TrackToTrain::Var137 */
typedef MLRI__struct__22933 MLRI__Var137_TrackToTrain;

/* TrackToTrain::Var490 */
typedef MLRI__struct__22933 MLRI__Var490_TrackToTrain;

/* TrackToTrain::Var630 */
typedef MLRI__struct__22933 MLRI__Var630_TrackToTrain;

typedef MLRI__struct__22933 MLRI__array__22939[33];

/* TrackToTrain::AVar490 */
typedef MLRI__array__22939 MLRI__AVar490_TrackToTrain;

/* TrackToTrain::AVar630 */
typedef MLRI__array__22939 MLRI__AVar630_TrackToTrain;

typedef struct {
  kcg_int N_ITER;
  MLRI__array__22939 Array;
} MLRI__struct__22942;

/* TrackToTrain::SVar490 */
typedef MLRI__struct__22942 MLRI__SVar490_TrackToTrain;

/* TrackToTrain::SVar630 */
typedef MLRI__struct__22942 MLRI__SVar630_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  MLRI__SVar630_TrackToTrain Struct27;
} MLRI__struct__22947;

/* TrackToTrain::List_of_Balises_in_SR_Authority */
typedef MLRI__struct__22947 MLRI__List_of_Balises_in_SR_Authority_TrackToTrain;

typedef struct { kcg_int D_LOC; MLRI__Q_LGTLOC q_lgtloc; } MLRI__struct__22954;

/* TrackToTrain::Var580 */
typedef MLRI__struct__22954 MLRI__Var580_TrackToTrain;

typedef MLRI__Var580_TrackToTrain MLRI__array__22959[33];

/* TrackToTrain::AVar580 */
typedef MLRI__array__22959 MLRI__AVar580_TrackToTrain;

typedef struct {
  kcg_int N_ITER;
  MLRI__AVar580_TrackToTrain Array;
} MLRI__struct__22962;

/* TrackToTrain::SVar580 */
typedef MLRI__struct__22962 MLRI__SVar580_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  MLRI__Q_DIR q_dir;
  kcg_int L_PACKET;
  MLRI__Q_SCALE q_scale;
  kcg_int T_CYCLOC;
  kcg_int D_CYCLOC;
  MLRI__M_LOC m_loc;
  MLRI__SVar580_TrackToTrain Struct26;
} MLRI__struct__22967;

/* TrackToTrain::Position_Report_Parameters */
typedef MLRI__struct__22967 MLRI__Position_Report_Parameters_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int T_MAR;
  kcg_int T_TIMEOUTRQST;
  kcg_int T_CYCRQST;
} MLRI__struct__22978;

/* TrackToTrain::Movement_Authority_Request_Parameters */
typedef MLRI__struct__22978 MLRI__Movement_Authority_Request_Parameters_TrackToTrain;

typedef struct {
  kcg_int D_PBD;
  kcg_int Q_GDIR;
  kcg_int G_PBDSR;
  kcg_int Q_PBDSR;
  kcg_int D_PBDSR;
  kcg_int L_PBDSR;
} MLRI__struct__22987;

/* TrackToTrain::Var520 */
typedef MLRI__struct__22987 MLRI__Var520_TrackToTrain;

typedef MLRI__Var520_TrackToTrain MLRI__array__22996[33];

/* TrackToTrain::AVar520 */
typedef MLRI__array__22996 MLRI__AVar520_TrackToTrain;

typedef struct {
  kcg_int N_ITER;
  MLRI__AVar520_TrackToTrain Array;
} MLRI__struct__22999;

/* TrackToTrain::SVar520 */
typedef MLRI__struct__22999 MLRI__SVar520_TrackToTrain;

typedef struct {
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
  MLRI__SVar520_TrackToTrain Struct25;
} MLRI__struct__23004;

/* TrackToTrain::Permitted_Braking_Distance_Information */
typedef MLRI__struct__23004 MLRI__Permitted_Braking_Distance_Information_TrackToTrain;

typedef struct {
  kcg_int M_AXLELOADCAT;
  kcg_int V_AXLELOAD;
} MLRI__struct__23020;

/* TrackToTrain::Var510 */
typedef MLRI__struct__23020 MLRI__Var510_TrackToTrain;

/* TrackToTrain::Var512 */
typedef MLRI__struct__23020 MLRI__Var512_TrackToTrain;

typedef MLRI__struct__23020 MLRI__array__23025[33];

/* TrackToTrain::AVar510 */
typedef MLRI__array__23025 MLRI__AVar510_TrackToTrain;

/* TrackToTrain::AVar512 */
typedef MLRI__array__23025 MLRI__AVar512_TrackToTrain;

typedef struct {
  kcg_int N_ITER;
  MLRI__array__23025 Array;
} MLRI__struct__23028;

/* TrackToTrain::SVar510 */
typedef MLRI__struct__23028 MLRI__SVar510_TrackToTrain;

/* TrackToTrain::SVar512 */
typedef MLRI__struct__23028 MLRI__SVar512_TrackToTrain;

typedef struct {
  kcg_int D_AXLELOAD;
  kcg_int L_AXLELOAD;
  kcg_int Q_FRONT;
  MLRI__SVar512_TrackToTrain Struct68;
} MLRI__struct__23033;

/* TrackToTrain::Var511 */
typedef MLRI__struct__23033 MLRI__Var511_TrackToTrain;

typedef MLRI__Var511_TrackToTrain MLRI__array__23040[33];

/* TrackToTrain::AVar511 */
typedef MLRI__array__23040 MLRI__AVar511_TrackToTrain;

typedef struct {
  kcg_int N_ITER;
  MLRI__AVar511_TrackToTrain Array;
} MLRI__struct__23043;

/* TrackToTrain::SVar511 */
typedef MLRI__struct__23043 MLRI__SVar511_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int Q_TRACKINIT;
  kcg_int D_TRACKINIT;
  kcg_int D_AXLELOAD;
  kcg_int L_AXLELOAD;
  kcg_int Q_FRONT;
  MLRI__SVar510_TrackToTrain Struct22;
  MLRI__SVar511_TrackToTrain Struct23;
} MLRI__struct__23048;

/* TrackToTrain::Axle_Load_Speed_Profile */
typedef MLRI__struct__23048 MLRI__Axle_Load_Speed_Profile_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  MLRI__SVar490_TrackToTrain Struct21;
} MLRI__struct__23062;

/* TrackToTrain::List_of_balises_for_SH_Area */
typedef MLRI__struct__23062 MLRI__List_of_balises_for_SH_Area_TrackToTrain;

typedef struct { kcg_int M_LEVELTR; kcg_int NID_NTC; } MLRI__struct__23069;

/* TrackToTrain::Var460 */
typedef MLRI__struct__23069 MLRI__Var460_TrackToTrain;

typedef MLRI__Var460_TrackToTrain MLRI__array__23074[33];

/* TrackToTrain::AVar460 */
typedef MLRI__array__23074 MLRI__AVar460_TrackToTrain;

typedef struct {
  kcg_int N_ITER;
  MLRI__AVar460_TrackToTrain Array;
} MLRI__struct__23077;

/* TrackToTrain::SVar460 */
typedef MLRI__struct__23077 MLRI__SVar460_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  MLRI__SVar460_TrackToTrain Struct20;
} MLRI__struct__23082;

/* TrackToTrain::Conditional_Level_Transition_Order */
typedef MLRI__struct__23082 MLRI__Conditional_Level_Transition_Order_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_MN;
} MLRI__struct__23091;

/* TrackToTrain::Radio_Network_registration */
typedef MLRI__struct__23091 MLRI__Radio_Network_registration_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int NID_XUSER;
  kcg_int NID_NTC;
  kcg_int Other_data_depending_on__NID_XUSER;
} MLRI__struct__23098;

/* TrackToTrain::Data_used_by_applications_outside_the_ERTMSETCS_system */
typedef MLRI__struct__23098 MLRI__Data_used_by_applications_outside_the_ERTMSETCS_system_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_RBC;
  kcg_int NID_C;
  kcg_int NID_RBC;
  kcg_int NID_RADIO;
  kcg_int Q_SLEEPSESSION;
} MLRI__struct__23107;

/* TrackToTrain::Session_Management */
typedef MLRI__struct__23107 MLRI__Session_Management_TrackToTrain;

typedef struct {
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
} MLRI__struct__23118;

/* TrackToTrain::Var410 */
typedef MLRI__struct__23118 MLRI__Var410_TrackToTrain;

typedef MLRI__Var410_TrackToTrain MLRI__array__23124[33];

/* TrackToTrain::AVar410 */
typedef MLRI__array__23124 MLRI__AVar410_TrackToTrain;

typedef struct {
  kcg_int N_ITER;
  MLRI__AVar410_TrackToTrain Array;
} MLRI__struct__23127;

/* TrackToTrain::SVar410 */
typedef MLRI__struct__23127 MLRI__SVar410_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_LEVELTR;
  kcg_int M_LEVELTR;
  kcg_int NID_NTC;
  kcg_int L_ACKLEVELTR;
  MLRI__SVar410_TrackToTrain Struct19;
} MLRI__struct__23132;

/* TrackToTrain::Level_Transition_Order */
typedef MLRI__struct__23132 MLRI__Level_Transition_Order_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_CURRENT;
  kcg_int M_CURRENT;
} MLRI__struct__23144;

/* TrackToTrain::Track_Condition_Change_of_allowed_current_consumption */
typedef MLRI__struct__23144 MLRI__Track_Condition_Change_of_allowed_current_consumption_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_TRACTION;
  kcg_int M_VOLTAGE;
  kcg_int NID_CTRACTION;
} MLRI__struct__23153;

/* TrackToTrain::Track_Condition_Change_of_traction_system */
typedef MLRI__struct__23153 MLRI__Track_Condition_Change_of_traction_system_TrackToTrain;

typedef struct {
  kcg_int Q_DIFF;
  kcg_int NC_CDDIFF;
  kcg_int NC_DIFF;
  kcg_int V_DIFF;
} MLRI__struct__23163;

/* TrackToTrain::Var270 */
typedef MLRI__struct__23163 MLRI__Var270_TrackToTrain;

/* TrackToTrain::Var272 */
typedef MLRI__struct__23163 MLRI__Var272_TrackToTrain;

typedef MLRI__struct__23163 MLRI__array__23170[33];

/* TrackToTrain::AVar270 */
typedef MLRI__array__23170 MLRI__AVar270_TrackToTrain;

/* TrackToTrain::AVar272 */
typedef MLRI__array__23170 MLRI__AVar272_TrackToTrain;

typedef struct {
  kcg_int N_ITER;
  MLRI__array__23170 Array;
} MLRI__struct__23173;

/* TrackToTrain::SVar270 */
typedef MLRI__struct__23173 MLRI__SVar270_TrackToTrain;

/* TrackToTrain::SVar272 */
typedef MLRI__struct__23173 MLRI__SVar272_TrackToTrain;

typedef struct {
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  MLRI__SVar272_TrackToTrain Struct62;
} MLRI__struct__23178;

/* TrackToTrain::Var271 */
typedef MLRI__struct__23178 MLRI__Var271_TrackToTrain;

typedef MLRI__Var271_TrackToTrain MLRI__array__23185[33];

/* TrackToTrain::AVar271 */
typedef MLRI__array__23185 MLRI__AVar271_TrackToTrain;

typedef struct {
  kcg_int N_ITER;
  MLRI__AVar271_TrackToTrain Array;
} MLRI__struct__23188;

/* TrackToTrain::SVar271 */
typedef MLRI__struct__23188 MLRI__SVar271_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_STATIC;
  kcg_int V_STATIC;
  kcg_int Q_FRONT;
  MLRI__SVar270_TrackToTrain Struct16;
  MLRI__SVar271_TrackToTrain Struct17;
} MLRI__struct__23193;

/* TrackToTrain::International_Static_Speed_Profile */
typedef MLRI__struct__23193 MLRI__International_Static_Speed_Profile_TrackToTrain;

typedef struct {
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
} MLRI__struct__23205;

/* TrackToTrain::Var210 */
typedef MLRI__struct__23205 MLRI__Var210_TrackToTrain;

typedef MLRI__Var210_TrackToTrain MLRI__array__23211[33];

/* TrackToTrain::AVar210 */
typedef MLRI__array__23211 MLRI__AVar210_TrackToTrain;

typedef struct {
  kcg_int N_ITER;
  MLRI__AVar210_TrackToTrain Array;
} MLRI__struct__23214;

/* TrackToTrain::SVar210 */
typedef MLRI__struct__23214 MLRI__SVar210_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_GRADIENT;
  kcg_int Q_GDIR;
  kcg_int G_A;
  MLRI__SVar210_TrackToTrain Struct15;
} MLRI__struct__23219;

/* TrackToTrain::Gradient_Profile */
typedef MLRI__struct__23219 MLRI__Gradient_Profile_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int L_SECTION;
} MLRI__struct__23230;

/* TrackToTrain::Repositioning_Information */
typedef MLRI__struct__23230 MLRI__Repositioning_Information_TrackToTrain;

typedef struct {
  kcg_int L_SECTION;
  kcg_int Q_SECTIONTIMER;
  kcg_int T_SECTIONTIMER;
  kcg_int D_SECTIONTIMERSTOPLOC;
} MLRI__struct__23238;

/* TrackToTrain::Var120 */
typedef MLRI__struct__23238 MLRI__Var120_TrackToTrain;

/* TrackToTrain::Var150 */
typedef MLRI__struct__23238 MLRI__Var150_TrackToTrain;

typedef MLRI__struct__23238 MLRI__array__23245[33];

/* TrackToTrain::AVar120 */
typedef MLRI__array__23245 MLRI__AVar120_TrackToTrain;

/* TrackToTrain::AVar150 */
typedef MLRI__array__23245 MLRI__AVar150_TrackToTrain;

typedef struct {
  kcg_int N_ITER;
  MLRI__array__23245 Array;
} MLRI__struct__23248;

/* TrackToTrain::SVar120 */
typedef MLRI__struct__23248 MLRI__SVar120_TrackToTrain;

/* TrackToTrain::SVar150 */
typedef MLRI__struct__23248 MLRI__SVar150_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int V_LOA;
  kcg_int T_LOA;
  MLRI__SVar150_TrackToTrain Struct14;
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
} MLRI__struct__23253;

/* TrackToTrain::Level_23_Movement_Authority */
typedef MLRI__struct__23253 MLRI__Level_23_Movement_Authority_TrackToTrain;

typedef struct {
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int D_SR;
} MLRI__struct__23278;

/* TrackToTrain::Var130 */
typedef MLRI__struct__23278 MLRI__Var130_TrackToTrain;

typedef MLRI__Var130_TrackToTrain MLRI__array__23285[33];

/* TrackToTrain::AVar130 */
typedef MLRI__array__23285 MLRI__AVar130_TrackToTrain;

typedef struct {
  kcg_int N_ITER;
  MLRI__AVar130_TrackToTrain Array;
} MLRI__struct__23288;

/* TrackToTrain::SVar130 */
typedef MLRI__struct__23288 MLRI__SVar130_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  MLRI__Var137_TrackToTrain Struct9;
  MLRI__Var137_TrackToTrain Struct12;
  kcg_int D_SR;
  MLRI__SVar130_TrackToTrain Struct13;
} MLRI__struct__23293;

/* TrackToTrain::Staff_Responsible_distance_Information_from_loop */
typedef MLRI__struct__23293 MLRI__Staff_Responsible_distance_Information_from_loop_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int V_MAIN;
  kcg_int V_LOA;
  kcg_int T_LOA;
  MLRI__SVar120_TrackToTrain Struct6;
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
} MLRI__struct__23304;

/* TrackToTrain::Level_1_Movement_Authority */
typedef MLRI__struct__23304 MLRI__Level_1_Movement_Authority_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_VBCO;
  kcg_int NID_VBCMK;
  kcg_int NID_C;
  kcg_int T_VBC;
} MLRI__struct__23330;

/* TrackToTrain::Virtual_Balise_Cover_order */
typedef MLRI__struct__23330 MLRI__Virtual_Balise_Cover_order_TrackToTrain;

typedef struct {
  kcg_int D_LINK;
  kcg_int Q_NEWCOUNTRY;
  kcg_int NID_C;
  kcg_int NID_BG;
  kcg_int Q_LINKORIENTATION;
  kcg_int Q_LINKREACTION;
  kcg_int Q_LOCACC;
} MLRI__struct__23340;

/* TrackToTrain::Var50 */
typedef MLRI__struct__23340 MLRI__Var50_TrackToTrain;

typedef MLRI__Var50_TrackToTrain MLRI__array__23350[33];

/* TrackToTrain::AVar50 */
typedef MLRI__array__23350 MLRI__AVar50_TrackToTrain;

typedef struct {
  kcg_int N_ITER;
  MLRI__AVar50_TrackToTrain Array;
} MLRI__struct__23353;

/* TrackToTrain::SVar50 */
typedef MLRI__struct__23353 MLRI__SVar50_TrackToTrain;

typedef struct {
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
  MLRI__SVar50_TrackToTrain Struct5;
} MLRI__struct__23358;

/* TrackToTrain::Linking */
typedef MLRI__struct__23358 MLRI__Linking_TrackToTrain;

typedef struct { kcg_int L_NVKRINT; kcg_real M_NVKRINT; } MLRI__struct__23373;

/* TrackToTrain::Var34 */
typedef MLRI__struct__23373 MLRI__Var34_TrackToTrain;

typedef MLRI__Var34_TrackToTrain MLRI__array__23378[33];

/* TrackToTrain::AVar34 */
typedef MLRI__array__23378 MLRI__AVar34_TrackToTrain;

typedef struct {
  kcg_int N_ITER;
  MLRI__AVar34_TrackToTrain Array;
} MLRI__struct__23381;

/* TrackToTrain::SVar34 */
typedef MLRI__struct__23381 MLRI__SVar34_TrackToTrain;

typedef struct { kcg_int V_NVKVINT; kcg_real M_NVKVINT; } MLRI__struct__23386;

/* TrackToTrain::Var31 */
typedef MLRI__struct__23386 MLRI__Var31_TrackToTrain;

/* TrackToTrain::Var33 */
typedef MLRI__struct__23386 MLRI__Var33_TrackToTrain;

typedef MLRI__struct__23386 MLRI__array__23391[33];

/* TrackToTrain::AVar31 */
typedef MLRI__array__23391 MLRI__AVar31_TrackToTrain;

/* TrackToTrain::AVar33 */
typedef MLRI__array__23391 MLRI__AVar33_TrackToTrain;

typedef struct {
  kcg_int N_ITER;
  MLRI__array__23391 Array;
} MLRI__struct__23394;

/* TrackToTrain::SVar31 */
typedef MLRI__struct__23394 MLRI__SVar31_TrackToTrain;

/* TrackToTrain::SVar33 */
typedef MLRI__struct__23394 MLRI__SVar33_TrackToTrain;

typedef struct {
  kcg_int Q_NVKVINTSET;
  kcg_real A_NVP12;
  kcg_real A_NVP23;
  kcg_int V_NVKVINT;
  kcg_real M_NVKVINT;
  MLRI__SVar33_TrackToTrain Struct51;
} MLRI__struct__23399;

/* TrackToTrain::Var32 */
typedef MLRI__struct__23399 MLRI__Var32_TrackToTrain;

typedef MLRI__Var32_TrackToTrain MLRI__array__23408[33];

/* TrackToTrain::AVar32 */
typedef MLRI__array__23408 MLRI__AVar32_TrackToTrain;

typedef struct {
  kcg_int N_ITER;
  MLRI__AVar32_TrackToTrain Array;
} MLRI__struct__23411;

/* TrackToTrain::SVar32 */
typedef MLRI__struct__23411 MLRI__SVar32_TrackToTrain;

typedef struct { kcg_int NID_C; } MLRI__struct__23416;

/* TrackToTrain::Var30 */
typedef MLRI__struct__23416 MLRI__Var30_TrackToTrain;

typedef MLRI__Var30_TrackToTrain MLRI__array__23420[33];

/* TrackToTrain::AVar30 */
typedef MLRI__array__23420 MLRI__AVar30_TrackToTrain;

typedef struct {
  kcg_int N_ITER;
  MLRI__AVar30_TrackToTrain Array;
} MLRI__struct__23423;

/* TrackToTrain::SVar30 */
typedef MLRI__struct__23423 MLRI__SVar30_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int Q_SCALE;
  kcg_int D_VALIDNV;
  kcg_int NID_C;
  MLRI__SVar30_TrackToTrain Struct0;
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
  MLRI__SVar31_TrackToTrain Struct1;
  MLRI__SVar32_TrackToTrain Struct2;
  kcg_int L_NVKRINT;
  kcg_real M_NVKRINT;
  MLRI__SVar34_TrackToTrain Struct4;
  kcg_real M_NVKTINT;
} MLRI__struct__23428;

/* TrackToTrain::National_Values */
typedef MLRI__struct__23428 MLRI__National_Values_TrackToTrain;

typedef struct {
  kcg_int NID_PACKET;
  kcg_int Q_DIR;
  kcg_int L_PACKET;
  kcg_int M_VERSION;
} MLRI__struct__23478;

/* TrackToTrain::System_Version_order */
typedef MLRI__struct__23478 MLRI__System_Version_order_TrackToTrain;

typedef struct { kcg_int NID_PACKET; kcg_int NID_VBCMK; } MLRI__struct__23485;

/* TrackToTrain::Virtual_Balise_Cover_marker */
typedef MLRI__struct__23485 MLRI__Virtual_Balise_Cover_marker_TrackToTrain;

typedef MLRI__positionedBG_T_TrainPosition_Types_Pck MLRI__array__23490[1];

typedef MLRI__positionedBG_T_TrainPosition_Types_Pck MLRI__array__24642[7];

#ifndef MLRI__kcg_copy_struct__21201
#define MLRI__kcg_copy_struct__21201(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21201)))
#endif /* MLRI__kcg_copy_struct__21201 */

#ifndef MLRI__kcg_copy_struct__21209
#define MLRI__kcg_copy_struct__21209(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21209)))
#endif /* MLRI__kcg_copy_struct__21209 */

#ifndef MLRI__kcg_copy_struct__21221
#define MLRI__kcg_copy_struct__21221(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21221)))
#endif /* MLRI__kcg_copy_struct__21221 */

#ifndef MLRI__kcg_copy_struct__21228
#define MLRI__kcg_copy_struct__21228(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21228)))
#endif /* MLRI__kcg_copy_struct__21228 */

#ifndef MLRI__kcg_copy_struct__21232
#define MLRI__kcg_copy_struct__21232(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21232)))
#endif /* MLRI__kcg_copy_struct__21232 */

#ifndef MLRI__kcg_copy_struct__21238
#define MLRI__kcg_copy_struct__21238(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21238)))
#endif /* MLRI__kcg_copy_struct__21238 */

#ifndef MLRI__kcg_copy_struct__21243
#define MLRI__kcg_copy_struct__21243(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21243)))
#endif /* MLRI__kcg_copy_struct__21243 */

#ifndef MLRI__kcg_copy_struct__21250
#define MLRI__kcg_copy_struct__21250(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21250)))
#endif /* MLRI__kcg_copy_struct__21250 */

#ifndef MLRI__kcg_copy_struct__21256
#define MLRI__kcg_copy_struct__21256(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21256)))
#endif /* MLRI__kcg_copy_struct__21256 */

#ifndef MLRI__kcg_copy_struct__21261
#define MLRI__kcg_copy_struct__21261(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21261)))
#endif /* MLRI__kcg_copy_struct__21261 */

#ifndef MLRI__kcg_copy_struct__21280
#define MLRI__kcg_copy_struct__21280(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21280)))
#endif /* MLRI__kcg_copy_struct__21280 */

#ifndef MLRI__kcg_copy_struct__21285
#define MLRI__kcg_copy_struct__21285(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21285)))
#endif /* MLRI__kcg_copy_struct__21285 */

#ifndef MLRI__kcg_copy_struct__21305
#define MLRI__kcg_copy_struct__21305(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21305)))
#endif /* MLRI__kcg_copy_struct__21305 */

#ifndef MLRI__kcg_copy_struct__21310
#define MLRI__kcg_copy_struct__21310(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21310)))
#endif /* MLRI__kcg_copy_struct__21310 */

#ifndef MLRI__kcg_copy_struct__21319
#define MLRI__kcg_copy_struct__21319(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21319)))
#endif /* MLRI__kcg_copy_struct__21319 */

#ifndef MLRI__kcg_copy_struct__21325
#define MLRI__kcg_copy_struct__21325(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21325)))
#endif /* MLRI__kcg_copy_struct__21325 */

#ifndef MLRI__kcg_copy_struct__21331
#define MLRI__kcg_copy_struct__21331(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21331)))
#endif /* MLRI__kcg_copy_struct__21331 */

#ifndef MLRI__kcg_copy_struct__21345
#define MLRI__kcg_copy_struct__21345(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21345)))
#endif /* MLRI__kcg_copy_struct__21345 */

#ifndef MLRI__kcg_copy_struct__21354
#define MLRI__kcg_copy_struct__21354(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21354)))
#endif /* MLRI__kcg_copy_struct__21354 */

#ifndef MLRI__kcg_copy_struct__21360
#define MLRI__kcg_copy_struct__21360(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21360)))
#endif /* MLRI__kcg_copy_struct__21360 */

#ifndef MLRI__kcg_copy_struct__21373
#define MLRI__kcg_copy_struct__21373(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21373)))
#endif /* MLRI__kcg_copy_struct__21373 */

#ifndef MLRI__kcg_copy_struct__21384
#define MLRI__kcg_copy_struct__21384(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21384)))
#endif /* MLRI__kcg_copy_struct__21384 */

#ifndef MLRI__kcg_copy_struct__21396
#define MLRI__kcg_copy_struct__21396(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21396)))
#endif /* MLRI__kcg_copy_struct__21396 */

#ifndef MLRI__kcg_copy_struct__21410
#define MLRI__kcg_copy_struct__21410(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21410)))
#endif /* MLRI__kcg_copy_struct__21410 */

#ifndef MLRI__kcg_copy_struct__21427
#define MLRI__kcg_copy_struct__21427(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21427)))
#endif /* MLRI__kcg_copy_struct__21427 */

#ifndef MLRI__kcg_copy_struct__21432
#define MLRI__kcg_copy_struct__21432(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21432)))
#endif /* MLRI__kcg_copy_struct__21432 */

#ifndef MLRI__kcg_copy_struct__21440
#define MLRI__kcg_copy_struct__21440(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21440)))
#endif /* MLRI__kcg_copy_struct__21440 */

#ifndef MLRI__kcg_copy_struct__21451
#define MLRI__kcg_copy_struct__21451(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21451)))
#endif /* MLRI__kcg_copy_struct__21451 */

#ifndef MLRI__kcg_copy_struct__21461
#define MLRI__kcg_copy_struct__21461(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21461)))
#endif /* MLRI__kcg_copy_struct__21461 */

#ifndef MLRI__kcg_copy_struct__21466
#define MLRI__kcg_copy_struct__21466(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21466)))
#endif /* MLRI__kcg_copy_struct__21466 */

#ifndef MLRI__kcg_copy_struct__21472
#define MLRI__kcg_copy_struct__21472(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21472)))
#endif /* MLRI__kcg_copy_struct__21472 */

#ifndef MLRI__kcg_copy_struct__21484
#define MLRI__kcg_copy_struct__21484(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21484)))
#endif /* MLRI__kcg_copy_struct__21484 */

#ifndef MLRI__kcg_copy_struct__21489
#define MLRI__kcg_copy_struct__21489(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21489)))
#endif /* MLRI__kcg_copy_struct__21489 */

#ifndef MLRI__kcg_copy_struct__21498
#define MLRI__kcg_copy_struct__21498(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21498)))
#endif /* MLRI__kcg_copy_struct__21498 */

#ifndef MLRI__kcg_copy_struct__21506
#define MLRI__kcg_copy_struct__21506(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21506)))
#endif /* MLRI__kcg_copy_struct__21506 */

#ifndef MLRI__kcg_copy_struct__21515
#define MLRI__kcg_copy_struct__21515(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21515)))
#endif /* MLRI__kcg_copy_struct__21515 */

#ifndef MLRI__kcg_copy_struct__21521
#define MLRI__kcg_copy_struct__21521(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21521)))
#endif /* MLRI__kcg_copy_struct__21521 */

#ifndef MLRI__kcg_copy_struct__21525
#define MLRI__kcg_copy_struct__21525(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21525)))
#endif /* MLRI__kcg_copy_struct__21525 */

#ifndef MLRI__kcg_copy_struct__21530
#define MLRI__kcg_copy_struct__21530(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21530)))
#endif /* MLRI__kcg_copy_struct__21530 */

#ifndef MLRI__kcg_copy_struct__21543
#define MLRI__kcg_copy_struct__21543(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21543)))
#endif /* MLRI__kcg_copy_struct__21543 */

#ifndef MLRI__kcg_copy_struct__21552
#define MLRI__kcg_copy_struct__21552(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21552)))
#endif /* MLRI__kcg_copy_struct__21552 */

#ifndef MLRI__kcg_copy_struct__21556
#define MLRI__kcg_copy_struct__21556(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21556)))
#endif /* MLRI__kcg_copy_struct__21556 */

#ifndef MLRI__kcg_copy_struct__21566
#define MLRI__kcg_copy_struct__21566(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21566)))
#endif /* MLRI__kcg_copy_struct__21566 */

#ifndef MLRI__kcg_copy_struct__21573
#define MLRI__kcg_copy_struct__21573(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21573)))
#endif /* MLRI__kcg_copy_struct__21573 */

#ifndef MLRI__kcg_copy_struct__21579
#define MLRI__kcg_copy_struct__21579(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21579)))
#endif /* MLRI__kcg_copy_struct__21579 */

#ifndef MLRI__kcg_copy_struct__21590
#define MLRI__kcg_copy_struct__21590(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21590)))
#endif /* MLRI__kcg_copy_struct__21590 */

#ifndef MLRI__kcg_copy_struct__21603
#define MLRI__kcg_copy_struct__21603(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21603)))
#endif /* MLRI__kcg_copy_struct__21603 */

#ifndef MLRI__kcg_copy_struct__21608
#define MLRI__kcg_copy_struct__21608(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21608)))
#endif /* MLRI__kcg_copy_struct__21608 */

#ifndef MLRI__kcg_copy_struct__21614
#define MLRI__kcg_copy_struct__21614(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21614)))
#endif /* MLRI__kcg_copy_struct__21614 */

#ifndef MLRI__kcg_copy_struct__21619
#define MLRI__kcg_copy_struct__21619(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21619)))
#endif /* MLRI__kcg_copy_struct__21619 */

#ifndef MLRI__kcg_copy_struct__21628
#define MLRI__kcg_copy_struct__21628(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21628)))
#endif /* MLRI__kcg_copy_struct__21628 */

#ifndef MLRI__kcg_copy_struct__21633
#define MLRI__kcg_copy_struct__21633(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21633)))
#endif /* MLRI__kcg_copy_struct__21633 */

#ifndef MLRI__kcg_copy_struct__21639
#define MLRI__kcg_copy_struct__21639(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21639)))
#endif /* MLRI__kcg_copy_struct__21639 */

#ifndef MLRI__kcg_copy_struct__21647
#define MLRI__kcg_copy_struct__21647(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21647)))
#endif /* MLRI__kcg_copy_struct__21647 */

#ifndef MLRI__kcg_copy_struct__21652
#define MLRI__kcg_copy_struct__21652(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21652)))
#endif /* MLRI__kcg_copy_struct__21652 */

#ifndef MLRI__kcg_copy_struct__21657
#define MLRI__kcg_copy_struct__21657(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21657)))
#endif /* MLRI__kcg_copy_struct__21657 */

#ifndef MLRI__kcg_copy_struct__21662
#define MLRI__kcg_copy_struct__21662(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21662)))
#endif /* MLRI__kcg_copy_struct__21662 */

#ifndef MLRI__kcg_copy_struct__21667
#define MLRI__kcg_copy_struct__21667(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21667)))
#endif /* MLRI__kcg_copy_struct__21667 */

#ifndef MLRI__kcg_copy_struct__21674
#define MLRI__kcg_copy_struct__21674(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21674)))
#endif /* MLRI__kcg_copy_struct__21674 */

#ifndef MLRI__kcg_copy_struct__21684
#define MLRI__kcg_copy_struct__21684(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21684)))
#endif /* MLRI__kcg_copy_struct__21684 */

#ifndef MLRI__kcg_copy_struct__21694
#define MLRI__kcg_copy_struct__21694(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21694)))
#endif /* MLRI__kcg_copy_struct__21694 */

#ifndef MLRI__kcg_copy_struct__21699
#define MLRI__kcg_copy_struct__21699(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21699)))
#endif /* MLRI__kcg_copy_struct__21699 */

#ifndef MLRI__kcg_copy_struct__21704
#define MLRI__kcg_copy_struct__21704(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21704)))
#endif /* MLRI__kcg_copy_struct__21704 */

#ifndef MLRI__kcg_copy_struct__21713
#define MLRI__kcg_copy_struct__21713(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21713)))
#endif /* MLRI__kcg_copy_struct__21713 */

#ifndef MLRI__kcg_copy_struct__21718
#define MLRI__kcg_copy_struct__21718(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21718)))
#endif /* MLRI__kcg_copy_struct__21718 */

#ifndef MLRI__kcg_copy_struct__21729
#define MLRI__kcg_copy_struct__21729(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21729)))
#endif /* MLRI__kcg_copy_struct__21729 */

#ifndef MLRI__kcg_copy_struct__21735
#define MLRI__kcg_copy_struct__21735(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21735)))
#endif /* MLRI__kcg_copy_struct__21735 */

#ifndef MLRI__kcg_copy_struct__21743
#define MLRI__kcg_copy_struct__21743(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21743)))
#endif /* MLRI__kcg_copy_struct__21743 */

#ifndef MLRI__kcg_copy_struct__21753
#define MLRI__kcg_copy_struct__21753(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21753)))
#endif /* MLRI__kcg_copy_struct__21753 */

#ifndef MLRI__kcg_copy_struct__21768
#define MLRI__kcg_copy_struct__21768(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21768)))
#endif /* MLRI__kcg_copy_struct__21768 */

#ifndef MLRI__kcg_copy_struct__21783
#define MLRI__kcg_copy_struct__21783(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21783)))
#endif /* MLRI__kcg_copy_struct__21783 */

#ifndef MLRI__kcg_copy_struct__21800
#define MLRI__kcg_copy_struct__21800(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21800)))
#endif /* MLRI__kcg_copy_struct__21800 */

#ifndef MLRI__kcg_copy_struct__21815
#define MLRI__kcg_copy_struct__21815(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21815)))
#endif /* MLRI__kcg_copy_struct__21815 */

#ifndef MLRI__kcg_copy_struct__21829
#define MLRI__kcg_copy_struct__21829(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21829)))
#endif /* MLRI__kcg_copy_struct__21829 */

#ifndef MLRI__kcg_copy_struct__21843
#define MLRI__kcg_copy_struct__21843(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21843)))
#endif /* MLRI__kcg_copy_struct__21843 */

#ifndef MLRI__kcg_copy_struct__21860
#define MLRI__kcg_copy_struct__21860(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21860)))
#endif /* MLRI__kcg_copy_struct__21860 */

#ifndef MLRI__kcg_copy_struct__21869
#define MLRI__kcg_copy_struct__21869(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21869)))
#endif /* MLRI__kcg_copy_struct__21869 */

#ifndef MLRI__kcg_copy_struct__21884
#define MLRI__kcg_copy_struct__21884(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21884)))
#endif /* MLRI__kcg_copy_struct__21884 */

#ifndef MLRI__kcg_copy_struct__21895
#define MLRI__kcg_copy_struct__21895(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21895)))
#endif /* MLRI__kcg_copy_struct__21895 */

#ifndef MLRI__kcg_copy_struct__21904
#define MLRI__kcg_copy_struct__21904(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21904)))
#endif /* MLRI__kcg_copy_struct__21904 */

#ifndef MLRI__kcg_copy_struct__21917
#define MLRI__kcg_copy_struct__21917(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21917)))
#endif /* MLRI__kcg_copy_struct__21917 */

#ifndef MLRI__kcg_copy_struct__21926
#define MLRI__kcg_copy_struct__21926(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21926)))
#endif /* MLRI__kcg_copy_struct__21926 */

#ifndef MLRI__kcg_copy_struct__21937
#define MLRI__kcg_copy_struct__21937(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21937)))
#endif /* MLRI__kcg_copy_struct__21937 */

#ifndef MLRI__kcg_copy_struct__21945
#define MLRI__kcg_copy_struct__21945(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21945)))
#endif /* MLRI__kcg_copy_struct__21945 */

#ifndef MLRI__kcg_copy_struct__21956
#define MLRI__kcg_copy_struct__21956(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21956)))
#endif /* MLRI__kcg_copy_struct__21956 */

#ifndef MLRI__kcg_copy_struct__21967
#define MLRI__kcg_copy_struct__21967(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21967)))
#endif /* MLRI__kcg_copy_struct__21967 */

#ifndef MLRI__kcg_copy_struct__21979
#define MLRI__kcg_copy_struct__21979(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21979)))
#endif /* MLRI__kcg_copy_struct__21979 */

#ifndef MLRI__kcg_copy_struct__21989
#define MLRI__kcg_copy_struct__21989(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21989)))
#endif /* MLRI__kcg_copy_struct__21989 */

#ifndef MLRI__kcg_copy_struct__21994
#define MLRI__kcg_copy_struct__21994(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__21994)))
#endif /* MLRI__kcg_copy_struct__21994 */

#ifndef MLRI__kcg_copy_struct__22001
#define MLRI__kcg_copy_struct__22001(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22001)))
#endif /* MLRI__kcg_copy_struct__22001 */

#ifndef MLRI__kcg_copy_struct__22008
#define MLRI__kcg_copy_struct__22008(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22008)))
#endif /* MLRI__kcg_copy_struct__22008 */

#ifndef MLRI__kcg_copy_struct__22013
#define MLRI__kcg_copy_struct__22013(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22013)))
#endif /* MLRI__kcg_copy_struct__22013 */

#ifndef MLRI__kcg_copy_struct__22017
#define MLRI__kcg_copy_struct__22017(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22017)))
#endif /* MLRI__kcg_copy_struct__22017 */

#ifndef MLRI__kcg_copy_struct__22027
#define MLRI__kcg_copy_struct__22027(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22027)))
#endif /* MLRI__kcg_copy_struct__22027 */

#ifndef MLRI__kcg_copy_struct__22035
#define MLRI__kcg_copy_struct__22035(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22035)))
#endif /* MLRI__kcg_copy_struct__22035 */

#ifndef MLRI__kcg_copy_struct__22073
#define MLRI__kcg_copy_struct__22073(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22073)))
#endif /* MLRI__kcg_copy_struct__22073 */

#ifndef MLRI__kcg_copy_struct__22080
#define MLRI__kcg_copy_struct__22080(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22080)))
#endif /* MLRI__kcg_copy_struct__22080 */

#ifndef MLRI__kcg_copy_struct__22089
#define MLRI__kcg_copy_struct__22089(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22089)))
#endif /* MLRI__kcg_copy_struct__22089 */

#ifndef MLRI__kcg_copy_struct__22096
#define MLRI__kcg_copy_struct__22096(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22096)))
#endif /* MLRI__kcg_copy_struct__22096 */

#ifndef MLRI__kcg_copy_struct__22101
#define MLRI__kcg_copy_struct__22101(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22101)))
#endif /* MLRI__kcg_copy_struct__22101 */

#ifndef MLRI__kcg_copy_struct__22108
#define MLRI__kcg_copy_struct__22108(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22108)))
#endif /* MLRI__kcg_copy_struct__22108 */

#ifndef MLRI__kcg_copy_struct__22112
#define MLRI__kcg_copy_struct__22112(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22112)))
#endif /* MLRI__kcg_copy_struct__22112 */

#ifndef MLRI__kcg_copy_struct__22122
#define MLRI__kcg_copy_struct__22122(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22122)))
#endif /* MLRI__kcg_copy_struct__22122 */

#ifndef MLRI__kcg_copy_struct__22127
#define MLRI__kcg_copy_struct__22127(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22127)))
#endif /* MLRI__kcg_copy_struct__22127 */

#ifndef MLRI__kcg_copy_struct__22135
#define MLRI__kcg_copy_struct__22135(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22135)))
#endif /* MLRI__kcg_copy_struct__22135 */

#ifndef MLRI__kcg_copy_struct__22159
#define MLRI__kcg_copy_struct__22159(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22159)))
#endif /* MLRI__kcg_copy_struct__22159 */

#ifndef MLRI__kcg_copy_struct__22182
#define MLRI__kcg_copy_struct__22182(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22182)))
#endif /* MLRI__kcg_copy_struct__22182 */

#ifndef MLRI__kcg_copy_struct__22194
#define MLRI__kcg_copy_struct__22194(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22194)))
#endif /* MLRI__kcg_copy_struct__22194 */

#ifndef MLRI__kcg_copy_struct__22203
#define MLRI__kcg_copy_struct__22203(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22203)))
#endif /* MLRI__kcg_copy_struct__22203 */

#ifndef MLRI__kcg_copy_struct__22207
#define MLRI__kcg_copy_struct__22207(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22207)))
#endif /* MLRI__kcg_copy_struct__22207 */

#ifndef MLRI__kcg_copy_struct__22216
#define MLRI__kcg_copy_struct__22216(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22216)))
#endif /* MLRI__kcg_copy_struct__22216 */

#ifndef MLRI__kcg_copy_struct__22220
#define MLRI__kcg_copy_struct__22220(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22220)))
#endif /* MLRI__kcg_copy_struct__22220 */

#ifndef MLRI__kcg_copy_struct__22225
#define MLRI__kcg_copy_struct__22225(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22225)))
#endif /* MLRI__kcg_copy_struct__22225 */

#ifndef MLRI__kcg_copy_struct__22233
#define MLRI__kcg_copy_struct__22233(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22233)))
#endif /* MLRI__kcg_copy_struct__22233 */

#ifndef MLRI__kcg_copy_struct__22243
#define MLRI__kcg_copy_struct__22243(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22243)))
#endif /* MLRI__kcg_copy_struct__22243 */

#ifndef MLRI__kcg_copy_struct__22256
#define MLRI__kcg_copy_struct__22256(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22256)))
#endif /* MLRI__kcg_copy_struct__22256 */

#ifndef MLRI__kcg_copy_struct__22268
#define MLRI__kcg_copy_struct__22268(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22268)))
#endif /* MLRI__kcg_copy_struct__22268 */

#ifndef MLRI__kcg_copy_struct__22277
#define MLRI__kcg_copy_struct__22277(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22277)))
#endif /* MLRI__kcg_copy_struct__22277 */

#ifndef MLRI__kcg_copy_struct__22288
#define MLRI__kcg_copy_struct__22288(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22288)))
#endif /* MLRI__kcg_copy_struct__22288 */

#ifndef MLRI__kcg_copy_struct__22297
#define MLRI__kcg_copy_struct__22297(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22297)))
#endif /* MLRI__kcg_copy_struct__22297 */

#ifndef MLRI__kcg_copy_struct__22307
#define MLRI__kcg_copy_struct__22307(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22307)))
#endif /* MLRI__kcg_copy_struct__22307 */

#ifndef MLRI__kcg_copy_struct__22316
#define MLRI__kcg_copy_struct__22316(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22316)))
#endif /* MLRI__kcg_copy_struct__22316 */

#ifndef MLRI__kcg_copy_struct__22329
#define MLRI__kcg_copy_struct__22329(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22329)))
#endif /* MLRI__kcg_copy_struct__22329 */

#ifndef MLRI__kcg_copy_struct__22339
#define MLRI__kcg_copy_struct__22339(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22339)))
#endif /* MLRI__kcg_copy_struct__22339 */

#ifndef MLRI__kcg_copy_struct__22349
#define MLRI__kcg_copy_struct__22349(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22349)))
#endif /* MLRI__kcg_copy_struct__22349 */

#ifndef MLRI__kcg_copy_struct__22361
#define MLRI__kcg_copy_struct__22361(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22361)))
#endif /* MLRI__kcg_copy_struct__22361 */

#ifndef MLRI__kcg_copy_struct__22370
#define MLRI__kcg_copy_struct__22370(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22370)))
#endif /* MLRI__kcg_copy_struct__22370 */

#ifndef MLRI__kcg_copy_struct__22380
#define MLRI__kcg_copy_struct__22380(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22380)))
#endif /* MLRI__kcg_copy_struct__22380 */

#ifndef MLRI__kcg_copy_struct__22390
#define MLRI__kcg_copy_struct__22390(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22390)))
#endif /* MLRI__kcg_copy_struct__22390 */

#ifndef MLRI__kcg_copy_struct__22397
#define MLRI__kcg_copy_struct__22397(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22397)))
#endif /* MLRI__kcg_copy_struct__22397 */

#ifndef MLRI__kcg_copy_struct__22409
#define MLRI__kcg_copy_struct__22409(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22409)))
#endif /* MLRI__kcg_copy_struct__22409 */

#ifndef MLRI__kcg_copy_struct__22418
#define MLRI__kcg_copy_struct__22418(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22418)))
#endif /* MLRI__kcg_copy_struct__22418 */

#ifndef MLRI__kcg_copy_struct__22427
#define MLRI__kcg_copy_struct__22427(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22427)))
#endif /* MLRI__kcg_copy_struct__22427 */

#ifndef MLRI__kcg_copy_struct__22437
#define MLRI__kcg_copy_struct__22437(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22437)))
#endif /* MLRI__kcg_copy_struct__22437 */

#ifndef MLRI__kcg_copy_struct__22446
#define MLRI__kcg_copy_struct__22446(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22446)))
#endif /* MLRI__kcg_copy_struct__22446 */

#ifndef MLRI__kcg_copy_struct__22455
#define MLRI__kcg_copy_struct__22455(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22455)))
#endif /* MLRI__kcg_copy_struct__22455 */

#ifndef MLRI__kcg_copy_struct__22465
#define MLRI__kcg_copy_struct__22465(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22465)))
#endif /* MLRI__kcg_copy_struct__22465 */

#ifndef MLRI__kcg_copy_struct__22474
#define MLRI__kcg_copy_struct__22474(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22474)))
#endif /* MLRI__kcg_copy_struct__22474 */

#ifndef MLRI__kcg_copy_struct__22483
#define MLRI__kcg_copy_struct__22483(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22483)))
#endif /* MLRI__kcg_copy_struct__22483 */

#ifndef MLRI__kcg_copy_struct__22487
#define MLRI__kcg_copy_struct__22487(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22487)))
#endif /* MLRI__kcg_copy_struct__22487 */

#ifndef MLRI__kcg_copy_struct__22494
#define MLRI__kcg_copy_struct__22494(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22494)))
#endif /* MLRI__kcg_copy_struct__22494 */

#ifndef MLRI__kcg_copy_struct__22501
#define MLRI__kcg_copy_struct__22501(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22501)))
#endif /* MLRI__kcg_copy_struct__22501 */

#ifndef MLRI__kcg_copy_struct__22506
#define MLRI__kcg_copy_struct__22506(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22506)))
#endif /* MLRI__kcg_copy_struct__22506 */

#ifndef MLRI__kcg_copy_struct__22514
#define MLRI__kcg_copy_struct__22514(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22514)))
#endif /* MLRI__kcg_copy_struct__22514 */

#ifndef MLRI__kcg_copy_struct__22519
#define MLRI__kcg_copy_struct__22519(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22519)))
#endif /* MLRI__kcg_copy_struct__22519 */

#ifndef MLRI__kcg_copy_struct__22534
#define MLRI__kcg_copy_struct__22534(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22534)))
#endif /* MLRI__kcg_copy_struct__22534 */

#ifndef MLRI__kcg_copy_struct__22540
#define MLRI__kcg_copy_struct__22540(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22540)))
#endif /* MLRI__kcg_copy_struct__22540 */

#ifndef MLRI__kcg_copy_struct__22547
#define MLRI__kcg_copy_struct__22547(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22547)))
#endif /* MLRI__kcg_copy_struct__22547 */

#ifndef MLRI__kcg_copy_struct__22552
#define MLRI__kcg_copy_struct__22552(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22552)))
#endif /* MLRI__kcg_copy_struct__22552 */

#ifndef MLRI__kcg_copy_struct__22558
#define MLRI__kcg_copy_struct__22558(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22558)))
#endif /* MLRI__kcg_copy_struct__22558 */

#ifndef MLRI__kcg_copy_struct__22564
#define MLRI__kcg_copy_struct__22564(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22564)))
#endif /* MLRI__kcg_copy_struct__22564 */

#ifndef MLRI__kcg_copy_struct__22574
#define MLRI__kcg_copy_struct__22574(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22574)))
#endif /* MLRI__kcg_copy_struct__22574 */

#ifndef MLRI__kcg_copy_struct__22582
#define MLRI__kcg_copy_struct__22582(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22582)))
#endif /* MLRI__kcg_copy_struct__22582 */

#ifndef MLRI__kcg_copy_struct__22589
#define MLRI__kcg_copy_struct__22589(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22589)))
#endif /* MLRI__kcg_copy_struct__22589 */

#ifndef MLRI__kcg_copy_struct__22598
#define MLRI__kcg_copy_struct__22598(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22598)))
#endif /* MLRI__kcg_copy_struct__22598 */

#ifndef MLRI__kcg_copy_struct__22607
#define MLRI__kcg_copy_struct__22607(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22607)))
#endif /* MLRI__kcg_copy_struct__22607 */

#ifndef MLRI__kcg_copy_struct__22614
#define MLRI__kcg_copy_struct__22614(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22614)))
#endif /* MLRI__kcg_copy_struct__22614 */

#ifndef MLRI__kcg_copy_struct__22623
#define MLRI__kcg_copy_struct__22623(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22623)))
#endif /* MLRI__kcg_copy_struct__22623 */

#ifndef MLRI__kcg_copy_struct__22635
#define MLRI__kcg_copy_struct__22635(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22635)))
#endif /* MLRI__kcg_copy_struct__22635 */

#ifndef MLRI__kcg_copy_struct__22648
#define MLRI__kcg_copy_struct__22648(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22648)))
#endif /* MLRI__kcg_copy_struct__22648 */

#ifndef MLRI__kcg_copy_struct__22655
#define MLRI__kcg_copy_struct__22655(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22655)))
#endif /* MLRI__kcg_copy_struct__22655 */

#ifndef MLRI__kcg_copy_struct__22667
#define MLRI__kcg_copy_struct__22667(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22667)))
#endif /* MLRI__kcg_copy_struct__22667 */

#ifndef MLRI__kcg_copy_struct__22681
#define MLRI__kcg_copy_struct__22681(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22681)))
#endif /* MLRI__kcg_copy_struct__22681 */

#ifndef MLRI__kcg_copy_struct__22693
#define MLRI__kcg_copy_struct__22693(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22693)))
#endif /* MLRI__kcg_copy_struct__22693 */

#ifndef MLRI__kcg_copy_struct__22698
#define MLRI__kcg_copy_struct__22698(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22698)))
#endif /* MLRI__kcg_copy_struct__22698 */

#ifndef MLRI__kcg_copy_struct__22712
#define MLRI__kcg_copy_struct__22712(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22712)))
#endif /* MLRI__kcg_copy_struct__22712 */

#ifndef MLRI__kcg_copy_struct__22724
#define MLRI__kcg_copy_struct__22724(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22724)))
#endif /* MLRI__kcg_copy_struct__22724 */

#ifndef MLRI__kcg_copy_struct__22729
#define MLRI__kcg_copy_struct__22729(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22729)))
#endif /* MLRI__kcg_copy_struct__22729 */

#ifndef MLRI__kcg_copy_struct__22743
#define MLRI__kcg_copy_struct__22743(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22743)))
#endif /* MLRI__kcg_copy_struct__22743 */

#ifndef MLRI__kcg_copy_struct__22749
#define MLRI__kcg_copy_struct__22749(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22749)))
#endif /* MLRI__kcg_copy_struct__22749 */

#ifndef MLRI__kcg_copy_struct__22770
#define MLRI__kcg_copy_struct__22770(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22770)))
#endif /* MLRI__kcg_copy_struct__22770 */

#ifndef MLRI__kcg_copy_struct__22792
#define MLRI__kcg_copy_struct__22792(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22792)))
#endif /* MLRI__kcg_copy_struct__22792 */

#ifndef MLRI__kcg_copy_struct__22802
#define MLRI__kcg_copy_struct__22802(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22802)))
#endif /* MLRI__kcg_copy_struct__22802 */

#ifndef MLRI__kcg_copy_struct__22814
#define MLRI__kcg_copy_struct__22814(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22814)))
#endif /* MLRI__kcg_copy_struct__22814 */

#ifndef MLRI__kcg_copy_struct__22819
#define MLRI__kcg_copy_struct__22819(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22819)))
#endif /* MLRI__kcg_copy_struct__22819 */

#ifndef MLRI__kcg_copy_struct__22835
#define MLRI__kcg_copy_struct__22835(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22835)))
#endif /* MLRI__kcg_copy_struct__22835 */

#ifndef MLRI__kcg_copy_struct__22845
#define MLRI__kcg_copy_struct__22845(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22845)))
#endif /* MLRI__kcg_copy_struct__22845 */

#ifndef MLRI__kcg_copy_struct__22850
#define MLRI__kcg_copy_struct__22850(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22850)))
#endif /* MLRI__kcg_copy_struct__22850 */

#ifndef MLRI__kcg_copy_struct__22864
#define MLRI__kcg_copy_struct__22864(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22864)))
#endif /* MLRI__kcg_copy_struct__22864 */

#ifndef MLRI__kcg_copy_struct__22873
#define MLRI__kcg_copy_struct__22873(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22873)))
#endif /* MLRI__kcg_copy_struct__22873 */

#ifndef MLRI__kcg_copy_struct__22878
#define MLRI__kcg_copy_struct__22878(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22878)))
#endif /* MLRI__kcg_copy_struct__22878 */

#ifndef MLRI__kcg_copy_struct__22891
#define MLRI__kcg_copy_struct__22891(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22891)))
#endif /* MLRI__kcg_copy_struct__22891 */

#ifndef MLRI__kcg_copy_struct__22899
#define MLRI__kcg_copy_struct__22899(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22899)))
#endif /* MLRI__kcg_copy_struct__22899 */

#ifndef MLRI__kcg_copy_struct__22904
#define MLRI__kcg_copy_struct__22904(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22904)))
#endif /* MLRI__kcg_copy_struct__22904 */

#ifndef MLRI__kcg_copy_struct__22914
#define MLRI__kcg_copy_struct__22914(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22914)))
#endif /* MLRI__kcg_copy_struct__22914 */

#ifndef MLRI__kcg_copy_struct__22921
#define MLRI__kcg_copy_struct__22921(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22921)))
#endif /* MLRI__kcg_copy_struct__22921 */

#ifndef MLRI__kcg_copy_struct__22933
#define MLRI__kcg_copy_struct__22933(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22933)))
#endif /* MLRI__kcg_copy_struct__22933 */

#ifndef MLRI__kcg_copy_struct__22942
#define MLRI__kcg_copy_struct__22942(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22942)))
#endif /* MLRI__kcg_copy_struct__22942 */

#ifndef MLRI__kcg_copy_struct__22947
#define MLRI__kcg_copy_struct__22947(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22947)))
#endif /* MLRI__kcg_copy_struct__22947 */

#ifndef MLRI__kcg_copy_struct__22954
#define MLRI__kcg_copy_struct__22954(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22954)))
#endif /* MLRI__kcg_copy_struct__22954 */

#ifndef MLRI__kcg_copy_struct__22962
#define MLRI__kcg_copy_struct__22962(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22962)))
#endif /* MLRI__kcg_copy_struct__22962 */

#ifndef MLRI__kcg_copy_struct__22967
#define MLRI__kcg_copy_struct__22967(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22967)))
#endif /* MLRI__kcg_copy_struct__22967 */

#ifndef MLRI__kcg_copy_struct__22978
#define MLRI__kcg_copy_struct__22978(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22978)))
#endif /* MLRI__kcg_copy_struct__22978 */

#ifndef MLRI__kcg_copy_struct__22987
#define MLRI__kcg_copy_struct__22987(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22987)))
#endif /* MLRI__kcg_copy_struct__22987 */

#ifndef MLRI__kcg_copy_struct__22999
#define MLRI__kcg_copy_struct__22999(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__22999)))
#endif /* MLRI__kcg_copy_struct__22999 */

#ifndef MLRI__kcg_copy_struct__23004
#define MLRI__kcg_copy_struct__23004(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23004)))
#endif /* MLRI__kcg_copy_struct__23004 */

#ifndef MLRI__kcg_copy_struct__23020
#define MLRI__kcg_copy_struct__23020(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23020)))
#endif /* MLRI__kcg_copy_struct__23020 */

#ifndef MLRI__kcg_copy_struct__23028
#define MLRI__kcg_copy_struct__23028(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23028)))
#endif /* MLRI__kcg_copy_struct__23028 */

#ifndef MLRI__kcg_copy_struct__23033
#define MLRI__kcg_copy_struct__23033(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23033)))
#endif /* MLRI__kcg_copy_struct__23033 */

#ifndef MLRI__kcg_copy_struct__23043
#define MLRI__kcg_copy_struct__23043(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23043)))
#endif /* MLRI__kcg_copy_struct__23043 */

#ifndef MLRI__kcg_copy_struct__23048
#define MLRI__kcg_copy_struct__23048(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23048)))
#endif /* MLRI__kcg_copy_struct__23048 */

#ifndef MLRI__kcg_copy_struct__23062
#define MLRI__kcg_copy_struct__23062(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23062)))
#endif /* MLRI__kcg_copy_struct__23062 */

#ifndef MLRI__kcg_copy_struct__23069
#define MLRI__kcg_copy_struct__23069(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23069)))
#endif /* MLRI__kcg_copy_struct__23069 */

#ifndef MLRI__kcg_copy_struct__23077
#define MLRI__kcg_copy_struct__23077(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23077)))
#endif /* MLRI__kcg_copy_struct__23077 */

#ifndef MLRI__kcg_copy_struct__23082
#define MLRI__kcg_copy_struct__23082(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23082)))
#endif /* MLRI__kcg_copy_struct__23082 */

#ifndef MLRI__kcg_copy_struct__23091
#define MLRI__kcg_copy_struct__23091(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23091)))
#endif /* MLRI__kcg_copy_struct__23091 */

#ifndef MLRI__kcg_copy_struct__23098
#define MLRI__kcg_copy_struct__23098(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23098)))
#endif /* MLRI__kcg_copy_struct__23098 */

#ifndef MLRI__kcg_copy_struct__23107
#define MLRI__kcg_copy_struct__23107(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23107)))
#endif /* MLRI__kcg_copy_struct__23107 */

#ifndef MLRI__kcg_copy_struct__23118
#define MLRI__kcg_copy_struct__23118(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23118)))
#endif /* MLRI__kcg_copy_struct__23118 */

#ifndef MLRI__kcg_copy_struct__23127
#define MLRI__kcg_copy_struct__23127(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23127)))
#endif /* MLRI__kcg_copy_struct__23127 */

#ifndef MLRI__kcg_copy_struct__23132
#define MLRI__kcg_copy_struct__23132(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23132)))
#endif /* MLRI__kcg_copy_struct__23132 */

#ifndef MLRI__kcg_copy_struct__23144
#define MLRI__kcg_copy_struct__23144(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23144)))
#endif /* MLRI__kcg_copy_struct__23144 */

#ifndef MLRI__kcg_copy_struct__23153
#define MLRI__kcg_copy_struct__23153(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23153)))
#endif /* MLRI__kcg_copy_struct__23153 */

#ifndef MLRI__kcg_copy_struct__23163
#define MLRI__kcg_copy_struct__23163(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23163)))
#endif /* MLRI__kcg_copy_struct__23163 */

#ifndef MLRI__kcg_copy_struct__23173
#define MLRI__kcg_copy_struct__23173(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23173)))
#endif /* MLRI__kcg_copy_struct__23173 */

#ifndef MLRI__kcg_copy_struct__23178
#define MLRI__kcg_copy_struct__23178(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23178)))
#endif /* MLRI__kcg_copy_struct__23178 */

#ifndef MLRI__kcg_copy_struct__23188
#define MLRI__kcg_copy_struct__23188(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23188)))
#endif /* MLRI__kcg_copy_struct__23188 */

#ifndef MLRI__kcg_copy_struct__23193
#define MLRI__kcg_copy_struct__23193(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23193)))
#endif /* MLRI__kcg_copy_struct__23193 */

#ifndef MLRI__kcg_copy_struct__23205
#define MLRI__kcg_copy_struct__23205(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23205)))
#endif /* MLRI__kcg_copy_struct__23205 */

#ifndef MLRI__kcg_copy_struct__23214
#define MLRI__kcg_copy_struct__23214(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23214)))
#endif /* MLRI__kcg_copy_struct__23214 */

#ifndef MLRI__kcg_copy_struct__23219
#define MLRI__kcg_copy_struct__23219(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23219)))
#endif /* MLRI__kcg_copy_struct__23219 */

#ifndef MLRI__kcg_copy_struct__23230
#define MLRI__kcg_copy_struct__23230(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23230)))
#endif /* MLRI__kcg_copy_struct__23230 */

#ifndef MLRI__kcg_copy_struct__23238
#define MLRI__kcg_copy_struct__23238(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23238)))
#endif /* MLRI__kcg_copy_struct__23238 */

#ifndef MLRI__kcg_copy_struct__23248
#define MLRI__kcg_copy_struct__23248(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23248)))
#endif /* MLRI__kcg_copy_struct__23248 */

#ifndef MLRI__kcg_copy_struct__23253
#define MLRI__kcg_copy_struct__23253(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23253)))
#endif /* MLRI__kcg_copy_struct__23253 */

#ifndef MLRI__kcg_copy_struct__23278
#define MLRI__kcg_copy_struct__23278(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23278)))
#endif /* MLRI__kcg_copy_struct__23278 */

#ifndef MLRI__kcg_copy_struct__23288
#define MLRI__kcg_copy_struct__23288(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23288)))
#endif /* MLRI__kcg_copy_struct__23288 */

#ifndef MLRI__kcg_copy_struct__23293
#define MLRI__kcg_copy_struct__23293(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23293)))
#endif /* MLRI__kcg_copy_struct__23293 */

#ifndef MLRI__kcg_copy_struct__23304
#define MLRI__kcg_copy_struct__23304(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23304)))
#endif /* MLRI__kcg_copy_struct__23304 */

#ifndef MLRI__kcg_copy_struct__23330
#define MLRI__kcg_copy_struct__23330(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23330)))
#endif /* MLRI__kcg_copy_struct__23330 */

#ifndef MLRI__kcg_copy_struct__23340
#define MLRI__kcg_copy_struct__23340(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23340)))
#endif /* MLRI__kcg_copy_struct__23340 */

#ifndef MLRI__kcg_copy_struct__23353
#define MLRI__kcg_copy_struct__23353(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23353)))
#endif /* MLRI__kcg_copy_struct__23353 */

#ifndef MLRI__kcg_copy_struct__23358
#define MLRI__kcg_copy_struct__23358(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23358)))
#endif /* MLRI__kcg_copy_struct__23358 */

#ifndef MLRI__kcg_copy_struct__23373
#define MLRI__kcg_copy_struct__23373(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23373)))
#endif /* MLRI__kcg_copy_struct__23373 */

#ifndef MLRI__kcg_copy_struct__23381
#define MLRI__kcg_copy_struct__23381(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23381)))
#endif /* MLRI__kcg_copy_struct__23381 */

#ifndef MLRI__kcg_copy_struct__23386
#define MLRI__kcg_copy_struct__23386(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23386)))
#endif /* MLRI__kcg_copy_struct__23386 */

#ifndef MLRI__kcg_copy_struct__23394
#define MLRI__kcg_copy_struct__23394(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23394)))
#endif /* MLRI__kcg_copy_struct__23394 */

#ifndef MLRI__kcg_copy_struct__23399
#define MLRI__kcg_copy_struct__23399(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23399)))
#endif /* MLRI__kcg_copy_struct__23399 */

#ifndef MLRI__kcg_copy_struct__23411
#define MLRI__kcg_copy_struct__23411(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23411)))
#endif /* MLRI__kcg_copy_struct__23411 */

#ifndef MLRI__kcg_copy_struct__23416
#define MLRI__kcg_copy_struct__23416(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23416)))
#endif /* MLRI__kcg_copy_struct__23416 */

#ifndef MLRI__kcg_copy_struct__23423
#define MLRI__kcg_copy_struct__23423(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23423)))
#endif /* MLRI__kcg_copy_struct__23423 */

#ifndef MLRI__kcg_copy_struct__23428
#define MLRI__kcg_copy_struct__23428(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23428)))
#endif /* MLRI__kcg_copy_struct__23428 */

#ifndef MLRI__kcg_copy_struct__23478
#define MLRI__kcg_copy_struct__23478(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23478)))
#endif /* MLRI__kcg_copy_struct__23478 */

#ifndef MLRI__kcg_copy_struct__23485
#define MLRI__kcg_copy_struct__23485(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (MLRI__struct__23485)))
#endif /* MLRI__kcg_copy_struct__23485 */

#ifndef MLRI__kcg_copy_array__21206
#define MLRI__kcg_copy_array__21206(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__21206)))
#endif /* MLRI__kcg_copy_array__21206 */

#ifndef MLRI__kcg_copy_array__21370
#define MLRI__kcg_copy_array__21370(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__21370)))
#endif /* MLRI__kcg_copy_array__21370 */

#ifndef MLRI__kcg_copy_array__21407
#define MLRI__kcg_copy_array__21407(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__21407)))
#endif /* MLRI__kcg_copy_array__21407 */

#ifndef MLRI__kcg_copy_array__21481
#define MLRI__kcg_copy_array__21481(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__21481)))
#endif /* MLRI__kcg_copy_array__21481 */

#ifndef MLRI__kcg_copy_array__21495
#define MLRI__kcg_copy_array__21495(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__21495)))
#endif /* MLRI__kcg_copy_array__21495 */

#ifndef MLRI__kcg_copy_array__21563
#define MLRI__kcg_copy_array__21563(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__21563)))
#endif /* MLRI__kcg_copy_array__21563 */

#ifndef MLRI__kcg_copy_array__21625
#define MLRI__kcg_copy_array__21625(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__21625)))
#endif /* MLRI__kcg_copy_array__21625 */

#ifndef MLRI__kcg_copy_array__21740
#define MLRI__kcg_copy_array__21740(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__21740)))
#endif /* MLRI__kcg_copy_array__21740 */

#ifndef MLRI__kcg_copy_array__21750
#define MLRI__kcg_copy_array__21750(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__21750)))
#endif /* MLRI__kcg_copy_array__21750 */

#ifndef MLRI__kcg_copy_array__21765
#define MLRI__kcg_copy_array__21765(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__21765)))
#endif /* MLRI__kcg_copy_array__21765 */

#ifndef MLRI__kcg_copy_array__21780
#define MLRI__kcg_copy_array__21780(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__21780)))
#endif /* MLRI__kcg_copy_array__21780 */

#ifndef MLRI__kcg_copy_array__21797
#define MLRI__kcg_copy_array__21797(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__21797)))
#endif /* MLRI__kcg_copy_array__21797 */

#ifndef MLRI__kcg_copy_array__21812
#define MLRI__kcg_copy_array__21812(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__21812)))
#endif /* MLRI__kcg_copy_array__21812 */

#ifndef MLRI__kcg_copy_array__21826
#define MLRI__kcg_copy_array__21826(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__21826)))
#endif /* MLRI__kcg_copy_array__21826 */

#ifndef MLRI__kcg_copy_array__21840
#define MLRI__kcg_copy_array__21840(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__21840)))
#endif /* MLRI__kcg_copy_array__21840 */

#ifndef MLRI__kcg_copy_array__21857
#define MLRI__kcg_copy_array__21857(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__21857)))
#endif /* MLRI__kcg_copy_array__21857 */

#ifndef MLRI__kcg_copy_array__21866
#define MLRI__kcg_copy_array__21866(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__21866)))
#endif /* MLRI__kcg_copy_array__21866 */

#ifndef MLRI__kcg_copy_array__21881
#define MLRI__kcg_copy_array__21881(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__21881)))
#endif /* MLRI__kcg_copy_array__21881 */

#ifndef MLRI__kcg_copy_array__21892
#define MLRI__kcg_copy_array__21892(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__21892)))
#endif /* MLRI__kcg_copy_array__21892 */

#ifndef MLRI__kcg_copy_array__21901
#define MLRI__kcg_copy_array__21901(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__21901)))
#endif /* MLRI__kcg_copy_array__21901 */

#ifndef MLRI__kcg_copy_array__21914
#define MLRI__kcg_copy_array__21914(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__21914)))
#endif /* MLRI__kcg_copy_array__21914 */

#ifndef MLRI__kcg_copy_array__21923
#define MLRI__kcg_copy_array__21923(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__21923)))
#endif /* MLRI__kcg_copy_array__21923 */

#ifndef MLRI__kcg_copy_array__21934
#define MLRI__kcg_copy_array__21934(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__21934)))
#endif /* MLRI__kcg_copy_array__21934 */

#ifndef MLRI__kcg_copy_array__21942
#define MLRI__kcg_copy_array__21942(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__21942)))
#endif /* MLRI__kcg_copy_array__21942 */

#ifndef MLRI__kcg_copy_array__21953
#define MLRI__kcg_copy_array__21953(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__21953)))
#endif /* MLRI__kcg_copy_array__21953 */

#ifndef MLRI__kcg_copy_array__21964
#define MLRI__kcg_copy_array__21964(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__21964)))
#endif /* MLRI__kcg_copy_array__21964 */

#ifndef MLRI__kcg_copy_array__21976
#define MLRI__kcg_copy_array__21976(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__21976)))
#endif /* MLRI__kcg_copy_array__21976 */

#ifndef MLRI__kcg_copy_array__22498
#define MLRI__kcg_copy_array__22498(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__22498)))
#endif /* MLRI__kcg_copy_array__22498 */

#ifndef MLRI__kcg_copy_array__22511
#define MLRI__kcg_copy_array__22511(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__22511)))
#endif /* MLRI__kcg_copy_array__22511 */

#ifndef MLRI__kcg_copy_array__22544
#define MLRI__kcg_copy_array__22544(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__22544)))
#endif /* MLRI__kcg_copy_array__22544 */

#ifndef MLRI__kcg_copy_array__22690
#define MLRI__kcg_copy_array__22690(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__22690)))
#endif /* MLRI__kcg_copy_array__22690 */

#ifndef MLRI__kcg_copy_array__22721
#define MLRI__kcg_copy_array__22721(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__22721)))
#endif /* MLRI__kcg_copy_array__22721 */

#ifndef MLRI__kcg_copy_array__22811
#define MLRI__kcg_copy_array__22811(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__22811)))
#endif /* MLRI__kcg_copy_array__22811 */

#ifndef MLRI__kcg_copy_array__22842
#define MLRI__kcg_copy_array__22842(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__22842)))
#endif /* MLRI__kcg_copy_array__22842 */

#ifndef MLRI__kcg_copy_array__22870
#define MLRI__kcg_copy_array__22870(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__22870)))
#endif /* MLRI__kcg_copy_array__22870 */

#ifndef MLRI__kcg_copy_array__22896
#define MLRI__kcg_copy_array__22896(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__22896)))
#endif /* MLRI__kcg_copy_array__22896 */

#ifndef MLRI__kcg_copy_array__22939
#define MLRI__kcg_copy_array__22939(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__22939)))
#endif /* MLRI__kcg_copy_array__22939 */

#ifndef MLRI__kcg_copy_array__22959
#define MLRI__kcg_copy_array__22959(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__22959)))
#endif /* MLRI__kcg_copy_array__22959 */

#ifndef MLRI__kcg_copy_array__22996
#define MLRI__kcg_copy_array__22996(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__22996)))
#endif /* MLRI__kcg_copy_array__22996 */

#ifndef MLRI__kcg_copy_array__23025
#define MLRI__kcg_copy_array__23025(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__23025)))
#endif /* MLRI__kcg_copy_array__23025 */

#ifndef MLRI__kcg_copy_array__23040
#define MLRI__kcg_copy_array__23040(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__23040)))
#endif /* MLRI__kcg_copy_array__23040 */

#ifndef MLRI__kcg_copy_array__23074
#define MLRI__kcg_copy_array__23074(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__23074)))
#endif /* MLRI__kcg_copy_array__23074 */

#ifndef MLRI__kcg_copy_array__23124
#define MLRI__kcg_copy_array__23124(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__23124)))
#endif /* MLRI__kcg_copy_array__23124 */

#ifndef MLRI__kcg_copy_array__23170
#define MLRI__kcg_copy_array__23170(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__23170)))
#endif /* MLRI__kcg_copy_array__23170 */

#ifndef MLRI__kcg_copy_array__23185
#define MLRI__kcg_copy_array__23185(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__23185)))
#endif /* MLRI__kcg_copy_array__23185 */

#ifndef MLRI__kcg_copy_array__23211
#define MLRI__kcg_copy_array__23211(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__23211)))
#endif /* MLRI__kcg_copy_array__23211 */

#ifndef MLRI__kcg_copy_array__23245
#define MLRI__kcg_copy_array__23245(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__23245)))
#endif /* MLRI__kcg_copy_array__23245 */

#ifndef MLRI__kcg_copy_array__23285
#define MLRI__kcg_copy_array__23285(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__23285)))
#endif /* MLRI__kcg_copy_array__23285 */

#ifndef MLRI__kcg_copy_array__23350
#define MLRI__kcg_copy_array__23350(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__23350)))
#endif /* MLRI__kcg_copy_array__23350 */

#ifndef MLRI__kcg_copy_array__23378
#define MLRI__kcg_copy_array__23378(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__23378)))
#endif /* MLRI__kcg_copy_array__23378 */

#ifndef MLRI__kcg_copy_array__23391
#define MLRI__kcg_copy_array__23391(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__23391)))
#endif /* MLRI__kcg_copy_array__23391 */

#ifndef MLRI__kcg_copy_array__23408
#define MLRI__kcg_copy_array__23408(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__23408)))
#endif /* MLRI__kcg_copy_array__23408 */

#ifndef MLRI__kcg_copy_array__23420
#define MLRI__kcg_copy_array__23420(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__23420)))
#endif /* MLRI__kcg_copy_array__23420 */

#ifndef MLRI__kcg_copy_array__23490
#define MLRI__kcg_copy_array__23490(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__23490)))
#endif /* MLRI__kcg_copy_array__23490 */

#ifndef MLRI__kcg_copy_array__24642
#define MLRI__kcg_copy_array__24642(kcg_C1, kcg_C2) (kcg_assign_array((kcg_C1), (kcg_C2), sizeof (MLRI__array__24642)))
#endif /* MLRI__kcg_copy_array__24642 */

#ifndef MLRI__kcg_comp_struct__21201
extern kcg_bool MLRI__kcg_comp_struct__21201(
  MLRI__struct__21201 *kcg_c1,
  MLRI__struct__21201 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21201 */

#ifndef MLRI__kcg_comp_struct__21209
extern kcg_bool MLRI__kcg_comp_struct__21209(
  MLRI__struct__21209 *kcg_c1,
  MLRI__struct__21209 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21209 */

#ifndef MLRI__kcg_comp_struct__21221
extern kcg_bool MLRI__kcg_comp_struct__21221(
  MLRI__struct__21221 *kcg_c1,
  MLRI__struct__21221 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21221 */

#ifndef MLRI__kcg_comp_struct__21228
extern kcg_bool MLRI__kcg_comp_struct__21228(
  MLRI__struct__21228 *kcg_c1,
  MLRI__struct__21228 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21228 */

#ifndef MLRI__kcg_comp_struct__21232
extern kcg_bool MLRI__kcg_comp_struct__21232(
  MLRI__struct__21232 *kcg_c1,
  MLRI__struct__21232 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21232 */

#ifndef MLRI__kcg_comp_struct__21238
extern kcg_bool MLRI__kcg_comp_struct__21238(
  MLRI__struct__21238 *kcg_c1,
  MLRI__struct__21238 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21238 */

#ifndef MLRI__kcg_comp_struct__21243
extern kcg_bool MLRI__kcg_comp_struct__21243(
  MLRI__struct__21243 *kcg_c1,
  MLRI__struct__21243 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21243 */

#ifndef MLRI__kcg_comp_struct__21250
extern kcg_bool MLRI__kcg_comp_struct__21250(
  MLRI__struct__21250 *kcg_c1,
  MLRI__struct__21250 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21250 */

#ifndef MLRI__kcg_comp_struct__21256
extern kcg_bool MLRI__kcg_comp_struct__21256(
  MLRI__struct__21256 *kcg_c1,
  MLRI__struct__21256 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21256 */

#ifndef MLRI__kcg_comp_struct__21261
extern kcg_bool MLRI__kcg_comp_struct__21261(
  MLRI__struct__21261 *kcg_c1,
  MLRI__struct__21261 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21261 */

#ifndef MLRI__kcg_comp_struct__21280
extern kcg_bool MLRI__kcg_comp_struct__21280(
  MLRI__struct__21280 *kcg_c1,
  MLRI__struct__21280 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21280 */

#ifndef MLRI__kcg_comp_struct__21285
extern kcg_bool MLRI__kcg_comp_struct__21285(
  MLRI__struct__21285 *kcg_c1,
  MLRI__struct__21285 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21285 */

#ifndef MLRI__kcg_comp_struct__21305
extern kcg_bool MLRI__kcg_comp_struct__21305(
  MLRI__struct__21305 *kcg_c1,
  MLRI__struct__21305 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21305 */

#ifndef MLRI__kcg_comp_struct__21310
extern kcg_bool MLRI__kcg_comp_struct__21310(
  MLRI__struct__21310 *kcg_c1,
  MLRI__struct__21310 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21310 */

#ifndef MLRI__kcg_comp_struct__21319
extern kcg_bool MLRI__kcg_comp_struct__21319(
  MLRI__struct__21319 *kcg_c1,
  MLRI__struct__21319 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21319 */

#ifndef MLRI__kcg_comp_struct__21325
extern kcg_bool MLRI__kcg_comp_struct__21325(
  MLRI__struct__21325 *kcg_c1,
  MLRI__struct__21325 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21325 */

#ifndef MLRI__kcg_comp_struct__21331
extern kcg_bool MLRI__kcg_comp_struct__21331(
  MLRI__struct__21331 *kcg_c1,
  MLRI__struct__21331 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21331 */

#ifndef MLRI__kcg_comp_struct__21345
extern kcg_bool MLRI__kcg_comp_struct__21345(
  MLRI__struct__21345 *kcg_c1,
  MLRI__struct__21345 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21345 */

#ifndef MLRI__kcg_comp_struct__21354
extern kcg_bool MLRI__kcg_comp_struct__21354(
  MLRI__struct__21354 *kcg_c1,
  MLRI__struct__21354 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21354 */

#ifndef MLRI__kcg_comp_struct__21360
extern kcg_bool MLRI__kcg_comp_struct__21360(
  MLRI__struct__21360 *kcg_c1,
  MLRI__struct__21360 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21360 */

#ifndef MLRI__kcg_comp_struct__21373
extern kcg_bool MLRI__kcg_comp_struct__21373(
  MLRI__struct__21373 *kcg_c1,
  MLRI__struct__21373 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21373 */

#ifndef MLRI__kcg_comp_struct__21384
extern kcg_bool MLRI__kcg_comp_struct__21384(
  MLRI__struct__21384 *kcg_c1,
  MLRI__struct__21384 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21384 */

#ifndef MLRI__kcg_comp_struct__21396
extern kcg_bool MLRI__kcg_comp_struct__21396(
  MLRI__struct__21396 *kcg_c1,
  MLRI__struct__21396 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21396 */

#ifndef MLRI__kcg_comp_struct__21410
extern kcg_bool MLRI__kcg_comp_struct__21410(
  MLRI__struct__21410 *kcg_c1,
  MLRI__struct__21410 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21410 */

#ifndef MLRI__kcg_comp_struct__21427
extern kcg_bool MLRI__kcg_comp_struct__21427(
  MLRI__struct__21427 *kcg_c1,
  MLRI__struct__21427 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21427 */

#ifndef MLRI__kcg_comp_struct__21432
extern kcg_bool MLRI__kcg_comp_struct__21432(
  MLRI__struct__21432 *kcg_c1,
  MLRI__struct__21432 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21432 */

#ifndef MLRI__kcg_comp_struct__21440
extern kcg_bool MLRI__kcg_comp_struct__21440(
  MLRI__struct__21440 *kcg_c1,
  MLRI__struct__21440 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21440 */

#ifndef MLRI__kcg_comp_struct__21451
extern kcg_bool MLRI__kcg_comp_struct__21451(
  MLRI__struct__21451 *kcg_c1,
  MLRI__struct__21451 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21451 */

#ifndef MLRI__kcg_comp_struct__21461
extern kcg_bool MLRI__kcg_comp_struct__21461(
  MLRI__struct__21461 *kcg_c1,
  MLRI__struct__21461 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21461 */

#ifndef MLRI__kcg_comp_struct__21466
extern kcg_bool MLRI__kcg_comp_struct__21466(
  MLRI__struct__21466 *kcg_c1,
  MLRI__struct__21466 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21466 */

#ifndef MLRI__kcg_comp_struct__21472
extern kcg_bool MLRI__kcg_comp_struct__21472(
  MLRI__struct__21472 *kcg_c1,
  MLRI__struct__21472 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21472 */

#ifndef MLRI__kcg_comp_struct__21484
extern kcg_bool MLRI__kcg_comp_struct__21484(
  MLRI__struct__21484 *kcg_c1,
  MLRI__struct__21484 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21484 */

#ifndef MLRI__kcg_comp_struct__21489
extern kcg_bool MLRI__kcg_comp_struct__21489(
  MLRI__struct__21489 *kcg_c1,
  MLRI__struct__21489 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21489 */

#ifndef MLRI__kcg_comp_struct__21498
extern kcg_bool MLRI__kcg_comp_struct__21498(
  MLRI__struct__21498 *kcg_c1,
  MLRI__struct__21498 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21498 */

#ifndef MLRI__kcg_comp_struct__21506
extern kcg_bool MLRI__kcg_comp_struct__21506(
  MLRI__struct__21506 *kcg_c1,
  MLRI__struct__21506 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21506 */

#ifndef MLRI__kcg_comp_struct__21515
extern kcg_bool MLRI__kcg_comp_struct__21515(
  MLRI__struct__21515 *kcg_c1,
  MLRI__struct__21515 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21515 */

#ifndef MLRI__kcg_comp_struct__21521
extern kcg_bool MLRI__kcg_comp_struct__21521(
  MLRI__struct__21521 *kcg_c1,
  MLRI__struct__21521 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21521 */

#ifndef MLRI__kcg_comp_struct__21525
extern kcg_bool MLRI__kcg_comp_struct__21525(
  MLRI__struct__21525 *kcg_c1,
  MLRI__struct__21525 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21525 */

#ifndef MLRI__kcg_comp_struct__21530
extern kcg_bool MLRI__kcg_comp_struct__21530(
  MLRI__struct__21530 *kcg_c1,
  MLRI__struct__21530 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21530 */

#ifndef MLRI__kcg_comp_struct__21543
extern kcg_bool MLRI__kcg_comp_struct__21543(
  MLRI__struct__21543 *kcg_c1,
  MLRI__struct__21543 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21543 */

#ifndef MLRI__kcg_comp_struct__21552
extern kcg_bool MLRI__kcg_comp_struct__21552(
  MLRI__struct__21552 *kcg_c1,
  MLRI__struct__21552 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21552 */

#ifndef MLRI__kcg_comp_struct__21556
extern kcg_bool MLRI__kcg_comp_struct__21556(
  MLRI__struct__21556 *kcg_c1,
  MLRI__struct__21556 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21556 */

#ifndef MLRI__kcg_comp_struct__21566
extern kcg_bool MLRI__kcg_comp_struct__21566(
  MLRI__struct__21566 *kcg_c1,
  MLRI__struct__21566 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21566 */

#ifndef MLRI__kcg_comp_struct__21573
extern kcg_bool MLRI__kcg_comp_struct__21573(
  MLRI__struct__21573 *kcg_c1,
  MLRI__struct__21573 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21573 */

#ifndef MLRI__kcg_comp_struct__21579
extern kcg_bool MLRI__kcg_comp_struct__21579(
  MLRI__struct__21579 *kcg_c1,
  MLRI__struct__21579 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21579 */

#ifndef MLRI__kcg_comp_struct__21590
extern kcg_bool MLRI__kcg_comp_struct__21590(
  MLRI__struct__21590 *kcg_c1,
  MLRI__struct__21590 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21590 */

#ifndef MLRI__kcg_comp_struct__21603
extern kcg_bool MLRI__kcg_comp_struct__21603(
  MLRI__struct__21603 *kcg_c1,
  MLRI__struct__21603 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21603 */

#ifndef MLRI__kcg_comp_struct__21608
extern kcg_bool MLRI__kcg_comp_struct__21608(
  MLRI__struct__21608 *kcg_c1,
  MLRI__struct__21608 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21608 */

#ifndef MLRI__kcg_comp_struct__21614
extern kcg_bool MLRI__kcg_comp_struct__21614(
  MLRI__struct__21614 *kcg_c1,
  MLRI__struct__21614 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21614 */

#ifndef MLRI__kcg_comp_struct__21619
extern kcg_bool MLRI__kcg_comp_struct__21619(
  MLRI__struct__21619 *kcg_c1,
  MLRI__struct__21619 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21619 */

#ifndef MLRI__kcg_comp_struct__21628
extern kcg_bool MLRI__kcg_comp_struct__21628(
  MLRI__struct__21628 *kcg_c1,
  MLRI__struct__21628 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21628 */

#ifndef MLRI__kcg_comp_struct__21633
extern kcg_bool MLRI__kcg_comp_struct__21633(
  MLRI__struct__21633 *kcg_c1,
  MLRI__struct__21633 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21633 */

#ifndef MLRI__kcg_comp_struct__21639
extern kcg_bool MLRI__kcg_comp_struct__21639(
  MLRI__struct__21639 *kcg_c1,
  MLRI__struct__21639 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21639 */

#ifndef MLRI__kcg_comp_struct__21647
extern kcg_bool MLRI__kcg_comp_struct__21647(
  MLRI__struct__21647 *kcg_c1,
  MLRI__struct__21647 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21647 */

#ifndef MLRI__kcg_comp_struct__21652
extern kcg_bool MLRI__kcg_comp_struct__21652(
  MLRI__struct__21652 *kcg_c1,
  MLRI__struct__21652 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21652 */

#ifndef MLRI__kcg_comp_struct__21657
extern kcg_bool MLRI__kcg_comp_struct__21657(
  MLRI__struct__21657 *kcg_c1,
  MLRI__struct__21657 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21657 */

#ifndef MLRI__kcg_comp_struct__21662
extern kcg_bool MLRI__kcg_comp_struct__21662(
  MLRI__struct__21662 *kcg_c1,
  MLRI__struct__21662 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21662 */

#ifndef MLRI__kcg_comp_struct__21667
extern kcg_bool MLRI__kcg_comp_struct__21667(
  MLRI__struct__21667 *kcg_c1,
  MLRI__struct__21667 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21667 */

#ifndef MLRI__kcg_comp_struct__21674
extern kcg_bool MLRI__kcg_comp_struct__21674(
  MLRI__struct__21674 *kcg_c1,
  MLRI__struct__21674 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21674 */

#ifndef MLRI__kcg_comp_struct__21684
extern kcg_bool MLRI__kcg_comp_struct__21684(
  MLRI__struct__21684 *kcg_c1,
  MLRI__struct__21684 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21684 */

#ifndef MLRI__kcg_comp_struct__21694
extern kcg_bool MLRI__kcg_comp_struct__21694(
  MLRI__struct__21694 *kcg_c1,
  MLRI__struct__21694 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21694 */

#ifndef MLRI__kcg_comp_struct__21699
extern kcg_bool MLRI__kcg_comp_struct__21699(
  MLRI__struct__21699 *kcg_c1,
  MLRI__struct__21699 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21699 */

#ifndef MLRI__kcg_comp_struct__21704
extern kcg_bool MLRI__kcg_comp_struct__21704(
  MLRI__struct__21704 *kcg_c1,
  MLRI__struct__21704 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21704 */

#ifndef MLRI__kcg_comp_struct__21713
extern kcg_bool MLRI__kcg_comp_struct__21713(
  MLRI__struct__21713 *kcg_c1,
  MLRI__struct__21713 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21713 */

#ifndef MLRI__kcg_comp_struct__21718
extern kcg_bool MLRI__kcg_comp_struct__21718(
  MLRI__struct__21718 *kcg_c1,
  MLRI__struct__21718 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21718 */

#ifndef MLRI__kcg_comp_struct__21729
extern kcg_bool MLRI__kcg_comp_struct__21729(
  MLRI__struct__21729 *kcg_c1,
  MLRI__struct__21729 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21729 */

#ifndef MLRI__kcg_comp_struct__21735
extern kcg_bool MLRI__kcg_comp_struct__21735(
  MLRI__struct__21735 *kcg_c1,
  MLRI__struct__21735 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21735 */

#ifndef MLRI__kcg_comp_struct__21743
extern kcg_bool MLRI__kcg_comp_struct__21743(
  MLRI__struct__21743 *kcg_c1,
  MLRI__struct__21743 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21743 */

#ifndef MLRI__kcg_comp_struct__21753
extern kcg_bool MLRI__kcg_comp_struct__21753(
  MLRI__struct__21753 *kcg_c1,
  MLRI__struct__21753 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21753 */

#ifndef MLRI__kcg_comp_struct__21768
extern kcg_bool MLRI__kcg_comp_struct__21768(
  MLRI__struct__21768 *kcg_c1,
  MLRI__struct__21768 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21768 */

#ifndef MLRI__kcg_comp_struct__21783
extern kcg_bool MLRI__kcg_comp_struct__21783(
  MLRI__struct__21783 *kcg_c1,
  MLRI__struct__21783 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21783 */

#ifndef MLRI__kcg_comp_struct__21800
extern kcg_bool MLRI__kcg_comp_struct__21800(
  MLRI__struct__21800 *kcg_c1,
  MLRI__struct__21800 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21800 */

#ifndef MLRI__kcg_comp_struct__21815
extern kcg_bool MLRI__kcg_comp_struct__21815(
  MLRI__struct__21815 *kcg_c1,
  MLRI__struct__21815 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21815 */

#ifndef MLRI__kcg_comp_struct__21829
extern kcg_bool MLRI__kcg_comp_struct__21829(
  MLRI__struct__21829 *kcg_c1,
  MLRI__struct__21829 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21829 */

#ifndef MLRI__kcg_comp_struct__21843
extern kcg_bool MLRI__kcg_comp_struct__21843(
  MLRI__struct__21843 *kcg_c1,
  MLRI__struct__21843 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21843 */

#ifndef MLRI__kcg_comp_struct__21860
extern kcg_bool MLRI__kcg_comp_struct__21860(
  MLRI__struct__21860 *kcg_c1,
  MLRI__struct__21860 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21860 */

#ifndef MLRI__kcg_comp_struct__21869
extern kcg_bool MLRI__kcg_comp_struct__21869(
  MLRI__struct__21869 *kcg_c1,
  MLRI__struct__21869 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21869 */

#ifndef MLRI__kcg_comp_struct__21884
extern kcg_bool MLRI__kcg_comp_struct__21884(
  MLRI__struct__21884 *kcg_c1,
  MLRI__struct__21884 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21884 */

#ifndef MLRI__kcg_comp_struct__21895
extern kcg_bool MLRI__kcg_comp_struct__21895(
  MLRI__struct__21895 *kcg_c1,
  MLRI__struct__21895 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21895 */

#ifndef MLRI__kcg_comp_struct__21904
extern kcg_bool MLRI__kcg_comp_struct__21904(
  MLRI__struct__21904 *kcg_c1,
  MLRI__struct__21904 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21904 */

#ifndef MLRI__kcg_comp_struct__21917
extern kcg_bool MLRI__kcg_comp_struct__21917(
  MLRI__struct__21917 *kcg_c1,
  MLRI__struct__21917 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21917 */

#ifndef MLRI__kcg_comp_struct__21926
extern kcg_bool MLRI__kcg_comp_struct__21926(
  MLRI__struct__21926 *kcg_c1,
  MLRI__struct__21926 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21926 */

#ifndef MLRI__kcg_comp_struct__21937
extern kcg_bool MLRI__kcg_comp_struct__21937(
  MLRI__struct__21937 *kcg_c1,
  MLRI__struct__21937 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21937 */

#ifndef MLRI__kcg_comp_struct__21945
extern kcg_bool MLRI__kcg_comp_struct__21945(
  MLRI__struct__21945 *kcg_c1,
  MLRI__struct__21945 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21945 */

#ifndef MLRI__kcg_comp_struct__21956
extern kcg_bool MLRI__kcg_comp_struct__21956(
  MLRI__struct__21956 *kcg_c1,
  MLRI__struct__21956 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21956 */

#ifndef MLRI__kcg_comp_struct__21967
extern kcg_bool MLRI__kcg_comp_struct__21967(
  MLRI__struct__21967 *kcg_c1,
  MLRI__struct__21967 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21967 */

#ifndef MLRI__kcg_comp_struct__21979
extern kcg_bool MLRI__kcg_comp_struct__21979(
  MLRI__struct__21979 *kcg_c1,
  MLRI__struct__21979 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21979 */

#ifndef MLRI__kcg_comp_struct__21989
extern kcg_bool MLRI__kcg_comp_struct__21989(
  MLRI__struct__21989 *kcg_c1,
  MLRI__struct__21989 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21989 */

#ifndef MLRI__kcg_comp_struct__21994
extern kcg_bool MLRI__kcg_comp_struct__21994(
  MLRI__struct__21994 *kcg_c1,
  MLRI__struct__21994 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__21994 */

#ifndef MLRI__kcg_comp_struct__22001
extern kcg_bool MLRI__kcg_comp_struct__22001(
  MLRI__struct__22001 *kcg_c1,
  MLRI__struct__22001 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22001 */

#ifndef MLRI__kcg_comp_struct__22008
extern kcg_bool MLRI__kcg_comp_struct__22008(
  MLRI__struct__22008 *kcg_c1,
  MLRI__struct__22008 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22008 */

#ifndef MLRI__kcg_comp_struct__22013
extern kcg_bool MLRI__kcg_comp_struct__22013(
  MLRI__struct__22013 *kcg_c1,
  MLRI__struct__22013 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22013 */

#ifndef MLRI__kcg_comp_struct__22017
extern kcg_bool MLRI__kcg_comp_struct__22017(
  MLRI__struct__22017 *kcg_c1,
  MLRI__struct__22017 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22017 */

#ifndef MLRI__kcg_comp_struct__22027
extern kcg_bool MLRI__kcg_comp_struct__22027(
  MLRI__struct__22027 *kcg_c1,
  MLRI__struct__22027 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22027 */

#ifndef MLRI__kcg_comp_struct__22035
extern kcg_bool MLRI__kcg_comp_struct__22035(
  MLRI__struct__22035 *kcg_c1,
  MLRI__struct__22035 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22035 */

#ifndef MLRI__kcg_comp_struct__22073
extern kcg_bool MLRI__kcg_comp_struct__22073(
  MLRI__struct__22073 *kcg_c1,
  MLRI__struct__22073 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22073 */

#ifndef MLRI__kcg_comp_struct__22080
extern kcg_bool MLRI__kcg_comp_struct__22080(
  MLRI__struct__22080 *kcg_c1,
  MLRI__struct__22080 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22080 */

#ifndef MLRI__kcg_comp_struct__22089
extern kcg_bool MLRI__kcg_comp_struct__22089(
  MLRI__struct__22089 *kcg_c1,
  MLRI__struct__22089 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22089 */

#ifndef MLRI__kcg_comp_struct__22096
extern kcg_bool MLRI__kcg_comp_struct__22096(
  MLRI__struct__22096 *kcg_c1,
  MLRI__struct__22096 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22096 */

#ifndef MLRI__kcg_comp_struct__22101
extern kcg_bool MLRI__kcg_comp_struct__22101(
  MLRI__struct__22101 *kcg_c1,
  MLRI__struct__22101 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22101 */

#ifndef MLRI__kcg_comp_struct__22108
extern kcg_bool MLRI__kcg_comp_struct__22108(
  MLRI__struct__22108 *kcg_c1,
  MLRI__struct__22108 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22108 */

#ifndef MLRI__kcg_comp_struct__22112
extern kcg_bool MLRI__kcg_comp_struct__22112(
  MLRI__struct__22112 *kcg_c1,
  MLRI__struct__22112 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22112 */

#ifndef MLRI__kcg_comp_struct__22122
extern kcg_bool MLRI__kcg_comp_struct__22122(
  MLRI__struct__22122 *kcg_c1,
  MLRI__struct__22122 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22122 */

#ifndef MLRI__kcg_comp_struct__22127
extern kcg_bool MLRI__kcg_comp_struct__22127(
  MLRI__struct__22127 *kcg_c1,
  MLRI__struct__22127 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22127 */

#ifndef MLRI__kcg_comp_struct__22135
extern kcg_bool MLRI__kcg_comp_struct__22135(
  MLRI__struct__22135 *kcg_c1,
  MLRI__struct__22135 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22135 */

#ifndef MLRI__kcg_comp_struct__22159
extern kcg_bool MLRI__kcg_comp_struct__22159(
  MLRI__struct__22159 *kcg_c1,
  MLRI__struct__22159 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22159 */

#ifndef MLRI__kcg_comp_struct__22182
extern kcg_bool MLRI__kcg_comp_struct__22182(
  MLRI__struct__22182 *kcg_c1,
  MLRI__struct__22182 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22182 */

#ifndef MLRI__kcg_comp_struct__22194
extern kcg_bool MLRI__kcg_comp_struct__22194(
  MLRI__struct__22194 *kcg_c1,
  MLRI__struct__22194 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22194 */

#ifndef MLRI__kcg_comp_struct__22203
extern kcg_bool MLRI__kcg_comp_struct__22203(
  MLRI__struct__22203 *kcg_c1,
  MLRI__struct__22203 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22203 */

#ifndef MLRI__kcg_comp_struct__22207
extern kcg_bool MLRI__kcg_comp_struct__22207(
  MLRI__struct__22207 *kcg_c1,
  MLRI__struct__22207 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22207 */

#ifndef MLRI__kcg_comp_struct__22216
extern kcg_bool MLRI__kcg_comp_struct__22216(
  MLRI__struct__22216 *kcg_c1,
  MLRI__struct__22216 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22216 */

#ifndef MLRI__kcg_comp_struct__22220
extern kcg_bool MLRI__kcg_comp_struct__22220(
  MLRI__struct__22220 *kcg_c1,
  MLRI__struct__22220 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22220 */

#ifndef MLRI__kcg_comp_struct__22225
extern kcg_bool MLRI__kcg_comp_struct__22225(
  MLRI__struct__22225 *kcg_c1,
  MLRI__struct__22225 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22225 */

#ifndef MLRI__kcg_comp_struct__22233
extern kcg_bool MLRI__kcg_comp_struct__22233(
  MLRI__struct__22233 *kcg_c1,
  MLRI__struct__22233 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22233 */

#ifndef MLRI__kcg_comp_struct__22243
extern kcg_bool MLRI__kcg_comp_struct__22243(
  MLRI__struct__22243 *kcg_c1,
  MLRI__struct__22243 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22243 */

#ifndef MLRI__kcg_comp_struct__22256
extern kcg_bool MLRI__kcg_comp_struct__22256(
  MLRI__struct__22256 *kcg_c1,
  MLRI__struct__22256 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22256 */

#ifndef MLRI__kcg_comp_struct__22268
extern kcg_bool MLRI__kcg_comp_struct__22268(
  MLRI__struct__22268 *kcg_c1,
  MLRI__struct__22268 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22268 */

#ifndef MLRI__kcg_comp_struct__22277
extern kcg_bool MLRI__kcg_comp_struct__22277(
  MLRI__struct__22277 *kcg_c1,
  MLRI__struct__22277 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22277 */

#ifndef MLRI__kcg_comp_struct__22288
extern kcg_bool MLRI__kcg_comp_struct__22288(
  MLRI__struct__22288 *kcg_c1,
  MLRI__struct__22288 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22288 */

#ifndef MLRI__kcg_comp_struct__22297
extern kcg_bool MLRI__kcg_comp_struct__22297(
  MLRI__struct__22297 *kcg_c1,
  MLRI__struct__22297 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22297 */

#ifndef MLRI__kcg_comp_struct__22307
extern kcg_bool MLRI__kcg_comp_struct__22307(
  MLRI__struct__22307 *kcg_c1,
  MLRI__struct__22307 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22307 */

#ifndef MLRI__kcg_comp_struct__22316
extern kcg_bool MLRI__kcg_comp_struct__22316(
  MLRI__struct__22316 *kcg_c1,
  MLRI__struct__22316 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22316 */

#ifndef MLRI__kcg_comp_struct__22329
extern kcg_bool MLRI__kcg_comp_struct__22329(
  MLRI__struct__22329 *kcg_c1,
  MLRI__struct__22329 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22329 */

#ifndef MLRI__kcg_comp_struct__22339
extern kcg_bool MLRI__kcg_comp_struct__22339(
  MLRI__struct__22339 *kcg_c1,
  MLRI__struct__22339 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22339 */

#ifndef MLRI__kcg_comp_struct__22349
extern kcg_bool MLRI__kcg_comp_struct__22349(
  MLRI__struct__22349 *kcg_c1,
  MLRI__struct__22349 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22349 */

#ifndef MLRI__kcg_comp_struct__22361
extern kcg_bool MLRI__kcg_comp_struct__22361(
  MLRI__struct__22361 *kcg_c1,
  MLRI__struct__22361 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22361 */

#ifndef MLRI__kcg_comp_struct__22370
extern kcg_bool MLRI__kcg_comp_struct__22370(
  MLRI__struct__22370 *kcg_c1,
  MLRI__struct__22370 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22370 */

#ifndef MLRI__kcg_comp_struct__22380
extern kcg_bool MLRI__kcg_comp_struct__22380(
  MLRI__struct__22380 *kcg_c1,
  MLRI__struct__22380 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22380 */

#ifndef MLRI__kcg_comp_struct__22390
extern kcg_bool MLRI__kcg_comp_struct__22390(
  MLRI__struct__22390 *kcg_c1,
  MLRI__struct__22390 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22390 */

#ifndef MLRI__kcg_comp_struct__22397
extern kcg_bool MLRI__kcg_comp_struct__22397(
  MLRI__struct__22397 *kcg_c1,
  MLRI__struct__22397 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22397 */

#ifndef MLRI__kcg_comp_struct__22409
extern kcg_bool MLRI__kcg_comp_struct__22409(
  MLRI__struct__22409 *kcg_c1,
  MLRI__struct__22409 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22409 */

#ifndef MLRI__kcg_comp_struct__22418
extern kcg_bool MLRI__kcg_comp_struct__22418(
  MLRI__struct__22418 *kcg_c1,
  MLRI__struct__22418 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22418 */

#ifndef MLRI__kcg_comp_struct__22427
extern kcg_bool MLRI__kcg_comp_struct__22427(
  MLRI__struct__22427 *kcg_c1,
  MLRI__struct__22427 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22427 */

#ifndef MLRI__kcg_comp_struct__22437
extern kcg_bool MLRI__kcg_comp_struct__22437(
  MLRI__struct__22437 *kcg_c1,
  MLRI__struct__22437 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22437 */

#ifndef MLRI__kcg_comp_struct__22446
extern kcg_bool MLRI__kcg_comp_struct__22446(
  MLRI__struct__22446 *kcg_c1,
  MLRI__struct__22446 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22446 */

#ifndef MLRI__kcg_comp_struct__22455
extern kcg_bool MLRI__kcg_comp_struct__22455(
  MLRI__struct__22455 *kcg_c1,
  MLRI__struct__22455 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22455 */

#ifndef MLRI__kcg_comp_struct__22465
extern kcg_bool MLRI__kcg_comp_struct__22465(
  MLRI__struct__22465 *kcg_c1,
  MLRI__struct__22465 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22465 */

#ifndef MLRI__kcg_comp_struct__22474
extern kcg_bool MLRI__kcg_comp_struct__22474(
  MLRI__struct__22474 *kcg_c1,
  MLRI__struct__22474 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22474 */

#ifndef MLRI__kcg_comp_struct__22483
extern kcg_bool MLRI__kcg_comp_struct__22483(
  MLRI__struct__22483 *kcg_c1,
  MLRI__struct__22483 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22483 */

#ifndef MLRI__kcg_comp_struct__22487
extern kcg_bool MLRI__kcg_comp_struct__22487(
  MLRI__struct__22487 *kcg_c1,
  MLRI__struct__22487 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22487 */

#ifndef MLRI__kcg_comp_struct__22494
extern kcg_bool MLRI__kcg_comp_struct__22494(
  MLRI__struct__22494 *kcg_c1,
  MLRI__struct__22494 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22494 */

#ifndef MLRI__kcg_comp_struct__22501
extern kcg_bool MLRI__kcg_comp_struct__22501(
  MLRI__struct__22501 *kcg_c1,
  MLRI__struct__22501 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22501 */

#ifndef MLRI__kcg_comp_struct__22506
extern kcg_bool MLRI__kcg_comp_struct__22506(
  MLRI__struct__22506 *kcg_c1,
  MLRI__struct__22506 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22506 */

#ifndef MLRI__kcg_comp_struct__22514
extern kcg_bool MLRI__kcg_comp_struct__22514(
  MLRI__struct__22514 *kcg_c1,
  MLRI__struct__22514 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22514 */

#ifndef MLRI__kcg_comp_struct__22519
extern kcg_bool MLRI__kcg_comp_struct__22519(
  MLRI__struct__22519 *kcg_c1,
  MLRI__struct__22519 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22519 */

#ifndef MLRI__kcg_comp_struct__22534
extern kcg_bool MLRI__kcg_comp_struct__22534(
  MLRI__struct__22534 *kcg_c1,
  MLRI__struct__22534 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22534 */

#ifndef MLRI__kcg_comp_struct__22540
extern kcg_bool MLRI__kcg_comp_struct__22540(
  MLRI__struct__22540 *kcg_c1,
  MLRI__struct__22540 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22540 */

#ifndef MLRI__kcg_comp_struct__22547
extern kcg_bool MLRI__kcg_comp_struct__22547(
  MLRI__struct__22547 *kcg_c1,
  MLRI__struct__22547 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22547 */

#ifndef MLRI__kcg_comp_struct__22552
extern kcg_bool MLRI__kcg_comp_struct__22552(
  MLRI__struct__22552 *kcg_c1,
  MLRI__struct__22552 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22552 */

#ifndef MLRI__kcg_comp_struct__22558
extern kcg_bool MLRI__kcg_comp_struct__22558(
  MLRI__struct__22558 *kcg_c1,
  MLRI__struct__22558 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22558 */

#ifndef MLRI__kcg_comp_struct__22564
extern kcg_bool MLRI__kcg_comp_struct__22564(
  MLRI__struct__22564 *kcg_c1,
  MLRI__struct__22564 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22564 */

#ifndef MLRI__kcg_comp_struct__22574
extern kcg_bool MLRI__kcg_comp_struct__22574(
  MLRI__struct__22574 *kcg_c1,
  MLRI__struct__22574 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22574 */

#ifndef MLRI__kcg_comp_struct__22582
extern kcg_bool MLRI__kcg_comp_struct__22582(
  MLRI__struct__22582 *kcg_c1,
  MLRI__struct__22582 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22582 */

#ifndef MLRI__kcg_comp_struct__22589
extern kcg_bool MLRI__kcg_comp_struct__22589(
  MLRI__struct__22589 *kcg_c1,
  MLRI__struct__22589 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22589 */

#ifndef MLRI__kcg_comp_struct__22598
extern kcg_bool MLRI__kcg_comp_struct__22598(
  MLRI__struct__22598 *kcg_c1,
  MLRI__struct__22598 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22598 */

#ifndef MLRI__kcg_comp_struct__22607
extern kcg_bool MLRI__kcg_comp_struct__22607(
  MLRI__struct__22607 *kcg_c1,
  MLRI__struct__22607 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22607 */

#ifndef MLRI__kcg_comp_struct__22614
extern kcg_bool MLRI__kcg_comp_struct__22614(
  MLRI__struct__22614 *kcg_c1,
  MLRI__struct__22614 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22614 */

#ifndef MLRI__kcg_comp_struct__22623
extern kcg_bool MLRI__kcg_comp_struct__22623(
  MLRI__struct__22623 *kcg_c1,
  MLRI__struct__22623 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22623 */

#ifndef MLRI__kcg_comp_struct__22635
extern kcg_bool MLRI__kcg_comp_struct__22635(
  MLRI__struct__22635 *kcg_c1,
  MLRI__struct__22635 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22635 */

#ifndef MLRI__kcg_comp_struct__22648
extern kcg_bool MLRI__kcg_comp_struct__22648(
  MLRI__struct__22648 *kcg_c1,
  MLRI__struct__22648 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22648 */

#ifndef MLRI__kcg_comp_struct__22655
extern kcg_bool MLRI__kcg_comp_struct__22655(
  MLRI__struct__22655 *kcg_c1,
  MLRI__struct__22655 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22655 */

#ifndef MLRI__kcg_comp_struct__22667
extern kcg_bool MLRI__kcg_comp_struct__22667(
  MLRI__struct__22667 *kcg_c1,
  MLRI__struct__22667 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22667 */

#ifndef MLRI__kcg_comp_struct__22681
extern kcg_bool MLRI__kcg_comp_struct__22681(
  MLRI__struct__22681 *kcg_c1,
  MLRI__struct__22681 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22681 */

#ifndef MLRI__kcg_comp_struct__22693
extern kcg_bool MLRI__kcg_comp_struct__22693(
  MLRI__struct__22693 *kcg_c1,
  MLRI__struct__22693 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22693 */

#ifndef MLRI__kcg_comp_struct__22698
extern kcg_bool MLRI__kcg_comp_struct__22698(
  MLRI__struct__22698 *kcg_c1,
  MLRI__struct__22698 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22698 */

#ifndef MLRI__kcg_comp_struct__22712
extern kcg_bool MLRI__kcg_comp_struct__22712(
  MLRI__struct__22712 *kcg_c1,
  MLRI__struct__22712 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22712 */

#ifndef MLRI__kcg_comp_struct__22724
extern kcg_bool MLRI__kcg_comp_struct__22724(
  MLRI__struct__22724 *kcg_c1,
  MLRI__struct__22724 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22724 */

#ifndef MLRI__kcg_comp_struct__22729
extern kcg_bool MLRI__kcg_comp_struct__22729(
  MLRI__struct__22729 *kcg_c1,
  MLRI__struct__22729 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22729 */

#ifndef MLRI__kcg_comp_struct__22743
extern kcg_bool MLRI__kcg_comp_struct__22743(
  MLRI__struct__22743 *kcg_c1,
  MLRI__struct__22743 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22743 */

#ifndef MLRI__kcg_comp_struct__22749
extern kcg_bool MLRI__kcg_comp_struct__22749(
  MLRI__struct__22749 *kcg_c1,
  MLRI__struct__22749 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22749 */

#ifndef MLRI__kcg_comp_struct__22770
extern kcg_bool MLRI__kcg_comp_struct__22770(
  MLRI__struct__22770 *kcg_c1,
  MLRI__struct__22770 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22770 */

#ifndef MLRI__kcg_comp_struct__22792
extern kcg_bool MLRI__kcg_comp_struct__22792(
  MLRI__struct__22792 *kcg_c1,
  MLRI__struct__22792 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22792 */

#ifndef MLRI__kcg_comp_struct__22802
extern kcg_bool MLRI__kcg_comp_struct__22802(
  MLRI__struct__22802 *kcg_c1,
  MLRI__struct__22802 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22802 */

#ifndef MLRI__kcg_comp_struct__22814
extern kcg_bool MLRI__kcg_comp_struct__22814(
  MLRI__struct__22814 *kcg_c1,
  MLRI__struct__22814 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22814 */

#ifndef MLRI__kcg_comp_struct__22819
extern kcg_bool MLRI__kcg_comp_struct__22819(
  MLRI__struct__22819 *kcg_c1,
  MLRI__struct__22819 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22819 */

#ifndef MLRI__kcg_comp_struct__22835
extern kcg_bool MLRI__kcg_comp_struct__22835(
  MLRI__struct__22835 *kcg_c1,
  MLRI__struct__22835 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22835 */

#ifndef MLRI__kcg_comp_struct__22845
extern kcg_bool MLRI__kcg_comp_struct__22845(
  MLRI__struct__22845 *kcg_c1,
  MLRI__struct__22845 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22845 */

#ifndef MLRI__kcg_comp_struct__22850
extern kcg_bool MLRI__kcg_comp_struct__22850(
  MLRI__struct__22850 *kcg_c1,
  MLRI__struct__22850 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22850 */

#ifndef MLRI__kcg_comp_struct__22864
extern kcg_bool MLRI__kcg_comp_struct__22864(
  MLRI__struct__22864 *kcg_c1,
  MLRI__struct__22864 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22864 */

#ifndef MLRI__kcg_comp_struct__22873
extern kcg_bool MLRI__kcg_comp_struct__22873(
  MLRI__struct__22873 *kcg_c1,
  MLRI__struct__22873 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22873 */

#ifndef MLRI__kcg_comp_struct__22878
extern kcg_bool MLRI__kcg_comp_struct__22878(
  MLRI__struct__22878 *kcg_c1,
  MLRI__struct__22878 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22878 */

#ifndef MLRI__kcg_comp_struct__22891
extern kcg_bool MLRI__kcg_comp_struct__22891(
  MLRI__struct__22891 *kcg_c1,
  MLRI__struct__22891 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22891 */

#ifndef MLRI__kcg_comp_struct__22899
extern kcg_bool MLRI__kcg_comp_struct__22899(
  MLRI__struct__22899 *kcg_c1,
  MLRI__struct__22899 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22899 */

#ifndef MLRI__kcg_comp_struct__22904
extern kcg_bool MLRI__kcg_comp_struct__22904(
  MLRI__struct__22904 *kcg_c1,
  MLRI__struct__22904 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22904 */

#ifndef MLRI__kcg_comp_struct__22914
extern kcg_bool MLRI__kcg_comp_struct__22914(
  MLRI__struct__22914 *kcg_c1,
  MLRI__struct__22914 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22914 */

#ifndef MLRI__kcg_comp_struct__22921
extern kcg_bool MLRI__kcg_comp_struct__22921(
  MLRI__struct__22921 *kcg_c1,
  MLRI__struct__22921 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22921 */

#ifndef MLRI__kcg_comp_struct__22933
extern kcg_bool MLRI__kcg_comp_struct__22933(
  MLRI__struct__22933 *kcg_c1,
  MLRI__struct__22933 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22933 */

#ifndef MLRI__kcg_comp_struct__22942
extern kcg_bool MLRI__kcg_comp_struct__22942(
  MLRI__struct__22942 *kcg_c1,
  MLRI__struct__22942 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22942 */

#ifndef MLRI__kcg_comp_struct__22947
extern kcg_bool MLRI__kcg_comp_struct__22947(
  MLRI__struct__22947 *kcg_c1,
  MLRI__struct__22947 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22947 */

#ifndef MLRI__kcg_comp_struct__22954
extern kcg_bool MLRI__kcg_comp_struct__22954(
  MLRI__struct__22954 *kcg_c1,
  MLRI__struct__22954 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22954 */

#ifndef MLRI__kcg_comp_struct__22962
extern kcg_bool MLRI__kcg_comp_struct__22962(
  MLRI__struct__22962 *kcg_c1,
  MLRI__struct__22962 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22962 */

#ifndef MLRI__kcg_comp_struct__22967
extern kcg_bool MLRI__kcg_comp_struct__22967(
  MLRI__struct__22967 *kcg_c1,
  MLRI__struct__22967 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22967 */

#ifndef MLRI__kcg_comp_struct__22978
extern kcg_bool MLRI__kcg_comp_struct__22978(
  MLRI__struct__22978 *kcg_c1,
  MLRI__struct__22978 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22978 */

#ifndef MLRI__kcg_comp_struct__22987
extern kcg_bool MLRI__kcg_comp_struct__22987(
  MLRI__struct__22987 *kcg_c1,
  MLRI__struct__22987 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22987 */

#ifndef MLRI__kcg_comp_struct__22999
extern kcg_bool MLRI__kcg_comp_struct__22999(
  MLRI__struct__22999 *kcg_c1,
  MLRI__struct__22999 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__22999 */

#ifndef MLRI__kcg_comp_struct__23004
extern kcg_bool MLRI__kcg_comp_struct__23004(
  MLRI__struct__23004 *kcg_c1,
  MLRI__struct__23004 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23004 */

#ifndef MLRI__kcg_comp_struct__23020
extern kcg_bool MLRI__kcg_comp_struct__23020(
  MLRI__struct__23020 *kcg_c1,
  MLRI__struct__23020 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23020 */

#ifndef MLRI__kcg_comp_struct__23028
extern kcg_bool MLRI__kcg_comp_struct__23028(
  MLRI__struct__23028 *kcg_c1,
  MLRI__struct__23028 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23028 */

#ifndef MLRI__kcg_comp_struct__23033
extern kcg_bool MLRI__kcg_comp_struct__23033(
  MLRI__struct__23033 *kcg_c1,
  MLRI__struct__23033 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23033 */

#ifndef MLRI__kcg_comp_struct__23043
extern kcg_bool MLRI__kcg_comp_struct__23043(
  MLRI__struct__23043 *kcg_c1,
  MLRI__struct__23043 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23043 */

#ifndef MLRI__kcg_comp_struct__23048
extern kcg_bool MLRI__kcg_comp_struct__23048(
  MLRI__struct__23048 *kcg_c1,
  MLRI__struct__23048 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23048 */

#ifndef MLRI__kcg_comp_struct__23062
extern kcg_bool MLRI__kcg_comp_struct__23062(
  MLRI__struct__23062 *kcg_c1,
  MLRI__struct__23062 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23062 */

#ifndef MLRI__kcg_comp_struct__23069
extern kcg_bool MLRI__kcg_comp_struct__23069(
  MLRI__struct__23069 *kcg_c1,
  MLRI__struct__23069 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23069 */

#ifndef MLRI__kcg_comp_struct__23077
extern kcg_bool MLRI__kcg_comp_struct__23077(
  MLRI__struct__23077 *kcg_c1,
  MLRI__struct__23077 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23077 */

#ifndef MLRI__kcg_comp_struct__23082
extern kcg_bool MLRI__kcg_comp_struct__23082(
  MLRI__struct__23082 *kcg_c1,
  MLRI__struct__23082 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23082 */

#ifndef MLRI__kcg_comp_struct__23091
extern kcg_bool MLRI__kcg_comp_struct__23091(
  MLRI__struct__23091 *kcg_c1,
  MLRI__struct__23091 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23091 */

#ifndef MLRI__kcg_comp_struct__23098
extern kcg_bool MLRI__kcg_comp_struct__23098(
  MLRI__struct__23098 *kcg_c1,
  MLRI__struct__23098 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23098 */

#ifndef MLRI__kcg_comp_struct__23107
extern kcg_bool MLRI__kcg_comp_struct__23107(
  MLRI__struct__23107 *kcg_c1,
  MLRI__struct__23107 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23107 */

#ifndef MLRI__kcg_comp_struct__23118
extern kcg_bool MLRI__kcg_comp_struct__23118(
  MLRI__struct__23118 *kcg_c1,
  MLRI__struct__23118 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23118 */

#ifndef MLRI__kcg_comp_struct__23127
extern kcg_bool MLRI__kcg_comp_struct__23127(
  MLRI__struct__23127 *kcg_c1,
  MLRI__struct__23127 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23127 */

#ifndef MLRI__kcg_comp_struct__23132
extern kcg_bool MLRI__kcg_comp_struct__23132(
  MLRI__struct__23132 *kcg_c1,
  MLRI__struct__23132 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23132 */

#ifndef MLRI__kcg_comp_struct__23144
extern kcg_bool MLRI__kcg_comp_struct__23144(
  MLRI__struct__23144 *kcg_c1,
  MLRI__struct__23144 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23144 */

#ifndef MLRI__kcg_comp_struct__23153
extern kcg_bool MLRI__kcg_comp_struct__23153(
  MLRI__struct__23153 *kcg_c1,
  MLRI__struct__23153 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23153 */

#ifndef MLRI__kcg_comp_struct__23163
extern kcg_bool MLRI__kcg_comp_struct__23163(
  MLRI__struct__23163 *kcg_c1,
  MLRI__struct__23163 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23163 */

#ifndef MLRI__kcg_comp_struct__23173
extern kcg_bool MLRI__kcg_comp_struct__23173(
  MLRI__struct__23173 *kcg_c1,
  MLRI__struct__23173 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23173 */

#ifndef MLRI__kcg_comp_struct__23178
extern kcg_bool MLRI__kcg_comp_struct__23178(
  MLRI__struct__23178 *kcg_c1,
  MLRI__struct__23178 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23178 */

#ifndef MLRI__kcg_comp_struct__23188
extern kcg_bool MLRI__kcg_comp_struct__23188(
  MLRI__struct__23188 *kcg_c1,
  MLRI__struct__23188 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23188 */

#ifndef MLRI__kcg_comp_struct__23193
extern kcg_bool MLRI__kcg_comp_struct__23193(
  MLRI__struct__23193 *kcg_c1,
  MLRI__struct__23193 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23193 */

#ifndef MLRI__kcg_comp_struct__23205
extern kcg_bool MLRI__kcg_comp_struct__23205(
  MLRI__struct__23205 *kcg_c1,
  MLRI__struct__23205 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23205 */

#ifndef MLRI__kcg_comp_struct__23214
extern kcg_bool MLRI__kcg_comp_struct__23214(
  MLRI__struct__23214 *kcg_c1,
  MLRI__struct__23214 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23214 */

#ifndef MLRI__kcg_comp_struct__23219
extern kcg_bool MLRI__kcg_comp_struct__23219(
  MLRI__struct__23219 *kcg_c1,
  MLRI__struct__23219 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23219 */

#ifndef MLRI__kcg_comp_struct__23230
extern kcg_bool MLRI__kcg_comp_struct__23230(
  MLRI__struct__23230 *kcg_c1,
  MLRI__struct__23230 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23230 */

#ifndef MLRI__kcg_comp_struct__23238
extern kcg_bool MLRI__kcg_comp_struct__23238(
  MLRI__struct__23238 *kcg_c1,
  MLRI__struct__23238 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23238 */

#ifndef MLRI__kcg_comp_struct__23248
extern kcg_bool MLRI__kcg_comp_struct__23248(
  MLRI__struct__23248 *kcg_c1,
  MLRI__struct__23248 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23248 */

#ifndef MLRI__kcg_comp_struct__23253
extern kcg_bool MLRI__kcg_comp_struct__23253(
  MLRI__struct__23253 *kcg_c1,
  MLRI__struct__23253 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23253 */

#ifndef MLRI__kcg_comp_struct__23278
extern kcg_bool MLRI__kcg_comp_struct__23278(
  MLRI__struct__23278 *kcg_c1,
  MLRI__struct__23278 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23278 */

#ifndef MLRI__kcg_comp_struct__23288
extern kcg_bool MLRI__kcg_comp_struct__23288(
  MLRI__struct__23288 *kcg_c1,
  MLRI__struct__23288 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23288 */

#ifndef MLRI__kcg_comp_struct__23293
extern kcg_bool MLRI__kcg_comp_struct__23293(
  MLRI__struct__23293 *kcg_c1,
  MLRI__struct__23293 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23293 */

#ifndef MLRI__kcg_comp_struct__23304
extern kcg_bool MLRI__kcg_comp_struct__23304(
  MLRI__struct__23304 *kcg_c1,
  MLRI__struct__23304 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23304 */

#ifndef MLRI__kcg_comp_struct__23330
extern kcg_bool MLRI__kcg_comp_struct__23330(
  MLRI__struct__23330 *kcg_c1,
  MLRI__struct__23330 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23330 */

#ifndef MLRI__kcg_comp_struct__23340
extern kcg_bool MLRI__kcg_comp_struct__23340(
  MLRI__struct__23340 *kcg_c1,
  MLRI__struct__23340 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23340 */

#ifndef MLRI__kcg_comp_struct__23353
extern kcg_bool MLRI__kcg_comp_struct__23353(
  MLRI__struct__23353 *kcg_c1,
  MLRI__struct__23353 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23353 */

#ifndef MLRI__kcg_comp_struct__23358
extern kcg_bool MLRI__kcg_comp_struct__23358(
  MLRI__struct__23358 *kcg_c1,
  MLRI__struct__23358 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23358 */

#ifndef MLRI__kcg_comp_struct__23373
extern kcg_bool MLRI__kcg_comp_struct__23373(
  MLRI__struct__23373 *kcg_c1,
  MLRI__struct__23373 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23373 */

#ifndef MLRI__kcg_comp_struct__23381
extern kcg_bool MLRI__kcg_comp_struct__23381(
  MLRI__struct__23381 *kcg_c1,
  MLRI__struct__23381 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23381 */

#ifndef MLRI__kcg_comp_struct__23386
extern kcg_bool MLRI__kcg_comp_struct__23386(
  MLRI__struct__23386 *kcg_c1,
  MLRI__struct__23386 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23386 */

#ifndef MLRI__kcg_comp_struct__23394
extern kcg_bool MLRI__kcg_comp_struct__23394(
  MLRI__struct__23394 *kcg_c1,
  MLRI__struct__23394 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23394 */

#ifndef MLRI__kcg_comp_struct__23399
extern kcg_bool MLRI__kcg_comp_struct__23399(
  MLRI__struct__23399 *kcg_c1,
  MLRI__struct__23399 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23399 */

#ifndef MLRI__kcg_comp_struct__23411
extern kcg_bool MLRI__kcg_comp_struct__23411(
  MLRI__struct__23411 *kcg_c1,
  MLRI__struct__23411 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23411 */

#ifndef MLRI__kcg_comp_struct__23416
extern kcg_bool MLRI__kcg_comp_struct__23416(
  MLRI__struct__23416 *kcg_c1,
  MLRI__struct__23416 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23416 */

#ifndef MLRI__kcg_comp_struct__23423
extern kcg_bool MLRI__kcg_comp_struct__23423(
  MLRI__struct__23423 *kcg_c1,
  MLRI__struct__23423 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23423 */

#ifndef MLRI__kcg_comp_struct__23428
extern kcg_bool MLRI__kcg_comp_struct__23428(
  MLRI__struct__23428 *kcg_c1,
  MLRI__struct__23428 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23428 */

#ifndef MLRI__kcg_comp_struct__23478
extern kcg_bool MLRI__kcg_comp_struct__23478(
  MLRI__struct__23478 *kcg_c1,
  MLRI__struct__23478 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23478 */

#ifndef MLRI__kcg_comp_struct__23485
extern kcg_bool MLRI__kcg_comp_struct__23485(
  MLRI__struct__23485 *kcg_c1,
  MLRI__struct__23485 *kcg_c2);
#endif /* MLRI__kcg_comp_struct__23485 */

#ifndef MLRI__kcg_comp_array__21206
extern kcg_bool MLRI__kcg_comp_array__21206(
  MLRI__array__21206 *kcg_c1,
  MLRI__array__21206 *kcg_c2);
#endif /* MLRI__kcg_comp_array__21206 */

#ifndef MLRI__kcg_comp_array__21370
extern kcg_bool MLRI__kcg_comp_array__21370(
  MLRI__array__21370 *kcg_c1,
  MLRI__array__21370 *kcg_c2);
#endif /* MLRI__kcg_comp_array__21370 */

#ifndef MLRI__kcg_comp_array__21407
extern kcg_bool MLRI__kcg_comp_array__21407(
  MLRI__array__21407 *kcg_c1,
  MLRI__array__21407 *kcg_c2);
#endif /* MLRI__kcg_comp_array__21407 */

#ifndef MLRI__kcg_comp_array__21481
extern kcg_bool MLRI__kcg_comp_array__21481(
  MLRI__array__21481 *kcg_c1,
  MLRI__array__21481 *kcg_c2);
#endif /* MLRI__kcg_comp_array__21481 */

#ifndef MLRI__kcg_comp_array__21495
extern kcg_bool MLRI__kcg_comp_array__21495(
  MLRI__array__21495 *kcg_c1,
  MLRI__array__21495 *kcg_c2);
#endif /* MLRI__kcg_comp_array__21495 */

#ifndef MLRI__kcg_comp_array__21563
extern kcg_bool MLRI__kcg_comp_array__21563(
  MLRI__array__21563 *kcg_c1,
  MLRI__array__21563 *kcg_c2);
#endif /* MLRI__kcg_comp_array__21563 */

#ifndef MLRI__kcg_comp_array__21625
extern kcg_bool MLRI__kcg_comp_array__21625(
  MLRI__array__21625 *kcg_c1,
  MLRI__array__21625 *kcg_c2);
#endif /* MLRI__kcg_comp_array__21625 */

#ifndef MLRI__kcg_comp_array__21740
extern kcg_bool MLRI__kcg_comp_array__21740(
  MLRI__array__21740 *kcg_c1,
  MLRI__array__21740 *kcg_c2);
#endif /* MLRI__kcg_comp_array__21740 */

#ifndef MLRI__kcg_comp_array__21750
extern kcg_bool MLRI__kcg_comp_array__21750(
  MLRI__array__21750 *kcg_c1,
  MLRI__array__21750 *kcg_c2);
#endif /* MLRI__kcg_comp_array__21750 */

#ifndef MLRI__kcg_comp_array__21765
extern kcg_bool MLRI__kcg_comp_array__21765(
  MLRI__array__21765 *kcg_c1,
  MLRI__array__21765 *kcg_c2);
#endif /* MLRI__kcg_comp_array__21765 */

#ifndef MLRI__kcg_comp_array__21780
extern kcg_bool MLRI__kcg_comp_array__21780(
  MLRI__array__21780 *kcg_c1,
  MLRI__array__21780 *kcg_c2);
#endif /* MLRI__kcg_comp_array__21780 */

#ifndef MLRI__kcg_comp_array__21797
extern kcg_bool MLRI__kcg_comp_array__21797(
  MLRI__array__21797 *kcg_c1,
  MLRI__array__21797 *kcg_c2);
#endif /* MLRI__kcg_comp_array__21797 */

#ifndef MLRI__kcg_comp_array__21812
extern kcg_bool MLRI__kcg_comp_array__21812(
  MLRI__array__21812 *kcg_c1,
  MLRI__array__21812 *kcg_c2);
#endif /* MLRI__kcg_comp_array__21812 */

#ifndef MLRI__kcg_comp_array__21826
extern kcg_bool MLRI__kcg_comp_array__21826(
  MLRI__array__21826 *kcg_c1,
  MLRI__array__21826 *kcg_c2);
#endif /* MLRI__kcg_comp_array__21826 */

#ifndef MLRI__kcg_comp_array__21840
extern kcg_bool MLRI__kcg_comp_array__21840(
  MLRI__array__21840 *kcg_c1,
  MLRI__array__21840 *kcg_c2);
#endif /* MLRI__kcg_comp_array__21840 */

#ifndef MLRI__kcg_comp_array__21857
extern kcg_bool MLRI__kcg_comp_array__21857(
  MLRI__array__21857 *kcg_c1,
  MLRI__array__21857 *kcg_c2);
#endif /* MLRI__kcg_comp_array__21857 */

#ifndef MLRI__kcg_comp_array__21866
extern kcg_bool MLRI__kcg_comp_array__21866(
  MLRI__array__21866 *kcg_c1,
  MLRI__array__21866 *kcg_c2);
#endif /* MLRI__kcg_comp_array__21866 */

#ifndef MLRI__kcg_comp_array__21881
extern kcg_bool MLRI__kcg_comp_array__21881(
  MLRI__array__21881 *kcg_c1,
  MLRI__array__21881 *kcg_c2);
#endif /* MLRI__kcg_comp_array__21881 */

#ifndef MLRI__kcg_comp_array__21892
extern kcg_bool MLRI__kcg_comp_array__21892(
  MLRI__array__21892 *kcg_c1,
  MLRI__array__21892 *kcg_c2);
#endif /* MLRI__kcg_comp_array__21892 */

#ifndef MLRI__kcg_comp_array__21901
extern kcg_bool MLRI__kcg_comp_array__21901(
  MLRI__array__21901 *kcg_c1,
  MLRI__array__21901 *kcg_c2);
#endif /* MLRI__kcg_comp_array__21901 */

#ifndef MLRI__kcg_comp_array__21914
extern kcg_bool MLRI__kcg_comp_array__21914(
  MLRI__array__21914 *kcg_c1,
  MLRI__array__21914 *kcg_c2);
#endif /* MLRI__kcg_comp_array__21914 */

#ifndef MLRI__kcg_comp_array__21923
extern kcg_bool MLRI__kcg_comp_array__21923(
  MLRI__array__21923 *kcg_c1,
  MLRI__array__21923 *kcg_c2);
#endif /* MLRI__kcg_comp_array__21923 */

#ifndef MLRI__kcg_comp_array__21934
extern kcg_bool MLRI__kcg_comp_array__21934(
  MLRI__array__21934 *kcg_c1,
  MLRI__array__21934 *kcg_c2);
#endif /* MLRI__kcg_comp_array__21934 */

#ifndef MLRI__kcg_comp_array__21942
extern kcg_bool MLRI__kcg_comp_array__21942(
  MLRI__array__21942 *kcg_c1,
  MLRI__array__21942 *kcg_c2);
#endif /* MLRI__kcg_comp_array__21942 */

#ifndef MLRI__kcg_comp_array__21953
extern kcg_bool MLRI__kcg_comp_array__21953(
  MLRI__array__21953 *kcg_c1,
  MLRI__array__21953 *kcg_c2);
#endif /* MLRI__kcg_comp_array__21953 */

#ifndef MLRI__kcg_comp_array__21964
extern kcg_bool MLRI__kcg_comp_array__21964(
  MLRI__array__21964 *kcg_c1,
  MLRI__array__21964 *kcg_c2);
#endif /* MLRI__kcg_comp_array__21964 */

#ifndef MLRI__kcg_comp_array__21976
extern kcg_bool MLRI__kcg_comp_array__21976(
  MLRI__array__21976 *kcg_c1,
  MLRI__array__21976 *kcg_c2);
#endif /* MLRI__kcg_comp_array__21976 */

#ifndef MLRI__kcg_comp_array__22498
extern kcg_bool MLRI__kcg_comp_array__22498(
  MLRI__array__22498 *kcg_c1,
  MLRI__array__22498 *kcg_c2);
#endif /* MLRI__kcg_comp_array__22498 */

#ifndef MLRI__kcg_comp_array__22511
extern kcg_bool MLRI__kcg_comp_array__22511(
  MLRI__array__22511 *kcg_c1,
  MLRI__array__22511 *kcg_c2);
#endif /* MLRI__kcg_comp_array__22511 */

#ifndef MLRI__kcg_comp_array__22544
extern kcg_bool MLRI__kcg_comp_array__22544(
  MLRI__array__22544 *kcg_c1,
  MLRI__array__22544 *kcg_c2);
#endif /* MLRI__kcg_comp_array__22544 */

#ifndef MLRI__kcg_comp_array__22690
extern kcg_bool MLRI__kcg_comp_array__22690(
  MLRI__array__22690 *kcg_c1,
  MLRI__array__22690 *kcg_c2);
#endif /* MLRI__kcg_comp_array__22690 */

#ifndef MLRI__kcg_comp_array__22721
extern kcg_bool MLRI__kcg_comp_array__22721(
  MLRI__array__22721 *kcg_c1,
  MLRI__array__22721 *kcg_c2);
#endif /* MLRI__kcg_comp_array__22721 */

#ifndef MLRI__kcg_comp_array__22811
extern kcg_bool MLRI__kcg_comp_array__22811(
  MLRI__array__22811 *kcg_c1,
  MLRI__array__22811 *kcg_c2);
#endif /* MLRI__kcg_comp_array__22811 */

#ifndef MLRI__kcg_comp_array__22842
extern kcg_bool MLRI__kcg_comp_array__22842(
  MLRI__array__22842 *kcg_c1,
  MLRI__array__22842 *kcg_c2);
#endif /* MLRI__kcg_comp_array__22842 */

#ifndef MLRI__kcg_comp_array__22870
extern kcg_bool MLRI__kcg_comp_array__22870(
  MLRI__array__22870 *kcg_c1,
  MLRI__array__22870 *kcg_c2);
#endif /* MLRI__kcg_comp_array__22870 */

#ifndef MLRI__kcg_comp_array__22896
extern kcg_bool MLRI__kcg_comp_array__22896(
  MLRI__array__22896 *kcg_c1,
  MLRI__array__22896 *kcg_c2);
#endif /* MLRI__kcg_comp_array__22896 */

#ifndef MLRI__kcg_comp_array__22939
extern kcg_bool MLRI__kcg_comp_array__22939(
  MLRI__array__22939 *kcg_c1,
  MLRI__array__22939 *kcg_c2);
#endif /* MLRI__kcg_comp_array__22939 */

#ifndef MLRI__kcg_comp_array__22959
extern kcg_bool MLRI__kcg_comp_array__22959(
  MLRI__array__22959 *kcg_c1,
  MLRI__array__22959 *kcg_c2);
#endif /* MLRI__kcg_comp_array__22959 */

#ifndef MLRI__kcg_comp_array__22996
extern kcg_bool MLRI__kcg_comp_array__22996(
  MLRI__array__22996 *kcg_c1,
  MLRI__array__22996 *kcg_c2);
#endif /* MLRI__kcg_comp_array__22996 */

#ifndef MLRI__kcg_comp_array__23025
extern kcg_bool MLRI__kcg_comp_array__23025(
  MLRI__array__23025 *kcg_c1,
  MLRI__array__23025 *kcg_c2);
#endif /* MLRI__kcg_comp_array__23025 */

#ifndef MLRI__kcg_comp_array__23040
extern kcg_bool MLRI__kcg_comp_array__23040(
  MLRI__array__23040 *kcg_c1,
  MLRI__array__23040 *kcg_c2);
#endif /* MLRI__kcg_comp_array__23040 */

#ifndef MLRI__kcg_comp_array__23074
extern kcg_bool MLRI__kcg_comp_array__23074(
  MLRI__array__23074 *kcg_c1,
  MLRI__array__23074 *kcg_c2);
#endif /* MLRI__kcg_comp_array__23074 */

#ifndef MLRI__kcg_comp_array__23124
extern kcg_bool MLRI__kcg_comp_array__23124(
  MLRI__array__23124 *kcg_c1,
  MLRI__array__23124 *kcg_c2);
#endif /* MLRI__kcg_comp_array__23124 */

#ifndef MLRI__kcg_comp_array__23170
extern kcg_bool MLRI__kcg_comp_array__23170(
  MLRI__array__23170 *kcg_c1,
  MLRI__array__23170 *kcg_c2);
#endif /* MLRI__kcg_comp_array__23170 */

#ifndef MLRI__kcg_comp_array__23185
extern kcg_bool MLRI__kcg_comp_array__23185(
  MLRI__array__23185 *kcg_c1,
  MLRI__array__23185 *kcg_c2);
#endif /* MLRI__kcg_comp_array__23185 */

#ifndef MLRI__kcg_comp_array__23211
extern kcg_bool MLRI__kcg_comp_array__23211(
  MLRI__array__23211 *kcg_c1,
  MLRI__array__23211 *kcg_c2);
#endif /* MLRI__kcg_comp_array__23211 */

#ifndef MLRI__kcg_comp_array__23245
extern kcg_bool MLRI__kcg_comp_array__23245(
  MLRI__array__23245 *kcg_c1,
  MLRI__array__23245 *kcg_c2);
#endif /* MLRI__kcg_comp_array__23245 */

#ifndef MLRI__kcg_comp_array__23285
extern kcg_bool MLRI__kcg_comp_array__23285(
  MLRI__array__23285 *kcg_c1,
  MLRI__array__23285 *kcg_c2);
#endif /* MLRI__kcg_comp_array__23285 */

#ifndef MLRI__kcg_comp_array__23350
extern kcg_bool MLRI__kcg_comp_array__23350(
  MLRI__array__23350 *kcg_c1,
  MLRI__array__23350 *kcg_c2);
#endif /* MLRI__kcg_comp_array__23350 */

#ifndef MLRI__kcg_comp_array__23378
extern kcg_bool MLRI__kcg_comp_array__23378(
  MLRI__array__23378 *kcg_c1,
  MLRI__array__23378 *kcg_c2);
#endif /* MLRI__kcg_comp_array__23378 */

#ifndef MLRI__kcg_comp_array__23391
extern kcg_bool MLRI__kcg_comp_array__23391(
  MLRI__array__23391 *kcg_c1,
  MLRI__array__23391 *kcg_c2);
#endif /* MLRI__kcg_comp_array__23391 */

#ifndef MLRI__kcg_comp_array__23408
extern kcg_bool MLRI__kcg_comp_array__23408(
  MLRI__array__23408 *kcg_c1,
  MLRI__array__23408 *kcg_c2);
#endif /* MLRI__kcg_comp_array__23408 */

#ifndef MLRI__kcg_comp_array__23420
extern kcg_bool MLRI__kcg_comp_array__23420(
  MLRI__array__23420 *kcg_c1,
  MLRI__array__23420 *kcg_c2);
#endif /* MLRI__kcg_comp_array__23420 */

#ifndef MLRI__kcg_comp_array__23490
extern kcg_bool MLRI__kcg_comp_array__23490(
  MLRI__array__23490 *kcg_c1,
  MLRI__array__23490 *kcg_c2);
#endif /* MLRI__kcg_comp_array__23490 */

#ifndef MLRI__kcg_comp_array__24642
extern kcg_bool MLRI__kcg_comp_array__24642(
  MLRI__array__24642 *kcg_c1,
  MLRI__array__24642 *kcg_c2);
#endif /* MLRI__kcg_comp_array__24642 */

#define MLRI__kcg_comp_positionErrors_T_TrainPosition_Types_Pck MLRI__kcg_comp_struct__21506

#define MLRI__kcg_copy_positionErrors_T_TrainPosition_Types_Pck MLRI__kcg_copy_struct__21506

#define MLRI__kcg_comp_trainPositionInfo_T_TrainPosition_Types_Pck MLRI__kcg_comp_struct__21440

#define MLRI__kcg_copy_trainPositionInfo_T_TrainPosition_Types_Pck MLRI__kcg_copy_struct__21440

#define MLRI__kcg_comp_positionedBGs_T_TrainPosition_Types_Pck MLRI__kcg_comp_array__21407

#define MLRI__kcg_copy_positionedBGs_T_TrainPosition_Types_Pck MLRI__kcg_copy_array__21407

#define MLRI__kcg_comp_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck MLRI__kcg_comp_array__21481

#define MLRI__kcg_copy_linkedBGs_asPositionedBGs_T_TrainPosition_Types_Pck MLRI__kcg_copy_array__21481

#define MLRI__kcg_comp_infoFromLinking_T_TrainPosition_Types_Pck MLRI__kcg_comp_struct__21345

#define MLRI__kcg_copy_infoFromLinking_T_TrainPosition_Types_Pck MLRI__kcg_copy_struct__21345

#define MLRI__kcg_comp_positionedBG_T_TrainPosition_Types_Pck MLRI__kcg_comp_struct__21396

#define MLRI__kcg_copy_positionedBG_T_TrainPosition_Types_Pck MLRI__kcg_copy_struct__21396

#define MLRI__kcg_comp_trainPosition_T_TrainPosition_Types_Pck MLRI__kcg_comp_struct__21410

#define MLRI__kcg_copy_trainPosition_T_TrainPosition_Types_Pck MLRI__kcg_copy_struct__21410

#define MLRI__kcg_comp_trainProperties_T_TrainPosition_Types_Pck MLRI__kcg_comp_struct__21451

#define MLRI__kcg_copy_trainProperties_T_TrainPosition_Types_Pck MLRI__kcg_copy_struct__21451

#define MLRI__kcg_comp_TelegramStore_T_BuildBGMessage_Pkg MLRI__kcg_comp_struct__21573

#define MLRI__kcg_copy_TelegramStore_T_BuildBGMessage_Pkg MLRI__kcg_copy_struct__21573

#define MLRI__kcg_comp_BGCollector_T_BuildBGMessage_Pkg MLRI__kcg_comp_struct__21579

#define MLRI__kcg_copy_BGCollector_T_BuildBGMessage_Pkg MLRI__kcg_copy_struct__21579

#define MLRI__kcg_comp_odometry_T_Obu_BasicTypes_Pkg MLRI__kcg_comp_struct__21360

#define MLRI__kcg_copy_odometry_T_Obu_BasicTypes_Pkg MLRI__kcg_copy_struct__21360

#define MLRI__kcg_comp_OdometryLocations_T_Obu_BasicTypes_Pkg MLRI__kcg_comp_struct__21354

#define MLRI__kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg MLRI__kcg_copy_struct__21354

#define MLRI__kcg_comp_LocWithInAcc_T_Obu_BasicTypes_Pkg MLRI__kcg_comp_struct__21325

#define MLRI__kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg MLRI__kcg_copy_struct__21325

#define MLRI__kcg_comp_ReceivedMessage_T_Common_Types_Pkg MLRI__kcg_comp_struct__21729

#define MLRI__kcg_copy_ReceivedMessage_T_Common_Types_Pkg MLRI__kcg_copy_struct__21729

#define MLRI__kcg_comp_Radio_TrackTrain_Header_T_Radio_Types_Pkg MLRI__kcg_comp_struct__21718

#define MLRI__kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg MLRI__kcg_copy_struct__21718

#define MLRI__kcg_comp_xText_T_Packet_Types_Pkg MLRI__kcg_comp_struct__21735

#define MLRI__kcg_copy_xText_T_Packet_Types_Pkg MLRI__kcg_copy_struct__21735

#define MLRI__kcg_comp_xTextArray_T_Packet_Types_Pkg MLRI__kcg_comp_array__21740

#define MLRI__kcg_copy_xTextArray_T_Packet_Types_Pkg MLRI__kcg_copy_array__21740

#define MLRI__kcg_comp_nvkvint_T_Packet_Types_Pkg MLRI__kcg_comp_struct__21743

#define MLRI__kcg_copy_nvkvint_T_Packet_Types_Pkg MLRI__kcg_copy_struct__21743

#define MLRI__kcg_comp_nvkvintArray_T_Packet_Types_Pkg MLRI__kcg_comp_array__21750

#define MLRI__kcg_copy_nvkvintArray_T_Packet_Types_Pkg MLRI__kcg_copy_array__21750

#define MLRI__kcg_comp_P80_ModeProfiles_T_Packet_Types_Pkg MLRI__kcg_comp_array__21765

#define MLRI__kcg_copy_P80_ModeProfiles_T_Packet_Types_Pkg MLRI__kcg_copy_array__21765

#define MLRI__kcg_comp_P79_GeographicalPositionInformations_T_Packet_Types_Pkg MLRI__kcg_comp_array__21780

#define MLRI__kcg_copy_P79_GeographicalPositionInformations_T_Packet_Types_Pkg MLRI__kcg_copy_array__21780

#define MLRI__kcg_comp_P70_RouteSuitabilityDatas_T_Packet_Types_Pkg MLRI__kcg_comp_array__21797

#define MLRI__kcg_copy_P70_RouteSuitabilityDatas_T_Packet_Types_Pkg MLRI__kcg_copy_array__21797

#define MLRI__kcg_comp_P69_TrackConditionStationPlatforms_T_Packet_Types_Pkg MLRI__kcg_comp_array__21812

#define MLRI__kcg_copy_P69_TrackConditionStationPlatforms_T_Packet_Types_Pkg MLRI__kcg_copy_array__21812

#define MLRI__kcg_comp_P68_TrackConditions_T_Packet_Types_Pkg MLRI__kcg_comp_array__21826

#define MLRI__kcg_copy_P68_TrackConditions_T_Packet_Types_Pkg MLRI__kcg_copy_array__21826

#define MLRI__kcg_comp_P58_PositionReportParameters_T_Packet_Types_Pkg MLRI__kcg_comp_array__21840

#define MLRI__kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg MLRI__kcg_copy_array__21840

#define MLRI__kcg_comp_P52_PermittedBrakingDistanceInformations_T_Packet_Types_Pkg MLRI__kcg_comp_array__21857

#define MLRI__kcg_copy_P52_PermittedBrakingDistanceInformations_T_Packet_Types_Pkg MLRI__kcg_copy_array__21857

#define MLRI__kcg_comp_P51_AxleLoadSpeedProfiles_T_Packet_Types_Pkg MLRI__kcg_comp_array__21881

#define MLRI__kcg_copy_P51_AxleLoadSpeedProfiles_T_Packet_Types_Pkg MLRI__kcg_copy_array__21881

#define MLRI__kcg_comp_axleload_T_Packet_Types_Pkg MLRI__kcg_comp_struct__21860

#define MLRI__kcg_copy_axleload_T_Packet_Types_Pkg MLRI__kcg_copy_struct__21860

#define MLRI__kcg_comp_axleloadArray_T_Packet_Types_Pkg MLRI__kcg_comp_array__21866

#define MLRI__kcg_copy_axleloadArray_T_Packet_Types_Pkg MLRI__kcg_copy_array__21866

#define MLRI__kcg_comp_P49_ListOfBalisesForSHAreas_T_Packet_Types_Pkg MLRI__kcg_comp_array__21892

#define MLRI__kcg_copy_P49_ListOfBalisesForSHAreas_T_Packet_Types_Pkg MLRI__kcg_copy_array__21892

#define MLRI__kcg_comp_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg MLRI__kcg_comp_array__21901

#define MLRI__kcg_copy_P46_ConditionalLevelTransitionOrders_T_Packet_Types_Pkg MLRI__kcg_copy_array__21901

#define MLRI__kcg_comp_P41_LevelTransistionOrders_T_Packet_Types_Pkg MLRI__kcg_comp_array__21914

#define MLRI__kcg_copy_P41_LevelTransistionOrders_T_Packet_Types_Pkg MLRI__kcg_copy_array__21914

#define MLRI__kcg_comp_nvkrint_T_Packet_Types_Pkg MLRI__kcg_comp_struct__21917

#define MLRI__kcg_copy_nvkrint_T_Packet_Types_Pkg MLRI__kcg_copy_struct__21917

#define MLRI__kcg_comp_nvkrintArray_T_Packet_Types_Pkg MLRI__kcg_comp_array__21923

#define MLRI__kcg_copy_nvkrintArray_T_Packet_Types_Pkg MLRI__kcg_copy_array__21923

#define MLRI__kcg_comp_nvkvintset_T_Packet_Types_Pkg MLRI__kcg_comp_struct__21926

#define MLRI__kcg_copy_nvkvintset_T_Packet_Types_Pkg MLRI__kcg_copy_struct__21926

#define MLRI__kcg_comp_nvkvintsetArray_T_Packet_Types_Pkg MLRI__kcg_comp_array__21934

#define MLRI__kcg_copy_nvkvintsetArray_T_Packet_Types_Pkg MLRI__kcg_copy_array__21934

#define MLRI__kcg_comp_nidC_T_Packet_Types_Pkg MLRI__kcg_comp_struct__21937

#define MLRI__kcg_copy_nidC_T_Packet_Types_Pkg MLRI__kcg_copy_struct__21937

#define MLRI__kcg_comp_nidCArray_T_Packet_Types_Pkg MLRI__kcg_comp_array__21942

#define MLRI__kcg_copy_nidCArray_T_Packet_Types_Pkg MLRI__kcg_copy_array__21942

#define MLRI__kcg_comp_Diff_T_Packet_Types_Pkg MLRI__kcg_comp_struct__21945

#define MLRI__kcg_copy_Diff_T_Packet_Types_Pkg MLRI__kcg_copy_struct__21945

#define MLRI__kcg_comp_DiffArray_T_Packet_Types_Pkg MLRI__kcg_comp_array__21953

#define MLRI__kcg_copy_DiffArray_T_Packet_Types_Pkg MLRI__kcg_copy_array__21953

#define MLRI__kcg_comp_SSP_T_Packet_Types_Pkg MLRI__kcg_comp_struct__21956

#define MLRI__kcg_copy_SSP_T_Packet_Types_Pkg MLRI__kcg_copy_struct__21956

#define MLRI__kcg_comp_SSPArray_T_Packet_Types_Pkg MLRI__kcg_comp_array__21964

#define MLRI__kcg_copy_SSPArray_T_Packet_Types_Pkg MLRI__kcg_copy_array__21964

#define MLRI__kcg_comp_P21_GradientProfiles_T_Packet_Types_Pkg MLRI__kcg_comp_array__21976

#define MLRI__kcg_copy_P21_GradientProfiles_T_Packet_Types_Pkg MLRI__kcg_copy_array__21976

#define MLRI__kcg_comp_P131_RBCTransitionOrder_T_Packet_Types_Pkg MLRI__kcg_comp_struct__21979

#define MLRI__kcg_copy_P131_RBCTransitionOrder_T_Packet_Types_Pkg MLRI__kcg_copy_struct__21979

#define MLRI__kcg_comp_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg MLRI__kcg_comp_struct__21989

#define MLRI__kcg_copy_P137_StopIfInStaffResponsible_T_Packet_Types_Pkg MLRI__kcg_copy_struct__21989

#define MLRI__kcg_comp_P138_ReversingAreaInformation_T_Packet_Types_Pkg MLRI__kcg_comp_struct__21994

#define MLRI__kcg_copy_P138_ReversingAreaInformation_T_Packet_Types_Pkg MLRI__kcg_copy_struct__21994

#define MLRI__kcg_comp_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg MLRI__kcg_comp_struct__22001

#define MLRI__kcg_copy_P139_ReversingSupervisionInformation_T_Packet_Types_Pkg MLRI__kcg_copy_struct__22001

#define MLRI__kcg_comp_P140_TrainRunningNumberFromRBC_T_Packet_Types_Pkg MLRI__kcg_comp_struct__22008

#define MLRI__kcg_copy_P140_TrainRunningNumberFromRBC_T_Packet_Types_Pkg MLRI__kcg_copy_struct__22008

#define MLRI__kcg_comp_P21_GradientProfile_T_Packet_Types_Pkg MLRI__kcg_comp_struct__21967

#define MLRI__kcg_copy_P21_GradientProfile_T_Packet_Types_Pkg MLRI__kcg_copy_struct__21967

#define MLRI__kcg_comp_P255_EndOfInformation_T_Packet_Types_Pkg MLRI__kcg_comp_struct__22013

#define MLRI__kcg_copy_P255_EndOfInformation_T_Packet_Types_Pkg MLRI__kcg_copy_struct__22013

#define MLRI__kcg_comp_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg MLRI__kcg_comp_struct__22017

#define MLRI__kcg_copy_P27_InternationalStaticSpeedProfile_T_Packet_Types_Pkg MLRI__kcg_copy_struct__22017

#define MLRI__kcg_comp_P39_TrackConditionChangeOfTractionSystem_T_Packet_Types_Pkg MLRI__kcg_comp_struct__22027

#define MLRI__kcg_copy_P39_TrackConditionChangeOfTractionSystem_T_Packet_Types_Pkg MLRI__kcg_copy_struct__22027

#define MLRI__kcg_comp_P3_NationalValues_T_Packet_Types_Pkg MLRI__kcg_comp_struct__22035

#define MLRI__kcg_copy_P3_NationalValues_T_Packet_Types_Pkg MLRI__kcg_copy_struct__22035

#define MLRI__kcg_comp_P40_TrackConditionChangeOfAllowedCurrentConsumption_T_Packet_Types_Pkg MLRI__kcg_comp_struct__22073

#define MLRI__kcg_copy_P40_TrackConditionChangeOfAllowedCurrentConsumption_T_Packet_Types_Pkg MLRI__kcg_copy_struct__22073

#define MLRI__kcg_comp_P41_LevelTransitionOrder_T_Packet_Types_Pkg MLRI__kcg_comp_struct__21904

#define MLRI__kcg_copy_P41_LevelTransitionOrder_T_Packet_Types_Pkg MLRI__kcg_copy_struct__21904

#define MLRI__kcg_comp_P42_SessionManagement_T_Packet_Types_Pkg MLRI__kcg_comp_struct__22080

#define MLRI__kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg MLRI__kcg_copy_struct__22080

#define MLRI__kcg_comp_P44_DataUsedByApplicationsOutsideTheERTMSETCSSystem_T_Packet_Types_Pkg MLRI__kcg_comp_struct__22089

#define MLRI__kcg_copy_P44_DataUsedByApplicationsOutsideTheERTMSETCSSystem_T_Packet_Types_Pkg MLRI__kcg_copy_struct__22089

#define MLRI__kcg_comp_P45_RadioNetworkRegistration_T_Packet_Types_Pkg MLRI__kcg_comp_struct__22096

#define MLRI__kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg MLRI__kcg_copy_struct__22096

#define MLRI__kcg_comp_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg MLRI__kcg_comp_struct__21895

#define MLRI__kcg_copy_P46_ConditionalLevelTransitionOrder_T_Packet_Types_Pkg MLRI__kcg_copy_struct__21895

#define MLRI__kcg_comp_P49_ListOfBalisesForSHArea_T_Packet_Types_Pkg MLRI__kcg_comp_struct__21884

#define MLRI__kcg_copy_P49_ListOfBalisesForSHArea_T_Packet_Types_Pkg MLRI__kcg_copy_struct__21884

#define MLRI__kcg_comp_P51_AxleLoadSpeedProfile_T_Packet_Types_Pkg MLRI__kcg_comp_struct__21869

#define MLRI__kcg_copy_P51_AxleLoadSpeedProfile_T_Packet_Types_Pkg MLRI__kcg_copy_struct__21869

#define MLRI__kcg_comp_P52_PermittedBrakingDistanceInformation_T_Packet_Types_Pkg MLRI__kcg_comp_struct__21843

#define MLRI__kcg_copy_P52_PermittedBrakingDistanceInformation_T_Packet_Types_Pkg MLRI__kcg_copy_struct__21843

#define MLRI__kcg_comp_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg MLRI__kcg_comp_struct__22101

#define MLRI__kcg_copy_P57_MovementAuthorityRequestParameters_T_Packet_Types_Pkg MLRI__kcg_copy_struct__22101

#define MLRI__kcg_comp_P58_PositionReportParameter_T_Packet_Types_Pkg MLRI__kcg_comp_struct__21829

#define MLRI__kcg_copy_P58_PositionReportParameter_T_Packet_Types_Pkg MLRI__kcg_copy_struct__21829

#define MLRI__kcg_comp_P64_InhibitionOfRevocableTSRsFromBalisesInL23_T_Packet_Types_Pkg MLRI__kcg_comp_struct__22108

#define MLRI__kcg_copy_P64_InhibitionOfRevocableTSRsFromBalisesInL23_T_Packet_Types_Pkg MLRI__kcg_copy_struct__22108

#define MLRI__kcg_comp_P65_TemporarySpeedRestriction_T_Packet_Types_Pkg MLRI__kcg_comp_struct__22112

#define MLRI__kcg_copy_P65_TemporarySpeedRestriction_T_Packet_Types_Pkg MLRI__kcg_copy_struct__22112

#define MLRI__kcg_comp_P66_TemporarySpeedRestrictionRevocation_T_Packet_Types_Pkg MLRI__kcg_comp_struct__22122

#define MLRI__kcg_copy_P66_TemporarySpeedRestrictionRevocation_T_Packet_Types_Pkg MLRI__kcg_copy_struct__22122

#define MLRI__kcg_comp_P68_TrackCondition_T_Packet_Types_Pkg MLRI__kcg_comp_struct__21815

#define MLRI__kcg_copy_P68_TrackCondition_T_Packet_Types_Pkg MLRI__kcg_copy_struct__21815

#define MLRI__kcg_comp_P69_TrackConditionStationPlatform_T_Packet_Types_Pkg MLRI__kcg_comp_struct__21800

#define MLRI__kcg_copy_P69_TrackConditionStationPlatform_T_Packet_Types_Pkg MLRI__kcg_copy_struct__21800

#define MLRI__kcg_comp_P70_RouteSuitabilityData_T_Packet_Types_Pkg MLRI__kcg_comp_struct__21783

#define MLRI__kcg_copy_P70_RouteSuitabilityData_T_Packet_Types_Pkg MLRI__kcg_copy_struct__21783

#define MLRI__kcg_comp_P71_AdhesionFactor_T_Packet_Types_Pkg MLRI__kcg_comp_struct__22127

#define MLRI__kcg_copy_P71_AdhesionFactor_T_Packet_Types_Pkg MLRI__kcg_copy_struct__22127

#define MLRI__kcg_comp_P72_PacketForSendingPlainTextMessages_T_Packet_Types_Pkg MLRI__kcg_comp_struct__22135

#define MLRI__kcg_copy_P72_PacketForSendingPlainTextMessages_T_Packet_Types_Pkg MLRI__kcg_copy_struct__22135

#define MLRI__kcg_comp_P76_PacketForSendingFixedTextMessages_T_Packet_Types_Pkg MLRI__kcg_comp_struct__22159

#define MLRI__kcg_copy_P76_PacketForSendingFixedTextMessages_T_Packet_Types_Pkg MLRI__kcg_copy_struct__22159

#define MLRI__kcg_comp_P79_GeographicalPositionInformation_T_Packet_Types_Pkg MLRI__kcg_comp_struct__21768

#define MLRI__kcg_copy_P79_GeographicalPositionInformation_T_Packet_Types_Pkg MLRI__kcg_copy_struct__21768

#define MLRI__kcg_comp_P80_ModeProfile_T_Packet_Types_Pkg MLRI__kcg_comp_struct__21753

#define MLRI__kcg_copy_P80_ModeProfile_T_Packet_Types_Pkg MLRI__kcg_copy_struct__21753

#define MLRI__kcg_comp_P88_LevelCrossingInformation_T_Packet_Types_Pkg MLRI__kcg_comp_struct__22182

#define MLRI__kcg_copy_P88_LevelCrossingInformation_T_Packet_Types_Pkg MLRI__kcg_copy_struct__22182

#define MLRI__kcg_comp_centerOfBalisePosition_T_BG_Types_Pkg MLRI__kcg_comp_struct__21525

#define MLRI__kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg MLRI__kcg_copy_struct__21525

#define MLRI__kcg_comp_BG_Message_T_BG_Types_Pkg MLRI__kcg_comp_struct__21566

#define MLRI__kcg_copy_BG_Message_T_BG_Types_Pkg MLRI__kcg_copy_struct__21566

#define MLRI__kcg_comp_RBCOrientationReport_T_BG_Types_Pkg MLRI__kcg_comp_struct__22203

#define MLRI__kcg_copy_RBCOrientationReport_T_BG_Types_Pkg MLRI__kcg_copy_struct__22203

#define MLRI__kcg_comp_RBCReport_T_BG_Types_Pkg MLRI__kcg_comp_struct__22216

#define MLRI__kcg_copy_RBCReport_T_BG_Types_Pkg MLRI__kcg_copy_struct__22216

#define MLRI__kcg_comp_Telegram_T_BG_Types_Pkg MLRI__kcg_comp_struct__21556

#define MLRI__kcg_copy_Telegram_T_BG_Types_Pkg MLRI__kcg_copy_struct__21556

#define MLRI__kcg_comp_TelegramArray_T_BG_Types_Pkg MLRI__kcg_comp_array__21563

#define MLRI__kcg_copy_TelegramArray_T_BG_Types_Pkg MLRI__kcg_copy_array__21563

#define MLRI__kcg_comp_TrainToTrackStatus_T_BG_Types_Pkg MLRI__kcg_comp_struct__21432

#define MLRI__kcg_copy_TrainToTrackStatus_T_BG_Types_Pkg MLRI__kcg_copy_struct__21432

#define MLRI__kcg_comp_TelegramHeader_T_BG_Types_Pkg MLRI__kcg_comp_struct__21530

#define MLRI__kcg_copy_TelegramHeader_T_BG_Types_Pkg MLRI__kcg_copy_struct__21530

#define MLRI__kcg_comp_AdditionalInformation_T_BG_Types_Pkg MLRI__kcg_comp_struct__21552

#define MLRI__kcg_copy_AdditionalInformation_T_BG_Types_Pkg MLRI__kcg_copy_struct__21552

#define MLRI__kcg_comp_passedBG_T_BG_Types_Pkg MLRI__kcg_comp_struct__21384

#define MLRI__kcg_copy_passedBG_T_BG_Types_Pkg MLRI__kcg_copy_struct__21384

#define MLRI__kcg_comp_LinkedBGs_T_BG_Types_Pkg MLRI__kcg_comp_array__21370

#define MLRI__kcg_copy_LinkedBGs_T_BG_Types_Pkg MLRI__kcg_copy_array__21370

#define MLRI__kcg_comp_LinkedBG_T_BG_Types_Pkg MLRI__kcg_comp_struct__21331

#define MLRI__kcg_copy_LinkedBG_T_BG_Types_Pkg MLRI__kcg_copy_struct__21331

#define MLRI__kcg_comp_BG_Header_T_BG_Types_Pkg MLRI__kcg_comp_struct__21373

#define MLRI__kcg_copy_BG_Header_T_BG_Types_Pkg MLRI__kcg_copy_struct__21373

#define MLRI__kcg_comp_LutIndex_lut MLRI__kcg_comp_struct__22220

#define MLRI__kcg_copy_LutIndex_lut MLRI__kcg_copy_struct__22220

#define MLRI__kcg_comp_Assignment_of_coordinate_system_Radio_TrackToTrain MLRI__kcg_comp_struct__22194

#define MLRI__kcg_copy_Assignment_of_coordinate_system_Radio_TrackToTrain MLRI__kcg_copy_struct__22194

#define MLRI__kcg_comp_SoM_position_report_confirmed_by_RBC_Radio_TrackToTrain MLRI__kcg_comp_struct__22225

#define MLRI__kcg_copy_SoM_position_report_confirmed_by_RBC_Radio_TrackToTrain MLRI__kcg_copy_struct__22225

#define MLRI__kcg_comp_Train_Accepted_Radio_TrackToTrain MLRI__kcg_comp_struct__22225

#define MLRI__kcg_copy_Train_Accepted_Radio_TrackToTrain MLRI__kcg_copy_struct__22225

#define MLRI__kcg_comp_Train_Rejected_Radio_TrackToTrain MLRI__kcg_comp_struct__22225

#define MLRI__kcg_copy_Train_Rejected_Radio_TrackToTrain MLRI__kcg_copy_struct__22225

#define MLRI__kcg_comp_Acknowledgement_of_termination_of_a_communication_session_Radio_TrackToTrain MLRI__kcg_comp_struct__22225

#define MLRI__kcg_copy_Acknowledgement_of_termination_of_a_communication_session_Radio_TrackToTrain MLRI__kcg_copy_struct__22225

#define MLRI__kcg_comp_Initiation_of_a_communication_session_Radio_TrackToTrain MLRI__kcg_comp_struct__22225

#define MLRI__kcg_copy_Initiation_of_a_communication_session_Radio_TrackToTrain MLRI__kcg_copy_struct__22225

#define MLRI__kcg_comp_Infill_MA_Radio_TrackToTrain MLRI__kcg_comp_struct__22233

#define MLRI__kcg_copy_Infill_MA_Radio_TrackToTrain MLRI__kcg_copy_struct__22233

#define MLRI__kcg_comp_Track_Ahead_Free_Request_Radio_TrackToTrain MLRI__kcg_comp_struct__22243

#define MLRI__kcg_copy_Track_Ahead_Free_Request_Radio_TrackToTrain MLRI__kcg_copy_struct__22243

#define MLRI__kcg_comp_MA_with_Shifted_Location_Reference_Radio_TrackToTrain MLRI__kcg_comp_struct__22256

#define MLRI__kcg_copy_MA_with_Shifted_Location_Reference_Radio_TrackToTrain MLRI__kcg_copy_struct__22256

#define MLRI__kcg_comp_M_Error_T_ProvidePositionReport_Pkg MLRI__kcg_comp_struct__21590

#define MLRI__kcg_copy_M_Error_T_ProvidePositionReport_Pkg MLRI__kcg_copy_struct__21590

#define MLRI__kcg_comp_PositionReportParameter_T_ProvidePositionReport_Pkg MLRI__kcg_comp_struct__21221

#define MLRI__kcg_copy_PositionReportParameter_T_ProvidePositionReport_Pkg MLRI__kcg_copy_struct__21221

#define MLRI__kcg_comp_IterPacket58List_T_ProvidePositionReport_Pkg MLRI__kcg_comp_array__21206

#define MLRI__kcg_copy_IterPacket58List_T_ProvidePositionReport_Pkg MLRI__kcg_copy_array__21206

#define MLRI__kcg_comp_IterPacket58_T_ProvidePositionReport_Pkg MLRI__kcg_comp_struct__21201

#define MLRI__kcg_copy_IterPacket58_T_ProvidePositionReport_Pkg MLRI__kcg_copy_struct__21201

#define MLRI__kcg_comp_RBC_or_RIU_System_Version_Radio_TrackToTrain MLRI__kcg_comp_struct__22268

#define MLRI__kcg_copy_RBC_or_RIU_System_Version_Radio_TrackToTrain MLRI__kcg_copy_struct__22268

#define MLRI__kcg_comp_SH_Authorised_Radio_TrackToTrain MLRI__kcg_comp_struct__22277

#define MLRI__kcg_copy_SH_Authorised_Radio_TrackToTrain MLRI__kcg_copy_struct__22277

#define MLRI__kcg_comp_Packet5_T_ProvidePositionReport_Pkg MLRI__kcg_comp_struct__21238

#define MLRI__kcg_copy_Packet5_T_ProvidePositionReport_Pkg MLRI__kcg_copy_struct__21238

#define MLRI__kcg_comp_RBC_Communication_T_ProvidePositionReport_Pkg MLRI__kcg_comp_struct__21228

#define MLRI__kcg_copy_RBC_Communication_T_ProvidePositionReport_Pkg MLRI__kcg_copy_struct__21228

#define MLRI__kcg_comp_PresentxMLOC_T_ProvidePositionReport_Pkg MLRI__kcg_comp_struct__21427

#define MLRI__kcg_copy_PresentxMLOC_T_ProvidePositionReport_Pkg MLRI__kcg_copy_struct__21427

#define MLRI__kcg_comp_Packet58_T_ProvidePositionReport_Pkg MLRI__kcg_comp_struct__21209

#define MLRI__kcg_copy_Packet58_T_ProvidePositionReport_Pkg MLRI__kcg_copy_struct__21209

#define MLRI__kcg_comp_SH_Refused_Radio_TrackToTrain MLRI__kcg_comp_struct__22288

#define MLRI__kcg_copy_SH_Refused_Radio_TrackToTrain MLRI__kcg_copy_struct__22288

#define MLRI__kcg_comp_PositionReportHeader_T_ProvidePositionReport_Pkg MLRI__kcg_comp_struct__21243

#define MLRI__kcg_copy_PositionReportHeader_T_ProvidePositionReport_Pkg MLRI__kcg_copy_struct__21243

#define MLRI__kcg_comp_General_message_Radio_TrackToTrain MLRI__kcg_comp_struct__22297

#define MLRI__kcg_copy_General_message_Radio_TrackToTrain MLRI__kcg_copy_struct__22297

#define MLRI__kcg_comp_Packet4_T_ProvidePositionReport_Pkg MLRI__kcg_comp_struct__21256

#define MLRI__kcg_copy_Packet4_T_ProvidePositionReport_Pkg MLRI__kcg_copy_struct__21256

#define MLRI__kcg_comp_ErrorMessage_T_ProvidePositionReport_Pkg MLRI__kcg_comp_struct__21461

#define MLRI__kcg_copy_ErrorMessage_T_ProvidePositionReport_Pkg MLRI__kcg_copy_struct__21461

#define MLRI__kcg_comp_MemorizedErrorMsg_T_ProvidePositionReport_Pkg MLRI__kcg_comp_struct__21603

#define MLRI__kcg_copy_MemorizedErrorMsg_T_ProvidePositionReport_Pkg MLRI__kcg_copy_struct__21603

#define MLRI__kcg_comp_Packet0_T_ProvidePositionReport_Pkg MLRI__kcg_comp_struct__21280

#define MLRI__kcg_copy_Packet0_T_ProvidePositionReport_Pkg MLRI__kcg_copy_struct__21280

#define MLRI__kcg_comp_Packet1_T_ProvidePositionReport_Pkg MLRI__kcg_comp_struct__21305

#define MLRI__kcg_copy_Packet1_T_ProvidePositionReport_Pkg MLRI__kcg_copy_struct__21305

#define MLRI__kcg_comp_PositionReport_T_ProvidePositionReport_Pkg MLRI__kcg_comp_struct__21310

#define MLRI__kcg_copy_PositionReport_T_ProvidePositionReport_Pkg MLRI__kcg_copy_struct__21310

#define MLRI__kcg_comp_LocationBasedEvents_T_ProvidePositionReport_Pkg MLRI__kcg_comp_struct__21319

#define MLRI__kcg_copy_LocationBasedEvents_T_ProvidePositionReport_Pkg MLRI__kcg_copy_struct__21319

#define MLRI__kcg_comp_Revocation_of_Emergency_Stop_Radio_TrackToTrain MLRI__kcg_comp_struct__22307

#define MLRI__kcg_copy_Revocation_of_Emergency_Stop_Radio_TrackToTrain MLRI__kcg_copy_struct__22307

#define MLRI__kcg_comp_Unconditional_Emergency_Stop_Radio_TrackToTrain MLRI__kcg_comp_struct__22307

#define MLRI__kcg_copy_Unconditional_Emergency_Stop_Radio_TrackToTrain MLRI__kcg_copy_struct__22307

#define MLRI__kcg_comp_Conditional_Emergency_Stop_Radio_TrackToTrain MLRI__kcg_comp_struct__22316

#define MLRI__kcg_copy_Conditional_Emergency_Stop_Radio_TrackToTrain MLRI__kcg_copy_struct__22316

#define MLRI__kcg_comp_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg MLRI__kcg_comp_struct__21484

#define MLRI__kcg_copy_positionedBGs_w_overrun_T_CalculateTrainPosition_Pkg MLRI__kcg_copy_struct__21484

#define MLRI__kcg_comp_Request_to_Shorten_MA_Radio_TrackToTrain MLRI__kcg_comp_struct__22329

#define MLRI__kcg_copy_Request_to_Shorten_MA_Radio_TrackToTrain MLRI__kcg_copy_struct__22329

#define MLRI__kcg_comp_Acknowledgement_of_Train_Data_Radio_TrackToTrain MLRI__kcg_comp_struct__22288

#define MLRI__kcg_copy_Acknowledgement_of_Train_Data_Radio_TrackToTrain MLRI__kcg_copy_struct__22288

#define MLRI__kcg_comp_Recognition_of_exit_from_TRIP_mode_Radio_TrackToTrain MLRI__kcg_comp_struct__22225

#define MLRI__kcg_copy_Recognition_of_exit_from_TRIP_mode_Radio_TrackToTrain MLRI__kcg_copy_struct__22225

#define MLRI__kcg_comp_Movement_Authority_Radio_TrackToTrain MLRI__kcg_comp_struct__22339

#define MLRI__kcg_copy_Movement_Authority_Radio_TrackToTrain MLRI__kcg_copy_struct__22339

#define MLRI__kcg_comp_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg MLRI__kcg_comp_array__21495

#define MLRI__kcg_copy_linkedBGs_indices_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg MLRI__kcg_copy_array__21495

#define MLRI__kcg_comp_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg MLRI__kcg_comp_struct__21489

#define MLRI__kcg_copy_linkedBG_index_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg MLRI__kcg_copy_struct__21489

#define MLRI__kcg_comp_BGs_forImprovement_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg MLRI__kcg_comp_struct__21608

#define MLRI__kcg_copy_BGs_forImprovement_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg MLRI__kcg_copy_struct__21608

#define MLRI__kcg_comp_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg MLRI__kcg_comp_struct__21498

#define MLRI__kcg_copy_refBGs_T_CalculateTrainPosition_Pkg_BG_relocation_Pkg MLRI__kcg_copy_struct__21498

#define MLRI__kcg_comp_SR_Authorisation_Radio_TrackToTrain MLRI__kcg_comp_struct__22349

#define MLRI__kcg_copy_SR_Authorisation_Radio_TrackToTrain MLRI__kcg_copy_struct__22349

#define MLRI__kcg_comp_Session_Established_Radio_TrainToTrack MLRI__kcg_comp_struct__22361

#define MLRI__kcg_copy_Session_Established_Radio_TrainToTrack MLRI__kcg_copy_struct__22361

#define MLRI__kcg_comp_Text_message_acknowledged_by_driver_Radio_TrainToTrack MLRI__kcg_comp_struct__22370

#define MLRI__kcg_copy_Text_message_acknowledged_by_driver_Radio_TrainToTrack MLRI__kcg_copy_struct__22370

#define MLRI__kcg_comp_SoM_Position_Report_Radio_TrainToTrack MLRI__kcg_comp_struct__22380

#define MLRI__kcg_copy_SoM_Position_Report_Radio_TrainToTrack MLRI__kcg_copy_struct__22380

#define MLRI__kcg_comp_Termination_of_a_communication_session_Radio_TrainToTrack MLRI__kcg_comp_struct__22390

#define MLRI__kcg_copy_Termination_of_a_communication_session_Radio_TrainToTrack MLRI__kcg_copy_struct__22390

#define MLRI__kcg_comp_Initiation_of_a_communication_session_Radio_TrainToTrack MLRI__kcg_comp_struct__22390

#define MLRI__kcg_copy_Initiation_of_a_communication_session_Radio_TrainToTrack MLRI__kcg_copy_struct__22390

#define MLRI__kcg_comp_No_compatible_version_supported_Radio_TrainToTrack MLRI__kcg_comp_struct__22390

#define MLRI__kcg_copy_No_compatible_version_supported_Radio_TrainToTrack MLRI__kcg_copy_struct__22390

#define MLRI__kcg_comp_Radio_infill_request_Radio_TrainToTrack MLRI__kcg_comp_struct__22397

#define MLRI__kcg_copy_Radio_infill_request_Radio_TrainToTrack MLRI__kcg_copy_struct__22397

#define MLRI__kcg_comp_End_of_Mission_Radio_TrainToTrack MLRI__kcg_comp_struct__22409

#define MLRI__kcg_copy_End_of_Mission_Radio_TrainToTrack MLRI__kcg_copy_struct__22409

#define MLRI__kcg_comp_Track_Ahead_Free_Granted_Radio_TrainToTrack MLRI__kcg_comp_struct__22418

#define MLRI__kcg_copy_Track_Ahead_Free_Granted_Radio_TrainToTrack MLRI__kcg_copy_struct__22418

#define MLRI__kcg_comp_Acknowledgement_of_Emergency_Stop_Radio_TrainToTrack MLRI__kcg_comp_struct__22427

#define MLRI__kcg_copy_Acknowledgement_of_Emergency_Stop_Radio_TrainToTrack MLRI__kcg_copy_struct__22427

#define MLRI__kcg_comp_Acknowledgement_Radio_TrainToTrack MLRI__kcg_comp_struct__22390

#define MLRI__kcg_copy_Acknowledgement_Radio_TrainToTrack MLRI__kcg_copy_struct__22390

#define MLRI__kcg_comp_Request_to_shorten_MA_is_rejected_Radio_TrainToTrack MLRI__kcg_comp_struct__22437

#define MLRI__kcg_copy_Request_to_shorten_MA_is_rejected_Radio_TrainToTrack MLRI__kcg_copy_struct__22437

#define MLRI__kcg_comp_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg MLRI__kcg_comp_struct__21466

#define MLRI__kcg_copy_BG_find_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg MLRI__kcg_copy_struct__21466

#define MLRI__kcg_comp_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg MLRI__kcg_comp_struct__21472

#define MLRI__kcg_copy_BG_counters_T_CalculateTrainPosition_Pkg_BG_utilities_Pkg MLRI__kcg_copy_struct__21472

#define MLRI__kcg_comp_Request_to_shorten_MA_is_granted_Radio_TrainToTrack MLRI__kcg_comp_struct__22446

#define MLRI__kcg_copy_Request_to_shorten_MA_is_granted_Radio_TrainToTrack MLRI__kcg_copy_struct__22446

#define MLRI__kcg_comp_Train_Position_Report_Radio_TrainToTrack MLRI__kcg_comp_struct__22207

#define MLRI__kcg_copy_Train_Position_Report_Radio_TrainToTrack MLRI__kcg_copy_struct__22207

#define MLRI__kcg_comp_MA_Request_Radio_TrainToTrack MLRI__kcg_comp_struct__22455

#define MLRI__kcg_copy_MA_Request_Radio_TrainToTrack MLRI__kcg_copy_struct__22455

#define MLRI__kcg_comp_A_nothing_to_resume_profile_follow_T_TIU_Types_Pkg MLRI__kcg_comp_array__21625

#define MLRI__kcg_copy_A_nothing_to_resume_profile_follow_T_TIU_Types_Pkg MLRI__kcg_copy_array__21625

#define MLRI__kcg_comp_Brake_command_T_TIU_Types_Pkg MLRI__kcg_comp_struct__21628

#define MLRI__kcg_copy_Brake_command_T_TIU_Types_Pkg MLRI__kcg_copy_struct__21628

#define MLRI__kcg_comp_Request_for_Shunting_Radio_TrainToTrack MLRI__kcg_comp_struct__22465

#define MLRI__kcg_copy_Request_for_Shunting_Radio_TrainToTrack MLRI__kcg_copy_struct__22465

#define MLRI__kcg_comp_Brake_inhibition_command_T_TIU_Types_Pkg MLRI__kcg_comp_struct__21633

#define MLRI__kcg_copy_Brake_inhibition_command_T_TIU_Types_Pkg MLRI__kcg_copy_struct__21633

#define MLRI__kcg_comp_Brake_status_T_TIU_Types_Pkg MLRI__kcg_comp_struct__21639

#define MLRI__kcg_copy_Brake_status_T_TIU_Types_Pkg MLRI__kcg_copy_struct__21639

#define MLRI__kcg_comp_Change_of_allowed_current_consumption_T_TIU_Types_Pkg MLRI__kcg_comp_struct__21652

#define MLRI__kcg_copy_Change_of_allowed_current_consumption_T_TIU_Types_Pkg MLRI__kcg_copy_struct__21652

#define MLRI__kcg_comp_D_test_current_T_TIU_Types_Pkg MLRI__kcg_comp_struct__21614

#define MLRI__kcg_copy_D_test_current_T_TIU_Types_Pkg MLRI__kcg_copy_struct__21614

#define MLRI__kcg_comp_Validated_Train_Data_Radio_TrainToTrack MLRI__kcg_comp_struct__22474

#define MLRI__kcg_copy_Validated_Train_Data_Radio_TrainToTrack MLRI__kcg_copy_struct__22474

#define MLRI__kcg_comp_D_test_distance_T_TIU_Types_Pkg MLRI__kcg_comp_struct__21614

#define MLRI__kcg_copy_D_test_distance_T_TIU_Types_Pkg MLRI__kcg_copy_struct__21614

#define MLRI__kcg_comp_D_test_trackcond_T_TIU_Types_Pkg MLRI__kcg_comp_struct__21614

#define MLRI__kcg_copy_D_test_trackcond_T_TIU_Types_Pkg MLRI__kcg_copy_struct__21614

#define MLRI__kcg_comp_D_test_trackinit_T_TIU_Types_Pkg MLRI__kcg_comp_struct__21614

#define MLRI__kcg_copy_D_test_trackinit_T_TIU_Types_Pkg MLRI__kcg_copy_struct__21614

#define MLRI__kcg_comp_D_test_traction_T_TIU_Types_Pkg MLRI__kcg_comp_struct__21614

#define MLRI__kcg_copy_D_test_traction_T_TIU_Types_Pkg MLRI__kcg_copy_struct__21614

#define MLRI__kcg_comp_L_test_trackcond_T_TIU_Types_Pkg MLRI__kcg_comp_struct__21614

#define MLRI__kcg_copy_L_test_trackcond_T_TIU_Types_Pkg MLRI__kcg_copy_struct__21614

#define MLRI__kcg_comp_End_of_Information_BothWays MLRI__kcg_comp_struct__22483

#define MLRI__kcg_copy_End_of_Information_BothWays MLRI__kcg_copy_struct__22483

#define MLRI__kcg_comp_Data_used_by_applications_outside_the_ERTMS_or_ETCS_system_TrainToTrack MLRI__kcg_comp_struct__22487

#define MLRI__kcg_copy_Data_used_by_applications_outside_the_ERTMS_or_ETCS_system_TrainToTrack MLRI__kcg_copy_struct__22487

#define MLRI__kcg_comp_Validated_train_data_TrainToTrack MLRI__kcg_comp_struct__22519

#define MLRI__kcg_copy_Validated_train_data_TrainToTrack MLRI__kcg_copy_struct__22519

#define MLRI__kcg_comp_SVar111_TrainToTrack MLRI__kcg_comp_struct__22501

#define MLRI__kcg_copy_SVar111_TrainToTrack MLRI__kcg_copy_struct__22501

#define MLRI__kcg_comp_AVar111_TrainToTrack MLRI__kcg_comp_array__22498

#define MLRI__kcg_copy_AVar111_TrainToTrack MLRI__kcg_copy_array__22498

#define MLRI__kcg_comp_Var111_TrainToTrack MLRI__kcg_comp_struct__22494

#define MLRI__kcg_copy_Var111_TrainToTrack MLRI__kcg_copy_struct__22494

#define MLRI__kcg_comp_SVar110_TrainToTrack MLRI__kcg_comp_struct__22514

#define MLRI__kcg_copy_SVar110_TrainToTrack MLRI__kcg_copy_struct__22514

#define MLRI__kcg_comp_AVar110_TrainToTrack MLRI__kcg_comp_array__22511

#define MLRI__kcg_copy_AVar110_TrainToTrack MLRI__kcg_copy_array__22511

#define MLRI__kcg_comp_Var110_TrainToTrack MLRI__kcg_comp_struct__22506

#define MLRI__kcg_copy_Var110_TrainToTrack MLRI__kcg_copy_struct__22506

#define MLRI__kcg_comp_Level_23_transition_information_TrainToTrack MLRI__kcg_comp_struct__22534

#define MLRI__kcg_copy_Level_23_transition_information_TrainToTrack MLRI__kcg_copy_struct__22534

#define MLRI__kcg_comp_Train_running_number_TrainToTrack MLRI__kcg_comp_struct__21232

#define MLRI__kcg_copy_Train_running_number_TrainToTrack MLRI__kcg_copy_struct__21232

#define MLRI__kcg_comp_Error_reporting_TrainToTrack MLRI__kcg_comp_struct__21250

#define MLRI__kcg_copy_Error_reporting_TrainToTrack MLRI__kcg_copy_struct__21250

#define MLRI__kcg_comp_Onboard_telephone_numbers_TrainToTrack MLRI__kcg_comp_struct__22552

#define MLRI__kcg_copy_Onboard_telephone_numbers_TrainToTrack MLRI__kcg_copy_struct__22552

#define MLRI__kcg_comp_SVar30_TrainToTrack MLRI__kcg_comp_struct__22547

#define MLRI__kcg_copy_SVar30_TrainToTrack MLRI__kcg_copy_struct__22547

#define MLRI__kcg_comp_AVar30_TrainToTrack MLRI__kcg_comp_array__22544

#define MLRI__kcg_copy_AVar30_TrainToTrack MLRI__kcg_copy_array__22544

#define MLRI__kcg_comp_Var30_TrainToTrack MLRI__kcg_comp_struct__22540

#define MLRI__kcg_copy_Var30_TrainToTrack MLRI__kcg_copy_struct__22540

#define MLRI__kcg_comp_Position_Report_based_on_two_balise_groups_TrainToTrack MLRI__kcg_comp_struct__21285

#define MLRI__kcg_copy_Position_Report_based_on_two_balise_groups_TrainToTrack MLRI__kcg_copy_struct__21285

#define MLRI__kcg_comp_Position_Report_TrainToTrack MLRI__kcg_comp_struct__21261

#define MLRI__kcg_copy_Position_Report_TrainToTrack MLRI__kcg_copy_struct__21261

#define MLRI__kcg_comp_Default_balise_or_Loop_or_RIU_information_TrackToTrain MLRI__kcg_comp_struct__22558

#define MLRI__kcg_copy_Default_balise_or_Loop_or_RIU_information_TrackToTrain MLRI__kcg_copy_struct__22558

#define MLRI__kcg_comp_Inhibition_of_balise_group_message_consistency_reaction_TrackToTrain MLRI__kcg_comp_struct__22558

#define MLRI__kcg_copy_Inhibition_of_balise_group_message_consistency_reaction_TrackToTrain MLRI__kcg_copy_struct__22558

#define MLRI__kcg_comp_Session_Management_with_neighbouring_Radio_Infill_Unit_TrackToTrain MLRI__kcg_comp_struct__22564

#define MLRI__kcg_copy_Session_Management_with_neighbouring_Radio_Infill_Unit_TrackToTrain MLRI__kcg_copy_struct__22564

#define MLRI__kcg_comp_Default_Gradient_for_Temporary_Speed_Restriction_TrackToTrain MLRI__kcg_comp_struct__22574

#define MLRI__kcg_copy_Default_Gradient_for_Temporary_Speed_Restriction_TrackToTrain MLRI__kcg_copy_struct__22574

#define MLRI__kcg_comp_Train_running_number_from_RBC_TrackToTrain MLRI__kcg_comp_struct__22582

#define MLRI__kcg_copy_Train_running_number_from_RBC_TrackToTrain MLRI__kcg_copy_struct__22582

#define MLRI__kcg_comp_Reversing_supervision_information_TrackToTrain MLRI__kcg_comp_struct__22589

#define MLRI__kcg_copy_Reversing_supervision_information_TrackToTrain MLRI__kcg_copy_struct__22589

#define MLRI__kcg_comp_Reversing_area_information_TrackToTrain MLRI__kcg_comp_struct__22598

#define MLRI__kcg_copy_Reversing_area_information_TrackToTrain MLRI__kcg_copy_struct__22598

#define MLRI__kcg_comp_Stop_if_in_Staff_Responsible_TrackToTrain MLRI__kcg_comp_struct__22607

#define MLRI__kcg_copy_Stop_if_in_Staff_Responsible_TrackToTrain MLRI__kcg_copy_struct__22607

#define MLRI__kcg_comp_Infill_location_reference_TrackToTrain MLRI__kcg_comp_struct__22614

#define MLRI__kcg_copy_Infill_location_reference_TrackToTrain MLRI__kcg_copy_struct__22614

#define MLRI__kcg_comp_Stop_Shunting_on_desk_opening_TrackToTrain MLRI__kcg_comp_struct__22558

#define MLRI__kcg_copy_Stop_Shunting_on_desk_opening_TrackToTrain MLRI__kcg_copy_struct__22558

#define MLRI__kcg_comp_EOLM_Packet_TrackToTrain MLRI__kcg_comp_struct__22623

#define MLRI__kcg_copy_EOLM_Packet_TrackToTrain MLRI__kcg_copy_struct__22623

#define MLRI__kcg_comp_Radio_infill_area_information_TrackToTrain MLRI__kcg_comp_struct__22635

#define MLRI__kcg_copy_Radio_infill_area_information_TrackToTrain MLRI__kcg_copy_struct__22635

#define MLRI__kcg_comp_Danger_for_Shunting_information_TrackToTrain MLRI__kcg_comp_struct__22648

#define MLRI__kcg_copy_Danger_for_Shunting_information_TrackToTrain MLRI__kcg_copy_struct__22648

#define MLRI__kcg_comp_RBC_transition_order_TrackToTrain MLRI__kcg_comp_struct__22655

#define MLRI__kcg_copy_RBC_transition_order_TrackToTrain MLRI__kcg_copy_struct__22655

#define MLRI__kcg_comp_Track_Ahead_Free_up_to_level_23_transition_location_TrackToTrain MLRI__kcg_comp_struct__22614

#define MLRI__kcg_copy_Track_Ahead_Free_up_to_level_23_transition_location_TrackToTrain MLRI__kcg_copy_struct__22614

#define MLRI__kcg_comp_Level_Crossing_information_TrackToTrain MLRI__kcg_comp_struct__22667

#define MLRI__kcg_copy_Level_Crossing_information_TrackToTrain MLRI__kcg_copy_struct__22667

#define MLRI__kcg_comp_Mode_profile_TrackToTrain MLRI__kcg_comp_struct__22698

#define MLRI__kcg_copy_Mode_profile_TrackToTrain MLRI__kcg_copy_struct__22698

#define MLRI__kcg_comp_SVar800_TrackToTrain MLRI__kcg_comp_struct__22693

#define MLRI__kcg_copy_SVar800_TrackToTrain MLRI__kcg_copy_struct__22693

#define MLRI__kcg_comp_AVar800_TrackToTrain MLRI__kcg_comp_array__22690

#define MLRI__kcg_copy_AVar800_TrackToTrain MLRI__kcg_copy_array__22690

#define MLRI__kcg_comp_Var800_TrackToTrain MLRI__kcg_comp_struct__22681

#define MLRI__kcg_copy_Var800_TrackToTrain MLRI__kcg_copy_struct__22681

#define MLRI__kcg_comp_Geographical_Position_Information_TrackToTrain MLRI__kcg_comp_struct__22729

#define MLRI__kcg_copy_Geographical_Position_Information_TrackToTrain MLRI__kcg_copy_struct__22729

#define MLRI__kcg_comp_SVar790_TrackToTrain MLRI__kcg_comp_struct__22724

#define MLRI__kcg_copy_SVar790_TrackToTrain MLRI__kcg_copy_struct__22724

#define MLRI__kcg_comp_AVar790_TrackToTrain MLRI__kcg_comp_array__22721

#define MLRI__kcg_copy_AVar790_TrackToTrain MLRI__kcg_copy_array__22721

#define MLRI__kcg_comp_Var790_TrackToTrain MLRI__kcg_comp_struct__22712

#define MLRI__kcg_copy_Var790_TrackToTrain MLRI__kcg_copy_struct__22712

#define MLRI__kcg_comp_Packet_for_sending_fixed_text_messages_TrackToTrain MLRI__kcg_comp_struct__22749

#define MLRI__kcg_copy_Packet_for_sending_fixed_text_messages_TrackToTrain MLRI__kcg_copy_struct__22749

#define MLRI__kcg_comp_Var767_TrackToTrain MLRI__kcg_comp_struct__22743

#define MLRI__kcg_copy_Var767_TrackToTrain MLRI__kcg_copy_struct__22743

#define MLRI__kcg_comp_Packet_for_sending_plain_text_messages_TrackToTrain MLRI__kcg_comp_struct__22770

#define MLRI__kcg_copy_Packet_for_sending_plain_text_messages_TrackToTrain MLRI__kcg_copy_struct__22770

#define MLRI__kcg_comp_Var727_TrackToTrain MLRI__kcg_comp_struct__22743

#define MLRI__kcg_copy_Var727_TrackToTrain MLRI__kcg_copy_struct__22743

#define MLRI__kcg_comp_Adhesion_factor_TrackToTrain MLRI__kcg_comp_struct__22792

#define MLRI__kcg_copy_Adhesion_factor_TrackToTrain MLRI__kcg_copy_struct__22792

#define MLRI__kcg_comp_Route_Suitability_Data_TrackToTrain MLRI__kcg_comp_struct__22819

#define MLRI__kcg_copy_Route_Suitability_Data_TrackToTrain MLRI__kcg_copy_struct__22819

#define MLRI__kcg_comp_SVar700_TrackToTrain MLRI__kcg_comp_struct__22814

#define MLRI__kcg_copy_SVar700_TrackToTrain MLRI__kcg_copy_struct__22814

#define MLRI__kcg_comp_AVar700_TrackToTrain MLRI__kcg_comp_array__22811

#define MLRI__kcg_copy_AVar700_TrackToTrain MLRI__kcg_copy_array__22811

#define MLRI__kcg_comp_Var700_TrackToTrain MLRI__kcg_comp_struct__22802

#define MLRI__kcg_copy_Var700_TrackToTrain MLRI__kcg_copy_struct__22802

#define MLRI__kcg_comp_Track_Condition_Station_Platforms_TrackToTrain MLRI__kcg_comp_struct__22850

#define MLRI__kcg_copy_Track_Condition_Station_Platforms_TrackToTrain MLRI__kcg_copy_struct__22850

#define MLRI__kcg_comp_SVar690_TrackToTrain MLRI__kcg_comp_struct__22845

#define MLRI__kcg_copy_SVar690_TrackToTrain MLRI__kcg_copy_struct__22845

#define MLRI__kcg_comp_AVar690_TrackToTrain MLRI__kcg_comp_array__22842

#define MLRI__kcg_copy_AVar690_TrackToTrain MLRI__kcg_copy_array__22842

#define MLRI__kcg_comp_Var690_TrackToTrain MLRI__kcg_comp_struct__22835

#define MLRI__kcg_copy_Var690_TrackToTrain MLRI__kcg_copy_struct__22835

#define MLRI__kcg_comp_Track_Condition_TrackToTrain MLRI__kcg_comp_struct__22878

#define MLRI__kcg_copy_Track_Condition_TrackToTrain MLRI__kcg_copy_struct__22878

#define MLRI__kcg_comp_SVar680_TrackToTrain MLRI__kcg_comp_struct__22873

#define MLRI__kcg_copy_SVar680_TrackToTrain MLRI__kcg_copy_struct__22873

#define MLRI__kcg_comp_AVar680_TrackToTrain MLRI__kcg_comp_array__22870

#define MLRI__kcg_copy_AVar680_TrackToTrain MLRI__kcg_copy_array__22870

#define MLRI__kcg_comp_Var680_TrackToTrain MLRI__kcg_comp_struct__22864

#define MLRI__kcg_copy_Var680_TrackToTrain MLRI__kcg_copy_struct__22864

#define MLRI__kcg_comp_Track_Condition_Big_Metal_Masses_TrackToTrain MLRI__kcg_comp_struct__22904

#define MLRI__kcg_copy_Track_Condition_Big_Metal_Masses_TrackToTrain MLRI__kcg_copy_struct__22904

#define MLRI__kcg_comp_SVar670_TrackToTrain MLRI__kcg_comp_struct__22899

#define MLRI__kcg_copy_SVar670_TrackToTrain MLRI__kcg_copy_struct__22899

#define MLRI__kcg_comp_AVar670_TrackToTrain MLRI__kcg_comp_array__22896

#define MLRI__kcg_copy_AVar670_TrackToTrain MLRI__kcg_copy_array__22896

#define MLRI__kcg_comp_Var670_TrackToTrain MLRI__kcg_comp_struct__22891

#define MLRI__kcg_copy_Var670_TrackToTrain MLRI__kcg_copy_struct__22891

#define MLRI__kcg_comp_Temporary_Speed_Restriction_Revocation_TrackToTrain MLRI__kcg_comp_struct__22914

#define MLRI__kcg_copy_Temporary_Speed_Restriction_Revocation_TrackToTrain MLRI__kcg_copy_struct__22914

#define MLRI__kcg_comp_Temporary_Speed_Restriction_TrackToTrain MLRI__kcg_comp_struct__22921

#define MLRI__kcg_copy_Temporary_Speed_Restriction_TrackToTrain MLRI__kcg_copy_struct__22921

#define MLRI__kcg_comp_Inhibition_of_revocable_TSRs_from_balises_in_L23_TrackToTrain MLRI__kcg_comp_struct__22558

#define MLRI__kcg_copy_Inhibition_of_revocable_TSRs_from_balises_in_L23_TrackToTrain MLRI__kcg_copy_struct__22558

#define MLRI__kcg_comp_List_of_Balises_in_SR_Authority_TrackToTrain MLRI__kcg_comp_struct__22947

#define MLRI__kcg_copy_List_of_Balises_in_SR_Authority_TrackToTrain MLRI__kcg_copy_struct__22947

#define MLRI__kcg_comp_SVar630_TrackToTrain MLRI__kcg_comp_struct__22942

#define MLRI__kcg_copy_SVar630_TrackToTrain MLRI__kcg_copy_struct__22942

#define MLRI__kcg_comp_AVar630_TrackToTrain MLRI__kcg_comp_array__22939

#define MLRI__kcg_copy_AVar630_TrackToTrain MLRI__kcg_copy_array__22939

#define MLRI__kcg_comp_Var630_TrackToTrain MLRI__kcg_comp_struct__22933

#define MLRI__kcg_copy_Var630_TrackToTrain MLRI__kcg_copy_struct__22933

#define MLRI__kcg_comp_Position_Report_Parameters_TrackToTrain MLRI__kcg_comp_struct__22967

#define MLRI__kcg_copy_Position_Report_Parameters_TrackToTrain MLRI__kcg_copy_struct__22967

#define MLRI__kcg_comp_SVar580_TrackToTrain MLRI__kcg_comp_struct__22962

#define MLRI__kcg_copy_SVar580_TrackToTrain MLRI__kcg_copy_struct__22962

#define MLRI__kcg_comp_AVar580_TrackToTrain MLRI__kcg_comp_array__22959

#define MLRI__kcg_copy_AVar580_TrackToTrain MLRI__kcg_copy_array__22959

#define MLRI__kcg_comp_M_change_traction_system_T_TIU_Types_Pkg MLRI__kcg_comp_struct__21662

#define MLRI__kcg_copy_M_change_traction_system_T_TIU_Types_Pkg MLRI__kcg_copy_struct__21662

#define MLRI__kcg_comp_Var580_TrackToTrain MLRI__kcg_comp_struct__22954

#define MLRI__kcg_copy_Var580_TrackToTrain MLRI__kcg_copy_struct__22954

#define MLRI__kcg_comp_M_current_T_TIU_Types_Pkg MLRI__kcg_comp_struct__21647

#define MLRI__kcg_copy_M_current_T_TIU_Types_Pkg MLRI__kcg_copy_struct__21647

#define MLRI__kcg_comp_Movement_Authority_Request_Parameters_TrackToTrain MLRI__kcg_comp_struct__22978

#define MLRI__kcg_copy_Movement_Authority_Request_Parameters_TrackToTrain MLRI__kcg_copy_struct__22978

#define MLRI__kcg_comp_Permitted_Braking_Distance_Information_TrackToTrain MLRI__kcg_comp_struct__23004

#define MLRI__kcg_copy_Permitted_Braking_Distance_Information_TrackToTrain MLRI__kcg_copy_struct__23004

#define MLRI__kcg_comp_SVar520_TrackToTrain MLRI__kcg_comp_struct__22999

#define MLRI__kcg_copy_SVar520_TrackToTrain MLRI__kcg_copy_struct__22999

#define MLRI__kcg_comp_AVar520_TrackToTrain MLRI__kcg_comp_array__22996

#define MLRI__kcg_copy_AVar520_TrackToTrain MLRI__kcg_copy_array__22996

#define MLRI__kcg_comp_Var520_TrackToTrain MLRI__kcg_comp_struct__22987

#define MLRI__kcg_copy_Var520_TrackToTrain MLRI__kcg_copy_struct__22987

#define MLRI__kcg_comp_Axle_Load_Speed_Profile_TrackToTrain MLRI__kcg_comp_struct__23048

#define MLRI__kcg_copy_Axle_Load_Speed_Profile_TrackToTrain MLRI__kcg_copy_struct__23048

#define MLRI__kcg_comp_SVar512_TrackToTrain MLRI__kcg_comp_struct__23028

#define MLRI__kcg_copy_SVar512_TrackToTrain MLRI__kcg_copy_struct__23028

#define MLRI__kcg_comp_AVar512_TrackToTrain MLRI__kcg_comp_array__23025

#define MLRI__kcg_copy_AVar512_TrackToTrain MLRI__kcg_copy_array__23025

#define MLRI__kcg_comp_Var512_TrackToTrain MLRI__kcg_comp_struct__23020

#define MLRI__kcg_copy_Var512_TrackToTrain MLRI__kcg_copy_struct__23020

#define MLRI__kcg_comp_SVar511_TrackToTrain MLRI__kcg_comp_struct__23043

#define MLRI__kcg_copy_SVar511_TrackToTrain MLRI__kcg_copy_struct__23043

#define MLRI__kcg_comp_AVar511_TrackToTrain MLRI__kcg_comp_array__23040

#define MLRI__kcg_copy_AVar511_TrackToTrain MLRI__kcg_copy_array__23040

#define MLRI__kcg_comp_Var511_TrackToTrain MLRI__kcg_comp_struct__23033

#define MLRI__kcg_copy_Var511_TrackToTrain MLRI__kcg_copy_struct__23033

#define MLRI__kcg_comp_SVar510_TrackToTrain MLRI__kcg_comp_struct__23028

#define MLRI__kcg_copy_SVar510_TrackToTrain MLRI__kcg_copy_struct__23028

#define MLRI__kcg_comp_AVar510_TrackToTrain MLRI__kcg_comp_array__23025

#define MLRI__kcg_copy_AVar510_TrackToTrain MLRI__kcg_copy_array__23025

#define MLRI__kcg_comp_M_voltage_T_TIU_Types_Pkg MLRI__kcg_comp_struct__21657

#define MLRI__kcg_copy_M_voltage_T_TIU_Types_Pkg MLRI__kcg_copy_struct__21657

#define MLRI__kcg_comp_Var510_TrackToTrain MLRI__kcg_comp_struct__23020

#define MLRI__kcg_copy_Var510_TrackToTrain MLRI__kcg_copy_struct__23020

#define MLRI__kcg_comp_List_of_balises_for_SH_Area_TrackToTrain MLRI__kcg_comp_struct__23062

#define MLRI__kcg_copy_List_of_balises_for_SH_Area_TrackToTrain MLRI__kcg_copy_struct__23062

#define MLRI__kcg_comp_SVar490_TrackToTrain MLRI__kcg_comp_struct__22942

#define MLRI__kcg_copy_SVar490_TrackToTrain MLRI__kcg_copy_struct__22942

#define MLRI__kcg_comp_AVar490_TrackToTrain MLRI__kcg_comp_array__22939

#define MLRI__kcg_copy_AVar490_TrackToTrain MLRI__kcg_copy_array__22939

#define MLRI__kcg_comp_Var490_TrackToTrain MLRI__kcg_comp_struct__22933

#define MLRI__kcg_copy_Var490_TrackToTrain MLRI__kcg_copy_struct__22933

#define MLRI__kcg_comp_Conditional_Level_Transition_Order_TrackToTrain MLRI__kcg_comp_struct__23082

#define MLRI__kcg_copy_Conditional_Level_Transition_Order_TrackToTrain MLRI__kcg_copy_struct__23082

#define MLRI__kcg_comp_SVar460_TrackToTrain MLRI__kcg_comp_struct__23077

#define MLRI__kcg_copy_SVar460_TrackToTrain MLRI__kcg_copy_struct__23077

#define MLRI__kcg_comp_AVar460_TrackToTrain MLRI__kcg_comp_array__23074

#define MLRI__kcg_copy_AVar460_TrackToTrain MLRI__kcg_copy_array__23074

#define MLRI__kcg_comp_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg MLRI__kcg_comp_struct__21674

#define MLRI__kcg_copy_Message_EVC_to_Train_Interface_T_TIU_Types_Pkg MLRI__kcg_copy_struct__21674

#define MLRI__kcg_comp_Var460_TrackToTrain MLRI__kcg_comp_struct__23069

#define MLRI__kcg_copy_Var460_TrackToTrain MLRI__kcg_copy_struct__23069

#define MLRI__kcg_comp_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg MLRI__kcg_comp_struct__21704

#define MLRI__kcg_copy_Message_Train_Interface_to_EVC_T_TIU_Types_Pkg MLRI__kcg_copy_struct__21704

#define MLRI__kcg_comp_Radio_Network_registration_TrackToTrain MLRI__kcg_comp_struct__23091

#define MLRI__kcg_copy_Radio_Network_registration_TrackToTrain MLRI__kcg_copy_struct__23091

#define MLRI__kcg_comp_Mode_control_and_train_status_T_TIU_Types_Pkg MLRI__kcg_comp_struct__21684

#define MLRI__kcg_copy_Mode_control_and_train_status_T_TIU_Types_Pkg MLRI__kcg_copy_struct__21684

#define MLRI__kcg_comp_Data_used_by_applications_outside_the_ERTMSETCS_system_TrackToTrain MLRI__kcg_comp_struct__23098

#define MLRI__kcg_copy_Data_used_by_applications_outside_the_ERTMSETCS_system_TrackToTrain MLRI__kcg_copy_struct__23098

#define MLRI__kcg_comp_Session_Management_TrackToTrain MLRI__kcg_comp_struct__23107

#define MLRI__kcg_copy_Session_Management_TrackToTrain MLRI__kcg_copy_struct__23107

#define MLRI__kcg_comp_nothing_to_resume_profile_follow_T_TIU_Types_Pkg MLRI__kcg_comp_struct__21619

#define MLRI__kcg_copy_nothing_to_resume_profile_follow_T_TIU_Types_Pkg MLRI__kcg_copy_struct__21619

#define MLRI__kcg_comp_Level_Transition_Order_TrackToTrain MLRI__kcg_comp_struct__23132

#define MLRI__kcg_copy_Level_Transition_Order_TrackToTrain MLRI__kcg_copy_struct__23132

#define MLRI__kcg_comp_P01_brake_pressure_value_T_TIU_Types_Pkg MLRI__kcg_comp_struct__21694

#define MLRI__kcg_copy_P01_brake_pressure_value_T_TIU_Types_Pkg MLRI__kcg_copy_struct__21694

#define MLRI__kcg_comp_SVar410_TrackToTrain MLRI__kcg_comp_struct__23127

#define MLRI__kcg_copy_SVar410_TrackToTrain MLRI__kcg_copy_struct__23127

#define MLRI__kcg_comp_AVar410_TrackToTrain MLRI__kcg_comp_array__23124

#define MLRI__kcg_copy_AVar410_TrackToTrain MLRI__kcg_copy_array__23124

#define MLRI__kcg_comp_S_nothing_to_resume_profile_follow_T_TIU_Types_Pkg MLRI__kcg_comp_struct__21713

#define MLRI__kcg_copy_S_nothing_to_resume_profile_follow_T_TIU_Types_Pkg MLRI__kcg_copy_struct__21713

#define MLRI__kcg_comp_Var410_TrackToTrain MLRI__kcg_comp_struct__23118

#define MLRI__kcg_copy_Var410_TrackToTrain MLRI__kcg_copy_struct__23118

#define MLRI__kcg_comp_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg MLRI__kcg_comp_struct__21699

#define MLRI__kcg_copy_Type_I_train_and_brake_inhibition_with_distance_commands_T_TIU_Types_Pkg MLRI__kcg_copy_struct__21699

#define MLRI__kcg_comp_Track_Condition_Change_of_allowed_current_consumption_TrackToTrain MLRI__kcg_comp_struct__23144

#define MLRI__kcg_copy_Track_Condition_Change_of_allowed_current_consumption_TrackToTrain MLRI__kcg_copy_struct__23144

#define MLRI__kcg_comp_Type_I_train_commands_T_TIU_Types_Pkg MLRI__kcg_comp_struct__21667

#define MLRI__kcg_copy_Type_I_train_commands_T_TIU_Types_Pkg MLRI__kcg_copy_struct__21667

#define MLRI__kcg_comp_Track_Condition_Change_of_traction_system_TrackToTrain MLRI__kcg_comp_struct__23153

#define MLRI__kcg_copy_Track_Condition_Change_of_traction_system_TrackToTrain MLRI__kcg_copy_struct__23153

#define MLRI__kcg_comp_International_Static_Speed_Profile_TrackToTrain MLRI__kcg_comp_struct__23193

#define MLRI__kcg_copy_International_Static_Speed_Profile_TrackToTrain MLRI__kcg_copy_struct__23193

#define MLRI__kcg_comp_SVar272_TrackToTrain MLRI__kcg_comp_struct__23173

#define MLRI__kcg_copy_SVar272_TrackToTrain MLRI__kcg_copy_struct__23173

#define MLRI__kcg_comp_AVar272_TrackToTrain MLRI__kcg_comp_array__23170

#define MLRI__kcg_copy_AVar272_TrackToTrain MLRI__kcg_copy_array__23170

#define MLRI__kcg_comp_Var272_TrackToTrain MLRI__kcg_comp_struct__23163

#define MLRI__kcg_copy_Var272_TrackToTrain MLRI__kcg_copy_struct__23163

#define MLRI__kcg_comp_trainData_T_TIU_Types_Pkg MLRI__kcg_comp_struct__21515

#define MLRI__kcg_copy_trainData_T_TIU_Types_Pkg MLRI__kcg_copy_struct__21515

#define MLRI__kcg_comp_SVar271_TrackToTrain MLRI__kcg_comp_struct__23188

#define MLRI__kcg_copy_SVar271_TrackToTrain MLRI__kcg_copy_struct__23188

#define MLRI__kcg_comp_AVar271_TrackToTrain MLRI__kcg_comp_array__23185

#define MLRI__kcg_copy_AVar271_TrackToTrain MLRI__kcg_copy_array__23185

#define MLRI__kcg_comp_API_addInfo_T_API_Msg_Pkg MLRI__kcg_comp_struct__21521

#define MLRI__kcg_copy_API_addInfo_T_API_Msg_Pkg MLRI__kcg_copy_struct__21521

#define MLRI__kcg_comp_Var271_TrackToTrain MLRI__kcg_comp_struct__23178

#define MLRI__kcg_copy_Var271_TrackToTrain MLRI__kcg_copy_struct__23178

#define MLRI__kcg_comp_API_Telegram_T_API_Msg_Pkg MLRI__kcg_comp_struct__21543

#define MLRI__kcg_copy_API_Telegram_T_API_Msg_Pkg MLRI__kcg_copy_struct__21543

#define MLRI__kcg_comp_SVar270_TrackToTrain MLRI__kcg_comp_struct__23173

#define MLRI__kcg_copy_SVar270_TrackToTrain MLRI__kcg_copy_struct__23173

#define MLRI__kcg_comp_AVar270_TrackToTrain MLRI__kcg_comp_array__23170

#define MLRI__kcg_copy_AVar270_TrackToTrain MLRI__kcg_copy_array__23170

#define MLRI__kcg_comp_Var270_TrackToTrain MLRI__kcg_comp_struct__23163

#define MLRI__kcg_copy_Var270_TrackToTrain MLRI__kcg_copy_struct__23163

#define MLRI__kcg_comp_Gradient_Profile_TrackToTrain MLRI__kcg_comp_struct__23219

#define MLRI__kcg_copy_Gradient_Profile_TrackToTrain MLRI__kcg_copy_struct__23219

#define MLRI__kcg_comp_SVar210_TrackToTrain MLRI__kcg_comp_struct__23214

#define MLRI__kcg_copy_SVar210_TrackToTrain MLRI__kcg_copy_struct__23214

#define MLRI__kcg_comp_AVar210_TrackToTrain MLRI__kcg_comp_array__23211

#define MLRI__kcg_copy_AVar210_TrackToTrain MLRI__kcg_copy_array__23211

#define MLRI__kcg_comp_Var210_TrackToTrain MLRI__kcg_comp_struct__23205

#define MLRI__kcg_copy_Var210_TrackToTrain MLRI__kcg_copy_struct__23205

#define MLRI__kcg_comp_Repositioning_Information_TrackToTrain MLRI__kcg_comp_struct__23230

#define MLRI__kcg_copy_Repositioning_Information_TrackToTrain MLRI__kcg_copy_struct__23230

#define MLRI__kcg_comp_Level_23_Movement_Authority_TrackToTrain MLRI__kcg_comp_struct__23253

#define MLRI__kcg_copy_Level_23_Movement_Authority_TrackToTrain MLRI__kcg_copy_struct__23253

#define MLRI__kcg_comp_SVar150_TrackToTrain MLRI__kcg_comp_struct__23248

#define MLRI__kcg_copy_SVar150_TrackToTrain MLRI__kcg_copy_struct__23248

#define MLRI__kcg_comp_AVar150_TrackToTrain MLRI__kcg_comp_array__23245

#define MLRI__kcg_copy_AVar150_TrackToTrain MLRI__kcg_copy_array__23245

#define MLRI__kcg_comp_Var150_TrackToTrain MLRI__kcg_comp_struct__23238

#define MLRI__kcg_copy_Var150_TrackToTrain MLRI__kcg_copy_struct__23238

#define MLRI__kcg_comp_Staff_Responsible_distance_Information_from_loop_TrackToTrain MLRI__kcg_comp_struct__23293

#define MLRI__kcg_copy_Staff_Responsible_distance_Information_from_loop_TrackToTrain MLRI__kcg_copy_struct__23293

#define MLRI__kcg_comp_SVar130_TrackToTrain MLRI__kcg_comp_struct__23288

#define MLRI__kcg_copy_SVar130_TrackToTrain MLRI__kcg_copy_struct__23288

#define MLRI__kcg_comp_AVar130_TrackToTrain MLRI__kcg_comp_array__23285

#define MLRI__kcg_copy_AVar130_TrackToTrain MLRI__kcg_copy_array__23285

#define MLRI__kcg_comp_Var130_TrackToTrain MLRI__kcg_comp_struct__23278

#define MLRI__kcg_copy_Var130_TrackToTrain MLRI__kcg_copy_struct__23278

#define MLRI__kcg_comp_Var137_TrackToTrain MLRI__kcg_comp_struct__22933

#define MLRI__kcg_copy_Var137_TrackToTrain MLRI__kcg_copy_struct__22933

#define MLRI__kcg_comp_Level_1_Movement_Authority_TrackToTrain MLRI__kcg_comp_struct__23304

#define MLRI__kcg_copy_Level_1_Movement_Authority_TrackToTrain MLRI__kcg_copy_struct__23304

#define MLRI__kcg_comp_SVar120_TrackToTrain MLRI__kcg_comp_struct__23248

#define MLRI__kcg_copy_SVar120_TrackToTrain MLRI__kcg_copy_struct__23248

#define MLRI__kcg_comp_AVar120_TrackToTrain MLRI__kcg_comp_array__23245

#define MLRI__kcg_copy_AVar120_TrackToTrain MLRI__kcg_copy_array__23245

#define MLRI__kcg_comp_Var120_TrackToTrain MLRI__kcg_comp_struct__23238

#define MLRI__kcg_copy_Var120_TrackToTrain MLRI__kcg_copy_struct__23238

#define MLRI__kcg_comp_Virtual_Balise_Cover_order_TrackToTrain MLRI__kcg_comp_struct__23330

#define MLRI__kcg_copy_Virtual_Balise_Cover_order_TrackToTrain MLRI__kcg_copy_struct__23330

#define MLRI__kcg_comp_Linking_TrackToTrain MLRI__kcg_comp_struct__23358

#define MLRI__kcg_copy_Linking_TrackToTrain MLRI__kcg_copy_struct__23358

#define MLRI__kcg_comp_SVar50_TrackToTrain MLRI__kcg_comp_struct__23353

#define MLRI__kcg_copy_SVar50_TrackToTrain MLRI__kcg_copy_struct__23353

#define MLRI__kcg_comp_AVar50_TrackToTrain MLRI__kcg_comp_array__23350

#define MLRI__kcg_copy_AVar50_TrackToTrain MLRI__kcg_copy_array__23350

#define MLRI__kcg_comp_Var50_TrackToTrain MLRI__kcg_comp_struct__23340

#define MLRI__kcg_copy_Var50_TrackToTrain MLRI__kcg_copy_struct__23340

#define MLRI__kcg_comp_National_Values_TrackToTrain MLRI__kcg_comp_struct__23428

#define MLRI__kcg_copy_National_Values_TrackToTrain MLRI__kcg_copy_struct__23428

#define MLRI__kcg_comp_SVar34_TrackToTrain MLRI__kcg_comp_struct__23381

#define MLRI__kcg_copy_SVar34_TrackToTrain MLRI__kcg_copy_struct__23381

#define MLRI__kcg_comp_AVar34_TrackToTrain MLRI__kcg_comp_array__23378

#define MLRI__kcg_copy_AVar34_TrackToTrain MLRI__kcg_copy_array__23378

#define MLRI__kcg_comp_Var34_TrackToTrain MLRI__kcg_comp_struct__23373

#define MLRI__kcg_copy_Var34_TrackToTrain MLRI__kcg_copy_struct__23373

#define MLRI__kcg_comp_SVar33_TrackToTrain MLRI__kcg_comp_struct__23394

#define MLRI__kcg_copy_SVar33_TrackToTrain MLRI__kcg_copy_struct__23394

#define MLRI__kcg_comp_AVar33_TrackToTrain MLRI__kcg_comp_array__23391

#define MLRI__kcg_copy_AVar33_TrackToTrain MLRI__kcg_copy_array__23391

#define MLRI__kcg_comp_Var33_TrackToTrain MLRI__kcg_comp_struct__23386

#define MLRI__kcg_copy_Var33_TrackToTrain MLRI__kcg_copy_struct__23386

#define MLRI__kcg_comp_SVar32_TrackToTrain MLRI__kcg_comp_struct__23411

#define MLRI__kcg_copy_SVar32_TrackToTrain MLRI__kcg_copy_struct__23411

#define MLRI__kcg_comp_AVar32_TrackToTrain MLRI__kcg_comp_array__23408

#define MLRI__kcg_copy_AVar32_TrackToTrain MLRI__kcg_copy_array__23408

#define MLRI__kcg_comp_Var32_TrackToTrain MLRI__kcg_comp_struct__23399

#define MLRI__kcg_copy_Var32_TrackToTrain MLRI__kcg_copy_struct__23399

#define MLRI__kcg_comp_SVar31_TrackToTrain MLRI__kcg_comp_struct__23394

#define MLRI__kcg_copy_SVar31_TrackToTrain MLRI__kcg_copy_struct__23394

#define MLRI__kcg_comp_AVar31_TrackToTrain MLRI__kcg_comp_array__23391

#define MLRI__kcg_copy_AVar31_TrackToTrain MLRI__kcg_copy_array__23391

#define MLRI__kcg_comp_Var31_TrackToTrain MLRI__kcg_comp_struct__23386

#define MLRI__kcg_copy_Var31_TrackToTrain MLRI__kcg_copy_struct__23386

#define MLRI__kcg_comp_SVar30_TrackToTrain MLRI__kcg_comp_struct__23423

#define MLRI__kcg_copy_SVar30_TrackToTrain MLRI__kcg_copy_struct__23423

#define MLRI__kcg_comp_AVar30_TrackToTrain MLRI__kcg_comp_array__23420

#define MLRI__kcg_copy_AVar30_TrackToTrain MLRI__kcg_copy_array__23420

#define MLRI__kcg_comp_Var30_TrackToTrain MLRI__kcg_comp_struct__23416

#define MLRI__kcg_copy_Var30_TrackToTrain MLRI__kcg_copy_struct__23416

#define MLRI__kcg_comp_System_Version_order_TrackToTrain MLRI__kcg_comp_struct__23478

#define MLRI__kcg_copy_System_Version_order_TrackToTrain MLRI__kcg_copy_struct__23478

#define MLRI__kcg_comp_Virtual_Balise_Cover_marker_TrackToTrain MLRI__kcg_comp_struct__23485

#define MLRI__kcg_copy_Virtual_Balise_Cover_marker_TrackToTrain MLRI__kcg_copy_struct__23485

#endif /* _MLRI__KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2014-12-12T12:03:54
*************************************************************$ */


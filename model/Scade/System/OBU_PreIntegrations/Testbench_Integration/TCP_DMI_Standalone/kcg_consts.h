/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/MD/model/Scade/System/OBU_PreIntegrations/Testbench_Integration/TCP_DMI_Standalone\kcg_s2c_config.txt
** Generation date: 2015-11-20T19:43:30
*************************************************************$ */
#ifndef _KCG_CONSTS_H_
#define _KCG_CONSTS_H_

#include "kcg_types.h"

/* Testbench_Integration::cEmptyEVC2DMIBusMessage */
extern const EVC_to_DMI_Message_int_T_API_DMI_Pkg cEmptyEVC2DMIBusMessage_Testbench_Integration;

/* cEmptyTrainData */
extern const trainData_T_TIU_Types_Pkg cEmptyTrainData;

/* TIU_Types_Pkg::emptyTIUInfo */
extern const Message_Train_Interface_to_EVC_T_TIU_Types_Pkg emptyTIUInfo_TIU_Types_Pkg;

/* illegalScalesIndex */
extern const tScale illegalScalesIndex;

/* numberOfObjects */
#define numberOfObjects 12

/* Scales */
extern const array_real_9_6 Scales;

/* logScaleFactor */
#define logScaleFactor 142.84

/* ScaleLine5 */
#define ScaleLine5 133.0

/* LinearScaleFactors */
extern const array_real_6 LinearScaleFactors;

/* cPASPOutput_Array_Size */
#define cPASPOutput_Array_Size 4

/* cPASP_Array_Size */
#define cPASP_Array_Size 10

/* DMI_Control_Pkg::ASCII_Backsp */
#define ASCII_Backsp_DMI_Control_Pkg 8

/* DMI_Control_Pkg::closeButtonActiveSymbol */
#define closeButtonActiveSymbol_DMI_Control_Pkg 25

/* DMI_Control_Pkg::DMI_train_data_ack_positive */
extern const DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg DMI_train_data_ack_positive_DMI_Control_Pkg;

/* DMI_Control_Pkg::DMI_train_data_ack_negative */
extern const DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg DMI_train_data_ack_negative_DMI_Control_Pkg;

/* DMI_Control_Pkg::cDefLevelT */
extern const DMI_level_T_DMI_Types_Pkg cDefLevelT_DMI_Control_Pkg;

/* DMI_Control_Pkg::cCloseButtonEnabledSymbol */
#define cCloseButtonEnabledSymbol_DMI_Control_Pkg 25

/* DMI_Control_Pkg::AllMenuButtonsDisabled */
extern const array_int_30 AllMenuButtonsDisabled_DMI_Control_Pkg;

/* DMI_Control_Pkg::DMI_train_data_constant */
extern const DMI_Train_Data_T_DMI_Messages_Bothways_Pkg DMI_train_data_constant_DMI_Control_Pkg;

/* DMI_Control_Pkg::cStatusSymbol_IconGroup */
#define cStatusSymbol_IconGroup_DMI_Control_Pkg 3

/* DMI_Control_Pkg::cSTATUS_Emergency_brake */
#define cSTATUS_Emergency_brake_DMI_Control_Pkg 1

/* DMI_Control_Pkg::ArrayOfIndex_LevelAnnouncementNoAck */
extern const array_int_5 ArrayOfIndex_LevelAnnouncementNoAck_DMI_Control_Pkg;

/* DMI_Control_Pkg::cClearBrakeStatusSymbol */
extern const DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg cClearBrakeStatusSymbol_DMI_Control_Pkg;

/* DMI_Control_Pkg::cClearC1AreaSymbol */
extern const DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg cClearC1AreaSymbol_DMI_Control_Pkg;

/* DMI_Control_Pkg::cCOLOR_GREY */
#define cCOLOR_GREY_DMI_Control_Pkg 3

/* DMI_Control_Pkg::cCOLOR_RED */
#define cCOLOR_RED_DMI_Control_Pkg 10

/* DMI_Control_Pkg::cCOLOR_ORANGE */
#define cCOLOR_ORANGE_DMI_Control_Pkg 9

/* DMI_Control_Pkg::ccOLOR_WHITE */
#define ccOLOR_WHITE_DMI_Control_Pkg 1

/* DMI_Control_Pkg::cCOLOR_YELLOW */
#define cCOLOR_YELLOW_DMI_Control_Pkg 8

/* DMI_Control_Pkg::cCOLOR_DARK_GREY */
#define cCOLOR_DARK_GREY_DMI_Control_Pkg 5

/* DMI_Control_Pkg::cCOLOR_MEDIUM_GREY */
#define cCOLOR_MEDIUM_GREY_DMI_Control_Pkg 4

/* DMI_Control_Pkg::cDMI_text_message_ack */
extern const DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg cDMI_text_message_ack_DMI_Control_Pkg;

/* DMI_Control_Pkg::cDMI_evc_Display_List */
extern const DMI_EVC_Level_Data_T_DMI_Messages_EVC_to_DMI_Pkg cDMI_evc_Display_List_DMI_Control_Pkg;

/* DMI_Control_Pkg::cDMI_GradientsInit */
extern const array_real_32 cDMI_GradientsInit_DMI_Control_Pkg;

/* DMI_Control_Pkg::cDMI_SpeedProfile_Init */
extern const array_real_32 cDMI_SpeedProfile_Init_DMI_Control_Pkg;

/* DMI_Control_Pkg::cDMI_Gradient_Visible_Flag_init */
extern const array_bool_32 cDMI_Gradient_Visible_Flag_init_DMI_Control_Pkg;

/* DMI_Control_Pkg::DMI_name */
extern const array_char_12 DMI_name_DMI_Control_Pkg;

/* DMI_Control_Pkg::cEmptyDMIRadioNetData */
extern const DMI_Radio_Net_Data_T_DMI_Messages_DMI_to_EVC_Pkg cEmptyDMIRadioNetData_DMI_Control_Pkg;

/* DMI_Control_Pkg::cEmptyDMIIconAck */
extern const DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg cEmptyDMIIconAck_DMI_Control_Pkg;

/* DMI_Control_Pkg::cEmptyDMIAdhesionFactorData */
extern const DMI_Adhesion_Factor_Data_T_DMI_Messages_Bothways_Pkg cEmptyDMIAdhesionFactorData_DMI_Control_Pkg;

/* DMI_Control_Pkg::cEmptyDMITrainData */
extern const DMI_Train_Data_T_DMI_Messages_Bothways_Pkg cEmptyDMITrainData_DMI_Control_Pkg;

/* DMI_Control_Pkg::cDMI_dynamic */
extern const DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg cDMI_dynamic_DMI_Control_Pkg;

/* DMI_Control_Pkg::cEmptyIdentifer */
extern const DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg cEmptyIdentifer_DMI_Control_Pkg;

/* DMI_Control_Pkg::cDMI_Level_data */
extern const DMI_Level_Data_T_DMI_Messages_Bothways_Pkg cDMI_Level_data_DMI_Control_Pkg;

/* DMI_Control_Pkg::cD_SPDI_SpeedChangeSymbolsVisible */
extern const array_bool_10 cD_SPDI_SpeedChangeSymbolsVisible_DMI_Control_Pkg;

/* DMI_Control_Pkg::cD_SPDI_SpeedChangeIndex */
extern const array_int_10 cD_SPDI_SpeedChangeIndex_DMI_Control_Pkg;

/* DMI_Control_Pkg::cD_SPDI_SpeedChangePosition */
extern const array_real_10 cD_SPDI_SpeedChangePosition_DMI_Control_Pkg;

/* DMI_Control_Pkg::cD_PASP_Speeds */
extern const array_real_4 cD_PASP_Speeds_DMI_Control_Pkg;

/* DMI_Control_Pkg::cD_PASP_Distances */
extern const array_real_4 cD_PASP_Distances_DMI_Control_Pkg;

/* DMI_Control_Pkg::cD_GradientVisible */
extern const array_bool_12 cD_GradientVisible_DMI_Control_Pkg;

/* DMI_Control_Pkg::cD_GradientStartInterpolated */
extern const array_real_12 cD_GradientStartInterpolated_DMI_Control_Pkg;

/* DMI_Control_Pkg::cD_tScale */
extern const tScale cD_tScale_DMI_Control_Pkg;

/* DMI_Control_Pkg::cLevelSymbol_IconGroup */
#define cLevelSymbol_IconGroup_DMI_Control_Pkg 1

/* DMI_Control_Pkg::cModeSymbol_IconGroup */
#define cModeSymbol_IconGroup_DMI_Control_Pkg 2

/* DMI_Control_Pkg::ArrayOfIndex_YellowModeSymbols */
extern const array_int_8 ArrayOfIndex_YellowModeSymbols_DMI_Control_Pkg;

/* DMI_Control_Pkg::ArrayOfIndex_YellowLevelSymbols */
extern const array_int_5 ArrayOfIndex_YellowLevelSymbols_DMI_Control_Pkg;

/* DMI_Control_Pkg::cMODE_Limited_Supervision */
#define cMODE_Limited_Supervision_DMI_Control_Pkg 21

/* DMI_Control_Pkg::cMODE_Non_leading */
#define cMODE_Non_leading_DMI_Control_Pkg 12

/* DMI_Control_Pkg::cMODE_On_Sight */
#define cMODE_On_Sight_DMI_Control_Pkg 7

/* DMI_Control_Pkg::cMODE_Post_trip */
#define cMODE_Post_trip_DMI_Control_Pkg 6

/* DMI_Control_Pkg::cMODE_Reversing */
#define cMODE_Reversing_DMI_Control_Pkg 14

/* DMI_Control_Pkg::cMODE_Staff_Responsible */
#define cMODE_Staff_Responsible_DMI_Control_Pkg 9

/* DMI_Control_Pkg::cMODE_System_Faliure */
#define cMODE_System_Faliure_DMI_Control_Pkg 18

/* DMI_Control_Pkg::cMODE_Trip */
#define cMODE_Trip_DMI_Control_Pkg 4

/* DMI_Control_Pkg::cMODE_Unfitted */
#define cMODE_Unfitted_DMI_Control_Pkg 16

/* DMI_Control_Pkg::cMODE_Stand_By */
#define cMODE_Stand_By_DMI_Control_Pkg 13

/* DMI_Control_Pkg::cMODE_Shunting */
#define cMODE_Shunting_DMI_Control_Pkg 1

/* DMI_Control_Pkg::cMODE_System_National */
#define cMODE_System_National_DMI_Control_Pkg 19

/* DMI_Control_Pkg::cStatusIntervalTime */
#define cStatusIntervalTime_DMI_Control_Pkg 10

/* DMI_Control_Pkg::cMODE_Full_Supervision */
#define cMODE_Full_Supervision_DMI_Control_Pkg 11

/* DMI_Control_Pkg::Dim_DMI_name */
#define Dim_DMI_name_DMI_Control_Pkg 12

/* DMI_Control_Pkg::DMI_identifier_const */
extern const DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg DMI_identifier_const_DMI_Control_Pkg;

/* DMI_Control_Pkg::Sub_func::cInitStatus */
extern const TIU_trainStatus_T_TIU_Types_Pkg cInitStatus_DMI_Control_Pkg_Sub_func;

/* DMI_Control_Pkg::ASCII_0 */
#define ASCII_0_DMI_Control_Pkg 48

/* DMI_Control_Pkg::ASCII_offset_Backsp */
#define ASCII_offset_Backsp_DMI_Control_Pkg (- 40)

/* DMI_Control_Pkg::ASCII_offset_0 */
#define ASCII_offset_0_DMI_Control_Pkg 0

/* DMI_Control_Pkg::ASCII_space */
#define ASCII_space_DMI_Control_Pkg 32

/* DMI_Control_Pkg::DriverID_window_mask */
extern const array_bool_15 DriverID_window_mask_DMI_Control_Pkg;

/* DMI_Control_Pkg::HideMainmenu_window_mask */
extern const array_bool_15 HideMainmenu_window_mask_DMI_Control_Pkg;

/* DMI_Control_Pkg::TrainRN_window_mask */
extern const array_bool_15 TrainRN_window_mask_DMI_Control_Pkg;

/* DMI_Control_Pkg::Mainmenu_window_mask */
extern const array_bool_15 Mainmenu_window_mask_DMI_Control_Pkg;

/* DMI_Control_Pkg::cETCS_Level_Menu_mask */
extern const array_bool_15 cETCS_Level_Menu_mask_DMI_Control_Pkg;

/* DMI_Control_Pkg::ValidateTraindata_window_mask */
extern const array_bool_15 ValidateTraindata_window_mask_DMI_Control_Pkg;

/* DMI_Control_Pkg::cDMI_List_Entry_Request */
extern const Array_DMI_List_Entry_Request cDMI_List_Entry_Request_DMI_Control_Pkg;

/* DMI_Control_Pkg::Px100To1001 */
#define Px100To1001_DMI_Control_Pkg 153.0

/* DMI_Control_Pkg::Y100I1 */
#define Y100I1_DMI_Control_Pkg (- 56.5)

/* DMI_Control_Pkg::MAX_GRADIENTS_DMI */
#define MAX_GRADIENTS_DMI_DMI_Control_Pkg cDMI_maxGradientProfile_DMI_Types_Pkg

/* DMI_Control_Pkg::MAX_SPEEDPROFILES */
#define MAX_SPEEDPROFILES_DMI_Control_Pkg 32

/* DMI_Control_Pkg::cArray_hh_leer */
extern const array_real_10 cArray_hh_leer_DMI_Control_Pkg;

/* DMI_Control_Pkg::cArray_mm_leer */
extern const array_real_10 cArray_mm_leer_DMI_Control_Pkg;

/* DMI_Control_Pkg::cListMsgStructure */
extern const array__31788 cListMsgStructure_DMI_Control_Pkg;

/* DMI_Control_Pkg::cMsgStructQueue */
extern const array__31788 cMsgStructQueue_DMI_Control_Pkg;

/* DMI_Control_Pkg::cMsgStructQueueMax */
extern const array__31785 cMsgStructQueueMax_DMI_Control_Pkg;

/* DMI_Control_Pkg::cMsgStructure */
extern const MsgStructure cMsgStructure_DMI_Control_Pkg;

/* DMI_Control_Pkg::cDIM_MSGQueueMax */
#define cDIM_MSGQueueMax_DMI_Control_Pkg 10

/* DMI_Control_Pkg::cMsgStructure_fix */
extern const MsgStructure cMsgStructure_fix_DMI_Control_Pkg;

/* DMI_Control_Pkg::cPlainText_fix */
extern const array_char_30_5 cPlainText_fix_DMI_Control_Pkg;

/* DMI_Control_Pkg::cPlainText_single */
extern const array_char_30 cPlainText_single_DMI_Control_Pkg;

/* DMI_Control_Pkg::cArray_hh_leer5 */
extern const array_real_5 cArray_hh_leer5_DMI_Control_Pkg;

/* DMI_Control_Pkg::cArray_mm_leer5 */
extern const array_real_5 cArray_mm_leer5_DMI_Control_Pkg;

/* DMI_Control_Pkg::Num_Q_TextMsg */
#define Num_Q_TextMsg_DMI_Control_Pkg 27

/* DMI_Control_Pkg::ArrayEnum_Q_text */
extern const Array_DMI_Q_Text ArrayEnum_Q_text_DMI_Control_Pkg;

/* DMI_Control_Pkg::cPlainText */
extern const array_char_30_5 cPlainText_DMI_Control_Pkg;

/* DMI_Control_Pkg::cIntervalFlashingTimeMsg */
#define cIntervalFlashingTimeMsg_DMI_Control_Pkg 10

/* DMI_Control_Pkg::cDIM_MSGQueue */
#define cDIM_MSGQueue_DMI_Control_Pkg 5

/* DMI_Control_Pkg::c_hh */
#define c_hh_DMI_Control_Pkg (- 1.0)

/* DMI_Control_Pkg::cMsg_important1 */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cMsg_important1_DMI_Control_Pkg;

/* DMI_Control_Pkg::cMsg_leer */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cMsg_leer_DMI_Control_Pkg;

/* DMI_Control_Pkg::cMsg_important3 */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cMsg_important3_DMI_Control_Pkg;

/* DMI_Control_Pkg::cMsg_auxi1 */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cMsg_auxi1_DMI_Control_Pkg;

/* DMI_Control_Pkg::cMsg_ack2 */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cMsg_ack2_DMI_Control_Pkg;

/* DMI_Control_Pkg::cMsg_ack1 */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cMsg_ack1_DMI_Control_Pkg;

/* DMI_Control_Pkg::cMsg_auxi3 */
extern const DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg cMsg_auxi3_DMI_Control_Pkg;

/* DMI_Control_Pkg::cMaxNumLevelHandeld */
#define cMaxNumLevelHandeld_DMI_Control_Pkg 12

/* DMI_Control_Pkg::cLevel_2_Index */
#define cLevel_2_Index_DMI_Control_Pkg 3

/* DMI_Control_Pkg::cLevel_ATB_Index */
#define cLevel_ATB_Index_DMI_Control_Pkg 5

/* DMI_Control_Pkg::cLevel_3_Index */
#define cLevel_3_Index_DMI_Control_Pkg 4

/* DMI_Control_Pkg::cLevel_0_Index */
#define cLevel_0_Index_DMI_Control_Pkg 1

/* DMI_Control_Pkg::cLevel_1_Index */
#define cLevel_1_Index_DMI_Control_Pkg 2

/* Messages::cEVC_to_DMI_CT */
extern const EVC_to_DMI_Message_T_API_DMI_Pkg cEVC_to_DMI_CT_Messages;

/* DATA::cDMI_Dynamic_int_array_size */
#define cDMI_Dynamic_int_array_size_DATA 24

/* INT_M_SupervisionDisplay_T_supDis_normal */
#define INT_M_SupervisionDisplay_T_supDis_normal 0

/* INT_M_SupervisionDisplay_T_supDis_indication */
#define INT_M_SupervisionDisplay_T_supDis_indication 1

/* INT_M_SupervisionDisplay_T_supDis_overspeed */
#define INT_M_SupervisionDisplay_T_supDis_overspeed 2

/* INT_M_SupervisionDisplay_T_supDis_warning */
#define INT_M_SupervisionDisplay_T_supDis_warning 3

/* INT_M_SupervisionDisplay_T_supDis_intervention */
#define INT_M_SupervisionDisplay_T_supDis_intervention 4

/* ENUM_M_SupervisionDisplay_T_supDis_normal */
#define ENUM_M_SupervisionDisplay_T_supDis_normal supDis_normal_DMI_Types_Pkg

/* ENUM_M_SupervisionDisplay_T_supDis_intervention */
#define ENUM_M_SupervisionDisplay_T_supDis_intervention supDis_intervention_DMI_Types_Pkg

/* ENUM_M_SupervisionDisplay_T_supDis_warning */
#define ENUM_M_SupervisionDisplay_T_supDis_warning supDis_warning_DMI_Types_Pkg

/* ENUM_M_SupervisionDisplay_T_supDis_overspeed */
#define ENUM_M_SupervisionDisplay_T_supDis_overspeed supDis_overspeed_DMI_Types_Pkg

/* ENUM_M_SupervisionDisplay_T_supDis_indication */
#define ENUM_M_SupervisionDisplay_T_supDis_indication supDis_indication_DMI_Types_Pkg

/* INT_M_SUPERVISION_STATUS_CSM */
#define INT_M_SUPERVISION_STATUS_CSM 0

/* INT_M_SUPERVISION_STATUS_PIM */
#define INT_M_SUPERVISION_STATUS_PIM 1

/* INT_M_SUPERVISION_STATUS_TSM */
#define INT_M_SUPERVISION_STATUS_TSM 2

/* INT_M_SUPERVISION_STATUS_RSM */
#define INT_M_SUPERVISION_STATUS_RSM 3

/* INT_M_SUPERVISION_STATUS_supervision_status_unknown */
#define INT_M_SUPERVISION_STATUS_supervision_status_unknown 4

/* ENUM_M_SUPERVISION_STATUS_CSM */
#define ENUM_M_SUPERVISION_STATUS_CSM CSM_DMI_Types_Pkg

/* ENUM_M_SUPERVISION_STATUS_supervision_status_unknown */
#define ENUM_M_SUPERVISION_STATUS_supervision_status_unknown supervision_status_unknown_DMI_Types_Pkg

/* ENUM_M_SUPERVISION_STATUS_RSM */
#define ENUM_M_SUPERVISION_STATUS_RSM RSM_DMI_Types_Pkg

/* ENUM_M_SUPERVISION_STATUS_TSM */
#define ENUM_M_SUPERVISION_STATUS_TSM TSM_DMI_Types_Pkg

/* ENUM_M_SUPERVISION_STATUS_PIM */
#define ENUM_M_SUPERVISION_STATUS_PIM PIM_DMI_Types_Pkg

/* INT_connectionStatusRadioUnit_T_conn_unknown */
#define INT_connectionStatusRadioUnit_T_conn_unknown 0

/* INT_connectionStatusRadioUnit_T_conn_no_connection */
#define INT_connectionStatusRadioUnit_T_conn_no_connection 1

/* INT_connectionStatusRadioUnit_T_conn_ConnectionUp */
#define INT_connectionStatusRadioUnit_T_conn_ConnectionUp 2

/* INT_connectionStatusRadioUnit_T_conn_SetupFailed */
#define INT_connectionStatusRadioUnit_T_conn_SetupFailed 3

/* ENUM_connectionStatusRadioUnit_T_conn_unknown */
#define ENUM_connectionStatusRadioUnit_T_conn_unknown conn_unknown_API_RadioCommunication_Pkg

/* ENUM_connectionStatusRadioUnit_T_conn_SetupFailed */
#define ENUM_connectionStatusRadioUnit_T_conn_SetupFailed conn_SetupFailed_API_RadioCommunication_Pkg

/* ENUM_connectionStatusRadioUnit_T_conn_ConnectionUp */
#define ENUM_connectionStatusRadioUnit_T_conn_ConnectionUp conn_ConnectionUp_API_RadioCommunication_Pkg

/* ENUM_connectionStatusRadioUnit_T_conn_no_connection */
#define ENUM_connectionStatusRadioUnit_T_conn_no_connection conn_no_connection_API_RadioCommunication_Pkg

/* TM_conversions::INT_M_MODE_Full_Supervision */
#define INT_M_MODE_Full_Supervision_TM_conversions 0

/* TM_conversions::INT_M_MODE_Isolation */
#define INT_M_MODE_Isolation_TM_conversions 10

/* TM_conversions::INT_M_MODE_Limited_Supervision */
#define INT_M_MODE_Limited_Supervision_TM_conversions 12

/* TM_conversions::INT_M_MODE_National_System */
#define INT_M_MODE_National_System_TM_conversions 13

/* TM_conversions::INT_M_MODE_Non_Leading */
#define INT_M_MODE_Non_Leading_TM_conversions 11

/* TM_conversions::INT_M_MODE_On_Sight */
#define INT_M_MODE_On_Sight_TM_conversions 1

/* TM_conversions::INT_M_MODE_Passive_Shunting */
#define INT_M_MODE_Passive_Shunting_TM_conversions 15

/* TM_conversions::INT_M_MODE_Post_Trip */
#define INT_M_MODE_Post_Trip_TM_conversions 8

/* TM_conversions::INT_M_MODE_Reversing */
#define INT_M_MODE_Reversing_TM_conversions 14

/* TM_conversions::INT_M_MODE_Shunting */
#define INT_M_MODE_Shunting_TM_conversions 3

/* TM_conversions::INT_M_MODE_Sleeping */
#define INT_M_MODE_Sleeping_TM_conversions 5

/* TM_conversions::INT_M_MODE_Staff_Responsible */
#define INT_M_MODE_Staff_Responsible_TM_conversions 2

/* TM_conversions::INT_M_MODE_Stand_By */
#define INT_M_MODE_Stand_By_TM_conversions 6

/* TM_conversions::INT_M_MODE_System_Failure */
#define INT_M_MODE_System_Failure_TM_conversions 9

/* TM_conversions::INT_M_MODE_Trip */
#define INT_M_MODE_Trip_TM_conversions 7

/* TM_conversions::INT_M_MODE_Unfitted */
#define INT_M_MODE_Unfitted_TM_conversions 4

/* TM_conversions::ENUM_M_MODE_System_Failure */
#define ENUM_M_MODE_System_Failure_TM_conversions M_MODE_System_Failure

/* TM_conversions::ENUM_M_MODE_Unfitted */
#define ENUM_M_MODE_Unfitted_TM_conversions M_MODE_Unfitted

/* TM_conversions::ENUM_M_MODE_Trip */
#define ENUM_M_MODE_Trip_TM_conversions M_MODE_Trip

/* TM_conversions::ENUM_M_MODE_Stand_By */
#define ENUM_M_MODE_Stand_By_TM_conversions M_MODE_Stand_By

/* TM_conversions::ENUM_M_MODE_Staff_Responsible */
#define ENUM_M_MODE_Staff_Responsible_TM_conversions M_MODE_Staff_Responsible

/* TM_conversions::ENUM_M_MODE_Sleeping */
#define ENUM_M_MODE_Sleeping_TM_conversions M_MODE_Sleeping

/* TM_conversions::ENUM_M_MODE_Shunting */
#define ENUM_M_MODE_Shunting_TM_conversions M_MODE_Shunting

/* TM_conversions::ENUM_M_MODE_Reversing */
#define ENUM_M_MODE_Reversing_TM_conversions M_MODE_Reversing

/* TM_conversions::ENUM_M_MODE_Post_Trip */
#define ENUM_M_MODE_Post_Trip_TM_conversions M_MODE_Post_Trip

/* TM_conversions::ENUM_M_MODE_Passive_Shunting */
#define ENUM_M_MODE_Passive_Shunting_TM_conversions M_MODE_No_Power

/* TM_conversions::ENUM_M_MODE_On_Sight */
#define ENUM_M_MODE_On_Sight_TM_conversions M_MODE_On_Sight

/* TM_conversions::ENUM_M_MODE_Non_Leading */
#define ENUM_M_MODE_Non_Leading_TM_conversions M_MODE_Non_Leading

/* TM_conversions::ENUM_M_MODE_National_System */
#define ENUM_M_MODE_National_System_TM_conversions M_MODE_National_System

/* TM_conversions::ENUM_M_MODE_Limited_Supervision */
#define ENUM_M_MODE_Limited_Supervision_TM_conversions M_MODE_Limited_Supervision

/* TM_conversions::ENUM_M_MODE_Isolation */
#define ENUM_M_MODE_Isolation_TM_conversions M_MODE_Isolation

/* TM_conversions::ENUM_M_MODE_Full_Supervision */
#define ENUM_M_MODE_Full_Supervision_TM_conversions M_MODE_Full_Supervision

/* DATA::cDMI_Menu_Request_int_array_size */
#define cDMI_Menu_Request_int_array_size_DATA 3

/* DATA::cDMI_Entry_Request_int_array_size */
#define cDMI_Entry_Request_int_array_size_DATA 3

/* INT_DMI_List_Entry_Request_T_Enter_revalidate_driver_identifier */
#define INT_DMI_List_Entry_Request_T_Enter_revalidate_driver_identifier 0

/* INT_DMI_List_Entry_Request_T_Enter_revalidate_train_running_number */
#define INT_DMI_List_Entry_Request_T_Enter_revalidate_train_running_number 1

/* INT_DMI_List_Entry_Request_T_Enter_revalidate_ETCS_level */
#define INT_DMI_List_Entry_Request_T_Enter_revalidate_ETCS_level 2

/* INT_DMI_List_Entry_Request_T_Enter_RBC_contact_menu */
#define INT_DMI_List_Entry_Request_T_Enter_RBC_contact_menu 3

/* INT_DMI_List_Entry_Request_T_Validate_train_data */
#define INT_DMI_List_Entry_Request_T_Validate_train_data 4

/* INT_DMI_List_Entry_Request_T_Enter_NTC_data */
#define INT_DMI_List_Entry_Request_T_Enter_NTC_data 5

/* INT_DMI_List_Entry_Request_T_Spare */
#define INT_DMI_List_Entry_Request_T_Spare 6

/* INT_DMI_List_Entry_Request_T_Enable_the_track_ahead_free_by_the_driver */
#define INT_DMI_List_Entry_Request_T_Enable_the_track_ahead_free_by_the_driver 7

/* INT_DMI_List_Entry_Request_T_Disable_the_Track_Ahead_free_page */
#define INT_DMI_List_Entry_Request_T_Disable_the_Track_Ahead_free_page 8

/* INT_DMI_List_Entry_Request_T_Show_main_window */
#define INT_DMI_List_Entry_Request_T_Show_main_window 9

/* INT_DMI_List_Entry_Request_T_Hide_main_window */
#define INT_DMI_List_Entry_Request_T_Hide_main_window 10

/* INT_DMI_List_Entry_Request_T_Hide_adhesion_factor_entry_window */
#define INT_DMI_List_Entry_Request_T_Hide_adhesion_factor_entry_window 11

/* INT_DMI_List_Entry_Request_T_Show_Set_VBC_validation_window */
#define INT_DMI_List_Entry_Request_T_Show_Set_VBC_validation_window 13

/* INT_DMI_List_Entry_Request_T_Show_Remove_VBC_validation_window */
#define INT_DMI_List_Entry_Request_T_Show_Remove_VBC_validation_window 14

/* ENUM_DMI_List_Entry_Request_T_Show_Remove_VBC_validation_window */
#define ENUM_DMI_List_Entry_Request_T_Show_Remove_VBC_validation_window Show_Remove_VBC_validation_window_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Show_Set_VBC_validation_window */
#define ENUM_DMI_List_Entry_Request_T_Show_Set_VBC_validation_window Show_Set_VBC_validation_window_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Hide_staff_responsible_entry_window */
#define ENUM_DMI_List_Entry_Request_T_Hide_staff_responsible_entry_window Hide_staff_responsible_entry_window_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Hide_adhesion_factor_entry_window */
#define ENUM_DMI_List_Entry_Request_T_Hide_adhesion_factor_entry_window Hide_adhesion_factor_entry_window_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Hide_main_window */
#define ENUM_DMI_List_Entry_Request_T_Hide_main_window Hide_main_window_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Show_main_window */
#define ENUM_DMI_List_Entry_Request_T_Show_main_window Show_main_window_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Disable_the_Track_Ahead_free_page */
#define ENUM_DMI_List_Entry_Request_T_Disable_the_Track_Ahead_free_page Disable_the_Track_Ahead_free_page_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Enable_the_track_ahead_free_by_the_driver */
#define ENUM_DMI_List_Entry_Request_T_Enable_the_track_ahead_free_by_the_driver Enable_the_track_ahead_free_by_the_driver_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Spare */
#define ENUM_DMI_List_Entry_Request_T_Spare Spare_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Enter_NTC_data */
#define ENUM_DMI_List_Entry_Request_T_Enter_NTC_data Enter_NTC_data_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Validate_train_data */
#define ENUM_DMI_List_Entry_Request_T_Validate_train_data Validate_train_data_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Enter_RBC_contact_menu */
#define ENUM_DMI_List_Entry_Request_T_Enter_RBC_contact_menu Enter_RBC_contact_menu_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Enter_revalidate_ETCS_level */
#define ENUM_DMI_List_Entry_Request_T_Enter_revalidate_ETCS_level Enter_revalidate_ETCS_level_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Enter_revalidate_train_running_number */
#define ENUM_DMI_List_Entry_Request_T_Enter_revalidate_train_running_number Enter_revalidate_train_running_number_DMI_Types_Pkg

/* ENUM_DMI_List_Entry_Request_T_Enter_revalidate_driver_identifier */
#define ENUM_DMI_List_Entry_Request_T_Enter_revalidate_driver_identifier Enter_revalidate_driver_identifier_DMI_Types_Pkg

/* DATA::cDMI_EVC_Coded_Train_Data_int_array_size */
#define cDMI_EVC_Coded_Train_Data_int_array_size_DATA 9

/* INT_DMI_Q_TEXT_acknowledgment */
#define INT_DMI_Q_TEXT_acknowledgment 26

/* INT_DMI_Q_TEXT_balise_read_error */
#define INT_DMI_Q_TEXT_balise_read_error 0

/* INT_DMI_Q_TEXT_communication_error */
#define INT_DMI_Q_TEXT_communication_error 1

/* INT_DMI_Q_TEXT_emergency_stop */
#define INT_DMI_Q_TEXT_emergency_stop 15

/* INT_DMI_Q_TEXT_entering_FS */
#define INT_DMI_Q_TEXT_entering_FS 2

/* INT_DMI_Q_TEXT_entering_OS */
#define INT_DMI_Q_TEXT_entering_OS 3

/* INT_DMI_Q_TEXT_level_crossing_not_protected */
#define INT_DMI_Q_TEXT_level_crossing_not_protected 25

/* INT_DMI_Q_TEXT_no_MA_received_at_level_transition */
#define INT_DMI_Q_TEXT_no_MA_received_at_level_transition 11

/* INT_DMI_Q_TEXT_no_track_condition_will_be_received */
#define INT_DMI_Q_TEXT_no_track_condition_will_be_received 4

/* INT_DMI_Q_TEXT_no_track_description */
#define INT_DMI_Q_TEXT_no_track_description 19

/* INT_DMI_Q_TEXT_radio_network_registration_failed */
#define INT_DMI_Q_TEXT_radio_network_registration_failed 24

/* INT_DMI_Q_TEXT_route_unsuitable_axle_load_category */
#define INT_DMI_Q_TEXT_route_unsuitable_axle_load_category 21

/* INT_DMI_Q_TEXT_route_unsuitable_loading_gauge */
#define INT_DMI_Q_TEXT_route_unsuitable_loading_gauge 22

/* INT_DMI_Q_TEXT_route_unsuitable_traction_system */
#define INT_DMI_Q_TEXT_route_unsuitable_traction_system 23

/* INT_DMI_Q_TEXT_runaway_movement */
#define INT_DMI_Q_TEXT_runaway_movement 5

/* INT_DMI_Q_TEXT_RV_distance_esceeded */
#define INT_DMI_Q_TEXT_RV_distance_esceeded 18

/* INT_DMI_Q_TEXT_SH_refused */
#define INT_DMI_Q_TEXT_SH_refused 6

/* INT_DMI_Q_TEXT_SH_request_failed */
#define INT_DMI_Q_TEXT_SH_request_failed 17

/* INT_DMI_Q_TEXT_SH_stop_order */
#define INT_DMI_Q_TEXT_SH_stop_order 13

/* INT_DMI_Q_TEXT_SR_distance_exceeded */
#define INT_DMI_Q_TEXT_SR_distance_exceeded 12

/* INT_DMI_Q_TEXT_SR_stop_order */
#define INT_DMI_Q_TEXT_SR_stop_order 14

/* INT_DMI_Q_TEXT_STM_brake_Deman */
#define INT_DMI_Q_TEXT_STM_brake_Deman 20

/* INT_DMI_Q_TEXT_trackside_malfunction */
#define INT_DMI_Q_TEXT_trackside_malfunction 16

/* INT_DMI_Q_TEXT_trackside_not_compatible */
#define INT_DMI_Q_TEXT_trackside_not_compatible 7

/* INT_DMI_Q_TEXT_train_data_changed */
#define INT_DMI_Q_TEXT_train_data_changed 8

/* INT_DMI_Q_TEXT_train_is_rejected */
#define INT_DMI_Q_TEXT_train_is_rejected 9

/* INT_DMI_Q_TEXT_unauthorized_passing_of_EOA_LOA */
#define INT_DMI_Q_TEXT_unauthorized_passing_of_EOA_LOA 10

/* ENUM_DMI_Q_TEXT_unauthorized_passing_of_EOA_LOA */
#define ENUM_DMI_Q_TEXT_unauthorized_passing_of_EOA_LOA unauthorized_passing_of_EOA_LOA_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_train_is_rejected */
#define ENUM_DMI_Q_TEXT_train_is_rejected train_is_rejected_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_train_data_changed */
#define ENUM_DMI_Q_TEXT_train_data_changed train_data_changed_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_trackside_not_compatible */
#define ENUM_DMI_Q_TEXT_trackside_not_compatible trackside_not_compatible_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_trackside_malfunction */
#define ENUM_DMI_Q_TEXT_trackside_malfunction trackside_malfunction_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_STM_brake_Deman */
#define ENUM_DMI_Q_TEXT_STM_brake_Deman STM_brake_Deman_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_SR_stop_order */
#define ENUM_DMI_Q_TEXT_SR_stop_order SR_stop_order_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_SR_distance_exceeded */
#define ENUM_DMI_Q_TEXT_SR_distance_exceeded SR_distance_exceeded_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_SH_stop_order */
#define ENUM_DMI_Q_TEXT_SH_stop_order SH_stop_order_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_SH_request_failed */
#define ENUM_DMI_Q_TEXT_SH_request_failed SH_request_failed_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_SH_refused */
#define ENUM_DMI_Q_TEXT_SH_refused SH_refused_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_RV_distance_esceeded */
#define ENUM_DMI_Q_TEXT_RV_distance_esceeded RV_distance_esceeded_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_runaway_movement */
#define ENUM_DMI_Q_TEXT_runaway_movement runaway_movement_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_route_unsuitable_traction_system */
#define ENUM_DMI_Q_TEXT_route_unsuitable_traction_system route_unsuitable_traction_system_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_route_unsuitable_loading_gauge */
#define ENUM_DMI_Q_TEXT_route_unsuitable_loading_gauge route_unsuitable_loading_gauge_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_route_unsuitable_axle_load_category */
#define ENUM_DMI_Q_TEXT_route_unsuitable_axle_load_category route_unsuitable_axle_load_category_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_radio_network_registration_failed */
#define ENUM_DMI_Q_TEXT_radio_network_registration_failed radio_network_registration_failed_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_no_track_description */
#define ENUM_DMI_Q_TEXT_no_track_description no_track_description_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_no_track_condition_will_be_received */
#define ENUM_DMI_Q_TEXT_no_track_condition_will_be_received no_track_condition_will_be_received_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_no_MA_received_at_level_transition */
#define ENUM_DMI_Q_TEXT_no_MA_received_at_level_transition no_MA_received_at_level_transition_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_level_crossing_not_protected */
#define ENUM_DMI_Q_TEXT_level_crossing_not_protected level_crossing_not_protected_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_entering_OS */
#define ENUM_DMI_Q_TEXT_entering_OS entering_OS_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_entering_FS */
#define ENUM_DMI_Q_TEXT_entering_FS entering_FS_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_emergency_stop */
#define ENUM_DMI_Q_TEXT_emergency_stop emergency_stop_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_communication_error */
#define ENUM_DMI_Q_TEXT_communication_error communication_error_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_balise_read_error */
#define ENUM_DMI_Q_TEXT_balise_read_error balise_read_error_DMI_Types_Pkg

/* ENUM_DMI_Q_TEXT_acknowledgment */
#define ENUM_DMI_Q_TEXT_acknowledgment acknowledgment_DMI_Types_Pkg

/* TM_conversions::INT_Q_TEXTCLASS_important */
#define INT_Q_TEXTCLASS_important_TM_conversions 1

/* TM_conversions::INT_Q_TEXTCLASS_aux */
#define INT_Q_TEXTCLASS_aux_TM_conversions 0

/* TM_conversions::ENUM_Q_TEXTCLASS_important */
#define ENUM_Q_TEXTCLASS_important_TM_conversions Q_TEXTCLASS_Important_Information

/* TM_conversions::ENUM_Q_TEXTCLASS_aux */
#define ENUM_Q_TEXTCLASS_aux_TM_conversions Q_TEXTCLASS_Auxiliary_Information

/* TM_conversions::INT_Q_TEXTCONFIRM_confirmation */
#define INT_Q_TEXTCONFIRM_confirmation_TM_conversions 1

/* TM_conversions::INT_Q_TEXTCONFIRM_confirmation_EB */
#define INT_Q_TEXTCONFIRM_confirmation_EB_TM_conversions 3

/* TM_conversions::INT_Q_TEXTCONFIRM_confirmation_SB */
#define INT_Q_TEXTCONFIRM_confirmation_SB_TM_conversions 2

/* TM_conversions::INT_Q_TEXTCONFIRM_no_confirmation */
#define INT_Q_TEXTCONFIRM_no_confirmation_TM_conversions 0

/* TM_conversions::ENUM_Q_TEXTCONFIRM_confirmation */
#define ENUM_Q_TEXTCONFIRM_confirmation_TM_conversions Q_TEXTCONFIRM_Confirmation_required

/* TM_conversions::ENUM_Q_TEXTCONFIRM_no_confirmation */
#define ENUM_Q_TEXTCONFIRM_no_confirmation_TM_conversions Q_TEXTCONFIRM_No_confirmation_required

/* TM_conversions::ENUM_Q_TEXTCONFIRM_confirmation_SB */
#define ENUM_Q_TEXTCONFIRM_confirmation_SB_TM_conversions Q_TEXTCONFIRM_Confirmation_required_command_application_of_the_service_brake_when_display_end_condit

/* TM_conversions::ENUM_Q_TEXTCONFIRM_confirmation_EB */
#define ENUM_Q_TEXTCONFIRM_confirmation_EB_TM_conversions Q_TEXTCONFIRM_Confirmation_required_command_application_of_the_emergency_brake_when_display_end_cond

/* DATA::Packets::EVC_to_DMI::cDMI_Track_Description */
extern const DMI_Track_Description_T_DMI_Messages_EVC_to_DMI_Pkg cDMI_Track_Description_DATA_Packets_EVC_to_DMI;

/* TM_conversions::DIM_D_min */
#define DIM_D_min_TM_conversions 0

/* TM_conversions::DIM_D_max */
#define DIM_D_max_TM_conversions 32767

/* TM_conversions::INT_M_TRACKCOND_Air_tightness */
#define INT_M_TRACKCOND_Air_tightness_TM_conversions 5

/* TM_conversions::INT_M_TRACKCOND_Non_stopping_area */
#define INT_M_TRACKCOND_Non_stopping_area_TM_conversions 0

/* TM_conversions::INT_M_TRACKCOND_Powerless_section_Lower_pantograph */
#define INT_M_TRACKCOND_Powerless_section_Lower_pantograph_TM_conversions 3

/* TM_conversions::INT_M_TRACKCOND_Powerless_section_switch_off_the_main_power_switch */
#define INT_M_TRACKCOND_Powerless_section_switch_off_the_main_power_switch_TM_conversions 9

/* TM_conversions::INT_M_TRACKCOND_Radio_hole_stop_supervising_T_NVCONTACT */
#define INT_M_TRACKCOND_Radio_hole_stop_supervising_T_NVCONTACT_TM_conversions 4

/* TM_conversions::INT_M_TRACKCOND_Sound_horn */
#define INT_M_TRACKCOND_Sound_horn_TM_conversions 2

/* TM_conversions::INT_M_TRACKCOND_Switch_off_eddy_current_brake_for_emergency_brake */
#define INT_M_TRACKCOND_Switch_off_eddy_current_brake_for_emergency_brake_TM_conversions 10

/* TM_conversions::INT_M_TRACKCOND_Switch_off_eddy_current_brake_for_service_brake */
#define INT_M_TRACKCOND_Switch_off_eddy_current_brake_for_service_brake_TM_conversions 7

/* TM_conversions::INT_M_TRACKCOND_Switch_off_magnetic_shoe_brake */
#define INT_M_TRACKCOND_Switch_off_magnetic_shoe_brake_TM_conversions 8

/* TM_conversions::INT_M_TRACKCOND_Switch_off_regenerative_brake */
#define INT_M_TRACKCOND_Switch_off_regenerative_brake_TM_conversions 6

/* TM_conversions::INT_M_TRACKCOND_Tunnel_stopping_area */
#define INT_M_TRACKCOND_Tunnel_stopping_area_TM_conversions 1

/* TM_conversions::ENUM_M_TRACKCOND_Non_stopping_area */
#define ENUM_M_TRACKCOND_Non_stopping_area_TM_conversions M_TRACKCOND_Non_stopping_area_Initial_state_is_stopping_permitted

/* TM_conversions::ENUM_M_TRACKCOND_Tunnel_stopping_area */
#define ENUM_M_TRACKCOND_Tunnel_stopping_area_TM_conversions M_TRACKCOND_Tunnel_stopping_area_Initial_state_is_no_tunnel_stopping_area

/* TM_conversions::ENUM_M_TRACKCOND_Switch_off_regenerative_brake */
#define ENUM_M_TRACKCOND_Switch_off_regenerative_brake_TM_conversions M_TRACKCOND_Powerless_section_switch_off_the_main_power_switch_Initial_state_is_not_powerless_sectio

/* TM_conversions::ENUM_M_TRACKCOND_Switch_off_magnetic_shoe_brake */
#define ENUM_M_TRACKCOND_Switch_off_magnetic_shoe_brake_TM_conversions M_TRACKCOND_Switch_off_magnetic_shoe_brake_Initial_state_is_magnetic_shoe_brake_on

/* TM_conversions::ENUM_M_TRACKCOND_Switch_off_eddy_current_brake_for_service_brake */
#define ENUM_M_TRACKCOND_Switch_off_eddy_current_brake_for_service_brake_TM_conversions M_TRACKCOND_Switch_off_eddy_current_brake_for_service_brake_Initial_state_is_eddy_current_brake_for_

/* TM_conversions::ENUM_M_TRACKCOND_Switch_off_eddy_current_brake_for_emergency_brake */
#define ENUM_M_TRACKCOND_Switch_off_eddy_current_brake_for_emergency_brake_TM_conversions M_TRACKCOND_Switch_off_eddy_current_brake_for_emergency_brake_Initial_state_is_eddy_current_brake_fo

/* TM_conversions::ENUM_M_TRACKCOND_Sound_horn */
#define ENUM_M_TRACKCOND_Sound_horn_TM_conversions M_TRACKCOND_Sound_horn_Initial_state_is_is_no_request_for_sound_horn

/* TM_conversions::ENUM_M_TRACKCOND_Radio_hole_stop_supervising_T_NVCONTACT */
#define ENUM_M_TRACKCOND_Radio_hole_stop_supervising_T_NVCONTACT_TM_conversions M_TRACKCOND_Radio_hole_stop_supervising_T_NVCONTACT_Initial_state_is_supervise_T_NVCONTACT

/* TM_conversions::ENUM_M_TRACKCOND_Powerless_section_switch_off_the_main_power_switch */
#define ENUM_M_TRACKCOND_Powerless_section_switch_off_the_main_power_switch_TM_conversions M_TRACKCOND_Powerless_section_switch_off_the_main_power_switch_Initial_state_is_not_powerless_sectio

/* TM_conversions::ENUM_M_TRACKCOND_Powerless_section_Lower_pantograph */
#define ENUM_M_TRACKCOND_Powerless_section_Lower_pantograph_TM_conversions M_TRACKCOND_Powerless_section_Lower_pantograph_Initial_state_is_not_powerless_section

/* TM_conversions::ENUM_M_TRACKCOND_Air_tightness */
#define ENUM_M_TRACKCOND_Air_tightness_TM_conversions M_TRACKCOND_Switch_off_regenerative_brake_Initial_state_is_regenerative_brake_on

/* DATA::cDMI_Identifier_Request_int_array_size */
#define cDMI_Identifier_Request_int_array_size_DATA 261

/* DATA::cDMI_System_Version_int_array_size */
#define cDMI_System_Version_int_array_size_DATA 3

/* DATA::cDMI_Display_Control_int_array_size */
#define cDMI_Display_Control_int_array_size_DATA 3

/* INT_Icon_control_flag_T_show_icon_in_area */
#define INT_Icon_control_flag_T_show_icon_in_area 0

/* INT_Icon_control_flag_T_clear_area */
#define INT_Icon_control_flag_T_clear_area 1

/* INT_Icon_control_flag_T_show_icon_flashing_in_area */
#define INT_Icon_control_flag_T_show_icon_flashing_in_area 2

/* INT_Icon_control_flag_T_show_icon_with_yellow_flashing_frame_in_area */
#define INT_Icon_control_flag_T_show_icon_with_yellow_flashing_frame_in_area 3

/* ENUM_Icon_control_flag_T_show_icon_in_area */
#define ENUM_Icon_control_flag_T_show_icon_in_area show_icon_in_area_DMI_Types_Pkg

/* ENUM_Icon_control_flag_T_show_icon_with_yellow_flashing_frame_in_area */
#define ENUM_Icon_control_flag_T_show_icon_with_yellow_flashing_frame_in_area show_icon_with_yellow_flashing_frame_in_area_DMI_Types_Pkg

/* ENUM_Icon_control_flag_T_show_icon_flashing_in_area */
#define ENUM_Icon_control_flag_T_show_icon_flashing_in_area show_icon_flashing_in_area_DMI_Types_Pkg

/* ENUM_Icon_control_flag_T_clear_area */
#define ENUM_Icon_control_flag_T_clear_area clear_area_DMI_Types_Pkg

/* INT_Icon_group_T_level_symbol */
#define INT_Icon_group_T_level_symbol 0

/* INT_Icon_group_T_mode_symbols */
#define INT_Icon_group_T_mode_symbols 1

/* INT_Icon_group_T_navigation_symbols */
#define INT_Icon_group_T_navigation_symbols 5

/* INT_Icon_group_T_order_an_announcements_symbols */
#define INT_Icon_group_T_order_an_announcements_symbols 3

/* INT_Icon_group_T_planning_information_symbols */
#define INT_Icon_group_T_planning_information_symbols 4

/* INT_Icon_group_T_settings_symbols */
#define INT_Icon_group_T_settings_symbols 6

/* INT_Icon_group_T_status_symbols */
#define INT_Icon_group_T_status_symbols 2

/* ENUM_Icon_group_T_status_symbols */
#define ENUM_Icon_group_T_status_symbols status_symbols_DMI_Types_Pkg

/* ENUM_Icon_group_T_settings_symbols */
#define ENUM_Icon_group_T_settings_symbols settings_symbols_DMI_Types_Pkg

/* ENUM_Icon_group_T_planning_information_symbols */
#define ENUM_Icon_group_T_planning_information_symbols planning_information_symbols_DMI_Types_Pkg

/* ENUM_Icon_group_T_order_an_announcements_symbols */
#define ENUM_Icon_group_T_order_an_announcements_symbols order_an_announcements_symbols_DMI_Types_Pkg

/* ENUM_Icon_group_T_navigation_symbols */
#define ENUM_Icon_group_T_navigation_symbols navigation_symbols_DMI_Types_Pkg

/* ENUM_Icon_group_T_mode_symbols */
#define ENUM_Icon_group_T_mode_symbols mode_symbols_DMI_Types_Pkg

/* ENUM_Icon_group_T_level_symbol */
#define ENUM_Icon_group_T_level_symbol level_symbol_DMI_Types_Pkg

/* INT_Area_group_T_A */
#define INT_Area_group_T_A 0

/* INT_Area_group_T_B */
#define INT_Area_group_T_B 1

/* INT_Area_group_T_C */
#define INT_Area_group_T_C 2

/* INT_Area_group_T_D */
#define INT_Area_group_T_D 3

/* INT_Area_group_T_E */
#define INT_Area_group_T_E 4

/* INT_Area_group_T_F */
#define INT_Area_group_T_F 5

/* INT_Area_group_T_G */
#define INT_Area_group_T_G 6

/* INT_Area_group_T_H */
#define INT_Area_group_T_H 7

/* ENUM_Area_group_T_H */
#define ENUM_Area_group_T_H H_DMI_Types_Pkg

/* ENUM_Area_group_T_G */
#define ENUM_Area_group_T_G G_DMI_Types_Pkg

/* ENUM_Area_group_T_F */
#define ENUM_Area_group_T_F F_DMI_Types_Pkg

/* ENUM_Area_group_T_E */
#define ENUM_Area_group_T_E E_DMI_Types_Pkg

/* ENUM_Area_group_T_D */
#define ENUM_Area_group_T_D D_DMI_Types_Pkg

/* ENUM_Area_group_T_C */
#define ENUM_Area_group_T_C C_DMI_Types_Pkg

/* ENUM_Area_group_T_B */
#define ENUM_Area_group_T_B B_DMI_Types_Pkg

/* ENUM_Area_group_T_A */
#define ENUM_Area_group_T_A A_DMI_Types_Pkg

/* TM_conversions::ENUM_M_AXLELOADCAT_C4 */
#define ENUM_M_AXLELOADCAT_C4_TM_conversions M_AXLELOADCAT_C4

/* DATA::Packets::Bothways::cDMI_Driver_Identifier */
extern const DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg cDMI_Driver_Identifier_DATA_Packets_Bothways;

/* Messages::cDMI_EVC_int_array */
extern const DMI_to_EVC_Message_int_T_API_DMI_Pkg cDMI_EVC_int_array_Messages;

/* DATA::Packets::Bothways::cDMI_Driver_Identifier_int */
extern const DMI_Driver_Identifier_int_array_T_DATA cDMI_Driver_Identifier_int_DATA_Packets_Bothways;

/* DATA::cDMI_Driver_Identifier_int_array_size */
#define cDMI_Driver_Identifier_int_array_size_DATA 11

/* DATA::cDMI_Train_Running_Number_int_array_size */
#define cDMI_Train_Running_Number_int_array_size_DATA 3

/* DATA::cDMI_Adhesion_Factor_Data_int_array_size */
#define cDMI_Adhesion_Factor_Data_int_array_size_DATA 3

/* TM_conversions::INT_M_ADHESION_slippery_rail */
#define INT_M_ADHESION_slippery_rail_TM_conversions 0

/* TM_conversions::INT_M_ADHESION_no_slippery_rail */
#define INT_M_ADHESION_no_slippery_rail_TM_conversions 1

/* TM_conversions::ENUM_M_ADHESION_slippery_rail */
#define ENUM_M_ADHESION_slippery_rail_TM_conversions M_ADHESION_Slippery_rail

/* TM_conversions::ENUM_M_ADHESION_no_slippery_rail */
#define ENUM_M_ADHESION_no_slippery_rail_TM_conversions M_ADHESION_Non_slippery_rail

/* DATA::cDMI_Train_Data_int_array_size */
#define cDMI_Train_Data_int_array_size_DATA 9

/* TM_conversions::INT_NC_TRAIN_no_train_categroy */
#define INT_NC_TRAIN_no_train_categroy_TM_conversions 0

/* TM_conversions::INT_NC_TRAIN_freight_P */
#define INT_NC_TRAIN_freight_P_TM_conversions 1

/* TM_conversions::INT_NC_TRAIN_freight_G */
#define INT_NC_TRAIN_freight_G_TM_conversions 2

/* TM_conversions::INT_NC_TRAIN_passenger */
#define INT_NC_TRAIN_passenger_TM_conversions 3

/* TM_conversions::ENUM_NC_TRAIN_no_train_categroy */
#define ENUM_NC_TRAIN_no_train_categroy_TM_conversions NC_TRAIN_Train_does_not_belong_to_any_of_the_Other_International_Train_Category

/* TM_conversions::ENUM_NC_TRAIN_passenger */
#define ENUM_NC_TRAIN_passenger_TM_conversions NC_TRAIN_Passenger_train

/* TM_conversions::ENUM_NC_TRAIN_freight_G */
#define ENUM_NC_TRAIN_freight_G_TM_conversions NC_TRAIN_Freight_train_braked_in_G_position

/* TM_conversions::ENUM_NC_TRAIN_freight_P */
#define ENUM_NC_TRAIN_freight_P_TM_conversions NC_TRAIN_Freight_train_braked_in_P_position

/* TM_conversions::INT_M_AXLELOADCAT_A */
#define INT_M_AXLELOADCAT_A_TM_conversions 0

/* TM_conversions::INT_M_AXLELOADCAT_B1 */
#define INT_M_AXLELOADCAT_B1_TM_conversions 2

/* TM_conversions::INT_M_AXLELOADCAT_B2 */
#define INT_M_AXLELOADCAT_B2_TM_conversions 3

/* TM_conversions::INT_M_AXLELOADCAT_C2 */
#define INT_M_AXLELOADCAT_C2_TM_conversions 4

/* TM_conversions::INT_M_AXLELOADCAT_C3 */
#define INT_M_AXLELOADCAT_C3_TM_conversions 5

/* TM_conversions::INT_M_AXLELOADCAT_D2 */
#define INT_M_AXLELOADCAT_D2_TM_conversions 7

/* TM_conversions::INT_M_AXLELOADCAT_D3 */
#define INT_M_AXLELOADCAT_D3_TM_conversions 8

/* TM_conversions::INT_M_AXLELOADCAT_D4 */
#define INT_M_AXLELOADCAT_D4_TM_conversions 9

/* TM_conversions::INT_M_AXLELOADCAT_D4XL */
#define INT_M_AXLELOADCAT_D4XL_TM_conversions 10

/* TM_conversions::INT_M_AXLELOADCAT_E4 */
#define INT_M_AXLELOADCAT_E4_TM_conversions 11

/* TM_conversions::INT_M_AXLELOADCAT_E5 */
#define INT_M_AXLELOADCAT_E5_TM_conversions 12

/* TM_conversions::INT_M_AXLELOADCAT_HS17 */
#define INT_M_AXLELOADCAT_HS17_TM_conversions 1

/* TM_conversions::ENUM_M_AXLELOADCAT_E5 */
#define ENUM_M_AXLELOADCAT_E5_TM_conversions M_AXLELOADCAT_E5

/* TM_conversions::ENUM_M_AXLELOADCAT_HS17 */
#define ENUM_M_AXLELOADCAT_HS17_TM_conversions M_AXLELOADCAT_HS17

/* TM_conversions::ENUM_M_AXLELOADCAT_E4 */
#define ENUM_M_AXLELOADCAT_E4_TM_conversions M_AXLELOADCAT_E4

/* TM_conversions::ENUM_M_AXLELOADCAT_D4XL */
#define ENUM_M_AXLELOADCAT_D4XL_TM_conversions M_AXLELOADCAT_D4XL

/* TM_conversions::ENUM_M_AXLELOADCAT_D4 */
#define ENUM_M_AXLELOADCAT_D4_TM_conversions M_AXLELOADCAT_D4

/* TM_conversions::ENUM_M_AXLELOADCAT_D3 */
#define ENUM_M_AXLELOADCAT_D3_TM_conversions M_AXLELOADCAT_D3

/* TM_conversions::ENUM_M_AXLELOADCAT_D2 */
#define ENUM_M_AXLELOADCAT_D2_TM_conversions M_AXLELOADCAT_D2

/* TM_conversions::ENUM_M_AXLELOADCAT_C3 */
#define ENUM_M_AXLELOADCAT_C3_TM_conversions M_AXLELOADCAT_C3

/* TM_conversions::ENUM_M_AXLELOADCAT_C2 */
#define ENUM_M_AXLELOADCAT_C2_TM_conversions M_AXLELOADCAT_C2

/* TM_conversions::ENUM_M_AXLELOADCAT_B2 */
#define ENUM_M_AXLELOADCAT_B2_TM_conversions M_AXLELOADCAT_B2

/* TM_conversions::ENUM_M_AXLELOADCAT_B1 */
#define ENUM_M_AXLELOADCAT_B1_TM_conversions M_AXLELOADCAT_B1

/* TM_conversions::ENUM_M_AXLELOADCAT_A */
#define ENUM_M_AXLELOADCAT_A_TM_conversions M_AXLELOADCAT_A

/* TM_conversions::INT_M_AXLELOADCAT_C4 */
#define INT_M_AXLELOADCAT_C4_TM_conversions 6

/* TM_conversions::INT_M_AIRTIGHT_fitted */
#define INT_M_AIRTIGHT_fitted_TM_conversions 1

/* TM_conversions::INT_M_AIRTIGHT_not_fitted */
#define INT_M_AIRTIGHT_not_fitted_TM_conversions 0

/* TM_conversions::ENUM_M_AIRTIGHT_not_fitted */
#define ENUM_M_AIRTIGHT_not_fitted_TM_conversions M_AIRTIGHT_Not_fitted

/* TM_conversions::ENUM_M_AIRTIGHT_fitted */
#define ENUM_M_AIRTIGHT_fitted_TM_conversions M_AIRTIGHT_Fitted

/* TM_conversions::INT_M_LOADINGGAUGE_G1 */
#define INT_M_LOADINGGAUGE_G1_TM_conversions 1

/* TM_conversions::INT_M_LOADINGGAUGE_GA */
#define INT_M_LOADINGGAUGE_GA_TM_conversions 2

/* TM_conversions::INT_M_LOADINGGAUGE_GB */
#define INT_M_LOADINGGAUGE_GB_TM_conversions 3

/* TM_conversions::INT_M_LOADINGGAUGE_GC */
#define INT_M_LOADINGGAUGE_GC_TM_conversions 4

/* TM_conversions::INT_M_LOADINGGAUGE_does_not_fit */
#define INT_M_LOADINGGAUGE_does_not_fit_TM_conversions 0

/* TM_conversions::ENUM_M_LOADINGGAUGE_does_not_fit */
#define ENUM_M_LOADINGGAUGE_does_not_fit_TM_conversions M_LOADINGGAUGE_The_train_does_not_fit_to_any_of_the_interoperable_loading_gauge_profiles

/* TM_conversions::ENUM_M_LOADINGGAUGE_GC */
#define ENUM_M_LOADINGGAUGE_GC_TM_conversions M_LOADINGGAUGE_GC

/* TM_conversions::ENUM_M_LOADINGGAUGE_GB */
#define ENUM_M_LOADINGGAUGE_GB_TM_conversions M_LOADINGGAUGE_GB

/* TM_conversions::ENUM_M_LOADINGGAUGE_GA */
#define ENUM_M_LOADINGGAUGE_GA_TM_conversions M_LOADINGGAUGE_GA

/* TM_conversions::ENUM_M_LOADINGGAUGE_G1 */
#define ENUM_M_LOADINGGAUGE_G1_TM_conversions M_LOADINGGAUGE_G1

/* DATA::cDMI_Level_Data_int_array_size */
#define cDMI_Level_Data_int_array_size_DATA 4

/* TM_conversions::INT_M_LEVEL_Level_0 */
#define INT_M_LEVEL_Level_0_TM_conversions 0

/* TM_conversions::INT_M_LEVEL_Level_1 */
#define INT_M_LEVEL_Level_1_TM_conversions 2

/* TM_conversions::INT_M_LEVEL_Level_2 */
#define INT_M_LEVEL_Level_2_TM_conversions 3

/* TM_conversions::INT_M_LEVEL_Level_3 */
#define INT_M_LEVEL_Level_3_TM_conversions 4

/* TM_conversions::INT_M_LEVEL_Level_NTC */
#define INT_M_LEVEL_Level_NTC_TM_conversions 1

/* TM_conversions::ENUM_M_LEVEL_Level_NTC */
#define ENUM_M_LEVEL_Level_NTC_TM_conversions M_LEVEL_Level_NTC_specified_by_NID_NTC

/* TM_conversions::ENUM_M_LEVEL_Level_3 */
#define ENUM_M_LEVEL_Level_3_TM_conversions M_LEVEL_Level_3

/* TM_conversions::ENUM_M_LEVEL_Level_2 */
#define ENUM_M_LEVEL_Level_2_TM_conversions M_LEVEL_Level_2

/* TM_conversions::ENUM_M_LEVEL_Level_1 */
#define ENUM_M_LEVEL_Level_1_TM_conversions M_LEVEL_Level_1

/* TM_conversions::ENUM_M_LEVEL_Level_0 */
#define ENUM_M_LEVEL_Level_0_TM_conversions M_LEVEL_Level_0

/* DATA::Packets::DMI_to_EVC::cDMI_Status_int_array */
extern const DMI_Status_int_array_T_DATA cDMI_Status_int_array_DATA_Packets_DMI_to_EVC;

/* DATA::cDMI_Status_int_array_size */
#define cDMI_Status_int_array_size_DATA 4

/* ENUM_DMI_StatusSet_T_Running_state */
#define ENUM_DMI_StatusSet_T_Running_state Running_state_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_Starting_state */
#define ENUM_DMI_StatusSet_T_Starting_state Starting_state_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_Failure_state */
#define ENUM_DMI_StatusSet_T_Failure_state Failure_state_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_Running_not_active_state */
#define ENUM_DMI_StatusSet_T_Running_not_active_state Running_not_active_state_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_Train_Speed_Overflow */
#define ENUM_DMI_StatusSet_T_Train_Speed_Overflow Train_Speed_Overflow_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_Invalid_track_condition */
#define ENUM_DMI_StatusSet_T_Invalid_track_condition Invalid_track_condition_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_Invalid_predefined_text_message */
#define ENUM_DMI_StatusSet_T_Invalid_predefined_text_message Invalid_predefined_text_message_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_Invalid_text_message */
#define ENUM_DMI_StatusSet_T_Invalid_text_message Invalid_text_message_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_HW_warning_temp_reached */
#define ENUM_DMI_StatusSet_T_HW_warning_temp_reached HW_warning_temp_reached_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_TFT_OFF_temp_reached */
#define ENUM_DMI_StatusSet_T_TFT_OFF_temp_reached TFT_OFF_temp_reached_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_Device_OFF_temp_reached */
#define ENUM_DMI_StatusSet_T_Device_OFF_temp_reached Device_OFF_temp_reached_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_Over_temperature */
#define ENUM_DMI_StatusSet_T_Over_temperature Over_temperature_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_Backlight_on_off */
#define ENUM_DMI_StatusSet_T_Backlight_on_off Backlight_on_off_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_FAN_blocked */
#define ENUM_DMI_StatusSet_T_FAN_blocked FAN_blocked_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_Power_supply_key_switch_off */
#define ENUM_DMI_StatusSet_T_Power_supply_key_switch_off Power_supply_key_switch_off_DMI_Types_Pkg

/* ENUM_DMI_StatusSet_T_Watchdog_not_running */
#define ENUM_DMI_StatusSet_T_Watchdog_not_running Watchdog_not_running_DMI_Types_Pkg

/* INT_DMI_StatusSet_T_Running_state */
#define INT_DMI_StatusSet_T_Running_state 0

/* INT_DMI_StatusSet_T_Watchdog_not_running */
#define INT_DMI_StatusSet_T_Watchdog_not_running 16

/* INT_DMI_StatusSet_T_Power_supply_key_switch_off */
#define INT_DMI_StatusSet_T_Power_supply_key_switch_off 15

/* INT_DMI_StatusSet_T_FAN_blocked */
#define INT_DMI_StatusSet_T_FAN_blocked 14

/* INT_DMI_StatusSet_T_Backlight_on_off */
#define INT_DMI_StatusSet_T_Backlight_on_off 12

/* INT_DMI_StatusSet_T_Over_temperature */
#define INT_DMI_StatusSet_T_Over_temperature 11

/* INT_DMI_StatusSet_T_Device_OFF_temp_reached */
#define INT_DMI_StatusSet_T_Device_OFF_temp_reached 10

/* INT_DMI_StatusSet_T_TFT_OFF_temp_reached */
#define INT_DMI_StatusSet_T_TFT_OFF_temp_reached 9

/* INT_DMI_StatusSet_T_HW_warning_temp_reached */
#define INT_DMI_StatusSet_T_HW_warning_temp_reached 8

/* INT_DMI_StatusSet_T_Invalid_text_message */
#define INT_DMI_StatusSet_T_Invalid_text_message 7

/* INT_DMI_StatusSet_T_Invalid_predefined_text_message */
#define INT_DMI_StatusSet_T_Invalid_predefined_text_message 6

/* INT_DMI_StatusSet_T_Invalid_track_condition */
#define INT_DMI_StatusSet_T_Invalid_track_condition 5

/* INT_DMI_StatusSet_T_Train_Speed_Overflow */
#define INT_DMI_StatusSet_T_Train_Speed_Overflow 4

/* INT_DMI_StatusSet_T_Running_not_active_state */
#define INT_DMI_StatusSet_T_Running_not_active_state 3

/* INT_DMI_StatusSet_T_Failure_state */
#define INT_DMI_StatusSet_T_Failure_state 2

/* INT_DMI_StatusSet_T_Starting_state */
#define INT_DMI_StatusSet_T_Starting_state 1

/* DATA::Packets::DMI_to_EVC::cDMI_Identifier_int_array */
extern const DMI_Identifier_int_array_T_DATA cDMI_Identifier_int_array_DATA_Packets_DMI_to_EVC;

/* DATA::cDMI_Identifier_int_array_size */
#define cDMI_Identifier_int_array_size_DATA 261

/* ENUM_DMI_DMI_Identifier_T_DMI_1 */
#define ENUM_DMI_DMI_Identifier_T_DMI_1 DMI_1_DMI_Types_Pkg

/* ENUM_DMI_DMI_Identifier_T_DMI_2 */
#define ENUM_DMI_DMI_Identifier_T_DMI_2 DMI_2_DMI_Types_Pkg

/* INT_DMI_DMI_Identifier_T_DMI_1 */
#define INT_DMI_DMI_Identifier_T_DMI_1 0

/* INT_DMI_DMI_Identifier_T_DMI_2 */
#define INT_DMI_DMI_Identifier_T_DMI_2 1

/* ENUM_DMI_Cabin_Identifier_T_cabin_A */
#define ENUM_DMI_Cabin_Identifier_T_cabin_A cabin_A_DMI_Types_Pkg

/* ENUM_DMI_Cabin_Identifier_T_cabin_B */
#define ENUM_DMI_Cabin_Identifier_T_cabin_B cabin_B_DMI_Types_Pkg

/* INT_DMI_Cabin_Identifier_T_cabin_A */
#define INT_DMI_Cabin_Identifier_T_cabin_A 0

/* INT_DMI_Cabin_Identifier_T_cabin_B */
#define INT_DMI_Cabin_Identifier_T_cabin_B 1

/* TM_conversions::INT_M_VERSION_previous_M */
#define INT_M_VERSION_previous_M_TM_conversions 15

/* TM_conversions::INT_M_VERSION_1_0 */
#define INT_M_VERSION_1_0_TM_conversions 16

/* TM_conversions::INT_M_VERSION_1_1 */
#define INT_M_VERSION_1_1_TM_conversions 17

/* TM_conversions::INT_M_VERSION_2_0 */
#define INT_M_VERSION_2_0_TM_conversions 32

/* TM_conversions::ENUM_M_VERSION_Previous_versions */
#define ENUM_M_VERSION_Previous_versions_TM_conversions M_VERSION_Previous_versions_according_to_e_g_EEIG_SRS_and_UIC_A200_SRS

/* TM_conversions::ENUM_M_VERSION_Version_2_0 */
#define ENUM_M_VERSION_Version_2_0_TM_conversions M_VERSION_Version_2_0_introduced_in_SRS_3_3_0

/* TM_conversions::ENUM_M_VERSION_Version_1_1 */
#define ENUM_M_VERSION_Version_1_1_TM_conversions M_VERSION_Version_1_1_introduced_in_SRS_3_3_0

/* TM_conversions::ENUM_M_VERSION_Version_1_0 */
#define ENUM_M_VERSION_Version_1_0_TM_conversions M_VERSION_Version_1_0_introduced_in_SRS_1_2_0_and_reused_in_SRSs_2_0_0_and_2_2_2_and_2_3_0

/* DATA::Packets::DMI_to_EVC::cDMI_Driver_Reqest_int_array */
extern const DMI_Driver_Request_int_array_T_DATA cDMI_Driver_Reqest_int_array_DATA_Packets_DMI_to_EVC;

/* DATA::cDMI_Driver_Reqest_int_array_size */
#define cDMI_Driver_Reqest_int_array_size_DATA 3

/* ENUM_DMI_Request_T_End_of_NTC_data_entry */
#define ENUM_DMI_Request_T_End_of_NTC_data_entry End_of_NTC_data_entry_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Hide_tunnel_stopping_information */
#define ENUM_DMI_Request_T_Hide_tunnel_stopping_information Hide_tunnel_stopping_information_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Language_changed */
#define ENUM_DMI_Request_T_Language_changed Language_changed_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Level_entry_request */
#define ENUM_DMI_Request_T_Level_entry_request Level_entry_request_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Maintain_shunting */
#define ENUM_DMI_Request_T_Maintain_shunting Maintain_shunting_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Non_leading */
#define ENUM_DMI_Request_T_Non_leading Non_leading_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Non_leading_exit */
#define ENUM_DMI_Request_T_Non_leading_exit Non_leading_exit_DMI_Types_Pkg

/* ENUM_DMI_Request_T_NTC_data_entry_request */
#define ENUM_DMI_Request_T_NTC_data_entry_request NTC_data_entry_request_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Override_EOA */
#define ENUM_DMI_Request_T_Override_EOA Override_EOA_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Override_route_unsuitability */
#define ENUM_DMI_Request_T_Override_route_unsuitability Override_route_unsuitability_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Radio_network_entry_aborted */
#define ENUM_DMI_Request_T_Radio_network_entry_aborted Radio_network_entry_aborted_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Remove_VBC_request */
#define ENUM_DMI_Request_T_Remove_VBC_request Remove_VBC_request_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Request_for_Adhesion_factor_data */
#define ENUM_DMI_Request_T_Request_for_Adhesion_factor_data Request_for_Adhesion_factor_data_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Request_for_radio_network_entry */
#define ENUM_DMI_Request_T_Request_for_radio_network_entry Request_for_radio_network_entry_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Request_for_SR_data */
#define ENUM_DMI_Request_T_Request_for_SR_data Request_for_SR_data_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Request_for_switching_train_data_entry */
#define ENUM_DMI_Request_T_Request_for_switching_train_data_entry Request_for_switching_train_data_entry_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Request_for_system_version */
#define ENUM_DMI_Request_T_Request_for_system_version Request_for_system_version_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Request_for_train_data */
#define ENUM_DMI_Request_T_Request_for_train_data Request_for_train_data_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Request_for_train_data_view */
#define ENUM_DMI_Request_T_Request_for_train_data_view Request_for_train_data_view_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Request_isolation */
#define ENUM_DMI_Request_T_Request_isolation Request_isolation_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Request_to_contact_last_known_RBC */
#define ENUM_DMI_Request_T_Request_to_contact_last_known_RBC Request_to_contact_last_known_RBC_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Request_to_hide_geographical_information */
#define ENUM_DMI_Request_T_Request_to_hide_geographical_information Request_to_hide_geographical_information_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Request_to_hide_supervision_data */
#define ENUM_DMI_Request_T_Request_to_hide_supervision_data Request_to_hide_supervision_data_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Train_running_number_entry_aborted */
#define ENUM_DMI_Request_T_Train_running_number_entry_aborted Train_running_number_entry_aborted_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Train_data_entry_aborted */
#define ENUM_DMI_Request_T_Train_data_entry_aborted Train_data_entry_aborted_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Track_Ahead_Free_is_validated */
#define ENUM_DMI_Request_T_Track_Ahead_Free_is_validated Track_Ahead_Free_is_validated_DMI_Types_Pkg

/* ENUM_DMI_Request_T_The_Train_Integrity_request */
#define ENUM_DMI_Request_T_The_Train_Integrity_request The_Train_Integrity_request_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Start_of_mission */
#define ENUM_DMI_Request_T_Start_of_mission Start_of_mission_DMI_Types_Pkg

/* ENUM_DMI_Request_T_SR_data_entry_aborted */
#define ENUM_DMI_Request_T_SR_data_entry_aborted SR_data_entry_aborted_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Shunting_exit */
#define ENUM_DMI_Request_T_Shunting_exit Shunting_exit_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Shunting_entry */
#define ENUM_DMI_Request_T_Shunting_entry Shunting_entry_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Show_tunnel_stopping_information */
#define ENUM_DMI_Request_T_Show_tunnel_stopping_information Show_tunnel_stopping_information_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Set_VBC_request */
#define ENUM_DMI_Request_T_Set_VBC_request Set_VBC_request_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Scroll_text_up */
#define ENUM_DMI_Request_T_Scroll_text_up Scroll_text_up_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Scroll_text_down */
#define ENUM_DMI_Request_T_Scroll_text_down Scroll_text_down_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Request_to_use_short_number */
#define ENUM_DMI_Request_T_Request_to_use_short_number Request_to_use_short_number_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Request_to_show_supervision_data */
#define ENUM_DMI_Request_T_Request_to_show_supervision_data Request_to_show_supervision_data_DMI_Types_Pkg

/* ENUM_DMI_Request_T_Request_to_show_geographical_position */
#define ENUM_DMI_Request_T_Request_to_show_geographical_position Request_to_show_geographical_position_DMI_Types_Pkg

/* INT_DMI_Request_T_End_of_NTC_data_entry */
#define INT_DMI_Request_T_End_of_NTC_data_entry 37

/* INT_DMI_Request_T_Request_to_show_geographical_position */
#define INT_DMI_Request_T_Request_to_show_geographical_position 16

/* INT_DMI_Request_T_Request_to_show_supervision_data */
#define INT_DMI_Request_T_Request_to_show_supervision_data 23

/* INT_DMI_Request_T_Request_to_use_short_number */
#define INT_DMI_Request_T_Request_to_use_short_number 28

/* INT_DMI_Request_T_Scroll_text_down */
#define INT_DMI_Request_T_Scroll_text_down 26

/* INT_DMI_Request_T_Scroll_text_up */
#define INT_DMI_Request_T_Scroll_text_up 25

/* INT_DMI_Request_T_Set_VBC_request */
#define INT_DMI_Request_T_Set_VBC_request 32

/* INT_DMI_Request_T_Show_tunnel_stopping_information */
#define INT_DMI_Request_T_Show_tunnel_stopping_information 34

/* INT_DMI_Request_T_Shunting_entry */
#define INT_DMI_Request_T_Shunting_entry 1

/* INT_DMI_Request_T_Shunting_exit */
#define INT_DMI_Request_T_Shunting_exit 2

/* INT_DMI_Request_T_SR_data_entry_aborted */
#define INT_DMI_Request_T_SR_data_entry_aborted 20

/* INT_DMI_Request_T_Start_of_mission */
#define INT_DMI_Request_T_Start_of_mission 0

/* INT_DMI_Request_T_The_Train_Integrity_request */
#define INT_DMI_Request_T_The_Train_Integrity_request 31

/* INT_DMI_Request_T_Track_Ahead_Free_is_validated */
#define INT_DMI_Request_T_Track_Ahead_Free_is_validated 30

/* INT_DMI_Request_T_Train_data_entry_aborted */
#define INT_DMI_Request_T_Train_data_entry_aborted 18

/* INT_DMI_Request_T_Train_running_number_entry_aborted */
#define INT_DMI_Request_T_Train_running_number_entry_aborted 19

/* INT_DMI_Request_T_Request_to_hide_supervision_data */
#define INT_DMI_Request_T_Request_to_hide_supervision_data 24

/* INT_DMI_Request_T_Request_to_hide_geographical_information */
#define INT_DMI_Request_T_Request_to_hide_geographical_information 22

/* INT_DMI_Request_T_Request_to_contact_last_known_RBC */
#define INT_DMI_Request_T_Request_to_contact_last_known_RBC 27

/* INT_DMI_Request_T_Request_isolation */
#define INT_DMI_Request_T_Request_isolation 29

/* INT_DMI_Request_T_Request_for_train_data_view */
#define INT_DMI_Request_T_Request_for_train_data_view 15

/* INT_DMI_Request_T_Request_for_train_data */
#define INT_DMI_Request_T_Request_for_train_data 10

/* INT_DMI_Request_T_Request_for_system_version */
#define INT_DMI_Request_T_Request_for_system_version 13

/* INT_DMI_Request_T_Request_for_switching_train_data_entry */
#define INT_DMI_Request_T_Request_for_switching_train_data_entry 14

/* INT_DMI_Request_T_Request_for_SR_data */
#define INT_DMI_Request_T_Request_for_SR_data 12

/* INT_DMI_Request_T_Request_for_radio_network_entry */
#define INT_DMI_Request_T_Request_for_radio_network_entry 9

/* INT_DMI_Request_T_Request_for_Adhesion_factor_data */
#define INT_DMI_Request_T_Request_for_Adhesion_factor_data 11

/* INT_DMI_Request_T_Remove_VBC_request */
#define INT_DMI_Request_T_Remove_VBC_request 33

/* INT_DMI_Request_T_Radio_network_entry_aborted */
#define INT_DMI_Request_T_Radio_network_entry_aborted 21

/* INT_DMI_Request_T_Override_route_unsuitability */
#define INT_DMI_Request_T_Override_route_unsuitability 8

/* INT_DMI_Request_T_Override_EOA */
#define INT_DMI_Request_T_Override_EOA 7

/* INT_DMI_Request_T_NTC_data_entry_request */
#define INT_DMI_Request_T_NTC_data_entry_request 36

/* INT_DMI_Request_T_Non_leading_exit */
#define INT_DMI_Request_T_Non_leading_exit 4

/* INT_DMI_Request_T_Non_leading */
#define INT_DMI_Request_T_Non_leading 3

/* INT_DMI_Request_T_Maintain_shunting */
#define INT_DMI_Request_T_Maintain_shunting 5

/* INT_DMI_Request_T_Level_entry_request */
#define INT_DMI_Request_T_Level_entry_request 6

/* INT_DMI_Request_T_Language_changed */
#define INT_DMI_Request_T_Language_changed 17

/* INT_DMI_Request_T_Hide_tunnel_stopping_information */
#define INT_DMI_Request_T_Hide_tunnel_stopping_information 35

/* DATA::Packets::DMI_to_EVC::cDMI_Radio_Net_Data_int_array */
extern const DMI_Radio_Net_Data_int_array_T_DATA cDMI_Radio_Net_Data_int_array_DATA_Packets_DMI_to_EVC;

/* DATA::cDMI_Radio_Net_Data_int_array_size */
#define cDMI_Radio_Net_Data_int_array_size_DATA 2

/* DATA::Packets::DMI_to_EVC::cDMI_Text_Message_Ack_int_array */
extern const DMI_Text_Message_Ack_int_array_T_DATA cDMI_Text_Message_Ack_int_array_DATA_Packets_DMI_to_EVC;

/* DATA::cDMI_Text_Message_Ack_int_array_size */
#define cDMI_Text_Message_Ack_int_array_size_DATA 4

/* DATA::Packets::DMI_to_EVC::cDMI_Train_Data_Ack_int_array */
extern const DMI_Train_Data_Ack_int_array_T_DATA cDMI_Train_Data_Ack_int_array_DATA_Packets_DMI_to_EVC;

/* DATA::cDMI_Train_Data_Ack_int_array_size */
#define cDMI_Train_Data_Ack_int_array_size_DATA 3

/* DATA::Packets::DMI_to_EVC::cDMI_Icon_Ack_int_array */
extern const DMI_Icon_Ack_int_array_T_DATA cDMI_Icon_Ack_int_array_DATA_Packets_DMI_to_EVC;

/* DATA::cDMI_Icon_Ack_int_array_size */
#define cDMI_Icon_Ack_int_array_size_DATA 3

/* DMI_Types_Pkg::cDMI_maxLevels */
#define cDMI_maxLevels_DMI_Types_Pkg 32

/* DMI_Types_Pkg::cDMI_maxGradientProfile */
#define cDMI_maxGradientProfile_DMI_Types_Pkg 32

/* DMI_Types_Pkg::cDMI_maxSpeedProfile */
#define cDMI_maxSpeedProfile_DMI_Types_Pkg 32

/* DMI_Types_Pkg::cDMI_maxTrackCondProfile */
#define cDMI_maxTrackCondProfile_DMI_Types_Pkg 32

/* DMI_Types_Pkg::cDMI_charsInText */
#define cDMI_charsInText_DMI_Types_Pkg 255

/* trainData_Types_pkg::cEmptyTrainData */
extern const trainData_T_TIU_Types_Pkg cEmptyTrainData_trainData_Types_pkg;

/* DMI_Control_Pkg::DimButtonEnabler */
#define DimButtonEnabler_DMI_Control_Pkg 30

/* DMI_Control_Pkg::MAX_SPEEDPROFILES_DMI */
#define MAX_SPEEDPROFILES_DMI_DMI_Control_Pkg 10

/* DMI_Control_Pkg::InitText1 */
extern const array_int_9 InitText1_DMI_Control_Pkg;

/* DMI_Control_Pkg::MAXTextLength */
#define MAXTextLength_DMI_Control_Pkg cDiverIdentifierLength_DMI_Messages_Bothways_Pkg

/* DMI_Messages_Bothways_Pkg::cDiverIdentifierLength */
#define cDiverIdentifierLength_DMI_Messages_Bothways_Pkg 9

/* DMI_Control_Pkg::MaxNumDisplayMsg */
#define MaxNumDisplayMsg_DMI_Control_Pkg 5

/* DMI_Control_Pkg::cDMI_Icons_Ack */
extern const DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg cDMI_Icons_Ack_DMI_Control_Pkg;

/* DMI_Control_Pkg::cD_GradientsValue */
extern const array_real_12 cD_GradientsValue_DMI_Control_Pkg;

/* DMI_Control_Pkg::MAX_GRADIENTS */
#define MAX_GRADIENTS_DMI_Control_Pkg 12

/* API_DMI_Pkg::cMessage_EVC_to_DMI_size */
#define cMessage_EVC_to_DMI_size_API_DMI_Pkg 999

/* API_DMI_Pkg::cMessage_DMI_to_EVC_size */
#define cMessage_DMI_to_EVC_size_API_DMI_Pkg 311

/* EnvSim::Internal::cEMPTY_TIU2DMI */
extern const TIU_Input_msg_API_TIU_Pkg cEMPTY_TIU2DMI_EnvSim_Internal;

/* Packet_TrainTypes_Pkg::cMaxNationalSystem */
#define cMaxNationalSystem_Packet_TrainTypes_Pkg 5

/* Packet_TrainTypes_Pkg::cMaxTractionIdentity */
#define cMaxTractionIdentity_Packet_TrainTypes_Pkg 4

#endif /* _KCG_CONSTS_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_consts.h
** Generation date: 2015-11-20T19:43:30
*************************************************************$ */


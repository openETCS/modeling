/* $************* KCG Version 6.4 beta5 (build i13) *************
** Command: kcg64.exe -config R:/fork/modeling/model/Scade/System/OBU_for_ITEA-Review/PositionSimulation/Testbench_Suite/KCG_Output/config.txt
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */
#ifndef _DMI_Controller_DMI_Control_Pkg_H_
#define _DMI_Controller_DMI_Control_Pkg_H_

#include "kcg_types.h"
#include "CheckElem_iterator_DMI_Control_Pkg.h"
#include "Set_DriverID_packet_DMI_Control_Pkg_Sub_func.h"
#include "Set_TrainRN_packet_DMI_Control_Pkg_Sub_func.h"
#include "Set_IconAck_DMI_Control_Pkg_Sub_func.h"
#include "LevelSymbolToIndex_DMI_Control_Pkg_Sub_func.h"
#include "RBC_SymbolsToIndex_DMI_Control_Pkg_Sub_func.h"
#include "ModeSymbolToIndex_B7_DMI_Control_Pkg_Sub_func.h"
#include "Set_DMI_IDENTIFIER_DMI_Control_Pkg_Sub_func.h"
#include "CalculateNumber_DMI_Control_Pkg_Sub_func_Keyboard.h"
#include "AddDigit_DMI_Control_Pkg_Sub_func_Keyboard.h"
#include "RmDigit_DMI_Control_Pkg_Sub_func_Keyboard.h"
#include "DMI_entry_requested_DMI_Control_Pkg_Sub_func_EntryRequest.h"
#include "WindowReqToMask_DMI_Control_Pkg_Sub_func_EntryRequest.h"
#include "DMI_menu_req_To_ButtonEnabler_DMI_Control_Pkg_Sub_func_MenuRequest.h"
#include "TrainDataInfo_Adapter_DMI_Control_Pkg_Sub_func_TrainData.h"
#include "DigitSpeedManager_DMI_Control_Pkg_Sub_func_Speed.h"
#include "Find_Q_Text_iterator_DMI_Control_Pkg_Utils.h"
#include "HourGlassAnimation_DMI_Control_Pkg_Sub_func.h"
#include "DMI_status_DMI_Control_Pkg_Sub_func.h"
#include "DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget.h"
#include "FlashingOperator_DMI_Control_Pkg_Utils.h"
#include "Counter_pwlinear_int.h"
#include "FIFO_Integer_DMI_Control_Pkg_Utils_5.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* DMI_Control_Pkg::DMI_Controller::TrainPosition_toDisplay */ TrainPosition_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::ETCS_LevelSymbol_toDisplay */ ETCS_LevelSymbol_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::LevelSymbolVisibility_toDisplay */ LevelSymbolVisibility_toDisplay;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::TrainSpeed_toDisplay */ TrainSpeed_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::TrainDataWindowVisibility_toDisplay */ TrainDataWindowVisibility_toDisplay;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::SpeedDigitOne_toDisplay */ SpeedDigitOne_toDisplay;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::SpeedDigitTwo_toDisplay */ SpeedDigitTwo_toDisplay;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::SpeedDigitThree_toDisplay */ SpeedDigitThree_toDisplay;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::SpeedTarget_toDisplay */ SpeedTarget_toDisplay;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::SpeedPermitted_toDisplay */ SpeedPermitted_toDisplay;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::SpeedRelease_toDisplay */ SpeedRelease_toDisplay;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::SpeedIntervention_toDisplay */ SpeedIntervention_toDisplay;
  array_real_12 /* DMI_Control_Pkg::DMI_Controller::GradientsStart_toDisplay */ GradientsStart_toDisplay;
  array_real_12 /* DMI_Control_Pkg::DMI_Controller::GradientsEnd_toDisplay */ GradientsEnd_toDisplay;
  array_real_12 /* DMI_Control_Pkg::DMI_Controller::GradientsValue_toDisplay */ GradientsValue_toDisplay;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::DistanceToTarget_toDisplay */ DistanceToTarget_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::DistanceToTargetVisibilityDigital_toDisplay */ DistanceToTargetVisibilityDigital_toDisplay;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::InterpolatedDistanceToTarget_toDisplay */ InterpolatedDistanceToTarget_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::StatusSymbolBrake_toDisplay */ StatusSymbolBrake_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::PointerColor_toDisplay */ PointerColor_toDisplay;
  array_int_9 /* DMI_Control_Pkg::DMI_Controller::DriverID_Display_toDisplay */ DriverID_Display_toDisplay;
  array_int_9 /* DMI_Control_Pkg::DMI_Controller::TrainRN_Display_toDisplay */ TrainRN_Display_toDisplay;
  array_bool_15 /* DMI_Control_Pkg::DMI_Controller::window_mask_visibility__toDisplay */ window_mask_visibility__toDisplay;
  array_int_30 /* DMI_Control_Pkg::DMI_Controller::ArrayButtonsEnabler_toDisplay */ ArrayButtonsEnabler_toDisplay;
  DMI_Identifier_T_DMI_Messages_DMI_to_EVC_Pkg /* DMI_Control_Pkg::DMI_Controller::DMI_identifier */ DMI_identifier;
  DMI_Driver_Identifier_T_DMI_Messages_Bothways_Pkg /* DMI_Control_Pkg::DMI_Controller::DMI_driver_identifier */ DMI_driver_identifier;
  DMI_Train_Running_Number_T_DMI_Messages_Bothways_Pkg /* DMI_Control_Pkg::DMI_Controller::DMI_train_running_number_id */ DMI_train_running_number_id;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::CloseButtonEnabler_toDisplay */ CloseButtonEnabler_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::StatusSymbolVisibility_toDisplay */ StatusSymbolVisibility_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::RBC_status_symbol_toDisplay */ RBC_status_symbol_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::DistanceToTargetBarVisibility_toDisplay */ DistanceToTargetBarVisibility_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::ModeSymbol_toDisplay */ ModeSymbol_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::ModeSymbolVisibility_toDisplay */ ModeSymbolVisibility_toDisplay;
  DMI_Driver_Request_T_DMI_Messages_DMI_to_EVC_Pkg /* DMI_Control_Pkg::DMI_Controller::DMI_driver_request */ DMI_driver_request;
  array_int_5 /* DMI_Control_Pkg::DMI_Controller::ArrayOfMsgIndex_toDisplay */ ArrayOfMsgIndex_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::trainCategoryIndex_toDisplay */ trainCategoryIndex_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::trainAxleloadIndex_toDisplay */ trainAxleloadIndex_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::trainAirtightIndex_toDisplay */ trainAirtightIndex_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::trainLoadingGougeIndex_toDisplay */ trainLoadingGougeIndex_toDisplay;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::trainLenght_toDisplay */ trainLenght_toDisplay;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::trainBrakePerc_toDisplay */ trainBrakePerc_toDisplay;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::trainMaxspeed_toDisplay */ trainMaxspeed_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::traindataValidWinVisibility_toDisplay */ traindataValidWinVisibility_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::traindataYesNoIndex_toDisplay */ traindataYesNoIndex_toDisplay;
  DMI_Train_Data_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* DMI_Control_Pkg::DMI_Controller::DMI_train_data_ack */ DMI_train_data_ack;
  DMI_Status_T_DMI_Messages_DMI_to_EVC_Pkg /* DMI_Control_Pkg::DMI_Controller::DMI_status_report */ DMI_status_report;
  DMI_Text_Message_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* DMI_Control_Pkg::DMI_Controller::DMI_text_message_ack */ DMI_text_message_ack;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::textMsgEnable_toDisplay */ textMsgEnable_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::yellowBorderMsg_toDisplay */ yellowBorderMsg_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::closeButtonIndex_toDisplay */ closeButtonIndex_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::openDesk_toDisplay */ openDesk_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::yellowBorderBrakeSymbol_toDisplay */ yellowBorderBrakeSymbol_toDisplay;
  DMI_Icon_Ack_T_DMI_Messages_DMI_to_EVC_Pkg /* DMI_Control_Pkg::DMI_Controller::DMI_icons_ack */ DMI_icons_ack;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::yellowBorderC1Area_toDisplay */ yellowBorderC1Area_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::iconGroupIndex_toDisplay */ iconGroupIndex_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::levelSymbolAnnouncementIndex_toDisplay */ levelSymbolAnnouncementIndex_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::modeSymbolAnnouncementIndex_toDisplay */ modeSymbolAnnouncementIndex_toDisplay;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::hourGlassCounter_toDisplay */ hourGlassCounter_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::hourGlassVisibility_toDisplay */ hourGlassVisibility_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::VpermColor_toDisplay */ VpermColor_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::VreleaseColor_toDisplay */ VreleaseColor_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::VtargetColor_toDisplay */ VtargetColor_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::Vtarget_permVisibility_toDisplay */ Vtarget_permVisibility_toDisplay;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::Vinterv_Visibility_toDisplay */ Vinterv_Visibility_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::vtarget_permColor_toDisplay */ vtarget_permColor_toDisplay;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::Vinterv_Color_toDisplay */ Vinterv_Color_toDisplay;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init6;
  kcg_bool init5;
  kcg_bool init4;
  kcg_bool init3;
  kcg_bool init2;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  SSM_ST_HandshakeSM_CabinSM_DeskIsOpen /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM */ HandshakeSM_state_nxt_CabinSM_DeskIsOpen;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IfBlock1::then::_L35 */ _L35_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_IfBlock1;
  DMI_Train_Data_T_DMI_Messages_Bothways_Pkg /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::TrainDataSM::Incoming_TrainDataValues::_L3 */ _L3_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_TrainDataSM_Incoming_TrainDataValues;
  SSM_ST_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM::MainMenu::WindowsSM */ WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive_WindowsSM_MainMenu;
  SSM_ST_WindowsSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::WindowsSM */ WindowsSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  SSM_ST_TrainDataSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::TrainDataSM */ TrainDataSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  SSM_ST_YesNoTrainDataValidationSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::YesNoTrainDataValidationSM */ YesNoTrainDataValidationSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  SSM_ST_IconSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::IconSM */ IconSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  SSM_ST_SymbolsAcknowledgmentSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SymbolsAcknowledgmentSM */ SymbolsAcknowledgmentSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  SSM_ST_SM17_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM17 */ SM17_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  SSM_ST_HourGlassSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::HourGlassSM */ HourGlassSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  SSM_ST_SM11_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SM11 */ SM11_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  SSM_ST_SpeedSupervisionSM_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::SpeedSupervisionSM */ SpeedSupervisionSM_state_nxt_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::HideMainmenu */ HideMainmenu_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  DMI_List_Entry_Request_T_DMI_Types_Pkg /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::InternalWindowReq */ InternalWindowReq_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::flashingVariable */ flashingVariable_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::YellowBorder_C9 */ YellowBorder_C9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  Area_group_T_DMI_Types_Pkg /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::dmiCommand_NID_AreaGroup */ dmiCommand_NID_AreaGroup_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::YellowBorder_C1 */ YellowBorder_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::NID_C1 */ NID_C1_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::NID_c9 */ NID_c9_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L159 */ _L159_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  array_bool_15 /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L160 */ _L160_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L161 */ _L161_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L162 */ _L162_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  array_int_30 /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L184 */ _L184_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L397 */ _L397_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L398 */ _L398_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L393 */ _L393_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L394 */ _L394_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L386 */ _L386_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L387 */ _L387_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L388 */ _L388_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L389 */ _L389_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L378 */ _L378_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L379 */ _L379_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L380 */ _L380_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_real /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L381 */ _L381_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_bool /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L368 */ _L368_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  kcg_int /* DMI_Control_Pkg::DMI_Controller::CabinSM::DeskIsOpen::HandshakeSM::CommunicationActive::_L369 */ _L369_CabinSM_DeskIsOpen_HandshakeSM_CommunicationActive;
  SSM_ST_CabinSM /* DMI_Control_Pkg::DMI_Controller::CabinSM */ CabinSM_state_nxt;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_HourGlassAnimation_DMI_Control_Pkg_Sub_func /* HourGlassAnimation */ Context_HourGlassAnimation;
  outC_FlashingOperator_DMI_Control_Pkg_Utils /* 9 */ Context_9;
  outC_FIFO_Integer_DMI_Control_Pkg_Utils_5 /* 4 */ Context_4;
  outC_FlashingOperator_DMI_Control_Pkg_Utils /* 10 */ Context_10;
  outC_FIFO_Integer_DMI_Control_Pkg_Utils_5 /* 3 */ Context_3;
  outC_DistanceToTargetManager_DMI_Control_Pkg_Sub_func_DistanceToTarget /* 5 */ _1_Context_5;
  outC_DMI_status_DMI_Control_Pkg_Sub_func /* 5 */ Context_5;
  outC_Counter_pwlinear_int /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_DMI_Controller_DMI_Control_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* DMI_Control_Pkg::DMI_Controller */
extern void DMI_Controller_DMI_Control_Pkg(
  /* DMI_Control_Pkg::DMI_Controller::MousePressed */ kcg_bool MousePressed,
  /* DMI_Control_Pkg::DMI_Controller::VisibleGradients */ array_bool_12 *VisibleGradients,
  /* DMI_Control_Pkg::DMI_Controller::Brake */ kcg_real Brake,
  /* DMI_Control_Pkg::DMI_Controller::keypad_fromDisplay */ array_bool_12 *keypad_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::DriverID_Ack_fromDisplay */ kcg_bool DriverID_Ack_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::DMI_entry_request */ DMI_Entry_Request_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_entry_request,
  /* DMI_Control_Pkg::DMI_Controller::TrainRN_Ack_fromDisplay */ kcg_bool TrainRN_Ack_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::DMI_identifier_request */ DMI_Identifier_Request_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_identifier_request,
  /* DMI_Control_Pkg::DMI_Controller::DMI_menu_request */ DMI_Menu_Request_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_menu_request,
  /* DMI_Control_Pkg::DMI_Controller::confirmTrainData_fromDisplay */ kcg_bool confirmTrainData_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::openTrainDataWindow_fromDisplay */ kcg_bool openTrainDataWindow_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::DMI_dynamic */ DMI_Dynamic_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_dynamic,
  /* DMI_Control_Pkg::DMI_Controller::startRequest_fromDisplay */ kcg_bool startRequest_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::DMI_text_message */ DMI_Text_Message_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_text_message,
  /* DMI_Control_Pkg::DMI_Controller::DMI_train_data */ DMI_Train_Data_T_DMI_Messages_Bothways_Pkg *DMI_train_data,
  /* DMI_Control_Pkg::DMI_Controller::traindataAck_fromDisplay */ kcg_bool traindataAck_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::traindataYesAck_fromDisplay */ kcg_bool traindataYesAck_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::traindataNoAck_fromDisplay */ kcg_bool traindataNoAck_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::SystemTime */ T_internal_Type_Obu_BasicTypes_Pkg SystemTime,
  /* DMI_Control_Pkg::DMI_Controller::textMsgAck_fromDisplay */ kcg_bool textMsgAck_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::openDriverID_fromDisplay */ kcg_bool openDriverID_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::openTrainRN_fromDisplay */ kcg_bool openTrainRN_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::closeButton_fromDisplay */ kcg_bool closeButton_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::TIU_trainStatus */ TIU_trainStatus_T_TIU_Types_Pkg *TIU_trainStatus,
  /* DMI_Control_Pkg::DMI_Controller::DMI_icons */ DMI_Icons_T_DMI_Messages_EVC_to_DMI_Pkg *DMI_icons,
  /* DMI_Control_Pkg::DMI_Controller::brakeStatusSymbolAck_fromDisplay */ kcg_bool brakeStatusSymbolAck_fromDisplay,
  /* DMI_Control_Pkg::DMI_Controller::C1AreaAck_fromDisplay */ kcg_bool C1AreaAck_fromDisplay,
  outC_DMI_Controller_DMI_Control_Pkg *outC);

extern void DMI_Controller_reset_DMI_Control_Pkg(
  outC_DMI_Controller_DMI_Control_Pkg *outC);
extern void DMI_Controller_init_DMI_Control_Pkg(
  outC_DMI_Controller_DMI_Control_Pkg *outC);

#endif /* _DMI_Controller_DMI_Control_Pkg_H_ */
/* $************* KCG Version 6.4 beta5 (build i13) *************
** DMI_Controller_DMI_Control_Pkg.h
** Generation date: 2015-04-24T11:00:59
*************************************************************$ */

